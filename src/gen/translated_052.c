#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_006c0430 */
byte F_006c0430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c0430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)((undefined1)param_2)) {
  default: ;
    return 0;
  case 3: ;
  case 4: ;
  case 5: ;
  case 6: ;
  case 10: ;
    return 1;
  }
}

/* ref: FUN_006c0470 */
byte F_006c0470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c0470u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_2[0x21];
  if ((iVar1 != -0x20000000) && (iVar1 != *(int *)(param_1 + 0x74))) {
    iVar4 = 0;
    if (REFG(undefined1, 0x1338ad4) != 0) {
      do {
        piVar2 = (int *)F_00ae0850(&REFG(undefined, 0x1336e40),iVar4);
        if ((piVar2 != (int *)0x0) && (*piVar2 == iVar1)) {
          return 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)(uint)REFG(undefined1, 0x1338ad4));
    }
    uVar3 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
    if ((char)uVar3 == '\x02') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006c04e0 */
byte F_006c04e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c04e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_2) {
      if (iVar3 < 0) {
        return 0;
      }
      return *(byte *)(iVar2 + 6);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_006c0510 */
byte F_006c0510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c0510u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  byte bVar1;
  
  bVar1 = F_00a50620();
  if (bVar1 == 0) {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x15bb);
  *param_2 = bVar1 & 0xf;
  *param_3 = bVar1 >> 4;
  return 1;
}

/* ref: FUN_006c0540 */
byte F_006c0540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c0540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  byte bVar1;
  
  bVar1 = F_00a50620();
  if (bVar1 == 0) {
    return 0;
  }
  *(byte *)(param_3 + 0x15bb) = (byte)param_1 & 0xf | (char)param_2 << 4;
  return 1;
}

/* ref: FUN_006c0570 */
byte F_006c0570(unsigned int gen_a0)
{
  GEN_ENTER(0x6c0570u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(uint *)((int)&REFG(undefined4, 0x10b6d3c) + uVar1) == ((ushort)param_1 | 0x10000)) {
      return 1;
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x24);
  return 0;
}

/* ref: FUN_006c05a0 */
byte F_006c05a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c05a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort * puVar4;
  
  iVar3 = 0;
  puVar4 = (ushort *)(param_1 + 0x13b8);
  do {
    uVar1 = *puVar4;
    if (uVar1 != 0) {
      uVar2 = 0;
      do {
        if (*(uint *)((int)&REFG(undefined4, 0x10b6d3c) + uVar2) == (uVar1 | 0x10000)) {
          if (uVar1 != (ushort)param_2) {
            return 1;
          }
          break;
        }
        uVar2 = uVar2 + 4;
      } while (uVar2 < 0x24);
    }
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 8;
    if (0x1d < iVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_006c0600 */
uint F_006c0600(unsigned int gen_a0)
{
  GEN_ENTER(0x6c0600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint * this_00;
  int iVar4;
  ulonglong uVar5;
  undefined4 * puVar6;
  undefined * PTR32 * ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  F_0042b630(((undefined1 *)(gen_frame + 0x0)));
  F_0042b630(((undefined1 *)(gen_frame + 0x54)));
  F_00ab0230(0xd49,((undefined1 *)(gen_frame + 0x0)));
  F_00ab0230(0xd4a,((undefined1 *)(gen_frame + 0x54)));
  *(undefined * PTR32 *)&REFG(undefined, 0x13241b0) = this;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  (*(undefined4 *)(gen_frame + 0xa8)) = 0;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0;
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc0)) = 0;
  (*(undefined4 *)(gen_frame + 0xc8)) = 0;
  (*(undefined4 *)(gen_frame + 0xd0)) = 0;
  (*(undefined4 *)(gen_frame + 0xd8)) = 0;
  (*(undefined4 *)(gen_frame + 0xe0)) = 0;
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x0)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xa8)),6);
  (*(uint *)(gen_frame + 0xac)) = uVar2;
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x54)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xb0)),6);
  (*(uint *)(gen_frame + 0xb4)) = uVar2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xb8)),4);
  uVar8 = *(undefined4 *)((int)this + 0x108);
  (*(undefined4 *)(gen_frame + 0xbc)) = 1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc0)),4);
  (*(undefined4 *)(gen_frame + 0xc4)) = uVar8;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc8)),4);
  (*(undefined4 *)(gen_frame + 0xcc)) = 1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xd0)),6);
  uVar11 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0xd4)) = &REFG(undefined, 0x10b3a5f);
  uVar10 = 0;
  uVar8 = 0x162;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
  uVar2 = F_0043bd00(pvVar3,uVar8,uVar10,uVar11);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xd8)),6);
  uVar12 = 4;
  (*(uint *)(gen_frame + 0xdc)) = uVar2;
  uVar9 = 0;
  ppuVar7 = &REFG(undefined * PTR32, 0x13241ac);
  puVar6 = &(*(undefined4 *)(gen_frame + 0xa8));
  uVar11 = 8;
  uVar10 = 0xe;
  uVar8 = REFG(undefined4, 0x1324194);
  pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  REFG(undefined4, 0x13241b4) = F_008668b0(pvVar3,uVar10,uVar11,puVar6,ppuVar7,uVar9,uVar8,uVar12);
  this_00 = &(*(uint *)(gen_frame + 0xe8));
  iVar4 = 7;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return (uint)uVar5;
}

/* ref: Client::Game::Event::ShopEventHandler::vf110 */
uint F_006c07d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c07d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10b3a63),REFG(undefined4, 0x108cc50));
  bVar1 = F_0042ac50(this + 0x10c,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if (bVar1 != 0) {
    uVar2 = F_00ab0230(0xf2b,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return uVar2;
  }
  uVar2 = F_0042ccf0(param_1,this + 0x10c);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_006c0860 */
unsigned int F_006c0860(unsigned int gen_a0)
{
  GEN_ENTER(0x6c0860u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (REFG(int, 0x1488760) != 0) {
    *(undefined1 *)(REFG(int, 0x1488760) + 0x1bfd) = (undefined1)param_1;
  }
  return 0;
}

/* ref: FUN_006c0880 */
byte F_006c0880(unsigned int gen_a0)
{
  GEN_ENTER(0x6c0880u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  undefined1 * puVar4;
  undefined * puVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if (REFG(int, 0x1488760) != 0) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    F_0042b630(((undefined1 *)(gen_frame + 0x54)));
    if ((byte)param_1 == 0) {
      puVar5 = &REFG(undefined, 0x10b6e04);
    }
    else {
      puVar5 = &REFG(undefined, 0x10b6de8);
    }
    F_0042e3f0(((undefined1 *)(gen_frame + 0x54)),puVar5);
    uVar6 = 0;
    puVar4 = ((undefined1 *)(gen_frame + 0x54));
    uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x10b3a66),REFG(undefined4, 0x108cc50));
    uVar3 = 0x39;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_00459b00(this,uVar3,uVar2,puVar4,uVar6);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x54)));
    F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
    return (byte)param_1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac) ^ (uint)(uint)(gen_frame + 0xac));
  return (byte)param_1;
}

/* ref: FUN_006c0940 */
uint F_006c0940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c0940u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (uint)(((uint)(byte)param_2 * param_1) % 100 != 0) + ((uint)(byte)param_2 * param_1) / 100
  ;
  if ((char)param_3 != '\0') {
    uVar1 = (uint)((uVar1 * 0xb) % 10 != 0) + (uVar1 * 0xb) / 10;
  }
  return uVar1;
}

/* ref: FUN_006c0980 */
uint F_006c0980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c0980u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * this;
  byte bVar4;
  ushort * puVar5;
  
  pvVar2 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),param_2);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  pvVar2 = (undefined *)F_00a37da0(pvVar2,param_3);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  bVar4 = 0;
  (*(byte *)(gen_frame + 0xb)) = 0;
  (*(uint *)(gen_frame + 0x7)) = (*(uint *)(gen_frame + 0x7)) & 0xffffff00;
  puVar5 = (ushort *)((int)pvVar2 + 0x20);
  do {
    if (*(char *)((int)pvVar2 + 6) == '\0') {
LAB_006c09e9: ;
      uVar1 = *puVar5;
    }
    else {
      uVar3 = F_00a3a860(pvVar2);
      if (uVar3 == 0) goto LAB_006c09e9;
      uVar3 = (*(uint *)(gen_frame + 0x7));
      this = (undefined *)F_00a3a860(pvVar2);
      uVar1 = F_0071d2c0(this,uVar3);
    }
    if (uVar1 != 0) {
      (*(byte *)(gen_frame + 0xb)) = (*(byte *)(gen_frame + 0xb)) + 1;
    }
    bVar4 = bVar4 + 1;
    puVar5 = puVar5 + 1;
    (*(uint *)(gen_frame + 0x7)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x7)), 1, 3),bVar4);
    if (4 < bVar4) {
      uVar3 = ((*(byte *)(gen_frame + 0xb)) + 10) * param_1;
      return (uint)(uVar3 % 10 != 0) + uVar3 / 10;
    }
  } while( true );
}

/* ref: FUN_006c0a30 */
uint F_006c0a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6c0a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this;
  uint uVar2;
  int iVar3;
  
  this = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),param_3);
  if (this == (undefined *)0x0) {
    return 0;
  }
  uVar2 = F_00a37da0(this,param_4);
  if (uVar2 == 0) {
    return 0;
  }
  uVar1 = (param_2 & 0xff) * param_1;
  iVar3 = (uint)(uVar1 % 100 != 0) + uVar1 / 100;
  if ((*(byte *)(uVar2 + 0x14) & 1) != 0) {
    iVar3 = (uint)((uint)(iVar3 * 0xb) % 10 != 0) + (uint)(iVar3 * 0xb) / 10;
  }
  uVar2 = F_006c0980(iVar3,param_3,param_4);
  return uVar2;
}

/* ref: Client::Game::Event::ShopEventHandler::vf50 */
byte F_006c0ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c0ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x890];
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  undefined4 uVar7;
  undefined1 * puVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x888)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x88c);
  if ((byte)param_4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *param_3;
  }
  if ((byte)param_4 < 2) {
    iVar5 = 0;
  }
  else {
    iVar5 = param_3[1];
  }
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  F_0042b630(((undefined1 *)(gen_frame + 0x834)));
  if (REFG(int, 0x1488760) == 0) {
switchD_006c0b14_default: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x834)));
    F_00c47745((*(uint *)(gen_frame + 0x888)) ^ (uint)(uint)(gen_frame + 0x88c));
    return 0;
  }
  switch((unsigned int)(uintptr_t)((undefined2)param_2)) {
  case 0: ;
    F_0042e3f0(((undefined1 *)(gen_frame + 0x834)),&REFG(undefined, 0x10b6e24));
    uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x498)),&REFG(undefined, 0x10b6e3c),iVar4);
    uVar3 = F_0042cd30(((undefined1 *)(gen_frame + 0x834)),((undefined1 *)(gen_frame + 0x54)),uVar3);
    F_0042ccf0(((undefined1 *)(gen_frame + 0x834)),uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x54)));
    F_0042c880(((undefined1 *)(gen_frame + 0x498)));
    F_0042e170(((undefined1 *)(gen_frame + 0x690)),&REFG(undefined, 0x10b6e40));
    uVar3 = F_0042cd30(((undefined1 *)(gen_frame + 0x834)),((undefined1 *)(gen_frame + 0x1f8)),((undefined1 *)(gen_frame + 0x690)));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x834)),uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x1f8)));
    F_0042c880(((undefined1 *)(gen_frame + 0x690)));
    break;
  case 1: ;
    F_0042e3f0(((undefined1 *)(gen_frame + 0x834)),&REFG(undefined, 0x10b6e58));
    uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x540)),&REFG(undefined, 0x10b6e70),iVar4);
    uVar3 = F_0042cd30(((undefined1 *)(gen_frame + 0x834)),((undefined1 *)(gen_frame + 0x3f0)),uVar3);
    F_0042ccf0(((undefined1 *)(gen_frame + 0x834)),uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x3f0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x540)));
    F_0042e170(((undefined1 *)(gen_frame + 0x5e8)),&REFG(undefined, 0x10b6e74));
    uVar3 = F_0042cd30(((undefined1 *)(gen_frame + 0x834)),((undefined1 *)(gen_frame + 0x348)),((undefined1 *)(gen_frame + 0x5e8)));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x834)),uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x348)));
    F_0042c880(((undefined1 *)(gen_frame + 0x5e8)));
    break;
  case 2: ;
    F_0042e3f0(((undefined1 *)(gen_frame + 0x834)),&REFG(undefined, 0x10b6e88));
    uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x2a0)),&REFG(undefined, 0x10b6e9c),iVar4);
    uVar3 = F_0042cd30(((undefined1 *)(gen_frame + 0x834)),((undefined1 *)(gen_frame + 0x150)),uVar3);
    F_0042ccf0(((undefined1 *)(gen_frame + 0x834)),uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x150)));
    F_0042c880(((undefined1 *)(gen_frame + 0x2a0)));
    F_0042e170(((undefined1 *)(gen_frame + 0x78c)),&REFG(undefined, 0x10b6ea0));
    uVar3 = F_0042cd30(((undefined1 *)(gen_frame + 0x834)),((undefined1 *)(gen_frame + 0xa8)),((undefined1 *)(gen_frame + 0x78c)));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x834)),uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0xa8)));
    F_0042c880(((undefined1 *)(gen_frame + 0x78c)));
    break;
  case 3: ;
    F_0042ccf0(((undefined1 *)(gen_frame + 0x834)),iVar4 * 0x7c + 0x184 + REFG(int, 0x1488760));
    F_0042e170(((undefined1 *)(gen_frame + 0x738)),&REFG(undefined, 0x10b6eb8));
    uVar3 = F_0042cd30(((undefined1 *)(gen_frame + 0x834)),((undefined1 *)(gen_frame + 0x4ec)),((undefined1 *)(gen_frame + 0x738)));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x834)),uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x4ec)));
    F_0042c880(((undefined1 *)(gen_frame + 0x738)));
    uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x39c)),&REFG(undefined, 0x10b6ec8),iVar5);
    uVar3 = F_0042cd30(((undefined1 *)(gen_frame + 0x834)),((undefined1 *)(gen_frame + 0x444)),uVar3);
    F_0042ccf0(((undefined1 *)(gen_frame + 0x834)),uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x444)));
    F_0042c880(((undefined1 *)(gen_frame + 0x39c)));
    F_0042e170(((undefined1 *)(gen_frame + 0x6e4)),&REFG(undefined, 0x10b6ecc));
    uVar3 = F_0042cd30(((undefined1 *)(gen_frame + 0x834)),((undefined1 *)(gen_frame + 0x2f4)),((undefined1 *)(gen_frame + 0x6e4)));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x834)),uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x2f4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x6e4)));
    break;
  case 4: ;
    F_0042ccf0(((undefined1 *)(gen_frame + 0x834)),iVar4 * 0x7c + 0x184 + REFG(int, 0x1488760));
    F_0042e170(((undefined1 *)(gen_frame + 0x63c)),&REFG(undefined, 0x10b6ee0));
    uVar3 = F_0042cd30(((undefined1 *)(gen_frame + 0x834)),((undefined1 *)(gen_frame + 0x24c)),((undefined1 *)(gen_frame + 0x63c)));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x834)),uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x24c)));
    F_0042c880(((undefined1 *)(gen_frame + 0x63c)));
    uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0xfc)),&REFG(undefined, 0x10b6ef0),iVar5);
    uVar3 = F_0042cd30(((undefined1 *)(gen_frame + 0x834)),((undefined1 *)(gen_frame + 0x1a4)),uVar3);
    F_0042ccf0(((undefined1 *)(gen_frame + 0x834)),uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x1a4)));
    F_0042c880(((undefined1 *)(gen_frame + 0xfc)));
    F_0042e170(((undefined1 *)(gen_frame + 0x594)),&REFG(undefined, 0x10b6ef4));
    uVar3 = F_0042cd30(((undefined1 *)(gen_frame + 0x834)),((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x594)));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x834)),uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x594)));
    break;
  case 5: ;
    F_0042e3f0(((undefined1 *)(gen_frame + 0x834)),&REFG(undefined, 0x10b6f08));
    break;
  case 6: ;
    F_0042e3f0(((undefined1 *)(gen_frame + 0x834)),&REFG(undefined, 0x10b6f24));
    if ((byte)param_4 != 0) {
      iVar4 = 0;
      uVar3 = (uint)(byte)param_4;
      piVar6 = param_3;
      do {
        F_0042e360(((undefined1 *)(gen_frame + 0x834)),iVar4 + 0x184 + REFG(int, 0x1488760));
        uVar2 = F_0042ce40(((undefined1 *)(gen_frame + 0x7e0))," :  %u\n",*piVar6);
        F_0042e360(((undefined1 *)(gen_frame + 0x834)),uVar2);
        F_0042c880(((undefined1 *)(gen_frame + 0x7e0)));
        iVar4 = iVar4 + 0x7c;
        piVar6 = piVar6 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    break;
  default: ;
    goto switchD_006c0b14_default;
  }
  uVar9 = 0;
  puVar8 = ((undefined1 *)(gen_frame + 0x834));
  uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x7e0)),&REFG(undefined, 0x10b3a67),REFG(undefined4, 0x108cc50));
  uVar7 = 0x39;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  F_00459b00(this_00,uVar7,uVar3,puVar8,uVar9);
  F_0042c880(((undefined1 *)(gen_frame + 0x7e0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x834)));
  F_00c47745((*(uint *)(gen_frame + 0x888)) ^ (uint)(uint)(gen_frame + 0x88c));
  return 1;
}

/* ref: FUN_006c0fc0 */
uint F_006c0fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c0fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1f0];
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  byte bVar3;
  uint * this_01;
  int iVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  undefined * PTR32 * ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x1e8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ec);
  *(undefined * PTR32 *)&REFG(undefined, 0x1324180) = this;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  ((undefined4 *)(gen_frame + 0x1a8))[0] = 0;
  (*(undefined4 *)(gen_frame + 0x1b0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1b8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1e0)) = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x4)));
  F_0042b630(((undefined1 *)(gen_frame + 0xac)));
  F_0042b630(((undefined1 *)(gen_frame + 0x58)));
  F_0042b630(((undefined1 *)(gen_frame + 0x100)));
  F_0042b630(((undefined1 *)(gen_frame + 0x154)));
  F_00ab0230(0xf2c,((undefined1 *)(gen_frame + 0x4)));
  F_00ab0230(0xf2d,((undefined1 *)(gen_frame + 0xac)));
  F_00ab0230(0xf2e,((undefined1 *)(gen_frame + 0x58)));
  F_00ab0230(0xf2f,((undefined1 *)(gen_frame + 0x100)));
  F_00ab0230(0xf30,((undefined1 *)(gen_frame + 0x154)));
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1b8)),6);
  (*(uint *)(gen_frame + 0x1bc)) = uVar2;
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0xac)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)),6);
  (*(uint *)(gen_frame + 0x1cc)) = uVar2;
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x58)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)),6);
  bVar3 = 0;
  (*(uint *)(gen_frame + 0x1d4)) = uVar2;
  (*(char *)(gen_frame + 0x3)) = '\0';
  if (*(uint *)((int)this + 0x1bd4) != 0) {
    uVar2 = 0;
    do {
      if (*((int *)GEN_TOP(((uVar2 + 0x21) * 0xa8 + (int)this))) == *(int *)((int)this + 8)) {
        (*(char *)(gen_frame + 0x3)) = (*(char *)(gen_frame + 0x3)) + '\x01';
      }
      bVar3 = bVar3 + 1;
      uVar2 = (uint)bVar3;
    } while (uVar2 < *(uint *)((int)this + 0x1bd4));
    if ((*(char *)(gen_frame + 0x3)) != '\0') {
      uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x100)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d8)),6);
      (*(uint *)(gen_frame + 0x1dc)) = uVar2;
      uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x154)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x1e0)),6);
      bVar3 = 8;
      (*(uint *)(gen_frame + 0x1e4)) = uVar2;
      goto LAB_006c1181;
    }
  }
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x154)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d8)),6);
  (*(uint *)(gen_frame + 0x1dc)) = uVar2;
  bVar3 = 7;
LAB_006c1181: ;
  uVar10 = 4;
  uVar9 = 0;
  uVar8 = 0;
  ppuVar7 = &REFG(undefined * PTR32, 0x132417c);
  uVar2 = (uint)bVar3;
  puVar6 = ((undefined4 *)(gen_frame + 0x1a8));
  uVar5 = 0xc;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  *(uint *)&REFG(undefined, 0x1324184) = F_008668b0(this_00,uVar5,uVar2,puVar6,ppuVar7,uVar8,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0x154)));
  F_0042c880(((undefined1 *)(gen_frame + 0x100)));
  F_0042c880(((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0xac)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  this_01 = &(*(uint *)(gen_frame + 0x1e8));
  iVar4 = 7;
  do {
    this_01 = this_01 + -2;
    uVar2 = F_005a2670(this_01);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x1e8)) ^ (uint)(uint)(gen_frame + 0x1ec));
  return uVar2;
}

/* ref: FUN_006c1210 */
uint F_006c1210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c1210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined * PTR32 * ppuVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  *(undefined * PTR32 *)&REFG(undefined, 0x13241c0) = this;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar16 = 0;
  uVar15 = 0;
  uVar14 = 1;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 4;
  uVar7 = 0;
  uVar6 = 0;
  ppuVar5 = &REFG(undefined * PTR32, 0x13241bc);
  uVar4 = 0;
  uVar3 = 0;
  uVar8 = REFG(undefined4, 0x1324194);
  uVar2 = F_0042a990(param_1);
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  uVar2 = F_00866a60(this_00,uVar2,uVar3,uVar4,ppuVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
                       uVar12,uVar13,uVar14,uVar15,uVar16);
  REFG(undefined4, 0x13241c4) = uVar2;
  return uVar2;
}

/* ref: FUN_006c1270 */
uint F_006c1270(unsigned int gen_a0)
{
  GEN_ENTER(0x6c1270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xca0];
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  undefined * this_00;
  byte bVar5;
  int iVar6;
  byte bVar7;
  uint * this_01;
  int * piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined * PTR32 * ppuVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  (*(uint *)(gen_frame + 0xc98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc9c);
  *(undefined * PTR32 *)&REFG(undefined, 0x1324190) = this;
  *(undefined1 *)((int)this + 0x1bf8) = 0;
  uVar1 = F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (uVar1 != 0) {
    puVar2 = ((undefined4 *)(gen_frame + 0x118));
    iVar6 = 0x16f;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    bVar5 = *(byte *)((int)this + 0x1bf1);
    F_005a2710(((undefined1 *)(gen_frame + 0x120)),4);
    (*(uint *)(gen_frame + 0x124)) = (uint)bVar5;
    (*(int *)(gen_frame + 0xc)) = 0;
    if (0 < *(int *)((int)this + 0x1bd0)) {
      piVar4 = ((int *)(gen_frame + 0xa14));
      piVar8 = (int *)((int)this + 0x164);
      do {
        if (0x28 < (*(int *)(gen_frame + 0xc))) break;
        (*(uint *)(gen_frame + 0x14)) = 0;
        uVar3 = F_00a3ace0(&REFG(undefined, 0x14a4230));
        if (1 < (uint)piVar8[5]) {
          if ((piVar8[1] == 0) || ((*(uint *)(gen_frame + 0x14)) = uVar3 / (uint)piVar8[1], 99 < (*(uint *)(gen_frame + 0x14)))) {
            (*(uint *)(gen_frame + 0x14)) = 99;
          }
          (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) | 0x80000000;
        }
        iVar6 = *piVar8;
        if ((char)piVar8[0x1d] != '\0') {
          iVar6 = iVar6 + 1000000;
        }
        F_005a2710(piVar4 + -1,4);
        *piVar4 = iVar6;
        uVar3 = F_0042a990(piVar8 + 8);
        F_005a2710(piVar4 + -0x231,6);
        piVar4[-0x230] = uVar3;
        iVar6 = piVar8[1];
        F_005a2710(piVar4 + -0x1e1,4);
        piVar4[-0x1e0] = iVar6;
        iVar6 = piVar8[4];
        F_005a2710(piVar4 + -0x191,4);
        piVar4[-400] = iVar6;
        iVar6 = piVar8[6];
        F_005a2710(piVar4 + -0x141,4);
        piVar4[-0x140] = iVar6;
        F_005a2710(piVar4 + -0xf1,4);
        piVar4[-0xf0] = 0;
        F_005a2710(piVar4 + -0x51,4);
        piVar4[-0x50] = (*(uint *)(gen_frame + 0x14));
        F_005a2710(piVar4 + -0xa1,4);
        piVar4[-0xa0] = 0;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
        piVar8 = piVar8 + 0x1f;
        piVar4 = piVar4 + 2;
      } while ((*(int *)(gen_frame + 0xc)) < *(int *)((int)this + 0x1bd0));
    }
    F_005a2710(((undefined4 *)(gen_frame + 0x118)),4);
    uVar3 = 0;
    bVar7 = 0;
    bVar5 = 0;
    ((undefined4 *)(gen_frame + 0x118))[1] = 0;
    (*(byte *)(gen_frame + 0x1b)) = 0;
    if (*(int *)((int)this + 0x1bd4) != 0) {
      do {
        if (*((int *)GEN_TOP(((uVar3 + 0x21) * 0xa8 + (int)this))) == *(int *)((int)this + 8)) {
          bVar7 = bVar7 + 1;
        }
        bVar5 = bVar5 + 1;
        uVar3 = (uint)bVar5;
        (*(byte *)(gen_frame + 0x1b)) = bVar7;
      } while (uVar3 < *(uint *)((int)this + 0x1bd4));
    }
    uVar9 = *(undefined4 *)((int)this + 0x1bd0);
    F_005a2710(((undefined1 *)(gen_frame + 0x128)),4);
    (*(undefined4 *)(gen_frame + 0x12c)) = uVar9;
    F_005a2710(((undefined1 *)(gen_frame + 0x130)),4);
    (*(uint *)(gen_frame + 0x134)) = (uint)(*(byte *)(gen_frame + 0x1b));
    F_0042b630(((undefined1 *)(gen_frame + 0x70)));
    F_00ab0230(0xd4b,((undefined1 *)(gen_frame + 0x70)));
    F_0042b630(((undefined1 *)(gen_frame + 0x1c)));
    F_00ab0230(0xd4c,((undefined1 *)(gen_frame + 0x1c)));
    F_0042b630(((undefined1 *)(gen_frame + 0xc4)));
    F_00ab0230(0xd4d,((undefined1 *)(gen_frame + 0xc4)));
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x70)));
    F_005a2710(((undefined1 *)(gen_frame + 0x138)),6);
    (*(uint *)(gen_frame + 0x13c)) = uVar3;
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x1c)));
    F_005a2710(((undefined1 *)(gen_frame + 0x140)),6);
    (*(uint *)(gen_frame + 0x144)) = uVar3;
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0xc4)));
    F_005a2710(((undefined1 *)(gen_frame + 0x148)),6);
    (*(uint *)(gen_frame + 0x14c)) = uVar3;
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar14 = 4;
    uVar13 = 0;
    uVar12 = 0;
    ppuVar11 = &REFG(undefined * PTR32, 0x132418c);
    puVar2 = ((undefined4 *)(gen_frame + 0x118));
    uVar10 = 0x170;
    uVar9 = 0x1a;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4)));
    REFG(undefined4, 0x1324194) = F_008668b0(this_00,uVar9,uVar10,puVar2,ppuVar11,uVar12,uVar13,uVar14);
    F_00a6e080(&REFG(undefined, 0x14a9e40),0x14,0,0);
    F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
    F_0042c880(((undefined1 *)(gen_frame + 0x70)));
    this_01 = &(*(uint *)(gen_frame + 0xc98));
    iVar6 = 0x16f;
    do {
      this_01 = this_01 + -2;
      uVar3 = F_005a2670(this_01);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc98)) ^ (uint)(uint)(gen_frame + 0xc9c));
  return uVar3;
}

