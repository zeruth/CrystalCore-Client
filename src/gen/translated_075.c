#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_007cf7c0 */
GEN_FRAME unsigned int GEN_THISCALL F_007cf7c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7cf7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  uint * puVar5;
  ushort * puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint local_10;
  char local_6;
  
  if (*(char *)((int)this + 0xb974) == '\x02') {
    bVar1 = REFG(undefined1, 0x1338ad4);
    if (REFG(undefined1, 0x1338ad4) == 0) {
      bVar1 = 1;
    }
    if ((*(char *)((int)this + 0x967c) != '\0') && (1 < bVar1)) {
      *(undefined1 *)((int)this + 0x967c) = 0;
    }
    cVar2 = '\0';
    local_6 = '\0';
    local_10 = 0;
    if (*(int *)((int)this + 0xb948) != 0) {
      puVar6 = (ushort *)((int)this + 0x760);
      do {
        if (*puVar6 != 0) {
          uVar3 = F_007cf6e0(this GEN_EDX_FWD,(uint)*puVar6);
          *(uint *)(puVar6 - 4) = uVar3;
          if (*(int *)((int)this + 0xb94c) != 0) {
            uVar4 = 0;
            puVar5 = (uint *)((int)this + 0x965c);
            do {
              if (*puVar5 == (uint)*puVar6) {
                if ((int)uVar4 < 0) break;
                if (uVar3 == 0) {
                  if ((byte)puVar6[9] != bVar1) break;
                  if (bVar1 == *(byte *)((int)this + 0xb96f)) {
                    local_6 = '\x01';
                    break;
                  }
                }
                *(undefined4 *)((int)this + uVar4 * 4 + 0x965c) = 0;
                *(int *)((int)this + 0xb94c) = *(int *)((int)this + 0xb94c) - 1;
                break;
              }
              uVar4 = uVar4 + 1;
              puVar5 = puVar5 + 1;
            } while (uVar4 < 5);
          }
        }
        local_10 = local_10 + 1;
        puVar6 = puVar6 + 0x8e;
        cVar2 = local_6;
      } while (local_10 < *(uint *)((int)this + 0xb948));
    }
    *(char *)((int)this + 0xb973) = cVar2;
    uVar8 = *(undefined4 *)((int)this + 0xb94c);
    *(byte *)((int)this + 0xb96f) = bVar1;
    iVar9 = (uint)(cVar2 == '\0') * 4 + 1;
    uVar7 = 0xade;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar3 = F_00460c80(this_00 GEN_EDX_ARG,uVar7,uVar8,iVar9);
    F_0042e430((undefined *)((int)this + 0x96d4) GEN_EDX_ARG,uVar3);
  }
  return;
}

/* ref: FUN_007cf910 */
GEN_FRAME uint GEN_THISCALL F_007cf910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7cf910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  ushort uVar2;
  int in_ecx;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint * puVar7;
  undefined * this_00;
  undefined * pvVar8;
  undefined * this_01;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  int * local_28;
  undefined4 local_24;
  uint local_1c;
  uint local_18;
  undefined * local_14;
  uint local_10;
  undefined * local_8;
  
  iVar4 = param_1;
  cVar3 = REFG(char, 0x1338ad4);
  if (REFG(char, 0x1338ad4) == '\0') {
    cVar3 = '\x01';
  }
  local_18 = (uint)(*(char *)((int)this + 0x967c) != '\0');
  if (cVar3 == '\x01') {
    local_18 = local_18 | 2;
  }
  F_005a2710((undefined *)(param_1 + 0x50) GEN_EDX_FWD,4);
  *(uint *)(param_1 + 0x54) = local_18;
  uVar10 = *(undefined4 *)((int)this + 0x9678);
  F_005a2710((undefined *)(param_1 + 0x48) GEN_EDX_ARG,4);
  *(undefined4 *)(param_1 + 0x4c) = uVar10;
  local_34 = 0;
  if ((*(char *)((int)this + 0xb974) == '\x02') && (*(char *)((int)this + 0xb975) != '\0')) {
    local_18 = 0;
    local_1c = 0;
    local_30 = 0;
    if (*(int *)((int)this + 0xb948) != 0) {
      local_8 = (undefined *)(param_1 + 0xd00);
      local_14 = (undefined *)(param_1 + 0xd08);
      pvVar8 = (undefined *)(param_1 + 0x100);
      this_00 = (undefined *)(param_1 + 0x110);
      this_01 = (undefined *)(param_1 + 0x108);
      local_28 = (int *)((int)this + 0x945c);
      do {
        in_ecx = *local_28;
        if (in_ecx == 0) break;
        if ((*(char *)((int)this + 0xb96e) == '\0') &&
           (uVar5 = (uint)*(byte *)(in_ecx + 0x115), local_1c != uVar5)) {
          F_005a2710(pvVar8 GEN_EDX_ARG,4);
          *(undefined4 *)((int)pvVar8 + 4) = 0x1000000;
          F_005a2710(this_01 GEN_EDX_ARG,4);
          *(undefined4 *)((int)this_01 + 4) = 0;
          F_005a2710(this_00 GEN_EDX_ARG,4);
          *(undefined4 *)((int)this_00 + 4) = 0;
          uVar6 = F_0042a990(uVar5 * 0x54 + 0x9d10 + (int)this GEN_EDX_ARG);
          F_005a2710(local_8 GEN_EDX_ARG,8);
          *(uint *)((int)local_8 + 4) = uVar6;
          uVar6 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328) GEN_EDX_ARG);
          F_005a2710(local_14 GEN_EDX_ARG,8);
          local_8 = (undefined *)((int)local_8 + 0x10);
          *(uint *)((int)local_14 + 4) = uVar6;
          local_14 = (undefined *)((int)local_14 + 0x10);
          pvVar8 = (undefined *)((int)pvVar8 + 0x18);
          this_01 = (undefined *)((int)this_01 + 0x18);
          this_00 = (undefined *)((int)this_00 + 0x18);
          local_18 = local_18 + 1;
          local_1c = uVar5;
        }
        uVar5 = 0;
        local_2c = 0;
        bVar9 = *(int *)(in_ecx + 0xfc) != 0;
        if (bVar9) {
          local_2c = 0xeda5;
        }
        local_10 = (uint)bVar9;
        if (cVar3 == *(char *)(in_ecx + 0x116)) {
          local_10 = local_10 | 4;
        }
        uVar2 = *(ushort *)(in_ecx + 0x104);
        puVar7 = (uint *)((int)this + 0x965c);
        do {
          if (*puVar7 == (uint)uVar2) {
            local_10 = local_10 | 2;
            break;
          }
          uVar5 = uVar5 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar5 < 5);
        if (*(ushort *)((int)this + 0x9670) == uVar2) {
          local_34 = local_18;
        }
        F_005a2710(pvVar8 GEN_EDX_ARG,4);
        *(uint *)((int)pvVar8 + 4) = (uint)uVar2 << 8;
        F_005a2710(this_01 GEN_EDX_ARG,4);
        *(undefined4 *)((int)this_01 + 4) = local_2c;
        F_005a2710(this_00 GEN_EDX_ARG,4);
        *(uint *)((int)this_00 + 4) = local_10;
        uVar5 = F_0042a990(in_ecx + 0x54 GEN_EDX_ARG);
        F_005a2710(local_8 GEN_EDX_ARG,8);
        *(uint *)((int)local_8 + 4) = uVar5;
        uVar5 = F_0042a990(in_ecx GEN_EDX_ARG);
        F_005a2710(local_14 GEN_EDX_ARG,8);
        local_8 = (undefined *)((int)local_8 + 0x10);
        local_18 = local_18 + 1;
        local_28 = local_28 + 1;
        *(uint *)((int)local_14 + 4) = uVar5;
        local_14 = (undefined *)((int)local_14 + 0x10);
        local_30 = local_30 + 1;
        pvVar8 = (undefined *)((int)pvVar8 + 0x18);
        this_01 = (undefined *)((int)this_01 + 0x18);
        this_00 = (undefined *)((int)this_00 + 0x18);
      } while (local_30 < *(uint *)((int)this + 0xb948));
    }
    F_005a2710((undefined *)(param_1 + 0xf8) GEN_EDX_ARG,4);
    *(uint *)(param_1 + 0xfc) = local_18;
  }
  else {
    F_005a2710((undefined *)(param_1 + 0xf8) GEN_EDX_ARG,4);
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  if ((*(int *)((int)this + 0xb94c) == 5) || (param_1 = 0, *(char *)((int)this + 0xb973) != '\0')) {
    param_1 = 1;
  }
  F_005a2710((undefined *)(iVar4 + 0x80) GEN_EDX_ARG,4);
  *(int *)(iVar4 + 0x84) = param_1;
  uVar5 = F_0042a990((int)this + 0x96d4 GEN_EDX_ARG);
  F_005a2710((undefined *)(iVar4 + 0x88) GEN_EDX_ARG,6);
  *(uint *)(iVar4 + 0x8c) = uVar5;
  bVar1 = *(byte *)((int)this + 0xb96c);
  F_005a2710((undefined *)(iVar4 + 0x18) GEN_EDX_ARG,4);
  *(uint *)(iVar4 + 0x1c) = (uint)bVar1;
  uVar5 = 0;
  param_1 = 0;
  if (*(byte *)((int)this + 0xb96e) != 0) {
    do {
      if ((uint)*(byte *)((int)this + 0xb96e) == (&REFG(undefined4, 0x10bfd00))[(int)(uVar5)]) {
        param_1 = uVar5 + 1;
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 4);
  }
  F_005a2710((undefined *)(iVar4 + 0xa8) GEN_EDX_ARG,4);
  *(int *)(iVar4 + 0xac) = param_1;
  F_005a2710((undefined *)(iVar4 + 0x90) GEN_EDX_ARG,4);
  *(int *)(iVar4 + 0x94) = local_34;
  param_1 = 0;
  local_28 = (int *)0x0;
  local_18 = 0;
  local_24 = 0;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0xb96c))) {
  case 0: ;
    param_1 = 5;
    local_18 = 0x9c8;
    break;
  case 1: ;
  case 2: ;
  case 3: ;
    param_1 = 6;
    local_28 = (int *)0x7;
    local_18 = 0x9ca;
    local_24 = 0x9c9;
    break;
  case 6: ;
    if (*(char *)((int)this + 0x969f) == '\x01') {
      param_1 = 7;
      local_28 = (int *)0xb;
      local_18 = 0x9cb;
      local_24 = 0x9cc;
    }
    else {
      param_1 = 0xb;
      local_18 = 0x9cc;
    }
  }
  F_005a2710((undefined *)(iVar4 + 0x20) GEN_EDX_ARG,4);
  *(int *)(iVar4 + 0x24) = param_1;
  F_005a2710((undefined *)(iVar4 + 0x28) GEN_EDX_ARG,4);
  *(int * PTR32 *)(iVar4 + 0x2c) = local_28;
  uVar11 = 0;
  uVar10 = 0;
  pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar5 = F_0043bd00(pvVar8 GEN_EDX_ARG,local_18,uVar10,uVar11);
  F_005a2710((undefined *)(iVar4 + 0x30) GEN_EDX_ARG,6);
  *(uint *)(iVar4 + 0x34) = uVar5;
  uVar11 = 0;
  uVar10 = 0;
  pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar5 = F_0043bd00(pvVar8 GEN_EDX_ARG,local_24,uVar10,uVar11);
  uVar6 = F_005a2710((undefined *)(iVar4 + 0x38) GEN_EDX_ARG,6);
  *(uint *)(iVar4 + 0x3c) = uVar5;
  return uVar6;
}

/* ref: FUN_007cfde0 */
GEN_FRAME uint GEN_THISCALL F_007cfde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7cfde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined * pvVar9;
  undefined * pvVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  iVar6 = param_1;
  uVar7 = (uint)*(ushort *)((int)this + 0x9670);
  uVar12 = uVar7;
  if (((*(char *)((int)this + 0xb974) == '\x02') && (*(char *)((int)this + 0xb975) != '\0')) &&
     (uVar7 != 0)) {
    uVar8 = F_0076bf70(this GEN_EDX_FWD,uVar7);
    uVar12 = 0;
    if (uVar8 != 0) {
      uVar13 = (uint)*(ushort *)(uVar8 + 0x10e);
      uVar12 = *(uint *)(uVar8 + 0xfc);
      uVar14 = 0x23;
      pvVar9 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      uVar13 = F_00460bd0(pvVar9 GEN_EDX_ARG,uVar14,uVar13);
      F_0042e430((undefined *)((int)this + 0x99c8) GEN_EDX_ARG,uVar13);
      pvVar9 = (undefined *)((int)this + 0x9c14);
      F_0042aca0(pvVar9 GEN_EDX_ARG);
      if ((uVar12 & 0x20) == 0) {
        uVar16 = 0;
        uVar15 = 0;
        uVar14 = 0xb0e;
        pvVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
        uVar13 = F_0043bd00(pvVar10 GEN_EDX_ARG,uVar14,uVar15,uVar16);
        F_0042e430((undefined *)((int)this + 0x9bc0) GEN_EDX_ARG,uVar13);
        uVar13 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328) GEN_EDX_ARG);
        F_0042e430((undefined *)((int)this + 0x9c68) GEN_EDX_ARG,uVar13);
        uVar2 = *(ushort *)(uVar8 + 0x10a);
        uVar3 = *(ushort *)(uVar8 + 0x10e);
        uVar4 = *(ushort *)(uVar8 + 0x110);
        bVar1 = *(byte *)(uVar8 + 0x116);
        uVar13 = uVar12;
      }
      else {
        iVar5 = *(int *)((int)this + 0x9f0c);
        bVar1 = *((byte *)GEN_TOP(((*(char *)(uVar8 + 0x115) == '\x05') + 0x9f08 + (int)this)));
        uVar13 = F_00476000();
        uVar13 = F_004351f0(iVar5 + (uint)bVar1 * 0x3c,uVar13);
        uVar16 = 0;
        uVar15 = 0;
        uVar14 = 0x9ce;
        pvVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
        uVar11 = F_0043bd00(pvVar10 GEN_EDX_ARG,uVar14,uVar15,uVar16);
        F_0042e430((undefined *)((int)this + 0x9bc0) GEN_EDX_ARG,uVar11);
        uVar16 = 0;
        uVar15 = 0;
        uVar14 = 0xb0f;
        pvVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
        uVar11 = F_0043bd00(pvVar10 GEN_EDX_ARG,uVar14,uVar15,uVar16);
        F_0042e430(pvVar9 GEN_EDX_ARG,uVar11);
        uVar14 = 0x2c;
        pvVar9 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
        uVar13 = F_00460bd0(pvVar9 GEN_EDX_ARG,uVar14,uVar13);
        F_0042e430((undefined *)((int)this + 0x9c68) GEN_EDX_ARG,uVar13);
        uVar2 = *(ushort *)(uVar8 + 0x10a);
        uVar3 = *(ushort *)(uVar8 + 0x10e);
        uVar4 = *(ushort *)(uVar8 + 0x110);
        pvVar9 = (undefined *)0x0;
        bVar1 = *(byte *)(uVar8 + 0x116);
        uVar13 = 0;
      }
      F_0076c5b0((int)this + 0x9b6c,(uint)bVar1,0x22,(uint)uVar4,(uint)uVar3,(uint)uVar2,uVar13,
                   pvVar9);
      uVar13 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328) GEN_EDX_ARG);
      F_005a2710((undefined *)(param_1 + 0x19c0) GEN_EDX_ARG,8);
      *(uint *)(param_1 + 0x19c4) = uVar13;
      uVar13 = F_0042a990((int)this + 0x9b6c GEN_EDX_ARG);
      F_005a2710((undefined *)(param_1 + 0x19c8) GEN_EDX_ARG,8);
      *(uint *)(param_1 + 0x19cc) = uVar13;
      uVar13 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328) GEN_EDX_ARG);
      F_005a2710((undefined *)(param_1 + 0x19d0) GEN_EDX_ARG,8);
      *(uint *)(param_1 + 0x19d4) = uVar13;
      F_005a2710((undefined *)(param_1 + 0x1500) GEN_EDX_ARG,4);
      *(undefined4 *)(param_1 + 0x1504) = 10;
      uVar13 = F_0042a990((int)this + 0x99c8 GEN_EDX_ARG);
      F_005a2710((undefined *)(param_1 + 0x1508) GEN_EDX_ARG,8);
      *(uint *)(param_1 + 0x150c) = uVar13;
      F_005a2710((undefined *)(param_1 + 0x1510) GEN_EDX_ARG,4);
      *(undefined4 *)(param_1 + 0x1514) = 0;
      uVar13 = F_0042a990(uVar8 + 0x54 GEN_EDX_ARG);
      F_005a2710((undefined *)(param_1 + 0x1518) GEN_EDX_ARG,8);
      *(uint *)(param_1 + 0x151c) = uVar13;
      F_005a2710((undefined *)(param_1 + 0x1520) GEN_EDX_ARG,4);
      *(undefined4 *)(param_1 + 0x1524) = 0xefef;
      uVar14 = *(undefined4 *)(uVar8 + 0x100);
      F_005a2710((undefined *)(param_1 + 0x1528) GEN_EDX_ARG,4);
      *(undefined4 *)(param_1 + 0x152c) = uVar14;
      uVar13 = F_0042a990(uVar8 + 0xa8 GEN_EDX_ARG);
      F_005a2710((undefined *)(param_1 + 0x1530) GEN_EDX_ARG,8);
      *(uint *)(param_1 + 0x1534) = uVar13;
      uVar13 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328) GEN_EDX_ARG);
      F_005a2710((undefined *)(param_1 + 0x1538) GEN_EDX_ARG,8);
      *(uint *)(param_1 + 0x153c) = uVar13;
      F_0076bac0((undefined *)((int)this + 0xc) GEN_EDX_ARG,0xa1,param_1 + 0x1500);
      F_005a2710((undefined *)(param_1 + 0x1798) GEN_EDX_ARG,4);
      *(undefined4 *)(param_1 + 0x179c) = 0;
      uVar13 = F_00ab3900((uint)*(byte *)(uVar8 + 0x115));
      uVar14 = *(undefined4 *)(uVar13 + 4);
      F_005a2710((undefined *)(param_1 + 0x1820) GEN_EDX_ARG,4);
      *(undefined4 *)(param_1 + 0x1824) = uVar14;
      F_005a2710((undefined *)(param_1 + 0x1828) GEN_EDX_ARG,4);
      *(undefined4 *)(param_1 + 0x182c) = 1;
      uVar13 = F_0042a990(uVar8 + 0x54 GEN_EDX_ARG);
      F_005a2710((undefined *)(param_1 + 0x1838) GEN_EDX_ARG,6);
      *(uint *)(param_1 + 0x183c) = uVar13;
      param_1 = 0;
      uVar7 = F_00ab1c90(uVar7);
      if ((uVar7 != 0) && (uVar7 = (uint)*(ushort *)(uVar7 + 0x20), uVar7 != 0)) {
        uVar14 = 0x9d0;
        pvVar9 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
        uVar7 = F_00461bb0(pvVar9 GEN_EDX_ARG,uVar14,uVar7);
        F_0042e430((undefined *)((int)this + 0x9a70) GEN_EDX_ARG,uVar7);
        uVar7 = F_0042a990((int)this + 0x9a70 GEN_EDX_ARG);
        F_005a2710((undefined *)(iVar6 + 0x1920) GEN_EDX_ARG,6);
        *(uint *)(iVar6 + 0x1924) = uVar7;
        param_1 = 1;
      }
      uVar7 = (uint)*(ushort *)(uVar8 + 0x106);
      if (*(ushort *)(uVar8 + 0x106) != 0) {
        uVar14 = 0x9cf;
        pvVar9 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
        uVar7 = F_00461bb0(pvVar9 GEN_EDX_ARG,uVar14,uVar7);
        F_0042e430((undefined *)((int)this + 0x9ac4) GEN_EDX_ARG,uVar7);
        uVar7 = F_0042a990((int)this + 0x9ac4 GEN_EDX_ARG);
        F_005a2710((undefined *)(iVar6 + 0x1920 + param_1 * 8) GEN_EDX_ARG,6);
        *(uint *)(iVar6 + param_1 * 8 + 0x1924) = uVar7;
        param_1 = param_1 + 1;
      }
      if (*(char *)(uVar8 + 0x119) == '\0') {
        uVar16 = 0;
        uVar15 = 0;
        uVar14 = 0x9f4;
        pvVar9 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
        uVar7 = F_0043bd00(pvVar9 GEN_EDX_ARG,uVar14,uVar15,uVar16);
        F_0042e430((undefined *)((int)this + 0x9b18) GEN_EDX_ARG,uVar7);
        uVar7 = F_0042a990((int)this + 0x9b18 GEN_EDX_ARG);
        pvVar9 = (undefined *)(iVar6 + 0x1920 + param_1 * 8);
        F_005a2710(pvVar9 GEN_EDX_ARG,6);
        param_1 = param_1 + 1;
        *(uint *)((int)pvVar9 + 4) = uVar7;
      }
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0x1ca;
      pvVar9 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      uVar7 = F_0043bd00(pvVar9 GEN_EDX_ARG,uVar14,uVar15,uVar16);
      F_005a2710((undefined *)(iVar6 + 0x1540) GEN_EDX_ARG,6);
      *(uint *)(iVar6 + 0x1544) = uVar7;
      F_005a2710((undefined *)(iVar6 + 0x1918) GEN_EDX_ARG,4);
      *(int *)(iVar6 + 0x191c) = param_1;
      if (uVar12 == 0) {
        F_005a2710((undefined *)(iVar6 + 0x19d0) GEN_EDX_ARG,1);
      }
      else {
        uVar12 = F_0042a990((int)this + 0x9bc0 GEN_EDX_ARG);
        F_005a2710((undefined *)(iVar6 + 0x19d0) GEN_EDX_ARG,8);
        *(uint *)(iVar6 + 0x19d4) = uVar12;
        uVar12 = F_0042a990((int)this + 0x9c14 GEN_EDX_ARG);
        F_005a2710((undefined *)(iVar6 + 0x19d8) GEN_EDX_ARG,8);
        *(uint *)(iVar6 + 0x19dc) = uVar12;
        uVar12 = F_0042a990((int)this + 0x9c68 GEN_EDX_ARG);
        F_005a2710((undefined *)(iVar6 + 0x19e0) GEN_EDX_ARG,8);
        *(uint *)(iVar6 + 0x19e4) = uVar12;
      }
      F_005a2710((undefined *)(iVar6 + 0x1850) GEN_EDX_ARG,4);
      *(undefined4 *)(iVar6 + 0x1854) = 0;
      uVar12 = F_005a2710((undefined *)(iVar6 + 0x1818) GEN_EDX_ARG,4);
      *(undefined4 *)(iVar6 + 0x181c) = 0;
      *(undefined1 *)((int)this + 0xb978) = 0;
    }
  }
  return uVar12;
}

/* ref: FUN_007d09e0 */
GEN_FRAME byte GEN_THISCALL F_007d09e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d09e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0076bf70(this GEN_EDX_FWD,param_1);
  if (uVar1 != 0) {
    uVar2 = *(uint *)(uVar1 + 0xfc);
    if (uVar2 == 0) {
      uVar2 = F_0076bdd0(((undefined *)(uint)(this)) GEN_EDX_ARG);
      if (uVar2 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xb97c) + 4)))) (*(int * PTR32 *)((int)this + 0xb97c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0,0,(uint)*(ushort *)(uVar1 + 0x108));
        F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        *(undefined4 *)((int)this + 8) = 0;
        F_0076bd10(this GEN_EDX_ARG);
        return 1;
      }
    }
    F_0076c480(this GEN_EDX_ARG,uVar2,param_1);
  }
  return 0;
}

/* ref: FUN_007d0a60 */
GEN_NOFRAME uint GEN_THISCALL F_007d0a60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d0a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (*(char *)((int)this + 0xb96c) == '\0') {
    pvVar1 = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    if (pvVar1 == (undefined *)0x0) {
      uVar5 = F_0046ff40();
      uVar2 = (uint)(uVar5 / 1000);
    }
    else {
      uVar2 = F_00975680(pvVar1 GEN_EDX_ARG);
    }
    *(uint *)((int)this + 0xb95c) = uVar2;
  }
  *(undefined1 *)((int)this + 0xb96d) = 0;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG,0x32)));
  pvVar4 = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  if (pvVar4 == (undefined *)0x0) {
    uVar5 = F_0046ff40();
    uVar2 = (uint)(uVar5 / 1000);
  }
  else {
    uVar2 = F_00975680(pvVar4 GEN_EDX_ARG);
  }
  uVar2 = uVar2 - *(int *)((int)this + 0xb95c);
  if (59999 < uVar2) {
    uVar2 = 59999;
  }
  uVar7 = 0x21;
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_00462440(pvVar4 GEN_EDX_ARG,uVar2,uVar7);
  uVar8 = 0;
  uVar6 = 1;
  uVar7 = 0;
  uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
  uVar2 = F_00431250(pvVar1 GEN_EDX_ARG,0,uVar2,uVar7,uVar6,uVar8);
  return uVar2;
}

/* ref: FUN_007d0b30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007d0b30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d0b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  undefined * pvVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(int *)((int)this + 0xb950) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG,0x32)));
    pvVar2 = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if (pvVar2 == (undefined *)0x0) {
      uVar4 = F_0046ff40();
      uVar3 = (uint)(uVar4 / 1000);
    }
    else {
      uVar3 = F_00975680(pvVar2 GEN_EDX_ARG);
    }
    uVar3 = uVar3 - *(int *)((int)this + 0xb95c);
    if (59999 < uVar3) {
      uVar3 = 59999;
    }
    uVar6 = 0x21;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar3 = F_00462440(pvVar2 GEN_EDX_ARG,uVar3,uVar6);
    uVar7 = 0;
    uVar5 = 1;
    uVar6 = 0;
    uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
    F_00431250(this_00 GEN_EDX_ARG,0,uVar3,uVar6,uVar5,uVar7);
  }
  return;
}

/* ref: FUN_007d0bd0 */
GEN_NOFRAME uint GEN_THISCALL F_007d0bd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d0bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pvVar1 = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  if (pvVar1 == (undefined *)0x0) {
    uVar4 = F_0046ff40();
    uVar2 = (uint)(uVar4 / 1000);
  }
  else {
    uVar2 = F_00975680(pvVar1 GEN_EDX_ARG);
  }
  *(uint *)((int)this + 0xb960) = uVar2;
  *(undefined1 *)((int)this + 0xb96d) = 0x2d;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG,0x32)));
  uVar2 = (uint)*(byte *)((int)this + 0xb96d);
  uVar6 = 0x21;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_00462440(this_00 GEN_EDX_ARG,uVar2,uVar6);
  uVar7 = 0;
  uVar5 = 1;
  uVar6 = 0;
  uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
  uVar2 = F_00431250(pvVar1 GEN_EDX_ARG,0,uVar2,uVar6,uVar5,uVar7);
  return uVar2;
}

/* ref: FUN_007d0c60 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007d0c60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d0c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  short * psVar3;
  int iVar4;
  short * psVar5;
  
  if (*(char *)((int)this + 0xb974) == '\x02') {
    psVar5 = (short *)((int)this + 0x96a2);
    iVar4 = 5;
    do {
      if (*psVar5 != 0) {
        uVar2 = 0;
        psVar3 = (short *)((int)this + 0x760);
        do {
          if (*psVar3 == *psVar5) {
            iVar1 = uVar2 * 0x11c + 0x65c + (int)this;
            if (iVar1 != 0) {
              if ((*(int *)((int)this + 0x9690) == 0) && (*(char *)(iVar1 + 0x115) != '\x05')) {
                *(short * PTR32 *)((int)this + 0x9690) = psVar5;
              }
              if ((*(int *)((int)this + 0x9694) == 0) && (*(char *)(iVar1 + 0x115) == '\x05')) {
                *(short * PTR32 *)((int)this + 0x9694) = psVar5;
              }
            }
            break;
          }
          uVar2 = uVar2 + 1;
          psVar3 = psVar3 + 0x8e;
        } while (uVar2 < 0x80);
      }
      psVar5 = psVar5 + 5;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  return;
}

/* ref: Client::UI2::Agent::AgentContentsFinder::vf11 */
GEN_NOFRAME byte GEN_THISCALL F_007d0cf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d0cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
  if ((*(int *)(uVar1 + 0x18) != 0) &&
     ((~(byte)(*((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) + 4))) >> 1) & 1) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_007d0d20 */
GEN_FRAME uint GEN_THISCALL F_007d0d20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d0d20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4044));
  *(undefined1 *)(in_ecx + 3) = 0;
  F_0042b630(in_ecx + 4 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x19 GEN_EDX_ARG);
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentCutScene::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007d0d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d0d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (this[0xc] != (undefined1)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_ARG,0x23);
    iVar3 = REFG(int, 0x1370c18);
    if ((uVar2 != 0) && (REFG(int, 0x1370c18) != 0)) {
      uVar4 = *(uint *)(REFG(int, 0x1370c18) + 0x30);
      if (*(int *)(REFG(int, 0x1370c18) + 0x2c) != 0) {
        uVar4 = uVar4 | 0x80000000;
      }
      if (**(uint * PTR32 *)(uVar2 + 0x20) != uVar4) {
        **(uint * PTR32 *)(uVar2 + 0x20) = uVar4;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      iVar3 = *(int *)(iVar3 + 0x38) - *(int *)(iVar3 + 0x30);
      if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4))) != iVar3) {
        *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4))) = iVar3;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
    }
  }
  return;
}

/* ref: FUN_007d0dc0 */
GEN_FRAME uint GEN_THISCALL F_007d0dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d0dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  uint uVar4;
  int iVar5;
  undefined * this_00;
  undefined * pvVar6;
  char * pcVar7;
  
  iVar5 = 6;
  pvVar6 = param_1;
  do {
    F_00596cd0(pvVar6 GEN_EDX_FWD,((int)param_2 - (int)param_1) + (int)pvVar6);
    pvVar6 = (undefined *)((int)pvVar6 + 8);
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  if ((*param_2 & 0xf) == 0) {
    pcVar7 = (char *)0x0;
  }
  else {
    pcVar7 = *(char * PTR32 *)(param_2 + 4);
  }
  pbVar3 = param_2;
  if ((*pcVar7 == '(') && (pcVar7[1] == '-')) {
    this_00 = (undefined *)((int)this + 0x10);
    F_0042aca0(this_00 GEN_EDX_ARG);
    pvVar6 = (undefined *)((int)this + 100);
    F_0042aca0(pvVar6 GEN_EDX_ARG);
    bVar1 = pcVar7[2];
    pbVar3 = (byte *)(uint)bVar1;
    iVar5 = 2;
    while (bVar1 != 0) {
      if (((char)pbVar3 == '-') && (pcVar7[iVar5 + 1] == ')')) {
        bVar1 = pcVar7[iVar5 + 2];
        uVar4 = (uint)bVar1;
        pcVar7 = pcVar7 + iVar5 + 2;
        while (bVar1 != 0) {
          uVar4 = F_0042d160(pvVar6 GEN_EDX_ARG,uVar4);
          bVar1 = pcVar7[1];
          uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar1);
          pcVar7 = pcVar7 + 1;
        }
        uVar4 = F_0042a990(this_00 GEN_EDX_ARG);
        F_005a2710((undefined *)((int)param_1 + 8) GEN_EDX_ARG,6);
        *(uint *)((int)param_1 + 0xc) = uVar4;
        uVar4 = F_0042a990(pvVar6 GEN_EDX_ARG);
        pbVar3 = (byte *)F_005a2710(param_1 GEN_EDX_ARG,6);
        *(uint *)((int)param_1 + 4) = uVar4;
        break;
      }
      uVar4 = F_0042d160(this_00 GEN_EDX_ARG,pbVar3);
      bVar1 = pcVar7[iVar5 + 1];
      pbVar3 = ((byte *)GEN_TOP(CONCAT31((int3)(uVar4 >> 8),bVar1)));
      iVar5 = iVar5 + 1;
    }
  }
  iVar5 = REFG(int, 0x1370c18);
  if (REFG(int, 0x1370c18) != 0) {
    param_2 = *(byte * PTR32 *)(REFG(int, 0x1370c18) + 0x30);
    if (*(int *)(REFG(int, 0x1370c18) + 0x2c) != 0) {
      param_2 = (byte *)((uint)param_2 | 0x80000000);
    }
    F_005a2710((undefined *)((int)param_1 + 0x30) GEN_EDX_ARG,4);
    *(byte * PTR32 *)((int)param_1 + 0x34) = param_2;
    iVar2 = *(int *)(iVar5 + 0x38);
    iVar5 = *(int *)(iVar5 + 0x30);
    pbVar3 = (byte *)F_005a2710((undefined *)((int)param_1 + 0x38) GEN_EDX_ARG,4);
    *(int *)((int)param_1 + 0x3c) = iVar2 - iVar5;
  }
  return (uint)pbVar3;
}

/* ref: FUN_007d0ef0 */
GEN_FRAME uint GEN_THISCALL F_007d0ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d0ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  int * piVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar1 = 0;
  if (param_1 != 0) {
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    F_007d0dc0(this GEN_EDX_FWD,((undefined4 *)(gen_frame + 0x8)),param_3);
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2 GEN_EDX_ARG,param_1,param_2,((undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x48));
    iVar3 = 7;
    do {
      this_00 = this_00 - 2;
      uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007d0f80 */
GEN_FRAME uint GEN_THISCALL F_007d0f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d0f80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d408c));
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentEmote::vf1 */
GEN_FRAME uint GEN_THISCALL F_007d0fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d0fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint * puVar3;
  undefined * pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pvVar4 = REFG(void * PTR32, 0x1379694);
  if ((*param_2 & 0xf) != 0) {
    uVar2 = *(uint *)(param_2 + 4);
    if (0x7fffffff < uVar2) {
      *(undefined4 *)(this + 8) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return (uint)param_1;
    }
    if (uVar2 != 0) {
      if (uVar2 == 1) {
        if ((param_2[8] & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(param_2 + 0xc);
        }
        puVar3 = (uint *)F_00ab28a0(uVar6);
        if (puVar3 != (uint *)0x0) {
          iVar5 = (*puVar3 & 0xffffff) + (int)puVar3;
          uVar7 = 0x100;
          uVar2 = (uint)(ushort)puVar3[8];
          pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x54))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
          F_00434720(pvVar4 GEN_EDX_ARG,uVar2,iVar5,uVar7,uVar6);
        }
      }
      goto LAB_007d10de;
    }
  }
  if ((param_2[8] & 0xf) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(param_2 + 0xc);
  }
  if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
    bVar1 = F_00aa0f40(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
    if (bVar1 == 0) {
      uVar2 = F_00ac6e80(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,0xffffffff,uVar6,0,0,1);
      if (uVar2 != 0) {
        F_00a7d4b0(uVar2,pvVar4,0,0xffffffff,uVar6,0,0,0,0,REFG(float, 0x10916ec));
      }
    }
    else {
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1090544));
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 0)) = 0xe0000000;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 4)) = 0;
      (*(undefined2 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x24)) = 1;
      (*(ulonglong *)(gen_frame + 0x14)) = F_00533c20(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
      (*(undefined2 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x24)) = 1;
      F_00aa0ed0(pvVar4 GEN_EDX_ARG,uVar6,((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    }
  }
LAB_007d10de: ;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_007d1100 */
GEN_FRAME uint GEN_THISCALL F_007d1100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d1100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD);
  if ((char)uVar2 != '\0') {
    bVar1 = *(byte *)((int)this + param_1 + 0x470);
    uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
    if ((bVar1 & 1) == 0) {
      *(byte *)((int)this + param_1 + 0x470) = bVar1 | 1;
      uVar2 = (uint)(bVar1 >> 1);
      *(int *)((int)this + 0x468) = *(int *)((int)this + 0x468) + uVar2;
    }
    *(undefined1 *)((int)this + 0x3678) = 1;
  }
  return uVar2;
}

/* ref: FUN_007d1140 */
GEN_FRAME uint GEN_THISCALL F_007d1140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d1140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = (*(int *)((int)this + 0x2da4) - *(int *)((int)this + 0x2da0)) / 0xc0;
  F_005a2710((undefined *)((int)this + 0x1070) GEN_EDX_FWD,4);
  *(undefined4 *)((int)this + 0x1074) = 3;
  F_005a2710((undefined *)((int)this + 0x1080) GEN_EDX_ARG,4);
  *(int *)((int)this + 0x1084) = local_10;
  uVar1 = *(undefined4 *)((int)this + 0x1c);
  F_005a2710((undefined *)((int)this + 0x1078) GEN_EDX_ARG,4);
  *(undefined4 *)((int)this + 0x107c) = uVar1;
  local_c = local_10;
  if (local_10 != 0) {
    local_8 = 0;
    puVar4 = (undefined4 *)((int)this + 0x1094);
    do {
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2da0) + local_8)));
      uVar1 = *puVar3;
      F_005a2710(puVar4 - 3 GEN_EDX_ARG,4);
      puVar4[-2] = uVar1;
      uVar1 = puVar3[3];
      F_005a2710(puVar4 - 1 GEN_EDX_ARG,4);
      *puVar4 = uVar1;
      uVar2 = F_0042a990(puVar3 + 5 GEN_EDX_ARG);
      F_005a2710(puVar4 + 1 GEN_EDX_ARG,6);
      puVar4[2] = uVar2;
      uVar2 = F_0042a990(puVar3 + 0x1a GEN_EDX_ARG);
      F_005a2710(puVar4 + 3 GEN_EDX_ARG,6);
      puVar4[4] = uVar2;
      uVar1 = puVar3[4];
      F_005a2710(puVar4 + 5 GEN_EDX_ARG,4);
      puVar4[6] = uVar1;
      uVar1 = puVar3[0x2f];
      F_005a2710(puVar4 + 7 GEN_EDX_ARG,4);
      local_8 = local_8 + 0xc0;
      puVar4[8] = uVar1;
      local_c = (uint)*(byte *)(puVar3 + 0x2f) + local_c +
                (uint)*(byte *)((int)puVar3 + 0xbf) + (uint)*(byte *)((int)puVar3 + 0xbe) +
                (uint)*(byte *)((int)puVar3 + 0xbd);
      puVar4 = puVar4 + 0xc;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  uVar2 = F_005a2710((undefined *)((int)this + 0x2ca8) GEN_EDX_ARG,4);
  *(int *)((int)this + 0x2cac) = local_c;
  return uVar2;
}

/* ref: FUN_007d12d0 */
GEN_NOFRAME uint GEN_THISCALL F_007d12d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d12d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined4 *)((int)this + 0x468) = 0;
  uVar2 = F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      bVar1 = F_00a6b0c0(&REFG(undefined, 0x14ab464) GEN_EDX_ARG,uVar4);
      uVar3 = CONCAT31(extraout_var,bVar1);
      if (bVar1 == 1) {
        bVar1 = *(byte *)((int)this + uVar4 + 0x470);
        uVar3 = CONCAT31(extraout_var,bVar1);
        if ((bVar1 & 1) == 0) {
          *(byte *)((int)this + uVar4 + 0x470) = bVar1 | 1;
          uVar3 = (uint)(bVar1 >> 1);
          *(int *)((int)this + 0x468) = *(int *)((int)this + 0x468) + uVar3;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x32c);
  }
  *(undefined1 *)((int)this + 0x464) = 1;
  return uVar3;
}

/* ref: FUN_007d1340 */
GEN_NOFRAME uint GEN_THISCALL F_007d1340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d1340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a2710((undefined *)((int)this + 0x1070) GEN_EDX_FWD,4);
  *(undefined4 *)((int)this + 0x1074) = 4;
  F_0076cad0(this GEN_EDX_ARG);
  F_0076cbd0(this GEN_EDX_ARG);
  F_0076cc70(this GEN_EDX_ARG);
  uVar1 = F_0076cd00(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007d1380 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007d1380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d1380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 *)((int)this + 0x90) = &REFG(undefined, 0x10bdb8a);
  *(undefined2 *)((int)this + 0xa6) = 10;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined1 *)((int)this + 0xa8) = 0;
  *(undefined2 *)((int)this + 0xa0) = 0;
  *(undefined2 *)((int)this + 0xa2) = 0;
  *(undefined2 *)((int)this + 0x98) = 0;
  *(undefined2 *)((int)this + 0x9a) = 0;
  *(undefined2 *)((int)this + 0x9c) = 0;
  *(undefined2 *)((int)this + 0x9e) = 0;
  *(undefined2 *)((int)this + 0xa4) = 0xffff;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 0x66) = 0;
  *(undefined2 *)((int)this + 0x62) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x68) = 0;
  *(undefined2 *)((int)this + 0x6a) = 0;
  *(undefined2 *)((int)this + 0x6c) = 0;
  *(undefined2 *)((int)this + 0x6e) = 0;
  *(undefined2 *)((int)this + 0x70) = 0;
  *(undefined2 *)((int)this + 0x72) = 0;
  *(undefined2 *)((int)this + 0x74) = 0;
  *(undefined2 *)((int)this + 0x76) = 0;
  *(undefined2 *)((int)this + 0x78) = 0;
  *(undefined2 *)((int)this + 0x7a) = 0;
  *(undefined2 *)((int)this + 0x7c) = 0;
  *(undefined2 *)((int)this + 0x7e) = 0;
  *(undefined2 *)((int)this + 0x80) = 0;
  *(undefined2 *)((int)this + 0x82) = 0;
  *(undefined2 *)((int)this + 0x84) = 0;
  *(undefined2 *)((int)this + 0x86) = 0;
  *(undefined2 *)((int)this + 0x88) = 0;
  *(undefined2 *)((int)this + 0x8a) = 0;
  *(undefined2 *)((int)this + 0x8c) = 0;
  *(undefined2 *)((int)this + 0x8e) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined2 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined2 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined2 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined2 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined2 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined2 *)((int)this + 0x5c) = 0;
  return 0;
}

/* ref: FUN_007d14a0 */
GEN_FRAME uint GEN_STDCALL F_007d14a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d14a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  bool bVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  int iVar7;
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar4 = F_00ab1e70(param_1);
  if (uVar4 == 0) {
    return 0;
  }
  uVar4 = (uint)*(ushort *)(uVar4 + 0x18);
  iVar1 = uVar4 + 0x40;
  local_8 = 0;
  bVar3 = false;
  if (uVar4 != 0) {
    local_c = 0xcbc;
    iVar7 = 0xcbc;
    local_10 = uVar4;
    do {
      if (iVar1 <= (int)uVar4) {
        return local_8;
      }
      piVar5 = (int *)F_00ab1ea0(uVar4);
      if (piVar5 == (int *)0x0) {
        return local_8;
      }
      if (*(char *)((int)piVar5 + 0x16) == '\0') {
        if (bVar3) goto LAB_007d152a;
      }
      else {
        if (bVar3) {
          return local_8;
        }
        bVar3 = true;
LAB_007d152a: ;
        if (((*piVar5 == 0) && (piVar5[1] == 0)) && (piVar5[2] == 0)) {
          return local_8;
        }
        piVar2 = ((int *)GEN_TOP((*(int *)(param_2 + 0x20) - 8 + iVar7)));
        iVar7 = *(short *)((int)piVar5 + 0x12) - 0x400;
        iVar6 = (short)piVar5[5] - 0x400;
        if (*piVar2 != piVar5[2]) {
          *piVar2 = piVar5[2];
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) - 4 + local_c))) != iVar7) {
          *((int *)GEN_TOP((*(int *)(param_2 + 0x20) - 4 + local_c))) = iVar7;
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + local_c))) != iVar6) {
          *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + local_c))) = iVar6;
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 4 + local_c))) != *piVar5) {
          *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 4 + local_c))) = *piVar5;
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 8 + local_c))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 8 + local_c))) = 0;
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        iVar7 = local_c + 0x14;
        uVar4 = local_10 + 1;
        local_8 = local_8 + 1;
        local_10 = uVar4;
        local_c = iVar7;
      }
    } while (uVar4 != 0);
  }
  return local_8;
}

/* ref: FUN_007d15f0 */
GEN_FRAME byte GEN_STDCALL F_007d15f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d15f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (param_2 < 0x51) {
    (*(uint *)(gen_frame + 0xc)) = *(byte *)(param_3 + 0x83) & 7;
    (*(ushort *)(gen_frame + 0x8)) = 4;
    if (3 < (*(uint *)(gen_frame + 0xc))) {
      (*(uint *)(gen_frame + 0xc)) = 3;
    }
    bVar3 = *(byte *)(param_3 + 0x83) >> 4 & 3;
    if (bVar3 != 0) {
      (*(ushort *)(gen_frame + 0x8)) = (ushort)bVar3;
    }
    (*(undefined4 *)(gen_frame + 0x20)) = 0x19000c8;
    iVar2 = (param_2 + param_1) * 5 + 0x32d;
    (*(undefined4 *)(gen_frame + 0x24)) = 0xbb80258;
    iVar4 = CONCAT22(*(undefined2 *)((int)&(*(undefined4 *)(gen_frame + 0x20)) + (*(uint *)(gen_frame + 0xc)) * 2),(*(ushort *)(gen_frame + 0x8)));
    piVar1 = ((int *)GEN_TOP((*(int *)(param_4 + 0x20) + iVar2 * 4)));
    iVar6 = *(short *)(param_3 + 0x7e) - 0x400;
    iVar7 = *(short *)(param_3 + 0x80) - 0x400;
    ((int *)(gen_frame + 0x10))[0] = 0xebf9;
    ((int *)(gen_frame + 0x10))[1] = 0xebfa;
    ((int *)(gen_frame + 0x10))[2] = 0xebfb;
    ((int *)(gen_frame + 0x10))[3] = 0xec96;
    if (*piVar1 != iVar4) {
      *piVar1 = iVar4;
      *(undefined1 *)(param_4 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(param_4 + 0x20) + 4 + iVar2 * 4))) != iVar6) {
      *((int *)GEN_TOP((*(int *)(param_4 + 0x20) + 4 + iVar2 * 4))) = iVar6;
      *(undefined1 *)(param_4 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(param_4 + 0x20) + 8 + iVar2 * 4))) != iVar7) {
      *((int *)GEN_TOP((*(int *)(param_4 + 0x20) + 8 + iVar2 * 4))) = iVar7;
      *(undefined1 *)(param_4 + 0x1d) = 1;
    }
    piVar1 = ((int *)GEN_TOP((*(int *)(param_4 + 0x20) + 0xc + iVar2 * 4)));
    iVar4 = (*(char *)(param_3 + 0x84) != '\0') + 0xec31;
    if (*piVar1 != iVar4) {
      *piVar1 = iVar4;
      *(undefined1 *)(param_4 + 0x1d) = 1;
    }
    piVar1 = ((int *)GEN_TOP((*(int *)(param_4 + 0x20) + 0x10 + iVar2 * 4)));
    if (*piVar1 != ((int *)(gen_frame + 0x10))[(int)((*(uint *)(gen_frame + 0xc)))]) {
      *piVar1 = ((int *)(gen_frame + 0x10))[(int)((*(uint *)(gen_frame + 0xc)))];
      *(undefined1 *)(param_4 + 0x1d) = 1;
    }
    uVar10 = 0;
    uVar9 = 1;
    uVar8 = 0;
    uVar5 = F_0042a990(param_3 GEN_EDX_ARG);
    F_00431250(param_5 GEN_EDX_ARG,param_2 + 0x110,uVar5,uVar8,uVar9,uVar10);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::UI2::Agent::AgentFishingNote::vf11 */
GEN_NOFRAME byte GEN_THISCALL F_007d17b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d17b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
  if ((*(int *)(uVar1 + 0x18) != 0) &&
     ((~(byte)((uint)**((undefined4 * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) >> 0x1d) & 1) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_007d17e0 */
GEN_FRAME uint GEN_THISCALL F_007d17e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d17e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d40dc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d40d0));
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined2 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  puVar1 = (undefined4 *)((int)this + 0x10);
  iVar2 = 0x19;
  do {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFishGuide::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007d1840(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d1840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * pAVar2;
  int iVar3;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined2 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  pAVar2 = this + 0x10;
  iVar3 = 0x19;
  do {
    *(undefined4 *)pAVar2 = 0;
    pAVar2[4] = (undefined1)0x0;
    pAVar2 = pAVar2 + 8;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return 0;
}

/* ref: Client::UI2::Agent::AgentFishGuide::vf5 */
GEN_FRAME uint GEN_THISCALL F_007d18a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d18a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 AVar1;
  uint * puVar2;
  int * piVar3;
  undefined * this_00;
  uint * puVar4;
  undefined * this_01;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  puVar2 = ((uint *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD)));
  if ((char)puVar2 != '\0') {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG,0x3a)));
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    puVar4 = ((uint *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_ARG,0x3f)));
    uVar5 = REFG(undefined4, 0x14ab378);
    puVar2 = puVar4;
    if ((puVar4 != (uint *)0x0) && (this_00 != (undefined *)0x0)) {
      if (*(uint *)(this + 0xe0) != REFG(undefined4, 0x14ab378)) {
        uVar10 = 0;
        uVar9 = 1;
        uVar8 = 0;
        *(uint *)(this + 0xe0) = REFG(undefined4, 0x14ab378);
        uVar7 = 0xeee;
        this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
        uVar5 = F_00461bb0(this_01 GEN_EDX_ARG,uVar7,uVar5);
        uVar5 = F_00431250(this_00 GEN_EDX_ARG,2,uVar5,uVar8,uVar9,uVar10);
      }
      AVar1 = this[0xe6];
      puVar2 = ((uint *)GEN_TOP(CONCAT31((int3)(uVar5 >> 8),AVar1)));
      if (AVar1 != (undefined1)0x0) {
        if (((byte)AVar1 & 1) != 0) {
          uVar5 = *(uint *)puVar4[8];
          uVar6 = F_0076cf10(this GEN_EDX_ARG,&REFG(undefined, 0x14ac1bc),puVar4,this_00);
          puVar2 = (uint *)puVar4[8];
          *puVar2 = uVar5 | uVar6;
          *(undefined1 *)((int)puVar4 + 0x1d) = 1;
          if (((uVar5 | uVar6) & 4) != 0) {
            this[0xe6] = (undefined1)((byte)this[0xe6] & 0xfe);
          }
        }
        if (((byte)this[0xe6] & 2) != 0) {
          uVar5 = *(uint *)puVar4[8];
          uVar6 = F_0076cfb0(this GEN_EDX_ARG,&REFG(undefined, 0x14ac1bc),puVar4,this_00);
          puVar2 = (uint *)puVar4[8];
          *puVar2 = uVar5 | uVar6;
          *(undefined1 *)((int)puVar4 + 0x1d) = 1;
          if (((uVar5 | uVar6) & 0x10) != 0) {
            this[0xe6] = (undefined1)((byte)this[0xe6] & 0xfd);
          }
        }
      }
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_007d19b0 */
GEN_FRAME ushort GEN_THISCALL F_007d19b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d19b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  ushort uVar2;
  int * piVar3;
  int iVar4;
  
  uVar2 = *(ushort *)((int)this + 0xe4);
  iVar4 = 0;
  if ((uVar2 != 0) && (uVar2 != 0)) {
    piVar3 = *(int * PTR32 *)(param_1 + 4);
    while ((*piVar3 != *(int *)((int)this + 0xd8) || ((*(byte *)((int)piVar3 + 0xe) & 1) == 0))) {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 5;
      if ((int)(uint)*(ushort *)((int)this + 0xe4) <= iVar4) {
        *(undefined4 *)((int)this + 0xd8) = 0;
        return (ushort)piVar3;
      }
    }
    cVar1 = ((char)(iVar4 / 0x19) + (char)(iVar4 >> 0x1f)) -
            (char)((longlong)iVar4 * 0x51eb851f >> 0x3f);
    *(char *)((int)this + 0xe7) = cVar1;
    uVar2 = cVar1 * 0x19;
    *(char *)((int)this + 0xe8) = (char)iVar4 - (char)uVar2;
    *(undefined4 *)((int)this + 0xd8) = 0;
    return uVar2;
  }
  *(undefined4 *)((int)this + 0xd8) = 0;
  return uVar2;
}

/* ref: FUN_007d1a50 */
GEN_FRAME uint GEN_THISCALL F_007d1a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d1a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  int local_14;
  int local_10;
  
  iVar1 = param_2;
  iVar4 = (int)*(char *)((int)this + 0xe7);
  uVar2 = iVar4 * 0x19;
  if ((*(ushort *)((int)this + 0xe4) != 0) && (uVar2 < *(ushort *)((int)this + 0xe4))) {
    if (199 < (int)*(char *)((int)this + 0xe8) + uVar2) {
      *(char *)((int)this + 0xe8) = -0x39 - (char)uVar2;
    }
    if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 4))) != iVar4) {
      *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 4))) = iVar4;
      *(undefined1 *)(param_2 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 8))) != (int)*(char *)((int)this + 0xe8)) {
      *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 8))) = (int)*(char *)((int)this + 0xe8);
      *(undefined1 *)(param_2 + 0x1d) = 1;
    }
    param_2 = uVar2 + 1;
    iVar4 = (iVar4 * 0x7d + 5) * 4;
    local_10 = 0x18;
    puVar3 = (undefined1 *)((int)this + 0x1c);
    local_14 = 5;
    do {
      uVar2 = 0;
      puVar3[-8] = 0;
      *(undefined4 *)(puVar3 - 0xc) = 0;
      if (param_2 - 1 < (uint)*(ushort *)((int)this + 0xe4)) {
        puVar5 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) - 0x14 + iVar4)));
        if ((*((byte *)GEN_TOP((*(int *)(param_1 + 4) - 6 + iVar4))) & 1) != 0) {
          *(undefined4 *)(puVar3 - 0xc) = *puVar5;
          uVar2 = (uint)*(ushort *)(puVar5 + 2);
        }
      }
      else {
        *(undefined4 *)(puVar3 - 0xc) = 0xffffffff;
      }
      if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) - 0xc + local_10))) != *(int *)(puVar3 - 0xc)) {
        *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) - 0xc + local_10))) = *(int *)(puVar3 - 0xc);
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) - 4 + local_10))) != uVar2) {
        *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) - 4 + local_10))) = uVar2;
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      uVar2 = 0;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 - 4) = 0;
      if (param_2 < *(ushort *)((int)this + 0xe4)) {
        puVar5 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + iVar4)));
        if ((*(byte *)((int)puVar5 + 0xe) & 1) != 0) {
          *(undefined4 *)(puVar3 - 4) = *puVar5;
          uVar2 = (uint)*(ushort *)(puVar5 + 2);
        }
      }
      else {
        *(undefined4 *)(puVar3 - 4) = 0xffffffff;
      }
      if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + local_10))) != *(int *)(puVar3 - 4)) {
        *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + local_10))) = *(int *)(puVar3 - 4);
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8 + local_10))) != uVar2) {
        *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8 + local_10))) = uVar2;
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      uVar2 = 0;
      puVar3[8] = 0;
      *(undefined4 *)(puVar3 + 4) = 0;
      if (param_2 + 1 < (uint)*(ushort *)((int)this + 0xe4)) {
        puVar5 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 0x14 + iVar4)));
        if ((*((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0x22 + iVar4))) & 1) != 0) {
          *(undefined4 *)(puVar3 + 4) = *puVar5;
          uVar2 = (uint)*(ushort *)(puVar5 + 2);
        }
      }
      else {
        *(undefined4 *)(puVar3 + 4) = 0xffffffff;
      }
      if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xc + local_10))) != *(int *)(puVar3 + 4)) {
        *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xc + local_10))) = *(int *)(puVar3 + 4);
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x14 + local_10))) != uVar2) {
        *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x14 + local_10))) = uVar2;
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      uVar2 = 0;
      puVar3[0x10] = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0;
      if (param_2 + 2 < (uint)*(ushort *)((int)this + 0xe4)) {
        puVar5 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 0x28 + iVar4)));
        if ((*((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0x36 + iVar4))) & 1) != 0) {
          *(undefined4 *)(puVar3 + 0xc) = *puVar5;
          uVar2 = (uint)*(ushort *)(puVar5 + 2);
        }
      }
      else {
        *(undefined4 *)(puVar3 + 0xc) = 0xffffffff;
      }
      if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x18 + local_10))) != *(int *)(puVar3 + 0xc)) {
        *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x18 + local_10))) = *(int *)(puVar3 + 0xc);
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x20 + local_10))) != uVar2) {
        *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x20 + local_10))) = uVar2;
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      uVar2 = 0;
      puVar3[0x18] = 0;
      *(undefined4 *)(puVar3 + 0x14) = 0;
      if (param_2 + 3 < (uint)*(ushort *)((int)this + 0xe4)) {
        puVar5 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 0x3c + iVar4)));
        if ((*((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0x4a + iVar4))) & 1) != 0) {
          *(undefined4 *)(puVar3 + 0x14) = *puVar5;
          uVar2 = (uint)*(ushort *)(puVar5 + 2);
        }
      }
      else {
        *(undefined4 *)(puVar3 + 0x14) = 0xffffffff;
      }
      if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x24 + local_10))) != *(int *)(puVar3 + 0x14)) {
        *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x24 + local_10))) = *(int *)(puVar3 + 0x14);
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x2c + local_10))) != uVar2) {
        *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x2c + local_10))) = uVar2;
        *(undefined1 *)(iVar1 + 0x1d) = 1;
      }
      param_2 = param_2 + 5;
      iVar4 = iVar4 + 100;
      local_10 = local_10 + 0x3c;
      puVar3 = puVar3 + 0x28;
      local_14 = local_14 - 1;
    } while (local_14 != 0);
    return 2;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentFishGuide::vf11 */
GEN_NOFRAME byte GEN_THISCALL F_007d1d30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d1d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
  if ((*(int *)(uVar1 + 0x18) != 0) &&
     ((~(byte)(*((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) + 4))) >> 9) & 1) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_007d1d60 */
GEN_FRAME uint GEN_THISCALL F_007d1d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d1d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d412c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4120));
  *(undefined1 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined2 *)((int)this + 0x22) = 0;
  *(undefined1 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x2e) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined2 *)((int)this + 0x38) = 0;
  *(undefined2 *)((int)this + 0x3a) = 0;
  *(undefined1 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined2 *)((int)this + 0x44) = 0;
  *(undefined2 *)((int)this + 0x46) = 0;
  *(undefined1 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined2 *)((int)this + 0x50) = 0;
  *(undefined2 *)((int)this + 0x52) = 0;
  *(undefined1 *)((int)this + 0x54) = 0;
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFishRecord::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007d1de0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d1de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  this[0x58] = (undefined1)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x18] = (undefined1)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x20) = 0;
  *(undefined2 *)(this + 0x22) = 0;
  this[0x24] = (undefined1)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined2 *)(this + 0x2c) = 0;
  *(undefined2 *)(this + 0x2e) = 0;
  this[0x30] = (undefined1)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined2 *)(this + 0x38) = 0;
  *(undefined2 *)(this + 0x3a) = 0;
  this[0x3c] = (undefined1)0x0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined2 *)(this + 0x44) = 0;
  *(undefined2 *)(this + 0x46) = 0;
  this[0x48] = (undefined1)0x0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined2 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x52) = 0;
  this[0x54] = (undefined1)0x0;
  return 0;
}

/* ref: FUN_007d1e70 */
GEN_FRAME uint GEN_THISCALL F_007d1e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d1e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d417c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4170));
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x16) = 0;
  *(undefined2 *)((int)this + 0x18) = 0;
  *(undefined2 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentGatheringNote::vf1 */
GEN_FRAME uint GEN_THISCALL F_007d1ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d1ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  int * piVar2;
  undefined4 uVar3;
  
  if ((*param_2 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    iVar1 = *(int *)(this + 0x24);
    if (iVar1 < 4) {
      *(undefined2 *)(this + iVar1 * 4 + 0x10) = *(undefined2 *)(this + 0x28);
      *(undefined2 *)(this + iVar1 * 4 + 0x12) = *(undefined2 *)(this + 0x2c);
    }
    if ((param_2[8] & 0xf) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_2 + 0xc);
    }
    *(int *)(this + 0x24) = iVar1;
    if (iVar1 < 4) {
      *(int *)(this + 0x28) = (int)*(short *)(this + iVar1 * 4 + 0x10);
      *(int *)(this + 0x2c) = (int)*(short *)(this + iVar1 * 4 + 0x12);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x70))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 8),1);
    F_00a73450(&REFG(undefined, 0x14ab744) GEN_EDX_ARG,this + 0xc);
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 1: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
    }
    *(undefined4 *)(this + 0x28) = uVar3;
    *(undefined4 *)(this + 0x2c) = 0;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x70))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 8),1);
    F_00a72a70(&REFG(undefined, 0x14ab744) GEN_EDX_ARG,*(undefined4 *)(this + 0x24),*(undefined4 *)(this + 0x28),
                 *(undefined4 *)(this + 0x2c));
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 2: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
    }
    *(undefined4 *)(this + 0x2c) = uVar3;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x70))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 8),1);
    F_00a66b50(*(undefined4 *)(this + 0x2c));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xc) + 4))))(this + 0xc GEN_EDX_ARG,4);
    break;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    F_0076d8e0(this GEN_EDX_ARG);
    F_00a72450(&REFG(undefined, 0x14ab744) GEN_EDX_ARG);
    *(undefined4 *)(this + 8) = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return (uint)param_1;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_007d2060 */
GEN_NOFRAME uint GEN_THISCALL F_007d2060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d2060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (REFG(int, 0x1379694) == 0) goto LAB_007d20df;
  if (*(char *)(REFG(int, 0x1379694) + 0x1688) == '\x10') {
    if ((*(int *)((int)this + 0x24) == 0) || (*(int *)((int)this + 0x24) == 1)) goto LAB_007d20df;
  }
  else {
    if (*(char *)(REFG(int, 0x1379694) + 0x1688) == '\x11') {
      if ((*(int *)((int)this + 0x24) != 2) && (*(int *)((int)this + 0x24) != 3)) {
        *(undefined4 *)((int)this + 0x24) = 2;
      }
      goto LAB_007d20df;
    }
    if (((*(byte *)((int)this + 0x20) & 3) == 0) &&
       (uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_FWD,0x10,1), (short)uVar1 == 0)) {
      *(undefined4 *)((int)this + 0x24) = 2;
    }
    if (((*(byte *)((int)this + 0x20) & 0xc) != 0) ||
       (uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x11,1), (short)uVar1 != 0)) goto LAB_007d20df;
  }
  *(undefined4 *)((int)this + 0x24) = 0;
LAB_007d20df: ;
  if (3 < *(int *)((int)this + 0x24)) {
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  uVar1 = *(uint *)((int)this + 0x24);
  if ((int)uVar1 < 4) {
    *(int *)((int)this + 0x28) = (int)*(short *)((int)this + uVar1 * 4 + 0x10);
    *(int *)((int)this + 0x2c) = (int)*(short *)((int)this + uVar1 * 4 + 0x12);
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentGatheringNote::vf11 */
GEN_NOFRAME byte GEN_THISCALL F_007d2110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d2110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
  if ((*(int *)(uVar1 + 0x18) != 0) &&
     ((~(byte)(**((uint * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) >> 7) & 1) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_007d2140 */
GEN_FRAME uint GEN_THISCALL F_007d2140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d2140u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined1 gen_out[0x4];
  uint uVar1;
  undefined4 * puVar2;
  int local_c;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d41c4));
  in_ecx[0x1b] = 0;
  in_ecx[0x1c] = 0xffffffff;
  puVar2 = in_ecx + 0x1d;
  local_c = 0xd;
  do {
    *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar2 + 1 GEN_EDX_FWD);
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    *(undefined2 *)(puVar2 + 0x19) = 0;
    *(undefined1 *)((int)puVar2 + 0x66) = 0;
    puVar2 = puVar2 + 0x1a;
    local_c = local_c - 1;
  } while (-1 < local_c);
  in_ecx[3] = 1;
  in_ecx[5] = 0xffffffff;
  in_ecx[6] = 1;
  in_ecx[8] = 0xffffffff;
  in_ecx[9] = 1;
  in_ecx[0xb] = 0xffffffff;
  in_ecx[0xc] = 1;
  in_ecx[0xe] = 0xffffffff;
  in_ecx[0xf] = 1;
  in_ecx[0x11] = 0xffffffff;
  in_ecx[0x12] = 1;
  in_ecx[0x14] = 0xffffffff;
  in_ecx[0x15] = 1;
  in_ecx[0x17] = 0xffffffff;
  in_ecx[4] = 5;
  in_ecx[7] = 4;
  in_ecx[10] = 7;
  in_ecx[0xd] = 8;
  in_ecx[0x10] = 9;
  in_ecx[0x13] = 2;
  in_ecx[0x16] = 0xb;
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0) GEN_EDX_ARG);
  return (uint)in_ecx;
}

/* ref: FUN_007d2220 */
GEN_NOFRAME uint GEN_THISCALL F_007d2220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d2220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d41c4));
  iVar3 = 0xd;
  puVar4 = (undefined4 *)((int)this + 0x624);
  do {
    puVar4[-0x1a] = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    uVar5 = F_0042c880(puVar4 - 0x19 GEN_EDX_FWD);
    uVar2 = (uint)uVar5;
    iVar3 = iVar3 - 1;
    puVar4 = puVar4 - 0x1a;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentGearSet::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_007d2290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d2290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((*(int *)(this + 0x70) != -1) && (((byte)param_1 & 0x1f) == 1)) {
    F_0076dbd0(this GEN_EDX_FWD);
  }
  return;
}

/* ref: FUN_007d22b0 */
GEN_FRAME uint GEN_THISCALL F_007d22b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d22b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar1 = F_0043b440(this_00 GEN_EDX_ARG);
  if ((param_1 == uVar1) && (uVar1 = F_0076dad0(this GEN_EDX_ARG,param_1), uVar1 == 0)) {
    return 0;
  }
  uVar1 = F_0046bd40(this_00 GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_007d22f0 */
GEN_FRAME uint GEN_THISCALL F_007d22f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d22f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint in_ecx;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined * this_01;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2 GEN_EDX_ARG,0x3d);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG,0x38)));
  in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
  uVar4 = F_0043b440(in_ecx GEN_EDX_ARG);
  uVar5 = F_0043b460(in_ecx GEN_EDX_ARG);
  bVar1 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0xffffffff;
  if (uVar4 == 0xffffffff) {
    if (uVar5 == 0xffffffff) goto LAB_007d237e;
  }
  else {
    uVar6 = F_0076dad0(this GEN_EDX_ARG,uVar4);
    uVar5 = uVar4;
    (*(uint *)(gen_frame + 0xc)) = uVar4;
    if (uVar6 == 0) goto LAB_007d237e;
  }
  (*(uint *)(gen_frame + 0xc)) = uVar5;
  bVar1 = 1;
LAB_007d237e: ;
  if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x70c))) != (uint)bVar1) {
    *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x70c))) = (uint)bVar1;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10bdb9e),REFG(undefined4, 0x108cc50));
  if (((*(uint *)(gen_frame + 0xc)) != 0xffffffff) &&
     (uVar5 = F_0043b3e0(in_ecx GEN_EDX_ARG,(*(uint *)(gen_frame + 0xc))), (*(byte *)(uVar5 + 0x39) & 1) != 0)) {
    piVar2 = *(int * PTR32 *)((int)this + 4);
    iVar7 = uVar5 + 4;
    uVar5 = F_00435340((*(uint *)(gen_frame + 0xc)) + 1);
    uVar9 = 0x300;
    this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG)));
    uVar5 = F_004608b0(this_01 GEN_EDX_ARG,uVar9,uVar5,iVar7);
    F_0042e430(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar5);
  }
  uVar11 = 0;
  uVar10 = 1;
  uVar9 = 0;
  uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00431250(this_00 GEN_EDX_ARG,0x144,uVar5,uVar9,uVar10,uVar11);
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return (uint)uVar8;
}

/* ref: FUN_007d2430 */
GEN_FRAME uint GEN_THISCALL F_007d2430(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d2430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined * this_01;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_18;
  int local_14;
  int local_c;
  uint local_8;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2 GEN_EDX_ARG,0x2b);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG,0x27)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
  bVar1 = F_00a37c00(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
  uVar5 = (uint)bVar1;
  local_14 = 0;
  local_8 = 0;
  if (uVar5 != 0) {
    local_18 = 0x24;
    local_c = 0x10;
    do {
      uVar6 = F_0043b3e0(uVar4 GEN_EDX_ARG,local_8);
      piVar2 = ((int *)GEN_TOP((*(int *)(uVar3 + 0x20) - 8 + local_c)));
      if ((*(byte *)(uVar6 + 0x39) & 1) == 0) {
        if (*piVar2 != 0) {
          *piVar2 = 0;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
      }
      else {
        if (*piVar2 != 1) {
          *piVar2 = 1;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        iVar8 = 0;
        uVar7 = F_0043b440(uVar4 GEN_EDX_ARG);
        if (local_8 == uVar7) {
          iVar8 = 1;
        }
        else {
          uVar7 = F_0043b460(uVar4 GEN_EDX_ARG);
          if (local_8 == uVar7) {
            iVar8 = 2;
          }
        }
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) - 4 + local_c))) != iVar8) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) - 4 + local_c))) = iVar8;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        if (*(int *)(uVar6 + 0x34) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(uVar6 + 0x34) + 62000;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_c))) != iVar8) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_c))) = iVar8;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        if (*(int *)(uVar6 + 0x34) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(uVar6 + 0x34) + 0xf550;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4 + local_c))) != iVar8) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4 + local_c))) = iVar8;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        uVar7 = F_0076dad0(this GEN_EDX_ARG,local_8);
        if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 8 + local_c))) != uVar7) {
          *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 8 + local_c))) = uVar7;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        if (uVar6 + 4 != *((int *)GEN_TOP((local_18 + *(int *)((int)this_00 + 0x20))))) {
          *((uint *)GEN_TOP((local_18 + *(int *)((int)this_00 + 0x20)))) = uVar6 + 4;
          *(undefined1 *)((int)this_00 + 0x1d) = 1;
        }
        local_14 = local_14 + 1;
      }
      local_c = local_c + 0x14;
      local_18 = local_18 + 4;
      local_8 = local_8 + 1;
    } while ((int)local_8 < (int)uVar5);
  }
  this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  if (**(uint * PTR32 *)(uVar3 + 0x20) != uVar5) {
    **(uint * PTR32 *)(uVar3 + 0x20) = uVar5;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  uVar11 = 0;
  uVar10 = 1;
  uVar9 = 0;
  uVar6 = F_00461c60(this_01 GEN_EDX_ARG,0x7fc,local_14,uVar5);
  F_00431250(this_00 GEN_EDX_ARG,0,uVar6,uVar9,uVar10,uVar11);
  uVar4 = F_0043b3e0(uVar4 GEN_EDX_ARG,100);
  bVar1 = *(byte *)(uVar4 + 0x39) & 1;
  uVar4 = (uint)(bVar1 != 0);
  if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4))) != uVar4) {
    *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4))) = uVar4;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01 GEN_EDX_ARG,(uint)(bVar1 == 0) * 4 + 0x102c,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 4))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01 GEN_EDX_ARG,(uint)((int)uVar5 <= local_14) * 4 + 0x102d,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 8)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 8))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01 GEN_EDX_ARG,0x1032,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01 GEN_EDX_ARG,0x1033,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x10)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x10))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01 GEN_EDX_ARG,0x1109,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x14)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x14))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01 GEN_EDX_ARG,0x110a,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x18)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x18))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01 GEN_EDX_ARG,0x110c,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1c)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1c))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_0043bd00(this_01 GEN_EDX_ARG,0x110b,0,0);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x20)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x20))) = uVar3;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  uVar3 = F_007d22f0(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_007d2750 */
GEN_FRAME byte GEN_THISCALL F_007d2750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d2750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  F_0046c830(pvVar3 GEN_EDX_ARG,param_1);
  F_007d2430(this GEN_EDX_ARG);
  if (*(int *)((int)this + 8) != 0) {
    bVar2 = F_00a37c00(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x14)) = (uint)bVar2;
    (*(int *)(gen_frame + 0x18)) = -1;
    iVar6 = param_1;
    iVar1 = param_1;
    if (param_1 < (int)(uint)bVar2) {
      do {
        uVar4 = F_0043b3e0(pvVar3 GEN_EDX_ARG,iVar6);
        if ((*(byte *)(uVar4 + 0x39) & 1) != 0) {
          (*(int *)(gen_frame + 0x18)) = iVar6;
          if (-1 < iVar6) goto LAB_007d27d9;
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(*(uint *)(gen_frame + 0x14)));
    }
    do {
      iVar1 = iVar1 - 1;
      if (iVar1 < 0) goto LAB_007d27d9;
      uVar4 = F_0043b3e0(pvVar3 GEN_EDX_ARG,iVar1);
    } while ((*(byte *)(uVar4 + 0x39) & 1) == 0);
    (*(int *)(gen_frame + 0x18)) = iVar1;
LAB_007d27d9: ;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,3);
    (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x18));
    piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x5c))(piVar5 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),1,&(*(undefined4 *)(gen_frame + 0xc)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  }
  if ((*(int *)((int)this + 0x70) != -1) && (*(int *)((int)this + 0x70) == param_1)) {
    if (*(int *)((int)this + 0x6c) != 0) {
      piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x54))(piVar5 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x6c),0);
      *(undefined4 *)((int)this + 0x6c) = 0;
    }
    *(undefined4 *)((int)this + 0x70) = 0xffffffff;
  }
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  F_0043b110(pvVar3 GEN_EDX_ARG,param_1);
  return 0;
}

/* ref: FUN_007d2870 */
GEN_NOFRAME byte GEN_THISCALL F_007d2870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d2870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x24) + 0xc))))(*(int * PTR32 *)(uVar1 + 0x24) GEN_EDX_ARG);
  if (*(int *)((int)this + 0x6c) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x6c),0);
    *(undefined4 *)((int)this + 0x6c) = 0;
  }
  return 1;
}

/* ref: FUN_007d28c0 */
GEN_FRAME byte GEN_THISCALL F_007d28c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d28c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar1 = F_0043b440(this_00 GEN_EDX_ARG);
  if ((param_1 == uVar1) && (uVar1 = F_0076dad0(this GEN_EDX_ARG,param_1), uVar1 == 0)) {
    return 0;
  }
  F_0046bd40(this_00 GEN_EDX_ARG,param_1);
  return 0;
}

/* ref: FUN_007d2900 */
GEN_FRAME byte GEN_THISCALL F_007d2900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d2900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = F_0046c950(pvVar1 GEN_EDX_ARG,param_1);
  F_007d2430(this GEN_EDX_ARG);
  if (*(int *)((int)this + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,3);
    (*(uint *)(gen_frame + 0x8)) = uVar2;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  F_004593f0(pvVar1 GEN_EDX_ARG,uVar2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
  *(byte *)(uVar2 + 0x230bf) = *(byte *)(uVar2 + 0x230bf) | 2;
  return 0;
}

/* ref: FUN_007d29a0 */
GEN_FRAME byte GEN_THISCALL F_007d29a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d29a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = F_0046cac0(pvVar1 GEN_EDX_ARG,param_2,param_1);
  F_007d2430(this GEN_EDX_ARG);
  if (*(int *)((int)this + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,3);
    (*(uint *)(gen_frame + 0x8)) = uVar2;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  iVar5 = param_1;
  uVar4 = uVar2;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  F_004594a0(pvVar1 GEN_EDX_ARG,iVar5,uVar4);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
  *(byte *)(uVar4 + 0x230bf) = *(byte *)(uVar4 + 0x230bf) | 2;
  if ((*(int *)((int)this + 0x70) != -1) && (*(int *)((int)this + 0x70) == param_1)) {
    if (*(int *)((int)this + 0x6c) != 0) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x6c),0);
      *(undefined4 *)((int)this + 0x6c) = 0;
    }
    *(undefined4 *)((int)this + 0x70) = 0xffffffff;
  }
  if ((*(uint *)((int)this + 0x70) != 0xffffffff) && (*(uint *)((int)this + 0x70) == uVar2)) {
    if (*(int *)((int)this + 0x6c) != 0) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x6c),0);
      *(undefined4 *)((int)this + 0x6c) = 0;
    }
    *(undefined4 *)((int)this + 0x70) = 0xffffffff;
  }
  return 0;
}

/* ref: FUN_007d2ab0 */
GEN_FRAME byte GEN_THISCALL F_007d2ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d2ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,param_2,REFG(undefined4, 0x108cc50));
  bVar1 = F_0046cc00(pvVar2 GEN_EDX_ARG,param_1,((undefined1 *)(gen_frame + 0x14)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  if (bVar1 != 0) {
    F_007d2430(this GEN_EDX_ARG);
    if (*(int *)((int)this + 8) != 0) {
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x10)) = param_1;
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),1,&(*(undefined4 *)(gen_frame + 0xc)));
      F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    }
  }
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  F_004593f0(pvVar2 GEN_EDX_ARG,param_1);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
  *(byte *)(uVar4 + 0x230bf) = *(byte *)(uVar4 + 0x230bf) | 2;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_007d2b80 */
GEN_FRAME uint GEN_THISCALL F_007d2b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d2b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d420c));
  *(undefined1 *)(in_ecx + 3) = 0;
  puVar1 = in_ecx + 4;
  param_2 = 1;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar1 + 1 GEN_EDX_FWD);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x66) = 0;
    puVar1 = puVar1 + 0x1b;
    param_2 = param_2 - 1;
  } while (-1 < param_2);
  puVar1 = in_ecx + 0x3a;
  param_2 = 7;
  do {
    F_0042b630(puVar1 GEN_EDX_ARG);
    puVar1 = puVar1 + 0x15;
    param_2 = param_2 - 1;
  } while (-1 < param_2);
  puVar1 = in_ecx + 0xe2;
  param_2 = 2;
  do {
    F_0042b630(puVar1 GEN_EDX_ARG);
    puVar1 = puVar1 + 0x15;
    param_2 = param_2 - 1;
  } while (-1 < param_2);
  puVar1 = in_ecx + 0x121;
  param_2 = 0x1d;
  do {
    F_0042b630(puVar1 GEN_EDX_ARG);
    puVar1 = puVar1 + 0x15;
    param_2 = param_2 - 1;
  } while (-1 < param_2);
  F_0042b630(in_ecx + 0x397 GEN_EDX_ARG);
  in_ecx[0x3ad] = 0;
  in_ecx[0x3ae] = 0;
  in_ecx[0x3ac] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_007d2c60 */
GEN_NOFRAME uint GEN_THISCALL F_007d2c60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d2c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  ulonglong uVar6;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d420c));
  F_0042c880((undefined *)((int)this + 0xe5c) GEN_EDX_FWD);
  pvVar4 = (undefined *)((int)this + 0xe5c);
  iVar3 = 0x1d;
  do {
    pvVar4 = (undefined *)((int)pvVar4 - 0x54);
    F_0042c880(pvVar4 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  pvVar4 = (undefined *)((int)this + 0x484);
  iVar3 = 2;
  do {
    pvVar4 = (undefined *)((int)pvVar4 - 0x54);
    F_0042c880(pvVar4 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  pvVar4 = (undefined *)((int)this + 0x388);
  iVar3 = 7;
  do {
    pvVar4 = (undefined *)((int)pvVar4 - 0x54);
    F_0042c880(pvVar4 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  iVar3 = 1;
  puVar5 = (undefined4 *)((int)this + 0xe8);
  do {
    puVar5[-0x1b] = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    uVar6 = F_0042c880(puVar5 - 0x1a GEN_EDX_ARG);
    uVar2 = (uint)uVar6;
    iVar3 = iVar3 - 1;
    puVar5 = puVar5 - 0x1b;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentBuddy::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_007d2d30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d2d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if ((REFG(undefined1, 0x14b4ec2) & 2) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
    in_EAX = 0;
    if (*(int *)(uVar1 + 0x18) != 0) {
      return ~(*((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) + 4))) >> 10) & 1;
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_007d2d60 */
GEN_FRAME byte GEN_THISCALL F_007d2d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d2d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  uVar2 = F_00a6b470(1);
  bVar1 = F_0076df70(param_2 + 0x50,param_2 + 0x48,param_2 + 0x40,(int)this + 0x10,uVar2);
  if (bVar1 == 0) {
    return 0;
  }
  uVar2 = F_00a6b4b0(1);
  if (-1 < (int)uVar2) {
    F_0076e060(param_2 + 0x78,uVar2);
  }
  piVar3 = &REFG(undefined4, 0x132818c);
  iVar4 = param_2 + 0x98;
  do {
    if (-1 < *piVar3) {
      F_0076e0c0(this GEN_EDX_ARG,iVar4,*piVar3);
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + 0x20;
  } while ((int)piVar3 < 0x13281a4);
  return 1;
}

/* ref: FUN_007d2df0 */
GEN_FRAME byte GEN_THISCALL F_007d2df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d2df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  undefined * this_01;
  int iVar4;
  int iVar5;
  uint * puVar6;
  undefined4 uVar7;
  
  bVar1 = *(byte *)(param_1 + 0x31);
  this_01 = (undefined *)((int)this + 0x388);
  (*(int *)(gen_frame + 0x18)) = 0;
  puVar6 = (uint *)(param_2 + 0x174);
  param_2 = param_2 + 0x188;
  do {
    bVar2 = F_00a6b380(param_1 GEN_EDX_FWD,(*(int *)(gen_frame + 0x18)));
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar2);
    uVar7 = 0x136d;
    uVar3 = (uint)bVar2;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar3 = F_00460bd0(this_00 GEN_EDX_ARG,uVar7,uVar3);
    F_0042e430(this_01 GEN_EDX_ARG,uVar3);
    F_005a2710(puVar6 - 7 GEN_EDX_ARG,3);
    puVar6[-6] = (uint)bVar2;
    uVar3 = F_0042a990(this_01 GEN_EDX_ARG);
    F_005a2710(puVar6 - 1 GEN_EDX_ARG,6);
    *puVar6 = uVar3;
    iVar5 = 0;
    iVar4 = param_2;
    do {
      F_0076e150(this GEN_EDX_ARG,iVar4,(*(int *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x8)),iVar5,(uint)bVar1);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x38;
    } while (iVar5 < 10);
    this_01 = (undefined *)((int)this_01 + 0x54);
    (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
    puVar6 = puVar6 + 2;
    param_2 = param_2 + 0x230;
  } while ((*(int *)(gen_frame + 0x18)) < 3);
  return 1;
}

/* ref: FUN_007d2ee0 */
GEN_NOFRAME uint GEN_THISCALL F_007d2ee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d2ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  undefined * this_01;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_ARG,0x38);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG,0x34)));
  if (uVar2 == 0) {
    return (uint)this_00;
  }
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  F_0076e390(this GEN_EDX_ARG,&REFG(undefined, 0x14ab584),uVar2,this_00);
  if (REFG(char, 0x14ab585) == '\0') {
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x1c))) == -1) goto LAB_007d2f65;
    *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x1c))) = 0xffffffff;
  }
  else {
    uVar3 = F_0076de20((uint)REFG(undefined1, 0x14ab5b9));
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x1c))) == uVar3) goto LAB_007d2f65;
    *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x1c))) = uVar3;
  }
  *(undefined1 *)(uVar2 + 0x1d) = 1;
LAB_007d2f65: ;
  uVar7 = 0;
  uVar6 = 1;
  uVar2 = (uint)REFG(undefined1, 0x14ab5b5);
  uVar5 = 0;
  uVar4 = 0x1369;
  this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_00460bd0(this_01 GEN_EDX_ARG,uVar4,uVar2);
  uVar2 = F_00431250(this_00 GEN_EDX_ARG,7,uVar2,uVar5,uVar6,uVar7);
  return uVar2;
}

/* ref: FUN_007d2fa0 */
GEN_FRAME uint GEN_THISCALL F_007d2fa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d2fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x670];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x668)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x66c);
  puVar1 = ((undefined4 *)(gen_frame + 0x0));
  iVar4 = 0xcc;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_0076e660(this GEN_EDX_FWD,((undefined4 *)(gen_frame + 0x0)),*(undefined4 *)((int)this + 0xeb0));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xeb8),0xcd,((undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x668));
  iVar4 = 0xcc;
  do {
    this_00 = this_00 - 2;
    uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x668)) ^ (uint)(uint)(gen_frame + 0x66c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_007d3030 */
GEN_FRAME unsigned int GEN_THISCALL F_007d3030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d3030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if (param_1 == 0x4b) {
    piVar1 = (int *)((int)this - 0xc);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this - 0xc) + 0x10))))(piVar1);
    if ((char)uVar2 != '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: FUN_007d3060 */
GEN_FRAME byte GEN_THISCALL F_007d3060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d3060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint * this_00;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x68))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 8));
  if (((char)uVar4 != '\0') && ((*(uint *)&gen_a1) < *(uint *)((int)this + 0x40))) {
    *(uint *)((int)this + 0x3c) = (*(uint *)&gen_a1);
    uVar4 = F_0076ea40(*(undefined4 *)((int)this + 0x4c),(*(uint *)&gen_a1),(uint)*(byte *)((int)this + 0x44)
                        );
    if (uVar4 != 0) {
      uVar2 = *(undefined4 *)((int)this + 0x40);
      ((undefined4 *)(gen_frame + 0x0))[0] = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
      uVar2 = *(undefined4 *)((int)this + 0x3c);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
      bVar1 = *(byte *)(uVar4 + 0x10);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
      (*(uint *)(gen_frame + 0x1c)) = (uint)bVar1;
      uVar5 = F_0076ea90(uVar4,(uint)REFG(undefined1, 0x14ab14f),(uint)REFG(undefined1, 0x14ab29a));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
      (*(uint *)(gen_frame + 0x24)) = uVar5;
      iVar6 = *(int *)((int)this + 0x48);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,4);
      (*(int *)(gen_frame + 0x2c)) = iVar6 + 2;
      uVar4 = F_0076eae0(uVar4,(uint)REFG(undefined1, 0x14ab14f),(uint)REFG(undefined1, 0x14ab29a));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0x34)) = uVar4;
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),9,((undefined4 *)(gen_frame + 0x0)));
      this_00 = &(*(uint *)(gen_frame + 0x48));
      iVar6 = 8;
      do {
        this_00 = this_00 - 2;
        F_005a2670(this_00 GEN_EDX_ARG);
        iVar6 = iVar6 - 1;
      } while (-1 < iVar6);
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
      return 1;
    }
    *(undefined4 *)((int)this + 0x50) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_007d31d0 */
GEN_FRAME byte GEN_THISCALL F_007d31d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d31d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x1e0];
  uint * puVar1;
  undefined * pvVar2;
  int * piVar3;
  int iVar4;
  undefined * puVar5;
  uint uVar6;
  undefined4 * this_00;
  undefined1 * this_01;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x1d8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1dc);
  if ((*(char *)((int)this + 0x60) == '\0') && ((*(int *)&gen_a1) != 0)) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1dc) ^ (uint)(uint)(gen_frame + 0x1dc) GEN_EDX_FWD);
    return 0;
  }
  piVar3 = ((int *)(gen_frame + 0x8));
  iVar4 = 0x36;
  do {
    *piVar3 = 0;
    piVar3 = piVar3 + 2;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_005a2710(((int *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  ((int *)(gen_frame + 0x8))[1] = (*(int *)&gen_a1);
  F_005a2710(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x14)) = param_2;
  puVar5 = param_4;
  if (param_4 == (undefined *)0x0) {
    puVar5 = &REFG(undefined, 0x10bdbc2);
  }
  F_005a2710(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,6);
  (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = puVar5;
  F_005a2710(((undefined1 *)(gen_frame + 0x1b8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x1bc)) = param_3;
  if ((*(int *)&gen_a1) == 0) {
    uVar6 = 1;
    this_01 = ((undefined1 *)(gen_frame + 0x20));
    do {
      puVar1 = (uint *)F_00ab2cf0(uVar6 & 0xffff);
      if (puVar1 == (uint *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*puVar1 & 0xffffff) + (int)puVar1;
      }
      F_005a2710(this_01 GEN_EDX_ARG,6);
      *(int *)(this_01 + 4) = iVar4;
      uVar6 = uVar6 + 1;
      this_01 = this_01 + 8;
    } while ((int)uVar6 < 0x2c);
  }
  (*(byte *)(gen_frame + 0x7)) = 0;
  if (*(int *)((int)this + 0xcc) == 0) {
    uVar7 = 0x3c;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar6 = F_007c8b20(pvVar2 GEN_EDX_ARG,uVar7);
    *(uint *)((int)this + 0xcc) = uVar6;
    if (uVar6 != 0) goto LAB_007d32fa;
  }
  else {
LAB_007d32fa: ;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xcc),0x37,((int *)(gen_frame + 0x8)));
    (*(byte *)(gen_frame + 0x7)) = 1;
  }
  if ((*(int *)&gen_a1) != 2) goto LAB_007d33cf;
  (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x1cc)) = param_2 & 0xffff;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)) GEN_EDX_ARG,3);
  (*(uint *)(gen_frame + 0x1d4)) = param_2 >> 0x10 & 1;
  if (*(int *)((int)this + 0xd0) == 0) {
    uVar7 = 0x80;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar6 = F_007c8b20(pvVar2 GEN_EDX_ARG,uVar7);
    *(uint *)((int)this + 0xd0) = uVar6;
    if (uVar6 != 0) goto LAB_007d3393;
  }
  else {
LAB_007d3393: ;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
    (*(byte *)(gen_frame + 0x7)) = 1;
  }
  puVar1 = &(*(uint *)(gen_frame + 0x1d8));
  iVar4 = 2;
  do {
    puVar1 = puVar1 - 2;
    F_005a2670(puVar1 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
LAB_007d33cf: ;
  this_00 = &(*(undefined4 *)(gen_frame + 0x1c0));
  iVar4 = 0x36;
  do {
    this_00 = this_00 - 2;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x1d8)) ^ (uint)(uint)(gen_frame + 0x1dc) GEN_EDX_ARG);
  return (*(byte *)(gen_frame + 0x7));
}

/* ref: FUN_007d3410 */
GEN_FRAME byte GEN_THISCALL F_007d3410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d3410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1e0];
  uint uVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint * puVar8;
  uint uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x1d8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1dc);
  uVar9 = 1 << ((byte)param_1 & 0x1f);
  uVar7 = param_1 >> 5;
  if (((*((uint *)GEN_TOP((*(int *)((int)this + 0xe4) + uVar7 * 4))) & uVar9) == 0) == (bool)(char)param_2) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1dc) ^ (uint)(uint)(gen_frame + 0x1dc) GEN_EDX_FWD);
    return 1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
  *(byte *)(uVar1 + 0x230bf) = *(byte *)(uVar1 + 0x230bf) | 0x20;
  if ((char)param_2 == '\0') {
    puVar8 = ((uint *)GEN_TOP((*(int *)((int)this + 0xe4) + uVar7 * 4)));
    *puVar8 = *puVar8 | uVar9;
    *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
    uVar7 = param_1;
  }
  else {
    puVar8 = ((uint *)GEN_TOP((*(int *)((int)this + 0xe4) + uVar7 * 4)));
    *puVar8 = *puVar8 & ~uVar9;
    *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) - 1;
    uVar7 = param_1 | 0x10000;
  }
  if (*(char *)((int)this + 0x60) == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x1d8)) ^ (uint)(uint)(gen_frame + 0x1dc) GEN_EDX_ARG);
    return 0;
  }
  puVar2 = ((undefined4 *)(gen_frame + 0x8));
  iVar5 = 0x36;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar5 = iVar5 - 1;
  } while (-1 < iVar5);
  F_005a2710(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  ((undefined4 *)(gen_frame + 0x8))[1] = 2;
  F_005a2710(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x14)) = uVar7;
  F_005a2710(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,6);
  (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdbc2);
  F_005a2710(((undefined1 *)(gen_frame + 0x1b8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x1bc)) = 0xffffffff;
  (*(byte *)(gen_frame + 0x7)) = 0;
  if (*(int *)((int)this + 0xcc) == 0) {
    uVar10 = 0x3c;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar9 = F_007c8b20(pvVar3 GEN_EDX_ARG,uVar10);
    *(uint *)((int)this + 0xcc) = uVar9;
    if (uVar9 != 0) goto LAB_007d3546;
  }
  else {
LAB_007d3546: ;
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x8)));
    (*(byte *)(gen_frame + 0x7)) = 1;
  }
  (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x1cc)) = uVar7 & 0xffff;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)) GEN_EDX_ARG,3);
  (*(uint *)(gen_frame + 0x1d4)) = uVar7 >> 0x10 & 1;
  if (*(int *)((int)this + 0xd0) == 0) {
    uVar10 = 0x80;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar7 = F_007c8b20(pvVar3 GEN_EDX_ARG,uVar10);
    *(uint *)((int)this + 0xd0) = uVar7;
    bVar6 = (*(byte *)(gen_frame + 0x7));
    if (uVar7 == 0) goto LAB_007d35ff;
  }
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
  bVar6 = 1;
LAB_007d35ff: ;
  puVar8 = &(*(uint *)(gen_frame + 0x1d8));
  iVar5 = 2;
  do {
    puVar8 = puVar8 - 2;
    F_005a2670(puVar8 GEN_EDX_ARG);
    iVar5 = iVar5 - 1;
  } while (-1 < iVar5);
  puVar2 = &(*(undefined4 *)(gen_frame + 0x1c0));
  iVar5 = 0x36;
  do {
    puVar2 = puVar2 - 2;
    F_005a2670(puVar2 GEN_EDX_ARG);
    iVar5 = iVar5 - 1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x1d8)) ^ (uint)(uint)(gen_frame + 0x1dc) GEN_EDX_ARG);
  return bVar6;
}

/* ref: FUN_007d3660 */
GEN_FRAME byte GEN_THISCALL F_007d3660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d3660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 7: ;
    iVar3 = 0x13;
    break;
  case 8: ;
    iVar3 = 0x3b;
    break;
  case 9: ;
    iVar3 = 0x14;
    break;
  default: ;
    goto switchD_007d3676_caseD_a;
  case 0x1d: ;
    iVar3 = 0x15;
    break;
  case 0x1f: ;
    iVar3 = 0x5b;
    break;
  case 0x29: ;
    iVar3 = 0x16;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  piVar1 = *(int * PTR32 *)(uVar2 + 0xc + iVar3 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
    return (byte)uVar2;
  }
switchD_007d3676_caseD_a: ;
  return 1;
}

/* ref: FUN_007d3990 */
GEN_FRAME uint GEN_THISCALL F_007d3990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x7d3990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined * PTR32 *)(gen_frame + 0x58)) = this;
  (*(uint *)(gen_frame + 0x5c)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x60)) = param_3;
  (*(char *)(gen_frame + 0x67)) = (char)param_8;
  uVar3 = param_1;
  if (param_5 != (int *)0x0) {
    uVar3 = 1;
    (*(uint *)(gen_frame + 0x44)) = 1;
    (*(uint *)(gen_frame + 0x48)) = (uint)*(byte *)(param_5 + 0x5a2);
    uVar2 = F_00ab21a0((uint)*(byte *)(param_5 + 0x5a2));
    if (uVar2 != 0) {
      if (*(int *)(uVar2 + 0x10) == 0x20) {
        uVar3 = 2;
      }
      else if (*(int *)(uVar2 + 0x10) == 0x21) {
        uVar3 = 4;
      }
      (*(uint *)(gen_frame + 0x44)) = uVar3;
    }
    if (uVar3 == 2) {
      (*(uint *)(gen_frame + 0x34)) = (uint)*(ushort *)((int)param_5 + 0x16a2);
      (*(uint *)(gen_frame + 0x38)) = (uint)*(ushort *)(param_5 + 0x5a9);
    }
    else if (uVar3 == 4) {
      (*(uint *)(gen_frame + 0x34)) = (uint)*(ushort *)((int)param_5 + 0x16a6);
      (*(uint *)(gen_frame + 0x38)) = (uint)*(ushort *)(param_5 + 0x5aa);
    }
    else {
      (*(uint *)(gen_frame + 0x34)) = param_5[0x5a6];
      (*(uint *)(gen_frame + 0x38)) = param_5[0x5a7];
    }
    uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0xffffffff,1);
    (*(uint *)(gen_frame + 0x28)) = uVar2 & 0xffff;
    if ((uVar2 << 0x10 | uVar3) != *((uint *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x5c)) + 0x20) + 4 + param_2 * 4)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
      uVar3 = F_00435340((*(uint *)(gen_frame + 0x28)));
      F_0042e430((undefined *)((int)this + 0xcf8) GEN_EDX_ARG,uVar3);
      piVar1 = *(int * PTR32 *)((int)this + 4);
      uVar8 = 0;
      uVar2 = (uint)((*(char *)(gen_frame + 0x67)) != '\0');
      uVar7 = 1;
      uVar6 = 0;
      uVar5 = 0;
      uVar3 = F_0042a990((undefined *)((int)this + 0xcf8) GEN_EDX_ARG);
      uVar4 = 0x7fd;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG)));
      uVar3 = F_00461390(this_00 GEN_EDX_ARG,uVar4,uVar3,uVar5,uVar2);
      F_00431250((*(undefined * PTR32 *)(gen_frame + 0x60)) GEN_EDX_ARG,0x9a,uVar3,uVar6,uVar7,uVar8);
      this = (*(undefined * PTR32 *)(gen_frame + 0x58));
    }
    (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x5c));
    (*(int *)(gen_frame + 0x14)) = param_2;
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 *)(gen_frame + 0x60));
    (*(undefined4 *)(gen_frame + 0x18)) = param_4;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_5 + 0xc))(param_5 GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x20)) = uVar3;
    (*(int *)(gen_frame + 0x24)) = param_5[0x1d];
    (*(int *)(gen_frame + 0x2c)) = param_5[0x5a4];
    (*(undefined4 *)(gen_frame + 0x1c)) = param_6;
    (*(int *)(gen_frame + 0x30)) = param_5[0x5a5];
    (*(uint *)(gen_frame + 0x3c)) = (uint)*(ushort *)(param_5 + 0x5a8);
    (*(undefined4 *)(gen_frame + 0x40)) = 1000;
    if ((*(uint *)(gen_frame + 0x48)) == 0) {
      (*(int *)(gen_frame + 0x4c)) = 0;
    }
    else {
      (*(int *)(gen_frame + 0x4c)) = (*(uint *)(gen_frame + 0x48)) + 0xf294;
    }
    (*(undefined1 *)(gen_frame + 0x54)) = (undefined1)param_7;
    (*(undefined1 *)(gen_frame + 0x55)) = 0;
    (*(undefined1 *)(gen_frame + 0x56)) = (undefined1)param_9;
    (*(uint *)(gen_frame + 0x50)) = (uint)((*(char *)(gen_frame + 0x67)) != '\0');
    uVar3 = F_0076fc90(this GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_007d3b80 */
GEN_FRAME unsigned int GEN_THISCALL F_007d3b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x7d3b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x58)) = this;
  if (param_5 != (undefined4 *)0x0) {
    uVar6 = 1;
    uVar4 = F_00ab21a0((uint)*(byte *)((int)param_5 + 0x51));
    if (uVar4 != 0) {
      if (*(int *)(uVar4 + 0x10) == 0x20) {
        uVar6 = 2;
      }
      else if (*(int *)(uVar4 + 0x10) == 0x21) {
        uVar6 = 4;
      }
    }
    (*(undefined4 *)(gen_frame + 0x14)) = param_2;
    (*(undefined4 *)(gen_frame + 0xc)) = param_1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = param_5 + 4;
    bVar1 = *(byte *)(param_5 + 0x15);
    (*(undefined4 *)(gen_frame + 0x10)) = param_3;
    (*(undefined4 *)(gen_frame + 0x18)) = param_4;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_6;
    (*(undefined4 *)(gen_frame + 0x24)) = *param_5;
    if ((bVar1 == 0) || (bVar5 = *(byte *)((int)param_5 + 0x53), bVar2 = bVar1, bVar5 <= bVar1)) {
      bVar5 = *(byte *)((int)param_5 + 0x53);
      bVar2 = bVar5;
    }
    (*(uint *)(gen_frame + 0x28)) = (uint)bVar2;
    (*(undefined4 *)(gen_frame + 0x2c)) = param_5[0x16];
    (*(undefined4 *)(gen_frame + 0x30)) = param_5[0x17];
    (*(int *)(gen_frame + 0x34)) = (int)*(short *)(param_5 + 0x18);
    (*(int *)(gen_frame + 0x38)) = (int)*(short *)((int)param_5 + 0x62);
    (*(uint *)(gen_frame + 0x3c)) = (uint)*(ushort *)(param_5 + 0x19);
    (*(undefined4 *)(gen_frame + 0x40)) = 1000;
    (*(uint *)(gen_frame + 0x44)) = (*(char *)(param_5 + 0x1a) == '\x03') - 1 & uVar6;
    uVar6 = (uint)*(byte *)((int)param_5 + 0x51);
    (*(uint *)(gen_frame + 0x48)) = uVar6;
    if (*(char *)(param_5 + 0x1a) == '\x03') {
      (*(int *)(gen_frame + 0x4c)) = 0xf2b1;
    }
    else if (uVar6 == 0) {
      (*(int *)(gen_frame + 0x4c)) = 0;
    }
    else {
      (*(int *)(gen_frame + 0x4c)) = uVar6 + 0xf294;
    }
    if ((bVar1 == 0) || (bVar5 <= bVar1)) {
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
    }
    (*(undefined1 *)(gen_frame + 0x54)) = *(undefined1 *)((int)param_5 + 0x52);
    (*(uint *)(gen_frame + 0x50)) = (uint)bVar1;
    if ((param_5[0xe2] & 0x10000) == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x10';
    }
    (*(char *)(gen_frame + 0x55)) = cVar3;
    (*(bool *)(gen_frame + 0x57)) = cVar3 == '\x10';
    (*(undefined1 *)(gen_frame + 0x56)) = (undefined1)param_7;
    F_0076fc90((*(undefined * PTR32 *)(gen_frame + 0x58)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)));
  }
  return;
}

/* ref: FUN_007d3cd0 */
GEN_FRAME uint GEN_THISCALL F_007d3cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x7d3cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint param_7 = (uint)gen_a7;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  if ((param_5 == -0x20000000) && ((*(int *)&gen_a6) == 0)) {
    *(undefined4 *)((int)this + param_1 * 8 + 0x45c) = 0;
    *(uint *)((int)this + param_1 * 8 + 0x460) = param_1;
  }
  else {
    *(undefined4 *)((int)this + param_1 * 8 + 0x45c) = 0;
    *(uint *)((int)this + param_1 * 8 + 0x460) = param_1;
    if (0 < REFG(int, 0x14aa744)) {
      piVar2 = &REFG(undefined4, 0x14a9e84);
      do {
        if (*piVar2 == param_2) {
          iVar1 = (&REFG(undefined4, 0x14a9e88))[(int)(iVar1 * 0x12)];
          *(int *)((int)this + param_1 * 8 + 0x45c) = iVar1;
          if (*(int *)((int)this + 0x4a4) < iVar1) {
            *(int *)((int)this + 0x4a4) = iVar1;
          }
          break;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 0x12;
      } while (iVar1 < REFG(int, 0x14aa744));
    }
    if ((param_5 == param_3) && ((*(int *)&gen_a6) == param_4)) {
      return param_1;
    }
  }
  return param_7;
}

/* ref: FUN_007d3d70 */
GEN_FRAME byte GEN_THISCALL F_007d3d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d3d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  iVar1 = *(int *)(uVar2 + 0xb0);
  iVar4 = 0;
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0xb96c) != '\0')) {
    if (*(char *)(iVar1 + 0xb96c) == '\x06') {
      iVar4 = (*(char *)(iVar1 + 0x969f) == '\x03') + 2;
    }
    else {
      iVar4 = 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(int *)(iVar1 + 0x1a4) == iVar4) {
    return 0;
  }
  if (*(int *)(iVar1 + 4) != 0) {
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x19c))) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x19c))) = 0;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1a4))) != iVar4) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1a4))) = iVar4;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (iVar4 != 0) {
    uVar10 = 0;
    uVar9 = 1;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0xb10;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(pvVar3 GEN_EDX_ARG,uVar5,uVar6,uVar7);
    F_00431250(param_2 GEN_EDX_ARG,0xb3,uVar2,uVar8,uVar9,uVar10);
    if (iVar4 == 1) {
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0xb11;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      uVar2 = F_0043bd00(pvVar3 GEN_EDX_ARG,uVar5,uVar6,uVar7);
      F_00431250(param_2 GEN_EDX_ARG,0xb4,uVar2,uVar8,iVar4,uVar9);
      return 1;
    }
    if (iVar4 == 3) {
      uVar10 = 0;
      uVar9 = 1;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0xb12;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      uVar2 = F_0043bd00(pvVar3 GEN_EDX_ARG,uVar5,uVar6,uVar7);
      F_00431250(param_2 GEN_EDX_ARG,0xb4,uVar2,uVar8,uVar9,uVar10);
      return 1;
    }
    uVar2 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328) GEN_EDX_ARG);
    if (uVar2 != *((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x2d0)))) {
      *((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x2d0))) = uVar2;
      *(undefined1 *)((int)param_2 + 0x1d) = 1;
    }
  }
  return 1;
}

/* ref: FUN_007d3ee0 */
GEN_FRAME byte GEN_THISCALL F_007d3ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d3ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  undefined * pvVar5;
  int * piVar6;
  int iVar7;
  char * this_00;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x88)) = uVar4;
  if ((REFG(int, 0x14b11f8) == 0) || (REFG(char, 0x14b1251) == '\0')) {
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x160))) != 0) {
      *(undefined1 *)((int)this + 0xc) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x160))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x160))) = 0;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    F_00c47745(uVar4 ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_FWD);
    return 0;
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
  if (REFG(char, 0x14b1250) == '\0') {
    bVar3 = F_00a698b0(&REFG(int, 0x14b11f8) GEN_EDX_ARG);
    if (bVar3 != 0) {
      piVar6 = *(int * PTR32 *)((int)this + 4);
      uVar9 = 0x21;
      uVar4 = F_00a6dfd0(&REFG(int, 0x14b11f8) GEN_EDX_ARG);
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x18))(piVar6 GEN_EDX_ARG)));
      uVar4 = F_00462440(pvVar5 GEN_EDX_ARG,uVar4,uVar9);
      F_0042ccf0(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,uVar4);
      if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x19c))) != 1) {
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x19c))) = 1;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      uVar11 = 0;
      uVar10 = 1;
      uVar9 = 0;
      uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
      F_00431250(param_2 GEN_EDX_ARG,0x9e,uVar4,uVar9,uVar10,uVar11);
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x160))) != 1) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x160))) = 1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  iVar7 = 0;
  bVar3 = F_004351e0();
  if (bVar3 == 0) {
    pvVar5 = (undefined *)F_00b070f0();
    bVar3 = F_00b07930(pvVar5 GEN_EDX_ARG);
    if (bVar3 != 0) {
      iVar7 = 0x10000;
    }
  }
  else {
    iVar7 = 0x10001;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1a0))) != iVar7) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1a0))) = iVar7;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uVar4 = F_00a69790(&REFG(int, 0x14b11f8) GEN_EDX_ARG);
  uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
  iVar7 = *(int *)((int)param_2 + 0x20);
  if (uVar4 != *(uint *)(iVar7 + 0x26c)) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  *(uint *)(iVar7 + 0x26c) = uVar4;
  uVar4 = F_00a697b0(&REFG(int, 0x14b11f8) GEN_EDX_ARG);
  uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
  iVar7 = *(int *)((int)param_2 + 0x20);
  if (uVar4 != *(uint *)(iVar7 + 0x270)) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  uVar12 = 0;
  *(uint *)(iVar7 + 0x270) = uVar4;
  piVar6 = *(int * PTR32 *)((int)this + 4);
  uVar11 = 1;
  uVar10 = 0;
  uVar4 = F_00a697f0(&REFG(int, 0x14b11f8) GEN_EDX_ARG);
  uVar9 = 0x23;
  pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x18))(piVar6 GEN_EDX_ARG)));
  uVar4 = F_00461bb0(pvVar5 GEN_EDX_ARG,uVar9,uVar4);
  F_00431250(param_2 GEN_EDX_ARG,0x9d,uVar4,uVar10,uVar11,uVar12);
  uVar4 = F_00a697a0(&REFG(int, 0x14b11f8) GEN_EDX_ARG);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x164))) != uVar4) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x164))) = uVar4;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  bVar3 = F_00a698b0(&REFG(int, 0x14b11f8) GEN_EDX_ARG);
  if (bVar3 == 0) {
    if (*((int *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x278))) != 0) {
      if (*((int *)GEN_TOP((*(int *)((int)param_2 + 0x24) + 0x278))) != 0) {
        F_00406ad0(*((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x24) + 0x278))));
        *((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x24) + 0x278))) = 0;
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x278))) = 0;
      *(undefined1 *)((int)param_2 + 0x1d) = 1;
    }
  }
  else {
    piVar6 = *(int * PTR32 *)((int)this + 4);
    uVar9 = 0x21;
    uVar4 = F_00a6dfd0(&REFG(int, 0x14b11f8) GEN_EDX_ARG);
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x18))(piVar6 GEN_EDX_ARG)));
    uVar4 = F_00462440(pvVar5 GEN_EDX_ARG,uVar4,uVar9);
    F_0042ccf0(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,uVar4);
    uVar11 = 0;
    uVar10 = 1;
    uVar9 = 0;
    uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
    F_00431250(param_2 GEN_EDX_ARG,0x9e,uVar4,uVar9,uVar10,uVar11);
  }
  piVar6 = (int *)F_00a698a0(&REFG(int, 0x14b11f8) GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x18)) = (piVar6[1] - *piVar6) / 0x140;
  if (9 < (*(int *)(gen_frame + 0x18))) {
    (*(int *)(gen_frame + 0x18)) = 10;
  }
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 1;
  if (0 < (*(int *)(gen_frame + 0x18))) {
    (*(int *)(gen_frame + 0x1c)) = 0x9f;
    (*(int *)(gen_frame + 0x8)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)0x168;
    do {
      piVar2 = (*(int * PTR32 *)(gen_frame + 0x30));
      this_00 = (char *)(*piVar6 + (*(int *)(gen_frame + 0x8)));
      if (*this_00 == '\0') break;
      switch((unsigned int)(uintptr_t)(*(undefined4 *)(this_00 + 4))) {
      case 1: ;
        uVar9 = *(undefined4 *)(this_00 + 100);
        uVar10 = *(undefined4 *)(this_00 + 0x60);
        (*(int * PTR32 *)(gen_frame + 0x30)) = *(int * PTR32 *)((int)this + 4);
        uVar4 = F_0042a990(this_00 + 8 GEN_EDX_ARG);
        goto LAB_007d417f;
      case 2: ;
        piVar1 = *(int * PTR32 *)((int)this + 4);
        uVar9 = *(undefined4 *)(this_00 + 0x60);
        uVar4 = F_0042a990(this_00 + 8 GEN_EDX_ARG);
        uVar11 = 0;
        uVar10 = 0x47b;
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG)));
        uVar4 = F_00462160(pvVar5 GEN_EDX_ARG,uVar10,uVar9,uVar11,uVar4);
        F_0042e430(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,uVar4);
        goto LAB_007d42ed;
      case 3: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,this_00 + 8);
        if (*((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x30)) + *(int *)(param_1 + 0x20)))) == *(int *)(this_00 + 0x60)) break;
        *((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x30)) + *(int *)(param_1 + 0x20)))) = *(int *)(this_00 + 0x60);
        goto LAB_007d42fd;
      case 4: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,this_00 + 8);
        piVar1 = *(int * PTR32 *)((int)this + 4);
        uVar9 = 0x21;
        uVar4 = F_00476000();
        uVar4 = F_00907b30(this_00 GEN_EDX_ARG,uVar4,0);
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG)));
        uVar4 = F_00462440(pvVar5 GEN_EDX_ARG,uVar4,uVar9);
        uVar11 = 0;
        uVar10 = 1;
        uVar9 = 0;
        uVar4 = F_0042a990(uVar4 GEN_EDX_ARG);
        F_00431250(param_2 GEN_EDX_ARG,(*(int *)(gen_frame + 0x1c)) + 10,uVar4,uVar9,uVar10,uVar11);
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) | (*(uint *)(gen_frame + 0x24)) << 10 | (*(uint *)(gen_frame + 0x24)) >> 0x16;
        if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x30))))) != -1) {
          *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x30))))) = 0xffffffff;
          goto LAB_007d42fd;
        }
        break;
      case 5: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,this_00 + 8);
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) | (*(uint *)(gen_frame + 0x24));
        if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x30))))) != *(int *)(this_00 + 0x60)) {
          *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x30))))) = *(int *)(this_00 + 0x60);
          goto LAB_007d42fd;
        }
        break;
      case 6: ;
        uVar9 = *(undefined4 *)(this_00 + 100);
        uVar10 = *(undefined4 *)(this_00 + 0x60);
        (*(int * PTR32 *)(gen_frame + 0x30)) = *(int * PTR32 *)((int)this + 4);
        uVar4 = F_0042a990(this_00 + 8 GEN_EDX_ARG);
LAB_007d417f: ;
        uVar11 = 0x47a;
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x30)) + 0x18))((*(int * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG)));
        uVar4 = F_00462160(pvVar5 GEN_EDX_ARG,uVar11,uVar10,uVar9,uVar4);
        F_0042e430(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,uVar4);
        if (*((int *)GEN_TOP(((int)piVar2 + *(int *)(param_1 + 0x20)))) != -1) {
          *((undefined4 *)GEN_TOP(((int)piVar2 + *(int *)(param_1 + 0x20)))) = 0xffffffff;
LAB_007d42fd: ;
          *(undefined1 *)(param_1 + 0x1d) = 1;
        }
        break;
      default: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,this_00 + 8);
LAB_007d42ed: ;
        if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x30))))) == -1) break;
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x30))))) = 0xffffffff;
        goto LAB_007d42fd;
      }
      uVar11 = 0;
      uVar10 = 1;
      uVar9 = 0;
      uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
      F_00431250(param_2 GEN_EDX_ARG,(*(int *)(gen_frame + 0x1c)),uVar4,uVar9,uVar10,uVar11);
      if (((*(int *)(this_00 + 4) == 1) || (*(int *)(this_00 + 4) == 6)) && (this_00[0x5d] != '\0'))
      {
        cVar8 = *(uint *)(this_00 + 100) <= *(uint *)(this_00 + 0x60);
      }
      else {
        cVar8 = this_00[0x5c];
      }
      if (cVar8 != '\0') {
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) | (*(uint *)(gen_frame + 0x24));
      }
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x140;
      (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)((int)piVar2 + 4);
      (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0x24)) < 0);
      iVar7 = (*(int *)(gen_frame + 0x1c)) - 0x9e;
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
    } while (iVar7 < (*(int *)(gen_frame + 0x18)));
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 400))) != (*(int *)(gen_frame + 0x10))) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 400))) = (*(int *)(gen_frame + 0x10));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x194))) != (*(uint *)(gen_frame + 0x28))) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x194))) = (*(uint *)(gen_frame + 0x28));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x198))) != (*(uint *)(gen_frame + 0x14))) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x198))) = (*(uint *)(gen_frame + 0x14));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x19c))) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x19c))) = 0;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  F_00a69760(&REFG(int, 0x14b11f8) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007d44e0 */
GEN_FRAME byte GEN_THISCALL F_007d44e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d44e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  char * this_00;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(uint *)(gen_frame + 0x98)) = uVar2;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = param_2;
  if ((REFG(int, 0x14b119c) == 0) || (REFG(char, 0x14b11f5) == '\0')) {
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x110))) != 0) {
      *(undefined1 *)((int)this + 0xc) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x110))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x110))) = 0;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_FWD);
    return 0;
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG);
  if (REFG(char, 0x14b11f4) == '\0') {
    bVar1 = F_00a698b0(&REFG(int, 0x14b119c) GEN_EDX_ARG);
    if (bVar1 != 0) {
      piVar4 = *(int * PTR32 *)((int)this + 4);
      uVar8 = 0x21;
      uVar2 = F_00a6dfd0(&REFG(int, 0x14b119c) GEN_EDX_ARG);
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4 GEN_EDX_ARG)));
      uVar2 = F_00462440(pvVar3 GEN_EDX_ARG,uVar2,uVar8);
      F_0042ccf0(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,uVar2);
      if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) != 1) {
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) = 1;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      uVar10 = 0;
      uVar9 = 1;
      uVar8 = 0;
      uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG);
      F_00431250(param_2 GEN_EDX_ARG,0x76,uVar2,uVar8,uVar9,uVar10);
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
    return 1;
  }
  uVar2 = F_00a697a0(&REFG(int, 0x14b119c) GEN_EDX_ARG);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  else {
    uVar2 = F_00a697a0(&REFG(int, 0x14b119c) GEN_EDX_ARG);
  }
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x110))) != uVar2) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x110))) = uVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  bVar1 = F_00a69950(&REFG(int, 0x14b119c) GEN_EDX_ARG);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x15c))) != (uint)bVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x15c))) = (uint)bVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  F_00a69840(&REFG(int, 0x14b119c) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x10)));
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x114))) != (*(int *)(gen_frame + 0x8))) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x114))) = (*(int *)(gen_frame + 0x8));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x118))) != (*(int *)(gen_frame + 0xc))) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x118))) = (*(int *)(gen_frame + 0xc));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x11c))) != (*(int *)(gen_frame + 0x10))) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x11c))) = (*(int *)(gen_frame + 0x10));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uVar2 = F_00a69790(&REFG(int, 0x14b119c) GEN_EDX_ARG);
  uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
  iVar5 = *(int *)((int)param_2 + 0x20);
  if (uVar2 != *(uint *)(iVar5 + 0x1cc)) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  *(uint *)(iVar5 + 0x1cc) = uVar2;
  uVar2 = F_00a697b0(&REFG(int, 0x14b119c) GEN_EDX_ARG);
  uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
  iVar5 = *(int *)((int)param_2 + 0x20);
  if (uVar2 != *(uint *)(iVar5 + 0x1d0)) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  *(uint *)(iVar5 + 0x1d0) = uVar2;
  uVar2 = F_00a697f0(&REFG(int, 0x14b119c) GEN_EDX_ARG);
  if ((int)uVar2 < 0) {
    uVar2 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328) GEN_EDX_ARG);
    if (uVar2 != *((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x1d4)))) {
      *((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x1d4))) = uVar2;
      *(undefined1 *)((int)param_2 + 0x1d) = 1;
    }
  }
  else {
    piVar4 = *(int * PTR32 *)((int)this + 4);
    uVar11 = 0;
    uVar10 = 1;
    uVar9 = 0;
    uVar2 = F_00a697f0(&REFG(int, 0x14b119c) GEN_EDX_ARG);
    uVar8 = 0x24;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4 GEN_EDX_ARG)));
    uVar2 = F_00461bb0(pvVar3 GEN_EDX_ARG,uVar8,uVar2);
    F_00431250(param_2 GEN_EDX_ARG,0x75,uVar2,uVar9,uVar10,uVar11);
    this = (*(undefined * PTR32 *)(gen_frame + 0x30));
  }
  bVar1 = F_00a698b0(&REFG(int, 0x14b119c) GEN_EDX_ARG);
  if (bVar1 == 0) {
    if (*((int *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x1d8))) != 0) {
      if (*((int *)GEN_TOP((*(int *)((int)param_2 + 0x24) + 0x1d8))) != 0) {
        F_00406ad0(*((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x24) + 0x1d8))));
        *((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x24) + 0x1d8))) = 0;
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 0x20) + 0x1d8))) = 0;
      *(undefined1 *)((int)param_2 + 0x1d) = 1;
    }
  }
  else {
    piVar4 = *(int * PTR32 *)((int)this + 4);
    uVar8 = 0x21;
    uVar2 = F_00a6dfd0(&REFG(int, 0x14b119c) GEN_EDX_ARG);
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4 GEN_EDX_ARG)));
    uVar2 = F_00462440(pvVar3 GEN_EDX_ARG,uVar2,uVar8);
    F_0042ccf0(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,uVar2);
    uVar10 = 0;
    uVar9 = 1;
    uVar8 = 0;
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG);
    F_00431250(param_2 GEN_EDX_ARG,0x76,uVar2,uVar8,uVar9,uVar10);
  }
  uVar2 = F_00a697d0(&REFG(int, 0x14b119c) GEN_EDX_ARG);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x120))) != uVar2) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x120))) = uVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uVar2 = F_00a697e0(&REFG(int, 0x14b119c) GEN_EDX_ARG);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x124))) != uVar2) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x124))) = uVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uVar2 = F_00a697c0(&REFG(int, 0x14b119c) GEN_EDX_ARG);
  uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
  iVar5 = *(int *)((int)param_2 + 0x20);
  if (uVar2 != *(uint *)(iVar5 + 0x1dc)) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  *(uint *)(iVar5 + 0x1dc) = uVar2;
  piVar4 = (int *)F_00a698a0(&REFG(int, 0x14b119c) GEN_EDX_ARG);
  iVar5 = (piVar4[1] - *piVar4) / 0x140;
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar4;
  (*(int *)(gen_frame + 0x24)) = iVar5;
  if (9 < iVar5) {
    (*(int *)(gen_frame + 0x24)) = 10;
  }
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x38)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 1;
  if (0 < (*(int *)(gen_frame + 0x24))) {
    (*(int *)(gen_frame + 0x28)) = 0x78;
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x3c)) = 0x128;
    pvVar3 = param_2;
    do {
      this_00 = (char *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x18)));
      if (*this_00 == '\0') break;
      switch((unsigned int)(uintptr_t)(*(undefined4 *)(this_00 + 4))) {
      case 1: ;
        piVar4 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 4);
        (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(this_00 + 100);
        (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(this_00 + 0x60);
        uVar2 = F_0042a990(this_00 + 8 GEN_EDX_ARG);
        uVar10 = 0x47a;
        uVar8 = (*(undefined4 *)(gen_frame + 0x34));
        uVar9 = (*(undefined4 *)(gen_frame + 0x20));
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4 GEN_EDX_ARG)));
        uVar2 = F_00462160(pvVar3 GEN_EDX_ARG,uVar10,uVar8,uVar9,uVar2);
        F_0042e430(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,uVar2);
        uVar2 = F_00907af0(this_00 GEN_EDX_ARG);
        pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x40));
        goto LAB_007d4877;
      case 2: ;
        piVar4 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 4);
        (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(this_00 + 0x60);
        uVar2 = F_0042a990(this_00 + 8 GEN_EDX_ARG);
        uVar10 = 0;
        uVar9 = 0x47b;
        uVar8 = (*(undefined4 *)(gen_frame + 0x34));
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4 GEN_EDX_ARG)));
        uVar2 = F_00462160(pvVar3 GEN_EDX_ARG,uVar9,uVar8,uVar10,uVar2);
        F_0042e430(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,uVar2);
        iVar5 = *(int *)(param_1 + 0x20);
        iVar6 = (*(int *)(gen_frame + 0x3c));
        pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x40));
        break;
      case 3: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,this_00 + 8);
        uVar2 = *(uint *)(this_00 + 0x60);
LAB_007d4877: ;
        if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + (*(int *)(gen_frame + 0x3c))))) != uVar2) {
          *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + (*(int *)(gen_frame + 0x3c))))) = uVar2;
          goto LAB_007d49b0;
        }
        goto LAB_007d49b4;
      case 4: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,this_00 + 8);
        piVar4 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 4);
        uVar8 = 0x21;
        uVar2 = F_00476000();
        uVar2 = F_00907b30(this_00 GEN_EDX_ARG,uVar2,0);
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4 GEN_EDX_ARG)));
        uVar2 = F_00462440(pvVar3 GEN_EDX_ARG,uVar2,uVar8);
        uVar10 = 0;
        uVar9 = 1;
        uVar8 = 0;
        uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
        F_00431250((*(undefined * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x28)) + 10,uVar2,uVar8,uVar9,uVar10);
        iVar5 = *(int *)(param_1 + 0x20);
        (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) | (*(uint *)(gen_frame + 0x2c)) << 10 | (*(uint *)(gen_frame + 0x2c)) >> 0x16;
        iVar6 = (*(int *)(gen_frame + 0x3c));
        pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x40));
        break;
      default: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,this_00 + 8);
        goto LAB_007d499d;
      case 6: ;
        piVar4 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 4);
        (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(this_00 + 100);
        (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(this_00 + 0x60);
        uVar2 = F_0042a990(this_00 + 8 GEN_EDX_ARG);
        uVar10 = 0x47a;
        uVar8 = (*(undefined4 *)(gen_frame + 0x20));
        uVar9 = (*(undefined4 *)(gen_frame + 0x34));
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4 GEN_EDX_ARG)));
        uVar2 = F_00462160(pvVar3 GEN_EDX_ARG,uVar10,uVar8,uVar9,uVar2);
        F_0042e430(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,uVar2);
        pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x40));
LAB_007d499d: ;
        iVar6 = *(int *)(param_1 + 0x20);
        iVar5 = (*(int *)(gen_frame + 0x3c));
      }
      if (*(int *)(iVar5 + iVar6) != -1) {
        *(undefined4 *)(iVar5 + iVar6) = 0xffffffff;
LAB_007d49b0: ;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
LAB_007d49b4: ;
      uVar10 = 0;
      uVar9 = 1;
      uVar8 = 0;
      uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG);
      F_00431250(pvVar3 GEN_EDX_ARG,(*(int *)(gen_frame + 0x28)),uVar2,uVar8,uVar9,uVar10);
      iVar5 = (*(int *)(gen_frame + 0x28));
      if (((*(int *)(this_00 + 4) == 1) || (*(int *)(this_00 + 4) == 6)) && (this_00[0x5d] != '\0'))
      {
        cVar7 = *(uint *)(this_00 + 100) <= *(uint *)(this_00 + 0x60);
      }
      else {
        cVar7 = this_00[0x5c];
      }
      if (cVar7 != '\0') {
        (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) | (*(uint *)(gen_frame + 0x2c));
      }
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
      (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 4;
      (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 0x140;
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
      (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0x2c)) < 0);
    } while (iVar5 - 0x77 < (*(int *)(gen_frame + 0x24)));
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x150))) != (*(int *)(gen_frame + 0x1c))) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x150))) = (*(int *)(gen_frame + 0x1c));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x154))) != (*(uint *)(gen_frame + 0x38))) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x154))) = (*(uint *)(gen_frame + 0x38));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x158))) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x158))) = 0;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) = 0;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  F_00a69760(&REFG(int, 0x14b119c) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007d4b70 */
GEN_FRAME byte GEN_THISCALL F_007d4b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d4b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint * puVar1;
  int iVar2;
  int iVar3;
  ushort * puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int in_ecx;
  int * piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_30;
  int local_2c;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_c;
  uint local_8;
  
  iVar3 = param_1;
  puVar4 = (ushort *)F_00a69df0(&REFG(undefined, 0x14b0d04) GEN_EDX_FWD);
  if (((char)puVar4[0x8e] == '\0') &&
     ((*(char *)((int)this + 0xc) == '\0' || (REFG(char, 0x14b0ed8) != '\0')))) {
    return 0;
  }
  uVar7 = (uint)puVar4[1] + (uint)*puVar4;
  if (5 < uVar7) {
    uVar7 = 5;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) = 0;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x19c))) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x19c))) = 0;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) != uVar7) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) = uVar7;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  local_14 = 0x1c;
  local_18 = 0x2b;
  local_30 = 0x8c;
  local_20 = 0;
  if (uVar7 != 0) {
    iVar8 = uVar7 * 0x2624;
    local_2c = 0x5c;
    param_1 = uVar7;
    uVar5 = uVar7;
    do {
      local_24 = uVar5 - 1;
      iVar8 = iVar8 - 0x2624;
      uVar13 = 0;
      in_ecx = *(int *)(puVar4 + 0x90) + iVar8;
      uVar12 = 1;
      uVar11 = 0;
      uVar5 = F_0042a990(in_ecx GEN_EDX_ARG);
      F_00431250(param_2 GEN_EDX_ARG,local_20,uVar5,uVar11,uVar12,uVar13);
      local_8 = *(uint *)(in_ecx + 0x25e8);
      if (10 < local_8) {
        local_8 = 10;
      }
      if (*((uint *)GEN_TOP((local_2c - 0x50 + *(int *)(iVar3 + 0x20)))) != local_8) {
        *((uint *)GEN_TOP((local_2c - 0x50 + *(int *)(iVar3 + 0x20)))) = local_8;
        *(undefined1 *)(iVar3 + 0x1d) = 1;
      }
      iVar6 = *(int *)(in_ecx + 0xac);
      if (*(short *)(in_ecx + 0xa8) == 0xff) {
        iVar6 = iVar6 + 2;
      }
      local_c = iVar6 << 0x18;
      local_1c = (uint)*(ushort *)(in_ecx + 0x25e0);
      if (*((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + local_2c))) != local_1c) {
        *((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + local_2c))) = local_1c;
        *(undefined1 *)(iVar3 + 0x1d) = 1;
      }
      if (local_1c != 0) {
        piVar10 = (int *)(in_ecx + 0x25d4);
        do {
          uVar9 = 0;
          uVar5 = F_00ab2510(*piVar10);
          if (uVar5 != 0) {
            uVar9 = (uint)*(ushort *)(uVar5 + 0x1c);
          }
          if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + local_14 * 4))) != *piVar10) {
            *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + local_14 * 4))) = *piVar10;
            *(undefined1 *)(iVar3 + 0x1d) = 1;
          }
          local_14 = local_14 + 1;
          if (*((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + local_18 * 4))) != uVar9) {
            *((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + local_18 * 4))) = uVar9;
            *(undefined1 *)(iVar3 + 0x1d) = 1;
          }
          local_18 = local_18 + 1;
          uVar13 = 0;
          uVar12 = 1;
          uVar11 = 0;
          uVar5 = F_00ab64e0(*piVar10,0,uVar5);
          F_00431250(param_2 GEN_EDX_ARG,local_30,uVar5,uVar11,uVar12,uVar13);
          local_30 = local_30 + 1;
          piVar10 = piVar10 + 1;
          local_1c = local_1c - 1;
        } while (local_1c != 0);
      }
      iVar6 = 0;
      local_1c = 1;
      if (0 < (int)local_8) {
        do {
          uVar13 = 0;
          iVar2 = (*((int *)GEN_TOP((local_24 * 0x2624 + 0x25e4 + *(int *)(puVar4 + 0x90)))) + iVar6) * 0x18c +
                  0xb0 + in_ecx;
          uVar12 = 1;
          uVar11 = 0;
          uVar5 = F_0042a990(iVar2 + 8 GEN_EDX_ARG);
          F_00431250(param_2 GEN_EDX_ARG,param_1,uVar5,uVar11,uVar12,uVar13);
          uVar13 = 0;
          uVar12 = 1;
          uVar11 = 0;
          uVar5 = F_0042a990(iVar2 + 0x60 GEN_EDX_ARG);
          F_00431250(param_2 GEN_EDX_ARG,param_1 + 0x32,uVar5,uVar11,uVar12,uVar13);
          param_1 = param_1 + 1;
          if (*(char *)(iVar2 + 4) != '\0') {
            local_c = local_c | local_1c;
          }
          iVar6 = iVar6 + 1;
          local_1c = local_1c << 1 | (uint)((int)local_1c < 0);
        } while (iVar6 < (int)local_8);
      }
      if (*((int *)GEN_TOP((local_2c + 0x8c + *(int *)(iVar3 + 0x20)))) != -1) {
        *((undefined4 *)GEN_TOP((local_2c + 0x8c + *(int *)(iVar3 + 0x20)))) = 0xffffffff;
        *(undefined1 *)(iVar3 + 0x1d) = 1;
      }
      puVar1 = ((uint *)GEN_TOP((local_2c - 0x28 + *(int *)(iVar3 + 0x20))));
      if (*puVar1 != local_c) {
        *puVar1 = local_c;
        *(undefined1 *)(iVar3 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((local_2c - 0x14 + *(int *)(iVar3 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP((local_2c - 0x14 + *(int *)(iVar3 + 0x20)))) = 0;
        *(undefined1 *)(iVar3 + 0x1d) = 1;
      }
      local_20 = local_20 + 1;
      local_2c = local_2c + 4;
      uVar5 = local_24;
    } while (local_20 < (int)uVar7);
  }
  if (uVar7 < 5) {
    iVar8 = uVar7 * 4 + 0xe8;
    do {
      if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + iVar8))) != -1) {
        *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + iVar8))) = 0xffffffff;
        *(undefined1 *)(iVar3 + 0x1d) = 1;
      }
      iVar8 = iVar8 + 4;
    } while (iVar8 < 0xfc);
  }
  F_00a69e00(&REFG(undefined, 0x14b0d04) GEN_EDX_ARG,0);
  *(undefined1 *)((int)this + 0xc) = 0;
  return 1;
}

/* ref: FUN_007d4ec0 */
GEN_NOFRAME byte GEN_THISCALL F_007d4ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d4ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_ARG,0x1b);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG,0x18);
  uVar6 = (uint)(*(char *)((int)this + 0xd) == '\x01');
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1a8))) != uVar6) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1a8))) = uVar6;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  if (*(char *)((int)this + 0xd) == '\0') {
    F_007d3ee0(this GEN_EDX_ARG,uVar4,uVar5);
    F_007d44e0(this GEN_EDX_ARG,uVar4,uVar5);
    F_007d3d70(this GEN_EDX_ARG,uVar4,uVar5);
    bVar1 = F_007d4b70(this GEN_EDX_ARG,uVar4,uVar5);
    return bVar1;
  }
  bVar2 = F_007d3ee0(this GEN_EDX_ARG,uVar4,uVar5);
  bVar1 = 1;
  if (bVar2 != 1) {
    bVar2 = F_007d44e0(this GEN_EDX_ARG,uVar4,uVar5);
    bVar1 = 1;
    if (bVar2 != 1) {
      bVar2 = F_007d3d70(this GEN_EDX_ARG,uVar4,uVar5);
      bVar1 = 1;
      if (bVar2 != 1) {
        bVar1 = F_007d4b70(this GEN_EDX_ARG,uVar4,uVar5);
      }
    }
  }
  return bVar1;
}

/* ref: FUN_007d4f80 */
GEN_FRAME byte GEN_THISCALL F_007d4f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d4f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  
  iVar1 = param_1;
  if ((*(byte *)(param_1 + 0x33d9) & 1) == 0) {
    uVar2 = (uint)(*(char *)(param_1 + 0x32a0) != '\0');
    if (*(char *)(param_1 + 0x330c) != '\0') {
      uVar2 = uVar2 + 1;
    }
    if (*(char *)(param_1 + 0x3378) != '\0') {
      uVar2 = uVar2 + 1;
    }
    *(int *)((int)this + 0x1af0) = *(int *)((int)this + 0x1af0) + uVar2;
    cVar4 = *(char *)(param_1 + 0x32a0) != '\0';
    if (*(char *)(param_1 + 0x330c) != '\0') {
      cVar4 = cVar4 + '\x01';
    }
    if (*(char *)(param_1 + 0x3378) != '\0') {
      cVar4 = cVar4 + '\x01';
    }
    return cVar4 != '\0';
  }
  iVar3 = param_1 + 0x328c;
  param_1 = 3;
  do {
    if (*(char *)(iVar3 + 0x14) != '\0') {
      F_00915a30(param_2 GEN_EDX_FWD,*(undefined4 *)((int)this + 0x1af0),iVar3);
      *(int *)((int)this + 0x1af0) = *(int *)((int)this + 0x1af0) + 1;
    }
    iVar3 = iVar3 + 0x6c;
    param_1 = param_1 - 1;
  } while (param_1 != 0);
  *(byte *)(iVar1 + 0x33d9) = *(byte *)(iVar1 + 0x33d9) & 0xfe;
  return 1;
}

/* ref: FUN_007d5030 */
GEN_FRAME unsigned int GEN_THISCALL F_007d5030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char * pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  undefined * this_00;
  uint uVar7;
  uint uVar8;
  uint3 extraout_var = 0;
  uint3 extraout_var_00 = 0;
  int iVar9;
  uint3 uVar11;
  char * pcVar10;
  ulonglong uVar12;
  undefined4 uVar13;
  
  if ((*(char *)((int)this + 0x60) != '\0') &&
     (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD),
     *(char *)(uVar4 + 0x29254) == '\0')) {
    piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5 GEN_EDX_ARG,9);
    piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5 GEN_EDX_ARG,8);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar13 = 1;
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
    uVar7 = F_00435440(uVar7 GEN_EDX_ARG,uVar13);
    if (uVar7 != 0) {
      uVar8 = F_00920ca0((undefined *)(uVar7 + 0x14) GEN_EDX_ARG);
      if ((int)uVar8 < 1) {
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x13c))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x13c))) = 0;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
          uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
          if (*(undefined * PTR32 *)(uVar7 + 200) != (undefined *)0x0) {
            F_009218a0(*(undefined * PTR32 *)(uVar7 + 200) GEN_EDX_ARG);
          }
        }
      }
      else {
        uVar8 = F_00920ca0((undefined *)(uVar7 + 0x14) GEN_EDX_ARG);
        if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x13c))) != uVar8) {
          *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x13c))) = uVar8;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar7 = F_0042a990(uVar7 + 0x24 GEN_EDX_ARG);
        if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x110)))) {
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
        *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x110))) = uVar7;
        uVar7 = F_0043bd00(this_00 GEN_EDX_ARG,0xaa,0,0);
        if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x10c)))) {
          *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x10c))) = uVar7;
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
      }
    }
    uVar13 = 5;
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
    uVar7 = F_00435440(uVar7 GEN_EDX_ARG,uVar13);
    if (uVar7 != 0) {
      iVar9 = *(int *)(uVar7 + 0x24);
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x140))) != iVar9) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x140))) = iVar9;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (iVar9 != 0) {
        uVar7 = F_0042a990(uVar7 + 0x30 GEN_EDX_ARG);
        if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x118)))) {
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
        *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x118))) = uVar7;
        uVar7 = F_0043bd00(this_00 GEN_EDX_ARG,0xab,0,0);
        if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x114)))) {
          *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x114))) = uVar7;
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
      }
    }
    uVar13 = 2;
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
    uVar7 = F_00435440(uVar7 GEN_EDX_ARG,uVar13);
    if (uVar7 != 0) {
      iVar9 = *(int *)(uVar7 + 0x10);
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x144))) != iVar9) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x144))) = iVar9;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (iVar9 != 0) {
        uVar8 = F_0042a990(uVar7 + 0x1c GEN_EDX_ARG);
        if (uVar8 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x120)))) {
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
        *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x120))) = uVar8;
        uVar8 = F_0043bd00(this_00 GEN_EDX_ARG,0xac,0,0);
        if (uVar8 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x11c)))) {
          *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x11c))) = uVar8;
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
      }
      bVar3 = F_004393f0(uVar7 GEN_EDX_ARG);
      uVar11 = extraout_var;
      if ((bVar3 == 0) || (bVar3 = F_004351d0(), uVar11 = extraout_var_00, bVar3 != 0)) {
        iVar9 = (uint)uVar11 << 8;
      }
      else {
        iVar9 = CONCAT31(extraout_var_00,1);
      }
      F_007d3410(this GEN_EDX_ARG,0x1c,iVar9);
    }
    if (0 < *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14c)))) {
      uVar12 = F_00427d90();
      uVar7 = (uint)uVar12 - *(uint *)((int)this + 0x1b10);
      uVar8 = 0;
      if (((int)(uVar12 >> 0x20) - *(int *)((int)this + 0x1b14) ==
           (uint)((uint)uVar12 < *(uint *)((int)this + 0x1b10))) &&
         (uVar7 < *(uint *)((int)this + 0x1b00))) {
        uVar8 = ((*(uint *)((int)this + 0x1b00) - uVar7) + 999) / 1000;
      }
      if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14c))) != uVar8) {
        *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14c))) = uVar8;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14c))) == 0) {
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
        if (*(undefined * PTR32 *)(uVar7 + 0x10c) != (undefined *)0x0) {
          F_0077e2e0(*(undefined * PTR32 *)(uVar7 + 0x10c) GEN_EDX_ARG);
        }
      }
    }
    uVar13 = 0xc;
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
    uVar7 = F_00435440(uVar7 GEN_EDX_ARG,uVar13);
    if (uVar7 != 0) {
      uVar8 = F_00920ca0((undefined *)(uVar7 + 0x14) GEN_EDX_ARG);
      if ((int)uVar8 < 1) {
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x148))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x148))) = 0;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
          if (*(undefined * PTR32 *)(uVar4 + 0x118) != (undefined *)0x0) {
            F_009218d0(*(undefined * PTR32 *)(uVar4 + 0x118) GEN_EDX_ARG);
          }
        }
      }
      else {
        uVar8 = F_00920ca0((undefined *)(uVar7 + 0x14) GEN_EDX_ARG);
        if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x148))) != uVar8) {
          *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x148))) = uVar8;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar4 = F_0042a990(uVar7 + 0x24 GEN_EDX_ARG);
        if (uVar4 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x128)))) {
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
        *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x128))) = uVar4;
        uVar4 = F_0043bd00(this_00 GEN_EDX_ARG,0xb6a,0,0);
        if (uVar4 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x124)))) {
          *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x124))) = uVar4;
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
      }
    }
    pcVar1 = (char *)((int)this + 0x1b20);
    pcVar10 = pcVar1;
    do {
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    if (pcVar10 != (char *)((int)this + 0x1b21)) {
      F_00771260(this GEN_EDX_ARG,pcVar1,*(undefined4 *)((int)this + 0x1b38));
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      *(undefined4 *)((int)this + 0x1b24) = 0;
      *(undefined4 *)((int)this + 0x1b28) = 0;
      *(undefined4 *)((int)this + 0x1b2c) = 0;
      *(undefined4 *)((int)this + 0x1b30) = 0;
      *(undefined2 *)((int)this + 0x1b34) = 0;
      *(undefined4 *)((int)this + 0x1b38) = 0;
    }
  }
  return;
}

/* ref: FUN_007d5410 */
GEN_FRAME uint GEN_THISCALL F_007d5410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  undefined * this_01;
  uint uVar4;
  uint in_ecx;
  uint uVar5;
  uint in_ecx_00;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  __time64_t _Var10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint local_1c;
  uint local_18;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2 GEN_EDX_ARG,9);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG,8)));
  this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar11 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar4 = F_00414500(uVar11 GEN_EDX_ARG,0xb5);
  uVar4 = *(uint *)(uVar4 + 0x14);
  if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x130))) != uVar4) {
    *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x130))) = uVar4;
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x134))) != (uint)(REFG(char, 0x14c0a66) != '\0')) {
    *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x134))) = (uint)(REFG(char, 0x14c0a66) != '\0');
    *(undefined1 *)(uVar3 + 0x1d) = 1;
  }
  in_ecx = F_00424810(REFG(int, 0x137104c) GEN_EDX_ARG);
  if ((param_1 & 0x1f) == 0) {
    if (in_ecx == 0) {
      local_1c = 0;
      local_18 = 0;
    }
    else {
      local_1c = F_00975090(in_ecx GEN_EDX_ARG);
      local_18 = F_009750b0(in_ecx GEN_EDX_ARG);
    }
    uVar13 = 6;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
    in_ecx_00 = F_00435440(uVar5 GEN_EDX_ARG,uVar13);
    uVar5 = *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x124)));
    if (in_ecx_00 == 0) {
      iVar9 = 0;
    }
    else {
      uVar6 = F_00438ce0(in_ecx_00 GEN_EDX_ARG);
      uVar7 = F_00438c80(in_ecx_00 GEN_EDX_ARG);
      uVar8 = F_00438c90(in_ecx_00 GEN_EDX_ARG);
      iVar9 = (uVar5 & 0xff000000) + (uVar8 & 0xff) + (uVar7 + uVar6 * 0x100) * 0x100;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x124))) != iVar9) {
      *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x124))) = iVar9;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    if (*(char *)(in_ecx_00 + 0x51b8) != '\0') {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
      bVar1 = F_0075ee20(uVar5 GEN_EDX_ARG);
      if (bVar1 == 0) {
        uVar5 = *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x124)));
        uVar6 = uVar5 | 0x1000000;
        if (uVar5 != uVar6) {
          *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x124))) = uVar6;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        *(undefined1 *)(in_ecx_00 + 0x51b8) = 0;
      }
    }
    if (in_ecx == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = F_009750d0(in_ecx GEN_EDX_ARG);
    }
    if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x128))) != uVar5) {
      *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x128))) = uVar5;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    if ((*(uint *)((int)this + 0xcec) != local_1c) || (*(uint *)((int)this + 0xcf0) != local_18)) {
      uVar14 = 0;
      uVar12 = 1;
      uVar13 = 0;
      *(uint *)((int)this + 0xcec) = local_1c;
      *(uint *)((int)this + 0xcf0) = local_18;
      uVar5 = F_00461c60(this_01 GEN_EDX_ARG,0x466,local_1c,local_18);
      F_00431250(this_00 GEN_EDX_ARG,0x5b,uVar5,uVar13,uVar12,uVar14);
    }
    if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x138))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x138))) = 0;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
  }
  uVar3 = 0x1f;
  if (uVar4 == 1) {
    uVar3 = 7;
  }
  if ((uVar4 != *(byte *)((int)this + 0x1b44)) || ((param_1 & uVar3) == 0)) {
    *(char *)((int)this + 0x1b44) = (char)uVar4;
    if (uVar4 == 1) {
      uVar4 = F_00461bb0(this_01 GEN_EDX_ARG,0x22,1);
      F_0042e430((undefined *)((int)this + 0xaa0) GEN_EDX_ARG,uVar4);
      uVar4 = F_0042a990((int)this + 0xc44 GEN_EDX_ARG);
      if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164))) = uVar4;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      uVar4 = F_0042a990((int)this + 0xc98 GEN_EDX_ARG);
      if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x168)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x168))) = uVar4;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
    }
    else if (uVar4 == 2) {
      if (in_ecx == 0) {
        _Var10 = F_00c4b7c2((__time64_t *)0x0);
        uVar4 = (uint)_Var10;
      }
      else {
        uVar4 = F_00476000();
      }
      if (uVar4 != *(uint *)((int)this + 0xcf4)) {
        uVar3 = F_00414500(uVar11 GEN_EDX_ARG,0xb6);
        uVar3 = F_00461bb0(this_01 GEN_EDX_ARG,*(int *)(uVar3 + 0x14) + 0x1c,uVar4);
        F_0042e430((undefined *)((int)this + 0xaa0) GEN_EDX_ARG,uVar3);
        *(uint *)((int)this + 0xcf4) = uVar4;
      }
      uVar4 = F_0042a990((int)this + 0xb9c GEN_EDX_ARG);
      if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164))) = uVar4;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      uVar4 = F_0042a990((int)this + 0xbf0 GEN_EDX_ARG);
      if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x168)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x168))) = uVar4;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
    }
    else if (uVar4 == 3) {
      if (in_ecx == 0) {
        *(undefined4 *)((int)this + 0xcf4) = 0xffffffff;
        F_0042e430((undefined *)((int)this + 0xaa0) GEN_EDX_ARG,"--:--");
      }
      else {
        uVar4 = F_00476000();
        uVar3 = F_00a1ae70();
        iVar9 = uVar4 + uVar3;
        if (iVar9 != *(int *)((int)this + 0xcf4)) {
          uVar4 = F_00414500(uVar11 GEN_EDX_ARG,0xb6);
          uVar4 = F_00461bb0(this_01 GEN_EDX_ARG,*(int *)(uVar4 + 0x14) + 0x1c,iVar9);
          F_0042e430((undefined *)((int)this + 0xaa0) GEN_EDX_ARG,uVar4);
          *(int *)((int)this + 0xcf4) = iVar9;
        }
      }
      uVar4 = F_0042a990((int)this + 0xaf4 GEN_EDX_ARG);
      if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x164))) = uVar4;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      uVar4 = F_0042a990((int)this + 0xb48 GEN_EDX_ARG);
      if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x168)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x168))) = uVar4;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
    }
    else {
      F_0042e430((undefined *)((int)this + 0xaa0) GEN_EDX_ARG,"--:--");
    }
    uVar12 = 0;
    uVar13 = 1;
    uVar11 = 0;
    uVar4 = F_0042a990((int)this + 0xaa0 GEN_EDX_ARG);
    in_ecx = F_00431250(this_00 GEN_EDX_ARG,0x42,uVar4,uVar11,uVar13,uVar12);
  }
  return in_ecx;
}

/* ref: FUN_007d5840 */
GEN_FRAME uint GEN_THISCALL F_007d5840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  undefined * this_00;
  undefined * pvVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint local_8;
  
  uVar2 = F_00a3ace0(&REFG(undefined, 0x14a4230) GEN_EDX_FWD);
  uVar3 = CONCAT31((int3)(uVar2 >> 8),REFG(undefined1, 0x14ab29a));
  local_8 = 0;
  if (REFG(undefined1, 0x14ab29a) != 0) {
    uVar3 = F_00a3ad50(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)REFG(undefined1, 0x14ab29a));
    local_8 = uVar3;
  }
  bVar1 = *(byte *)((int)this + 99);
  if ((bVar1 == 0) || (uVar6 = local_8, 3 < bVar1)) {
    uVar6 = uVar2;
  }
  F_00770830(this GEN_EDX_ARG,CONCAT31((int3)(uVar3 >> 8),bVar1),0,uVar6);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG,0x20)));
  pvVar5 = this_00;
  if (uVar2 != *(uint *)((int)this + 0xc4)) {
    uVar10 = 0;
    uVar9 = 1;
    uVar8 = 0;
    uVar7 = 0x12;
    uVar3 = uVar2;
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar3 = F_00461bb0(pvVar5 GEN_EDX_ARG,uVar7,uVar3);
    pvVar5 = (undefined *)F_00431250(this_00 GEN_EDX_ARG,0,uVar3,uVar8,uVar9,uVar10);
    *(uint *)((int)this + 0xc4) = uVar2;
  }
  if (local_8 != *(uint *)((int)this + 200)) {
    uVar10 = 0;
    uVar9 = 1;
    uVar8 = 0;
    uVar7 = 0x12;
    uVar2 = local_8;
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = F_00461bb0(pvVar5 GEN_EDX_ARG,uVar7,uVar2);
    pvVar5 = (undefined *)F_00431250(this_00 GEN_EDX_ARG,1,uVar2,uVar8,uVar9,uVar10);
    *(uint *)((int)this + 200) = local_8;
  }
  return (uint)pvVar5;
}

/* ref: FUN_007d5920 */
GEN_FRAME unsigned int GEN_STDCALL F_007d5920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d5920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (2 < param_2) {
    if (((((byte)*param_1 & 0xf) == 4) && (((byte)param_1[2] & 0xf) == 4)) &&
       (((byte)param_1[4] & 0xf) == 4)) {
      uVar1 = F_00475fa0(param_1[3],param_1[1]);
      F_00543ca0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,uVar1,0,0);
    }
  }
  return;
}

/* ref: FUN_007d5980 */
GEN_FRAME uint GEN_THISCALL F_007d5980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d5980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int iVar2;
  
  if ((*param_1 & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
  }
  if ((param_1[8] & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xc);
  }
  if (((int)uVar1 < *(int *)((int)this + 0x1a68)) &&
     (uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + uVar1 * 0xc + 0x18ec) + 0x40))), uVar1 != 0xe0000000)) {
    uVar1 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,uVar1,0);
    if (uVar1 != 0) {
      if (iVar2 == 0) {
        uVar1 = F_005476b0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,uVar1,0);
      }
      else if (iVar2 == 1) {
        uVar1 = F_00547560(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,uVar1,0);
        return uVar1;
      }
    }
  }
  return uVar1;
}

/* ref: FUN_007d5a00 */
GEN_FRAME uint GEN_STDCALL F_007d5a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d5a00u, gen_a0, gen_a1, gen_a2, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte * pbVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*param_1 & 0xf) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 4);
  }
  pbVar1 = param_1;
  if (REFG(undefined4 * PTR32, 0x1375c40) != (undefined4 *)0x0) {
    uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1375c40))))(REFG(undefined4 * PTR32, 0x1375c40));
    pbVar1 = (byte *)uVar4;
    if (pbVar1 != (byte *)0xe0000000) {
      pbVar1 = (byte *)F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,pbVar1,(int)((ulonglong)uVar4 >> 0x20));
      if (pbVar1 != (byte *)0x0) {
        if (iVar3 == 0) {
          pbVar1 = (byte *)F_005476b0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,pbVar1,0);
        }
        else if (iVar3 == 1) {
          uVar2 = F_00547560(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,pbVar1,0);
          return uVar2;
        }
      }
    }
  }
  return (uint)pbVar1;
}

/* ref: FUN_007d5a70 */
GEN_NOFRAME uint GEN_THISCALL F_007d5a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d5a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  piVar1 = *(int * PTR32 *)(uVar2 + 0x88);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_007d5a90 */
GEN_NOFRAME uint GEN_THISCALL F_007d5a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d5a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  piVar1 = *(int * PTR32 *)(uVar2 + 0x54);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_007d5ab0 */
GEN_FRAME uint GEN_THISCALL F_007d5ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  piVar3 = *(int * PTR32 *)(uVar2 + 0x24);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3 GEN_EDX_ARG);
  if (((char)uVar2 != '\0') && (uVar2 = piVar3[0x82], uVar2 == *(uint *)((int)this + 0x18))) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG);
  }
  if (*(int *)((int)this + 0x18) != 0) {
    if (param_1 < 0) {
      uVar1 = 9;
    }
    else {
      uVar1 = (ushort)param_1 & (9 < param_1) - 1;
    }
    *(ushort *)((int)this + 0x1c) = uVar1;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x8)) = (uint)uVar1;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x18),1,&(*(undefined4 *)(gen_frame + 0x4)));
    uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_007d5b50 */
GEN_FRAME byte GEN_THISCALL F_007d5b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte in_AL = 0;
  uint uVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x20) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
    piVar3 = *(int * PTR32 *)(uVar1 + 0x24);
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3 GEN_EDX_ARG);
    if (((char)uVar1 != '\0') && (piVar3[0x82] == *(int *)((int)this + 0x20))) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG);
    }
    if (param_1 < 10) {
      iVar2 = 0x11;
    }
    else {
      iVar2 = param_1;
      if (0x11 < param_1) {
        iVar2 = 10;
      }
    }
    *(int *)((int)this + 0x24) = iVar2;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_ARG,6);
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG,5);
    if ((uVar4 != 0) && (uVar1 != 0)) {
      uVar1 = *(uint *)(uVar4 + 0x20);
      if (*(int *)(uVar1 + 0x2d14) != *(int *)((int)this + 0x24)) {
        *(int *)(uVar1 + 0x2d14) = *(int *)((int)this + 0x24);
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
    }
    in_AL = (byte)uVar1;
  }
  return in_AL;
}

/* ref: FUN_007d5c00 */
GEN_FRAME byte GEN_THISCALL F_007d5c00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d5c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 in_ecx;
  char cVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  ((uint *)(gen_frame + 0x8))[0x10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  cVar1 = REFG(char, 0x14ab058);
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar3 = F_00414500(in_ecx GEN_EDX_ARG,(-(uint)(REFG(char, 0x14ab058) != '\0') & 9) + 0xdd);
  if (*(int *)(uVar3 + 0x14) == 0) {
    iVar4 = 1;
    while( true ) {
      iVar5 = *(int *)((int)this + 0x24) + iVar4;
      if (0x11 < iVar5) {
        iVar5 = iVar5 - 8;
      }
      bVar2 = F_0043aef0(this_00 GEN_EDX_ARG,iVar5);
      if (bVar2 == 0) break;
      iVar4 = iVar4 + 1;
      if (7 < iVar4) {
        F_00c47745(((uint *)(gen_frame + 0x8))[0x10] ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
        return bVar2;
      }
    }
LAB_007d5d53: ;
    bVar2 = F_007d5b50(this GEN_EDX_ARG,iVar5);
    F_00c47745(((uint *)(gen_frame + 0x8))[0x10] ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return bVar2;
  }
  ((uint *)(gen_frame + 0x8))[0] = 0xde;
  ((uint *)(gen_frame + 0x8))[1] = 0xdf;
  ((uint *)(gen_frame + 0x8))[2] = 0xe0;
  ((uint *)(gen_frame + 0x8))[3] = 0xe1;
  ((uint *)(gen_frame + 0x8))[4] = 0xe2;
  ((uint *)(gen_frame + 0x8))[5] = 0xe3;
  ((uint *)(gen_frame + 0x8))[6] = 0xe4;
  ((uint *)(gen_frame + 0x8))[7] = 0xe5;
  ((uint *)(gen_frame + 0x8))[8] = 0xe7;
  ((uint *)(gen_frame + 0x8))[9] = 0xe8;
  ((uint *)(gen_frame + 0x8))[10] = 0xe9;
  ((uint *)(gen_frame + 0x8))[0xb] = 0xea;
  ((uint *)(gen_frame + 0x8))[0xc] = 0xeb;
  ((uint *)(gen_frame + 0x8))[0xd] = 0xec;
  ((uint *)(gen_frame + 0x8))[0xe] = 0xed;
  ((uint *)(gen_frame + 0x8))[0xf] = 0xee;
  iVar4 = 1;
  do {
    iVar5 = *(int *)((int)this + 0x24) + iVar4;
    if (0x11 < iVar5) {
      iVar5 = iVar5 - 8;
    }
    uVar3 = F_00414500(in_ecx GEN_EDX_ARG,((uint *)(gen_frame + 0x8))[(int)(iVar5 - 10 + (uint)(cVar1 != '\0') * 8)]);
    if (*(int *)(uVar3 + 0x14) != 0) {
      bVar2 = F_0043aef0(this_00 GEN_EDX_ARG,iVar5);
      uVar3 = (uint)bVar2;
      if (bVar2 == 0) goto LAB_007d5d53;
    }
    iVar4 = iVar4 + 1;
    if (7 < iVar4) {
      F_00c47745(((uint *)(gen_frame + 0x8))[0x10] ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
      return (byte)uVar3;
    }
  } while( true );
}

/* ref: FUN_007d5d70 */
GEN_FRAME byte GEN_THISCALL F_007d5d70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d5d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1c0];
  undefined4 * puVar1;
  undefined * this_00;
  uint uVar2;
  int * piVar3;
  int iVar4;
  uint * this_01;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x1b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1bc);
  if (*(char *)((int)this + 0x60) == '\0') goto LAB_007d5e5e;
  puVar1 = ((undefined4 *)(gen_frame + 0x0));
  iVar4 = 0x36;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,4);
  ((undefined4 *)(gen_frame + 0x0))[1] = 7;
  F_005a2710(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a2710(((undefined1 *)(gen_frame + 0x1a8)) GEN_EDX_ARG,6);
  (*(undefined * PTR32 *)(gen_frame + 0x1ac)) = &REFG(undefined, 0x10bdbc2);
  F_005a2710(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x1b4)) = 0xffffffff;
  if (*(int *)((int)this + 0xcc) == 0) {
    uVar5 = 0x3c;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = F_007c8b20(this_00 GEN_EDX_ARG,uVar5);
    *(uint *)((int)this + 0xcc) = uVar2;
    if (uVar2 != 0) goto LAB_007d5e22;
  }
  else {
LAB_007d5e22: ;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xcc),0x37,((undefined4 *)(gen_frame + 0x0)));
  }
  this_01 = &(*(uint *)(gen_frame + 0x1b8));
  iVar4 = 0x36;
  do {
    this_01 = this_01 - 2;
    F_005a2670(this_01 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
LAB_007d5e5e: ;
  F_00c47745((*(uint *)(gen_frame + 0x1b8)) ^ (uint)(uint)(gen_frame + 0x1bc) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007d5e70 */
GEN_FRAME byte GEN_THISCALL F_007d5e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x7d5e70u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  double dVar1;
  undefined1 * puVar2;
  undefined4 local_c;
  
  puVar2 = (undefined1 *)F_00771060(param_1 GEN_EDX_FWD);
  if (puVar2 != (undefined1 *)0x0) {
    dVar1 = (double)param_4 * *(double *)&REFG(undefined, 0x10912a8);
    *puVar2 = 1;
    local_c = (undefined4)(longlong)TRUNC(dVar1);
    *(undefined4 *)(puVar2 + 0xac) = local_c;
    F_0042e430(puVar2 + 4 GEN_EDX_ARG,param_2);
    F_0042e430(puVar2 + 0x58 GEN_EDX_ARG,param_3);
    return 1;
  }
  return 0;
}

/* ref: FUN_007d5ee0 */
GEN_FRAME unsigned int GEN_THISCALL F_007d5ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * in_ecx;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 != (int *)0x0) && (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xb8))(param_1 GEN_EDX_FWD), (char)uVar2 != '\0')) {
    uVar2 = F_00a5f290(param_1 GEN_EDX_ARG);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
    in_ecx = *(int * PTR32 *)(uVar3 + 0x24);
    if ((in_ecx != (int *)0x0) && (bVar1 = F_0076a220(uVar2), bVar1 != 0)) {
      F_00769610(in_ecx GEN_EDX_ARG);
      F_007cd910(((undefined *)(uint)(in_ecx)) GEN_EDX_ARG,uVar2);
      ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 8))(in_ecx GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: FUN_007d5f50 */
GEN_FRAME uint GEN_THISCALL F_007d5f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5f50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4254));
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007d5f70 */
GEN_FRAME uint GEN_THISCALL F_007d5f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d5f70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d429c));
  in_ecx[3] = 0xe0000000;
  in_ecx[4] = 0xe0000000;
  in_ecx[5] = 0xe0000000;
  in_ecx[6] = 0xe0000000;
  F_0042b630(in_ecx + 7 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x1c GEN_EDX_ARG);
  *(undefined1 *)((int)in_ecx + 0x142) = 0;
  F_0042b630(in_ecx + 0x57 GEN_EDX_ARG);
  in_ecx[0x6c] = 0;
  in_ecx[0x6d] = 0;
  in_ecx[0x6e] = 0;
  in_ecx[0x6f] = 0;
  in_ecx[0x70] = 0;
  in_ecx[0x71] = 0;
  in_ecx[0x72] = 0;
  in_ecx[0x73] = 0;
  iVar1 = 0;
  puVar2 = in_ecx + 0x3f;
  do {
    puVar2[-0xe] = 0;
    *puVar2 = 0;
    *(undefined1 *)((int)in_ecx + iVar1 + 0x134) = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0xe);
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentInspect::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_007d6010(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d6010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  
  F_00ae0cd0(&REFG(undefined, 0x14c0920) GEN_EDX_FWD,0x2a);
  piVar2 = *(int * PTR32 *)(this + 0x1cc);
  *(undefined4 *)(this + 0x1c8) = 0;
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x1cc) = 0;
  }
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 8) = 0;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,uVar1,0);
  return uVar3;
}

/* ref: FUN_007d6070 */
GEN_NOFRAME uint GEN_THISCALL F_007d6070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d6070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 0x1b4) - 2;
  if ((uVar1 == 0) && (*(char *)((int)this + 0x142) != '\0')) {
    uVar1 = F_00771ca0(this GEN_EDX_FWD);
    *(undefined4 *)((int)this + 0x1b4) = 0;
  }
  return uVar1;
}

/* ref: FUN_007d60a0 */
GEN_NOFRAME uint GEN_THISCALL F_007d60a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d60a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 0x1b8) - 2;
  if ((uVar1 == 0) && (*(char *)((int)this + 0x142) != '\0')) {
    uVar1 = F_00771d50(this GEN_EDX_FWD);
    *(undefined4 *)((int)this + 0x1b8) = 0;
  }
  return uVar1;
}

/* ref: FUN_007d60d0 */
GEN_FRAME byte GEN_THISCALL F_007d60d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d60d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(byte *)(gen_frame + 0x1b)) = 1;
  pvVar2 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,0x7d9);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar2;
  if (pvVar2 == (undefined *)0x0) {
    return 1;
  }
  (*(int *)(gen_frame + 0x14)) = 0;
  puVar6 = (uint *)((int)this + 0xc4);
  do {
    iVar5 = (*(int *)(gen_frame + 0x14));
    pvVar2 = (undefined *)F_00a37da0((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x14)));
    if (pvVar2 == (undefined *)0x0) {
LAB_007d61f3: ;
      *puVar6 = 0;
      puVar6[0xe] = 0;
      *(undefined1 *)(iVar5 + 0x134 + (int)(*(undefined * PTR32 *)(gen_frame + 0x10))) = 0;
    }
    else {
      if (*(char *)((int)pvVar2 + 6) == '\0') {
        if (*(int *)((int)pvVar2 + 8) == 0) goto LAB_007d61f3;
        uVar4 = *(uint *)((int)pvVar2 + 8);
        if ((*(byte *)((int)pvVar2 + 0x14) & 1) != 0) {
          uVar4 = uVar4 + 1000000;
        }
      }
      else {
        pvVar3 = (undefined *)F_00a3a860(pvVar2 GEN_EDX_ARG);
        uVar4 = F_0046e5e0(pvVar3 GEN_EDX_ARG);
      }
      uVar4 = F_00ab65a0(uVar4,0);
      *puVar6 = uVar4;
      if (*(char *)((int)pvVar2 + 6) == '\0') {
        uVar4 = *(uint *)((int)pvVar2 + 8);
        if ((*(byte *)((int)pvVar2 + 0x14) & 1) != 0) {
          uVar4 = uVar4 + 1000000;
        }
      }
      else {
        pvVar3 = (undefined *)F_00a3a860(pvVar2 GEN_EDX_ARG);
        uVar4 = F_0046e5e0(pvVar3 GEN_EDX_ARG);
      }
      uVar4 = F_00ab24a0(uVar4);
      if ((*puVar6 == 0) || (uVar4 == 0)) {
        (*(byte *)(gen_frame + 0x1b)) = 0;
      }
      else {
        bVar1 = F_007c9be0(&(*(int *)(gen_frame + 0x8)),pvVar2);
        puVar6[0xe] = (uint)(bVar1 != 0) | (*(int *)(gen_frame + 0x8)) * 2;
        if (((REFG(undefined1, 0x14ab408) != 0) && (REFG(undefined1, 0x14ab408) < REFG(undefined1, 0x14ab407))) &&
           (REFG(undefined1, 0x14ab408) < *(byte *)(uVar4 + 0x9f))) {
          *(undefined1 *)((*(int *)(gen_frame + 0x14)) + 0x134 + (int)(*(undefined * PTR32 *)(gen_frame + 0x10))) = 1;
        }
      }
    }
    iVar5 = (*(int *)(gen_frame + 0x14)) + 1;
    puVar6 = puVar6 + 1;
    (*(int *)(gen_frame + 0x14)) = iVar5;
    if (0xd < iVar5) {
      return (*(byte *)(gen_frame + 0x1b));
    }
  } while( true );
}

/* ref: FUN_007d6230 */
GEN_FRAME byte GEN_THISCALL F_007d6230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d6230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if (REFG(int, 0x14ab3b0) == -0x20000000) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_FWD);
    return 0;
  }
  uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,REFG(int, 0x14ab3b0));
  if (uVar2 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
    return 0;
  }
  iVar3 = 0;
  do {
    ((byte *)(gen_frame + 0x8c))[(int)(iVar3)] = *(byte *)(uVar2 + 0x2db8 + iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1a);
  ((byte *)(gen_frame + 0x8c))[3] = 0x32;
  (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)(uVar2 + 0x2d90);
  (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)(uVar2 + 0x2d94);
  (*(undefined4 *)(gen_frame + 0x6c)) = *(undefined4 *)(uVar2 + 0x2d98);
  (*(undefined4 *)(gen_frame + 0x70)) = *(undefined4 *)(uVar2 + 0x2d9c);
  (*(undefined4 *)(gen_frame + 0x74)) = *(undefined4 *)(uVar2 + 0x2da0);
  (*(undefined4 *)(gen_frame + 0x78)) = *(undefined4 *)(uVar2 + 0x2da4);
  (*(undefined4 *)(gen_frame + 0x7c)) = *(undefined4 *)(uVar2 + 0x2da8);
  (*(undefined4 *)(gen_frame + 0x80)) = *(undefined4 *)(uVar2 + 0x2dac);
  (*(undefined4 *)(gen_frame + 0x84)) = *(undefined4 *)(uVar2 + 0x2db0);
  (*(undefined4 *)(gen_frame + 0x88)) = *(undefined4 *)(uVar2 + 0x2db4);
  F_00aa39d0(*(undefined * PTR32 *)((int)this + 0x1c8) GEN_EDX_ARG,(uint)(*(byte *)(uVar2 + 0x2dd3) >> 5 & 1));
  F_00aa9000(*(undefined * PTR32 *)((int)this + 0x1c8) GEN_EDX_ARG,(uint)(*(byte *)(uVar2 + 0x2dd3) >> 6 & 1));
  F_00a9fa40(*(undefined4 *)((int)this + 0x1c8) GEN_EDX_ARG,1);
  F_00aaa640(*(undefined * PTR32 *)((int)this + 0x1c8) GEN_EDX_ARG,((byte *)(gen_frame + 0x8c)),&(*(undefined4 *)(gen_frame + 0x64)));
  ((undefined4 *)(gen_frame + 0xc))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[2], REFG(float, 0x10c44a0));
  ((undefined4 *)(gen_frame + 0xc))[4] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[4], REFG(float, 0x10c449c));
  ((undefined4 *)(gen_frame + 0xc))[7] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[7], REFG(float, 0x10c449c));
  ((undefined4 *)(gen_frame + 0xc))[9] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[9], REFG(float, 0x10c449c));
  ((undefined4 *)(gen_frame + 0xc))[10] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[10], REFG(float, 0x10adbc4));
  ((undefined4 *)(gen_frame + 0xc))[0xb] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0xb], REFG(float, 0x10adbc4));
  ((undefined4 *)(gen_frame + 0xc))[0xc] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0xc], REFG(float, 0x10adbc4));
  ((undefined4 *)(gen_frame + 0xc))[0xd] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0xd], REFG(float, 0x10adbc4));
  uVar1 = (uint)((byte *)(gen_frame + 0x8c))[1] + (uint)((byte *)(gen_frame + 0x8c))[4] * 2;
  ((undefined4 *)(gen_frame + 0xc))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[3], REFG(float, 0x10c44a8));
  ((undefined4 *)(gen_frame + 0xc))[5] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[5], REFG(float, 0x10c44a4));
  ((undefined4 *)(gen_frame + 0xc))[0xe] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0xe], REFG(float, 0x10c44a8));
  ((undefined4 *)(gen_frame + 0xc))[0xf] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0xf], REFG(float, 0x10c4498));
  ((undefined4 *)(gen_frame + 0xc))[0x10] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0x10], REFG(float, 0x10c44a8));
  ((undefined4 *)(gen_frame + 0xc))[0x11] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0x11], REFG(float, 0x10c4498));
  ((undefined4 *)(gen_frame + 0xc))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0], REFG(float, 0x1087f04));
  ((undefined4 *)(gen_frame + 0xc))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[1], REFG(float, 0x1087f04));
  ((undefined4 *)(gen_frame + 0xc))[6] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[6], REFG(float, 0x10c4494));
  ((undefined4 *)(gen_frame + 0xc))[8] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[8], REFG(float, 0x10c4494));
  ((undefined4 *)(gen_frame + 0xc))[0x12] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0x12], REFG(float, 0x10ac108));
  ((undefined4 *)(gen_frame + 0xc))[0x13] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0x13], REFG(float, 0x10c4490));
  ((undefined4 *)(gen_frame + 0xc))[0x14] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0x14], REFG(float, 0x10ac108));
  ((undefined4 *)(gen_frame + 0xc))[0x15] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0xc))[0x15], REFG(float, 0x10c4490));
  if (uVar1 < 0x16) {
    (*(undefined4 *)(gen_frame + 0x8)) = ((undefined4 *)(gen_frame + 0xc))[(int)(uVar1)];
  }
  else {
    (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c8) + 0x4c))))(*(int * PTR32 *)((int)this + 0x1c8) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x8)));
  F_00aa1d10(*(undefined * PTR32 *)((int)this + 0x1c8) GEN_EDX_ARG,(uint)*(byte *)(uVar2 + 0x1680));
  F_00aa1cc0(*(undefined * PTR32 *)((int)this + 0x1c8) GEN_EDX_ARG,*(undefined4 *)(uVar2 + 0x1678),
               *(undefined4 *)(uVar2 + 0x167c));
  iVar3 = 0;
  puVar4 = (undefined4 *)(uVar2 + 0x16b0);
  do {
    F_00aa80c0(*(undefined * PTR32 *)((int)this + 0x1c8) GEN_EDX_ARG,iVar3,*puVar4,puVar4[1]);
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 0x1e8;
  } while (iVar3 < 2);
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007d64e0 */
GEN_FRAME uint GEN_THISCALL F_007d64e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d64e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d42e4));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 6;
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentInventory::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_007d6510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d6510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 0x1f) != 0) {
    F_00772170(this GEN_EDX_FWD,*(undefined4 *)(this + 0xc),0);
  }
  return;
}

/* ref: FUN_007d6530 */
GEN_FRAME uint GEN_THISCALL F_007d6530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d6530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  piVar1 = *(int * PTR32 *)(uVar2 + 0x28);
  if ((piVar1 != (int *)0x0) &&
     ((uVar2 = piVar1[0x90], uVar2 == *(uint *)((int)this + 8) || ((char)param_1 != '\0')))) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_007d6570 */
GEN_FRAME uint GEN_THISCALL F_007d6570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  uVar3 = 0;
  if (*(int *)(uVar2 + 0x78) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)(uVar2 + 0x78) + 0xc)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,param_2,param_1,0,0);
  }
  return uVar3;
}

/* ref: FUN_007d65a0 */
GEN_FRAME uint GEN_THISCALL F_007d65a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d65a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  uVar3 = 0;
  if (*(int *)(uVar2 + 0xdc) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)(uVar2 + 0xdc) + 0xc)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,param_2,param_1,0,0);
  }
  return uVar3;
}

/* ref: FUN_007d65e0 */
GEN_FRAME uint GEN_THISCALL F_007d65e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d65e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  uVar3 = 0;
  if (*(int *)(uVar2 + 0xe8) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)(uVar2 + 0xe8) + 0xc)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,param_2,param_1,0,1);
  }
  return uVar3;
}

/* ref: FUN_007d6620 */
GEN_FRAME uint GEN_THISCALL F_007d6620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  uVar3 = 0;
  if (*(int *)(uVar2 + 0xe8) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)(uVar2 + 0xe8) + 0xc)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,param_2,param_1,0,2);
  }
  return uVar3;
}

/* ref: FUN_007d6660 */
GEN_FRAME uint GEN_THISCALL F_007d6660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  uVar3 = 0;
  if (*(int *)(uVar2 + 0x80) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)(uVar2 + 0x80) + 0x10)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,param_2,param_1,0,0);
  }
  return uVar3;
}

/* ref: FUN_007d66a0 */
GEN_FRAME uint GEN_THISCALL F_007d66a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d66a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  uVar3 = 0;
  if (*(int *)(uVar2 + 0x120) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)(uVar2 + 0x120) + 0xc)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,param_2,param_1,0,0);
  }
  return uVar3;
}

/* ref: FUN_007d66e0 */
GEN_FRAME uint GEN_THISCALL F_007d66e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d66e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  undefined * this_00;
  undefined1 * puVar4;
  uint uVar5;
  float fVar6;
  double dVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = *(undefined4 *)((int)this + 0x30);
  bVar3 = F_00ac2f60(&REFG(undefined, 0x14bcf40) GEN_EDX_FWD,2,uVar1);
  uVar5 = CONCAT31(extraout_var,bVar3);
  if (bVar3 != 0) {
    fVar6 = F_00ac3090(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,2,uVar1);
    dVar7 = F_00ac3060(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,2,uVar1);
    dVar7 = (double)((float)GEN_TOF((((float10)fVar6 - (float10)dVar7) * (float10)REFG(double, 0x10944b8))));
    if (dVar7 < 0.0) {
      dVar7 = dVar7 - REFG(double, 0x1088108);
    }
    else {
      dVar7 = dVar7 + REFG(double, 0x1088108);
    }
    uVar5 = (uint)dVar7;
    if (0 < (int)uVar5) {
      if ((int)uVar5 < 10) {
        (*(undefined4 *)(gen_frame + 0x9)) = 0;
        (*(undefined4 *)(gen_frame + 0xd)) = 0;
        (*(undefined4 *)(gen_frame + 0x11)) = 0;
        (*(undefined4 *)(gen_frame + 0x15)) = 0;
        (*(undefined4 *)(gen_frame + 0x19)) = 0;
        (*(undefined4 *)(gen_frame + 0x1d)) = 0;
        (*(undefined4 *)(gen_frame + 0x21)) = 0;
        (*(undefined2 *)(gen_frame + 0x25)) = 0;
        (*(undefined1 *)(gen_frame + 0x27)) = 0;
        (*(undefined1 *)(gen_frame + 0x8)) = 0;
        dVar7 = (double)(float)((float10)(int)uVar5 / (float10)REFG(double, 0x10944b8));
        F_00c472af(&(*(undefined1 *)(gen_frame + 0x8)),0x20,"%2.1f",(int)(ulonglong)gen_d2bits(dVar7),
                   (int)((ulonglong)gen_d2bits(dVar7) >> 0x20));
        puVar4 = &(*(undefined1 *)(gen_frame + 0x8));
      }
      else {
        iVar8 = (int)uVar5 / 10;
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
        puVar4 = (undefined1 *)F_00462880(this_00 GEN_EDX_ARG,iVar8);
      }
      F_00431250(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,2,puVar4,0,1,0);
      iVar8 = *(int *)((int)this + 0x24);
      iVar2 = *(int *)(iVar8 + 0x20);
      uVar5 = *(uint *)(iVar2 + 8) | 2;
      *(uint *)(iVar2 + 8) = uVar5;
      *(undefined1 *)(iVar8 + 0x1d) = 1;
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
      return uVar5;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_007d6840 */
GEN_FRAME unsigned int GEN_THISCALL F_007d6840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d6840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (pcVar2 != param_1 + 1) {
      F_00431250(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_FWD,0xe,param_1,0,1,0);
      *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x100;
    }
  }
  return;
}

/* ref: FUN_007d6880 */
GEN_FRAME byte GEN_THISCALL F_007d6880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d6880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  undefined * pvVar7;
  uint uVar8;
  undefined * puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  bVar1 = *(byte *)((int)this + 0x45);
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(int *)(iVar11 + 0x60) != -2) {
    *(undefined4 *)(iVar11 + 0x60) = 0xfffffffe;
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(int *)(iVar11 + 100) != -2) {
    *(undefined4 *)(iVar11 + 100) = 0xfffffffe;
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(int *)(iVar11 + 0x68) != -2) {
    *(undefined4 *)(iVar11 + 0x68) = 0xfffffffe;
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(int *)(iVar11 + 0x6c) != -2) {
    *(undefined4 *)(iVar11 + 0x6c) = 0xfffffffe;
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(int *)(iVar11 + 0x70) != -2) {
    *(undefined4 *)(iVar11 + 0x70) = 0xfffffffe;
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (*(char *)(param_2 + 0xa3) != '\a') {
    uVar10 = 0;
    do {
      if (*(int *)(param_1 + uVar10 * 4) != 0) {
        if ((*(char *)((int)param_3 + 6) == '\0') || (uVar6 = F_00a3a860(param_3 GEN_EDX_FWD), uVar6 == 0)) {
          uVar5 = *((ushort *)GEN_TOP(((int)param_3 + (uVar10 & 0xff) * 2 + 0x20)));
        }
        else {
          uVar6 = uVar10;
          pvVar7 = (undefined *)F_00a3a860(param_3 GEN_EDX_ARG);
          uVar5 = F_0071d2c0(pvVar7 GEN_EDX_ARG,uVar6);
        }
        if (uVar5 != 0) {
          uVar6 = F_00a3ba20((uint)*((byte *)GEN_TOP((*(int *)(param_1 + uVar10 * 4) + 0x28))),param_3,0);
          ((uint *)(gen_frame + 0x20))[(int)(*((byte *)GEN_TOP((*(int *)(param_1 + uVar10 * 4) + 0x28))))] = uVar6;
          if ((int)uVar6 < 0) {
            F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c) GEN_EDX_ARG);
            return 0;
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 5);
    uVar10 = 0;
    (*(int *)(gen_frame + 0x14)) = 0x33;
    (*(int *)(gen_frame + 0x8)) = 0x60;
    do {
      if (*(int *)(param_1 + uVar10 * 4) != 0) {
        if ((*(char *)((int)param_3 + 6) == '\0') || (uVar6 = F_00a3a860(param_3 GEN_EDX_ARG), uVar6 == 0)) {
          uVar5 = *((ushort *)GEN_TOP(((int)param_3 + (uVar10 & 0xff) * 2 + 0x20)));
        }
        else {
          uVar6 = uVar10 & 0xff;
          pvVar7 = (undefined *)F_00a3a860(param_3 GEN_EDX_ARG);
          uVar5 = F_0071d2c0(pvVar7 GEN_EDX_ARG,uVar6);
        }
        if (uVar5 != 0) {
          iVar12 = *(int *)((int)this + 0x24);
          iVar11 = *(int *)(iVar12 + 0x20);
          if (*(uint *)(iVar11 + (*(int *)(gen_frame + 0x8))) != (uint)*(byte *)(param_4 + uVar10)) {
            *(uint *)(iVar11 + (*(int *)(gen_frame + 0x8))) = (uint)*(byte *)(param_4 + uVar10);
            *(undefined1 *)(iVar12 + 0x1d) = 1;
          }
          uVar6 = (uint)bVar1;
          uVar13 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + uVar10 * 4) + (uint)*(byte *)(param_4 + uVar10) * 4)));
          uVar14 = 0x201;
          pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)))
          ;
          uVar6 = F_00461c60(pvVar7 GEN_EDX_ARG,uVar14,uVar13,uVar6);
          F_00431250(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,(*(int *)(gen_frame + 0x14)) - 6,uVar6,0,1,0);
          if ((*(char *)((int)param_3 + 6) == '\0') || (uVar6 = F_00a3a860(param_3 GEN_EDX_ARG), uVar6 == 0))
          {
            bVar4 = *((byte *)GEN_TOP(((uVar10 & 0xff) + 0x2a + (int)param_3)));
          }
          else {
            uVar6 = uVar10 & 0xff;
            pvVar7 = (undefined *)F_00a3a860(param_3 GEN_EDX_ARG);
            bVar4 = F_0071d300(pvVar7 GEN_EDX_ARG,uVar6);
          }
          iVar12 = *(int *)(param_1 + uVar10 * 4);
          iVar11 = (int)*(char *)(bVar4 + 0x29 + iVar12);
          if (iVar11 < 1) {
            puVar9 = &REFG(undefined, 0x10bded6);
          }
          else {
            bVar4 = *(byte *)(iVar12 + 0x28);
            ((uint *)(gen_frame + 0x20))[(int)(bVar4)] = ((uint *)(gen_frame + 0x20))[(int)(bVar4)] + iVar11;
            uVar6 = F_00a6ad20((uint)bVar4,param_2);
            if ((int)uVar6 < (int)((uint *)(gen_frame + 0x20))[(int)(*(byte *)(iVar12 + 0x28))]) {
              iVar11 = iVar11 + (uVar6 - ((uint *)(gen_frame + 0x20))[(int)(*(byte *)(iVar12 + 0x28))]);
              if (iVar11 < 0) {
                iVar11 = 0;
              }
              (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) | 1 << ((byte)(*(uint *)(gen_frame + 0x10)) & 0x1f);
            }
            uVar6 = (uint)bVar1;
            uVar8 = (uint)*((byte *)GEN_TOP((*(int *)(param_1 + uVar10 * 4) + 0x28)));
            uVar14 = 1;
            uVar13 = 0x20f;
            pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                       (*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
            puVar9 = (undefined *)F_00461ea0(pvVar7 GEN_EDX_ARG,uVar13,uVar8,uVar14,iVar11,uVar6);
          }
          F_00431250(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,(*(int *)(gen_frame + 0x14)),puVar9,0,1,0);
          (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 4;
          (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
          (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 5);
  }
  if ((*(uint *)(gen_frame + 0x10)) < *(byte *)(param_2 + 0xa5)) {
    iVar12 = (*(uint *)(gen_frame + 0x10)) * 4 + 0x60;
    iVar11 = (*(uint *)(gen_frame + 0x10)) + 0x33;
    do {
      iVar2 = *(int *)((int)this + 0x24);
      iVar3 = *(int *)(iVar2 + 0x20);
      if (*(int *)(iVar3 + iVar12) != -1) {
        *(undefined4 *)(iVar3 + iVar12) = 0xffffffff;
        *(undefined1 *)(iVar2 + 0x1d) = 1;
      }
      F_00431250(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,iVar11 - 6,&REFG(undefined, 0x10bded7),0,1,0);
      F_00431250(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,iVar11,&REFG(undefined, 0x10bdeff),0,1,0);
      uVar10 = iVar11 - 0x32;
      iVar12 = iVar12 + 4;
      iVar11 = iVar11 + 1;
    } while (uVar10 < *(byte *)(param_2 + 0xa5));
  }
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(uint *)(iVar11 + 0x5c) != (*(uint *)(gen_frame + 0x0))) {
    *(uint *)(iVar11 + 0x5c) = (*(uint *)(gen_frame + 0x0));
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  iVar12 = *(int *)((int)this + 0x24);
  iVar11 = *(int *)(iVar12 + 0x20);
  if (*(uint *)(iVar11 + 0x58) != (uint)*(byte *)(param_2 + 0xa5)) {
    *(uint *)(iVar11 + 0x58) = (uint)*(byte *)(param_2 + 0xa5);
    *(undefined1 *)(iVar12 + 0x1d) = 1;
  }
  if (((*(uint *)(gen_frame + 0x10)) != 0) || (*(char *)(param_2 + 0xa5) != '\0')) {
    *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x20;
  }
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007d6ca0 */
GEN_FRAME uint GEN_THISCALL F_007d6ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d6ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_1 != 0) {
    if (*(int *)((int)this + 0x2c) == 6) {
      uVar1 = F_006d5ef0(*(undefined4 *)((int)this + 0x30));
    }
    else if (param_2 == 9999) {
      if (*(int *)(param_1 + 0x34) == 0) goto LAB_007d6d18;
      uVar1 = F_006c0940(*(undefined4 *)(param_1 + 0x30),(uint)*(byte *)(param_1 + 0xae),
                           CONCAT31((int3)(param_3 - 0xf4241U >> 8),param_3 - 0xf4241U < 999999));
    }
    else {
      uVar1 = F_006c0a30(*(undefined4 *)(param_1 + 0x30),(uint)*(byte *)(param_1 + 0xae),param_2,
                           param_4);
    }
    if (uVar1 != 0) {
      uVar3 = 0x1e4;
      pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      uVar1 = F_00461bb0(pvVar2 GEN_EDX_ARG,uVar3,uVar1);
      goto LAB_007d6d4b;
    }
  }
LAB_007d6d18: ;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0x1f7;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043bd00(pvVar2 GEN_EDX_ARG,uVar3,uVar4,uVar5);
LAB_007d6d4b: ;
  uVar1 = F_00431250(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,0x14,uVar1,0,1,0);
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 4;
  return uVar1;
}

/* ref: FUN_007d6d70 */
GEN_FRAME byte GEN_THISCALL F_007d6d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (param_1 != 0 || param_2 != 0) {
    uVar1 = F_00aae060(&REFG(undefined, 0x14b5ef0) GEN_EDX_FWD,param_1,param_2);
    if (uVar1 == 0) {
      return 0;
    }
    *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 1;
    F_00431250(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,0x15,uVar1,0,1,0);
  }
  return 1;
}

/* ref: FUN_007d6dc0 */
GEN_FRAME uint GEN_THISCALL F_007d6dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  byte bVar2;
  ushort uVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar6 = 0;
  if (param_1 != (undefined *)0x0) {
    iVar1 = *(int *)((int)this + 0x2c);
    if ((((iVar1 != 2) || (param_2 == 0x7d9)) && (iVar1 != 6)) && (iVar1 != 0xd)) {
      uVar6 = 100;
      goto LAB_007d6e80;
    }
    bVar2 = F_00a36000(param_1 GEN_EDX_FWD);
    uVar6 = (uint)bVar2;
    if (bVar2 != 0) {
      if (uVar6 != 100) goto LAB_007d6e80;
      if (*(char *)((int)param_1 + 6) == '\0') {
LAB_007d6e64: ;
        uVar3 = *(ushort *)((int)param_1 + 0x12);
      }
      else {
        uVar5 = F_00a3a860(param_1 GEN_EDX_ARG);
        if (uVar5 == 0) goto LAB_007d6e64;
        pvVar4 = (undefined *)F_00a3a860(param_1 GEN_EDX_ARG);
        uVar3 = F_00906d60(pvVar4 GEN_EDX_ARG);
      }
      if (uVar3 != 30000) {
        uVar6 = 99;
      }
      goto LAB_007d6e80;
    }
    if (*(char *)((int)param_1 + 6) == '\0') {
LAB_007d6e2b: ;
      uVar3 = *(ushort *)((int)param_1 + 0x12);
    }
    else {
      uVar5 = F_00a3a860(param_1 GEN_EDX_ARG);
      if (uVar5 == 0) goto LAB_007d6e2b;
      pvVar4 = (undefined *)F_00a3a860(param_1 GEN_EDX_ARG);
      uVar3 = F_00906d60(pvVar4 GEN_EDX_ARG);
    }
    if (uVar3 != 0) {
      uVar6 = 1;
      goto LAB_007d6e80;
    }
  }
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x4000;
LAB_007d6e80: ;
  uVar7 = 0x1e3;
  uVar5 = uVar6;
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar5 = F_00461bb0(pvVar4 GEN_EDX_ARG,uVar7,uVar5);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,0x17,uVar5,0,1,0);
  uVar5 = *(uint *)((int)this + 0x24);
  if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x4c))) != uVar6) {
    *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x4c))) = uVar6;
    *(undefined1 *)(uVar5 + 0x1d) = 1;
  }
  return uVar5;
}

/* ref: FUN_007d6ed0 */
GEN_FRAME uint GEN_THISCALL F_007d6ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 uVar4;
  
  uVar2 = F_007723a0(this GEN_EDX_FWD,param_1,param_2);
  uVar4 = 0x1e3;
  uVar3 = uVar2;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar3 = F_00461bb0(this_00 GEN_EDX_ARG,uVar4,uVar3);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,0x18,uVar3,0,1,0);
  iVar1 = *(int *)((int)this + 0x24);
  uVar3 = *(uint *)(iVar1 + 0x20);
  if (*(uint *)(uVar3 + 0x48) != uVar2) {
    *(uint *)(uVar3 + 0x48) = uVar2;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  return uVar3;
}

/* ref: FUN_007d6f30 */
GEN_FRAME uint GEN_THISCALL F_007d6f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d6f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined * this_00;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  
  bVar1 = *(byte *)((int)this + 0x45);
  uVar8 = 0;
  uVar7 = 0;
  do {
    if ((*(int *)(param_1 + uVar7 * 4) == 0) || (uVar4 = F_00ab2290(uVar7), uVar4 == 0))
    goto LAB_007d6fe1;
    bVar2 = *(byte *)(param_2 + 0xa0);
    if (bVar2 == 0) {
LAB_007d6f93: ;
      if ((uVar7 != 0x15) && (uVar7 != 0x18)) {
LAB_007d6f9d: ;
        uVar5 = (uint)bVar1;
        iVar10 = *(int *)(param_1 + uVar7 * 4);
        uVar6 = (uint)(0 < iVar10);
        uVar9 = 0x200;
        uVar4 = uVar7;
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
        uVar4 = F_00461ea0(this_00 GEN_EDX_ARG,uVar9,uVar4,uVar6,iVar10,uVar5);
        F_00431250(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,uVar8 + 0x1e,uVar4,0,1,0);
        uVar8 = uVar8 + 1;
        if (5 < uVar8) break;
      }
    }
    else if (bVar2 < 3) {
      if (((uVar7 != 0xc) && (uVar7 != 0xe)) && (uVar7 != 0xd)) goto LAB_007d6f9d;
    }
    else {
      if (bVar2 != 3) goto LAB_007d6f93;
      if ((uVar7 != 0x11) && (uVar7 != 0x12)) goto LAB_007d6f9d;
    }
LAB_007d6fe1: ;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x4a);
  iVar10 = *(int *)((int)this + 0x24);
  iVar3 = *(int *)(iVar10 + 0x20);
  if (*(uint *)(iVar3 + 0x50) != uVar8) {
    *(uint *)(iVar3 + 0x50) = uVar8;
    *(undefined1 *)(iVar10 + 0x1d) = 1;
  }
  return uVar8;
}

/* ref: FUN_007d7010 */
GEN_FRAME uint GEN_THISCALL F_007d7010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  byte bVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 * puVar11;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  bVar1 = *(byte *)((int)this + 0x45);
  uVar7 = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x10c)) GEN_EDX_FWD,&REFG(undefined, 0x10bdf0f),REFG(undefined4, 0x108cc50));
  if (*(byte *)(param_1 + 0xad) != 0) {
    puVar2 = (uint *)F_00ab42b0((uint)*(byte *)(param_1 + 0xad));
    F_0042e430(((undefined1 *)(gen_frame + 0x10c)) GEN_EDX_ARG,(*puVar2 & 0xffffff) + (int)puVar2);
  }
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x10c)) GEN_EDX_ARG);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,0x13,uVar3,0,1,0);
  if (*(char *)(param_1 + 0xa7) != '\x01') {
    F_0042cc20(((undefined1 *)(gen_frame + 0x1b4)) GEN_EDX_ARG,&REFG(undefined, 0x10bdf2d),REFG(undefined4, 0x108cc50));
    if (*(byte *)(param_1 + 0xa7) != 0) {
      puVar2 = (uint *)F_00ab42e0((uint)*(byte *)(param_1 + 0xa7));
      F_0042e430(((undefined1 *)(gen_frame + 0x1b4)) GEN_EDX_ARG,(*puVar2 & 0xffffff) + (int)puVar2);
      if (*(char *)(param_1 + 0xa7) == '\x02') {
        uVar3 = F_0042cd30(((undefined1 *)(gen_frame + 0x1b4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb8)),((undefined1 *)(gen_frame + 0x10c)));
        F_0042ccf0(((undefined1 *)(gen_frame + 0x1b4)) GEN_EDX_ARG,uVar3);
        F_0042c880(((undefined1 *)(gen_frame + 0xb8)) GEN_EDX_ARG);
      }
    }
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x1b4)) GEN_EDX_ARG);
    F_00431250(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,0x25,uVar3,0,1,0);
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)(param_1 + 0x5c);
    (*(uint *)(gen_frame + 0x4)) = 0;
    do {
      if (*(*(int * PTR32 *)(gen_frame + 0x8)) != 0) {
        iVar4 = (int)*(char *)(param_1 + 0xb1 + (*(uint *)(gen_frame + 0x4)));
        uVar8 = (uint)bVar1;
        uVar3 = (uint)(0 < iVar4);
        iVar6 = *(*(int * PTR32 *)(gen_frame + 0x8));
        uVar9 = 0x200;
        uVar7 = uVar8;
        uVar10 = REFG(undefined4, 0x108cc50);
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
        uVar7 = F_00461ea0(pvVar5 GEN_EDX_ARG,uVar9,iVar6,uVar3,iVar4,uVar7);
        F_0042cc20(((undefined1 *)(gen_frame + 0x160)) GEN_EDX_ARG,uVar7,uVar10);
        if (*(char *)(param_1 + 0xa7) == '\x02') {
          iVar6 = (*(uint *)(gen_frame + 0x4)) + 2;
          uVar9 = 0x3d3;
          uVar10 = REFG(undefined4, 0x108cc50);
          pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)))
          ;
          uVar7 = F_00461c60(pvVar5 GEN_EDX_ARG,uVar9,iVar6,uVar8);
          F_0042cc20(((undefined1 *)(gen_frame + 0xb8)) GEN_EDX_ARG,uVar7,uVar10);
          puVar11 = ((undefined1 *)(gen_frame + 0x160));
          pvVar5 = (undefined *)F_0042cbc0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb8)));
          uVar7 = F_0042e360(pvVar5 GEN_EDX_ARG,puVar11);
          F_0042cbc0(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,uVar7);
          F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
          F_0042ccf0(((undefined1 *)(gen_frame + 0x160)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
          F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0xb8)) GEN_EDX_ARG);
        }
        uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0x160)) GEN_EDX_ARG);
        F_00431250(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)) + 0x26,uVar7,0,1,0);
        uVar7 = (*(uint *)(gen_frame + 0x0)) + 1;
        F_0042c880(((undefined1 *)(gen_frame + 0x160)) GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x0)) = uVar7;
      }
      (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)(gen_frame + 0x8)) + 1;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
    } while ((*(uint *)(gen_frame + 0x4)) < 6);
    F_0042c880(((undefined1 *)(gen_frame + 0x1b4)) GEN_EDX_ARG);
  }
  iVar6 = *(int *)((int)this + 0x24);
  iVar4 = *(int *)(iVar6 + 0x20);
  if (*(uint *)(iVar4 + 0x54) != uVar7) {
    *(uint *)(iVar4 + 0x54) = uVar7;
    *(undefined1 *)(iVar6 + 0x1d) = 1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x10c)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c) GEN_EDX_ARG);
  return uVar7;
}

/* ref: FUN_007d72e0 */
GEN_FRAME byte GEN_THISCALL F_007d72e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x7d72e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[10];
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
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((char)(*(undefined4 *)&gen_args[1]) == '\0') {
    uVar2 = F_00ab25a0((uint)*(byte *)((*(int *)&gen_args[2]) + 0xa6));
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar4 = 0;
      do {
        uVar3 = uVar4;
        if (*(char *)(uVar2 + 4 + uVar4) == '\x01') break;
        uVar4 = uVar4 + 1;
        uVar3 = 0;
      } while (uVar4 < 0xe);
    }
    (*(uint *)&gen_args[8]) = (*(uint *)&gen_args[8]) & 0xffffff;
    bVar1 = F_00772840((int)&(*(uint *)&gen_args[8]) + 3,(*(undefined4 *)&gen_args[3]),uVar3);
    if (bVar1 != 0) {
      if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
        uVar3 = F_00a3bca0(0xc,REFG(undefined4, 0x14a4258),uVar3,0);
        if (-1 < (int)uVar3) {
          if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[8]) + 3)) == '\0') {
            return 1;
          }
          *(*(int * PTR32 *)&gen_args[7]) = ((*(uint *)&gen_args[6]) & 0xffff) - uVar3;
          return 1;
        }
      }
      else {
        uVar3 = F_00a3bca0(0xd,REFG(undefined4, 0x14a4258),uVar3,0);
        if (-1 < (int)uVar3) {
          if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[8]) + 3)) == '\0') {
            return 1;
          }
          *(*(int * PTR32 *)&gen_args[4]) = ((*(uint *)&gen_args[5]) & 0xffff) - uVar3;
          return 1;
        }
      }
    }
  }
  else if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
    if (((char)(*(uint *)&gen_args[8]) == '\0') && ((*(int *)&gen_args[9]) == 0)) {
      uVar3 = F_00a3bca0(0xc,*(undefined4 *)&REFG(undefined, 0x0),(int)*(short *)&REFG(undefined, 0x4),1);
    }
    else {
      uVar3 = F_00a3ba20(0xc,(*(int *)&gen_args[9]),1);
    }
    if (-1 < (int)uVar3) {
      *(*(int * PTR32 *)&gen_args[7]) = uVar3 - ((*(uint *)&gen_args[6]) & 0xffff);
      return 1;
    }
  }
  else {
    if (((char)(*(uint *)&gen_args[8]) == '\0') && ((*(int *)&gen_args[9]) == 0)) {
      uVar3 = F_00a3bca0(0xd,*(undefined4 *)&REFG(undefined, 0x0),(int)*(short *)&REFG(undefined, 0x4),1);
    }
    else {
      uVar3 = F_00a3ba20(0xd,(*(int *)&gen_args[9]),1);
    }
    if (-1 < (int)uVar3) {
      *(*(int * PTR32 *)&gen_args[4]) = uVar3 - ((*(uint *)&gen_args[5]) & 0xffff);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007d7450 */
GEN_FRAME uint GEN_THISCALL F_007d7450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x24);
  if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 4))) != param_1) {
    *((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 4))) = param_1;
    *(undefined1 *)(uVar1 + 0x1d) = 1;
  }
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x400;
  return uVar1;
}

/* ref: FUN_007d7480 */
GEN_FRAME uint GEN_THISCALL F_007d7480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x7d7480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  F_00431250(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_FWD,0,param_6,0,1,0);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,1,param_7,0,1,0);
  iVar1 = *(int *)((int)this + 0x24);
  piVar2 = *(int * PTR32 *)(iVar1 + 0x20);
  if (*piVar2 != param_5) {
    *piVar2 = param_5;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  iVar1 = *(int *)((int)this + 0x24);
  iVar3 = *(int *)(iVar1 + 0x20);
  if (*(uint *)(iVar3 + 0x28) != (param_2 & 0xff)) {
    *(uint *)(iVar3 + 0x28) = param_2 & 0xff;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  iVar1 = *(int *)((int)this + 0x24);
  iVar3 = *(int *)(iVar1 + 0x20);
  if (*(uint *)(iVar3 + 0x30) != (param_4 & 0xff)) {
    *(uint *)(iVar3 + 0x30) = param_4 & 0xff;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  iVar1 = *(int *)((int)this + 0x24);
  iVar3 = *(int *)(iVar1 + 0x20);
  if (*(uint *)(iVar3 + 0x2c) != (param_3 & 0xff)) {
    *(uint *)(iVar3 + 0x2c) = param_3 & 0xff;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  uVar4 = F_00431250(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,0xd,&REFG(undefined, 0x10bdf2e),0,1,0);
  return uVar4;
}

/* ref: FUN_007d7520 */
GEN_FRAME uint GEN_THISCALL F_007d7520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d7520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  
  if (param_1 == (undefined *)0x0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = F_00a3a8a0(param_1 GEN_EDX_FWD);
    uVar3 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_3,0,1,1);
  }
  if (param_3 - 0x17U < 4) {
    uVar3 = F_00a3c240(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_3);
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (param_2 < 2) {
    uVar5 = 0x238;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG)));
    uVar2 = F_00461bb0(pvVar4 GEN_EDX_ARG,uVar5,uVar3);
  }
  else {
    uVar5 = 0x239;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG)));
    uVar2 = F_00461d60(pvVar4 GEN_EDX_ARG,uVar5,uVar2,param_2,uVar3);
  }
  uVar2 = F_00431250(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,0xd,uVar2,0,1,0);
  return uVar2;
}

/* ref: FUN_007d75c0 */
GEN_FRAME uint GEN_THISCALL F_007d75c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d75c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_4 & 0xff;
  uVar3 = (uint)(-1 < param_3);
  iVar2 = ((char)param_2 != '\0') + 0x1f8;
  iVar4 = param_3;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar1 = F_00461d60(this_00 GEN_EDX_ARG,iVar2,uVar3,iVar4,uVar1);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,param_1 + 9,uVar1,0,1,0);
  uVar1 = 0;
  if (param_3 < 1) {
    if (param_3 < 0) {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 1;
  }
  iVar4 = *(int *)((int)this + 0x24);
  iVar2 = *(int *)(iVar4 + 0x20);
  if (*(uint *)(iVar2 + 0x14 + param_1 * 4) != uVar1) {
    *(uint *)(iVar2 + 0x14 + param_1 * 4) = uVar1;
    *(undefined1 *)(iVar4 + 0x1d) = 1;
  }
  return uVar1;
}

/* ref: FUN_007d7640 */
GEN_FRAME uint GEN_THISCALL F_007d7640(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d7640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined * this_00;
  undefined1 * puVar4;
  double dVar5;
  float fVar6;
  int iVar7;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar3;
  if (*(int *)((int)this + 8) != 0) {
    uVar3 = 0;
    if (*(int *)((int)this + 0x1c) != 0) {
      bVar2 = F_00ac2f60(&REFG(undefined, 0x14bcf40) GEN_EDX_FWD,*(int *)((int)this + 0x1c),
                           *(undefined4 *)((int)this + 0x18));
      uVar3 = CONCAT31(extraout_var,bVar2);
      if (bVar2 != 0) {
        fVar6 = F_00ac3090(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x1c),
                             *(undefined4 *)((int)this + 0x18));
        dVar5 = F_00ac3060(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x1c),
                             *(undefined4 *)((int)this + 0x18));
        dVar5 = (double)((float)GEN_TOF((((float10)fVar6 - (float10)dVar5) * (float10)REFG(double, 0x10944b8))));
        if (dVar5 < 0.0) {
          dVar5 = dVar5 - REFG(double, 0x1088108);
        }
        else {
          dVar5 = dVar5 + REFG(double, 0x1088108);
        }
        uVar3 = (uint)dVar5;
        if (0 < (int)uVar3) {
          if ((int)uVar3 < 10) {
            (*(undefined4 *)(gen_frame + 0x9)) = 0;
            (*(undefined4 *)(gen_frame + 0xd)) = 0;
            (*(undefined4 *)(gen_frame + 0x11)) = 0;
            (*(undefined4 *)(gen_frame + 0x15)) = 0;
            (*(undefined4 *)(gen_frame + 0x19)) = 0;
            (*(undefined4 *)(gen_frame + 0x1d)) = 0;
            (*(undefined4 *)(gen_frame + 0x21)) = 0;
            (*(undefined2 *)(gen_frame + 0x25)) = 0;
            (*(undefined1 *)(gen_frame + 0x27)) = 0;
            (*(undefined1 *)(gen_frame + 0x8)) = 0;
            dVar5 = (double)(float)((float10)(int)uVar3 / (float10)REFG(double, 0x10944b8));
            F_00c472af(&(*(undefined1 *)(gen_frame + 0x8)),0x20,"%2.1f",(int)(ulonglong)gen_d2bits(dVar5),
                       (int)((ulonglong)gen_d2bits(dVar5) >> 0x20));
            puVar4 = &(*(undefined1 *)(gen_frame + 0x8));
          }
          else {
            iVar7 = (int)uVar3 / 10;
            this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                        (*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
            puVar4 = (undefined1 *)F_00462880(this_00 GEN_EDX_ARG,iVar7);
          }
          F_00431250(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,2,puVar4,0,1,0);
          iVar7 = *(int *)((int)this + 0xc);
          iVar1 = *(int *)(iVar7 + 0x20);
          uVar3 = *(uint *)(iVar1 + 0x10) | 2;
          *(uint *)(iVar1 + 0x10) = uVar3;
          *(undefined1 *)(iVar7 + 0x1d) = 1;
          F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
          return uVar3;
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_007d77b0 */
GEN_FRAME uint GEN_THISCALL F_007d77b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d77b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_FWD,7,param_1,0,1,0);
  uVar1 = *(uint *)((int)this + 0xc);
  if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0xc))) != param_2) {
    *((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0xc))) = param_2;
    *(undefined1 *)(uVar1 + 0x1d) = 1;
  }
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 4;
  return uVar1;
}

/* ref: FUN_007d77f0 */
GEN_FRAME uint GEN_THISCALL F_007d77f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d77f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 * puVar5;
  undefined4 uVar6;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x88)) = uVar1;
  if (param_1 != 0) {
    (*(undefined1 *)(gen_frame + 0x8)) = 0;
    F_00c48350(((undefined1 *)(gen_frame + 0x9)),0,0x7f);
    F_00c472af(&(*(undefined1 *)(gen_frame + 0x8)),0x80,"%d.%02d",param_1 / 1000,((param_1 % 1000) * 100) / 1000);
    puVar5 = &(*(undefined1 *)(gen_frame + 0x8));
    uVar3 = 0x2ca;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar1 = F_00461190(pvVar2 GEN_EDX_ARG,uVar3,puVar5);
    F_00431250(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,9,uVar1,0,1,0);
    uVar6 = 0;
    uVar4 = 0;
    uVar3 = 0x2be;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar1 = F_0043bd00(pvVar2 GEN_EDX_ARG,uVar3,uVar4,uVar6);
    uVar1 = F_00431250(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,8,uVar1,0,1,0);
    *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 8;
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007d78e0 */
GEN_FRAME uint GEN_THISCALL F_007d78e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d78e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 * puVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (param_1 == 0) {
    uVar6 = 0;
    uVar4 = 0;
    uVar3 = 699;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar3,uVar4,uVar6);
  }
  else {
    (*(undefined1 *)(gen_frame + 0x8)) = 0;
    F_00c48350(((undefined1 *)(gen_frame + 0x9)),0,0x7f);
    F_00c472af(&(*(undefined1 *)(gen_frame + 0x8)),0x80,"%d.%02d",param_1 / 1000,((param_1 % 1000) * 100) / 1000);
    puVar5 = &(*(undefined1 *)(gen_frame + 0x8));
    uVar3 = 0x2ca;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = F_00461190(pvVar1 GEN_EDX_ARG,uVar3,puVar5);
  }
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,0xb,uVar2,0,1,0);
  uVar6 = 0;
  uVar4 = 0;
  uVar3 = 0x2bd;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar3,uVar4,uVar6);
  uVar2 = F_00431250(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,10,uVar2,0,1,0);
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 0x10;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_007d79e0 */
GEN_FRAME uint GEN_THISCALL F_007d79e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d79e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)(iVar1 + 0x20);
  if (*(uint *)(iVar2 + 4) != (param_1 & 0xffff)) {
    *(uint *)(iVar2 + 4) = param_1 & 0xffff;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_FWD,0,param_2,0,1,0);
  uVar3 = F_00431250(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,1,param_3,0,1,0);
  return uVar3;
}

/* ref: FUN_007d7a30 */
GEN_FRAME uint GEN_THISCALL F_007d7a30(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x7d7a30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  double dVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0x2c5;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x18))))(*(int * PTR32 *)(param_1 + 4) GEN_EDX_FWD)));
  uVar3 = F_0043bd00(pvVar2 GEN_EDX_ARG,uVar4,uVar5,uVar6);
  F_00431250(*(undefined * PTR32 *)(param_1 + 0x10) GEN_EDX_ARG,3,uVar3,0,1,0);
  if (param_2 < 0.0) {
    dVar1 = (double)param_2 - REFG(double, 0x1088108);
  }
  else {
    dVar1 = (double)param_2 + REFG(double, 0x1088108);
  }
  iVar7 = (int)dVar1;
  uVar4 = 0x2c9;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x18))))(*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG)));
  uVar3 = F_00461bb0(pvVar2 GEN_EDX_ARG,uVar4,iVar7);
  uVar3 = F_00431250(*(undefined * PTR32 *)(param_1 + 0x10) GEN_EDX_ARG,4,uVar3,0,1,0);
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  return uVar3;
}

/* ref: FUN_007d7ac0 */
GEN_FRAME uint GEN_THISCALL F_007d7ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0x2c6;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar3,uVar4,uVar5);
  F_00431250(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,5,uVar2,0,1,0);
  uVar3 = 0x2c9;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_00461bb0(pvVar1 GEN_EDX_ARG,uVar3,param_1);
  uVar2 = F_00431250(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,6,uVar2,0,1,0);
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 2;
  return uVar2;
}

/* ref: FUN_007d7b30 */
GEN_FRAME uint GEN_THISCALL F_007d7b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00431250(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_FWD,0xc,param_1,0,1,0);
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 0x20;
  return uVar1;
}

/* ref: FUN_007d7b60 */
GEN_FRAME unsigned int GEN_THISCALL F_007d7b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d7b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  if ((byte)param_2 != 0) {
    iVar1 = *(int *)((int)this + 0xc);
    iVar2 = *(int *)(iVar1 + 0x20);
    if (*(int *)(iVar2 + 8) != param_1) {
      *(int *)(iVar2 + 8) = param_1;
      *(undefined1 *)(iVar1 + 0x1d) = 1;
    }
    uVar3 = (uint)(byte)param_2;
    uVar4 = 0x2cc;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    uVar3 = F_00461bb0(this_00 GEN_EDX_ARG,uVar4,uVar3);
    F_00431250(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,0xd,uVar3,0,1,0);
    *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 0x40;
  }
  return;
}

/* ref: FUN_007d7bc0 */
GEN_FRAME uint GEN_THISCALL F_007d7bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  uVar1 = param_1 & 0xff;
  uVar2 = 0x2ce;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar1 = F_00461bb0(this_00 GEN_EDX_ARG,uVar2,uVar1);
  uVar1 = F_00431250(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,0xe,uVar1,0,1,0);
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 0x80;
  return uVar1;
}

/* ref: FUN_007d7c00 */
GEN_FRAME uint GEN_THISCALL F_007d7c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0xe: ;
    *(undefined4 *)((int)this + 0x1c) = 1;
    break;
  case 0xf: ;
    *(undefined4 *)((int)this + 0x1c) = 9;
    break;
  case 0x10: ;
    *(undefined4 *)((int)this + 0x1c) = 5;
    break;
  case 0x11: ;
    *(undefined4 *)((int)this + 0x1c) = 6;
    break;
  case 0x12: ;
    *(undefined4 *)((int)this + 0x1c) = 7;
    break;
  case 0x13: ;
    *(undefined4 *)((int)this + 0x1c) = 8;
    break;
  default: ;
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  iVar1 = *(int *)((int)this + 0xc);
  uVar2 = *(uint *)(iVar1 + 0x20);
  if (*(int *)(uVar2 + 0x18) != param_1) {
    *(int *)(uVar2 + 0x18) = param_1;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
  }
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentLoot::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_007d7c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  
  if (*(int *)(this + 0x68) == 1) {
    bVar1 = F_00772d30();
    if (bVar1 != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_ARG);
    }
  }
  F_00772c00(this GEN_EDX_ARG);
  uVar2 = F_00ae1d40(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_ARG);
  uVar3 = uVar2;
  if (*(uint *)(this + 0x20) != uVar2) {
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar3 = F_00760130(this_00 GEN_EDX_ARG,uVar3);
    *(uint *)(this + 0x20) = uVar2;
  }
  return uVar3;
}

/* ref: FUN_007d7cd0 */
GEN_FRAME uint GEN_THISCALL F_007d7cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d432c));
  F_0042b630((int)this + 0x10 GEN_EDX_FWD);
  iVar2 = (int)this + 100;
  iVar1 = 0xe;
  do {
    F_0042b630(iVar2 GEN_EDX_ARG);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  *(undefined4 *)((int)this + 0x550) = 0;
  *(undefined4 *)((int)this + 0x554) = 0;
  *(undefined4 *)((int)this + 0x558) = 0;
  F_0042b630((int)this + 0x55c GEN_EDX_ARG);
  F_0042b630((int)this + 0x5b0 GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x604) = 0;
  *(undefined4 *)((int)this + 0x9f0) = 0;
  iVar2 = (int)this + 0xa20;
  iVar1 = 0x10;
  do {
    F_00401500(iVar2,0x544,2,((code *)REFP(0x471130)));
    iVar2 = iVar2 + 0xa98;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  return (uint)this;
}

/* ref: FUN_007d7d80 */
GEN_FRAME uint GEN_THISCALL F_007d7d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  uint * this_00;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar6 = *(int *)((int)this + 0x554);
  iVar1 = *(int *)((int)this + 0x558);
  ((undefined4 *)(gen_frame + 0x0))[0] = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_FWD,4);
  iVar5 = *param_1;
  (*(int *)(gen_frame + 0x14)) = iVar6 * 100 + iVar1;
  if (iVar5 == 0) {
    iVar5 = -1;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,4);
  (*(int *)(gen_frame + 0x2c)) = iVar5;
  uVar3 = F_0042a990(param_1 + 1 GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0x34)) = uVar3;
  bVar2 = F_0043b930(param_1 GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)) GEN_EDX_ARG,2);
  (*(byte *)(gen_frame + 0x3c)) = bVar2;
  F_00772ea0(this GEN_EDX_ARG,param_1,((undefined4 *)(gen_frame + 0x0)));
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),9,((undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x48));
  iVar6 = 8;
  do {
    this_00 = this_00 - 2;
    uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar6 = iVar6 - 1;
  } while (-1 < iVar6);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_007d7e70 */
GEN_FRAME uint GEN_THISCALL F_007d7e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d7e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  if ((*(int *)(uVar1 + 0x48) != 0) &&
     (piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x48) + 0xc))), piVar2 != (int *)0x0)) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2 GEN_EDX_ARG,param_1)));
    if (piVar2 != (int *)0x0) {
      uVar3 = 5;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG)));
      uVar1 = F_00cb0950(this_00 GEN_EDX_ARG,uVar3);
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_007d7ec0 */
GEN_FRAME uint GEN_THISCALL F_007d7ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d7ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint * puVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if ((((param_2 & 4) != 0) && (uVar1 = param_4, (param_2 & 0x20) != 0)) ||
     (uVar1 = F_0042b790(param_1 GEN_EDX_FWD), uVar1 != 0)) goto LAB_007d80ec;
  if ((param_2 & 0x1d83040) == 0) {
    if ((param_2 & 0x18010) != 0) {
      uVar4 = param_3;
      if ((param_2 & 0x10000) == 0) {
        uVar1 = F_00760440(param_4);
        pvVar3 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar1);
        if ((pvVar3 != (undefined *)0x0) &&
           (pvVar3 = (undefined *)F_00a37da0(pvVar3 GEN_EDX_ARG,param_3), pvVar3 != (undefined *)0x0)) {
          uVar4 = F_0046e5e0(pvVar3 GEN_EDX_ARG);
        }
      }
      uVar5 = F_00ab24a0(uVar4);
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = F_00ab6240(uVar4,0,uVar5);
        uVar1 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10c0194),uVar1);
        F_0042ccf0(param_1 GEN_EDX_ARG,uVar1);
        F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
        pvVar3 = (undefined *)F_0043bef0(uVar1 GEN_EDX_ARG);
        uVar1 = F_00a21e20(pvVar3 GEN_EDX_ARG,param_1);
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
        return uVar1;
      }
      goto LAB_007d80ec;
    }
    if ((param_2 & 0x100) == 0) {
      if ((param_2 & 0x800) == 0) goto LAB_007d80ec;
      uVar4 = F_00ab28d0(param_3);
      uVar1 = 0;
      if (uVar4 == 0) goto LAB_007d80ec;
      uVar1 = F_007d7e70(this GEN_EDX_ARG,0x9c);
      uVar1 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s \"%s\"",uVar1);
    }
    else {
      uVar4 = F_00ab28a0(param_3);
      uVar1 = 0;
      if (uVar4 == 0) goto LAB_007d80ec;
      uVar1 = F_007d7e70(this GEN_EDX_ARG,*(undefined4 *)(uVar4 + 0x1c));
      uVar1 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10c0198),uVar1);
    }
  }
  else {
    iVar6 = 0;
    if ((param_2 & 0x40) == 0) {
      if ((param_2 & 0x2000) != 0) {
        puVar2 = (uint *)F_00ab1f30(param_3);
        goto LAB_007d7f8e;
      }
      if ((param_2 & 0x80000) != 0) {
        puVar2 = (uint *)F_00ab2c30(param_3);
        goto LAB_007d7f8e;
      }
      if ((param_2 & 0x100000) != 0) {
        puVar2 = (uint *)F_00ab2cf0(param_3);
        goto LAB_007d7f8e;
      }
      if ((param_2 & 0x400000) != 0) {
        puVar2 = (uint *)F_00ab2870(param_3);
        goto LAB_007d7f8e;
      }
      if ((param_2 & 0x1000) != 0) {
        puVar2 = (uint *)F_00ab1f00(param_3);
        goto LAB_007d7f8e;
      }
      if ((param_2 & 0x800000) != 0) {
        puVar2 = (uint *)F_00ab2d50(param_3);
        goto LAB_007d7f8e;
      }
      if ((param_2 & 0x1000000) != 0) {
        puVar2 = (uint *)F_00ab2840(param_3);
        goto LAB_007d7f8e;
      }
    }
    else {
      puVar2 = (uint *)F_00ab1ed0(param_3);
LAB_007d7f8e: ;
      if (puVar2 != (uint *)0x0) {
        iVar6 = (*puVar2 & 0xffffff) + (int)puVar2;
      }
    }
    uVar1 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10c0190),iVar6);
  }
  F_0042ccf0(param_1 GEN_EDX_ARG,uVar1);
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar1 = (uint)uVar7;
LAB_007d80ec: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007d8100 */
GEN_NOFRAME uint GEN_THISCALL F_007d8100(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d8100u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  F_0043b900(in_ecx + 0xc GEN_EDX_FWD);
  *(undefined1 *)(in_ecx + 0xa1c) = 0;
  *(undefined4 *)(in_ecx + 0xbe38) = 1;
  puVar2 = (undefined4 *)(in_ecx + 0x14a8);
  iVar3 = 0x11;
  do {
    *(undefined1 *)(puVar2 + 3) = 0;
    *puVar2 = 9;
    puVar2[1] = 0;
    puVar2[2] = 0;
    F_0043b900(puVar2 - 0x2a2 GEN_EDX_ARG);
    uVar1 = F_0043b900(puVar2 - 0x151 GEN_EDX_ARG);
    puVar2 = puVar2 + 0x2a6;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_007d8170 */
GEN_FRAME uint GEN_THISCALL F_007d8170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d8170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (0x10 < *(uint *)((int)this + 0xbe38)) {
    iVar2 = 0xf;
    this_00 = (undefined *)((int)this + 0x14b8);
    do {
      F_0090d740(this_00 GEN_EDX_FWD,(undefined *)((int)this_00 + 0xa98));
      iVar2 = iVar2 - 1;
      this_00 = (undefined *)((int)this_00 + 0xa98);
    } while (iVar2 != 0);
    *(undefined4 *)((int)this + 0xbe38) = 0x10;
  }
  puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xbe38) * 0xa98 + 0xa20 + (int)this)));
  *(int *)((int)this + 0xbe38) = *(int *)((int)this + 0xbe38) + 1;
  puVar4[0x2a2] = param_1;
  *(undefined1 *)(puVar4 + 0x2a5) = 1;
  puVar4[0x2a3] = *(undefined4 *)((int)this + 0x554);
  puVar4[0x2a4] = *(undefined4 *)((int)this + 0x558);
  *puVar4 = *param_2;
  F_0042ccf0(puVar4 + 1 GEN_EDX_ARG,param_2 + 1);
  iVar2 = (int)param_2 - (int)puVar4;
  puVar3 = puVar4 + 0x16;
  param_2 = (undefined4 *)0xf;
  do {
    F_0042ccf0(puVar3 GEN_EDX_ARG,iVar2 + (int)puVar3);
    puVar3 = puVar3 + 0x15;
    param_2 = (undefined4 *)((int)param_2 - 1);
  } while (param_2 != (undefined4 *)0x0);
  if ((char)param_3 == '\0') {
    F_0043b900(puVar4 + 0x151 GEN_EDX_ARG);
  }
  else {
    puVar4[0x151] = *(undefined4 *)((int)this + 0xc);
    F_0042ccf0(puVar4 + 0x152 GEN_EDX_ARG,(int)this + 0x10);
    puVar4 = puVar4 + 0x167;
    iVar2 = (int)this + 100;
    param_3 = 0xf;
    do {
      F_0042ccf0(puVar4 GEN_EDX_ARG,iVar2);
      iVar2 = iVar2 + 0x54;
      puVar4 = puVar4 + 0x15;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  uVar1 = *(uint *)((int)this + 0xbe38);
  if (uVar1 < 0x11) {
    puVar3 = (undefined4 *)(uVar1 * 0xa98 + 0x14a8 + (int)this);
    iVar2 = 0x11 - uVar1;
    do {
      *(undefined1 *)(puVar3 + 3) = 0;
      *puVar3 = 9;
      puVar3[1] = 0;
      puVar3[2] = 0;
      F_0043b900(puVar3 - 0x2a2 GEN_EDX_ARG);
      uVar1 = F_0043b900(puVar3 - 0x151 GEN_EDX_ARG);
      puVar3 = puVar3 + 0x2a6;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentMacro::vf13 */
GEN_FRAME unsigned int GEN_THISCALL F_007d82e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d82e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 3) {
    F_007d8100(in_ecx GEN_EDX_FWD);
  }
  return;
}

/* ref: FUN_007d8300 */
GEN_FRAME uint GEN_THISCALL F_007d8300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint local_8;
  
  uVar2 = 0;
  local_8 = 0;
  if (*(char *)((int)this + 0x33d4) != '\0') {
    iVar3 = (int)this + 0x438;
    do {
      if ((0xff < *(int *)((int)this + 0x33c8)) || (0xf < uVar2)) break;
      if (*(short *)(iVar3 + 0x18) != 0) {
        F_00915a30(param_1 GEN_EDX_FWD,*(int *)((int)this + 0x33c8),iVar3);
        *(int *)((int)this + 0x33c8) = *(int *)((int)this + 0x33c8) + 1;
        uVar2 = uVar2 + 1;
        *(int *)((int)this + 0x33c4) = *(int *)((int)this + 0x33c4) + 1;
      }
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 0x74;
    } while (local_8 < *(byte *)((int)this + 0x33d4));
  }
  F_0042e430((undefined *)((int)this + 0x40f4) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x4148) = 0;
  *(undefined4 *)((int)this + 0x414c) = 0;
  *(undefined4 *)((int)this + 0x4150) = 0;
  *(undefined4 *)((int)this + 0x4154) = 0;
  *(undefined4 *)((int)this + 0x4158) = 0;
  uVar1 = F_0042a990((int)this + 0x40f4 GEN_EDX_ARG);
  *(uint *)((int)this + 0x4158) = uVar1;
  *(undefined1 *)((int)this + 0x415c) = 0;
  uVar1 = uVar2;
  while ((uVar2 < 0x10 && (*(int *)((int)this + 0x33c8) < 0x100))) {
    F_00915a30(param_1 GEN_EDX_ARG,*(int *)((int)this + 0x33c8),(int)this + 0x4148);
    *(int *)((int)this + 0x33c8) = *(int *)((int)this + 0x33c8) + 1;
    *(int *)((int)this + 0x33c4) = *(int *)((int)this + 0x33c4) + 1;
    uVar2 = uVar2 + 1;
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_007d8410 */
GEN_FRAME uint GEN_THISCALL F_007d8410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  uint local_c;
  uint local_8;
  
  uVar3 = 0;
  local_8 = 0;
  local_c = 0;
  if (*(char *)((int)this + 0x33d4) == '\0') {
    return 0;
  }
  puVar4 = (undefined4 *)((int)this + 0x438);
  do {
    iVar1 = *(int *)((int)this + 0x33c8);
    if (0xff < iVar1) {
      return uVar3;
    }
    if (*(short *)(puVar4 + 6) == 0) {
      if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4))) == 0) {
        uVar5 = 0;
        uVar3 = F_00404270();
        puVar2 = (undefined4 *)F_00406bd0(0x14,0,uVar3,uVar5);
        uVar3 = local_8;
        if (puVar2 == (undefined4 *)0x0) {
          *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4))) = 0;
        }
        else {
          *puVar2 = *puVar4;
          puVar2[1] = puVar4[1];
          puVar2[2] = puVar4[2];
          puVar2[3] = puVar4[3];
          puVar2[4] = puVar4[4];
          *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4))) = puVar2;
        }
      }
      else {
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4)));
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        puVar2[2] = puVar4[2];
        puVar2[3] = puVar4[3];
        puVar2[4] = puVar4[4];
      }
      *(int *)((int)this + 0x33c8) = *(int *)((int)this + 0x33c8) + 1;
      uVar3 = uVar3 + 1;
      *(int *)((int)this + 0x33c0) = *(int *)((int)this + 0x33c0) + 1;
      local_8 = uVar3;
    }
    local_c = local_c + 1;
    puVar4 = puVar4 + 0x1d;
  } while (local_c < *(byte *)((int)this + 0x33d4));
  return uVar3;
}

/* ref: FUN_007d8520 */
GEN_FRAME byte GEN_STDCALL F_007d8520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8520u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  double dVar2;
  float * pfVar3;
  
  if (REFG(void * PTR32, 0x1379694) == (undefined *)0x0) {
    return 0;
  }
  pfVar3 = (float *)F_00a5feb0(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
  fVar1 = *pfVar3;
  (*(float *)(gen_frame + 0x18)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x80;
  if (fVar1 < 0.0) {
    dVar2 = (double)fVar1 - REFG(double, 0x1088108);
  }
  else {
    dVar2 = (double)fVar1 + REFG(double, 0x1088108);
  }
  fVar1 = pfVar3[2];
  (*(undefined2 *)(gen_frame + 0x8)) = (short)(int)dVar2;
  (*(float *)(gen_frame + 0x18)) = fVar1;
  if (fVar1 < 0.0) {
    dVar2 = (double)fVar1 - REFG(double, 0x1088108);
  }
  else {
    dVar2 = REFG(double, 0x1088108) + (double)fVar1;
  }
  (*(undefined2 *)(gen_frame + 0xa)) = (short)(int)dVar2;
  (*(undefined4 *)(gen_frame + 0xc)) = 0xec1b;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = &REFG(undefined, 0x10be002);
  F_00915a30(param_1 GEN_EDX_ARG,param_2,&(*(undefined4 *)(gen_frame + 0x4)));
  return 1;
}

/* ref: FUN_007d85d0 */
GEN_FRAME uint GEN_THISCALL F_007d85d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d85d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * in_EAX = 0;
  uint uVar1;
  short sVar2;
  
  uVar1 = 0;
  if (*(char *)((int)this + 0x33d5) != '\0') {
    in_EAX = (short *)((int)this + 0x2890);
    while( true ) {
      if (*(int *)(in_EAX + 2) == 1) {
        sVar2 = *in_EAX;
      }
      else {
        sVar2 = 0;
      }
      if (sVar2 == (short)param_1) break;
      uVar1 = uVar1 + 1;
      in_EAX = in_EAX + 0x3a;
      if (*(byte *)((int)this + 0x33d5) <= uVar1) {
        return (uint)in_EAX;
      }
    }
    *(undefined1 *)((int)this + 0x33d5) = 0;
  }
  return (uint)in_EAX;
}

/* ref: FUN_007d8630 */
GEN_FRAME unsigned int GEN_THISCALL F_007d8630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * psVar1;
  uint uVar2;
  short sVar3;
  
  uVar2 = 0;
  if (*(char *)((int)this + 0x33d5) != '\0') {
    psVar1 = (short *)((int)this + 0x2890);
    while( true ) {
      if (*(int *)(psVar1 + 2) == 2) {
        sVar3 = *psVar1;
      }
      else {
        sVar3 = 0;
      }
      if (sVar3 == (short)param_1) break;
      uVar2 = uVar2 + 1;
      psVar1 = psVar1 + 0x3a;
      if (*(byte *)((int)this + 0x33d5) <= uVar2) {
        return;
      }
    }
    *(undefined1 *)((int)this + 0x33d5) = 0;
  }
  return;
}

/* ref: FUN_007d8690 */
GEN_FRAME uint GEN_THISCALL F_007d8690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = 0;
  if (*(char *)((int)this + 0x33d7) == '\0') {
    return 0;
  }
  puVar4 = (undefined4 *)((int)this + 0x2d00);
  do {
    iVar1 = *(int *)((int)this + 0x33c8);
    if (0xff < iVar1) {
      return local_8;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4))) == 0) {
      uVar5 = 0;
      uVar2 = F_00404270();
      puVar3 = (undefined4 *)F_00406bd0(0x14,0,uVar2,uVar5);
      if (puVar3 == (undefined4 *)0x0) {
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4))) = 0;
      }
      else {
        *puVar3 = *puVar4;
        puVar3[1] = puVar4[1];
        puVar3[2] = puVar4[2];
        puVar3[3] = puVar4[3];
        puVar3[4] = puVar4[4];
        *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4))) = puVar3;
      }
    }
    else {
      puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar1 * 4)));
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      puVar3[2] = puVar4[2];
      puVar3[3] = puVar4[3];
      puVar3[4] = puVar4[4];
    }
    *(int *)((int)this + 0x33c8) = *(int *)((int)this + 0x33c8) + 1;
    local_c = local_c + 1;
    local_8 = local_8 + 1;
    puVar4 = puVar4 + 0x1f;
  } while (local_c < *(byte *)((int)this + 0x33d7));
  return local_8;
}

/* ref: FUN_007d8790 */
GEN_FRAME uint GEN_THISCALL F_007d8790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  if ((*(int *)((int)this + 0x3398) == *(int *)((int)this + 0x3388)) &&
     ((*(int *)(gen_frame + 0x1c)) = REFG(int, 0x1379694), REFG(int, 0x1379694) != 0)) {
    uVar3 = (uint)REFG(undefined1, 0x1338ad4);
    (*(uint *)(gen_frame + 0x18)) = uVar3;
    if (1 < uVar3) {
      if (REFG(int, 0x14a73a0) == 0) {
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
      }
      else {
        (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x339c);
      }
      (*(int *)(gen_frame + 0x24)) = 0;
      if (uVar3 != 0) {
        do {
          piVar4 = (int *)F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_FWD,(*(int *)(gen_frame + 0x24)));
          if (((piVar4 != (int *)0x0) && (*piVar4 != *(int *)((*(int *)(gen_frame + 0x1c)) + 0x74))) &&
             ((char)piVar4[0x78] != '\0')) {
            bVar2 = F_00773f00(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x20)),*piVar4,0,piVar4 + 0x7c);
            uVar6 = (*(uint *)(gen_frame + 0x28));
            if (bVar2 != 0) {
              if (0xff < *(int *)((int)this + 0x33c8)) {
                return (*(uint *)(gen_frame + 0x28));
              }
              fVar1 = gen_bits2f(piVar4[0x7c]);
              (*(undefined4 *)(gen_frame + 0x4)) = 9;
              uVar6 = F_0046e680(fVar1);
              (*(undefined2 *)(gen_frame + 0x8)) = (short)uVar6;
              uVar6 = F_0046e680(GEN_TOF(gen_bits2f(piVar4[0x7e])));
              (*(undefined2 *)(gen_frame + 0xa)) = (short)uVar6;
              (*(undefined4 *)(gen_frame + 0xc)) = 0xec05;
              (*(undefined4 *)(gen_frame + 0x10)) = 1;
              (*(int * PTR32 *)(gen_frame + 0x14)) = piVar4 + 4;
              F_00915a30(param_1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x33c8),&(*(undefined4 *)(gen_frame + 0x4)));
              (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 1;
              *(int *)((int)this + 0x33c8) = *(int *)((int)this + 0x33c8) + 1;
              uVar6 = (*(uint *)(gen_frame + 0x28));
            }
          }
          iVar5 = (*(int *)(gen_frame + 0x24)) + 1;
          (*(int *)(gen_frame + 0x24)) = iVar5;
        } while (iVar5 < (int)(*(uint *)(gen_frame + 0x18)));
        return uVar6;
      }
    }
  }
  return 0;
}

/* ref: FUN_007d88e0 */
GEN_FRAME uint GEN_THISCALL F_007d88e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d88e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * this_00;
  float * pfVar3;
  int iVar4;
  
  if ((*(int *)((int)this + 0x3398) == *(int *)((int)this + 0x3388)) && (REFG(int, 0x1379694) != 0)) {
    (*(uint *)(gen_frame + 0x28)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = (uint)REFG(undefined1, 0x1338ad4);
    if (REFG(int, 0x14a73a0) == 0) {
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 0x339c);
    }
    (*(int *)(gen_frame + 0x20)) = 0;
    if (REFG(undefined1, 0x1338ad4) != 0) {
      do {
        uVar2 = F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_FWD,(*(int *)(gen_frame + 0x20)));
        if ((uVar2 != 0) &&
           (this_00 = (int *)F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,*(undefined4 *)(uVar2 + 0x208)),
           this_00 != (int *)0x0)) {
          iVar4 = this_00[0x1d];
          uVar2 = F_00a5feb0(this_00 GEN_EDX_ARG);
          bVar1 = F_00773f00(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x24)),iVar4,0,uVar2);
          if (bVar1 != 0) {
            if (0xff < *(int *)((int)this + 0x33c8)) {
              return (*(uint *)(gen_frame + 0x28));
            }
            (*(undefined4 *)(gen_frame + 0x8)) = 9;
            pfVar3 = (float *)F_00a5feb0(this_00 GEN_EDX_ARG);
            uVar2 = F_0046e680(*pfVar3);
            (*(undefined2 *)(gen_frame + 0xc)) = (short)uVar2;
            uVar2 = F_00a5feb0(this_00 GEN_EDX_ARG);
            uVar2 = F_0046e680(*(float *)(uVar2 + 8));
            (*(undefined2 *)(gen_frame + 0xe)) = (short)uVar2;
            (*(undefined4 *)(gen_frame + 0x10)) = 0xec05;
            (*(undefined4 *)(gen_frame + 0x14)) = 1;
            uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xc))(this_00 GEN_EDX_ARG);
            (*(uint *)(gen_frame + 0x18)) = uVar2;
            F_00915a30(param_1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x33c8),&(*(undefined4 *)(gen_frame + 0x8)));
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 1;
            *(int *)((int)this + 0x33c8) = *(int *)((int)this + 0x33c8) + 1;
          }
        }
        iVar4 = (*(int *)(gen_frame + 0x20)) + 1;
        (*(int *)(gen_frame + 0x20)) = iVar4;
      } while (iVar4 < (int)(*(uint *)(gen_frame + 0x1c)));
    }
    return (*(uint *)(gen_frame + 0x28));
  }
  return 0;
}

/* ref: FUN_007d8a40 */
GEN_NOFRAME uint GEN_THISCALL F_007d8a40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d8a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(uint *)((int)this + 0x33b0) >> 0xd & 1) != 0) {
    uVar2 = 9;
    *(uint *)((int)this + 0x33b0) = *(uint *)((int)this + 0x33b0) & 0xffffdfff;
  }
  if (*(char *)((int)this + 0x33e0) == '\0') {
    if (*(char *)((int)this + 0x33e2) != '\0') {
      uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_FWD,0x197);
      if (*(int *)(uVar1 + 0x14) == 1) {
        uVar2 = uVar2 | 1;
        *(undefined1 *)((int)this + 0x33e2) = 0;
      }
    }
  }
  else {
    uVar2 = uVar2 | 2;
  }
  if (*(char *)((int)this + 0x33e1) != '\0') {
    uVar2 = uVar2 | 4;
    *(undefined1 *)((int)this + 0x33e1) = 0;
  }
  return uVar2;
}

/* ref: FUN_007d8ac0 */
GEN_FRAME uint GEN_THISCALL F_007d8ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0xffff;
  iVar2 = 0xffff;
  if ((*(uint *)((int)this + 0x33b0) >> 9 & 1) != 0) {
    iVar3 = 0;
    iVar2 = 0;
    *(uint *)((int)this + 0x33b0) = *(uint *)((int)this + 0x33b0) & 0xfffffdff;
  }
  if ((*(uint *)((int)this + 0x33b0) >> 10 & 1) != 0) {
    uVar1 = F_00ab1ea0(*(undefined4 *)((int)this + 0x33bc));
    if (uVar1 != 0) {
      iVar3 = (int)(((float10)GEN_TOD((*(short *)(uVar1 + 0x12) - 0x400))) /
                   (float10)*(float *)((int)this + 0x337c));
      iVar2 = (int)(((float10)GEN_TOD((*(short *)(uVar1 + 0x14) - 0x400))) /
                   (float10)*(float *)((int)this + 0x337c));
    }
    *(uint *)((int)this + 0x33b0) = *(uint *)((int)this + 0x33b0) & 0xfffffbff;
    *(undefined4 *)((int)this + 0x33bc) = 0;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c))) != iVar3) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c))) = iVar3;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20))) != iVar2) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20))) = iVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return param_1;
}

/* ref: Client::UI2::Agent::AgentMap::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_007d8ba0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d8ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined2 *)(this + 0x33d5) = 0;
  this[0x33d7] = (undefined1)0x0;
  *(undefined4 *)(this + 0x33a8) = 0;
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0x3384) = 0;
  *(undefined4 *)(this + 0x339c) = 0;
  *(undefined4 *)(this + 0x3398) = 0;
  *(undefined4 *)(this + 0x33a0) = 0;
  F_0042e430(this + 0xf0 GEN_EDX_ARG,&REFG(undefined, 0x10be015));
  *(undefined4 *)(this + 0x337c) = GEN_FLT_TO(*(undefined4 *)(this + 0x337c), REFG(float, 0x1094884));
  F_0042e430(this + 0x144 GEN_EDX_ARG,&REFG(undefined, 0x10be016));
  *(undefined4 *)(this + 0x33a4) = 0;
  *(undefined4 *)(this + 0x33a8) = 0;
  *(undefined4 *)(this + 0x33b4) = 0;
  *(undefined4 *)(this + 0x33b0) = 0;
  *(undefined2 *)(this + 0x33d5) = 0;
  this[0x33d4] = (undefined1)0x0;
  this[0x33d7] = (undefined1)0x0;
  *(undefined2 *)(this + 0x33de) = 0;
  this[0x33d9] = (undefined1)0x0;
  this[0x33e3] = (undefined1)0x0;
  F_00773d70(this GEN_EDX_ARG);
  F_0042aca0(this + 0x33c GEN_EDX_ARG);
  uVar2 = F_0042aca0(this + 0x390 GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_007d8c80 */
GEN_FRAME ushort GEN_THISCALL F_007d8c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x7d8c80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined * this_00;
  byte bVar1;
  ushort uVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  
  bVar1 = *(byte *)((int)this + 0x33d4);
  uVar2 = (ushort)CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if (bVar1 < 0x50) {
    this_00 = (undefined *)((uint)bVar1 * 0x74 + 0x3e4 + (int)this);
    *(byte *)((int)this + 0x33d4) = bVar1 + 1;
    F_0042e430(this_00 GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    *(undefined4 *)((int)this_00 + 0x58) = 0;
    *(undefined4 *)((int)this_00 + 0x5c) = 0;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(undefined4 *)((int)this_00 + 100) = 0;
    uVar3 = F_0042a990(this_00 GEN_EDX_ARG);
    *(uint *)((int)this_00 + 100) = uVar3;
    *(undefined1 *)((int)this_00 + 0x68) = 0;
    *(undefined4 *)((int)this_00 + 0x6c) = 0;
    *(undefined4 *)((int)this_00 + 0x70) = 0;
    F_0042ccf0(this_00 GEN_EDX_ARG,param_6);
    *(short *)((int)this_00 + 0x5a) = (short)param_3 - 0x400;
    *(short *)((int)this_00 + 0x58) = (short)param_2 - 0x400;
    *(undefined4 *)((int)this_00 + 0x60) = param_5;
    *(undefined4 *)((int)this_00 + 0x54) = param_1;
    *(undefined4 *)((int)this_00 + 0x5c) = param_4;
    uVar3 = F_0042a990(this_00 GEN_EDX_ARG);
    *(uint *)((int)this_00 + 100) = uVar3;
    *(ushort *)((int)this_00 + 0x6c) = (ushort)(byte)param_7;
    *(ushort *)((int)this_00 + 0x6e) = (ushort)param_8;
    *(undefined4 *)((int)this_00 + 0x70) = param_9;
    uVar2 = (ushort)param_8;
  }
  return uVar2;
}

/* ref: FUN_007d8d40 */
GEN_FRAME uint GEN_THISCALL F_007d8d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  cVar1 = *(char *)((int)this + 0x33da);
  *(char *)((int)this + 0x33da) = (char)param_1;
  if (cVar1 != (char)param_1) {
    uVar2 = F_00774820(this GEN_EDX_FWD);
  }
  return uVar2;
}

/* ref: FUN_007d8d70 */
GEN_FRAME byte GEN_STDCALL F_007d8d70(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x7d8d70u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  byte bVar1;
  
  if ((*param_1 == 0xebf9) &&
     ((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_3 <= *(float *)&REFG(undefined, 0x1088114)))) {
    bVar1 = F_007743e0(param_1,param_2,param_3,0);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_007d8db0 */
GEN_FRAME byte GEN_STDCALL F_007d8db0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x7d8db0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  byte bVar1;
  
  if ((*param_1 == 0xec69) &&
     ((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_3 <= *(float *)&REFG(undefined, 0x1088114)))) {
    bVar1 = F_007743e0(param_1,param_2,param_3,1);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_007d8df0 */
GEN_FRAME byte GEN_THISCALL F_007d8df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7d8df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*param_2 != 0) {
    bVar1 = F_00b070e0();
    if (bVar1 != 0) {
      uVar3 = (uint)*param_2;
      pvVar2 = (undefined *)F_00b070f0();
      uVar3 = F_00b084c0(pvVar2 GEN_EDX_ARG,uVar3);
      if (uVar3 != 0) {
        uVar4 = (uint)*param_2;
        pvVar2 = (undefined *)F_00b070f0();
        bVar1 = F_00b08860(pvVar2 GEN_EDX_ARG,uVar4);
        uVar4 = (uint)bVar1;
        uVar7 = 0x23;
        pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
        uVar4 = F_00461bb0(pvVar2 GEN_EDX_ARG,uVar7,uVar4);
        uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s %s",uVar4,param_3);
        F_0042ccf0(param_1 GEN_EDX_ARG,uVar4);
        F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        bVar1 = F_00b07f50(uVar3 GEN_EDX_ARG);
        if (bVar1 != 0) {
          uVar3 = (uint)*param_2;
          pvVar2 = (undefined *)F_00b070f0();
          uVar6 = F_00b08810(pvVar2 GEN_EDX_ARG,uVar3);
          uVar3 = F_00476000();
          iVar5 = (int)uVar6 - uVar3;
          uVar7 = 0x21;
          pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)))
          ;
          uVar3 = F_00462440(pvVar2 GEN_EDX_ARG,iVar5,uVar7);
          uVar3 = F_0042a990(uVar3 GEN_EDX_ARG);
          uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),(*(undefined * PTR32 (*)[1])REFP(0x10c01f4)),uVar3);
          F_0042e360(param_1 GEN_EDX_ARG,uVar3);
          F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
        return 1;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_007d8f20 */
GEN_FRAME uint F_007d8f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7d8f20u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_c;
  uint local_8;
  
  iVar4 = 0;
  if (param_2 != 0) {
    local_c = 0;
    local_8 = 0;
    do {
      uVar3 = 1 << ((byte)iVar4 & 0x1f);
      if ((param_2 & uVar3) != 0) {
        bVar1 = F_00ab5430(&REFG(undefined, 0x14b5268) GEN_EDX_ARG,param_1 & 0xffff,iVar4);
        if (bVar1 != 0) {
          local_c = local_c | uVar3;
          local_8 = local_8 + 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x20);
    uVar2 = 0;
    uVar3 = 1;
    iVar4 = 0x20;
    do {
      if ((param_2 & uVar3) != 0) {
        uVar2 = uVar2 + 1;
      }
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    if (local_8 < uVar2) {
      return local_c;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_007d8fa0 */
GEN_NOFRAME uint GEN_THISCALL F_007d8fa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d8fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x339c) = *(undefined4 *)((int)this + 0x338c);
  uVar1 = F_00ab1e70(*(undefined4 *)((int)this + 0x338c));
  if (uVar1 != 0) {
    *(uint *)((int)this + 0x33ac) = (uint)*(byte *)(uVar1 + 0x20);
  }
  *(undefined4 *)((int)this + 0x3398) = *(undefined4 *)((int)this + 0x3388);
  *(undefined4 *)((int)this + 0x33a0) = *(undefined4 *)((int)this + 0x3390);
  F_0042ccf0((undefined *)((int)this + 0xf0) GEN_EDX_ARG,(int)this + 0x9c);
  *(undefined4 *)((int)this + 0x337c) = *(undefined4 *)((int)this + 0x3380);
  uVar1 = F_0042ccf0((undefined *)((int)this + 0x144) GEN_EDX_ARG,(int)this + 0x198);
  *(undefined4 *)((int)this + 0x33a4) = *(undefined4 *)((int)this + 0x3394);
  return uVar1;
}

/* ref: FUN_007d9020 */
GEN_FRAME unsigned int F_007d9020(unsigned int gen_a0)
{
  GEN_ENTER(0x7d9020u, gen_a0, 0u, 0u, 0u);
  if (((REFG(int, 0x1370b90) != 0) && ((*(int *)&gen_a0) != 0)) && (*(int *)((*(int *)&gen_a0) + 0x4078) != -1)) {
    *(undefined1 *)((*(int *)&gen_a0) + 0x33e1) = 1;
  }
  return;
}

/* ref: FUN_007d9050 */
GEN_FRAME uint GEN_THISCALL F_007d9050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d9050u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4374));
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentMarker::vf1 */
GEN_FRAME uint GEN_THISCALL F_007d9070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7d9070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * puVar1;
  undefined * this_00;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if ((*param_2 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    break;
  case 1: ;
    if ((param_2[0x18] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x1c);
    }
    puVar1 = (uint *)F_00ab28d0(uVar2);
    if (puVar1 != (uint *)0x0) {
      iVar3 = (*puVar1 & 0xffffff) + (int)puVar1;
      uVar4 = puVar1[1];
      uVar5 = 0x800;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x54))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
      F_00434720(this_00 GEN_EDX_ARG,uVar4,iVar3,uVar5,uVar2);
    }
  default: ;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    *(undefined4 *)(this + 8) = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return (uint)param_1;
  }
  if ((param_2[0x18] & 0xf) != 0) {
    F_00774ac0(*(undefined4 *)(param_2 + 0x1c));
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  }
  F_00774ac0(0);
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentMonsterNote::vf11 */
GEN_NOFRAME byte GEN_THISCALL F_007d9160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d9160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
  if ((*(int *)(uVar1 + 0x18) != 0) &&
     ((~(byte)((uint)**((undefined4 * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) >> 8) & 1) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_007d9190 */
GEN_FRAME uint GEN_THISCALL F_007d9190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d9190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 uVar1;
  char cVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  char cVar4;
  int iVar5;
  
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  *(char *)((int)this + 0x21) = (char)param_1;
  cVar4 = (char)param_2;
  cVar2 = (char)param_1;
  do {
    if (cVar2 < '\b') {
      *(undefined1 *)((int)this + 0x20) =
           *(undefined1 *)(&REFG(undefined4, 0x10c0218) + *(char *)((int)this + 0x21));
      *(char *)((int)this + 0x22) = (char)uVar3;
      return uVar3;
    }
    *(char *)((int)this + 0x20) = cVar4;
    uVar3 = F_00ab3960((int)cVar4);
    if (uVar3 != 0) {
      uVar1 = *(undefined1 *)(uVar3 + 0x14);
      *(undefined1 *)((int)this + 0x22) = uVar1;
      return CONCAT31((int3)(uVar3 >> 8),uVar1);
    }
    uVar3 = F_00435250((uint)REFG(undefined1, 0x14ab0d4),0);
    iVar5 = 0;
    do {
      if ((&REFG(undefined4, 0x10c0218))[(int)(iVar5)] == uVar3) {
        uVar3 = CONCAT31((int3)(uVar3 >> 8),(char)iVar5);
        if (-1 < (char)iVar5) goto LAB_007d91f8;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
    uVar3 = F_00774d60((uint)REFG(undefined1, 0x14ab14e),0);
LAB_007d91f8: ;
    cVar4 = '\0';
    cVar2 = (char)uVar3;
    *(char *)((int)this + 0x21) = cVar2;
  } while( true );
}

/* ref: FUN_007d9230 */
GEN_FRAME uint GEN_THISCALL F_007d9230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d9230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = *(char *)((int)this + 0x21);
  if ('\a' < cVar3) {
    cVar3 = '\x01';
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),REFG(undefined1, 0x14ab29a));
    if (REFG(undefined1, 0x14ab29a) != 0) {
      iVar2 = 0;
      do {
        if (*(uint *)(&REFG(undefined1, 0x10c0244) + iVar2 * 4) == (uint)REFG(undefined1, 0x14ab29a)) {
          cVar3 = (char)iVar2 + '\b';
          (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),cVar3);
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
    }
    F_007d9190(this GEN_EDX_FWD,(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)));
    uVar1 = (('\a' < cVar3) - 1 & 0xfff0e4d0) + 1000000;
    *(uint *)((int)this + 0x1c) = uVar1;
    return uVar1;
  }
  uVar1 = F_00435250((uint)REFG(undefined1, 0x14ab0d4),0);
  if ((&REFG(undefined4, 0x10c0218))[(int)(*(char *)((int)this + 0x21))] != uVar1) {
    iVar2 = 0;
    do {
      if ((&REFG(undefined4, 0x10c0218))[(int)(iVar2)] == uVar1) {
        cVar3 = (char)iVar2;
        if (-1 < cVar3) goto LAB_007d928f;
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    uVar1 = F_00774d60((uint)REFG(undefined1, 0x14ab14e),0);
    cVar3 = (char)uVar1;
  }
LAB_007d928f: ;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),cVar3);
  uVar1 = F_007d9190(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x8)),0);
  *(undefined4 *)((int)this + 0x1c) = 10000;
  return uVar1;
}

/* ref: FUN_007d9310 */
GEN_FRAME uint GEN_THISCALL F_007d9310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d9310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  in_ecx[4] = (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x10d43d4));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d43c4));
  in_ecx[4] = (*(undefined * PTR32 (*)[2])REFP(0x10d43b8));
  in_ecx[5] = 0;
  in_ecx[6] = 4;
  F_0042b630(in_ecx + 7 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x1c GEN_EDX_ARG);
  in_ecx[0x31] = 0;
  *(undefined1 *)(in_ecx + 0x32) = 0xff;
  *(undefined2 *)((int)in_ecx + 0xca) = 0;
  in_ecx[0x33] = 0;
  puVar1 = in_ecx + 0x98;
  param_2 = 4;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar1 + 1 GEN_EDX_ARG);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x66) = 0;
    puVar1 = puVar1 + 0x1a;
    param_2 = param_2 - 1;
  } while (-1 < param_2);
  *(undefined1 *)(in_ecx + 0x11a) = 0;
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentNpcTrade::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_007d93d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d93d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_0042aca0(this + 0x1c GEN_EDX_FWD);
  uVar2 = F_0042aca0(this + 0x70 GEN_EDX_ARG);
  iVar1 = *(int *)(this + 0x14);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x14) = 0;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3 GEN_EDX_ARG,iVar1,0);
  }
  *(undefined4 *)(this + 0xcc) = 0;
  if (*(int *)(this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar2;
}

/* ref: FUN_007d9440 */
GEN_FRAME uint GEN_THISCALL F_007d9440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d9440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = F_00ab24a0(param_1);
  if ((uVar2 != 0) && (*(byte *)(uVar2 + 0xa6) != 0)) {
    uVar2 = F_00ab25a0((uint)*(byte *)(uVar2 + 0xa6));
    if (uVar2 != 0) {
      iVar4 = 0;
      do {
        if ('\0' < *(char *)(uVar2 + 4 + iVar4)) goto LAB_007d9484;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0xe);
    }
    iVar4 = -1;
LAB_007d9484: ;
    uVar2 = F_00434e40(iVar4);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
    if (*(undefined * PTR32 *)(uVar3 + 0x130) != (undefined *)0x0) {
      bVar1 = F_0076a850(*(undefined * PTR32 *)(uVar3 + 0x130) GEN_EDX_ARG,param_1,uVar2);
      if (bVar1 != 0) {
        return uVar2;
      }
    }
  }
  return 0xffffffff;
}

/* ref: FUN_007d94d0 */
GEN_FRAME uint GEN_THISCALL F_007d94d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7d94d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  undefined4 * this_01;
  int * piVar7;
  int iVar8;
  ulonglong uVar9;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[2]);
  iVar8 = (*(int *)&gen_args[1]);
  (*(uint *)(gen_frame + 0x258)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x25c);
  uVar2 = F_00b9f960(&REFG(undefined, 0x14b0f2c) GEN_EDX_FWD);
  F_009222f0(((byte *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar2);
  uVar2 = (uint)((byte *)(gen_frame + 0x10))[0];
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) = uVar2;
  if (*((uint *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0xdc))) != uVar2) {
    *((uint *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0xdc))) = uVar2;
    *(undefined1 *)(iVar8 + 0x1d) = 1;
  }
  (*(int *)(gen_frame + 0x0)) = 0;
  if (0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4)))) {
    (*(int *)(gen_frame + 0xc)) = 0x1ac;
    (*(int *)(gen_frame + 0x8)) = 0xec;
    piVar7 = ((int *)(gen_frame + 0x14));
    do {
      iVar1 = piVar7[2];
      if ((char)piVar7[0x18] == '\0') {
        iVar3 = *piVar7;
      }
      else {
        iVar3 = *piVar7 + 1000000;
      }
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) == 2) {
        uVar2 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,iVar3,0,1,1);
      }
      else {
        uVar2 = piVar7[1];
      }
      uVar6 = -(uint)(*(char *)((int)piVar7 + 0x72) != '\0') & 5;
      uVar4 = F_0042a990(piVar7 + 3 GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) - 0xc + *(int *)(iVar8 + 0x20)))) != iVar1) {
        *((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) - 0xc + *(int *)(iVar8 + 0x20)))) = iVar1;
        *(undefined1 *)(iVar8 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) - 8 + *(int *)(iVar8 + 0x20)))) != uVar2) {
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) - 8 + *(int *)(iVar8 + 0x20)))) = uVar2;
        *(undefined1 *)(iVar8 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + *(int *)(iVar8 + 0x20)))) != uVar6) {
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + *(int *)(iVar8 + 0x20)))) = uVar6;
        *(undefined1 *)(iVar8 + 0x1d) = 1;
      }
      F_00431250(this_00 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)) + 0xc,uVar4,0,1,0);
      piVar5 = ((int *)GEN_TOP((*(int *)(iVar8 + 0x20) + (*(int *)(gen_frame + 0xc)))));
      if (*piVar5 != iVar3) {
        *piVar5 = iVar3;
        *(undefined1 *)(iVar8 + 0x1d) = 1;
      }
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 4;
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x14;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      piVar7 = piVar7 + 0x1d;
    } while ((*(int *)(gen_frame + 0x0)) < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))));
  }
  iVar8 = 4;
  this_01 = &(*(int *)&gen_args[1]);
  do {
    this_01 = this_01 - 0x1d;
    uVar9 = F_0042c880(this_01 GEN_EDX_ARG);
    iVar8 = iVar8 - 1;
  } while (-1 < iVar8);
  F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c) GEN_EDX_ARG);
  return (uint)uVar9;
}

/* ref: FUN_007d96b0 */
GEN_FRAME uint GEN_THISCALL F_007d96b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7d96b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d442c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d441c));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0xb;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(undefined2 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined2 *)((int)this + 0x48) = 0x101;
  return (uint)this;
}

/* ref: FUN_007d9710 */
GEN_NOFRAME uint GEN_THISCALL F_007d9710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d9710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  piVar2 = *(int * PTR32 *)(uVar1 + 0x24);
  if (piVar2 != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2 GEN_EDX_ARG);
    if (((char)uVar1 != '\0') && (uVar1 = piVar2[0x82], uVar1 == *(uint *)((int)this + 8))) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
    }
  }
  if (*(int *)((int)this + 0x24) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x24),0);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  if (*(int *)((int)this + 0x28) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x28),0);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  if (*(int *)((int)this + 0x2c) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x2c),0);
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    uVar1 = F_00a70580(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return uVar1;
}

/* ref: FUN_007d97c0 */
GEN_FRAME uint GEN_THISCALL F_007d97c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7d97c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  uint uVar5;
  ushort * puVar6;
  uint * puVar7;
  undefined * pvVar8;
  undefined * puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint * puVar13;
  int * piVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_10;
  
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_ARG,0x1a);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG,0x17)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3 GEN_EDX_ARG,0);
  if ((((*(int *)((int)this + 0x10) == 0) || (uVar4 == 0)) || (this_00 == (undefined *)0x0)) ||
     (uVar5 == 0)) {
    return 0;
  }
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
  if ((char)uVar5 != '\0') {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
    piVar3 = *(int * PTR32 *)(uVar5 + 0x24);
    if (((piVar3 != (int *)0x0) &&
        (uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3 GEN_EDX_ARG), (char)uVar5 != '\0')) &&
       (piVar3[0x82] == *(int *)((int)this + 8))) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG);
    }
  }
  piVar3 = (int *)F_00a67930(*(undefined4 *)((int)this + 0x10) GEN_EDX_ARG);
  puVar6 = (ushort *)F_00a67950(*(undefined4 *)((int)this + 0x10) GEN_EDX_ARG);
  puVar7 = (uint *)F_00a67940(*(undefined4 *)((int)this + 0x10) GEN_EDX_ARG);
  local_24 = 0;
  if (*puVar6 != 0) {
    local_24 = *puVar6 - 1;
  }
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12e8))) != *piVar3) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12e8))) = *piVar3;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  uVar5 = F_00775040(this GEN_EDX_ARG);
  *(uint *)((int)this + 0x20) = uVar5;
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1220))) != uVar5) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1220))) = uVar5;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1224))) != (uint)*(ushort *)(piVar3 + 0x45)) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1224))) = (uint)*(ushort *)(piVar3 + 0x45);
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  uVar5 = (uint)*(ushort *)(piVar3 + 0x45);
  if (*(ushort *)(piVar3 + 0x45) == 0) {
    puVar9 = &REFG(undefined, 0x10be087);
  }
  else {
    uVar15 = 0x23;
    pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    puVar9 = (undefined *)F_00461bb0(pvVar8 GEN_EDX_ARG,uVar15,uVar5);
  }
  F_00431250(this_00 GEN_EDX_ARG,0x361,puVar9,0,1,0);
  uVar5 = (uint)((char)piVar3[0x4f] != '\0');
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1228))) != uVar5) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1228))) = uVar5;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  uVar5 = F_0042a990(piVar3 + 1 GEN_EDX_ARG);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc80)))) {
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc80))) = uVar5;
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1234))) != piVar3[0x4e]) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1234))) = piVar3[0x4e];
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1238))) != piVar3[0xac]) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1238))) = piVar3[0xac];
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12ec))) != piVar3[0xad]) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12ec))) = piVar3[0xad];
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12f8))) != piVar3[0xab]) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12f8))) = piVar3[0xab];
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  uVar5 = F_0042a990(puVar6 + local_24 * 0x2c + 2 GEN_EDX_ARG);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc88)))) {
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc88))) = uVar5;
  uVar5 = F_0042a990(piVar3 + 0x16 GEN_EDX_ARG);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc84)))) {
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc84))) = uVar5;
  if (piVar3[0x4d] == 0) {
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x122c))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x122c))) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1230))) == piVar3[0x4c]) goto LAB_007d9ac4;
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1230))) = piVar3[0x4c];
  }
  else {
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x122c))) != piVar3[0x4c]) {
      *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x122c))) = piVar3[0x4c];
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    uVar5 = F_00a67ce0(piVar3[0x4d],(uint)*(byte *)(piVar3 + 0xb3),
                         (uint)*(byte *)((int)piVar3 + 0x12e));
    if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1230))) == uVar5) goto LAB_007d9ac4;
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1230))) = uVar5;
  }
  *(undefined1 *)(uVar4 + 0x1d) = 1;
LAB_007d9ac4: ;
  uVar17 = 0;
  uVar16 = 0;
  uVar15 = 0x1ca;
  pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar5 = F_0043bd00(pvVar8 GEN_EDX_ARG,uVar15,uVar16,uVar17);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc8c)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xc8c))) = uVar5;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  iVar11 = piVar3[0x46];
  iVar2 = piVar3[0x47] - iVar11 >> 0x1f;
  uVar5 = 0;
  if ((piVar3[0x47] - iVar11) / 0x54 + iVar2 != iVar2) {
    local_18 = 0;
    local_1c = 0xd64;
    do {
      uVar10 = F_0042a990(local_18 + iVar11 GEN_EDX_ARG);
      puVar13 = ((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + local_1c)));
      if (uVar10 != *puVar13) {
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      *puVar13 = uVar10;
      iVar11 = piVar3[0x46];
      local_18 = local_18 + 0x54;
      local_1c = local_1c + 4;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((piVar3[0x47] - iVar11) / 0x54));
  }
  iVar11 = (piVar3[0x47] - piVar3[0x46]) / 0x54;
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12f4))) != iVar11) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12f4))) = iVar11;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  uVar17 = 0;
  uVar16 = 0;
  uVar15 = 0x1d3;
  pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar5 = F_0043bd00(pvVar8 GEN_EDX_ARG,uVar15,uVar16,uVar17);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xd54)))) {
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xd54))) = uVar5;
  uVar16 = 0;
  iVar11 = (-(uint)(*(int *)((int)this + 0x20) != 7) & 0xffffffc7) + 0x20e;
  uVar15 = 0;
  pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar5 = F_0043bd00(pvVar8 GEN_EDX_ARG,iVar11,uVar15,uVar16);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xd58)))) {
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xd58))) = uVar5;
  if (*(int *)((int)this + 0x20) == 6) {
    iVar11 = 0x1d6;
  }
  else {
    iVar11 = (-(uint)(*(int *)((int)this + 0x20) != 7) & 0xffffffc7) + 0x20d;
  }
  uVar16 = 0;
  uVar15 = 0;
  pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar5 = F_0043bd00(pvVar8 GEN_EDX_ARG,iVar11,uVar15,uVar16);
  if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xd5c)))) {
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0xd5c))) = uVar5;
  local_1c = 0;
  if (*(int *)((int)this + 0x30) == 0) {
    uVar5 = *puVar7;
  }
  else {
    uVar5 = 0;
  }
  local_18 = 0;
  if (uVar5 != 0) {
    uVar10 = 0xc90;
    puVar13 = puVar7 + 3;
    do {
      if (puVar13[0x15] == puVar7[1]) {
        if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x5b0 + uVar10))) != (uint)(byte)puVar13[-1]) {
          *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x5b0 + uVar10))) = (uint)(byte)puVar13[-1];
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar12 = F_0042a990(puVar13 GEN_EDX_ARG);
        if (uVar12 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + uVar10)))) {
          *(undefined1 *)((int)this_00 + 0x1d) = 1;
        }
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + uVar10))) = uVar12;
        uVar12 = F_0042a990(puVar13 + 0x16 GEN_EDX_ARG);
        puVar1 = ((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x14 + uVar10)));
        if (uVar12 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x14 + uVar10)))) {
          *(undefined1 *)((int)this_00 + 0x1d) = 1;
        }
        local_1c = local_1c + 1;
        uVar10 = uVar10 + 4;
        *puVar1 = uVar12;
        if (0xca3 < uVar10) break;
      }
      local_18 = local_18 + 1;
      puVar13 = puVar13 + 99;
    } while (local_18 < uVar5);
  }
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x123c))) != local_1c) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x123c))) = local_1c;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  local_20 = 0;
  uVar5 = local_24;
  if (*(int *)((int)this + 0x30) != 0) {
    uVar5 = (uint)*puVar6;
  }
  if (1 < uVar5) {
    puVar6 = puVar6 + 0x2e;
    local_20 = uVar5 - 1;
    iVar11 = 0xcf4;
    local_28 = local_20;
    do {
      uVar5 = F_0042a990(puVar6 GEN_EDX_ARG);
      if (uVar5 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + iVar11)))) {
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + iVar11))) = uVar5;
      iVar11 = iVar11 + 4;
      puVar6 = puVar6 + 0x2c;
      local_28 = local_28 - 1;
    } while (local_28 != 0);
  }
  if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12f0))) != local_20) {
    *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12f0))) = local_20;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  if (*(int *)((int)this + 0x30) == 0) {
    uVar5 = (uint)*(byte *)(piVar3 + 0xb4);
  }
  else {
    uVar5 = 0;
  }
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1254))) != uVar5) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1254))) = uVar5;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  local_24 = 0;
  if (uVar5 != 0) {
    iVar11 = 0x126c;
    piVar14 = piVar3 + 0xcd;
    do {
      if (*((int *)GEN_TOP((iVar11 - 0x14 + *(int *)(uVar4 + 0x20)))) != piVar14[1]) {
        *((int *)GEN_TOP((iVar11 - 0x14 + *(int *)(uVar4 + 0x20)))) = piVar14[1];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar11))) != *piVar14) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar11))) = *piVar14;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      uVar17 = 0;
      uVar16 = 1;
      uVar15 = 0;
      uVar10 = F_0042a990(piVar14 - 0x17 GEN_EDX_ARG);
      F_00431250(this_00 GEN_EDX_ARG,local_24 + 0x333,uVar10,uVar15,uVar16,uVar17);
      if (*((int *)GEN_TOP((iVar11 + 0x28 + *(int *)(uVar4 + 0x20)))) != piVar14[-2]) {
        *((int *)GEN_TOP((iVar11 + 0x28 + *(int *)(uVar4 + 0x20)))) = piVar14[-2];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((iVar11 + 0x14 + *(int *)(uVar4 + 0x20)))) != piVar14[-1]) {
        *((int *)GEN_TOP((iVar11 + 0x14 + *(int *)(uVar4 + 0x20)))) = piVar14[-1];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      local_24 = local_24 + 1;
      piVar14 = piVar14 + 0x1b;
      iVar11 = iVar11 + 4;
    } while (local_24 < uVar5);
  }
  if (*(int *)((int)this + 0x30) == 0) {
    local_10 = (uint)*(byte *)((int)piVar3 + 0x2d1);
  }
  else {
    local_10 = 0;
  }
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12a8))) != local_10) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12a8))) = local_10;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  local_24 = 0;
  if (local_10 != 0) {
    iVar11 = 0x12c0;
    piVar14 = piVar3 + 0x152;
    do {
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) - 0x14 + iVar11))) != piVar14[2]) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) - 0x14 + iVar11))) = piVar14[2];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar11))) != *piVar14) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar11))) = *piVar14;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14 + iVar11))) != piVar14[1]) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14 + iVar11))) = piVar14[1];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      uVar17 = 0;
      uVar16 = 1;
      uVar15 = 0;
      uVar5 = F_0042a990(piVar14 - 0x15 GEN_EDX_ARG);
      F_00431250(this_00 GEN_EDX_ARG,local_24 + 0x338,uVar5,uVar15,uVar16,uVar17);
      local_24 = local_24 + 1;
      piVar14 = piVar14 + 0x1b;
      iVar11 = iVar11 + 4;
    } while (local_24 < local_10);
  }
  if (*(int *)((int)this + 0x30) == 0) {
    uVar5 = (uint)*(byte *)((int)piVar3 + 0x2d2);
  }
  else {
    uVar5 = 0;
  }
  if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12fc))) != uVar5) {
    *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x12fc))) = uVar5;
    *(undefined1 *)(uVar4 + 0x1d) = 1;
  }
  local_24 = 0;
  if (uVar5 != 0) {
    iVar11 = 0x1310;
    piVar3 = piVar3 + 0x1db;
    do {
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) - 0x10 + iVar11))) != piVar3[1]) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) - 0x10 + iVar11))) = piVar3[1];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar11))) != *piVar3) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar11))) = *piVar3;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10 + iVar11))) != piVar3[-2]) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10 + iVar11))) = piVar3[-2];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x20 + iVar11))) != piVar3[-1]) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x20 + iVar11))) = piVar3[-1];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      uVar17 = 0;
      uVar16 = 1;
      uVar15 = 0;
      uVar10 = F_0042a990(piVar3 - 0x17 GEN_EDX_ARG);
      F_00431250(this_00 GEN_EDX_ARG,local_24 + 0x362,uVar10,uVar15,uVar16,uVar17);
      local_24 = local_24 + 1;
      piVar3 = piVar3 + 0x1b;
      iVar11 = iVar11 + 4;
    } while (local_24 < uVar5);
  }
  return 8;
}

/* ref: FUN_007da030 */
GEN_FRAME uint GEN_THISCALL F_007da030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7da030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    piVar2 = (int *)F_00a74510(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_FWD);
    piVar6 = (int *)piVar2[4];
    uVar3 = piVar2[5] - (int)((int)(uintptr_t)piVar6) >> 2;
    if ((piVar2[1] - *piVar2) / 0x54 == uVar3) {
      uVar7 = 0;
      iVar4 = 0;
      if (uVar3 != 0) {
        do {
          iVar1 = *piVar6;
          iVar5 = iVar4;
          if (((iVar1 != 0x17) && (iVar1 != 0x19)) && ((iVar1 != 0x1a || ((REFG(undefined1, 0x14ab150) & 1) != 0)))
             ) {
            iVar5 = iVar4 + 1;
            if (iVar4 == param_1) {
              return iVar1 - 1;
            }
          }
          uVar7 = uVar7 + 1;
          piVar6 = piVar6 + 1;
          iVar4 = iVar5;
        } while (uVar7 < uVar3);
      }
    }
  }
  return 1;
}

/* ref: Client::UI2::Agent::AgentQuestJournal::vf11 */
GEN_NOFRAME byte GEN_THISCALL F_007da0c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7da0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
  if ((*(int *)(uVar1 + 0x18) != 0) &&
     ((~(byte)(**((uint * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) >> 4) & 1) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_007da110 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007da110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7da110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0xf6) != '\0') {
    if (*(int *)((int)this + 0x18) != 0) {
      F_00a3d7c0(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x10),
                   (uint)*(ushort *)((int)this + 0x14));
    }
    *(undefined4 *)((int)this + 0x10) = 9999;
    *(undefined2 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  return;
}

/* ref: Client::UI2::Agent::AgentRecipeNote::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_007da150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7da150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  F_00a712e0(&REFG(undefined, 0x14ab790) GEN_EDX_FWD);
  uVar1 = F_007752e0(this GEN_EDX_ARG);
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_007da190 */
GEN_FRAME uint GEN_THISCALL F_007da190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7da190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar3 = (uint)*(byte *)(REFG(int, 0x1379694) + 0x1689);
  (*(int *)(gen_frame + 0x4)) = (int)this + 0x128;
  F_007c9ad0((int)this + 0x128,(int)this + 0x17c,&(*(uint *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x8)));
  (*(uint *)(gen_frame + 0x8)) = (uint)REFG(undefined2, 0x14ab148);
  if (REFG(undefined2, 0x14ab148) != 0) {
    uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0xffffffff,0);
    if ((ushort)(*(uint *)(gen_frame + 0x8)) < (ushort)uVar2) {
      bVar1 = 1;
      goto LAB_007da1f9;
    }
  }
  bVar1 = 0;
LAB_007da1f9: ;
  uVar2 = (uint)bVar1;
  uVar5 = 0;
  uVar4 = 0x178;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar3 = F_00461d60(this_00 GEN_EDX_ARG,uVar4,uVar3,uVar5,uVar2);
  F_005aa640((undefined *)(param_1 + 0x50) GEN_EDX_ARG,uVar3);
  uVar3 = F_0042a990((int)this + 0x17c GEN_EDX_ARG);
  F_005a2710((undefined *)(param_1 + 0x58) GEN_EDX_ARG,6);
  *(uint *)(param_1 + 0x5c) = uVar3;
  uVar3 = F_0042a990((*(int *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_005a2710((undefined *)(param_1 + 0x60) GEN_EDX_ARG,6);
  *(uint *)(param_1 + 100) = uVar3;
  F_005a2710((undefined *)(param_1 + 0x48) GEN_EDX_ARG,4);
  *(uint *)(param_1 + 0x4c) = (*(uint *)(gen_frame + 0x0));
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_007da270 */
GEN_NOFRAME uint GEN_THISCALL F_007da270(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7da270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint * puVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG,0x19)));
  if (this_00 != (undefined *)0x0) {
    iVar4 = 0;
    do {
      puVar2 = (uint *)F_00ab2e40(iVar4);
      if (puVar2 == (uint *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*puVar2 & 0xffffff) + (int)puVar2;
      }
      F_00431250(this_00 GEN_EDX_ARG,iVar4 + 0x94,iVar3,0,1,0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    return 0x10;
  }
  return 0;
}

/* ref: FUN_007da2e0 */
GEN_FRAME uint GEN_THISCALL F_007da2e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7da2e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint * puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint local_8;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2 GEN_EDX_ARG,0x1c);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG,0x19)));
  if (((uVar3 != 0) && (this_00 != (undefined *)0x0)) && (*(int *)((int)this + 0x22c) != 0)) {
    uVar5 = (uint)*((byte *)GEN_TOP((REFG(int, 0x14ab7d0) + 0xd + *(int *)((int)this + 0x230))));
    if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 8))) != uVar5) {
      *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 8))) = uVar5;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    iVar8 = 0;
    if (uVar5 != 0) {
      local_8 = 0x10;
      do {
        puVar4 = (uint *)F_00ab2f00(iVar8);
        if (puVar4 == (uint *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (*puVar4 & 0xffffff) + (int)puVar4;
        }
        F_00431250(this_00 GEN_EDX_ARG,iVar8,iVar6,0,1,0);
        bVar1 = F_00a690e0(*(undefined4 *)((int)this + 0x230),iVar8);
        if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_8))) != (uint)bVar1) {
          *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_8))) = (uint)bVar1;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        local_8 = local_8 + 4;
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)uVar5);
    }
    uVar7 = 0;
    if (uVar5 != 0) {
      local_8 = (uint)*((byte *)GEN_TOP((REFG(int, 0x14ab7d0) + 0x15 + *(int *)((int)this + 0x230))));
      if (4 < local_8) {
        local_8 = 4;
      }
      uVar7 = local_8;
      if (local_8 != 0) {
        iVar8 = 0x9d;
        uVar9 = local_8;
        do {
          puVar4 = (uint *)F_00ab2f00(iVar8 + 0x34b);
          if (puVar4 == (uint *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = (*puVar4 & 0xffffff) + (int)puVar4;
          }
          F_00431250(this_00 GEN_EDX_ARG,iVar8,iVar6,0,1,0);
          iVar8 = iVar8 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x7ec))) != uVar7) {
      *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x7ec))) = uVar7;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    return (uint)(uVar5 != 0);
  }
  return 0;
}

/* ref: FUN_007da470 */
GEN_FRAME uint GEN_THISCALL F_007da470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7da470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint * puVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  byte * pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0xe07;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar3 = F_0043bd00(this_00 GEN_EDX_ARG,uVar8,uVar9,uVar10);
  if (uVar3 != *((uint *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x288)))) {
    *((uint *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x288))) = uVar3;
    *(undefined1 *)(param_3 + 0x1d) = 1;
  }
  uVar3 = (uint)*(byte *)((int)this + 0x104) << 0x10 | 1;
  if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 4))) != uVar3) {
    *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 4))) = uVar3;
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  bVar2 = F_00775500(this GEN_EDX_ARG,param_1,0);
  if (bVar2 == 0) {
    return 0;
  }
  uVar3 = F_00a68de0(param_1 GEN_EDX_ARG);
  if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x708))) != uVar3) {
    *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x708))) = uVar3;
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  if (**(int * PTR32 *)((int)param_1 + 0x40) == 0) {
    return 8;
  }
  iVar6 = 0;
  iVar7 = 0x1cd;
  pbVar4 = ((byte *)GEN_TOP((*(int *)((int)this + 0x238) * 0x444 + **(int * PTR32 *)((int)param_1 + 0x40) + 0x6e)));
  do {
    if (*(int *)(pbVar4 - 10) != 0) {
      if ((*pbVar4 & 1) != 0) {
        if (*(char *)((int)this + 0x106) == '\0') {
          return 8;
        }
        if (*(int *)(pbVar4 - 10) < 1) {
          return 8;
        }
        iVar6 = *(int *)((int)this + 0x28);
        if (iVar6 - 1000000U < 1000000) {
          iVar6 = iVar6 - 1000000;
        }
        if (iVar6 != *(int *)(pbVar4 - 10)) {
          return 8;
        }
        puVar1 = (uint *)((int)this + 0x20);
        if (puVar1 == (uint *)0x0) {
          return 8;
        }
        if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar7 * 4))) != *(int *)((int)this + 0x28)) {
          *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar7 * 4))) = *(int *)((int)this + 0x28);
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        uVar3 = F_00775290((undefined *)((int)this + 0x10) GEN_EDX_ARG,puVar1);
        if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 4 + iVar7 * 4))) != uVar3) {
          *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 4 + iVar7 * 4))) = uVar3;
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        uVar3 = *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x14 + iVar7 * 4)));
        uVar5 = uVar3 | 2;
        if (uVar3 != uVar5) {
          *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x14 + iVar7 * 4))) = uVar5;
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        uVar3 = (int)*(short *)((int)this + 0x24) << 0x10 | *puVar1;
        puVar1 = ((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x18 + iVar7 * 4)));
        if (*puVar1 == uVar3) {
          return 8;
        }
        *puVar1 = uVar3;
        *(undefined1 *)(param_2 + 0x1d) = 1;
        return 8;
      }
      iVar7 = iVar7 + 7;
    }
    iVar6 = iVar6 + 1;
    pbVar4 = pbVar4 + 0x70;
    if (5 < iVar6) {
      return 8;
    }
  } while( true );
}

/* ref: FUN_007da600 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007da600(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7da600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (REFG(int, 0x1379694) != 0) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)(REFG(int, 0x1379694) + 0x1688))) {
    case 8: ;
      *(undefined4 *)((int)this + 0x230) = 0;
      break;
    case 9: ;
      *(undefined4 *)((int)this + 0x230) = 1;
      break;
    case 10: ;
      *(undefined4 *)((int)this + 0x230) = 2;
      break;
    case 0xb: ;
      *(undefined4 *)((int)this + 0x230) = 3;
      break;
    case 0xc: ;
      *(undefined4 *)((int)this + 0x230) = 4;
      break;
    case 0xd: ;
      *(undefined4 *)((int)this + 0x230) = 5;
      break;
    case 0xe: ;
      *(undefined4 *)((int)this + 0x230) = 6;
      break;
    case 0xf: ;
      *(undefined4 *)((int)this + 0x230) = 7;
      break;
    default: ;
      if ((*(uint *)((int)this + 0x22c) & 1 << ((byte)*(undefined4 *)((int)this + 0x230) & 0x1f)) ==
          0) {
        uVar2 = 0;
        do {
          if ((*(uint *)((int)this + 0x22c) & 1 << ((byte)uVar2 & 0x1f)) != 0) {
            *(uint *)((int)this + 0x230) = uVar2;
            break;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < 8);
      }
    }
  }
  if (7 < *(int *)((int)this + 0x230)) {
    *(undefined4 *)((int)this + 0x230) = 0;
  }
  iVar1 = *(int *)((int)this + 0x230);
  if (iVar1 < 8) {
    *(int *)((int)this + 0x234) = (int)*(short *)((int)this + iVar1 * 4 + 0x108);
    *(int *)((int)this + 0x238) = (int)*(short *)((int)this + iVar1 * 4 + 0x10a);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentRecipeNote::vf11 */
GEN_NOFRAME byte GEN_THISCALL F_007da720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7da720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
  if ((*(int *)(uVar1 + 0x18) == 0) ||
     ((~(byte)(**((uint * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) >> 9) & 1) != 0)) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    if (((char)uVar1 == '\0') && (REFG(char, 0x14a7365) != '\0')) {
      return 0;
    }
    if (REFG(char, 0x14a7378) == '\0') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007da780 */
GEN_FRAME uint GEN_THISCALL F_007da780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7da780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  
  if (*(char *)((int)this + 0xc) == '\0') {
    uVar4 = F_005a2710((undefined *)(param_1 + 0x670) GEN_EDX_FWD,4);
    *(undefined4 *)(param_1 + 0x674) = 0;
    return uVar4;
  }
  uVar4 = F_007c9ad0((int)this + 0x7c,(int)this + 0xd0,&(*(undefined4 *)(gen_frame + 0x8)),(undefined4 *)((int)this + 0xaac))
  ;
  if (0 < (int)uVar4) {
    uVar1 = *(undefined4 *)((int)this + 0xaac);
    F_005a2710((undefined *)(param_1 + 0x670) GEN_EDX_ARG,4);
    *(undefined4 *)(param_1 + 0x674) = uVar1;
    F_005a2710((undefined *)(param_1 + 0x678) GEN_EDX_ARG,4);
    *(undefined4 *)(param_1 + 0x67c) = (*(undefined4 *)(gen_frame + 0x8));
    uVar4 = F_0042a990((int)this + 0x7c GEN_EDX_ARG);
    F_005a2710((undefined *)(param_1 + 0x680) GEN_EDX_ARG,6);
    *(uint *)(param_1 + 0x684) = uVar4;
    uVar4 = F_0042a990((int)this + 0xd0 GEN_EDX_ARG);
    F_005a2710((undefined *)(param_1 + 0x688) GEN_EDX_ARG,6);
    *(uint *)(param_1 + 0x68c) = uVar4;
    uVar3 = REFG(undefined2, 0x14ab148);
    if ((REFG(undefined2, 0x14ab148) == 0) ||
       (uVar4 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0xffffffff,0), (ushort)uVar4 <= uVar3)) {
      bVar2 = 0;
    }
    else {
      bVar2 = 1;
    }
    uVar4 = F_005a2710((undefined *)(param_1 + 0x690) GEN_EDX_ARG,3);
    *(uint *)(param_1 + 0x694) = (uint)bVar2;
    return uVar4;
  }
  return uVar4;
}

/* ref: FUN_007da890 */
GEN_FRAME uint GEN_THISCALL F_007da890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7da890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d447c));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d4470));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 9999;
  in_ecx[10] = 0xffffffff;
  in_ecx[0xb] = 9999;
  in_ecx[0xc] = 0xffffffff;
  in_ecx[0xd] = 0xffffffff;
  in_ecx[0xe] = 0xffffffff;
  in_ecx[0xf] = 0xffffffff;
  in_ecx[0x10] = 0xffffffff;
  in_ecx[0x11] = 0;
  puVar1 = in_ecx + 0x12;
  param_2 = 0x18;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar1 + 1 GEN_EDX_FWD);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x66) = 0;
    puVar1 = puVar1 + 0x1a;
    param_2 = param_2 - 1;
  } while (-1 < param_2);
  in_ecx[0x2a3] = 0;
  in_ecx[0x2a4] = 0;
  in_ecx[0x2a5] = 0;
  in_ecx[0x2a6] = 0;
  in_ecx[0x2a7] = 0xffffffff;
  in_ecx[0x2a8] = 0;
  param_2 = 0x13;
  puVar1 = in_ecx + 0x2c1;
  do {
    F_0042b630(puVar1 - 0x16 GEN_EDX_ARG);
    F_0042b630(puVar1 GEN_EDX_ARG);
    puVar1 = puVar1 + 0x30;
    param_2 = param_2 - 1;
  } while (-1 < param_2);
  *(undefined1 *)(in_ecx + 0x669) = 0;
  in_ecx[0x66a] = 0;
  in_ecx[0x66b] = 0;
  in_ecx[0x66c] = 0;
  *(undefined1 *)((int)in_ecx + 0x19b6) = 0;
  in_ecx[0x66e] = 0;
  *(undefined2 *)(in_ecx + 0x66d) = 1;
  in_ecx[0x29c] = 0;
  in_ecx[0x29d] = 0;
  in_ecx[0x29e] = 0;
  in_ecx[0x29f] = 0;
  in_ecx[0x2a0] = 0;
  in_ecx[0x2a1] = 0;
  *(undefined1 *)(in_ecx + 0x2a2) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007da9e0 */
GEN_FRAME byte GEN_THISCALL F_007da9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7da9e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  
  if ((((0 < param_2) && (((byte)*param_1 & 0xf) == 3)) && (iVar1 = param_1[1], 0 < iVar1)) &&
     ((*(int *)((int)this + 0x24) != 9999 && (-1 < *(int *)((int)this + 0x28))))) {
    F_00a3d7c0(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,*(int *)((int)this + 0x24),(uint)*(ushort *)((int)this + 0x28));
    if ((*(int *)((int)this + 0x2c) == 9999) || (*(int *)((int)this + 0x30) < 0)) {
      iVar2 = *(int *)((int)this + 0x24);
      if ((iVar2 < 10000) || (0x2716 < *(int *)((int)this + 0x28))) {
        F_00a41810(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,iVar2,(uint)*(ushort *)((int)this + 0x28),iVar1);
      }
      else {
        F_00a418c0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,iVar2,(uint)*(ushort *)((int)this + 0x28),iVar1);
      }
    }
    else {
      F_00a493a0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x24),
                   (uint)*(ushort *)((int)this + 0x28),*(int *)((int)this + 0x2c),
                   (uint)*(ushort *)((int)this + 0x30),iVar1);
    }
  }
  *(undefined4 *)((int)this + 0x19a8) = 0;
  F_007759b0(this GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007daab0 */
GEN_FRAME byte GEN_STDCALL F_007daab0(unsigned int gen_a0)
{
  GEN_ENTER(0x7daab0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  
  uVar2 = F_00ab24a0(*param_1);
  if (uVar2 != 0) {
    this = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x2ee2);
    if (this != (undefined *)0x0) {
      uVar3 = F_00a37da0(this GEN_EDX_ARG,(int)*(short *)(param_1 + 0x2d));
      if (uVar3 != 0) {
        uVar4 = F_00ab65a0(*param_1,uVar2);
        param_1[1] = uVar4;
        uVar4 = F_00ab6240(*param_1,0,uVar2);
        F_0042e430(param_1 + 2 GEN_EDX_ARG,uVar4);
        uVar2 = F_00760640((uint)*(byte *)(uVar2 + 0xa6),uVar3,*(undefined4 *)(uVar2 + 0x28));
        *(short *)((int)param_1 + 0xb6) = (short)uVar2;
        bVar1 = F_007c9be0(param_1 + 0x2e,uVar3);
        *(byte *)(param_1 + 0x2f) = bVar1;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_007dab60 */
GEN_FRAME uint GEN_THISCALL F_007dab60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7dab60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  uint uVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  uint * this_00;
  uint uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  (*(uint *)(gen_frame + 0x138)) = uVar1;
  if (0 < *(int *)((int)this + 0x19b0)) {
    if ((*(uint *)((int)this + 0xa94) == 0) ||
       (*(uint *)((int)this + 0xa90) < *(uint *)((int)this + 0xa94))) {
      *(undefined4 *)((int)this + 0xa94) = 1;
    }
    uVar1 = 0;
    pvVar2 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x24));
    if (pvVar2 != (undefined *)0x0) {
      pvVar2 = (undefined *)F_00a37da0(pvVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x28));
      if ((pvVar2 != (undefined *)0x0) &&
         ((*(char *)((int)pvVar2 + 6) != '\0' || (*(int *)((int)pvVar2 + 8) != 0)))) {
        uVar1 = F_00a3a8a0(pvVar2 GEN_EDX_ARG);
      }
    }
    if ((*(uint *)((int)this + 0xa98) == 0) || (uVar1 < *(uint *)((int)this + 0xa98))) {
      *(uint *)((int)this + 0xa98) = uVar1;
    }
    uVar1 = *(uint *)((int)this + 0xa90) / *(uint *)((int)this + 0xa98);
    if (uVar1 < *(uint *)((int)this + 0xa94)) {
      *(uint *)((int)this + 0xa94) = uVar1;
    }
    uVar6 = *(int *)((int)this + 0xa94) * *(uint *)((int)this + 0xa98);
    F_0042b630(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    F_00775a60(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)),5,((uVar6 / 10) * 5) / 10);
    uVar8 = 0x39f;
    uVar9 = REFG(undefined4, 0x108cc50);
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar6 = F_00461bb0(pvVar2 GEN_EDX_ARG,uVar8,uVar6);
    F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar6,uVar9);
    puVar3 = ((undefined4 *)(gen_frame + 0xb0));
    iVar5 = 0x10;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
    uVar9 = *(undefined4 *)((int)this + 0xa94);
    F_005a2710(((undefined1 *)(gen_frame + 0xd8)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0xdc)) = uVar9;
    F_005a2710(((undefined1 *)(gen_frame + 0xe8)) GEN_EDX_ARG,3);
    uVar9 = *(undefined4 *)((int)this + 0xa98);
    (*(uint *)(gen_frame + 0xec)) = uVar1;
    F_005a2710(((undefined1 *)(gen_frame + 0xf0)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0xf4)) = uVar9;
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    F_005a2710(((undefined1 *)(gen_frame + 0x118)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x11c)) = uVar1;
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    F_005a2710(((undefined1 *)(gen_frame + 0x120)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x124)) = uVar1;
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x19b0),0x11,((undefined4 *)(gen_frame + 0xb0)));
    this_00 = &(*(uint *)(gen_frame + 0x138));
    iVar5 = 0x10;
    do {
      this_00 = this_00 - 2;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
    F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    uVar1 = (uint)uVar7;
  }
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007dad90 */
GEN_FRAME uint GEN_THISCALL F_007dad90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7dad90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1e0];
  uint uVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  uint * this_00;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x1d8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1dc);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  iVar7 = *(int *)(uVar1 + 0x18);
  if (iVar7 == 0) goto LAB_007daf43;
  uVar6 = (param_1 & 0xff) << 0x10;
  if (*(char *)(iVar7 + 0x60) == '\0') goto LAB_007daf43;
  puVar2 = ((undefined4 *)(gen_frame + 0x8));
  iVar5 = 0x36;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar5 = iVar5 - 1;
  } while (-1 < iVar5);
  F_005a2710(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  ((undefined4 *)(gen_frame + 0x8))[1] = 2;
  F_005a2710(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x14)) = uVar6 | 0x24;
  F_005a2710(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,6);
  (*(undefined * PTR32 *)(gen_frame + 0x1b4)) = &REFG(undefined, 0x10bdbc2);
  F_005a2710(((undefined1 *)(gen_frame + 0x1b8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x1bc)) = 0xffffffff;
  if (*(int *)(iVar7 + 0xcc) == 0) {
    uVar8 = 0x3c;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar7 + 4) + 0x1c))))(*(int * PTR32 *)(iVar7 + 4) GEN_EDX_ARG)));
    uVar1 = F_007c8b20(pvVar3 GEN_EDX_ARG,uVar8);
    *(uint *)(iVar7 + 0xcc) = uVar1;
    if (uVar1 != 0) goto LAB_007dae5e;
  }
  else {
LAB_007dae5e: ;
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar7 + 4) + 0x1c))))(*(int * PTR32 *)(iVar7 + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG,*(undefined4 *)(iVar7 + 0xcc),0x37,((undefined4 *)(gen_frame + 0x8)));
  }
  (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x1c4)) = 2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c8)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x1cc)) = 0x24;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1d0)) GEN_EDX_ARG,3);
  (*(uint *)(gen_frame + 0x1d4)) = (uVar6 & 0x10000) >> 0x10;
  if (*(int *)(iVar7 + 0xd0) == 0) {
    uVar8 = 0x80;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar7 + 4) + 0x1c))))(*(int * PTR32 *)(iVar7 + 4) GEN_EDX_ARG)));
    uVar1 = F_007c8b20(pvVar3 GEN_EDX_ARG,uVar8);
    *(uint *)(iVar7 + 0xd0) = uVar1;
    if (uVar1 != 0) goto LAB_007daef3;
  }
  else {
LAB_007daef3: ;
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar7 + 4) + 0x1c))))(*(int * PTR32 *)(iVar7 + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG,*(undefined4 *)(iVar7 + 0xd0),3,&(*(undefined4 *)(gen_frame + 0x1c0)));
  }
  this_00 = &(*(uint *)(gen_frame + 0x1d8));
  iVar7 = 2;
  do {
    this_00 = this_00 - 2;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar7 = iVar7 - 1;
  } while (-1 < iVar7);
  puVar2 = &(*(undefined4 *)(gen_frame + 0x1c0));
  iVar7 = 0x36;
  do {
    puVar2 = puVar2 - 2;
    uVar1 = F_005a2670(puVar2 GEN_EDX_ARG);
    iVar7 = iVar7 - 1;
  } while (-1 < iVar7);
LAB_007daf43: ;
  F_00c47745((*(uint *)(gen_frame + 0x1d8)) ^ (uint)(uint)(gen_frame + 0x1dc) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentReturn::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_007daf60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7daf60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
  if (*(int *)(uVar1 + 0x18) != 0) {
    return ~(*((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) + 4))) >> 4) & 1;
  }
  return 1;
}

/* ref: FUN_007daf90 */
GEN_FRAME uint GEN_THISCALL F_007daf90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7daf90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | param_1;
    return param_1;
  }
  *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) & ~param_1;
  uVar1 = param_1;
  if (param_1 == 1) {
    uVar1 = F_00776230(this GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: FUN_007dafc0 */
GEN_FRAME uint GEN_THISCALL F_007dafc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7dafc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d44c4));
  in_ecx[3] = 0;
  *(undefined1 *)(in_ecx + 4) = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[0xe] = 0;
  *(undefined1 *)(in_ecx + 0xf) = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007db040 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007db040(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7db040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  piVar1 = *(int * PTR32 *)(uVar2 + 0x17c);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    return (uint)(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG));
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentStatus::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_007db070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7db070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  
  F_00ae0cd0(&REFG(undefined, 0x14c0920) GEN_EDX_FWD,0x28);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  piVar3 = *(int * PTR32 *)(this + 0x38);
  if (piVar3 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x38) = 0;
  }
  *(undefined4 *)(this + 0x14) = 0;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x130) + 0xc))))(*(int * PTR32 *)(uVar2 + 0x130) GEN_EDX_ARG);
  if (*(int *)(this + 0xc) != 0) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0xc),0);
    *(undefined4 *)(this + 0xc) = 0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x14c) + 0xc))))(*(int * PTR32 *)(uVar2 + 0x14c) GEN_EDX_ARG);
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(this + 8) = 0;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3 GEN_EDX_ARG,uVar1,0);
  return uVar2;
}

/* ref: FUN_007db120 */
GEN_FRAME byte GEN_THISCALL F_007db120(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7db120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  iVar3 = REFG(int, 0x1379694);
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if (REFG(int, 0x1379694) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_FWD);
    return 0;
  }
  iVar4 = 0;
  do {
    ((byte *)(gen_frame + 0x8c))[(int)(iVar4)] = *(byte *)(REFG(int, 0x1379694) + 0x2db8 + iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x1a);
  ((byte *)(gen_frame + 0x8c))[3] = 0x32;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 88)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2d90);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 92)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2d94);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 96)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2d98);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 100)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2d9c);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 104)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2da0);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 108)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2da4);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 112)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2da8);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 116)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2dac);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 120)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2db0);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 124)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x2db4);
  F_00a9fa40(*(undefined4 *)((int)this + 0x18) GEN_EDX_ARG,1);
  F_00aaa640(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,((byte *)(gen_frame + 0x8c)),((byte *)(gen_frame + 0xc)) + 0x58);
  ((byte *)(gen_frame + 0xc))[8] = (byte)REFG(float, 0x10c44a0);
  ((byte *)(gen_frame + 0xc))[9] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a0) + 1));
  ((byte *)(gen_frame + 0xc))[10] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a0) + 2));
  ((byte *)(gen_frame + 0xc))[0xb] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a0) + 3));
  ((byte *)(gen_frame + 0xc))[0x10] = (byte)REFG(float, 0x10c449c);
  ((byte *)(gen_frame + 0xc))[0x11] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 1));
  ((byte *)(gen_frame + 0xc))[0x12] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 2));
  ((byte *)(gen_frame + 0xc))[0x13] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 3));
  ((byte *)(gen_frame + 0xc))[0x1c] = (byte)REFG(float, 0x10c449c);
  ((byte *)(gen_frame + 0xc))[0x1d] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 1));
  ((byte *)(gen_frame + 0xc))[0x1e] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 2));
  ((byte *)(gen_frame + 0xc))[0x1f] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 3));
  ((byte *)(gen_frame + 0xc))[0x24] = (byte)REFG(float, 0x10c449c);
  ((byte *)(gen_frame + 0xc))[0x25] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 1));
  ((byte *)(gen_frame + 0xc))[0x26] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 2));
  ((byte *)(gen_frame + 0xc))[0x27] = (*(undefined1 *)((char *)&REFG(float, 0x10c449c) + 3));
  ((byte *)(gen_frame + 0xc))[0x28] = (byte)REFG(float, 0x10adbc4);
  ((byte *)(gen_frame + 0xc))[0x29] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 1));
  ((byte *)(gen_frame + 0xc))[0x2a] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 2));
  ((byte *)(gen_frame + 0xc))[0x2b] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 3));
  ((byte *)(gen_frame + 0xc))[0x2c] = (byte)REFG(float, 0x10adbc4);
  ((byte *)(gen_frame + 0xc))[0x2d] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 1));
  ((byte *)(gen_frame + 0xc))[0x2e] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 2));
  ((byte *)(gen_frame + 0xc))[0x2f] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 3));
  ((byte *)(gen_frame + 0xc))[0x30] = (byte)REFG(float, 0x10adbc4);
  ((byte *)(gen_frame + 0xc))[0x31] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 1));
  ((byte *)(gen_frame + 0xc))[0x32] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 2));
  ((byte *)(gen_frame + 0xc))[0x33] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 3));
  ((byte *)(gen_frame + 0xc))[0x34] = (byte)REFG(float, 0x10adbc4);
  ((byte *)(gen_frame + 0xc))[0x35] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 1));
  ((byte *)(gen_frame + 0xc))[0x36] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 2));
  ((byte *)(gen_frame + 0xc))[0x37] = (*(undefined1 *)((char *)&REFG(float, 0x10adbc4) + 3));
  uVar6 = (uint)((byte *)(gen_frame + 0x8c))[1] + (uint)((byte *)(gen_frame + 0x8c))[4] * 2;
  ((byte *)(gen_frame + 0xc))[0xc] = (byte)REFG(float, 0x10c44a8);
  ((byte *)(gen_frame + 0xc))[0xd] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 1));
  ((byte *)(gen_frame + 0xc))[0xe] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 2));
  ((byte *)(gen_frame + 0xc))[0xf] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 3));
  ((byte *)(gen_frame + 0xc))[0x14] = (byte)REFG(float, 0x10c44a4);
  ((byte *)(gen_frame + 0xc))[0x15] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a4) + 1));
  ((byte *)(gen_frame + 0xc))[0x16] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a4) + 2));
  ((byte *)(gen_frame + 0xc))[0x17] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a4) + 3));
  ((byte *)(gen_frame + 0xc))[0x38] = (byte)REFG(float, 0x10c44a8);
  ((byte *)(gen_frame + 0xc))[0x39] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 1));
  ((byte *)(gen_frame + 0xc))[0x3a] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 2));
  ((byte *)(gen_frame + 0xc))[0x3b] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 3));
  ((byte *)(gen_frame + 0xc))[0x3c] = (byte)REFG(float, 0x10c4498);
  ((byte *)(gen_frame + 0xc))[0x3d] = (*(undefined1 *)((char *)&REFG(float, 0x10c4498) + 1));
  ((byte *)(gen_frame + 0xc))[0x3e] = (*(undefined1 *)((char *)&REFG(float, 0x10c4498) + 2));
  ((byte *)(gen_frame + 0xc))[0x3f] = (*(undefined1 *)((char *)&REFG(float, 0x10c4498) + 3));
  ((byte *)(gen_frame + 0xc))[0x40] = (byte)REFG(float, 0x10c44a8);
  ((byte *)(gen_frame + 0xc))[0x41] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 1));
  ((byte *)(gen_frame + 0xc))[0x42] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 2));
  ((byte *)(gen_frame + 0xc))[0x43] = (*(undefined1 *)((char *)&REFG(float, 0x10c44a8) + 3));
  ((byte *)(gen_frame + 0xc))[0x44] = (byte)REFG(float, 0x10c4498);
  ((byte *)(gen_frame + 0xc))[0x45] = (*(undefined1 *)((char *)&REFG(float, 0x10c4498) + 1));
  ((byte *)(gen_frame + 0xc))[0x46] = (*(undefined1 *)((char *)&REFG(float, 0x10c4498) + 2));
  ((byte *)(gen_frame + 0xc))[0x47] = (*(undefined1 *)((char *)&REFG(float, 0x10c4498) + 3));
  ((byte *)(gen_frame + 0xc))[0] = (byte)REFG(float, 0x1087f04);
  ((byte *)(gen_frame + 0xc))[1] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
  ((byte *)(gen_frame + 0xc))[2] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
  ((byte *)(gen_frame + 0xc))[3] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
  ((byte *)(gen_frame + 0xc))[4] = (byte)REFG(float, 0x1087f04);
  ((byte *)(gen_frame + 0xc))[5] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
  ((byte *)(gen_frame + 0xc))[6] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
  ((byte *)(gen_frame + 0xc))[7] = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
  ((byte *)(gen_frame + 0xc))[0x18] = (byte)REFG(float, 0x10c4494);
  ((byte *)(gen_frame + 0xc))[0x19] = (*(undefined1 *)((char *)&REFG(float, 0x10c4494) + 1));
  ((byte *)(gen_frame + 0xc))[0x1a] = (*(undefined1 *)((char *)&REFG(float, 0x10c4494) + 2));
  ((byte *)(gen_frame + 0xc))[0x1b] = (*(undefined1 *)((char *)&REFG(float, 0x10c4494) + 3));
  ((byte *)(gen_frame + 0xc))[0x20] = (byte)REFG(float, 0x10c4494);
  ((byte *)(gen_frame + 0xc))[0x21] = (*(undefined1 *)((char *)&REFG(float, 0x10c4494) + 1));
  ((byte *)(gen_frame + 0xc))[0x22] = (*(undefined1 *)((char *)&REFG(float, 0x10c4494) + 2));
  ((byte *)(gen_frame + 0xc))[0x23] = (*(undefined1 *)((char *)&REFG(float, 0x10c4494) + 3));
  ((byte *)(gen_frame + 0xc))[0x48] = (byte)REFG(float, 0x10ac108);
  ((byte *)(gen_frame + 0xc))[0x49] = (*(undefined1 *)((char *)&REFG(float, 0x10ac108) + 1));
  ((byte *)(gen_frame + 0xc))[0x4a] = (*(undefined1 *)((char *)&REFG(float, 0x10ac108) + 2));
  ((byte *)(gen_frame + 0xc))[0x4b] = (*(undefined1 *)((char *)&REFG(float, 0x10ac108) + 3));
  ((byte *)(gen_frame + 0xc))[0x4c] = (byte)REFG(float, 0x10c4490);
  ((byte *)(gen_frame + 0xc))[0x4d] = (*(undefined1 *)((char *)&REFG(float, 0x10c4490) + 1));
  ((byte *)(gen_frame + 0xc))[0x4e] = (*(undefined1 *)((char *)&REFG(float, 0x10c4490) + 2));
  ((byte *)(gen_frame + 0xc))[0x4f] = (*(undefined1 *)((char *)&REFG(float, 0x10c4490) + 3));
  ((byte *)(gen_frame + 0xc))[0x50] = (byte)REFG(float, 0x10ac108);
  ((byte *)(gen_frame + 0xc))[0x51] = (*(undefined1 *)((char *)&REFG(float, 0x10ac108) + 1));
  ((byte *)(gen_frame + 0xc))[0x52] = (*(undefined1 *)((char *)&REFG(float, 0x10ac108) + 2));
  ((byte *)(gen_frame + 0xc))[0x53] = (*(undefined1 *)((char *)&REFG(float, 0x10ac108) + 3));
  ((byte *)(gen_frame + 0xc))[0x54] = (byte)REFG(float, 0x10c4490);
  ((byte *)(gen_frame + 0xc))[0x55] = (*(undefined1 *)((char *)&REFG(float, 0x10c4490) + 1));
  ((byte *)(gen_frame + 0xc))[0x56] = (*(undefined1 *)((char *)&REFG(float, 0x10c4490) + 2));
  ((byte *)(gen_frame + 0xc))[0x57] = (*(undefined1 *)((char *)&REFG(float, 0x10c4490) + 3));
  if (uVar6 < 0x16) {
    (*(int *)(gen_frame + 0x8)) = *(int *)(((byte *)(gen_frame + 0xc)) + uVar6 * 4);
  }
  else {
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 0)) = (byte)REFG(float, 0x1087f04);
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 1)) = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 1));
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 2)) = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 2));
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 3)) = (*(undefined1 *)((char *)&REFG(float, 0x1087f04) + 3));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x4c))))(*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
  F_00aa1d10(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,(uint)*(byte *)(iVar3 + 0x1680));
  F_00aa1cc0(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,*(undefined4 *)(iVar3 + 0x1678),
               *(undefined4 *)(iVar3 + 0x167c));
  (*(int *)(gen_frame + 0x8)) = 0;
  puVar7 = (undefined4 *)((int)this + 0x20);
  puVar8 = (undefined4 *)(iVar3 + 0x16b0);
  do {
    uVar1 = *puVar8;
    *puVar7 = uVar1;
    uVar2 = puVar8[1];
    puVar7[1] = uVar2;
    F_00aa80c0(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)),uVar1,uVar2);
    (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
    puVar7 = puVar7 + 2;
    puVar8 = puVar8 + 0x1e8;
  } while ((*(int *)(gen_frame + 0x8)) < 2);
  *(undefined1 *)((int)this + 0x3c) = 0;
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5 GEN_EDX_ARG,0x3d);
  if ((uVar6 != 0) && (*((int *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x710))) != 0)) {
    *((undefined4 *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x710))) = 0;
    *(undefined1 *)(uVar6 + 0x1d) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007db3c0 */
GEN_FRAME byte GEN_THISCALL F_007db3c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7db3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0x70))))(REFG(int * PTR32, 0x1379694) GEN_EDX_FWD);
    if ((char)uVar1 != '\0') {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xec)));
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,0xc,0x10);
      if (uVar1 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = F_0061f4a0(uVar1 GEN_EDX_ARG);
      }
      *(uint *)((int)this + 0x38) = uVar1;
      F_0061f4d0(uVar1 GEN_EDX_ARG,0);
      this_00 = REFG(void * PTR32, 0x1487c60);
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
      uVar1 = F_0056a740(uVar1 + 0x2db98 GEN_EDX_ARG);
      F_0061f550(this_00 GEN_EDX_ARG,0,uVar1);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x38));
      iVar3 = 0;
      do {
        piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0x16c0 + iVar3)));
        if (piVar2 != (int *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x38));
        }
        iVar3 = iVar3 + 0x7a0;
      } while (iVar3 < 0xf40);
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      uVar1 = F_0062c750(0);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,10);
      (*(uint *)(gen_frame + 0x8)) = uVar1;
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),1,&(*(undefined4 *)(gen_frame + 0x4)));
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007db4d0 */
GEN_FRAME uint GEN_THISCALL F_007db4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7db4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d450c));
  *(undefined1 *)(in_ecx + 3) = 1;
  return (uint)in_ecx;
}

/* ref: FUN_007db4f0 */
GEN_FRAME uint GEN_THISCALL F_007db4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7db4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __time64_t _Var1;
  ulonglong uVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4554));
  F_00a1af40((undefined *)((int)this + 0x10) GEN_EDX_FWD);
  *(undefined1 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0xe0000000;
  *(undefined4 *)((int)this + 0xac) = 0;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x10) = (int)_Var1;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 0x18) = uVar2;
  uVar2 = F_00427e30();
  *(ulonglong *)((int)this + 0x20) = uVar2;
  *(undefined4 *)((int)this + 0x58) = 0xffffffff;
  *(undefined4 *)((int)this + 0x28) = 0xe0000000;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0xe0000000;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0xe0000000;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0xe0000000;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0xe0000000;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0xe0000000;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(uint *)((int)this + 0x58) = *(uint *)((int)this + 0x58) & 0xfffffffe;
  return (uint)this;
}

/* ref: FUN_007db590 */
GEN_NOFRAME uint GEN_THISCALL F_007db590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7db590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(int *)(gen_frame + 0x2c)) = 0;
  if ((*(byte *)((int)this + 0x58) & 1) != 0) {
    if (REFG(undefined4 * PTR32, 0x1375c08) == (undefined4 *)0x0) {
      (*(int *)(gen_frame + 0x24)) = 0;
      uVar7 = 0xe0000000;
    }
    else {
      uVar7 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1375c08))))(REFG(undefined4 * PTR32, 0x1375c08));
      (*(int *)(gen_frame + 0x24)) = (int)(uVar7 >> 0x20);
    }
    iVar6 = (int)uVar7;
    uVar8 = F_00538780(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD);
    if ((((uVar7 != uVar8) && (uVar8 = F_005339f0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG), uVar8 != uVar7)) &&
        (iVar6 != -0x20000000)) &&
       (uVar3 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,iVar6,(int)(uVar7 >> 0x20)), uVar3 != 0)) {
      uVar4 = F_0043e0f0(((undefined1 *)(gen_frame + 0x10)),uVar3);
      bVar2 = F_0043dea0(((undefined1 *)(gen_frame + 0x0)),*param_2,uVar4);
      if (bVar2 != 0) {
        uVar7 = F_007c9d00(uVar3);
        iVar5 = (int)(uVar7 >> 0x20);
        (*(int *)(gen_frame + 0x18)) = (int)uVar7;
        if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x28) == iVar6) &&
           (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x2c) == (*(int *)(gen_frame + 0x24)))) {
          (*(int *)(gen_frame + 0x2c)) = 1;
        }
        else {
          (*(int *)(gen_frame + 0x2c)) = 2;
        }
        uVar3 = F_00431490(((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)(param_2 + 4),(uint)*(ushort *)(param_2 + 5))
        ;
        if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) != uVar3) {
          *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) = uVar3;
          *(undefined1 *)(param_1 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) != iVar5) {
          *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) = iVar5;
          *(undefined1 *)(param_1 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc))) != (*(int *)(gen_frame + 0x18))) {
          *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc))) = (*(int *)(gen_frame + 0x18));
          *(undefined1 *)(param_1 + 0x1d) = 1;
          *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x28) = iVar6;
          *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x2c) = (*(int *)(gen_frame + 0x24));
          goto LAB_007db6f2;
        }
      }
      *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x28) = iVar6;
      *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x2c) = (*(int *)(gen_frame + 0x24));
    }
  }
LAB_007db6f2: ;
  piVar1 = *(int * PTR32 *)(param_1 + 0x20);
  if (*piVar1 != (*(int *)(gen_frame + 0x2c))) {
    *piVar1 = (*(int *)(gen_frame + 0x2c));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return (uint)piVar1;
}

/* ref: FUN_007db710 */
GEN_NOFRAME uint GEN_THISCALL F_007db710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7db710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  bool bVar7;
  float10 fVar8;
  ulonglong uVar9;
  
  uVar4 = F_00533a30(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD);
  if (uVar4 == 0) {
    iVar6 = -0x20000000;
  }
  else {
    iVar6 = *(int *)(uVar4 + 0x74);
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x58))) != iVar6) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x58))) = iVar6;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  (*(int *)(gen_frame + 0x4c)) = 0;
  if ((*(byte *)((int)this + 0x58) & 8) != 0) {
    uVar9 = F_005339f0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    iVar6 = (int)uVar9;
    (*(ulonglong *)(gen_frame + 0x28)) = uVar9;
    uVar9 = (*(ulonglong *)(gen_frame + 0x28));
    if ((uVar9 == 0xe0000000) &&
       (((param_2[1] != 0 || (param_2[2] != -0x20000000)) || (param_2[3] != 0)))) {
      *(undefined4 *)((int)this + 0x40) = 0xe0000000;
      *(undefined4 *)((int)this + 0x44) = 0;
    }
    else {
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) = (int)(uVar9 >> 0x20);
      iVar2 = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4));
      (*(ulonglong *)(gen_frame + 0x28)) = uVar9;
      if ((((iVar6 != *(int *)((int)this + 0x40)) ||
           (bVar7 = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) != *(int *)((int)this + 0x44), bVar7)) &&
          ((*(int *)((int)this + 0x40) != -0x20000000 || (*(int *)((int)this + 0x44) != 0)))) &&
         ((iVar6 != -0x20000000 && (uVar4 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,iVar6,iVar2), uVar4 != 0))))
      {
        *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)this + 0x60);
        *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)this + 100);
        *(undefined4 *)((int)this + 0x78) = *(undefined4 *)((int)this + 0x68);
        puVar5 = (undefined4 *)F_0043e0f0(((undefined1 *)(gen_frame + 0x30)),uVar4);
        *(undefined4 *)((int)this + 0x80) = *puVar5;
        *(undefined4 *)((int)this + 0x84) = puVar5[1];
        *(undefined4 *)((int)this + 0x88) = puVar5[2];
        puVar5 = (undefined4 *)
                 F_0046f4a0(((undefined1 *)(gen_frame + 0x30)),(undefined4 *)((int)this + 0x80),(int)this + 0x70);
        *(undefined4 *)((int)this + 0x90) = *puVar5;
        *(undefined4 *)((int)this + 0x94) = puVar5[1];
        *(undefined4 *)((int)this + 0x98) = puVar5[2];
        F_00427f00((undefined *)((int)this + 0x10) GEN_EDX_ARG);
      }
      uVar9 = F_00427d90();
      uVar4 = (uint)uVar9 - *(uint *)((int)this + 0x18);
      if ((((*(int *)((int)this + 0x40) == -0x20000000) && (*(int *)((int)this + 0x44) == 0)) ||
          ((int)(uVar9 >> 0x20) - *(int *)((int)this + 0x1c) !=
           (uint)((uint)uVar9 < *(uint *)((int)this + 0x18)))) || (0x95 < uVar4)) {
        if ((int)(*(ulonglong *)(gen_frame + 0x28)) != -0x20000000) {
          uVar4 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,(int)(*(ulonglong *)(gen_frame + 0x28)),(*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)));
          (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = gen_bits2f(uVar4);
          if (uVar4 != 0) {
            puVar5 = (undefined4 *)F_0043e0f0(((undefined1 *)(gen_frame + 0x0)),uVar4);
            *(undefined4 *)((int)this + 0x60) = *puVar5;
            *(undefined4 *)((int)this + 100) = puVar5[1];
            *(undefined4 *)((int)this + 0x68) = puVar5[2];
            bVar3 = F_0043dea0(((undefined1 *)(gen_frame + 0x10)),*param_2,(undefined4 *)((int)this + 0x60));
            if (bVar3 != 0) {
              (*(ulonglong *)(gen_frame + 0x38)) = F_007c9d00((undefined4)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4))));
              (*(int *)(gen_frame + 0x4c)) = 1;
              uVar4 = F_00431490(((undefined1 *)(gen_frame + 0x10)),(uint)*(ushort *)(param_2 + 4),
                                   (uint)*(ushort *)(param_2 + 5));
              if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x4c))) != uVar4) {
                *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x4c))) = uVar4;
                *(undefined1 *)(param_1 + 0x1d) = 1;
              }
              if (gen_bits2f(*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x50)))) != (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4))) {
                *((float *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x50))) = (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4));
                *(undefined1 *)(param_1 + 0x1d) = 1;
              }
              if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x54))) != (uint)(*(ulonglong *)(gen_frame + 0x38))) {
                *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x54))) = (uint)(*(ulonglong *)(gen_frame + 0x38));
                *(undefined1 *)(param_1 + 0x1d) = 1;
              }
            }
          }
        }
      }
      else {
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 0)) = uVar4;
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = 0.0;
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = 0.0;
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 0)) = 0;
        fVar1 = ((float)GEN_TOF((((-(float10)0 + (float10)uVar4) / (float10)*(double *)&REFG(undefined, 0x10d4598)) *
                       (float10)*(double *)&REFG(undefined, 0x1094620))));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = fVar1;
        fVar8 = ((float10)GEN_TOD(fsin((float10)fVar1)));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = (float)fVar8;
        uVar4 = F_004bd7b0(((undefined1 *)(gen_frame + 0x30)),(int)this + 0x90,(float)fVar8);
        puVar5 = (undefined4 *)F_004bd670(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x70,uVar4);
        *(undefined4 *)((int)this + 0x60) = *puVar5;
        *(undefined4 *)((int)this + 100) = puVar5[1];
        *(undefined4 *)((int)this + 0x68) = puVar5[2];
        bVar3 = F_0043dea0(((undefined1 *)(gen_frame + 0x10)),*param_2,(int)this + 0x60);
        if (bVar3 != 0) {
          (*(int *)(gen_frame + 0x4c)) = 1;
          uVar4 = F_00431490(((undefined1 *)(gen_frame + 0x10)),(uint)*(ushort *)(param_2 + 4),
                               (uint)*(ushort *)(param_2 + 5));
          if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x4c))) != uVar4) {
            *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x4c))) = uVar4;
            *(undefined1 *)(param_1 + 0x1d) = 1;
          }
        }
      }
      *(int *)((int)this + 0x40) = (int)(*(ulonglong *)(gen_frame + 0x28));
      *(int *)((int)this + 0x44) = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4));
    }
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x48))) != (*(int *)(gen_frame + 0x4c))) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x48))) = (*(int *)(gen_frame + 0x4c));
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return param_1;
}

/* ref: FUN_007dba40 */
GEN_NOFRAME uint GEN_THISCALL F_007dba40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7dba40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  uVar2 = F_005339e0(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD);
  if ((*(char *)((int)this + 0xa0) == '\0') && (uVar2 != 0)) {
    iVar4 = *(int *)(uVar2 + 0x74);
  }
  else {
    iVar4 = -0x20000000;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x40))) != iVar4) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x40))) = iVar4;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  iVar4 = 0;
  (*(int *)(gen_frame + 0x28)) = 0;
  if ((*(byte *)((int)this + 0x58) & 4) != 0) {
    uVar5 = F_00538780(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    iVar4 = (int)uVar5;
    (*(ulonglong *)(gen_frame + 0x20)) = uVar5;
    if (*(char *)((int)this + 0xa0) != '\0') {
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = 0xe0000000;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = -0x20000000;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = 0;
      (*(ulonglong *)(gen_frame + 0x20)) = 0xe0000000;
      iVar4 = (int)(*(ulonglong *)(gen_frame + 0x20));
    }
    if ((((param_2[1] != 0) || (iVar4 != param_2[2])) || ((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) != param_2[3])) &&
       (iVar4 != -0x20000000)) {
      uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,iVar4,(*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)));
      if (uVar2 != 0) {
        uVar3 = F_0043df60(((undefined1 *)(gen_frame + 0x10)),uVar2,*param_2);
        bVar1 = F_0043dea0(((undefined1 *)(gen_frame + 0x0)),*param_2,uVar3);
        if (bVar1 != 0) {
          uVar2 = F_00760a10(uVar2);
          iVar4 = *(int *)(&REFG(undefined, 0x148a074) + uVar2 * 8);
          (*(int *)(gen_frame + 0x18)) = *(int *)(&REFG(undefined, 0x148a070) + uVar2 * 8);
          if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x38) == (int)(*(ulonglong *)(gen_frame + 0x20))) &&
             (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x3c) == (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)))) {
            (*(int *)(gen_frame + 0x28)) = 1;
          }
          else {
            (*(int *)(gen_frame + 0x28)) = 2;
          }
          uVar2 = F_00431490(((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)(param_2 + 4),
                               (uint)*(ushort *)(param_2 + 5));
          if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x34))) != uVar2) {
            *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x34))) = uVar2;
            *(undefined1 *)(param_1 + 0x1d) = 1;
          }
          if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x38))) != iVar4) {
            *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x38))) = iVar4;
            *(undefined1 *)(param_1 + 0x1d) = 1;
          }
          if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x3c))) != (*(int *)(gen_frame + 0x18))) {
            *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x3c))) = (*(int *)(gen_frame + 0x18));
            *(undefined1 *)(param_1 + 0x1d) = 1;
          }
          if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x90))) != (uint)(REFG(char, 0x14ab068) != '\0')) {
            *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x90))) = (uint)(REFG(char, 0x14ab068) != '\0');
            *(undefined1 *)(param_1 + 0x1d) = 1;
          }
        }
      }
      iVar4 = (int)(*(ulonglong *)(gen_frame + 0x20));
      this = (*(undefined * PTR32 *)(gen_frame + 0x2c));
    }
    *(int *)((int)this + 0x3c) = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4));
    *(int *)((int)this + 0x38) = iVar4;
    iVar4 = (*(int *)(gen_frame + 0x28));
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if (*(int *)(uVar2 + 0x30) != iVar4) {
    *(int *)(uVar2 + 0x30) = iVar4;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return uVar2;
}

/* ref: FUN_007dbc10 */
GEN_NOFRAME uint GEN_THISCALL F_007dbc10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7dbc10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(int *)(gen_frame + 0x2c)) = 0;
  if ((*(byte *)((int)this + 0x58) & 2) != 0) {
    if (REFG(undefined4 * PTR32, 0x1375c40) == (undefined4 *)0x0) {
      (*(int *)(gen_frame + 0x20)) = -0x20000000;
    }
    else {
      uVar5 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1375c40))))(REFG(undefined4 * PTR32, 0x1375c40));
      iVar4 = (int)((ulonglong)uVar5 >> 0x20);
      (*(int *)(gen_frame + 0x20)) = (int)uVar5;
    }
    (*(int *)(gen_frame + 0x24)) = iVar4;
    if ((((param_2[1] != 0) || ((*(int *)(gen_frame + 0x20)) != param_2[2])) || (iVar4 != param_2[3])) &&
       ((*(int *)(gen_frame + 0x20)) != -0x20000000)) {
      uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,(*(int *)(gen_frame + 0x20)),iVar4);
      if (uVar2 != 0) {
        uVar3 = F_0043df60(((undefined1 *)(gen_frame + 0x10)),uVar2,*param_2);
        bVar1 = F_0043dea0(((undefined1 *)(gen_frame + 0x0)),*param_2,uVar3);
        if (bVar1 != 0) {
          uVar2 = F_00760a10(uVar2);
          iVar4 = *(int *)(&REFG(undefined, 0x148a074) + uVar2 * 8);
          (*(int *)(gen_frame + 0x18)) = *(int *)(&REFG(undefined, 0x148a070) + uVar2 * 8);
          if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x30) == (*(int *)(gen_frame + 0x20))) &&
             (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x34) == (*(int *)(gen_frame + 0x24)))) {
            (*(int *)(gen_frame + 0x2c)) = 1;
          }
          else {
            (*(int *)(gen_frame + 0x2c)) = 2;
          }
          uVar2 = F_00431490(((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)(param_2 + 4),
                               (uint)*(ushort *)(param_2 + 5));
          if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c))) != uVar2) {
            *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c))) = uVar2;
            *(undefined1 *)(param_1 + 0x1d) = 1;
          }
          if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20))) != iVar4) {
            *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20))) = iVar4;
            *(undefined1 *)(param_1 + 0x1d) = 1;
          }
          if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x24))) != (*(int *)(gen_frame + 0x18))) {
            *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x24))) = (*(int *)(gen_frame + 0x18));
            *(undefined1 *)(param_1 + 0x1d) = 1;
          }
        }
      }
    }
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x34) = (*(int *)(gen_frame + 0x24));
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x30) = (*(int *)(gen_frame + 0x20));
    iVar4 = (*(int *)(gen_frame + 0x2c));
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if (*(int *)(uVar2 + 0x18) != iVar4) {
    *(int *)(uVar2 + 0x18) = iVar4;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return uVar2;
}

/* ref: FUN_007dbd80 */
GEN_NOFRAME uint GEN_THISCALL F_007dbd80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7dbd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar5 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(int *)(gen_frame + 0x2c)) = 0;
  if ((*(byte *)((int)this + 0x58) & 0x10) != 0) {
    bVar1 = F_00532990(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD);
    if (bVar1 != 0) {
      uVar6 = F_00533c20(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
      iVar4 = (int)(uVar6 >> 0x20);
      iVar5 = (int)uVar6;
      (*(ulonglong *)(gen_frame + 0x20)) = uVar6;
      if ((((param_2[1] != 0) || (iVar5 != param_2[2])) || (iVar4 != param_2[3])) &&
         (iVar5 != -0x20000000)) {
        uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,iVar5,iVar4);
        if (uVar2 != 0) {
          uVar3 = F_0043e0f0(((undefined1 *)(gen_frame + 0x10)),uVar2);
          bVar1 = F_0043dea0(((undefined1 *)(gen_frame + 0x0)),*param_2,uVar3);
          if (bVar1 != 0) {
            uVar6 = F_007c9d00(uVar2);
            iVar5 = (int)(uVar6 >> 0x20);
            (*(int *)(gen_frame + 0x18)) = (int)uVar6;
            if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x48) == (int)(*(ulonglong *)(gen_frame + 0x20))) &&
               (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x4c) == (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)))) {
              (*(int *)(gen_frame + 0x2c)) = 1;
            }
            else {
              (*(int *)(gen_frame + 0x2c)) = 2;
            }
            uVar2 = F_00431490(((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)(param_2 + 4),
                                 (uint)*(ushort *)(param_2 + 5));
            if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 100))) != uVar2) {
              *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 100))) = uVar2;
              *(undefined1 *)(param_1 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x68))) != iVar5) {
              *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x68))) = iVar5;
              *(undefined1 *)(param_1 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x6c))) != (*(int *)(gen_frame + 0x18))) {
              *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x6c))) = (*(int *)(gen_frame + 0x18));
              *(undefined1 *)(param_1 + 0x1d) = 1;
            }
          }
        }
        iVar5 = (int)(*(ulonglong *)(gen_frame + 0x20));
      }
      *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x48) = iVar5;
      *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x4c) = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4));
      iVar5 = (*(int *)(gen_frame + 0x2c));
    }
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if (*(int *)(uVar2 + 0x60) != iVar5) {
    *(int *)(uVar2 + 0x60) = iVar5;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return uVar2;
}

/* ref: FUN_007dbed0 */
GEN_NOFRAME uint GEN_THISCALL F_007dbed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7dbed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar5 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(int *)(gen_frame + 0x2c)) = 0;
  if ((*(byte *)((int)this + 0x58) & 0x20) != 0) {
    bVar1 = F_00532990(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD);
    if (bVar1 != 0) {
      uVar6 = F_00533c20(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
      iVar4 = (int)(uVar6 >> 0x20);
      iVar5 = (int)uVar6;
      (*(ulonglong *)(gen_frame + 0x20)) = uVar6;
      if ((((param_2[1] != 0) || (iVar5 != param_2[2])) || (iVar4 != param_2[3])) &&
         (iVar5 != -0x20000000)) {
        uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,iVar5,iVar4);
        if (uVar2 != 0) {
          uVar3 = F_0043e0f0(((undefined1 *)(gen_frame + 0x10)),uVar2);
          bVar1 = F_0043dea0(((undefined1 *)(gen_frame + 0x0)),*param_2,uVar3);
          if (bVar1 != 0) {
            uVar6 = F_007c9d00(uVar2);
            iVar5 = (int)(uVar6 >> 0x20);
            (*(int *)(gen_frame + 0x18)) = (int)uVar6;
            if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x50) == (int)(*(ulonglong *)(gen_frame + 0x20))) &&
               (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x54) == (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)))) {
              (*(int *)(gen_frame + 0x2c)) = 1;
            }
            else {
              (*(int *)(gen_frame + 0x2c)) = 2;
            }
            uVar2 = F_00431490(((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)(param_2 + 4),
                                 (uint)*(ushort *)(param_2 + 5));
            if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x7c))) != uVar2) {
              *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x7c))) = uVar2;
              *(undefined1 *)(param_1 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x80))) != iVar5) {
              *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x80))) = iVar5;
              *(undefined1 *)(param_1 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x84))) != (*(int *)(gen_frame + 0x18))) {
              *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x84))) = (*(int *)(gen_frame + 0x18));
              *(undefined1 *)(param_1 + 0x1d) = 1;
            }
          }
        }
        iVar5 = (int)(*(ulonglong *)(gen_frame + 0x20));
      }
      *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x50) = iVar5;
      *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x54) = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4));
      iVar5 = (*(int *)(gen_frame + 0x2c));
    }
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if (*(int *)(uVar2 + 0x78) != iVar5) {
    *(int *)(uVar2 + 0x78) = iVar5;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentTargetCursor::vf5 */
GEN_FRAME uint GEN_THISCALL F_007dc030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7dc030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_ARG,0x17);
  uVar5 = 0;
  if (uVar4 != 0) {
    if (REFG(int, 0x1375bbc) != -1) {
      iVar1 = (&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))];
      (*(int *)(gen_frame + 0x38)) = iVar1;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0xd0) != 0)) {
        (*(undefined4 *)(gen_frame + 0x34)) = 0;
        if (REFG(int, 0x1375bbc) == 0) {
          (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar1 + 0xe0);
        }
        (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x2c)) + 0)) = 0xe0000000;
        (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x2c)) + 4)) = 0;
        (*(undefined8 *)(gen_frame + 0x2c)) = 0xe0000000;
        if (REFG(undefined4 * PTR32, 0x1379694) != (undefined4 *)0x0) {
          uVar6 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1379694))))(REFG(undefined4 * PTR32, 0x1379694));
          (*(undefined8 *)(gen_frame + 0x2c)) = uVar6;
        }
        if (this[0xa0] != (undefined1)0x0) {
          uVar7 = F_00538780(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
          (*(undefined4 *)(gen_frame + 0x28)) = (int)(uVar7 >> 0x20);
          if ((uVar7 != *(ulonglong *)(this + 0xa8)) ||
             (((*(int *)(this + 0xa8) == -0x20000000 && (*(int *)(this + 0xac) == 0)) ||
              (uVar7 == 0xe0000000)))) {
            this[0xa0] = (undefined1)0x0;
          }
        }
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0x38));
        (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0x34));
        (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)(*(undefined8 *)(gen_frame + 0x2c));
        (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x2c)) + 4));
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x1c)) = (uint)*(ushort *)(uVar5 + 0x22d18);
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x20)) = (uint)*(ushort *)(uVar5 + 0x22d1a);
        F_007db590(this GEN_EDX_ARG,uVar4,&(*(int *)(gen_frame + 0xc)));
        F_007db710(this GEN_EDX_ARG,uVar4,&(*(int *)(gen_frame + 0xc)));
        F_007dba40(this GEN_EDX_ARG,uVar4,&(*(int *)(gen_frame + 0xc)));
        F_007dbc10(this GEN_EDX_ARG,uVar4,&(*(int *)(gen_frame + 0xc)));
        F_007dbd80(this GEN_EDX_ARG,uVar4,&(*(int *)(gen_frame + 0xc)));
        F_007dbed0(this GEN_EDX_ARG,uVar4,&(*(int *)(gen_frame + 0xc)));
        F_00776e40(uVar4,&(*(int *)(gen_frame + 0xc)));
        iVar1 = *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x40)));
        iVar2 = *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x58)));
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_ARG,4);
        if (uVar5 != 0) {
          if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x794))) != iVar1) {
            *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x794))) = iVar1;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x798))) != iVar2) {
            *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x798))) = iVar2;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
        }
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_ARG,0x14);
        if (uVar5 == 0) {
          return 0;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4))) != iVar1) {
          *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4))) = iVar1;
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8))) == iVar2) {
          return uVar5;
        }
        *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8))) = iVar2;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
        return uVar5;
      }
    }
    *(undefined4 *)(this + 0x28) = 0xe0000000;
    *(undefined4 *)(this + 0x2c) = 0;
    if (**(int * PTR32 *)(uVar4 + 0x20) != 0) {
      **(int * PTR32 *)(uVar4 + 0x20) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    *(undefined4 *)(this + 0x30) = 0xe0000000;
    *(undefined4 *)(this + 0x34) = 0;
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x18))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x18))) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    *(undefined4 *)(this + 0x38) = 0xe0000000;
    *(undefined4 *)(this + 0x3c) = 0;
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x30))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x30))) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    *(undefined4 *)(this + 0x40) = 0xe0000000;
    *(undefined4 *)(this + 0x44) = 0;
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x48))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x48))) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    *(undefined4 *)(this + 0x48) = 0xe0000000;
    *(undefined4 *)(this + 0x4c) = 0;
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x60))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x60))) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    *(undefined4 *)(this + 0x50) = 0xe0000000;
    *(undefined4 *)(this + 0x54) = 0;
    uVar5 = *(uint *)(uVar4 + 0x20);
    if (*(int *)(uVar5 + 0x78) != 0) {
      *(undefined4 *)(uVar5 + 0x78) = 0;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
  }
  return uVar5;
}

/* ref: Client::UI2::Agent::AgentTeleport::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_007dc3c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7dc3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
  if (*(int *)(uVar1 + 0x18) != 0) {
    return ~(*((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) + 4))) >> 3) & 1;
  }
  return 1;
}

/* ref: FUN_007dc3f0 */
GEN_FRAME uint GEN_THISCALL F_007dc3f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7dc3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d45b4));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d45a4));
  puVar1 = in_ecx + 4;
  param_2 = 9;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar1 + 1 GEN_EDX_FWD);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x66) = 0;
    puVar1 = puVar1 + 0x1a;
    param_2 = param_2 - 1;
  } while (-1 < param_2);
  in_ecx[0x108] = 0;
  in_ecx[0x109] = 0;
  *(undefined1 *)(in_ecx + 0x10a) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007dc470 */
GEN_FRAME unsigned int GEN_THISCALL F_007dc470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7dc470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x414) != 0) {
    return;
  }
  iVar4 = 0;
  do {
    pvVar1 = (undefined *)F_00a3af20(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,iVar4);
    if (pvVar1 != (undefined *)0x0) {
      if (*(char *)((int)pvVar1 + 6) == '\0') {
        uVar2 = *(uint *)((int)pvVar1 + 8);
        if ((*(byte *)((int)pvVar1 + 0x14) & 1) != 0) {
          uVar2 = uVar2 + 1000000;
        }
      }
      else {
        pvVar1 = (undefined *)F_00a3a860(pvVar1 GEN_EDX_ARG);
        uVar2 = F_0046e5e0(pvVar1 GEN_EDX_ARG);
      }
      if (uVar2 == 0) {
        if (iVar4 < 0) {
          return;
        }
        if (*(int *)((int)this + 0x414) != 0) {
          piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this - 8) + 0x1c))))
                                    (*(int * PTR32 *)((int)this - 8) GEN_EDX_ARG)));
          ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x414),0);
          *(undefined4 *)((int)this + 0x414) = 0;
        }
        *(undefined4 *)((int)this + 0x418) = *(undefined4 *)((int)this - 4);
        F_00a47f70(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_2,param_1,0x7d5,iVar4,1);
        return;
      }
    }
    iVar4 = iVar4 + 1;
    if (4 < iVar4) {
      return;
    }
  } while( true );
}

/* ref: FUN_007dc540 */
GEN_FRAME uint GEN_THISCALL F_007dc540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7dc540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  puVar1 = (undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 8) = 0;
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10d4640));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d45fc));
  *(undefined2 *)((int)this + 0x108) = 1;
  *(undefined4 *)((int)this + 0x10c) = 0xffffffff;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  F_0043cfd0(puVar1);
  return (uint)this;
}

/* ref: FUN_007dc5a0 */
GEN_NOFRAME uint GEN_THISCALL F_007dc5a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7dc5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  undefined4 * puVar4;
  
  puVar1 = (undefined4 *)((int)this + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d45fc));
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10d4640));
  puVar4 = puVar1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  uVar2 = F_0043cff0(puVar4);
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    uVar2 = F_00414620(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_ARG,puVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007dc610 */
GEN_FRAME uint GEN_THISCALL F_007dc610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7dc610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint * puVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar3 = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x6c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  *(char *)((int)this + 0x109) = (char)uVar1;
  (*(byte *)(gen_frame + 0xb)) = 1;
  puVar4 = (uint *)((int)this + 0x1c);
  do {
    uVar1 = F_00ab3b40(uVar3);
    if (((uVar1 != 0) && (*(char *)(uVar1 + 0x19) == *(char *)((int)this + 0x108))) &&
       (((&REFG(undefined1, 0x14b4edc))[(int)(uVar3 >> 3)] & (*(byte *)(gen_frame + 0xb))) != 0)) {
      puVar4[-1] = uVar1;
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
      *puVar4 = uVar3;
      puVar4 = puVar4 + 2;
      if (0x1d < (*(int *)(gen_frame + 0x4))) break;
    }
    uVar3 = uVar3 + 1;
    (*(byte *)(gen_frame + 0xb)) = (*(byte *)(gen_frame + 0xb)) << 1 | (char)(*(byte *)(gen_frame + 0xb)) < '\0';
  } while ((int)uVar3 < 0x101);
  F_007777b0(this GEN_EDX_ARG,0,(*(int *)(gen_frame + 0x4)) - 1);
  if (0 < (*(int *)(gen_frame + 0x4))) {
    pvVar5 = (undefined *)((int)param_1 + 0x110);
    piVar2 = (int *)((int)this + 0x18);
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x4));
    do {
      puVar4 = (uint *)*piVar2;
      uVar1 = *puVar4;
      F_005a2710(pvVar5 GEN_EDX_ARG,6);
      *(uint *)((int)pvVar5 + 4) = (uVar1 & 0xffffff) + (int)puVar4;
      piVar2 = piVar2 + 2;
      pvVar5 = (undefined *)((int)pvVar5 + 8);
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
    } while ((*(int *)(gen_frame + 0x0)) != 0);
  }
  F_005a2710((undefined *)((int)param_1 + 0x108) GEN_EDX_ARG,4);
  *(int *)((int)param_1 + 0x10c) = (*(int *)(gen_frame + 0x4));
  uVar8 = 0;
  uVar7 = 0;
  if (*(char *)((int)this + 0x109) == '\0') {
    uVar6 = 0xd40;
  }
  else {
    uVar6 = 0xd41;
  }
  pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar1 = F_0043bd00(pvVar5 GEN_EDX_ARG,uVar6,uVar7,uVar8);
  uVar3 = F_005a2710(param_1 GEN_EDX_ARG,6);
  *(uint *)((int)param_1 + 4) = uVar1;
  return uVar3;
}

/* ref: FUN_007dc740 */
GEN_FRAME uint GEN_THISCALL F_007dc740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7dc740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d464c));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[7] = 0;
  *(undefined2 *)(in_ecx + 8) = 0x100;
  *(undefined1 *)((int)in_ecx + 0x22) = 1;
  puVar1 = in_ecx + 9;
  param_2 = 0x31;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar1 + 1 GEN_EDX_FWD);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x66) = 0;
    puVar1 = puVar1 + 0x1a;
    param_2 = param_2 - 1;
  } while (-1 < param_2);
  return (uint)in_ecx;
}

/* ref: FUN_007dc7b0 */
GEN_FRAME uint GEN_THISCALL F_007dc7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7dc7b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = F_00777b50(param_1,0,3,param_2,param_3);
  *param_4 = 7;
  if (uVar1 == 0) {
    uVar1 = F_00777b50(param_1,1000,1000,param_2,param_3);
    *param_4 = 1;
    if (uVar1 == 0) {
      uVar1 = F_00777b50(param_1,0xdac,0xdac,param_2,param_3);
      *param_4 = 2;
      if (uVar1 == 0) {
        uVar1 = F_00777b50(param_1,0xc80,0xc80,param_2,param_3);
        *param_4 = 2;
        if (uVar1 == 0) {
          uVar1 = F_00777b50(param_1,0xc81,0xc83,param_2,param_3);
          *param_4 = 3;
          if (uVar1 == 0) {
            uVar1 = F_00777b50(param_1,0xc84,0xc86,param_2,param_3);
            *param_4 = 4;
            if (uVar1 == 0) {
              uVar1 = F_00777b50(param_1,0xc87,0xc88,param_2,param_3);
              *param_4 = 5;
              if (uVar1 == 0) {
                uVar1 = F_00777b50(param_1,0xc89,0xc89,param_2,param_3);
                *param_4 = 6;
                if (uVar1 == 0) {
                  uVar1 = F_00777b50(param_1,0xce4,0xce4,param_2,param_3);
                  *param_4 = 6;
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}

/* ref: FUN_007dc920 */
GEN_FRAME uint GEN_THISCALL F_007dc920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7dc920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4694));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentLegacyItemStorage::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007dc950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7dc950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 0xc) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0xc),0);
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: FUN_007dc9b0 */
GEN_FRAME byte GEN_THISCALL F_007dc9b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7dc9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  byte bVar1;
  ushort uVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint * puVar11;
  int * piVar12;
  int local_8;
  
  pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
  if (pvVar3 == (undefined *)0x0) {
    return 0;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = pvVar3;
  if (*(char *)((int)pvVar3 + 6) == '\0') {
    uVar4 = *(uint *)((int)pvVar3 + 8);
    if ((*(byte *)((int)pvVar3 + 0x14) & 1) != 0) {
      uVar4 = uVar4 + 1000000;
    }
  }
  else {
    pvVar3 = (undefined *)F_00a3a860(pvVar3 GEN_EDX_FWD);
    uVar4 = F_0046e5e0(pvVar3 GEN_EDX_ARG);
  }
  uVar4 = F_00ab24a0(uVar4);
  *(*(uint * PTR32 *)&gen_args[2]) = uVar4;
  if (uVar4 == 0) {
    return 0;
  }
  piVar12 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[2]) + 3)))) = 1;
  uVar4 = F_007782c0(*(*(undefined4 * PTR32 *)&gen_args[1]));
  local_8 = 0;
  if (0 < (int)uVar4) {
    iVar5 = (*(int *)&gen_args[4]) - (int)(*(uint * PTR32 *)&gen_args[3]);
    iVar6 = (*(int *)&gen_args[5]) - (int)(*(uint * PTR32 *)&gen_args[3]);
    puVar11 = (*(uint * PTR32 *)&gen_args[3]);
    do {
      piVar12 = piVar12 + 1;
      if (*piVar12 == 0) {
        uVar7 = F_00778330(*(*(undefined4 * PTR32 *)&gen_args[1]),local_8);
        pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
        if ((*(char *)((int)pvVar3 + 6) == '\0') || (uVar8 = F_00a3a860(pvVar3 GEN_EDX_ARG), uVar8 == 0)) {
          uVar2 = *((ushort *)GEN_TOP(((int)pvVar3 + (uVar7 & 0xff) * 2 + 0x20)));
        }
        else {
          uVar8 = uVar7;
          pvVar3 = (undefined *)F_00a3a860(pvVar3 GEN_EDX_ARG);
          uVar2 = F_0071d2c0(pvVar3 GEN_EDX_ARG,uVar8);
        }
        if (uVar2 != 0) {
          uVar8 = F_00ab20e0((uint)uVar2);
          *puVar11 = uVar8;
          if ((*(uint * PTR32 *)&gen_args[3]) != (uint *)0x0) {
            pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
            if ((*(char *)((int)pvVar3 + 6) == '\0') || (uVar8 = F_00a3a860(pvVar3 GEN_EDX_ARG), uVar8 == 0))
            {
              bVar1 = *((byte *)GEN_TOP(((uVar7 & 0xff) + 0x2a + (int)pvVar3)));
            }
            else {
              pvVar3 = (undefined *)F_00a3a860(pvVar3 GEN_EDX_ARG);
              bVar1 = F_0071d300(pvVar3 GEN_EDX_ARG,uVar7);
            }
            uVar9 = *(undefined4 *)(*puVar11 + (uint)bVar1 * 4);
            goto LAB_007dcb16;
          }
        }
LAB_007dcb2f: ;
        (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[2]) + 3)))) = 0;
      }
      else {
        uVar7 = F_00a6add0(*piVar12);
        *puVar11 = uVar7;
        if (uVar7 == 0) goto LAB_007dcb2f;
        iVar10 = 0;
        do {
          if (*(int *)(uVar7 + iVar10 * 4) == *piVar12) goto LAB_007dca7d;
          iVar10 = iVar10 + 1;
        } while (iVar10 < 10);
        iVar10 = 0;
LAB_007dca7d: ;
        uVar9 = *(undefined4 *)(uVar7 + iVar10 * 4);
LAB_007dcb16: ;
        *(undefined4 *)(iVar5 + (int)puVar11) = uVar9;
        uVar7 = F_00ab24a0(uVar9);
        *(uint *)(iVar6 + (int)puVar11) = uVar7;
        if (uVar7 == 0) goto LAB_007dcb2f;
      }
      (*(uint * PTR32 *)&gen_args[3]) = (*(uint * PTR32 *)&gen_args[3]) + 5;
      local_8 = local_8 + 1;
      puVar11 = puVar11 + 1;
    } while (local_8 < (int)uVar4);
  }
  if ((*(int *)&gen_args[8]) != -1) {
    uVar4 = F_00778330(*(*(undefined4 * PTR32 *)&gen_args[1]),(*(int *)&gen_args[8]));
    pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
    if ((*(char *)((int)pvVar3 + 6) == '\0') || (uVar7 = F_00a3a860(pvVar3 GEN_EDX_ARG), uVar7 == 0)) {
      bVar1 = *((byte *)GEN_TOP(((uVar4 & 0xff) + 0x2a + (int)pvVar3)));
    }
    else {
      pvVar3 = (undefined *)F_00a3a860(pvVar3 GEN_EDX_ARG);
      bVar1 = F_0071d300(pvVar3 GEN_EDX_ARG,uVar4);
    }
    iVar5 = 0;
    puVar11 = (*(uint * PTR32 *)&gen_args[7]);
    do {
      uVar4 = F_00ab20e0(iVar5 + 2);
      uVar9 = *(undefined4 *)(uVar4 + (uint)bVar1 * 4);
      *((undefined4 *)GEN_TOP((((*(int *)&gen_args[6]) - (int)(*(uint * PTR32 *)&gen_args[7])) + (int)puVar11))) = uVar9;
      uVar4 = F_00ab24a0(uVar9);
      *puVar11 = uVar4;
      if (uVar4 == 0) {
        (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[2]) + 3)))) = 0;
      }
      iVar5 = iVar5 + 1;
      puVar11 = puVar11 + 1;
    } while (iVar5 < 0x18);
  }
  return (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[2]) + 3))));
}

/* ref: FUN_007dcbf0 */
GEN_FRAME byte GEN_THISCALL F_007dcbf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7dcbf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int * param_6 = (int *)(uintptr_t)gen_a6;
  int param_7 = (int)gen_a7;
  int param_8 = (int)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  undefined4 * puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined * pvVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint * puVar11;
  int * piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  uVar4 = F_007782c0(param_4);
  F_005a2710((undefined *)(param_1 + 0x30) GEN_EDX_ARG,3);
  *(uint *)(param_1 + 0x34) = uVar4;
  F_00c48350(((int *)(gen_frame + 0x30)),-1,0x128);
  bVar2 = 0;
  (*(byte *)(gen_frame + 0x27)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  if (0 < (int)uVar4) {
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = param_3;
    puVar11 = (uint *)(param_1 + 100);
    piVar12 = param_6;
    do {
      uVar5 = F_00778330(param_4,(*(int *)(gen_frame + 0x8)));
      if ((*(char *)((int)param_4 + 6) == '\0') || (uVar6 = F_00a3a860(param_4 GEN_EDX_ARG), uVar6 == 0)) {
        uVar3 = *((ushort *)GEN_TOP(((int)param_4 + (uVar5 & 0xff) * 2 + 0x20)));
      }
      else {
        uVar6 = uVar5;
        pvVar7 = (undefined *)F_00a3a860(param_4 GEN_EDX_ARG);
        uVar3 = F_0071d2c0(pvVar7 GEN_EDX_ARG,uVar6);
      }
      if (uVar3 != 0) {
        if ((*(char *)((int)param_4 + 6) == '\0') || (uVar6 = F_00a3a860(param_4 GEN_EDX_ARG), uVar6 == 0)) {
          bVar2 = *((byte *)GEN_TOP(((uVar5 & 0xff) + 0x2a + (int)param_4)));
        }
        else {
          uVar6 = uVar5;
          pvVar7 = (undefined *)F_00a3a860(param_4 GEN_EDX_ARG);
          bVar2 = F_0071d300(pvVar7 GEN_EDX_ARG,uVar6);
        }
        if (bVar2 != 0xffffffff) {
          if ((*(char *)((int)param_4 + 6) == '\0') || (uVar6 = F_00a3a860(param_4 GEN_EDX_ARG), uVar6 == 0))
          {
            (*(byte *)(gen_frame + 0x2f)) = *((byte *)GEN_TOP(((uVar5 & 0xff) + 0x2a + (int)param_4)));
          }
          else {
            pvVar7 = (undefined *)F_00a3a860(param_4 GEN_EDX_ARG);
            (*(byte *)(gen_frame + 0x2f)) = F_0071d300(pvVar7 GEN_EDX_ARG,uVar5);
          }
          puVar1 = ((undefined4 *)GEN_TOP(((int)piVar12 + (param_8 - (int)param_6))));
          uVar5 = F_00ab65a0(0,*((undefined4 *)GEN_TOP(((int)piVar12 + (param_8 - (int)param_6)))));
          F_005a2710(puVar11 - 0xb GEN_EDX_ARG,3);
          pvVar7 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + (param_2 - (int)param_3))));
          uVar6 = (uint)(*(byte *)(gen_frame + 0x2f));
          puVar11[-10] = uVar5;
          uVar5 = F_00ab6240(*(undefined4 *)(*piVar12 + uVar6 * 4),1,*puVar1);
          F_0042e430(pvVar7 GEN_EDX_ARG,uVar5);
          uVar5 = F_0042a990(pvVar7 GEN_EDX_ARG);
          F_005a2710(puVar11 - 1 GEN_EDX_ARG,6);
          *puVar11 = uVar5;
          uVar5 = *((uint *)GEN_TOP(((int)puVar1 + (param_7 - param_8))));
          F_005a2710(puVar11 + 9 GEN_EDX_ARG,3);
          puVar11[10] = uVar5;
          (*(byte *)(gen_frame + 0x2f)) = *(byte *)(*piVar12 + 0x28);
          uVar5 = (uint)(*(byte *)(gen_frame + 0x2f));
          if (((int *)(gen_frame + 0x30))[(int)(uVar5)] == -1) {
            uVar8 = F_00a6ad20((uint)*(byte *)(*piVar12 + 0x28),param_5);
            uVar9 = F_00a3ba20(uVar5,param_4,0);
            (*(byte *)(gen_frame + 0x2f)) = *(byte *)(*piVar12 + 0x28);
            uVar5 = (uint)(*(byte *)(gen_frame + 0x2f));
            ((int *)(gen_frame + 0x30))[(int)(uVar5)] = uVar8 - uVar9;
          }
          if (((int *)(gen_frame + 0x30))[(int)(*(byte *)(*piVar12 + 0x28))] < (int)*(char *)(*piVar12 + 0x29 + uVar6)) {
            iVar10 = ((int *)(gen_frame + 0x30))[(int)(*(byte *)(*piVar12 + 0x28))];
            ((int *)(gen_frame + 0x30))[(int)(*(byte *)(*piVar12 + 0x28))] = 0;
          }
          else {
            iVar10 = (int)*(char *)(*piVar12 + 0x29 + uVar6);
            ((int *)(gen_frame + 0x30))[(int)(*(byte *)(*piVar12 + 0x28))] = ((int *)(gen_frame + 0x30))[(int)(*(byte *)(*piVar12 + 0x28))] - iVar10;
          }
          if ((*(byte *)(gen_frame + 0x2f)) != 0) {
            uVar14 = 1;
            uVar13 = 0x20f;
            iVar15 = iVar10;
            pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                       (*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
            uVar5 = F_00461d60(pvVar7 GEN_EDX_ARG,uVar13,uVar5,uVar14,iVar15);
            F_0042e430((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,uVar5);
          }
          uVar5 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG);
          F_005a2710(puVar11 + 0x13 GEN_EDX_ARG,6);
          puVar11[0x14] = uVar5;
          if (iVar10 == *(char *)(uVar6 + 0x29 + *piVar12)) {
            F_005a2710(puVar11 + 0x1d GEN_EDX_ARG,3);
            puVar11[0x1e] = 0;
          }
          else {
            F_005a2710(puVar11 + 0x1d GEN_EDX_ARG,3);
            puVar11[0x1e] = 1;
            (*(byte *)(gen_frame + 0x27)) = 1;
          }
        }
      }
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x54);
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
      puVar11 = puVar11 + 2;
      piVar12 = piVar12 + 1;
      bVar2 = (*(byte *)(gen_frame + 0x27));
    } while ((*(int *)(gen_frame + 0x8)) < (int)uVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c) GEN_EDX_ARG);
  return bVar2;
}

/* ref: FUN_007dcff0 */
GEN_FRAME uint GEN_STDCALL F_007dcff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dcff0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  byte bVar2;
  byte * pbVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  if ((((*(undefined * PTR32 *)&gen_args[0]) != (undefined *)0x0) && ((*(int *)&gen_args[1]) != 0)) && (*(char *)((*(int *)&gen_args[1]) + 0xa3) != '\a')) {
    bVar2 = F_00a3bef0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    pbVar3 = (byte *)(iVar1 + 0xa5);
    if (*pbVar3 <= bVar2) {
      pbVar3 = ((byte *)GEN_TOP(((int)&(*(undefined * PTR32 *)&gen_args[0]) + 3)));
    }
    return (uint)*pbVar3;
  }
  return 0;
}

/* ref: FUN_007dd030 */
GEN_FRAME uint GEN_THISCALL F_007dd030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7dd030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar2 = *(undefined4 *)((int)this + 0x44);
  uVar3 = *(undefined4 *)((int)this + 0x48);
  uVar1 = *(undefined1 *)((int)this + 0x92);
  if ((param_1 != 0) && ((*(int *)&gen_a2) != 0)) {
    uVar4 = F_00a3d520(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x40),param_1,(*(int *)&gen_a2),param_3);
    if (uVar4 != 0) {
      F_00a369d0();
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG);
      return uVar4;
    }
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG);
  uVar5 = F_007784e0(this GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x44) = uVar2;
  *(int *)((int)this + 0x38) = param_1;
  *(int *)((int)this + 0x3c) = (*(int *)&gen_a2);
  *(undefined4 *)((int)this + 0xc) = 6;
  *(undefined4 *)((int)this + 0x10) = 5;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x48) = uVar3;
  *(undefined1 *)((int)this + 0x92) = uVar1;
  *(undefined4 *)((int)this + 0x4c) = param_3;
  return CONCAT31((int3)((uint)uVar5 >> 8),uVar1);
}

/* ref: FUN_007dd0f0 */
GEN_FRAME uint GEN_STDCALL F_007dd0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7dd0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  byte bVar1;
  
  if (param_2 != 0) {
    if (param_3 != *(int *)(param_2 + 0x74)) {
      return 0x1165;
    }
    if (param_4 < (int)(uint)*(byte *)(param_2 + 0x9f)) {
      return 0x1166;
    }
    if ((char)param_5 == '\0') {
      bVar1 = F_00778a20(param_1);
      if (bVar1 != 0) {
        return 0x1167;
      }
    }
  }
  return 0;
}

/* ref: FUN_007dd150 */
GEN_FRAME uint GEN_STDCALL F_007dd150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd150u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  byte bVar2;
  byte * pbVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  if (((*(undefined * PTR32 *)&gen_args[0]) != (undefined *)0x0) && ((*(int *)&gen_args[1]) != 0)) {
    bVar2 = F_00a3bef0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    pbVar3 = (byte *)(iVar1 + 0xa5);
    if (*pbVar3 <= bVar2) {
      pbVar3 = ((byte *)GEN_TOP(((int)&(*(undefined * PTR32 *)&gen_args[0]) + 3)));
    }
    return (uint)*pbVar3;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCrossEditor::vf1 */
GEN_FRAME uint GEN_THISCALL F_007dd190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7dd190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  
  bVar2 = 0;
  if (0 < param_3) {
    if (param_4 == 1) {
      if ((*param_2 & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_2 + 4);
      }
      bVar2 = F_00778c80(this GEN_EDX_FWD,uVar3);
    }
    else if (param_4 == 2) {
      if ((*param_2 & 0xf) != 0) {
        iVar1 = *(int *)(param_2 + 4);
        if ((iVar1 < 0) || (iVar1 == 1)) {
          *(undefined4 *)(this + 0x6c) = 2;
        }
        else if (iVar1 == 0) goto LAB_007dd1bc;
        *(undefined4 *)(this + 0x68) = 0;
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = 2;
        return (uint)param_1;
      }
LAB_007dd1bc: ;
      *(undefined4 *)(this + 0x6c) = 1;
      *(undefined4 *)(this + 0x68) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return (uint)param_1;
    }
  }
  *(byte *)(param_1 + 1) = bVar2;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_007dd230 */
GEN_FRAME uint GEN_THISCALL F_007dd230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d46dc));
  *(undefined4 *)((int)this + 0x10) = 0;
  F_0042cc20((undefined *)((int)this + 0x14) GEN_EDX_FWD,&REFG(undefined, 0x10be323),REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  return (uint)this;
}

/* ref: FUN_007dd280 */
GEN_NOFRAME uint GEN_THISCALL F_007dd280(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7dd280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d46dc));
  uVar3 = F_0042c880((undefined *)((int)this + 0x14) GEN_EDX_FWD);
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007dd2d0 */
GEN_FRAME byte GEN_THISCALL F_007dd2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x7dd2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 * this_01;
  undefined * pvVar4;
  int iVar5;
  uint * puVar6;
  uint uVar7;
  int iVar8;
  uint * puVar9;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  uVar7 = 0;
  if (((int)param_3 < 0) || (7 < param_3)) {
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0x0;
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = *(undefined * PTR32 *)(&REFG(undefined, 0x10c4510) + param_3 * 4);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x28)),0,0x1e0);
  do {
    uVar3 = F_00ab3c60(uVar7);
    if ((uVar3 != 0) && ((undefined *)(uint)*(byte *)(uVar3 + 8) == (*(undefined * PTR32 *)(gen_frame + 0x1c)))) {
      iVar8 = *(int *)((int)this + 0x28);
      *(uint *)(((undefined1 *)(gen_frame + 0x28)) + iVar8 * 4 - 4) = uVar7;
      *(int *)((int)this + 0x28) = iVar8 + 1;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x79);
  iVar8 = 0;
  bVar2 = true;
  if (0 < *(int *)((int)this + 0x28)) {
    do {
      uVar7 = F_00ab3c60(*(undefined4 *)(((undefined1 *)(gen_frame + 0x28)) + iVar8 * 4 - 4));
      if ((uVar7 != 0) && (uVar7 = F_00ab24a0(*(undefined4 *)(uVar7 + 4)), uVar7 == 0)) {
        bVar2 = false;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)((int)this + 0x28));
    if (!bVar2) {
      F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c) GEN_EDX_ARG);
      return 0;
    }
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  do {
    this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
    if ((this_00 != (undefined *)0x0) && ((*(int *)(gen_frame + 0x20)) = 0, 0 < *(int *)((int)this_00 + 0xc))) {
      do {
        this_01 = (undefined4 *)F_00a37da0(this_00 GEN_EDX_ARG,(*(int *)(gen_frame + 0x20)));
        if (this_01 != (undefined4 *)0x0) {
          if (*(char *)((int)this_01 + 6) == '\0') {
            uVar7 = this_01[2];
            if ((*(byte *)(this_01 + 5) & 1) != 0) {
              uVar7 = uVar7 + 1000000;
            }
          }
          else {
            pvVar4 = (undefined *)F_00a3a860(this_01 GEN_EDX_ARG);
            uVar7 = F_0046e5e0(pvVar4 GEN_EDX_ARG);
          }
          if (uVar7 != 0) {
            if (*(char *)((int)this_01 + 6) == '\0') {
              uVar7 = this_01[2];
              if ((*(byte *)(this_01 + 5) & 1) != 0) {
                uVar7 = uVar7 + 1000000;
              }
            }
            else {
              pvVar4 = (undefined *)F_00a3a860(this_01 GEN_EDX_ARG);
              uVar7 = F_0046e5e0(pvVar4 GEN_EDX_ARG);
            }
            uVar7 = F_00ab24a0(uVar7);
            if ((((uVar7 != 0) && (*(char *)(uVar7 + 0xa0) == '\x0f')) &&
                (uVar3 = F_00ab3c60(*(undefined4 *)(uVar7 + 0x2c)), uVar3 != 0)) &&
               ((undefined *)(uint)*(byte *)(uVar3 + 8) == (*(undefined * PTR32 *)(gen_frame + 0x1c)))) {
              iVar8 = *(int *)((int)this + 0x28);
              iVar5 = 0;
              if (0 < iVar8) {
                do {
                  if (*(int *)(((undefined1 *)(gen_frame + 0x28)) + iVar5 * 4 - 4) == *(int *)(uVar7 + 0x2c)) break;
                  iVar5 = iVar5 + 1;
                } while (iVar5 < iVar8);
              }
              if ((iVar5 != iVar8) && (*((int *)GEN_TOP((*(int *)((int)this + 0x30) + iVar5 * 4))) == 0)) {
                *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x30) + iVar5 * 4))) = this_01;
                F_00a3d750(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*this_01,(uint)*(ushort *)(this_01 + 1));
              }
            }
          }
        }
        (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
      } while ((*(int *)(gen_frame + 0x20)) < *(int *)((int)this_00 + 0xc));
    }
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
  } while ((*(int *)(gen_frame + 0xc)) < 4);
  F_005a2710((undefined *)(param_2 + 0x28) GEN_EDX_ARG,3);
  *(uint *)(param_2 + 0x2c) = param_3;
  uVar1 = *(undefined4 *)((int)this + 0x28);
  F_005a2710((undefined *)(param_2 + 0x30) GEN_EDX_ARG,4);
  *(undefined4 *)(param_2 + 0x34) = uVar1;
  if (param_5 == -1) {
    if ((*(int *)((int)this + 0x2c) == -1) && (0 < *(int *)((int)this + 0x28))) {
      *(undefined4 *)((int)this + 0x2c) = 0;
    }
  }
  else {
    iVar8 = 0;
    if (0 < *(int *)((int)this + 0x28)) {
      do {
        if (param_5 == *(int *)(((undefined1 *)(gen_frame + 0x28)) + iVar8 * 4 - 4)) {
          *(int *)((int)this + 0x2c) = iVar8;
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)((int)this + 0x28));
    }
  }
  uVar1 = *(undefined4 *)((int)this + 0x2c);
  F_005a2710((undefined *)(param_2 + 0x38) GEN_EDX_ARG,3);
  *(undefined4 *)(param_2 + 0x3c) = uVar1;
  (*(int *)(gen_frame + 0x20)) = 0;
  if (0 < *(int *)((int)this + 0x28)) {
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = param_4;
    puVar9 = (uint *)(param_2 + 0x104);
    do {
      uVar7 = (uint)(*((int *)GEN_TOP((*(int *)((int)this + 0x30) + (*(int *)(gen_frame + 0x20)) * 4))) == 0);
      if (((byte)param_6 != 0) && ((uint)(byte)param_6 == *(uint *)(((undefined1 *)(gen_frame + 0x28)) + (*(int *)(gen_frame + 0x20)) * 4 - 4))
         ) {
        uVar7 = uVar7 + 2;
      }
      F_005a2710(puVar9 - 0x31 GEN_EDX_ARG,3);
      uVar1 = *(undefined4 *)(((undefined1 *)(gen_frame + 0x28)) + (*(int *)(gen_frame + 0x20)) * 4 - 4);
      puVar9[-0x30] = uVar7;
      puVar6 = (uint *)F_00ab3c60(uVar1);
      if ((puVar6 != (uint *)0x0) && (uVar7 = F_00ab24a0(puVar6[1]), uVar7 != 0)) {
        uVar3 = F_00ab65a0(puVar6[1],uVar7);
        F_005a2710(puVar9 - 1 GEN_EDX_ARG,3);
        *puVar9 = uVar3;
        uVar3 = *puVar6;
        F_005a2710(puVar9 + 0x2f GEN_EDX_ARG,4);
        puVar9[0x30] = uVar3;
        uVar7 = F_00ab6240(puVar6[1],1,uVar7);
        F_0042e430((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,uVar7);
        uVar7 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
        F_005a2710(puVar9 + 0x5f GEN_EDX_ARG,6);
        puVar9[0x60] = uVar7;
        uVar7 = puVar6[1];
        F_005a2710(puVar9 + 0x8f GEN_EDX_ARG,4);
        puVar9[0x90] = uVar7;
      }
      (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x54);
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
      puVar9 = puVar9 + 2;
    } while ((*(int *)(gen_frame + 0x20)) < *(int *)((int)this + 0x28));
  }
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007dd6f0 */
GEN_FRAME uint GEN_THISCALL F_007dd6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d472c));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d4720));
  puVar2 = in_ecx + 4;
  iVar1 = 1;
  do {
    F_0042b630(puVar2 GEN_EDX_FWD);
    puVar2 = puVar2 + 0x15;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  puVar2 = in_ecx + 0x2e;
  iVar1 = 10;
  do {
    F_0042b630(puVar2 GEN_EDX_ARG);
    puVar2 = puVar2 + 0x15;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  *(undefined2 *)(in_ecx + 0x115) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007dd760 */
GEN_FRAME uint GEN_THISCALL F_007dd760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd760u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4774));
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007dd780 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007dd780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7dd780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return;
}

/* ref: FUN_007dd7c0 */
GEN_FRAME uint GEN_THISCALL F_007dd7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d47bc));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: FUN_007dd800 */
GEN_FRAME uint GEN_THISCALL F_007dd800(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7dd800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa40];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0xa38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa3c);
  puVar1 = ((undefined4 *)(gen_frame + 0x0));
  iVar4 = 0x146;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_00779150(this GEN_EDX_FWD,((undefined4 *)(gen_frame + 0x0)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0x147,((undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0xa38));
  iVar4 = 0x146;
  do {
    this_00 = this_00 - 2;
    uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0xa38)) ^ (uint)(uint)(gen_frame + 0xa3c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_007dd890 */
GEN_FRAME uint GEN_THISCALL F_007dd890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  F_005a2710(param_1 GEN_EDX_FWD,4);
  *(undefined4 *)((int)param_1 + 4) = 2;
  pvVar1 = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  if (pvVar1 == (undefined *)0x0) {
    uVar4 = F_0046ff40();
    uVar2 = (uint)(uVar4 / 1000);
  }
  else {
    uVar2 = F_00975680(pvVar1 GEN_EDX_ARG);
  }
  uVar5 = *(undefined4 *)((int)this + 0x20);
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = F_00462810(pvVar1 GEN_EDX_ARG,0x11e5,uVar5,uVar2);
  uVar2 = F_0042a990(uVar2 GEN_EDX_ARG);
  uVar3 = F_005a2710((undefined *)((int)param_1 + 8) GEN_EDX_ARG,6);
  *(uint *)((int)param_1 + 0xc) = uVar2;
  return uVar3;
}

/* ref: FUN_007dd910 */
GEN_FRAME uint GEN_THISCALL F_007dd910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd910u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4804));
  in_ecx[3] = 0;
  *(undefined2 *)(in_ecx + 4) = 0;
  *(undefined1 *)((int)in_ecx + 0x12) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007dd940 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007dd940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7dd940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return;
}

/* ref: FUN_007dd980 */
GEN_FRAME uint GEN_THISCALL F_007dd980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7dd980u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d484c));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *(undefined2 *)(in_ecx + 7) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007ddb00 */
GEN_FRAME uint GEN_THISCALL F_007ddb00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ddb00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4894));
  return (uint)in_ecx;
}

/* ref: FUN_007ddb20 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007ddb20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ddb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return;
}

/* ref: FUN_007ddb60 */
GEN_FRAME uint GEN_THISCALL F_007ddb60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ddb60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d48dc));
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007ddb80 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007ddb80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ddb80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return;
}

/* ref: FUN_007ddbc0 */
GEN_FRAME uint GEN_THISCALL F_007ddbc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x7ddbc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int param_9 = (int)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((uint *)(gen_frame + 0xc))[3] = uVar2;
  iVar1 = *(int *)((int)this + 0xc);
  ((uint *)(gen_frame + 0xc))[0] = 0x1272;
  ((uint *)(gen_frame + 0xc))[1] = 0x1270;
  ((uint *)(gen_frame + 0xc))[2] = 0x1271;
  if ((iVar1 != 0) && ((byte)param_5 < 3)) {
    **(undefined4 * PTR32 *)((int)this + 0xc) = param_1;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 4))) = param_2;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc8c))) = param_4;
    *((byte *)GEN_TOP((*(int *)((int)this + 0xc) + 0xca4))) = (byte)param_5;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc90))) = param_6;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc94))) = param_7;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc98))) = param_8;
    pvVar3 = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    if (pvVar3 == (undefined *)0x0) {
      uVar4 = F_0046ff40();
      uVar2 = (uint)(uVar4 / 1000);
    }
    else {
      uVar2 = F_00975680(pvVar3 GEN_EDX_ARG);
    }
    *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc9c))) = uVar2 + param_9;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc88))) = param_3;
    uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc90)));
    uVar6 = 0x21;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = F_00462440(pvVar3 GEN_EDX_ARG,uVar5,uVar6);
    F_0042ccf0(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + 0xcfc))) GEN_EDX_ARG,uVar2);
    uVar2 = ((uint *)(gen_frame + 0xc))[(int)((byte)param_5)];
    uVar6 = 0;
    uVar5 = 0;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(pvVar3 GEN_EDX_ARG,uVar2,uVar5,uVar6);
    uVar2 = F_0042e430(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + 0xda4))) GEN_EDX_ARG,uVar2);
  }
  F_00c47745(((uint *)(gen_frame + 0xc))[3] ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_007ddd00 */
GEN_FRAME uint GEN_THISCALL F_007ddd00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7ddd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4924));
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
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
  return (uint)this;
}

/* ref: FUN_007ddd50 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007ddd50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7ddd50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4924));
  piVar2 = (int *)((int)this + 0x1c);
  iVar3 = 10;
  do {
    puVar1 = (undefined4 *)*piVar2;
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return;
}

/* ref: Client::UI2::Agent::AgentRecommendList::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_007dddb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7dddb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if ((REFG(undefined1, 0x14b4ec1) & 2) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
    in_EAX = 0;
    if (*(int *)(uVar1 + 0x18) != 0) {
      return ~(**((uint * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x18) + 0xe4))) >> 0x1f) & 1;
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_007ddde0 */
GEN_FRAME uint GEN_THISCALL F_007ddde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7ddde0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar3 = F_00435250((uint)REFG(undefined1, 0x14ab0d4),0);
  uVar4 = F_00ab21a0(uVar3);
  uVar1 = (*(uint *)&gen_args[3]);
  if ((uVar4 != 0) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) < 10)) {
    if ((REFG(undefined1, 0x14b4ec2) & 0x20) != 0) {
      bVar2 = F_00779a50(&REFG(undefined1, 0x14ab070),uVar3,uVar4,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)));
      uVar4 = CONCAT31(extraout_var,bVar2);
      if (bVar2 != 0) {
        uVar4 = F_00779b90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),uVar1,0,uVar3,10000,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
      }
    }
    if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) < 10) && ((REFG(undefined1, 0x14b4ec2) & 0x40) != 0)) {
      bVar2 = F_00779ae0(&REFG(undefined1, 0x14ab070),(int)&(*(uint *)&gen_args[3]) + 3,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)));
      uVar4 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) {
        uVar4 = F_00779b90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),uVar1,1,(*(uint *)&gen_args[3]) >> 0x18,1000000,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),
                             (*(undefined4 *)(gen_frame + 0x8)));
      }
    }
  }
  return uVar4;
}

/* ref: FUN_007dded0 */
GEN_FRAME byte GEN_THISCALL F_007dded0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7dded0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint * puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 * local_c;
  int local_8;
  
  uVar5 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_FWD,0xffffffff,0);
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 < 4) {
    do {
      iVar1 = *(int *)(&REFG(undefined, 0x10c046c) + *(int *)((int)this + 0x14) * 0xc);
      iVar2 = *(int *)(&REFG(undefined, 0x10c0468) + *(int *)((int)this + 0x14) * 0xc);
      iVar9 = *(int *)((int)this + 0x18);
      while (iVar9 < iVar1 - iVar2) {
        iVar9 = *(int *)((int)this + 0x14);
        if (*(int *)((int)this + 0x18) <
            *(int *)(&REFG(undefined, 0x10c046c) + iVar9 * 0xc) - *(int *)(&REFG(undefined, 0x10c0468) + iVar9 * 0xc)) {
          local_8 = *(int *)(&REFG(undefined, 0x10c0468) + iVar9 * 0xc) + *(int *)((int)this + 0x18);
        }
        else {
          local_8 = 0;
        }
        puVar6 = (uint *)F_00ab38a0(local_8);
        if (puVar6 == (uint *)0x0) {
          return 0;
        }
        iVar9 = local_8;
        uVar7 = F_00a4ffd0();
        bVar4 = F_00b8de30(uVar7,iVar9);
        if (((bVar4 != 0) && ((ushort)*(byte *)((int)puVar6 + 0x31) <= (ushort)uVar5)) &&
           ((ushort)uVar5 <= (ushort)*(byte *)((int)puVar6 + 0x32))) {
          uVar7 = F_00ab3900((uint)(byte)puVar6[0xc]);
          uVar10 = 0;
          uVar8 = F_00404270();
          local_c = (undefined4 *)F_00406bd0(100,0,uVar8,uVar10);
          if (local_c == (undefined4 *)0x0) {
            local_c = (undefined4 *)0x0;
          }
          else {
            *local_c = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
            local_c[1] = 5;
            local_c[2] = 0;
            F_0042b630(local_c + 3 GEN_EDX_ARG);
            *local_c = (*(undefined * PTR32 (*)[1])REFP(0x10c4404));
            local_c[0x18] = 0;
          }
          uVar8 = *puVar6;
          iVar9 = *(int *)(uVar7 + 4);
          iVar3 = *(int *)((int)this + 0x10);
          local_c[2] = iVar9;
          F_0042e430(local_c + 3 GEN_EDX_ARG,(uVar8 & 0xffffff) + (int)puVar6);
          if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4 + iVar3 * 4))) != iVar9) {
            *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4 + iVar3 * 4))) = iVar9;
            *(undefined1 *)(param_1 + 0x1d) = 1;
          }
          uVar7 = F_0042a990(local_c + 3 GEN_EDX_ARG);
          if (uVar7 != *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar3 * 4)))) {
            *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar3 * 4))) = uVar7;
            *(undefined1 *)(param_2 + 0x1d) = 1;
          }
          if (*((undefined * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x28 + iVar3 * 4))) != &REFG(undefined, 0x10be333)) {
            *((undefined * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x28 + iVar3 * 4))) = &REFG(undefined, 0x10be333);
            *(undefined1 *)(param_2 + 0x1d) = 1;
          }
          local_c[0x18] = local_8;
          *((undefined4 * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) * 4 + 0x1c))) = local_c;
          *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
          if (9 < *(int *)((int)this + 0x10)) {
            return 0;
          }
        }
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
        iVar9 = *(int *)((int)this + 0x18);
      }
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
      *(undefined4 *)((int)this + 0x18) = 0;
    } while (*(int *)((int)this + 0x14) < 4);
    iVar1 = *(int *)((int)this + 0x14);
  }
  return 3 < iVar1;
}

/* ref: FUN_007de0d0 */
GEN_FRAME uint GEN_THISCALL F_007de0d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7de0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d496c));
  in_ecx[7] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007de0f0 */
GEN_FRAME unsigned int GEN_THISCALL F_007de0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7de0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d49b4));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = &REFG(undefined, 0x10be336);
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 1;
  *(undefined2 *)((int)in_ecx + 0x49) = 0;
  *(undefined2 *)((int)in_ecx + 0x53) = 0;
  *(undefined4 *)((int)in_ecx + 0x4b) = 0;
  *(undefined4 *)((int)in_ecx + 0x4f) = 0;
  return 0;
}

/* ref: FUN_007de150 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007de150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7de150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return;
}

/* ref: FUN_007de190 */
GEN_FRAME uint GEN_THISCALL F_007de190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7de190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x11960];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x11958)) = 0x7de19d;
  (*(uint *)(gen_frame + 0x11958)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  puVar1 = ((undefined4 *)(gen_frame + 0x10000));
  iVar4 = 0x32a;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_005a2710(((undefined1 *)(gen_frame + 0x10018)) GEN_EDX_FWD,4);
  (*(undefined4 *)(gen_frame + 0x1001c)) = 1;
  F_0077a0b0(this GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x10000)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0x32b,((undefined4 *)(gen_frame + 0x10000)));
  this_00 = &(*(uint *)(gen_frame + 0x11958));
  iVar4 = 0x32a;
  do {
    this_00 = this_00 - 2;
    uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x11958)) ^ (uint)(uint)(gen_frame + 0x0) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_007de230 */
GEN_FRAME uint GEN_THISCALL F_007de230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7de230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x11970];
  bool bVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x11968)) = 0x7de23d;
  (*(uint *)(gen_frame + 0x11968)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  *(uint *)((int)this + 0x3c) = param_1;
  puVar2 = ((undefined4 *)(gen_frame + 0x10010));
  iVar5 = 0x32a;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar5 = iVar5 - 1;
  } while (-1 < iVar5);
  F_005a2710(((undefined1 *)(gen_frame + 0x10028)) GEN_EDX_FWD,4);
  (*(undefined4 *)(gen_frame + 0x1002c)) = 2;
  F_0077a4b0(this GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x10010)),param_1);
  iVar5 = 0;
  bVar1 = false;
  (*(uint *)(gen_frame + 0x10008)) = 0;
  if (*(int *)((int)this + 0x28) != 0) {
    do {
      uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x20) + 0xac + iVar5)));
      iVar6 = *(int *)((int)this + 0x20) + iVar5;
      if (uVar3 == 0) {
        uVar3 = 99;
      }
      else {
        uVar3 = param_1 / uVar3;
      }
      if (*(uint *)(iVar6 + 0xc0) < uVar3) {
        uVar3 = *(uint *)(iVar6 + 0xc0);
      }
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      if (*(uint *)(iVar6 + 0xc4) != uVar3) {
        *(uint *)(iVar6 + 0xc4) = uVar3;
        bVar1 = true;
      }
      (*(uint *)(gen_frame + 0x10008)) = (*(uint *)(gen_frame + 0x10008)) + 1;
      iVar5 = iVar5 + 0xcc;
    } while ((*(uint *)(gen_frame + 0x10008)) < *(uint *)((int)this + 0x28));
    if (bVar1) {
      F_0077a0b0(this GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x10010)));
      F_005a2710(((undefined1 *)(gen_frame + 0x10028)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x1002c)) = 3;
    }
  }
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0x32b,((undefined4 *)(gen_frame + 0x10010)));
  this_00 = &(*(uint *)(gen_frame + 0x11968));
  iVar5 = 0x32a;
  do {
    this_00 = this_00 - 2;
    uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar5 = iVar5 - 1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x11968)) ^ (uint)(uint)(gen_frame + 0x0) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_007de390 */
GEN_FRAME unsigned int GEN_THISCALL F_007de390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7de390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined * this_01;
  undefined4 uVar3;
  
  if (param_1 < *(uint *)((int)this + 0x28)) {
    this_01 = ((undefined *)GEN_TOP((param_1 * 0xcc + *(int *)((int)this + 0x20))));
    *(int *)((int)this_01 + 0xb8) = param_2;
    *(undefined4 *)((int)this_01 + 0xac) = param_4;
    *(uint *)((int)this_01 + 0xb0) = param_3 & 0xffff;
    uVar3 = 0x12;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    uVar1 = F_00461bb0(this_00 GEN_EDX_ARG,uVar3,param_4);
    F_0042e430((undefined *)((int)this_01 + 0x54) GEN_EDX_ARG,uVar1);
    *(undefined1 *)((int)this_01 + 0xbc) = (undefined1)param_5;
    *(undefined4 *)((int)this_01 + 0xa8) = 0xffffffff;
    uVar1 = F_00ab24a0(*(undefined4 *)((int)this_01 + 0xb8));
    if (uVar1 == 0) {
      *(undefined1 *)((int)this + 0x54) = 1;
    }
    else {
      uVar2 = F_00ab6240(*(undefined4 *)((int)this_01 + 0xb8),0,uVar1);
      F_0042e430(this_01 GEN_EDX_ARG,uVar2);
      uVar2 = F_00ab25d0((uint)*(byte *)(uVar1 + 0xa1));
      if (uVar2 == 0) {
        uVar2 = F_00ab65a0(param_2,uVar1);
      }
      else {
        uVar2 = *(uint *)(uVar2 + 4);
      }
      *(uint *)((int)this_01 + 0xa8) = uVar2;
      *(undefined1 *)((int)this_01 + 200) = *(undefined1 *)(uVar1 + 0xbe);
      uVar1 = *(uint *)(uVar1 + 0x28);
      *(uint *)((int)this_01 + 0xc0) = uVar1;
      if (99 < uVar1) {
        *(undefined4 *)((int)this_01 + 0xc0) = 99;
      }
      *(undefined4 *)((int)this_01 + 0xc4) = *(undefined4 *)((int)this_01 + 0xc0);
    }
    if (param_2 - 0x17U < 4) {
      uVar1 = F_00a3c240(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_2);
      *(uint *)((int)this_01 + 0xb4) = uVar1;
      return;
    }
    uVar1 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_2,1,1,1);
    uVar2 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_2,0,1,1);
    *(uint *)((int)this_01 + 0xb4) = uVar1 + uVar2;
  }
  return;
}

/* ref: FUN_007de4e0 */
GEN_FRAME uint GEN_THISCALL F_007de4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7de4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4a04));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d49f8));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  *(undefined1 *)(in_ecx + 8) = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007de530 */
GEN_FRAME uint GEN_THISCALL F_007de530(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7de530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  int iVar3;
  uint in_EAX = 0;
  int iVar4;
  undefined * this_00;
  ulonglong uVar5;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x34);
  if (piVar1 != (int *)0x0) {
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0xffffffff;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x14)),1,0);
    F_005a2670(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x34) = 0;
    in_EAX = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    in_EAX = F_00a70580(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  iVar2 = *(int *)((int)this + 0x30);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 - 4);
    iVar4 = iVar3 - 1;
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)(iVar2 - 4);
    if (-1 < iVar4) {
      this_00 = (undefined *)(iVar3 * 0x58 + 4 + iVar2);
      do {
        this_00 = (undefined *)((int)this_00 - 0x58);
        F_0042c880(this_00 GEN_EDX_ARG);
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
    }
    uVar5 = F_00406b30((*(int * PTR32 *)(gen_frame + 0x18)));
    in_EAX = (uint)uVar5;
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  return in_EAX;
}

/* ref: FUN_007de5d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007de5d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7de5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x10);
  if (this_00 != (undefined *)0x0) {
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    if (*(int *)((int)this + 0x30) != 0) {
      F_00a7b630(this_00 GEN_EDX_FWD,(int)this + 0xc,
                   *((int *)GEN_TOP((*(int *)((int)this + 0x18) * 0x58 + *(int *)((int)this + 0x30)))) - 1);
      return;
    }
    F_00a7b630(this_00 GEN_EDX_ARG,(int)this + 0xc,1);
  }
  return;
}

/* ref: FUN_007de620 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007de620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7de620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x10);
  if ((this_00 != (undefined *)0x0) && (iVar1 = *(int *)((int)this + 0x24), 0 < iVar1)) {
    if (*(int *)((int)this + 0x30) != 0) {
      F_00a7e300(this_00 GEN_EDX_FWD,(int)this + 0xc,
                   *((int *)GEN_TOP((*(int *)((int)this + 0x18) * 0x58 + *(int *)((int)this + 0x30)))) - 1,
                   iVar1);
      return;
    }
    F_00a7e300(this_00 GEN_EDX_ARG,(int)this + 0xc,1,iVar1);
  }
  return;
}

/* ref: FUN_007de670 */
GEN_FRAME uint GEN_THISCALL F_007de670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7de670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  uint * puVar3;
  ushort * puVar4;
  uint uVar5;
  undefined * pvVar6;
  uint * puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_10;
  int local_c;
  
  iVar2 = (int)param_2;
  if ((*(byte *)((int)this + 0x28) & 0x10) == 0) {
    return 0;
  }
  puVar3 = (uint *)F_00a67930(*(undefined4 *)((int)this + 0x10) GEN_EDX_FWD);
  puVar4 = (ushort *)F_00a67950(*(undefined4 *)((int)this + 0x10) GEN_EDX_ARG);
  if ((puVar3[0x4d] < 0x39) || (0x3c < puVar3[0x4d])) {
    F_005a2710((undefined *)((int)param_2 + 0x10d0) GEN_EDX_ARG,4);
    *(undefined4 *)((int)param_2 + 0x10d4) = 1;
    local_10 = 0;
    if ((*puVar4 != 0) && (local_10 = *puVar4 - 1, local_10 != 0)) {
      pvVar6 = (undefined *)((int)param_2 + 0x1110);
      param_2 = puVar4 + 0x2e;
      local_c = local_10;
      do {
        uVar5 = F_0042a990(param_2 GEN_EDX_ARG);
        F_005a2710(pvVar6 GEN_EDX_ARG,8);
        param_2 = param_2 + 0x2c;
        *(uint *)((int)pvVar6 + 4) = uVar5;
        pvVar6 = (undefined *)((int)pvVar6 + 8);
        local_c = local_c - 1;
      } while (local_c != 0);
    }
    F_005a2710((undefined *)(iVar2 + 0x1108) GEN_EDX_ARG,4);
    *(int *)(iVar2 + 0x110c) = local_10;
  }
  else {
    F_005a2710((undefined *)((int)param_2 + 0x10d0) GEN_EDX_ARG,4);
    *(undefined4 *)((int)param_2 + 0x10d4) = 2;
    uVar5 = F_0042a990(puVar4 + 0x2e GEN_EDX_ARG);
    F_005a2710((undefined *)((int)param_2 + 0x1100) GEN_EDX_ARG,8);
    *(uint *)((int)param_2 + 0x1104) = uVar5;
    F_005a2710((undefined *)((int)param_2 + 0x1108) GEN_EDX_ARG,4);
    *(undefined4 *)((int)param_2 + 0x110c) = 0;
    uVar5 = F_0042a990(puVar3 + 0x51 GEN_EDX_ARG);
    F_005a2710((undefined *)((int)param_2 + 0x1220) GEN_EDX_ARG,8);
    *(uint *)((int)param_2 + 0x1224) = uVar5;
  }
  uVar5 = (uint)(ushort)puVar3[0x45];
  uVar8 = 0x23;
  pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar5 = F_00461bb0(pvVar6 GEN_EDX_ARG,uVar8,uVar5);
  F_005a2710((undefined *)(iVar2 + 0x10d8) GEN_EDX_ARG,6);
  *(uint *)(iVar2 + 0x10dc) = uVar5;
  uVar5 = puVar3[0x4c];
  F_005a2710((undefined *)(iVar2 + 0x10e0) GEN_EDX_ARG,4);
  *(uint *)(iVar2 + 0x10e4) = uVar5;
  uVar5 = F_00a67ce0(puVar3[0x4d],(uint)(byte)puVar3[0xb3],(uint)*(byte *)((int)puVar3 + 0x12e));
  F_005a2710((undefined *)(iVar2 + 0x10e8) GEN_EDX_ARG,4);
  *(uint *)(iVar2 + 0x10ec) = uVar5;
  uVar5 = puVar3[0x4e];
  F_005a2710((undefined *)(iVar2 + 0x10f0) GEN_EDX_ARG,4);
  *(uint *)(iVar2 + 0x10f4) = uVar5;
  uVar5 = F_0042a990(puVar3 + 1 GEN_EDX_ARG);
  F_005a2710((undefined *)(iVar2 + 0x10f8) GEN_EDX_ARG,8);
  *(uint *)(iVar2 + 0x10fc) = uVar5;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0x1ca;
  pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar5 = F_0043bd00(pvVar6 GEN_EDX_ARG,uVar8,uVar9,uVar10);
  F_005a2710((undefined *)(iVar2 + 0x11d0) GEN_EDX_ARG,8);
  *(uint *)(iVar2 + 0x11d4) = uVar5;
  iVar1 = (int)(puVar3[0x47] - puVar3[0x46]) / 0x54;
  if (iVar1 != 0) {
    param_2 = (ushort *)(iVar2 + 0x11e0);
    local_10 = 0;
    local_c = iVar1;
    do {
      uVar5 = F_0042a990(puVar3[0x46] + local_10 GEN_EDX_ARG);
      F_005a2710(param_2 GEN_EDX_ARG,8);
      local_10 = local_10 + 0x54;
      *(uint *)((int)param_2 + 4) = uVar5;
      param_2 = (ushort *)((int)param_2 + 8);
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  F_005a2710((undefined *)(iVar2 + 0x11d8) GEN_EDX_ARG,4);
  *(int *)(iVar2 + 0x11dc) = iVar1;
  uVar8 = 0;
  puVar7 = (uint *)F_00a67920(*(undefined4 *)((int)this + 0x10) GEN_EDX_ARG);
  uVar5 = 0;
  if (*puVar7 != 0) {
    puVar4 = (ushort *)puVar7[2];
    do {
      if (*puVar3 == (uint)*puVar4) {
        uVar8 = *(undefined4 *)((ushort *)puVar7[2] + uVar5 * 0x8e + 0x8c);
        goto LAB_007de97c;
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 0x8e;
    } while (uVar5 < *puVar7);
    uVar8 = 0;
  }
LAB_007de97c: ;
  F_005a2710((undefined *)(iVar2 + 0x1228) GEN_EDX_ARG,4);
  *(undefined4 *)(iVar2 + 0x122c) = uVar8;
  uVar8 = *(undefined4 *)((int)this + 0x1c);
  F_005a2710((undefined *)(iVar2 + 0x1230) GEN_EDX_ARG,4);
  *(undefined4 *)(iVar2 + 0x1234) = uVar8;
  return 0x10;
}

/* ref: FUN_007de9e0 */
GEN_FRAME uint GEN_THISCALL F_007de9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7de9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4a4c));
  in_ecx[3] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_007dea10 */
GEN_FRAME uint GEN_THISCALL F_007dea10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7dea10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4a94));
  in_ecx[3] = 0;
  F_0042b630(in_ecx + 4 GEN_EDX_FWD);
  in_ecx[0x19] = 0;
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentBlacklist::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007dea50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7dea50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 100) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 100),0);
    *(undefined4 *)(this + 100) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: FUN_007deab0 */
GEN_FRAME uint GEN_THISCALL F_007deab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7deab0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4adc));
  in_ecx[3] = 0;
  F_0042b630(in_ecx + 4 GEN_EDX_FWD);
  in_ecx[0x19] = 0;
  *(undefined1 *)(in_ecx + 0x1a) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007deaf0 */
GEN_FRAME uint GEN_THISCALL F_007deaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7deaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4b24));
  in_ecx[3] = 0;
  F_0042b630(in_ecx + 4 GEN_EDX_FWD);
  in_ecx[0x1a] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007deb30 */
GEN_NOFRAME uint GEN_THISCALL F_007deb30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7deb30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  piVar2 = *(int * PTR32 *)(uVar1 + 0x24);
  if (piVar2 != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2 GEN_EDX_ARG);
    if (((char)uVar1 != '\0') && (uVar1 = piVar2[0x82], uVar1 == *(uint *)((int)this + 8))) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
    }
  }
  if (*(int *)((int)this + 0x68) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x68),0);
    *(undefined4 *)((int)this + 0x68) = 0;
  }
  return uVar1;
}

/* ref: FUN_007deb90 */
GEN_FRAME uint GEN_THISCALL F_007deb90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7deb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4b74));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4b68));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x564) = 0;
  *(undefined1 *)((int)this + 0xa52) = 0;
  *(undefined4 *)((int)this + 0xa54) = 0;
  puVar1 = (undefined1 *)((int)this + 0xa58);
  iVar5 = 0x1c;
  do {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1 = puVar1 + 8;
    iVar5 = iVar5 - 1;
  } while (-1 < iVar5);
  *(undefined2 *)((int)this + 0xb40) = 0;
  puVar2 = (undefined4 *)((int)this + 0xb44);
  iVar5 = 0x31;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 3;
    iVar5 = iVar5 - 1;
  } while (-1 < iVar5);
  *(undefined4 *)((int)this + 0xd9c) = 0;
  *(undefined4 *)((int)this + 0xda0) = 0;
  *(undefined4 *)((int)this + 0xda4) = 0;
  *(undefined2 *)((int)this + 0xda8) = 0;
  *(undefined1 *)((int)this + 0xdaa) = 0;
  *(undefined4 *)((int)this + 0xdac) = 0;
  *(undefined4 *)((int)this + 0xdb0) = 0;
  *(undefined4 *)((int)this + 0xdb4) = 0;
  *(undefined4 *)((int)this + 0xdb8) = 0;
  *(undefined4 *)((int)this + 0xdc0) = 9999;
  *(undefined1 *)((int)this + 0xdc6) = 0;
  *(undefined4 *)((int)this + 0xdc8) = 0;
  *(undefined4 *)((int)this + 0xdcc) = 0;
  *(undefined4 *)((int)this + 0xdd8) = 0;
  *(undefined4 *)((int)this + 0xddc) = 0;
  *(undefined1 *)((int)this + 0xdd4) = 0;
  *(undefined4 *)((int)this + 0xdd0) = 0x75300000;
  *(undefined1 *)((int)this + 0xdef) = 0;
  *(undefined4 *)((int)this + 0xdf0) = 0;
  *(undefined4 *)((int)this + 0xdfc) = 0;
  *(undefined2 *)((int)this + 0xdc4) = 0;
  *(undefined4 *)((int)this + 0xde0) = 0;
  *(undefined4 *)((int)this + 0xde4) = 0;
  *(undefined2 *)((int)this + 0xde8) = 0;
  *(undefined4 *)((int)this + 0xdea) = 0;
  *(undefined1 *)((int)this + 0xdee) = 0;
  *(undefined4 *)((int)this + 0xdf4) = 0;
  *(undefined1 *)((int)this + 0xdf8) = 0;
  *(undefined4 *)((int)this + 0xe00) = 0;
  *(undefined4 *)((int)this + 0xe04) = 0;
  puVar2 = (undefined4 *)((int)this + 0xe08);
  param_1 = 5;
  do {
    *puVar2 = 0;
    F_0042b630(puVar2 + 1 GEN_EDX_FWD);
    puVar2 = puVar2 + 0x16;
    param_1 = param_1 - 1;
  } while (-1 < param_1);
  *(undefined2 *)((int)this + 0x1018) = 0;
  *(undefined4 *)((int)this + 0x101c) = 0;
  *(undefined4 *)((int)this + 0x1020) = 0;
  F_00c48350((undefined *)((int)this + 0x28),0,0x3a8);
  F_00c48350((undefined *)((int)this + 0xa18),0,0x3a);
  *(undefined4 *)((int)this + 0x564) = 0;
  *(undefined2 *)((int)this + 0x3d0) = 0;
  F_00c48350((undefined *)((int)this + 0x3d4),0,400);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_ARG,0x24);
  if (uVar4 != 0) {
    if (**(int * PTR32 *)(uVar4 + 0x20) != *(int *)((int)this + 0x564)) {
      **(int * PTR32 *)(uVar4 + 0x20) = *(int *)((int)this + 0x564);
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
  }
  uVar4 = 0;
  puVar2 = (undefined4 *)((int)this + 0x568);
  do {
    *(short *)(puVar2 + 2) = (short)uVar4;
    *puVar2 = 0;
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 3;
  } while (uVar4 < 100);
  iVar5 = (int)this + 0xc;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
  F_0043cfd0(iVar5);
  return (uint)this;
}

/* ref: FUN_007dedc0 */
GEN_FRAME uint GEN_THISCALL F_007dedc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7dedc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  ulonglong uVar4;
  undefined4 * puVar5;
  int local_8;
  
  puVar1 = (undefined4 *)((int)this + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4b74));
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10d4b68));
  puVar5 = puVar1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  F_0043cff0(puVar5);
  local_8 = 5;
  this_00 = (undefined *)((int)this + 0x101c);
  do {
    this_00 = (undefined *)((int)this_00 - 0x58);
    uVar4 = F_0042c880(this_00 GEN_EDX_ARG);
    uVar2 = (uint)uVar4;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    uVar2 = F_00414620(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_ARG,puVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007dee60 */
GEN_FRAME byte GEN_THISCALL F_007dee60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7dee60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  if (param_2 < 1) {
    return 1;
  }
  if (((byte)*param_1 & 0xf) != 3) {
    return 1;
  }
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    F_0077b8f0(this GEN_EDX_FWD);
    F_0077b9f0(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0xda4),(int)this + 0x1018);
  }
  else {
    if (iVar1 == 1) {
      if (param_2 < 2) {
        return 0;
      }
      if (((byte)param_1[2] & 0xf) != 3) {
        return 0;
      }
      *(char *)((int)this + 0x1018) = (char)param_1[3];
      return 0;
    }
    if (iVar1 == 2) {
      if (param_2 < 2) {
        return 0;
      }
      if (((byte)param_1[2] & 0xf) != 3) {
        return 0;
      }
      iVar1 = param_1[3];
      if (iVar1 < 0) {
        return 0;
      }
      if (*(int *)((int)this + 0xe04) <= iVar1) {
        return 0;
      }
      *(char *)((int)this + 0x1019) = (char)iVar1;
      return 0;
    }
  }
  *(undefined4 *)((int)this + 0xe00) = 0;
  F_0077ba50(this GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007def30 */
GEN_FRAME byte GEN_THISCALL F_007def30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7def30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  if ((param_2 < 1) || (((byte)*param_1 & 0xf) != 3)) {
    *(undefined4 *)((int)this + 0x1020) = 0;
  }
  else {
    iVar1 = param_1[1];
    *(undefined4 *)((int)this + 0x1020) = 0;
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0xdb4) = 4;
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_007def80 */
GEN_FRAME byte GEN_THISCALL F_007def80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7def80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  if (((0 < param_2) && (((byte)*param_1 & 0xf) == 3)) && (param_1[1] == 0)) {
    if (*(undefined * PTR32 *)((int)this + 0x1c) != (undefined *)0x0) {
      F_00438970(*(undefined * PTR32 *)((int)this + 0x1c) GEN_EDX_FWD,*(undefined4 *)((int)this + 0xdac));
      F_00443e00(*(undefined * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG);
    }
    *(undefined4 *)((int)this + 0xdb4) = 5;
  }
  *(undefined4 *)((int)this + 0x1020) = 0;
  return 1;
}

/* ref: FUN_007defe0 */
GEN_NOFRAME uint GEN_THISCALL F_007defe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7defe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  *(undefined1 *)((int)this + 0x3d1) = 1;
  if (*(int *)((int)this + 0x20) == 0) {
    return in_EAX;
  }
  bVar1 = *(byte *)((int)this + 0xb41);
  if ((bVar1 < 0x32) && (uVar2 = (uint)bVar1, uVar2 < *(byte *)((int)this + 0xb40) + 1)) {
    if (bVar1 == 0) {
      *(undefined4 *)((int)this + 0xb44) = 0;
    }
    else {
      *(undefined4 *)((int)this + uVar2 * 0xc + 0xb44) =
           *(undefined4 *)((int)this + uVar2 * 0xc + 0xb3c);
    }
    uVar2 = F_00435730(*(undefined4 *)((int)this + 0x20) GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0xb41) * 0xc + 0xb48))) = uVar2;
    if (*(byte *)((int)this + 0xb41) < 0x32) {
      uVar2 = F_00435740(*(undefined4 *)((int)this + 0x20) GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)this + ((uint)*(byte *)((int)this + 0xb41) * 3 + 0x2d3) * 4))) = uVar2;
      *(char *)((int)this + 0xb41) = *(char *)((int)this + 0xb41) + '\x01';
      uVar2 = F_0077b010(this GEN_EDX_ARG);
      return uVar2;
    }
    *((undefined4 *)GEN_TOP(((int)this + ((uint)*(byte *)((int)this + 0xb41) * 3 + 0x2d3) * 4))) = 0;
    *(char *)((int)this + 0xb41) = *(char *)((int)this + 0xb41) + '\x01';
  }
  uVar2 = F_0077b010(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_007df0b0 */
GEN_NOFRAME uint GEN_THISCALL F_007df0b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7df0b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0077b1a0(this GEN_EDX_FWD,1);
  return uVar1;
}

/* ref: FUN_007df0c0 */
GEN_NOFRAME uint GEN_THISCALL F_007df0c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7df0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0043f8b0(0x14);
  uVar1 = F_0077adb0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007df0e0 */
GEN_NOFRAME uint GEN_THISCALL F_007df0e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7df0e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (0 < *(int *)((int)this + 0xd9c)) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xd9c),0);
    *(undefined4 *)((int)this + 0xd9c) = 0;
    if (*(int *)((int)this + 0xda0) != *(int *)((int)this + 8)) {
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
  }
  *(undefined4 *)((int)this + 0xda0) = 0;
  uVar2 = F_0077b8f0(this GEN_EDX_ARG);
  if (0 < *(int *)((int)this + 0x101c)) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x101c),0);
    *(undefined4 *)((int)this + 0x101c) = 0;
  }
  *(undefined4 *)((int)this + 0xda4) = 0;
  *(undefined2 *)((int)this + 0xda8) = 0;
  *(undefined1 *)((int)this + 0xdaa) = 0;
  *(undefined4 *)((int)this + 0xdac) = 0;
  *(undefined4 *)((int)this + 0xdb4) = 0;
  *(undefined4 *)((int)this + 0xdb8) = 0;
  return uVar2;
}

/* ref: FUN_007df180 */
GEN_FRAME uint GEN_THISCALL F_007df180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7df180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * this_00;
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  ushort * puVar4;
  byte * pbVar5;
  ulonglong uVar6;
  ushort * local_8;
  
  if (*(int *)((int)this + 0x1c) != 0) {
    bVar2 = F_00438840(*(int *)((int)this + 0x1c) GEN_EDX_FWD);
    if (param_1 < bVar2) {
      uVar3 = F_00438850(*(undefined4 *)((int)this + 0x1c) GEN_EDX_ARG,param_1);
      if (uVar3 != 0) {
        this_00 = (undefined4 *)((int)this + 0xdc0);
        F_00a35f30(this_00 GEN_EDX_ARG);
        F_00a35ee0(this_00 GEN_EDX_ARG,*(undefined4 *)(uVar3 + 0x24),0);
        *this_00 = 9999;
        *(undefined2 *)((int)this + 0xdc4) = (undefined2)param_1;
        *(undefined2 *)((int)this + 0xdd0) = *(undefined2 *)(uVar3 + 0x2c);
        *(undefined2 *)((int)this + 0xdd2) = *(undefined2 *)(uVar3 + 0x2a);
        if (*(char *)(uVar3 + 0x38) == '\x01') {
          *(byte *)((int)this + 0xdd4) = *(byte *)((int)this + 0xdd4) | 1;
        }
        else {
          *(byte *)((int)this + 0xdd4) = *(byte *)((int)this + 0xdd4) & 0xfe;
        }
        F_00a35f80(this_00 GEN_EDX_ARG,*(undefined4 *)(uVar3 + 0x20));
        *(undefined1 *)((int)this + 0xdef) = *(undefined1 *)(uVar3 + 0x3b);
        uVar6 = F_0077ae80(this GEN_EDX_ARG,param_1);
        *(ulonglong *)((int)this + 0xdd8) = uVar6;
        bVar2 = 0;
        local_8 = (ushort *)(uVar3 + 0x2e);
        pbVar5 = (byte *)((int)this + 0xdea);
        puVar4 = (ushort *)((int)this + 0xde0);
        do {
          if (bVar2 < *(byte *)(uVar3 + 0x39)) {
            uVar1 = *local_8;
            *puVar4 = uVar1 >> 4;
            *pbVar5 = (byte)uVar1 & 0xf;
          }
          else {
            *puVar4 = 0;
            *pbVar5 = 0;
          }
          local_8 = local_8 + 1;
          bVar2 = bVar2 + 1;
          puVar4 = puVar4 + 1;
          pbVar5 = pbVar5 + 1;
        } while (bVar2 < 5);
        return (uint)this_00;
      }
    }
  }
  return 0;
}

/* ref: FUN_007df2a0 */
GEN_FRAME uint GEN_THISCALL F_007df2a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7df2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  undefined * this_01;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint local_c;
  uint local_8;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_ARG,0x24);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG,0x21)));
  if ((uVar2 != 0) || (uVar3 = 0, this_00 != (undefined *)0x0)) {
    local_8 = 0;
    uVar3 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,0xb5);
    if (*(int *)(uVar3 + 0x14) == 3) {
      local_8 = F_00a1ae70();
    }
    uVar3 = *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x968)));
    if (0 < (int)uVar3) {
      iVar6 = 0x2c2;
      iVar5 = 0x978;
      local_c = uVar3;
      do {
        iVar4 = *((int *)GEN_TOP((iVar5 + *(int *)(uVar2 + 0x20)))) + local_8;
        uVar7 = 0x7cc;
        this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
        uVar3 = F_00461bb0(this_01 GEN_EDX_ARG,uVar7,iVar4);
        uVar3 = F_00431250(this_00 GEN_EDX_ARG,iVar6,uVar3,0,1,0);
        iVar5 = iVar5 + 0x18;
        iVar6 = iVar6 + 5;
        local_c = local_c - 1;
      } while (local_c != 0);
    }
  }
  return uVar3;
}

/* ref: FUN_007df380 */
GEN_FRAME uint GEN_THISCALL F_007df380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7df380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc60];
  uint * puVar1;
  int iVar2;
  ushort * puVar3;
  int * piVar4;
  uint uVar5;
  undefined * pvVar6;
  uint uVar7;
  uint uVar8;
  undefined * this_00;
  undefined4 * puVar9;
  ushort uVar10;
  ushort * PTR32 * this_01;
  int iVar11;
  undefined1 * this_02;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  puVar3 = (ushort *)(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc5c));
  (*(ushort * PTR32 *)(gen_frame + 0xc58)) = puVar3;
  if ((*(int *)((int)this + 8) != 0) && (*(char *)((int)this + 0x3d0) != '\0')) {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4 GEN_EDX_ARG,0x24);
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG,0x21)));
    if ((uVar5 == 0) || (pvVar6 == (undefined *)0x0)) {
      *(undefined1 *)((int)this + 0x3d0) = 0;
      pvVar6 = F_00c48350((undefined *)((int)this + 0x3d4),0,400);
      F_00c47745((uint)(*(ushort * PTR32 *)(gen_frame + 0xc58)) ^ (uint)(uint)(gen_frame + 0xc5c) GEN_EDX_ARG);
      return (uint)pvVar6;
    }
    (*(ushort * PTR32 *)(gen_frame + 0x10)) = (ushort *)((int)this + 0x3d4);
    (*(ushort * PTR32 *)(gen_frame + 0x1c)) = (ushort *)((int)this + 0x572);
    *(undefined1 *)((int)this + 0x3d0) = 0;
    (*(int *)(gen_frame + 0xc)) = 0;
    iVar11 = 1;
    do {
      iVar2 = *(int *)(*(ushort * PTR32 *)(gen_frame + 0x10));
      puVar3 = (*(ushort * PTR32 *)(gen_frame + 0x10));
      if (iVar2 != 0) {
        uVar7 = F_00ab24a0(iVar2);
        if (uVar7 == 0) {
          if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + iVar11 * 4))) != 0) {
            *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + iVar11 * 4))) = 0;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4 + iVar11 * 4))) != -1) {
            *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4 + iVar11 * 4))) = 0xffffffff;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          F_00431250(pvVar6 GEN_EDX_ARG,iVar11,&REFG(undefined, 0x10be421),0,1,0);
          puVar3 = (ushort *)F_00431250(pvVar6 GEN_EDX_ARG,iVar11 + 1,&REFG(undefined, 0x10be422),0,1,0);
          *(undefined1 *)((int)this + 0x3d0) = 1;
        }
        else {
          if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + iVar11 * 4))) != iVar2) {
            *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + iVar11 * 4))) = iVar2;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          uVar8 = F_00ab65a0(iVar2,uVar7);
          puVar1 = ((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4 + iVar11 * 4)));
          if (*puVar1 != uVar8) {
            *puVar1 = uVar8;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          uVar14 = 0;
          uVar13 = 1;
          uVar12 = 0;
          uVar7 = F_00ab6240(iVar2,0,uVar7);
          F_00431250(pvVar6 GEN_EDX_ARG,iVar11,uVar7,uVar12,uVar13,uVar14);
          uVar10 = 0;
          if (((*(int *)((int)this + 0x20) != 0) &&
              (uVar7 = F_004356f0(*(int *)((int)this + 0x20) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc))), uVar7 != 0)) &&
             (uVar10 = *(ushort *)(uVar7 + 4), 0x270e < uVar10)) {
            uVar10 = 9999;
          }
          uVar15 = 0;
          uVar14 = 1;
          uVar7 = (uint)uVar10;
          uVar13 = 0;
          uVar12 = 0x7ca;
          this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                      (*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
          uVar7 = F_00461bb0(this_00 GEN_EDX_ARG,uVar12,uVar7);
          F_00431250(pvVar6 GEN_EDX_ARG,iVar11 + 1,uVar7,uVar13,uVar14,uVar15);
          *(*(ushort * PTR32 *)(gen_frame + 0x1c)) = uVar10;
          (*(ushort * PTR32 *)(gen_frame + 0x10))[0] = 0;
          (*(ushort * PTR32 *)(gen_frame + 0x10))[1] = 0;
          puVar3 = (*(ushort * PTR32 *)(gen_frame + 0x1c));
        }
      }
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
      (*(ushort * PTR32 *)(gen_frame + 0x10)) = (*(ushort * PTR32 *)(gen_frame + 0x10)) + 2;
      (*(ushort * PTR32 *)(gen_frame + 0x1c)) = (*(ushort * PTR32 *)(gen_frame + 0x1c)) + 6;
      iVar11 = iVar11 + 2;
    } while (iVar11 < 0xc9);
    if (*(char *)((int)this + 0x3d0) == '\0') {
      puVar3 = *(ushort * PTR32 *)((int)this + 0x564);
      **(undefined4 * PTR32 *)(uVar5 + 0x20) = puVar3;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
      if (*(int *)((int)this + 8) != 0) {
        puVar9 = ((undefined4 *)(gen_frame + 0x20));
        iVar11 = 0x186;
        do {
          *puVar9 = 0;
          puVar9 = puVar9 + 2;
          iVar11 = iVar11 - 1;
        } while (-1 < iVar11);
        F_005a2710(((undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,3);
        ((undefined4 *)(gen_frame + 0x20))[1] = 0x20;
        if (*(char *)((int)this + 0x3d1) != '\0') {
          F_005a2710(((undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,3);
          uVar10 = *(ushort *)((int)this + 0x1088);
          ((undefined4 *)(gen_frame + 0x20))[1] = 0x30;
          F_005a2710(((undefined1 *)(gen_frame + 0xc50)) GEN_EDX_ARG,4);
          (*(uint *)(gen_frame + 0xc54)) = (uint)uVar10;
          if (*(short *)((int)this + 0x1088) != 0) {
            (*(ushort * PTR32 *)(gen_frame + 0x1c)) = (ushort *)((int)this + 0x1024);
            this_02 = ((undefined1 *)(gen_frame + 0xac0));
            uVar7 = 0;
            do {
              uVar8 = F_0077b380(this GEN_EDX_ARG,(uint)*(*(ushort * PTR32 *)(gen_frame + 0x1c)));
              F_005a2710(this_02 GEN_EDX_ARG,6);
              uVar10 = *(ushort *)((int)this + 0x1088);
              (*(ushort * PTR32 *)(gen_frame + 0x1c)) = (*(ushort * PTR32 *)(gen_frame + 0x1c)) + 1;
              *(uint *)(this_02 + 4) = uVar8;
              uVar7 = uVar7 + 1;
              this_02 = this_02 + 8;
            } while (uVar7 < uVar10);
          }
        }
        uVar7 = 0;
        if (*(int *)((int)this + 0x564) != 0) {
          uVar8 = 0;
          do {
            uVar10 = *((ushort *)GEN_TOP(((int)this + (uVar8 * 3 + 0x15c) * 4)));
            F_005a2710(((undefined1 *)(gen_frame + 0x798)) + uVar8 * 8 GEN_EDX_ARG,4);
            uVar7 = uVar7 + 1;
            ((uint *)(gen_frame + 0x79c))[(int)(uVar8 * 2)] = (uint)uVar10;
            uVar8 = uVar7 & 0xffff;
          } while (uVar8 < *(uint *)((int)this + 0x564));
        }
        uVar12 = *(undefined4 *)((int)this + 0x564);
        F_005a2710(((undefined1 *)(gen_frame + 0xab8)) GEN_EDX_ARG,4);
        (*(undefined4 *)(gen_frame + 0xabc)) = uVar12;
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0x187,((undefined4 *)(gen_frame + 0x20)));
        uVar7 = 0;
        if (*(int *)((int)this + 0x564) != 0) {
          puVar9 = (undefined4 *)((int)this + 0x568);
          do {
            *(short *)(puVar9 + 2) = (short)uVar7;
            *puVar9 = *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4 + uVar7 * 8)));
            uVar7 = uVar7 + 1;
            puVar9 = puVar9 + 3;
          } while (uVar7 < *(uint *)((int)this + 0x564));
        }
        this_01 = &(*(ushort * PTR32 *)(gen_frame + 0xc58));
        iVar11 = 0x186;
        do {
          this_01 = this_01 - 2;
          puVar3 = (ushort *)F_005a2670(this_01 GEN_EDX_ARG);
          iVar11 = iVar11 - 1;
        } while (-1 < iVar11);
      }
    }
  }
  F_00c47745((uint)(*(ushort * PTR32 *)(gen_frame + 0xc58)) ^ (uint)(uint)(gen_frame + 0xc5c) GEN_EDX_ARG);
  return (uint)puVar3;
}

/* ref: FUN_007df7b0 */
GEN_FRAME uint GEN_THISCALL F_007df7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7df7b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined4 *)((int)this + 0x564) = 0;
  *(undefined2 *)((int)this + 0x3d0) = 0;
  F_00c48350((undefined *)((int)this + 0x3d4),0,400);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_ARG,0x24);
  if (uVar2 != 0) {
    if (**(int * PTR32 *)(uVar2 + 0x20) != *(int *)((int)this + 0x564)) {
      **(int * PTR32 *)(uVar2 + 0x20) = *(int *)((int)this + 0x564);
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG,0x21);
  if (uVar2 != 0) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      uVar6 = 0x7c2;
      break;
    case 1: ;
      uVar6 = 0x7c3;
      break;
    case 2: ;
      uVar6 = 0x7c4;
      break;
    case 3: ;
      uVar6 = 0x7c5;
      break;
    default: ;
      uVar6 = 0x799;
    }
    uVar7 = 0;
    uVar4 = 0;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar3 = F_0043bd00(this_00 GEN_EDX_ARG,uVar6,uVar4,uVar7);
    if (uVar3 != **(uint * PTR32 *)(uVar2 + 0x20)) {
      **(uint * PTR32 *)(uVar2 + 0x20) = uVar3;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  if ((int)param_2 < 0) {
    uVar2 = F_0077af30(this GEN_EDX_ARG,0xffffffff,&REFG(undefined, 0x10be423));
    return uVar2;
  }
  uVar6 = 0;
  uVar4 = 0;
  if (param_2 < 0x48) {
    iVar5 = param_2 + ((int)param_2 / 0x18) * 0x36;
    uVar6 = *(undefined4 *)((int)this + iVar5 * 4 + 0x88);
    uVar4 = *(undefined4 *)((int)this + iVar5 * 4 + 0x100);
  }
  uVar2 = F_0077af30(this GEN_EDX_ARG,uVar6,uVar4);
  return uVar2;
}

/* ref: FUN_007df900 */
GEN_FRAME uint GEN_THISCALL F_007df900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7df900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  ushort uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  uint * this_00;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc3c);
  (*(uint *)(gen_frame + 0xc38)) = uVar2;
  if ((*(int *)((int)this + 8) != 0) && ('\0' < (char)param_1)) {
    puVar3 = ((undefined4 *)(gen_frame + 0x0));
    iVar5 = 0x186;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
    ((undefined4 *)(gen_frame + 0x0))[1] = 2;
    uVar1 = F_0077b300(this GEN_EDX_ARG,param_1);
    F_005a2710(((undefined1 *)(gen_frame + 0x658)) GEN_EDX_ARG,3);
    (*(uint *)(gen_frame + 0x65c)) = (uint)uVar1;
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0x187,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0xc38));
    iVar5 = 0x186;
    do {
      this_00 = this_00 - 2;
      uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc38)) ^ (uint)(uint)(gen_frame + 0xc3c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_007df9d0 */
GEN_FRAME uint GEN_THISCALL F_007df9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x7df9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0x8)) = param_6;
  uVar4 = param_6;
  if (*(int *)((int)this + 0x20) == 0) goto LAB_007dfb63;
  *(undefined2 *)((int)this + 0xb40) = 0;
  F_00c48350((undefined *)((int)this + 0xb44),0,600);
  if (param_1 < 0) {
    F_0042cc20(((char * PTR32 *)(gen_frame + 0x64)) GEN_EDX_ARG,param_2,REFG(undefined4, 0x108cc50));
    uVar4 = F_0042b790(((char * PTR32 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    if (0x28 < uVar4) {
      uVar4 = F_0042d2f0(((char * PTR32 *)(gen_frame + 0x64)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),0,0x28);
      F_0042ccf0(((char * PTR32 *)(gen_frame + 0x64)) GEN_EDX_ARG,uVar4);
      F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    }
    if (*((char * PTR32 *)(gen_frame + 0x64))[0] != '\0') {
      F_0077aec0(this GEN_EDX_ARG,1);
      uVar4 = F_0042a990(((char * PTR32 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      F_00435810(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG,uVar4);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 0x10))))(*(int * PTR32 *)((int)this + 0x20) GEN_EDX_ARG);
    }
    F_0042c880(((char * PTR32 *)(gen_frame + 0x64)) GEN_EDX_ARG);
  }
  else {
    uVar4 = F_0077b260(this GEN_EDX_ARG,param_1,((undefined1 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0xc)));
    if (uVar4 != 0) {
      F_0077aec0(this GEN_EDX_ARG,1);
      uVar3 = (*(uint *)(gen_frame + 0xc));
      iVar2 = param_1 >> 0x1f;
      iVar6 = param_1 / 0x18 + iVar2;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 0;
      (*(uint *)(gen_frame + 0xc)) = uVar3 & 0xffffff00;
      if (iVar6 == iVar2) {
        uVar9 = 0;
        uVar8 = param_4;
LAB_007dfaab: ;
        uVar7 = 1;
      }
      else {
        if (iVar6 - iVar2 == 1) {
          uVar8 = param_5;
          uVar9 = (*(uint *)(gen_frame + 0xc));
          if ((-1 < (int)(*(uint *)(gen_frame + 0x8))) && ((int)(*(uint *)(gen_frame + 0x8)) < *(int *)((int)this + 0xa54))) {
            uVar1 = *(undefined1 *)((int)this + (*(uint *)(gen_frame + 0x8)) * 8 + 0xa58);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = uVar1;
            uVar9 = CONCAT31((int3)(uVar3 >> 8),uVar1);
            (*(uint *)(gen_frame + 0xc)) = uVar9;
          }
          goto LAB_007dfaab;
        }
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
      }
      F_004357e0(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG,uVar4,uVar7,uVar8,uVar9);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 0x10))))(*(int * PTR32 *)((int)this + 0x20) GEN_EDX_ARG);
    }
  }
  F_0077b450(this GEN_EDX_ARG,param_1);
  uVar4 = 0;
  puVar5 = (undefined4 *)((int)this + 0x568);
  do {
    *(short *)(puVar5 + 2) = (short)uVar4;
    *puVar5 = 0;
    uVar4 = uVar4 + 1;
    puVar5 = puVar5 + 3;
  } while (uVar4 < 100);
LAB_007dfb63: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_007dfb80 */
GEN_FRAME unsigned int GEN_THISCALL F_007dfb80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7dfb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  if (*(int *)((int)this + 0x20) != 0) {
    *(undefined4 *)((int)this + 0x564) = 0;
    *(undefined2 *)((int)this + 0x3d0) = 0;
    F_00c48350((undefined *)((int)this + 0x3d4),0,400);
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2 GEN_EDX_ARG,0x24);
    if (uVar3 != 0) {
      if (**(int * PTR32 *)(uVar3 + 0x20) != *(int *)((int)this + 0x564)) {
        **(int * PTR32 *)(uVar3 + 0x20) = *(int *)((int)this + 0x564);
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
    }
    uVar3 = 0;
    puVar4 = (undefined4 *)((int)this + 0x568);
    do {
      *(short *)(puVar4 + 2) = (short)uVar3;
      *puVar4 = 0;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 3;
    } while (uVar3 < 100);
    uVar3 = (uint)*(byte *)((int)this + 0xb40);
    if (param_1 == 1) {
      iVar1 = *((int *)GEN_TOP(((int)this + (uVar3 * 3 + 0x2d3) * 4)));
      if (iVar1 != 0) {
        F_0043fe60(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG,iVar1,100);
        *(char *)((int)this + 0xb40) = *(char *)((int)this + 0xb40) + '\x01';
        return;
      }
    }
    else {
      iVar1 = *(int *)((int)this + uVar3 * 0xc + 0xb44);
      if (iVar1 != *(int *)((int)this + uVar3 * 0xc + 0xb48)) {
        F_0043fe60(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG,iVar1,100);
        *(char *)((int)this + 0xb40) = *(char *)((int)this + 0xb40) - 1;
      }
    }
  }
  return;
}

/* ref: FUN_007dfc60 */
GEN_FRAME unsigned int GEN_THISCALL F_007dfc60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7dfc60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    F_007df0e0(this GEN_EDX_FWD);
    if (*(int *)((int)this + 0x1c) == 0) {
      uVar2 = 9;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
      uVar1 = F_00435440(uVar1 GEN_EDX_ARG,uVar2);
      *(uint *)((int)this + 0x1c) = uVar1;
    }
    *(undefined4 *)((int)this + 0xda4) = param_1;
    if (*(int *)((int)this + 0x1c) != 0) {
      F_00443df0(*(int *)((int)this + 0x1c) GEN_EDX_ARG);
      F_00438870(*(undefined4 *)((int)this + 0x1c) GEN_EDX_ARG,param_1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x10))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG);
    }
    *(undefined2 *)((int)this + 0xda8) = 1;
    *(undefined1 *)((int)this + 0xdaa) = 0;
    *(int *)((int)this + 0xda0) = param_2;
    *(undefined2 *)((int)this + 0x1018) = 0;
  }
  return;
}

/* ref: FUN_007dfce0 */
GEN_FRAME uint GEN_THISCALL F_007dfce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7dfce0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4bbc));
  in_ecx[3] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007dfd10 */
GEN_NOFRAME uint GEN_THISCALL F_007dfd10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7dfd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  piVar2 = *(int * PTR32 *)(uVar1 + 0x24);
  if (piVar2 != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2 GEN_EDX_ARG);
    if (((char)uVar1 != '\0') && (uVar1 = piVar2[0x82], uVar1 == *(uint *)((int)this + 8))) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
    }
  }
  if (*(int *)((int)this + 0x14) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x14),0);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return uVar1;
}

/* ref: FUN_007dfd70 */
GEN_NOFRAME uint GEN_THISCALL F_007dfd70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7dfd70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4c0c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4c00));
  F_0042c880((undefined *)((int)this + 0x110) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x74) GEN_EDX_ARG);
  uVar3 = F_0042c880((undefined *)((int)this + 0x20) GEN_EDX_ARG);
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007dfde0 */
GEN_FRAME uint GEN_THISCALL F_007dfde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7dfde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  undefined4 * puVar2;
  int iVar3;
  
  if ((char)param_1 != '\0') {
    F_00a3a100();
    iVar3 = 0;
    do {
      switch((unsigned int)(uintptr_t)(iVar3)) {
      case 0: ;
        puVar2 = (undefined4 *)((int)this + 200);
        break;
      case 1: ;
        puVar2 = (undefined4 *)((int)this + 0xd4);
        break;
      case 2: ;
        puVar2 = (undefined4 *)((int)this + 0xe0);
        break;
      case 3: ;
        puVar2 = (undefined4 *)((int)this + 0xec);
        break;
      case 4: ;
        puVar2 = (undefined4 *)((int)this + 0xf8);
        break;
      default: ;
        puVar2 = (undefined4 *)0x0;
      }
      F_00a3ced0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x7d2,iVar3,1);
      iVar3 = iVar3 + 1;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
    } while (iVar3 < 5);
  }
  pvVar1 = F_00c48350((undefined *)((int)this + 200),0,0x48);
  return (uint)pvVar1;
}

/* ref: Client::UI2::Agent::AgentLetterEdit::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_007dfe90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7dfe90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x16c) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x16c),0);
    *(undefined4 *)(this + 0x16c) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  uVar2 = F_0042aca0(this + 0x20 GEN_EDX_ARG);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return uVar2;
}

/* ref: FUN_007dfef0 */
GEN_FRAME uint GEN_THISCALL F_007dfef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7dfef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * this_00;
  undefined * this_01;
  undefined4 * puVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  uint * puVar8;
  undefined4 * in_ecx;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(uint *)(gen_frame + 0xd8)) = uVar2;
  if (*(int *)((int)this + 8) != 0) {
    pvVar3 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,0x7d2);
    (*(int *)(gen_frame + 0x8)) = 0;
    do {
      switch((unsigned int)(uintptr_t)((*(int *)(gen_frame + 0x8)))) {
      case 0: ;
        puVar8 = (uint *)((int)this + 200);
        break;
      case 1: ;
        puVar8 = (uint *)((int)this + 0xd4);
        break;
      case 2: ;
        puVar8 = (uint *)((int)this + 0xe0);
        break;
      case 3: ;
        puVar8 = (uint *)((int)this + 0xec);
        break;
      case 4: ;
        puVar8 = (uint *)((int)this + 0xf8);
        break;
      default: ;
        puVar8 = (uint *)0x0;
      }
      this_00 = (undefined *)F_00a363c0(pvVar3 GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
      if (*(char *)((int)this_00 + 6) == '\0') {
        uVar2 = *(uint *)((int)this_00 + 8);
        if ((*(byte *)((int)this_00 + 0x14) & 1) != 0) {
          uVar2 = uVar2 + 1000000;
        }
      }
      else {
        this_01 = (undefined *)F_00a3a860(this_00 GEN_EDX_ARG);
        uVar2 = F_0046e5e0(this_01 GEN_EDX_ARG);
      }
      *puVar8 = uVar2;
      uVar2 = F_00a3a8a0(this_00 GEN_EDX_ARG);
      puVar8[1] = uVar2;
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
    } while ((*(int *)(gen_frame + 0x8)) < 5);
    puVar4 = ((undefined4 *)(gen_frame + 0x10));
    iVar7 = 0x18;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 2;
      iVar7 = iVar7 - 1;
    } while (-1 < iVar7);
    uVar10 = 0;
    uVar2 = F_00404270();
    puVar4 = (undefined4 *)F_00406c00(0x1a8,0,uVar2,uVar10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 5;
      puVar4 = puVar4 + 1;
      iVar7 = 4;
      in_ecx = puVar4;
      do {
        F_0042b630(in_ecx GEN_EDX_ARG);
        in_ecx = in_ecx + 0x15;
        iVar7 = iVar7 - 1;
      } while (-1 < iVar7);
    }
    *(undefined4 * PTR32 *)((int)this + 0x164) = puVar4;
    uVar2 = F_00ab24a0(*(undefined4 *)((int)this + 200));
    if (uVar2 != 0) {
      uVar5 = F_00ab65a0(*(undefined4 *)((int)this + 200),uVar2);
      F_005a2710(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
      (*(uint *)(gen_frame + 0x24)) = uVar5;
      uVar5 = F_00ab6240(*(undefined4 *)((int)this + 200),0,uVar2);
      F_0042e430(*(undefined * PTR32 *)((int)this + 0x164) GEN_EDX_ARG,uVar5);
      uVar5 = F_0042a990(*(undefined4 *)((int)this + 0x164) GEN_EDX_ARG);
      F_005a2710(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0xa4)) = uVar5;
      if (*(uint *)(uVar2 + 0x28) < 2) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)((int)this + 0xcc);
      }
      F_005a2710(((undefined1 *)(gen_frame + 0x48)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x4c)) = uVar10;
      F_005a2710(((undefined1 *)(gen_frame + 0x78)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x7c)) = 0x7d2;
    }
    uVar2 = F_00ab24a0(*(undefined4 *)((int)this + 0xd4));
    if (uVar2 != 0) {
      uVar5 = F_00ab65a0(*(undefined4 *)((int)this + 0xd4),uVar2);
      F_005a2710(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG,4);
      (*(uint *)(gen_frame + 0x2c)) = uVar5;
      uVar5 = F_00ab6240(*(undefined4 *)((int)this + 0xd4),0,uVar2);
      F_0042e430(((undefined *)GEN_TOP((*(int *)((int)this + 0x164) + 0x54))) GEN_EDX_ARG,uVar5);
      uVar5 = F_0042a990(*(int *)((int)this + 0x164) + 0x54 GEN_EDX_ARG);
      F_005a2710(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0xac)) = uVar5;
      if (*(uint *)(uVar2 + 0x28) < 2) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)((int)this + 0xd8);
      }
      F_005a2710(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x54)) = uVar10;
      F_005a2710(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x84)) = 0x7d2;
    }
    uVar2 = F_00ab24a0(*(undefined4 *)((int)this + 0xe0));
    if (uVar2 != 0) {
      uVar5 = F_00ab65a0(*(undefined4 *)((int)this + 0xe0),uVar2);
      F_005a2710(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,4);
      (*(uint *)(gen_frame + 0x34)) = uVar5;
      uVar5 = F_00ab6240(*(undefined4 *)((int)this + 0xe0),0,uVar2);
      F_0042e430(((undefined *)GEN_TOP((*(int *)((int)this + 0x164) + 0xa8))) GEN_EDX_ARG,uVar5);
      uVar5 = F_0042a990(*(int *)((int)this + 0x164) + 0xa8 GEN_EDX_ARG);
      F_005a2710(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0xb4)) = uVar5;
      if (*(uint *)(uVar2 + 0x28) < 2) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)((int)this + 0xe4);
      }
      F_005a2710(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x5c)) = uVar10;
      F_005a2710(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x8c)) = 0x7d2;
    }
    uVar2 = F_00ab24a0(*(undefined4 *)((int)this + 0xec));
    if (uVar2 != 0) {
      uVar5 = F_00ab65a0(*(undefined4 *)((int)this + 0xec),uVar2);
      F_005a2710(((undefined1 *)(gen_frame + 0x38)) GEN_EDX_ARG,4);
      (*(uint *)(gen_frame + 0x3c)) = uVar5;
      uVar5 = F_00ab6240(*(undefined4 *)((int)this + 0xec),0,uVar2);
      F_0042e430(((undefined *)GEN_TOP((*(int *)((int)this + 0x164) + 0xfc))) GEN_EDX_ARG,uVar5);
      uVar5 = F_0042a990(*(int *)((int)this + 0x164) + 0xfc GEN_EDX_ARG);
      F_005a2710(((undefined1 *)(gen_frame + 0xb8)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0xbc)) = uVar5;
      if (*(uint *)(uVar2 + 0x28) < 2) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)((int)this + 0xf0);
      }
      F_005a2710(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x64)) = uVar10;
      F_005a2710(((undefined1 *)(gen_frame + 0x90)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x94)) = 0x7d2;
    }
    uVar2 = F_00ab24a0(*(undefined4 *)((int)this + 0xf8));
    if (uVar2 != 0) {
      uVar5 = F_00ab65a0(*(undefined4 *)((int)this + 0xf8),uVar2);
      F_005a2710(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,4);
      (*(uint *)(gen_frame + 0x44)) = uVar5;
      uVar5 = F_00ab6240(*(undefined4 *)((int)this + 0xf8),0,uVar2);
      F_0042e430(((undefined *)GEN_TOP((*(int *)((int)this + 0x164) + 0x150))) GEN_EDX_ARG,uVar5);
      uVar5 = F_0042a990(*(int *)((int)this + 0x164) + 0x150 GEN_EDX_ARG);
      F_005a2710(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0xc4)) = uVar5;
      if (*(uint *)(uVar2 + 0x28) < 2) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)((int)this + 0xfc);
      }
      F_005a2710(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x6c)) = uVar10;
      F_005a2710(((undefined1 *)(gen_frame + 0x98)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x9c)) = 0x7d2;
    }
    uVar10 = *(undefined4 *)((int)this + 0x108);
    uVar9 = 0x14;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = F_00461bb0(pvVar3 GEN_EDX_ARG,uVar9,uVar10);
    F_0042e430((undefined *)((int)this + 0x110) GEN_EDX_ARG,uVar2);
    uVar2 = F_0042a990((int)this + 0x110 GEN_EDX_ARG);
    F_005a2710(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x74)) = uVar2;
    F_005a2710(((undefined1 *)(gen_frame + 0xc8)) GEN_EDX_ARG,4);
    uVar10 = *(undefined4 *)((int)this + 0x16c);
    (*(uint *)(gen_frame + 0xcc)) = (uint)((char)param_1 != '\0');
    F_005a2710(((undefined1 *)(gen_frame + 0xd0)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0xd4)) = uVar10;
    piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x5c))(piVar6 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0x19,((undefined4 *)(gen_frame + 0x10)));
    iVar7 = *(int *)((int)this + 0x164);
    if (iVar7 != 0) {
      iVar1 = *(int *)(iVar7 - 4);
      pvVar3 = (undefined *)(iVar1 * 0x54 + iVar7);
      while (iVar1 = iVar1 - 1, -1 < iVar1) {
        pvVar3 = (undefined *)((int)pvVar3 - 0x54);
        F_0042c880(pvVar3 GEN_EDX_ARG);
      }
      F_00406b30(iVar7 - 4);
    }
    puVar8 = &(*(uint *)(gen_frame + 0xd8));
    iVar7 = 0x18;
    do {
      puVar8 = puVar8 - 2;
      uVar2 = F_005a2670(puVar8 GEN_EDX_ARG);
      iVar7 = iVar7 - 1;
    } while (-1 < iVar7);
  }
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_007e04c0 */
GEN_FRAME uint GEN_THISCALL F_007e04c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7e04c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined * pvVar2;
  undefined4 * this_00;
  uint uVar3;
  undefined * this_01;
  uint * puVar4;
  
  if (*(int *)((int)this + 0x16c) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x16c),0);
    *(undefined4 *)((int)this + 0x16c) = 0;
  }
  pvVar2 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_3);
  this_00 = (undefined4 *)F_00a37da0(pvVar2 GEN_EDX_ARG,param_2);
  uVar3 = F_00a37c50(this_00 GEN_EDX_ARG);
  if (uVar3 == 0) {
    F_0077bd50(this GEN_EDX_ARG,param_2,param_3,0);
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      puVar4 = (uint *)((int)this + 200);
      break;
    case 1: ;
      puVar4 = (uint *)((int)this + 0xd4);
      break;
    case 2: ;
      puVar4 = (uint *)((int)this + 0xe0);
      break;
    case 3: ;
      puVar4 = (uint *)((int)this + 0xec);
      break;
    case 4: ;
      puVar4 = (uint *)((int)this + 0xf8);
      break;
    default: ;
      puVar4 = (uint *)0x0;
    }
    F_00a47f70(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*this_00,(uint)*(ushort *)(this_00 + 1),0x7d2,param_1,1);
    *(undefined2 *)(puVar4 + 2) = (undefined2)param_3;
    *(undefined2 *)((int)puVar4 + 10) = (undefined2)param_2;
    pvVar2 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x7d2);
    pvVar2 = (undefined *)F_00a363c0(pvVar2 GEN_EDX_ARG,param_1);
    *(undefined * PTR32 *)((int)this + 0x168) = pvVar2;
    if (*(char *)((int)pvVar2 + 6) != '\0') {
      this_01 = (undefined *)F_00a3a860(pvVar2 GEN_EDX_ARG);
      uVar3 = F_0046e5e0(this_01 GEN_EDX_ARG);
      *puVar4 = uVar3;
      uVar3 = F_00a3a8a0(pvVar2 GEN_EDX_ARG);
      puVar4[1] = uVar3;
      return uVar3;
    }
    uVar3 = *(uint *)((int)pvVar2 + 8);
    if ((*(byte *)((int)pvVar2 + 0x14) & 1) != 0) {
      uVar3 = uVar3 + 1000000;
    }
    *puVar4 = uVar3;
    uVar3 = F_00a3a8a0(pvVar2 GEN_EDX_ARG);
    puVar4[1] = uVar3;
  }
  return uVar3;
}

/* ref: FUN_007e0610 */
GEN_NOFRAME uint GEN_THISCALL F_007e0610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e0610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  uVar1 = *(uint *)(uVar1 + 0x28);
  if ((((*(int *)((int)this + 200) != 0) && (*(int *)((int)this + 0xd4) != 0)) &&
      (*(int *)((int)this + 0xe0) != 0)) &&
     ((*(int *)((int)this + 0xec) != 0 && (*(int *)((int)this + 0xf8) != 0)))) {
    *(undefined4 *)(uVar1 + 0x1d0) = 0;
    *(undefined4 *)(uVar1 + 0x1d4) = 0;
    *(undefined1 *)(uVar1 + 0x1dc) = 0;
    *(undefined4 *)(uVar1 + 0x1d8) = 0;
    return uVar1;
  }
  *(undefined4 *)(uVar1 + 0x1d0) = 0x5e;
  *(int *)(uVar1 + 0x1d4) = (int)this + 0xc;
  *(undefined1 *)(uVar1 + 0x1dc) = 1;
  *(undefined4 *)(uVar1 + 0x1d8) = 0;
  return uVar1;
}

/* ref: FUN_007e0690 */
GEN_FRAME uint GEN_THISCALL F_007e0690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e0690u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4c54));
  in_ecx[3] = 0;
  in_ecx[4] = 0xffffffff;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *(undefined1 *)(in_ecx + 7) = 1;
  in_ecx[8] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007e06d0 */
GEN_FRAME byte GEN_THISCALL F_007e06d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e06d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined * this_00;
  int * piVar5;
  int iVar6;
  undefined4 * in_ecx;
  undefined4 uVar7;
  
  if (*(int *)((int)this + 0x18) == 0) {
    uVar7 = 0;
    uVar3 = F_00404270();
    puVar4 = (undefined4 *)F_00406c00(0x1a8,0,uVar3,uVar7);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 5;
      puVar4 = puVar4 + 1;
      iVar6 = 4;
      in_ecx = puVar4;
      do {
        F_0042b630(in_ecx GEN_EDX_ARG);
        in_ecx = in_ecx + 0x15;
        iVar6 = iVar6 - 1;
      } while (-1 < iVar6);
    }
    *(undefined4 * PTR32 *)((int)this + 0x18) = puVar4;
  }
  uVar7 = 6;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
  this_00 = (undefined *)F_00435440(uVar3 GEN_EDX_ARG,uVar7);
  *(undefined * PTR32 *)((int)this + 0xc) = this_00;
  if ((this_00 != (undefined *)0x0) && (bVar2 = F_00444300(this_00 GEN_EDX_ARG,param_1), bVar2 != 0)) {
    if ((*(int *)((int)this + 0x10) != param_1) && (*(int *)((int)this + 0x20) != 0)) {
      piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x54))(piVar5 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x20),0);
      *(undefined4 *)((int)this + 0x20) = 0;
    }
    pcVar1 = *(gen_code32 *)(*(int *)this + 8);
    *(int *)((int)this + 0x10) = param_1;
    *(undefined1 *)((int)this + 0x1c) = 0;
    (*pcVar1)(this);
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentLetterView::vf3 */
GEN_FRAME uint GEN_THISCALL F_007e07a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e07a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  ulonglong uVar5;
  
  iVar1 = *(int *)(this + 0x18);
  uVar4 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 - 4);
    this_00 = (undefined *)(iVar2 * 0x54 + iVar1);
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      this_00 = (undefined *)((int)this_00 - 0x54);
      F_0042c880(this_00 GEN_EDX_FWD);
    }
    uVar5 = F_00406b30(iVar1 - 4);
    uVar4 = (uint)uVar5;
    *(undefined4 *)(this + 0x18) = 0;
  }
  if (*(int *)(this + 0x20) != 0) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x20),0);
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar4;
}

/* ref: FUN_007e0840 */
GEN_FRAME uint GEN_THISCALL F_007e0840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e0840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4ca4));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d4c98));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  F_0042b630(in_ecx + 6 GEN_EDX_FWD);
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x1c] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_007e0890 */
GEN_NOFRAME uint GEN_THISCALL F_007e0890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e0890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4ca4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4c98));
  if (*(int *)((int)this + 0x84) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x84),0);
    *(undefined4 *)((int)this + 0x84) = 0;
  }
  uVar3 = F_0042c880((undefined *)((int)this + 0x18) GEN_EDX_ARG);
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentLinkshell::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007e0920(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e0920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  if (*(int *)(this + 0x84) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x84),0);
    *(undefined4 *)(this + 0x84) = 0;
  }
  return;
}

/* ref: Client::UI2::Agent::AgentLinkshell::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_007e0980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e0980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined3 extraout_var_00 = 0;
  uint uVar3;
  undefined4 uVar4;
  
  bVar1 = F_004351d0();
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    uVar4 = 2;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x44))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG);
    uVar2 = F_00435440(uVar2 GEN_EDX_ARG,uVar4);
    if (uVar2 != 0) {
      bVar1 = F_004393f0(uVar2 GEN_EDX_ARG);
      uVar2 = CONCAT31(extraout_var_00,bVar1);
      if (bVar1 == 0) goto LAB_007e09d1;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG);
    uVar2 = 0;
    if (*(int *)(uVar3 + 0x18) != 0) {
      return ~(**((uint * PTR32 *)GEN_TOP((*(int *)(uVar3 + 0x18) + 0xe4))) >> 0x1c) & 1;
    }
  }
LAB_007e09d1: ;
  return uVar2 & 0xffffff00;
}

/* ref: FUN_007e09e0 */
GEN_FRAME uint GEN_THISCALL F_007e09e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e09e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x10d4cec));
  in_ecx[3] = 0;
  F_0042b630(in_ecx + 5 GEN_EDX_FWD);
  in_ecx[0x1a] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007e0a20 */
GEN_NOFRAME uint GEN_THISCALL F_007e0a20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e0a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x10d4cec));
  uVar3 = F_0042c880((undefined *)((int)this + 0x14) GEN_EDX_FWD);
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentPartyInvite::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007e0a70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e0a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  iVar1 = *(int *)(this + 0x68);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x68) = 0;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,iVar1,0);
  }
  return;
}

/* ref: FUN_007e0ad0 */
GEN_FRAME uint GEN_THISCALL F_007e0ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e0ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4d44));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d4d34));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  F_0042b630(in_ecx + 6 GEN_EDX_FWD);
  return (uint)in_ecx;
}

/* ref: FUN_007e0b10 */
GEN_NOFRAME uint GEN_THISCALL F_007e0b10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e0b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4d44));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4d34));
  uVar3 = F_0042c880((undefined *)((int)this + 0x18) GEN_EDX_FWD);
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007e0b70 */
GEN_NOFRAME uint GEN_THISCALL F_007e0b70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e0b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  piVar2 = *(int * PTR32 *)(uVar1 + 0x24);
  if (piVar2 != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2 GEN_EDX_ARG);
    if (((char)uVar1 != '\0') && (uVar1 = piVar2[0x82], uVar1 == *(uint *)((int)this + 8))) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
    }
  }
  if (*(int *)((int)this + 0x14) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x14),0);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return uVar1;
}

/* ref: FUN_007e0bd0 */
GEN_FRAME uint GEN_THISCALL F_007e0bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e0bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  byte bVar3;
  
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4d94));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4d88));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG)));
  iVar1 = *piVar2;
  F_0042b630((int)this + 0x18 GEN_EDX_ARG);
  F_0042aca0((int)this + 0x18 GEN_EDX_ARG);
  bVar3 = REFG(undefined1, 0x132814a) & 0x1f;
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(int *)((int)this + 0x74) = (1 << bVar3) - 1;
  *(undefined4 *)((int)this + 0x78) = 1;
  *(undefined4 *)((int)this + 0x7c) = 0x32;
  *(undefined4 *)((int)this + 0x80) = 1;
  *(undefined2 *)((int)this + 0x84) = 0;
  if (-1 < iVar1) {
    bVar3 = (byte)iVar1;
    *(byte *)((int)this + 0x86) = bVar3;
    *(char *)((int)this + 0x84) = '\x01' << (bVar3 & 0x1f);
  }
  return (uint)this;
}

/* ref: FUN_007e0c80 */
GEN_NOFRAME uint GEN_THISCALL F_007e0c80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e0c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4d94));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4d88));
  uVar3 = F_0042c880((undefined *)((int)this + 0x18) GEN_EDX_FWD);
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007e0ce0 */
GEN_NOFRAME uint GEN_THISCALL F_007e0ce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e0ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  piVar2 = *(int * PTR32 *)(uVar1 + 0x24);
  if (piVar2 != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2 GEN_EDX_ARG);
    if (((char)uVar1 != '\0') && (uVar1 = piVar2[0x82], uVar1 == *(uint *)((int)this + 8))) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
    }
  }
  if (*(int *)((int)this + 0x14) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x14),0);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return uVar1;
}

/* ref: FUN_007e0d40 */
GEN_FRAME uint GEN_THISCALL F_007e0d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e0d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined2 * puVar2;
  undefined1 * puVar3;
  int iVar4;
  
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4de4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4dd8));
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x18))(param_1 GEN_EDX_FWD);
  *(uint *)((int)this + 0x10) = uVar1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x3000000;
  *(undefined1 *)((int)this + 0x24) = 1;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined2 *)((int)this + 0x40) = 0x11;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined2 *)((int)this + 0x6c) = 0;
  F_0042b630((int)this + 0x70 GEN_EDX_ARG);
  F_0090d0d0((undefined *)((int)this + 0xc4) GEN_EDX_ARG);
  *(undefined2 *)((int)this + 0x174) = 0;
  F_0042b630((int)this + 0x178 GEN_EDX_ARG);
  F_0042b630((int)this + 0x1cc GEN_EDX_ARG);
  *(undefined1 *)((int)this + 0x220) = 0;
  F_0042b630((int)this + 0x224 GEN_EDX_ARG);
  F_0042b630((int)this + 0x278 GEN_EDX_ARG);
  puVar2 = (undefined2 *)((int)this + 0x2cc);
  iVar4 = 0x1d;
  do {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 7) = 0;
    puVar2 = puVar2 + 8;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  *(undefined2 *)((int)this + 0x4ac) = 0;
  *(undefined1 *)((int)this + 0x4ae) = 0;
  *(undefined2 *)((int)this + 0x4b2) = 0;
  *(undefined2 *)((int)this + 0x4be) = 0;
  *(undefined1 *)((int)this + 0x4b0) = 0;
  *(undefined1 *)((int)this + 0x4b4) = 0;
  *(undefined4 *)((int)this + 0x4b8) = 0;
  *(undefined1 *)((int)this + 0x4bc) = 0;
  *(undefined1 *)((int)this + 0x4c0) = 0;
  *(undefined4 *)((int)this + 0x4c4) = 0;
  *(undefined1 *)((int)this + 0x4c8) = 0;
  *(undefined2 *)((int)this + 0x4ca) = 0;
  *(undefined1 *)((int)this + 0x4cc) = 0;
  *(undefined4 *)((int)this + 0x4d0) = 0;
  puVar3 = (undefined1 *)((int)this + 0x4d4);
  iVar4 = 0xe;
  do {
    *puVar3 = 0;
    *(undefined2 *)(puVar3 + 2) = 0;
    puVar3[4] = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    puVar3 = puVar3 + 0xc;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  *(undefined1 *)((int)this + 0x588) = 0;
  *(undefined2 *)((int)this + 0x58a) = 0;
  *(undefined1 *)((int)this + 0x58c) = 0;
  *(undefined4 *)((int)this + 0x590) = 0;
  *(undefined4 *)((int)this + 0x594) = 0;
  F_00a1af40((undefined *)((int)this + 0x598) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x5b0) = 0;
  *(undefined4 *)((int)this + 0x42) = 0;
  *(undefined4 *)((int)this + 0x46) = 0;
  *(undefined4 *)((int)this + 0x4a) = 0;
  *(undefined4 *)((int)this + 0x4e) = 0;
  *(undefined4 *)((int)this + 0x5b4) = 0;
  *(undefined4 *)((int)this + 0x5b8) = 0;
  *(undefined4 *)((int)this + 0x5bc) = 0;
  return (uint)this;
}

/* ref: FUN_007e0f00 */
GEN_NOFRAME uint GEN_THISCALL F_007e0f00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e0f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4de4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4dd8));
  F_0042c880((undefined *)((int)this + 0x278) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x224) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x1cc) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x178) GEN_EDX_ARG);
  uVar3 = F_0042c880((undefined *)((int)this + 0x70) GEN_EDX_ARG);
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007e0f80 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007e0f80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e0f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x54) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x54),0);
    *(undefined4 *)((int)this + 0x54) = 0;
  }
  if (*(int *)((int)this + 0x5c) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x5c),0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return;
}

/* ref: FUN_007e0fe0 */
GEN_FRAME byte GEN_THISCALL F_007e0fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e0fe0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  ushort uVar1;
  byte bVar2;
  uint in_ecx;
  undefined * this_00;
  undefined4 * puVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((*(*(byte * PTR32 *)&gen_args[1]) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 4)));
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  if (iVar4 < 0) {
    return 1;
  }
  uVar5 = 0xb;
  in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_FWD);
  this_00 = (undefined *)F_00435440(in_ecx GEN_EDX_ARG,uVar5);
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))))) {
  case 0: ;
    if ((((iVar4 == 0) && (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != (undefined *)0x0)) &&
        (puVar3 = (undefined4 *)
                  F_004360f0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))),
                               *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))),0), puVar3 != (undefined4 *)0x0))
       && (this_00 != (undefined *)0x0)) {
      if ((*(byte *)((int)puVar3 + 0x13) & 1) != 0) {
        F_0044ab20(this_00 GEN_EDX_ARG,*puVar3,puVar3[1]);
        return 1;
      }
      F_0044aaf0(this_00 GEN_EDX_ARG,puVar3 + 7);
      return 1;
    }
    break;
  case 1: ;
    if ((iVar4 == 0) && (this_00 != (undefined *)0x0)) {
      F_00441440(this_00 GEN_EDX_ARG);
      return 1;
    }
    break;
  case 2: ;
    if (iVar4 == 0) {
      F_0077cd30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0x98);
      return 1;
    }
    break;
  case 3: ;
    if ((iVar4 == 0) && (this_00 != (undefined *)0x0)) {
      F_00441750(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x41))));
      return 1;
    }
    break;
  case 4: ;
    if ((iVar4 == 0) && (this_00 != (undefined *)0x0)) {
      if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) != 0 || *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) != 0) &&
         (*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) != 0x11)) {
        F_004418f0(this_00 GEN_EDX_ARG,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))),
                     (uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))));
        F_007e0f80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
        *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0x11;
        return 1;
      }
    }
    goto LAB_007e1157;
  case 5: ;
    if ((iVar4 == 0) && (this_00 != (undefined *)0x0)) {
      if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) != 0 || *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) != 0) &&
         (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) != '\x11')) {
        F_0044ac20(this_00 GEN_EDX_ARG,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))));
        F_007e0f80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      }
    }
LAB_007e1157: ;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0x11;
    return 1;
  case 6: ;
    if ((iVar4 == 0) && (this_00 != (undefined *)0x0)) {
      uVar1 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58a)));
      (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[1]), 1, 3),*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x588))))));
      bVar2 = F_0077dc00((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,1,(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x588))),(uint)uVar1);
      if (bVar2 != 0) {
        F_004410e0((uint)uVar1,(*(byte * PTR32 *)&gen_args[1]));
        return 1;
      }
    }
    break;
  case 7: ;
    if ((iVar4 == 0) && (this_00 != (undefined *)0x0)) {
      uVar1 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58a)));
      (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[1]), 1, 3),*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x588))))));
      bVar2 = F_0077dc00((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0,(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x588))),(uint)uVar1);
      if (bVar2 != 0) {
        F_00441030((uint)uVar1,(*(byte * PTR32 *)&gen_args[1]));
        return 1;
      }
    }
    break;
  case 8: ;
    if ((iVar4 == 0) && (this_00 != (undefined *)0x0)) {
      uVar1 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58a)));
      (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[1]), 1, 3),*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x588))))));
      bVar2 = F_0077dc00((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0,(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x588))),(uint)uVar1);
      if (bVar2 != 0) {
        F_00440f80((uint)uVar1,(*(byte * PTR32 *)&gen_args[1]));
      }
    }
  }
  return 1;
}

/* ref: FUN_007e1250 */
GEN_NOFRAME uint GEN_THISCALL F_007e1250(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e1250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  if (*(byte *)((int)this + 0x20) == 0) {
    F_0044ac80(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_FWD,1,0);
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2 GEN_EDX_ARG,0x27);
    if (uVar1 != 0) {
      if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x190c))) != 1) {
        *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x190c))) = 1;
        *(undefined1 *)(uVar1 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x1900))) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x1900))) = 0;
        *(undefined1 *)(uVar1 + 0x1d) = 1;
      }
    }
  }
  else {
    uVar1 = *(byte *)((int)this + 0x20) - 1;
    if ((uVar1 == 0) && (*(char *)((int)this + 0x21) == '\0')) {
      if (*(char *)((int)this + 0x23) == '\x01') {
        uVar3 = 1;
      }
      else {
        uVar3 = 3;
      }
      F_0044ac80(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,uVar3,
                   (uint)(ushort)((ushort)*(byte *)((int)this + 0x22) * 200));
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2 GEN_EDX_ARG,0x27);
      if (uVar1 != 0) {
        if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x190c))) != 1) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x190c))) = 1;
          *(undefined1 *)(uVar1 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x1900))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x1900))) = 0;
          *(undefined1 *)(uVar1 + 0x1d) = 1;
        }
      }
      uVar1 = F_0077c9a0(this GEN_EDX_ARG);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_007e1340 */
GEN_FRAME uint GEN_THISCALL F_007e1340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e1340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_c;
  int local_8;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2 GEN_EDX_ARG,0x2c);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG,0x28)));
  iVar6 = 0;
  if (((uVar3 != 0) && (this_00 != (undefined *)0x0)) && (*(int *)((int)this + 0x14) != 0)) {
    local_c = 0;
    local_8 = 8;
    do {
      uVar4 = F_00436a90(*(undefined4 *)((int)this + 0x14) GEN_EDX_ARG,iVar6);
      if (uVar4 == 0) break;
      if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) - 8 + local_8))) != iVar6) {
        *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) - 8 + local_8))) = iVar6;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      if ((*(char *)(uVar4 + 0xb) == '\0') || (iVar6 == 0xf)) {
        *((undefined1 *)GEN_TOP((*(byte *)(uVar4 + 10) + 0x42 + (int)this))) = 0xff;
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) - 4 + local_8))) != -1) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) - 4 + local_8))) = 0xffffffff;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_8))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_8))) = 0;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        F_00431250(this_00 GEN_EDX_ARG,iVar6,"",0,1,0);
      }
      else {
        *((char *)GEN_TOP((*(byte *)(uVar4 + 10) + 0x42 + (int)this))) = (char)iVar6;
        if (*((uint *)GEN_TOP((local_8 + *(int *)(uVar3 + 0x20)))) != (uint)*(ushort *)(uVar4 + 8)) {
          *((uint *)GEN_TOP((local_8 + *(int *)(uVar3 + 0x20)))) = (uint)*(ushort *)(uVar4 + 8);
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        uVar9 = 0;
        uVar8 = 1;
        uVar7 = 0;
        uVar4 = F_00441270(uVar4);
        F_00431250(this_00 GEN_EDX_ARG,iVar6,uVar4,uVar7,uVar8,uVar9);
        local_c = local_c + 1;
      }
      local_8 = local_8 + 0xc;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x10);
    iVar6 = 0;
    pcVar5 = (char *)((int)this + 0x43);
    local_8 = 4;
    do {
      if (-1 < pcVar5[-1]) {
        iVar1 = pcVar5[-1] * 3 + 1;
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar1 * 4))) != iVar6) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar1 * 4))) = iVar6;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        iVar6 = iVar6 + 1;
      }
      if (-1 < *pcVar5) {
        iVar1 = *pcVar5 * 3 + 1;
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar1 * 4))) != iVar6) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar1 * 4))) = iVar6;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        iVar6 = iVar6 + 1;
      }
      if (-1 < pcVar5[1]) {
        iVar1 = pcVar5[1] * 3 + 1;
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar1 * 4))) != iVar6) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar1 * 4))) = iVar6;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        iVar6 = iVar6 + 1;
      }
      if (-1 < pcVar5[2]) {
        iVar1 = pcVar5[2] * 3 + 1;
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar1 * 4))) != iVar6) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar1 * 4))) = iVar6;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        iVar6 = iVar6 + 1;
      }
      pcVar5 = pcVar5 + 4;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
    if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x164))) != (uint)(local_c == 0xf)) {
      *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x164))) = (uint)(local_c == 0xf);
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    if (*((undefined1 * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x50))) != &REFG(undefined1, 0x14ab071)) {
      *((undefined1 * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x50))) = &REFG(undefined1, 0x14ab071);
      *(undefined1 *)((int)this_00 + 0x1d) = 1;
    }
    F_0077cfc0(this GEN_EDX_ARG);
    uVar9 = 0;
    uVar8 = 1;
    uVar7 = 0;
    uVar3 = F_00461c60(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,0x7fc,local_c,0xf);
    F_00431250(this_00 GEN_EDX_ARG,0x13,uVar3,uVar7,uVar8,uVar9);
    F_0077d140(this GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2 GEN_EDX_ARG,0x27)));
    if (this_00 != (undefined *)0x0) {
      *(undefined1 *)((int)this_00 + 0x1d) = 1;
    }
  }
  return (uint)this_00;
}

/* ref: FUN_007e1590 */
GEN_NOFRAME byte GEN_THISCALL F_007e1590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e1590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x6c))) {
  case 0: ;
  case 1: ;
    F_0077cd30(this GEN_EDX_FWD,0x98);
    return 1;
  case 2: ;
  case 3: ;
  case 4: ;
    F_0077cd30(this GEN_EDX_ARG,0x9b);
    return 1;
  case 5: ;
  case 6: ;
    F_0077cd30(this GEN_EDX_ARG,0xf);
  }
  return 1;
}

/* ref: FUN_007e1600 */
GEN_FRAME uint GEN_THISCALL F_007e1600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e1600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0xc5) = (undefined1)param_1;
  uVar1 = F_0077d140(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_007e1620 */
GEN_FRAME unsigned int GEN_THISCALL F_007e1620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e1620u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint * puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  uint local_10;
  
  iVar3 = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[1]) != 0) {
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x41))));
    puVar4 = (uint *)F_00436a90(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) GEN_EDX_FWD,(*(int *)&gen_args[1]));
    if ((puVar4 != (uint *)0x0) && (*(char *)((int)puVar4 + 0xb) != '\0')) {
      if (((*(byte *)(iVar3 + 0x10) & 0xf) == 0) || (*(int *)(iVar3 + 0x14) < 1)) {
        uVar18 = 0;
      }
      else {
        uVar18 = 1;
      }
      if (((*(byte *)(iVar3 + 0x18) & 0xf) == 0) || (*(int *)(iVar3 + 0x1c) < 1)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 4;
      }
      if (((*(byte *)(iVar3 + 0x20) & 0xf) == 0) || (*(int *)(iVar3 + 0x24) < 1)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 8;
      }
      if (((*(byte *)(iVar3 + 0x28) & 0xf) == 0) || (*(int *)(iVar3 + 0x2c) < 1)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0x20;
      }
      if (((*(byte *)(iVar3 + 0x30) & 0xf) == 0) || (*(int *)(iVar3 + 0x34) < 1)) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0x80;
      }
      if (((*(byte *)(iVar3 + 0x38) & 0xf) == 0) || (*(int *)(iVar3 + 0x3c) < 1)) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0x100;
      }
      if (((*(byte *)(iVar3 + 0x40) & 0xf) == 0) || (*(int *)(iVar3 + 0x44) < 1)) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0x40;
      }
      if (((*(byte *)(iVar3 + 0x48) & 0xf) == 0) || (*(int *)(iVar3 + 0x4c) < 1)) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0x200;
      }
      if (((*(byte *)(iVar3 + 0x50) & 0xf) == 0) || (*(int *)(iVar3 + 0x54) < 1)) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0x800;
      }
      if (((*(byte *)(iVar3 + 0x58) & 0xf) == 0) || (*(int *)(iVar3 + 0x5c) < 1)) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0x1000;
      }
      if (((*(byte *)(iVar3 + 0x60) & 0xf) == 0) || (*(int *)(iVar3 + 100) < 1)) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0x2000;
      }
      if (((*(byte *)(iVar3 + 0x68) & 0xf) == 0) || (*(int *)(iVar3 + 0x6c) < 1)) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0x4000;
      }
      uVar15 = uVar18 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 | uVar13 |
               uVar14 | uVar15;
      local_10 = 0;
      iVar17 = 0;
      do {
        uVar18 = iVar17 + 0xcU & 0xff;
        if ((*(byte *)(iVar3 + 0x10 + uVar18 * 8) & 0xf) == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = *(undefined4 *)(iVar3 + 0x14 + uVar18 * 8);
        }
        uVar18 = F_0077d600(uVar18,uVar16);
        lVar1 = ((ulonglong)(((ulonglong)(byte)uVar18 < 0x40) ? ((1L << (ulonglong)(byte)uVar18)) : 0));
        local_10 = local_10 | (uint)((ulonglong)lVar1 >> 0x20);
        iVar17 = iVar17 + 1;
        uVar15 = uVar15 | (uint)lVar1;
      } while (iVar17 < 5);
      if ((*(byte *)(iVar3 + 0x98) & 0xf) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined4 *)(iVar3 + 0x9c);
      }
      uVar18 = F_0077d600(0x11,uVar16);
      lVar1 = ((ulonglong)(((ulonglong)(byte)uVar18 < 0x40) ? ((1L << (ulonglong)(byte)uVar18)) : 0));
      if ((*(byte *)(iVar3 + 0xa0) & 0xf) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined4 *)(iVar3 + 0xa4);
      }
      uVar18 = F_0077d600(0x12,uVar16);
      lVar2 = ((ulonglong)(((ulonglong)(byte)uVar18 < 0x40) ? ((1L << (ulonglong)(byte)uVar18)) : 0));
      F_004415b0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) GEN_EDX_ARG,(*(int *)&gen_args[1]),
                   (uint)lVar2 | *puVar4 & 0x10 | uVar15 | (uint)lVar1,
                   (uint)((ulonglong)lVar2 >> 0x20) | local_10 | (uint)((ulonglong)lVar1 >> 0x20));
    }
  }
  return;
}

/* ref: FUN_007e1850 */
GEN_FRAME uint GEN_THISCALL F_007e1850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7e1850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD);
  uVar1 = F_0077d7c0(this GEN_EDX_ARG,param_1,((undefined1 *)(gen_frame + 0x4)),param_2,param_3);
  if (uVar1 == 1) {
    F_0045ca80(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),(uint)*(byte *)(param_3 + 0x12),0);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007e18c0 */
GEN_FRAME uint GEN_THISCALL F_007e18c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7e18c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD);
  uVar1 = F_0077d7c0(this GEN_EDX_ARG,param_1,((undefined1 *)(gen_frame + 0x4)),param_2,param_3);
  if (uVar1 == 1) {
    F_0045ccd0(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),(uint)*(byte *)(param_3 + 0x12),0);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007e1930 */
GEN_FRAME uint GEN_THISCALL F_007e1930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e1930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint * puVar3;
  uint uVar4;
  uint uVar5;
  undefined * puVar6;
  undefined * this_01;
  int iVar7;
  int iVar8;
  int iVar9;
  byte * pbVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_ARG,0x2f);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG,0x2b)));
  if ((uVar2 != 0) && (this_00 != (undefined *)0x0)) {
    iVar9 = *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4)));
    (*(byte * PTR32 *)(gen_frame + 0x2c)) = (byte *)(param_2 + 0x1a);
    (*(int *)(gen_frame + 0x28)) = iVar9;
    (*(int *)(gen_frame + 0x24)) = iVar9 * 4 + 8;
    (*(int *)(gen_frame + 0x1c)) = 5;
    do {
      if ((*(ushort *)((*(byte * PTR32 *)(gen_frame + 0x2c)) - 2) != 0) &&
         (puVar3 = (uint *)F_00ab40d0((uint)*(ushort *)((*(byte * PTR32 *)(gen_frame + 0x2c)) - 2)), puVar3 != (uint *)0x0)) {
        if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + (*(int *)(gen_frame + 0x24))))) != (int)*(char *)((int)puVar3 + 7)) {
          *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + (*(int *)(gen_frame + 0x24))))) = (int)*(char *)((int)puVar3 + 7);
          *(undefined1 *)(uVar2 + 0x1d) = 1;
        }
        (*(int *)(gen_frame + 0x18)) = 0;
        (*(int *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x14)), 1, 3),(char)puVar3[1]);
        F_0042b630(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG);
        pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x2c)) - 0x12;
        uVar4 = F_0077d7c0(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x84)),&(*(int *)(gen_frame + 0x18)),pbVar10);
        if (uVar4 == 1) {
          F_0045ca80(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x84)),(uint)*(*(byte * PTR32 *)(gen_frame + 0x2c)),0);
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG);
        (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),*(undefined1 *)((int)puVar3 + 5));
        F_0042b630(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG);
        uVar5 = F_0077d7c0(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x84)),&(*(int *)(gen_frame + 0x20)),pbVar10);
        if (uVar5 == 1) {
          F_0045ccd0(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x84)),(uint)*(*(byte * PTR32 *)(gen_frame + 0x2c)),0);
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG);
        iVar7 = -1;
        iVar9 = -1;
        if (uVar4 == 2) {
          iVar7 = (*(int *)(gen_frame + 0x18));
        }
        iVar8 = iVar7;
        if ((uVar5 == 2) && (iVar8 = (*(int *)(gen_frame + 0x20)), -1 < iVar7)) {
          iVar8 = iVar7;
          iVar9 = (*(int *)(gen_frame + 0x20));
        }
        if ((*(char *)((int)puVar3 + 6) != '\0') && (iVar9 < 0)) {
          if (iVar8 < 0) {
            iVar8 = *(int *)((*(byte * PTR32 *)(gen_frame + 0x2c)) - 6);
          }
          else {
            iVar9 = *(int *)((*(byte * PTR32 *)(gen_frame + 0x2c)) - 6);
          }
        }
        puVar6 = (undefined *)
                 F_00460270(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,(*puVar3 & 0xffffff) + (int)puVar3,iVar8,
                              iVar9);
        if (puVar6 == (undefined *)0x0) {
          puVar6 = &REFG(undefined, 0x10be47a);
        }
        iVar9 = (*(int *)(gen_frame + 0x28)) * 2;
        F_00431250(this_00 GEN_EDX_ARG,iVar9,puVar6,0,1,0);
        this_01 = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
        if (this_01 == (undefined *)0x0) {
          uVar11 = F_0046ff40();
          uVar4 = (uint)(uVar11 / 1000);
        }
        else {
          uVar4 = F_00975680(this_01 GEN_EDX_ARG);
        }
        uVar4 = F_00462750(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,*(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x2c)) - 10),uVar4,2);
        F_0042cbc0(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,uVar4);
        uVar14 = 0;
        uVar13 = 1;
        uVar12 = 0;
        uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
        F_00431250(this_00 GEN_EDX_ARG,iVar9 + 1,uVar4,uVar12,uVar13,uVar14);
        (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
        (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 4;
        F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
      }
      (*(byte * PTR32 *)(gen_frame + 0x2c)) = (*(byte * PTR32 *)(gen_frame + 0x2c)) + 0x68;
      iVar9 = (*(int *)(gen_frame + 0x1c)) - 1;
      (*(int *)(gen_frame + 0x1c)) = iVar9;
    } while (iVar9 != 0);
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4))) != (*(int *)(gen_frame + 0x28))) {
      *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4))) = (*(int *)(gen_frame + 0x28));
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    this_00 = (undefined *)0x1;
    if ((char)param_1 != '\0') {
      this_00 = (undefined *)0x2;
    }
    if (((undefined *)GEN_TOP(**(int * PTR32 *)(uVar2 + 0x20))) != this_00) {
      **(int * PTR32 *)(uVar2 + 0x20) = (int)this_00;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
  return (uint)this_00;
}

/* ref: FUN_007e1c20 */
GEN_NOFRAME uint GEN_THISCALL F_007e1c20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e1c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0077d750(this GEN_EDX_FWD);
  F_00441ba0(2);
  F_007e1250(this GEN_EDX_ARG);
  uVar1 = F_0077db70(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007e1c50 */
GEN_FRAME uint GEN_THISCALL F_007e1c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e1c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_0042e430((undefined *)((int)this + 0x1cc) GEN_EDX_FWD,param_1);
  uVar1 = F_0042ccf0((undefined *)((int)this + 0x178) GEN_EDX_ARG,(undefined *)((int)this + 0x1cc));
  *(undefined1 *)((int)this + 0x175) = 1;
  return uVar1;
}

/* ref: FUN_007e1c90 */
GEN_FRAME uint GEN_THISCALL F_007e1c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e1c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = F_0042ccf0((undefined *)((int)this + 0x178) GEN_EDX_FWD,(int)this + 0x1cc);
    *(undefined2 *)((int)this + 0x174) = 0x100;
    return uVar1;
  }
  *(undefined1 *)((int)this + 0x174) = 0;
  return in_EAX;
}

/* ref: FUN_007e1cd0 */
GEN_FRAME uint GEN_THISCALL F_007e1cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e1cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_0042e430((undefined *)((int)this + 0x278) GEN_EDX_FWD,param_1);
  uVar1 = F_0077da90(this GEN_EDX_ARG,(undefined *)((int)this + 0x278));
  return uVar1;
}

/* ref: FUN_007e1d00 */
GEN_FRAME uint GEN_THISCALL F_007e1d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e1d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint in_EAX = 0;
  
  if (param_1 == 0) {
    in_EAX = F_0077da90(this GEN_EDX_FWD,(int)this + 0x278);
  }
  *(undefined1 *)((int)this + 0x220) = 0;
  return in_EAX;
}

/* ref: Client::UI2::Agent::AgentFreeCompany::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_007e1d30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e1d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  this[0x22] = (undefined1)0x0;
  if (*(int *)(this + 0x14) != 0) {
    F_00436de0(*(int *)(this + 0x14) GEN_EDX_FWD,0);
  }
  if (*(undefined * PTR32 *)(this + 0x14) != (undefined *)0x0) {
    F_00441f30(*(undefined * PTR32 *)(this + 0x14) GEN_EDX_ARG);
    F_0044e020(((undefined *)GEN_TOP((*(int *)(this + 0x14) + 0x490))) GEN_EDX_ARG,this + 0xc);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG);
  piVar2 = *(int * PTR32 *)(uVar1 + 0x11c);
  if (piVar2 != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2 GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
    }
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG);
  piVar2 = *(int * PTR32 *)(uVar1 + 0x114);
  if (piVar2 != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2 GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
    }
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG);
  piVar2 = *(int * PTR32 *)(uVar1 + 0x24);
  if (((piVar2 != (int *)0x0) && (uVar1 = piVar2[0x82], uVar1 != 0)) &&
     (uVar1 == *(uint *)(this + 8))) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
  }
  if (*(int *)(this + 0x54) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 0x54),0);
    *(undefined4 *)(this + 0x54) = 0;
  }
  if (*(int *)(this + 0x5c) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 0x5c),0);
    *(undefined4 *)(this + 0x5c) = 0;
  }
  if (*(int *)(this + 0x28) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 0x28),0);
    *(undefined4 *)(this + 0x28) = 0;
  }
  if (*(int *)(this + 0x5c) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 0x5c),0);
    *(undefined4 *)(this + 0x5c) = 0;
  }
  if (*(int *)(this + 0x58) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 0x58),0);
    *(undefined4 *)(this + 0x58) = 0;
  }
  if (*(int *)(this + 0x60) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 0x60),0);
    *(undefined4 *)(this + 0x60) = 0;
  }
  if (*(int *)(this + 0x68) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 0x68),0);
    *(undefined4 *)(this + 0x68) = 0;
  }
  if (*(int *)(this + 100) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 100),0);
    *(undefined4 *)(this + 100) = 0;
  }
  if (*(int *)(this + 0x30) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 0x30),0);
    *(undefined4 *)(this + 0x30) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  if (*(int *)(this + 0x1c) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 0x1c),0);
    *(undefined4 *)(this + 0x1c) = 0;
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentFreeCompany::vf11 */
GEN_NOFRAME byte GEN_THISCALL F_007e1f50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e1f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  bVar1 = F_004351d0();
  if (bVar1 == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG);
    if ((*(int *)(uVar2 + 0x18) == 0) ||
       ((~(byte)((uint)**((undefined4 * PTR32 *)GEN_TOP((*(int *)(uVar2 + 0x18) + 0xe4))) >> 0x1b) & 1) != 0)) {
      uVar3 = 0xb;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x44))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG);
      uVar2 = F_00435440(uVar2 GEN_EDX_ARG,uVar3);
      if (uVar2 != 0) {
        bVar1 = F_00436880(uVar2 GEN_EDX_ARG);
        if (bVar1 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_007e1fb0 */
GEN_FRAME uint GEN_THISCALL F_007e1fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e1fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4e2c));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0xffffffff;
  F_0042cc20((undefined *)((int)this + 0x68) GEN_EDX_FWD,"",REFG(undefined4, 0x108cc50));
  F_00c48350((undefined *)((int)this + 0x18),0,0x48);
  return (uint)this;
}

/* ref: FUN_007e2010 */
GEN_NOFRAME uint GEN_THISCALL F_007e2010(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e2010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4e2c));
  uVar3 = F_0042c880((undefined *)((int)this + 0x68) GEN_EDX_FWD);
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyOrganizeSheet::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_007e2060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e2060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x24) + 0xc))))(*(int * PTR32 *)(uVar1 + 0x24) GEN_EDX_ARG);
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_007e20a0 */
GEN_FRAME unsigned int GEN_THISCALL F_007e20a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7e20a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  longlong lVar1;
  int * piVar2;
  undefined * pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if (param_1 != 0) {
    uVar5 = 0;
    uVar7 = 0x400;
    if ((*(uint *)(param_1 + 8) & 0xfffff9ff) != 0 || *(int *)(param_1 + 0xc) != 0) {
      uVar7 = 0;
      uVar5 = 8;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    if (piVar2 != (int *)0x0) {
      uVar11 = 0xb;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2 GEN_EDX_ARG)));
      F_00435480(pvVar3 GEN_EDX_ARG,uVar11);
    }
    iVar6 = 0;
    iVar4 = 9;
    do {
      lVar1 = ((ulonglong)(((ulonglong)(byte)iVar4 < 0x40) ? ((1L << (ulonglong)(byte)iVar4)) : 0));
      if (((uint)lVar1 & uVar7) != 0 || ((uint)((ulonglong)lVar1 >> 0x20) & uVar5) != 0) {
        uVar5 = (uint)(byte)(&REFG(undefined1, 0x10bf780))[(int)(iVar6 * 4)];
        goto LAB_007e2137;
      }
      iVar4 = (&REFG(undefined4, 0x10bf784))[(int)(iVar6)];
      iVar6 = iVar6 + 1;
    } while (iVar4 != -1);
    uVar5 = 10;
LAB_007e2137: ;
    uVar5 = F_00ab3bd0(uVar5);
    if (uVar5 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = *(int *)(uVar5 + 4);
    }
    piVar2 = ((int *)GEN_TOP((*(int *)(param_2 + 0x20) + param_4 * 4)));
    if (*piVar2 != iVar4) {
      *piVar2 = iVar4;
      *(undefined1 *)(param_2 + 0x1d) = 1;
    }
    uVar13 = 0;
    uVar12 = 1;
    uVar11 = 0;
    if (*(char *)(param_1 + 0x14) == '\0') {
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0x3c4;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
      uVar5 = F_0043bd00(pvVar3 GEN_EDX_ARG,uVar8,uVar9,uVar10);
      F_00431250(param_3 GEN_EDX_ARG,param_5,uVar5,uVar11,uVar12,uVar13);
      return;
    }
    F_00431250(param_3 GEN_EDX_ARG,param_5,param_1 + 0x14,0,1,0);
  }
  return;
}

/* ref: FUN_007e21d0 */
GEN_FRAME uint GEN_THISCALL F_007e21d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e21d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4e74));
  in_ecx[3] = 0;
  in_ecx[4] = 0xe0000000;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  F_0042b630(in_ecx + 0x12 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x27 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x3c GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x51 GEN_EDX_ARG);
  return (uint)in_ecx;
}

/* ref: FUN_007e2230 */
GEN_NOFRAME uint GEN_THISCALL F_007e2230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e2230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4e74));
  F_0042c880((undefined *)((int)this + 0x144) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0xf0) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x9c) GEN_EDX_ARG);
  uVar3 = F_0042c880((undefined *)((int)this + 0x48) GEN_EDX_ARG);
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007e22a0 */
GEN_FRAME uint GEN_THISCALL F_007e22a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e22a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x10d4ebc));
  in_ecx[3] = 0;
  F_0042b630(in_ecx + 5 GEN_EDX_FWD);
  in_ecx[0x1a] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007e22e0 */
GEN_NOFRAME uint GEN_THISCALL F_007e22e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e22e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x10d4ebc));
  uVar3 = F_0042c880((undefined *)((int)this + 0x14) GEN_EDX_FWD);
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInvite::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007e2330(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e2330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  iVar1 = *(int *)(this + 0x68);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x68) = 0;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,iVar1,0);
  }
  return;
}

/* ref: FUN_007e2390 */
GEN_FRAME uint GEN_THISCALL F_007e2390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e2390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4f04));
  *(undefined4 *)((int)this + 0xc) = 0;
  F_0042cc20((undefined *)((int)this + 0x10) GEN_EDX_FWD,"",REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: FUN_007e23d0 */
GEN_NOFRAME uint GEN_THISCALL F_007e23d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e23d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4f04));
  uVar3 = F_0042c880((undefined *)((int)this + 0x10) GEN_EDX_FWD);
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007e2420 */
GEN_FRAME uint GEN_THISCALL F_007e2420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e2420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4f64));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4f54));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[2])REFP(0x10d4f48));
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  puVar1 = (undefined4 *)((int)this + 0x20);
  param_1 = 0x31;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar1 + 1 GEN_EDX_FWD);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x66) = 0;
    puVar1 = puVar1 + 0x1a;
    param_1 = param_1 - 1;
  } while (-1 < param_1);
  *(undefined4 *)((int)this + 0x1478) = 0;
  *(undefined1 *)((int)this + 0x147c) = 0;
  *(undefined4 *)((int)this + 0x1480) = 0;
  *(undefined4 *)((int)this + 0x1484) = 0;
  *(undefined4 *)((int)this + 0x1488) = 0;
  *(undefined4 *)((int)this + 0x148c) = 0;
  *(undefined4 *)((int)this + 0x1470) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1474) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1498) = 0;
  *(undefined4 *)((int)this + 0x149c) = 0;
  *(undefined4 *)((int)this + 0x1490) = 9999;
  *(undefined2 *)((int)this + 0x1494) = 0;
  *(undefined4 *)((int)this + 0x14a0) = 9999;
  *(undefined4 *)((int)this + 0x14a8) = 0;
  *(undefined4 *)((int)this + 0x14ac) = 0;
  *(undefined2 *)((int)this + 0x14a4) = 0;
  *(undefined4 *)((int)this + 0x14b0) = 9999;
  *(undefined4 *)((int)this + 0x14b8) = 0;
  *(undefined4 *)((int)this + 0x14bc) = 0;
  *(undefined2 *)((int)this + 0x14b4) = 0;
  *(undefined4 *)((int)this + 0x14c0) = 0;
  *(undefined4 *)((int)this + 0x14c4) = 0;
  *(undefined4 *)((int)this + 0x14c8) = 9999;
  *(undefined4 *)((int)this + 0x14d0) = 0;
  *(undefined4 *)((int)this + 0x14d4) = 0;
  *(undefined2 *)((int)this + 0x14cc) = 0;
  *(undefined4 *)((int)this + 0x14d8) = 9999;
  *(undefined2 *)((int)this + 0x14dc) = 0;
  *(undefined4 *)((int)this + 0x14e0) = 0;
  *(undefined4 *)((int)this + 0x14e4) = 0;
  *(undefined2 *)((int)this + 0x14ec) = 0;
  *(undefined4 *)((int)this + 0x14f0) = 0;
  return (uint)this;
}

/* ref: FUN_007e2580 */
GEN_NOFRAME uint GEN_THISCALL F_007e2580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e2580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4f64));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4f54));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[2])REFP(0x10d4f48));
  iVar3 = 0x31;
  puVar4 = (undefined4 *)((int)this + 0x1470);
  do {
    puVar4[-0x1a] = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    uVar5 = F_0042c880(puVar4 - 0x19 GEN_EDX_FWD);
    uVar2 = (uint)uVar5;
    iVar3 = iVar3 - 1;
    puVar4 = puVar4 - 0x1a;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007e2600 */
GEN_FRAME uint GEN_THISCALL F_007e2600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e2600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  byte bVar1;
  byte bVar2;
  undefined * pvVar3;
  undefined * this_00;
  undefined * this_01;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  uint * puVar8;
  int iVar9;
  int * this_02;
  int iVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  bVar2 = *(byte *)((int)this + 0x1d);
  local_10 = 0;
  bVar11 = false;
  if ((*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) &&
     ((bVar1 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_FWD,
                            (uint)(byte)(&REFG(undefined1, 0x10c0596))[(int)((uint)bVar2 * 3)]), bVar1 != 0 ||
      (bVar1 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,
                            (uint)(byte)(&REFG(undefined1, 0x10c0595))[(int)((uint)*(byte *)((int)this + 0x1d) * 3)]),
      bVar1 != 0)))) {
    bVar11 = true;
  }
  pvVar3 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,bVar2 + 20000);
  if ((pvVar3 == (undefined *)0x0) || (!bVar11)) {
    iVar10 = 0;
    iVar9 = 0xc;
    do {
      if (*(int *)(iVar9 - 0xc + param_1[8]) != -1) {
        *(undefined4 *)(iVar9 - 0xc + param_1[8]) = 0xffffffff;
        *(undefined1 *)((int)param_1 + 0x1d) = 1;
      }
      if (*(int *)(iVar9 - 4 + param_1[8]) != 0) {
        *(undefined4 *)(iVar9 - 4 + param_1[8]) = 0;
        *(undefined1 *)((int)param_1 + 0x1d) = 1;
      }
      if (*(int *)(param_1[8] + iVar9) != 0) {
        *(undefined4 *)(param_1[8] + iVar9) = 0;
        *(undefined1 *)((int)param_1 + 0x1d) = 1;
      }
      if (*(int *)(iVar9 + 4 + param_1[8]) != 0) {
        *(undefined4 *)(iVar9 + 4 + param_1[8]) = 0;
        *(undefined1 *)((int)param_1 + 0x1d) = 1;
      }
      if (*((char * PTR32 *)GEN_TOP((*(int *)((int)param_2 + 0x20) + iVar10))) != "") {
        *((char * PTR32 *)GEN_TOP((*(int *)((int)param_2 + 0x20) + iVar10))) = "";
        *(undefined1 *)((int)param_2 + 0x1d) = 1;
      }
      iVar10 = iVar10 + 4;
      iVar9 = iVar9 + 0x14;
    } while (iVar10 < 200);
    iVar9 = 0;
    puVar8 = param_1;
  }
  else {
    local_18 = 0;
    local_2c = 0xc;
    this_02 = (int *)((int)this + 0x20);
    do {
      uVar5 = 0;
      local_c = -1;
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      bVar11 = false;
      local_14 = 0;
      local_28 = 0;
      this_00 = (undefined *)F_00a37da0(pvVar3 GEN_EDX_ARG,local_18);
      if ((this_00 == (undefined *)0x0) ||
         ((*(char *)((int)this_00 + 6) == '\0' && (*(int *)((int)this_00 + 8) == 0)))) {
        ((GEN_TCODE *)*(gen_code32 *)(*this_02 + 4))(this_02 GEN_EDX_ARG);
      }
      else {
        local_10 = local_10 + 1;
        if (*(char *)((int)this_00 + 6) == '\0') {
          uVar4 = *(uint *)((int)this_00 + 8);
          if ((*(byte *)((int)this_00 + 0x14) & 1) != 0) {
            uVar4 = uVar4 + 1000000;
          }
        }
        else {
          this_01 = (undefined *)F_00a3a860(this_00 GEN_EDX_ARG);
          uVar4 = F_0046e5e0(this_01 GEN_EDX_ARG);
        }
        uVar5 = F_00a37c50(this_00 GEN_EDX_ARG);
        uVar5 = (uint)(uVar5 != 0);
        local_1c = F_00a3a8a0(this_00 GEN_EDX_ARG);
        if (this_02[0x16] != uVar4) {
          ((GEN_TCODE *)*(gen_code32 *)(*this_02 + 4))(this_02 GEN_EDX_ARG);
          uVar6 = F_00ab24a0(uVar4);
          if (uVar6 != 0) {
            ((GEN_TCODE *)*(gen_code32 *)(*this_02 + 8))(this_02 GEN_EDX_ARG,uVar4,uVar6);
          }
        }
        local_20 = (uint)*(byte *)(this_02 + 0x19);
        local_c = this_02[0x17];
        local_28 = F_0042a990(this_02 + 1 GEN_EDX_ARG);
        local_24 = F_00760640((uint)*(byte *)(this_02 + 0x19),this_00,this_02[0x18]);
        bVar11 = *(char *)((int)this_02 + 0x65) != '\0';
        if (bVar11) {
          bVar2 = F_00760e50(this_02 GEN_EDX_ARG,this_00);
          piVar7 = (int *)F_00ab3c60((uint)bVar2);
          if (piVar7 == (int *)0x0) {
            local_14 = 0;
          }
          else {
            local_14 = *piVar7;
          }
        }
      }
      if (*((int *)GEN_TOP(((param_1[8] - 0xc) + local_2c))) != local_c) {
        *((int *)GEN_TOP(((param_1[8] - 0xc) + local_2c))) = local_c;
        *(undefined1 *)((int)param_1 + 0x1d) = 1;
      }
      uVar4 = local_1c << 0x10 | local_20;
      puVar8 = ((uint *)GEN_TOP(((param_1[8] - 4) + local_2c)));
      if (*puVar8 != uVar4) {
        *puVar8 = uVar4;
        *(undefined1 *)((int)param_1 + 0x1d) = 1;
      }
      uVar5 = uVar5 << 8 | local_24 & 0xff;
      if (*(uint *)(param_1[8] + local_2c) != uVar5) {
        *(uint *)(param_1[8] + local_2c) = uVar5;
        *(undefined1 *)((int)param_1 + 0x1d) = 1;
      }
      uVar5 = (uint)bVar11 | local_14 * 2;
      if (*(uint *)(param_1[8] + 4 + local_2c) != uVar5) {
        *(uint *)(param_1[8] + 4 + local_2c) = uVar5;
        *(undefined1 *)((int)param_1 + 0x1d) = 1;
      }
      puVar8 = ((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + local_18 * 4)));
      if (local_28 != *((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + local_18 * 4)))) {
        *puVar8 = local_28;
        *(undefined1 *)((int)param_2 + 0x1d) = 1;
      }
      local_18 = local_18 + 1;
      local_2c = local_2c + 0x14;
      this_02 = this_02 + 0x1a;
      iVar9 = local_10;
    } while (local_18 < 0x32);
  }
  if (*(int *)((int)this + 0x1470) != iVar9) {
    uVar16 = 0;
    uVar15 = 1;
    uVar14 = 0;
    uVar13 = 0x32;
    uVar12 = 0x7fc;
    iVar10 = iVar9;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar5 = F_00461c60(pvVar3 GEN_EDX_ARG,uVar12,iVar10,uVar13);
    puVar8 = (uint *)F_00431250(param_2 GEN_EDX_ARG,0x32,uVar5,uVar14,uVar15,uVar16);
    *(int *)((int)this + 0x1470) = iVar9;
  }
  return (uint)puVar8;
}

/* ref: FUN_007e2920 */
GEN_FRAME uint GEN_THISCALL F_007e2920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e2920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  int iVar7;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  if ((byte)param_1 < 3) {
    *(byte *)((int)this + 0x1c) = (byte)param_1;
  }
  if ((byte)param_2 < 5) {
    *(byte *)((int)this + 0x1d) = (byte)param_2;
  }
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD);
  if ((char)uVar4 != '\0') {
    uVar4 = F_0077f340(this GEN_EDX_ARG,0);
    *(bool *)((int)this + 0x14ed) = (char)uVar4 == '\0';
    puVar5 = ((undefined4 *)(gen_frame + 0x0));
    iVar7 = 0xe;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      iVar7 = iVar7 - 1;
    } while (-1 < iVar7);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
    bVar1 = *(byte *)((int)this + 0x1c);
    ((undefined4 *)(gen_frame + 0x0))[1] = 1;
    F_005a2710(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
    bVar2 = *(byte *)((int)this + 0x1d);
    (*(uint *)(gen_frame + 0xc)) = (uint)bVar1;
    F_005a2710(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
    cVar3 = *(char *)((int)this + 0x14ed);
    (*(uint *)(gen_frame + 0x14)) = (uint)bVar2;
    F_005a2710(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x1c)) = (uint)(cVar3 != '\0');
    piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x5c))(piVar6 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0xf,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x78));
    iVar7 = 0xe;
    do {
      this_00 = this_00 - 2;
      uVar4 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar7 = iVar7 - 1;
    } while (-1 < iVar7);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_007e2a20 */
GEN_FRAME uint GEN_THISCALL F_007e2a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e2a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  int iVar7;
  uint * this_00;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD);
  if ((char)uVar4 != '\0') {
    puVar5 = ((undefined4 *)(gen_frame + 0x0));
    iVar7 = 0xe;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      iVar7 = iVar7 - 1;
    } while (-1 < iVar7);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
    bVar1 = *(byte *)((int)this + 0x1c);
    ((undefined4 *)(gen_frame + 0x0))[1] = 0x19;
    F_005a2710(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
    bVar2 = *(byte *)((int)this + 0x1d);
    (*(uint *)(gen_frame + 0xc)) = (uint)bVar1;
    F_005a2710(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
    cVar3 = *(char *)((int)this + 0x14ed);
    (*(uint *)(gen_frame + 0x14)) = (uint)bVar2;
    F_005a2710(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x1c)) = (uint)(cVar3 != '\0');
    if ((char)param_1 == '\0') {
      uVar4 = F_0077f0b0(this GEN_EDX_ARG);
    }
    else {
      uVar4 = 0;
    }
    F_005a2710(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x2c)) = uVar4;
    if ((char)param_1 == '\0') {
      uVar4 = F_0077f140(this GEN_EDX_ARG);
    }
    else {
      uVar4 = 0;
    }
    F_005a2710(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x34)) = uVar4;
    if ((char)param_1 == '\0') {
      uVar4 = F_0077f190(this GEN_EDX_ARG);
    }
    else {
      uVar4 = 0;
    }
    F_005a2710(((undefined1 *)(gen_frame + 0x38)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x3c)) = uVar4;
    if (((char)param_1 == '\0') && (*(char *)((int)this + 0x14ec) != '\0')) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    F_005a2710(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x44)) = uVar8;
    if ((char)param_1 == '\0') {
      uVar8 = *(undefined4 *)((int)this + 0x14f0);
    }
    else {
      uVar8 = 0;
    }
    F_005a2710(((undefined1 *)(gen_frame + 0x48)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x4c)) = uVar8;
    piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x5c))(piVar6 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0xf,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x78));
    iVar7 = 0xe;
    do {
      this_00 = this_00 - 2;
      uVar4 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar7 = iVar7 - 1;
    } while (-1 < iVar7);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_007e2b90 */
GEN_NOFRAME uint GEN_THISCALL F_007e2b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7e2b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  piVar1 = *(int * PTR32 *)(uVar2 + 0x24);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG);
    if (((char)uVar2 != '\0') && (uVar2 = piVar1[0x82], uVar2 == *(uint *)((int)this + 8))) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))
                        (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_007e2bd0 */
GEN_FRAME uint GEN_THISCALL F_007e2bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e2bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4fb4));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d4fa8));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[9] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007e2c10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007e2c10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e2c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyExchange::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_007e2c50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e2c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x1c) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x1c),0);
    *(undefined4 *)(this + 0x1c) = 0;
  }
  if (*(int *)(this + 0x20) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x20),0);
    *(undefined4 *)(this + 0x20) = 0;
  }
  uVar2 = 0;
  if (*(int *)(this + 0x14) != 0) {
    uVar2 = F_0044e020(((undefined *)GEN_TOP((*(int *)(this + 0x14) + 0x490))) GEN_EDX_ARG,this + 0xc);
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar2;
}

/* ref: FUN_007e2ce0 */
GEN_FRAME uint GEN_THISCALL F_007e2ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e2ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x14) != 0) {
    if ((char)param_1 == '\0') {
      F_00440db0();
    }
    else {
      F_00441b10();
    }
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
  if (*(undefined * PTR32 *)(uVar1 + 0x108) != (undefined *)0x0) {
    uVar1 = F_0077db70(*(undefined * PTR32 *)(uVar1 + 0x108) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_007e2d20 */
GEN_FRAME uint GEN_THISCALL F_007e2d20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e2d20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d4ffc));
  return (uint)in_ecx;
}

/* ref: FUN_007e2d40 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007e2d40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e2d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return;
}

/* ref: FUN_007e2d80 */
GEN_FRAME uint GEN_THISCALL F_007e2d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e2d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  uVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  puVar2 = (undefined4 *)((int)this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d504c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d5040));
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
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
  *puVar2 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  do {
    *(short *)puVar2 = (short)uVar1;
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar1 < 5);
  return (uint)this;
}

/* ref: FUN_007e2df0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007e2df0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e2df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyCrestEditor::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_007e2e30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e2e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = F_0077f780(this GEN_EDX_FWD,0,0);
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_007e2e70 */
GEN_FRAME uint GEN_THISCALL F_007e2e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e2e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((0 < param_3) && (param_2 != (byte *)0x0)) {
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0: ;
      if ((param_2[8] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x14);
      }
      *(undefined4 *)((int)this + 0x38) = uVar2;
      *(undefined4 *)((int)this + 0x3c) = uVar1;
      F_0077f800(this GEN_EDX_FWD);
      *(undefined1 *)((int)this + 0x5c) = 1;
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    case 2: ;
      if ((param_2[8] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) != 0) {
        *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_2 + 0x14);
        *(undefined4 *)((int)this + 0x40) = uVar2;
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
      *(undefined4 *)((int)this + 0x44) = 0;
      *(undefined4 *)((int)this + 0x40) = uVar2;
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    case 3: ;
      if ((param_2[8] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x14);
      }
      *(undefined4 *)((int)this + 0x38) = uVar2;
      *(undefined4 *)((int)this + 0x3c) = uVar1;
      break;
    case 0xfffffffe: ;
    case 0xffffffff: ;
    case 1: ;
      if (*(int *)((int)this + 0x48) != 0) {
        *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x3c);
        *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x38);
        F_0077f800(this GEN_EDX_ARG);
        *(undefined1 *)((int)this + 0x5c) = 1;
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_007e2fd0 */
GEN_FRAME uint GEN_THISCALL F_007e2fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e2fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((0 < param_3) && (param_2 != (byte *)0x0)) {
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0: ;
      if ((param_2[8] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x14);
      }
      *(undefined4 *)((int)this + 0x38) = uVar2;
      *(undefined4 *)((int)this + 0x3c) = uVar1;
      F_0077f830(this GEN_EDX_FWD);
      *(undefined1 *)((int)this + 0x5c) = 1;
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    case 2: ;
      if ((param_2[8] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) != 0) {
        *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_2 + 0x14);
        *(undefined4 *)((int)this + 0x40) = uVar2;
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
      *(undefined4 *)((int)this + 0x44) = 0;
      *(undefined4 *)((int)this + 0x40) = uVar2;
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    case 3: ;
      if ((param_2[8] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x14);
      }
      *(undefined4 *)((int)this + 0x38) = uVar2;
      *(undefined4 *)((int)this + 0x3c) = uVar1;
      break;
    case 0xfffffffe: ;
    case 0xffffffff: ;
    case 1: ;
      if (*(int *)((int)this + 0x4c) != 0) {
        *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x3c);
        *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x38);
        F_0077f830(this GEN_EDX_ARG);
        *(undefined1 *)((int)this + 0x5c) = 1;
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_007e3130 */
GEN_FRAME uint GEN_THISCALL F_007e3130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e3130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  short sVar1;
  byte bVar2;
  
  if (((0 < param_3) && (param_2 != (byte *)0x0)) && ((*(int *)&gen_a4) != 0)) {
    if (((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) {
      sVar1 = *(short *)((*(int *)&gen_a4) + 2);
      if (sVar1 == 0) {
        bVar2 = F_0077fc80(this GEN_EDX_FWD,*(undefined4 *)((int)this + 0x38),
                             *(undefined4 *)((int)this + 0x3c));
        if (bVar2 == 0) {
          F_0077f780(this GEN_EDX_ARG,param_2,param_3);
        }
      }
      else {
        if (sVar1 == 1) {
          F_0077f860(this GEN_EDX_ARG);
          F_0077f780(this GEN_EDX_ARG,param_2,param_3);
          *(undefined1 *)(param_1 + 1) = 0;
          *param_1 = 2;
          return (uint)param_1;
        }
        if (sVar1 != 2) goto LAB_007e31e4;
        *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)this + 0x30);
        *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)((int)this + 0x34);
        *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x30);
        *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x34);
        *(undefined2 *)((int)this + 0x5c) = 0x101;
        *(undefined1 *)((int)this + 0x5e) = 1;
      }
    }
    else if (*(int *)((int)this + 0x50) == 0) goto LAB_007e31e4;
    F_0077f860(this GEN_EDX_ARG);
  }
LAB_007e31e4: ;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_007e3200 */
GEN_FRAME uint GEN_THISCALL F_007e3200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e3200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  uint local_c;
  uint local_8;
  
  uVar5 = 0;
  if (param_1 == 0) {
    return 0;
  }
  local_c = 0;
  if ((*(int *)((int)this + 0x24) != 0) &&
     (bVar1 = F_00436870(*(int *)((int)this + 0x24) GEN_EDX_FWD), bVar1 != 1)) {
    if (bVar1 == 2) {
      local_8 = 1;
      goto LAB_007e324b;
    }
    if (bVar1 == 3) {
      local_8 = 2;
      goto LAB_007e324b;
    }
  }
  local_8 = 0;
LAB_007e324b: ;
  uVar2 = F_00ab04b0();
  if (uVar2 != 0) {
    puVar6 = (uint *)(param_1 + 0x2c);
    do {
      if (0xff < local_c) break;
      if (((2 < uVar5) || (local_8 == uVar5)) &&
         (pbVar3 = (byte *)F_00ab4250(uVar5), pbVar3 != (byte *)0x0)) {
        bVar1 = *pbVar3;
        F_005a2710(puVar6 - 1 GEN_EDX_ARG,4);
        *puVar6 = (uint)bVar1 << 0x10 | uVar5;
        uVar4 = F_004353e0(uVar5,0);
        F_005a2710(puVar6 + 1 GEN_EDX_ARG,4);
        puVar6[2] = uVar4;
        puVar6 = puVar6 + 4;
        local_c = local_c + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  F_005a2710((undefined *)(param_1 + 0x1028) GEN_EDX_ARG,4);
  *(uint *)(param_1 + 0x102c) = local_c;
  return local_c;
}

/* ref: FUN_007e32e0 */
GEN_NOFRAME uint GEN_THISCALL F_007e32e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e32e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_ARG,0x3c);
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = **(uint * PTR32 *)(uVar4 + 0x20);
    if (*(char *)((int)this + 0x5c) != '\0') {
      uVar5 = uVar5 | 1;
      *(undefined1 *)((int)this + 0x5c) = 0;
    }
    if (*(char *)((int)this + 0x5d) != '\0') {
      uVar5 = uVar5 | 2;
      *(undefined1 *)((int)this + 0x5d) = 0;
    }
    if (*(char *)((int)this + 0x5e) != '\0') {
      uVar5 = uVar5 | 4;
      *(undefined1 *)((int)this + 0x5e) = 0;
    }
    if (*(char *)((int)this + 0x5f) != '\0') {
      uVar5 = uVar5 | 8;
      *(undefined1 *)((int)this + 0x5f) = 0;
    }
    if (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) {
      bVar2 = F_00441290(*(undefined * PTR32 *)((int)this + 0x24) GEN_EDX_ARG,3);
      if (bVar2 == 0) {
        uVar5 = uVar5 & 0xffffffef;
      }
      else {
        uVar5 = uVar5 | 0x10;
      }
    }
    if ((*(int *)((int)this + 0x30) == *(int *)((int)this + 0x38)) &&
       (*(int *)((int)this + 0x34) == *(int *)((int)this + 0x3c))) {
      uVar5 = uVar5 & 0xffffffdf;
    }
    else {
      uVar5 = uVar5 | 0x20;
    }
    if (**(uint * PTR32 *)(uVar4 + 0x20) != uVar5) {
      **(uint * PTR32 *)(uVar4 + 0x20) = uVar5;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    iVar1 = *(int *)((int)this + 0x34);
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4))) != *(int *)((int)this + 0x30)) {
      *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4))) = *(int *)((int)this + 0x30);
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8))) != iVar1) {
      *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8))) = iVar1;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    iVar1 = *(int *)((int)this + 0x3c);
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc))) != *(int *)((int)this + 0x38)) {
      *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc))) = *(int *)((int)this + 0x38);
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10))) != iVar1) {
      *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10))) = iVar1;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    iVar1 = *(int *)((int)this + 0x44);
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14))) != *(int *)((int)this + 0x40)) {
      *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14))) = *(int *)((int)this + 0x40);
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    uVar5 = *(uint *)(uVar4 + 0x20);
    if (*(int *)(uVar5 + 0x18) != iVar1) {
      *(int *)(uVar5 + 0x18) = iVar1;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
  }
  return uVar5;
}

/* ref: FUN_007e33f0 */
GEN_FRAME uint GEN_THISCALL F_007e33f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e33f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte * pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  F_00560070(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD);
  uVar9 = F_0046ff40();
  uVar6 = (uint)uVar9 << 0xb ^ (uint)uVar9;
  uVar6 = uVar6 >> 8 ^ uVar6;
  F_0056bb40(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,(uint)((byte)uVar6 & 0x3f));
  uVar2 = uVar6 >> 0x13 ^ uVar6;
  (*(uint *)(gen_frame + 0x10)) = uVar2;
  (*(uint *)(gen_frame + 0x18)) = uVar6 >> 0x13 ^ uVar2;
  F_0056bc40(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,(uint)((byte)uVar2 & 0xf));
  F_0056bc80(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,(uint)((byte)(*(uint *)(gen_frame + 0x18)) & 0xf));
  uVar2 = (*(uint *)(gen_frame + 0x18)) >> 0x13 ^ (*(uint *)(gen_frame + 0x18));
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  F_0056bb80(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,(uint)((byte)uVar2 & 0x3f));
  uVar2 = F_00ab04b0();
  uVar6 = uVar6 << 0xb ^ uVar6;
  uVar6 = ((*(uint *)(gen_frame + 0x18)) >> 0xb ^ uVar6) >> 8 ^ (*(uint *)(gen_frame + 0x18)) ^ uVar6;
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  uVar2 = uVar6 % (uVar2 - 2);
  if ((*(int *)((int)this + 0x24) != 0) &&
     (bVar1 = F_00436870(*(int *)((int)this + 0x24) GEN_EDX_ARG), bVar1 != 1)) {
    if (bVar1 == 2) {
      uVar3 = 1;
      goto LAB_007e34c9;
    }
    if (bVar1 == 3) {
      uVar3 = 2;
      goto LAB_007e34c9;
    }
  }
  uVar3 = 0;
LAB_007e34c9: ;
  uVar8 = uVar3;
  if (uVar2 != 0) {
    uVar7 = 0;
    uVar4 = 0;
    if ((*(uint *)(gen_frame + 0x14)) != 0) {
      do {
        if (2 < uVar4) {
          uVar7 = uVar7 + 1;
        }
        uVar8 = uVar4;
      } while ((uVar7 != uVar2) && (uVar4 = uVar4 + 1, uVar8 = uVar3, uVar4 < (*(uint *)(gen_frame + 0x14))));
    }
  }
  F_0056bb00(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar8);
  pbVar5 = (byte *)F_00ab4250(uVar8);
  if (pbVar5 != (byte *)0x0) {
    uVar2 = (*(uint *)(gen_frame + 0x10)) << 0xb ^ (*(uint *)(gen_frame + 0x10));
    F_0056bbc0(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,((uVar6 >> 0xb ^ uVar2) >> 8 ^ uVar2 ^ uVar6) % (uint)*pbVar5);
  }
  *param_1 = (*(undefined4 *)(gen_frame + 0x8));
  param_1[1] = (*(undefined4 *)(gen_frame + 0xc));
  return (uint)param_1;
}

/* ref: FUN_007e3550 */
GEN_FRAME uint GEN_THISCALL F_007e3550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e3550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d509c));
  in_ecx[3] = (*(undefined * PTR32 (*)[2])REFP(0x10d5090));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  *(undefined2 *)(in_ecx + 8) = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  puVar1 = in_ecx + 0xd;
  param_2 = 99;
  do {
    *(undefined2 *)(puVar1 + 1) = 0;
    *puVar1 = 9999;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 5) = 0xff;
    puVar1[6] = 0xffffffff;
    *(undefined1 *)(puVar1 + 7) = 0;
    F_0042b630(puVar1 + 8 GEN_EDX_FWD);
    F_0042b630(puVar1 + 0x1d GEN_EDX_ARG);
    puVar1 = puVar1 + 0x32;
    param_2 = param_2 - 1;
  } while (-1 < param_2);
  *(undefined1 *)(in_ecx + 0x1395) = 0;
  in_ecx[0x1396] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007e3600 */
GEN_NOFRAME uint GEN_THISCALL F_007e3600(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e3600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  ulonglong uVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d509c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d5090));
  iVar3 = 99;
  pvVar4 = (undefined *)((int)this + 0x4e74);
  do {
    F_0042c880((undefined *)((int)pvVar4 - 0x74) GEN_EDX_FWD);
    uVar5 = F_0042c880((undefined *)((int)pvVar4 - 200) GEN_EDX_ARG);
    uVar2 = (uint)uVar5;
    iVar3 = iVar3 - 1;
    pvVar4 = (undefined *)((int)pvVar4 - 200);
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_007e3680 */
GEN_FRAME byte GEN_THISCALL F_007e3680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e3680u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  
  if ((((*(*(byte * PTR32 *)&gen_args[1]) & 0xf) == 0) || (*((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 4))) == 0)) &&
     (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))))) {
    iVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) * 200;
    (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[1]), 1, 3),*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) == '\0')));
    F_00a37920(*((undefined4 *)GEN_TOP((iVar1 + 0x34 + (int)(*(undefined * PTR32 *)&gen_args[0])))),
                 (uint)*((ushort *)GEN_TOP((iVar1 + 0x38 + (int)(*(undefined * PTR32 *)&gen_args[0])))),(*(byte * PTR32 *)&gen_args[1]));
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  return 1;
}

/* ref: FUN_007e36e0 */
GEN_FRAME byte GEN_THISCALL F_007e36e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e36e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char cVar1;
  
  if (((*(*(byte * PTR32 *)&gen_args[1]) & 0xf) == 0) || (*((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 4))) == 0)) {
    (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[1]), 1, 3),*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) == '\0')));
    cVar1 = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x21)));
    if (cVar1 == '\0') {
      F_00a37950((*(byte * PTR32 *)&gen_args[1]));
    }
    else {
      if (cVar1 == '\x01') {
        F_00a37970(6,(*(byte * PTR32 *)&gen_args[1]));
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
        return 1;
      }
      if (cVar1 == '\x02') {
        F_00a37970(5,(*(byte * PTR32 *)&gen_args[1]));
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
        return 1;
      }
    }
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  return 1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyCrestDecal::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_007e3770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e3770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  if (*(int *)(this + 0x14) != 0) {
    F_0044e020(((undefined *)GEN_TOP((*(int *)(this + 0x14) + 0x490))) GEN_EDX_FWD,this + 0xc);
  }
  *(undefined4 *)(this + 0x4e58) = 0;
  uVar1 = F_00780040(this GEN_EDX_ARG);
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_007e37d0 */
GEN_FRAME unsigned int GEN_THISCALL F_007e37d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e37d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * this_00;
  undefined * this_01;
  uint uVar1;
  
  if (((*(uint *)((int)this + 0x2c) < 100) &&
      (this_01 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,(*(int *)&gen_a1)), this_01 != (undefined *)0x0)) &&
     ((*(int *)&gen_a1) = 0, 0 < *(int *)((int)this_01 + 0xc))) {
    do {
      uVar1 = F_00a37da0(this_01 GEN_EDX_ARG,(*(int *)&gen_a1));
      if ((uVar1 != 0) && ((*(char *)(uVar1 + 6) != '\0' || (*(int *)(uVar1 + 8) != 0)))) {
        this_00 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2c) * 200 + 0x34 + (int)this)));
        *this_00 = 9999;
        *(undefined2 *)(this_00 + 1) = 0;
        this_00[2] = 0;
        this_00[3] = 0;
        this_00[4] = 0;
        *(undefined1 *)(this_00 + 5) = 0xff;
        this_00[6] = 0xffffffff;
        *(undefined1 *)(this_00 + 7) = 0;
        F_00760f10(this_00 GEN_EDX_ARG,uVar1,0);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2c) * 200 + 0x44 + (int)this))) = param_2;
        *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
        if (99 < *(uint *)((int)this + 0x2c)) {
          return;
        }
      }
      (*(int *)&gen_a1) = (*(int *)&gen_a1) + 1;
    } while ((*(int *)&gen_a1) < *(int *)((int)this_01 + 0xc));
  }
  return;
}

/* ref: FUN_007e3890 */
GEN_FRAME unsigned int GEN_THISCALL F_007e3890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e3890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d50e4));
  in_ecx[3] = 0;
  *(undefined4 *)((int)in_ecx + 0x2a) = 0;
  *(undefined1 *)((int)in_ecx + 0x2e) = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  *(undefined2 *)(in_ecx + 10) = 0;
  *(undefined4 *)((int)in_ecx + 0x49) = 0;
  *(undefined1 *)((int)in_ecx + 0x4d) = 0;
  *(undefined4 *)((int)in_ecx + 0x2f) = 0;
  *(undefined4 *)((int)in_ecx + 0x33) = 0;
  *(undefined4 *)((int)in_ecx + 0x37) = 0;
  *(undefined4 *)((int)in_ecx + 0x3b) = 0;
  *(undefined4 *)((int)in_ecx + 0x3f) = 0;
  *(undefined4 *)((int)in_ecx + 0x43) = 0;
  *(undefined2 *)((int)in_ecx + 0x47) = 0;
  in_ecx[0x14] = 0;
  in_ecx[0x15] = 0;
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  *(undefined1 *)(in_ecx + 0x18) = 0;
  return 0;
}

/* ref: FUN_007e3900 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007e3900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e3900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return;
}

/* ref: FUN_007e3940 */
GEN_FRAME unsigned int GEN_THISCALL F_007e3940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e3940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(int *)((int)this + 0x54) != 0) {
    ((code *)*(gen_code32 *)((int)this + 0x50))
              (*(undefined4 *)((int)this + 0x54),(int)this + 0x58,param_1,param_2);
  }
  return;
}

/* ref: FUN_007e3970 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007e3970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e3970u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x54) = 0;
  return;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_007e3980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e3980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0069f140(*(undefined * PTR32 *)(this + 0x1fa4) GEN_EDX_FWD);
  F_005ed040();
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG);
  uVar1 = *(uint *)(this + 0xf60);
  *(undefined4 *)(uVar1 + 0x54) = 0;
  *((undefined1 *)GEN_TOP((*(int *)(this + 0xf60) + 0x60))) = 1;
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf20 */
GEN_NOFRAME uint GEN_THISCALL F_007e39c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e39c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
  piVar2 = *(int * PTR32 *)(uVar1 + 0x2c);
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x54))(this GEN_EDX_ARG);
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_007e3a10 */
GEN_FRAME byte GEN_THISCALL F_007e3a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e3a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint * puVar6;
  undefined * this_00;
  undefined * pvVar7;
  byte * pbVar8;
  int local_18;
  uint local_14;
  int local_10;
  undefined * local_c;
  byte * local_8;
  
  if ((((*(uint *)&gen_a2) == 0xffffffff) &&
      ((uint)*(byte *)((int)this + 0x1fb0) == param_1[1] + 1 + (uint)*param_1 * 2)) &&
     (*(byte *)((int)this + 0x1fb1) == param_1[2])) {
    return 0;
  }
  *(byte *)((int)this + 0x1fb0) = *param_1 * '\x02' + param_1[1] + '\x01';
  *(byte *)((int)this + 0x1fb1) = param_1[2];
  *(undefined1 *)((int)this + 0x1fd3) = 0;
  if (((*(uint *)&gen_a2) == 0xffffffff) || ((*(uint *)&gen_a2) == 0xfffffffe)) {
    *(undefined2 *)((int)this + 0x1fd4) = 0xffff;
  }
  local_18 = 0;
  uVar5 = F_00ab3630((uint)param_1[2] + ((uint)param_1[1] + (uint)*param_1 * 2) * 2);
  local_c = (undefined *)((int)this + 0x1de4);
  local_8 = param_1 + 0x54;
  local_14 = 0;
  pbVar8 = (byte *)(uVar5 + 0xee);
  this_00 = (undefined *)((int)this + 0x11d4);
  param_1 = (undefined *)((int)this + 0x1ec4);
  do {
    iVar3 = *(int *)(pbVar8 - 0xee);
    pvVar7 = this_00;
    if (0 < iVar3) {
      if (((*(uint *)&gen_a2) == 0xffffffff) || ((*(uint *)&gen_a2) == 0xfffffffe)) {
        switch((unsigned int)(uintptr_t)(iVar3)) {
        case 0x6cc: ;
        case 0x6cd: ;
          *(char *)((int)this + 0x1fd4) = (char)local_14;
          break;
        case 0x6ce: ;
        case 0x6cf: ;
          *(char *)((int)this + 0x1fd5) = (char)local_14;
        }
      }
      else if ((*(uint *)&gen_a2) == local_14) {
        local_18 = 0xcb;
      }
      pvVar7 = (undefined *)((int)this_00 + 8);
      puVar6 = (uint *)F_00ab36c0(iVar3);
      if (puVar6 == (uint *)0x0) {
        local_10 = 0;
      }
      else {
        local_10 = (*puVar6 & 0xffffff) + (int)puVar6;
      }
      F_005a2710(this_00 GEN_EDX_ARG,6);
      *(int *)((int)this_00 + 4) = local_10;
      bVar1 = pbVar8[-1];
      bVar2 = *pbVar8;
      F_005a2710((undefined *)((int)param_1 - 0xdd0) GEN_EDX_ARG,3);
      *(uint *)((int)param_1 - 0xdcc) = (uint)bVar1 * 0x10000 + (uint)bVar2;
      uVar4 = *(undefined4 *)local_8;
      F_005a2710(param_1 GEN_EDX_ARG,4);
      *(undefined4 *)((int)param_1 + 4) = uVar4;
      *(char *)((int)this + 0x1fd3) = *(char *)((int)this + 0x1fd3) + '\x01';
      uVar4 = *(undefined4 *)(pbVar8 - 0xea);
      F_005a2710(local_c GEN_EDX_ARG,3);
      *(undefined4 *)((int)local_c + 4) = uVar4;
      param_1 = (undefined *)((int)param_1 + 8);
    }
    local_8 = local_8 + 4;
    local_c = (undefined *)((int)local_c + 8);
    local_14 = local_14 + 1;
    pbVar8 = pbVar8 + 0xf0;
    this_00 = pvVar7;
  } while (local_14 < 0x1c);
  if (((*(uint *)&gen_a2) != 0xffffffff) && ((*(uint *)&gen_a2) != 0xfffffffe)) {
    F_005a2710((undefined *)((int)this + 0x10ec) GEN_EDX_ARG,3);
    *(uint *)((int)this + 0x10f0) = ((local_18 - 0xcb) * 0x100 + (*(uint *)&gen_a2)) * 0x100;
    return 1;
  }
  bVar1 = *(byte *)((int)this + 0x1fd3);
  F_005a2710((undefined *)((int)this + 0x10ec) GEN_EDX_ARG,3);
  *(uint *)((int)this + 0x10f0) = (uint)bVar1;
  return 1;
}

/* ref: FUN_007e3c50 */
GEN_NOFRAME uint GEN_THISCALL F_007e3c50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e3c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)F_00ab36c0(0xf);
  if (puVar1 == (uint *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*puVar1 & 0xffffff) + (int)puVar1;
  }
  F_005a2710((undefined *)((int)this + 0x1ce4) GEN_EDX_ARG,6);
  *(int *)((int)this + 0x1ce8) = iVar3;
  puVar1 = (uint *)F_00ab36c0(0x10);
  if (puVar1 == (uint *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*puVar1 & 0xffffff) + (int)puVar1;
  }
  uVar2 = F_005a2710((undefined *)((int)this + 0x1cec) GEN_EDX_ARG,6);
  *(int *)((int)this + 0x1cf0) = iVar3;
  return uVar2;
}

/* ref: FUN_007e3cc0 */
GEN_FRAME uint GEN_THISCALL F_007e3cc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e3cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined * pvVar5;
  int local_c;
  int local_8;
  
  puVar1 = (uint *)F_00ab36c0((-(uint)(*(char *)((int)this + 0x1fa8) != '\x01') & 0x544) + 0x26e);
  if (puVar1 == (uint *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*puVar1 & 0xffffff) + (int)puVar1;
  }
  F_005a2710((undefined *)((int)this + 0x1d8c) GEN_EDX_ARG,6);
  *(int *)((int)this + 0x1d90) = iVar3;
  iVar3 = 0x7bc;
  pvVar5 = (undefined *)((int)this + 0x1d94);
  local_8 = 3;
  do {
    if ((iVar3 < 0) || (puVar1 = (uint *)F_00ab36c0(iVar3), puVar1 == (uint *)0x0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*puVar1 & 0xffffff) + (int)puVar1;
    }
    F_005a2710(pvVar5 GEN_EDX_ARG,6);
    *(int *)((int)pvVar5 + 4) = iVar4;
    iVar3 = iVar3 + 1;
    pvVar5 = (undefined *)((int)pvVar5 + 8);
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  iVar3 = 0x7bc;
  pvVar5 = (undefined *)((int)this + 0x1dac);
  local_8 = 3;
  do {
    if ((iVar3 < 0) || (uVar2 = F_00ab36c0(iVar3), uVar2 == 0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(uint *)(uVar2 + 8) & 0xffffff) + uVar2 + 8;
    }
    F_005a2710(pvVar5 GEN_EDX_ARG,6);
    *(int *)((int)pvVar5 + 4) = iVar4;
    iVar3 = iVar3 + 1;
    pvVar5 = (undefined *)((int)pvVar5 + 8);
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  iVar3 = 0x3e;
  pvVar5 = (undefined *)((int)this + 0x1dd4);
  local_c = 2;
  do {
    if ((iVar3 < 0) || (puVar1 = (uint *)F_00ab36c0(iVar3), puVar1 == (uint *)0x0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*puVar1 & 0xffffff) + (int)puVar1;
    }
    uVar2 = F_005a2710(pvVar5 GEN_EDX_ARG,6);
    *(int *)((int)pvVar5 + 4) = iVar4;
    iVar3 = iVar3 + 1;
    pvVar5 = (undefined *)((int)pvVar5 + 8);
    local_c = local_c - 1;
  } while (local_c != 0);
  return uVar2;
}

/* ref: FUN_007e3e10 */
GEN_FRAME uint GEN_THISCALL F_007e3e10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e3e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((uint *)(gen_frame + 0x4))[5] = uVar1;
  if (*(char *)((int)this + 0x1fbc) == '\x02') {
    iVar2 = *(int *)((int)this + 0x1fc0);
    ((uint *)(gen_frame + 0x4))[0] = 0x2c9;
    ((uint *)(gen_frame + 0x4))[1] = 0x2cb;
    ((uint *)(gen_frame + 0x4))[2] = 0x2de;
    ((uint *)(gen_frame + 0x4))[3] = 0x2d2;
    ((uint *)(gen_frame + 0x4))[4] = 700;
    uVar1 = ((uint *)(gen_frame + 0x4))[(int)(iVar2)];
    if (REFG(void * PTR32, 0x148a44c) != (undefined *)0x0) {
      F_00aa0560(REFG(void * PTR32, 0x148a44c) GEN_EDX_FWD,3);
      F_00aa4270(REFG(void * PTR32, 0x148a44c) GEN_EDX_ARG,uVar1,0,0);
    }
    iVar2 = *(int *)((int)this + 0x1fc0) + 1;
    uVar1 = iVar2 / 5;
    *(int *)((int)this + 0x1fc0) = iVar2 % 5;
    *(undefined4 *)((int)this + 0x1fc8) = 0;
    *(undefined4 *)((int)this + 0x1fcc) = 0;
  }
  F_00c47745(((uint *)(gen_frame + 0x4))[5] ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007e3ed0 */
GEN_FRAME byte GEN_THISCALL F_007e3ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e3ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  int iVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  
  piVar4 = (int *)F_00ab3630((*(int *)&gen_args[4]) + ((*(int *)&gen_args[3]) + (*(int *)&gen_args[2]) * 2) * 2);
  iVar2 = (*(int *)&gen_args[1]);
  uVar6 = 0;
  do {
    iVar1 = *piVar4;
    if (iVar1 == 0) break;
    uVar5 = (uint)*(byte *)(piVar4 + 0x3b);
    if (((iVar1 == 0xec) || (iVar1 == 0xf5)) && (piVar4[3] != 0)) {
      uVar5 = uVar5 | (piVar4[4] | 0x100U) << 0x10;
    }
    if (iVar1 == 0xcb) {
      uVar5 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,4);
      F_004142d0(&(*(int *)&gen_args[1]) GEN_EDX_ARG,*(undefined4 *)(uVar5 + 0x14));
      switch((unsigned int)(uintptr_t)((*(int *)&gen_args[1]))) {
      default: ;
        uVar5 = 0;
        break;
      case 1: ;
        uVar5 = 3;
        break;
      case 2: ;
        uVar5 = 6;
        break;
      case 3: ;
        uVar5 = 9;
      }
    }
    F_007808b0(uVar6,iVar2,piVar4,uVar5);
    uVar6 = uVar6 + 1;
    piVar4 = piVar4 + 0x3c;
  } while (uVar6 < 0x1c);
  *(undefined1 *)(iVar2 + 0xd) = (undefined1)(*(int *)&gen_args[4]);
  *(char *)(iVar2 + 0xc) = (char)(*(int *)&gen_args[2]) + '\x01';
  bVar3 = (char)(*(int *)&gen_args[2]) * '\x02' + (char)(*(int *)&gen_args[3]) + 1;
  *(byte *)(iVar2 + 0x10) = bVar3;
  return bVar3;
}

/* ref: FUN_007e3fd0 */
GEN_FRAME uint GEN_STDCALL F_007e3fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7e3fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00ab3630(param_5 + (param_4 + param_3 * 2) * 2);
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *param_1 = *(undefined4 *)(uVar1 + 0x1af8);
    param_1[1] = *(undefined4 *)(uVar1 + 0x1b00);
    param_1[2] = *(undefined4 *)(uVar1 + 0x1b08);
    param_1[3] = *(undefined4 *)(uVar1 + 0x1b10);
    uVar1 = *(uint *)(uVar1 + 0x1b18);
    param_1[4] = uVar1;
    return uVar1;
  case 1: ;
    puVar2 = (undefined4 *)F_00ab3660(param_6);
    uVar1 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      *param_1 = *puVar2;
      param_1[1] = puVar2[2];
      param_1[2] = puVar2[4];
      param_1[3] = puVar2[6];
      uVar1 = puVar2[8];
      param_1[4] = uVar1;
      return uVar1;
    }
    break;
  case 2: ;
    *param_1 = *(undefined4 *)(uVar1 + 0x1b30);
    param_1[1] = *(undefined4 *)(uVar1 + 0x1b38);
    param_1[2] = *(undefined4 *)(uVar1 + 0x1b40);
    param_1[3] = *(undefined4 *)(uVar1 + 0x1b48);
    uVar1 = *(uint *)(uVar1 + 0x1b50);
    param_1[4] = uVar1;
    return uVar1;
  case 3: ;
    *param_1 = *(undefined4 *)(uVar1 + 0x1b68);
    param_1[1] = *(undefined4 *)(uVar1 + 0x1b70);
    param_1[2] = *(undefined4 *)(uVar1 + 0x1b78);
    param_1[3] = *(undefined4 *)(uVar1 + 0x1b80);
    uVar1 = *(uint *)(uVar1 + 0x1b88);
    param_1[4] = uVar1;
  }
  return uVar1;
}

/* ref: FUN_007e40e0 */
GEN_FRAME uint GEN_THISCALL F_007e40e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e40e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 gen_out[0x4];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 * local_c;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  local_14 = 0;
  local_c = &REFG(undefined4, 0x13282e0);
  iVar6 = (int)this + 0x34;
  do {
    local_18 = 0;
    local_10 = local_14 * 4;
    do {
      local_1c = 0;
      do {
        F_007e3fd0(iVar6,param_1,local_14,local_18,local_1c,
                     (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0xf5c) + 7))));
        if (((-1 < local_10) && (uVar3 = F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,*local_c), uVar3 != 0)) &&
           (piVar1 = *(int * PTR32 *)(uVar3 + 0xec), piVar1 != (int *)0x0)) {
          iVar4 = 0;
          iVar5 = iVar6;
          do {
            ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xfc))(piVar1 GEN_EDX_ARG,iVar4,iVar5);
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + 4;
          } while (iVar4 < 10);
        }
        local_10 = local_10 + 1;
        local_c = local_c + 1;
        local_1c = local_1c + 1;
        iVar6 = iVar6 + 0xc4;
      } while (local_1c < 2);
      local_18 = local_18 + 1;
    } while (local_18 < 2);
    local_14 = local_14 + 1;
  } while ((int)local_c < 0x1328330);
  F_00c47745(uVar2 ^ (uint)(uint)(gen_out + 0x0) GEN_EDX_ARG);
  return (uint)local_c;
}

/* ref: FUN_007e41f0 */
GEN_FRAME unsigned int GEN_THISCALL F_007e41f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e41f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint local_20;
  uint * local_c;
  int local_8;
  
  uVar10 = F_0046ff40();
  uVar2 = (uint)uVar10;
  uVar4 = 0;
  local_c = (uint *)(param_2 + 0x54);
  local_8 = 0;
  uVar6 = 0;
  uVar3 = 0;
  do {
    if (*param_1 == 0) {
      return 0;
    }
    uVar2 = uVar2 << 0xb ^ uVar2;
    uVar7 = uVar6 ^ (uVar6 >> 0xb ^ uVar2) >> 8 ^ uVar2;
    uVar5 = uVar7 % (uint)*(byte *)((int)param_1 + 0xee);
    uVar1 = *param_1;
    uVar8 = uVar7;
    uVar2 = uVar4;
    uVar9 = uVar4;
    local_20 = uVar7;
    if (uVar1 < 0xfa) {
      if (uVar1 == 0xf9) {
        uVar3 = uVar3 << 0xb ^ uVar3;
        uVar8 = uVar7 ^ (uVar7 >> 0xb ^ uVar3) >> 8 ^ uVar3;
        uVar9 = uVar6;
        if ((uVar8 & 1) != 0) {
          uVar5 = uVar5 | 0x80;
        }
      }
      else {
        if (uVar1 == 0xec) {
          uVar3 = uVar3 << 0xb ^ uVar3;
          uVar3 = uVar7 ^ (uVar7 >> 0xb ^ uVar3) >> 8 ^ uVar3;
        }
        else {
          if (uVar1 != 0xf5) {
            uVar2 = uVar3;
            local_20 = uVar6;
            if (uVar1 == 0xf8) {
              uVar3 = uVar3 << 0xb ^ uVar3;
              uVar3 = uVar7 ^ (uVar7 >> 0xb ^ uVar3) >> 8 ^ uVar3;
              if ((uVar3 & 1) == 0) {
                uVar5 = 0;
                uVar8 = uVar3;
                uVar2 = uVar4;
                uVar9 = uVar6;
                local_20 = uVar7;
              }
              else {
                uVar4 = uVar4 << 0xb ^ uVar4;
                uVar8 = uVar3 ^ (uVar3 >> 0xb ^ uVar4) >> 8 ^ uVar4;
                if ((uVar8 & 1) != 0) {
                  uVar5 = uVar5 + 0x80;
                }
                uVar5 = uVar5 | 0x100;
                uVar2 = uVar6;
                uVar9 = uVar7;
                local_20 = uVar3;
              }
            }
            goto LAB_007e4435;
          }
          uVar3 = uVar3 << 0xb ^ uVar3;
          uVar3 = uVar7 ^ (uVar7 >> 0xb ^ uVar3) >> 8 ^ uVar3;
        }
        uVar8 = uVar3;
        uVar9 = uVar6;
        if ((uVar3 & 1) != 0) {
          uVar4 = uVar4 << 0xb ^ uVar4;
          uVar8 = uVar3 ^ (uVar3 >> 0xb ^ uVar4) >> 8 ^ uVar4;
          uVar5 = ((uVar8 % 1000) % (uint)*(byte *)((int)param_1 + 0xee) | 0x100) << 0x10 | uVar5;
          uVar2 = uVar6;
          uVar9 = uVar7;
          local_20 = uVar3;
        }
      }
    }
    else if (uVar1 < 0x6ce) {
      if (uVar1 < 0x6cc) {
        uVar2 = uVar3;
        local_20 = uVar6;
        if ((uVar1 == 0xfa) &&
           (uVar3 = uVar3 << 0xb ^ uVar3, uVar8 = uVar7 ^ (uVar7 >> 0xb ^ uVar3) >> 8 ^ uVar3,
           uVar2 = uVar4, uVar9 = uVar6, local_20 = uVar7, (uVar8 & 1) != 0)) {
          uVar5 = uVar5 + 0x80;
        }
      }
      else {
        uVar3 = uVar3 << 0xb ^ uVar3;
        uVar8 = uVar7 ^ (uVar7 >> 0xb ^ uVar3) >> 8 ^ uVar3;
        uVar5 = uVar8 & 0x1f;
        uVar9 = uVar6;
      }
    }
    else {
      uVar2 = uVar3;
      local_20 = uVar6;
      if (uVar1 - 0x6ce < 2) {
        uVar3 = uVar3 << 0xb ^ uVar3;
        uVar8 = uVar7 ^ (uVar7 >> 0xb ^ uVar3) >> 8 ^ uVar3;
        uVar5 = uVar8 & 3;
        uVar2 = uVar4;
        uVar9 = uVar6;
        local_20 = uVar7;
      }
    }
LAB_007e4435: ;
    *local_c = uVar5;
    F_007808b0(local_8,param_2,param_1,uVar5);
    local_c = local_c + 1;
    param_1 = param_1 + 0x3c;
    local_8 = local_8 + 1;
    uVar4 = local_20;
    uVar6 = uVar8;
    uVar3 = uVar9;
    if (0x1b < local_8) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_007e4480 */
GEN_FRAME byte GEN_STDCALL F_007e4480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7e4480u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  
  uVar1 = F_00ab3630(param_3 + (param_2 + param_1 * 2) * 2);
  return *(byte *)(uVar1 + 0x1a40 + param_4);
}

/* ref: FUN_007e44b0 */
GEN_FRAME byte GEN_STDCALL F_007e44b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e44b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  do {
    if (*(char *)((*(int *)&gen_args[0]) + 0x1a40 + iVar1) == (char)(*(undefined4 *)&gen_args[1])) goto LAB_007e450d;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xc);
  uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,4);
  F_004142d0(&(*(undefined4 *)&gen_args[1]) GEN_EDX_ARG,*(undefined4 *)(uVar2 + 0x14));
  switch((unsigned int)(uintptr_t)((*(undefined4 *)&gen_args[1]))) {
  default: ;
    iVar1 = 0;
    break;
  case 1: ;
    return 3;
  case 2: ;
    return 6;
  case 3: ;
    return 9;
  }
LAB_007e450d: ;
  return (byte)iVar1;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf36 */
GEN_FRAME uint GEN_THISCALL F_007e4530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e4530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  bool bVar2;
  undefined * pAVar3;
  uint uVar4;
  undefined * pAVar5;
  
  if ((this[0x1fd0] == (undefined1)0x1) && ((char)param_2 != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  pAVar3 = (undefined *)(int)(char)this[0x1fd0];
  if ((pAVar3 != param_1) || (bVar2)) {
    this[0x1fd0] = SUB41(param_1,0);
    pAVar5 = *(undefined * PTR32 *)(this + 0xf5c);
    if (REFG(void * PTR32, 0x148a44c) != (undefined *)0x0) {
      uVar4 = *((byte *)GEN_TOP(((int)REFG(void * PTR32, 0x148a44c) + 0x2dbc))) - 1 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      pAVar5 = this + ((uint)*((byte *)GEN_TOP(((int)REFG(void * PTR32, 0x148a44c) + 0x2db9))) +
                      ((uVar4 & 0xff) + (uint)(byte)(*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x148a44c) + 0x2db8))) - 1) * 2)
                      * 2) * 0xc4 + 0xc;
      if (pAVar5 != (undefined *)0x0) {
        F_007e3fd0(pAVar5 + 0x28,param_1,(uint)(byte)*pAVar5,(uint)(byte)pAVar5[1],
                     (uint)(byte)pAVar5[2],(uint)(byte)pAVar5[7]);
        F_00782ed0(pAVar5 + 0x28,(uint)(byte)*pAVar5,(uint)(byte)pAVar5[1],(uint)(byte)pAVar5[2]);
      }
    }
    pAVar3 = *(undefined * PTR32 *)(this + 0xf5c);
    if (pAVar5 != pAVar3) {
      F_007e3fd0(pAVar3 + 0x28,param_1,(uint)(byte)*pAVar3,(uint)(byte)pAVar3[1],
                   (uint)(byte)pAVar3[2],(uint)(byte)pAVar3[7]);
      pbVar1 = *(byte * PTR32 *)(this + 0xf5c);
      pAVar3 = (undefined *)
               F_00782ed0(pbVar1 + 0x28,(uint)*pbVar1,(uint)pbVar1[1],(uint)pbVar1[2]);
    }
    if (REFG(void * PTR32, 0x148a44c) != (undefined *)0x0) {
      F_00aa0560(REFG(void * PTR32, 0x148a44c) GEN_EDX_ARG,3);
      pAVar3 = (undefined *)F_00aa4270(REFG(void * PTR32, 0x148a44c) GEN_EDX_ARG,0x2ca,0,0);
    }
  }
  return (uint)pAVar3;
}

/* ref: FUN_007e4670 */
GEN_FRAME uint GEN_THISCALL F_007e4670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e4670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 == 0) {
    *(undefined1 *)((int)this + 0x1fbc) = 0;
    return 0;
  }
  if (param_1 != 2) {
    uVar1 = F_007827a0(param_1);
    return uVar1;
  }
  *(undefined1 *)((int)this + 0x1fbc) = 2;
  uVar1 = F_007e3e10(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCreate::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_007e46b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e46b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_FWD);
  F_00782660();
  F_0069f140(*(undefined * PTR32 *)(this + 0x1fa4) GEN_EDX_ARG);
  F_005ed040();
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG);
  uVar1 = *(uint *)(this + 0xf60);
  *(undefined4 *)(uVar1 + 0x54) = 0;
  *((undefined1 *)GEN_TOP((*(int *)(this + 0xf60) + 0x60))) = 1;
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCreate::vf32 */
GEN_FRAME unsigned int GEN_THISCALL F_007e4700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e4700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  byte * pbVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 * puVar5;
  int iVar6;
  undefined1 * puVar7;
  
  pbVar2 = *(byte * PTR32 *)(this + 0xf5c);
  bVar1 = pbVar2[10];
  uVar4 = F_00ab3630((uint)pbVar2[2] + ((uint)pbVar2[1] + (uint)*pbVar2 * 2) * 2);
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(uVar4 + 0x1a40 + (uint)bVar1);
  *(char *)(param_1 + 0x1f) = *((char *)GEN_TOP((*(int *)(this + 0xf5c) + 6))) + '\x01';
  *(char *)(param_1 + 0x20) = *((char *)GEN_TOP((*(int *)(this + 0xf5c) + 4))) + '\x01';
  *(char *)(param_1 + 0x21) = *((char *)GEN_TOP((*(int *)(this + 0xf5c) + 5))) + '\x01';
  uVar4 = F_00ab3660((uint)*((byte *)GEN_TOP((*(int *)(this + 0xf5c) + 7))));
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)(uVar4 + 0x38);
  }
  *(undefined1 *)(param_1 + 0x22) = uVar3;
  *(undefined1 *)(param_1 + 0x23) = 1;
  puVar7 = ((undefined1 *)GEN_TOP((*(int *)(this + 0xf5c) + 0xc)));
  puVar5 = (undefined1 *)(param_1 + 4);
  iVar6 = 0x1a;
  do {
    *puVar5 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar5 = puVar5 + 1;
    iVar6 = iVar6 - 1;
  } while (iVar6 != 0);
  return 0;
}

/* ref: Client::UI2::Agent::AgentCreate::vf37 */
GEN_FRAME uint GEN_THISCALL F_007e47b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e47b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xf60);
  if (*(int *)(uVar1 + 0x54) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(uVar1 + 0x50))(*(undefined4 *)(uVar1 + 0x54),uVar1 + 0x58,2,param_1);
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCreate::vf39 */
GEN_FRAME unsigned int GEN_THISCALL F_007e47e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e47e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  
  if (param_2 == 1) {
    F_0042e430(this + 0x1fdc GEN_EDX_FWD,param_1);
    F_00780850(this GEN_EDX_ARG,0xffffffff,0xffffffff);
    if (*(int *)(this + 0x2180) != 0) {
      iVar1 = *(int *)(this + 0xf60);
      if (*(int *)(iVar1 + 0x54) != 0) {
        ((code *)*(gen_code32 *)(iVar1 + 0x50))(*(undefined4 *)(iVar1 + 0x54),iVar1 + 0x58,0,0);
      }
      if (*(int *)(this + 8) != 0) {
        F_005a2710(this + 0x1dc4 GEN_EDX_ARG,3);
        *(undefined4 *)(this + 0x1dc8) = 0x115;
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 8),0x205,this + 0xf7c);
      }
    }
  }
  return;
}

/* ref: Client::UI2::Agent::AgentCreate::vf40 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007e4880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e4880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (*(int *)(this + 0x2180) != 0) {
    iVar1 = *(int *)(this + 0xf60);
    if (*(int *)(iVar1 + 0x54) != 0) {
      ((code *)*(gen_code32 *)(iVar1 + 0x50))(*(undefined4 *)(iVar1 + 0x54),iVar1 + 0x58,0,0);
    }
    if (*(int *)(this + 8) != 0) {
      F_005a2710(this + 0x1dc4 GEN_EDX_ARG,3);
      *(undefined4 *)(this + 0x1dc8) = 0x115;
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 8),0x205,this + 0xf7c);
    }
  }
  return;
}

/* ref: Client::UI2::Agent::AgentCreate::vf43 */
GEN_NOFRAME uint GEN_THISCALL F_007e48f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e48f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xf60);
  if (*(int *)(uVar1 + 0x54) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(uVar1 + 0x50))(*(undefined4 *)(uVar1 + 0x54),uVar1 + 0x58,1,0);
  }
  return uVar1;
}

/* ref: FUN_007e4920 */
GEN_FRAME uint GEN_THISCALL F_007e4920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e4920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d512c));
  return (uint)in_ecx;
}

/* ref: FUN_007e4940 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007e4940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e4940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return;
}

/* ref: FUN_007e4980 */
GEN_FRAME uint GEN_THISCALL F_007e4980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7e4980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  code * pcVar1;
  int iVar2;
  undefined * this_00;
  int * this_01;
  int * piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  uVar5 = param_3;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x50))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
  F_00448810(this_00 GEN_EDX_ARG,uVar5,uVar6);
  this_01 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  if (this_01[0x8b4f] != 0) {
    piVar3 = this_01 + 0x8b3c;
    do {
      iVar2 = *piVar3;
      piVar3 = (int *)((int)piVar3 + 1);
    } while ((char)iVar2 != '\0');
    if (piVar3 == (int *)((int)this_01 + 0x22cf1)) {
      pcVar1 = *(gen_code32 *)(*this_01 + 0x14);
      this_01[0x8b4f] = 0;
      (*pcVar1)(this_01,"LobbyMain",0,0);
    }
    else {
      F_00559190(this_01 GEN_EDX_ARG,"LobbyMain");
      this_01[0x8b4f] = 0;
    }
  }
  *(undefined4 *)((int)this + 0x2ec) = param_1;
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x140) = param_1;
  *(undefined1 *)((int)this + 0x5fd) = (undefined1)param_2;
  *(char *)((int)this + 0x5fc) = (char)param_3;
  F_0042e430((undefined *)((int)this + 0x308) GEN_EDX_ARG,param_4);
  F_0042e430((undefined *)((int)this + 0x3b0) GEN_EDX_ARG,"");
  if (param_5 != 0) {
    uVar4 = F_0042e430((undefined *)((int)this + 0x35c) GEN_EDX_ARG,param_5);
    *(undefined1 *)((int)this + 0x68c) = 2;
    return uVar4;
  }
  uVar4 = F_0042e430((undefined *)((int)this + 0x35c) GEN_EDX_ARG,&REFG(undefined, 0x10c069c));
  *(undefined1 *)((int)this + 0x68c) = 2;
  return uVar4;
}

/* ref: FUN_007e4a80 */
GEN_FRAME uint GEN_THISCALL F_007e4a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e4a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  int * piVar3;
  undefined4 uVar4;
  
  if (*(char *)((int)this + 0x6d1) != '\0') {
    uVar1 = 0;
    piVar3 = (int *)((int)this + 0x11c);
    do {
      if ((1 < uVar1) || (*piVar3 < 10)) {
        iVar2 = uVar1 + 1;
        uVar4 = 0x59;
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
        F_0046a6b0(this_00 GEN_EDX_ARG,uVar4,iVar2);
        break;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 0x46;
    } while ((int)uVar1 < 2);
    *(undefined1 *)((int)this + 0x6d1) = 0;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_007e4af0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007e4af0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e4af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x7c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD,6,0,0);
  uVar1 = (uint)REFG(undefined1, 0x14ab0d4);
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  F_0045c010(pvVar2 GEN_EDX_ARG,uVar1);
  F_00920c00(0,REFG(float, 0x1094884));
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 1;
  uVar6 = 0;
  uVar5 = 0;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  F_0075ec30(pvVar2 GEN_EDX_ARG,uVar5,uVar6,uVar7,uVar8,uVar9);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
  if (*(char *)(uVar1 + 4) != '\0') {
    puVar3 = (undefined4 *)(uVar1 + 0xc);
    iVar4 = 0x65;
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar3 + 0x34))((int *)*puVar3 GEN_EDX_ARG,0);
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentLobby::BeginLogout */
GEN_FRAME uint GEN_THISCALL F_007e4b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e4b80u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  float fVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((*(undefined * PTR32 *)&gen_args[0])[0x6ce] == (undefined1)0x0) {
    (*(undefined * PTR32 *)&gen_args[0])[0x6ce] = (undefined1)0x1;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_FWD);
    if (*(char *)(uVar2 + 4) != '\0') {
      puVar4 = (undefined4 *)(uVar2 + 0xc);
      iVar3 = 0x65;
      do {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar4 + 0x34))((int *)*puVar4 GEN_EDX_ARG,2);
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG);
    if (*(char *)(uVar2 + 4) != '\0') {
      puVar4 = (undefined4 *)(uVar2 + 0xc);
      iVar3 = 0x65;
      do {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar4 + 0x34))((int *)*puVar4 GEN_EDX_ARG,3);
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
    }
    fVar1 = REFG(float, 0x1088068);
    (*(undefined * PTR32 *)&gen_args[0])[0x6cd] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0));
    *((undefined2 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x6c8))) = 0;
    (*(undefined * PTR32 *)&gen_args[0])[0x6bc] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 0));
    F_0049b7d0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4) GEN_EDX_ARG,1,fVar1,REFG(undefined4, 0x1302e44),REFG(undefined4, 0x1302e48),
                 REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    uVar6 = 0x3c;
    uVar5 = 0;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG)));
    F_0075ec30(this_00 GEN_EDX_ARG,uVar5,uVar6,uVar7,uVar8,uVar9);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(uVar2 + 0x23330) + 0x4c))))((int *)(uVar2 + 0x23330) GEN_EDX_ARG,0x3e,0,0);
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,0x1fe,0);
    (*(undefined * PTR32 *)&gen_args[0])[0x68f] = (undefined1)0x12;
  }
  return in_EAX;
}

/* ref: FUN_007e4cb0 */
GEN_FRAME uint GEN_THISCALL F_007e4cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e4cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  uVar1 = F_007819f0(param_1);
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 8) == 0) {
      if ((char)uVar1 < '\0') {
        uVar1 = F_00781590(this GEN_EDX_ARG,0x41);
        uVar1 = F_0042e430(param_2 GEN_EDX_ARG,uVar1);
        return uVar1;
      }
      if ((uVar1 & 0x100) != 0) {
        uVar1 = F_00781590(this GEN_EDX_ARG,0x43);
        uVar1 = F_0042e430(param_2 GEN_EDX_ARG,uVar1);
        return uVar1;
      }
      uVar1 = F_0042e430(param_2 GEN_EDX_ARG,"");
      return uVar1;
    }
    uVar3 = 0x1b;
  }
  else {
    uVar3 = 0x40;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8) GEN_EDX_ARG,uVar3)));
  if (piVar2 == (int *)0x0) {
    uVar1 = F_0042e430(param_2 GEN_EDX_ARG,&REFG(undefined, 0x10be54a));
    return uVar1;
  }
  uVar3 = 3;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG)));
  uVar1 = F_00cb0950(this_00 GEN_EDX_ARG,uVar3);
  uVar1 = F_0042e430(param_2 GEN_EDX_ARG,uVar1);
  return uVar1;
}

/* ref: FUN_007e4d60 */
GEN_FRAME byte GEN_STDCALL F_007e4d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7e4d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  byte bVar2;
  byte * pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  ((uint *)(gen_frame + 0x8))[0xc] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  iVar5 = *param_1;
  if ((iVar5 == 0) || ((*(int *)(iVar5 + 0xc) == 0 && (*(int *)(iVar5 + 8) == 0)))) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
    return 0;
  }
  uVar4 = F_00e3be40(iVar5 GEN_EDX_ARG);
  if ((uVar4 == 0) || (*(char *)(uVar4 + 0x56) == '\0')) {
    F_00c47745(((uint *)(gen_frame + 0x8))[0xc] ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
    return 0;
  }
  iVar5 = 0;
  do {
    param_2[iVar5] = *(byte *)(uVar4 + 0x56 + iVar5);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x1a);
  if (((*param_1 != 0) && (uVar6 = F_00e3be40(*param_1 GEN_EDX_ARG), uVar6 != 0)) &&
     (*(int *)(uVar6 + 0xa8) != 0)) {
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(uVar4 + 0x80);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(uVar4 + 0x84);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(uVar4 + 0x88);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(uVar4 + 0x8c);
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(uVar4 + 0x90);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(uVar4 + 0x94);
    *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(uVar4 + 0x98);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(uVar4 + 0x9c);
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(uVar4 + 0xa0);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(uVar4 + 0xa4);
    *param_3 = *(undefined4 *)(uVar4 + 0x70);
    param_3[1] = *(undefined4 *)(uVar4 + 0x74);
    *param_4 = *(undefined4 *)(uVar4 + 0x78);
    param_4[1] = *(undefined4 *)(uVar4 + 0x7c);
    F_00c47745(((uint *)(gen_frame + 0x8))[0xc] ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
    return 1;
  }
  bVar1 = *param_2;
  bVar2 = param_2[1];
  pbVar3 = param_2;
  pbVar3[0x1c] = 0;
  pbVar3[0x1d] = 0;
  pbVar3[0x1e] = 0;
  pbVar3[0x1f] = 0;
  ((uint *)(gen_frame + 0x8))[0] = 0;
  ((uint *)(gen_frame + 0x8))[1] = 0;
  ((uint *)(gen_frame + 0x8))[2] = 0x10054;
  ((uint *)(gen_frame + 0x8))[3] = 0x10055;
  ((uint *)(gen_frame + 0x8))[4] = 0x10056;
  ((uint *)(gen_frame + 0x8))[5] = 0x10057;
  ((uint *)(gen_frame + 0x8))[6] = 0x1005c;
  ((uint *)(gen_frame + 0x8))[7] = 0x1005d;
  ((uint *)(gen_frame + 0x8))[8] = 0x10058;
  ((uint *)(gen_frame + 0x8))[9] = 0x10059;
  ((uint *)(gen_frame + 0x8))[10] = 0x1005a;
  ((uint *)(gen_frame + 0x8))[0xb] = 0x1005b;
  uVar4 = ((uint *)(gen_frame + 0x8))[(int)((uint)bVar2 + (uint)bVar1 * 2)];
  *(uint *)(param_2 + 0x20) = uVar4;
  *(uint *)(param_2 + 0x24) = uVar4;
  *(uint *)(param_2 + 0x28) = uVar4;
  *(uint *)(param_2 + 0x2c) = uVar4;
  pbVar3[0x30] = 0;
  pbVar3[0x31] = 0;
  pbVar3[0x32] = 0;
  pbVar3[0x33] = 0;
  pbVar3[0x34] = 0;
  pbVar3[0x35] = 0;
  pbVar3[0x36] = 0;
  pbVar3[0x37] = 0;
  pbVar3[0x38] = 0;
  pbVar3[0x39] = 0;
  pbVar3[0x3a] = 0;
  pbVar3[0x3b] = 0;
  pbVar3[0x3c] = 0;
  pbVar3[0x3d] = 0;
  pbVar3[0x3e] = 0;
  pbVar3[0x3f] = 0;
  pbVar3[0x40] = 0;
  pbVar3[0x41] = 0;
  pbVar3[0x42] = 0;
  pbVar3[0x43] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  *param_4 = 0;
  param_4[1] = 0;
  F_00c47745(((uint *)(gen_frame + 0x8))[0xc] ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007e4f40 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007e4f40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e4f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
  piVar1 = *(int * PTR32 *)(uVar2 + 0x24);
  if (piVar1 != (int *)0x0) {
    return (uint)(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG));
  }
  return 0;
}

/* ref: FUN_007e4f90 */
GEN_FRAME unsigned int GEN_THISCALL F_007e4f90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e4f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * this_00;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int local_8;
  
  if (*(int *)((int)this + 0x6f4) == 0) {
    uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_FWD,9);
    uVar5 = 0;
    *(uint *)((int)this + 0x6f8) = uVar1;
    uVar1 = F_00404270();
    this_00 = (undefined4 *)F_00406bd0(0x28,0,uVar1,uVar5);
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(this_00 GEN_EDX_ARG,0x38,0);
      this_00[5] = 0x38;
      *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10d39d4));
      this_00[6] = this;
      this_00[8] = ((code *)REFP(0x781c90));
      this_00[9] = 0;
    }
    *(undefined4 * PTR32 *)((int)this + 0x6f4) = this_00;
    iVar4 = 0;
    local_8 = 1;
    do {
      uVar1 = F_00ab2200(local_8);
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6f4) GEN_EDX_ARG,iVar4,*(undefined4 *)(uVar1 + 8));
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6f4) GEN_EDX_ARG,iVar4 + 1,*(undefined4 *)(uVar1 + 0x10));
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6f4) GEN_EDX_ARG,iVar4 + 2,*(undefined4 *)(uVar1 + 0x18));
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6f4) GEN_EDX_ARG,iVar4 + 3,*(undefined4 *)(uVar1 + 0x20));
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6f4) GEN_EDX_ARG,iVar4 + 4,*(undefined4 *)(uVar1 + 0xc));
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6f4) GEN_EDX_ARG,iVar4 + 5,*(undefined4 *)(uVar1 + 0x14));
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6f4) GEN_EDX_ARG,iVar4 + 6,*(undefined4 *)(uVar1 + 0x1c));
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6f4) GEN_EDX_ARG,iVar4 + 7,*(undefined4 *)(uVar1 + 0x24));
      local_8 = local_8 + 1;
      iVar4 = iVar4 + 8;
    } while (local_8 < 6);
    local_8 = 0;
    do {
      uVar1 = F_00ab3660(local_8);
      if (uVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(uVar1 + 0x38);
      }
      uVar2 = F_00ab21a0(uVar5);
      if (uVar1 == 0) {
        uVar5 = 0;
        uVar3 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(uVar2 + 0x14);
        uVar3 = *(undefined4 *)(uVar2 + 0x18);
      }
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6f4) GEN_EDX_ARG,iVar4,uVar5);
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6f4) GEN_EDX_ARG,iVar4 + 1,uVar3);
      local_8 = local_8 + 1;
      iVar4 = iVar4 + 2;
    } while (local_8 < 8);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x6f8) + 0x48))))
              (*(int * PTR32 *)((int)this + 0x6f8) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x6f4));
  }
  return;
}

/* ref: Client::UI2::Agent::AgentLobby::OnLogout */
GEN_FRAME byte GEN_THISCALL F_007e5140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7e5140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 AVar1;
  int iVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined * PTR32 * ppuVar10;
  undefined4 uVar11;
  
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this - 0xc) + 0x1c))))(*(int * PTR32 *)(this - 0xc) GEN_EDX_FWD)));
  F_0075ef20(pvVar3 GEN_EDX_ARG);
  F_0043f9a0();
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this - 0xc) + 0x58))))(*(int * PTR32 *)(this - 0xc) GEN_EDX_ARG)));
  F_0043a410(pvVar3 GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this - 0xc) + 0x1c))))(*(int * PTR32 *)(this - 0xc) GEN_EDX_ARG)));
  F_007c88b0(pvVar3 GEN_EDX_ARG);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this - 0xc) + 0x2c))))(*(int * PTR32 *)(this - 0xc) GEN_EDX_ARG)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4 GEN_EDX_ARG,0,0);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this - 0xc) + 0x30))))(*(int * PTR32 *)(this - 0xc) GEN_EDX_ARG)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4 GEN_EDX_ARG,0,0);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this - 0xc) + 0x38))))(*(int * PTR32 *)(this - 0xc) GEN_EDX_ARG)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4 GEN_EDX_ARG,0,0);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this - 0xc) + 0x28))))(*(int * PTR32 *)(this - 0xc) GEN_EDX_ARG)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG,0,0);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this - 0xc) + 0x50))))(*(int * PTR32 *)(this - 0xc) GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(uVar5 + 0x850) + 0x1c))))(uVar5 + 0x850 GEN_EDX_ARG,0,0);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this - 0xc) + 0x34))))(*(int * PTR32 *)(this - 0xc) GEN_EDX_ARG)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4 GEN_EDX_ARG,0,0);
  *(undefined2 *)(this + 0x6b8) = 0;
  uVar5 = F_00424810(REFG(int, 0x137104c) GEN_EDX_ARG);
  if (uVar5 != 0) {
    F_00975110(uVar5 GEN_EDX_ARG,0);
    F_009750f0(uVar5 GEN_EDX_ARG,0);
  }
  ppuVar10 = &REFG(undefined * PTR32, 0x12fd328);
  uVar8 = 0;
  uVar6 = 1;
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this - 0xc) + 0x20))))(*(int * PTR32 *)(this - 0xc) GEN_EDX_ARG)));
  F_004485a0(pvVar3 GEN_EDX_ARG,uVar6,uVar8,ppuVar10);
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this - 0xc) + 0x44))))(*(int * PTR32 *)(this - 0xc) GEN_EDX_ARG)));
  F_0044d9c0(pvVar3 GEN_EDX_ARG);
  if (this[0x6be] == (undefined1)0x0) {
    F_0049b7d0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4) GEN_EDX_ARG,1,REFG(float, 0x1088068),REFG(undefined4, 0x1302e44),REFG(undefined4, 0x1302e48),
                 REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 1;
    uVar8 = 0xf;
    uVar6 = 0;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this - 0xc) + 0x1c))))(*(int * PTR32 *)(this - 0xc) GEN_EDX_ARG)));
    F_0075ec30(pvVar3 GEN_EDX_ARG,uVar6,uVar8,uVar7,uVar9,uVar11);
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this - 0xc) + 0x1c))))(*(int * PTR32 *)(this - 0xc) GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(uVar5 + 0x23330) + 0x4c))))((int *)(uVar5 + 0x23330) GEN_EDX_ARG,0x3e,0,1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this - 0xc) + 8))))(*(int * PTR32 *)(this - 0xc) GEN_EDX_ARG,0x1fe,0);
    this[0x6ac] = (undefined1)0xf;
  }
  if (this[0x67f] == (undefined1)0x12) {
    this[0x67f] = (undefined1)0x1;
  }
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this - 0xc) + 0x54))))(*(int * PTR32 *)(this - 0xc) GEN_EDX_ARG)));
  F_004495a0(pvVar3 GEN_EDX_ARG);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this - 0xc) + 0x1c))))(*(int * PTR32 *)(this - 0xc) GEN_EDX_ARG);
  iVar2 = *(int *)(uVar5 + 0x2319c);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar2 + 0xc) + 0x40))))(*(int * PTR32 *)(iVar2 + 0xc) GEN_EDX_ARG);
  }
  F_0052f5e0(REFG(void * PTR32, 0x1375b00) GEN_EDX_ARG,0);
  *(undefined4 *)(this + 0x6dc) = *param_1;
  AVar1 = this[0x67c];
  *(undefined4 *)(this + 0x6e0) = param_1[1];
  this[0x67e] = AVar1;
  this[0x67c] = (undefined1)0xa;
  return (byte)AVar1;
}

/* ref: FUN_007e5390 */
GEN_NOFRAME uint GEN_THISCALL F_007e5390(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e5390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x16c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x170);
  if (REFG(int, 0x148a444) != 0) {
    F_00b6b680(REFG(int, 0x148a444) GEN_EDX_FWD,1);
  }
  *(undefined1 *)((int)this + 0x68c) = 0x15;
  F_00990c20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  REFG(undefined4, 0x148a450) = F_009cfc30("vfx/ui/eff/screen02vfx.avfx",((undefined1 *)(gen_frame + 0x0)),4,0);
  F_00982d70();
  uVar1 = F_0043f8b0(0xf4255);
  F_00c47745((*(uint *)(gen_frame + 0x16c)) ^ (uint)(uint)(gen_frame + 0x170) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_007e5430(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e5430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 2;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  F_007601d0(this_00 GEN_EDX_ARG,uVar3);
  F_0049b7d0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4) GEN_EDX_ARG,1,(float)(float10)0,REFG(undefined4, 0x1302e44),REFG(undefined4, 0x1302e48),
               REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
  *(undefined4 *)(this + 0x2180) = 1;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x23184) + 8))))(*(int * PTR32 *)(uVar2 + 0x23184) GEN_EDX_ARG,0x1fe,0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(uVar2 + 0x23330) + 0x4c))))(uVar2 + 0x23330 GEN_EDX_ARG,0x3e,0,1);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x44))(this GEN_EDX_ARG);
  uVar1 = F_00ab0620();
  uVar2 = F_00ab6ad0((uint)uVar1);
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_007e54f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e54f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00ab6b60();
  F_00a06560(1);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG);
  F_00782660();
  F_0069f140(*(undefined * PTR32 *)(this + 0x1fa4) GEN_EDX_ARG);
  F_005ed040();
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG);
  uVar1 = *(uint *)(this + 0xf60);
  *(undefined4 *)(uVar1 + 0x54) = 0;
  *((undefined1 *)GEN_TOP((*(int *)(this + 0xf60) + 0x60))) = 1;
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf36 */
GEN_FRAME uint GEN_THISCALL F_007e5550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e5550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    iVar1 = 3;
  }
  uVar2 = F_007e4530((undefined *)this GEN_EDX_FWD,iVar1,param_2);
  return uVar2;
}

/* ref: FUN_007e5570 */
GEN_NOFRAME uint GEN_THISCALL F_007e5570(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e5570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  int iVar2;
  int * piVar3;
  int * this_00;
  uint uVar4;
  
  F_0049b7d0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4) GEN_EDX_FWD,1,(float)(float10)0,REFG(undefined4, 0x1302e44),REFG(undefined4, 0x1302e48),
               REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xf8))(piVar3 GEN_EDX_ARG,1);
  this_00 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  piVar3 = this_00;
  if (this_00[0x8b4f] != 1) {
    piVar3 = this_00 + 0x8b3c;
    do {
      iVar2 = *piVar3;
      piVar3 = (int *)((int)piVar3 + 1);
    } while ((char)iVar2 != '\0');
    if (piVar3 == (int *)((int)this_00 + 0x22cf1)) {
      pcVar1 = *(gen_code32 *)(*this_00 + 0x14);
      this_00[0x8b4f] = 1;
      uVar4 = (*pcVar1)(this_00,"GameMain",0,0);
      *(undefined4 *)((int)this + 0x2180) = 8;
      return uVar4;
    }
    piVar3 = (int *)F_00559190(this_00 GEN_EDX_ARG,"GameMain");
    this_00[0x8b4f] = 1;
  }
  *(undefined4 *)((int)this + 0x2180) = 8;
  return (uint)piVar3;
}

/* ref: FUN_007e5650 */
GEN_NOFRAME uint GEN_THISCALL F_007e5650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e5650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  F_00920c00(0,(float)(float10)0);
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 1;
  uVar4 = 0;
  uVar3 = 0;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG)));
  F_0075ec30(this_00 GEN_EDX_ARG,uVar3,uVar4,uVar5,uVar6,uVar7);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x23184) + 8))))(*(int * PTR32 *)(uVar2 + 0x23184) GEN_EDX_ARG,0x32,1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(uVar2 + 0x23330) + 0x4c))))(uVar2 + 0x23330 GEN_EDX_ARG,0x2e,1,1);
  piVar1 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0x3c))))(REFG(int * PTR32, 0x1379694) GEN_EDX_ARG,(int)this + 0x2190);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,0);
  }
  uVar2 = *(uint *)((int)this + 0xf60);
  if (*(int *)(uVar2 + 0x54) != 0) {
    uVar2 = ((code *)*(gen_code32 *)(uVar2 + 0x50))
                      (*(undefined4 *)(uVar2 + 0x54),uVar2 + 0x58,
                       (uint)(*(char *)((int)this + 0x21a0) != '\0'),0);
  }
  *(undefined4 *)((int)this + 0x2180) = 10;
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_007e5710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7e5710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_FWD);
  F_00782660();
  F_0069f140(*(undefined * PTR32 *)(this + 0x1fa4) GEN_EDX_ARG);
  F_005ed040();
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG);
  uVar1 = *(uint *)(this + 0xf60);
  *(undefined4 *)(uVar1 + 0x54) = 0;
  *((undefined1 *)GEN_TOP((*(int *)(this + 0xf60) + 0x60))) = 1;
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf24 */
GEN_FRAME unsigned int GEN_THISCALL F_007e5760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e5760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  
  if ((char)param_1 == '\0') {
    if (*(int *)(this + 8) != 0) {
      F_005a2710(this + 0x1dc4 GEN_EDX_FWD,3);
      *(undefined4 *)(this + 0x1dc8) = 0x21a;
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0x205,this + 0xf7c);
    }
    iVar2 = param_2;
    if (param_2 < 0) {
      iVar2 = *(int *)(this + 0x1fac);
    }
    F_00780850(this GEN_EDX_ARG,iVar2,0xffffffff);
  }
  return;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf43 */
GEN_NOFRAME uint GEN_THISCALL F_007e57d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e57d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xf60);
  if (*(int *)(uVar1 + 0x54) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(uVar1 + 0x50))(*(undefined4 *)(uVar1 + 0x54),uVar1 + 0x58,1,0);
  }
  return uVar1;
}

/* ref: FUN_007e5800 */
GEN_FRAME unsigned int F_007e5800(unsigned int gen_a0)
{
  GEN_ENTER(0x7e5800u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  REFG(undefined1, 0x132814b) = (byte)param_1;
  if (REFG(int, 0x148a444) != 0) {
    F_00782390();
    uVar1 = (uint)REFG(undefined1, 0x132814b);
    F_00b72120(REFG(int, 0x148a444) GEN_EDX_ARG,(uint)REFG(undefined1, 0x132814b),GEN_TOF(gen_bits2f((&REFG(float, 0x132828c))[(int)(uVar1 * 5)])),GEN_TOF(gen_bits2f((&REFG(float, 0x1328290))[(int)(uVar1 * 5)])),GEN_TOF(gen_bits2f((&REFG(float, 0x1328294))[(int)(uVar1 * 5)])),GEN_TOF(gen_bits2f((&REFG(float, 0x1328298))[(int)(uVar1 * 5)])));
  }
  return;
}

/* ref: FUN_007e5870 */
GEN_FRAME unsigned int F_007e5870(unsigned int gen_a0)
{
  GEN_ENTER(0x7e5870u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  if ((REFG(int, 0x148a444) != 0) && (REFG(undefined1, 0x132814b) != param_1)) {
    REFG(undefined1, 0x132814b) = (byte)param_1;
    F_00782390();
    uVar1 = (uint)REFG(undefined1, 0x132814b);
    F_00b72120(REFG(int, 0x148a444) GEN_EDX_ARG,(uint)REFG(undefined1, 0x132814b),GEN_TOF(gen_bits2f((&REFG(float, 0x132828c))[(int)(uVar1 * 5)])),GEN_TOF(gen_bits2f((&REFG(float, 0x1328290))[(int)(uVar1 * 5)])),GEN_TOF(gen_bits2f((&REFG(float, 0x1328294))[(int)(uVar1 * 5)])),GEN_TOF(gen_bits2f((&REFG(float, 0x1328298))[(int)(uVar1 * 5)])));
  }
  return;
}

/* ref: FUN_007e58e0 */
GEN_NOFRAME uint F_007e58e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e58e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  byte bVar2;
  byte bVar3;
  code * pcVar4;
  uint uVar5;
  int * this;
  
  ((uint *)(gen_frame + 0x24))[0x16] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  bVar2 = param_1[4];
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = *param_1;
  (*(uint *)(gen_frame + 0x20)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x20)), 1, 3),*param_1);
  bVar3 = param_1[1];
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = bVar2;
  (*(undefined4 *)(gen_frame + 0x18)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x18)), 1, 3),bVar2);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 0)) = bVar3;
  (*(undefined4 *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x14)), 1, 3),bVar3);
  iVar1 = (bVar3 - 2) + (uint)bVar2 * 2;
  ((uint *)(gen_frame + 0x24))[0] = 0;
  ((uint *)(gen_frame + 0x24))[1] = 0;
  ((uint *)(gen_frame + 0x24))[2] = 0x10054;
  ((uint *)(gen_frame + 0x24))[3] = 0x10055;
  ((uint *)(gen_frame + 0x24))[4] = 0x10056;
  ((uint *)(gen_frame + 0x24))[5] = 0x10057;
  ((uint *)(gen_frame + 0x24))[6] = 0x1005c;
  ((uint *)(gen_frame + 0x24))[7] = 0x1005d;
  ((uint *)(gen_frame + 0x24))[8] = 0x10058;
  ((uint *)(gen_frame + 0x24))[9] = 0x10059;
  ((uint *)(gen_frame + 0x24))[10] = 0x1005a;
  ((uint *)(gen_frame + 0x24))[0xb] = 0x1005b;
  (*(uint *)(gen_frame + 0x1c)) = (uint)bVar3;
  if (-1 < (int)(&REFG(undefined4, 0x13282e0))[(int)(iVar1)]) {
    F_00782b60((*(uint *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x14)));
    uVar5 = 0;
    if (-1 < (int)(&REFG(undefined4, 0x13282e0))[(int)(iVar1)]) goto LAB_007e5ab1;
  }
  ((uint *)(gen_frame + 0x24))[0xc] = 0;
  ((uint *)(gen_frame + 0x24))[0xd] = 0;
  ((uint *)(gen_frame + 0x24))[0xe] = 0;
  ((uint *)(gen_frame + 0x24))[0xf] = 0;
  ((uint *)(gen_frame + 0x24))[0x10] = 0;
  ((uint *)(gen_frame + 0x24))[0x11] = 0;
  ((uint *)(gen_frame + 0x24))[0x12] = 0;
  ((uint *)(gen_frame + 0x24))[0x13] = 0;
  ((uint *)(gen_frame + 0x24))[0x14] = 0;
  ((uint *)(gen_frame + 0x24))[0x15] = 0;
  if (param_2 != 3) {
    ((uint *)(gen_frame + 0x24))[0xc] = 0;
    if (param_2 == 1) {
      ((uint *)(gen_frame + 0x24))[0xd] = 0x190026;
      ((uint *)(gen_frame + 0x24))[0xe] = 0x4b0026;
      ((uint *)(gen_frame + 0x24))[0xf] = 0x340026;
      ((uint *)(gen_frame + 0x24))[0x10] = 0x6a0026;
    }
    else {
      uVar5 = ((uint *)(gen_frame + 0x24))[(int)((*(uint *)(gen_frame + 0x1c)) + ((*(uint *)(gen_frame + 0x20)) & 0xff) * 2)];
      ((uint *)(gen_frame + 0x24))[0xd] = uVar5;
      ((uint *)(gen_frame + 0x24))[0xe] = uVar5;
      ((uint *)(gen_frame + 0x24))[0xf] = uVar5;
      ((uint *)(gen_frame + 0x24))[0x10] = uVar5;
    }
  }
  ((uint *)(gen_frame + 0x24))[0xc] = 0;
  uVar5 = F_00ae3f10(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,0xffffffff);
  (&REFG(undefined4, 0x13282e0))[(int)(iVar1)] = uVar5;
  if (-1 < iVar1) {
    this = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,uVar5);
    uVar5 = 0;
    if (this != (int *)0x0) {
      F_00aaa640(this GEN_EDX_ARG,param_1,((uint *)(gen_frame + 0x24)) + 0xc);
      ((GEN_TCODE *)*(gen_code32 *)(*this + 0x2c))(this GEN_EDX_ARG);
      ((GEN_TCODE *)*(gen_code32 *)(*this + 0x24))(this GEN_EDX_ARG,8,0);
      ((GEN_TCODE *)*(gen_code32 *)(*this + 0x24))(this GEN_EDX_ARG,0xb,0);
      ((GEN_TCODE *)*(gen_code32 *)(*this + 0x28))(this GEN_EDX_ARG,6,0);
      pcVar4 = *(gen_code32 *)(*this + 0x3c);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*pcVar4)(this,&(*(undefined4 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*(gen_code32 *)(*this + 0x48))(this GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)0));
      uVar5 = F_00a5f500(this GEN_EDX_ARG);
      if (uVar5 != 0) {
        *(undefined2 *)(uVar5 + 0x72) = 0;
      }
    }
  }
LAB_007e5ab1: ;
  F_00c47745(((uint *)(gen_frame + 0x24))[0x16] ^ (uint)(uint)(gen_frame + 0x80) GEN_EDX_ARG);
  return uVar5;
}

/* ref: Client::UI2::Agent::Lobby3D::LoadMapEvent::vf1 */
GEN_FRAME uint GEN_THISCALL F_007e5ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e5ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  if ((param_4 & 0x10) != 0) {
    F_005f9ab0((&REFG(undefined * PTR32, 0x132826c))[(int)(param_4 & 0xf)],0,0,0,0);
    REFG(undefined1, 0x148a113) = 1;
    REFG(undefined2, 0x13282d8) = (undefined2)(param_4 & 0xf);
    REFG(undefined2, 0x13282dc) = 0xffff;
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
    return (uint)param_1;
  }
  F_0049b7d0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4) GEN_EDX_ARG,1,(float)(float10)0,REFG(undefined4, 0x1302e44),REFG(undefined4, 0x1302e48),
               REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
  F_005ecf90();
  *(undefined2 *)&REFG(undefined, 0x148a448) = 0;
  REFG(undefined1, 0x148a113) = 0;
  REFG(undefined2, 0x13282d8) = 0xffff;
  F_00b70d10(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG,0);
  REFG(undefined4, 0x148a444) = 0;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: FUN_007e5bb0 */
GEN_NOFRAME uint F_007e5bb0(void)
{
  GEN_ENTER(0x7e5bb0u, 0u, 0u, 0u, 0u);
  char cVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x1371290);
  if (REFG(short, 0x13282d8) < 3) {
    if (REFG(int, 0x148a44c) == 0) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = *(char *)(REFG(int, 0x148a44c) + 0x2db8);
    }
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        *(undefined1 *)(REFG(undefined4, 0x1371290) + 0x23) = 3;
        *(undefined4 *)(uVar2 + 0x24) = 0;
        return uVar2;
      }
      if (cVar1 != '\x05') goto LAB_007e5bdf;
    }
    *(undefined1 *)(REFG(undefined4, 0x1371290) + 0x23) = 1;
    *(undefined4 *)(uVar2 + 0x24) = 0;
    return uVar2;
  }
LAB_007e5bdf: ;
  *(undefined4 *)(REFG(undefined4, 0x1371290) + 0x24) = 0;
  *(undefined1 *)(uVar2 + 0x23) = 2;
  return uVar2;
}

/* ref: FUN_007e5c20 */
GEN_FRAME uint F_007e5c20(unsigned int gen_a0)
{
  GEN_ENTER(0x7e5c20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float fVar1;
  uint uVar2;
  int * piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(short *)&REFG(undefined, 0x148a448) = (short)param_1;
  F_005d4f10(0,(int)(short)param_1 / 100,(int)(short)param_1 % 100);
  piVar3 = (int *)(REFG(int, 0x137104c) + 0x1210);
  uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x137104c) + 0x1210) + 4))))(piVar3,0);
  uVar5 = ((gen_lcode *)*(gen_code32 *)(*piVar3 + 4))(piVar3,0);
  uVar6 = ((gen_lcode *)*(gen_code32 *)(*piVar3 + 4))(piVar3,0);
  uVar2 = REFG(undefined4, 0x1371290);
  *(undefined1 *)(REFG(undefined4, 0x1371290) + 0x28) = 1;
  fVar1 = ((float)GEN_TOF((((float10)GEN_TOD((((int)((uVar5 / 0x3c) % 0x3c) + (int)((uVar4 / 0xe10) % 0x18) * 0x3c) *
                           0x3c))) + (float10)(int)(uVar6 % 0x3c))));
  *(float *)(uVar2 + 0xc) = fVar1;
  *(float *)(uVar2 + 8) = fVar1;
  return uVar2;
}

/* ref: FUN_007e5d20 */
GEN_FRAME uint F_007e5d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x7e5d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  
  if (((((&REFG(undefined4, 0x148a470))[(int)(param_1 * 4)] == param_2) && ((&REFG(undefined4, 0x148a474))[(int)(param_1 * 4)] == param_3)) &&
      (-1 < (int)(&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)])) &&
     (uVar2 = F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,(&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)]), uVar2 != 0)) {
    return uVar2;
  }
  iVar3 = 0;
  piVar5 = &REFG(undefined4, 0x148a570);
  while ((*piVar5 != param_2 || (piVar5[1] != param_3))) {
    piVar5 = piVar5 + 4;
    iVar3 = iVar3 + 1;
    if (0x148a58f < (int)piVar5) {
      iVar3 = 0;
      piVar5 = &REFG(undefined4, 0x148a470);
      while ((*piVar5 != param_2 || (piVar5[1] != param_3))) {
        piVar5 = piVar5 + 4;
        iVar3 = iVar3 + 1;
        if (0x148a56f < (int)piVar5) {
          if ((-1 < (int)(&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)]) &&
             (uVar2 = F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,(&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)]), uVar2 != 0)) {
            F_00782d20(param_1);
          }
          F_00b88e00(param_4,param_4);
          uVar2 = F_00ae3f10(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,0xffffffff);
          (&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)] = uVar2;
          (&REFG(undefined4, 0x148a470))[(int)(param_1 * 4)] = param_2;
          (&REFG(undefined4, 0x148a474))[(int)(param_1 * 4)] = param_3;
          if (-1 < (int)uVar2) {
            uVar4 = F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,uVar2);
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = F_00782fe0(uVar4,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                                   param_11);
            }
          }
          return uVar2;
        }
      }
      (&REFG(undefined4, 0x148a470))[(int)(param_1 * 4)] = param_2;
      (&REFG(undefined4, 0x148a474))[(int)(param_1 * 4)] = param_3;
      (&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)] = (&REFG(undefined4, 0x148a478))[(int)(iVar3 * 4)];
      (&REFG(undefined4, 0x148a470))[(int)(iVar3 * 4)] = 0;
      (&REFG(undefined4, 0x148a474))[(int)(iVar3 * 4)] = 0;
      (&REFG(undefined4, 0x148a478))[(int)(iVar3 * 4)] = 0xffffffff;
      return iVar3 * 0x10;
    }
  }
  uVar1 = (&REFG(undefined4, 0x148a578))[(int)(iVar3 * 4)];
  (&REFG(undefined4, 0x148a474))[(int)(param_1 * 4)] = param_3;
  (&REFG(undefined4, 0x148a470))[(int)(param_1 * 4)] = param_2;
  (&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)] = uVar1;
  (&REFG(undefined4, 0x148a570))[(int)(iVar3 * 4)] = 0;
  (&REFG(undefined4, 0x148a574))[(int)(iVar3 * 4)] = 0;
  (&REFG(undefined4, 0x148a578))[(int)(iVar3 * 4)] = 0xffffffff;
  return iVar3 * 0x10;
}

/* ref: FUN_007e5eb0 */
GEN_FRAME byte F_007e5eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e5eb0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar1 = REFG(int * PTR32, 0x148a44c);
  if (((int)(&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)] < 0) ||
     (piVar2 = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,(&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)]), piVar2 == (int *)0x0
     )) {
    return 0;
  }
  REFG(int * PTR32, 0x148a44c) = piVar2;
  if (piVar2 != piVar1) {
    param_1 = 0;
    if (piVar1 != (int *)0x0) {
      param_1 = piVar1[0x2c];
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG,6,0);
      F_00b5aeb0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,(uint)*(ushort *)(piVar1 + 0x22),0);
    }
    if ((char)param_2 == '\0') {
      if ((REFG(int * PTR32, 0x148a44c) != (int *)0x0) &&
         (((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x24))))(REFG(int * PTR32, 0x148a44c) GEN_EDX_ARG,6,0), REFG(int * PTR32, 0x148a44c) != (int *)0x0)) {
        F_00aa0560(REFG(int * PTR32, 0x148a44c) GEN_EDX_ARG,3);
        F_00aa4270(REFG(int * PTR32, 0x148a44c) GEN_EDX_ARG,3,0,0);
      }
    }
    else if (REFG(int * PTR32, 0x148a44c) != (int *)0x0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(int * PTR32, 0x148a44c) GEN_EDX_ARG,6,0);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x48))))(REFG(int * PTR32, 0x148a44c) GEN_EDX_ARG,param_1);
    F_007e5bb0();
    F_00782390();
    return 1;
  }
  if ((char)param_2 == '\0') {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2 GEN_EDX_ARG,6,0);
    return 1;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG,6,0);
  return 1;
}