/* ref: FUN_006c1620 */
uint F_006c1620(unsigned int gen_a0)
{
  GEN_ENTER(0x6c1620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xba0];
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int * piVar5;
  undefined * this_00;
  int * piVar6;
  byte bVar7;
  int iVar8;
  byte bVar9;
  uint * this_01;
  int * piVar10;
  undefined4 uVar11;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb9c);
  (*(uint *)(gen_frame + 0xb98)) = uVar2;
  if (*(char *)((int)this + 0x1bf8) == '\0') {
    *(undefined * PTR32 *)&REFG(undefined, 0x1324190) = this;
    uVar3 = F_00424750(REFG(undefined4, 0x137104c));
    uVar2 = 0;
    if (uVar3 != 0) {
      puVar4 = ((undefined4 *)(gen_frame + 0x18));
      iVar8 = 0x16f;
      do {
        *puVar4 = 0;
        puVar4 = puVar4 + 2;
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
      bVar9 = 0;
      bVar7 = 0;
      (*(byte *)(gen_frame + 0x13)) = 0;
      if (*(int *)((int)this + 0x1bd4) != 0) {
        uVar2 = 0;
        do {
          if (*((int *)GEN_TOP(((uVar2 + 0x21) * 0xa8 + (int)this))) == *(int *)((int)this + 8)) {
            bVar9 = bVar9 + 1;
          }
          bVar7 = bVar7 + 1;
          uVar2 = (uint)bVar7;
          (*(byte *)(gen_frame + 0x13)) = bVar9;
        } while (uVar2 < *(uint *)((int)this + 0x1bd4));
      }
      bVar7 = *(byte *)((int)this + 0x1bf1);
      F_005a2710(((undefined1 *)(gen_frame + 0x20)),4);
      (*(uint *)(gen_frame + 0x24)) = (uint)bVar7;
      uVar11 = *(undefined4 *)((int)this + 0x1bd0);
      F_005a2710(((undefined1 *)(gen_frame + 0x28)),4);
      (*(undefined4 *)(gen_frame + 0x2c)) = uVar11;
      F_005a2710(((undefined1 *)(gen_frame + 0x30)),4);
      (*(uint *)(gen_frame + 0x34)) = (uint)(*(byte *)(gen_frame + 0x13));
      (*(int *)(gen_frame + 0x8)) = 0;
      if (0 < *(int *)((int)this + 0x1bd0)) {
        piVar6 = ((int *)(gen_frame + 0x914));
        piVar10 = (int *)((int)this + 0x164);
        do {
          if (0x28 < (*(int *)(gen_frame + 0x8))) break;
          (*(uint *)(gen_frame + 0xc)) = 0;
          uVar2 = F_00a3ace0(&REFG(undefined, 0x14a4230));
          if (1 < (uint)piVar10[5]) {
            if ((piVar10[1] == 0) || ((*(uint *)(gen_frame + 0xc)) = uVar2 / (uint)piVar10[1], 99 < (*(uint *)(gen_frame + 0xc)))) {
              (*(uint *)(gen_frame + 0xc)) = 99;
            }
            (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) | 0x80000000;
          }
          if ((char)piVar10[0x1d] == '\0') {
            iVar8 = *piVar10;
            F_005a2710(piVar6 + -1,4);
            *piVar6 = iVar8;
          }
          else {
            iVar8 = *piVar10;
            F_005a2710(piVar6 + -1,4);
            *piVar6 = iVar8 + 1000000;
          }
          uVar2 = F_0042a990(piVar10 + 8);
          F_005a2710(piVar6 + -0x231,6);
          iVar8 = piVar10[1];
          piVar6[-0x230] = uVar2;
          F_005a2710(piVar6 + -0x1e1,4);
          iVar1 = piVar10[4];
          piVar6[-0x1e0] = iVar8;
          F_005a2710(piVar6 + -0x191,4);
          iVar8 = piVar10[6];
          piVar6[-400] = iVar1;
          F_005a2710(piVar6 + -0x141,4);
          piVar6[-0x140] = iVar8;
          F_005a2710(piVar6 + -0xf1,4);
          piVar6[-0xf0] = 0;
          F_005a2710(piVar6 + -0x51,4);
          piVar6[-0x50] = (*(uint *)(gen_frame + 0xc));
          if (*(int *)((int)this + 0x1bd8) == (*(int *)(gen_frame + 0x8))) {
            iVar8 = *(int *)((int)this + 0x1be4);
            F_005a2710(piVar6 + -0xa1,4);
            iVar1 = *(int *)((int)this + 0x1be4);
            piVar6[-0xa0] = iVar8;
            if (iVar1 != 0) {
              piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
              uVar11 = 0x2d3;
              this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5)));
              F_0046a630(this_00,uVar11);
            }
          }
          else {
            F_005a2710(piVar6 + -0xa1,4);
            piVar6[-0xa0] = 0;
          }
          (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          piVar10 = piVar10 + 0x1f;
          piVar6 = piVar6 + 2;
        } while ((*(int *)(gen_frame + 0x8)) < *(int *)((int)this + 0x1bd0));
      }
      piVar6 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6)));
      ((code *)*(gen_code32 *)(*piVar6 + 0x5c))(piVar6,REFG(undefined4, 0x1324194),0x170,((undefined4 *)(gen_frame + 0x18)));
      if (*(int *)((int)this + 0x1be4) != 0) {
        F_00a6e080(&REFG(undefined, 0x14a9e40),0x15,0x32,0);
      }
      *(undefined4 *)((int)this + 0x1be4) = 0;
      this_01 = &(*(uint *)(gen_frame + 0xb98));
      iVar8 = 0x16f;
      do {
        this_01 = this_01 + -2;
        uVar2 = F_005a2670(this_01);
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xb98)) ^ (uint)(uint)(gen_frame + 0xb9c));
  return uVar2;
}

/* ref: FUN_006c1990 */
uint F_006c1990(unsigned int gen_a0)
{
  GEN_ENTER(0x6c1990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xca0];
  byte bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint uVar7;
  int * piVar8;
  undefined * pvVar9;
  int iVar10;
  uint * puVar11;
  undefined4 uVar12;
  undefined * PTR32 * ppuVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  (*(uint *)(gen_frame + 0xc98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc9c);
  *(undefined * PTR32 *)&REFG(undefined, 0x1324190) = this;
  *(undefined1 *)((int)this + 0x1bf8) = 1;
  uVar5 = F_00424750(REFG(undefined4, 0x137104c));
  uVar7 = 0;
  if (uVar5 != 0) {
    puVar6 = ((undefined4 *)(gen_frame + 0x118));
    iVar10 = 0x16f;
    do {
      *puVar6 = 0;
      puVar6 = puVar6 + 2;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
    bVar4 = false;
    (*(uint *)(gen_frame + 0x14)) = 0;
    (*(uint *)(gen_frame + 0xc)) = 0;
    if (*(int *)((int)this + 0x1bd4) != 0) {
      puVar11 = ((uint *)(gen_frame + 0x154));
      iVar10 = (int)this + 0x154c;
      do {
        if (0x28 < (*(uint *)(gen_frame + 0x14))) break;
        if (*(int *)(iVar10 + 0x5c) == *(int *)((int)this + 8)) {
          F_005a2710(puVar11 + 0x22f,4);
          puVar11[0x230] = (*(uint *)(gen_frame + 0xc));
          uVar7 = F_0042a990(iVar10);
          F_005a2710(puVar11 + -1,6);
          *puVar11 = uVar7;
          iVar2 = *(int *)(iVar10 + -0xc);
          iVar3 = *(int *)(iVar10 + -0x10);
          F_005a2710(puVar11 + 0x4f,4);
          puVar11[0x50] = iVar2 * iVar3;
          uVar7 = *(uint *)(iVar10 + -8);
          F_005a2710(puVar11 + 0x9f,4);
          puVar11[0xa0] = uVar7;
          uVar7 = *(uint *)(iVar10 + 0x58);
          F_005a2710(puVar11 + 0xef,4);
          puVar11[0xf0] = uVar7;
          bVar1 = *(byte *)(iVar10 + 0x54);
          F_005a2710(puVar11 + 0x13f,4);
          puVar11[0x140] = (uint)bVar1;
          uVar7 = *(uint *)(iVar10 + -0x10);
          F_005a2710(puVar11 + 0x1df,4);
          puVar11[0x1e0] = uVar7;
          F_005a2710(puVar11 + 399,4);
          iVar2 = *(int *)((int)this + 0xfc);
          puVar11[400] = 0;
          if ((((iVar2 == *(int *)(iVar10 + -0x14)) && (*(int *)((int)this + 0x1be4) != 0)) &&
              (!bVar4)) && (*(int *)((int)this + 0x1be0) == 1)) {
            piVar8 = (int *)F_00424750(REFG(undefined4, 0x137104c));
            uVar16 = 0x2d3;
            pvVar9 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
            F_0046a630(pvVar9,uVar16);
            bVar4 = true;
          }
          (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 1;
          puVar11 = puVar11 + 2;
        }
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
        iVar10 = iVar10 + 0xa8;
      } while ((*(uint *)(gen_frame + 0xc)) < *(uint *)((int)this + 0x1bd4));
    }
    F_005a2710(((undefined4 *)(gen_frame + 0x118)),4);
    ((undefined4 *)(gen_frame + 0x118))[1] = 1;
    F_005a2710(((undefined1 *)(gen_frame + 0x128)),4);
    (*(uint *)(gen_frame + 0x12c)) = (*(uint *)(gen_frame + 0x14));
    F_005a2710(((undefined1 *)(gen_frame + 0x130)),4);
    (*(uint *)(gen_frame + 0x134)) = (*(uint *)(gen_frame + 0x14));
    F_0042b630(((undefined1 *)(gen_frame + 0x70)));
    F_00ab0230(0xd4b,((undefined1 *)(gen_frame + 0x70)));
    F_0042b630(((undefined1 *)(gen_frame + 0x1c)));
    F_00ab0230(0xd4c,((undefined1 *)(gen_frame + 0x1c)));
    F_0042b630(((undefined1 *)(gen_frame + 0xc4)));
    F_00ab0230(0xd4d,((undefined1 *)(gen_frame + 0xc4)));
    uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0x70)));
    F_005a2710(((undefined1 *)(gen_frame + 0x138)),6);
    (*(uint *)(gen_frame + 0x13c)) = uVar7;
    uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0x1c)));
    F_005a2710(((undefined1 *)(gen_frame + 0x140)),6);
    (*(uint *)(gen_frame + 0x144)) = uVar7;
    uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0xc4)));
    F_005a2710(((undefined1 *)(gen_frame + 0x148)),6);
    (*(uint *)(gen_frame + 0x14c)) = uVar7;
    piVar8 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (REFG(undefined4, 0x1324194) == 0) {
      uVar17 = 4;
      uVar15 = 0;
      uVar14 = 0;
      ppuVar13 = &REFG(undefined * PTR32, 0x132418c);
      puVar6 = ((undefined4 *)(gen_frame + 0x118));
      uVar12 = 0x170;
      uVar16 = 0x1a;
      pvVar9 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x1c))(piVar8)));
      REFG(undefined4, 0x1324194) = F_008668b0(pvVar9,uVar16,uVar12,puVar6,ppuVar13,uVar14,uVar15,uVar17);
    }
    else {
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x1c))(piVar8)));
      ((code *)*(gen_code32 *)(*piVar8 + 0x5c))(piVar8,REFG(undefined4, 0x1324194),0x170,((undefined4 *)(gen_frame + 0x118)));
    }
    F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
    F_0042c880(((undefined1 *)(gen_frame + 0x70)));
    puVar11 = &(*(uint *)(gen_frame + 0xc98));
    iVar10 = 0x16f;
    do {
      puVar11 = puVar11 + -2;
      uVar7 = F_005a2670(puVar11);
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc98)) ^ (uint)(uint)(gen_frame + 0xc9c));
  return uVar7;
}

/* ref: FUN_006c1d30 */
byte F_006c1d30(unsigned int gen_a0)
{
  GEN_ENTER(0x6c1d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  if (0 < *(int *)((int)this + 0x1bd0)) {
    uVar2 = 0;
    do {
      iVar4 = uVar2 * 0x7c;
      puVar3 = ((uint *)GEN_TOP(((uVar2 + 3) * 0x7c + (int)this)));
      uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),*(undefined4 *)(iVar4 + 0x164 + (int)this),
                           (uint)*(byte *)(iVar4 + 0x1d8 + (int)this),1,1);
      if (*puVar3 != uVar2) {
        uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + iVar4 + 0x164),
                             (uint)*(byte *)((int)this + iVar4 + 0x1d8),1,1);
        *puVar3 = uVar2;
        (*(int *)(gen_frame + 0x8)) = CONCAT13(1,(undefined3)(*(int *)(gen_frame + 0x8)));
      }
      bVar1 = (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 2)) + 1;
      (*(int *)(gen_frame + 0x8)) = (uint)CONCAT11((*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 3)),bVar1) << 0x10;
      uVar2 = (uint)bVar1;
    } while ((int)uVar2 < *(int *)((int)this + 0x1bd0));
  }
  bVar1 = 0;
  if (*(int *)((int)this + 0x1bd4) != 0) {
    uVar2 = 0;
    do {
      iVar4 = uVar2 * 0xa8;
      uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),*(undefined4 *)(iVar4 + 0x1538 + (int)this),
                           (uint)(*(char *)(iVar4 + 0x1548 + (int)this) == '\x01'),1,1);
      if (*(uint *)((int)this + iVar4 + 0x1544) != uVar2) {
        uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + iVar4 + 0x1538),
                             (uint)(*(char *)((int)this + iVar4 + 0x1548) == '\x01'),1,1);
        *(uint *)((int)this + iVar4 + 0x1544) = uVar2;
        (*(int *)(gen_frame + 0x8)) = 0x1000000;
      }
      bVar1 = bVar1 + 1;
      uVar2 = (uint)bVar1;
    } while (uVar2 < *(uint *)((int)this + 0x1bd4));
  }
  return (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 3));
}

/* ref: FUN_006c1e50 */
uint F_006c1e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c1e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  char * pcVar2;
  
  uVar1 = 0;
  pcVar2 = (char *)((int)this + 0x1d8);
  while ((param_1 != *(int *)(pcVar2 + -0x74) || (*pcVar2 != (char)param_2))) {
    uVar1 = uVar1 + 1;
    pcVar2 = pcVar2 + 0x7c;
    if (0x27 < (int)uVar1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}

/* ref: FUN_006c1e80 */
uint F_006c1e80(unsigned int gen_a0)
{
  GEN_ENTER(0x6c1e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint in_EAX = 0;
  int * piVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  if (*(short *)((int)this + 0x54) == 0x28) {
    uVar1 = *(uint *)((int)this + 0x1bdc);
    if (uVar1 == 1) {
      uVar3 = 0x691;
    }
    else if (uVar1 == 2) {
      uVar3 = 0x692;
    }
    else if (uVar1 == 3) {
      uVar3 = 0x693;
    }
    else if (((uVar1 == 4) || (uVar1 == 5)) || (uVar1 == 6)) {
      uVar3 = 0x694;
    }
    else if (uVar1 == 7) {
      uVar3 = 0x696;
    }
    else {
      if (uVar1 != 8) {
        return uVar1;
      }
      uVar3 = 0x695;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    in_EAX = F_0046a630(this_00,uVar3);
  }
  return in_EAX;
}

/* ref: FUN_006c1f00 */
byte F_006c1f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c1f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  bool bVar2;
  
  bVar1 = 0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    bVar2 = *(char *)((int)this + 0x14d8) == '\x01';
    break;
  case 2: ;
    if (*(char *)((int)this + 0x1bfa) == '\0') {
      return 0;
    }
    return 1;
  case 3: ;
  case 4: ;
  case 5: ;
  case 6: ;
  case 7: ;
  case 8: ;
    bVar2 = param_1 == 9 - *(int *)((int)this + 0x1530);
    break;
  default: ;
    goto switchD_006c1f11_default;
  }
  if (bVar2) {
    bVar1 = 1;
  }
switchD_006c1f11_default: ;
  return bVar1;
}

/* ref: FUN_006c1f90 */
uint F_006c1f90(unsigned int gen_a0)
{
  GEN_ENTER(0x6c1f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar1 = F_00a3ace0(&REFG(undefined, 0x14a4230));
  if (*(char *)((int)this + 0x1bf2) == '\0') {
    uVar6 = *(undefined4 *)((int)this + 0xfc);
    uVar2 = 0;
  }
  else {
    uVar6 = *(undefined4 *)((int)this + 0xfc);
    uVar2 = (uint)((*((byte *)GEN_TOP((*(int *)((int)this + 0x1bd8) * 0xa8 + 0x1548 + (int)this))) & 1) == 1);
  }
  uVar2 = F_00a40f50(&REFG(undefined, 0x14a4230),uVar6,uVar2);
  uVar3 = F_00a41080(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0xfc),1,1,1);
  uVar4 = F_00a41080(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0xfc),0,1,1);
  if (*(char *)((int)this + 0x1bf2) == '\0') {
    iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 0x1bd8) * 0x7c + 0x168 + (int)this)));
  }
  else {
    iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 0x1bd8) * 0xa8 + 0x1540 + (int)this)));
  }
  if ((*(char *)((int)this + 0x1bfa) != '\0') && (uVar3 + uVar4 != 0)) {
    return 3;
  }
  uVar3 = *(uint *)((int)this + 0x1bcc) * iVar5;
  if (uVar1 <= uVar3 && uVar3 - uVar1 != 0) {
    return 2;
  }
  if (uVar2 < *(uint *)((int)this + 0x1bcc)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006c20a0 */
uint F_006c20a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c20a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(char *)((int)this + 0x14cc) == '\0') {
    uVar3 = 8;
  }
  bVar1 = F_00a366d0(*(undefined4 *)((int)this + 0x104));
  if ((bVar1 != 0) &&
     (uVar2 = F_00a3a750(*(int *)((int)this + 0x104) + -1000,*(undefined4 *)((int)this + 0x100)),
     uVar2 != 0)) {
    return 8;
  }
  return uVar3;
}

/* ref: FUN_006c2100 */
uint F_006c2100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c2100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  undefined4 uVar5;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  pvVar3 = (undefined *)F_00763070(uVar2);
  if (pvVar3 != (undefined *)0x0) {
    if (this == (undefined *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)this + 0xf8;
    }
    F_0076a3b0(pvVar3,1,0x5d,iVar4,0,0);
  }
  uVar5 = 5;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  pvVar3 = (undefined *)F_00763050(uVar2,uVar5);
  uVar2 = 0;
  if (pvVar3 != (undefined *)0x0) {
    uVar2 = F_0089ad50(pvVar3,1,4,REFG(undefined4, 0x1324194),param_1);
  }
  return uVar2;
}

/* ref: FUN_006c2180 */
uint F_006c2180(unsigned int gen_a0)
{
  GEN_ENTER(0x6c2180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0x49;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar1 = (int *)F_00763050(uVar2,uVar3);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar2 != '\0') {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
      return uVar2;
    }
  }
  uVar2 = F_006c2100(this,1);
  return uVar2;
}

/* ref: FUN_006c21d0 */
uint F_006c21d0(void)
{
  GEN_ENTER(0x6c21d0u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  pvVar3 = (undefined *)F_00763070(uVar2);
  if (pvVar3 != (undefined *)0x0) {
    F_0076a3b0(pvVar3,1,0,0,0,0);
  }
  uVar4 = 5;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  pvVar3 = (undefined *)F_00763050(uVar2,uVar4);
  if (pvVar3 != (undefined *)0x0) {
    F_0089aef0(pvVar3,1,4);
  }
  uVar4 = 0x49;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  pvVar3 = (undefined *)F_00763050(uVar2,uVar4);
  uVar2 = 0;
  if (pvVar3 != (undefined *)0x0) {
    uVar2 = F_0076a830(pvVar3,3);
  }
  return uVar2;
}

/* ref: Client::Game::Event::ShopEventHandler::vf128 */
uint F_006c2250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c2250u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  return *(uint *)(in_ecx + 0x1bf4);
}

/* ref: Client::Game::Event::ShopEventHandler::vf132 */
uint F_006c2260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c2260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0xf;
}

/* ref: FUN_006c2270 */
byte F_006c2270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c2270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined1 uVar1;
  undefined2 * puVar2;
  undefined2 * puVar3;
  undefined1 * puVar4;
  int iVar5;
  
  if (*(uint *)((int)this + 0x1bd4) <= ((uint)param_1 & 0xff)) {
    return 0;
  }
  iVar5 = ((uint)param_1 & 0xff) * 0xa8;
  F_00a35ee0(param_2,(-(uint)((*(byte *)(iVar5 + 0x1548 + (int)this) & 1) != 1) & 0xfff0bdc0) +
                       1000000 + *(int *)((int)this + iVar5 + 0x1538),1);
  F_00a35f80(param_2,*(undefined4 *)((int)this + iVar5 + 0x153c));
  *(undefined4 *)((int)param_2 + 0x18) = *(undefined4 *)((int)this + iVar5 + 0x15b0);
  *(undefined4 *)((int)param_2 + 0x1c) = *(undefined4 *)((int)this + iVar5 + 0x15b4);
  *(undefined2 *)((int)param_2 + 0x12) = *(undefined2 *)((int)this + iVar5 + 0x15d2);
  *(undefined2 *)((int)param_2 + 0x10) = *(undefined2 *)((int)this + iVar5 + 0x15d4);
  *(undefined1 *)((int)param_2 + 0x2f) = *(undefined1 *)((int)this + iVar5 + 0x15d6);
  *(undefined4 *)((int)param_2 + 0x30) = *(undefined4 *)((int)this + iVar5 + 0x15d8);
  *(undefined1 *)((int)param_2 + 0x14) = *(undefined1 *)((int)this + iVar5 + 0x1548);
  puVar4 = (undefined1 *)((int)this + iVar5 + 0x15c2);
  puVar2 = (undefined2 *)((int)this + iVar5 + 0x15b8);
  puVar3 = (undefined2 *)((int)param_2 + 0x20);
  iVar5 = 5;
  param_1 = (undefined1 *)((int)param_2 + 0x2a);
  do {
    *puVar3 = *puVar2;
    uVar1 = *puVar4;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  } while (iVar5 != 0);
  return 1;
}

/* ref: FUN_006c2360 */
uint F_006c2360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c2360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(param_2 * 0x7c + 0x180 + in_ecx);
}

/* ref: FUN_006c2380 */
uint F_006c2380(unsigned int gen_a0)
{
  GEN_ENTER(0x6c2380u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)*(ushort *)(param_1 + 0x1e) + (uint)*(ushort *)(param_1 + 0x1c) +
         (uint)*(ushort *)(param_1 + 0x1a) + (uint)*(ushort *)(param_1 + 0x18);
}

/* ref: FUN_006c23a0 */
uint F_006c23a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c23a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  uint local_8;
  
  uVar5 = 1;
  local_8 = 0;
  piVar4 = (int *)(param_1 + 8);
  iVar3 = 4;
  do {
    piVar1 = piVar4;
    uVar2 = uVar5;
    if (*piVar4 != 0) {
      for (; uVar2 < 4; uVar2 = uVar2 + 1) {
        if (*piVar4 == piVar1[1]) goto LAB_006c23e0;
        piVar1 = piVar1 + 1;
      }
      local_8 = local_8 + 1;
    }
LAB_006c23e0: ;
    piVar4 = piVar4 + 1;
    uVar5 = uVar5 + 1;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return local_8;
    }
  } while( true );
}

/* ref: FUN_006c2400 */
byte F_006c2400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c2400u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  double dVar1;
  double dVar2;
  byte bVar3;
  uint uVar4;
  float10 fVar5;
  
  uVar4 = F_00ab3300(0x25);
  if (uVar4 == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = *(byte *)(uVar4 + 4);
  }
  dVar1 = (double)(int)((uint)bVar3 * (*(int *)&gen_args[0]));
  if ((int)((uint)bVar3 * (*(int *)&gen_args[0])) < 0) {
    dVar1 = dVar1 + *(double *)&REFG(double, 0x10b8de8);
  }
  dVar2 = (double)(*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[1]) < 0) {
    dVar2 = dVar2 + *(double *)&REFG(double, 0x10b8de8);
  }
  fVar5 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar1 / dVar2),
                       (int)((ulonglong)gen_d2bits(dVar1 / dVar2) >> 0x20));
  (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 0)) = (byte)(int)TRUNC(fVar5);
  return (byte)(*(int *)&gen_args[1]);
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf112 */
uint F_006c2470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c2470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_1[0x20];
  iVar2 = param_1[0x1e];
  iVar3 = *(int *)this;
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0xa8))(param_1);
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,iVar1,iVar2,uVar4);
  uVar4 = ((code *)*(gen_code32 *)(iVar3 + 0x200))(this,uVar4);
  if (uVar4 != 0) {
    return uVar4 + 300;
  }
  return 0;
}

/* ref: FUN_006c24d0 */
uint F_006c24d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c24d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  pvVar1 = (undefined *)(uint)*(ushort *)((int)this + 0x1d4);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
  if ((*(byte *)((int)this + 0x5c) & 1) == 0) {
    pvVar1 = (undefined *)F_00a50880(*(undefined4 *)((int)this + 8),(uint)*(ushort *)((int)this + 0x54)
                                  ,2,&(*(undefined * PTR32 *)(gen_frame + 0x8)),1);
    *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) | 1;
  }
  return (uint)pvVar1;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf33 */
unsigned int F_006c2510(void)
{
  GEN_ENTER(0x6c2510u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf110 */
uint F_006c2520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c2520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ab0230(0x23e,param_1);
  return uVar1;
}

/* ref: FUN_006c2540 */
uint F_006c2540(unsigned int gen_a0)
{
  GEN_ENTER(0x6c2540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar1 = REFG(undefined4, 0x13241d4);
  if ((piVar2 != (int *)0x0) && (REFG(undefined4, 0x13241d0) == this)) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,uVar1,0)));
    REFG(undefined4, 0x13241d0) = (undefined *)0x0;
  }
  return (uint)piVar2;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf51 */
uint F_006c25b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c25b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x1c8))(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x1f8))(this);
  uVar1 = F_00a679e0(&REFG(undefined, 0x14ac288));
  REFG(undefined4, 0x14b0ee0) = 1;
  if (uVar1 == 2) {
    *(undefined4 *)&REFG(undefined, 0x14afd2c) = 2;
  }
  return uVar1;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf143 */
uint F_006c25f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c25f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  char * pcVar2;
  undefined4 uVar3;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x1f0))(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x1f8))(this);
  pcVar2 = *(char * PTR32 *)(this + 0x16c);
  if (*pcVar2 != '\0') {
    uVar3 = 0;
    uVar1 = F_0042a990(this + 0x16c);
    pcVar2 = (char *)F_00a024d0(*(undefined * PTR32 *)(this + 0xf8),"OnInitialize",uVar1,uVar3);
  }
  return (uint)pcVar2;
}

/* ref: FUN_006c2640 */
uint F_006c2640(unsigned int gen_a0)
{
  GEN_ENTER(0x6c2640u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (*(char *)(param_1 + 0x188) != '\x02') - 1 & 0x468;
}

/* ref: FUN_006c2660 */
uint F_006c2660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c2660u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (param_2 & 0xff) - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_00aa4270(param_1,0x10f,0,0);
    return uVar1;
  case 1: ;
    uVar1 = F_00aa4270(param_1,0x115,0,0);
    return uVar1;
  case 2: ;
    uVar1 = F_00aa4270(param_1,0x116,0,0);
    return uVar1;
  case 3: ;
    uVar1 = F_00aa4270(param_1,0x117,0,0);
    return uVar1;
  case 4: ;
    uVar1 = F_00aa4270(param_1,0x118,0,0);
    return uVar1;
  case 5: ;
    uVar1 = F_00aa4270(param_1,0x119,0,0);
    return uVar1;
  case 6: ;
    uVar1 = F_00aa4270(param_1,0x11a,0,0);
  }
  return uVar1;
}

/* ref: FUN_006c2730 */
uint F_006c2730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c2730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_00aa4270(param_1,param_2,0,0);
  *(undefined4 *)((int)param_1 + 0x2dd8) = param_2;
  *(uint *)((int)param_1 + 0x2ddc) = param_3;
  return param_3;
}

/* ref: FUN_006c2760 */
unsigned int F_006c2760(unsigned int gen_a0)
{
  GEN_ENTER(0x6c2760u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((param_1 != REFG(undefined4, 0x1379694)) && (*(int *)((int)param_1 + 0x2dd8) != 0)) {
    uVar1 = F_00aa02d0(param_1,*(int *)((int)param_1 + 0x2dd8),0);
    if ((char)uVar1 == '\0') {
      if (*(int *)((int)param_1 + 0x2ddc) != 0) {
        F_00aa4270(param_1,*(int *)((int)param_1 + 0x2ddc),0,0);
      }
      *(undefined4 *)((int)param_1 + 0x2dd8) = 0;
      *(undefined4 *)((int)param_1 + 0x2ddc) = 0;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::FishingEventHandler::vf83 */
unsigned int F_006c27c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c27c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 0x109) = 0;
  return 0;
}

/* ref: FUN_006c27d0 */
uint F_006c27d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c27d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  
  if (param_3 < 2) {
    if ((*param_2 & 0xf) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_2 + 4);
    }
    if (iVar1 != REFG(int, 0x14ab37c)) {
      uVar2 = F_00a51200(0x42,4,iVar1,0,0);
      if ((char)uVar2 != '\0') {
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = 2;
        return (uint)param_1;
      }
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_006c2860 */
uint F_006c2860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c2860u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a51200(0x42,2,0,0,0);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  uVar1 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1a,1);
  return CONCAT31((int3)(uVar1 >> 8),1);
}

/* ref: FUN_006c2890 */
uint F_006c2890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c2890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a51200(0x42,3,0,0,0);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  uVar1 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1a,1);
  return CONCAT31((int3)(uVar1 >> 8),1);
}

/* ref: FUN_006c28c0 */
byte F_006c28c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c28c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int * piVar2;
  uint in_ecx;
  undefined * pvVar3;
  int iVar4;
  undefined4 uVar5;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar2 != (int *)0x0) {
    uVar5 = 100;
    in_ecx = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    pvVar3 = (undefined *)F_00763050(in_ecx,uVar5);
    if (pvVar3 != (undefined *)0x0) {
      if (this == (undefined *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (int)this + 0xf8;
      }
      bVar1 = F_008e0bf0(pvVar3,iVar4);
      if (bVar1 == 0) {
        uVar5 = 0xdc3;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
        F_0046a630(pvVar3,uVar5);
      }
      return bVar1;
    }
  }
  return 0;
}

/* ref: FUN_006c2930 */
byte F_006c2930(unsigned int gen_a0)
{
  GEN_ENTER(0x6c2930u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  float * pfVar9;
  float * pfVar10;
  float10 fVar11;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  (*(uint *)(gen_frame + 0x14c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x150);
  pfVar9 = (float *)F_00a5feb0(param_1);
  (*(float *)(gen_frame + 0xb0)) = *pfVar9;
  (*(float *)(gen_frame + 0xb8)) = pfVar9[2];
  (*(float *)(gen_frame + 0xb4)) = (float)((float10)pfVar9[1] + (float10)*(double *)&REFG(undefined, 0x1092098));
  (*(float *)(gen_frame + 0xec)) = *(float *)((int)param_1 + 0xb0);
  fVar11 = F_00c4cde0(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,
                        (float10)*(float *)((int)param_1 + 0xb0));
  (*(float *)(gen_frame + 0xe8)) = (float)fVar11;
  (*(float *)(gen_frame + 0xfc)) = (float)fVar11;
  fVar11 = F_00c4ca20(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)(*(float *)(gen_frame + 0xec)));
  fVar1 = (float)fVar11;
  (*(float *)(gen_frame + 0xe8)) = fVar1;
  ((float *)(gen_frame + 0x100))[0] = fVar1;
  ((float *)(gen_frame + 0x100))[2] = ((float)GEN_TOF(-(float10)(*(float *)(gen_frame + 0xfc))));
  ((float *)(gen_frame + 0x100))[1] = 0.0;
  (*(undefined4 *)(gen_frame + 0x110)) = 0;
  (*(float *)(gen_frame + 0x120)) = (*(float *)(gen_frame + 0xfc));
  (*(undefined4 *)(gen_frame + 0x118)) = 0;
  (*(undefined4 *)(gen_frame + 0x124)) = 0;
  (*(undefined4 *)(gen_frame + 0x130)) = 0;
  (*(float *)(gen_frame + 0x128)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x134)) = 0;
  (*(undefined4 *)(gen_frame + 0x138)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x114)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x10928e4);
  pfVar10 = (float *)F_004ee670(&(*(float *)(gen_frame + 0xa0)),(uint)&(*(undefined4 *)(gen_frame + 0x0)),(uint)((float *)(gen_frame + 0x100)));
  (*(float *)(gen_frame + 0xc0)) = *pfVar10;
  (*(float *)(gen_frame + 0xc4)) = pfVar10[1];
  (*(float *)(gen_frame + 0xc8)) = pfVar10[2];
  (*(float *)(gen_frame + 0x90)) = 0.0;
  (*(float *)(gen_frame + 0x94)) = REFG(float, 0x10b8dfc);
  (*(float *)(gen_frame + 0xb0)) = (float)((float10)*pfVar10 + (float10)(*(float *)(gen_frame + 0xb0)));
  (*(float *)(gen_frame + 0x98)) = REFG(float, 0x10b8df8);
  (*(float *)(gen_frame + 0xb4)) = (float)((float10)pfVar10[1] + (float10)(*(float *)(gen_frame + 0xb4)));
  (*(float *)(gen_frame + 0xb8)) = (float)((float10)pfVar10[2] + (float10)(*(float *)(gen_frame + 0xb8)));
  pfVar10 = (float *)F_004ee670(&(*(float *)(gen_frame + 0xc0)),(uint)&(*(float *)(gen_frame + 0x90)),(uint)((float *)(gen_frame + 0x100)));
  fVar1 = *pfVar10;
  (*(float *)(gen_frame + 0xd0)) = fVar1;
  fVar2 = pfVar10[1];
  (*(float *)(gen_frame + 0xd4)) = fVar2;
  fVar3 = pfVar10[2];
  (*(float *)(gen_frame + 0xd8)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)fVar3 * (float10)fVar3 +
                 ((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2))));
  (*(float *)(gen_frame + 0xfc)) = fVar4;
  fVar4 = ((float)GEN_TOF(SQRT((float10)fVar4)));
  (*(float *)(gen_frame + 0xfc)) = fVar4;
  (*(float *)(gen_frame + 0x10)) = 0.0;
  (*(float *)(gen_frame + 0x14)) = 0.0;
  (*(float *)(gen_frame + 0x18)) = 0.0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  fVar4 = (float)((float10)1 / (float10)fVar4);
  (*(float *)(gen_frame + 0xfc)) = fVar4;
  fVar11 = (float10)fVar4;
  (*(float *)(gen_frame + 0xc0)) = (float)(fVar11 * (float10)fVar1);
  (*(float *)(gen_frame + 0xc4)) = (float)((float10)fVar2 * fVar11);
  (*(float *)(gen_frame + 0xc8)) = (float)(fVar11 * (float10)fVar3);
  fVar1 = *pfVar9;
  (*(float *)(gen_frame + 0xa0)) = fVar1;
  fVar2 = (float)((float10)pfVar9[1] + (float10)*(double *)&REFG(undefined, 0x10b8df0));
  (*(float *)(gen_frame + 0xa4)) = fVar2;
  fVar3 = pfVar9[2];
  (*(float *)(gen_frame + 0xa8)) = fVar3;
  fVar4 = (float)((float10)(*(float *)(gen_frame + 0xb0)) - (float10)fVar1);
  (*(float *)(gen_frame + 0xd0)) = fVar4;
  fVar5 = (float)((float10)(*(float *)(gen_frame + 0xb4)) - (float10)fVar2);
  (*(float *)(gen_frame + 0xd4)) = fVar5;
  fVar6 = (float)((float10)(*(float *)(gen_frame + 0xb8)) - (float10)fVar3);
  (*(float *)(gen_frame + 0xd8)) = fVar6;
  fVar7 = ((float)GEN_TOF(((float10)fVar6 * (float10)fVar6 +
                 ((float10)fVar4 * (float10)fVar4 + (float10)fVar5 * (float10)fVar5))));
  (*(float *)(gen_frame + 0xfc)) = fVar7;
  fVar7 = ((float)GEN_TOF(SQRT((float10)fVar7)));
  (*(float *)(gen_frame + 0xfc)) = fVar7;
  (*(float *)(gen_frame + 0x78)) = fVar1;
  (*(float *)(gen_frame + 0x7c)) = fVar2;
  (*(float *)(gen_frame + 0x80)) = fVar3;
  (*(float *)(gen_frame + 0xfc)) = (float)((float10)1 / (float10)fVar7);
  fVar11 = (float10)(float)((float10)1 / (float10)fVar7);
  (*(float *)(gen_frame + 0xfc)) = 2.29589e-41;
  (*(float *)(gen_frame + 0xf0)) = (float)(fVar11 * (float10)fVar4);
  (*(float *)(gen_frame + 0xf4)) = (float)((float10)fVar5 * fVar11);
  (*(float *)(gen_frame + 0xf8)) = (float)(fVar11 * (float10)fVar6);
  (*(float *)(gen_frame + 0x6c)) = (float)(fVar11 * (float10)fVar4);
  (*(float *)(gen_frame + 0x70)) = (float)((float10)fVar5 * fVar11);
  (*(float *)(gen_frame + 0xf8)) = 2.29589e-41;
  (*(float *)(gen_frame + 0x74)) = (float)(fVar11 * (float10)fVar6);
  bVar8 = F_005518b0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0),&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x78)),&(*(float *)(gen_frame + 0x6c)),
                       (undefined4)gen_fl2bits(fVar7),1,&(*(float *)(gen_frame + 0xf8)));
  if (bVar8 == 0) {
    fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x98)) * (float10)(*(float *)(gen_frame + 0x98)) +
                   ((float10)(*(float *)(gen_frame + 0x90)) * (float10)(*(float *)(gen_frame + 0x90)) + (float10)(*(float *)(gen_frame + 0x94)) * (float10)(*(float *)(gen_frame + 0x94))))));
    (*(float *)(gen_frame + 0xfc)) = fVar1;
    fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
    (*(float *)(gen_frame + 0xfc)) = fVar1;
    (*(float *)(gen_frame + 0xec)) = fVar1;
    (*(float *)(gen_frame + 0x84)) = (*(float *)(gen_frame + 0xc0));
    (*(float *)(gen_frame + 0x88)) = (*(float *)(gen_frame + 0xc4));
    (*(float *)(gen_frame + 0x8c)) = (*(float *)(gen_frame + 0xc8));
    (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0xb0));
    (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0xb4));
    (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0xb8));
    bVar8 = F_00551500(*(undefined4 *)(REFG(int, 0x137104c) + 0x25e0),&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x60)),&(*(float *)(gen_frame + 0x84)),
                         fVar1,1);
    if (bVar8 != 0) {
      if (((*(uint *)(gen_frame + 0x4c)) & 0x8000) != 0) {
LAB_006c2dab: ;
        bVar8 = 1;
        goto LAB_006c2e35;
      }
      if ((*(uint *)(gen_frame + 0x4c)) == 0x2000) {
        fVar11 = (float10)*(double *)&REFG(undefined, 0x10928e8);
        (*(float *)(gen_frame + 0xf4)) = (float)((float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0xc0)) * fVar11);
        (*(float *)(gen_frame + 0xf8)) = (float)((float10)(*(float *)(gen_frame + 0xc4)) * fVar11 + (float10)(*(float *)(gen_frame + 0x14)));
        (*(float *)(gen_frame + 0xfc)) = (float)(fVar11 * (float10)(*(float *)(gen_frame + 0xc8)) + (float10)(*(float *)(gen_frame + 0x18)));
        bVar8 = F_00551500(*(undefined4 *)(REFG(int, 0x137104c) + 0x25e0),&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0xf4)),&(*(float *)(gen_frame + 0x84)),
                             (*(float *)(gen_frame + 0xec)),1);
        if ((bVar8 != 0) && (((*(uint *)(gen_frame + 0x4c)) & 0x8000) != 0)) goto LAB_006c2dab;
      }
    }
  }
  bVar8 = 0;
LAB_006c2e35: ;
  F_00c47745((*(uint *)(gen_frame + 0x14c)) ^ (uint)(uint)(gen_frame + 0x150));
  return bVar8;
}

/* ref: Client::Game::Event::GCShopEventHandler::vf110 */
uint F_006c2e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c2e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ab0230(0xcd1,param_1);
  return uVar1;
}

/* ref: Client::Game::Event::GCShopEventHandler::vf128 */
uint F_006c2e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c2e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Client::Game::Event::GCShopEventHandler::vf132 */
uint F_006c2e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c2e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0xf;
}

/* ref: FUN_006c2e90 */
byte F_006c2e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c2e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (param_1 != 1) {
    if ((param_1 == 3) || (param_1 == 7)) {
      uVar4 = 0x6f5;
    }
    else {
      if ((param_1 != 2) && (param_1 != 6)) {
        if (param_1 == 5) {
          uVar4 = 0x6f6;
          pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
          F_0046a630(pvVar2,uVar4);
          return 0;
        }
        if (param_1 == 8) {
          uVar4 = 0x6f8;
          pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
          F_0046a630(pvVar2,uVar4);
          return 0;
        }
        if (param_1 == 9) {
          uVar3 = (uint)*(byte *)((int)this + 0x10c);
          uVar4 = 0x6f9;
          pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
          F_0046a6b0(pvVar2,uVar4,uVar3);
          return 0;
        }
        goto LAB_006c2f46;
      }
      uVar4 = 0x6f4;
    }
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046a630(pvVar2,uVar4);
  }
LAB_006c2f46: ;
  if ((param_1 != 4) && (param_1 != 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_006c2fb0 */
uint F_006c2fb0(void)
{
  GEN_ENTER(0x6c2fb0u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 5;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  this = (undefined *)F_00763050(uVar2,uVar3);
  uVar2 = 0;
  if (this != (undefined *)0x0) {
    uVar2 = F_0089aef0(this,4,4);
  }
  return uVar2;
}

/* ref: FUN_006c2fe0 */
unsigned int F_006c2fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c2fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_006c3010 */
byte F_006c3010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c3010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)((int)this + 0x360);
  if (uVar1 != 0) {
    if (*(int *)(param_1 + 0x60) == REFG(int, 0x1379694)) {
      uVar2 = F_00a3ace0(&REFG(undefined, 0x14a4230));
    }
    else {
      uVar2 = 0;
    }
    if (uVar2 < uVar1) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_006c3050 */
byte F_006c3050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c3050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)((int)this + 0x362);
  if (uVar1 != 0) {
    if (*(int *)(param_1 + 0x60) == REFG(int, 0x1379694)) {
      uVar3 = F_00a68310(&REFG(undefined1, 0x14ab070),1);
      uVar2 = (ushort)uVar3;
    }
    else {
      uVar2 = 0;
    }
    if (uVar2 < uVar1) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_006c30a0 */
byte F_006c30a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c30a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x370);
  if ((uVar1 != 0) &&
     ((*(int *)(param_1 + 0x60) != REFG(int, 0x1379694) ||
      (((&REFG(undefined1, 0x14b4ec0))[uVar1 >> 3] & (byte)(1 << ((byte)uVar1 & 7))) == 0)))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_006c3170 */
uint F_006c3170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c3170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  short * psVar10;
  int iVar11;
  
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc);
  uVar6 = F_00a4ffd0();
  cVar1 = *(char *)((int)this + 0x364);
  uVar2 = *(ushort *)((int)this + 0x360);
  uVar3 = *(ushort *)((int)this + 0x362);
  uVar5 = *(uint *)((int)this + 0x370);
  ((ushort *)(gen_frame + 0x0))[0] = *(ushort *)((int)this + 0x366);
  sVar4 = *(short *)((int)this + 0x36c);
  ((ushort *)(gen_frame + 0x0))[2] = *(undefined2 *)((int)this + 0x36a);
  ((ushort *)(gen_frame + 0x0))[1] = *(undefined2 *)((int)this + 0x368);
  uVar7 = F_00a68310(&REFG(undefined1, 0x14ab070),1);
  uVar8 = F_00a3ace0(&REFG(undefined, 0x14a4230));
  uVar9 = 0;
  if ((uVar3 != 0) && ((ushort)uVar7 < uVar3)) {
    uVar9 = 1;
  }
  if ((uVar2 != 0) && (uVar8 < uVar2)) {
    uVar9 = uVar9 | 0x10;
  }
  iVar11 = 0;
  if (cVar1 == '\x01') {
    uVar7 = 0;
    do {
      uVar2 = ((ushort *)(gen_frame + 0x0))[(int)(uVar7)];
      if ((uVar2 != 0) &&
         ((199 < uVar2 >> 3 ||
          ((*((byte *)GEN_TOP(((uVar2 >> 3) + 0x12ea + uVar6))) & (byte)(0x80 >> ((byte)uVar2 & 7))) == 0)))) {
        uVar9 = uVar9 | 4;
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 3);
  }
  else if (cVar1 == '\x02') {
    uVar7 = 0;
    do {
      uVar2 = ((ushort *)(gen_frame + 0x0))[(int)(uVar7)];
      if (uVar2 != 0) {
        iVar11 = iVar11 + 1;
        if ((uVar2 >> 3 < 200) &&
           (uVar8 = uVar9,
           (*((byte *)GEN_TOP(((uVar2 >> 3) + 0x12ea + uVar6))) & (byte)(0x80 >> ((byte)uVar2 & 7))) != 0))
        break;
      }
      uVar7 = uVar7 + 1;
      uVar8 = uVar9 | 4;
    } while (uVar7 < 3);
    uVar9 = uVar8;
    if (iVar11 == 0) {
      uVar9 = uVar8 & 0xfffffffb;
    }
  }
  if (sVar4 != 0) {
    iVar11 = 0;
    psVar10 = (short *)(uVar6 + 0x13b8);
    do {
      if (*psVar10 == sVar4) {
        uVar9 = uVar9 | 8;
        break;
      }
      iVar11 = iVar11 + 1;
      psVar10 = psVar10 + 8;
    } while (iVar11 < 0x1e);
  }
  if ((uVar5 != 0) && (((&REFG(undefined1, 0x14b4ec0))[uVar5 >> 3] & (byte)(1 << ((byte)uVar5 & 7))) == 0)) {
    uVar9 = uVar9 | 2;
  }
  F_00c47745((*(uint *)(gen_frame + 0x8)) ^ (uint)(uint)(gen_frame + 0xc));
  return uVar9;
}

/* ref: Client::Game::Event::WarpEventHandler::vf110 */
uint F_006c3340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c3340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0(param_1,this + 0x1e0);
  return uVar1;
}

/* ref: Client::Game::Event::WarpEventHandler::vf128 */
uint F_006c3360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c3360u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  return *(uint *)(in_ecx + 0x260);
}

/* ref: Client::Game::Event::StoryEventHandler::vf131 */
uint F_006c3370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c3370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (((char)param_3 != '\n') && ((char)param_3 != '\v')) {
    return 0;
  }
  return 1;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf110 */
uint F_006c3390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c3390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0(param_1,this + 0x144);
  return uVar1;
}

/* ref: FUN_006c33b0 */
byte F_006c33b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c33b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 99;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar1 = (int *)F_00763050(uVar2,uVar3);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar2 != '\0') {
      if ((char)param_1 != '\0') {
        *(undefined4 *)&REFG(undefined, 0x1324210) = 0;
      }
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006c3410 */
uint F_006c3410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c3410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0x80) == 0x1e8e7b) && (*(int *)((int)this + 8) == 0x1b000c)) {
    uVar2 = F_00a4ffd0();
    if ((*(byte *)(uVar2 + 0x1375) & 1) == 0) {
      bVar1 = F_006bfeb0(uVar2,0x460);
      if (bVar1 == 0) {
        bVar1 = F_006bfeb0(uVar2,0x461);
        if (bVar1 == 0) {
          bVar1 = F_006bfeb0(uVar2,0x462);
          if (bVar1 == 0) {
            bVar1 = F_006bfeb0(uVar2,0x463);
            if (bVar1 == 0) {
              bVar1 = F_006bfeb0(uVar2,0x464);
              if (bVar1 == 0) {
                bVar1 = F_006bfeb0(uVar2,0x465);
                if (bVar1 == 0) {
                  bVar1 = F_006bfeb0(uVar2,0x466);
                  if (bVar1 == 0) {
                    bVar1 = F_006bfeb0(uVar2,0x467);
                    if (bVar1 == 0) {
                      uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),0x68b,0,1,1);
                      if (uVar2 == 0) {
                        uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),0x6d2,0,1,1);
                        if (uVar2 == 0) {
                          uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),0x718,0,1,1);
                          if (uVar2 == 0) {
                            uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),0x75d,0,1,1);
                            if (uVar2 == 0) {
                              uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),0x7a3,0,1,1);
                              if (uVar2 == 0) {
                                uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),0x804,0,1,1);
                                if (uVar2 == 0) {
                                  uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),0x85c,0,1,1);
                                  if (uVar2 == 0) {
                                    uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),0x8a5,0,1,1);
                                    if (uVar2 == 0) {
                                      uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),0x8a6,0,1,1);
                                      if (uVar2 == 0) {
                                        uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),0x902,0,1,1);
                                        if (uVar2 == 0) {
                                          return 0;
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
    return 1;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf116 */
uint F_006c3610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c3610u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Client::Game::Event::SpecialShopEventHandler::vf132 */
uint F_006c3630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c3630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0xf;
}

/* ref: FUN_006c3640 */
byte F_006c3640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c3640u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      if (*(int *)(param_1 + uVar1 * 4) == param_3) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_006c3670 */
byte F_006c3670(unsigned int gen_a0)
{
  GEN_ENTER(0x6c3670u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*param_1)(param_1,1);
  }
  return 1;
}

/* ref: FUN_006c3690 */
uint F_006c3690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c3690u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ab21d0(param_2);
  if (((uVar1 != 0) && (param_1 < 0x1d)) && (*(char *)(uVar1 + 4 + param_1) != '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006c36c0 */
byte F_006c36c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c36c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0xe6);
  if (((sVar1 != -0x7fff) && (sVar1 != -0x7ffe)) && (sVar1 != -0x7ff9)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_006c3740 */
uint F_006c3740(void)
{
  GEN_ENTER(0x6c3740u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00ab3300(0xf);
  if (uVar1 != 0) {
    return *(int *)(uVar1 + 4) * 0xe10;
  }
  return 0;
}

/* ref: FUN_006c3760 */
uint F_006c3760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6c3760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  
  *param_1 = *(undefined4 *)((int)this + 0x314);
  *param_2 = *(undefined4 *)((int)this + 0x318);
  uVar1 = *(uint *)((int)this + 0x31c);
  *param_3 = uVar1;
  return uVar1;
}

/* ref: FUN_006c3790 */
ushort F_006c3790(unsigned int gen_a0)
{
  GEN_ENTER(0x6c3790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (ushort)*(byte *)(in_ecx + 0x322) + *(short *)(in_ecx + 800);
}

/* ref: FUN_006c37b0 */
uint F_006c37b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c37b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  
  if (*(char *)(in_ecx + 0x322) != (char)param_2) {
    *(char *)(in_ecx + 0x322) = (char)param_2;
    F_00a69750(&REFG(undefined4, 0x14b119c));
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)param_2);
}

/* ref: Client::Game::Event::LeveDirector::vf112 */
uint F_006c37e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c37e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (uVar1 == 2) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
    if ((char)uVar1 != '\x03') {
      uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
      if ((char)uVar1 != '\x02') {
        return 0xee10;
      }
    }
  }
  return 0;
}

/* ref: Client::Game::Event::LeveDirector::vf128 */
uint F_006c3820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c3820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (((char)param_1 == '\x02') && (param_3 != 0)) {
    return 0xece4;
  }
  return 0;
}

/* ref: FUN_006c3860 */
uint F_006c3860(void)
{
  GEN_ENTER(0x6c3860u, 0u, 0u, 0u, 0u);
  F_00a69780(&REFG(undefined4, 0x14b119c));
  return 0;
}

/* ref: Client::Game::Event::LeveDirector::vf146 */
uint F_006c3870(unsigned int gen_a0)
{
  GEN_ENTER(0x6c3870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0x18;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  this_00 = (undefined *)F_00763050(uVar2,uVar3);
  uVar2 = F_00870080(this_00,*(undefined4 *)(this + 0x1d8),2,0);
  return uVar2;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf123 */
byte F_006c38b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c38b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((((REFG(int, 0x1379694) != 0) && (this[0x4f8] != (undefined1)0x0)) &&
      (param_1[0x39] == **(int * PTR32 *)(this + 0x1d4))) &&
     (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar1 == *(uint *)(this + 0x4fc))) {
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf135 */
byte F_006c3900(unsigned int gen_a0)
{
  GEN_ENTER(0x6c3900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  char cVar1;
  
  cVar1 = *(char *)(in_ecx + 0x44);
  if ((cVar1 != '\x02') && (cVar1 != '\b')) {
    return cVar1 != '\a';
  }
  return 0;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf40 */
uint F_006c3920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6c3920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = F_0042a990(param_2);
    uVar1 = F_0042e430(this + 0x23c,uVar1);
  }
  else {
    uVar1 = param_3 - 1;
    if (uVar1 == 0) {
      uVar1 = F_0042a990(param_2);
      uVar1 = F_0042e430(this + 0x290,uVar1);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_006c3980 */
uint F_006c3980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c3980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((byte)param_1 < 8) && ((byte)param_2 < 6)) {
    return *((uint *)GEN_TOP(((int)this + ((uint)(byte)param_2 + (uint)(byte)param_1 * 0xc) * 4 + 0x364)));
  }
  return 0;
}

/* ref: FUN_006c39b0 */
uint F_006c39b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c39b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_1 * 3 + 0x36;
  iVar2 = *(int *)((int)this + iVar1 * 0x10);
  if (iVar2 == 0) {
    F_00ab22f0(*(undefined4 *)((int)this + iVar1 * 0x10 + 0x1c));
  }
  uVar3 = F_00463610(0,iVar2,2);
  return uVar3;
}

/* ref: FUN_006c39f0 */
uint F_006c39f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c39f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((byte)param_2 < 8) {
    return *(uint *)(in_ecx + 0x380 + (uint)(byte)param_2 * 0x30);
  }
  return 0;
}

/* ref: FUN_006c3a20 */
byte F_006c3a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c3a20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(uint *)(in_ecx + 0x38) = *(uint *)(in_ecx + 0x38) | 4;
  *(byte *)(in_ecx + 0x500) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006c3a40 */
uint F_006c3a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c3a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00463610(0,*(undefined4 *)((int)this + param_1 * 0x30 + 0x37c),7);
  return uVar1;
}

/* ref: FUN_006c3a70 */
byte F_006c3a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c3a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0x37c);
  do {
    if (*piVar2 == *(int *)(param_1 + 0x80)) goto LAB_006c3a97;
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0xc;
  } while (uVar1 < 8);
  uVar1 = 0xff;
LAB_006c3a97: ;
  return (byte)uVar1;
}

/* ref: FUN_006c3aa0 */
uint F_006c3aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c3aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = param_1;
  if ((param_1 < 3) &&
     (uVar1 = *(ushort *)((int)this + param_1 * 2 + 0x4ec), uVar2 = (uint)uVar1, uVar1 != 0)) {
    puVar3 = (uint *)F_00ab33c0(uVar2);
    uVar2 = 0;
    if (puVar3 != (uint *)0x0) {
      uVar2 = F_0042e430((undefined *)((int)this + 0x23c),(*puVar3 & 0xffffff) + (int)puVar3);
    }
  }
  return uVar2;
}

/* ref: FUN_006c3af0 */
uint F_006c3af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c3af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  puVar1 = (uint *)F_00ab33c0(param_1);
  uVar2 = 0;
  if (puVar1 != (uint *)0x0) {
    uVar2 = F_0042e430((undefined *)((int)this + 0x290),(*puVar1 & 0xffffff) + (int)puVar1);
  }
  return uVar2;
}

/* ref: FUN_006c3b30 */
uint F_006c3b30(unsigned int gen_a0)
{
  GEN_ENTER(0x6c3b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_0042a990((int)this + 0x16c);
  uVar1 = F_00a024d0(*(undefined * PTR32 *)((int)this + 0xf8),"OnInitialize",uVar1,uVar2);
  if (*(int *)((int)this + 0x4e8) == 10) {
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
    if (*(char *)((int)this + 0x4f6) == '\x01') {
      *(undefined1 *)((int)this + 0x511) = 1;
      return uVar1;
    }
    *(undefined1 *)((int)this + 0x510) = 1;
  }
  return uVar1;
}

/* ref: FUN_006c3b90 */
uint F_006c3b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c3b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + (uint)(byte)param_1 * 0x30 + 0x364) == 3) {
    uVar1 = *(uint *)((int)this + (uint)(byte)param_1 * 0x30 + 0x368);
  }
  return uVar1;
}

/* ref: FUN_006c3bc0 */
uint F_006c3bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c3bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xf8);
  uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  uVar3 = F_0042a990((int)this + 0x118);
  puVar1 = REFG(undefined * PTR32, 0x1323758);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
  if (uVar4 != 0) {
    uVar2 = F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
    return uVar2;
  }
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
  iVar5 = uVar2 + 2;
  F_00a01c40(this_00,iVar5,"className",uVar3);
  F_00a01c80(this_00,iVar5,"referenceCount",0);
  if (puVar1 == (undefined *)0x0) {
    F_00b9bc00(*(undefined4 *)((int)this_00 + 8),uVar3);
    F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
    F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
    F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
    uVar2 = F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    return uVar2;
  }
  F_00b9bc00(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),puVar1);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar5,"__index");
  F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar2 = F_00a01ad0(this_00,puVar1);
  return uVar2;
}

/* ref: FUN_006c3d50 */
uint F_006c3d50(unsigned int gen_a0)
{
  GEN_ENTER(0x6c3d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xf8);
  uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  uVar3 = F_0042a990((int)this + 0x118);
  puVar1 = REFG(undefined * PTR32, 0x1323760);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
  if (uVar4 != 0) {
    uVar2 = F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
    return uVar2;
  }
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
  iVar5 = uVar2 + 2;
  F_00a01c40(this_00,iVar5,"className",uVar3);
  F_00a01c80(this_00,iVar5,"referenceCount",0);
  if (puVar1 == (undefined *)0x0) {
    F_00b9bc00(*(undefined4 *)((int)this_00 + 8),uVar3);
    F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
    F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
    F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
    uVar2 = F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    return uVar2;
  }
  F_00b9bc00(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),puVar1);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar5,"__index");
  F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar2 = F_00a01ad0(this_00,puVar1);
  return uVar2;
}

/* ref: Client::Game::Event::TestDirector::vf110 */
uint F_006c3f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c3f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0(param_1,this + 0x118);
  return uVar1;
}

/* ref: FUN_006c3f30 */
uint F_006c3f30(unsigned int gen_a0)
{
  GEN_ENTER(0x6c3f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xf8);
  uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  uVar3 = F_0042a990((int)this + 0x118);
  puVar1 = REFG(undefined * PTR32, 0x1323768);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
  if (uVar4 != 0) {
    uVar2 = F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
    return uVar2;
  }
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
  iVar5 = uVar2 + 2;
  F_00a01c40(this_00,iVar5,"className",uVar3);
  F_00a01c80(this_00,iVar5,"referenceCount",0);
  if (puVar1 == (undefined *)0x0) {
    F_00b9bc00(*(undefined4 *)((int)this_00 + 8),uVar3);
    F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
    F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
    F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
    uVar2 = F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    return uVar2;
  }
  F_00b9bc00(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),puVar1);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar5,"__index");
  F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar2 = F_00a01ad0(this_00,puVar1);
  return uVar2;
}

/* ref: FUN_006c40c0 */
uint F_006c40c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c40c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab3330(param_1 & 0xffff);
  return uVar1;
}

/* ref: FUN_006c40e0 */
uint F_006c40e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c40e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab2260(param_1);
  return uVar1;
}

/* ref: FUN_006c40f0 */
byte F_006c40f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c40f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 1: ;
    uVar2 = 0x22;
    break;
  case 2: ;
    uVar2 = 0x21;
    break;
  case 3: ;
    uVar2 = 0x20;
    break;
  case 4: ;
    uVar2 = 0x1f;
    break;
  case 5: ;
    uVar2 = 0x1e;
    break;
  default: ;
    goto switchD_006c40fd_default;
  }
  uVar1 = F_00ab3300(uVar2);
  if (uVar1 != 0) {
    return *(byte *)(uVar1 + 4);
  }
switchD_006c40fd_default: ;
  return 0;
}

/* ref: FUN_006c4140 */
uint F_006c4140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c4140u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  bool bVar1;
  
  if (param_1 == 0x10) {
    bVar1 = (char)param_2 == '\x01';
  }
  else {
    if (param_1 != 0x11) {
      if (param_1 != 0x12) {
        return 0;
      }
      if ((char)param_2 != '\x03') {
        return 0;
      }
      return 1;
    }
    bVar1 = (char)param_2 == '\x02';
  }
  if (!bVar1) {
    return 0;
  }
  return 1;
}

/* ref: FUN_006c41b0 */
float10 F_006c41b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6c41b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = F_00ab2260(param_1 & 0xffff);
  if (uVar1 != 0) {
    iVar2 = (uint)*(byte *)(uVar1 + 0x20) * (uint)*(ushort *)(uVar1 + 0x1a);
  }
  return (float10)(float)((float10)iVar2 * (float10)param_2);
}

/* ref: FUN_006c41f0 */
uint F_006c41f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6c41f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ab2fc0(param_1 & 0xffff);
  return uVar1;
}

/* ref: FUN_006c4220 */
ushort F_006c4220(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4220u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  short sVar1;
  
  sVar1 = *(short *)(in_ecx + 0xe);
  if (sVar1 == 1) {
    return 0xf025;
  }
  if (sVar1 != 2) {
    if (sVar1 != 3) {
      return 0;
    }
    return 0xf027;
  }
  return 0xf026;
}

/* ref: FUN_006c4250 */
uint F_006c4250(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4250u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab3480(param_1);
  return (*puVar1 & 0xffffff) + (int)puVar1;
}

/* ref: FUN_006c4270 */
uint F_006c4270(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4270u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab21d0(param_1);
  if (puVar1 != (uint *)0x0) {
    return (*puVar1 & 0xffffff) + (int)puVar1;
  }
  return 0;
}

/* ref: FUN_006c42a0 */
uint F_006c42a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c42a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined4 *)this = 0;
  iVar3 = 4;
  puVar1 = this;
  do {
    F_0042aca0(puVar1 + 8);
    uVar2 = F_00a35f30(puVar1 + 0x60);
    puVar1[0xa8] = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + 0xa8;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x2a8) = 0;
  return uVar2;
}

/* ref: FUN_006c42f0 */
uint F_006c42f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c42f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  uVar2 = 0;
  iVar3 = uVar1 + 0x1684;
  do {
    if (*(short *)(iVar3 + 4) == (short)param_1) {
      *param_2 = iVar3;
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 0x10;
  } while ((int)uVar2 < 0x10);
  return 0xffffffff;
}

/* ref: FUN_006c4360 */
uint F_006c4360(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4360u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(ushort *)(param_1 + 8) & 7;
}

/* ref: FUN_006c4370 */
uint F_006c4370(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4370u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)((*(byte *)(param_1 + 8) & 8) != 0);
}

/* ref: FUN_006c4390 */
uint F_006c4390(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4390u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)((*(byte *)(param_1 + 8) & 0x20) != 0);
}

/* ref: FUN_006c43b0 */
uint F_006c43b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c43b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)((*(byte *)(param_1 + 8) & 0x40) != 0);
}

/* ref: FUN_006c43d0 */
uint F_006c43d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c43d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(ushort *)(param_1 + 8) & 7;
}

/* ref: FUN_006c43e0 */
uint F_006c43e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c43e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(ushort *)(param_1 + 8) >> 5 & 7;
}

/* ref: FUN_006c4400 */
uint F_006c4400(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4400u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(ushort *)(param_1 + 8) >> 7 & 7;
}

/* ref: FUN_006c4420 */
uint F_006c4420(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4420u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(ushort *)(param_1 + 8) >> 7 & 0xf;
}

/* ref: FUN_006c4440 */
uint F_006c4440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c4440u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint * puVar9;
  
  piVar5 = param_1;
  uVar6 = F_0042a990(param_1 + 0xe);
  F_005a2710((undefined *)((int)param_2 + 8),6);
  *(uint *)((int)param_2 + 0xc) = uVar6;
  uVar6 = F_0042a990(param_1 + 0x27);
  F_005a2710(param_2,6);
  *(uint *)((int)param_2 + 4) = uVar6;
  iVar3 = param_1[0x25];
  F_005a2710((undefined *)((int)param_2 + 600),4);
  *(int *)((int)param_2 + 0x25c) = iVar3;
  iVar3 = param_1[0x26];
  F_005a2710((undefined *)((int)param_2 + 0x260),4);
  *(int *)((int)param_2 + 0x264) = iVar3;
  iVar3 = param_1[0x24];
  F_005a2710((undefined *)((int)param_2 + 0x2a0),4);
  *(int *)((int)param_2 + 0x2a4) = iVar3;
  iVar3 = param_1[0x23];
  F_005a2710((undefined *)((int)param_2 + 0x290),4);
  *(int *)((int)param_2 + 0x294) = iVar3;
  F_005a2710((undefined *)((int)param_2 + 0x298),4);
  *(undefined4 *)((int)param_2 + 0x29c) = 0xefee;
  F_00424750(REFG(undefined4, 0x137104c));
  iVar3 = *param_1;
  if (iVar3 != 0) {
    F_005a2710((undefined *)((int)param_2 + 0x18),4);
    *(undefined4 *)((int)param_2 + 0x1c) = 2;
    F_005a2710((undefined *)((int)param_2 + 0x40),4);
    *(undefined4 *)((int)param_2 + 0x44) = 0;
    F_005a2710((undefined *)((int)param_2 + 0x68),4);
    *(undefined4 *)((int)param_2 + 0x6c) = 0xf01f;
    iVar4 = *param_1;
    F_005a2710((undefined *)((int)param_2 + 0xb8),4);
    *(int *)((int)param_2 + 0xbc) = iVar4;
    uVar6 = F_0042a990(&REFG(undefined, 0x1489e08));
    F_005a2710((undefined *)((int)param_2 + 0xe0),6);
    *(uint *)((int)param_2 + 0xe4) = uVar6;
  }
  uVar6 = (uint)(iVar3 != 0);
  if (param_1[1] != 0) {
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x18),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x1c) = 2;
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x40),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x44) = 0;
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x68),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x6c) = 0xf020;
    iVar3 = param_1[1];
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0xb8),4);
    *(int *)((int)param_2 + uVar6 * 8 + 0xbc) = iVar3;
    uVar7 = F_0042a990(&REFG(undefined, 0x1489e60));
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0xe0),6);
    *(uint *)((int)param_2 + uVar6 * 8 + 0xe4) = uVar7;
    uVar6 = uVar6 + 1;
  }
  if ((param_1[5] != 0) && (param_1[6] != 0)) {
    uVar7 = F_00ab24a0(param_1[5]);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x18),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x1c) = 2;
    iVar3 = param_1[5];
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x40),4);
    *(int *)((int)param_2 + uVar6 * 8 + 0x44) = iVar3;
    uVar8 = F_00ab65a0(param_1[5],uVar7);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x68),4);
    *(uint *)((int)param_2 + uVar6 * 8 + 0x6c) = uVar8;
    iVar3 = param_1[6];
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0xb8),4);
    *(int *)((int)param_2 + uVar6 * 8 + 0xbc) = iVar3;
    uVar7 = F_00ab6240(param_1[5],0,uVar7);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0xe0),6);
    *(uint *)((int)param_2 + uVar6 * 8 + 0xe4) = uVar7;
    uVar6 = uVar6 + 1;
  }
  if ((short)param_1[4] != 0) {
    puVar9 = (uint *)F_00ab3570((uint)*(ushort *)((int)param_1 + 0xe));
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x18),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x1c) = 2;
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x40),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x44) = 0;
    sVar1 = *(short *)((int)param_1 + 0xe);
    if (sVar1 == 1) {
      param_1 = (int *)0xf025;
    }
    else if (sVar1 == 2) {
      param_1 = (int *)0xf026;
    }
    else if (sVar1 == 3) {
      param_1 = (int *)0xf027;
    }
    else {
      param_1 = (int *)0x0;
    }
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x68),4);
    *(int * PTR32 *)((int)param_2 + uVar6 * 8 + 0x6c) = param_1;
    uVar2 = *(ushort *)(piVar5 + 4);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0xb8),4);
    *(uint *)((int)param_2 + uVar6 * 8 + 0xbc) = (uint)uVar2;
    uVar7 = *puVar9;
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0xe0),6);
    *(uint *)((int)param_2 + uVar6 * 8 + 0xe4) = (uVar7 & 0xffffff) + (int)puVar9;
    uVar6 = uVar6 + 1;
  }
  if ((piVar5[2] != 0) && ((short)piVar5[3] != 0)) {
    uVar7 = F_00ab24a0(piVar5[2]);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x18),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x1c) = 0x81;
    iVar3 = piVar5[2];
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x40),4);
    *(int *)((int)param_2 + uVar6 * 8 + 0x44) = iVar3;
    uVar8 = F_00ab65a0(piVar5[2],uVar7);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x68),4);
    *(uint *)((int)param_2 + uVar6 * 8 + 0x6c) = uVar8;
    uVar2 = *(ushort *)(piVar5 + 3);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0xb8),4);
    *(uint *)((int)param_2 + uVar6 * 8 + 0xbc) = (uint)uVar2;
    uVar7 = F_00ab6240(piVar5[2],0,uVar7);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0xe0),6);
    *(uint *)((int)param_2 + uVar6 * 8 + 0xe4) = uVar7;
    uVar6 = uVar6 + 1;
  }
  F_005a2710((undefined *)((int)param_2 + 0x10),4);
  *(uint *)((int)param_2 + 0x14) = uVar6;
  iVar3 = piVar5[7];
  if (iVar3 != 0) {
    F_005a2710((undefined *)((int)param_2 + 0x1b8),4);
    *(undefined4 *)((int)param_2 + 0x1bc) = 2;
    F_005a2710((undefined *)((int)param_2 + 0x1d8),4);
    *(undefined4 *)((int)param_2 + 0x1dc) = 0;
    F_005a2710((undefined *)((int)param_2 + 0x218),4);
    *(undefined4 *)((int)param_2 + 0x21c) = 0xf01f;
    iVar4 = piVar5[7];
    F_005a2710((undefined *)((int)param_2 + 0x238),4);
    *(int *)((int)param_2 + 0x23c) = iVar4;
    uVar6 = F_0042a990(&REFG(undefined, 0x1489e08));
    F_005a2710((undefined *)((int)param_2 + 0x1f8),6);
    *(uint *)((int)param_2 + 0x1fc) = uVar6;
  }
  uVar6 = (uint)(iVar3 != 0);
  if (piVar5[8] != 0) {
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1b8),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x1bc) = 2;
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1d8),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x1dc) = 0;
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x218),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x21c) = 0xf020;
    iVar3 = piVar5[8];
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x238),4);
    *(int *)((int)param_2 + uVar6 * 8 + 0x23c) = iVar3;
    uVar7 = F_0042a990(&REFG(undefined, 0x1489e60));
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1f8),6);
    *(uint *)((int)param_2 + uVar6 * 8 + 0x1fc) = uVar7;
    uVar6 = uVar6 + 1;
  }
  if (piVar5[0xc] != 0) {
    uVar7 = F_00ab24a0(piVar5[5]);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1b8),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x1bc) = 2;
    iVar3 = piVar5[5];
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1d8),4);
    *(int *)((int)param_2 + uVar6 * 8 + 0x1dc) = iVar3;
    uVar8 = F_00ab65a0(piVar5[5],uVar7);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x218),4);
    *(uint *)((int)param_2 + uVar6 * 8 + 0x21c) = uVar8;
    iVar3 = piVar5[0xc];
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x238),4);
    *(int *)((int)param_2 + uVar6 * 8 + 0x23c) = iVar3;
    uVar7 = F_00ab6240(piVar5[5],0,uVar7);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1f8),6);
    *(uint *)((int)param_2 + uVar6 * 8 + 0x1fc) = uVar7;
    uVar6 = uVar6 + 1;
  }
  if (*(short *)((int)piVar5 + 0x2a) != 0) {
    puVar9 = (uint *)F_00ab3570((uint)*(ushort *)((int)piVar5 + 0xe));
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1b8),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x1bc) = 2;
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1d8),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x1dc) = 0;
    sVar1 = *(short *)((int)piVar5 + 0xe);
    if (sVar1 == 1) {
      param_1 = (int *)0xf025;
    }
    else if (sVar1 == 2) {
      param_1 = (int *)0xf026;
    }
    else if (sVar1 == 3) {
      param_1 = (int *)0xf027;
    }
    else {
      param_1 = (int *)0x0;
    }
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x218),4);
    *(int * PTR32 *)((int)param_2 + uVar6 * 8 + 0x21c) = param_1;
    uVar2 = *(ushort *)((int)piVar5 + 0x2a);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x238),4);
    *(uint *)((int)param_2 + uVar6 * 8 + 0x23c) = (uint)uVar2;
    uVar7 = *puVar9;
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1f8),6);
    *(uint *)((int)param_2 + uVar6 * 8 + 0x1fc) = (uVar7 & 0xffffff) + (int)puVar9;
    uVar6 = uVar6 + 1;
  }
  if ((piVar5[9] != 0) && ((short)piVar5[10] != 0)) {
    uVar7 = F_00ab24a0(piVar5[9]);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1b8),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x1bc) = 0x81;
    iVar3 = piVar5[9];
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1d8),4);
    *(int *)((int)param_2 + uVar6 * 8 + 0x1dc) = iVar3;
    uVar8 = F_00ab65a0(piVar5[9],uVar7);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x218),4);
    *(uint *)((int)param_2 + uVar6 * 8 + 0x21c) = uVar8;
    uVar2 = *(ushort *)(piVar5 + 10);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x238),4);
    *(uint *)((int)param_2 + uVar6 * 8 + 0x23c) = (uint)uVar2;
    uVar7 = F_00ab6240(piVar5[9],0,uVar7);
    this = (undefined *)((int)param_2 + uVar6 * 8 + 0x1f8);
    F_005a2710(this,6);
    *(uint *)((int)this + 4) = uVar7;
    uVar6 = uVar6 + 1;
  }
  uVar7 = F_005a2710((undefined *)((int)param_2 + 0x268),4);
  *(uint *)((int)param_2 + 0x26c) = uVar6;
  return uVar7;
}

/* ref: Client::Game::Event::OpeningEventHandler::vf131 */
uint F_006c4c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c4c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (((char)param_3 != '\n') && ((char)param_3 != '\v')) {
    return 0;
  }
  return 1;
}

/* ref: Client::Game::Event::ExitRangeEventHandler::vf46 */
uint F_006c4c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c4c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ab5b10(&REFG(undefined4, 0x14bcc80),2);
  return uVar1;
}

/* ref: Client::Game::Event::ExitRangeEventHandler::vf131 */
byte F_006c4c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c4c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 1;
}

/* ref: FUN_006c4c80 */
byte F_006c4c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c4c80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ab1c90(param_2 & 0xffff);
  if (uVar1 == 0) {
    return 0;
  }
  if ((*(char *)(uVar1 + 0x2e) == '\0') && (*(char *)(param_1 + 0x2e08) != '\0')) {
    return 1;
  }
  return *(int *)(param_1 + 0xe4) != 0;
}

/* ref: Client::Game::Event::ChocoboTaxiStandEventHandler::vf128 */
uint F_006c4cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c4cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0xeb97;
}

/* ref: Client::Game::Event::ChocoboTaxiStandEventHandler::vf112 */
uint F_006c4ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c4ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (((&REFG(undefined, 0x14b4f0c))[**(ushort * PTR32 *)(this + 0x1d4) >> 3] &
      (byte)(1 << ((byte)**(ushort * PTR32 *)(this + 0x1d4) & 7))) == 0) {
    uVar1 = F_00a68310(&REFG(undefined1, 0x14ab070),1);
    if (9 < (ushort)uVar1) {
      return 0xeabb;
    }
  }
  return 0;
}

/* ref: FUN_006c4d40 */
uint F_006c4d40(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4d40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab3e50(param_1);
  if (uVar1 != 0) {
    return (uint)*(ushort *)(uVar1 + 0xc);
  }
  return 0;
}

/* ref: Client::Game::Event::Director::vf131 */
byte F_006c4d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c4d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((0xb < (byte)param_3) && (((byte)param_3 < 0xf || ((byte)param_3 == 0x11)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006c4da0 */
uint F_006c4da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c4da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  uint * puVar4;
  uint uVar5;
  byte * pbVar6;
  byte * pbVar7;
  bool bVar8;
  
  cVar1 = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc)));
  (*(undefined4 *)(gen_frame + 0x7)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x7)), 1, 3),cVar1);
  if (cVar1 != (char)(*(undefined4 *)&gen_args[1])) {
    *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))) = (char)(*(undefined4 *)&gen_args[1]);
  }
  bVar8 = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dd))) != (char)(*(undefined4 *)&gen_args[2]);
  if (bVar8) {
    *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dd))) = (char)(*(undefined4 *)&gen_args[2]);
  }
  (*(undefined4 *)&gen_args[2]) = 10;
  puVar4 = &(*(uint *)&gen_args[4]);
  if (9 < (*(uint *)&gen_args[4])) {
    puVar4 = &(*(undefined4 *)&gen_args[2]);
  }
  pbVar7 = ((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1de)));
  pbVar6 = (*(byte * PTR32 *)&gen_args[3]);
  for (uVar5 = *puVar4; 3 < uVar5; uVar5 = uVar5 - 4) {
    puVar4 = *(uint * PTR32 *)pbVar7;
    if (puVar4 != *(uint * PTR32 *)pbVar6) goto LAB_006c4e19;
    pbVar6 = pbVar6 + 4;
    pbVar7 = pbVar7 + 4;
  }
  if (uVar5 != 0) {
LAB_006c4e19: ;
    iVar2 = (uint)*pbVar7 - (uint)*pbVar6;
    if (iVar2 == 0) {
      puVar4 = (uint *)0x0;
      if (uVar5 < 2) goto LAB_006c4e87;
      iVar2 = (uint)pbVar7[1] - (uint)pbVar6[1];
      if (iVar2 == 0) {
        puVar4 = (uint *)0x0;
        if (uVar5 < 3) goto LAB_006c4e87;
        iVar2 = (uint)pbVar7[2] - (uint)pbVar6[2];
        if (iVar2 == 0) {
          puVar4 = (uint *)0x0;
          if (uVar5 < 4) goto LAB_006c4e87;
          iVar2 = (uint)pbVar7[3] - (uint)pbVar6[3];
        }
      }
    }
    puVar4 = (uint *)0x0;
    if ((iVar2 >> 0x1f | 1U) != 0) {
      (*(undefined4 *)&gen_args[2]) = 10;
      puVar3 = &(*(uint *)&gen_args[4]);
      if (9 < (*(uint *)&gen_args[4])) {
        puVar3 = &(*(undefined4 *)&gen_args[2]);
      }
      F_00c46aa0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1de,(*(byte * PTR32 *)&gen_args[3]),*puVar3);
      goto LAB_006c4e8d;
    }
  }
LAB_006c4e87: ;
  if (!bVar8 && cVar1 == (char)(*(undefined4 *)&gen_args[1])) {
    return (uint)puVar4;
  }
LAB_006c4e8d: ;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x268))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0x7)),(*(undefined4 *)&gen_args[1]));
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x26c))))((*(undefined * PTR32 *)&gen_args[0]));
  if ((REFG(int, 0x14b119c) != 0) && (REFG(char, 0x14b11f5) != '\0')) {
    F_00a69750(&REFG(int, 0x14b119c));
  }
  return uVar5;
}

/* ref: Client::Game::Event::Director::vf154 */
uint F_006c4ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c4ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar1 = param_2 & 0xff;
  uVar3 = param_1 & 0xff;
  uVar4 = 0;
  uVar2 = F_0042a990(this + 0x16c);
  uVar1 = F_00a02640(*(undefined * PTR32 *)(this + 0xf8),"OnSequence",uVar2,uVar3,uVar1,uVar4);
  return uVar1;
}

/* ref: Client::Game::Event::Director::vf155 */
uint F_006c4f20(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_0042a990(this + 0x16c);
  uVar1 = F_00a024d0(*(undefined * PTR32 *)(this + 0xf8),"OnSynchronize",uVar1,uVar2);
  return uVar1;
}

/* ref: FUN_006c4f50 */
uint F_006c4f50(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4f50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x308) = 0;
  *(undefined4 *)(in_ecx + 0x30c) = 0;
  return 0;
}

/* ref: Client::Game::Event::Director::vf35 */
uint F_006c4f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6c4f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = (uint)*((ushort *)GEN_TOP((*(int *)(*param_1 + 4) + 0x1c)));
  puVar1 = *(undefined4 * PTR32 *)(this + 0x6c);
  *(uint *)(this + 0x30c) = uVar2;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x6c) = 0;
  }
  *(undefined4 *)(this + 0x70) = 0;
  return uVar2;
}

/* ref: Client::Game::Event::Director::vf143 */
uint F_006c4fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x1379694);
  if ((REFG(undefined4, 0x1379694) != 0) && (*(int *)(REFG(undefined4, 0x1379694) + 0xe4) == **(int * PTR32 *)(this + 0x1d4))) {
    F_00a79840(&REFG(undefined4, 0x14b119c),this);
    uVar1 = F_00a84350(&REFG(undefined, 0x14b1258),this);
  }
  REFG(undefined4, 0x14b0ee0) = 1;
  return uVar1;
}

/* ref: FUN_006c4fe0 */
ulonglong F_006c4fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c4fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  
  iVar1 = *(uint *)((int)this + 0x2f0) - param_1;
  iVar2 = (*(int *)((int)this + 0x2f4) - param_2) - (uint)(*(uint *)((int)this + 0x2f0) < param_1);
  if ((iVar2 < 1) && (iVar2 < 0)) {
    iVar1 = 0;
    iVar2 = 0;
  }
  return CONCAT44(iVar2,iVar1);
}

/* ref: Client::Game::Event::QuestBattleDirector::vf17 */
byte F_006c5010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf29 */
uint F_006c5020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6c5020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  if (((char)param_1 == '\0') && ((char)param_3 == '\x02')) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    *(undefined4 *)(this + 0x2ec) = 0;
    *(uint *)(this + 0x2f4) = (uint)CARRY4(uVar2,uVar1);
    *(uint *)(this + 0x2e8) = uVar1;
    *(uint *)(this + 0x2f0) = uVar2 + uVar1;
  }
  uVar2 = F_006bd3a0((undefined *)this,param_1,param_2,param_3);
  return uVar2;
}

/* ref: FUN_006c5070 */
uint F_006c5070(unsigned int gen_a0)
{
  GEN_ENTER(0x6c5070u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00a01860(((undefined1 *)(gen_frame + 0xc)),param_1);
  F_00ab6b60();
  F_00a01890(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006c50b0 */
uint F_006c50b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c50b0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * in_edx = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  if (*param_3 < *in_eax) {
    in_eax = param_3;
  }
  if (*in_eax <= *in_edx) {
    in_eax = in_edx;
  }
  return (uint)in_eax;
}

/* ref: FUN_006c5150 */
unsigned int F_006c5150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5150u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(int *)(in_ecx + 0x224) != 0) {
    *(undefined1 *)(in_ecx + 0x7a8) = 1;
  }
  return 0;
}

/* ref: FUN_006c5170 */
unsigned int F_006c5170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c5170u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if ((char)param_3 != '\0') {
    *(undefined1 *)(in_ecx + 0x1d4) = 1;
  }
  return 0;
}

/* ref: FUN_006c5190 */
uint F_006c5190(unsigned int gen_a0)
{
  GEN_ENTER(0x6c5190u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((((REFG(int, 0x13238f8) == 0) && (*(int *)(in_ecx + 0x238) == 0)) && (*(int *)(in_ecx + 0x224) == 0))
     && (*(int *)(in_ecx + 0x738) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_006c51c0 */
uint F_006c51c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c51c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  short sVar1;
  uint uVar2;
  int * piVar3;
  undefined * this;
  undefined4 uVar4;
  
  uVar2 = param_1 >> 0x10;
  sVar1 = (short)(param_1 >> 0x10);
  if (((sVar1 == -0x7fff) || (sVar1 == -0x7ffe)) || (sVar1 == -0x7ff9)) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = 0x57a;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
    uVar2 = F_0046a630(this,uVar4);
  }
  return uVar2;
}

/* ref: FUN_006c5210 */
byte F_006c5210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  int * piVar2;
  undefined * this;
  undefined4 uVar3;
  
  bVar1 = F_00538870(&REFG(undefined4, 0x1375bc0),param_1,0);
  if (bVar1 != 0) {
    return 1;
  }
  if ((char)param_2 != '\0') {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar3 = 0x523;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0046a630(this,uVar3);
  }
  return 0;
}

/* ref: FUN_006c5260 */
byte F_006c5260(unsigned int gen_a0)
{
  GEN_ENTER(0x6c5260u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (*(uint *)(in_ecx + 0x16c) & 0x400) == 0x400;
}

/* ref: FUN_006c5280 */
uint F_006c5280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c5280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x1e4);
  if (*(char *)((int)this_00 + 0xc) == '\0') {
    uVar1 = param_1 - *(uint *)((int)this_00 + 0x10);
    if ((param_2 - *(int *)((int)this_00 + 0x14) != (uint)(param_1 < *(uint *)((int)this_00 + 0x10))
        ) || (59999 < uVar1)) {
      uVar1 = F_00a036e0(this_00);
    }
  }
  else {
    uVar1 = F_00a021f0(this_00,1);
    if (uVar1 == 1) {
      uVar1 = F_00a021d0(*(undefined * PTR32 *)((int)this + 0x1e4));
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_006c52d0 */
uint F_006c52d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c52d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int * piVar1;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (param_3 == 1) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xa4))(piVar1,1,0x18,1);
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xa4))(piVar1,0,0x18,1)));
  }
  return (uint)piVar1;
}

/* ref: FUN_006c5310 */
byte F_006c5310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6c5310u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  int * piVar2;
  undefined * this;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float local_8;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)param_1 + 4))(param_1);
  if (uVar1 != 1) {
    return 0;
  }
  fVar4 = F_00a601f0((undefined *)param_1,param_2);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)param_2 + 4))(param_2);
  fVar5 = F_00a602d0((undefined *)param_1,param_2);
  param_1 = REFG(float, 0x10adb9c);
  param_2 = REFG(float, 0x10a509c);
  local_8 = REFG(float, 0x109cb08);
  switch((unsigned int)(uintptr_t)((undefined1)param_3)) {
  case 1: ;
    if (uVar1 == 5) {
      param_1 = REFG(float, 0x1094880);
    }
    else if (uVar1 == 6) {
      param_2 = REFG(float, 0x1087ef8);
      param_1 = param_2;
      local_8 = REFG(float, 0x10adb88);
    }
    else if (uVar1 == 7) {
      param_1 = REFG(float, 0x10b930c);
    }
    break;
  case 2: ;
    if (uVar1 == 2) {
      param_2 = REFG(float, 0x10b9308);
      param_1 = param_2;
      local_8 = REFG(float, 0x10b9304);
    }
    break;
  case 8: ;
  case 0x12: ;
    goto switchD_006c538f_caseD_8;
  }
  if (((float10)GEN_TOD(gen_bits2f(param_1))) < (float10)fVar4) {
    uVar3 = 0x51e;
  }
  else if (((float10)GEN_TOD(gen_bits2f(param_2))) < (float10)fVar5) {
    uVar3 = 0x524;
  }
  else {
    if (!((float10)fVar5 < (float10)local_8)) {
switchD_006c538f_caseD_8: ;
      return 1;
    }
    uVar3 = 0x525;
  }
  if ((char)param_4 != '\0') {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0046a630(this,uVar3);
  }
  return 0;
}

/* ref: FUN_006c5500 */
uint F_006c5500(unsigned int gen_a0)
{
  GEN_ENTER(0x6c5500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined4 uVar1;
  char cVar2;
  uint * puVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  cVar2 = *(char *)((int)this + 0x40);
  uVar4 = CONCAT31((int3)((REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac)) >> 8),cVar2);
  if (-1 < cVar2) {
    puVar3 = (uint *)F_00ab3ae0(*(undefined4 *)((int)this + cVar2 * 4));
    uVar4 = 0;
    if (puVar3 != (uint *)0x0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x54)),"sound/",REFG(undefined4, 0x108cc50));
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)),(*puVar3 & 0xffffff) + (int)puVar3,REFG(undefined4, 0x108cc50));
      F_0042e360(((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x0)));
      uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
      uVar10 = 1;
      uVar9 = 0;
      uVar8 = 0;
      fVar7 = (float)(float10)1;
      uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x54)));
      F_004e9a80(uVar1,uVar4,fVar7,uVar8,uVar9,uVar10);
      *((undefined4 *)GEN_TOP(((int)this + *(char *)((int)this + 0x40) * 4))) = 0;
      iVar5 = 0;
      do {
        cVar2 = (char)iVar5 + '\x01' + *(char *)((int)this + 0x40);
        if ('\x0f' < cVar2) {
          cVar2 = cVar2 + -0x10;
        }
      } while ((*(int *)((int)this + cVar2 * 4) == 0) &&
              (iVar5 = iVar5 + 1, cVar2 = -1, iVar5 < 0xf));
      *(char *)((int)this + 0x40) = cVar2;
      F_0042c880(((undefined1 *)(gen_frame + 0x0)));
      uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x54)));
      uVar4 = (uint)uVar6;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar4;
}

/* ref: FUN_006c5600 */
uint F_006c5600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_1);
  uVar3 = 0;
  if ((((byte)param_1 & 2) != 0) &&
     (*(char *)((int)this + 0xd6) = *(char *)((int)this + 0xd6) + '\x01',
     *(char *)((int)this + 0xd6) == '\x01')) {
    uVar3 = 2;
  }
  if ((((byte)param_1 & 4) != 0) &&
     (*(char *)((int)this + 0xd7) = *(char *)((int)this + 0xd7) + '\x01',
     *(char *)((int)this + 0xd7) == '\x01')) {
    uVar3 = uVar3 | 4;
  }
  if ((((byte)param_1 & 8) != 0) &&
     (*(char *)((int)this + 0xd8) = *(char *)((int)this + 0xd8) + '\x01',
     *(char *)((int)this + 0xd8) == '\x01')) {
    uVar3 = uVar3 | 8;
  }
  if ((((byte)param_1 & 0x20) != 0) &&
     (*(char *)((int)this + 0xd9) = *(char *)((int)this + 0xd9) + '\x01',
     *(char *)((int)this + 0xd9) == '\x01')) {
    uVar3 = uVar3 | 0x20;
  }
  if ((((byte)param_1 & 1) != 0) &&
     (*(char *)((int)this + 0xda) = *(char *)((int)this + 0xda) + '\x01',
     *(char *)((int)this + 0xda) == '\x01')) {
    uVar3 = uVar3 | 1;
  }
  if ((((byte)param_1 & 0x10) != 0) &&
     (*(char *)((int)this + 0xdb) = *(char *)((int)this + 0xdb) + '\x01',
     *(char *)((int)this + 0xdb) == '\x01')) {
    uVar3 = uVar3 | 0x10;
  }
  if (uVar3 != 0) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1,uVar3,0,1);
    }
  }
  return uVar2;
}

/* ref: FUN_006c56c0 */
unsigned int F_006c56c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c56c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  char cVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((((param_1 & 2) != 0) && (*(char *)((int)this + 0xd6) != '\0')) &&
     (cVar1 = *(char *)((int)this + 0xd6) + -1, *(char *)((int)this + 0xd6) = cVar1, cVar1 == '\0'))
  {
    uVar3 = 2;
  }
  if ((((param_1 & 4) != 0) && (*(char *)((int)this + 0xd7) != '\0')) &&
     (cVar1 = *(char *)((int)this + 0xd7) + -1, *(char *)((int)this + 0xd7) = cVar1, cVar1 == '\0'))
  {
    uVar3 = uVar3 | 4;
  }
  if ((((param_1 & 8) != 0) && (*(char *)((int)this + 0xd8) != '\0')) &&
     (cVar1 = *(char *)((int)this + 0xd8) + -1, *(char *)((int)this + 0xd8) = cVar1, cVar1 == '\0'))
  {
    uVar3 = uVar3 | 8;
  }
  if ((((param_1 & 0x20) != 0) && (*(char *)((int)this + 0xd9) != '\0')) &&
     (cVar1 = *(char *)((int)this + 0xd9) + -1, *(char *)((int)this + 0xd9) = cVar1, cVar1 == '\0'))
  {
    uVar3 = uVar3 | 0x20;
  }
  if ((((param_1 & 1) != 0) && (*(char *)((int)this + 0xda) != '\0')) &&
     (cVar1 = *(char *)((int)this + 0xda) + -1, *(char *)((int)this + 0xda) = cVar1, cVar1 == '\0'))
  {
    uVar3 = uVar3 | 1;
  }
  if ((((param_1 & 0x10) != 0) && (*(char *)((int)this + 0xdb) != '\0')) &&
     (cVar1 = *(char *)((int)this + 0xdb) + -1, *(char *)((int)this + 0xdb) = cVar1, cVar1 == '\0'))
  {
    uVar3 = uVar3 | 0x10;
  }
  if (uVar3 != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xb0))(piVar2,uVar3,1,1);
    }
  }
  return 0;
}

/* ref: FUN_006c57a0 */
uint F_006c57a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c57a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_1);
  uVar3 = 0;
  if ((((byte)param_1 & 2) != 0) && (*(char *)((int)this + 0xd6) != '\0')) {
    *(undefined1 *)((int)this + 0xd6) = 0;
    uVar3 = 2;
  }
  if ((((byte)param_1 & 4) != 0) && (*(char *)((int)this + 0xd7) != '\0')) {
    *(undefined1 *)((int)this + 0xd7) = 0;
    uVar3 = uVar3 | 4;
  }
  if ((((byte)param_1 & 8) != 0) && (*(char *)((int)this + 0xd8) != '\0')) {
    *(undefined1 *)((int)this + 0xd8) = 0;
    uVar3 = uVar3 | 8;
  }
  if ((((byte)param_1 & 0x20) != 0) && (*(char *)((int)this + 0xd9) != '\0')) {
    *(undefined1 *)((int)this + 0xd9) = 0;
    uVar3 = uVar3 | 0x20;
  }
  if ((((byte)param_1 & 1) != 0) && (*(char *)((int)this + 0xda) != '\0')) {
    *(undefined1 *)((int)this + 0xda) = 0;
    uVar3 = uVar3 | 1;
  }
  if ((((byte)param_1 & 0x10) != 0) && (*(char *)((int)this + 0xdb) != '\0')) {
    *(undefined1 *)((int)this + 0xdb) = 0;
    uVar3 = uVar3 | 0x10;
  }
  if (uVar3 != 0) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1,uVar3,1,1);
    }
  }
  return uVar2;
}

/* ref: FUN_006c5860 */
unsigned int F_006c5860(unsigned int gen_a0)
{
  GEN_ENTER(0x6c5860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(char *)((int)this + 0xd6) != '\0') {
    *(undefined1 *)((int)this + 0xd6) = 0;
    uVar2 = 2;
  }
  if (*(char *)((int)this + 0xd7) != '\0') {
    *(undefined1 *)((int)this + 0xd7) = 0;
    uVar2 = uVar2 | 4;
  }
  if (*(char *)((int)this + 0xd8) != '\0') {
    *(undefined1 *)((int)this + 0xd8) = 0;
    uVar2 = uVar2 | 8;
  }
  if (*(char *)((int)this + 0xd9) != '\0') {
    *(undefined1 *)((int)this + 0xd9) = 0;
    uVar2 = uVar2 | 0x20;
  }
  if (*(char *)((int)this + 0xda) != '\0') {
    *(undefined1 *)((int)this + 0xda) = 0;
    uVar2 = uVar2 | 1;
  }
  if (*(char *)((int)this + 0xdb) != '\0') {
    *(undefined1 *)((int)this + 0xdb) = 0;
    uVar2 = uVar2 | 0x10;
  }
  if (uVar2 != 0) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1,uVar2,1,1);
    }
  }
  return 0;
}

/* ref: FUN_006c5900 */
uint F_006c5900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5900u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa4))(piVar1,(uint)((char)param_2 != '\0'),param_1,1);
  return uVar2;
}

/* ref: FUN_006c5940 */
uint F_006c5940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1,(uint)((char)param_2 != '\0'),param_1,1);
  return uVar2;
}

/* ref: FUN_006c5ae0 */
uint F_006c5ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5ae0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if ((param_2 != 0xffffffff) && (bVar1 = F_00ae0dd0(param_2), bVar1 != 0)) {
    if (0x157 < param_2) {
      return 0;
    }
    return (&REFG(undefined4, 0x14a31f0))[param_2];
  }
  if (*param_1 == -0x20000000) {
    return 0;
  }
  uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*param_1,param_1[1]);
  return uVar2;
}

/* ref: FUN_006c5b30 */
uint F_006c5b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5b30u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if ((param_2 != 0xffffffff) && (bVar1 = F_00ae0dd0(param_2), bVar1 != 0)) {
    if (0x157 < param_2) {
      return 0;
    }
    return (&REFG(undefined4, 0x14a31f0))[param_2];
  }
  if (*param_1 == -0x20000000) {
    return 0;
  }
  uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*param_1,param_1[1]);
  return uVar2;
}

/* ref: FUN_006c5b80 */
uint F_006c5b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6c5b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * this;
  undefined * puVar4;
  
  bVar1 = F_00a01f60(param_1,param_2);
  if (bVar1 != 0) {
    uVar2 = F_00a01e40(param_1,param_2);
    F_0042e430(param_4,uVar2);
    return 0;
  }
  bVar1 = F_00a01f40(param_1,param_2);
  if (bVar1 == 0) {
    return 0;
  }
  uVar2 = F_00b9c9b0(*(undefined4 *)((int)param_1 + 8),param_2);
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar3 != (int *)0x0) {
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
    puVar4 = (undefined *)F_0043bd00(this,uVar2,2,param_3);
    if (puVar4 != (undefined *)0x0) goto LAB_006c5bf5;
  }
  puVar4 = &REFG(undefined, 0x10b3a22);
LAB_006c5bf5: ;
  F_0042e430(param_4,puVar4);
  return 0;
}

/* ref: FUN_006c5c10 */
uint F_006c5c10(unsigned int gen_a0)
{
  GEN_ENTER(0x6c5c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (REFG(int, 0x1323910) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x1323910),0);
  }
  if (REFG(int, 0x1323954) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x1323954),0);
  }
  if (REFG(int, 0x1323984) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x1323984),0);
  }
  if (REFG(int, 0x13239bc) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x13239bc),0);
  }
  if (REFG(int, 0x13239f8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x13239f8),0);
  }
  if (REFG(int, 0x1323ab0) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x1323ab0),0);
  }
  if (REFG(int, 0x1323a30) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x1323a30),0);
  }
  if (REFG(int, 0x1323adc) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x1323adc),0);
  }
  uVar4 = 0x1d;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  uVar4 = 0x21;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  uVar4 = 0x3a;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    F_00a6cdf0(1);
  }
  uVar4 = 0x22;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  uVar4 = 0x4c;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  uVar4 = 0x4b;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  uVar4 = 0x37;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  uVar4 = 0x3c;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  uVar4 = 0x32;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
  if ((char)uVar3 != '\0') {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  if (*(char *)((int)this + 0xd2) != '\0') {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x110))(piVar1);
    return uVar3;
  }
  return uVar3;
}

/* ref: FUN_006c5ef0 */
uint F_006c5ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  undefined * this;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  uVar2 = F_0046aa70(this,param_1,param_2);
  return uVar2;
}

/* ref: FUN_006c5f20 */
uint F_006c5f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5f20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  undefined * this;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  uVar2 = F_0046a6b0(this,param_1,param_2);
  return uVar2;
}

/* ref: FUN_006c5f50 */
uint F_006c5f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5f50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  undefined * this;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  uVar2 = F_0046a880(this,param_1,param_2);
  return uVar2;
}

/* ref: FUN_006c5f80 */
uint F_006c5f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c5f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  undefined * this;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  uVar2 = F_0046ab30(this,param_1,param_2,param_3);
  return uVar2;
}

/* ref: FUN_006c5fb0 */
uint F_006c5fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6c5fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  undefined * this;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  uVar2 = F_0046abb0(this,param_1,param_2,param_3,param_4);
  return uVar2;
}

/* ref: FUN_006c5ff0 */
uint F_006c5ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c5ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  undefined * this;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  uVar2 = F_0046ac40(this,param_1,param_2,param_3);
  return uVar2;
}

/* ref: FUN_006c6040 */
uint F_006c6040(void)
{
  GEN_ENTER(0x6c6040u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined * this;
  uint uVar5;
  int iVar6;
  byte * pbVar7;
  undefined4 uVar8;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  ((byte *)(gen_frame + 0x8))[0x80] = (char)uVar2;
  ((byte *)(gen_frame + 0x8))[0x81] = (char)(uVar2 >> 8);
  ((byte *)(gen_frame + 0x8))[0x82] = (char)(uVar2 >> 0x10);
  ((byte *)(gen_frame + 0x8))[0x83] = (char)(uVar2 >> 0x18);
  uVar2 = F_00b9cdd0(&REFG(undefined, 0x14b3134));
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar8 = 0x4e;
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
  this = (undefined *)F_00763050(uVar4,uVar8);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)) = this;
  F_0082afe0(this,(*(int *)(uVar2 + 0x4d4) - *(int *)(uVar2 + 0x4d0)) / 0x70 + 0xb);
  uVar4 = F_00b9d400();
  ((byte *)(gen_frame + 0x8))[0] = (char)uVar4;
  ((byte *)(gen_frame + 0x8))[1] = (char)(uVar4 >> 8);
  ((byte *)(gen_frame + 0x8))[2] = (char)(uVar4 >> 0x10);
  ((byte *)(gen_frame + 0x8))[3] = (char)(uVar4 >> 0x18);
  uVar4 = 0;
  pbVar7 = (byte *)(uVar2 + 8);
  do {
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)) = *(undefined4 *)(pbVar7 + -8);
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)) = *(undefined4 *)(pbVar7 + -4);
    ((byte *)(gen_frame + 0x8))[0x1c] = pbVar7[4];
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)) = *(undefined4 *)pbVar7;
    ((byte *)(gen_frame + 0x8))[0x1d] = pbVar7[5];
    ((byte *)(gen_frame + 0x8))[0x1f] = pbVar7[7];
    ((byte *)(gen_frame + 0x8))[0x1e] = pbVar7[6];
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = *(undefined4 *)(pbVar7 + 8);
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 36)) = *(undefined4 *)(pbVar7 + 0xc);
    F_0042cbc0(((byte *)(gen_frame + 0x8)) + 0x28,pbVar7 + 0x10);
    uVar8 = *(undefined4 *)(pbVar7 + 100);
    ((byte *)(gen_frame + 0x8))[0x7c] = (byte)uVar8;
    ((byte *)(gen_frame + 0x8))[0x7d] = SUB41(uVar8,1);
    ((byte *)(gen_frame + 0x8))[0x7e] = SUB41(uVar8,2);
    ((byte *)(gen_frame + 0x8))[0x7f] = SUB41(uVar8,3);
    uVar5 = F_0042a990(((byte *)(gen_frame + 0x8)) + 0x28);
    F_007793c0((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)),uVar4,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)),
                 CONCAT13(((byte *)(gen_frame + 0x8))[0x1f],CONCAT12(((byte *)(gen_frame + 0x8))[0x1e],CONCAT11(((byte *)(gen_frame + 0x8))[0x1d],((byte *)(gen_frame + 0x8))[0x1c]))),
                 CONCAT13(((byte *)(gen_frame + 0x8))[0x20],CONCAT12(((byte *)(gen_frame + 0x8))[0x1f],CONCAT11(((byte *)(gen_frame + 0x8))[0x1e],((byte *)(gen_frame + 0x8))[0x1d]))),
                 (uint)(((byte *)(gen_frame + 0x8))[0x1f] == 0),(uint)((byte *)(gen_frame + 0x8))[0x1e],(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)),uVar5,uVar8);
    F_0042c880(((byte *)(gen_frame + 0x8)) + 0x28);
    uVar4 = uVar4 + 1;
    pbVar7 = pbVar7 + 0x70;
  } while (uVar4 < 0xb);
  iVar6 = *(int *)(uVar2 + 0x4d4) - *(int *)(uVar2 + 0x4d0);
  iVar1 = iVar6 >> 0x1f;
  ((byte *)(gen_frame + 0x8))[4] = 0;
  ((byte *)(gen_frame + 0x8))[5] = 0;
  ((byte *)(gen_frame + 0x8))[6] = 0;
  ((byte *)(gen_frame + 0x8))[7] = 0;
  if (iVar6 / 0x70 + iVar1 != iVar1) {
    ((byte *)(gen_frame + 0x8))[8] = 0;
    ((byte *)(gen_frame + 0x8))[9] = 0;
    ((byte *)(gen_frame + 0x8))[10] = 0;
    ((byte *)(gen_frame + 0x8))[0xb] = 0;
    do {
      pbVar7 = ((byte *)GEN_TOP((*(int *)(uVar2 + 0x4d0) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)))));
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)) = *(undefined4 *)pbVar7;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)) = *(undefined4 *)(pbVar7 + 4);
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)) = *(undefined4 *)(pbVar7 + 8);
      ((byte *)(gen_frame + 0x8))[0x1c] = pbVar7[0xc];
      ((byte *)(gen_frame + 0x8))[0x1d] = pbVar7[0xd];
      ((byte *)(gen_frame + 0x8))[0x1e] = pbVar7[0xe];
      ((byte *)(gen_frame + 0x8))[0x1f] = pbVar7[0xf];
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = *(undefined4 *)(pbVar7 + 0x10);
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 36)) = *(undefined4 *)(pbVar7 + 0x14);
      F_0042cbc0(((byte *)(gen_frame + 0x8)) + 0x28,pbVar7 + 0x18);
      uVar8 = *(undefined4 *)(pbVar7 + 0x6c);
      ((byte *)(gen_frame + 0x8))[0x7c] = (byte)uVar8;
      ((byte *)(gen_frame + 0x8))[0x7d] = SUB41(uVar8,1);
      ((byte *)(gen_frame + 0x8))[0x7e] = SUB41(uVar8,2);
      ((byte *)(gen_frame + 0x8))[0x7f] = SUB41(uVar8,3);
      uVar5 = F_0042a990(((byte *)(gen_frame + 0x8)) + 0x28);
      F_007793c0((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)),uVar4,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)),
                   CONCAT13(((byte *)(gen_frame + 0x8))[0x1f],CONCAT12(((byte *)(gen_frame + 0x8))[0x1e],CONCAT11(((byte *)(gen_frame + 0x8))[0x1d],((byte *)(gen_frame + 0x8))[0x1c])))
                   ,CONCAT13(((byte *)(gen_frame + 0x8))[0x20],CONCAT12(((byte *)(gen_frame + 0x8))[0x1f],CONCAT11(((byte *)(gen_frame + 0x8))[0x1e],((byte *)(gen_frame + 0x8))[0x1d]))
                            ),(uint)(((byte *)(gen_frame + 0x8))[0x1f] == 0),(uint)((byte *)(gen_frame + 0x8))[0x1e],(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)),uVar5,uVar8
                  );
      uVar4 = uVar4 + 1;
      F_0042c880(((byte *)(gen_frame + 0x8)) + 0x28);
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70;
      uVar5 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 1;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) = uVar5;
    } while (uVar5 < (uint)((*(int *)(uVar2 + 0x4d4) - *(int *)(uVar2 + 0x4d0)) / 0x70));
  }
  uVar8 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12));
  if (REFG(undefined4, 0x1323bf0) == 0) {
    uVar2 = F_00876c80((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)),&REFG(undefined * PTR32, 0x1323be8),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)));
    REFG(undefined4, 0x1323bf0) = uVar2;
    F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 128)) ^ (uint)(uint)(gen_frame + 0x8c));
    return uVar2;
  }
  F_007dd800((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)));
  uVar2 = F_00877190((undefined *)uVar8,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)));
  F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 128)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar2;
}

/* ref: FUN_006c616c */
uint F_006c616c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c616cu, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  int in_edx = (int)gen_a1;
  int in_ebx = (int)gen_a2;
  int in_edi = (int)gen_a3;
  uint in_ebp = (uint)gen_a4;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined * this;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 uStack00000008;
  undefined4 uVar6;
  
  *(undefined4 *)(in_ebp - 0x80) = 0;
  if (in_edx + in_ecx >> 6 != in_edx + in_ecx >> 0x1f) {
    *(undefined4 *)(in_ebp - 0x7c) = 0;
    do {
      puVar5 = ((undefined4 *)GEN_TOP((*(int *)(in_edi + 0x4d0) + *(int *)(in_ebp - 0x7c))));
      *(undefined4 *)(in_ebp - 0x74) = *puVar5;
      *(undefined4 *)(in_ebp - 0x70) = puVar5[1];
      *(undefined4 *)(in_ebp - 0x6c) = puVar5[2];
      *(undefined1 *)(in_ebp - 0x68) = *(undefined1 *)(puVar5 + 3);
      *(undefined1 *)(in_ebp - 0x67) = *(undefined1 *)((int)puVar5 + 0xd);
      *(undefined1 *)(in_ebp - 0x66) = *(undefined1 *)((int)puVar5 + 0xe);
      *(undefined1 *)(in_ebp - 0x65) = *(undefined1 *)((int)puVar5 + 0xf);
      *(undefined4 *)(in_ebp - 100) = puVar5[4];
      *(undefined4 *)(in_ebp - 0x60) = puVar5[5];
      F_0042cbc0((undefined *)(in_ebp - 0x5c),puVar5 + 6);
      uVar6 = puVar5[0x1b];
      *(undefined4 *)(in_ebp - 8) = uVar6;
      uVar4 = F_0042a990(in_ebp - 0x5c);
      F_007793c0(*(undefined * PTR32 *)(in_ebp - 0x78),in_ebx,*(undefined4 *)(in_ebp - 0x74),
                   *(undefined4 *)(in_ebp - 0x70),*(undefined4 *)(in_ebp - 0x6c),
                   *(undefined4 *)(in_ebp - 0x68),*(undefined4 *)(in_ebp - 0x67),
                   (uint)(*(char *)(in_ebp - 0x65) == '\0'),(uint)*(byte *)(in_ebp - 0x66),
                   *(undefined4 *)(in_ebp - 100),uVar4,uVar6);
      in_ebx = in_ebx + 1;
      F_0042c880((undefined *)(in_ebp - 0x5c));
      iVar1 = *(int *)(in_edi + 0x4d4);
      iVar2 = *(int *)(in_edi + 0x4d0);
      iVar3 = *(int *)(in_ebp - 0x80);
      *(int *)(in_ebp - 0x7c) = *(int *)(in_ebp - 0x7c) + 0x70;
      uVar4 = iVar3 + 1;
      *(uint *)(in_ebp - 0x80) = uVar4;
    } while (uVar4 < (uint)((iVar1 - iVar2) / 0x70));
  }
  if (REFG(undefined4, 0x1323bf0) == 0) {
    uVar4 = F_00876c80(*(undefined * PTR32 *)(in_ebp - 0x78),&REFG(undefined * PTR32, 0x1323be8),
                         *(undefined4 *)(in_ebp - 0x84));
    uStack00000008 = 0x6c6287;
    REFG(undefined4, 0x1323bf0) = uVar4;
    F_00c47745(*(uint *)(in_ebp - 4) ^ in_ebp);
    return uVar4;
  }
  this = *(undefined * PTR32 *)(in_ebp - 0x78);
  F_007dd800(this);
  uVar4 = F_00877190(this,*(undefined4 *)(in_ebp - 0x84));
  uStack00000008 = 0x6c62b0;
  F_00c47745(*(uint *)(in_ebp - 4) ^ in_ebp);
  return uVar4;
}

/* ref: FUN_006c62c0 */
uint F_006c62c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6c62c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 uVar1;
  int * piVar2;
  uint uVar3;
  undefined * this;
  uint uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar5 = 0x4e;
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  this = (undefined *)F_00763050(uVar3,uVar5);
  uVar1 = REFG(undefined1, 0x14ab29a);
  if (REFG(char, 0x14ab0d0) == '\x01') {
    uVar3 = param_2 >> 1;
  }
  else {
    uVar3 = param_2;
    if (REFG(char, 0x14ab0d0) == '\x02') {
      uVar3 = 0;
    }
  }
  uVar4 = F_00b9cec0(uVar3);
  *(uint *)&REFG(undefined, 0x13240f4) = F_00b9cf90(param_3);
  (*(undefined4 *)(gen_frame + 0x0)) = param_1;
  (*(uint *)(gen_frame + 0x10)) = *(uint *)&REFG(undefined, 0x13240f4);
  (*(undefined1 *)(gen_frame + 0x15)) = (undefined1)param_4;
  (*(uint *)(gen_frame + 0x4)) = uVar3;
  (*(undefined4 *)(gen_frame + 0xc)) = param_3;
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  (*(undefined1 *)(gen_frame + 0x14)) = uVar1;
  *(uint *)&REFG(undefined, 0x13240f0) = uVar4;
  uVar3 = F_00876ee0(this,&REFG(undefined * PTR32, 0x13240e0),&(*(undefined4 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: FUN_006c6380 */
uint F_006c6380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6c6380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  undefined * this;
  uint uVar2;
  uint * this_00;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  undefined * PTR32 * ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(undefined4 *)(gen_frame + 0x14)) = param_2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
  (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = param_4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
  (*(undefined4 *)(gen_frame + 0x2c)) = param_5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = &REFG(undefined, 0x10b3a23);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),6);
  uVar10 = 4;
  uVar9 = 0;
  uVar8 = 0;
  ppuVar7 = &REFG(undefined * PTR32, 0x13240f8);
  puVar6 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x3c)) = param_6;
  uVar5 = 8;
  uVar4 = 0xe;
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  *(uint *)&REFG(undefined, 0x1324100) = F_008668b0(this,uVar4,uVar5,puVar6,ppuVar7,uVar8,uVar9,uVar10);
  this_00 = &(*(uint *)(gen_frame + 0x48));
  iVar3 = 7;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar2;
}

/* ref: FUN_006c64b0 */
uint F_006c64b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6c64b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0x1d;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar1 = (int *)F_00763050(uVar2,uVar3);
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1,param_1,param_2,param_3,((char)param_4 != '\0') + 1);
  return uVar2;
}

/* ref: FUN_006c6500 */
uint F_006c6500(unsigned int gen_a0)
{
  GEN_ENTER(0x6c6500u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
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

/* ref: FUN_006c6580 */
uint F_006c6580(unsigned int gen_a0)
{
  GEN_ENTER(0x6c6580u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0x4b;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  this = (undefined *)F_00763050(uVar2,uVar3);
  uVar2 = F_0089dd90(this,param_1,&REFG(undefined * PTR32, 0x1323b94));
  return uVar2;
}

/* ref: FUN_006c65c0 */
uint F_006c65c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c65c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00424750(REFG(undefined4, 0x137104c));
  uVar1 = F_00a6e080(&REFG(undefined, 0x14a9e40),param_1,param_2,1);
  return uVar1;
}

/* ref: FUN_006c6610 */
uint F_006c6610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6610u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  int * piVar2;
  uint in_ecx;
  undefined3 extraout_var = 0;
  undefined4 uVar3;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 3;
  in_ecx = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  F_00763050(in_ecx,uVar3);
  bVar1 = F_0076ec40(param_1,param_2,0xffffffff);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_006c6650 */
uint F_006c6650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c6650u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x104))(piVar1,param_1 & 0xff,param_2 & 0xff,param_3);
  return uVar2;
}

/* ref: FUN_006c6680 */
uint F_006c6680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (*(char *)((int)this + 0xd2) == '\0') {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x114))(piVar1);
    *(bool *)((int)this + 0xd2) = (char)uVar2 == '\0';
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10c))(piVar1,param_1);
  return uVar2;
}

/* ref: FUN_006c66f0 */
uint F_006c66f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c66f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0x29;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  this = (undefined *)F_00763050(uVar2,uVar3);
  uVar2 = F_008d2930(this,param_1,0);
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf42 */
uint F_006c6730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar5 = 0;
  uVar4 = F_00a019d0(((byte *)(gen_frame + 0xc)));
  if (2 < (int)uVar4) {
    uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  }
  if (iVar1 != 0) {
    F_00424750(REFG(undefined4, 0x137104c));
    F_00a6e080(&REFG(undefined, 0x14a9e40),uVar2,uVar5,1);
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf43 */
uint F_006c67c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c67c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc4))(piVar2);
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf6 */
uint F_006c6820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_1);
  *(undefined2 *)&REFG(undefined, 0x132393e) = 1;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,REFG(undefined4, 0x1323910),0);
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf53 */
uint F_006c6880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    F_007c94c0(this_00);
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf54 */
uint F_006c68e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c68e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    *(undefined4 *)&REFG(undefined, 0x1323bfc) = *(undefined4 *)(this + 4);
    *(int *)&REFG(undefined, 0x1323bec) = *piVar2;
    F_00b9e250(&REFG(undefined, 0x14b3134),&REFG(undefined * PTR32, 0x1323bf8));
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006c6947 */
unsigned int F_006c6947(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6947u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf55 */
uint F_006c6960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
    uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3);
    uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),4);
    uVar6 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),5);
    *(int *)&REFG(undefined, 0x13240e4) = iVar1;
    F_006c62c0(uVar2,uVar4,uVar5,uVar6);
    uVar2 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
    F_00a02240(((byte *)(gen_frame + 0x8)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf52 */
uint F_006c6a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  uint uVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  F_00a01860(((byte *)(gen_frame + 0x4)),param_1);
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar4);
  if (*piVar5 != 0) {
    uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
    bVar3 = (char)uVar4 - 1;
    ((byte *)(gen_frame + 0x4))[0x28] = bVar3;
    uVar6 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3);
    uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),4);
    ((byte *)(gen_frame + 0x4))[0x20] = (char)uVar4;
    ((byte *)(gen_frame + 0x4))[0x21] = (char)(uVar4 >> 8);
    ((byte *)(gen_frame + 0x4))[0x22] = (char)(uVar4 >> 0x10);
    ((byte *)(gen_frame + 0x4))[0x23] = (char)(uVar4 >> 0x18);
    bVar3 = F_00a01e10(((byte *)(gen_frame + 0x4)),5);
    ((byte *)(gen_frame + 0x4))[0x24] = bVar3;
    (*(undefined2 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x36)) = 0;
    (*(undefined4 *)(gen_frame + 0x3a)) = 0;
    (*(undefined1 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x41)) = 0;
    uVar4 = 0;
    do {
      uVar7 = uVar4 & 0x80000001;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
      }
      if (uVar7 == 0) {
        uVar7 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),uVar4 + 6);
        (&(*(undefined2 *)(gen_frame + 0x34)))[(int)uVar4 / 2] = (short)uVar7;
      }
      else if (uVar7 == 1) {
        uVar7 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),uVar4 + 6);
        (&(*(undefined1 *)(gen_frame + 0x40)))[(int)uVar4 / 2] = (char)uVar7;
      }
      uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 44));
      iVar1 = uVar4 + 7;
      uVar4 = uVar4 + 1;
    } while (iVar1 < 0x10);
    ((byte *)(gen_frame + 0x4))[0x2c] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 44)) = uVar2 & 0xffffff00;
    bVar3 = F_00a01f40(((byte *)(gen_frame + 0x4)),0x10);
    if (bVar3 != 0) {
      uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),0x10);
      ((byte *)(gen_frame + 0x4))[0x2c] = (byte)uVar4;
    }
    F_00ba0800(&REFG(undefined, 0x14b0f2c),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 40)),uVar6,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36)),&(*(undefined2 *)(gen_frame + 0x34)),&(*(undefined1 *)(gen_frame + 0x40)),
                 (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 44)));
  }
  F_00a01890(((byte *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf16 */
uint F_006c6b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    F_00a48ae0(&REFG(undefined, 0x14a4230));
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf17 */
uint F_006c6bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6bc0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int * piVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),(*(int *)&gen_args[1]));
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  piVar2 = (int *)*piVar2;
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)F_00ab3d50(1);
    if (puVar3 != (undefined4 *)0x0) {
      piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar4 + 0xd8))
                (piVar4,*puVar3,(uint)*(byte *)((int)puVar3 + 5),0,(int)*(char *)(puVar3 + 1));
    }
    (*(int *)&gen_args[1]) = piVar2[2];
    ((code *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2,0x641,&(*(int *)&gen_args[1]),1);
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf18 */
uint F_006c6c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6c60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int * piVar4;
  
  F_00a01860(((undefined1 *)(gen_frame + 0xc)),(*(int *)&gen_args[1]));
  uVar1 = F_00a01d20(((undefined1 *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x14)),1,uVar1);
  piVar2 = (int *)*piVar2;
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)F_00ab3d50(2);
    if (puVar3 != (undefined4 *)0x0) {
      piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar4 + 0xd8))
                (*puVar3,*(undefined1 *)((int)puVar3 + 5),0,(int)*(char *)(puVar3 + 1));
    }
    (*(int *)&gen_args[1]) = piVar2[2];
    ((code *)*(gen_code32 *)(*piVar2 + 0x7c))(0x642,&(*(int *)&gen_args[1]),1);
  }
  F_00a01890(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf19 */
uint F_006c6d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if ((*piVar2 != 0) && (puVar3 = (undefined4 *)F_00ab3d50(6), puVar3 != (undefined4 *)0x0)) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ((code *)*(gen_code32 *)(*piVar2 + 0xd8))
              (piVar2,*puVar3,(uint)*(byte *)((int)puVar3 + 5),0,(int)*(char *)(puVar3 + 1));
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf20 */
uint F_006c6d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if ((*piVar2 != 0) && (puVar3 = (undefined4 *)F_00ab3d50(7), puVar3 != (undefined4 *)0x0)) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ((code *)*(gen_code32 *)(*piVar2 + 0xd8))
              (piVar2,*puVar3,(uint)*(byte *)((int)puVar3 + 5),0,(int)*(char *)(puVar3 + 1));
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf21 */
uint F_006c6e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if ((*piVar2 != 0) && (puVar3 = (undefined4 *)F_00ab3d50(8), puVar3 != (undefined4 *)0x0)) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ((code *)*(gen_code32 *)(*piVar2 + 0xd8))
              (piVar2,*puVar3,(uint)*(byte *)((int)puVar3 + 5),0,(int)*(char *)(puVar3 + 1));
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf22 */
uint F_006c6e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if ((*piVar2 != 0) && (puVar3 = (undefined4 *)F_00ab3d50(9), puVar3 != (undefined4 *)0x0)) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ((code *)*(gen_code32 *)(*piVar2 + 0xd8))
              (piVar2,*puVar3,(uint)*(byte *)((int)puVar3 + 5),0,(int)*(char *)(puVar3 + 1));
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf23 */
uint F_006c6f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if ((*piVar2 != 0) && (puVar3 = (undefined4 *)F_00ab3d50(10), puVar3 != (undefined4 *)0x0)) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ((code *)*(gen_code32 *)(*piVar2 + 0xd8))
              (*puVar3,*(undefined1 *)((int)puVar3 + 5),0,(int)*(char *)(puVar3 + 1));
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006c6f63 */
uint F_006c6f63(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6c6f63u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  code * in_edx = (code *)(uintptr_t)gen_a1;
  int in_ebp = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  (*in_edx)(in_eax);
  F_00a01890(in_ebp + -0x20);
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf24 */
uint F_006c6f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined4 * puVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  if (iVar1 != 0) {
    puVar4 = (undefined4 *)F_00ab3d50(uVar2);
    if (puVar4 != (undefined4 *)0x0) {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar3 + 0xd8))
                (piVar3,*puVar4,(uint)*(byte *)((int)puVar4 + 5),0,(int)*(char *)(puVar4 + 1));
    }
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf25 */
uint F_006c7010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c7010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
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
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  if (iVar1 != 0) {
    F_00a7d830(uVar2 & 0xff,uVar4);
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf38 */
uint F_006c7080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c7080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    *(int *)&REFG(undefined, 0x1323b88) = *piVar2;
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar3 = 0x4c;
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    this_00 = (undefined *)F_00763050(uVar1,uVar3);
    F_00777c00(this_00,&REFG(undefined * PTR32, 0x1323b84));
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf39 */
uint F_006c7110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c7110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint in_ecx;
  undefined * this_00;
  undefined4 uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
    *(int *)&REFG(undefined, 0x1323b98) = iVar1;
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = 0x4b;
    in_ecx = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
    this_00 = (undefined *)F_00763050(in_ecx,uVar4);
    F_0089dd90(this_00,uVar2,&REFG(undefined * PTR32, 0x1323b94));
    uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf44 */
uint F_006c71c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c71c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  uint in_ecx;
  undefined4 uVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[1]));
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  bVar2 = F_00a01e10(((byte *)(gen_frame + 0xc)),3);
  (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),bVar2);
  if (iVar1 != 0) {
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar5 = 3;
    in_ecx = ((code *)*(gen_code32 *)(*piVar4 + 0x48))(piVar4);
    F_00763050(in_ecx,uVar5);
    F_0076ec40(uVar3,(*(undefined4 *)&gen_args[1]),0xffffffff);
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf48 */
uint F_006c7250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c7250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),4);
  if (iVar1 != 0) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ((code *)*(gen_code32 *)(*piVar3 + 0x104))(piVar3,uVar2 & 0xff,uVar4 & 0xff,uVar5);
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf49 */
uint F_006c72e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c72e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[1]));
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  bVar2 = F_00a01e10(((byte *)(gen_frame + 0xc)),2);
  (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),bVar2);
  if (iVar1 != 0) {
    iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (*(char *)(iVar1 + 0xd2) == '\0') {
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x114))(piVar4);
      *(bool *)(iVar1 + 0xd2) = (char)uVar3 == '\0';
    }
    ((code *)*(gen_code32 *)(*piVar4 + 0x10c))(piVar4,(*(undefined4 *)&gen_args[1]));
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf50 */
uint F_006c7380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c7380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ((code *)*(gen_code32 *)(*piVar2 + 0x110))(piVar2);
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf57 */
uint F_006c73e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c73e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint in_ecx;
  undefined * this_00;
  undefined4 uVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  if (iVar1 != 0) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = 0x29;
    in_ecx = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
    this_00 = (undefined *)F_00763050(in_ecx,uVar4);
    F_008d2930(this_00,uVar2,0);
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006c7460 */
byte F_006c7460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6c7460u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  
  *param_3 = 0.0;
  *param_4 = 0.0;
  uVar1 = F_00a019d0(param_1);
  if ((int)uVar1 < param_2) {
    return 0;
  }
  uVar2 = F_00b9c9b0(*(undefined4 *)(param_1 + 8),param_2);
  fVar3 = (float10)(int)uVar2;
  if ((int)uVar2 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *param_3 = (float)(fVar3 * (float10)*(double *)&REFG(double, 0x10b9470));
  if (param_2 + 1 <= (int)uVar1) {
    uVar1 = F_00b9c9b0(*(undefined4 *)(param_1 + 8),param_2 + 1);
    fVar3 = (float10)(int)uVar1;
    if ((int)uVar1 < 0) {
      fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *param_4 = (float)(fVar3 * (float10)*(double *)&REFG(double, 0x10b9470));
  }
  return 1;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf67 */
uint F_006c7b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c7b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x2f0];
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  float fVar14;
  
  (*(uint *)(gen_frame + 0x2dc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2e0);
  (*(undefined * PTR32 *)(gen_frame + 0xe0)) = this;
  F_00a02210(((undefined1 *)(gen_frame + 0x10)),param_1);
  uVar5 = F_00a019d0(((undefined1 *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0xe4)) = gen_bits2f(uVar5);
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    (*(undefined * PTR32 *)(gen_frame + 0x88)) = (undefined *)0x0;
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x88)) = ((undefined *)GEN_TOP((&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)]));
  }
  if ((*(uint *)&REFG(undefined, 0x1489f10) & 1) == 0) {
    REFG(float, 0x1489f0c) = *((float *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x88)) + 0xd0) + 0xa4)));
    *(uint *)&REFG(undefined, 0x1489f10) = *(uint *)&REFG(undefined, 0x1489f10) | 1;
  }
  uVar5 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x18)),2);
  (*(uint *)(gen_frame + 0xa8)) = uVar5;
  if (((int)uVar5 < 0) || (6 < (int)uVar5)) {
    (*(uint *)(gen_frame + 0xa8)) = 0;
  }
  uVar5 = F_00a01d20(((undefined1 *)(gen_frame + 0x10)),3);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x18)),3,uVar5);
  iVar3 = *piVar6;
  uVar5 = F_00a01d20(((undefined1 *)(gen_frame + 0x10)),4);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x18)),4,uVar5);
  iVar4 = *piVar6;
  (*(float *)(gen_frame + 0xdc)) = REFG(float, 0x1087f04);
  if ((int)gen_fl2bits((*(float *)(gen_frame + 0xe4))) < 6) {
    fVar9 = F_00a01dd0(((undefined1 *)(gen_frame + 0x10)),5);
    (*(float *)(gen_frame + 0xdc)) = (float)fVar9;
  }
  if (((*(uint *)(gen_frame + 0xa8)) == 5) || ((*(byte *)(gen_frame + 0xef)) = 1, (*(uint *)(gen_frame + 0xa8)) == 6)) {
    (*(byte *)(gen_frame + 0xef)) = 0;
  }
  (*(float *)(gen_frame + 0xd8)) = 4.06377e-44;
  (*(float *)(gen_frame + 0xd4)) = REFG(float, 0x1489f0c);
  if ((*(byte *)(gen_frame + 0xef)) == 0) {
    (*(float *)(gen_frame + 0xd8)) = 7.42688e-44;
  }
  piVar6 = (int *)F_00a5f8a0(*(undefined * PTR32 *)(iVar3 + 4));
  ((code *)*(gen_code32 *)(*piVar6 + 0x40))(piVar6,((undefined1 *)(gen_frame + 0x1f0)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0xd8))));
  (*(float *)(gen_frame + 0x90)) = (*(float *)(gen_frame + 0x220));
  (*(float *)(gen_frame + 0x94)) = (*(float *)(gen_frame + 0x224));
  (*(float *)(gen_frame + 0x98)) = (*(float *)(gen_frame + 0x228));
  piVar6 = (int *)F_00a5f8a0(*(undefined * PTR32 *)(iVar4 + 4));
  ((code *)*(gen_code32 *)(*piVar6 + 0x40))(piVar6,((undefined1 *)(gen_frame + 0x230)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0xd8))));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  fVar13 = (float)((float10)(*(float *)(gen_frame + 0x260)) - (float10)(*(float *)(gen_frame + 0x90)));
  (*(float *)(gen_frame + 0xc0)) = fVar13;
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  fVar14 = (float)((float10)(*(float *)(gen_frame + 0x264)) - (float10)(*(float *)(gen_frame + 0x94)));
  (*(float *)(gen_frame + 0xc4)) = fVar14;
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x268)) - (float10)(*(float *)(gen_frame + 0x98)));
  (*(float *)(gen_frame + 0xc8)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)fVar1 * (float10)fVar1 +
                 ((float10)fVar14 * (float10)fVar14 + (float10)fVar13 * (float10)fVar13))));
  (*(float *)(gen_frame + 0xe4)) = fVar2;
  fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
  (*(float *)(gen_frame + 0xe4)) = fVar2;
  fVar2 = (float)((float10)1 / (float10)fVar2);
  (*(float *)(gen_frame + 0xac)) = fVar2;
  fVar10 = (float10)fVar2;
  (*(float *)(gen_frame + 0xb0)) = (float)(fVar10 * (float10)fVar13);
  (*(float *)(gen_frame + 0xb4)) = (float)((float10)fVar14 * fVar10);
  (*(float *)(gen_frame + 0xb8)) = (float)(fVar10 * (float10)fVar1);
  fVar9 = (float10)0;
  fVar12 = (float10)(float)((float10)fVar14 * fVar10) * fVar9;
  fVar11 = (float10)(float)(fVar10 * (float10)fVar1);
  (*(float *)(gen_frame + 0x50)) = (float)(fVar12 - fVar11);
  fVar10 = (float10)(float)(fVar10 * (float10)fVar13);
  (*(float *)(gen_frame + 0xd8)) = 0.0;
  (*(float *)(gen_frame + 0xac)) = 0.0;
  (*(float *)(gen_frame + 0x54)) = (float)(fVar11 * fVar9 - fVar10 * fVar9);
  (*(float *)(gen_frame + 0x8c)) = REFG(float, 0x1088068);
  (*(float *)(gen_frame + 0x58)) = (float)(fVar10 - fVar12);
  fVar13 = REFG(float, 0x1087f04);
  if ((*(byte *)(gen_frame + 0xef)) == 0) {
    piVar6 = (int *)F_00a5f8a0(*(undefined * PTR32 *)(iVar3 + 4));
    ((code *)*(gen_code32 *)(*piVar6 + 0x40))(piVar6,((undefined1 *)(gen_frame + 0x130)),0x19);
    (*(float *)(gen_frame + 0xb4)) = (*(float *)(gen_frame + 0x164));
    piVar6 = (int *)F_00a5f8a0(*(undefined * PTR32 *)(iVar4 + 4));
    ((code *)*(gen_code32 *)(*piVar6 + 0x40))(piVar6,((undefined1 *)(gen_frame + 0xf0)),0x19);
    ((float *)(gen_frame + 0x2b0))[1] = (*(float *)(gen_frame + 0x124));
    piVar6 = (int *)F_00a5f8a0(*(undefined * PTR32 *)(iVar3 + 4));
    ((code *)*(gen_code32 *)(*piVar6 + 0x40))(piVar6,((undefined1 *)(gen_frame + 0x170)),0x47);
    piVar6 = (int *)F_00a5f8a0(*(undefined * PTR32 *)(iVar4 + 4));
    ((code *)*(gen_code32 *)(*piVar6 + 0x40))(piVar6,((undefined1 *)(gen_frame + 0x1b0)),0x47);
    fVar14 = (float)((float10)(*(float *)(gen_frame + 0xb4)) - (float10)(*(float *)(gen_frame + 0x1a4)));
    (*(float *)(gen_frame + 0x68)) = fVar14;
    fVar1 = (float)((float10)((float *)(gen_frame + 0x2b0))[1] - (float10)(*(float *)(gen_frame + 0x1e4)));
    (*(float *)(gen_frame + 0xdc)) = fVar1;
    (*(float *)(gen_frame + 0x6c)) = fVar14;
    (*(int * PTR32 *)(gen_frame + 0xe8)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar1)));
    if ((float10)fVar1 < (float10)fVar14) {
      (*(float *)(gen_frame + 0x6c)) = fVar1;
      (*(int * PTR32 *)(gen_frame + 0xe8)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar14)));
    }
    fVar14 = (float)((float10)(*(float *)(gen_frame + 0x6c)) / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xe8))))));
    (*(int * PTR32 *)(gen_frame + 0xe8)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar14)));
    fVar9 = (float10)fVar14;
    if ((float10)REFG(float, 0x1094824) < fVar9) {
      (*(float *)(gen_frame + 0xac)) = ((float)GEN_TOF(((fVar9 * (float10)(*(float *)(gen_frame + 0x6c))) * (float10)REFG(double, 0x1094800))));
    }
    fVar14 = ((float)GEN_TOF((((float10)1 - fVar9) * (float10)*(double *)&REFG(undefined, 0x10b9488))));
    (*(float *)(gen_frame + 0xdc)) = fVar14;
    if ((float10)fVar14 < (float10)0) {
      (*(float *)(gen_frame + 0xdc)) = 0.0;
    }
    if ((*(uint *)(gen_frame + 0xa8)) == 5) {
      (*(float *)(gen_frame + 0x8c)) = REFG(float, 0x10ac1a8);
      piVar6 = (int *)F_00a5f290(*(undefined * PTR32 *)(iVar4 + 4));
      (*(int * PTR32 *)(gen_frame + 0xe8)) = piVar6;
      piVar6 = (int *)F_00a5f290(*(undefined * PTR32 *)(iVar3 + 4));
      if (((*(int * PTR32 *)(gen_frame + 0xe8)) == (int *)0x0) || (piVar6 == (int *)0x0)) goto LAB_006c80d5;
      (*(byte *)(gen_frame + 0xef)) = *(byte *)(piVar6 + 0xb6e);
      (*(byte *)(gen_frame + 0xee)) = *(byte *)((*(int * PTR32 *)(gen_frame + 0xe8)) + 0xb6e);
      uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6);
      uVar8 = (uint)(*(byte *)(gen_frame + 0xef));
      uVar5 = uVar5 & 0xff;
      uVar7 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xe8)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0xe8)));
      fVar14 = F_006b9c10((uint)(*(byte *)(gen_frame + 0xee)),uVar7 & 0xff,uVar8,uVar5);
      fVar9 = (float10)fVar14;
    }
    else {
      (*(float *)(gen_frame + 0x8c)) = REFG(float, 0x10ac168);
      piVar6 = (int *)F_00a5f290(*(undefined * PTR32 *)(iVar3 + 4));
      (*(int * PTR32 *)(gen_frame + 0xe8)) = piVar6;
      piVar6 = (int *)F_00a5f290(*(undefined * PTR32 *)(iVar4 + 4));
      if (((*(int * PTR32 *)(gen_frame + 0xe8)) == (int *)0x0) || (piVar6 == (int *)0x0)) goto LAB_006c80d5;
      (*(byte *)(gen_frame + 0xee)) = *(byte *)(piVar6 + 0xb6e);
      (*(byte *)(gen_frame + 0xef)) = *(byte *)((*(int * PTR32 *)(gen_frame + 0xe8)) + 0xb6e);
      uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6);
      uVar8 = (uint)(*(byte *)(gen_frame + 0xee));
      uVar5 = uVar5 & 0xff;
      uVar7 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xe8)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0xe8)));
      fVar14 = F_006b9c10((uint)(*(byte *)(gen_frame + 0xef)),uVar7 & 0xff,uVar8,uVar5);
      fVar9 = -(float10)fVar14;
    }
    (*(float *)(gen_frame + 0xd8)) = (float)fVar9;
  }
LAB_006c80d5: ;
  ((float *)(gen_frame + 0x2b0))[0] = 0.0;
  ((float *)(gen_frame + 0x2b0))[1] = gen_bits2f(REFG(float, 0x10946b8));
  ((float *)(gen_frame + 0x2b0))[2] = gen_bits2f(REFG(float, 0x10b9484));
  ((float *)(gen_frame + 0x2b0))[3] = gen_bits2f(REFG(float, 0x10b9480));
  (*(undefined4 *)(gen_frame + 0x2c0)) = REFG(float, 0x10b947c);
  (*(undefined4 *)(gen_frame + 0x2c4)) = REFG(float, 0x10947a4);
  (*(undefined4 *)(gen_frame + 0x2c8)) = REFG(float, 0x10b9478);
  fVar14 = ((float)GEN_TOF((((float10)((float *)(gen_frame + 0x2b0))[(int)((*(uint *)(gen_frame + 0xa8)))] * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                  (float10)*(double *)&REFG(undefined, 0x1080220))));
  (*(undefined * PTR32 *)(gen_frame + 0xe0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
  fVar9 = F_00c4cde0(fVar13,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)fVar14);
  (*(int * PTR32 *)(gen_frame + 0xe8)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar9)));
  fVar9 = F_00c4ca20(fVar13,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xe0))))));
  fVar13 = (float)fVar9;
  (*(undefined * PTR32 *)(gen_frame + 0xe0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar13)));
  ((float *)(gen_frame + 0x270))[1] = 0.0;
  ((float *)(gen_frame + 0x270))[0] = fVar13;
  (*(undefined4 *)(gen_frame + 0x280)) = 0;
  (*(float *)(gen_frame + 0x284)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x288)) = 0;
  (*(undefined4 *)(gen_frame + 0x294)) = 0;
  ((float *)(gen_frame + 0x270))[2] = ((float)GEN_TOF(-(float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xe8)))))));
  (*(undefined4 *)(gen_frame + 0x2a0)) = 0;
  (*(undefined4 *)(gen_frame + 0x2a4)) = 0;
  (*(float *)(gen_frame + 0x290)) = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xe8)))));
  (*(undefined4 *)(gen_frame + 0x2a8)) = 0;
  (*(float *)(gen_frame + 0x298)) = fVar13;
  fVar9 = (float10)(*(float *)(gen_frame + 0x8c));
  (*(float *)(gen_frame + 0xb0)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0xc0)));
  (*(float *)(gen_frame + 0xb4)) = (float)((float10)(*(float *)(gen_frame + 0xc4)) * fVar9);
  (*(float *)(gen_frame + 0xb8)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0xc8)));
  fVar13 = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)(*(float *)(gen_frame + 0xc0))) + (float10)(*(float *)(gen_frame + 0x90)))));
  (*(float *)(gen_frame + 0xc0)) = fVar13;
  fVar14 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0xc4)) * fVar9) + (float10)(*(float *)(gen_frame + 0x94)))));
  (*(float *)(gen_frame + 0xc4)) = fVar14;
  fVar1 = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)(*(float *)(gen_frame + 0xc8))) + (float10)(*(float *)(gen_frame + 0x98)))));
  (*(float *)(gen_frame + 0xc8)) = fVar1;
  (*(float *)(gen_frame + 0x70)) = fVar13;
  (*(float *)(gen_frame + 0x78)) = fVar1;
  (*(float *)(gen_frame + 0x74)) = (float)((float10)fVar14 - (float10)(*(float *)(gen_frame + 0xac)));
  fVar13 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xdc)) +
                  ((float10)(*(float *)(gen_frame + 0xe4)) +
                  ((float10)*((float *)GEN_TOP((*(int *)(iVar4 + 4) + 0xc0))) +
                  (float10)*((float *)GEN_TOP((*(int *)(iVar3 + 4) + 0xc0)))) * (float10)REFG(double, 0x1088108)))));
  (*(float *)(gen_frame + 0xe4)) = fVar13;
  fVar13 = (float)((float10)REFG(double, 0x1088108) * (float10)fVar13);
  (*(float *)(gen_frame + 0xe4)) = fVar13;
  fVar9 = (float10)(*(float *)(gen_frame + 0xd4));
  (*(float *)(gen_frame + 0xd4)) = (float)(fVar9 * (float10)*(double *)&REFG(undefined, 0x10968c8));
  fVar9 = F_00c4cde0(REFG(float, 0x1087f04),in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,
                       (float10)(float)(fVar9 * (float10)*(double *)&REFG(undefined, 0x10968c8)));
  (*(float *)(gen_frame + 0xd4)) = (float)fVar9;
  fVar13 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xe4)) / ((float10)(float)fVar9 * (float10)REFG(double, 0x1088108)))));
  (*(float *)(gen_frame + 0xd4)) = fVar13;
  fVar9 = (float10)fVar13;
  (*(float *)(gen_frame + 0xb0)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x50)));
  (*(float *)(gen_frame + 0xb4)) = (float)((float10)(*(float *)(gen_frame + 0x54)) * fVar9);
  (*(float *)(gen_frame + 0xb8)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x58)));
  (*(float *)(gen_frame + 0x40)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x50)));
  (*(float *)(gen_frame + 0x44)) = (float)((float10)(*(float *)(gen_frame + 0x54)) * fVar9);
  (*(float *)(gen_frame + 0x48)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x58)));
  F_004eea10(&(*(float *)(gen_frame + 0x40)),(uint)((float *)(gen_frame + 0x270)));
  fVar13 = (float)((float10)(*(float *)(gen_frame + 0x70)) + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x90)) = fVar13;
  (*(float *)(gen_frame + 0x94)) = (float)((float10)(*(float *)(gen_frame + 0x44)) + (float10)(*(float *)(gen_frame + 0x74)));
  fVar14 = (float)((float10)(*(float *)(gen_frame + 0x78)) + (float10)(*(float *)(gen_frame + 0x48)));
  (*(float *)(gen_frame + 0x98)) = fVar14;
  (*(float *)(gen_frame + 0x30)) = fVar13;
  (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x44)) + (float10)(*(float *)(gen_frame + 0x74)));
  (*(float *)(gen_frame + 0x38)) = fVar14;
  if (GEN_ISNAN((*(float *)(gen_frame + 0xd8))) == (GEN_ISNAN((*(float *)(gen_frame + 0xd8))) || (*(float *)(gen_frame + 0xd8)) == 0.0)) {
    fVar13 = (float)((float10)(*(float *)(gen_frame + 0x70)) - (float10)fVar13);
    (*(float *)(gen_frame + 0x50)) = fVar13;
    (*(float *)(gen_frame + 0xb4)) = 0.0;
    fVar14 = (float)((float10)(*(float *)(gen_frame + 0x78)) - (float10)fVar14);
    (*(float *)(gen_frame + 0x58)) = fVar14;
    (*(float *)(gen_frame + 0xb0)) = fVar13;
    (*(float *)(gen_frame + 0xb8)) = fVar14;
    F_0065e920(((float *)(gen_frame + 0x2b0)),(uint)&(*(float *)(gen_frame + 0xb0)));
    F_0054ce40(&(*(float *)(gen_frame + 0xc0)),(uint)((float *)(gen_frame + 0x2b0)),(uint)&(*(undefined4 *)(gen_frame + 0x0)));
    fVar10 = (float10)(*(float *)(gen_frame + 0xc0));
    fVar11 = (float10)(*(float *)(gen_frame + 0xd8));
    (*(float *)(gen_frame + 0xc0)) = (float)(fVar11 * fVar10);
    fVar12 = (float10)(*(float *)(gen_frame + 0xc4));
    (*(float *)(gen_frame + 0xc4)) = (float)(fVar12 * fVar11);
    fVar9 = (float10)(*(float *)(gen_frame + 0xc8));
    (*(float *)(gen_frame + 0xc8)) = (float)(fVar11 * fVar9);
    fVar10 = (float10)(float)(fVar11 * fVar10);
    (*(float *)(gen_frame + 0x70)) = (float)(fVar10 + (float10)(*(float *)(gen_frame + 0x70)));
    fVar12 = (float10)(float)(fVar12 * fVar11);
    (*(float *)(gen_frame + 0x74)) = (float)(fVar12 + (float10)(*(float *)(gen_frame + 0x74)));
    fVar9 = (float10)(float)(fVar11 * fVar9);
    (*(float *)(gen_frame + 0x78)) = (float)(fVar9 + (float10)(*(float *)(gen_frame + 0x78)));
    (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x90)) + fVar10);
    (*(float *)(gen_frame + 0x34)) = (float)(fVar12 + (float10)(*(float *)(gen_frame + 0x94)));
    (*(float *)(gen_frame + 0x38)) = (float)(fVar9 + (float10)(*(float *)(gen_frame + 0x98)));
  }
  F_00b718e0((*(undefined * PTR32 *)(gen_frame + 0x88)),&(*(float *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x30)));
  F_00a02240(((undefined1 *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x2dc)) ^ (uint)(uint)(gen_frame + 0x2e0));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf79 */
uint F_006c8500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c8500u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined * this_00;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[1]));
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),uVar1 != 0);
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = ((undefined *)GEN_TOP((&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)]));
  }
  F_00b72010(this_00,(*(undefined4 *)&gen_args[1]));
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf86 */
uint F_006c8570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c8570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00ab6c00(uVar1,0,0,0,0,0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf89 */
uint F_006c85b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c85b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0xd4 + uVar1))) = 1;
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf90 */
uint F_006c85f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c85f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0xd4 + uVar1))) = 0;
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf97 */
uint F_006c8630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c8630u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[1]));
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),(char)uVar1);
  F_00b7c0d0(&REFG(undefined, 0x133e5c0),1,(*(undefined4 *)&gen_args[1]),*(float *)&REFG(undefined, 0x10b4230));
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf98 */
uint F_006c8680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c8680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  iVar1 = REFG(int, 0x137104c);
  uVar4 = uVar2 * 0x3c + uVar3;
  iVar5 = ((((((int)uVar2 >> 0x1f) << 4 | uVar2 >> 0x1c) - ((int)uVar2 >> 0x1f)) -
           (uint)(uVar2 * 0x10 < uVar2)) * 4 | uVar2 * 0xf >> 0x1e) + ((int)uVar3 >> 0x1f) +
          (uint)CARRY4(uVar2 * 0x3c,uVar3);
  *(undefined1 *)(REFG(int, 0x137104c) + 0x1250) = 1;
  *(uint *)(iVar1 + 0x1248) = uVar4 * 0x3c;
  *(uint *)(iVar1 + 0x124c) =
       (((iVar5 * 0x10 | uVar4 >> 0x1c) - iVar5) - (uint)(uVar4 * 0x10 < uVar4)) * 4 |
       uVar4 * 0xf >> 0x1e;
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf101 */
uint F_006c8720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c8720u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int * piVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[1]));
  bVar1 = F_00a01e10(((undefined1 *)(gen_frame + 0xc)),2);
  (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),bVar1);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  ((code *)*(gen_code32 *)(*piVar2 + 0x74))(piVar2,(*(undefined4 *)&gen_args[1]));
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf64 */
uint F_006c8770(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6c8770u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),2);
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(((fVar3 * (float10)*(double *)&REFG(undefined, 0x1080228)) / (float10)*(double *)&REFG(undefined, 0x1080220)
                    )));
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),3);
  (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((fVar3 * (float10)*(double *)&REFG(undefined, 0x1080228)) / (float10)*(double *)&REFG(undefined, 0x1080220)
                    )));
  uVar1 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x14)),4);
  fVar3 = (float10)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x34)) = (float)(fVar3 * (float10)*(double *)&REFG(double, 0x10b9470));
  (*(float *)(gen_frame + 0x38)) = 0.0;
  (*(float *)&gen_args[1]) = 0.0;
  F_006c7460(((undefined1 *)(gen_frame + 0xc)),5,&(*(float *)(gen_frame + 0x38)),&(*(float *)&gen_args[1]));
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)];
  }
  F_00b71b90(uVar2,(*(float *)(gen_frame + 0x2c)),(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(*(float *)&gen_args[1]));
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf65 */
uint F_006c8870(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6c8870u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),2);
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(((fVar3 * (float10)*(double *)&REFG(undefined, 0x1080228)) / (float10)*(double *)&REFG(undefined, 0x1080220)
                    )));
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),3);
  (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((fVar3 * (float10)*(double *)&REFG(undefined, 0x1080228)) / (float10)*(double *)&REFG(undefined, 0x1080220)
                    )));
  uVar1 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x14)),4);
  fVar3 = (float10)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x34)) = (float)(fVar3 * (float10)*(double *)&REFG(double, 0x10b9470));
  (*(float *)(gen_frame + 0x38)) = 0.0;
  (*(float *)&gen_args[1]) = 0.0;
  F_006c7460(((undefined1 *)(gen_frame + 0xc)),5,&(*(float *)(gen_frame + 0x38)),&(*(float *)&gen_args[1]));
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)];
  }
  F_00b71be0(uVar2,(*(float *)(gen_frame + 0x2c)),(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(*(float *)&gen_args[1]));
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf69 */
uint F_006c8970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c8970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  ((uint *)(gen_frame + 0x2c))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  bVar1 = 0;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0xc)));
  if ((2 < (int)uVar3) && (uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3), uVar3 != 0)) {
    bVar1 = 1;
  }
  if (((int)uVar2 < 0) || (2 < (int)uVar2)) {
    uVar2 = 0;
  }
  ((uint *)(gen_frame + 0x2c))[0] = 0x3c;
  ((uint *)(gen_frame + 0x2c))[1] = 0x1e;
  ((uint *)(gen_frame + 0x2c))[2] = 0x5a;
  uVar2 = ((uint *)(gen_frame + 0x2c))[(int)(uVar2)];
  piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  ((code *)*(gen_code32 *)(*piVar4 + 0xa4))(piVar4,(uint)bVar1,uVar2,1);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  F_00c47745(((uint *)(gen_frame + 0x2c))[3] ^ (uint)(uint)(gen_frame + 0x3c));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf70 */
uint F_006c8a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c8a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  ((uint *)(gen_frame + 0x2c))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  bVar1 = 0;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0xc)));
  if ((2 < (int)uVar3) && (uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3), uVar3 != 0)) {
    bVar1 = 1;
  }
  if (((int)uVar2 < 0) || (2 < (int)uVar2)) {
    uVar2 = 0;
  }
  ((uint *)(gen_frame + 0x2c))[0] = 0x3c;
  ((uint *)(gen_frame + 0x2c))[1] = 0x1e;
  ((uint *)(gen_frame + 0x2c))[2] = 0x5a;
  uVar2 = ((uint *)(gen_frame + 0x2c))[(int)(uVar2)];
  piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  ((code *)*(gen_code32 *)(*piVar4 + 0xa8))(piVar4,(uint)bVar1,uVar2,1);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  F_00c47745(((uint *)(gen_frame + 0x2c))[3] ^ (uint)(uint)(gen_frame + 0x3c));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf74 */
uint F_006c8af0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6c8af0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),2);
  (*(float *)(gen_frame + 0x2c)) = (float)fVar3;
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),3);
  (*(float *)(gen_frame + 0x30)) = (float)fVar3;
  uVar1 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x14)),4);
  fVar3 = (float10)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x34)) = (float)(fVar3 * (float10)*(double *)&REFG(double, 0x10b9470));
  (*(float *)(gen_frame + 0x38)) = 0.0;
  (*(float *)&gen_args[1]) = 0.0;
  F_006c7460(((undefined1 *)(gen_frame + 0xc)),5,&(*(float *)(gen_frame + 0x38)),&(*(float *)&gen_args[1]));
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)];
  }
  F_00b71d10(uVar2,(*(float *)(gen_frame + 0x2c)),(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(*(float *)&gen_args[1]));
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf75 */
uint F_006c8bd0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6c8bd0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),2);
  (*(float *)(gen_frame + 0x2c)) = (float)fVar3;
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),3);
  (*(float *)(gen_frame + 0x30)) = (float)fVar3;
  uVar1 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x14)),4);
  fVar3 = (float10)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x34)) = (float)(fVar3 * (float10)*(double *)&REFG(double, 0x10b9470));
  (*(float *)(gen_frame + 0x38)) = 0.0;
  (*(float *)&gen_args[1]) = 0.0;
  F_006c7460(((undefined1 *)(gen_frame + 0xc)),5,&(*(float *)(gen_frame + 0x38)),&(*(float *)&gen_args[1]));
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)];
  }
  F_00b71d60(uVar2,(*(float *)(gen_frame + 0x2c)),(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(*(float *)&gen_args[1]));
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf77 */
uint F_006c8cb0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6c8cb0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),2);
  (*(float *)(gen_frame + 0x2c)) = (float)fVar3;
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),3);
  (*(float *)(gen_frame + 0x30)) = (float)fVar3;
  uVar1 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x14)),4);
  fVar3 = (float10)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x34)) = (float)(fVar3 * (float10)*(double *)&REFG(double, 0x10b9470));
  (*(float *)(gen_frame + 0x38)) = 0.0;
  (*(float *)&gen_args[1]) = 0.0;
  F_006c7460(((undefined1 *)(gen_frame + 0xc)),5,&(*(float *)(gen_frame + 0x38)),&(*(float *)&gen_args[1]));
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)];
  }
  F_00b71e90(uVar2,(*(float *)(gen_frame + 0x2c)),(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(*(float *)&gen_args[1]));
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf80 */
uint F_006c8d90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6c8d90u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),2);
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(((fVar3 * (float10)*(double *)&REFG(undefined, 0x1080228)) / (float10)*(double *)&REFG(undefined, 0x1080220)
                    )));
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),3);
  (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((fVar3 * (float10)*(double *)&REFG(undefined, 0x1080228)) / (float10)*(double *)&REFG(undefined, 0x1080220)
                    )));
  uVar1 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x14)),4);
  fVar3 = (float10)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x34)) = (float)(fVar3 * (float10)*(double *)&REFG(double, 0x10b9470));
  (*(float *)(gen_frame + 0x38)) = 0.0;
  (*(float *)&gen_args[1]) = 0.0;
  F_006c7460(((undefined1 *)(gen_frame + 0xc)),5,&(*(float *)(gen_frame + 0x38)),&(*(float *)&gen_args[1]));
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)];
  }
  F_00b71f50(uVar2,(*(float *)(gen_frame + 0x2c)),(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(*(float *)&gen_args[1]));
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf82 */
uint F_006c8e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c8e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  byte bVar2;
  uint uVar3;
  float10 fVar4;
  
  F_00a02210(((undefined1 *)(gen_frame + 0x4)),param_1);
  uVar3 = F_00a019d0(((undefined1 *)(gen_frame + 0x4)));
  fVar4 = F_00a01dd0(((undefined1 *)(gen_frame + 0x4)),2);
  (*(float *)(gen_frame + 0x24)) = (float)fVar4;
  (*(float *)(gen_frame + 0x28)) = 0.0;
  if (3 < (int)uVar3) {
    bVar2 = F_00a01f20(((undefined1 *)(gen_frame + 0x4)),4);
    if (bVar2 == 0) {
      param_1 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0xc)),4);
      (*(float *)(gen_frame + 0x28)) = (float)((float10)(int)param_1 * (float10)*(double *)&REFG(double, 0x10b9470));
    }
  }
  uVar1 = param_1 >> 8;
  param_1 = param_1 & 0xffffff00;
  if (2 < (int)uVar3) {
    bVar2 = F_00a01f20(((undefined1 *)(gen_frame + 0x4)),3);
    if (bVar2 == 0) {
      bVar2 = F_00a01e10(((undefined1 *)(gen_frame + 0x4)),3);
      param_1 = CONCAT31((int3)uVar1,bVar2);
    }
  }
  F_00b6b910(&REFG(undefined, 0x1375b9c),1,(*(float *)(gen_frame + 0x24)),(*(float *)(gen_frame + 0x28)),param_1);
  F_00a02240(((undefined1 *)(gen_frame + 0x4)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf83 */
uint F_006c8f50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6c8f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),(undefined4)gen_fl2bits(param_1));
  param_1 = 0.0;
  uVar2 = F_00a019d0(((byte *)(gen_frame + 0xc)));
  if (1 < (int)uVar2) {
    bVar1 = F_00a01f20(((byte *)(gen_frame + 0xc)),2);
    if (bVar1 == 0) {
      uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
      param_1 = (float)((float10)(int)uVar2 * (float10)*(double *)&REFG(double, 0x10b9470));
    }
  }
  F_00b6b970(&REFG(undefined, 0x1375b9c),param_1,1);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf87 */
uint F_006c8fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c8fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_006b93e0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x70))),uVar1);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf91 */
uint F_006c9010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c9010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_ecx;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  in_ecx = F_00424810(REFG(undefined4, 0x137104c));
  if (in_ecx != 0) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar1 != (int *)0x0) {
      uVar4 = 0;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
      uVar2 = F_00763050(uVar2,uVar4);
      if (uVar2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = uVar2 + 0x10;
      }
      F_00975110(in_ecx,iVar3);
    }
  }
  if (*(char *)(REFG(int, 0x1488344) + 0x725) == '\0') {
    *(undefined1 *)(REFG(int, 0x1488344) + 0x725) = 1;
  }
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf108 */
uint F_006c9080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c9080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  piVar3 = *(int * PTR32 *)(iVar1 + 4);
  if (uVar2 != 0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,2,0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return 0;
  }
  ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,2,0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf109 */
uint F_006c9100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c9100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  float * pfVar7;
  float * pfVar8;
  code * pcVar9;
  float10 fVar10;
  
  F_00a02210(((undefined1 *)(gen_frame + 0x0)),param_1);
  uVar4 = F_00a01d20(((undefined1 *)(gen_frame + 0x0)),1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x8)),1,uVar4);
  piVar5 = *(int * PTR32 *)(*piVar5 + 4);
  bVar3 = F_00a01f40(((undefined1 *)(gen_frame + 0x0)),2);
  if (bVar3 == 1) {
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)piVar5[0x2c];
    fVar10 = F_00a01dd0(((undefined1 *)(gen_frame + 0x0)),2);
    (*(float *)(gen_frame + 0x3c)) = (float)fVar10;
    pcVar9 = *(gen_code32 *)(*piVar5 + 0x48);
    fVar1 = ((float)GEN_TOF((((float10)(float)fVar10 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                   (float10)*(double *)&REFG(undefined, 0x1080220))));
    (*(float *)(gen_frame + 0x3c)) = fVar1;
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar1 + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x38)))))))));
  }
  else {
    uVar4 = F_00a01d20(((undefined1 *)(gen_frame + 0x0)),2);
    piVar6 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x8)),2,uVar4);
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = *(undefined * PTR32 *)(*piVar6 + 4);
    pfVar7 = (float *)F_00a5feb0(piVar5);
    pfVar8 = (float *)F_00a5feb0((*(undefined * PTR32 *)(gen_frame + 0x38)));
    (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar8 - (float10)*pfVar7);
    iVar2 = *piVar5;
    (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar8[2] - (float10)pfVar7[2]);
    fVar10 = F_00c4d1fa((float10)(float)((float10)pfVar8[2] - (float10)pfVar7[2]));
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)fVar10)));
    pcVar9 = *(gen_code32 *)(iVar2 + 0x48);
  }
  (*pcVar9)(piVar5,(*(undefined * PTR32 *)(gen_frame + 0x38)));
  F_00a02240(((undefined1 *)(gen_frame + 0x0)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf110 */
uint F_006c9200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c9200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  this_00 = *(undefined * PTR32 *)(*piVar2 + 4);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar4 = 0;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0xc)));
  if (2 < (int)uVar3) {
    uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  }
  F_00a5f860(this_00,uVar1,uVar4);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf111 */
uint F_006c9280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c9280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  this_00 = *(undefined * PTR32 *)(*piVar2 + 0x60);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00ae2030(this_00,uVar1 & 0xffff);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf112 */
uint F_006c92e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c92e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  undefined * this_01;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  piVar3 = (int *)*piVar3;
  this_00 = (undefined *)piVar3[0x18];
  this_01 = *(undefined * PTR32 *)((int)this_00 + 0xf0);
  uVar2 = 0;
  bVar1 = F_005dbc90(this_01,1);
  if (bVar1 != 0) {
    uVar2 = 2;
  }
  bVar1 = F_005dbc90(this_01,2);
  if (bVar1 != 0) {
    uVar2 = uVar2 | 4;
  }
  bVar1 = F_005dbc90(this_01,4);
  if (bVar1 != 0) {
    uVar2 = uVar2 | 0x10;
  }
  if ((short)uVar2 != 0) {
    F_00ae2030(this_00,uVar2);
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,5,0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return 0;
  }
  F_005f51d0(this_01,0,1);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf114 */
uint F_006c93a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c93a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  this_00 = *(undefined * PTR32 *)(iVar1 + 0x60);
  uVar4 = F_00aa02d0(this_00,uVar2,0);
  if ((char)uVar4 != '\0') {
    F_00aa01d0(this_00,uVar2,0);
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf118 */
uint F_006c9410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c9410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 in_ecx;
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  in_ecx = *(undefined4 *)(*piVar2 + 0x60);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00aa0560(in_ecx,uVar1);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf123 */
uint F_006c9470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c9470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *(int *)(*piVar3 + 0x60);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  *(bool *)(iVar1 + 0x2ea7) = uVar2 != 0;
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf130 */
uint F_006c94d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c94d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[1]));
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  this_00 = *(undefined * PTR32 *)(*piVar3 + 0x60);
  bVar1 = F_00a01e10(((byte *)(gen_frame + 0xc)),2);
  (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),bVar1);
  F_00aa6f20(this_00,(*(undefined4 *)&gen_args[1]),1);
  if (bVar1 == 0) {
    uVar4 = 0x30f;
  }
  else {
    uVar4 = 0x22;
  }
  F_00aa0560(this_00,uVar4);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf131 */
uint F_006c9550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c9550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar3);
  F_00aa80c0(*(undefined * PTR32 *)(*piVar4 + 0x60),uVar1,uVar2,0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf132 */
uint F_006c95c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c95c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar3);
  F_00aa2260(*(undefined * PTR32 *)(*piVar4 + 0x60),uVar1,uVar2);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf134 */
uint F_006c9630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c9630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  bVar1 = F_00a01e10(((byte *)(gen_frame + 0xc)),2);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  if (bVar1 != 0) {
    F_00aa05d0(*(undefined * PTR32 *)(*piVar3 + 0x60),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return 0;
  }
  F_00aa0600(*(undefined * PTR32 *)(*piVar3 + 0x60),0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf125 */
uint F_006c96a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c96a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  uVar2 = param_1 >> 8;
  param_1 = param_1 & 0xffffff00;
  uVar4 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  iVar6 = iVar1;
  if (2 < (int)uVar4) {
    uVar5 = F_00a01d20(((byte *)(gen_frame + 0x8)),3);
    piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3,uVar5);
    iVar6 = *piVar3;
  }
  if (3 < (int)uVar4) {
    uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),4);
    param_1 = CONCAT31((int3)uVar2,(char)uVar4);
  }
  F_00ab4370((*(uint *)(gen_frame + 0x28)),*(undefined4 *)(iVar1 + 0x60),*(undefined4 *)(iVar6 + 0x60),param_1,0);
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf126 */
uint F_006c9760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c9760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  float10 fVar2;
  uint uVar3;
  int * piVar4;
  float10 fVar5;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  iVar1 = *(int *)(iVar1 + 0x60);
  if (uVar3 == 0) {
    uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3);
    fVar5 = (float10)(int)uVar3;
    if ((int)uVar3 < 0) {
      fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar2 = (float10)*(double *)&REFG(undefined, 0x1088070);
    F_00aa0980(iVar1,(float)(float10)0,0);
    *(float *)(iVar1 + 0x2ec8) = ((float)GEN_TOF((((float10)1 / fVar5) * fVar2)));
    F_00a02240(((byte *)(gen_frame + 0x8)));
    return 0;
  }
  if (uVar3 == 1) {
    uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3);
    fVar5 = (float10)(int)uVar3;
    if ((int)uVar3 < 0) {
      fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF((((float10)1 / fVar5) * (float10)*(double *)&REFG(undefined, 0x1088070))));
    F_00aa0980(iVar1,(float)((float10)1 - (float10)*(double *)&REFG(undefined, 0x108bec8)),0);
    *(float *)(iVar1 + 0x2ec8) = ((float)GEN_TOF(-(float10)(*(float *)(gen_frame + 0x28))));
    F_00a02240(((byte *)(gen_frame + 0x8)));
    return 0;
  }
  if (uVar3 == 2) {
    fVar5 = (float10)(float)((float10)1 - (float10)*(double *)&REFG(undefined, 0x108bec8));
  }
  else {
    if (uVar3 != 3) goto LAB_006c9896;
    fVar5 = (float10)0;
  }
  F_00aa0980(iVar1,(float)fVar5,0);
  *(undefined4 *)(iVar1 + 0x2ec8) = REFG(float, 0x10b9490);
LAB_006c9896: ;
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneTaskInterface::vf3 */
byte F_006c98b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c98b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_2 != (int *)0x0) {
    if ((*(uint *)(param_1 + 0x6c) & 0x400) != 0) {
      piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1,0,0xf,1);
    }
    ((code *)*(gen_code32 *)(*param_2 + 0x14c))(param_2,param_2[0x18]);
  }
  return 1;
}

/* ref: Client::Game::Event::CreateAppearanceTask::vf3 */
byte F_006c9900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c9900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (*(int *)(this + 0x90) != 0) {
    F_00ae0cd0(&REFG(undefined, 0x14c0920),*(undefined4 *)(this + 0x14));
  }
  if (param_2 != (int *)0x0) {
    if ((*(uint *)(param_1 + 0x6c) & 0x400) != 0) {
      piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1,0,0xf,1);
    }
    ((code *)*(gen_code32 *)(*param_2 + 0x14c))(param_2,param_2[0x18]);
  }
  return 1;
}

/* ref: Client::Game::Event::PlayCutSceneTask::vf2 */
uint F_006c9970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c9970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  if ((*(uint *)(param_1 + 0x6c) & 0x400) != 0) {
    F_00a06560(0);
  }
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  uVar2 = F_007cbc20(this_00);
  if (param_2 != (int *)0x0) {
    uVar2 = F_00b5f400(REFG(undefined4, 0x14c4ea0),0x1000000f);
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x17c))(param_2,uVar2);
  }
  return uVar2;
}

/* ref: Client::Game::Event::PostCutSceneTask::vf1 */
uint F_006c99d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c99d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int * piVar5;
  uint uVar6;
  undefined * pvVar7;
  undefined4 * in_ecx;
  
  if (*(char *)(param_1 + 4) != '\0') goto LAB_006c9bd5;
  piVar5 = (int *)F_00424750(REFG(int, 0x137104c));
  in_ecx = (undefined4 *)(param_1 + 0x10);
  if ((*(char *)*in_ecx != '\0') && (*(char *)(param_1 + 5) == '\0')) {
    uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0xa0))(piVar5);
    pvVar7 = REFG(undefined4, 0x1375b00);
    if ((uVar6 & 8) != 0) {
      return 0;
    }
    if (*(char *)(param_2 + 0xd4) == '\0') {
      uVar6 = F_0042a990(in_ecx);
      bVar3 = F_0052f530(pvVar7,uVar6);
      pvVar7 = REFG(undefined4, 0x1375b00);
      if (bVar3 == 0) {
        return 0;
      }
      uVar6 = F_0042a990(in_ecx);
      bVar3 = F_0052f640(pvVar7,uVar6);
      pvVar7 = REFG(undefined4, 0x1375b00);
      if (bVar3 == 0) {
        uVar6 = F_0042a990(in_ecx);
        F_0052f780(pvVar7,uVar6);
      }
    }
    pvVar7 = REFG(undefined4, 0x1375b00);
    uVar6 = F_0042a990(in_ecx);
    F_0052f5e0(pvVar7,uVar6);
    *(undefined1 *)(param_1 + 5) = 1;
  }
  if ((*(char *)(param_1 + 5) != '\0') && (*(int *)((int)REFG(undefined4, 0x1375b00) + 0x28) != 0)) {
    return 0;
  }
  F_005d54a0(&REFG(undefined, 0x1379c6c),1);
  iVar2 = *(int *)(REFG(int, 0x137104c) + 0x25f8);
  if (*(int *)(param_1 + 0xc) == 2) {
    if (iVar2 != 0) {
      F_004e7f70(iVar2,(float)(float10)1);
      goto LAB_006c9ae7;
    }
  }
  else {
LAB_006c9ae7: ;
    if (iVar2 != 0) {
      F_004e7cc0(iVar2,(float)(float10)0);
    }
  }
  pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x1c))(piVar5)));
  F_007cbc20(pvVar7);
  *(undefined1 *)(param_2 + 0xd4) = 0;
  F_004d1650(REFG(undefined4, 0x1370c18));
  uVar6 = 0;
  if ((*(char *)(param_2 + 0xd6) != '\0') &&
     (cVar4 = *(char *)(param_2 + 0xd6) + -1, *(char *)(param_2 + 0xd6) = cVar4, cVar4 == '\0')) {
    uVar6 = 2;
  }
  if ((*(char *)(param_2 + 0xd7) != '\0') &&
     (cVar4 = *(char *)(param_2 + 0xd7) + -1, *(char *)(param_2 + 0xd7) = cVar4, cVar4 == '\0')) {
    uVar6 = uVar6 | 4;
  }
  if ((*(char *)(param_2 + 0xd8) != '\0') &&
     (cVar4 = *(char *)(param_2 + 0xd8) + -1, *(char *)(param_2 + 0xd8) = cVar4, cVar4 == '\0')) {
    uVar6 = uVar6 | 8;
  }
  if ((*(char *)(param_2 + 0xd9) != '\0') &&
     (cVar4 = *(char *)(param_2 + 0xd9) + -1, *(char *)(param_2 + 0xd9) = cVar4, cVar4 == '\0')) {
    uVar6 = uVar6 | 0x20;
  }
  if ((*(char *)(param_2 + 0xda) != '\0') &&
     (cVar4 = *(char *)(param_2 + 0xda) + -1, *(char *)(param_2 + 0xda) = cVar4, cVar4 == '\0')) {
    uVar6 = uVar6 | 1;
  }
  if ((*(char *)(param_2 + 0xdb) != '\0') &&
     (cVar4 = *(char *)(param_2 + 0xdb) + -1, *(char *)(param_2 + 0xdb) = cVar4, cVar4 == '\0')) {
    uVar6 = uVar6 | 0x10;
  }
  if ((uVar6 != 0) && (piVar5 = (int *)F_00424750(REFG(int, 0x137104c)), piVar5 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar5 + 0xb0))(piVar5,uVar6,1,1);
  }
  *(undefined1 *)(param_1 + 4) = 1;
LAB_006c9bd5: ;
  bVar3 = F_005e1600();
  if ((((bVar3 != 0) && (bVar3 = F_005d99e0(), piVar5 = REFG(undefined4, 0x1379694), bVar3 != 0)) &&
      (REFG(undefined4, 0x1379694) != (int *)0x0)) &&
     (((uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0x68))))(REFG(undefined4, 0x1379694)), (char)uVar6 != '\0' &&
       (uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0x70))(piVar5), (char)uVar6 != '\0')) &&
      ((bVar3 = F_00a355b0(0x80), bVar3 != 0 &&
       (fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 8) -
                       (float10)*(float *)(REFG(int, 0x137104c) + 0x1198)))), *(float *)(param_1 + 8) = fVar1,
       !((float10)0 < (float10)fVar1))))))) {
    if (*(int *)(REFG(int, 0x137104c) + 0x25f8) != 0) {
      F_004e7cc0(*(int *)(REFG(int, 0x137104c) + 0x25f8),(float)(float10)1);
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_006c9c80 */
uint F_006c9c80(unsigned int gen_a0)
{
  GEN_ENTER(0x6c9c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  
  uVar1 = REFG(float, 0x1087ef8);
  *(byte *)((int)this + 8) = *(byte *)((int)this + 8) & 0xfc;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b9498));
  *(undefined4 *)((int)this + 4) = 2;
  *(undefined4 *)((int)this + 0xc) = uVar1;
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2,1,0,1);
  ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,0,0x18,1);
  F_00ab6c00(0x84,1,0,0,0,0);
  return (uint)this;
}

/* ref: Client::Game::Event::PlayStaffRollTask::vf1 */
uint F_006c9cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c9cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  byte bVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  int iVar8;
  undefined4 uVar9;
  
  piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
  fVar1 = *(float *)(this + 0xc);
  if (((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar1 <= *(float *)&REFG(undefined, 0x1088114))) &&
     (fVar1 = ((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(REFG(int, 0x137104c) + 0x1198)))),
     fVar7 = (float10)fVar1, *(float *)(this + 0xc) = fVar1,
     (!GEN_ISNAN(fVar7) && !GEN_ISNAN((float10)0)) && !(fVar7 <= (float10)0))) {
    return 0;
  }
  if (((byte)this[8] & 1) == 0) {
    uVar9 = *(undefined4 *)(this + 4);
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
    bVar2 = F_008976b0(pvVar4,uVar9);
    if (bVar2 != 0) {
      this[8] = (undefined1)((byte)this[8] | 1);
    }
  }
  else {
    if (((byte)this[8] & 2) == 0) {
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
      bVar2 = F_007cbcf0(pvVar4);
      if (bVar2 != 0) {
        F_00ab6c00(1,1,3000,3000,0,0);
        this[8] = (undefined1)((byte)this[8] | 2);
        return 0;
      }
    }
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
    uVar5 = F_007cbb90(pvVar4);
    if ((char)uVar5 != '\0') {
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
      F_007cbc20(pvVar4);
      this[8] = (undefined1)((byte)this[8] & 0xfd);
      iVar6 = *(int *)(this + 4) + 1;
      if (4 < iVar6) {
        return 1;
      }
      *(undefined4 *)(this + 0xc) = 0;
      iVar8 = iVar6;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
      bVar2 = F_008976b0(pvVar4,iVar8);
      if ((bVar2 != 0) && (*(int *)(this + 4) = iVar6, iVar6 == 3)) {
        F_00ab6c00(0x85,1,0,0,0,0);
      }
      return 0;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::PlayStaffRollTask::vf2 */
uint F_006c9e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c9e30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  F_007cbc20(this_00);
  uVar2 = F_00ab6c00(1,1,1000,1000,0,0);
  if (param_2 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x1b0))(param_2);
  }
  return uVar2;
}

/* ref: Client::Game::Event::PlayStaffRollTask::vf3 */
byte F_006c9e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c9e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_2 != (int *)0x0) {
    if ((*(uint *)(param_1 + 0x6c) & 0x400) != 0) {
      piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1,0,0xf,1);
    }
    ((code *)*(gen_code32 *)(*param_2 + 0x14c))(param_2,param_2[0x18]);
  }
  return 1;
}

/* ref: Client::Game::Event::PlayToBeContinuedTask::vf1 */
uint F_006c9ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c9ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 uVar5;
  
  piVar2 = (int *)F_00424750(REFG(int, 0x137104c));
  if (this[4] == (undefined1)0x0) {
    uVar5 = 5;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    bVar1 = F_008976b0(pvVar3,uVar5);
    if (bVar1 != 0) {
      F_00ab6c00(1,0,0,0,0,0);
      F_004e7f70(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),(float)(float10)0);
      ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2,1,0,1);
      ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,0,0,1);
      this[4] = (undefined1)0x1;
    }
  }
  else {
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    uVar4 = F_007cbb90(pvVar3);
    if ((char)uVar4 != '\0') {
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      F_007cbc20(pvVar3);
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::PlayToBeContinuedTask::vf2 */
uint F_006c9f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c9f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(int, 0x137104c));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  F_007cbc20(this_00);
  uVar2 = F_004e7f70(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),(float)(float10)0);
  if (param_2 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x1b4))(param_2);
  }
  return uVar2;
}

/* ref: Client::Game::Event::PlayToBeContinuedTask::vf3 */
byte F_006c9fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c9fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_2 != (int *)0x0) {
    if ((*(uint *)(param_1 + 0x6c) & 0x400) != 0) {
      piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1,0,0xf,1);
    }
    ((code *)*(gen_code32 *)(*param_2 + 0x14c))(param_2,param_2[0x18]);
  }
  return 1;
}

/* ref: FUN_006ca030 */
unsigned int F_006ca030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1);
  if (uVar2 == 10) {
    *(undefined2 *)((int)this + 0x408) = 0x101;
    return 0;
  }
  *(undefined1 *)((int)this + 0x408) = 1;
  return 0;
}

/* ref: FUN_006ca070 */
uint F_006ca070(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6, float gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x6ca070u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  int param_7 = (int)gen_a6;
  float param_8 = (float)gen_a7;
  undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  float fVar1;
  float fVar2;
  byte bVar3;
  float * pfVar4;
  undefined3 extraout_var = 0;
  float10 fVar5;
  float fVar6;
  
  (*(uint *)(gen_frame + 0xfc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x100);
  ((float *)(gen_frame + 0x80))[0] = 0.0;
  ((float *)(gen_frame + 0x80))[1] = 0.0;
  ((float *)(gen_frame + 0x80))[2] = 0.0;
  fVar5 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  (*(float *)(gen_frame + 0xac)) = (float)fVar5;
  (*(float *)(gen_frame + 0x9c)) = (float)fVar5;
  fVar5 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar6 = (float)fVar5;
  (*(float *)(gen_frame + 0xac)) = fVar6;
  ((float *)(gen_frame + 0xb0))[0] = fVar6;
  ((float *)(gen_frame + 0xb0))[1] = 0.0;
  (*(undefined4 *)(gen_frame + 0xc0)) = 0;
  (*(undefined4 *)(gen_frame + 0xc8)) = 0;
  (*(undefined4 *)(gen_frame + 0xd4)) = 0;
  ((float *)(gen_frame + 0xb0))[2] = ((float)GEN_TOF(-(float10)(*(float *)(gen_frame + 0x9c))));
  (*(undefined4 *)(gen_frame + 0xe0)) = 0;
  (*(undefined4 *)(gen_frame + 0xe4)) = 0;
  (*(float *)(gen_frame + 0xd0)) = (*(float *)(gen_frame + 0x9c));
  (*(undefined4 *)(gen_frame + 0xe8)) = 0;
  (*(float *)(gen_frame + 0xd8)) = fVar6;
  (*(undefined4 *)(gen_frame + 0xc4)) = REFG(float, 0x1087f04);
  if (param_7 == 1) {
    fVar6 = gen_bits2f((uint)gen_fl2bits(param_8) ^ REFG(uint, 0x10920d0));
  }
  else {
    if (param_7 == 2) {
      ((float *)(gen_frame + 0x80))[0] = gen_bits2f((uint)gen_fl2bits(param_8) ^ REFG(uint, 0x10920d0));
      goto LAB_006ca138;
    }
    fVar6 = param_8;
    if (param_7 == 3) {
      ((float *)(gen_frame + 0x80))[0] = param_8;
      goto LAB_006ca138;
    }
  }
  ((float *)(gen_frame + 0x80))[2] = fVar6;
LAB_006ca138: ;
  pfVar4 = (float *)F_004ee670(&(*(float *)(gen_frame + 0x70)),(uint)((float *)(gen_frame + 0x80)),(uint)((float *)(gen_frame + 0xb0)));
  (*(float *)(gen_frame + 0x90)) = *pfVar4;
  (*(float *)(gen_frame + 0x94)) = pfVar4[1];
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(float *)(gen_frame + 0x98)) = pfVar4[2];
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  fVar6 = (float)((float10)*param_5 + (float10)*pfVar4);
  (*(float *)(gen_frame + 0x70)) = fVar6;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  fVar1 = (float)((float10)param_5[1] + (float10)pfVar4[1]);
  (*(float *)(gen_frame + 0x74)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  fVar2 = (float)((float10)param_5[2] + (float10)pfVar4[2]);
  (*(float *)(gen_frame + 0x78)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(float *)(gen_frame + 0x98)) = 2.29589e-41;
  (*(float *)(gen_frame + 0x9c)) = 2.29589e-41;
  (*(float *)(gen_frame + 0x68)) = (float)((float10)fVar1 + (float10)*(double *)&REFG(undefined, 0x10947f0));
  (*(float *)(gen_frame + 0x64)) = fVar6;
  (*(undefined4 *)(gen_frame + 0x5c)) = REFG(float, 0x10b3ae0);
  (*(float *)(gen_frame + 0x6c)) = fVar2;
  bVar3 = F_005518b0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0),&(*(undefined4 *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x64)),&(*(undefined4 *)(gen_frame + 0x58)),(unsigned int)gen_fl2bits((float)(REFG(float, 0x1094880))),1,&(*(float *)(gen_frame + 0x98)));
  if (bVar3 != 0) {
    *param_9 = (*(undefined4 *)(gen_frame + 0x8));
    param_9[1] = (*(undefined4 *)(gen_frame + 0xc));
    param_9[2] = (*(undefined4 *)(gen_frame + 0x10));
  }
  F_00c47745((*(uint *)(gen_frame + 0xfc)) ^ (uint)(uint)(gen_frame + 0x100));
  return CONCAT31(extraout_var,bVar3);
}

/* ref: Client::Game::Event::WaitForTimeTask::vf1 */
uint F_006ca300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca300u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 4) - (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
  *(float *)(in_ecx + 4) = fVar1;
  if ((float10)fVar1 <= (float10)0) {
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Event::CancelEventSceneTask::vf3 */
byte F_006ca340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_2 != (int *)0x0) {
    if ((*(uint *)(param_1 + 0x6c) & 0x400) != 0) {
      piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1,0,0xf,1);
    }
    ((code *)*(gen_code32 *)(*param_2 + 0x14c))(param_2,param_2[0x18]);
  }
  return 0;
}

/* ref: Client::Game::Event::CharacterTaskBase::vf1 */
uint F_006ca390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(this + 0x10);
  if ((uVar3 == 0xffffffff) || (bVar1 = F_00ae0dd0(uVar3), bVar1 == 0)) {
    if (*(int *)(this + 8) == -0x20000000) {
      uVar3 = 0;
    }
    else {
      uVar3 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)(this + 8),*(undefined4 *)(this + 0xc));
    }
  }
  else if (uVar3 < 0x158) {
    uVar3 = (&REFG(undefined4, 0x14a31f0))[uVar3];
  }
  else {
    uVar3 = 0;
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,param_1,uVar3);
  }
  return uVar2;
}

/* ref: Client::Game::Event::WaitForLookAtTask::vf6 */
uint F_006ca400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  byte bVar1;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  bVar1 = F_00aa1320(param_2,0xffffffff);
  if (bVar1 != 0) {
    bVar1 = F_00aa1330(param_2,in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,0xffffffff);
    return (uint)(bVar1 != 0);
  }
  bVar1 = F_00aa1340(param_2,0xffffffff);
  if (bVar1 != 0) {
    bVar1 = F_00aa1350(param_2,0xffffffff);
    return (uint)(bVar1 != 0);
  }
  return 1;
}

/* ref: Client::Game::Event::WaitTimeAfterCharacterTransparency::vf6 */
uint F_006ca470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca470u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  float fVar1;
  
  fVar1 = *(float *)(in_ecx + 0x18);
  if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar1 <= *(float *)&REFG(undefined, 0x1088114))) {
    *(float *)(in_ecx + 0x18) = ((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))))
    ;
    return 0;
  }
  F_00aa0980(param_3,(float)((float10)1 - (float10)*(double *)&REFG(undefined, 0x108bec8)),0);
  *(undefined4 *)(param_3 + 0x2ec8) = REFG(float, 0x10b3ae0);
  return 1;
}

/* ref: Client::Game::Event::WaitForFadeTask::vf1 */
uint F_006ca4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1);
  return ((int)(char)~(byte)uVar2 & 8U) >> 3;
}

/* ref: Client::Game::Event::AutoShakeInvokeTask::vf1 */
uint F_006ca520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(this + 0x10);
  if ((uVar5 == 0xffffffff) || (bVar1 = F_00ae0dd0(uVar5), bVar1 == 0)) {
    if (*(int *)(this + 8) == -0x20000000) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = (undefined *)F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)(this + 8),*(undefined4 *)(this + 0xc));
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
  }
  else if (uVar5 < 0x158) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar5]));
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  }
  pvVar2 = REFG(undefined4, 0x14c4e84);
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) {
    return 1;
  }
  if (this[0x18] == (undefined1)0x0) {
    F_00aa0600((*(undefined * PTR32 *)(gen_frame + 0x8)),0);
    return 1;
  }
  if (*(int *)(this + 0x14) != 0) {
    uVar5 = *(uint *)(this + 0x14);
    uVar3 = F_00aa0210((*(undefined * PTR32 *)(gen_frame + 0x8)),0,0);
    if (uVar5 != uVar3) {
      return 1;
    }
    puVar4 = (uint *)F_00ab2a20(uVar5);
    if (puVar4 == (uint *)0x0) {
      return 1;
    }
    ((int *)(gen_frame + 0x0))[0] = (*puVar4 & 0xffffff) + (int)puVar4;
    ((int *)(gen_frame + 0x0))[1] = 0xffffffff;
    bVar1 = F_00b5afa0(pvVar2,*(undefined4 *)(this + 0x10),((int *)(gen_frame + 0x0)));
    if (bVar1 == 0) {
      return 0;
    }
  }
  this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  uVar5 = F_00b5b160(pvVar2,*(undefined4 *)(this + 0x10),0);
  if ((char)uVar5 != '\0') {
    F_00aa05d0(this_00,0);
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Event::AutoShakeInvokeTask::vf2 */
unsigned int F_006ca630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  uVar2 = *(uint *)(this + 0x10);
  if ((uVar2 == 0xffffffff) || (bVar1 = F_00ae0dd0(uVar2), bVar1 == 0)) {
    if (*(int *)(this + 8) != -0x20000000) {
      uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)(this + 8),*(undefined4 *)(this + 0xc));
      goto LAB_006ca684;
    }
  }
  else if (uVar2 < 0x158) {
    uVar2 = (&REFG(undefined4, 0x14a31f0))[uVar2];
    goto LAB_006ca684;
  }
  uVar2 = 0;
LAB_006ca684: ;
  ((code *)*(gen_code32 *)(*param_2 + 0x1a0))(param_2,uVar2,(uint)(byte)this[0x18]);
  return 0;
}

/* ref: Client::Game::Event::EquipChangeTask::vf1 */
uint F_006ca6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = F_00ab24a0(*(undefined4 *)(this + 0x18));
  if (uVar3 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(this + 0x10);
  if ((uVar1 == 0xffffffff) || (bVar2 = F_00ae0dd0(uVar1), bVar2 == 0)) {
    if (*(int *)(this + 8) == -0x20000000) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = (undefined *)F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)(this + 8),*(undefined4 *)(this + 0xc));
    }
  }
  else if (uVar1 < 0x158) {
    this_00 = ((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar1]));
  }
  else {
    this_00 = (undefined *)0x0;
  }
  if (this_00 != (undefined *)0x0) {
    if (*(int *)(this + 0x14) == 0) {
      F_00aa80c0(this_00,(uint)(byte)this[0x1c],*(undefined4 *)(uVar3 + 0x18),
                   *(undefined4 *)(uVar3 + 0x1c));
      return 1;
    }
    F_00aa2260(this_00,(uint)(byte)this[0x1c],*(undefined4 *)(uVar3 + 0x18));
  }
  return 1;
}

/* ref: Client::Game::Event::EquipChangeTask::vf2 */
unsigned int F_006ca750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  
  if (param_2 != (int *)0x0) {
    uVar2 = *(uint *)(this + 0x10);
    if (uVar2 != 0xffffffff) {
      bVar1 = F_00ae0dd0(uVar2);
      if (bVar1 != 0) {
        if (uVar2 < 0x158) {
          ((code *)*(gen_code32 *)(*param_2 + 0x1a4))(param_2,(&REFG(undefined4, 0x14a31f0))[uVar2]);
          return 0;
        }
        goto LAB_006ca7a6;
      }
    }
    if (*(int *)(this + 8) == -0x20000000) {
LAB_006ca7a6: ;
      ((code *)*(gen_code32 *)(*param_2 + 0x1a4))(param_2,0);
      return 0;
    }
    uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)(this + 8),*(undefined4 *)(this + 0xc));
    ((code *)*(gen_code32 *)(*param_2 + 0x1a4))(param_2,uVar2);
  }
  return 0;
}

/* ref: FUN_006ca7e0 */
unsigned int F_006ca7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ca7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8b60));
  if (*(char *)((int)this + 0xc) == '\0') {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar1 != (int *)0x0) {
      uVar3 = 1;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
      uVar2 = F_00763050(uVar2,uVar3);
      if (uVar2 != 0) {
        F_007e3970(uVar2);
      }
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  return 0;
}

/* ref: FUN_006ca830 */
uint F_006ca830(unsigned int gen_a0)
{
  GEN_ENTER(0x6ca830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  puVar4 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  piVar1 = (int *)*puVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
  uVar5 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  if (2 < (int)uVar5) {
    bVar2 = F_00a01e10(((byte *)(gen_frame + 0x8)),3);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar2;
  }
  ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,uVar3,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_006ca8b0 */
uint F_006ca8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ca8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x13236dc);
  puVar1 = REFG(undefined * PTR32, 0x13236d8);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x13236d8));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 != 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    return 0;
  }
  F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
  F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
  iVar5 = uVar3 + 2;
  F_00a01c40(param_1,iVar5,"className",puVar1);
  F_00a01c80(param_1,iVar5,"referenceCount",1);
  F_00a01cc0(param_1,iVar5,"PlayActionTimeline",((code *)REFP(0x6bafe0)));
  F_00a01cc0(param_1,iVar5,"CancelActionTimeline",((code *)REFP(0x6bb000)));
  F_00a01cc0(param_1,iVar5,"WaitForActionTimeline",((code *)REFP(0x6bb020)));
  F_00a01cc0(param_1,iVar5,"TurnTo",((code *)REFP(0x6bb040)));
  F_00a01cc0(param_1,iVar5,"WaitForTurn",((code *)REFP(0x6bb060)));
  F_00a01cc0(param_1,iVar5,&REFG(undefined, 0x10b4444),((code *)REFP(0x6bb080)));
  F_00a01cc0(param_1,iVar5,"LookAt",((code *)REFP(0x6bb0a0)));
  F_00a01cc0(param_1,iVar5,"WaitForLookAt",((code *)REFP(0x6bb0c0)));
  F_00a01cc0(param_1,iVar5,&REFG(undefined, 0x10b4464),((code *)REFP(0x6bb0e0)));
  F_00a01cc0(param_1,iVar5,"WaitForMove",((code *)REFP(0x6bb100)));
  F_00a01cc0(param_1,iVar5,"FootStep",((code *)REFP(0x6bb120)));
  F_00a01cc0(param_1,iVar5,"PlayVfx",((code *)REFP(0x6bb160)));
  F_00a01cc0(param_1,iVar5,"Transparency",((code *)REFP(0x6bb180)));
  F_00a01cc0(param_1,iVar5,"WaitForTransparency",((code *)REFP(0x6bb1a0)));
  if (puVar2 == (undefined *)0x0) {
    F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar1);
    F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
    F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    return 0;
  }
  F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar1);
  F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
  F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
  F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
  F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
  F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
  F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  F_00a01ad0(param_1,puVar2);
  return 0;
}

/* ref: FUN_006cab30 */
uint F_006cab30(unsigned int gen_a0)
{
  GEN_ENTER(0x6cab30u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_006cab60 */
uint F_006cab60(unsigned int gen_a0)
{
  GEN_ENTER(0x6cab60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 4) + 0x74))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cabb0 */
uint F_006cabb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cabb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4));
  if ((char)uVar1 == '\x01') {
    return 0x4c7250;
  }
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x80)));
}

/* ref: FUN_006cabe0 */
uint F_006cabe0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cabe0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  piVar3 = *(int * PTR32 *)(iVar1 + 4);
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  if ((char)uVar2 == '\x01') {
    uVar4 = 0x4c7250;
  }
  else {
    uVar4 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x80)));
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar4);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cac50 */
uint F_006cac50(unsigned int gen_a0)
{
  GEN_ENTER(0x6cac50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 4) + 0x78))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006caca0 */
uint F_006caca0(unsigned int gen_a0)
{
  GEN_ENTER(0x6caca0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  float * pfVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  pfVar3 = (float *)F_00a5feb0(*(undefined * PTR32 *)(*piVar2 + 4));
  F_00a01e60(((byte *)(gen_frame + 0xc)),*pfVar3);
  F_00a01e60(((byte *)(gen_frame + 0xc)),pfVar3[1]);
  F_00a01e60(((byte *)(gen_frame + 0xc)),pfVar3[2]);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 3;
}

/* ref: FUN_006cad20 */
uint F_006cad20(unsigned int gen_a0)
{
  GEN_ENTER(0x6cad20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*((ushort *)GEN_TOP((*(int *)(*piVar2 + 4) + 0xe6))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cad80 */
uint F_006cad80(unsigned int gen_a0)
{
  GEN_ENTER(0x6cad80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)(*((short *)GEN_TOP((*(int *)(*piVar2 + 4) + 0xe6))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cade0 */
uint F_006cade0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cade0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*piVar2 + 4) + 4))))(*(int * PTR32 *)(*piVar2 + 4));
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((char)uVar1 == '\x01'));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cae40 */
uint F_006cae40(unsigned int gen_a0)
{
  GEN_ENTER(0x6cae40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*piVar2 + 4) + 4))))(*(int * PTR32 *)(*piVar2 + 4));
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((char)uVar1 == '\x03'));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006caea0 */
uint F_006caea0(unsigned int gen_a0)
{
  GEN_ENTER(0x6caea0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*piVar2 + 4) + 4))))(*(int * PTR32 *)(*piVar2 + 4));
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((char)uVar1 == '\x02'));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006caf00 */
uint F_006caf00(unsigned int gen_a0)
{
  GEN_ENTER(0x6caf00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*piVar2 + 4) + 4))))(*(int * PTR32 *)(*piVar2 + 4));
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((char)uVar1 == '\x02'));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006caf60 */
uint F_006caf60(unsigned int gen_a0)
{
  GEN_ENTER(0x6caf60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*piVar2 + 4) + 4))))(*(int * PTR32 *)(*piVar2 + 4));
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((char)uVar1 == '\a'));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cafc0 */
uint F_006cafc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cafc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*piVar2 + 4) + 4))))(*(int * PTR32 *)(*piVar2 + 4));
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((char)uVar1 == '\x05'));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb020 */
uint F_006cb020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6cb020u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x13236f8);
  puVar1 = REFG(undefined * PTR32, 0x13236dc);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x13236f8));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 != 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    return 0;
  }
  F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
  F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
  iVar5 = uVar3 + 2;
  F_00a01c40(param_1,iVar5,"className",puVar2);
  F_00a01c80(param_1,iVar5,"referenceCount",1);
  F_00a01cc0(param_1,iVar5,"PlaySharedGroupTimeline",((code *)REFP(0x6baf80)));
  if (puVar1 == (undefined *)0x0) {
    F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
    F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    return 0;
  }
  F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
  F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
  F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
  F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
  F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
  F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
  F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  F_00a01ad0(param_1,puVar1);
  return 0;
}

/* ref: FUN_006cb1c0 */
uint F_006cb1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb1c0u, gen_a0, 0u, 0u, 0u);
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
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x2e98)));
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar3);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb220 */
uint F_006cb220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6cb220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4));
  return (uint)*((byte *)GEN_TOP((param_1 + 0x2db8 + *(int *)((int)this + 4))));
}

/* ref: FUN_006cb250 */
uint F_006cb250(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb250u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_006cb2b0 */
uint F_006cb2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4));
  if ((char)uVar1 == '\x01') {
    uVar2 = 0x4c7250;
  }
  else {
    uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0x80)));
  }
  uVar1 = F_00ab22f0(uVar2);
  if (uVar1 != 0) {
    return (uint)*(ushort *)(uVar1 + 10);
  }
  return 0;
}

/* ref: FUN_006cb2f0 */
uint F_006cb2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb2f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 4) + 4))))(*(int * PTR32 *)(iVar1 + 4));
    if ((char)uVar2 == '\x01') {
      uVar4 = 0x4c7250;
    }
    else {
      uVar4 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x80)));
    }
    uVar2 = F_00ab22f0(uVar4);
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)*(ushort *)(uVar2 + 10);
    }
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar2);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb380 */
uint F_006cb380(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb380u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*((byte *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1689))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb3e0 */
uint F_006cb3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb3e0u, gen_a0, 0u, 0u, 0u);
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
    piVar1 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
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
    piVar1 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
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
    if (REFG(undefined4, 0x1379694) != (undefined *)0x0) {
      bVar1 = F_00aa1800(REFG(undefined4, 0x1379694),uVar2);
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
  if ((*(char *)((int)this + 0x148) != '\0') && (REFG(undefined4, 0x1379694) != (undefined *)0x0)) {
    if ((*(char *)((int)this + 0x145) == '\0') || (*(char *)((int)this + 0x145) == '\x01')) {
      if (bVar3) {
        uVar4 = 0xe1;
      }
      else {
        uVar4 = 0xde;
      }
      uVar2 = F_0071ce90(REFG(undefined4, 0x1379694),uVar4);
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
      uVar2 = F_0071ce90(REFG(undefined4, 0x1379694),uVar4);
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
  if ((REFG(undefined4, 0x132412c) == this) && (REFG(int, 0x1324130) != 0)) {
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
  
  piVar1 = REFG(undefined4, 0x1379694);
  if (REFG(undefined4, 0x1379694) != (int *)0x0) {
    iVar5 = REFG(int * PTR32, 0x1379694)[0x1e];
    iVar4 = REFG(int * PTR32, 0x1379694)[0x20];
    uVar6 = 0xf;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 4))))(REFG(undefined4, 0x1379694));
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

