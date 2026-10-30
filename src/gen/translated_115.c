#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00a6ef00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a6ef00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6ef00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 1;
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar3 = 0x28;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
    piVar1 = ((int *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar3)));
    uVar2 = 0;
    if ((piVar1 != ((int *)GEN_TOP(0x0))) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00a6ef50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a6ef50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6ef50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar3 = 0x28;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
    piVar1 = ((int *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar3)));
    uVar2 = 0;
    if ((piVar1 != ((int *)GEN_TOP(0x0))) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00a6efa0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a6efa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6efa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar3 = 0x28;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
    piVar1 = ((int *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar3)));
    uVar2 = 0;
    if ((piVar1 != ((int *)GEN_TOP(0x0))) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG), (char)uVar2 == '\x01')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    }
  }
  if (*((char *)GEN_TOP(((int)this + 0x15))) == '\x01') {
    uVar2 = F_00a51200(0x10,1,0,0,0);
    *((undefined1 *)GEN_TOP(((int)this + 0x15))) = 0;
  }
  return uVar2;
}

/* ref: FUN_00a6f000 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a6f000(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa6f000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  int iVar1;
  int iVar2;
  byte bVar3;
  int * piVar4;
  undefined * pvVar5;
  uint uVar6;
  int * piVar7;
  undefined3 extraout_var = 0;
  byte bVar8;
  int iVar9;
  undefined4 uVar10;
  
  piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  iVar2 = REFG(int, 0x1379694);
  if (piVar4 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  if (param_1 == 0) {
    iVar1 = *((int *)GEN_TOP((REFG(int, 0x1379694) + 0x74)));
    iVar9 = 0;
    if (REFG(undefined1, 0x1338ad4) != 0) {
      bVar3 = 0;
      do {
        piVar7 = ((int *)GEN_TOP(F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,iVar9)));
        if ((piVar7 != ((int *)GEN_TOP(0x0))) && (*piVar7 != iVar1)) {
          uVar6 = param_3;
          bVar8 = bVar3;
          if (3 < iVar9) {
            uVar6 = param_4;
            bVar8 = bVar3 - 0x20;
          }
          if ((char)(uVar6 >> GEN_SHC(bVar8, bVar8)) != '\0') {
            uVar10 = 0x67e;
            pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
            F_0046a630(pvVar5 GEN_EDX_ARG,uVar10);
            break;
          }
        }
        iVar9 = iVar9 + 1;
        bVar3 = bVar3 + 8;
      } while (iVar9 < (int)(uint)REFG(undefined1, 0x1338ad4));
    }
    bVar3 = F_00ac83b0(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,1,5,*((undefined4 *)GEN_TOP((iVar2 + 0x74))),0,param_2,0);
    if (bVar3 != 0) {
      return CONCAT31(extraout_var,bVar3);
    }
    uVar6 = F_00a51200(0x11,0,0,0,0);
    return uVar6;
  }
  if (param_1 == 3) {
    uVar10 = 0x67d;
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
    F_0046a630(pvVar5 GEN_EDX_ARG,uVar10);
  }
  else {
    if (param_1 == 4) {
      uVar10 = 0x67f;
      goto LAB_00a6f040;
    }
    if (param_1 == 2) {
      uVar10 = 0x685;
      goto LAB_00a6f040;
    }
    if (param_1 == 7) {
      uVar10 = 0x681;
      goto LAB_00a6f040;
    }
    if (param_1 == 6) {
      uVar10 = 0x683;
      goto LAB_00a6f040;
    }
  }
  uVar10 = 0x67d;
LAB_00a6f040: ;
  pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
  uVar6 = F_0046a630(pvVar5 GEN_EDX_ARG,uVar10);
  return uVar6;
}

/* ref: FUN_00a6f140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a6f140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa6f140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar3 = 0x28;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
      piVar1 = ((int *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar3)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        *((undefined1 *)GEN_TOP(((int)this + 0x15))) = 1;
        F_008f7820(piVar1 GEN_EDX_ARG,param_2,param_3,this);
        if (*((char *)GEN_TOP(((int)this + 0x14))) == '\0') {
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG);
          return uVar2;
        }
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG);
        return uVar2;
      }
    }
    uVar2 = F_00a51200(0x10,1,0,0,0);
    *((undefined1 *)GEN_TOP(((int)this + 0x15))) = 0;
  }
  else {
    piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar2 = 0;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar3 = 0x687;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
      uVar2 = F_0046a630(this_00 GEN_EDX_ARG,uVar3);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: Client::Game::ConfigCallback::vf1 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a6f200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa6f200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if (REFG(int, 0x1379c70) != 3) {
    if (param_1 == 0x30) {
      REFG(undefined1, 0x14b4f54) = *((undefined1 *)GEN_TOP((param_2 + 0x14)));
    }
    else {
      if (param_1 == 0x31) {
        REFG(undefined1, 0x14b4f55) = *((undefined1 *)GEN_TOP((param_2 + 0x14)));
        return;
      }
      if (param_1 == 0x32) {
        REFG(undefined4, 0x14b4f57) = *((undefined1 *)GEN_TOP((param_2 + 0x14)));
        return;
      }
    }
  }
  return;
}

/* ref: FUN_00a6f250 */
GEN_OWN GEN_FRAME uint F_00a6f250(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa6f250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  undefined * this;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  
  if ((param_1 != 0) && (param_2 != ((undefined *)GEN_TOP(0x0)))) {
    if (*((char *)GEN_TOP((param_1 + 6))) == '\0') {
      uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
      if ((*((byte *)GEN_TOP((param_1 + 0x14))) & 1) != 0) {
        uVar2 = uVar2 + 1000000;
      }
    }
    else {
      this = ((undefined *)GEN_TOP(F_00a3a860(((undefined *)GEN_TOP(param_1)) GEN_EDX_ARG)));
      uVar2 = F_0046e5e0(this GEN_EDX_ARG);
    }
    if (uVar2 != 0) {
      uVar2 = F_0046e5e0(((undefined *)GEN_TOP(param_1)) GEN_EDX_ARG);
      uVar2 = F_00ab24a0(uVar2);
      if (uVar2 == 0) {
        return 0;
      }
      uVar3 = F_00a6ae10(param_1);
      if ((int)uVar3 < (int)(uint)*((byte *)GEN_TOP((uVar2 + 0xa5)))) {
        return 10000;
      }
      bVar1 = F_0071d300(param_2 GEN_EDX_ARG,0);
      uVar4 = F_00ab2110((uint)bVar1);
      if (uVar4 == 0) {
        return 0;
      }
      iVar5 = uVar3 - *((byte *)GEN_TOP((uVar2 + 0xa5)));
      if (3 < iVar5) {
        iVar5 = 3;
      }
      if ((*((byte *)GEN_TOP((param_1 + 0x14))) & 1) == 0) {
        fVar6 = *((float *)GEN_TOP((uVar4 + iVar5 * 4)));
      }
      else {
        fVar6 = *((float *)GEN_TOP((uVar4 + 0x10 + iVar5 * 4)));
      }
      return (int)((double)fVar6 * *(double *)&REFG(undefined, 0x1088118));
    }
  }
  return 0;
}

/* ref: FUN_00a6f370 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a6f370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa6f370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  ushort uVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined1 uVar6;
  undefined4 extraout_ECX = 0;
  uint3 uVar8;
  int iVar7;
  undefined4 extraout_ECX_00 = 0;
  int iVar9;
  
  piVar3 = ((int *)GEN_TOP(F_00ab2ba0(param_1)));
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return 6;
  }
  iVar9 = *piVar3;
  uVar8 = (uint3)((uint)extraout_ECX >> 8);
  if ((iVar9 < 0xf4241) || (1999999 < iVar9)) {
    iVar7 = (uint)uVar8 << 8;
  }
  else {
    iVar7 = CONCAT31(uVar8,1);
  }
  uVar4 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,iVar9 % 1000000,iVar7,0,1);
  if (uVar4 == 0) {
    iVar9 = 1000;
    while( true ) {
      iVar7 = *piVar3;
      if ((iVar7 < 0xf4241) || (1999999 < iVar7)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      uVar4 = F_00a3ded0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,iVar7 % 1000000,iVar9,uVar6);
      if (uVar4 != 0) break;
      iVar9 = iVar9 + 1;
      if (1000 < iVar9) {
        return 6;
      }
    }
    return 3;
  }
  iVar9 = *piVar3;
  uVar8 = (uint3)((uint)extraout_ECX_00 >> 8);
  if ((iVar9 < 0xf4241) || (1999999 < iVar9)) {
    iVar7 = (uint)uVar8 << 8;
  }
  else {
    iVar7 = CONCAT31(uVar8,1);
  }
  pvVar5 = ((undefined *)GEN_TOP(F_00a40a20(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,iVar9 % 1000000,iVar7,0,0,1)));
  if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
    return 6;
  }
  if (*((char *)GEN_TOP(((int)pvVar5 + 6))) != '\0') {
    uVar4 = F_00a3a860(pvVar5 GEN_EDX_ARG);
    if (uVar4 != 0) {
      pvVar5 = ((undefined *)GEN_TOP(F_00a3a860(pvVar5 GEN_EDX_ARG)));
      uVar2 = F_00906d60(pvVar5 GEN_EDX_ARG);
      goto LAB_00a6f481;
    }
  }
  uVar2 = *((ushort *)GEN_TOP(((int)pvVar5 + 0x12)));
LAB_00a6f481: ;
  if (uVar2 < 30000) {
    return 1;
  }
  bVar1 = F_00a6af60(this GEN_EDX_ARG,param_1);
  return (-(bVar1 != 1) & 0xfeU) + 2;
}

/* ref: FUN_00a6f4b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a6f4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa6f4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  byte * pbVar1;
  uint uVar2;
  
  if (param_1 < 0x100) {
    uVar2 = param_1 & 0x80000007;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
    }
    pbVar1 = ((byte *)GEN_TOP((((int)(param_1 + ((int)param_1 >> 0x1f & 7U)) >> 3) + 4 + (int)this)));
    *pbVar1 = *pbVar1 | '\x01' << GEN_SHC((byte)uVar2, (unsigned int)(uintptr_t)uVar2);
  }
  uVar2 = F_00a51200(0x5b,param_1,0,0,0);
  return uVar2;
}

/* ref: FUN_00a6f500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a6f500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa6f500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  uint3 uVar6;
  bool bVar7;
  
  piVar1 = ((int *)GEN_TOP(F_00ab2ba0(param_1)));
  piVar4 = piVar1;
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (param_1 < 0x100)) {
    uVar5 = param_1 & 0x80000007;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
    }
    iVar2 = 1 << GEN_SHC((byte)uVar5, (unsigned int)(uintptr_t)uVar5);
    iVar3 = param_1 + ((int)param_1 >> 0x1f & 7U);
    bVar7 = (*((byte *)GEN_TOP(((iVar3 >> 3) + 4 + (int)this))) & (byte)iVar2) != 0;
    piVar4 = ((int *)GEN_TOP(CONCAT31((int3)(iVar3 >> 0xb),bVar7)));
    if (bVar7) {
      iVar3 = *piVar1;
      uVar6 = (uint3)((uint)iVar2 >> 8);
      if ((iVar3 < 0xf4241) || (1999999 < iVar3)) {
        iVar2 = (uint)uVar6 << 8;
      }
      else {
        iVar2 = CONCAT31(uVar6,1);
      }
      uVar5 = F_00a40d10(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,iVar3 % 1000000,1,iVar2);
      if (uVar5 != 0) {
        if (uVar5 != 0x18) {
          return (int)CONCAT31((int3)(uVar5 >> 8),uVar5 != 0x1b) * 2 + 4;
        }
        return 5;
      }
      return 0;
    }
  }
  return CONCAT31((int3)((uint)((int)(uintptr_t)piVar4) >> 8),6);
}

/* ref: FUN_00a6f5c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a6f5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa6f5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  byte * pbVar1;
  uint uVar2;
  
  if (param_1 < 0x100) {
    uVar2 = param_1 & 0x80000007;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
    }
    pbVar1 = ((byte *)GEN_TOP((((int)(param_1 + ((int)param_1 >> 0x1f & 7U)) >> 3) + 4 + (int)this)));
    *pbVar1 = *pbVar1 & ~('\x01' << GEN_SHC((byte)uVar2, (unsigned int)(uintptr_t)uVar2));
  }
  uVar2 = F_00a51200(0x5c,param_1,0,0,0);
  return uVar2;
}

/* ref: FUN_00a6f620 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a6f620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6f620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 4))),0,0x100);
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x10c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x110))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x114))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x118))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x11c))) = 0;
  return (uint)this;
}

/* ref: FUN_00a6f690 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a6f690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa6f690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  byte * pbVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 uVar4;
  
  if (param_1 < 0x800) {
    uVar3 = param_1 & 0x80000007;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
    }
    pbVar1 = ((byte *)GEN_TOP((((int)(param_1 + ((int)param_1 >> 0x1f & 7U)) >> 3) + 4 + (int)this)));
    *pbVar1 = *pbVar1 | '\x01' << GEN_SHC((byte)uVar3, (unsigned int)(uintptr_t)uVar3);
    *((undefined2 *)GEN_TOP(((int)this + 0x10c))) = *((undefined2 *)GEN_TOP(((int)this + 0x10a)));
    *((undefined2 *)GEN_TOP(((int)this + 0x10a))) = *((undefined2 *)GEN_TOP(((int)this + 0x108)));
    *((undefined2 *)GEN_TOP(((int)this + 0x108))) = *((undefined2 *)GEN_TOP(((int)this + 0x106)));
    *((undefined2 *)GEN_TOP(((int)this + 0x106))) = *((undefined2 *)GEN_TOP(((int)this + 0x104)));
    *((short *)GEN_TOP(((int)this + 0x104))) = (short)param_1;
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar4 = 0x55;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x48))))(piVar2 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(F_00763050(uVar3 GEN_EDX_ARG,uVar4)));
      F_007d1100(this_00 GEN_EDX_ARG,param_1);
    }
  }
  return;
}

/* ref: FUN_00a6f790 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a6f790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa6f790u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x90, 0, 4);
  undefined4 * puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  undefined4 uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c));
  uVar6 = *((undefined4 *)GEN_TOP((*param_1 + 4)));
  uVar4 = F_00b8b6f0(param_3);
  bVar3 = F_00b8dfd0(uVar4);
  F_00b8b710(uVar6,bVar3 != 0,(int)this + 4);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  piVar5 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar6 = 0x29;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x48))))(piVar5 GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar6)));
  F_00921730(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  bVar3 = *((byte *)GEN_TOP(((int)this + 0x2a)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x24)));
  uVar6 = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  (*(undefined2 *)(gen_frame + 0xc)) = *((undefined2 *)GEN_TOP(((int)this + 0x28)));
  (*(uint *)(gen_frame + 0x8)) = -(uint)((uint)bVar3 + iVar2 != 0) & 1000000;
  (*(undefined4 *)(gen_frame + 0x4)) = uVar6;
  (*(undefined4 *)(gen_frame + 0x5c)) = *((undefined4 *)GEN_TOP(((int)this + 0x30)));
  (*(undefined4 *)(gen_frame + 0x58)) = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  (*(uint *)(gen_frame + 0x60)) = -(uint)((uint)*((byte *)GEN_TOP(((int)this + 0x3e))) + *((int *)GEN_TOP(((int)this + 0x38))) != 0) & 1000000;
  (*(undefined2 *)(gen_frame + 0x64)) = *((undefined2 *)GEN_TOP(((int)this + 0x3c)));
  uVar4 = F_00824550(this_00 GEN_EDX_ARG,param_3,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar4;
}

/* ref: FUN_00a6f8a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a6f8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6f8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  byte bVar2;
  
  if ((!GEN_ISNAN(*((float *)GEN_TOP(((int)this + 4)))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(*((float *)GEN_TOP(((int)this + 4))) <= *(float *)&REFG(undefined, 0x1088114))) {
    bVar2 = F_00ac36a0();
    if (bVar2 == 1) {
      fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 4))) -
                     (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))))));
      *((float *)GEN_TOP(((int)this + 4))) = fVar1;
      if ((float10)fVar1 < (float10)0) {
        *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      }
    }
  }
  return;
}

/* ref: FUN_00a6f8f0 */
GEN_OWN GEN_NOFRAME uint F_00a6f8f0(void)
{
  GEN_ENTER(0xa6f8f0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (REFG(int, 0x1379694) != 0) {
    uVar1 = F_00ae08d0(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((REFG(int, 0x1379694) + 0x74))));
    if (uVar1 != 0) {
      return *((uint *)GEN_TOP((uVar1 + 0x58)));
    }
  }
  return 0;
}

/* ref: FUN_00a6f920 */
GEN_OWN GEN_NOFRAME uint F_00a6f920(void)
{
  GEN_ENTER(0xa6f920u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (REFG(int, 0x1379694) != 0) {
    uVar1 = F_00ae08d0(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((REFG(int, 0x1379694) + 0x74))));
    if (uVar1 != 0) {
      return *((uint *)GEN_TOP((uVar1 + 0x5c)));
    }
  }
  return 0;
}

/* ref: FUN_00a6f950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a6f950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa6f950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int * piVar3;
  undefined4 * puVar4;
  
  piVar1 = ((int *)GEN_TOP(F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x127)));
  if (*((int *)GEN_TOP(((int)this + 0x6c))) != 0) {
    uVar2 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x127);
    if (uVar2 != 0) {
      piVar3 = ((int *)GEN_TOP(F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x127)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x4c))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x6c))));
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x6c)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
    }
  }
  puVar4 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
  if (puVar4 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar4 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00cb4700(puVar4 GEN_EDX_ARG,1,0);
    puVar4[5] = 1;
    *puVar4 = (*(undefined * PTR32 (*)[2])REFP(0x10e7910));
    puVar4[6] = this;
    puVar4[7] = ((code *)REFP(0xa6b540));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x6c))) = puVar4;
  F_00cb4540(puVar4 GEN_EDX_ARG,0,param_1 & 0xffff);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x6c))));
  return uVar2;
}

/* ref: FUN_00a6fa80 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a6fa80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa6fa80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  undefined4 * this_00;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)this == 0) {
    *(undefined4 *)this = param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x24))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x30))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x3c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x48))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
    piVar1 = ((int *)GEN_TOP(F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x127)));
    this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
    if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
      this_00 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      F_00cb4700(this_00 GEN_EDX_ARG,6,0);
      this_00[5] = 6;
      *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e791c));
      this_00[6] = this;
      this_00[7] = ((code *)REFP(0xa6b5a0));
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x4c))) = this_00;
    do {
      F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x4c))) GEN_EDX_ARG,uVar2,(uint)(ushort)(&REFG(undefined2, 0x14ab2e2))[(int)(uVar2)]);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 6);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x4c))));
  }
  return;
}

/* ref: FUN_00a6fb50 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a6fb50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6fb50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  
  *(undefined4 *)this = 0;
  if (*((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
    uVar2 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x127);
    if (uVar2 != 0) {
      piVar3 = ((int *)GEN_TOP(F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x127)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x4c))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x4c))));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x4c)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
    }
  }
  return;
}

/* ref: FUN_00a6fbc0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a6fbc0(GEN_P(uint * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa6fbc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  uint uVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  uVar5 = 0;
  uVar1 = REFG(undefined4, 0x1379694);
  if (REFG(undefined4, 0x1379694) == 0) {
    (*(uint *)(gen_frame + 0x0)) = 0;
  }
  else if (*((char *)GEN_TOP((REFG(undefined4, 0x1379694) + 0x188))) == '\b') {
    (*(uint *)(gen_frame + 0x0)) = 1;
  }
  else if (*((char *)GEN_TOP((REFG(undefined4, 0x1379694) + 0x2e08))) == '\x11') {
    (*(uint *)(gen_frame + 0x0)) = 2;
  }
  else {
    uVar1 = -(uint)(REFG(char, 0x14ab5ba) != '\0') & 3;
    (*(uint *)(gen_frame + 0x0)) = uVar1;
  }
  if ((*(uint *)(gen_frame + 0x0)) == *param_1) {
    if (param_2 != '\x01') {
      return uVar1;
    }
    if (param_3 != (*(uint *)(gen_frame + 0x0))) {
      return uVar1;
    }
  }
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x0)))) {
  case 0: ;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG)));
    piVar2[0x6f52] = 0;
    goto LAB_00a6fe7c;
  case 1: ;
    uVar1 = 0;
    do {
      uVar9 = 0;
      uVar7 = 0;
      uVar5 = uVar1;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG)));
      F_00459110(pvVar3 GEN_EDX_ARG,uVar5,uVar7,uVar9);
      uVar9 = 0;
      uVar7 = 0;
      uVar5 = uVar1;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG)));
      F_00459180(pvVar3 GEN_EDX_ARG,uVar5,uVar7,uVar9);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x10);
    if ((REFG(char, 0x14bcfd0) == '\x01') && (uVar1 = F_00ab4310((uint)REFG(undefined1, 0x14bcfd1)), uVar1 != 0)) {
      uVar5 = (uint)*((ushort *)GEN_TOP((uVar1 + 4)));
      uVar9 = 1;
      uVar7 = 0;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG)));
      F_00459110(pvVar3 GEN_EDX_ARG,uVar7,uVar9,uVar5);
      uVar1 = (uint)*((ushort *)GEN_TOP((uVar1 + 4)));
      uVar9 = 1;
      uVar7 = 0xe;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG)));
      F_00459180(pvVar3 GEN_EDX_ARG,uVar7,uVar9,uVar1);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG)));
    *(byte *)(piVar2 + 0xb093) = *(byte *)(piVar2 + 0xb093) | 0x80;
    piVar2[0x6f52] = 1;
    break;
  case 2: ;
    uVar1 = 0;
    do {
      uVar9 = 0;
      uVar7 = 0;
      uVar5 = uVar1;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG)));
      F_00459110(pvVar3 GEN_EDX_ARG,uVar5,uVar7,uVar9);
      uVar9 = 0;
      uVar7 = 0;
      uVar5 = uVar1;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG)));
      F_00459180(pvVar3 GEN_EDX_ARG,uVar5,uVar7,uVar9);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x10);
    uVar8 = 0x468;
    uVar9 = 1;
    uVar7 = 0;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG)));
    F_00459110(pvVar3 GEN_EDX_ARG,uVar7,uVar9,uVar8);
    uVar8 = 0x468;
    uVar9 = 1;
    uVar7 = 0xe;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG)));
    F_00459180(pvVar3 GEN_EDX_ARG,uVar7,uVar9,uVar8);
    uVar8 = 0x469;
    uVar9 = 1;
    uVar7 = 1;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG)));
    F_00459110(pvVar3 GEN_EDX_ARG,uVar7,uVar9,uVar8);
    uVar8 = 0x469;
    uVar9 = 1;
    uVar7 = 0xf;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG)));
    F_00459180(pvVar3 GEN_EDX_ARG,uVar7,uVar9,uVar8);
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG)));
    *(byte *)(piVar2 + 0xb093) = *(byte *)(piVar2 + 0xb093) | 0x80;
    piVar2[0x6f52] = 1;
    break;
  case 3: ;
    uVar1 = 0;
    do {
      uVar9 = 0;
      uVar7 = 0;
      uVar6 = uVar1;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG)));
      F_00459110(pvVar3 GEN_EDX_ARG,uVar6,uVar7,uVar9);
      uVar9 = 0;
      uVar7 = 0;
      uVar6 = uVar1;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG)));
      F_00459180(pvVar3 GEN_EDX_ARG,uVar6,uVar7,uVar9);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x10);
    ((byte *)(gen_frame + 0x4))[0] = 0xe;
    ((byte *)(gen_frame + 0x4))[1] = 0xf;
    ((byte *)(gen_frame + 0x4))[2] = 0xc;
    ((byte *)(gen_frame + 0x4))[3] = 0xd;
    ((byte *)(gen_frame + 0x4))[4] = 10;
    ((byte *)(gen_frame + 0x4))[5] = 0xb;
    ((byte *)(gen_frame + 0x4))[6] = 8;
    ((byte *)(gen_frame + 0x4))[7] = 9;
    ((byte *)(gen_frame + 0x4))[8] = 6;
    ((byte *)(gen_frame + 0x4))[9] = 7;
    ((byte *)(gen_frame + 0x4))[10] = 4;
    ((byte *)(gen_frame + 0x4))[0xb] = 5;
    uVar6 = 1;
    uVar1 = F_00ab0130();
    if (1 < uVar1) {
      do {
        uVar1 = F_00ab2d50(uVar6);
        if ((uVar1 != 0) &&
           (((*((char *)GEN_TOP((uVar1 + 0xe))) == '\0' || (*((char *)GEN_TOP((uVar1 + 0xe))) == REFG(char, 0x14ab5ba))) &&
            (uVar5 < 0xc)))) {
          uVar7 = 0x10;
          uVar1 = uVar5;
          uVar4 = uVar6;
          pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG)));
          F_00459110(pvVar3 GEN_EDX_ARG,uVar1,uVar7,uVar4);
          uVar4 = (uint)((byte *)(gen_frame + 0x4))[(int)(uVar5)];
          uVar7 = 0x10;
          uVar1 = uVar6;
          pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG)));
          F_00459180(pvVar3 GEN_EDX_ARG,uVar4,uVar7,uVar1);
          uVar5 = uVar5 + 1;
        }
        uVar6 = uVar6 + 1;
        uVar1 = F_00ab0130();
      } while (uVar6 < uVar1);
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG)));
    piVar2[0x6f52] = 2;
LAB_00a6fe7c: ;
    *(byte *)(piVar2 + 0xb093) = *(byte *)(piVar2 + 0xb093) & 0x7f;
  }
  *param_1 = (*(uint *)(gen_frame + 0x0));
  return (uint)piVar2;
}

/* ref: FUN_00a6feb0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a6feb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6feb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  byte in_AL = 0;
  byte bVar2;
  undefined * this_00;
  int * piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (*(int *)this != 0) {
    this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
    in_AL = F_00a505f0();
    if (((in_AL != 0) && ((REFG(undefined4, 0x14b2720) & 1) != 0)) && (REFG(int, 0x14b274c) == 0)) {
      bVar2 = F_006da290(this_00 GEN_EDX_ARG);
      in_AL = 0;
      if (bVar2 != 0) {
        bVar2 = F_006da2a0(this_00 GEN_EDX_ARG);
        in_AL = 0;
        if (bVar2 != 0) {
          piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
          uVar5 = 0x5b;
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG);
          piVar3 = ((int *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar5)));
          uVar4 = 0;
          if ((piVar3 != ((int *)GEN_TOP(0x0))) &&
             (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x2c))))(piVar3 GEN_EDX_ARG), (char)uVar4 != '\0')) {
            uVar4 = F_00ab1cc0((uint)REFG(undefined1, 0x1379c7c));
            if ((uVar4 == 0) || (*((char *)GEN_TOP((uVar4 + 10))) == '\0')) {
              uVar4 = F_008ea290(piVar3 GEN_EDX_ARG,3);
            }
            else {
              iVar1 = *(int *)this;
              if (iVar1 == 1) {
                F_007799d0(piVar3 GEN_EDX_ARG);
                *(undefined4 *)this = 0;
                return 0;
              }
              if (iVar1 == 2) {
                uVar4 = F_008ea290(piVar3 GEN_EDX_ARG,2);
                *(undefined4 *)this = 0;
                return (byte)uVar4;
              }
              uVar4 = iVar1 - 3;
              if (uVar4 == 0) {
                uVar4 = F_008ea290(piVar3 GEN_EDX_ARG,1);
                *(undefined4 *)this = 0;
                return (byte)uVar4;
              }
            }
          }
          in_AL = (byte)uVar4;
          *(undefined4 *)this = 0;
        }
      }
    }
  }
  return in_AL;
}

/* ref: FUN_00a6ffb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a6ffb0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa6ffb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  ushort uVar1;
  
  uVar1 = F_00a6ba60((uint)((byte)(*((char *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + 5))) - 2U) < 2));
  return (ushort)param_2 <= (ushort)((short)((uVar1 + 4) / 5) * 5);
}

/* ref: FUN_00a6fff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a6fff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa6fff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar10 = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x49))) = 1;
  if (param_2 != 0) {
    do {
      puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + uVar10 * 4))) + 4)));
      iVar3 = (*((int *)GEN_TOP(((int)this + 0x44))) + uVar10) * 0xc4;
      *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0xbc + iVar3))) = *puVar5;
      bVar7 = *(byte *)(puVar5 + 1);
      cVar9 = '\0';
      if (0x32 < bVar7) {
        if (bVar7 < 0x7d) {
          if (bVar7 < 0x6f) {
            if (bVar7 < 0x60) {
              cVar9 = '\x02' - (bVar7 < 0x42);
            }
            else {
              cVar9 = '\x03';
            }
          }
          else {
            cVar9 = '\x04';
          }
        }
        else {
          cVar9 = '\x05';
        }
      }
      if (0x32 < bVar7) {
        bVar7 = 0x32;
      }
      *((byte *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0xc0 + iVar3))) = bVar7;
      uVar10 = uVar10 + 1;
      *((char *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0xc1 + iVar3))) = cVar9;
    } while (uVar10 < param_2);
  }
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_FWD,1);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((int *)GEN_TOP(((int)this + 0x44))) = *((int *)GEN_TOP(((int)this + 0x44))) + param_2;
  if (*((uint *)GEN_TOP(((int)this + 0x44))) <
      (uint)(*((int *)GEN_TOP(((int)this + 0x38))) - *((int *)GEN_TOP(((int)this + 0x34))) >> 2)) {
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
    uVar10 = *((uint *)GEN_TOP(((int)this + 0x44)));
    uVar8 = *((int *)GEN_TOP(((int)this + 0x38))) - *((int *)GEN_TOP(((int)this + 0x34))) >> 2;
    uVar4 = uVar8 - uVar10;
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    if (uVar8 <= uVar10) {
                    
      F_00c457e7(((char *)REFP(0x1090aa4)));
    }
    uVar10 = F_00a6bb10(this GEN_EDX_ARG,1,uVar4,*((int *)GEN_TOP(((int)this + 0x34))) + uVar10 * 4,0);
  }
  else {
    uVar4 = F_00406bb0((uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 4))) * 4,0,0);
    uVar10 = 0;
    if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 4))) != '\0') {
      iVar3 = 0;
      do {
        *((undefined4 *)GEN_TOP((uVar4 + uVar10 * 4))) =
             *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0xbc + iVar3)));
        uVar10 = uVar10 + 1;
        iVar3 = iVar3 + 0xc4;
      } while (uVar10 < *((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 4))));
    }
    uVar10 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 4)));
    *((undefined1 *)GEN_TOP(((int)this + 0x4a))) = 0;
    if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 8))));
      }
      puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
      if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,1);
        *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      }
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x4a))) = 0;
    puVar5 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
    if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar5 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
      F_00cb4700(puVar5 GEN_EDX_ARG,uVar10,0);
      puVar5[5] = uVar10;
      *puVar5 = (*(undefined * PTR32 (*)[2])REFP(0x10e78a4));
      puVar5[6] = this;
      puVar5[7] = uVar2;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    iVar3 = 0;
    if (uVar10 != 0) {
      do {
        F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,iVar3,*((undefined4 *)GEN_TOP((uVar4 + iVar3 * 4))));
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar10);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x14))) + 0x48))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))));
    uVar10 = 0;
    if (uVar4 != 0) {
      uVar11 = F_00406b30(uVar4);
      return (uint)uVar11;
    }
  }
  return uVar10;
}

/* ref: Client::Game::UI::Hotbar::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a70200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa70200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 1;
  do {
    uVar3 = uVar4;
    if (uVar4 == 0xffffffff) {
      uVar3 = (uint)REFG(undefined1, 0x14ab0d4);
    }
    if ((int)uVar3 < 0x1d) {
      uVar2 = F_00ab21a0((uint)REFG(undefined1, 0x14ab0d4));
      if (uVar2 == 0) goto LAB_00a7025b;
      uVar3 = F_00ab21a0(uVar3);
      if (((uVar3 == 0) || (cVar1 = *((char *)GEN_TOP((uVar3 + 0x43))), cVar1 < '\0')) || ('\x12' < cVar1))
      goto LAB_00a7025b;
      uVar3 = (uint)*(ushort *)(&REFG(undefined, 0x14ab0d6) + cVar1 * 2);
    }
    else {
LAB_00a7025b: ;
      uVar3 = 0;
    }
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    F_00a6bd20(uVar4,uVar3);
    F_004591f0(param_1 GEN_EDX_ARG,uVar4,10,4,10,7);
    F_004591f0(param_1 GEN_EDX_ARG,uVar4,10,5,10,4);
    F_004591f0(param_1 GEN_EDX_ARG,uVar4,10,6,10,1);
    F_004591f0(param_1 GEN_EDX_ARG,uVar4,10,7,10,8);
    F_004591f0(param_1 GEN_EDX_ARG,uVar4,0x11,0xe,0xc,2);
    F_004591f0(param_1 GEN_EDX_ARG,uVar4,0x11,0xf,0xc,3);
    F_004591f0(param_1 GEN_EDX_ARG,uVar4,0x11,0xc,0xc,10);
    F_004591f0(param_1 GEN_EDX_ARG,uVar4,0x11,0xd,0xc,0x19);
    F_004591f0(param_1 GEN_EDX_ARG,uVar4,0x11,10,0xc,8);
    F_004591f0(param_1 GEN_EDX_ARG,uVar4,0x11,0xb,0xc,4);
    F_004591f0(param_1 GEN_EDX_ARG,uVar4,0x11,8,0xc,9);
    F_004591f0(param_1 GEN_EDX_ARG,uVar4,0x11,9,0xc,7);
    F_004591f0(param_1 GEN_EDX_ARG,uVar4,0x11,4,10,7);
    F_004591f0(param_1 GEN_EDX_ARG,uVar4,0x11,7,10,8);
    F_004591f0(param_1 GEN_EDX_ARG,uVar4,0x11,6,0xc,0x12);
    F_004591f0(param_1 GEN_EDX_ARG,uVar4,0x11,5,0xc,0x11);
    F_004591f0(param_1 GEN_EDX_ARG,uVar4,0x11,2,0xc,0xc);
    F_004591f0(param_1 GEN_EDX_ARG,uVar4,0x11,3,0xc,0xd);
    F_004591f0(param_1 GEN_EDX_ARG,uVar4,0x11,0,0xc,0xf);
    F_004591f0(param_1 GEN_EDX_ARG,uVar4,0x11,1,0xc,0x15);
    uVar4 = uVar4 + 1;
    if (0x1c < (int)uVar4) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00a703d0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a703d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa703d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x24, 12, 4);
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  byte bVar4;
  code * pcVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20));
  iVar7 = *((int *)GEN_TOP((*param_1 + 4)));
  *((int *)GEN_TOP(((int)this + 0x43c))) = iVar7;
  bVar6 = 0;
  iVar8 = 8;
  (*(int *)(gen_frame + 0x0)) = 4;
  do {
    if (*((int *)GEN_TOP((iVar8 + iVar7))) != 0) {
      uVar2 = 0;
      if (bVar6 != 0) {
        do {
          if ((((int *)(gen_frame + 0xc))[(int)(uVar2)] == *((int *)GEN_TOP((iVar8 + iVar7)))) ||
             (((int *)(gen_frame + 0xc))[(int)(uVar2)] - 1000000 == *((int *)GEN_TOP((iVar8 + iVar7))))) goto LAB_00a70450;
          bVar4 = (char)uVar2 + 1;
          uVar2 = (uint)bVar4;
        } while (bVar4 < bVar6);
      }
      ((int *)(gen_frame + 0xc))[(int)(bVar6)] = *((int *)GEN_TOP((iVar8 + iVar7)));
      bVar6 = bVar6 + 1;
    }
LAB_00a70450: ;
    iVar8 = iVar8 + 4;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
    if ((*(int *)(gen_frame + 0x0)) == 0) {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39dc)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
        *((undefined4 *)GEN_TOP(((int)this + 0x39dc))) = 0;
      }
      if (bVar6 == 0) {
        F_00a6bf80(this GEN_EDX_ARG);
        *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 0;
        if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
          piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
        }
        else {
          piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0)));
        }
        if (piVar3 == ((int *)GEN_TOP(0x0))) {
          return (uint)this;
        }
        pcVar5 = *((gen_code32 *)GEN_TOP((*piVar3 + 4)));
        uVar9 = 0x12;
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
        if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
          puVar1 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          F_00cb4700(puVar1 GEN_EDX_ARG,(uint)bVar6,0);
          puVar1[5] = (uint)bVar6;
          *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10e78b0));
          puVar1[6] = this;
          puVar1[7] = ((code *)REFP(0xa6c000));
        }
        *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39c4))) = puVar1;
        if (*((int *)GEN_TOP(((int)this + 0x39c0))) == 0) {
          uVar2 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,9);
          *((uint *)GEN_TOP(((int)this + 0x39c0))) = uVar2;
        }
        if (bVar6 != 0) {
          iVar7 = 0;
          piVar3 = ((int *)(gen_frame + 0xc));
          uVar2 = (uint)bVar6;
          do {
            F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x39c4))) GEN_EDX_ARG,iVar7,*piVar3);
            iVar7 = iVar7 + 1;
            piVar3 = piVar3 + 1;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
        piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x39c0)));
        uVar9 = *((undefined4 *)GEN_TOP(((int)this + 0x39c4)));
        *((undefined1 *)GEN_TOP(((int)this + 0x3a74))) = 1;
        pcVar5 = *((gen_code32 *)GEN_TOP((*piVar3 + 0x48)));
      }
      uVar2 = (*pcVar5)(piVar3,uVar9);
      return uVar2;
    }
  } while( true );
}

/* ref: FUN_00a70580 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a70580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa70580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x3a69))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 0;
  uVar1 = F_00a4ffd0();
  if (*((short *)GEN_TOP(((int)this + 0x39f8))) != 0) {
    *((short *)GEN_TOP((uVar1 + 0x188a))) = *((short *)GEN_TOP(((int)this + 0x39f8)));
    *((undefined1 *)GEN_TOP((uVar1 + 0x1888))) = *((undefined1 *)GEN_TOP(((int)this + 0x39fc)));
    uVar1 = F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if (uVar1 != 0) {
      F_00a51200(0x44,*((undefined4 *)GEN_TOP(((int)this + 0x39fc))),(uint)*((ushort *)GEN_TOP(((int)this + 0x39f8))),0,0)
      ;
    }
  }
  uVar1 = F_00a66f30(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a705f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a705f0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa705f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00a4ffd0();
  if (param_5 != '\0') {
    F_00a51200(0x43,param_2,param_3,(uint)(byte)param_4,0);
  }
  if (param_2 == 1) {
    uVar2 = F_00a6c8f0(param_1 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((uVar1 + 0x13b8 + param_3 * 0x10))),(byte)param_4);
  }
  else {
    uVar2 = param_2 - 2;
    if (uVar2 == 0) {
      uVar1 = F_00a6c950(param_1 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((uVar1 + 0x1688 + param_3 * 0x10))),(byte)param_4)
      ;
      return uVar1;
    }
  }
  return uVar2;
}

/* ref: FUN_00a70670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a70670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa70670u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  ushort * puVar2;
  uint uVar3;
  
  uVar1 = F_00a4ffd0();
  if (param_1 != 1) {
    if (param_1 == 2) {
      uVar3 = 0;
      puVar2 = ((ushort *)GEN_TOP((uVar1 + 0x1688)));
      while (*puVar2 != param_2) {
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 8;
        if (0xf < uVar3) {
          *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 1;
          return (uint)puVar2;
        }
      }
      uVar1 = F_00a4ffd0();
      F_00a51200(0x43,2,uVar3,(uint)(byte)param_3,0);
      uVar1 = F_00a6c950(this GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((uVar1 + 0x1688 + uVar3 * 0x10))),(byte)param_3);
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 1;
    return uVar1;
  }
  uVar3 = 0;
  puVar2 = ((ushort *)GEN_TOP((uVar1 + 0x13b8)));
  do {
    if (*puVar2 == param_2) {
      uVar1 = F_00a4ffd0();
      F_00a51200(0x43,1,uVar3,(uint)(byte)param_3,0);
      uVar1 = F_00a6c8f0(this GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((uVar1 + 0x13b8 + uVar3 * 0x10))),(byte)param_3);
      *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 1;
      return uVar1;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 8;
  } while (uVar3 < 0x1e);
  *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 1;
  return (uint)puVar2;
}

/* ref: FUN_00a70760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a70760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa70760u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 * puVar3;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  puVar3 = &(*(undefined4 *)(gen_frame + 0x0));
  this_00 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  F_009755f0(this_00 GEN_EDX_ARG,puVar3);
  uVar1 = *((uint *)GEN_TOP(((int)this + param_1 * 8 + 0xe4)));
  uVar2 = param_1;
  if ((uVar1 <= (*(uint *)(gen_frame + 0x2c))) &&
     ((uVar1 < (*(uint *)(gen_frame + 0x2c)) || (*((uint *)GEN_TOP(((int)this + param_1 * 8 + 0xe0))) <= (*(uint *)(gen_frame + 0x28)))))) {
    *((uint *)GEN_TOP(((int)this + param_1 * 8 + 0xe4))) = (*(uint *)(gen_frame + 0x2c));
    *((uint *)GEN_TOP(((int)this + param_1 * 8 + 0xe0))) = (*(uint *)(gen_frame + 0x28));
    uVar2 = F_00a68030(this GEN_EDX_ARG,param_1,param_2,param_3);
  }
  return uVar2;
}

/* ref: FUN_00a707f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a707f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa707f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  uint uVar1;
  undefined * this_00;
  undefined4 * puVar2;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  this_00 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  F_009755f0(this_00 GEN_EDX_ARG,puVar2);
  uVar1 = *((uint *)GEN_TOP(((int)this + param_1 * 8 + 0x154)));
  if ((uVar1 <= (*(uint *)(gen_frame + 0x2c))) &&
     ((uVar1 < (*(uint *)(gen_frame + 0x2c)) || (*((uint *)GEN_TOP(((int)this + param_1 * 8 + 0x150))) <= (*(uint *)(gen_frame + 0x28)))))) {
    *((uint *)GEN_TOP(((int)this + param_1 * 8 + 0x154))) = (*(uint *)(gen_frame + 0x2c));
    *((uint *)GEN_TOP(((int)this + param_1 * 8 + 0x150))) = (*(uint *)(gen_frame + 0x28));
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x78))) = param_2;
  }
  return param_1;
}

/* ref: FUN_00a70870 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a70870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa70870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  int * piVar2;
  undefined * pvVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  iVar6 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    if (*((char *)GEN_TOP(((int)this + 0x9ec))) == '\0') {
      bVar1 = F_00ab1cf0(*(undefined4 *)&REFG(undefined2, 0x1379c78));
      if (bVar1 == 0) {
        if (piVar2 != ((int *)GEN_TOP(0x0))) {
          uVar7 = 0;
          uVar5 = 0x47d;
          pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
          F_0046ac40(pvVar3 GEN_EDX_ARG,uVar5,iVar6,uVar7);
          return 0;
        }
      }
      else {
        piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x40)));
        if (((piVar2 != ((int *)GEN_TOP(0x0))) && (*piVar2 != 0)) &&
           (iVar4 = (uint)*(ushort *)(piVar2 + 2) * 0x444 + *piVar2,
           (*((byte *)GEN_TOP((iVar4 + 0x3f1))) & 2) != 0)) {
          bVar1 = F_00a6d330(iVar6,*((undefined1 *)GEN_TOP((iVar4 + 0x3ed))));
          if (bVar1 != 0) {
            bVar1 = F_00a6d420(iVar6,*((undefined1 *)GEN_TOP((iVar4 + 0x3ee))));
            if (bVar1 != 0) {
              bVar1 = F_00a6d470(this GEN_EDX_ARG,iVar6,iVar4);
              if (bVar1 != 0) {
                bVar1 = F_00a6d650(iVar6);
                if (bVar1 != 0) {
                  return 1;
                }
              }
            }
          }
        }
      }
    }
    else if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar7 = 0;
      uVar5 = 0x47c;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
      F_0046ac40(pvVar3 GEN_EDX_ARG,uVar5,iVar6,uVar7);
    }
  }
  return 0;
}

/* ref: FUN_00a70960 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a70960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa70960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00a6d120(this GEN_EDX_FWD,1);
  return uVar1;
}

/* ref: FUN_00a70970 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a70970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa70970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  undefined4 * puVar1;
  int * piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  *((undefined1 *)GEN_TOP(((int)this + 0x9ed))) = 1;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x4)),0,0x44);
  uVar4 = 0;
  if (param_2 != 0) {
    puVar5 = ((undefined4 *)GEN_TOP(((int)this + 0x380)));
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + uVar4 * 4))) + 4)));
      *puVar5 = *puVar1;
      *(undefined4 *)(((undefined1 *)(gen_frame + 0x4)) + uVar4 * 4 - 4) = *puVar1;
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0x18;
    } while (uVar4 < param_2);
  }
  puVar5 = *(undefined4 * PTR32 *)this;
  if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,1);
    *(undefined4 *)this = 0;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x9ee))) = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 4))));
    }
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    }
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x9ee))) = 0;
  puVar5 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
  if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar5 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
    F_00cb4700(puVar5 GEN_EDX_ARG,param_2,0);
    puVar5[5] = param_2;
    *puVar5 = (*(undefined * PTR32 (*)[2])REFP(0x10e78bc));
    puVar5[6] = this;
    puVar5[7] = uVar3;
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar5;
  iVar6 = 0;
  if (0 < (int)param_2) {
    do {
      F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,iVar6,*(undefined4 *)(((undefined1 *)(gen_frame + 0x4)) + iVar6 * 4 - 4));
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)param_2);
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar4;
}

/* ref: FUN_00a70ab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a70ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa70ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined1 * puVar1;
  undefined4 * puVar2;
  byte bVar3;
  ushort * puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  uint local_8;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x9f0))) = 1;
  local_8 = 0;
  if (param_2 != 0) {
    do {
      puVar1 = *((undefined1 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + local_8 * 4))) + 4)));
      puVar4 = ((ushort *)GEN_TOP(F_00ab2ed0((uint)(byte)puVar1[0x3e])));
      iVar7 = (*((int *)GEN_TOP(((int)this + 0xd0))) + local_8) * 0x444 + **((int * PTR32 *)GEN_TOP(((int)this + 0x40)));
      *((undefined4 *)GEN_TOP((iVar7 + 0x3dc))) = *(undefined4 *)(puVar1 + 4);
      *((undefined1 *)GEN_TOP((iVar7 + 0x3ec))) = puVar1[0x3f];
      *((undefined1 *)GEN_TOP((iVar7 + 0x3ed))) = *puVar1;
      *((undefined1 *)GEN_TOP((iVar7 + 0x3ef))) = puVar1[0x4a];
      *((byte *)GEN_TOP((iVar7 + 0x3f1))) =
           *((byte *)GEN_TOP((iVar7 + 0x3f1))) ^ (puVar1[0x4b] ^ *((byte *)GEN_TOP((iVar7 + 0x3f1)))) & 1;
      iVar10 = (uint)*(ushort *)(puVar1 + 0x32) * (uint)*puVar4;
      *((short *)GEN_TOP((iVar7 + 0x3e2))) =
           ((short)(iVar10 / 100) + (short)(iVar10 >> 0x1f)) -
           (short)((longlong)iVar10 * 0x51eb851f >> 0x3f);
      iVar10 = (uint)*(ushort *)(puVar1 + 0x34) * (uint)puVar4[1];
      *((short *)GEN_TOP((iVar7 + 0x3e4))) =
           ((short)(iVar10 / 100) + (short)(iVar10 >> 0x1f)) -
           (short)((longlong)iVar10 * 0x51eb851f >> 0x3f);
      iVar10 = (uint)*(ushort *)(puVar1 + 0x36) * (uint)puVar4[2];
      *((short *)GEN_TOP((iVar7 + 0x3e6))) =
           ((short)(iVar10 / 100) + (short)(iVar10 >> 0x1f)) -
           (short)((longlong)iVar10 * 0x51eb851f >> 0x3f);
      *((undefined2 *)GEN_TOP((iVar7 + 1000))) = *(undefined2 *)(puVar1 + 0x3a);
      *((undefined2 *)GEN_TOP((iVar7 + 0x3ea))) = *(undefined2 *)(puVar1 + 0x3c);
      *((byte *)GEN_TOP((iVar7 + 0x3f1))) =
           *((byte *)GEN_TOP((iVar7 + 0x3f1))) ^ (puVar1[0x4d] * '\x04' ^ *((byte *)GEN_TOP((iVar7 + 0x3f1)))) & 4;
      *((byte *)GEN_TOP((iVar7 + 0x3f1))) =
           (puVar1[0x4c] * '\b' ^ *((byte *)GEN_TOP((iVar7 + 0x3f1)))) & 8 ^ *((byte *)GEN_TOP((iVar7 + 0x3f1)));
      bVar3 = puVar1[0x3e];
      cVar9 = '\0';
      if (0x36 < bVar3) {
        if (bVar3 < 100) {
          if (bVar3 < 0x5a) {
            if (bVar3 < 0x50) {
              cVar9 = '\x02' - (bVar3 < 0x46);
            }
            else {
              cVar9 = '\x03';
            }
          }
          else {
            cVar9 = '\x04';
          }
        }
        else {
          cVar9 = '\x05';
        }
      }
      if (0x32 < bVar3) {
        bVar3 = 0x32;
      }
      *((byte *)GEN_TOP((iVar7 + 0x3ee))) = bVar3;
      *((char *)GEN_TOP((iVar7 + 0x3f0))) = cVar9;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd4))) + *((int *)GEN_TOP(((int)this + 0xd8))) * 4))) =
           *(undefined4 *)(puVar1 + 4);
      *((int *)GEN_TOP(((int)this + 0xd8))) = *((int *)GEN_TOP(((int)this + 0xd8))) + 1;
      *((undefined4 *)GEN_TOP((iVar7 + 100))) = *(undefined4 *)(puVar1 + 8);
      *((undefined1 *)GEN_TOP((iVar7 + 0x6c))) = puVar1[0x40];
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd4))) + *((int *)GEN_TOP(((int)this + 0xd8))) * 4))) =
           *(undefined4 *)(puVar1 + 8);
      *((int *)GEN_TOP(((int)this + 0xd8))) = *((int *)GEN_TOP(((int)this + 0xd8))) + 1;
      *((undefined4 *)GEN_TOP((iVar7 + 0xd4))) = *(undefined4 *)(puVar1 + 0xc);
      *((undefined1 *)GEN_TOP((iVar7 + 0xdc))) = puVar1[0x41];
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd4))) + *((int *)GEN_TOP(((int)this + 0xd8))) * 4))) =
           *(undefined4 *)(puVar1 + 0xc);
      *((int *)GEN_TOP(((int)this + 0xd8))) = *((int *)GEN_TOP(((int)this + 0xd8))) + 1;
      *((undefined4 *)GEN_TOP((iVar7 + 0x144))) = *(undefined4 *)(puVar1 + 0x10);
      *((undefined1 *)GEN_TOP((iVar7 + 0x14c))) = puVar1[0x42];
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd4))) + *((int *)GEN_TOP(((int)this + 0xd8))) * 4))) =
           *(undefined4 *)(puVar1 + 0x10);
      *((int *)GEN_TOP(((int)this + 0xd8))) = *((int *)GEN_TOP(((int)this + 0xd8))) + 1;
      *((undefined4 *)GEN_TOP((iVar7 + 0x1b4))) = *(undefined4 *)(puVar1 + 0x14);
      *((undefined1 *)GEN_TOP((iVar7 + 0x1bc))) = puVar1[0x43];
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd4))) + *((int *)GEN_TOP(((int)this + 0xd8))) * 4))) =
           *(undefined4 *)(puVar1 + 0x14);
      *((int *)GEN_TOP(((int)this + 0xd8))) = *((int *)GEN_TOP(((int)this + 0xd8))) + 1;
      *((undefined4 *)GEN_TOP((iVar7 + 0x224))) = *(undefined4 *)(puVar1 + 0x18);
      *((undefined1 *)GEN_TOP((iVar7 + 0x22c))) = puVar1[0x44];
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd4))) + *((int *)GEN_TOP(((int)this + 0xd8))) * 4))) =
           *(undefined4 *)(puVar1 + 0x18);
      *((int *)GEN_TOP(((int)this + 0xd8))) = *((int *)GEN_TOP(((int)this + 0xd8))) + 1;
      *((undefined4 *)GEN_TOP((iVar7 + 0x294))) = *(undefined4 *)(puVar1 + 0x1c);
      *((undefined1 *)GEN_TOP((iVar7 + 0x29c))) = puVar1[0x45];
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd4))) + *((int *)GEN_TOP(((int)this + 0xd8))) * 4))) =
           *(undefined4 *)(puVar1 + 0x1c);
      *((int *)GEN_TOP(((int)this + 0xd8))) = *((int *)GEN_TOP(((int)this + 0xd8))) + 1;
      *((undefined4 *)GEN_TOP((iVar7 + 0x304))) = *(undefined4 *)(puVar1 + 0x20);
      *((undefined1 *)GEN_TOP((iVar7 + 0x30c))) = puVar1[0x46];
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd4))) + *((int *)GEN_TOP(((int)this + 0xd8))) * 4))) =
           *(undefined4 *)(puVar1 + 0x20);
      *((int *)GEN_TOP(((int)this + 0xd8))) = *((int *)GEN_TOP(((int)this + 0xd8))) + 1;
      *((undefined4 *)GEN_TOP((iVar7 + 0x374))) = *(undefined4 *)(puVar1 + 0x24);
      *((undefined1 *)GEN_TOP((iVar7 + 0x37c))) = puVar1[0x47];
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd4))) + *((int *)GEN_TOP(((int)this + 0xd8))) * 4))) =
           *(undefined4 *)(puVar1 + 0x24);
      *((int *)GEN_TOP(((int)this + 0xd8))) = *((int *)GEN_TOP(((int)this + 0xd8))) + 1;
      *((undefined1 *)GEN_TOP((iVar7 + 0x380))) = puVar1[0x28];
      *((undefined1 *)GEN_TOP((iVar7 + 0x381))) = puVar1[0x48];
      *((undefined1 *)GEN_TOP((iVar7 + 0x382))) = puVar1[0x2c];
      local_8 = local_8 + 1;
      *((undefined1 *)GEN_TOP((iVar7 + 899))) = puVar1[0x49];
    } while (local_8 < param_2);
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  *((int *)GEN_TOP(((int)this + 0xd0))) = *((int *)GEN_TOP(((int)this + 0xd0))) + param_2;
  if ((uint)(*((int *)GEN_TOP(((int)this + 0xc4))) - *((int *)GEN_TOP(((int)this + 0xc0))) >> 2) <=
      *((uint *)GEN_TOP(((int)this + 0xd0)))) {
    uVar5 = F_00a6d180(this GEN_EDX_ARG,4,*((undefined4 *)GEN_TOP(((int)this + 0xd8))),*((undefined4 *)GEN_TOP(((int)this + 0xd4))),
                         0);
    return uVar5;
  }
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x20))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG);
  uVar5 = *((uint *)GEN_TOP(((int)this + 0xd0)));
  uVar8 = *((int *)GEN_TOP(((int)this + 0xc4))) - *((int *)GEN_TOP(((int)this + 0xc0))) >> 2;
  uVar11 = uVar8 - uVar5;
  if (uVar6 < uVar11) {
    uVar11 = uVar6;
  }
  if (uVar8 <= uVar5) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  uVar5 = F_00a6d180(this GEN_EDX_ARG,3,uVar11,*((int *)GEN_TOP(((int)this + 0xc0))) + uVar5 * 4,0);
  return uVar5;
}

/* ref: FUN_00a70e70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a70e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa70e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined2 * puVar8;
  uint local_c;
  int local_8;
  
  iVar6 = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x9f1))) = 1;
  local_c = 0;
  if ((*(uint *)&gen_args[1]) != 0) {
    local_8 = 0;
    do {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((*(int *)&gen_args[0]) + local_c * 4))) + 4)));
      iVar7 = **((int * PTR32 *)GEN_TOP(((int)this + 0x40))) + local_8;
      if (iVar6 == 0) {
        uVar4 = F_00ab6240(*((undefined4 *)GEN_TOP((iVar7 + 0x3dc))),0,iVar2);
        F_0042e430(((undefined *)GEN_TOP((iVar7 + 900))) GEN_EDX_ARG,uVar4);
        *((uint *)GEN_TOP((iVar7 + 0x3d8))) = (uint)*((ushort *)GEN_TOP((iVar2 + 0x7c)));
LAB_00a70f25: ;
        iVar6 = iVar6 + 1;
      }
      else {
        iVar1 = iVar6 * 0x70 - 0x70 + iVar7;
        uVar4 = F_00ab6240(*((undefined4 *)GEN_TOP((iVar6 * 0x70 - 0xc + iVar7))),0,iVar2);
        F_0042e430(((undefined *)GEN_TOP((iVar1 + 0x10))) GEN_EDX_ARG,uVar4);
        *((uint *)GEN_TOP((iVar1 + 0x68))) = (uint)*((ushort *)GEN_TOP((iVar2 + 0x7c)));
        *((undefined1 *)GEN_TOP((iVar1 + 0x6d))) = *((undefined1 *)GEN_TOP((iVar2 + 0x9e)));
        if (*((int *)GEN_TOP((iVar2 + 0x28))) == 1) {
          *((byte *)GEN_TOP((iVar1 + 0x6e))) = *((byte *)GEN_TOP((iVar1 + 0x6e))) | 1;
        }
        else {
          *((byte *)GEN_TOP((iVar1 + 0x6e))) = *((byte *)GEN_TOP((iVar1 + 0x6e))) & 0xfe;
        }
        if (iVar6 != 8) goto LAB_00a70f25;
        local_8 = local_8 + 0x444;
        iVar6 = 0;
      }
      local_c = local_c + 1;
    } while (local_c < (*(uint *)&gen_args[1]));
  }
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x3c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG,1);
  if (*((int *)GEN_TOP(((int)this + 0x40))) != 0) {
    puVar8 = ((undefined2 *)GEN_TOP(((int)this + 0x388)));
    iVar6 = 0x12;
    do {
      if (*(int *)(puVar8 - 4) != 0) {
        uVar4 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*(int *)(puVar8 - 4),0,1,1);
        *puVar8 = (short)uVar4;
      }
      puVar8 = puVar8 + 0x30;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
    bVar5 = 0;
    (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff00;
    if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x40))) + 4))) != '\0') {
      do {
        F_00a694f0(this GEN_EDX_ARG,(*(uint *)&gen_args[1]),0);
        bVar5 = bVar5 + 1;
        (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),bVar5);
      } while (bVar5 < *((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x40))) + 4))));
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x3c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG,2);
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x3c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG,3);
  }
  return uVar4;
}

/* ref: FUN_00a70fe0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a70fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa70fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0xd4))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0xd4))));
    *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  }
  F_00a6d2e0(this GEN_EDX_ARG);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x40)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*piVar1 != 0)) {
    if (*piVar1 != 0) {
      F_00a8a960(*piVar1 GEN_EDX_ARG,3);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x40))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x40))) != 0) {
    F_00406ad0(*((int *)GEN_TOP(((int)this + 0x40))));
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  iVar2 = 0;
  do {
    *((undefined1 *)GEN_TOP(((int)this + iVar2 + 0x9ed))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + iVar2 * 4))) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  return 0;
}

/* ref: FUN_00a71060 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a71060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa71060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x40)));
  iVar7 = 0;
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*piVar1 != 0)) {
    if (*piVar1 != 0) {
      F_00a8a960(*piVar1 GEN_EDX_FWD,3);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x40))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x40))) != 0) {
    F_00406ad0(*((int *)GEN_TOP(((int)this + 0x40))));
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  }
  else {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    *(undefined1 *)(puVar2 + 3) = 0;
    *((undefined4 *)GEN_TOP(((int)puVar2 + 0xd))) = 0;
    *((undefined4 *)GEN_TOP(((int)puVar2 + 0x11))) = 0;
    *((undefined4 *)GEN_TOP(((int)puVar2 + 0x15))) = 0;
    *((undefined4 *)GEN_TOP(((int)puVar2 + 0x19))) = 0;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x40))) = puVar2;
  }
  do {
    uVar3 = F_00a69100(iVar7);
    cVar5 = '\0';
    iVar6 = 0;
    do {
      uVar4 = F_00ab2f00(iVar6);
      if ((ushort)*((byte *)GEN_TOP((uVar4 + 4))) <= (ushort)uVar3) {
        cVar5 = cVar5 + '\x01';
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x28);
    *((char *)GEN_TOP((iVar7 + 0xd + *((int *)GEN_TOP(((int)this + 0x40)))))) = cVar5;
    uVar4 = F_00ab2f00(1000);
    *((bool *)GEN_TOP((iVar7 + 0x15 + *((int *)GEN_TOP(((int)this + 0x40)))))) =
         (ushort)*((byte *)GEN_TOP((uVar4 + 4))) <= (ushort)uVar3;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  return 0;
}

/* ref: FUN_00a71170 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a71170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa71170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0x44))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x40)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x44))));
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
    }
  }
  uVar2 = F_00b8b6f0(param_1);
  if (uVar2 == 0) {
    return 0;
  }
  puVar3 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
  if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00cb4700(puVar3 GEN_EDX_ARG,1,param_1);
    puVar3[5] = 1;
    *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10e78f8));
    puVar3[6] = this;
    puVar3[7] = ((code *)REFP(0xa6f790));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))) = puVar3;
  F_00cb4540(puVar3 GEN_EDX_ARG,0,uVar2);
  if (*((int *)GEN_TOP(((int)this + 0x40))) == 0) {
    uVar2 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xfa);
    *((uint *)GEN_TOP(((int)this + 0x40))) = uVar2;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x40))) + 0x48))))
            (*((int * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x44))));
  return 1;
}

/* ref: FUN_00a71240 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a71240(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa71240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),param_2);
  if (*((char *)GEN_TOP((param_1 + 0x36))) != param_2) {
    *((char *)GEN_TOP((param_1 + 0x36))) = param_2;
    uVar1 = F_00a6fbc0(&REFG(undefined, 0x14ab740) GEN_EDX_FWD,1,3);
  }
  return uVar1;
}

/* ref: FUN_00a71270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a71270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa71270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xe8)));
  if (iVar1 != *((int *)GEN_TOP(((int)this + 0xec)))) {
    do {
      if (*((uint *)GEN_TOP((iVar1 + 0x54))) == (uint)(ushort)param_1) {
        return *((uint *)GEN_TOP((iVar1 + 0x5c)));
      }
      iVar1 = iVar1 + 0x11c;
    } while (iVar1 != *((int *)GEN_TOP(((int)this + 0xec))));
  }
  return 0;
}

/* ref: FUN_00a712b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a712b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa712b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = param_1;
  F_00a6d2e0(this GEN_EDX_FWD);
  F_00a71060(this GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x3c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00a712e0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a712e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa712e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((REFG(int, 0x1379694) != 0) && (*((char *)GEN_TOP((REFG(int, 0x1379694) + 0x188))) == '\x05')) {
    uVar3 = 0;
    uVar2 = 0;
    uVar1 = 4;
    this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
    F_006fccf0(this_00 GEN_EDX_ARG,uVar1,uVar2,uVar3);
  }
  F_00a70fe0(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00a71310 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00a71310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa71310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  undefined4 uVar5;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    bVar2 = F_00a69270(this GEN_EDX_FWD,0,0);
    if (bVar2 != 0) {
      uVar4 = (uint)*((ushort *)GEN_TOP(((int)this + 0xac)));
      uVar5 = 0;
      uVar3 = (*((char *)GEN_TOP((iVar1 + 0x188))) != '\x05') - 1 & 2;
      this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
      bVar2 = F_006fccf0(this_00 GEN_EDX_ARG,uVar3,uVar4,uVar5);
      if (bVar2 != 0) {
        F_00a70fe0(this GEN_EDX_ARG);
      }
      return bVar2;
    }
  }
  return 0;
}

/* ref: FUN_00a71370 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a71370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa71370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar6 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    if ((char)param_1 == '\0') {
      piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
      if (piVar2 == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
      uVar7 = 0x478;
    }
    else {
      bVar1 = F_00a69270(this GEN_EDX_ARG,(char)param_1,(undefined1)param_2);
      if (bVar1 != 0) {
        uVar5 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x40))) + 10)));
        uVar4 = (uint)*((ushort *)GEN_TOP(((int)this + 0xac)));
        iVar6 = (uint)(*((char *)GEN_TOP((iVar6 + 0x188))) == '\x05') * 2 + 1;
        pvVar3 = ((undefined *)GEN_TOP(F_006b8c00()));
        bVar1 = F_006fccf0(pvVar3 GEN_EDX_ARG,iVar6,uVar4,uVar5);
        if (bVar1 != 0) {
          F_00a70fe0(this GEN_EDX_ARG);
        }
        return bVar1;
      }
      piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      if (piVar2 == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
      uVar7 = 0x47c;
    }
    uVar8 = 0;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
    F_0046ac40(pvVar3 GEN_EDX_ARG,uVar7,iVar6,uVar8);
  }
  return 0;
}

/* ref: FUN_00a71440 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a71440(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa71440u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined4 * puVar1;
  int * piVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP((param_2 * 0x70 + 0x8c + param_1)));
  piVar2 = ((int *)GEN_TOP(*puVar1));
  while( true ) {
    if (piVar2 == ((int *)GEN_TOP(puVar1[1]))) {
      return 0;
    }
    if ((*((char *)GEN_TOP(((int)piVar2 + 0x33))) == param_4) && (*piVar2 == param_3)) break;
    piVar2 = piVar2 + 0xd;
  }
  return 1;
}

/* ref: FUN_00a71480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a71480(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa71480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  int iVar2;
  
  (*(int *)(gen_frame + 0x0)) = param_1;
  (*(int *)(gen_frame + 0x0)) = 0;
  uVar1 = F_006c42f0(param_2,&(*(int *)(gen_frame + 0x0)));
  if ((-1 < (int)uVar1) && ((*(int *)(gen_frame + 0x0)) != 0)) {
    iVar2 = param_1 + uVar1 * 0x70;
    uVar1 = *((uint *)GEN_TOP((iVar2 + 0xdac)));
    if (uVar1 != *((uint *)GEN_TOP((iVar2 + 0xdb0)))) {
      do {
        if (*((int *)GEN_TOP((uVar1 + 8))) == 0xebf9) {
          *((byte *)GEN_TOP((uVar1 + 0x32))) =
               *((byte *)GEN_TOP((uVar1 + 0x32))) ^ (*((byte *)GEN_TOP((uVar1 + 0x32))) ^ param_3) & 1;
        }
        uVar1 = uVar1 + 0x34;
      } while (uVar1 != *((uint *)GEN_TOP((iVar2 + 0xdb0))));
    }
  }
  return uVar1;
}

/* ref: FUN_00a714f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a714f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa714f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10e796c));
  F_0042b630(in_ecx + 1 GEN_EDX_FWD);
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1c] = 0;
  in_ecx[0x1d] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00a71520 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a71520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa71520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  ulonglong uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e796c));
  if (*((int *)GEN_TOP(((int)this + 0x5c))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x58)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x5c))));
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x5c)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
    }
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0x60)));
  if (iVar3 != 0) {
    F_00429760(iVar3,(*((int *)GEN_TOP(((int)this + 0x68))) - iVar3 >> 2) * 4,800);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  uVar4 = F_0042c880(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  return (uint)uVar4;
}

/* ref: FUN_00a71590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a71590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa71590u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x44, 12);
  byte * pbVar1;
  ushort uVar2;
  uint * puVar3;
  int iVar4;
  bool bVar5;
  byte bVar6;
  undefined * this_00;
  int * this_01;
  uint uVar7;
  undefined4 * puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint * puVar13;
  uint uVar14;
  byte * pbVar15;
  uint uVar16;
  undefined * this_02;
  uint uVar17;
  bool bVar18;
  float10 fVar19;
  float fVar20;
  
  uVar12 = REFG(undefined4, 0x1379694);
  (*(uint *)(gen_frame + 0x20)) = 0;
  uVar14 = REFG(undefined4, 0x1379694);
  if (param_2 != 0) {
    do {
      puVar3 = *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + (*(uint *)(gen_frame + 0x20)) * 4))) + 4)));
      this_02 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x1cc))) * 4 + 0x7c))) * 0x2624 +
                        *((int *)GEN_TOP(((int)this + 0x198))))));
      F_0042e430(this_02 GEN_EDX_FWD,(*puVar3 & 0xffffff) + (int)puVar3);
      F_0042e430(((undefined *)GEN_TOP(((int)this_02 + 0x54))) GEN_EDX_ARG,(int)puVar3 + (puVar3[0x2d5] & 0xffffff) + 0xb54);
      uVar2 = *((ushort *)GEN_TOP(((int)this_02 + 0xaa)));
      uVar14 = uVar2 | 0x10000;
      this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
      this_01 = ((int *)GEN_TOP(F_006e3240(this_00 GEN_EDX_ARG,uVar14)));
      uVar14 = F_006bf680((uint)uVar2);
      bVar6 = 0;
      (*(byte *)(gen_frame + 0x3f)) = 1;
      *((undefined4 *)GEN_TOP(((int)this_02 + 0xb0))) = 0;
      (*(uint *)(gen_frame + 0x34)) = (*(uint *)(gen_frame + 0x34)) & 0xffffff00;
      do {
        uVar16 = (uint)bVar6;
        if ((char)puVar3[uVar16 * 9 + 0x1ed] == '\0') {
          *((uint *)GEN_TOP(((int)this_02 + 0xb0))) = (uint)bVar6;
          break;
        }
        pbVar1 = ((byte *)GEN_TOP((uVar16 * 0x18c + 0xb4 + (int)this_02)));
        *(uint *)(pbVar1 + 0x58) = (uint)(byte)puVar3[uVar16 * 9 + 0x1ed];
        if (*((ushort *)GEN_TOP(((int)this_02 + 0xa8))) == (ushort)(byte)puVar3[uVar16 * 9 + 0x1ed]) {
          if ((this_01 != ((int *)GEN_TOP(0x0))) && (uVar12 != 0)) {
            bVar6 = F_006c0260(this_01 GEN_EDX_ARG,uVar12,(*(uint *)(gen_frame + 0x34)));
            *pbVar1 = bVar6;
          }
          if ((*(byte *)(gen_frame + 0x3f)) != 0) {
            *((uint *)GEN_TOP(((int)this_02 + 0x25e4))) = uVar16;
            (*(byte *)(gen_frame + 0x3f)) = 0;
          }
          *((int *)GEN_TOP(((int)this_02 + 0x25e8))) = *((int *)GEN_TOP(((int)this_02 + 0x25e8))) + 1;
          uVar17 = 0;
          (*(uint *)(gen_frame + 0x2c)) = 0;
          (*(int *)(gen_frame + 0x30)) = 0;
          bVar5 = false;
          do {
            if (puVar3[uVar16 * 9 + uVar17 + 0x1e5] == 0) break;
            uVar7 = F_00ab37e0(puVar3[uVar16 * 9 + uVar17 + 0x1e5]);
            if (uVar7 != 0) {
              uVar2 = *((ushort *)GEN_TOP((uVar7 + 0x20)));
              uVar7 = F_00ab1c90((uint)uVar2);
              if (uVar7 != 0) {
                if ((*((char *)GEN_TOP((uVar7 + 0x2a))) == '\a') && (*(uint *)&REFG(undefined2, 0x1379c78) == uVar2)) {
                  bVar5 = true;
                }
                (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 1;
              }
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < 8);
          (*(uint *)(gen_frame + 0x24)) = 0;
          pbVar15 = pbVar1 + 0xd0;
          do {
            uVar17 = puVar3[uVar16 * 9 + (*(uint *)(gen_frame + 0x24)) + 0x1e5];
            if (uVar17 == 0) break;
            puVar8 = ((undefined4 *)GEN_TOP(F_00ab37e0(uVar17)));
            if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
              uVar7 = F_005d4e80(&REFG(undefined, 0x1379c6c) GEN_EDX_ARG,uVar17,puVar8[6]);
              uVar9 = (uint)*(ushort *)(puVar8 + 8);
              uVar10 = F_00ab1c90(uVar9);
              if (uVar10 != 0) {
                uVar11 = 0;
                if ((*(uint *)(gen_frame + 0x2c)) != 0) {
                  puVar13 = (uint *)(pbVar1 + 200);
                  do {
                    if (*puVar13 == uVar17) goto LAB_00a718c3;
                    uVar11 = uVar11 + 1;
                    puVar13 = puVar13 + 6;
                  } while (uVar11 < (*(uint *)(gen_frame + 0x2c)));
                }
                if (*((char *)GEN_TOP((uVar10 + 0x2a))) == '\a') {
                  bVar18 = *(uint *)&REFG(undefined2, 0x1379c78) == uVar9;
                }
                else {
                  bVar18 = !bVar5;
                }
                if ((bVar18) || ((*(int *)(gen_frame + 0x30)) == 1)) {
                  if ((int)uVar14 < 0) {
LAB_00a7180e: ;
                    *(uint *)(pbVar15 - 8) = uVar17;
                    *(undefined4 *)(pbVar15 - 4) = *puVar8;
                    *(undefined4 *)pbVar15 = puVar8[1];
                    *(undefined4 *)(pbVar15 + 4) = puVar8[2];
                    if ((puVar8[9] == 9) || (puVar8[9] == 0x33)) {
                      fVar19 = F_007733a0(GEN_ARGF(gen_bits2f(puVar8[4])));
                      fVar20 = (float)fVar19;
                    }
                    else {
                      fVar20 = gen_bits2f(puVar8[4]);
                    }
                    *(float *)(pbVar15 + 8) = fVar20;
                    iVar4 = puVar8[9];
                    if ((iVar4 == 0x33) || (iVar4 == 9)) {
                      pbVar15[0xc] = 0xf9;
                      pbVar15[0xd] = 0xeb;
                      pbVar15[0xe] = 0;
                      pbVar15[0xf] = 0;
                    }
                    else {
                      bVar6 = F_00a5f470(iVar4);
                      (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),bVar6);
                      if (this_01 != ((int *)GEN_TOP(0x0))) {
                        uVar17 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_01 + 0x200))))
                                           (this_01 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)),puVar8[5],uVar17,puVar8[5]);
                        *(uint *)(pbVar15 + 0xc) = uVar17;
                      }
                    }
                    (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) + 1;
                    *(uint *)(pbVar1 + 0xb8) = uVar9;
                    *(uint *)(pbVar1 + 0xbc) = uVar7;
                    *(uint *)(pbVar1 + 0xc0) = (uint)*((ushort *)GEN_TOP((uVar10 + 0x1e)));
                    *(uint *)(pbVar1 + 0xc4) = (uint)*((ushort *)GEN_TOP((uVar10 + 0x20)));
                    pbVar15 = pbVar15 + 0x18;
                  }
                  else {
                    for (puVar13 = *(uint * PTR32 *)(&REFG(undefined, 0x14b12e4) + uVar14 * 0x70);
                        puVar13 != *(uint * PTR32 *)(&REFG(undefined, 0x14b12e8) + uVar14 * 0x70);
                        puVar13 = puVar13 + 0xd) {
                      if ((*((char *)GEN_TOP(((int)puVar13 + 0x33))) == (char)(*(uint *)(gen_frame + 0x34))) && (*puVar13 == uVar17)
                         ) goto LAB_00a7180e;
                    }
                  }
                }
              }
            }
LAB_00a718c3: ;
            (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) + 1;
          } while ((*(uint *)(gen_frame + 0x24)) < 8);
          *(uint *)(pbVar1 + 0x188) = (*(uint *)(gen_frame + 0x2c));
        }
        else {
          *pbVar1 = (*(byte *)(gen_frame + 0x3f));
        }
        bVar6 = (char)(*(uint *)(gen_frame + 0x34)) + 1;
        (*(uint *)(gen_frame + 0x34)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x34)), 1, 3),bVar6);
      } while (bVar6 < 0x18);
      *((int *)GEN_TOP(((int)this + 0x1cc))) = *((int *)GEN_TOP(((int)this + 0x1cc))) + 1;
      uVar14 = (*(uint *)(gen_frame + 0x20)) + 1;
      (*(uint *)(gen_frame + 0x20)) = uVar14;
    } while (uVar14 < param_2);
  }
  puVar8 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x204)));
  if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar14 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar8)))(puVar8 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x204))) = 0;
  }
  if ((uint)*((ushort *)GEN_TOP(((int)this + 0x78))) <= *((uint *)GEN_TOP(((int)this + 0x1c8)))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = 0;
    if (*((char *)GEN_TOP(((int)this + 0x1d4))) == '\0') {
      *((undefined1 *)GEN_TOP(((int)this + 0x1d4))) = 1;
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x1d5))) = 1;
    return uVar14;
  }
  uVar12 = F_00a71ef0(this GEN_EDX_ARG);
  return uVar12;
}

/* ref: FUN_00a71980 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a71980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa71980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0x28))) != 0) {
    uVar2 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x127);
    if (uVar2 != 0) {
      piVar3 = ((int *)GEN_TOP(F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x127)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x4c))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x28))));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x28)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  F_00a8f670(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG);
  *(undefined4 *)this = 0;
  if ((*((int *)GEN_TOP(((int)this + 0x34))) != 2) && (0x67 < *((uint *)GEN_TOP(((int)this + 0x2c))))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 2;
  }
  return 2;
}

/* ref: FUN_00a71a10 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a71a10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa71a10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  char cVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int * piVar5;
  undefined4 * puVar6;
  int * piVar7;
  int iVar8;
  int * piVar9;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  piVar9 = ((int *)GEN_TOP(*piVar2));
  if (piVar9 == piVar2) {
    return;
  }
  do {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(piVar9[5]));
    while (puVar3 != ((undefined4 *)GEN_TOP(piVar9[5]))) {
      for (iVar8 = puVar3[5]; iVar8 != puVar3[6]; iVar8 = iVar8 + 0x88) {
        if (*((short *)GEN_TOP((iVar8 + 0x7c))) == (short)param_2) {
          *((undefined1 *)GEN_TOP((iVar8 + 0x85))) = param_3;
          return;
        }
      }
      if (*((char *)GEN_TOP(((int)puVar3 + 0x25))) == '\0') {
        puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
        if (*((char *)GEN_TOP(((int)puVar4 + 0x25))) == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x25)));
          puVar3 = puVar4;
          puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x25)));
            puVar3 = puVar4;
            puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x25)));
          puVar6 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
          while ((puVar3 = puVar6, cVar1 == '\0' && (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
            cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x25)));
            puVar6 = ((undefined4 *)GEN_TOP(puVar3[1]));
            puVar4 = puVar3;
          }
        }
      }
    }
    if (*((char *)GEN_TOP(((int)piVar9 + 0x21))) == '\0') {
      piVar5 = ((int *)GEN_TOP(piVar9[2]));
      if (*((char *)GEN_TOP(((int)piVar5 + 0x21))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar5 + 0x21)));
        piVar9 = piVar5;
        piVar5 = ((int *)GEN_TOP(*piVar5));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar5 + 0x21)));
          piVar9 = piVar5;
          piVar5 = ((int *)GEN_TOP(*piVar5));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x21)));
        piVar7 = ((int *)GEN_TOP(piVar9[1]));
        piVar5 = piVar9;
        while ((piVar9 = piVar7, cVar1 == '\0' && (piVar5 == ((int *)GEN_TOP(piVar9[2]))))) {
          cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x21)));
          piVar7 = ((int *)GEN_TOP(piVar9[1]));
          piVar5 = piVar9;
        }
      }
    }
  } while (piVar9 != piVar2);
  return;
}

/* ref: FUN_00a71b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a71b20(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa71b20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  byte bVar5;
  byte bVar6;
  undefined4 in_EAX = 0;
  byte bVar8;
  byte local_5;
  undefined4 * puVar7;
  
  bVar5 = *((byte *)GEN_TOP((param_2 + 0x2ba + param_1))) ^ param_3;
  puVar7 = ((undefined4 *)GEN_TOP(CONCAT31((int3)((uint)in_EAX >> 8),bVar5)));
  *((byte *)GEN_TOP((param_2 + 0x2ba + param_1))) = param_3;
  local_5 = 0;
  bVar8 = 0;
  do {
    bVar6 = '\x01' << GEN_SHC(bVar8, bVar8);
    puVar7 = ((undefined4 *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)puVar7) >> 8),bVar6)));
    if ((bVar5 & bVar6) != 0) {
      puVar2 = ((undefined4 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x14ac18c)));
      while (puVar2 != REFG(undefined4 * PTR32, 0x14ac18c)) {
        puVar3 = *((undefined4 * PTR32 *)GEN_TOP(puVar2[5]));
        while (puVar3 != ((undefined4 *)GEN_TOP(puVar2[5]))) {
          for (puVar7 = ((undefined4 *)GEN_TOP(puVar3[5])); puVar7 != ((undefined4 *)GEN_TOP(puVar3[6]));
              puVar7 = puVar7 + 0x22) {
            if (*(short *)(puVar7 + 0x1f) == (ushort)((short)param_2 * 8 + (ushort)local_5)) {
              *((bool *)GEN_TOP(((int)puVar7 + 0x85))) = (param_3 & bVar6) != 0;
              goto LAB_00a71c65;
            }
          }
          if (*((char *)GEN_TOP(((int)puVar3 + 0x25))) == '\0') {
            puVar7 = ((undefined4 *)GEN_TOP(puVar3[2]));
            if (*((char *)GEN_TOP(((int)puVar7 + 0x25))) == '\0') {
              cVar1 = *((char *)GEN_TOP(((int)*puVar7 + 0x25)));
              puVar3 = puVar7;
              puVar7 = ((undefined4 *)GEN_TOP(*puVar7));
              while (cVar1 == '\0') {
                cVar1 = *((char *)GEN_TOP(((int)*puVar7 + 0x25)));
                puVar3 = puVar7;
                puVar7 = ((undefined4 *)GEN_TOP(*puVar7));
              }
            }
            else {
              cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x25)));
              puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
              puVar4 = puVar3;
              while ((puVar3 = puVar7, puVar7 = puVar3, cVar1 == '\0' &&
                     (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
                cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x25)));
                puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
                puVar4 = puVar3;
              }
            }
          }
        }
        if (*((char *)GEN_TOP(((int)puVar2 + 0x21))) == '\0') {
          puVar7 = ((undefined4 *)GEN_TOP(puVar2[2]));
          if (*((char *)GEN_TOP(((int)puVar7 + 0x21))) == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar7 + 0x21)));
            puVar2 = puVar7;
            puVar7 = ((undefined4 *)GEN_TOP(*puVar7));
            while (cVar1 == '\0') {
              cVar1 = *((char *)GEN_TOP(((int)*puVar7 + 0x21)));
              puVar2 = puVar7;
              puVar7 = ((undefined4 *)GEN_TOP(*puVar7));
            }
          }
          else {
            cVar1 = *((char *)GEN_TOP(((int)puVar2[1] + 0x21)));
            puVar7 = ((undefined4 *)GEN_TOP(puVar2[1]));
            puVar3 = puVar2;
            while ((puVar2 = puVar7, puVar7 = puVar2, cVar1 == '\0' &&
                   (puVar3 == ((undefined4 *)GEN_TOP(puVar2[2]))))) {
              cVar1 = *((char *)GEN_TOP(((int)puVar2[1] + 0x21)));
              puVar7 = ((undefined4 *)GEN_TOP(puVar2[1]));
              puVar3 = puVar2;
            }
          }
        }
      }
    }
LAB_00a71c65: ;
    local_5 = local_5 + 1;
    bVar8 = bVar8 + 1;
    if (7 < local_5) {
      return (uint)puVar7;
    }
  } while( true );
}

/* ref: FUN_00a71c90 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a71c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa71c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 0x40)));
  iVar3 = *piVar5;
  (*(int *)(gen_frame + 0x0)) = param_1;
  if (iVar3 != 0) {
    iVar3 = *piVar5;
    if (iVar3 != 0) {
      F_00a8a960(iVar3 GEN_EDX_FWD,3);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x40))) = 0;
  }
  *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x40))) + 8))) = (undefined2)param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  iVar3 = *((int *)GEN_TOP(((int)this + 0xc0)));
  iVar4 = param_1;
  if (iVar3 != *((int *)GEN_TOP(((int)this + 0xc4)))) {
    F_00c46e20(iVar3,*((int *)GEN_TOP(((int)this + 0xc4))),0);
    *((int *)GEN_TOP(((int)this + 0xc4))) = iVar3;
    iVar4 = (*(int *)(gen_frame + 0x0));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 1;
  *((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x40))) + 0xc))) = (char)iVar4;
  if (param_2 < 1000) {
    if (param_2 < 9) {
      uVar2 = *((uint *)GEN_TOP(((int)this + 0xb8)));
      iVar3 = 0;
      piVar5 = &(*(int *)(gen_frame + 0x0));
      (*(int *)(gen_frame + 0x0)) = param_2 + iVar4 * 0x28;
    }
    else {
      *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0x1f;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG);
      uVar2 = 0x1f;
      if (uVar1 < 0x1f) {
        uVar2 = uVar1;
      }
      uVar1 = 0;
      if (uVar2 != 0) {
        iVar3 = *((int *)GEN_TOP(((int)this + 0xbc))) + 9 + iVar4 * 0x28;
        do {
          ((int *)(gen_frame + 0x4))[(int)(uVar1)] = iVar3;
          uVar1 = uVar1 + 1;
          iVar3 = iVar3 + 1;
        } while (uVar1 < uVar2);
      }
      piVar5 = ((int *)(gen_frame + 0x4));
      iVar3 = iVar4;
    }
  }
  else {
    iVar3 = 0;
    piVar5 = &(*(int *)(gen_frame + 0x0));
    (*(int *)(gen_frame + 0x0)) = iVar4 + param_2;
    uVar2 = 1;
  }
  uVar2 = F_00a6d180(this GEN_EDX_ARG,2,uVar2,piVar5,iVar3);
  return uVar2;
}

/* ref: FUN_00a71dd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a71dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa71dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  int local_8;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  F_00a84d40(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  iVar2 = (int)this + 0xe0;
  local_8 = 6;
  do {
    F_0042b630(iVar2 GEN_EDX_ARG);
    iVar2 = iVar2 + 0x54;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  iVar2 = (int)this + 0x32c;
  local_8 = 0x11;
  do {
    F_0042b630(iVar2 GEN_EDX_ARG);
    iVar1 = 0;
    *((undefined4 *)GEN_TOP((iVar2 + 0x54))) = 0;
    *((undefined4 *)GEN_TOP((iVar2 + 0x58))) = 0;
    *((undefined2 *)GEN_TOP((iVar2 + 0x5c))) = 0;
    iVar2 = iVar2 + 0x60;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  *((undefined1 *)GEN_TOP(((int)this + 0x9ec))) = 0;
  do {
    *((undefined1 *)GEN_TOP(((int)this + iVar1 + 0x9ed))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + iVar1 * 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + iVar1 * 4 + 0x14))) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return (uint)this;
}

/* ref: FUN_00a71e70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a71e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa71e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  ulonglong uVar4;
  
  pvVar2 = ((undefined *)GEN_TOP(((int)this + 0x9ec)));
  iVar3 = 0x11;
  do {
    pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 0x60)));
    F_0042c880(pvVar2 GEN_EDX_FWD);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  pvVar2 = ((undefined *)GEN_TOP(((int)this + 0x32c)));
  iVar3 = 6;
  do {
    pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 0x54)));
    F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  iVar3 = *((int *)GEN_TOP(((int)this + 0xc0)));
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar4 = F_00429760(iVar3,(*((int *)GEN_TOP(((int)this + 200))) - iVar3 >> 2) * 4,800);
    uVar1 = (uint)uVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  return uVar1;
}

/* ref: FUN_00a71ef0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a71ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa71ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * this_00;
  byte bVar4;
  uint uVar5;
  
  piVar2 = ((int *)GEN_TOP(F_0052fba0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,((char *)REFP(0x10e77ec)))));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  uVar5 = (uint)*((ushort *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x1c8)));
  if (uVar3 < uVar5) {
    uVar5 = uVar3;
  }
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    this_00 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,uVar5,0);
    this_00[5] = uVar5;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e78d4));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xa71590));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x204))) = this_00;
  if (*((int *)GEN_TOP(((int)this + 0x200))) == 0) {
    uVar3 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x11);
    *((uint *)GEN_TOP(((int)this + 0x200))) = uVar3;
  }
  bVar4 = 0;
  if (uVar5 != 0) {
    uVar3 = 0;
    do {
      iVar1 = *((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x1c8))) * 4 + 0x7c)));
      *((int *)GEN_TOP(((int)this + 0x1c8))) = *((int *)GEN_TOP(((int)this + 0x1c8))) + 1;
      F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x204))) GEN_EDX_ARG,uVar3,
                   *((ushort *)GEN_TOP((iVar1 * 0x2624 + 0xaa + *((int *)GEN_TOP(((int)this + 0x198)))))) | 0x10000);
      bVar4 = bVar4 + 1;
      uVar3 = (uint)bVar4;
    } while (uVar3 < uVar5);
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x200))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x200))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x204))));
  return uVar5;
}

/* ref: FUN_00a71ff0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a71ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa71ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x2f4, 12, 4);
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint * puVar5;
  undefined1 * puVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 * puVar12;
  undefined1 uVar13;
  undefined4 * puVar14;
  undefined4 * puVar15;
  uint uVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x2ec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2f0));
  bVar4 = 0;
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      ((undefined4 *)(gen_frame + 0x0))[(int)(uVar1)] = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + uVar1 * 4))) + 4)));
      bVar4 = bVar4 + 1;
      ((undefined4 *)(gen_frame + 0x2c8))[(int)(uVar1)] = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x21c))) + 0xc))) + uVar1 * 0x10)));
      uVar1 = (uint)bVar4;
    } while (uVar1 < param_2);
  }
  (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x1f0))) * 4 + 0xa4))) * 0x2624 + 0x261c +
               *((int *)GEN_TOP(((int)this + 0x198))))));
  ((undefined4 *)(gen_frame + 0x18))[0] = 0;
  puVar6 = ((undefined1 *)(gen_frame + 0x20));
  (*(int *)(gen_frame + 0x14)) = 3;
  do {
    F_0071dbc0(puVar6 GEN_EDX_FWD);
    puVar6 = puVar6 + 0xa8;
    iVar7 = (*(int *)(gen_frame + 0x14)) - 1;
    (*(int *)(gen_frame + 0x14)) = iVar7;
  } while (-1 < iVar7);
  puVar15 = ((undefined4 *)(gen_frame + 0x2c8));
  puVar14 = ((undefined4 *)(gen_frame + 0x0));
  ((uint *)(gen_frame + 0x2c0))[0] = 0;
  uVar1 = F_00ab37e0((*(undefined4 *)(gen_frame + 0x10)));
  F_006d42d0(((undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,(int)this + *((int *)GEN_TOP(((int)this + 0x1f0))) * 0x28 + 0xcc,
               *((undefined4 *)GEN_TOP((uVar1 + 0x14))),puVar14,puVar15,param_2);
  iVar7 = *((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x1f0))) * 4 + 0xa4))) * 0x2624 + 0xb4 +
          *((int *)GEN_TOP(((int)this + 0x198)));
  F_00709790(((undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,iVar7 + 4,iVar7 + 0x5c);
  uVar1 = 0;
  (*(undefined2 *)(gen_frame + 0x2d8)) = 0;
  (*(undefined4 *)(gen_frame + 0x2da)) = 0;
  (*(undefined4 *)(gen_frame + 0x2de)) = 0;
  (*(undefined1 *)(gen_frame + 0x2e4)) = 0;
  (*(undefined4 *)(gen_frame + 0x2e5)) = 0;
  if (((uint *)(gen_frame + 0x2c0))[0] != 0) {
    puVar5 = ((uint *)(gen_frame + 0x80));
    do {
      if (*((char *)GEN_TOP(((int)puVar5 - 2))) == '\0') {
        uVar2 = *puVar5;
        if ((puVar5[3] & 1) != 0) {
          uVar2 = uVar2 + 1000000;
        }
      }
      else {
        this_00 = ((undefined *)GEN_TOP(F_00a3a860(puVar5 - 2 GEN_EDX_ARG)));
        uVar2 = F_0046e5e0(this_00 GEN_EDX_ARG);
      }
      iVar7 = (int)this + 0x1c0;
      uVar13 = 0;
      puVar6 = &(*(undefined1 *)(gen_frame + 0x2e4));
      puVar12 = &(*(undefined2 *)(gen_frame + 0x2d8));
      uVar11 = 1;
      uVar10 = 0;
      uVar9 = 0;
      uVar16 = uVar1;
      uVar3 = F_006b8c00();
      F_007013f0(uVar3 GEN_EDX_ARG,uVar2,uVar9,uVar10,uVar11,puVar12,puVar6,uVar13,iVar7,uVar16);
      uVar1 = uVar1 + 1;
      puVar5 = puVar5 + 0x2a;
    } while (uVar1 < ((uint *)(gen_frame + 0x2c0))[0]);
  }
  puVar15 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x21c)));
  *((int *)GEN_TOP(((int)this + 0x1f0))) = *((int *)GEN_TOP(((int)this + 0x1f0))) + 1;
  if (puVar15 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar15)))(puVar15 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x21c))) = 0;
  }
  if (*((uint *)GEN_TOP(((int)this + 0x1ec))) < *((uint *)GEN_TOP(((int)this + 0x1e8)))) {
    F_00a72220(this GEN_EDX_ARG);
  }
  else if (*((short *)GEN_TOP(((int)this + 0x78))) == 0) {
    *((undefined1 *)GEN_TOP(((int)this + 0x1dd))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x194))) = 1;
  }
  else {
    *((undefined4 *)GEN_TOP(((int)this + 0x1c8))) = 0;
    F_00a71ef0(this GEN_EDX_ARG);
  }
  puVar5 = ((uint *)(gen_frame + 0x2c0));
  iVar7 = 3;
  do {
    puVar5 = puVar5 - 0x2a;
    uVar8 = F_0042c880(puVar5 GEN_EDX_ARG);
    iVar7 = iVar7 - 1;
  } while (-1 < iVar7);
  return (uint)uVar8;
}

/* ref: FUN_00a72220 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a72220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa72220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 * this_00;
  uint uVar2;
  byte bVar3;
  
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x1ec))) * 4 + 0xa4))) * 0x2624 + 0x2618 +
              *((int *)GEN_TOP(((int)this + 0x198)))))) == 0) {
    do {
      *((int *)GEN_TOP(((int)this + 0x1ec))) = *((int *)GEN_TOP(((int)this + 0x1ec))) + 1;
      uVar2 = *((uint *)GEN_TOP(((int)this + 0x1ec)));
      *((int *)GEN_TOP(((int)this + 0x1f0))) = *((int *)GEN_TOP(((int)this + 0x1f0))) + 1;
      if (*((uint *)GEN_TOP(((int)this + 0x1e8))) <= uVar2) {
        if (*((short *)GEN_TOP(((int)this + 0x78))) != 0) {
          *((undefined4 *)GEN_TOP(((int)this + 0x1c8))) = 0;
          uVar2 = F_00a71ef0(this GEN_EDX_FWD);
          return uVar2;
        }
        *((undefined1 *)GEN_TOP(((int)this + 0x1dd))) = 0;
        *((undefined1 *)GEN_TOP(((int)this + 0x194))) = 1;
        return uVar2;
      }
    } while (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + uVar2 * 4 + 0xa4))) * 0x2624 + 0x2618 +
                     *((int *)GEN_TOP(((int)this + 0x198)))))) == 0);
  }
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    this_00 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x1ec))) * 4 + 0xa4))) * 0x2624 + 0x2618 +
             *((int *)GEN_TOP(((int)this + 0x198))))));
    F_00cb4700(this_00 GEN_EDX_ARG,uVar1,0);
    this_00[5] = uVar1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e78d4));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xa71ff0));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x21c))) = this_00;
  if (*((int *)GEN_TOP(((int)this + 0x218))) == 0) {
    uVar2 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,9);
    *((uint *)GEN_TOP(((int)this + 0x218))) = uVar2;
  }
  bVar3 = 0;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x1ec))) * 4 + 0xa4))) * 0x2624 + 0x2618 +
              *((int *)GEN_TOP(((int)this + 0x198)))))) != 0) {
    uVar2 = 0;
    do {
      F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x21c))) GEN_EDX_ARG,uVar2,
                   *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x198))) + 0x25f4 +
                    (*((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x1ec))) * 4 + 0xa4))) * 0x989 + uVar2) *
                    4))));
      bVar3 = bVar3 + 1;
      uVar2 = (uint)bVar3;
    } while (uVar2 < *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x1ec))) * 4 + 0xa4))) * 0x2624
                               + 0x2618 + *((int *)GEN_TOP(((int)this + 0x198)))))));
  }
  *((int *)GEN_TOP(((int)this + 0x1ec))) = *((int *)GEN_TOP(((int)this + 0x1ec))) + 1;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x218))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x218))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x21c))));
  return uVar2;
}

/* ref: FUN_00a72410 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a72410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa72410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*piVar1 != 0)) {
    if (*piVar1 != 0) {
      F_00a92f80(*piVar1 GEN_EDX_FWD,3);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x28))) = 0;
  }
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x28))) != 0) {
    uVar2 = F_00406ad0(*((int *)GEN_TOP(((int)this + 0x28))));
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  }
  return uVar2;
}

/* ref: FUN_00a72450 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a72450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa72450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  
  F_00a66c10(this GEN_EDX_FWD);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*piVar1 != 0)) {
    if (*piVar1 != 0) {
      F_00a92f80(*piVar1 GEN_EDX_ARG,3);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x28))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x28))) != 0) {
    F_00406ad0(*((int *)GEN_TOP(((int)this + 0x28))));
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  iVar2 = 0;
  do {
    *((undefined1 *)GEN_TOP(((int)this + iVar2 + 0x48))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + iVar2 * 4))) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return 0;
}

/* ref: FUN_00a724b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a724b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa724b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  int iVar2;
  short * psVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int local_1c;
  uint local_14;
  undefined1 * local_10;
  int * local_c;
  byte local_5;
  
  local_14 = 0;
  if (param_2 != 0) {
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + local_14 * 4))) + 4)));
      iVar2 = *((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x1f0))) * 4 + 0xa4)));
      puVar7 = puVar1;
      puVar8 = ((undefined4 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x1f0))) * 0x28 + 0xcc)));
      for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      local_10 = ((undefined1 *)GEN_TOP(((int)puVar1 + 0x21)));
      local_c = puVar1 + 2;
      psVar3 = (short *)(puVar1 + 6);
      local_5 = 0;
      local_1c = 4;
      do {
        if (*psVar3 != 0) {
          bVar5 = 0;
          if (local_5 != 0) {
            do {
              iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x198))) + 0x25f4 +
                              ((uint)bVar5 + iVar2 * 0x989) * 4)));
              if ((iVar6 == *local_c) || (iVar6 - 1000000 == *local_c)) goto LAB_00a725af;
              bVar5 = bVar5 + 1;
            } while (bVar5 < local_5);
          }
          uVar4 = (uint)local_5;
          *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x198))) + 0x25f4 + (iVar2 * 0x989 + uVar4) * 4))) = *local_c;
          local_5 = local_5 + 1;
          *((undefined1 *)GEN_TOP((iVar2 * 0x2624 + uVar4 + 0x2614 + *((int *)GEN_TOP(((int)this + 0x198)))))) = *local_10
          ;
        }
LAB_00a725af: ;
        local_c = local_c + 1;
        local_10 = local_10 + 1;
        psVar3 = psVar3 + 1;
        local_1c = local_1c - 1;
      } while (local_1c != 0);
      *((uint *)GEN_TOP((iVar2 * 0x2624 + 0x2618 + *((int *)GEN_TOP(((int)this + 0x198)))))) = (uint)local_5;
      *((int *)GEN_TOP(((int)this + 0x1f0))) = *((int *)GEN_TOP(((int)this + 0x1f0))) + 1;
      local_14 = local_14 + 1;
    } while (local_14 < param_2);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x214)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x214))) = 0;
  }
  if (*((uint *)GEN_TOP(((int)this + 0x1ec))) < *((uint *)GEN_TOP(((int)this + 0x1e8)))) {
    uVar4 = F_00a72650(this GEN_EDX_ARG);
    return uVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1f0))) = 0;
  uVar4 = F_00a72220(this GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00a72650 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a72650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa72650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * this_00;
  byte bVar4;
  uint uVar5;
  
  piVar2 = ((int *)GEN_TOP(F_0052fba0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,((char *)REFP(0x10e7820)))));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  uVar5 = *((int *)GEN_TOP(((int)this + 0x1e8))) - *((int *)GEN_TOP(((int)this + 0x1ec)));
  if (uVar3 < uVar5) {
    uVar5 = uVar3;
  }
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    this_00 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,uVar5,0);
    this_00[5] = uVar5;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e78d4));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xa724b0));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x214))) = this_00;
  if (*((int *)GEN_TOP(((int)this + 0x210))) == 0) {
    uVar3 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x68);
    *((uint *)GEN_TOP(((int)this + 0x210))) = uVar3;
  }
  bVar4 = 0;
  if (uVar5 != 0) {
    uVar3 = 0;
    do {
      iVar1 = *((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x1ec))) * 4 + 0xa4)));
      *((int *)GEN_TOP(((int)this + 0x1ec))) = *((int *)GEN_TOP(((int)this + 0x1ec))) + 1;
      F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x214))) GEN_EDX_ARG,uVar3,
                   *((undefined4 *)GEN_TOP((iVar1 * 0x2624 + 0x25ec + *((int *)GEN_TOP(((int)this + 0x198)))))));
      bVar4 = bVar4 + 1;
      uVar3 = (uint)bVar4;
    } while (uVar3 < uVar5);
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x210))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x210))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x214))));
  return uVar5;
}

/* ref: FUN_00a72750 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a72750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa72750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7978));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 0xc))) - iVar1) / 0xc) * 0xc,400);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return;
}

/* ref: FUN_00a727b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a727b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa727b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x30)));
  *((uint *)GEN_TOP(((int)this + 0x30))) = uVar4 + param_2;
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (param_2 != 0) {
    do {
      (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + (*(uint *)(gen_frame + 0x14)) * 4))) + 4))) + 4)));
      (*(bool *)(gen_frame + 0xc)) = ((&REFG(undefined, 0x14ab343))[(int)(uVar4 >> 3)] &
                 (byte)(1 << ((char)uVar4 + (char)(uVar4 >> 3) * -8 & 0x1fU))) != 0;
      puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,0x191)));
      *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
      puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
      puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
      *(undefined2 *)(puVar2 + 5) = 0;
      if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar2[3] = (*(undefined4 *)(gen_frame + 0x8));
        *(bool *)(puVar2 + 4) = (*(bool *)(gen_frame + 0xc));
      }
      F_00a90200(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar2,0);
      uVar3 = (*(uint *)(gen_frame + 0x14)) + 1;
      uVar4 = uVar4 + 1;
      (*(uint *)(gen_frame + 0x14)) = uVar3;
    } while (uVar3 < param_2);
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x28)));
  uVar4 = (*(uint *)(gen_frame + 0x14));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  }
  if (*((uint *)GEN_TOP(((int)this + 0x30))) < 0xc9) {
    uVar4 = F_00a728c0(this GEN_EDX_ARG);
  }
  else {
    bVar5 = 0x67 < *((uint *)GEN_TOP(((int)this + 0x2c)));
    uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar5);
    if (bVar5) {
      piVar1 = *(int * PTR32 *)this;
      *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 2;
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,5);
        return uVar4;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00a728c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a728c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa728c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined4 * this_00;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x127)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  if (0xc9 < *((int *)GEN_TOP(((int)this + 0x30))) + uVar2) {
    uVar2 = 0xc9 - *((int *)GEN_TOP(((int)this + 0x30)));
  }
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    this_00 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,uVar2,0);
    this_00[5] = uVar2;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e7904));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xa727b0));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x28))) = this_00;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,uVar3,*((int *)GEN_TOP(((int)this + 0x30))) + uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x28))));
  return uVar2;
}

/* ref: FUN_00a72970 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a72970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa72970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  ulonglong uVar5;
  
  if (*((int *)GEN_TOP(((int)this + 0x68))) != 0) {
    uVar3 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x127);
    if (uVar3 != 0) {
      piVar4 = ((int *)GEN_TOP(F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x127)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x4c))))(piVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x68))));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x6c))) != 0) {
    uVar3 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x127);
    if (uVar3 != 0) {
      piVar4 = ((int *)GEN_TOP(F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x127)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x4c))))(piVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x6c))));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x6c)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
    }
  }
  uVar5 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG);
  uVar3 = (uint)uVar5;
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  if (iVar2 != 0) {
    uVar5 = F_00429760(iVar2,((*((int *)GEN_TOP(((int)this + 0xc))) - iVar2) / 0x14) * 0x14,0x191);
    uVar3 = (uint)uVar5;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return uVar3;
}

/* ref: FUN_00a72a70 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a72a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa72a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
  if (*piVar5 != 0) {
    F_00a92f80(*piVar5 GEN_EDX_FWD,3);
    *piVar5 = 0;
  }
  *(undefined2 *)(piVar5 + 1) = 0;
  *((undefined1 *)GEN_TOP(((int)piVar5 + 6))) = 0;
  *((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 5))) = (char)param_1;
  *((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 6))) = (char)param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x38)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x34)));
  if (iVar1 != iVar4) {
    (*(int *)(gen_frame + 0x0)) = 0;
    F_00c46e20(iVar1,iVar4,0);
    *((int *)GEN_TOP(((int)this + 0x38))) = (*(int *)(gen_frame + 0x0)) + iVar1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  if (param_2 == 9) {
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x1f;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
    uVar3 = 0x1f;
    if (uVar2 < 0x1f) {
      uVar3 = uVar2;
    }
    uVar2 = 0;
    if (uVar3 != 0) {
      iVar4 = *((int *)GEN_TOP(((int)this + 0x30))) + 9 + param_1 * 0x28;
      do {
        ((int *)(gen_frame + 0x4))[(int)(uVar2)] = iVar4;
        uVar2 = uVar2 + 1;
        iVar4 = iVar4 + 1;
      } while (uVar2 < uVar3);
    }
    piVar5 = ((int *)(gen_frame + 0x4));
    iVar4 = param_1;
  }
  else {
    uVar3 = *((uint *)GEN_TOP(((int)this + 0x2c)));
    iVar4 = 0;
    piVar5 = &(*(int *)(gen_frame + 0x0));
    (*(int *)(gen_frame + 0x0)) = param_2 + param_1 * 0x28;
  }
  uVar3 = F_00a6bb10(this GEN_EDX_ARG,0,uVar3,piVar5,iVar4);
  return uVar3;
}

/* ref: FUN_00a72b90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a72b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa72b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_00a72450(this GEN_EDX_FWD);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x34)));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x3c))) - iVar1 >> 2) * 4,800);
    uVar2 = (uint)uVar3;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  return uVar2;
}

/* ref: FUN_00a72bf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a72bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa72bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 * puVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  ushort uVar9;
  char local_5;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
  if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*piVar2 != 0)) {
    if (*piVar2 != 0) {
      F_00a92f80(*piVar2 GEN_EDX_FWD,3);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x28))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x28))) != 0) {
    F_00406ad0(*((int *)GEN_TOP(((int)this + 0x28))));
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  }
  puVar5 = ((undefined4 *)GEN_TOP(F_00406b90(0x30,0,0)));
  if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar5 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *puVar5 = 0;
    *(undefined2 *)(puVar5 + 1) = 0;
    *((undefined1 *)GEN_TOP(((int)puVar5 + 6))) = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x28))) = puVar5;
  uVar6 = F_00ab21a0((uint)REFG(undefined1, 0x14ab0d4));
  if (uVar6 == 0) {
LAB_00a72ce0: ;
    uVar9 = 0;
  }
  else {
    cVar7 = *((char *)GEN_TOP((uVar6 + 0x3e)));
    uVar6 = F_00ab21a0(0x10);
    if (((uVar6 == 0) || (cVar1 = *((char *)GEN_TOP((uVar6 + 0x43))), cVar1 < '\0')) || ('\x12' < cVar1))
    goto LAB_00a72ce0;
    uVar9 = *(ushort *)(&REFG(undefined, 0x14ab0d6) + cVar1 * 2);
    if (((cVar7 == *((char *)GEN_TOP((uVar6 + 0x3e)))) && (REFG(undefined2, 0x14ab148) != 0)) && (REFG(undefined2, 0x14ab148) < uVar9)) {
      uVar9 = REFG(undefined2, 0x14ab148);
    }
  }
  uVar6 = F_00ab21a0((uint)REFG(undefined1, 0x14ab0d4));
  if (uVar6 != 0) {
    cVar7 = *((char *)GEN_TOP((uVar6 + 0x3e)));
    uVar6 = F_00ab21a0(0x11);
    if (((uVar6 != 0) && (cVar1 = *((char *)GEN_TOP((uVar6 + 0x43))), -1 < cVar1)) && (cVar1 < '\x13')) {
      uVar3 = *(ushort *)(&REFG(undefined, 0x14ab0d6) + cVar1 * 2);
      if (((cVar7 == *((char *)GEN_TOP((uVar6 + 0x3e)))) && (REFG(undefined2, 0x14ab148) != 0)) && (REFG(undefined2, 0x14ab148) < uVar3)) {
        uVar3 = REFG(undefined2, 0x14ab148);
      }
      goto LAB_00a72d42;
    }
  }
  uVar3 = 0;
LAB_00a72d42: ;
  cVar7 = '\0';
  local_5 = '\0';
  iVar8 = 0;
  do {
    uVar6 = F_00ab2f00(iVar8);
    if (uVar6 == 0) {
      uVar4 = 0;
LAB_00a72d68: ;
      local_5 = local_5 + '\x01';
    }
    else {
      uVar4 = (ushort)*((byte *)GEN_TOP((uVar6 + 5)));
      if (uVar4 <= uVar9) goto LAB_00a72d68;
    }
    if (uVar4 <= uVar3) {
      cVar7 = cVar7 + '\x01';
    }
    iVar8 = iVar8 + 1;
    if (0x27 < iVar8) {
      *((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 8))) = local_5;
      *((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 9))) = local_5;
      uVar6 = *((uint *)GEN_TOP(((int)this + 0x28)));
      *((char *)GEN_TOP((uVar6 + 10))) = cVar7;
      *((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 0xb))) = cVar7;
      return uVar6;
    }
  } while( true );
}

/* ref: FUN_00a72db0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a72db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa72db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7978));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0;
  F_00a91f10(((undefined4 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,0x10);
  return (uint)this;
}

/* ref: FUN_00a72de0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a72de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa72de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x920, 0, 4);
  float fVar1;
  undefined1 uVar2;
  int * piVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  undefined * pvVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined1 * puVar14;
  bool bVar15;
  undefined4 uVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x918)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x91c));
  F_00c48350(((uint *)(gen_frame + 0x18)),0,0x400);
  F_00c48350(((uint *)(gen_frame + 0x418)),0,0x400);
  F_00c48350(((undefined1 *)(gen_frame + 0x818)),0,0x100);
  if (*((int *)GEN_TOP(((int)this + 4))) != *((int *)GEN_TOP(((int)this + 8)))) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  }
  piVar3 = REFG(int * PTR32, 0x1379694);
  (*(uint *)(gen_frame + 0x10)) = 100;
  if ((REFG(int * PTR32, 0x1379694) != ((int *)GEN_TOP(0x0))) &&
     (uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0xd4))))(REFG(int * PTR32, 0x1379694) GEN_EDX_ARG), uVar8 != 0)) {
    uVar16 = 0x16c;
    pvVar9 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xd4))))(piVar3 GEN_EDX_ARG)));
    bVar5 = F_00b7aac0(pvVar9 GEN_EDX_ARG,uVar16);
    if ((bVar5 != 0) &&
       (pvVar9 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xd4))))(piVar3 GEN_EDX_ARG))), pvVar9 != ((undefined *)GEN_TOP(0x0)))) {
      uVar7 = F_00b7abd0(pvVar9 GEN_EDX_ARG,0x16c);
      (*(uint *)(gen_frame + 0x10)) = (uint)(ushort)(100 - uVar7);
    }
  }
  uVar8 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
  if ((uVar8 == 0) || (uVar8 = F_00ab2690(*((undefined4 *)GEN_TOP((uVar8 + 0x14)))), uVar8 == 0)) {
    uVar8 = F_00ab2690(2);
  }
  uVar13 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  uVar10 = F_00aafe10();
  if (uVar10 != 0) {
    do {
      uVar10 = F_00ab2690(uVar13);
      if (((uVar10 != 0) && (*((char *)GEN_TOP((uVar10 + 0x35))) != '\0')) &&
         (bVar5 = *((byte *)GEN_TOP((uVar10 + 0x33))), bVar5 != 0)) {
        iVar12 = (int)(short)(*((short *)GEN_TOP((uVar10 + 0x2e))) - *((short *)GEN_TOP((uVar8 + 0x2e))));
        iVar12 = iVar12 * iVar12;
        iVar11 = (int)(short)(*((short *)GEN_TOP((uVar10 + 0x30))) - *((short *)GEN_TOP((uVar8 + 0x30))));
        iVar11 = iVar11 * iVar11;
        (*(float *)(gen_frame + 0x14)) = gen_bits2f(iVar12);
        (*(float *)(gen_frame + 0x14)) = gen_bits2f(iVar11);
        fVar1 = (float)((float10)iVar12 + (float10)iVar11);
        (*(float *)(gen_frame + 0x14)) = fVar1;
        fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar1))));
        (*(float *)(gen_frame + 0x14)) = fVar1;
        (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x14)) + 2)) = gen_x87_cw;
        (*(float *)(gen_frame + 0x14)) = gen_bits2f(CONCAT22(gen_x87_cw,(short)(uint)gen_fl2bits(fVar1)));
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4)) + 4)) = gen_x87_cw | 0xc00;
        (*(undefined2 *)((char *)&(*(longlong *)(gen_frame + 0x4)) + 4)) = (undefined2)(gen_x87_cw | 0xc00);
        gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(longlong *)(gen_frame + 0x4)) + 4)));
        (*(longlong *)(gen_frame + 0x4)) = (longlong)TRUNC((double)fVar1 * REFG(double, 0x1088108));
        lVar4 = (*(longlong *)(gen_frame + 0x4));
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4)) + 0)) = (uint)(longlong)TRUNC((double)fVar1 * REFG(double, 0x1088108));
        gen_set_x87_cw((unsigned short)gen_x87_cw);
        uVar2 = *((undefined1 *)GEN_TOP((uVar10 + 0x34)));
        ((uint *)(gen_frame + 0x418))[(int)(bVar5)] = (((uint)(*(longlong *)(gen_frame + 0x4)) + 100) * (int)(short)(*(uint *)(gen_frame + 0x10))) / 100;
        ((undefined1 *)(gen_frame + 0x818))[(int)(bVar5)] = uVar2;
        ((uint *)(gen_frame + 0x18))[(int)(bVar5)] = (*(uint *)(gen_frame + 0xc));
        uVar13 = (*(uint *)(gen_frame + 0xc));
        (*(longlong *)(gen_frame + 0x4)) = lVar4;
      }
      uVar13 = uVar13 + 1;
      (*(uint *)(gen_frame + 0xc)) = uVar13;
      uVar10 = F_00aafe10();
    } while (uVar13 < uVar10);
  }
  puVar14 = ((undefined1 *)(gen_frame + 0x818));
  iVar11 = 0;
  (*(uint *)(gen_frame + 0x10)) = 0x100;
  do {
    uVar8 = *((uint *)GEN_TOP(((int)((uint *)(gen_frame + 0x18)) + iVar11)));
    if (uVar8 != 0) {
      bVar5 = (byte)uVar8;
      bVar15 = ((&REFG(undefined1, 0x14b4ed0))[(int)(uVar8 >> 3)] & (byte)(1 << (bVar5 & 7))) != 0;
      if (bVar15) {
        if (bVar5 != 0) {
          uVar13 = 0;
          do {
            if ((&REFG(undefined1, 0x14ab29f))[(int)(uVar13)] == bVar5) {
              cVar6 = '\x01';
              goto LAB_00a73087;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < 3);
        }
        cVar6 = '\0';
LAB_00a73087: ;
        (*(uint *)(gen_frame + 0x0)) = uVar8;
        (*(undefined1 *)((char *)&(*(longlong *)(gen_frame + 0x4)) + 6)) = bVar15;
        (*(undefined1 *)((char *)&(*(longlong *)(gen_frame + 0x4)) + 5)) = cVar6;
        if (cVar6 == '\0') {
          uVar8 = *((uint *)GEN_TOP(((int)((uint *)(gen_frame + 0x418)) + iVar11)));
          (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4)) + 0)) = uVar8;
        }
        else {
          uVar8 = *((uint *)GEN_TOP(((int)((uint *)(gen_frame + 0x418)) + iVar11))) >> 1;
          (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4)) + 0)) = uVar8;
        }
        (*(undefined1 *)((char *)&(*(longlong *)(gen_frame + 0x4)) + 4)) = *puVar14;
        (*(longlong *)(gen_frame + 0x4)) = CONCAT35(CONCAT21(CONCAT11((*(undefined1 *)((char *)&(*(longlong *)(gen_frame + 0x4)) + 7)),1),cVar6),CONCAT14(*puVar14,uVar8));
        F_00a933f0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
      }
    }
    iVar11 = iVar11 + 4;
    puVar14 = puVar14 + 1;
    iVar12 = (*(uint *)(gen_frame + 0x10)) - 1;
    (*(uint *)(gen_frame + 0x10)) = iVar12;
    if (iVar12 == 0) {
      return (uint)((undefined *)GEN_TOP(((int)this + 4)));
    }
  } while( true );
}

/* ref: FUN_00a73110 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a73110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa73110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  F_0042b630((int)this + 0x14 GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  F_00a91df0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0xc9);
  return (uint)this;
}

/* ref: FUN_00a73150 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a73150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa73150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  if (*((int *)GEN_TOP(((int)this + 0x68))) != 0) {
    uVar3 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x127);
    if (uVar3 != 0) {
      piVar4 = ((int *)GEN_TOP(F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x127)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x4c))))(piVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x68))));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x6c))) != 0) {
    uVar3 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x127);
    if (uVar3 != 0) {
      piVar4 = ((int *)GEN_TOP(F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x127)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x4c))))(piVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x6c))));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x6c)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
    }
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 4))) != iVar2) {
    uVar3 = F_00a8e660(iVar2,iVar2,*((int *)GEN_TOP(((int)this + 4))));
    *((uint *)GEN_TOP(((int)this + 8))) = uVar3;
  }
  uVar3 = F_0042aca0((int)this + 0x14 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  return uVar3;
}

/* ref: FUN_00a73230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a73230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa73230u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  byte bVar4;
  undefined2 * puVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = *((int *)GEN_TOP(((int)this + 0x70)));
  uVar9 = 0;
  (*(int * PTR32 *)(gen_frame + 0x14)) = this;
  (*(int *)(gen_frame + 0x18)) = iVar8;
  *((uint *)GEN_TOP(((int)this + 0x70))) = iVar8 + param_2;
  if (param_2 != 0) {
    do {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + uVar9 * 4))) + 4)));
      if (*((int *)GEN_TOP((iVar1 + 4))) != 0) {
        (*(int *)(gen_frame + 0x0)) = *((int *)GEN_TOP((iVar1 + 4)));
        uVar7 = uVar9 + iVar8 >> 3;
        (*(undefined2 *)(gen_frame + 0x6)) = 0;
        (*(undefined2 *)(gen_frame + 0xa)) = 0;
        (*(short *)(gen_frame + 0x4)) = (short)(*(int *)(gen_frame + 0x18)) + (short)uVar9;
        (*(byte *)(gen_frame + 0xe)) = (*(byte *)(gen_frame + 0xe)) & 0xfc ^
                   ((&REFG(undefined, 0x14ab343))[(int)(uVar7)] &
                   (byte)(1 << ((char)(uVar9 + iVar8) + (char)uVar7 * -8 & 0x1fU))) != 0 ^
                   *((char *)GEN_TOP((iVar1 + 0xe))) * '\x02' & 2U;
        (*(undefined2 *)(gen_frame + 0x8)) = *((undefined2 *)GEN_TOP((iVar1 + 8)));
        puVar5 = ((undefined2 *)GEN_TOP(F_00ab3080((uint)*((byte *)GEN_TOP((iVar1 + 0xd))))));
        if (puVar5 != ((undefined2 *)GEN_TOP(0x0))) {
          (*(undefined2 *)(gen_frame + 0xa)) = *puVar5;
        }
        uVar7 = F_00ab1c90(*((undefined4 *)GEN_TOP((iVar1 + 8))));
        if (uVar7 != 0) {
          (*(undefined2 *)(gen_frame + 0x6)) = *((undefined2 *)GEN_TOP((uVar7 + 0x1c)));
        }
        bVar4 = *((byte *)GEN_TOP((iVar1 + 0xc)));
        cVar6 = '\0';
        if (0x32 < bVar4) {
          if (bVar4 < 0x7d) {
            if (bVar4 < 0x6f) {
              if (bVar4 < 0x60) {
                cVar6 = '\x02' - (bVar4 < 0x42);
              }
              else {
                cVar6 = '\x03';
              }
            }
            else {
              cVar6 = '\x04';
            }
          }
          else {
            cVar6 = '\x05';
          }
        }
        if (0x32 < bVar4) {
          bVar4 = 0x32;
        }
        (*(char *)(gen_frame + 0xd)) = cVar6;
        (*(byte *)(gen_frame + 0xc)) = bVar4;
        F_00a93200((*(int * PTR32 *)(gen_frame + 0x14)) + 1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)));
        iVar8 = (*(int *)(gen_frame + 0x18));
        this = (*(int * PTR32 *)(gen_frame + 0x14));
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_2);
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68)));
  uVar9 = param_2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *((int *)GEN_TOP(((int)this + 0x68))) = 0;
  }
  if (*((uint *)GEN_TOP(((int)this + 0x70))) < 0xc9) {
    uVar9 = F_00a733a0(this GEN_EDX_ARG);
  }
  else {
    *((int *)GEN_TOP(((int)this + 0x74))) = 2;
    piVar3 = *(int * PTR32 *)this;
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG,6);
      return uVar9;
    }
  }
  return uVar9;
}

/* ref: FUN_00a733a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a733a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa733a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined4 * this_00;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x127)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  if (0xc9 < *((int *)GEN_TOP(((int)this + 0x70))) + uVar2) {
    uVar2 = 0xc9 - *((int *)GEN_TOP(((int)this + 0x70)));
  }
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    this_00 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,uVar2,0);
    this_00[5] = uVar2;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e7910));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xa73230));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68))) = this_00;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,uVar3,*((int *)GEN_TOP(((int)this + 0x70))) + uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x68))));
  return uVar2;
}

/* ref: FUN_00a73450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a73450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa73450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_1;
  F_00a66c10(this GEN_EDX_FWD);
  F_00a72bf0(this GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x24))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00a73480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a73480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa73480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint * puVar2;
  int * piVar3;
  uint uVar4;
  
  F_00a4ffd0();
  uVar1 = 0;
  uVar4 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xf8))) != 0) {
    puVar2 = *((uint * PTR32 *)GEN_TOP(((int)this + 0x100)));
    do {
      if ((uint)(ushort)param_1 == *puVar2) {
        uVar4 = F_0042a990(*((uint * PTR32 *)GEN_TOP(((int)this + 0x100))) + uVar1 * 0x47 + 1 GEN_EDX_ARG);
        break;
      }
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x47;
    } while (uVar1 < *((uint *)GEN_TOP(((int)this + 0xf8))));
  }
  *((ushort *)GEN_TOP(((int)this + 0x39f8))) = (ushort)param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x39fc))) = 3;
  F_00a94c50(((undefined *)GEN_TOP(((int)this + 0x17c))) GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x17c))) = (uint)*((ushort *)GEN_TOP(((int)this + 0x39f8)));
  if (uVar4 == 0) {
    uVar4 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328) GEN_EDX_ARG);
  }
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x180))) GEN_EDX_ARG,uVar4);
  *((undefined4 *)GEN_TOP(((int)this + 0x2b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2b4))) = 0x186a1;
  *((undefined2 *)GEN_TOP(((int)this + 0x290))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x448))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2ac))) = 0xeffb;
  uVar1 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328) GEN_EDX_ARG);
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x3a00))) GEN_EDX_ARG,uVar1);
  *((undefined4 *)GEN_TOP(((int)this + 0xc30))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x3158))) = 0;
  F_0042aca0((int)this + 0x315c GEN_EDX_ARG);
  *((short *)GEN_TOP(((int)this + 0x3158))) = *((short *)GEN_TOP(((int)this + 0x3158))) + 1;
  F_0042aca0((uint)*((ushort *)GEN_TOP(((int)this + 0x3158))) * 0x58 + 0x315c + (int)this GEN_EDX_ARG);
  uVar1 = F_00ab0230(0x233,(uint)*((ushort *)GEN_TOP(((int)this + 0x3158))) * 0x58 + 0x315c + (int)this);
  *((short *)GEN_TOP(((int)this + 0x3158))) = *((short *)GEN_TOP(((int)this + 0x3158))) + 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 0;
  if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
  }
  else {
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0)));
  }
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG,0xc);
  }
  return uVar1;
}

/* ref: FUN_00a735f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a735f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa735f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint * this_00;
  int * piVar1;
  undefined * this_01;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  byte bVar5;
  uint uVar6;
  undefined3 extraout_var = 0;
  undefined4 * puVar7;
  
  if (*((int *)GEN_TOP(((int)this + 0x5c))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x58)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x5c))));
    }
    puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x5c)));
    if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar7)))(puVar7 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
    }
  }
  this_01 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8)));
  uVar6 = F_0042a990(param_1 GEN_EDX_ARG);
  uVar6 = F_0052fba0(this_01 GEN_EDX_ARG,uVar6);
  *((uint *)GEN_TOP(((int)this + 0x58))) = uVar6;
  if (uVar6 != 0) {
    F_0042ccf0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
    iVar2 = *((int *)GEN_TOP(((int)this + 0x60)));
    this_00 = ((uint *)GEN_TOP(((int)this + 0x60)));
    if (iVar2 != *((int *)GEN_TOP(((int)this + 100)))) {
      F_00c46e20(iVar2,*((int *)GEN_TOP(((int)this + 100))),0);
      *((int *)GEN_TOP(((int)this + 100))) = iVar2;
    }
    F_0074cbd0(this_00 GEN_EDX_ARG,param_3);
    if (param_3 != 0) {
      param_1 = param_3;
      puVar7 = param_2;
      do {
        puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 100)));
        if ((puVar7 < puVar3) && (puVar4 = ((undefined4 *)GEN_TOP(*this_00)), puVar4 <= puVar7)) {
          if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68)))) {
            F_0074d4f0(this_00 GEN_EDX_ARG,1);
          }
          if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 100))) != ((undefined4 *)GEN_TOP(0x0))) {
            **((undefined4 * PTR32 *)GEN_TOP(((int)this + 100))) =
                 *((undefined4 *)GEN_TOP((*this_00 + ((int)puVar7 - (int)((int)(uintptr_t)puVar4) >> 2) * 4)));
          }
        }
        else {
          if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68)))) {
            F_0074d4f0(this_00 GEN_EDX_ARG,1);
          }
          if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 100))) != ((undefined4 *)GEN_TOP(0x0))) {
            **((undefined4 * PTR32 *)GEN_TOP(((int)this + 100))) = *puVar7;
          }
        }
        *((int *)GEN_TOP(((int)this + 100))) = *((int *)GEN_TOP(((int)this + 100))) + 4;
        puVar7 = puVar7 + 1;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x58))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this + 0x70))) = uVar6;
    bVar5 = F_00a6dec0(this GEN_EDX_ARG);
    return CONCAT31(extraout_var,bVar5);
  }
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG,0,0,0);
  return uVar6;
}

/* ref: FUN_00a73730 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a73730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa73730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int iVar1;
  
  F_00a69ca0(this GEN_EDX_FWD);
  if (REFG(int, 0x1488344) != 0) {
    iVar1 = (int)this + 0x1c0;
    this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
    F_006ff0a0(this_00 GEN_EDX_ARG,iVar1);
  }
  F_00a950c0(((undefined *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x1c8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1cc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1d4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 500))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1f8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1fc))) = 0;
  return;
}

/* ref: FUN_00a737b0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a737b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa737b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x344, 12, 4);
  undefined * this_00;
  undefined4 * puVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x33c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x340));
  F_0042b630(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_FWD);
  F_0042b630(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
  F_006ea2d0(*((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x1d0))) * 4 + 0x7c))) * 0x2624 + 0x54 +
               *((int *)GEN_TOP(((int)this + 0x198))),((undefined1 *)(gen_frame + 0x104)),((undefined1 *)(gen_frame + 0x5c)));
  F_0042e430(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG,&REFG(undefined, 0x10e77f4));
  iVar5 = 0x18;
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG);
  uVar2 = F_0042ce40(((undefined1 *)(gen_frame + 0x8)),((char *)REFP(0x10e77fc)),REFG(undefined * PTR32, 0x132372c),uVar2);
  F_0042ccf0(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  this_00 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8)));
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG);
  uVar2 = F_0052fba0(this_00 GEN_EDX_ARG,uVar2);
  if (uVar2 == 0) {
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
    uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG);
    uVar2 = F_0042ce40(((undefined1 *)(gen_frame + 0x8)),((char *)REFP(0x10e7804)),REFG(undefined * PTR32, 0x132372c),uVar4,uVar2);
    F_0042ccf0(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x4)) = F_00ab0210(uVar2);
LAB_00a739c5: ;
    iVar5 = 0;
LAB_00a739c7: ;
    if ((*(uint *)(gen_frame + 0x4)) == 0) {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x204)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
        *((undefined4 *)GEN_TOP(((int)this + 0x204))) = 0;
      }
      *((int *)GEN_TOP(((int)this + 0x1d0))) = *((int *)GEN_TOP(((int)this + 0x1d0))) + 1;
      if (*((uint *)GEN_TOP(((int)this + 0x1d0))) < (uint)*((ushort *)GEN_TOP(((int)this + 0x78)))) {
        *((undefined1 *)GEN_TOP(((int)this + 0x1d5))) = 1;
      }
      else {
        *((undefined2 *)GEN_TOP(((int)this + 0x1d4))) = 0;
        *((undefined1 *)GEN_TOP(((int)this + 0x194))) = 1;
        *((undefined1 *)GEN_TOP(((int)this + 0x1dd))) = 0;
      }
      goto LAB_00a7392b;
    }
  }
  else {
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x4)) = F_00ab0210(uVar2);
    if ((*(uint *)(gen_frame + 0x4)) < 0x19) goto LAB_00a739c5;
    uVar2 = (*(uint *)(gen_frame + 0x4)) - 0x18;
    (*(uint *)(gen_frame + 0x4)) = uVar2;
    if (uVar2 < 0x19) goto LAB_00a739c7;
    (*(uint *)(gen_frame + 0x4)) = 0x18;
  }
  (*(uint *)(gen_frame + 0x0)) = 100;
  puVar3 = &(*(uint *)(gen_frame + 0x0));
  if ((*(uint *)(gen_frame + 0x4)) < 0x65) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar2 = *puVar3;
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      ((int *)(gen_frame + 0x1ac))[(int)(uVar4)] = uVar4 + iVar5;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  F_00a735f0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x158)),((int *)(gen_frame + 0x1ac)),uVar2);
LAB_00a7392b: ;
  F_0042c880(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG);
  uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG);
  return (uint)uVar6;
}

/* ref: FUN_00a73a30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a73a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa73a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  F_00a94f60(((undefined *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD);
  *((undefined2 *)GEN_TOP(((int)this + 0x5ec))) = 0;
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x5f0)));
  iVar2 = 0x18;
  do {
    uVar1 = F_0042e430(this_00 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0;
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)));
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0xfac))) = 0;
  return uVar1;
}

/* ref: FUN_00a73a90 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a73a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa73a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x344, 12, 4);
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  int iVar6;
  undefined * pvVar7;
  ulonglong uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x33c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x340));
  F_0042b630(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_FWD);
  F_0042b630(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
  F_006ea2d0((int)this + 0xe44,((undefined1 *)(gen_frame + 0x104)),((undefined1 *)(gen_frame + 0x5c)));
  F_0042e430(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG,((char *)REFP(0x10e7848)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG);
  uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x8)),((char *)REFP(0x10e7854)),REFG(undefined * PTR32, 0x132372c),uVar3);
  F_0042ccf0(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG,uVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  pvVar7 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG);
  uVar3 = F_0052fba0(pvVar7 GEN_EDX_ARG,uVar3);
  if (uVar3 == 0) {
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
    uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG);
    uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x8)),((char *)REFP(0x10e785c)),REFG(undefined * PTR32, 0x132372c),uVar5,uVar3);
    F_0042ccf0(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG,uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x4)) = F_00ab0210(uVar3);
LAB_00a73c84: ;
    if ((*(uint *)(gen_frame + 0x4)) == 0) {
LAB_00a73c8c: ;
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xe34)));
      *((undefined4 *)GEN_TOP(((int)this + 0xe30))) = 0;
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
        *((undefined4 *)GEN_TOP(((int)this + 0xe34))) = 0;
      }
      *((undefined2 *)GEN_TOP(((int)this + 0x5ec))) = 0;
      pvVar7 = ((undefined *)GEN_TOP(((int)this + 0x5f0)));
      iVar6 = 0x18;
      do {
        F_0042e430(pvVar7 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
        *((undefined4 *)GEN_TOP(((int)pvVar7 + 0x54))) = 0;
        pvVar7 = ((undefined *)GEN_TOP(((int)pvVar7 + 0x58)));
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xe9c)));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,0x14);
      }
      goto LAB_00a73be5;
    }
  }
  else {
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x4)) = F_00ab0210(uVar3);
    if ((*(uint *)(gen_frame + 0x4)) == 0) goto LAB_00a73c8c;
    if ((*(uint *)(gen_frame + 0x4)) < 0x19) goto LAB_00a73c84;
    (*(uint *)(gen_frame + 0x4)) = 0x18;
  }
  (*(uint *)(gen_frame + 0x0)) = 100;
  puVar4 = &(*(uint *)(gen_frame + 0x0));
  if ((*(uint *)(gen_frame + 0x4)) < 0x65) {
    puVar4 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar3 = *puVar4;
  uVar5 = 0;
  if (uVar3 != 0) {
    do {
      ((uint *)(gen_frame + 0x1ac))[(int)(uVar5)] = uVar5;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  F_00a735f0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x158)),((uint *)(gen_frame + 0x1ac)),uVar3);
LAB_00a73be5: ;
  F_0042c880(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG);
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG);
  return (uint)uVar8;
}

/* ref: FUN_00a73d10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a73d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa73d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  F_0042aca0((int)this + 8 GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x5c)));
  if (uVar1 != *((uint *)GEN_TOP(((int)this + 0x60)))) {
    *((uint *)GEN_TOP(((int)this + 0x60))) = uVar1;
  }
  *((undefined2 *)GEN_TOP(((int)this + 0x6c))) = 0;
  return uVar1;
}

/* ref: FUN_00a73d80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a73d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa73d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x74)));
  *(int * PTR32 *)this = param_1;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      if (param_1 != ((int *)GEN_TOP(0x0))) {
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD,6);
        return uVar1;
      }
    }
    else {
      *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 1;
      uVar1 = F_00a733a0(this GEN_EDX_ARG);
    }
  }
  return uVar1;
}

/* ref: FUN_00a73dc0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a73dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa73dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_GS(0x9c, 4, 4);
  short sVar1;
  ushort uVar2;
  short * psVar3;
  short * psVar4;
  undefined4 * puVar5;
  uint * puVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint * puVar10;
  ushort * puVar11;
  uint uVar12;
  short * psVar13;
  uint uVar14;
  int * piVar15;
  short * psVar16;
  uint * puVar17;
  undefined4 uVar18;
  int * piVar19;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x94)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x98));
  ((uint *)(gen_frame + 0x0))[1] = param_3;
  (*(int * PTR32 *)(gen_frame + 0x10)) = this;
  *((undefined1 *)GEN_TOP(((int)this + 0x48))) = 1;
  ((uint *)(gen_frame + 0x0))[2] = 0;
  piVar15 = this;
  if (param_2 != 0) {
    do {
      psVar16 = *((short * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + ((uint *)(gen_frame + 0x0))[2] * 4))) + 4)));
      (*(short * PTR32 *)(gen_frame + 0xc)) = psVar16;
      (*(byte *)(gen_frame + 0x17)) = 0;
      uVar14 = ((uint *)(gen_frame + 0x0))[2];
      this = piVar15;
      if ((char)psVar16[200] != '\0') {
        do {
          psVar13 = psVar16 + (uint)(*(byte *)(gen_frame + 0x17)) * 2;
          psVar3 = ((short *)GEN_TOP(piVar15[0xe]));
          if ((psVar13 < psVar3) && (psVar4 = ((short *)GEN_TOP(piVar15[0xd])), psVar4 <= psVar13)) {
            if (psVar3 == ((short *)GEN_TOP(piVar15[0xf]))) {
              iVar8 = (int)psVar3 - (int)((int)(uintptr_t)psVar4) >> 2;
              if (iVar8 == -1) goto LAB_00a73f99;
              uVar9 = iVar8 + 1;
              uVar14 = piVar15[0xf] - (int)((int)(uintptr_t)psVar4) >> 2;
              if (uVar14 < uVar9) {
                if (-(uVar14 >> 1) - 1 < uVar14) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = uVar14 + (uVar14 >> 1);
                }
                if (uVar14 < uVar9) {
                  uVar14 = uVar9;
                }
                F_00a93930(piVar15 + 0xd GEN_EDX_FWD,uVar14);
                psVar16 = (*(short * PTR32 *)(gen_frame + 0xc));
              }
            }
            if (((undefined4 *)GEN_TOP(piVar15[0xe])) != ((undefined4 *)GEN_TOP(0x0))) {
              *((undefined4 *)GEN_TOP(piVar15[0xe])) =
                   *((undefined4 *)GEN_TOP((piVar15[0xd] + ((int)psVar13 - (int)((int)(uintptr_t)psVar4) >> 2) * 4)));
            }
          }
          else {
            if (psVar3 == ((short *)GEN_TOP(piVar15[0xf]))) {
              iVar8 = (int)psVar3 - piVar15[0xd] >> 2;
              if (iVar8 == -1) goto LAB_00a73f99;
              uVar9 = iVar8 + 1;
              uVar14 = piVar15[0xf] - piVar15[0xd] >> 2;
              if (uVar14 < uVar9) {
                if (-(uVar14 >> 1) - 1 < uVar14) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = uVar14 + (uVar14 >> 1);
                }
                if (uVar14 < uVar9) {
                  uVar14 = uVar9;
                }
                F_00a93930(piVar15 + 0xd GEN_EDX_ARG,uVar14);
                psVar16 = (*(short * PTR32 *)(gen_frame + 0xc));
              }
            }
            if (((undefined4 *)GEN_TOP(piVar15[0xe])) != ((undefined4 *)GEN_TOP(0x0))) {
              *((undefined4 *)GEN_TOP(piVar15[0xe])) = *(undefined4 *)psVar13;
            }
          }
          piVar15[0xe] = piVar15[0xe] + 4;
          bVar7 = (*(byte *)(gen_frame + 0x17)) + 1;
          (*(byte *)(gen_frame + 0x17)) = bVar7;
          uVar14 = ((uint *)(gen_frame + 0x0))[2];
          this = (*(int * PTR32 *)(gen_frame + 0x10));
        } while (bVar7 < *(byte *)(psVar16 + 200));
      }
      ((uint *)(gen_frame + 0x0))[2] = uVar14 + 1;
      piVar15 = this;
    } while (uVar14 + 1 < param_2);
  }
  puVar5 = *(undefined4 * PTR32 *)this;
  if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,1);
    *(*(int * PTR32 *)(gen_frame + 0x10)) = 0;
    this = (*(int * PTR32 *)(gen_frame + 0x10));
  }
  piVar15 = (*(int * PTR32 *)(gen_frame + 0x10));
  *((int *)GEN_TOP(((int)this + 0x30))) = *((int *)GEN_TOP(((int)this + 0x30))) + param_2;
  if (*((uint *)GEN_TOP(((int)this + 0x30))) < *((uint *)GEN_TOP(((int)this + 0x2c)))) {
    uVar14 = *((uint *)GEN_TOP(((int)this + 0x2c))) - *((uint *)GEN_TOP(((int)this + 0x30)));
    uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x10))[3])) + 0x14))))(((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x10))[3])) GEN_EDX_ARG);
    if (uVar9 < uVar14) {
      uVar14 = uVar9;
    }
    uVar9 = 0;
    if (uVar14 != 0) {
      iVar8 = piVar15[0xc] + 9 + ((uint *)(gen_frame + 0x0))[1] * 0x28;
      do {
        ((int *)(gen_frame + 0x18))[(int)(uVar9)] = iVar8;
        uVar9 = uVar9 + 1;
        iVar8 = iVar8 + 1;
      } while (uVar9 < uVar14);
    }
    piVar19 = ((int *)(gen_frame + 0x18));
    uVar18 = 0;
    uVar9 = ((uint *)(gen_frame + 0x0))[1];
  }
  else {
    uVar14 = (*(int * PTR32 *)(gen_frame + 0x10))[0xe] - (*(int * PTR32 *)(gen_frame + 0x10))[0xd] >> 2;
    bVar7 = (byte)uVar14;
    (*(byte *)(gen_frame + 0x17)) = bVar7;
    if (bVar7 == 0) {
      uVar14 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x10))[9])) + 4))))(((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x10))[9])) GEN_EDX_ARG,1);
      return uVar14;
    }
    uVar14 = uVar14 & 0xff;
    puVar10 = ((uint *)GEN_TOP(F_00406bb0(-(uint)(0xfffffffb < uVar14 * 0xc4) | uVar14 * 0xc4 + 4,0,0)));
    if (puVar10 == ((uint *)GEN_TOP(0x0))) {
      puVar10 = ((uint *)GEN_TOP(0x0));
    }
    else {
      *puVar10 = uVar14;
      puVar10 = puVar10 + 1;
      puVar17 = puVar10;
      bVar7 = (*(byte *)(gen_frame + 0x17));
      uVar9 = uVar14;
      while (uVar9 = uVar9 - 1, (*(byte *)(gen_frame + 0x17)) = bVar7, -1 < (int)uVar9) {
        *puVar17 = 0;
        puVar17[1] = 0;
        puVar17[2] = 0;
        F_0042b630(puVar17 + 4 GEN_EDX_ARG);
        F_0042b630(puVar17 + 0x19 GEN_EDX_ARG);
        puVar17[0x2e] = 0;
        puVar17[0x2f] = 0;
        *(undefined2 *)(puVar17 + 0x30) = 0;
        *((undefined1 *)GEN_TOP(((int)puVar17 + 0xc2))) = 0;
        puVar17 = puVar17 + 0x31;
        bVar7 = (*(byte *)(gen_frame + 0x17));
      }
    }
    *((uint * PTR32 *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x10))[10])) = puVar10;
    *((byte *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x10))[10] + 4))) = bVar7;
    psVar16 = ((short *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x10))[0xe]));
    (*(short * PTR32 *)(gen_frame + 0xc)) = ((short *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x10))[0xd]));
    if (((short *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x10))[0xd])) != psVar16) {
      ((uint *)(gen_frame + 0x0))[2] = 0;
      do {
        sVar1 = *(*(short * PTR32 *)(gen_frame + 0xc));
        puVar10 = ((uint *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x10))[10])) + ((uint *)(gen_frame + 0x0))[2])));
        puVar10[0x2e] = 0;
        puVar10[0x2f] = 0;
        bVar7 = F_006bde70((int)sVar1);
        *((byte *)GEN_TOP(((int)puVar10 + 0xc2))) = bVar7;
        ((uint *)(gen_frame + 0x0))[1] = 0;
        do {
          puVar11 = ((ushort *)GEN_TOP(F_00ab2ff0((int)sVar1,((uint *)(gen_frame + 0x0))[1])));
          if (puVar11 != ((ushort *)GEN_TOP(0x0))) {
            uVar2 = *puVar11;
            puVar17 = ((uint *)GEN_TOP(puVar10[1]));
            ((uint *)(gen_frame + 0x0))[0] = (uint)uVar2;
            if (((uint *)(gen_frame + 0x0)) < puVar17) {
              puVar6 = ((uint *)GEN_TOP(*puVar10));
              if (((uint *)(gen_frame + 0x0)) < puVar6) goto LAB_00a74193;
              if (puVar17 == ((uint *)GEN_TOP(puVar10[2]))) {
                iVar8 = (int)puVar17 - (int)((int)(uintptr_t)puVar6) >> 1;
                if (iVar8 == -1) goto LAB_00a73f99;
                uVar12 = iVar8 + 1;
                uVar9 = (int)puVar10[2] - (int)((int)(uintptr_t)puVar6) >> 1;
                if (uVar9 < uVar12) {
                  if (-(uVar9 >> 1) - 1 < uVar9) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = uVar9 + (uVar9 >> 1);
                  }
                  if (uVar9 < uVar12) {
                    uVar9 = uVar12;
                  }
                  F_00a93890(puVar10 GEN_EDX_ARG,uVar9);
                }
              }
              if (((undefined2 *)GEN_TOP(puVar10[1])) != ((undefined2 *)GEN_TOP(0x0))) {
                *((undefined2 *)GEN_TOP(puVar10[1])) =
                     *((undefined2 *)GEN_TOP((*puVar10 + ((int)((uint *)(gen_frame + 0x0)) - (int)((int)(uintptr_t)puVar6) >> 1) * 2)));
              }
            }
            else {
LAB_00a74193: ;
              if (puVar17 == ((uint *)GEN_TOP(puVar10[2]))) {
                iVar8 = (int)((int)puVar17 - *puVar10) >> 1;
                if (iVar8 == -1) {
LAB_00a73f99: ;
                    
                  F_00c4579a(((char *)REFP(0x108497c)));
                }
                uVar12 = iVar8 + 1;
                uVar9 = (int)((int)puVar10[2] - *puVar10) >> 1;
                if (uVar9 < uVar12) {
                  if (-(uVar9 >> 1) - 1 < uVar9) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = uVar9 + (uVar9 >> 1);
                  }
                  if (uVar9 < uVar12) {
                    uVar9 = uVar12;
                  }
                  F_00a93890(puVar10 GEN_EDX_ARG,uVar9);
                }
              }
              if (((ushort *)GEN_TOP(puVar10[1])) != ((ushort *)GEN_TOP(0x0))) {
                *((ushort *)GEN_TOP(puVar10[1])) = uVar2;
              }
            }
            puVar10[1] = puVar10[1] + 2;
          }
          ((uint *)(gen_frame + 0x0))[1] = ((uint *)(gen_frame + 0x0))[1] + 1;
        } while (puVar11 != ((ushort *)GEN_TOP(0x0)));
        ((uint *)(gen_frame + 0x0))[2] = ((uint *)(gen_frame + 0x0))[2] + 0xc4;
        psVar13 = (*(short * PTR32 *)(gen_frame + 0xc)) + 2;
        (*(short * PTR32 *)(gen_frame + 0xc)) = psVar13;
      } while (psVar13 != psVar16);
    }
    piVar15 = (*(int * PTR32 *)(gen_frame + 0x10));
    uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x10))[4])) + 0x14))))(((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x10))[4])) GEN_EDX_ARG);
    if (uVar9 < uVar14) {
      uVar14 = uVar9;
    }
    piVar19 = ((int *)GEN_TOP(piVar15[0xd]));
    if (piVar15[0xe] - (int)((int)(uintptr_t)piVar19) >> 2 == 0) {
                    
      F_00c457e7(((char *)REFP(0x1090aa4)));
    }
    uVar9 = 0;
    uVar18 = 1;
  }
  uVar14 = F_00a6bb10(piVar15 GEN_EDX_ARG,uVar18,uVar14,piVar19,uVar9);
  return uVar14;
}

/* ref: FUN_00a74270 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a74270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa74270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x344, 12, 4);
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * PTR32 * ppvVar4;
  undefined * pvVar5;
  undefined * pvVar6;
  ulonglong uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x33c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x340));
  F_0042b630(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_FWD);
  F_0042b630(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
  pvVar6 = ((undefined *)GEN_TOP(0x0));
  pvVar5 = ((undefined *)GEN_TOP(0x0));
  if (*((int *)GEN_TOP(((int)this + 0x39b4))) == 0) {
    F_006ea2d0((int)this + 0x3a00,((undefined1 *)(gen_frame + 0x104)),((undefined1 *)(gen_frame + 0x5c)));
    F_0042e430(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG,((char *)REFP(0x10e77b0)));
    pvVar5 = ((undefined *)GEN_TOP(0x18));
  }
  else if (*((int *)GEN_TOP(((int)this + 0x39b4))) == 1) {
    F_006ea2d0((int)this + 0x3a00,((undefined1 *)(gen_frame + 0x104)),((undefined1 *)(gen_frame + 0x5c)));
    F_0042e430(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG,&REFG(undefined, 0x10e77bc));
    pvVar6 = ((undefined *)GEN_TOP(0x18));
    pvVar5 = ((undefined *)GEN_TOP(0x18));
  }
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG);
  uVar1 = F_0042ce40(((undefined1 *)(gen_frame + 0x8)),((char *)REFP(0x10e77c4)),REFG(undefined * PTR32, 0x132372c),uVar1);
  F_0042ccf0(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8)));
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG);
  uVar1 = F_0052fba0((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar1);
  if (uVar1 == 0) {
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG);
    uVar1 = F_0042ce40(((undefined1 *)(gen_frame + 0x8)),((char *)REFP(0x10e77cc)),REFG(undefined * PTR32, 0x132372c),uVar3,uVar1);
    F_0042ccf0(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG,uVar1);
    F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG);
    pvVar5 = ((undefined *)GEN_TOP(F_00ab0210(uVar1)));
    pvVar6 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG);
    pvVar2 = ((undefined *)GEN_TOP(F_00ab0210(uVar1)));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = pvVar2;
    if (pvVar2 <= pvVar6) {
      pvVar6 = ((undefined *)GEN_TOP(0x0));
      goto LAB_00a7442f;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(((int)pvVar2 - (int)pvVar6)));
    if (((undefined *)GEN_TOP(((int)pvVar2 - (int)pvVar6))) <= pvVar5) goto LAB_00a7442f;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = pvVar5;
LAB_00a7442f: ;
  if ((*(undefined * PTR32 *)(gen_frame + 0x4)) == ((undefined *)GEN_TOP(0x0))) {
    if (*((int *)GEN_TOP(((int)this + 0x39b4))) == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x39b4))) = 1;
      F_00a74270(this GEN_EDX_ARG);
    }
    else if (*((int *)GEN_TOP(((int)this + 0x39b4))) == 1) {
      F_00a85260(((undefined *)GEN_TOP(((int)this + 0xc30))) GEN_EDX_ARG);
      F_00a85430(((undefined *)GEN_TOP(((int)this + 0x3158))) GEN_EDX_ARG);
      *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 0;
      F_00a67ca0(this GEN_EDX_ARG,0xd);
    }
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x64));
    ppvVar4 = &(*(undefined * PTR32 *)(gen_frame + 0x0));
    if ((*(undefined * PTR32 *)(gen_frame + 0x4)) < ((undefined *)GEN_TOP(0x65))) {
      ppvVar4 = &(*(undefined * PTR32 *)(gen_frame + 0x4));
    }
    pvVar5 = *ppvVar4;
    pvVar2 = ((undefined *)GEN_TOP(0x0));
    if (pvVar5 != ((undefined *)GEN_TOP(0x0))) {
      do {
        ((int *)(gen_frame + 0x1ac))[(int)((int)pvVar2)] = (int)pvVar2 + (int)pvVar6;
        pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 1)));
      } while (pvVar2 < pvVar5);
    }
    F_00a735f0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x158)),((int *)(gen_frame + 0x1ac)),pvVar5);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG);
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG);
  return (uint)uVar7;
}

/* ref: FUN_00a74510 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a74510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa74510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x64, 12, 4);
  uint * this_00;
  uint * this_01;
  undefined1 * puVar1;
  undefined1 * puVar2;
  uint * puVar3;
  byte bVar4;
  uint * puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60));
  this_00 = ((uint *)GEN_TOP(((int)this + 0x148)));
  F_0074d820(this_00 GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 0x148))),
               *((undefined4 *)GEN_TOP(((int)this + 0x14c))));
  uVar9 = *((uint *)GEN_TOP(((int)this + 0x15c)));
  this_01 = ((uint *)GEN_TOP(((int)this + 0x158)));
  uVar7 = *this_01;
  if (uVar7 != uVar9) {
    (*(uint *)(gen_frame + 0x0)) = 0;
    F_00c46e20(uVar7,uVar9,0);
    *((uint *)GEN_TOP(((int)this + 0x15c))) = (*(uint *)(gen_frame + 0x0)) + uVar7;
  }
  (*(byte *)(gen_frame + 0x7)) = 1;
  do {
    (*(uint *)(gen_frame + 0x0)) = (uint)(*(byte *)(gen_frame + 0x7));
    puVar5 = ((uint *)GEN_TOP(F_00ab32d0((uint)(*(byte *)(gen_frame + 0x7)))));
    F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*puVar5 & 0xffffff) + (int)puVar5,REFG(undefined4, 0x108cc50));
    puVar1 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0x14c)));
    if ((((undefined1 *)(gen_frame + 0x8)) < puVar1) && (puVar2 = ((undefined1 *)GEN_TOP(*this_00)), puVar2 <= ((undefined1 *)(gen_frame + 0x8)))) {
      if (puVar1 == *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0x150)))) {
        F_00751cb0(this_00 GEN_EDX_ARG,1);
      }
      if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14c))) != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14c))) GEN_EDX_ARG,
                     (((int)((undefined1 *)(gen_frame + 0x8)) - (int)puVar2) / 0x54) * 0x54 + *this_00);
      }
      *((int *)GEN_TOP(((int)this + 0x14c))) = *((int *)GEN_TOP(((int)this + 0x14c))) + 0x54;
    }
    else {
      if (puVar1 == *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0x150)))) {
        F_00751cb0(this_00 GEN_EDX_ARG,1);
      }
      if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14c))) != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
      }
      *((int *)GEN_TOP(((int)this + 0x14c))) = *((int *)GEN_TOP(((int)this + 0x14c))) + 0x54;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    uVar9 = (*(uint *)(gen_frame + 0x0));
    puVar5 = *((uint * PTR32 *)GEN_TOP(((int)this + 0x15c)));
    if ((&(*(uint *)(gen_frame + 0x0)) < puVar5) && (puVar3 = ((uint *)GEN_TOP(*this_01)), puVar3 <= &(*(uint *)(gen_frame + 0x0)))) {
      if (puVar5 == *((uint * PTR32 *)GEN_TOP(((int)this + 0x160)))) {
        iVar6 = (int)puVar5 - (int)((int)(uintptr_t)puVar3) >> 2;
        if (iVar6 == -1) {
LAB_00a74708: ;
                    
          F_00c4579a(((char *)REFP(0x108497c)));
        }
        uVar7 = iVar6 + 1;
        uVar9 = (int)*((uint * PTR32 *)GEN_TOP(((int)this + 0x160))) - (int)((int)(uintptr_t)puVar3) >> 2;
        if (uVar9 < uVar7) {
          if (-(uVar9 >> 1) - 1 < uVar9) {
            uVar9 = 0;
          }
          else {
            uVar9 = uVar9 + (uVar9 >> 1);
          }
          if (uVar9 < uVar7) {
            uVar9 = uVar7;
          }
          F_0074cbd0(this_01 GEN_EDX_ARG,uVar9);
        }
      }
      if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x15c))) != ((undefined4 *)GEN_TOP(0x0))) {
        **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x15c))) =
             *((undefined4 *)GEN_TOP((*this_01 + ((int)&(*(uint *)(gen_frame + 0x0)) - (int)((int)(uintptr_t)puVar3) >> 2) * 4)));
      }
    }
    else {
      if (puVar5 == *((uint * PTR32 *)GEN_TOP(((int)this + 0x160)))) {
        iVar6 = (int)((int)puVar5 - *this_01) >> 2;
        if (iVar6 == -1) goto LAB_00a74708;
        uVar8 = iVar6 + 1;
        uVar7 = (int)((int)*((uint * PTR32 *)GEN_TOP(((int)this + 0x160))) - *this_01) >> 2;
        if (uVar7 < uVar8) {
          if (-(uVar7 >> 1) - 1 < uVar7) {
            uVar7 = 0;
          }
          else {
            uVar7 = uVar7 + (uVar7 >> 1);
          }
          if (uVar7 < uVar8) {
            uVar7 = uVar8;
          }
          F_0074cbd0(this_01 GEN_EDX_ARG,uVar7);
        }
      }
      if (*((uint * PTR32 *)GEN_TOP(((int)this + 0x15c))) != ((uint *)GEN_TOP(0x0))) {
        **((uint * PTR32 *)GEN_TOP(((int)this + 0x15c))) = uVar9;
      }
    }
    *((int *)GEN_TOP(((int)this + 0x15c))) = *((int *)GEN_TOP(((int)this + 0x15c))) + 4;
    bVar4 = (*(byte *)(gen_frame + 0x7)) + 1;
    (*(byte *)(gen_frame + 0x7)) = bVar4;
    if (0x1a < bVar4) {
      return (uint)this_00;
    }
  } while( true );
}

/* ref: FUN_00a74720 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a74720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa74720u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_GS(0x98, 8, 4);
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined2 * puVar3;
  int iVar4;
  uint uVar5;
  uint * puVar6;
  uint * puVar7;
  undefined2 * puVar8;
  undefined4 * puVar9;
  code * pcVar10;
  uint uVar11;
  int iVar12;
  int * piVar13;
  undefined4 uVar14;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x90)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x94));
  *((undefined1 *)GEN_TOP(((int)this + 0x9ef))) = 1;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (param_2 != 0) {
    do {
      iVar12 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + (*(uint *)(gen_frame + 0x0)) * 4))) + 4)));
      (*(byte *)(gen_frame + 0x13)) = 0;
      if (*((char *)GEN_TOP((iVar12 + 0x1b8))) != '\0') {
        puVar6 = ((uint *)GEN_TOP(((int)this + 0xc0)));
        do {
          puVar9 = ((undefined4 *)GEN_TOP((iVar12 + (uint)(*(byte *)(gen_frame + 0x13)) * 4)));
          puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc4)));
          if ((puVar9 < puVar1) && (puVar2 = ((undefined4 *)GEN_TOP(*puVar6)), puVar2 <= puVar9)) {
            if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 200)))) {
              iVar4 = (int)puVar1 - (int)((int)(uintptr_t)puVar2) >> 2;
              if (iVar4 == -1) {
LAB_00a7491d: ;
                    
                F_00c4579a(((char *)REFP(0x108497c)));
              }
              uVar5 = iVar4 + 1;
              uVar11 = (int)*((undefined4 * PTR32 *)GEN_TOP(((int)this + 200))) - (int)((int)(uintptr_t)puVar2) >> 2;
              if (uVar11 < uVar5) {
                if (-(uVar11 >> 1) - 1 < uVar11) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = uVar11 + (uVar11 >> 1);
                }
                if (uVar11 < uVar5) {
                  uVar11 = uVar5;
                }
                F_00a93930(puVar6 GEN_EDX_ARG,uVar11);
              }
            }
            if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc4))) != ((undefined4 *)GEN_TOP(0x0))) {
              **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc4))) =
                   *((undefined4 *)GEN_TOP((*puVar6 + ((int)puVar9 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
            }
          }
          else {
            if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 200)))) {
              iVar4 = (int)((int)puVar1 - *puVar6) >> 2;
              if (iVar4 == -1) goto LAB_00a7491d;
              uVar5 = iVar4 + 1;
              uVar11 = (int)((int)*((undefined4 * PTR32 *)GEN_TOP(((int)this + 200))) - *puVar6) >> 2;
              if (uVar11 < uVar5) {
                if (-(uVar11 >> 1) - 1 < uVar11) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = uVar11 + (uVar11 >> 1);
                }
                if (uVar11 < uVar5) {
                  uVar11 = uVar5;
                }
                F_00a93930(puVar6 GEN_EDX_ARG,uVar11);
              }
            }
            if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc4))) != ((undefined4 *)GEN_TOP(0x0))) {
              **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc4))) = *puVar9;
            }
          }
          *((int *)GEN_TOP(((int)this + 0xc4))) = *((int *)GEN_TOP(((int)this + 0xc4))) + 4;
          (*(byte *)(gen_frame + 0x13)) = (*(byte *)(gen_frame + 0x13)) + 1;
        } while ((*(byte *)(gen_frame + 0x13)) < *((byte *)GEN_TOP((iVar12 + 0x1b8))));
      }
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
    } while ((*(uint *)(gen_frame + 0x0)) < param_2);
  }
  puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
  if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar9)))(puVar9 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *((int *)GEN_TOP(((int)this + 0xbc))) = *((int *)GEN_TOP(((int)this + 0xbc))) + param_2;
  if (*((uint *)GEN_TOP(((int)this + 0xbc))) < *((uint *)GEN_TOP(((int)this + 0xb8)))) {
    uVar11 = *((uint *)GEN_TOP(((int)this + 0xb8))) - *((uint *)GEN_TOP(((int)this + 0xbc)));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG);
    if (uVar5 < uVar11) {
      uVar11 = uVar5;
    }
    uVar5 = 0;
    if (uVar11 != 0) {
      iVar12 = *((int *)GEN_TOP(((int)this + 0xbc))) + 9 + param_3 * 0x28;
      do {
        ((int *)(gen_frame + 0x14))[(int)(uVar5)] = iVar12;
        uVar5 = uVar5 + 1;
        iVar12 = iVar12 + 1;
      } while (uVar5 < uVar11);
    }
    uVar11 = F_00a6d180(this GEN_EDX_ARG,2,uVar11,((int *)(gen_frame + 0x14)),param_3);
    return uVar11;
  }
  uVar11 = *((int *)GEN_TOP(((int)this + 0xc4))) - *((int *)GEN_TOP(((int)this + 0xc0))) >> 2;
  *((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x40))) + 4))) = (char)uVar11;
  if ((char)uVar11 == '\0') {
    puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
    if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar9)))(puVar9 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    }
    piVar13 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3c)));
    pcVar10 = *((gen_code32 *)GEN_TOP((*piVar13 + 4)));
    uVar14 = 1;
  }
  else {
    if (*((int *)GEN_TOP(((int)this + 0xd4))) != 0) {
      F_00406b30(*((int *)GEN_TOP(((int)this + 0xd4))));
      uVar11 = uVar11 & 0xff;
      *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
    }
    uVar11 = uVar11 & 0xff;
    *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
    uVar5 = F_00406bb0(uVar11 * 0x24,0,0);
    *((uint *)GEN_TOP(((int)this + 0xd4))) = uVar5;
    puVar6 = ((uint *)GEN_TOP(F_00406bb0(-(uint)(0xfffffffb < uVar11 * 0x444) | uVar11 * 0x444 + 4,0,0)));
    if (puVar6 == ((uint *)GEN_TOP(0x0))) {
      puVar7 = ((uint *)GEN_TOP(0x0));
    }
    else {
      puVar7 = puVar6 + 1;
      *puVar6 = uVar11;
      puVar6 = puVar7;
      uVar5 = uVar11;
      while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
        F_00a8a3a0(puVar6 GEN_EDX_ARG);
        puVar6 = puVar6 + 0x111;
      }
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x40))) = puVar7;
    puVar3 = *((undefined2 * PTR32 *)GEN_TOP(((int)this + 0xc4)));
    puVar8 = *((undefined2 * PTR32 *)GEN_TOP(((int)this + 0xc0)));
    if (puVar8 != puVar3) {
      iVar12 = 0;
      do {
        *((undefined2 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x40))) + 0x3e0 + iVar12))) = *puVar8;
        puVar8 = puVar8 + 2;
        iVar12 = iVar12 + 0x444;
      } while (puVar8 != puVar3);
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x20))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG);
    if (uVar5 < uVar11) {
      uVar11 = uVar5;
    }
    iVar12 = *((int *)GEN_TOP(((int)this + 0xc0)));
    if (*((int *)GEN_TOP(((int)this + 0xc4))) - iVar12 >> 2 == 0) {
                    
      F_00c457e7(((char *)REFP(0x1090aa4)));
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x9f0))) = 0;
    if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
      piVar13 = *((int * PTR32 *)GEN_TOP(((int)this + 0x20)));
      if (piVar13 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar13 + 0x4c))))(piVar13 GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0xc))));
      }
      puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
      if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar9)))(puVar9 GEN_EDX_ARG,1);
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      }
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x9f0))) = 0;
    puVar9 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
    if (puVar9 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar9 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      uVar14 = *((undefined4 *)GEN_TOP(((int)this + 0x34)));
      F_00cb4700(puVar9 GEN_EDX_ARG,uVar11,0);
      puVar9[5] = uVar11;
      *puVar9 = (*(undefined * PTR32 (*)[2])REFP(0x10e78bc));
      puVar9[6] = this;
      puVar9[7] = uVar14;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar9;
    iVar4 = 0;
    if (0 < (int)uVar11) {
      do {
        F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,iVar4,*((undefined4 *)GEN_TOP((iVar12 + iVar4 * 4))));
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar11);
    }
    uVar14 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
    piVar13 = *((int * PTR32 *)GEN_TOP(((int)this + 0x20)));
    pcVar10 = *((gen_code32 *)GEN_TOP((*piVar13 + 0x48)));
  }
  uVar11 = (*pcVar10)(piVar13,uVar14);
  return uVar11;
}

/* ref: FUN_00a74b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a74b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa74b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00a735f0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),1);
  return uVar1;
}

/* ref: FUN_00a74ba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a74ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa74ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  uint * this_00;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_EAX = 0;
  uint uVar6;
  
  if ((char)(*(undefined4 *)&gen_args[0]) != '\0') {
    uVar6 = *((uint *)GEN_TOP(((int)this + 0xfb0)));
    if (uVar6 < *((ushort *)GEN_TOP(((int)this + 0x5ec)))) {
      iVar4 = uVar6 * 0x58 + 0x5f0;
    }
    else {
      iVar4 = (uVar6 - *((ushort *)GEN_TOP(((int)this + 0x5ec)))) * 0x54 + 0xeb0;
    }
    F_0042ccf0(((undefined *)GEN_TOP((iVar4 + (int)this))) GEN_EDX_FWD,(*(uint *)&gen_args[1]));
    *((int *)GEN_TOP(((int)this + 0xfb0))) = *((int *)GEN_TOP(((int)this + 0xfb0))) + 1;
  }
  uVar6 = *((uint *)GEN_TOP(((int)this + 0xfac)));
  if (*((ushort *)GEN_TOP(((int)this + 0x5ec))) + uVar6 <= *((uint *)GEN_TOP(((int)this + 0xfb0)))) {
    *((undefined4 *)GEN_TOP(((int)this + 0xfb0))) = 0;
    if (uVar6 != 0) {
      *((undefined1 *)GEN_TOP(((int)this + 0x1b0))) = 0;
    }
    (*(undefined4 *)&gen_args[0]) = CONCAT13(2,(undefined3)(*(undefined4 *)&gen_args[0]));
    (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff;
    if (uVar6 != 0) {
      this_00 = ((uint *)GEN_TOP(((int)this + 0x1a0)));
      do {
        uVar6 = *((uint *)GEN_TOP(((int)this + 0x1a4)));
        if ((int)&(*(undefined4 *)&gen_args[0]) + 3U < uVar6) {
          uVar5 = *this_00;
          if ((int)&(*(undefined4 *)&gen_args[0]) + 3U < uVar5) goto LAB_00a74c97;
          if (uVar6 == *((uint *)GEN_TOP(((int)this + 0x1a8)))) {
            if (uVar6 - uVar5 == -1) goto LAB_00a74d2c;
            uVar3 = (uVar6 - uVar5) + 1;
            uVar6 = *((uint *)GEN_TOP(((int)this + 0x1a8))) - uVar5;
            if (uVar6 < uVar3) {
              if (-(uVar6 >> 1) - 1 < uVar6) {
                uVar6 = 0;
              }
              else {
                uVar6 = uVar6 + (uVar6 >> 1);
              }
              if (uVar6 < uVar3) {
                uVar6 = uVar3;
              }
              F_00a93bc0(this_00 GEN_EDX_ARG,uVar6);
            }
          }
          if (*((undefined1 * PTR32 *)GEN_TOP(((int)this + 0x1a4))) != ((undefined1 *)GEN_TOP(0x0))) {
            **((undefined1 * PTR32 *)GEN_TOP(((int)this + 0x1a4))) =
                 *((undefined1 *)GEN_TOP(((((int)&(*(undefined4 *)&gen_args[0]) + 3U) - uVar5) + *this_00)));
          }
        }
        else {
LAB_00a74c97: ;
          if (uVar6 == *((uint *)GEN_TOP(((int)this + 0x1a8)))) {
            iVar4 = uVar6 - *this_00;
            if (iVar4 == -1) {
LAB_00a74d2c: ;
                    
              F_00c4579a(((char *)REFP(0x108497c)));
            }
            uVar5 = iVar4 + 1;
            uVar6 = *((uint *)GEN_TOP(((int)this + 0x1a8))) - *this_00;
            if (uVar6 < uVar5) {
              if (-(uVar6 >> 1) - 1 < uVar6) {
                uVar6 = 0;
              }
              else {
                uVar6 = uVar6 + (uVar6 >> 1);
              }
              if (uVar6 < uVar5) {
                uVar6 = uVar5;
              }
              F_00a93bc0(this_00 GEN_EDX_ARG,uVar6);
            }
          }
          if (*((undefined1 * PTR32 *)GEN_TOP(((int)this + 0x1a4))) != ((undefined1 *)GEN_TOP(0x0))) {
            **((undefined1 * PTR32 *)GEN_TOP(((int)this + 0x1a4))) = 2;
          }
        }
        *((int *)GEN_TOP(((int)this + 0x1a4))) = *((int *)GEN_TOP(((int)this + 0x1a4))) + 1;
        F_00a95670(((undefined *)GEN_TOP(((int)this + 400))) GEN_EDX_ARG,((*(uint *)&gen_args[1]) >> 0x18) * 0x54 + 0xeb0 + (int)this);
        bVar2 = (*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 3)) + 1;
        uVar6 = CONCAT31((int3)((uint)extraout_EAX >> 8),bVar2);
        (*(uint *)&gen_args[1]) = CONCAT13(bVar2,(undefined3)(*(uint *)&gen_args[1]));
      } while ((uint)bVar2 < *((uint *)GEN_TOP(((int)this + 0xfac))));
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xe9c)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,0x14);
    }
  }
  return uVar6;
}

/* ref: FUN_00a74d40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a74d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa74d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00a72450(this GEN_EDX_FWD);
  uVar1 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x5c);
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  uVar1 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xb);
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
  uVar1 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,9);
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((gen_code32 *)GEN_TOP(((int)this + 0x18))) = ((code *)REFP(0xa73dc0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x1c))) = ((code *)REFP(0xa6fff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x20))) = ((code *)REFP(0xa6b9a0));
  return uVar1;
}

/* ref: FUN_00a74da0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a74da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa74da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  uint uVar1;
  uint * puVar2;
  undefined * puVar3;
  undefined * this_00;
  int iVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  F_00a70fe0(this GEN_EDX_FWD);
  uVar1 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x23);
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  uVar1 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,9);
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar1;
  uVar1 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x5a);
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar1;
  uVar1 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x21);
  *((uint *)GEN_TOP(((int)this + 0x20))) = uVar1;
  uVar1 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,9);
  *((uint *)GEN_TOP(((int)this + 0x24))) = uVar1;
  *((gen_code32 *)GEN_TOP(((int)this + 0x28))) = ((code *)REFP(0xa70970));
  *((gen_code32 *)GEN_TOP(((int)this + 0x2c))) = ((code *)REFP(0xa691f0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x30))) = ((code *)REFP(0xa74720));
  *((gen_code32 *)GEN_TOP(((int)this + 0x34))) = ((code *)REFP(0xa70ab0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x38))) = ((code *)REFP(0xa70e70));
  iVar4 = 0;
  this_00 = ((undefined *)GEN_TOP(((int)this + 0xe0)));
  do {
    puVar2 = ((uint *)GEN_TOP(F_00ab2ea0(iVar4)));
    if (puVar2 == ((uint *)GEN_TOP(0x0))) {
      puVar3 = &REFG(undefined, 0x10e711b);
    }
    else {
      puVar3 = ((undefined *)GEN_TOP(((*puVar2 & 0xffffff) + (int)puVar2)));
    }
    F_0042e430(this_00 GEN_EDX_ARG,puVar3);
    iVar4 = iVar4 + 1;
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x54)));
  } while (iVar4 < 7);
  iVar4 = 0;
  do {
    ((int *)(gen_frame + 0x0))[(int)(iVar4)] = iVar4;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x12);
  uVar1 = F_00a6d180(this GEN_EDX_ARG,0,0x12,((int *)(gen_frame + 0x0)),0);
  return uVar1;
}

/* ref: Client::Game::UI::ScenarioTextReader::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a74eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa74eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined * pSVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  
  if (*(int *)(this + 0x58) != 0) {
    *(int *)(this + 0x74) = *(int *)(this + 0x74) + param_2;
    bVar5 = F_00a6dec0(this GEN_EDX_FWD);
    if (bVar5 != 0) {
      return 1;
    }
    puVar2 = *(undefined4 * PTR32 *)(this + 0x5c);
    *(undefined4 *)(this + 0x74) = 0;
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x5c) = 0;
    }
    pSVar1 = this + 0x60;
    *(undefined4 *)(this + 0x58) = 0;
    if (pSVar1 != ((undefined1 *)(gen_frame + 0x0))) {
      iVar3 = *(int *)pSVar1;
      *(int *)pSVar1 = 0;
      *(undefined4 *)(this + 100) = 0;
      iVar4 = *(int *)(this + 0x68);
      *(undefined4 *)(this + 0x68) = 0;
      if (iVar3 != 0) {
        F_00429760(iVar3,(iVar4 - iVar3 >> 2) * 4,800);
      }
    }
  }
  return 0;
}

/* ref: FUN_00a74f30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a74f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa74f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x12678, 8, 4);
  uint * this_00;
  ushort uVar1;
  undefined1 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined * pvVar5;
  int * piVar6;
  byte * pbVar7;
  uint uVar8;
  undefined1 * puVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  
  (*(uint *)(gen_frame + 0x12670)) = 0xa74f3d;
  (*(uint *)(gen_frame + 0x12670)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  F_00a73730(this GEN_EDX_FWD);
  uVar4 = F_00a4ffd0();
  (*(int * PTR32 *)(gen_frame + 0x1000c)) = ((int *)GEN_TOP(((int)this + 0x90)));
  iVar11 = 0;
  (*(int * PTR32 *)(gen_frame + 0x10000)) = ((int *)GEN_TOP(((int)this + 0x7c)));
  pbVar7 = ((byte *)GEN_TOP((uVar4 + 0x1895)));
  (*(uint *)(gen_frame + 0x10018)) = 0;
  (*(int *)(gen_frame + 0x10014)) = 0;
  (*(int *)(gen_frame + 0x10008)) = 5;
  do {
    if (pbVar7[-1] == 1) {
      iVar12 = (uint)*pbVar7 * 0x10 + 0x13b4 + uVar4;
      if (*((short *)GEN_TOP(((uint)*pbVar7 * 0x10 + 0x13b8 + uVar4))) != 0) {
        F_0042b630(((undefined1 *)(gen_frame + 0x1001c)) GEN_EDX_ARG);
        F_0042b630(((undefined1 *)(gen_frame + 0x10070)) GEN_EDX_ARG);
        F_00a8a760(((undefined1 *)(gen_frame + 0x100cc)) GEN_EDX_ARG);
        F_00a858e0(((undefined1 *)(gen_frame + 0x1001c)) GEN_EDX_ARG);
        uVar1 = *((ushort *)GEN_TOP((iVar12 + 4)));
        uVar8 = uVar1 | 0x10000;
        (*(ushort *)(gen_frame + 0x100c6)) = uVar1;
        (*(undefined4 *)(gen_frame + 0x100c8)) = 1;
        (*(ushort *)(gen_frame + 0x100c4)) = (ushort)*((byte *)GEN_TOP((iVar12 + 6)));
        pvVar5 = ((undefined *)GEN_TOP(F_006b8c00()));
        piVar6 = ((int *)GEN_TOP(F_006e3240(pvVar5 GEN_EDX_ARG,uVar8)));
        ((int *)(gen_frame + 0x12640))[0] = 0;
        ((int *)(gen_frame + 0x12640))[1] = 0;
        ((undefined1 *)(gen_frame + 0x12648))[0] = 0;
        (*(undefined4 *)(gen_frame + 0x1264c)) = 0;
        (*(undefined4 *)(gen_frame + 0x12650)) = 0;
        (*(undefined4 *)(gen_frame + 0x12654)) = 0;
        (*(undefined1 *)(gen_frame + 0x12658)) = 0;
        (*(undefined4 *)(gen_frame + 0x1265c)) = 0;
        (*(undefined4 *)(gen_frame + 0x12660)) = 0;
        (*(undefined4 *)(gen_frame + 0x12664)) = 0;
        (*(undefined1 *)(gen_frame + 0x12668)) = 0;
        (*(undefined4 *)(gen_frame + 0x1266c)) = 0;
        if ((piVar6 != ((int *)GEN_TOP(0x0))) &&
           (uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x1e8))))(piVar6 GEN_EDX_ARG,((int *)(gen_frame + 0x12640)),3), uVar8 != 0)) {
          piVar6 = ((int *)(gen_frame + 0x12640)) + 1;
          do {
            if (((char)piVar6[1] != '\0') && (*piVar6 != 0)) {
              (&(*(int *)(gen_frame + 0x125f0)))[(*(ushort *)(gen_frame + 0x125fc))] = piVar6[-1];
              (*(ushort *)(gen_frame + 0x125fc)) = (*(ushort *)(gen_frame + 0x125fc)) + 1;
            }
            piVar6 = piVar6 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        this_00 = ((uint *)GEN_TOP(((int)this + 0x198)));
        puVar9 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0x19c)));
        if (((undefined1 *)(gen_frame + 0x1001c)) < puVar9) {
          puVar2 = ((undefined1 *)GEN_TOP(*this_00));
          if (((undefined1 *)(gen_frame + 0x1001c)) < puVar2) goto LAB_00a750e4;
          if (puVar9 == *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0x1a0)))) {
            F_00a95a70(this_00 GEN_EDX_ARG,1);
          }
          pvVar5 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x19c)));
          if (pvVar5 != ((undefined *)GEN_TOP(0x0))) {
            puVar9 = ((undefined1 *)GEN_TOP(((((int)((undefined1 *)(gen_frame + 0x1001c)) - (int)puVar2) / 0x2624) * 0x2624 + *this_00)));
            goto LAB_00a75100;
          }
        }
        else {
LAB_00a750e4: ;
          if (puVar9 == *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0x1a0)))) {
            F_00a95a70(this_00 GEN_EDX_ARG,1);
          }
          pvVar5 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x19c)));
          if (pvVar5 != ((undefined *)GEN_TOP(0x0))) {
            puVar9 = ((undefined1 *)(gen_frame + 0x1001c));
LAB_00a75100: ;
            F_00a8e790(pvVar5 GEN_EDX_ARG,puVar9);
          }
        }
        *((int *)GEN_TOP(((int)this + 0x19c))) = *((int *)GEN_TOP(((int)this + 0x19c))) + 0x2624;
        iVar11 = (*(int *)(gen_frame + 0x10014)) + (*(uint *)(gen_frame + 0x10018));
        (*(uint *)(gen_frame + 0x10018)) = (*(uint *)(gen_frame + 0x10018)) + 1;
        *(*(int * PTR32 *)(gen_frame + 0x10000)) = iVar11;
        (*(int * PTR32 *)(gen_frame + 0x10000)) = (*(int * PTR32 *)(gen_frame + 0x10000)) + 1;
        iVar11 = 0x17;
        puVar9 = ((undefined1 *)(gen_frame + 0x125f4));
        do {
          F_0042c880(puVar9 - 0x134 GEN_EDX_ARG);
          F_0042c880(puVar9 - 0x18c GEN_EDX_ARG);
          iVar11 = iVar11 - 1;
          puVar9 = puVar9 - 0x18c;
        } while (-1 < iVar11);
        F_0042c880(((undefined1 *)(gen_frame + 0x10070)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x1001c)) GEN_EDX_ARG);
        iVar11 = (*(int *)(gen_frame + 0x10014));
      }
    }
    else if ((pbVar7[-1] == 2) &&
            (iVar12 = (uint)*pbVar7 * 0x10 + 0x1684 + uVar4,
            *((short *)GEN_TOP(((uint)*pbVar7 * 0x10 + 0x1688 + uVar4))) != 0)) {
      F_0042b630(((undefined1 *)(gen_frame + 0x1001c)) GEN_EDX_ARG);
      F_0042b630(((undefined1 *)(gen_frame + 0x10070)) GEN_EDX_ARG);
      F_00a8a760(((undefined1 *)(gen_frame + 0x100cc)) GEN_EDX_ARG);
      F_00a858e0(((undefined1 *)(gen_frame + 0x1001c)) GEN_EDX_ARG);
      (*(ushort *)(gen_frame + 0x100c4)) = (ushort)*((byte *)GEN_TOP((iVar12 + 6)));
      (*(ushort *)(gen_frame + 0x100c6)) = *((ushort *)GEN_TOP((iVar12 + 4)));
      (*(undefined4 *)(gen_frame + 0x100c8)) = 2;
      F_00a964c0(((undefined *)GEN_TOP(((int)this + 0x198))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1001c)));
      iVar12 = iVar11 + (*(uint *)(gen_frame + 0x10018));
      iVar11 = iVar11 + 1;
      *(*(int * PTR32 *)(gen_frame + 0x1000c)) = iVar12;
      (*(int * PTR32 *)(gen_frame + 0x1000c)) = (*(int * PTR32 *)(gen_frame + 0x1000c)) + 1;
      iVar12 = 0x17;
      puVar9 = ((undefined1 *)(gen_frame + 0x125f4));
      do {
        F_0042c880(puVar9 - 0x134 GEN_EDX_ARG);
        F_0042c880(puVar9 - 0x18c GEN_EDX_ARG);
        iVar12 = iVar12 - 1;
        puVar9 = puVar9 - 0x18c;
      } while (-1 < iVar12);
      F_0042c880(((undefined1 *)(gen_frame + 0x10070)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x1001c)) GEN_EDX_ARG);
      (*(int *)(gen_frame + 0x10014)) = iVar11;
    }
    pbVar7 = pbVar7 + 8;
    (*(int *)(gen_frame + 0x10008)) = (*(int *)(gen_frame + 0x10008)) - 1;
    if ((*(int *)(gen_frame + 0x10008)) == 0) {
      *((short *)GEN_TOP(((int)this + 0x78))) = (short)(*(uint *)(gen_frame + 0x10018));
      sVar10 = (short)iVar11;
      *((short *)GEN_TOP(((int)this + 0x7a))) = sVar10;
      if ((short)(*(uint *)(gen_frame + 0x10018)) == 0) {
        if (sVar10 == 0) {
          puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x204)));
          uVar4 = (*(uint *)(gen_frame + 0x10018));
          if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
            *((undefined4 *)GEN_TOP(((int)this + 0x204))) = 0;
          }
          puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20c)));
          if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
            *((undefined4 *)GEN_TOP(((int)this + 0x20c))) = 0;
          }
          *((undefined1 *)GEN_TOP(((int)this + 0x1dd))) = 0;
          *((undefined1 *)GEN_TOP(((int)this + 0x194))) = 1;
          return uVar4;
        }
      }
      else if (sVar10 == 0) {
        puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20c)));
        if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
          *((undefined4 *)GEN_TOP(((int)this + 0x20c))) = 0;
        }
        *((undefined4 *)GEN_TOP(((int)this + 0x1c8))) = 0;
        uVar4 = F_00a71ef0(this GEN_EDX_ARG);
        return uVar4;
      }
      *((undefined4 *)GEN_TOP(((int)this + 0x1e0))) = 0;
      uVar4 = F_00a6ebe0(this GEN_EDX_ARG);
      return uVar4;
    }
  } while( true );
}

/* ref: FUN_00a75360 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a75360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa75360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  
  if ((*((char *)GEN_TOP(((int)this + 0x1dc))) != '\0') && (REFG(int, 0x1379694) != 0)) {
    bVar2 = F_006e4d80();
    if (bVar2 != 0) {
      this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
      bVar2 = F_006def40(this_00 GEN_EDX_ARG);
      if (bVar2 != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) + 0x10)));
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x38))))(piVar1 GEN_EDX_ARG);
        if ((((char)uVar3 == '\0') && (REFG(char, 0x1379c96) == '\0')) &&
           (*((char *)GEN_TOP(((int)this + 0x1dd))) == '\0')) {
          *((undefined1 *)GEN_TOP(((int)this + 0x1dd))) = 1;
          F_00a74f30(this GEN_EDX_ARG);
          *((undefined1 *)GEN_TOP(((int)this + 0x1dc))) = 0;
        }
      }
    }
  }
  return;
}

/* ref: FUN_00a753d0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a753d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa753d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x27c, 4, 4);
  uint * puVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  uint * puVar8;
  undefined4 * puVar9;
  undefined * pvVar10;
  int * piVar11;
  uint * puVar12;
  uint uVar13;
  int iVar14;
  undefined * pvVar15;
  uint * puVar16;
  bool bVar17;
  int iVar18;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x274)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x278));
  (*(int *)(gen_frame + 0x2c)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  (*(uint * PTR32 *)(gen_frame + 0x30)) = ((uint *)GEN_TOP(0x0));
  if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
    if (param_2 != ((uint *)GEN_TOP(0x0))) {
      do {
        uVar7 = F_00a4ffd0();
        puVar8 = *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x30))) * 4))) + 4)));
        uVar13 = puVar8[1] >> 3;
        if ((*((int *)GEN_TOP(((int)this + 0x3a90))) < 0) || (9 < *((int *)GEN_TOP(((int)this + 0x3a90))))) {
          if (uVar13 < 200) {
            bVar6 = *((byte *)GEN_TOP((uVar13 + 0x15bc + uVar7)));
            goto LAB_00a75a6b;
          }
        }
        else if (uVar13 < 200) {
          bVar6 = *((byte *)GEN_TOP((uVar13 + 0x12ea + uVar7)));
LAB_00a75a6b: ;
          if ((bVar6 >> GEN_SHC(7 - ((byte)puVar8[1] & 7), 7 - ((byte)puVar8[1] & 7)) & 1) != 0) {
            F_0042b630(((undefined1 *)(gen_frame + 0x94)) GEN_EDX_ARG);
            F_0042b630(((undefined1 *)(gen_frame + 0xe8)) GEN_EDX_ARG);
            F_00a84fd0(&(*(uint *)(gen_frame + 0x90)) GEN_EDX_ARG);
            if ((*((int *)GEN_TOP(((int)this + 0x3a90))) < 0) || (9 < *((int *)GEN_TOP(((int)this + 0x3a90))))) {
              (*(uint *)(gen_frame + 0x90)) = puVar8[1];
            }
            else {
              (*(uint *)(gen_frame + 0x90)) = (ushort)puVar8[1] | 0x10000;
            }
            F_0042e430(((undefined1 *)(gen_frame + 0x94)) GEN_EDX_ARG,(*puVar8 & 0xffffff) + (int)puVar8);
            uVar7 = puVar8[2];
            (*(uint *)(gen_frame + 0x144)) = uVar7;
            if (*((int *)GEN_TOP(((int)this + 0x3a8c))) == 2) {
              puVar16 = ((uint *)GEN_TOP(F_00ab32a0(uVar7)));
              iVar14 = (*puVar16 & 0xffffff) + (int)puVar16;
LAB_00a75b2e: ;
              F_0042e430(((undefined1 *)(gen_frame + 0xe8)) GEN_EDX_ARG,iVar14);
            }
            else if ((*((int *)GEN_TOP(((int)this + 0x3a8c))) == 3) &&
                    (uVar7 = F_00ab2750(uVar7), uVar7 != 0)) {
              puVar16 = ((uint *)GEN_TOP(F_00ab2750(puVar8[2])));
              iVar14 = (*puVar16 & 0xffffff) + (int)puVar16;
              goto LAB_00a75b2e;
            }
            if (puVar8[3] != 0) {
              (*(uint *)(gen_frame + 0x13c)) = puVar8[3];
            }
            (*(uint *)(gen_frame + 0x140)) = (uint)*((byte *)GEN_TOP(((int)puVar8 + 0x72))) + (uint)(ushort)puVar8[0x1c];
            F_00a95890(((undefined *)GEN_TOP(((int)this + 0x100))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x90)));
            *((int *)GEN_TOP(((int)this + 0xf8))) = *((int *)GEN_TOP(((int)this + 0xf8))) + 1;
            F_0042c880(((undefined1 *)(gen_frame + 0xe8)) GEN_EDX_ARG);
            F_0042c880(((undefined1 *)(gen_frame + 0x94)) GEN_EDX_ARG);
          }
        }
        puVar8 = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x30)) + 1)));
        (*(uint * PTR32 *)(gen_frame + 0x30)) = puVar8;
      } while (puVar8 < param_2);
    }
  }
  else if (param_2 != ((uint *)GEN_TOP(0x0))) {
    do {
      puVar16 = *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x30))) * 4))) + 4)));
      puVar8 = puVar16 + 5;
      puVar12 = ((uint *)GEN_TOP(0x0));
      (*(uint * PTR32 *)(gen_frame + 0x28)) = puVar8;
      (*(uint * PTR32 *)(gen_frame + 0x38)) = ((uint *)GEN_TOP(0x4));
      do {
        uVar7 = puVar8[-1];
        if ((uVar7 != 0) && (((&REFG(undefined1, 0x14b4f14))[(int)(uVar7 >> 3)] & (byte)(1 << ((byte)uVar7 & 7))) != 0)) {
          puVar12 = ((uint *)GEN_TOP(((int)puVar12 + 1)));
        }
        uVar7 = *puVar8;
        if ((uVar7 != 0) && (((&REFG(undefined1, 0x14b4f14))[(int)(uVar7 >> 3)] & (byte)(1 << ((byte)uVar7 & 7))) != 0)) {
          puVar12 = ((uint *)GEN_TOP(((int)puVar12 + 1)));
        }
        uVar7 = puVar8[1];
        if ((uVar7 != 0) && (((&REFG(undefined1, 0x14b4f14))[(int)(uVar7 >> 3)] & (byte)(1 << ((byte)uVar7 & 7))) != 0)) {
          puVar12 = ((uint *)GEN_TOP(((int)puVar12 + 1)));
        }
        uVar7 = puVar8[2];
        if ((uVar7 != 0) && (((&REFG(undefined1, 0x14b4f14))[(int)(uVar7 >> 3)] & (byte)(1 << ((byte)uVar7 & 7))) != 0)) {
          puVar12 = ((uint *)GEN_TOP(((int)puVar12 + 1)));
        }
        uVar7 = puVar8[3];
        if ((uVar7 != 0) && (((&REFG(undefined1, 0x14b4f14))[(int)(uVar7 >> 3)] & (byte)(1 << ((byte)uVar7 & 7))) != 0)) {
          puVar12 = ((uint *)GEN_TOP(((int)puVar12 + 1)));
        }
        uVar7 = puVar8[4];
        if ((uVar7 != 0) && (((&REFG(undefined1, 0x14b4f14))[(int)(uVar7 >> 3)] & (byte)(1 << ((byte)uVar7 & 7))) != 0)) {
          puVar12 = ((uint *)GEN_TOP(((int)puVar12 + 1)));
        }
        puVar8 = puVar8 + 6;
        puVar1 = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x38)) - 1)));
        (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar1;
      } while (puVar1 != ((uint *)GEN_TOP(0x0)));
      (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar12;
      uVar7 = F_00a4ffd0();
      iVar14 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x3a90)));
      uVar13 = puVar16[1] >> 3;
      bVar6 = (byte)puVar16[1] & 7;
      bVar17 = false;
      if ((iVar14 < 0) || (9 < iVar14)) {
        if ((iVar14 < 10) || (0x17 < iVar14)) {
          if (iVar14 == 0x18) {
            bVar17 = true;
          }
        }
        else {
          if (199 < uVar13) goto LAB_00a759df;
          bVar17 = (*((byte *)GEN_TOP((uVar13 + 0x15bc + uVar7))) >> GEN_SHC(7 - bVar6, 7 - bVar6) & 1) == 1;
        }
LAB_00a7559c: ;
        if (((*(uint * PTR32 *)(gen_frame + 0x38)) != ((uint *)GEN_TOP(0x0))) && (bVar17)) {
          F_0042b630(((undefined1 *)(gen_frame + 0x94)) GEN_EDX_ARG);
          F_0042b630(((undefined1 *)(gen_frame + 0xe8)) GEN_EDX_ARG);
          F_00a84fd0(&(*(uint *)(gen_frame + 0x90)) GEN_EDX_ARG);
          pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x34));
          if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x3a90))) < 0) || (9 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x3a90))))) {
            (*(uint *)(gen_frame + 0x90)) = puVar16[1];
          }
          else {
            (*(uint *)(gen_frame + 0x90)) = (ushort)puVar16[1] | 0x10000;
          }
          F_0042e430(((undefined1 *)(gen_frame + 0x94)) GEN_EDX_ARG,(*puVar16 & 0xffffff) + (int)puVar16);
          uVar7 = puVar16[2];
          (*(uint *)(gen_frame + 0x144)) = uVar7;
          if (*((int *)GEN_TOP(((int)pvVar2 + 0x3a8c))) == 2) {
            puVar8 = ((uint *)GEN_TOP(F_00ab32a0(uVar7)));
LAB_00a7564f: ;
            F_0042e430(((undefined1 *)(gen_frame + 0xe8)) GEN_EDX_ARG,(*puVar8 & 0xffffff) + (int)puVar8);
          }
          else if ((*((int *)GEN_TOP(((int)pvVar2 + 0x3a8c))) == 3) &&
                  (uVar7 = F_00ab2750(uVar7), uVar7 != 0)) {
            puVar8 = ((uint *)GEN_TOP(F_00ab2750(puVar16[2])));
            goto LAB_00a7564f;
          }
          pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x34));
          if (puVar16[3] != 0) {
            (*(uint *)(gen_frame + 0x13c)) = puVar16[3];
          }
          (*(uint *)(gen_frame + 0x140)) = (uint)*((byte *)GEN_TOP(((int)puVar16 + 0x72))) + (uint)(ushort)puVar16[0x1c];
          (*(uint * PTR32 *)(gen_frame + 0x1a8)) = (*(uint * PTR32 *)(gen_frame + 0x38));
          puVar8 = ((uint *)(gen_frame + 0x148));
          iVar14 = 4;
          puVar16 = (*(uint * PTR32 *)(gen_frame + 0x28));
          do {
            uVar7 = puVar16[-1];
            if ((uVar7 != 0) &&
               (((&REFG(undefined1, 0x14b4f14))[(int)(uVar7 >> 3)] & (byte)(1 << ((byte)uVar7 & 7))) != 0)) {
              *puVar8 = uVar7;
              puVar8 = puVar8 + 1;
            }
            uVar7 = *puVar16;
            if ((uVar7 != 0) &&
               (((&REFG(undefined1, 0x14b4f14))[(int)(uVar7 >> 3)] & (byte)(1 << ((byte)uVar7 & 7))) != 0)) {
              *puVar8 = uVar7;
              puVar8 = puVar8 + 1;
            }
            uVar7 = puVar16[1];
            if ((uVar7 != 0) &&
               (((&REFG(undefined1, 0x14b4f14))[(int)(uVar7 >> 3)] & (byte)(1 << ((byte)uVar7 & 7))) != 0)) {
              *puVar8 = uVar7;
              puVar8 = puVar8 + 1;
            }
            uVar7 = puVar16[2];
            if ((uVar7 != 0) &&
               (((&REFG(undefined1, 0x14b4f14))[(int)(uVar7 >> 3)] & (byte)(1 << ((byte)uVar7 & 7))) != 0)) {
              *puVar8 = uVar7;
              puVar8 = puVar8 + 1;
            }
            uVar7 = puVar16[3];
            if ((uVar7 != 0) &&
               (((&REFG(undefined1, 0x14b4f14))[(int)(uVar7 >> 3)] & (byte)(1 << ((byte)uVar7 & 7))) != 0)) {
              *puVar8 = uVar7;
              puVar8 = puVar8 + 1;
            }
            uVar7 = puVar16[4];
            if ((uVar7 != 0) &&
               (((&REFG(undefined1, 0x14b4f14))[(int)(uVar7 >> 3)] & (byte)(1 << ((byte)uVar7 & 7))) != 0)) {
              *puVar8 = uVar7;
              puVar8 = puVar8 + 1;
            }
            puVar16 = puVar16 + 6;
            iVar14 = iVar14 - 1;
          } while (iVar14 != 0);
          puVar8 = *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 300)));
          puVar16 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x128)));
          (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar16;
          if ((&(*(uint *)(gen_frame + 0x90)) < puVar8) && (puVar12 = ((uint *)GEN_TOP(*puVar16)), puVar12 <= &(*(uint *)(gen_frame + 0x90)))) {
            if (puVar8 == *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x130)))) {
              iVar14 = ((int)puVar8 - (int)puVar12) / 0x11c;
              if (iVar14 == -1) {
LAB_00a759fa: ;
                    
                F_00c4579a(((char *)REFP(0x108497c)));
              }
              uVar7 = ((int)*((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x130))) - (int)puVar12) / 0x11c;
              uVar13 = iVar14 + 1;
              if (uVar7 < uVar13) {
                if (-(uVar7 >> 1) - 1 < uVar7) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = uVar7 + (uVar7 >> 1);
                }
                if (uVar7 < uVar13) {
                  uVar7 = uVar13;
                }
                F_00a93ae0(puVar16 GEN_EDX_ARG,uVar7);
              }
            }
            puVar16 = ((uint *)GEN_TOP(((((int)&(*(uint *)(gen_frame + 0x90)) - (int)puVar12) / 0x11c) * 0x11c +
                              *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x128))))));
            puVar8 = *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 300)));
            (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar16;
            if (puVar8 != ((uint *)GEN_TOP(0x0))) {
              *puVar8 = *puVar16;
              F_0042cbc0(puVar8 + 1 GEN_EDX_ARG,puVar16 + 1);
              F_0042cbc0(puVar8 + 0x16 GEN_EDX_ARG,puVar16 + 0x16);
              puVar8[0x2b] = puVar16[0x2b];
              puVar8[0x2c] = puVar16[0x2c];
              puVar8[0x2d] = puVar16[0x2d];
              puVar16 = puVar16 + 0x2e;
              puVar12 = puVar8 + 0x2e;
              for (iVar14 = 0x18; iVar14 != 0; iVar14 = iVar14 - 1) {
                *puVar12 = *puVar16;
                puVar16 = puVar16 + 1;
                puVar12 = puVar12 + 1;
              }
              puVar8[0x46] = (*(uint * PTR32 *)(gen_frame + 0x38))[0x46];
            }
            *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 300))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 300))) + 0x11c;
          }
          else {
            if (puVar8 == *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x130)))) {
              iVar14 = (int)((int)puVar8 - *puVar16) / 0x11c;
              if (iVar14 == -1) goto LAB_00a759fa;
              uVar7 = (int)((int)*((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x130))) - *puVar16) / 0x11c;
              uVar13 = iVar14 + 1;
              if (uVar7 < uVar13) {
                if (-(uVar7 >> 1) - 1 < uVar7) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = uVar7 + (uVar7 >> 1);
                }
                if (uVar7 < uVar13) {
                  uVar7 = uVar13;
                }
                F_00a93ae0(puVar16 GEN_EDX_ARG,uVar7);
              }
            }
            puVar8 = *((uint * PTR32 *)GEN_TOP(((int)pvVar2 + 300)));
            if (puVar8 != ((uint *)GEN_TOP(0x0))) {
              *puVar8 = (*(uint *)(gen_frame + 0x90));
              F_0042cbc0(puVar8 + 1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x94)));
              F_0042cbc0(puVar8 + 0x16 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xe8)));
              puVar8[0x2b] = (*(uint *)(gen_frame + 0x13c));
              puVar8[0x2c] = (*(uint *)(gen_frame + 0x140));
              puVar8[0x2d] = (*(uint *)(gen_frame + 0x144));
              puVar16 = ((uint *)(gen_frame + 0x148));
              puVar12 = puVar8 + 0x2e;
              for (iVar14 = 0x18; iVar14 != 0; iVar14 = iVar14 - 1) {
                *puVar12 = *puVar16;
                puVar16 = puVar16 + 1;
                puVar12 = puVar12 + 1;
              }
              puVar8[0x46] = (uint)(*(uint * PTR32 *)(gen_frame + 0x1a8));
              puVar16 = (*(uint * PTR32 *)(gen_frame + 0x38));
            }
            puVar16[1] = puVar16[1] + 0x11c;
          }
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x120))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x120))) + 1;
          F_0042c880(((undefined1 *)(gen_frame + 0xe8)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x94)) GEN_EDX_ARG);
        }
      }
      else if (uVar13 < 200) {
        bVar17 = (*((byte *)GEN_TOP((uVar13 + 0x12ea + uVar7))) >> GEN_SHC(7 - bVar6, 7 - bVar6) & 1) == 1;
        goto LAB_00a7559c;
      }
LAB_00a759df: ;
      puVar8 = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x30)) + 1)));
      (*(uint * PTR32 *)(gen_frame + 0x30)) = puVar8;
    } while (puVar8 < param_2);
  }
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x34));
  if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x3a80))) <
      (uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x3a88))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x3a84))))) {
    puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x39cc)));
    if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar9)))(puVar9 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x39cc))) = 0;
    }
    uVar7 = F_00a76460(pvVar2 GEN_EDX_ARG);
    return uVar7;
  }
  puVar8 = (*(uint * PTR32 *)(gen_frame + 0x30));
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x3aae))) == '\0') {
    iVar14 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x100)));
    (*(int *)(gen_frame + 0x2c)) = iVar14;
    if (iVar14 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x104)))) {
      puVar16 = ((uint *)GEN_TOP((iVar14 + 0x58)));
      pvVar15 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x110)));
      (*(uint * PTR32 *)(gen_frame + 0x30)) = puVar16;
      do {
        (*(uint * PTR32 *)(gen_frame + 0x28)) = *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x114)));
        (*(int *)(gen_frame + 0x2c)) = iVar14;
        (*(uint * PTR32 *)(gen_frame + 0x30)) = puVar16;
        puVar9 = ((undefined4 *)GEN_TOP(F_00a91150(pvVar15 GEN_EDX_ARG,&(*(uint * PTR32 *)(gen_frame + 0x38)),puVar16)));
        if (((uint *)GEN_TOP(*puVar9)) == (*(uint * PTR32 *)(gen_frame + 0x28))) {
          (*(undefined4 *)(gen_frame + 0x18)) = 0;
          (*(undefined4 *)(gen_frame + 0x1c)) = 0;
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          F_00a95890(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,iVar14);
          puVar9 = ((undefined4 *)GEN_TOP(F_00a93d20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)))));
          uVar7 = F_0042cbc0(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG,puVar16);
          F_0042cbc0(((undefined1 *)(gen_frame + 0x210)) GEN_EDX_ARG,uVar7);
          (*(undefined4 *)(gen_frame + 0x264)) = 0;
          (*(undefined4 *)(gen_frame + 0x268)) = 0;
          (*(undefined4 *)(gen_frame + 0x26c)) = 0;
          if (&(*(undefined4 *)(gen_frame + 0x264)) != puVar9) {
            F_00a93680(&(*(undefined4 *)(gen_frame + 0x264)) GEN_EDX_ARG);
            (*(undefined4 *)(gen_frame + 0x264)) = *puVar9;
            (*(undefined4 *)(gen_frame + 0x268)) = puVar9[1];
            (*(undefined4 *)(gen_frame + 0x26c)) = puVar9[2];
            *puVar9 = 0;
            puVar9[1] = 0;
            puVar9[2] = 0;
          }
          F_0042c880(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
          F_00a93680(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          puVar9 = ((undefined4 *)GEN_TOP(F_004296a0(0x74,0,800)));
          *puVar9 = *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x114)));
          puVar9[1] = *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x114)));
          puVar9[2] = *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x114)));
          *(undefined2 *)(puVar9 + 0x1c) = 0;
          F_0042cbc0(((undefined1 *)(gen_frame + 0x1ac)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x210)));
          (*(undefined4 *)(gen_frame + 0x200)) = 0;
          (*(undefined4 *)(gen_frame + 0x204)) = 0;
          (*(undefined4 *)(gen_frame + 0x208)) = 0;
          F_00a93680(&(*(undefined4 *)(gen_frame + 0x200)) GEN_EDX_ARG);
          uVar5 = (*(undefined4 *)(gen_frame + 0x26c));
          uVar4 = (*(undefined4 *)(gen_frame + 0x268));
          uVar3 = (*(undefined4 *)(gen_frame + 0x264));
          (*(undefined4 *)(gen_frame + 0x264)) = 0;
          (*(undefined4 *)(gen_frame + 0x268)) = 0;
          (*(undefined4 *)(gen_frame + 0x26c)) = 0;
          (*(undefined4 *)(gen_frame + 0x200)) = uVar3;
          (*(undefined4 *)(gen_frame + 0x204)) = uVar4;
          (*(undefined4 *)(gen_frame + 0x208)) = uVar5;
          if (puVar9 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
            F_0042cbc0(puVar9 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1ac)));
            F_00a93d20(puVar9 + 0x18 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x200)));
          }
          F_00a93680(&(*(undefined4 *)(gen_frame + 0x200)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x1ac)) GEN_EDX_ARG);
          F_00a98710(pvVar15 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),puVar9,0);
          F_00a93680(&(*(undefined4 *)(gen_frame + 0x264)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x210)) GEN_EDX_ARG);
          puVar8 = ((uint *)GEN_TOP(F_00a93680(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG)));
          iVar14 = (*(int *)(gen_frame + 0x2c));
          puVar16 = (*(uint * PTR32 *)(gen_frame + 0x30));
        }
        else {
          iVar18 = iVar14;
          pvVar10 = ((undefined *)GEN_TOP(F_00a9a8b0(pvVar15 GEN_EDX_ARG,puVar16)));
          puVar8 = ((uint *)GEN_TOP(F_00a95890(pvVar10 GEN_EDX_ARG,iVar18)));
        }
        iVar14 = iVar14 + 0x11c;
        puVar16 = puVar16 + 0x47;
        (*(int *)(gen_frame + 0x2c)) = iVar14;
        (*(uint * PTR32 *)(gen_frame + 0x30)) = puVar16;
      } while (iVar14 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x104))));
    }
  }
  else {
    puVar16 = *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x128)));
    (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar16;
    if (puVar16 != *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 300)))) {
      puVar16 = puVar16 + 0x16;
      pvVar15 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x138)));
      (*(uint * PTR32 *)(gen_frame + 0x30)) = puVar16;
      do {
        (*(uint * PTR32 *)(gen_frame + 0x28)) = *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x13c)));
        (*(uint * PTR32 *)(gen_frame + 0x30)) = puVar16;
        puVar9 = ((undefined4 *)GEN_TOP(F_00a91150(pvVar15 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x2c)),puVar16)));
        if (((uint *)GEN_TOP(*puVar9)) == (*(uint * PTR32 *)(gen_frame + 0x28))) {
          (*(undefined4 *)(gen_frame + 0x18)) = 0;
          (*(undefined4 *)(gen_frame + 0x1c)) = 0;
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          F_00a95890(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,(*(uint * PTR32 *)(gen_frame + 0x38)));
          puVar9 = ((undefined4 *)GEN_TOP(F_00a93d20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)))));
          uVar7 = F_0042cbc0(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(uint * PTR32 *)(gen_frame + 0x30)));
          F_0042cbc0(((undefined1 *)(gen_frame + 0x210)) GEN_EDX_ARG,uVar7);
          (*(undefined4 *)(gen_frame + 0x264)) = 0;
          (*(undefined4 *)(gen_frame + 0x268)) = 0;
          (*(undefined4 *)(gen_frame + 0x26c)) = 0;
          if (&(*(undefined4 *)(gen_frame + 0x264)) != puVar9) {
            F_00a93680(&(*(undefined4 *)(gen_frame + 0x264)) GEN_EDX_ARG);
            (*(undefined4 *)(gen_frame + 0x264)) = *puVar9;
            (*(undefined4 *)(gen_frame + 0x268)) = puVar9[1];
            (*(undefined4 *)(gen_frame + 0x26c)) = puVar9[2];
            *puVar9 = 0;
            puVar9[1] = 0;
            puVar9[2] = 0;
          }
          F_0042c880(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
          F_00a93680(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          puVar9 = ((undefined4 *)GEN_TOP(F_004296a0(0x74,0,800)));
          *puVar9 = *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x13c)));
          puVar9[1] = *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x13c)));
          puVar9[2] = *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x13c)));
          *(undefined2 *)(puVar9 + 0x1c) = 0;
          F_0042cbc0(((undefined1 *)(gen_frame + 0x1ac)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x210)));
          (*(undefined4 *)(gen_frame + 0x200)) = 0;
          (*(undefined4 *)(gen_frame + 0x204)) = 0;
          (*(undefined4 *)(gen_frame + 0x208)) = 0;
          F_00a93680(&(*(undefined4 *)(gen_frame + 0x200)) GEN_EDX_ARG);
          (*(undefined4 *)(gen_frame + 0x204)) = (*(undefined4 *)(gen_frame + 0x268));
          (*(undefined4 *)(gen_frame + 0x200)) = (*(undefined4 *)(gen_frame + 0x264));
          (*(undefined4 *)(gen_frame + 0x208)) = (*(undefined4 *)(gen_frame + 0x26c));
          (*(undefined4 *)(gen_frame + 0x264)) = 0;
          (*(undefined4 *)(gen_frame + 0x268)) = 0;
          (*(undefined4 *)(gen_frame + 0x26c)) = 0;
          if (puVar9 != ((undefined4 *)GEN_TOP(0xfffffff4))) {
            F_0042cbc0(puVar9 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1ac)));
            F_00a93d20(puVar9 + 0x18 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x200)));
          }
          F_00a93680(&(*(undefined4 *)(gen_frame + 0x200)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x1ac)) GEN_EDX_ARG);
          F_00a98710(pvVar15 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),puVar9,0);
          F_00a93680(&(*(undefined4 *)(gen_frame + 0x264)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x210)) GEN_EDX_ARG);
          F_00a93680(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG);
          puVar16 = (*(uint * PTR32 *)(gen_frame + 0x30));
        }
        else {
          puVar8 = (*(uint * PTR32 *)(gen_frame + 0x38));
          pvVar10 = ((undefined *)GEN_TOP(F_00a9a8b0(pvVar15 GEN_EDX_ARG,puVar16)));
          F_00a95890(pvVar10 GEN_EDX_ARG,puVar8);
        }
        puVar8 = (*(uint * PTR32 *)(gen_frame + 0x38)) + 0x47;
        puVar16 = puVar16 + 0x47;
        (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar8;
        (*(uint * PTR32 *)(gen_frame + 0x30)) = puVar16;
      } while (puVar8 != *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 300))));
    }
  }
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x34));
  puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x39cc)));
  if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar8 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar9)))(puVar9 GEN_EDX_ARG,1)));
    *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x39cc))) = 0;
  }
  *((undefined1 *)GEN_TOP(((int)pvVar2 + 0x3a65))) = 0;
  if (*((char *)GEN_TOP(((int)pvVar2 + 0x3a67))) == '\0') {
    if (*((char *)GEN_TOP(((int)pvVar2 + 0x3aae))) == '\0') {
      piVar11 = *((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x3a9c)));
    }
    else {
      piVar11 = *((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x3aa0)));
    }
    if (piVar11 != ((int *)GEN_TOP(0x0))) {
      puVar8 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 4))))(piVar11 GEN_EDX_ARG,10)));
    }
  }
  else if (*((char *)GEN_TOP(((int)pvVar2 + 0x3aae))) == '\0') {
    piVar11 = *((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x3a9c)));
    if (piVar11 != ((int *)GEN_TOP(0x0))) {
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 4))))(piVar11 GEN_EDX_ARG,0xb);
      *((undefined1 *)GEN_TOP(((int)pvVar2 + 0x3a67))) = 0;
      return uVar7;
    }
  }
  else {
    piVar11 = *((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x3aa0)));
    if (piVar11 != ((int *)GEN_TOP(0x0))) {
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 4))))(piVar11 GEN_EDX_ARG,0xb);
      *((undefined1 *)GEN_TOP(((int)pvVar2 + 0x3a67))) = 0;
      return uVar7;
    }
  }
  *((undefined1 *)GEN_TOP(((int)pvVar2 + 0x3a67))) = 0;
  return (uint)puVar8;
}

/* ref: FUN_00a760e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a760e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21)
{
  GEN_ENTER(0xa760e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[21];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  gen_args[8] = gen_a9;
  gen_args[9] = gen_a10;
  gen_args[10] = gen_a11;
  gen_args[11] = gen_a12;
  gen_args[12] = gen_a13;
  gen_args[13] = gen_a14;
  gen_args[14] = gen_a15;
  gen_args[15] = gen_a16;
  gen_args[16] = gen_a17;
  gen_args[17] = gen_a18;
  gen_args[18] = gen_a19;
  gen_args[19] = gen_a20;
  gen_args[20] = gen_a21;
  uint uVar1;
  
  uVar1 = F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]));
  F_0042c880(&(*(undefined4 *)&gen_args[0]) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a76110 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a76110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa76110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_FRAME_DECL_GS(0x10c, 4, 4);
  undefined * pvVar1;
  uint * puVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined4 * puVar6;
  int iVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x104)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x108));
  (*(int *)(gen_frame + 0x30)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = this;
  (*(uint *)(gen_frame + 0x34)) = param_3;
  uVar4 = param_3;
  if (*((int *)GEN_TOP(((int)this + 0x39b4))) == 9) {
    (*(uint *)(gen_frame + 0x3c)) = 0;
    if (param_2 != 0) {
      (*(int *)(gen_frame + 0x40)) = param_3 * 0x11c;
      pvVar1 = ((undefined *)GEN_TOP(((int)this + 0x110)));
      do {
        puVar2 = *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x30)) + (*(uint *)(gen_frame + 0x3c)) * 4))) + 4)));
        iVar7 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x100))) + (*(int *)(gen_frame + 0x40));
        (*(uint * PTR32 *)(gen_frame + 0x48)) = puVar2;
        F_0042e430(((undefined *)GEN_TOP((iVar7 + 4))) GEN_EDX_FWD,(*puVar2 & 0xffffff) + (int)puVar2);
        puVar2 = ((uint *)GEN_TOP(F_00ab32a0((uint)(byte)puVar2[3])));
        pvVar5 = ((undefined *)GEN_TOP((iVar7 + 0x58)));
        if (puVar2 == ((uint *)GEN_TOP(0x0))) {
          F_0042aca0(pvVar5 GEN_EDX_ARG);
        }
        else {
          F_0042e430(pvVar5 GEN_EDX_ARG,(*puVar2 & 0xffffff) + (int)puVar2);
        }
        *((uint *)GEN_TOP((iVar7 + 0xb0))) = (uint)*((ushort *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x48)) + 10)));
        (*(uint * PTR32 *)(gen_frame + 0x48)) = ((uint *)GEN_TOP(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x114)))));
        piVar3 = ((int *)GEN_TOP(F_00a91150(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1c)),pvVar5)));
        if (((uint *)GEN_TOP(*piVar3)) == (*(uint * PTR32 *)(gen_frame + 0x48))) {
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          (*(undefined4 *)(gen_frame + 0x24)) = 0;
          (*(undefined4 *)(gen_frame + 0x28)) = 0;
          F_00a95890(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,iVar7);
          puVar6 = ((undefined4 *)GEN_TOP(F_00a93d20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)))));
          uVar4 = F_0042cbc0(((undefined1 *)(gen_frame + 0x4c)) GEN_EDX_ARG,pvVar5);
          F_0042cbc0(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG,uVar4);
          (*(undefined4 *)(gen_frame + 0xf4)) = 0;
          (*(undefined4 *)(gen_frame + 0xf8)) = 0;
          (*(undefined4 *)(gen_frame + 0xfc)) = 0;
          if (&(*(undefined4 *)(gen_frame + 0xf4)) != puVar6) {
            F_00a93680(&(*(undefined4 *)(gen_frame + 0xf4)) GEN_EDX_ARG);
            (*(undefined4 *)(gen_frame + 0xf4)) = *puVar6;
            (*(undefined4 *)(gen_frame + 0xf8)) = puVar6[1];
            (*(undefined4 *)(gen_frame + 0xfc)) = puVar6[2];
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
          }
          F_0042c880(((undefined1 *)(gen_frame + 0x4c)) GEN_EDX_ARG);
          F_00a93680(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
          puVar6 = ((undefined4 *)GEN_TOP(F_004296a0(0x74,0,800)));
          *puVar6 = *((undefined4 *)GEN_TOP(((int)this + 0x114)));
          puVar6[1] = *((undefined4 *)GEN_TOP(((int)this + 0x114)));
          puVar6[2] = *((undefined4 *)GEN_TOP(((int)this + 0x114)));
          *(undefined2 *)(puVar6 + 0x1c) = 0;
          F_00a99200((int)this + 0x11d,puVar6 + 3,((undefined1 *)(gen_frame + 0xa0)));
          F_00a98710(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar6,0);
          F_00a93680(&(*(undefined4 *)(gen_frame + 0xf4)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG);
          F_00a93680(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG);
        }
        else {
          (*(uint * PTR32 *)(gen_frame + 0x48)) = ((uint *)GEN_TOP(0x0));
          piVar3 = ((int *)GEN_TOP(F_00a9a8b0(pvVar1 GEN_EDX_ARG,pvVar5)));
          (*(int *)(gen_frame + 0x44)) = *piVar3;
          uVar4 = F_00a9a8b0(pvVar1 GEN_EDX_ARG,pvVar5);
          if ((*(int *)(gen_frame + 0x44)) != *((int *)GEN_TOP((uVar4 + 4)))) {
            do {
              if (*((uint *)GEN_TOP((iVar7 + 0xb0))) < *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x44)) + 0xb0)))) {
                pvVar5 = ((undefined *)GEN_TOP(F_00a9a8b0(pvVar1 GEN_EDX_ARG,pvVar5)));
                F_00a95d60(pvVar5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x44)),iVar7);
                break;
              }
              piVar3 = ((int *)GEN_TOP(F_00a9a8b0(pvVar1 GEN_EDX_ARG,pvVar5)));
              if ((*(uint * PTR32 *)(gen_frame + 0x48)) == ((uint *)GEN_TOP(((piVar3[1] - *piVar3) / 0x11c - 1)))) {
                pvVar5 = ((undefined *)GEN_TOP(F_00a9a8b0(pvVar1 GEN_EDX_ARG,pvVar5)));
                F_00a95890(pvVar5 GEN_EDX_ARG,iVar7);
                break;
              }
              (*(uint * PTR32 *)(gen_frame + 0x48)) = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x48)) + 1)));
              (*(int *)(gen_frame + 0x44)) = (*(int *)(gen_frame + 0x44)) + 0x11c;
              uVar4 = F_00a9a8b0(pvVar1 GEN_EDX_ARG,pvVar5);
            } while ((*(int *)(gen_frame + 0x44)) != *((int *)GEN_TOP((uVar4 + 4))));
          }
        }
        (*(int *)(gen_frame + 0x40)) = (*(int *)(gen_frame + 0x40)) + 0x11c;
        uVar4 = (*(uint *)(gen_frame + 0x3c)) + 1;
        (*(uint *)(gen_frame + 0x3c)) = uVar4;
      } while (uVar4 < param_2);
    }
    pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x38));
    puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x39f4)));
    iVar7 = (*(uint *)(gen_frame + 0x34)) + param_2;
    if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x39f4))) = 0;
    }
    uVar4 = F_00a765d0(pvVar1 GEN_EDX_ARG,iVar7);
  }
  return uVar4;
}

/* ref: FUN_00a76460 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a76460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa76460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * this_00;
  uint uVar4;
  
  piVar2 = ((int *)GEN_TOP(F_0052fba0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,((char *)REFP(0x10e7774)))));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  uVar4 = ((*((int *)GEN_TOP(((int)this + 0x3a88))) - *((int *)GEN_TOP(((int)this + 0x3a80)))) -
          *((int *)GEN_TOP(((int)this + 0x3a84)))) + 1;
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  uVar4 = uVar4 - 1;
  if (uVar4 != 0) {
    this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
    if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
      this_00 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      F_00cb4700(this_00 GEN_EDX_ARG,uVar4,0);
      this_00[5] = uVar4;
      *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e78b0));
      this_00[6] = this;
      this_00[7] = ((code *)REFP(0xa753d0));
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39cc))) = this_00;
    if (*((int *)GEN_TOP(((int)this + 0x39c8))) == 0) {
      uVar3 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x5d);
      *((uint *)GEN_TOP(((int)this + 0x39c8))) = uVar3;
    }
    uVar3 = 0;
    if (uVar4 != 0) {
      do {
        iVar1 = *((int *)GEN_TOP(((int)this + 0x3a80)));
        *((int *)GEN_TOP(((int)this + 0x3a80))) = iVar1 + 1;
        F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x39cc))) GEN_EDX_ARG,uVar3,*((int *)GEN_TOP(((int)this + 0x3a84))) + iVar1);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x39c8))) + 0x48))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x39c8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x39cc))));
    return uVar4;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 0;
  if (*((char *)GEN_TOP(((int)this + 0x3a67))) == '\0') {
    if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
    }
    else {
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0)));
    }
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,10);
    }
  }
  else if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,0xb);
      *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 0;
      return uVar4;
    }
  }
  else {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,0xb);
      *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 0;
      return uVar4;
    }
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 0;
  return uVar3;
}

/* ref: FUN_00a765d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a765d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa765d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  char cVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  int * piVar8;
  byte bVar9;
  
  if (param_1 < *((uint *)GEN_TOP(((int)this + 0xf8)))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x39b4))) = 9;
    if (*((int *)GEN_TOP(((int)this + 0x39f0))) == 0) {
      uVar3 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x102);
      *((uint *)GEN_TOP(((int)this + 0x39f0))) = uVar3;
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x39f0))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x39f0))) GEN_EDX_ARG);
    uVar3 = *((int *)GEN_TOP(((int)this + 0xf8))) - param_1;
    if (uVar5 < uVar3) {
      uVar3 = uVar5;
    }
    puVar6 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
    if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar6 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      F_00cb4700(puVar6 GEN_EDX_ARG,uVar3,param_1);
      puVar6[5] = uVar3;
      *puVar6 = (*(undefined * PTR32 (*)[2])REFP(0x10e78b0));
      puVar6[6] = this;
      puVar6[7] = ((code *)REFP(0xa76110));
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39f4))) = puVar6;
    bVar9 = 0;
    if (uVar3 != 0) {
      uVar5 = 0;
      do {
        F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x39f4))) GEN_EDX_ARG,uVar5,
                     *((undefined4 *)GEN_TOP(((uVar5 + param_1) * 0x11c + *((int *)GEN_TOP(((int)this + 0x100)))))));
        bVar9 = bVar9 + 1;
        uVar5 = (uint)bVar9;
      } while (uVar5 < uVar3);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x39f0))) + 0x48))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x39f0))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x39f4))));
    return uVar3;
  }
  puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39f4)));
  if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x39f4))) = 0;
  }
  piVar4 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x114)))));
  if (piVar4 != *((int * PTR32 *)GEN_TOP(((int)this + 0x114)))) {
    do {
      iVar7 = piVar4[0x18];
      if (iVar7 != piVar4[0x19]) {
        do {
          *((undefined4 *)GEN_TOP((iVar7 + 0xb0))) = 0;
          iVar7 = iVar7 + 0x11c;
        } while (iVar7 != piVar4[0x19]);
      }
      if (*((char *)GEN_TOP(((int)piVar4 + 0x71))) == '\0') {
        piVar8 = ((int *)GEN_TOP(piVar4[2]));
        if (*((char *)GEN_TOP(((int)piVar8 + 0x71))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar8 + 0x71)));
          piVar4 = piVar8;
          piVar8 = ((int *)GEN_TOP(*piVar8));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar8 + 0x71)));
            piVar4 = piVar8;
            piVar8 = ((int *)GEN_TOP(*piVar8));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x71)));
          piVar2 = ((int *)GEN_TOP(piVar4[1]));
          piVar8 = piVar4;
          while ((piVar4 = piVar2, cVar1 == '\0' && (piVar8 == ((int *)GEN_TOP(piVar4[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x71)));
            piVar2 = ((int *)GEN_TOP(piVar4[1]));
            piVar8 = piVar4;
          }
        }
      }
    } while (piVar4 != *((int * PTR32 *)GEN_TOP(((int)this + 0x114))));
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 0;
  if (*((char *)GEN_TOP(((int)this + 0x3a67))) == '\0') {
    if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
      piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
    }
    else {
      piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0)));
    }
    if (piVar8 != ((int *)GEN_TOP(0x0))) {
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 4))))(piVar8 GEN_EDX_ARG,10)));
    }
  }
  else if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
    piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
    if (piVar8 != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 4))))(piVar8 GEN_EDX_ARG,0xb);
      *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 0;
      return uVar3;
    }
  }
  else {
    piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0)));
    if (piVar8 != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 4))))(piVar8 GEN_EDX_ARG,0xb);
      *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 0;
      return uVar3;
    }
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 0;
  return (uint)piVar4;
}

/* ref: FUN_00a767f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a767f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa767f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined * pvVar1;
  char cVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  uint uVar8;
  
  uVar8 = (*(uint *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) * 0x34 + *((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x5c))))));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(((int)this + 0x10)));
  piVar7 = ((int *)GEN_TOP(F_00a912a0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,&(*(uint *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0xc)))));
  uVar5 = (*(uint *)&gen_args[0]);
  if ((*(uint *)&gen_args[0]) != *((uint *)GEN_TOP(((int)this + 0x14)))) {
    pvVar1 = ((undefined *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x10)));
    (*(uint *)&gen_args[0]) = uVar8;
    piVar7 = ((int *)GEN_TOP(F_00a8fd90(pvVar1 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[0]))));
    uVar8 = (*(uint *)&gen_args[0]);
    (*(uint *)&gen_args[0]) = (*(uint *)&gen_args[0]) & 0xffffff;
    piVar4 = (*(int * PTR32 *)(gen_frame + 0x0));
    while (piVar4 != (*(int * PTR32 *)(gen_frame + 0x4))) {
      if (((int *)GEN_TOP(piVar4[4])) == (*(int * PTR32 *)&gen_args[1])) {
        if ((piVar4[3] == *((int *)GEN_TOP((uVar5 + 0x20)))) && (piVar4[4] == *((int *)GEN_TOP((uVar5 + 0x24))))) {
          (*(uint *)&gen_args[0]) = CONCAT13(1,(int3)uVar8);
        }
        piVar7 = ((int *)GEN_TOP(F_00953740(((undefined *)GEN_TOP((uVar5 + 0x10))) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]),piVar4)));
        break;
      }
      piVar7 = (*(int * PTR32 *)&gen_args[1]);
      if (*((char *)GEN_TOP(((int)piVar4 + 0x15))) == '\0') {
        piVar3 = ((int *)GEN_TOP(piVar4[2]));
        if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
          cVar2 = *((char *)GEN_TOP((*piVar3 + 0x15)));
          piVar7 = ((int *)GEN_TOP(*piVar3));
          while (piVar4 = piVar3, cVar2 == '\0') {
            cVar2 = *((char *)GEN_TOP((*piVar7 + 0x15)));
            piVar3 = piVar7;
            piVar7 = ((int *)GEN_TOP(*piVar7));
          }
        }
        else {
          cVar2 = *((char *)GEN_TOP((piVar4[1] + 0x15)));
          piVar6 = ((int *)GEN_TOP(piVar4[1]));
          piVar3 = piVar4;
          while ((piVar7 = piVar6, piVar4 = piVar7, cVar2 == '\0' && (piVar3 == ((int *)GEN_TOP(piVar7[2])))))
          {
            cVar2 = *((char *)GEN_TOP((piVar7[1] + 0x15)));
            piVar6 = ((int *)GEN_TOP(piVar7[1]));
            piVar3 = piVar7;
          }
        }
      }
    }
    pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (*((int *)GEN_TOP((uVar5 + 0x18))) == 0) {
      F_00a8df70((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0xc)));
      uVar8 = F_00a9aa80(pvVar1 GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]),(*(int * PTR32 *)(gen_frame + 0x0)),(*(int * PTR32 *)(gen_frame + 0x4)));
      return uVar8;
    }
    if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) != '\0') {
      piVar7 = ((int *)GEN_TOP(F_00a90f60(((undefined *)GEN_TOP((uVar5 + 0x10))) GEN_EDX_ARG)));
    }
  }
  return (uint)piVar7;
}

/* ref: FUN_00a76910 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a76910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa76910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x21c, 4, 4);
  int * piVar1;
  uint * puVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  int * piVar8;
  uint * puVar9;
  uint * puVar10;
  int * piVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x214)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x218));
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  uVar4 = F_00a4ffd0();
  (*(uint *)(gen_frame + 0x24)) = uVar4;
  (*(uint *)(gen_frame + 0x28)) = 0;
  do {
    (*(byte *)(gen_frame + 0x3d)) = *((byte *)GEN_TOP(((*(uint *)(gen_frame + 0x24)) + 0x1594 + (*(uint *)(gen_frame + 0x28)))));
    (*(uint *)(gen_frame + 0x2c)) = 0;
    (*(int *)(gen_frame + 0x30)) = 7;
    uVar4 = (*(uint *)(gen_frame + 0x28));
    do {
      uVar6 = (*(uint *)(gen_frame + 0x2c));
      if (((*(byte *)(gen_frame + 0x3d)) >> GEN_SHC((byte)(*(int *)(gen_frame + 0x30)), (byte)(*(int *)(gen_frame + 0x30))) & 1) != 0) {
        F_0042b630(((undefined1 *)(gen_frame + 0x98)) GEN_EDX_ARG);
        F_0042b630(((undefined1 *)(gen_frame + 0xec)) GEN_EDX_ARG);
        F_00a84fd0(&(*(int *)(gen_frame + 0x94)) GEN_EDX_ARG);
        piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x104)));
        puVar9 = ((uint *)GEN_TOP(((int)this + 0x100)));
        (*(int *)(gen_frame + 0x94)) = uVar6 + uVar4 * 8;
        (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar9;
        if ((&(*(int *)(gen_frame + 0x94)) < piVar1) && (piVar8 = ((int *)GEN_TOP(*puVar9)), piVar8 <= &(*(int *)(gen_frame + 0x94)))) {
          if (piVar1 == *((int * PTR32 *)GEN_TOP(((int)this + 0x108)))) {
            iVar7 = ((int)piVar1 - (int)piVar8) / 0x11c;
            if (iVar7 == -1) {
LAB_00a76e17: ;
                    
              F_00c4579a("vector<T> too long");
            }
            uVar4 = ((int)*((int * PTR32 *)GEN_TOP(((int)this + 0x108))) - (int)piVar8) / 0x11c;
            uVar6 = iVar7 + 1;
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
              F_00a93ae0(puVar9 GEN_EDX_ARG,uVar4);
            }
          }
          puVar2 = *((uint * PTR32 *)GEN_TOP(((int)this + 0x104)));
          puVar9 = ((uint *)GEN_TOP(((((int)&(*(int *)(gen_frame + 0x94)) - (int)piVar8) / 0x11c) * 0x11c + *puVar9)));
          (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar9;
          if (puVar2 != ((uint *)GEN_TOP(0x0))) {
            *puVar2 = *puVar9;
            F_0042cbc0(puVar2 + 1 GEN_EDX_ARG,puVar9 + 1);
            F_0042cbc0(puVar2 + 0x16 GEN_EDX_ARG,puVar9 + 0x16);
            puVar2[0x2b] = puVar9[0x2b];
            puVar2[0x2c] = puVar9[0x2c];
            puVar2[0x2d] = puVar9[0x2d];
            puVar9 = puVar9 + 0x2e;
            puVar10 = puVar2 + 0x2e;
            for (iVar7 = 0x18; iVar7 != 0; iVar7 = iVar7 - 1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            puVar2[0x46] = (*(uint * PTR32 *)(gen_frame + 0x38))[0x46];
          }
        }
        else {
          if (piVar1 == *((int * PTR32 *)GEN_TOP(((int)this + 0x108)))) {
            iVar7 = (int)((int)piVar1 - *puVar9) / 0x11c;
            if (iVar7 == -1) goto LAB_00a76e17;
            uVar4 = (int)((int)*((int * PTR32 *)GEN_TOP(((int)this + 0x108))) - *puVar9) / 0x11c;
            uVar6 = iVar7 + 1;
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
              F_00a93ae0(puVar9 GEN_EDX_ARG,uVar4);
            }
          }
          piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x104)));
          if (piVar1 != ((int *)GEN_TOP(0x0))) {
            *piVar1 = (*(int *)(gen_frame + 0x94));
            F_0042cbc0(piVar1 + 1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x98)));
            F_0042cbc0(piVar1 + 0x16 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xec)));
            piVar1[0x2b] = (*(int *)(gen_frame + 0x140));
            piVar1[0x2c] = (*(int *)(gen_frame + 0x144));
            piVar1[0x2d] = (*(int *)(gen_frame + 0x148));
            piVar8 = ((int *)(gen_frame + 0x14c));
            piVar11 = piVar1 + 0x2e;
            for (iVar7 = 0x18; iVar7 != 0; iVar7 = iVar7 - 1) {
              *piVar11 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar11 = piVar11 + 1;
            }
            piVar1[0x46] = (*(int *)(gen_frame + 0x1ac));
          }
        }
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x104))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x104))) + 0x11c;
        F_0042c880(((undefined1 *)(gen_frame + 0xec)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x98)) GEN_EDX_ARG);
        uVar4 = (*(uint *)(gen_frame + 0x28));
        uVar6 = (*(uint *)(gen_frame + 0x2c));
        this = (*(undefined * PTR32 *)(gen_frame + 0x34));
      }
      (*(uint *)(gen_frame + 0x2c)) = uVar6 + 1;
      (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) - 1;
    } while (uVar6 + 1 < 8);
    (*(uint *)(gen_frame + 0x28)) = uVar4 + 1;
    if (0x26 < uVar4 + 1) {
      (*(byte *)(gen_frame + 0x3f)) = 0;
      (*(byte *)(gen_frame + 0x3e)) = 0;
      bVar3 = F_006c0510((*(uint *)(gen_frame + 0x24)),&(*(byte *)(gen_frame + 0x3f)),&(*(byte *)(gen_frame + 0x3e)));
      if ((bVar3 != 0) && ((*(byte *)(gen_frame + 0x3f)) != 0)) {
        F_0042b630(((undefined1 *)(gen_frame + 0x98)) GEN_EDX_ARG);
        F_0042b630(((undefined1 *)(gen_frame + 0xec)) GEN_EDX_ARG);
        F_00a84fd0(&(*(int *)(gen_frame + 0x94)) GEN_EDX_ARG);
        (*(int *)(gen_frame + 0x94)) = 0xffff;
        F_00ab0230(0x234,((undefined1 *)(gen_frame + 0xec)));
        F_00ab93a0(0x237,(uint)(*(byte *)(gen_frame + 0x3f)),(uint)(*(byte *)(gen_frame + 0x3e)),((undefined1 *)(gen_frame + 0x98)));
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        F_00a95890(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x94)));
        puVar5 = ((undefined4 *)GEN_TOP(F_00a93d20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10)))));
        uVar4 = F_0042cbc0(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xec)));
        F_0042cbc0(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,uVar4);
        (*(undefined4 *)(gen_frame + 0x204)) = 0;
        (*(undefined4 *)(gen_frame + 0x208)) = 0;
        (*(undefined4 *)(gen_frame + 0x20c)) = 0;
        if (&(*(undefined4 *)(gen_frame + 0x204)) != puVar5) {
          F_00a93680(&(*(undefined4 *)(gen_frame + 0x204)) GEN_EDX_ARG);
          (*(undefined4 *)(gen_frame + 0x204)) = *puVar5;
          (*(undefined4 *)(gen_frame + 0x208)) = puVar5[1];
          (*(undefined4 *)(gen_frame + 0x20c)) = puVar5[2];
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
        F_00a93680(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        puVar5 = ((undefined4 *)GEN_TOP(F_004296a0(0x74,0,800)));
        *puVar5 = *((undefined4 *)GEN_TOP(((int)this + 0x114)));
        puVar5[1] = *((undefined4 *)GEN_TOP(((int)this + 0x114)));
        puVar5[2] = *((undefined4 *)GEN_TOP(((int)this + 0x114)));
        *(undefined2 *)(puVar5 + 0x1c) = 0;
        F_00a99200((int)this + 0x11d,puVar5 + 3,((undefined1 *)(gen_frame + 0x1b0)));
        F_00a98710(((undefined *)GEN_TOP(((int)this + 0x110))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)),puVar5,0);
        F_00a93680(&(*(undefined4 *)(gen_frame + 0x204)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
        F_00a93680(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0xec)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x98)) GEN_EDX_ARG);
      }
      *((int *)GEN_TOP(((int)this + 0xf8))) =
           (*((int *)GEN_TOP(((int)this + 0x104))) - *((int *)GEN_TOP(((int)this + 0x100)))) / 0x11c;
      uVar4 = F_00a765d0(this GEN_EDX_ARG,0);
      return uVar4;
    }
  } while( true );
}

/* ref: FUN_00a76e30 */
GEN_OWN_GS GEN_FRAME uint F_00a76e30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5))
{
  GEN_ENTER(0xa76e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_FRAME_DECL_GS(0x30, 0, 4);
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  ulonglong uVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 * PTR32 * ppuVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c));
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  iVar1 = REFG(int, 0x1379694);
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar3;
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  *puVar3 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  if ((*(int * PTR32 *)(gen_frame + 0x18)) == ((int *)GEN_TOP(0x0))) {
    F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    goto LAB_00a76fe0;
  }
  if ((param_2 == 0) || (iVar1 == 0)) {
LAB_00a76ece: ;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar4 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x20))));
      *((int *)GEN_TOP(((int)pvVar4 + 0x54))) = *((int *)GEN_TOP(((int)pvVar4 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar4 + 0x54))) < 1) {
        F_0042c880(pvVar4 GEN_EDX_ARG);
        F_00406ad0(pvVar4);
      }
    }
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_4;
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar4 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x20))));
      *((int *)GEN_TOP(((int)pvVar4 + 0x54))) = *((int *)GEN_TOP(((int)pvVar4 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar4 + 0x54))) < 1) {
        F_0042c880(pvVar4 GEN_EDX_ARG);
        F_00406ad0(pvVar4);
      }
    }
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_5;
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar4 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x20))));
      *((int *)GEN_TOP(((int)pvVar4 + 0x54))) = *((int *)GEN_TOP(((int)pvVar4 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar4 + 0x54))) < 1) {
        F_0042c880(pvVar4 GEN_EDX_ARG);
        F_00406ad0(pvVar4);
      }
    }
    ppuVar9 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
    uVar8 = 0;
    uVar7 = 0;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG)));
    F_0046abb0(pvVar4 GEN_EDX_ARG,param_1,uVar7,uVar8,ppuVar9);
  }
  else {
    dVar6 = F_00a600a0(iVar1,param_2);
    if (!((double)param_6 <= dVar6)) goto LAB_00a76ece;
  }
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
LAB_00a76fe0: ;
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar5;
}

/* ref: FUN_00a77000 */
GEN_OWN_GS GEN_FRAME uint F_00a77000(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7), GEN_P(int param_9, unsigned int gen_a8), GEN_P(int param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xa77000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  GEN_PIN(int param_9 = (int)gen_a8;)
  GEN_PIN(int param_10 = (int)gen_a9;)
  GEN_FRAME_DECL_GS(0x34, 12, 4);
  int * piVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  ulonglong uVar6;
  int * PTR32 * ppiVar7;
  
  piVar1 = REFG(int * PTR32, 0x1379694);
  GEN_COOKIE((*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30));
  if (param_1 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
    piVar3 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
    (*(int * PTR32 *)(gen_frame + 0x0)) = piVar3;
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      *piVar3 = 0;
      piVar3[1] = 0;
    }
    *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(int *)(gen_frame + 0x18)) = 2;
    if (param_2 == piVar1) {
      (*(int *)(gen_frame + 0x18)) = 0;
    }
    else if ((*((byte *)GEN_TOP(((int)param_2 + 0x2dd2))) & 0x10) == 0) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG);
      if ((uVar4 == 2) || (bVar2 = F_007608a0(param_2), bVar2 != 0)) {
        (*(int *)(gen_frame + 0x18)) = 3;
      }
    }
    else {
      (*(int *)(gen_frame + 0x18)) = 1;
    }
    (*(int *)(gen_frame + 0x1c)) = 2;
    if (param_1 == piVar1) {
      (*(int *)(gen_frame + 0x1c)) = 0;
    }
    else if ((*((byte *)GEN_TOP(((int)param_1 + 0x2dd2))) & 0x10) == 0) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
      if ((uVar4 == 2) || (bVar2 = F_007608a0(param_1), bVar2 != 0)) {
        (*(int *)(gen_frame + 0x1c)) = 3;
      }
    }
    else {
      (*(int *)(gen_frame + 0x1c)) = 1;
    }
    if (param_3 == 3) {
      if ((*(int *)(gen_frame + 0x1c)) == 0) {
        param_3 = 5;
      }
    }
    else if ((param_3 == 4) && ((*(int *)(gen_frame + 0x1c)) == 0)) {
      param_3 = 6;
    }
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x18));
    (*(int * PTR32 *)(gen_frame + 0x24)) = &(*(int *)(gen_frame + 0x20));
    (*(char *)(gen_frame + 0x28)) = '\0';
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x20)));
    if ((((*(int * PTR32 *)(gen_frame + 0x24)) != ((int *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x28)) != '\0')) && ((*(char *)(gen_frame + 0x28)) == '\x01')) {
      pvVar5 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x24))));
      *((int *)GEN_TOP(((int)pvVar5 + 0x54))) = *((int *)GEN_TOP(((int)pvVar5 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar5 + 0x54))) < 1) {
        F_0042c880(pvVar5 GEN_EDX_ARG);
        F_00406ad0(pvVar5);
      }
    }
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x1c));
    (*(int * PTR32 *)(gen_frame + 0x24)) = &(*(int *)(gen_frame + 0x20));
    (*(char *)(gen_frame + 0x28)) = '\0';
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x20)));
    if ((((*(int * PTR32 *)(gen_frame + 0x24)) != ((int *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x28)) != '\0')) && ((*(char *)(gen_frame + 0x28)) == '\x01')) {
      pvVar5 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x24))));
      *((int *)GEN_TOP(((int)pvVar5 + 0x54))) = *((int *)GEN_TOP(((int)pvVar5 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar5 + 0x54))) < 1) {
        F_0042c880(pvVar5 GEN_EDX_ARG);
        F_00406ad0(pvVar5);
      }
    }
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x20)) = param_4;
    (*(int * PTR32 *)(gen_frame + 0x24)) = &(*(int *)(gen_frame + 0x20));
    (*(char *)(gen_frame + 0x28)) = '\0';
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x20)));
    if ((((*(int * PTR32 *)(gen_frame + 0x24)) != ((int *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x28)) != '\0')) && ((*(char *)(gen_frame + 0x28)) == '\x01')) {
      pvVar5 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x24))));
      *((int *)GEN_TOP(((int)pvVar5 + 0x54))) = *((int *)GEN_TOP(((int)pvVar5 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar5 + 0x54))) < 1) {
        F_0042c880(pvVar5 GEN_EDX_ARG);
        F_00406ad0(pvVar5);
      }
    }
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x20)) = param_5;
    (*(int * PTR32 *)(gen_frame + 0x24)) = &(*(int *)(gen_frame + 0x20));
    (*(char *)(gen_frame + 0x28)) = '\0';
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x20)));
    if ((((*(int * PTR32 *)(gen_frame + 0x24)) != ((int *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x28)) != '\0')) && ((*(char *)(gen_frame + 0x28)) == '\x01')) {
      pvVar5 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x24))));
      *((int *)GEN_TOP(((int)pvVar5 + 0x54))) = *((int *)GEN_TOP(((int)pvVar5 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar5 + 0x54))) < 1) {
        F_0042c880(pvVar5 GEN_EDX_ARG);
        F_00406ad0(pvVar5);
      }
    }
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x20)) = param_6;
    (*(int * PTR32 *)(gen_frame + 0x24)) = &(*(int *)(gen_frame + 0x20));
    (*(char *)(gen_frame + 0x28)) = '\0';
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x20)));
    if ((((*(int * PTR32 *)(gen_frame + 0x24)) != ((int *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x28)) != '\0')) && ((*(char *)(gen_frame + 0x28)) == '\x01')) {
      pvVar5 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x24))));
      *((int *)GEN_TOP(((int)pvVar5 + 0x54))) = *((int *)GEN_TOP(((int)pvVar5 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar5 + 0x54))) < 1) {
        F_0042c880(pvVar5 GEN_EDX_ARG);
        F_00406ad0(pvVar5);
      }
    }
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x20)) = param_7;
    (*(int * PTR32 *)(gen_frame + 0x24)) = &(*(int *)(gen_frame + 0x20));
    (*(char *)(gen_frame + 0x28)) = '\0';
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x20)));
    if ((((*(int * PTR32 *)(gen_frame + 0x24)) != ((int *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x28)) != '\0')) && ((*(char *)(gen_frame + 0x28)) == '\x01')) {
      pvVar5 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x24))));
      *((int *)GEN_TOP(((int)pvVar5 + 0x54))) = *((int *)GEN_TOP(((int)pvVar5 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar5 + 0x54))) < 1) {
        F_0042c880(pvVar5 GEN_EDX_ARG);
        F_00406ad0(pvVar5);
      }
    }
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x20)) = param_8;
    (*(int * PTR32 *)(gen_frame + 0x24)) = &(*(int *)(gen_frame + 0x20));
    (*(char *)(gen_frame + 0x28)) = '\0';
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x20)));
    if ((((*(int * PTR32 *)(gen_frame + 0x24)) != ((int *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x28)) != '\0')) && ((*(char *)(gen_frame + 0x28)) == '\x01')) {
      pvVar5 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x24))));
      *((int *)GEN_TOP(((int)pvVar5 + 0x54))) = *((int *)GEN_TOP(((int)pvVar5 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar5 + 0x54))) < 1) {
        F_0042c880(pvVar5 GEN_EDX_ARG);
        F_00406ad0(pvVar5);
      }
    }
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x20)) = param_9;
    (*(int * PTR32 *)(gen_frame + 0x24)) = &(*(int *)(gen_frame + 0x20));
    (*(char *)(gen_frame + 0x28)) = '\0';
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x20)));
    if ((((*(int * PTR32 *)(gen_frame + 0x24)) != ((int *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x28)) != '\0')) && ((*(char *)(gen_frame + 0x28)) == '\x01')) {
      pvVar5 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x24))));
      *((int *)GEN_TOP(((int)pvVar5 + 0x54))) = *((int *)GEN_TOP(((int)pvVar5 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar5 + 0x54))) < 1) {
        F_0042c880(pvVar5 GEN_EDX_ARG);
        F_00406ad0(pvVar5);
      }
    }
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x20)) = param_10;
    (*(int * PTR32 *)(gen_frame + 0x24)) = &(*(int *)(gen_frame + 0x20));
    (*(char *)(gen_frame + 0x28)) = '\0';
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x20)));
    if ((((*(int * PTR32 *)(gen_frame + 0x24)) != ((int *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x28)) != '\0')) && ((*(char *)(gen_frame + 0x28)) == '\x01')) {
      pvVar5 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x24))));
      *((int *)GEN_TOP(((int)pvVar5 + 0x54))) = *((int *)GEN_TOP(((int)pvVar5 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar5 + 0x54))) < 1) {
        F_0042c880(pvVar5 GEN_EDX_ARG);
        F_00406ad0(pvVar5);
      }
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xe0))))(param_1 GEN_EDX_ARG);
    if (uVar4 != 0) {
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x0));
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xe0))))(param_1 GEN_EDX_ARG)));
      F_0046ba00(pvVar5 GEN_EDX_ARG,param_3,ppiVar7);
    }
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar6 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
    return (uint)uVar6;
  }
  return (uint)param_1;
}

/* ref: FUN_00a77420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a77420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa77420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_00a66e30(this GEN_EDX_FWD);
  if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
    *((undefined4 *)GEN_TOP(((int)this + 0x3a9c))) = param_1;
    F_00a9a670(((undefined *)GEN_TOP(((int)this + 0xf8))) GEN_EDX_ARG);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x3a90)));
    *((int *)GEN_TOP(((int)this + 0xfc))) = iVar1;
  }
  else {
    *((undefined4 *)GEN_TOP(((int)this + 0x3aa0))) = param_1;
    F_00a9a670(((undefined *)GEN_TOP(((int)this + 0x120))) GEN_EDX_ARG);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x3a90)));
    *((int *)GEN_TOP(((int)this + 0x124))) = iVar1;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 1;
  if (iVar1 == 0x19) {
    uVar2 = F_00a76910(this GEN_EDX_ARG);
    return uVar2;
  }
  puVar3 = ((undefined4 *)GEN_TOP(F_00ab35a0(iVar1 + 1)));
  *((undefined4 *)GEN_TOP(((int)this + 0x3a84))) = *puVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x3a88))) = puVar3[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x3a8c))) = puVar3[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x3a80))) = 0;
  uVar2 = F_00a76460(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00a774d0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a774d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa774d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x228, 8, 4);
  char cVar1;
  undefined4 uVar2;
  undefined * this_00;
  int * piVar3;
  uint * puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x220)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x224));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  F_00a4ffd0();
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
  piVar3 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar3;
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    *piVar3 = 0;
    piVar3[1] = 0;
  }
  *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0xc4)) GEN_EDX_ARG,&REFG(undefined, 0x10e70b7),REFG(undefined4, 0x108cc50));
  if (*((char *)GEN_TOP(((int)this + 0x2aa))) != '\0') {
    F_00ab0230(0x18f6e,((undefined1 *)(gen_frame + 0xc4)));
    F_00a95670(((undefined *)GEN_TOP(((int)this + 0x294))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc4)));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x118)) GEN_EDX_ARG,&REFG(undefined, 0x10e70c5),REFG(undefined4, 0x108cc50));
  if (*((int *)GEN_TOP(((int)this + 700))) != 0) {
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 700)));
    (*(undefined4 *)(gen_frame + 0x214)) = 0;
    (*(undefined4 *)(gen_frame + 0x214)) = uVar2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x218)) = &(*(undefined4 *)(gen_frame + 0x214));
    (*(char *)(gen_frame + 0x21c)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x214)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x218)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x21c)) != '\0')) && ((*(char *)(gen_frame + 0x21c)) == '\x01')) {
      this_00 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x218))));
      *((int *)GEN_TOP(((int)this_00 + 0x54))) = *((int *)GEN_TOP(((int)this_00 + 0x54))) - 1;
      this = (*(undefined * PTR32 *)(gen_frame + 0x18));
      if (*((int *)GEN_TOP(((int)this_00 + 0x54))) < 1) {
        F_0042c880(this_00 GEN_EDX_ARG);
        F_00406ad0(this_00);
        this = (*(undefined * PTR32 *)(gen_frame + 0x18));
      }
    }
    F_00ab3200(0x18f70,&(*(int * PTR32 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x118)));
    F_00a95670(((undefined *)GEN_TOP(((int)this + 0x294))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x118)));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x16c)) GEN_EDX_ARG,&REFG(undefined, 0x10e70c6),REFG(undefined4, 0x108cc50));
  uVar5 = (uint)*((byte *)GEN_TOP((param_1 + 0xb99)));
  if (*((byte *)GEN_TOP((param_1 + 0xb98))) != 0) {
    puVar4 = ((uint *)GEN_TOP(F_00ab3960((uint)*((byte *)GEN_TOP((param_1 + 0xb98))))));
    F_0042e430(((undefined1 *)(gen_frame + 0x16c)) GEN_EDX_ARG,(*puVar4 & 0xffffff) + (int)puVar4);
  }
  if ((0x13 < uVar5) || (*((char *)GEN_TOP((param_1 + 0xb98))) == '\0')) goto LAB_00a7776a;
  if (uVar5 == 0) {
    uVar5 = 1;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,&REFG(undefined, 0x10e70c7),REFG(undefined4, 0x108cc50));
  puVar4 = ((uint *)GEN_TOP(F_00ab3fd0(*((undefined1 *)GEN_TOP((param_1 + 0xb98))),uVar5,1)));
  if (puVar4 != ((uint *)GEN_TOP(0x0))) {
    cVar1 = *((char *)GEN_TOP((param_1 + 0xb98)));
    if (cVar1 == '\x01') {
LAB_00a776f7: ;
      uVar5 = *puVar4;
LAB_00a77702: ;
      F_0042e430(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG,(uVar5 & 0xffffff) + (int)puVar4);
    }
    else {
      if (cVar1 == '\x02') {
        uVar5 = *puVar4;
        goto LAB_00a77702;
      }
      if (cVar1 == '\x03') goto LAB_00a776f7;
    }
    uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
    uVar5 = F_0042ce40(((undefined1 *)(gen_frame + 0x70)),&REFG(undefined, 0x10e7794),uVar5);
    uVar5 = F_0042cd30(((undefined1 *)(gen_frame + 0x16c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1c)),uVar5);
    F_00a955f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x294))) GEN_EDX_ARG,uVar5);
    F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x1c0)) GEN_EDX_ARG);
LAB_00a7776a: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x16c)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x118)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xc4)) GEN_EDX_ARG);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar6 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar6;
}

/* ref: FUN_00a777c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a777c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa777c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x238, 8, 4);
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint * puVar5;
  undefined * pvVar6;
  undefined4 * puVar7;
  uint * puVar8;
  int * piVar9;
  code * pcVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  
  ((uint *)(gen_frame + 0x20c))[9] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x234);
  (*(int * PTR32 *)(gen_frame + 0x20)) = param_1;
  uVar4 = F_00a4ffd0();
  uVar13 = (uint)REFG(undefined1, 0x14ab0d4);
  (*(uint *)(gen_frame + 0x34)) = uVar4;
  if ((uVar13 < 0x1d) && (uVar4 = F_00ab21a0(uVar13), uVar4 != 0)) {
    F_00ab21a0(uVar13);
  }
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x39b4)));
  if (uVar4 == 6) {
    (*(uint *)(gen_frame + 0x34)) = 0;
    uVar4 = 6;
    if (param_2 != 0) {
      do {
        F_0042b630(((undefined1 *)(gen_frame + 0x188)) GEN_EDX_ARG);
        iVar12 = (*(int * PTR32 *)(gen_frame + 0x20))[(*(uint *)(gen_frame + 0x34))];
        (*(undefined * PTR32 *)(gen_frame + 0x1e0)) = ((undefined *)GEN_TOP(0x0));
        (*(undefined * PTR32 *)(gen_frame + 0x1e4)) = ((undefined *)GEN_TOP(0x0));
        (*(int *)(gen_frame + 0x1e8)) = 0;
        (*(undefined * PTR32 *)(gen_frame + 0x1f0)) = ((undefined *)GEN_TOP(0x0));
        (*(undefined * PTR32 *)(gen_frame + 0x1f4)) = ((undefined *)GEN_TOP(0x0));
        (*(int *)(gen_frame + 0x1f8)) = 0;
        (*(undefined4 *)(gen_frame + 0x180)) = 0;
        (*(undefined4 *)(gen_frame + 0x1dc)) = 0;
        (*(undefined4 *)(gen_frame + 0x184)) = 0;
        puVar8 = *((uint * PTR32 *)GEN_TOP((iVar12 + 4)));
        F_0042e430(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3a70))) * 0x11c + *((int *)GEN_TOP(((int)this + 0xe8)))))) GEN_EDX_ARG,
                     (*puVar8 & 0xffffff) + (int)puVar8);
        *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3a70))) * 0x11c + 0x110 + *((int *)GEN_TOP(((int)this + 0xe8)))))) =
             (uint)(ushort)puVar8[0x14];
        *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3a70))) * 0x11c + 0x5c + *((int *)GEN_TOP(((int)this + 0xe8)))))) =
             puVar8[0x10];
        uVar4 = F_00ab2750(puVar8[0x10]);
        if (uVar4 != 0) {
          puVar5 = ((uint *)GEN_TOP(F_00ab2750(puVar8[0x10])));
          F_0042e430(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3a70))) * 0x11c + 0x60 +
                               *((int *)GEN_TOP(((int)this + 0xe8)))))) GEN_EDX_ARG,(*puVar5 & 0xffffff) + (int)puVar5);
        }
        F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,
                     *((int *)GEN_TOP(((int)this + 0x3a70))) * 0x11c + 0x60 + *((int *)GEN_TOP(((int)this + 0xe8))));
        *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3a70))) * 0x11c + 0xb4 + *((int *)GEN_TOP(((int)this + 0xe8)))))) =
             puVar8[0xe];
        uVar16 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3a70))) * 0x11c + 0xb4 + *((int *)GEN_TOP(((int)this + 0xe8))))));
        (*(undefined * PTR32 *)(gen_frame + 0x38)) = ((undefined *)GEN_TOP(0x0));
        uVar4 = F_00ab32a0(uVar16);
        pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x38));
        if (uVar4 != 0) {
          uVar4 = F_00ab32a0(uVar16);
          pvVar6 = *((undefined * PTR32 *)GEN_TOP((uVar4 + 4)));
        }
        *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3a70))) * 0x11c + 0xb8 + *((int *)GEN_TOP(((int)this + 0xe8)))))) =
             pvVar6;
        F_00a94160(&(*(undefined * PTR32 *)(gen_frame + 0x1f0)) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x3a70))) * 0x11c + *((int *)GEN_TOP(((int)this + 0xe8))));
        F_0042ccf0(((undefined1 *)(gen_frame + 0x188)) GEN_EDX_ARG,(int)this + 0x80);
        if (*((int *)GEN_TOP(((int)this + 0x174))) == 0) {
          pvVar6 = ((undefined *)GEN_TOP(F_00a96590(&(*(undefined4 *)(gen_frame + 0xac)),((undefined1 *)(gen_frame + 0x188)),&(*(undefined4 *)(gen_frame + 0x180)))));
          (*(undefined * PTR32 *)(gen_frame + 0x38)) = pvVar6;
          puVar7 = ((undefined4 *)GEN_TOP(F_004296a0(0xe4,0,800)));
          *puVar7 = *((undefined4 *)GEN_TOP(((int)this + 0x170)));
          puVar7[1] = *((undefined4 *)GEN_TOP(((int)this + 0x170)));
          puVar7[2] = *((undefined4 *)GEN_TOP(((int)this + 0x170)));
          *(undefined2 *)(puVar7 + 0x38) = 0;
          F_00a97460((int)this + 0x179,puVar7 + 3,(*(undefined * PTR32 *)(gen_frame + 0x38)));
          F_00a98430(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x2c)),puVar7,0);
          if ((*(int *)(gen_frame + 0x170)) != 0) {
            F_00a92090((*(int *)(gen_frame + 0x170)),(*(undefined4 *)(gen_frame + 0x174)));
            F_00429760((*(int *)(gen_frame + 0x170)),(((*(int *)(gen_frame + 0x178)) - (*(int *)(gen_frame + 0x170))) / 0x11c) * 0x11c,800);
          }
          (*(int *)(gen_frame + 0x170)) = 0;
          (*(undefined4 *)(gen_frame + 0x174)) = 0;
          (*(int *)(gen_frame + 0x178)) = 0;
          if ((*(int *)(gen_frame + 0x160)) != 0) {
            F_00a92090((*(int *)(gen_frame + 0x160)),(*(undefined4 *)(gen_frame + 0x164)));
            F_00429760((*(int *)(gen_frame + 0x160)),(((*(int *)(gen_frame + 0x168)) - (*(int *)(gen_frame + 0x160))) / 0x11c) * 0x11c,800);
          }
          (*(int *)(gen_frame + 0x160)) = 0;
          (*(undefined4 *)(gen_frame + 0x164)) = 0;
          (*(int *)(gen_frame + 0x168)) = 0;
          F_0042c880(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG);
          F_0042c880(&(*(undefined4 *)(gen_frame + 0xac)) GEN_EDX_ARG);
          uVar4 = F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x188)));
          *((int *)GEN_TOP((uVar4 + 4))) = *((int *)GEN_TOP((uVar4 + 4))) + 1;
          *((int *)GEN_TOP(((int)this + 0x168))) = *((int *)GEN_TOP(((int)this + 0x168))) + 1;
        }
        else if (*((int *)GEN_TOP(((int)this + 0x174))) != 0) {
          (*(undefined * PTR32 *)(gen_frame + 0x38)) = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x170)));
          puVar8 = ((uint *)GEN_TOP(F_00a910c0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x188)))));
          if (((undefined *)GEN_TOP(*puVar8)) == (*(undefined * PTR32 *)(gen_frame + 0x38))) {
            uVar4 = F_00a96590(&(*(undefined4 *)(gen_frame + 0xac)),((undefined1 *)(gen_frame + 0x188)),&(*(undefined4 *)(gen_frame + 0x180)));
            F_00a99f80(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,&(*(uint * PTR32 *)(gen_frame + 0x204)),uVar4);
            F_00a920d0(&(*(int *)(gen_frame + 0x170)) GEN_EDX_ARG);
            F_00a920d0(&(*(int *)(gen_frame + 0x160)) GEN_EDX_ARG);
            F_0042c880(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG);
            F_0042c880(&(*(undefined4 *)(gen_frame + 0xac)) GEN_EDX_ARG);
            uVar4 = F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x188)));
            *((int *)GEN_TOP((uVar4 + 4))) = *((int *)GEN_TOP((uVar4 + 4))) + 1;
            *((int *)GEN_TOP(((int)this + 0x168))) = *((int *)GEN_TOP(((int)this + 0x168))) + 1;
          }
          else {
            (*(undefined * PTR32 *)(gen_frame + 0x38)) = ((undefined *)GEN_TOP(0x0));
            uVar4 = F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x188)));
            iVar12 = *((int *)GEN_TOP((uVar4 + 0x70)));
            uVar4 = F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x188)));
            if (iVar12 != *((int *)GEN_TOP((uVar4 + 0x74)))) {
              do {
                if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1f0)) + 0x110))) < *((uint *)GEN_TOP((iVar12 + 0x110)))) {
                  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)(gen_frame + 0x1f0));
                  uVar4 = F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x188)));
                  F_00a94950(((undefined *)GEN_TOP((uVar4 + 0x70))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),iVar12,(*(undefined * PTR32 *)(gen_frame + 0x38)));
                  break;
                }
                uVar4 = F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x188)));
                if ((*(undefined * PTR32 *)(gen_frame + 0x38)) ==
                    ((undefined *)GEN_TOP(((*((int *)GEN_TOP((uVar4 + 0x74))) - *((int *)GEN_TOP((uVar4 + 0x70)))) / 0x11c - 1U)))) {
                  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x1f0));
                  uVar4 = F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x188)));
                  F_00a94160(((undefined *)GEN_TOP((uVar4 + 0x70))) GEN_EDX_ARG,pvVar6);
                  break;
                }
                (*(undefined * PTR32 *)(gen_frame + 0x38)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 1)));
                iVar12 = iVar12 + 0x11c;
                uVar4 = F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x188)));
              } while (iVar12 != *((int *)GEN_TOP((uVar4 + 0x74))));
            }
            uVar4 = F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x188)));
            iVar11 = *((int *)GEN_TOP((uVar4 + 0x74))) - *((int *)GEN_TOP((uVar4 + 0x70)));
            iVar12 = iVar11 >> 0x1f;
            if (iVar11 / 0x11c + iVar12 == iVar12) {
              pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x1f0));
              uVar4 = F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x188)));
              F_00a94160(((undefined *)GEN_TOP((uVar4 + 0x70))) GEN_EDX_ARG,pvVar6);
            }
            uVar4 = F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x188)));
            *((int *)GEN_TOP((uVar4 + 4))) = *((int *)GEN_TOP((uVar4 + 4))) + 1;
          }
        }
        *((int *)GEN_TOP(((int)this + 0x3a70))) = *((int *)GEN_TOP(((int)this + 0x3a70))) + 1;
        if ((*(undefined * PTR32 *)(gen_frame + 0x1f0)) != ((undefined *)GEN_TOP(0x0))) {
          (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)(gen_frame + 0x1f4));
          pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x1f0));
          if ((*(undefined * PTR32 *)(gen_frame + 0x1f0)) != (*(undefined * PTR32 *)(gen_frame + 0x1f4))) {
            do {
              F_0042c880(((undefined *)GEN_TOP(((int)pvVar6 + 0xbc))) GEN_EDX_ARG);
              F_0042c880(((undefined *)GEN_TOP(((int)pvVar6 + 0x60))) GEN_EDX_ARG);
              F_0042c880(pvVar6 GEN_EDX_ARG);
              pvVar6 = ((undefined *)GEN_TOP(((int)pvVar6 + 0x11c)));
            } while (pvVar6 != (*(undefined * PTR32 *)(gen_frame + 0x38)));
          }
          F_00429760((*(undefined * PTR32 *)(gen_frame + 0x1f0)),(((*(int *)(gen_frame + 0x1f8)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x1f0))) / 0x11c) * 0x11c,800);
        }
        (*(undefined * PTR32 *)(gen_frame + 0x1f0)) = ((undefined *)GEN_TOP(0x0));
        (*(undefined * PTR32 *)(gen_frame + 0x1f4)) = ((undefined *)GEN_TOP(0x0));
        (*(int *)(gen_frame + 0x1f8)) = 0;
        if ((*(undefined * PTR32 *)(gen_frame + 0x1e0)) != ((undefined *)GEN_TOP(0x0))) {
          (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)(gen_frame + 0x1e4));
          pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x1e0));
          if ((*(undefined * PTR32 *)(gen_frame + 0x1e0)) != (*(undefined * PTR32 *)(gen_frame + 0x1e4))) {
            do {
              F_0042c880(((undefined *)GEN_TOP(((int)pvVar6 + 0xbc))) GEN_EDX_ARG);
              F_0042c880(((undefined *)GEN_TOP(((int)pvVar6 + 0x60))) GEN_EDX_ARG);
              F_0042c880(pvVar6 GEN_EDX_ARG);
              pvVar6 = ((undefined *)GEN_TOP(((int)pvVar6 + 0x11c)));
            } while (pvVar6 != (*(undefined * PTR32 *)(gen_frame + 0x38)));
          }
          F_00429760((*(undefined * PTR32 *)(gen_frame + 0x1e0)),(((*(int *)(gen_frame + 0x1e8)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x1e0))) / 0x11c) * 0x11c,800);
        }
        (*(undefined * PTR32 *)(gen_frame + 0x1e0)) = ((undefined *)GEN_TOP(0x0));
        (*(undefined * PTR32 *)(gen_frame + 0x1e4)) = ((undefined *)GEN_TOP(0x0));
        (*(int *)(gen_frame + 0x1e8)) = 0;
        F_0042c880(((undefined1 *)(gen_frame + 0x188)) GEN_EDX_ARG);
        uVar4 = (*(uint *)(gen_frame + 0x34)) + 1;
        (*(uint *)(gen_frame + 0x34)) = uVar4;
      } while (uVar4 < param_2);
    }
    puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39d4)));
    if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar7)))(puVar7 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x39d4))) = 0;
    }
    if (*((uint *)GEN_TOP(((int)this + 0x3a6c))) < *((uint *)GEN_TOP(((int)this + 0x7c)))) {
      uVar4 = F_00a7b660(this GEN_EDX_ARG);
      return uVar4;
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 0;
    if (*((char *)GEN_TOP(((int)this + 0x3a67))) != '\0') {
      if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
        piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
        if (piVar9 == ((int *)GEN_TOP(0x0))) {
          return uVar4;
        }
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 4))))(piVar9 GEN_EDX_ARG,0x10);
        return uVar4;
      }
      piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0)));
      if (piVar9 == ((int *)GEN_TOP(0x0))) {
        return uVar4;
      }
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 4))))(piVar9 GEN_EDX_ARG,0x10);
      return uVar4;
    }
    if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
      piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
    }
    else {
      piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0)));
    }
    if (piVar9 == ((int *)GEN_TOP(0x0))) {
      return uVar4;
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 4))))(piVar9 GEN_EDX_ARG,0xf);
    return uVar4;
  }
  if (uVar4 != 7) {
    return uVar4;
  }
  puVar8 = *((uint * PTR32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x20)) + 4)));
  F_00a94c50(((undefined *)GEN_TOP(((int)this + 0x17c))) GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x17c))) = (uint)*((ushort *)GEN_TOP(((int)this + 0x39f8)));
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x180))) GEN_EDX_ARG,(*puVar8 & 0xffffff) + (int)puVar8);
  puVar5 = ((uint *)GEN_TOP(F_00ab3480(puVar8[9])));
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x1d4))) GEN_EDX_ARG,(*puVar5 & 0xffffff) + (int)puVar5);
  *((uint *)GEN_TOP(((int)this + 0x228))) = puVar8[9];
  *((uint *)GEN_TOP(((int)this + 0x280))) = (uint)*((byte *)GEN_TOP(((int)puVar8 + 0x55)));
  *((uint *)GEN_TOP(((int)this + 0x284))) = (uint)(ushort)puVar8[0x14];
  *((uint *)GEN_TOP(((int)this + 0x2b4))) = puVar8[0x13];
  puVar5 = ((uint *)GEN_TOP(F_00ab21d0((uint)*((byte *)GEN_TOP(((int)puVar8 + 0x55))))));
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x22c))) GEN_EDX_ARG,(*puVar5 & 0xffffff) + (int)puVar5);
  *((short *)GEN_TOP(((int)this + 0x290))) = (short)puVar8[0x14];
  *((uint *)GEN_TOP(((int)this + 0x2a4))) = (uint)(byte)puVar8[0x15];
  *((uint *)GEN_TOP(((int)this + 0x2b0))) = puVar8[0xe];
  *((undefined1 *)GEN_TOP(((int)this + 0x2b8))) = *((undefined1 *)GEN_TOP(((int)puVar8 + 0x5a)));
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x2c0))) GEN_EDX_ARG,(puVar8[1] & 0xffffff) + (int)(puVar8 + 1));
  *((int *)GEN_TOP(((int)this + 0x318))) = (int)*((short *)GEN_TOP(((int)puVar8 + 0x4a)));
  *((uint *)GEN_TOP(((int)this + 0x314))) = puVar8[0x12];
  *((uint *)GEN_TOP(((int)this + 0x31c))) = puVar8[0xd];
  (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(0x0));
  piVar9 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar9;
  if (piVar9 != ((int *)GEN_TOP(0x0))) {
    *piVar9 = 0;
    piVar9[1] = 0;
  }
  *piVar9 = (int)&(*(int * PTR32 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  uVar4 = puVar8[0xd];
  (*(uint * PTR32 *)(gen_frame + 0x204)) = &(*(uint *)(gen_frame + 0x200));
  (*(uint *)(gen_frame + 0x200)) = 0;
  (*(uint *)(gen_frame + 0x200)) = uVar4;
  (*(char *)(gen_frame + 0x208)) = '\0';
  F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x200)));
  if ((((*(uint * PTR32 *)(gen_frame + 0x204)) != ((uint *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x208)) != '\0')) && ((*(char *)(gen_frame + 0x208)) == '\x01')) {
    pvVar6 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x204))));
    *((int *)GEN_TOP(((int)pvVar6 + 0x54))) = *((int *)GEN_TOP(((int)pvVar6 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar6 + 0x54))) < 1) {
      F_0042c880(pvVar6 GEN_EDX_ARG);
      F_00406ad0(pvVar6);
    }
  }
  F_00ab3200(0x261,&(*(int * PTR32 *)(gen_frame + 0x8)),(int)this + 800);
  *((uint *)GEN_TOP(((int)this + 0x440))) = puVar8[0x10];
  *((undefined1 *)GEN_TOP(((int)this + 0x444))) = *((undefined1 *)GEN_TOP(((int)puVar8 + 0x59)));
  *((uint *)GEN_TOP(((int)this + 0x374))) = puVar8[7];
  *((uint *)GEN_TOP(((int)this + 0x3d0))) = puVar8[8];
  if ((puVar8[7] != 0) && (uVar4 = F_00ab37e0(puVar8[7]), uVar4 != 0)) {
    *((undefined4 *)GEN_TOP(((int)this + 0x378))) = *((undefined4 *)GEN_TOP((uVar4 + 0x14)));
    uVar4 = F_00463610(0,*((undefined4 *)GEN_TOP((uVar4 + 0x14))),3);
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x37c))) GEN_EDX_ARG,uVar4);
  }
  *((uint *)GEN_TOP(((int)this + 0x428))) = puVar8[0x11];
  if (*((byte *)GEN_TOP(((int)puVar8 + 0x56))) != 0) {
    uVar4 = F_00ab3390((uint)*((byte *)GEN_TOP(((int)puVar8 + 0x56))));
    *((undefined4 *)GEN_TOP(((int)this + 0x42c))) = *((undefined4 *)GEN_TOP((uVar4 + 4)));
  }
  if (*((byte *)GEN_TOP(((int)puVar8 + 0x57))) != 0) {
    uVar4 = F_00ab3390((uint)*((byte *)GEN_TOP(((int)puVar8 + 0x57))));
    *((undefined4 *)GEN_TOP(((int)this + 0x430))) = *((undefined4 *)GEN_TOP((uVar4 + 4)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x448))) = 5;
  uVar4 = F_00a67d80(*((undefined4 *)GEN_TOP(((int)this + 0x2b0))),*((undefined1 *)GEN_TOP(((int)this + 0x448))));
  *((uint *)GEN_TOP(((int)this + 0x2ac))) = uVar4;
  F_0042cc20(((undefined1 *)(gen_frame + 0x1ac)) GEN_EDX_ARG,&REFG(undefined, 0x10e70d2),REFG(undefined4, 0x108cc50));
  bVar2 = F_0042ac50(((undefined *)GEN_TOP(((int)this + 800))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1ac)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1ac)) GEN_EDX_ARG);
  if (bVar2 == 0) {
    F_00a95670(((undefined *)GEN_TOP(((int)this + 0x294))) GEN_EDX_ARG,(int)this + 800);
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG,&REFG(undefined, 0x10e70d3),REFG(undefined4, 0x108cc50));
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  uVar4 = puVar8[0x15];
  if ((byte)uVar4 != 0) {
    (*(uint * PTR32 *)(gen_frame + 0x204)) = &(*(uint *)(gen_frame + 0x200));
    (*(uint *)(gen_frame + 0x200)) = 0;
    (*(uint *)(gen_frame + 0x200)) = (uint)(byte)uVar4;
    (*(char *)(gen_frame + 0x208)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x200)));
    F_004917c0(&(*(uint *)(gen_frame + 0x200)) GEN_EDX_ARG);
    F_00ab3200(0x25b,&(*(int * PTR32 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x3c)));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x1ac)) GEN_EDX_ARG,&REFG(undefined, 0x10e70e5),REFG(undefined4, 0x108cc50));
  bVar2 = F_0042ac50(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1ac)));
  F_0042c880(((undefined1 *)(gen_frame + 0x1ac)) GEN_EDX_ARG);
  if (bVar2 == 0) {
    F_00a95670(((undefined *)GEN_TOP(((int)this + 0x294))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x3c)));
  }
  F_0071db50(&(*(int *)(gen_frame + 0x90)) GEN_EDX_ARG);
  F_00e6cea0(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
  uVar4 = 0;
  do {
    uVar16 = (*(undefined4 *)(gen_frame + 0x2e));
    iVar11 = uVar4 * 0x10;
    uVar3 = *((ushort *)GEN_TOP((iVar11 + 0x1688 + (*(uint *)(gen_frame + 0x34)))));
    iVar12 = iVar11 + 0x1684 + (*(uint *)(gen_frame + 0x34));
    (*(byte *)(gen_frame + 0x2a)) = *((byte *)GEN_TOP((iVar12 + 6)));
    (*(undefined2 *)(gen_frame + 0x2c)) = *((undefined2 *)GEN_TOP((iVar11 + 0x168c + (*(uint *)(gen_frame + 0x34)))));
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x2e)) + 0)) = *((undefined2 *)GEN_TOP((iVar12 + 10)));
    uVar1 = *((ushort *)GEN_TOP(((int)this + 0x39f8)));
    (*(ushort *)(gen_frame + 0x28)) = uVar3;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x2e)) + 3)) = SUB41(uVar16,3);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x2e)) + 2)) = *((undefined1 *)GEN_TOP((iVar12 + 0xc)));
    (*(undefined4 *)(gen_frame + 0x2e)) = CONCAT13((*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x2e)) + 3)),*((undefined3 *)GEN_TOP((iVar12 + 10))));
    if (uVar3 == uVar1) {
      iVar12 = (*(uint *)(gen_frame + 0x34)) + 0x1684 + uVar4 * 0x10;
      (*(byte *)(gen_frame + 0x2a)) = *((byte *)GEN_TOP((iVar12 + 6)));
      (*(ushort *)(gen_frame + 0x28)) = *((ushort *)GEN_TOP((iVar12 + 4)));
      (*(undefined2 *)(gen_frame + 0x2c)) = *((undefined2 *)GEN_TOP((iVar12 + 8)));
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x2e)) + 0)) = *((undefined2 *)GEN_TOP((iVar12 + 10)));
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x2e)) + 2)) = *((undefined1 *)GEN_TOP((iVar12 + 0xc)));
      (*(undefined4 *)(gen_frame + 0x2e)) = CONCAT13((*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x2e)) + 3)),*((undefined3 *)GEN_TOP((iVar12 + 10))));
      break;
    }
    bVar2 = (char)uVar4 + 1;
    uVar4 = (uint)bVar2;
  } while (bVar2 < 0x10);
  *((uint *)GEN_TOP(((int)this + 0x434))) = (uint)(*(byte *)(gen_frame + 0x2a));
  if ((*(byte *)(gen_frame + 0x2a)) == 3) {
    *((undefined1 *)GEN_TOP(((int)this + 0x438))) = 1;
  }
  F_006d6580((uint)uVar1,(*(undefined4 *)(gen_frame + 0x2e)),(uint)*((ushort *)GEN_TOP(((int)this + 0x284))),REFG(undefined1, 0x14b4ec1) & 1,
               (uint)REFG(undefined1, 0x14ab29a),&(*(int *)(gen_frame + 0x90)),0,0,0,0,0,0,0,0);
  puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39d4)));
  if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar7)))(puVar7 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x39d4))) = 0;
  }
  if ((((*(short *)(gen_frame + 0x9c)) == 0) && ((*(int *)(gen_frame + 0x94)) == 0)) && ((*(int *)(gen_frame + 0x90)) == 0)) {
LAB_00a7846d: ;
    *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 0;
    if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
      piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
    }
    else {
      piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0)));
    }
    if (piVar9 == ((int *)GEN_TOP(0x0))) goto LAB_00a7884c;
    pcVar10 = *((gen_code32 *)GEN_TOP((*piVar9 + 4)));
    uVar16 = 0x11;
  }
  else {
    *((int *)GEN_TOP(((int)this + 0xa3c))) = (*(int *)(gen_frame + 0x94));
    *((short *)GEN_TOP(((int)this + 0xa44))) = (*(short *)(gen_frame + 0x9c));
    *((int *)GEN_TOP(((int)this + 0xa38))) = (*(int *)(gen_frame + 0x90));
    *((undefined4 *)GEN_TOP(((int)this + 0xa40))) = (*(undefined4 *)(gen_frame + 0x98));
    *((undefined2 *)GEN_TOP(((int)this + 0xa46))) = (*(undefined2 *)(gen_frame + 0x9e));
    *((undefined2 *)GEN_TOP(((int)this + 0xa48))) = (*(undefined2 *)(gen_frame + 0xa0));
    uVar3 = F_006c4220(&(*(int *)(gen_frame + 0x90)) GEN_EDX_ARG);
    *((ushort *)GEN_TOP(((int)this + 0xb28))) = uVar3;
    *((undefined4 *)GEN_TOP(((int)this + 0xa50))) = (*(undefined4 *)(gen_frame + 0xa8));
    *((undefined1 *)GEN_TOP(((int)this + 0xa4a))) = (*(undefined1 *)(gen_frame + 0xa2));
    *((undefined4 *)GEN_TOP(((int)this + 0xa4c))) = (*(undefined4 *)(gen_frame + 0xa4));
    *((undefined4 *)GEN_TOP(((int)this + 0xa54))) = (*(undefined4 *)(gen_frame + 0xac));
    *((undefined4 *)GEN_TOP(((int)this + 0xa58))) = (*(undefined4 *)(gen_frame + 0xb0));
    *((undefined2 *)GEN_TOP(((int)this + 0xa60))) = (*(undefined2 *)(gen_frame + 0xb8));
    *((undefined2 *)GEN_TOP(((int)this + 0xa62))) = (*(undefined2 *)(gen_frame + 0xba));
    *((undefined1 *)GEN_TOP(((int)this + 0xa64))) = (*(undefined1 *)(gen_frame + 0xbc));
    *((undefined4 *)GEN_TOP(((int)this + 0xa68))) = (*(undefined4 *)(gen_frame + 0xc0));
    F_00ab0230(0x18f58,(int)this + 0xb84);
    ((uint *)(gen_frame + 0x20c))[0] = 0;
    ((uint *)(gen_frame + 0x20c))[1] = 0;
    ((uint *)(gen_frame + 0x20c))[2] = 0;
    ((uint *)(gen_frame + 0x20c))[3] = 0;
    ((uint *)(gen_frame + 0x20c))[4] = 0;
    ((uint *)(gen_frame + 0x20c))[5] = 0;
    ((uint *)(gen_frame + 0x20c))[6] = 0;
    ((uint *)(gen_frame + 0x20c))[7] = 0;
    ((uint *)(gen_frame + 0x20c))[8] = 0;
    bVar14 = *((int *)GEN_TOP(((int)this + 0xa3c))) != 0;
    if (bVar14) {
      ((uint *)(gen_frame + 0x20c))[0] = 1;
    }
    ((uint *)(gen_frame + 0x20c))[0] = (uint)bVar14;
    uVar4 = (uint)bVar14;
    if ((*((int *)GEN_TOP(((int)this + 0xa50))) != 0) && (*((uint *)GEN_TOP(((int)this + 0xa4c))) != 0)) {
      ((uint *)(gen_frame + 0x20c))[(int)(uVar4)] = *((uint *)GEN_TOP(((int)this + 0xa4c)));
      uVar4 = (uint)(byte)(bVar14 + 1);
    }
    if ((*((short *)GEN_TOP(((int)this + 0xa44))) != 0) && (*((uint *)GEN_TOP(((int)this + 0xa40))) != 0)) {
      ((uint *)(gen_frame + 0x20c))[(int)(uVar4)] = *((uint *)GEN_TOP(((int)this + 0xa40)));
      uVar4 = (uint)(byte)((char)uVar4 + 1);
    }
    if (*((int *)GEN_TOP(((int)this + 0xa58))) != 0) {
      ((uint *)(gen_frame + 0x20c))[(int)(uVar4)] = 1;
      uVar4 = (uint)(byte)((char)uVar4 + 1);
    }
    if ((*((int *)GEN_TOP(((int)this + 0xa68))) != 0) && (*((uint *)GEN_TOP(((int)this + 0xa4c))) != 0)) {
      ((uint *)(gen_frame + 0x20c))[(int)(uVar4)] = *((uint *)GEN_TOP(((int)this + 0xa4c)));
      uVar4 = (uint)(byte)((char)uVar4 + 1);
    }
    bVar2 = (byte)uVar4;
    if ((*((short *)GEN_TOP(((int)this + 0xa60))) != 0) && (*((uint *)GEN_TOP(((int)this + 0xa5c))) != 0)) {
      ((uint *)(gen_frame + 0x20c))[(int)(uVar4)] = *((uint *)GEN_TOP(((int)this + 0xa5c)));
      bVar2 = bVar2 + 1;
    }
    if (bVar2 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x3a78))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x3a7c))) = 0;
      if (*((int *)GEN_TOP(((int)this + 0xa38))) != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x3a78))) = 1;
        *((undefined4 *)GEN_TOP(((int)this + 0x450))) = 1;
        *((undefined4 *)GEN_TOP(((int)this + 0x4b4))) = 2;
        *((undefined4 *)GEN_TOP(((int)this + 0x4ac))) = *((undefined4 *)GEN_TOP(((int)this + 0xa38)));
        F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x454))) GEN_EDX_ARG,(int)this + 0xb84);
        *((undefined4 *)GEN_TOP(((int)this + 0x4a8))) = 0xf01f;
      }
      if (*((int *)GEN_TOP(((int)this + 0xa54))) != 0) {
        puVar7 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3a7c))) * 0x6c + 0x888 + (int)this)));
        *((int *)GEN_TOP(((int)this + 0x3a7c))) = *((int *)GEN_TOP(((int)this + 0x3a7c))) + 1;
        *puVar7 = 1;
        puVar7[0x19] = 2;
        puVar7[0x17] = *((undefined4 *)GEN_TOP(((int)this + 0xa54)));
        F_0042ccf0(puVar7 + 1 GEN_EDX_ARG,(int)this + 0xb84);
        puVar7[0x16] = 0xf01f;
      }
      if ((*((short *)GEN_TOP(((int)this + 0xa48))) != 0) && (*((short *)GEN_TOP(((int)this + 0xa46))) != 0)) {
        puVar7 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3a78))) * 0x6c + 0x450 + (int)this)));
        *((int *)GEN_TOP(((int)this + 0x3a78))) = *((int *)GEN_TOP(((int)this + 0x3a78))) + 1;
        *puVar7 = 2;
        puVar7[0x19] = 2;
        puVar7[0x17] = (uint)*((ushort *)GEN_TOP(((int)this + 0xa48)));
        puVar8 = ((uint *)GEN_TOP(F_00ab3570((uint)*((ushort *)GEN_TOP(((int)this + 0xa46))))));
        F_0042e430(puVar7 + 1 GEN_EDX_ARG,(*puVar8 & 0xffffff) + (int)puVar8);
        puVar7[0x16] = (uint)*((ushort *)GEN_TOP(((int)this + 0xb28)));
      }
      if ((*((short *)GEN_TOP(((int)this + 0xa62))) != 0) && (*((short *)GEN_TOP(((int)this + 0xa46))) != 0)) {
        puVar7 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3a7c))) * 0x6c + 0x888 + (int)this)));
        *((int *)GEN_TOP(((int)this + 0x3a7c))) = *((int *)GEN_TOP(((int)this + 0x3a7c))) + 1;
        *puVar7 = 2;
        puVar7[0x19] = 2;
        puVar7[0x17] = (uint)*((ushort *)GEN_TOP(((int)this + 0xa62)));
        puVar8 = ((uint *)GEN_TOP(F_00ab3570((uint)*((ushort *)GEN_TOP(((int)this + 0xa46))))));
        F_0042e430(puVar7 + 1 GEN_EDX_ARG,(*puVar8 & 0xffffff) + (int)puVar8);
        puVar7[0x16] = (uint)*((ushort *)GEN_TOP(((int)this + 0xb28)));
      }
      *((undefined1 *)GEN_TOP(((int)this + 0x44c))) = *((undefined1 *)GEN_TOP(((int)this + 0x3a78)));
      *((undefined1 *)GEN_TOP(((int)this + 0x44e))) = *((undefined1 *)GEN_TOP(((int)this + 0x3a7c)));
      goto LAB_00a7846d;
    }
    puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
    if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar7 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      F_00cb4700(puVar7 GEN_EDX_ARG,(uint)bVar2,0);
      puVar7[5] = (uint)bVar2;
      *puVar7 = (*(undefined * PTR32 (*)[2])REFP(0x10e78b0));
      puVar7[6] = this;
      puVar7[7] = ((code *)REFP(0xa6c000));
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39c4))) = puVar7;
    if (*((int *)GEN_TOP(((int)this + 0x39c0))) == 0) {
      uVar4 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,9);
      *((uint *)GEN_TOP(((int)this + 0x39c0))) = uVar4;
    }
    uVar4 = 0;
    if (bVar2 != 0) {
      do {
        F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x39c4))) GEN_EDX_ARG,uVar4,((uint *)(gen_frame + 0x20c))[(int)(uVar4)]);
        uVar4 = uVar4 + 1;
      } while (uVar4 < bVar2);
    }
    piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 0x39c0)));
    uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x39c4)));
    pcVar10 = *((gen_code32 *)GEN_TOP((*piVar9 + 0x48)));
  }
  (*pcVar10)(piVar9,uVar16);
LAB_00a7884c: ;
  F_00e6ced0(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x12c)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xc8)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  uVar15 = F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
  return (uint)uVar15;
}

/* ref: FUN_00a788b0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a788b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa788b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x30, 0, 4);
  ushort uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined * pvVar7;
  int * piVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c));
  iVar2 = *((int *)GEN_TOP((*param_1 + 4)));
  (*(char *)(gen_frame + 0x1b)) = *((char *)GEN_TOP(((int)this + 0x434)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar5 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar5;
  if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar5 = 0;
    puVar5[1] = 0;
  }
  *puVar5 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  uVar9 = *((uint *)GEN_TOP(((int)this + 0x31c)));
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = uVar9;
  (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  uVar9 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar9) {
    uVar9 = uVar9 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar9 * 4))) == 0) {
    uVar6 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar9 * 4))) = uVar6;
  }
  pvVar7 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar9 * 4)));
  if (pvVar7 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar7 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(uint * PTR32 *)(gen_frame + 0x20)) != ((uint *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar7 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x20))));
    *((int *)GEN_TOP(((int)pvVar7 + 0x54))) = *((int *)GEN_TOP(((int)pvVar7 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar7 + 0x54))) < 1) {
      F_0042c880(pvVar7 GEN_EDX_ARG);
      F_00406ad0(pvVar7);
    }
  }
  uVar9 = *((uint *)GEN_TOP(((int)this + 0x378)));
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = uVar9;
  (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  if ((*(uint *)(gen_frame + 0x8)) <= (*(int *)(gen_frame + 0x10)) + 1U) {
    F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  }
  uVar9 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0x8)) <= uVar9) {
    uVar9 = uVar9 - (*(uint *)(gen_frame + 0x8));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar9 * 4))) == 0) {
    uVar6 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar9 * 4))) = uVar6;
  }
  pvVar7 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + uVar9 * 4)));
  if (pvVar7 != ((undefined *)GEN_TOP(0x0))) {
    F_00492f50(pvVar7 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((((*(uint * PTR32 *)(gen_frame + 0x20)) != ((uint *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar7 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x20))));
    *((int *)GEN_TOP(((int)pvVar7 + 0x54))) = *((int *)GEN_TOP(((int)pvVar7 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar7 + 0x54))) < 1) {
      F_0042c880(pvVar7 GEN_EDX_ARG);
      F_00406ad0(pvVar7);
    }
  }
  if ((*(char *)(gen_frame + 0x1b)) == '\x01') {
    uVar1 = *((ushort *)GEN_TOP(((int)this + 0x17c)));
    uVar6 = (uint)uVar1;
    pvVar7 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar9 = F_006d6fd0(pvVar7 GEN_EDX_ARG);
    if ((uVar9 == 0) || (*((ushort *)GEN_TOP((uVar9 + 0x310))) != uVar1)) {
      F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar9 = *((uint *)GEN_TOP(((int)this + 0x440)));
      (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x1c)) = 0;
      (*(uint *)(gen_frame + 0x1c)) = uVar9;
      (*(char *)(gen_frame + 0x24)) = '\0';
      F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x1c)));
      if (((*(uint * PTR32 *)(gen_frame + 0x20)) != ((uint *)GEN_TOP(0x0))) && (((*(char *)(gen_frame + 0x24)) != '\0' && ((*(char *)(gen_frame + 0x24)) == '\x01')))) {
        pvVar7 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x20))));
        *((int *)GEN_TOP(((int)pvVar7 + 0x54))) = *((int *)GEN_TOP(((int)pvVar7 + 0x54))) - 1;
        if (*((int *)GEN_TOP(((int)pvVar7 + 0x54))) < 1) {
          F_0042c880(pvVar7 GEN_EDX_ARG);
          F_00406ad0(pvVar7);
        }
      }
      uVar9 = F_006b8c00();
      bVar4 = F_006d71e0(uVar9 GEN_EDX_ARG);
      if (bVar4 != 0) {
        pvVar7 = ((undefined *)GEN_TOP(F_006b8c00()));
        uVar9 = F_006d71a0(pvVar7 GEN_EDX_ARG,uVar6);
        if (uVar9 != 0) {
          iVar3 = *((int *)GEN_TOP((uVar9 + 8)));
          (*(uint *)(gen_frame + 0x1c)) = 0;
          (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
          (*(char *)(gen_frame + 0x24)) = '\0';
          (*(uint *)(gen_frame + 0x1c)) = (uint)(iVar3 == 2);
          F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x1c)));
          F_004917c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG);
        }
      }
    }
    if (*((char *)GEN_TOP((iVar2 + 0x32))) == '\0') {
      uVar11 = 0x18fce;
    }
    else {
      uVar11 = 0x18fcf;
    }
  }
  else if ((*(char *)(gen_frame + 0x1b)) == -1) {
    uVar11 = 0x18f3b;
  }
  else {
    if ((*(char *)(gen_frame + 0x1b)) != '\x03') goto LAB_00a78b73;
    uVar11 = 0x18f3d;
  }
  F_00ab3200(uVar11,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),(int)this + 0x3d4);
LAB_00a78b73: ;
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39e4)));
  if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x39e4))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x39e0))) = 0;
  F_00a6bf80(this GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 0;
  if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
    piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
  }
  else {
    piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0)));
  }
  if (piVar8 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 4))))(piVar8 GEN_EDX_ARG,0x12);
  }
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar10 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar10;
}

/* ref: FUN_00a78bf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a78bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa78bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * this_00;
  uint uVar1;
  
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    this_00 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e78b0));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xa777c0));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39d4))) = this_00;
  if (*((int *)GEN_TOP(((int)this + 0x39d0))) == 0) {
    uVar1 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x3c);
    *((uint *)GEN_TOP(((int)this + 0x39d0))) = uVar1;
  }
  F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x39d4))) GEN_EDX_ARG,0,(uint)(ushort)param_1);
  *((ushort *)GEN_TOP(((int)this + 0x39f8))) = (ushort)param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x39fc))) = 2;
  *((undefined4 *)GEN_TOP(((int)this + 0x39b4))) = 7;
  *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x39d0))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x39d0))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x39d4))));
  return uVar1;
}

/* ref: FUN_00a78cb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a78cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa78cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0x39e4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x39e0)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x39e4))));
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39e4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x39e4))) = 0;
    }
  }
  uVar2 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xb2);
  *((uint *)GEN_TOP(((int)this + 0x39e0))) = uVar2;
  puVar3 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
  if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00cb4700(puVar3 GEN_EDX_ARG,1,0);
    puVar3[5] = 1;
    *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10e78b0));
    puVar3[6] = this;
    puVar3[7] = ((code *)REFP(0xa788b0));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39e4))) = puVar3;
  F_00cb4540(puVar3 GEN_EDX_ARG,0,param_1);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x39e0))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x39e0))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x39e4))));
  return uVar2;
}

/* ref: FUN_00a78d80 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a78d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa78d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x84, 12, 4);
  char cVar1;
  short sVar2;
  byte bVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined * pvVar6;
  int * piVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80));
  F_0042cc20(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_FWD,&REFG(undefined, 0x10e70e6),REFG(undefined4, 0x108cc50));
  bVar3 = F_0042ac50(((undefined *)GEN_TOP(((int)this + 0x37c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1c)));
  (*(byte *)(gen_frame + 0x1b)) = bVar3;
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  if ((*(byte *)(gen_frame + 0x1b)) != 0) {
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x37c))) GEN_EDX_ARG,((char *)REFP(0x10e779c)));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&REFG(undefined, 0x10e70e7),REFG(undefined4, 0x108cc50));
  bVar3 = F_0042ac50(((undefined *)GEN_TOP(((int)this + 800))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1c)));
  (*(byte *)(gen_frame + 0x1b)) = bVar3;
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  if ((*(byte *)(gen_frame + 0x1b)) != 0) {
    F_0042e430(((undefined *)GEN_TOP(((int)this + 800))) GEN_EDX_ARG,((char *)REFP(0x10e77a4)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x318))) == 0) goto LAB_00a7909b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar4 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar4;
  if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  *puVar4 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  uVar9 = *((undefined4 *)GEN_TOP(((int)this + 0x31c)));
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = uVar9;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = &(*(undefined4 *)(gen_frame + 0x70));
  (*(char *)(gen_frame + 0x78)) = '\0';
  F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x70)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x74)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x78)) != '\0')) && ((*(char *)(gen_frame + 0x78)) == '\x01')) {
    pvVar6 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x74))));
    *((int *)GEN_TOP(((int)pvVar6 + 0x54))) = *((int *)GEN_TOP(((int)pvVar6 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar6 + 0x54))) < 1) {
      F_0042c880(pvVar6 GEN_EDX_ARG);
      F_00406ad0(pvVar6);
    }
  }
  uVar9 = *((undefined4 *)GEN_TOP(((int)this + 0x378)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = &(*(undefined4 *)(gen_frame + 0x70));
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = uVar9;
  (*(char *)(gen_frame + 0x78)) = '\0';
  F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x70)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x74)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x78)) != '\0')) && ((*(char *)(gen_frame + 0x78)) == '\x01')) {
    pvVar6 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x74))));
    *((int *)GEN_TOP(((int)pvVar6 + 0x54))) = *((int *)GEN_TOP(((int)pvVar6 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar6 + 0x54))) < 1) {
      F_0042c880(pvVar6 GEN_EDX_ARG);
      F_00406ad0(pvVar6);
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x318))) == 0xe) {
    puVar4 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
    if (puVar4 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar4 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      F_00cb4700(puVar4 GEN_EDX_ARG,1,0);
      puVar4[5] = 1;
      *puVar4 = (*(undefined * PTR32 (*)[2])REFP(0x10e78b0));
      puVar4[6] = this;
      puVar4[7] = ((code *)REFP(0xa703d0));
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39dc))) = puVar4;
    uVar9 = *((undefined4 *)GEN_TOP(((int)this + 0x314)));
    if (*((int *)GEN_TOP(((int)this + 0x39d8))) == 0) {
      uVar5 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x68);
      *((uint *)GEN_TOP(((int)this + 0x39d8))) = uVar5;
    }
    F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x39dc))) GEN_EDX_ARG,0,uVar9);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x39d8))) + 0x48))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x39d8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x39dc))));
    F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar8 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
    return (uint)uVar8;
  }
  if (*((int *)GEN_TOP(((int)this + 0x318))) == 2) {
    F_00a78cb0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x314))));
  }
  else {
    cVar1 = *((char *)GEN_TOP(((int)this + 0x434)));
    if (cVar1 == '\x01') {
      sVar2 = *((short *)GEN_TOP(((int)this + 0x17c)));
      pvVar6 = ((undefined *)GEN_TOP(F_006b8c00()));
      uVar5 = F_006d6fd0(pvVar6 GEN_EDX_ARG);
      if ((uVar5 == 0) || (*((short *)GEN_TOP((uVar5 + 0x310))) != sVar2)) {
        F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        uVar9 = *((undefined4 *)GEN_TOP(((int)this + 0x440)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = &(*(undefined4 *)(gen_frame + 0x70));
        (*(undefined4 *)(gen_frame + 0x70)) = 0;
        (*(undefined4 *)(gen_frame + 0x70)) = uVar9;
        (*(char *)(gen_frame + 0x78)) = '\0';
        F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x70)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x70)) GEN_EDX_ARG);
        uVar9 = 0x18f39;
      }
      else {
        uVar9 = 0x18f3a;
      }
    }
    else if (cVar1 == -1) {
      uVar9 = 0x18f3b;
    }
    else {
      if (cVar1 != '\x03') goto LAB_00a79080;
      uVar9 = 0x18f3d;
    }
    F_00ab3200(uVar9,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),(int)this + 0x3d4);
  }
LAB_00a79080: ;
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
LAB_00a7909b: ;
  uVar5 = F_00a6bf80(this GEN_EDX_ARG);
  piVar7 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
  *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 0;
  if ((piVar7 != ((int *)GEN_TOP(0x0))) &&
     ((*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0' ||
      (piVar7 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0))), piVar7 != ((int *)GEN_TOP(0x0)))))) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 4))))(piVar7 GEN_EDX_ARG,0x12);
  }
  return uVar5;
}

/* ref: FUN_00a790e0 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_00a790e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa790e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 * PTR32 * ppuVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  uVar1 = F_00a4ffd0();
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (*((char *)GEN_TOP((uVar1 + 0x18b8))) == '\0') {
    uVar1 = F_00a6cf10();
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar3;
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = 0;
      puVar3[1] = 0;
    }
    *puVar3 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(uint *)(gen_frame + 0x18)) = uVar1 / 0x3c;
    (*(uint * PTR32 *)(gen_frame + 0x1c)) = &(*(uint *)(gen_frame + 0x18));
    (*(char *)(gen_frame + 0x20)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x18)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x1c)) != ((uint *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
      pvVar4 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x1c))));
      *((int *)GEN_TOP(((int)pvVar4 + 0x54))) = *((int *)GEN_TOP(((int)pvVar4 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar4 + 0x54))) < 1) {
        F_0042c880(pvVar4 GEN_EDX_ARG);
        F_00406ad0(pvVar4);
      }
    }
    (*(uint * PTR32 *)(gen_frame + 0x1c)) = &(*(uint *)(gen_frame + 0x18));
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(uint *)(gen_frame + 0x18)) = uVar1 % 0x3c;
    (*(char *)(gen_frame + 0x20)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x18)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x1c)) != ((uint *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
      pvVar4 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x1c))));
      *((int *)GEN_TOP(((int)pvVar4 + 0x54))) = *((int *)GEN_TOP(((int)pvVar4 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar4 + 0x54))) < 1) {
        F_0042c880(pvVar4 GEN_EDX_ARG);
        F_00406ad0(pvVar4);
      }
    }
    ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
    uVar6 = 0x598;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
    F_0046aa70(pvVar4 GEN_EDX_ARG,uVar6,ppuVar7);
    F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
    return (uint)uVar5;
  }
  F_00a51200(0x4e,param_1,0,0,0);
  uVar6 = 0x55c;
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
  uVar1 = F_0046a6b0(pvVar4 GEN_EDX_ARG,uVar6,param_1);
  return uVar1;
}

/* ref: FUN_00a79280 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a79280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa79280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x60, 0, 4);
  int iVar1;
  int * piVar2;
  undefined * this_00;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  int * PTR32 * ppiVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c));
  iVar1 = *((int *)GEN_TOP(((int)this + 0xe8)));
  uVar4 = param_1 & 0xffff;
  uVar3 = 0x564;
  do {
    if (iVar1 == *((int *)GEN_TOP(((int)this + 0xec)))) {
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
LAB_00a792c1: ;
      (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
      piVar2 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar2;
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        *piVar2 = 0;
        piVar2[1] = 0;
      }
      *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      switch((unsigned int)(uintptr_t)(param_2)) {
      case 1: ;
        (*(uint *)(gen_frame + 0x34)) = 0;
        (*(uint *)(gen_frame + 0x34)) = uVar4;
        (*(uint * PTR32 *)(gen_frame + 0x38)) = &(*(uint *)(gen_frame + 0x34));
        (*(undefined1 *)(gen_frame + 0x3c)) = 0;
        F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x34)));
        F_004917c0(&(*(uint *)(gen_frame + 0x34)) GEN_EDX_ARG);
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(undefined4 *)(gen_frame + 0x40)) = (*(undefined4 *)(gen_frame + 0x18));
        (*(undefined4 * PTR32 *)(gen_frame + 0x44)) = &(*(undefined4 *)(gen_frame + 0x40));
        (*(undefined1 *)(gen_frame + 0x48)) = 0;
        F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x40)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x40)) GEN_EDX_ARG);
        break;
      case 2: ;
        (*(uint *)(gen_frame + 0x1c)) = 0;
        uVar3 = 0x566;
        (*(uint *)(gen_frame + 0x1c)) = uVar4;
        (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
        (*(undefined1 *)(gen_frame + 0x24)) = 0;
        F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x1c)));
        F_004917c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG);
        break;
      case 3: ;
        (*(uint * PTR32 *)(gen_frame + 0x50)) = &(*(uint *)(gen_frame + 0x4c));
        (*(uint *)(gen_frame + 0x4c)) = 0;
        uVar3 = 0x565;
        (*(uint *)(gen_frame + 0x4c)) = uVar4;
        (*(undefined1 *)(gen_frame + 0x54)) = 0;
        F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x4c)));
        F_004917c0(&(*(uint *)(gen_frame + 0x4c)) GEN_EDX_ARG);
        break;
      case 4: ;
        (*(uint *)(gen_frame + 0x28)) = 0;
        uVar3 = 0x567;
        (*(uint *)(gen_frame + 0x28)) = uVar4;
        (*(uint * PTR32 *)(gen_frame + 0x2c)) = &(*(uint *)(gen_frame + 0x28));
        (*(undefined1 *)(gen_frame + 0x30)) = 0;
        F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x28)));
        F_004917c0(&(*(uint *)(gen_frame + 0x28)) GEN_EDX_ARG);
        break;
      case 6: ;
        F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x49);
        uVar4 = F_00493180(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        return uVar4;
      case 7: ;
        uVar3 = 0x560;
        break;
      case 8: ;
        uVar3 = 0x568;
        break;
      case 9: ;
        uVar3 = 0x599;
        break;
      case 10: ;
        uVar3 = 0x59a;
        break;
      case 0xb: ;
        uVar3 = 0x579;
        break;
      case 0xc: ;
        uVar3 = 0x57b;
      }
      piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        ppiVar6 = &(*(int * PTR32 *)(gen_frame + 0x0));
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
        F_0046aa70(this_00 GEN_EDX_ARG,uVar3,ppiVar6);
      }
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar5 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
      return (uint)uVar5;
    }
    if (*((uint *)GEN_TOP((iVar1 + 0x54))) == uVar4) {
      (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP((iVar1 + 0x5c)));
      goto LAB_00a792c1;
    }
    iVar1 = iVar1 + 0x11c;
  } while( true );
}

/* ref: FUN_00a794b0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a794b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa794b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0xd8, 8, 4);
  uint * puVar1;
  undefined * this_00;
  byte bVar2;
  uint * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  ulonglong uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd4));
  piVar6 = param_1;
  if ((*((int *)GEN_TOP(((int)this + 0x39b4))) == 8) && (param_2 == 1)) {
    puVar1 = *((uint * PTR32 *)GEN_TOP((*param_1 + 4)));
    F_00a94c50(((undefined *)GEN_TOP(((int)this + 0x17c))) GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x17c))) = (uint)*((ushort *)GEN_TOP(((int)this + 0x39f8)));
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x180))) GEN_EDX_ARG,(*puVar1 & 0xffffff) + (int)puVar1);
    *((undefined4 *)GEN_TOP(((int)this + 0x280))) = 0x22;
    *((uint *)GEN_TOP(((int)this + 0x284))) = (uint)*((byte *)GEN_TOP(((int)puVar1 + 0x31)));
    *((uint *)GEN_TOP(((int)this + 0x2b4))) = puVar1[4];
    puVar3 = ((uint *)GEN_TOP(F_00ab21d0(0x22)));
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x22c))) GEN_EDX_ARG,(*puVar3 & 0xffffff) + (int)puVar3);
    *((ushort *)GEN_TOP(((int)this + 0x290))) = (ushort)*((byte *)GEN_TOP(((int)puVar1 + 0x31)));
    *((uint *)GEN_TOP(((int)this + 0x2a4))) = (uint)(ushort)puVar1[10];
    *((undefined4 *)GEN_TOP(((int)this + 0x2b0))) = 0x39;
    uVar4 = F_00ab1c90(puVar1[3]);
    *((uint *)GEN_TOP(((int)this + 0x440))) = (uint)*((ushort *)GEN_TOP((uVar4 + 0x20)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
    puVar5 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar5;
    if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar5 = 0;
      puVar5[1] = 0;
    }
    *puVar5 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
    uVar4 = *((uint *)GEN_TOP(((int)this + 0x440)));
    (*(uint *)(gen_frame + 0xc4)) = 0;
    (*(uint *)(gen_frame + 0xc4)) = uVar4;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(uint * PTR32 *)(gen_frame + 0xc8)) = &(*(uint *)(gen_frame + 0xc4));
    (*(char *)(gen_frame + 0xcc)) = '\0';
    F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc4)));
    if ((((*(uint * PTR32 *)(gen_frame + 0xc8)) != ((uint *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0xcc)) != '\0')) && ((*(char *)(gen_frame + 0xcc)) == '\x01')) {
      this_00 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0xc8))));
      *((int *)GEN_TOP(((int)this_00 + 0x54))) = *((int *)GEN_TOP(((int)this_00 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)this_00 + 0x54))) < 1) {
        F_0042c880(this_00 GEN_EDX_ARG);
        F_00406ad0(this_00);
      }
    }
    F_00ab3200(0x9d0,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),(int)this + 800);
    *((undefined4 *)GEN_TOP(((int)this + 0x448))) = 0;
    uVar4 = F_00ab3900((uint)(byte)puVar1[0xc]);
    *((undefined4 *)GEN_TOP(((int)this + 0x2ac))) = *((undefined4 *)GEN_TOP((uVar4 + 4)));
    if ((short)puVar1[10] != 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG,&REFG(undefined, 0x10e70ff),REFG(undefined4, 0x108cc50));
      F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar4 = puVar1[10];
      (*(uint *)(gen_frame + 0xc4)) = 0;
      (*(uint *)(gen_frame + 0xc4)) = (uint)(ushort)uVar4;
      (*(uint * PTR32 *)(gen_frame + 0xc8)) = &(*(uint *)(gen_frame + 0xc4));
      (*(char *)(gen_frame + 0xcc)) = '\0';
      F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc4)));
      F_004917c0(&(*(uint *)(gen_frame + 0xc4)) GEN_EDX_ARG);
      F_00ab3200(0x9cf,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x70)));
      F_00a95670(((undefined *)GEN_TOP(((int)this + 0x294))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x70)));
      F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG,&REFG(undefined, 0x10e7119),REFG(undefined4, 0x108cc50));
    bVar2 = F_0042ac50(((undefined *)GEN_TOP(((int)this + 800))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x70)));
    (*(bool *)(gen_frame + 0x1b)) = bVar2 == 0;
    F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
    if ((*(bool *)(gen_frame + 0x1b)) != false) {
      F_00a95670(((undefined *)GEN_TOP(((int)this + 0x294))) GEN_EDX_ARG,(int)this + 800);
    }
    *((undefined2 *)GEN_TOP(((int)this + 0x3158))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x434))) = 0;
    F_0042aca0((int)this + 0x315c GEN_EDX_ARG);
    *((short *)GEN_TOP(((int)this + 0x3158))) = *((short *)GEN_TOP(((int)this + 0x3158))) + 1;
    F_0042e430(((undefined *)GEN_TOP(((uint)*((ushort *)GEN_TOP(((int)this + 0x3158))) * 0x58 + 0x315c + (int)this))) GEN_EDX_ARG,
                 (int)puVar1 + (puVar1[1] & 0xffffff) + 4);
    *((short *)GEN_TOP(((int)this + 0x3158))) = *((short *)GEN_TOP(((int)this + 0x3158))) + 1;
    F_0042cc20(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&REFG(undefined, 0x10e711a),REFG(undefined4, 0x108cc50));
    F_0076c5b0((int)this + 0x2c0,(uint)(byte)puVar1[0xd],0x22,(uint)*((byte *)GEN_TOP(((int)puVar1 + 0x32))),
                 (uint)*((byte *)GEN_TOP(((int)puVar1 + 0x31))),(uint)*((byte *)GEN_TOP(((int)puVar1 + 0x33))),0,0);
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39ec)));
    if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x39ec))) = 0;
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 0;
    if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
      piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
    }
    else {
      piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0)));
    }
    if (piVar6 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 4))))(piVar6 GEN_EDX_ARG,0xc);
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
    F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar7 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
    piVar6 = ((int *)GEN_TOP((uint)uVar7));
  }
  return (uint)piVar6;
}

/* ref: FUN_00a79840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a79840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa79840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x80, 0, 4);
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  ulonglong uVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(uint *)(gen_frame + 0x78)) = uVar1;
  *(int * PTR32 *)this = param_1;
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
    piVar2 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
    (*(int * PTR32 *)(gen_frame + 0x0)) = piVar2;
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_0042b630(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1b8))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)));
    (*(undefined4 *)(gen_frame + 0x6c)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x70)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x74)) = -1;
    F_00490f90(&(*(undefined4 *)(gen_frame + 0x6c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)));
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x6c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x70)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x74)) != '\0')) && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
      this_00 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x70))));
      *((int *)GEN_TOP(((int)this_00 + 0x54))) = *((int *)GEN_TOP(((int)this_00 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)this_00 + 0x54))) < 1) {
        F_0042c880(this_00 GEN_EDX_ARG);
        F_00406ad0(this_00);
      }
    }
    F_0042aca0((int)this + 4 GEN_EDX_ARG);
    F_00ab3200(0x19001,&(*(int * PTR32 *)(gen_frame + 0x0)),(int)this + 4);
    if (*((char *)GEN_TOP(((int)this + 0x58))) == '\0') {
      *((undefined1 *)GEN_TOP(((int)this + 0x58))) = 1;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar3 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
    return (uint)uVar3;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x58))) = 0;
  return uVar1;
}

/* ref: FUN_00a79980 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a79980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa79980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0xac, 4, 4);
  char cVar1;
  short sVar2;
  ushort uVar3;
  uint * puVar4;
  byte bVar5;
  uint uVar6;
  ushort * puVar7;
  undefined4 * puVar8;
  undefined * pvVar9;
  int * piVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  float10 fVar15;
  float fVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa8));
  (*(int *)(gen_frame + 0x20)) = param_1;
  uVar6 = F_00a4ffd0();
  (*(uint *)(gen_frame + 0x24)) = uVar6;
  (*(uint *)(gen_frame + 0x4c)) = 0;
  if (param_2 != 0) {
    do {
      puVar4 = *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + (*(uint *)(gen_frame + 0x4c)) * 4))) + 4)));
      iVar14 = *((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x1e4))) * 4 + 0x90)));
      (*(int *)(gen_frame + 0x2c)) = iVar14;
      iVar14 = iVar14 * 0x2624;
      (*(uint *)(gen_frame + 0x58)) = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20c))) + 0xc))) + (*(uint *)(gen_frame + 0x4c)) * 0x10)));
      (*(uint * PTR32 *)(gen_frame + 0x7c)) = puVar4;
      (*(int *)(gen_frame + 0x78)) = iVar14;
      (*(uint *)(gen_frame + 0x54)) = (uint)*((ushort *)GEN_TOP((iVar14 + 0xaa + *((int *)GEN_TOP(((int)this + 0x198))))));
      uVar6 = F_00a4ffd0();
      iVar12 = 0;
      puVar7 = ((ushort *)GEN_TOP((uVar6 + 0x1688)));
      do {
        if ((*(uint *)(gen_frame + 0x54)) == *puVar7) goto LAB_00a79a3a;
        iVar12 = iVar12 + 1;
        puVar7 = puVar7 + 8;
      } while (iVar12 < 0x10);
      iVar12 = 0x10;
LAB_00a79a3a: ;
      (*(int *)(gen_frame + 0x50)) = (*(uint *)(gen_frame + 0x24)) + 0x1684 + iVar12 * 0x10;
      F_0042e430(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x198))) + iVar14))) GEN_EDX_ARG,(*puVar4 & 0xffffff) + (int)puVar4
                  );
      sVar2 = *((short *)GEN_TOP(((int)puVar4 + 0x4a)));
      *((ushort *)GEN_TOP((iVar14 + 0xa8 + *((int *)GEN_TOP(((int)this + 0x198)))))) = (ushort)*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x50)) + 6)));
      (*(uint *)(gen_frame + 0x54)) = (int)sVar2;
      *((undefined4 *)GEN_TOP((iVar14 + 0x25e8 + *((int *)GEN_TOP(((int)this + 0x198)))))) = 1;
      if (sVar2 == 0xe) {
        (*(uint *)(gen_frame + 0x48)) = puVar4[7];
        puVar8 = ((undefined4 *)GEN_TOP(F_00ab37e0(puVar4[7])));
        uVar6 = F_006b8c00();
        pvVar9 = ((undefined *)GEN_TOP(F_006def00(uVar6 GEN_EDX_ARG)));
        if (*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x50)) + 6))) < 10) {
          bVar5 = F_006dd140(pvVar9 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x58)));
          (*(int *)(gen_frame + 0x74)) = 0xecef;
          if (bVar5 != 0) goto LAB_00a79ad1;
        }
        else {
LAB_00a79ad1: ;
          (*(int *)(gen_frame + 0x74)) = 0xece5;
        }
        *((undefined2 *)GEN_TOP((iVar14 + 0xa8 + *((int *)GEN_TOP(((int)this + 0x198)))))) = 0xff;
LAB_00a79b45: ;
        if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
          uVar3 = *(ushort *)(puVar8 + 8);
          (*(undefined4 *)(gen_frame + 0x8)) = puVar8[6];
          uVar6 = F_00ab1c90((uint)uVar3);
          if (uVar6 != 0) {
            (*(uint *)(gen_frame + 0x58)) = 5;
            (*(uint *)(gen_frame + 0x14)) = (uint)((*(int *)(gen_frame + 0x74)) != 0);
            do {
              *((uint *)GEN_TOP((iVar14 + 0x17c + *((int *)GEN_TOP(((int)this + 0x198)))))) = (*(uint *)(gen_frame + 0x48));
              *((undefined4 *)GEN_TOP((iVar14 + 0x180 + *((int *)GEN_TOP(((int)this + 0x198)))))) = *puVar8;
              *((undefined4 *)GEN_TOP((iVar14 + 0x184 + *((int *)GEN_TOP(((int)this + 0x198)))))) = puVar8[1];
              *((undefined4 *)GEN_TOP((iVar14 + 0x188 + *((int *)GEN_TOP(((int)this + 0x198)))))) = puVar8[2];
              if ((puVar8[9] == 9) || (puVar8[9] == 0x33)) {
                fVar15 = F_007733a0(GEN_ARGF(gen_bits2f(puVar8[4])));
                fVar16 = (float)fVar15;
                (*(float *)(gen_frame + 0x28)) = fVar16;
              }
              else {
                fVar16 = gen_bits2f(puVar8[4]);
              }
              *((float *)GEN_TOP((iVar14 + 0x18c + *((int *)GEN_TOP(((int)this + 0x198)))))) = fVar16;
              *((int *)GEN_TOP((iVar14 + 400 + *((int *)GEN_TOP(((int)this + 0x198)))))) = (*(int *)(gen_frame + 0x74));
              *((uint *)GEN_TOP((iVar14 + 0x23c + *((int *)GEN_TOP(((int)this + 0x198)))))) = (*(uint *)(gen_frame + 0x14));
              *((undefined4 *)GEN_TOP((iVar14 + 0x170 + *((int *)GEN_TOP(((int)this + 0x198)))))) = (*(undefined4 *)(gen_frame + 0x8));
              *((uint *)GEN_TOP((iVar14 + 0x16c + *((int *)GEN_TOP(((int)this + 0x198)))))) = (uint)uVar3;
              iVar14 = iVar14 + 0x18c;
              uVar6 = (*(uint *)(gen_frame + 0x58)) - 1;
              (*(uint *)(gen_frame + 0x58)) = uVar6;
            } while (uVar6 != 0);
          }
        }
      }
      else {
        sVar2 = *((short *)GEN_TOP((iVar14 + 0xa8 + *((int *)GEN_TOP(((int)this + 0x198))))));
        if ((sVar2 == 1) || (sVar2 == 3)) {
          (*(uint *)(gen_frame + 0x48)) = puVar4[8];
          puVar8 = ((undefined4 *)GEN_TOP(F_00ab37e0(puVar4[8])));
          (*(int *)(gen_frame + 0x74)) = 0xebf9;
          goto LAB_00a79b45;
        }
        if (sVar2 == 0xff) {
          (*(uint *)(gen_frame + 0x48)) = (*(uint * PTR32 *)(gen_frame + 0x7c))[7];
          puVar8 = ((undefined4 *)GEN_TOP(F_00ab37e0((*(uint * PTR32 *)(gen_frame + 0x7c))[7])));
          (*(int *)(gen_frame + 0x74)) = 0xece5;
          goto LAB_00a79b45;
        }
      }
      if ((*(uint *)(gen_frame + 0x54)) == 0) {
        *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x78)) + 0x25e8 + *((int *)GEN_TOP(((int)this + 0x198)))))) = 0;
      }
      else {
        (*(int * PTR32 *)(gen_frame + 0x5c)) = ((int *)GEN_TOP(0x0));
        piVar10 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
        (*(int * PTR32 *)(gen_frame + 0x5c)) = piVar10;
        if (piVar10 != ((int *)GEN_TOP(0x0))) {
          *piVar10 = 0;
          piVar10[1] = 0;
        }
        *piVar10 = (int)&(*(int * PTR32 *)(gen_frame + 0x5c));
        (*(int *)(gen_frame + 0x60)) = 0;
        (*(uint *)(gen_frame + 0x64)) = 0;
        (*(int *)(gen_frame + 0x68)) = 0;
        (*(int *)(gen_frame + 0x6c)) = 0;
        (*(int * PTR32 *)(gen_frame + 0x30)) = ((int *)GEN_TOP(0x0));
        piVar10 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
        (*(int * PTR32 *)(gen_frame + 0x30)) = piVar10;
        if (piVar10 != ((int *)GEN_TOP(0x0))) {
          *piVar10 = 0;
          piVar10[1] = 0;
        }
        *piVar10 = (int)&(*(int * PTR32 *)(gen_frame + 0x30));
        uVar13 = 0;
        (*(int *)(gen_frame + 0x34)) = 0;
        (*(uint *)(gen_frame + 0x38)) = 0;
        (*(int *)(gen_frame + 0x3c)) = 0;
        (*(int *)(gen_frame + 0x40)) = 0;
        if ((*(uint * PTR32 *)(gen_frame + 0x7c))[7] != 0) {
          uVar6 = F_00ab37e0((*(uint * PTR32 *)(gen_frame + 0x7c))[7]);
          *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x78)) + 0x261c + *((int *)GEN_TOP(((int)this + 0x198)))))) = (*(uint * PTR32 *)(gen_frame + 0x7c))[7];
          if (uVar6 != 0) {
            uVar13 = *((undefined4 *)GEN_TOP((uVar6 + 0x14)));
          }
        }
        uVar6 = (*(uint * PTR32 *)(gen_frame + 0x7c))[0xd];
        (*(uint *)(gen_frame + 0x98)) = 0;
        (*(uint *)(gen_frame + 0x98)) = uVar6;
        (*(uint * PTR32 *)(gen_frame + 0x9c)) = &(*(uint *)(gen_frame + 0x98));
        (*(char *)(gen_frame + 0xa0)) = '\0';
        if ((*(uint *)(gen_frame + 0x64)) <= (*(int *)(gen_frame + 0x6c)) + 1U) {
          F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x5c)) GEN_EDX_ARG,1);
        }
        uVar6 = (*(int *)(gen_frame + 0x68)) + (*(int *)(gen_frame + 0x6c));
        if ((*(uint *)(gen_frame + 0x64)) <= uVar6) {
          uVar6 = uVar6 - (*(uint *)(gen_frame + 0x64));
        }
        if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x60)) + uVar6 * 4))) == 0) {
          uVar11 = F_004296a0(0xc,0,0x2c4);
          *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x60)) + uVar6 * 4))) = uVar11;
        }
        puVar4 = *((uint * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x60)) + uVar6 * 4)));
        if (puVar4 != ((uint *)GEN_TOP(0x0))) {
          *puVar4 = 0;
          puVar4[1] = 0;
          *(undefined1 *)(puVar4 + 2) = 0xff;
          if (((*(char *)(gen_frame + 0xa0)) != -1) && (puVar4 != &(*(uint *)(gen_frame + 0x98)))) {
            (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar4;
            (*(uint * PTR32 *)(gen_frame + 0x10)) = (*(uint * PTR32 *)(gen_frame + 0x9c));
            if ((*(char *)(gen_frame + 0xa0)) == '\0') {
              F_004919b0(&(*(uint * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
            }
            else if ((*(char *)(gen_frame + 0xa0)) == '\x01') {
              F_00491a60(&(*(uint * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
            }
          }
        }
        (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 1;
        if ((*(uint * PTR32 *)(gen_frame + 0x9c)) != ((uint *)GEN_TOP(0x0))) {
          if (((*(char *)(gen_frame + 0xa0)) != '\0') && ((*(char *)(gen_frame + 0xa0)) == '\x01')) {
            pvVar9 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x9c))));
            *((int *)GEN_TOP(((int)pvVar9 + 0x54))) = *((int *)GEN_TOP(((int)pvVar9 + 0x54))) - 1;
            if (*((int *)GEN_TOP(((int)pvVar9 + 0x54))) < 1) {
              F_0042c880(pvVar9 GEN_EDX_ARG);
              F_00406ad0(pvVar9);
            }
          }
          (*(uint * PTR32 *)(gen_frame + 0x9c)) = ((uint *)GEN_TOP(0x0));
          (*(char *)(gen_frame + 0xa0)) = -1;
        }
        (*(undefined4 *)(gen_frame + 0x80)) = 0;
        (*(undefined4 *)(gen_frame + 0x80)) = uVar13;
        (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = &(*(undefined4 *)(gen_frame + 0x80));
        (*(char *)(gen_frame + 0x88)) = '\0';
        if ((*(uint *)(gen_frame + 0x64)) <= (*(int *)(gen_frame + 0x6c)) + 1U) {
          F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x5c)) GEN_EDX_ARG,1);
        }
        uVar6 = (*(int *)(gen_frame + 0x68)) + (*(int *)(gen_frame + 0x6c));
        if ((*(uint *)(gen_frame + 0x64)) <= uVar6) {
          uVar6 = uVar6 - (*(uint *)(gen_frame + 0x64));
        }
        if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x60)) + uVar6 * 4))) == 0) {
          uVar11 = F_004296a0(0xc,0,0x2c4);
          *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x60)) + uVar6 * 4))) = uVar11;
        }
        puVar8 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x60)) + uVar6 * 4)));
        if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
          *puVar8 = 0;
          puVar8[1] = 0;
          *(undefined1 *)(puVar8 + 2) = 0xff;
          if (((*(char *)(gen_frame + 0x88)) != -1) && (puVar8 != &(*(undefined4 *)(gen_frame + 0x80)))) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar8;
            (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x84));
            if ((*(char *)(gen_frame + 0x88)) == '\0') {
              F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG);
            }
            else if ((*(char *)(gen_frame + 0x88)) == '\x01') {
              F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG);
            }
          }
        }
        (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 1;
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x84)) != ((undefined4 *)GEN_TOP(0x0))) {
          if (((*(char *)(gen_frame + 0x88)) != '\0') && ((*(char *)(gen_frame + 0x88)) == '\x01')) {
            pvVar9 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x84))));
            *((int *)GEN_TOP(((int)pvVar9 + 0x54))) = *((int *)GEN_TOP(((int)pvVar9 + 0x54))) - 1;
            if (*((int *)GEN_TOP(((int)pvVar9 + 0x54))) < 1) {
              F_0042c880(pvVar9 GEN_EDX_ARG);
              F_00406ad0(pvVar9);
            }
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = ((undefined4 *)GEN_TOP(0x0));
          (*(char *)(gen_frame + 0x88)) = -1;
        }
        uVar6 = (*(uint * PTR32 *)(gen_frame + 0x7c))[0x10];
        (*(uint *)(gen_frame + 0x8c)) = 0;
        (*(uint *)(gen_frame + 0x8c)) = uVar6;
        (*(uint * PTR32 *)(gen_frame + 0x90)) = &(*(uint *)(gen_frame + 0x8c));
        (*(char *)(gen_frame + 0x94)) = '\0';
        if ((*(uint *)(gen_frame + 0x38)) <= (*(int *)(gen_frame + 0x40)) + 1U) {
          F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,1);
        }
        uVar6 = (*(int *)(gen_frame + 0x40)) + (*(int *)(gen_frame + 0x3c));
        if ((*(uint *)(gen_frame + 0x38)) <= uVar6) {
          uVar6 = uVar6 - (*(uint *)(gen_frame + 0x38));
        }
        if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + uVar6 * 4))) == 0) {
          uVar11 = F_004296a0(0xc,0,0x2c4);
          *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + uVar6 * 4))) = uVar11;
        }
        puVar4 = *((uint * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + uVar6 * 4)));
        if (puVar4 != ((uint *)GEN_TOP(0x0))) {
          *puVar4 = 0;
          puVar4[1] = 0;
          *(undefined1 *)(puVar4 + 2) = 0xff;
          if (((*(char *)(gen_frame + 0x94)) != -1) && (puVar4 != &(*(uint *)(gen_frame + 0x8c)))) {
            (*(uint * PTR32 *)(gen_frame + 0x0)) = puVar4;
            (*(uint * PTR32 *)(gen_frame + 0x4)) = (*(uint * PTR32 *)(gen_frame + 0x90));
            if ((*(char *)(gen_frame + 0x94)) == '\0') {
              F_004919b0(&(*(uint * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            }
            else if ((*(char *)(gen_frame + 0x94)) == '\x01') {
              F_00491a60(&(*(uint * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            }
          }
        }
        (*(int *)(gen_frame + 0x40)) = (*(int *)(gen_frame + 0x40)) + 1;
        if ((*(uint * PTR32 *)(gen_frame + 0x90)) != ((uint *)GEN_TOP(0x0))) {
          if (((*(char *)(gen_frame + 0x94)) != '\0') && ((*(char *)(gen_frame + 0x94)) == '\x01')) {
            pvVar9 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x90))));
            *((int *)GEN_TOP(((int)pvVar9 + 0x54))) = *((int *)GEN_TOP(((int)pvVar9 + 0x54))) - 1;
            if (*((int *)GEN_TOP(((int)pvVar9 + 0x54))) < 1) {
              F_0042c880(pvVar9 GEN_EDX_ARG);
              F_00406ad0(pvVar9);
            }
          }
          (*(uint * PTR32 *)(gen_frame + 0x90)) = ((uint *)GEN_TOP(0x0));
          (*(char *)(gen_frame + 0x94)) = -1;
        }
        iVar14 = (*(int *)(gen_frame + 0x78));
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x78)) + 0x2620 + *((int *)GEN_TOP(((int)this + 0x198)))))) = (*(uint * PTR32 *)(gen_frame + 0x7c))[0x10];
        if ((*(uint *)(gen_frame + 0x54)) == 0xe) {
          *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x78)) + 0x25e4 + *((int *)GEN_TOP(((int)this + 0x198)))))) = 0;
          *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x78)) + 0xb0 + *((int *)GEN_TOP(((int)this + 0x198)))))) = 1;
          *((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x1e8))) * 4 + 0xa4))) = (*(int *)(gen_frame + 0x2c));
          *((int *)GEN_TOP(((int)this + 0x1e8))) = *((int *)GEN_TOP(((int)this + 0x1e8))) + 1;
          *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x78)) + 0x25ec + *((int *)GEN_TOP(((int)this + 0x198)))))) = (*(uint * PTR32 *)(gen_frame + 0x7c))[0x12];
          *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x78)) + 0x25f0 + *((int *)GEN_TOP(((int)this + 0x198)))))) = (*(uint * PTR32 *)(gen_frame + 0x7c))[10];
        }
        else {
          if ((*(uint *)(gen_frame + 0x54)) == 2) {
            *((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 500))) * 4 + 0xb8))) = (*(int *)(gen_frame + 0x2c));
            *((int *)GEN_TOP(((int)this + 500))) = *((int *)GEN_TOP(((int)this + 500))) + 1;
            *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x78)) + 0x25ec + *((int *)GEN_TOP(((int)this + 0x198)))))) = (*(uint * PTR32 *)(gen_frame + 0x7c))[0x12];
            *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x78)) + 0x25f0 + *((int *)GEN_TOP(((int)this + 0x198)))))) = (*(uint * PTR32 *)(gen_frame + 0x7c))[10];
          }
          *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x78)) + 0xb0 + *((int *)GEN_TOP(((int)this + 0x198)))))) = 4;
          if ((*(uint *)(gen_frame + 0x54)) != 2) {
            F_00ab3200(0x18f39,&(*(int * PTR32 *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x78)) + 0xb8 + *((int *)GEN_TOP(((int)this + 0x198))));
          }
          F_00ab3200(0x18f3a,&(*(int * PTR32 *)(gen_frame + 0x5c)),iVar14 + 0x244 + *((int *)GEN_TOP(((int)this + 0x198))));
          F_00ab3200(0x18f3b,&(*(int * PTR32 *)(gen_frame + 0x5c)),iVar14 + 0x3d0 + *((int *)GEN_TOP(((int)this + 0x198))));
          F_00ab3200(0x18f3d,&(*(int * PTR32 *)(gen_frame + 0x5c)),iVar14 + 0x6e8 + *((int *)GEN_TOP(((int)this + 0x198))));
          cVar1 = *((char *)GEN_TOP(((*(int *)(gen_frame + 0x50)) + 6)));
          if (cVar1 == '\x01') {
            pvVar9 = ((undefined *)GEN_TOP(F_006b8c00()));
            uVar6 = F_006d6fd0(pvVar9 GEN_EDX_ARG);
            if ((uVar6 == 0) ||
               (*((short *)GEN_TOP((uVar6 + 0x310))) != *((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x198))) + 0xaa + iVar14)))
               )) {
              *((undefined4 *)GEN_TOP((iVar14 + 0x25e4 + *((int *)GEN_TOP(((int)this + 0x198)))))) = 0;
            }
            else {
              *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x198))) + 0x25e4 + iVar14))) = 1;
            }
          }
          else if (cVar1 == -1) {
            *((undefined4 *)GEN_TOP((iVar14 + 0x25e4 + *((int *)GEN_TOP(((int)this + 0x198)))))) = 2;
          }
          else if (cVar1 == '\x03') {
            *((undefined4 *)GEN_TOP((iVar14 + 0x25e4 + *((int *)GEN_TOP(((int)this + 0x198)))))) = 4;
          }
        }
        F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG);
        F_00429760((*(int * PTR32 *)(gen_frame + 0x30)),8,0x2c4);
        (*(int * PTR32 *)(gen_frame + 0x30)) = ((int *)GEN_TOP(0x0));
        F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
        F_00429760((*(int * PTR32 *)(gen_frame + 0x5c)),8,0x2c4);
      }
      *((int *)GEN_TOP(((int)this + 0x1e4))) = *((int *)GEN_TOP(((int)this + 0x1e4))) + 1;
      uVar6 = (*(uint *)(gen_frame + 0x4c)) + 1;
      (*(uint *)(gen_frame + 0x4c)) = uVar6;
    } while (uVar6 < param_2);
  }
  puVar8 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20c)));
  if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar8)))(puVar8 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x20c))) = 0;
  }
  if (*((uint *)GEN_TOP(((int)this + 0x1e0))) < (uint)*((ushort *)GEN_TOP(((int)this + 0x7a)))) {
    uVar6 = F_00a6ebe0(this GEN_EDX_ARG);
    return uVar6;
  }
  if (*((int *)GEN_TOP(((int)this + 500))) != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x1f8))) = 0;
    uVar6 = F_00a6ece0(this GEN_EDX_ARG);
    return uVar6;
  }
  if (*((int *)GEN_TOP(((int)this + 0x1e8))) != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x1ec))) = 0;
    uVar6 = F_00a72650(this GEN_EDX_ARG);
    return uVar6;
  }
  if (*((short *)GEN_TOP(((int)this + 0x78))) == 0) {
    puVar8 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x204)));
    if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar8)))(puVar8 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x204))) = 0;
    }
    puVar8 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20c)));
    if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar8)))(puVar8 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x20c))) = 0;
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x1dd))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x194))) = 1;
    return uVar6;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c8))) = 0;
  uVar6 = F_00a71ef0(this GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_00a7a320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a7a320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa7a320u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x58, 8, 4);
  undefined * pvVar1;
  uint * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x54);
  (*(uint *)(gen_frame + 0x50)) = uVar3;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  if (param_2 != 0) {
    do {
      iVar6 = *((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x1fc))) * 4 + 0xb8))) * 0x2624;
      (*(int *)(gen_frame + 0x8)) = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + (*(uint *)(gen_frame + 0x1c)) * 4))) + 4)));
      iVar8 = *((int *)GEN_TOP((iVar6 + 0x25f0 + *((int *)GEN_TOP(((int)this + 0x198))))));
      (*(int *)(gen_frame + 0x18)) = iVar6;
      (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = ((undefined4 *)GEN_TOP(0x0));
      (*(uint *)(gen_frame + 0xc)) = (uint)(iVar8 == 2);
      puVar4 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = puVar4;
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      *puVar4 = &(*(undefined4 * PTR32 *)(gen_frame + 0x20));
      (*(int *)(gen_frame + 0x24)) = 0;
      (*(uint *)(gen_frame + 0x28)) = 0;
      (*(int *)(gen_frame + 0x2c)) = 0;
      (*(int *)(gen_frame + 0x30)) = 0;
      uVar7 = *((undefined4 *)GEN_TOP((iVar6 + 0x2620 + *((int *)GEN_TOP(((int)this + 0x198))))));
      (*(undefined4 *)(gen_frame + 0x44)) = 0;
      (*(undefined4 *)(gen_frame + 0x44)) = uVar7;
      (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = &(*(undefined4 *)(gen_frame + 0x44));
      (*(char *)(gen_frame + 0x4c)) = '\0';
      F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,1);
      uVar3 = (*(int *)(gen_frame + 0x30)) + (*(int *)(gen_frame + 0x2c));
      if ((*(uint *)(gen_frame + 0x28)) <= uVar3) {
        uVar3 = uVar3 - (*(uint *)(gen_frame + 0x28));
      }
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + uVar3 * 4))) == 0) {
        uVar5 = F_004296a0(0xc,0,0x2c4);
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + uVar3 * 4))) = uVar5;
      }
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + uVar3 * 4)));
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0x4c)) != -1) && (puVar4 != &(*(undefined4 *)(gen_frame + 0x44)))) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (*(undefined4 * PTR32 *)(gen_frame + 0x48));
          if ((*(char *)(gen_frame + 0x4c)) == '\0') {
            F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
          }
          else if ((*(char *)(gen_frame + 0x4c)) == '\x01') {
            F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
          }
        }
      }
      (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 1;
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x48)) != ((undefined4 *)GEN_TOP(0x0))) {
        if (((*(char *)(gen_frame + 0x4c)) != '\0') && ((*(char *)(gen_frame + 0x4c)) == '\x01')) {
          pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x48))));
          *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
          if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
            F_0042c880(pvVar1 GEN_EDX_ARG);
            F_00406ad0(pvVar1);
          }
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = ((undefined4 *)GEN_TOP(0x0));
        (*(char *)(gen_frame + 0x4c)) = -1;
      }
      (*(uint *)(gen_frame + 0x38)) = 0;
      (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0xc));
      (*(uint * PTR32 *)(gen_frame + 0x3c)) = &(*(uint *)(gen_frame + 0x38));
      (*(char *)(gen_frame + 0x40)) = '\0';
      if ((*(uint *)(gen_frame + 0x28)) <= (*(int *)(gen_frame + 0x30)) + 1U) {
        F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,1);
      }
      uVar3 = (*(int *)(gen_frame + 0x30)) + (*(int *)(gen_frame + 0x2c));
      if ((*(uint *)(gen_frame + 0x28)) <= uVar3) {
        uVar3 = uVar3 - (*(uint *)(gen_frame + 0x28));
      }
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + uVar3 * 4))) == 0) {
        uVar5 = F_004296a0(0xc,0,0x2c4);
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + uVar3 * 4))) = uVar5;
      }
      puVar2 = *((uint * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + uVar3 * 4)));
      if (puVar2 != ((uint *)GEN_TOP(0x0))) {
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined1 *)(puVar2 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0x40)) != -1) && (puVar2 != &(*(uint *)(gen_frame + 0x38)))) {
          (*(uint * PTR32 *)(gen_frame + 0x0)) = puVar2;
          (*(uint * PTR32 *)(gen_frame + 0x4)) = (*(uint * PTR32 *)(gen_frame + 0x3c));
          if ((*(char *)(gen_frame + 0x40)) == '\0') {
            F_004919b0(&(*(uint * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          }
          else if ((*(char *)(gen_frame + 0x40)) == '\x01') {
            F_00491a60(&(*(uint * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          }
        }
      }
      (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 1;
      if ((*(uint * PTR32 *)(gen_frame + 0x3c)) != ((uint *)GEN_TOP(0x0))) {
        if (((*(char *)(gen_frame + 0x40)) != '\0') && ((*(char *)(gen_frame + 0x40)) == '\x01')) {
          pvVar1 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x3c))));
          *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
          if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
            F_0042c880(pvVar1 GEN_EDX_ARG);
            F_00406ad0(pvVar1);
          }
        }
        (*(uint * PTR32 *)(gen_frame + 0x3c)) = ((uint *)GEN_TOP(0x0));
        (*(char *)(gen_frame + 0x40)) = -1;
      }
      if (*((char *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x32))) == '\0') {
        iVar8 = (*(int *)(gen_frame + 0x18)) + 0xb8 + *((int *)GEN_TOP(((int)this + 0x198)));
        uVar7 = 0x18fce;
      }
      else {
        iVar8 = (*(int *)(gen_frame + 0x18)) + 0xb8 + *((int *)GEN_TOP(((int)this + 0x198)));
        uVar7 = 0x18fcf;
      }
      F_00ab3200(uVar7,&(*(undefined4 * PTR32 *)(gen_frame + 0x20)),iVar8);
      *((int *)GEN_TOP(((int)this + 0x1fc))) = *((int *)GEN_TOP(((int)this + 0x1fc))) + 1;
      F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG);
      F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x20)),8,0x2c4);
      uVar3 = (*(uint *)(gen_frame + 0x1c)) + 1;
      (*(uint *)(gen_frame + 0x1c)) = uVar3;
    } while (uVar3 < param_2);
  }
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x224)));
  if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x224))) = 0;
  }
  if (*((uint *)GEN_TOP(((int)this + 0x1f8))) < *((uint *)GEN_TOP(((int)this + 500)))) {
    uVar3 = F_00a6ece0(this GEN_EDX_ARG);
    return uVar3;
  }
  if (*((int *)GEN_TOP(((int)this + 0x1e8))) != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x1ec))) = 0;
    uVar3 = F_00a72650(this GEN_EDX_ARG);
    return uVar3;
  }
  if (*((short *)GEN_TOP(((int)this + 0x78))) == 0) {
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x204)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x204))) = 0;
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20c)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x20c))) = 0;
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x1dd))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x194))) = 1;
    return uVar3;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c8))) = 0;
  uVar3 = F_00a71ef0(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00a7a6b0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a7a6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa7a6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x33c, 4, 4);
  char cVar1;
  short sVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int * piVar9;
  uint * puVar10;
  uint uVar11;
  undefined * pvVar12;
  uint uVar13;
  undefined1 uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint * puVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x334)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x338));
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  ((uint *)(gen_frame + 0x24))[1] = param_1;
  uVar8 = F_00a4ffd0();
  ((uint * PTR32 *)(gen_frame + 0x8))[1] = ((uint *)GEN_TOP(0x0));
  piVar9 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  ((uint * PTR32 *)(gen_frame + 0x8))[1] = (uint *)piVar9;
  if (piVar9 != ((int *)GEN_TOP(0x0))) {
    *piVar9 = 0;
    piVar9[1] = 0;
  }
  *piVar9 = (int)(((uint * PTR32 *)(gen_frame + 0x8)) + 1);
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x1d8)) GEN_EDX_ARG,&REFG(undefined, 0x10e715f),REFG(undefined4, 0x108cc50));
  if (*((char *)GEN_TOP(((int)this + 0x1ba))) != '\0') {
    F_00ab0230(0x18f6e,((undefined1 *)(gen_frame + 0x1d8)));
  }
  uVar6 = *((ushort *)GEN_TOP(((int)this + 0xe40)));
  ((undefined1 *)(gen_frame + 0x33))[0] = 1;
  bVar5 = F_006bfeb0(uVar8,(uint)uVar6);
  if (bVar5 == 0) {
    if (*((char *)GEN_TOP(((int)this + 0x1ba))) != '\0') goto LAB_00a7a7a7;
  }
  else {
    if (*((char *)GEN_TOP(((int)this + 0x1ba))) == '\0') {
      ((undefined1 *)(gen_frame + 0x33))[0] = 3;
      *((undefined1 *)GEN_TOP(((int)this + 0x1b0))) = 0;
    }
LAB_00a7a7a7: ;
    F_00a95920(((undefined *)GEN_TOP(((int)this + 0x1a0))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x33)));
    F_00a95670(((undefined *)GEN_TOP(((int)this + 400))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1d8)));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x33)) + 1 GEN_EDX_ARG,&REFG(undefined, 0x10e716e),REFG(undefined4, 0x108cc50));
  if (*((int *)GEN_TOP(((int)this + 0x1c8))) != 0) {
    F_00492c50(((uint * PTR32 *)(gen_frame + 0x8)) + 1 GEN_EDX_ARG);
    uVar16 = (*(uint *)(gen_frame + 0x330));
    uVar17 = *((uint *)GEN_TOP(((int)this + 0x1c8)));
    (*(uint *)(gen_frame + 0x328)) = 0;
    (*(uint *)(gen_frame + 0x328)) = uVar17;
    (*(uint * PTR32 *)(gen_frame + 0x32c)) = &(*(uint *)(gen_frame + 0x328));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x330)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x330)) = uVar16 & 0xffffff00;
    F_00493b50(((uint * PTR32 *)(gen_frame + 0x8)) + 1 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x328)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x32c)) != ((uint *)GEN_TOP(0x0))) && ((char)(*(uint *)(gen_frame + 0x330)) != '\0')) && ((char)(*(uint *)(gen_frame + 0x330)) == '\x01')) {
      pvVar12 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x32c))));
      *((int *)GEN_TOP(((int)pvVar12 + 0x54))) = *((int *)GEN_TOP(((int)pvVar12 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar12 + 0x54))) < 1) {
        F_0042c880(pvVar12 GEN_EDX_ARG);
        F_00406ad0(pvVar12);
      }
    }
    F_00ab3200(0x18f70,((uint * PTR32 *)(gen_frame + 0x8)) + 1,((undefined1 *)(gen_frame + 0x33)) + 1);
  }
  cVar1 = *((char *)GEN_TOP((((uint *)(gen_frame + 0x24))[1] + 0xb95)));
  ((undefined1 *)(gen_frame + 0x33))[0] = 1;
  if (cVar1 != '\0') {
    if (cVar1 != *((char *)GEN_TOP((uVar8 + 0x375)))) {
      ((undefined1 *)(gen_frame + 0x33))[0] = 3;
      *((undefined1 *)GEN_TOP(((int)this + 0x1b0))) = 0;
    }
    F_00a95920(((undefined *)GEN_TOP(((int)this + 0x1a0))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x33)));
    F_00a95670(((undefined *)GEN_TOP(((int)this + 400))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x33)) + 1);
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined, 0x10e716f),REFG(undefined4, 0x108cc50));
  uVar17 = ((uint *)(gen_frame + 0x24))[1];
  uVar16 = (uint)*((byte *)GEN_TOP((((uint *)(gen_frame + 0x24))[1] + 0xb99)));
  if (*((byte *)GEN_TOP((((uint *)(gen_frame + 0x24))[1] + 0xb98))) != 0) {
    puVar10 = ((uint *)GEN_TOP(F_00ab3960((uint)*((byte *)GEN_TOP((((uint *)(gen_frame + 0x24))[1] + 0xb98))))));
    F_0042e430(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,(*puVar10 & 0xffffff) + (int)puVar10);
  }
  if ((uVar16 < 0x14) && (*((char *)GEN_TOP((uVar17 + 0xb98))) != '\0')) {
    if (uVar16 == 0) {
      uVar16 = 1;
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x280)) GEN_EDX_ARG,&REFG(undefined, 0x10e717d),REFG(undefined4, 0x108cc50));
    puVar10 = ((uint *)GEN_TOP(F_00ab3fd0(*((undefined1 *)GEN_TOP((uVar17 + 0xb98))),uVar16,1)));
    if (puVar10 != ((uint *)GEN_TOP(0x0))) {
      cVar1 = *((char *)GEN_TOP((uVar17 + 0xb98)));
      if (cVar1 == '\x01') {
LAB_00a7a977: ;
        uVar11 = *puVar10;
LAB_00a7a982: ;
        F_0042e430(((undefined1 *)(gen_frame + 0x280)) GEN_EDX_ARG,(uVar11 & 0xffffff) + (int)puVar10);
      }
      else {
        if (cVar1 == '\x02') {
          uVar11 = *puVar10;
          goto LAB_00a7a982;
        }
        if (cVar1 == '\x03') goto LAB_00a7a977;
      }
      uVar11 = F_0042a990(((undefined1 *)(gen_frame + 0x280)) GEN_EDX_ARG);
      uVar11 = F_0042ce40(((undefined1 *)(gen_frame + 0x130)),&REFG(undefined, 0x10e783c),uVar11);
      uVar11 = F_0042cd30(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x184)),uVar11);
      F_00a955f0(((undefined *)GEN_TOP(((int)this + 400))) GEN_EDX_ARG,uVar11);
      F_0042c880(((undefined1 *)(gen_frame + 0x184)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x130)) GEN_EDX_ARG);
      ((undefined1 *)(gen_frame + 0x33))[0] = 1;
      if (REFG(undefined1, 0x14ab29a) != 0) {
        if (REFG(undefined1, 0x14ab29a) - 1 < 3) {
          bVar5 = (&REFG(undefined1, 0x14ab29a))[(int)(REFG(undefined1, 0x14ab29a))];
        }
        else {
          bVar5 = 0;
        }
        if (bVar5 < uVar16) {
          ((undefined1 *)(gen_frame + 0x33))[0] = 3;
          *((undefined1 *)GEN_TOP(((int)this + 0x1b0))) = 0;
        }
      }
      F_00a95920(((undefined *)GEN_TOP(((int)this + 0x1a0))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x33)));
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x280)) GEN_EDX_ARG);
  }
  ((undefined1 *)(gen_frame + 0x33))[0] = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x2d4)) GEN_EDX_ARG,&REFG(undefined, 0x10e717e),REFG(undefined4, 0x108cc50));
  if (*((char *)GEN_TOP((uVar17 + 0xb90))) != '\x01') {
    F_00492c50(((uint * PTR32 *)(gen_frame + 0x8)) + 1 GEN_EDX_ARG);
    uVar16 = (*(uint *)(gen_frame + 0x330));
    bVar5 = *((byte *)GEN_TOP((uVar17 + 0xb90)));
    (*(uint * PTR32 *)(gen_frame + 0x32c)) = &(*(uint *)(gen_frame + 0x328));
    (*(uint *)(gen_frame + 0x328)) = 0;
    (*(uint *)(gen_frame + 0x328)) = (uint)bVar5;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x330)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x330)) = uVar16 & 0xffffff00;
    F_00493b50(((uint * PTR32 *)(gen_frame + 0x8)) + 1 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x328)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x32c)) != ((uint *)GEN_TOP(0x0))) && ((char)(*(uint *)(gen_frame + 0x330)) != '\0')) && ((char)(*(uint *)(gen_frame + 0x330)) == '\x01')) {
      pvVar12 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x32c))));
      *((int *)GEN_TOP(((int)pvVar12 + 0x54))) = *((int *)GEN_TOP(((int)pvVar12 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar12 + 0x54))) < 1) {
        F_0042c880(pvVar12 GEN_EDX_ARG);
        F_00406ad0(pvVar12);
      }
    }
    F_00ab3200(0x18f73,((uint * PTR32 *)(gen_frame + 0x8)) + 1,((undefined1 *)(gen_frame + 0x2d4)));
    F_00a95670(((undefined *)GEN_TOP(((int)this + 400))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2d4)));
    bVar5 = *((byte *)GEN_TOP((uVar17 + 0xb90)));
    ((uint *)(gen_frame + 0x24))[0] = 0;
    F_006da580((uint)bVar5,((uint *)(gen_frame + 0x24)));
    if ((0x1c < REFG(undefined1, 0x14ab0d4)) || ((((uint *)(gen_frame + 0x24))[(int)(REFG(undefined1, 0x14ab0d4) >> 5)] & 1 << (REFG(undefined1, 0x14ab0d4) & 0x1f)) == 0))
    {
      ((undefined1 *)(gen_frame + 0x33))[0] = 2;
      *((undefined1 *)GEN_TOP(((int)this + 0x1b0))) = 0;
    }
    F_00a95920(((undefined *)GEN_TOP(((int)this + 0x1a0))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x33)));
  }
  uVar14 = 0;
  sVar2 = *((short *)GEN_TOP((uVar17 + 0xb84)));
  ((undefined1 *)(gen_frame + 0x33))[0] = 0;
  if (sVar2 != 0) {
    if (*((char *)GEN_TOP((uVar17 + 0xb90))) == '\x01') {
      F_00492c50(((uint * PTR32 *)(gen_frame + 0x8)) + 1 GEN_EDX_ARG);
      uVar16 = (*(uint *)(gen_frame + 0x330));
      uVar6 = *((ushort *)GEN_TOP((uVar17 + 0xb84)));
      (*(uint * PTR32 *)(gen_frame + 0x32c)) = &(*(uint *)(gen_frame + 0x328));
      (*(uint *)(gen_frame + 0x328)) = 0;
      (*(uint *)(gen_frame + 0x328)) = (uint)uVar6;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x330)) + 0)) = 0;
      (*(uint *)(gen_frame + 0x330)) = uVar16 & 0xffffff00;
      F_00493b50(((uint * PTR32 *)(gen_frame + 0x8)) + 1 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x328)));
      if ((((*(uint * PTR32 *)(gen_frame + 0x32c)) != ((uint *)GEN_TOP(0x0))) && ((char)(*(uint *)(gen_frame + 0x330)) != '\0')) && ((char)(*(uint *)(gen_frame + 0x330)) == '\x01')) {
        pvVar12 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x32c))));
        *((int *)GEN_TOP(((int)pvVar12 + 0x54))) = *((int *)GEN_TOP(((int)pvVar12 + 0x54))) - 1;
        if (*((int *)GEN_TOP(((int)pvVar12 + 0x54))) < 1) {
          F_0042c880(pvVar12 GEN_EDX_ARG);
          F_00406ad0(pvVar12);
        }
      }
      F_0042e430(((undefined1 *)(gen_frame + 0x2d4)) GEN_EDX_ARG,&REFG(undefined, 0x10e718b));
      uVar20 = 0x18f74;
    }
    else {
      F_00492c50(((uint * PTR32 *)(gen_frame + 0x8)) + 1 GEN_EDX_ARG);
      uVar16 = (*(uint *)(gen_frame + 0x330));
      bVar5 = *((byte *)GEN_TOP((uVar17 + 0xb90)));
      (*(uint * PTR32 *)(gen_frame + 0x32c)) = &(*(uint *)(gen_frame + 0x328));
      (*(uint *)(gen_frame + 0x328)) = 0;
      (*(uint *)(gen_frame + 0x328)) = (uint)bVar5;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x330)) + 0)) = 0;
      (*(uint *)(gen_frame + 0x330)) = uVar16 & 0xffffff00;
      F_00493b50(((uint * PTR32 *)(gen_frame + 0x8)) + 1 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x328)));
      if ((((*(uint * PTR32 *)(gen_frame + 0x32c)) != ((uint *)GEN_TOP(0x0))) && ((char)(*(uint *)(gen_frame + 0x330)) != '\0')) && ((char)(*(uint *)(gen_frame + 0x330)) == '\x01')) {
        pvVar12 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x32c))));
        *((int *)GEN_TOP(((int)pvVar12 + 0x54))) = *((int *)GEN_TOP(((int)pvVar12 + 0x54))) - 1;
        if (*((int *)GEN_TOP(((int)pvVar12 + 0x54))) < 1) {
          F_0042c880(pvVar12 GEN_EDX_ARG);
          F_00406ad0(pvVar12);
        }
      }
      uVar16 = (*(uint *)(gen_frame + 0x330));
      uVar6 = *((ushort *)GEN_TOP((uVar17 + 0xb84)));
      (*(uint *)(gen_frame + 0x328)) = 0;
      (*(uint *)(gen_frame + 0x328)) = (uint)uVar6;
      (*(uint * PTR32 *)(gen_frame + 0x32c)) = &(*(uint *)(gen_frame + 0x328));
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x330)) + 0)) = 0;
      (*(uint *)(gen_frame + 0x330)) = uVar16 & 0xffffff00;
      F_00493b50(((uint * PTR32 *)(gen_frame + 0x8)) + 1 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x328)));
      if ((((*(uint * PTR32 *)(gen_frame + 0x32c)) != ((uint *)GEN_TOP(0x0))) && ((char)(*(uint *)(gen_frame + 0x330)) != '\0')) && ((char)(*(uint *)(gen_frame + 0x330)) == '\x01')) {
        pvVar12 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x32c))));
        *((int *)GEN_TOP(((int)pvVar12 + 0x54))) = *((int *)GEN_TOP(((int)pvVar12 + 0x54))) - 1;
        if (*((int *)GEN_TOP(((int)pvVar12 + 0x54))) < 1) {
          F_0042c880(pvVar12 GEN_EDX_ARG);
          F_00406ad0(pvVar12);
        }
      }
      F_0042e430(((undefined1 *)(gen_frame + 0x2d4)) GEN_EDX_ARG,&REFG(undefined, 0x10e717f));
      uVar20 = 0x18f72;
    }
    F_00ab3200(uVar20,((uint * PTR32 *)(gen_frame + 0x8)) + 1,((undefined1 *)(gen_frame + 0x2d4)));
    F_00a95670(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 400))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2d4)));
    bVar5 = *((byte *)GEN_TOP((((uint *)(gen_frame + 0x24))[1] + 0xb90)));
    uVar17 = 0;
    ((uint *)(gen_frame + 0x24))[0] = 0;
    F_006da580((uint)bVar5,((uint *)(gen_frame + 0x24)));
    do {
      if ((((uint *)(gen_frame + 0x24))[(int)(uVar17 >> 5)] & 1 << ((byte)uVar17 & 0x1f)) != 0) {
        uVar16 = uVar17;
        if (uVar17 == 0xffffffff) {
          uVar16 = (uint)REFG(undefined1, 0x14ab0d4);
        }
        if (((((int)uVar16 < 0x1d) && (uVar11 = F_00ab21a0((uint)REFG(undefined1, 0x14ab0d4)), uVar11 != 0)) &&
            (uVar16 = F_00ab21a0(uVar16), uVar16 != 0)) &&
           ((cVar1 = *((char *)GEN_TOP((uVar16 + 0x43))), -1 < cVar1 && (cVar1 < '\x13')))) {
          uVar6 = *(ushort *)(&REFG(undefined, 0x14ab0d6) + cVar1 * 2);
        }
        else {
          uVar6 = 0;
        }
        if (*((ushort *)GEN_TOP((((uint *)(gen_frame + 0x24))[1] + 0xb84))) <= uVar6) goto LAB_00a7ada0;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < 0x1d);
    uVar14 = 2;
    ((undefined1 *)(gen_frame + 0x33))[0] = 2;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1b0))) = 0;
LAB_00a7ada0: ;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xe98))) == 0xff) {
      uVar17 = (uint)REFG(undefined1, 0x14ab0d4);
      uVar6 = *((ushort *)GEN_TOP((((uint *)(gen_frame + 0x24))[1] + 0xb84)));
      if (((uVar17 < 0x1d) && (uVar16 = F_00ab21a0(uVar17), uVar16 != 0)) &&
         ((uVar17 = F_00ab21a0(uVar17), uVar17 != 0 &&
          ((cVar1 = *((char *)GEN_TOP((uVar17 + 0x43))), -1 < cVar1 && (cVar1 < '\x13')))))) {
        uVar7 = *(ushort *)(&REFG(undefined, 0x14ab0d6) + cVar1 * 2);
      }
      else {
        uVar7 = 0;
      }
      if (uVar7 < uVar6) {
        uVar14 = 2;
        ((undefined1 *)(gen_frame + 0x33))[0] = 2;
        *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1b0))) = 0;
      }
    }
    pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
    puVar3 = *((undefined1 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1a4)));
    if (((undefined1 *)(gen_frame + 0x33)) < puVar3) {
      puVar4 = *((undefined1 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1a0)));
      if (((undefined1 *)(gen_frame + 0x33)) < puVar4) goto LAB_00a7ae7a;
      if (puVar3 == *((undefined1 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1a8)))) {
        F_00a94600(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1a0))) GEN_EDX_ARG,1);
      }
      if (*((undefined1 * PTR32 *)GEN_TOP(((int)pvVar12 + 0x1a4))) != ((undefined1 *)GEN_TOP(0x0))) {
        **((undefined1 * PTR32 *)GEN_TOP(((int)pvVar12 + 0x1a4))) =
             ((undefined1 *)(gen_frame + 0x33))[(int)(*((int *)GEN_TOP(((int)pvVar12 + 0x1a0))) - (int)puVar4)];
      }
    }
    else {
LAB_00a7ae7a: ;
      if (puVar3 == *((undefined1 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1a8)))) {
        F_00a94600(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1a0))) GEN_EDX_ARG,1);
      }
      if (*((undefined1 * PTR32 *)GEN_TOP(((int)pvVar12 + 0x1a4))) != ((undefined1 *)GEN_TOP(0x0))) {
        **((undefined1 * PTR32 *)GEN_TOP(((int)pvVar12 + 0x1a4))) = uVar14;
      }
    }
    *((int *)GEN_TOP(((int)pvVar12 + 0x1a4))) = *((int *)GEN_TOP(((int)pvVar12 + 0x1a4))) + 1;
    uVar17 = ((uint *)(gen_frame + 0x24))[1];
  }
  ((undefined1 *)(gen_frame + 0x33))[0] = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x22c)) GEN_EDX_ARG,&REFG(undefined, 0x10e71a9),REFG(undefined4, 0x108cc50));
  if (*((char *)GEN_TOP((uVar17 + 0xb92))) != '\0') {
    F_0042cc20(((undefined1 *)(gen_frame + 0x184)) GEN_EDX_ARG,&REFG(undefined, 0x10e7844),REFG(undefined4, 0x108cc50));
    puVar10 = ((uint *)GEN_TOP(F_00ab21d0((uint)*((byte *)GEN_TOP((uVar17 + 0xb92))))));
    uVar16 = F_0042cc20(((undefined1 *)(gen_frame + 0xdc)) GEN_EDX_ARG,(*puVar10 & 0xffffff) + (int)puVar10,REFG(undefined4, 0x108cc50));
    pvVar12 = ((undefined *)GEN_TOP(F_0042cbc0(((undefined1 *)(gen_frame + 0x130)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x184)))));
    uVar16 = F_0042e360(pvVar12 GEN_EDX_ARG,uVar16);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x280)) GEN_EDX_ARG,uVar16);
    F_0042c880(((undefined1 *)(gen_frame + 0x130)) GEN_EDX_ARG);
    F_0042e360(((undefined1 *)(gen_frame + 0x22c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x280)));
    F_0042c880(((undefined1 *)(gen_frame + 0x280)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0xdc)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x184)) GEN_EDX_ARG);
  }
  uVar16 = F_0042cd30(((undefined1 *)(gen_frame + 0x2d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xdc)),((undefined1 *)(gen_frame + 0x22c)));
  F_0042ccf0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x128))) GEN_EDX_ARG,uVar16);
  F_0042c880(((undefined1 *)(gen_frame + 0xdc)) GEN_EDX_ARG);
  if (*((short *)GEN_TOP((uVar17 + 0xb86))) == 0) goto LAB_00a7b454;
  F_00492c50(((uint * PTR32 *)(gen_frame + 0x8)) + 1 GEN_EDX_ARG);
  uVar16 = (*(uint *)(gen_frame + 0x330));
  bVar5 = *((byte *)GEN_TOP((uVar17 + 0xb92)));
  (*(uint *)(gen_frame + 0x328)) = 0;
  (*(uint *)(gen_frame + 0x328)) = (uint)bVar5;
  (*(uint * PTR32 *)(gen_frame + 0x32c)) = &(*(uint *)(gen_frame + 0x328));
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x330)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x330)) = uVar16 & 0xffffff00;
  if ((*(uint *)(gen_frame + 0x14)) <= (*(int *)(gen_frame + 0x1c)) + 1U) {
    F_00486f80(((uint * PTR32 *)(gen_frame + 0x8)) + 1 GEN_EDX_ARG,1);
  }
  uVar16 = (*(int *)(gen_frame + 0x1c)) + (*(int *)(gen_frame + 0x18));
  if ((*(uint *)(gen_frame + 0x14)) <= uVar16) {
    uVar16 = uVar16 - (*(uint *)(gen_frame + 0x14));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + uVar16 * 4))) == 0) {
    uVar11 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + uVar16 * 4))) = uVar11;
  }
  puVar10 = *((uint * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + uVar16 * 4)));
  if (puVar10 != ((uint *)GEN_TOP(0x0))) {
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0xff;
    if (((char)(*(uint *)(gen_frame + 0x330)) != -1) && (puVar10 != &(*(uint *)(gen_frame + 0x328)))) {
      (*(uint * PTR32 *)(gen_frame + 0x0)) = puVar10;
      (*(uint * PTR32 *)(gen_frame + 0x4)) = (*(uint * PTR32 *)(gen_frame + 0x32c));
      if ((char)(*(uint *)(gen_frame + 0x330)) == '\0') {
        F_004919b0(&(*(uint * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      else if ((char)(*(uint *)(gen_frame + 0x330)) == '\x01') {
        F_00491a60(&(*(uint * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
  }
  (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
  if ((((*(uint * PTR32 *)(gen_frame + 0x32c)) != ((uint *)GEN_TOP(0x0))) && ((char)(*(uint *)(gen_frame + 0x330)) != '\0')) && ((char)(*(uint *)(gen_frame + 0x330)) == '\x01')) {
    pvVar12 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x32c))));
    *((int *)GEN_TOP(((int)pvVar12 + 0x54))) = *((int *)GEN_TOP(((int)pvVar12 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar12 + 0x54))) < 1) {
      F_0042c880(pvVar12 GEN_EDX_ARG);
      F_00406ad0(pvVar12);
    }
  }
  uVar16 = (*(uint *)(gen_frame + 0x330));
  uVar6 = *((ushort *)GEN_TOP((uVar17 + 0xb86)));
  (*(uint *)(gen_frame + 0x328)) = 0;
  (*(uint *)(gen_frame + 0x328)) = (uint)uVar6;
  (*(uint * PTR32 *)(gen_frame + 0x32c)) = &(*(uint *)(gen_frame + 0x328));
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x330)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x330)) = uVar16 & 0xffffff00;
  if ((*(uint *)(gen_frame + 0x14)) <= (*(int *)(gen_frame + 0x1c)) + 1U) {
    F_00486f80(((uint * PTR32 *)(gen_frame + 0x8)) + 1 GEN_EDX_ARG,1);
  }
  uVar17 = (*(int *)(gen_frame + 0x1c)) + (*(int *)(gen_frame + 0x18));
  if ((*(uint *)(gen_frame + 0x14)) <= uVar17) {
    uVar17 = uVar17 - (*(uint *)(gen_frame + 0x14));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + uVar17 * 4))) == 0) {
    uVar16 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + uVar17 * 4))) = uVar16;
  }
  puVar10 = *((uint * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + uVar17 * 4)));
  if (puVar10 != ((uint *)GEN_TOP(0x0))) {
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0xff;
    if (((char)(*(uint *)(gen_frame + 0x330)) != -1) && (puVar10 != &(*(uint *)(gen_frame + 0x328)))) {
      (*(uint * PTR32 *)(gen_frame + 0x0)) = puVar10;
      (*(uint * PTR32 *)(gen_frame + 0x4)) = (*(uint * PTR32 *)(gen_frame + 0x32c));
      if ((char)(*(uint *)(gen_frame + 0x330)) == '\0') {
        F_004919b0(&(*(uint * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      else if ((char)(*(uint *)(gen_frame + 0x330)) == '\x01') {
        F_00491a60(&(*(uint * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
  }
  (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
  if ((((*(uint * PTR32 *)(gen_frame + 0x32c)) != ((uint *)GEN_TOP(0x0))) && ((char)(*(uint *)(gen_frame + 0x330)) != '\0')) && ((char)(*(uint *)(gen_frame + 0x330)) == '\x01')) {
    pvVar12 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x32c))));
    *((int *)GEN_TOP(((int)pvVar12 + 0x54))) = *((int *)GEN_TOP(((int)pvVar12 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar12 + 0x54))) < 1) {
      F_0042c880(pvVar12 GEN_EDX_ARG);
      F_00406ad0(pvVar12);
    }
  }
  F_0042e430(((undefined1 *)(gen_frame + 0x22c)) GEN_EDX_ARG,&REFG(undefined, 0x10e71aa));
  F_00ab3200(0x18f72,((uint * PTR32 *)(gen_frame + 0x8)) + 1,((undefined1 *)(gen_frame + 0x22c)));
  F_00a95670(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 400))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x22c)));
  uVar17 = ((uint *)(gen_frame + 0x24))[1];
  bVar5 = *((byte *)GEN_TOP((((uint *)(gen_frame + 0x24))[1] + 0xb90)));
  uVar16 = 0;
  ((uint * PTR32 *)(gen_frame + 0x8))[0] = ((uint *)GEN_TOP(0x0));
  ((uint *)(gen_frame + 0x24))[0] = 0;
  F_006da580((uint)bVar5,((uint * PTR32 *)(gen_frame + 0x8)));
  F_006da580((uint)*((byte *)GEN_TOP((uVar17 + 0xb92))),((uint *)(gen_frame + 0x24)));
  do {
    if (((uint)((uint * PTR32 *)(gen_frame + 0x8))[(int)(uVar16 >> 5)] & 1 << ((byte)uVar16 & 0x1f)) != 0) {
      uVar11 = uVar16;
      if (uVar16 == 0xffffffff) {
        uVar11 = (uint)REFG(undefined1, 0x14ab0d4);
      }
      if (((((int)uVar11 < 0x1d) && (uVar13 = F_00ab21a0((uint)REFG(undefined1, 0x14ab0d4)), uVar13 != 0)) &&
          (uVar11 = F_00ab21a0(uVar11), uVar11 != 0)) &&
         ((cVar1 = *((char *)GEN_TOP((uVar11 + 0x43))), -1 < cVar1 && (cVar1 < '\x13')))) {
        uVar6 = *(ushort *)(&REFG(undefined, 0x14ab0d6) + cVar1 * 2);
      }
      else {
        uVar6 = 0;
      }
      if (*((ushort *)GEN_TOP((uVar17 + 0xb84))) <= uVar6) {
        iVar15 = 0;
        goto LAB_00a7b2c1;
      }
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 < 0x1d);
  goto LAB_00a7b355;
  while (iVar15 = iVar15 - 1, -1 < iVar15) {
LAB_00a7b2c1: ;
    if (((uint *)(gen_frame + 0x24))[(int)(iVar15)] != 0) {
      uVar16 = 0;
      goto LAB_00a7b2de;
    }
  }
  goto LAB_00a7b369;
LAB_00a7b2de: ;
  do {
    if ((((uint *)(gen_frame + 0x24))[(int)(uVar16 >> 5)] & 1 << ((byte)uVar16 & 0x1f)) != 0) {
      uVar11 = uVar16;
      if (uVar16 == 0xffffffff) {
        uVar11 = (uint)REFG(undefined1, 0x14ab0d4);
      }
      if ((((int)uVar11 < 0x1d) && (uVar13 = F_00ab21a0((uint)REFG(undefined1, 0x14ab0d4)), uVar13 != 0)) &&
         ((uVar11 = F_00ab21a0(uVar11), uVar11 != 0 &&
          ((cVar1 = *((char *)GEN_TOP((uVar11 + 0x43))), -1 < cVar1 && (cVar1 < '\x13')))))) {
        uVar6 = *(ushort *)(&REFG(undefined, 0x14ab0d6) + cVar1 * 2);
      }
      else {
        uVar6 = 0;
      }
      if (*((ushort *)GEN_TOP((uVar17 + 0xb86))) <= uVar6) goto LAB_00a7b369;
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 < 0x1d);
LAB_00a7b355: ;
  ((undefined1 *)(gen_frame + 0x33))[0] = 2;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1b0))) = 0;
LAB_00a7b369: ;
  pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
  puVar3 = *((undefined1 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1a4)));
  if (((undefined1 *)(gen_frame + 0x33)) < puVar3) {
    puVar4 = *((undefined1 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1a0)));
    if (((undefined1 *)(gen_frame + 0x33)) < puVar4) goto LAB_00a7b3f0;
    if (puVar3 == *((undefined1 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1a8)))) {
      if ((int)puVar3 - (int)puVar4 == -1) {
                    
        F_00c4579a(((char *)REFP(0x108497c)));
      }
      uVar16 = ((int)puVar3 - (int)puVar4) + 1;
      uVar17 = (int)*((undefined1 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1a8))) - (int)puVar4;
      if (uVar17 < uVar16) {
        if (-(uVar17 >> 1) - 1 < uVar17) {
          uVar17 = 0;
        }
        else {
          uVar17 = uVar17 + (uVar17 >> 1);
        }
        if (uVar17 < uVar16) {
          uVar17 = uVar16;
        }
        F_00a93bc0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1a0))) GEN_EDX_ARG,uVar17);
      }
    }
    if (*((undefined1 * PTR32 *)GEN_TOP(((int)pvVar12 + 0x1a4))) != ((undefined1 *)GEN_TOP(0x0))) {
      **((undefined1 * PTR32 *)GEN_TOP(((int)pvVar12 + 0x1a4))) =
           ((undefined1 *)(gen_frame + 0x33))[(int)(*((int *)GEN_TOP(((int)pvVar12 + 0x1a0))) - (int)puVar4)];
    }
  }
  else {
LAB_00a7b3f0: ;
    if (puVar3 == *((undefined1 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1a8)))) {
      iVar15 = (int)puVar3 - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1a0)));
      if (iVar15 == -1) {
                    
        F_00c4579a(((char *)REFP(0x108497c)));
      }
      uVar16 = iVar15 + 1;
      uVar17 = (int)*((undefined1 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1a8))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1a0)));
      if (uVar17 < uVar16) {
        if (-(uVar17 >> 1) - 1 < uVar17) {
          uVar17 = 0;
        }
        else {
          uVar17 = uVar17 + (uVar17 >> 1);
        }
        if (uVar17 < uVar16) {
          uVar17 = uVar16;
        }
        F_00a93bc0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x1a0))) GEN_EDX_ARG,uVar17);
      }
    }
    if (*((undefined1 * PTR32 *)GEN_TOP(((int)pvVar12 + 0x1a4))) != ((undefined1 *)GEN_TOP(0x0))) {
      **((undefined1 * PTR32 *)GEN_TOP(((int)pvVar12 + 0x1a4))) = ((undefined1 *)(gen_frame + 0x33))[0];
    }
  }
  *((int *)GEN_TOP(((int)pvVar12 + 0x1a4))) = *((int *)GEN_TOP(((int)pvVar12 + 0x1a4))) + 1;
LAB_00a7b454: ;
  puVar10 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xea4)));
  pvVar12 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xeb0)));
  ((uint * PTR32 *)(gen_frame + 0x8))[0] = puVar10;
  iVar15 = 3;
  do {
    *puVar10 = 0;
    F_0042e430(pvVar12 GEN_EDX_ARG,&REFG(undefined, 0x10e71ab));
    puVar10 = puVar10 + 1;
    pvVar12 = ((undefined *)GEN_TOP(((int)pvVar12 + 0x54)));
    iVar15 = iVar15 - 1;
  } while (iVar15 != 0);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xfac))) = 0;
  uVar17 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xe40))) | 0x10000;
  pvVar12 = ((undefined *)GEN_TOP(F_006b8c00()));
  pvVar12 = ((undefined *)GEN_TOP(F_006e3240(pvVar12 GEN_EDX_ARG,uVar17)));
  bVar5 = F_006c02f0(pvVar12 GEN_EDX_ARG,REFG(undefined4, 0x1379694));
  if (bVar5 == 0) {
    (*(uint *)(gen_frame + 0x328)) = 0;
    (*(uint * PTR32 *)(gen_frame + 0x32c)) = ((uint *)GEN_TOP(0x0));
    (*(uint *)(gen_frame + 0x330)) = 0;
    uVar17 = 0;
    if (*((char *)GEN_TOP((((uint *)(gen_frame + 0x24))[1] + 0xb9a))) == '\x01') {
      puVar10 = ((uint *)GEN_TOP((((uint *)(gen_frame + 0x24))[1] + 0xb6c)));
      iVar15 = 3;
      do {
        if ((*puVar10 != 0) && (bVar5 = F_00b8df80(uVar8,*puVar10), bVar5 == 0)) {
          (&(*(uint *)(gen_frame + 0x328)))[uVar17] = *puVar10;
          uVar17 = (uint)(byte)((char)uVar17 + 1);
        }
        puVar10 = puVar10 + 1;
        iVar15 = iVar15 - 1;
      } while (iVar15 != 0);
    }
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xfac))) = uVar17;
    if ((char)uVar17 != '\0') {
      puVar10 = &(*(uint *)(gen_frame + 0x328));
      puVar18 = ((uint * PTR32 *)(gen_frame + 0x8))[0];
      for (; uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar18 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar18 = puVar18 + 1;
      }
    }
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x22c)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x2d4)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x88)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x33)) + 1 GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x1d8)) GEN_EDX_ARG);
  F_00492c50(((uint * PTR32 *)(gen_frame + 0x8)) + 1 GEN_EDX_ARG);
  uVar19 = F_00429760(((uint * PTR32 *)(gen_frame + 0x8))[1],8,0x2c4);
  return (uint)uVar19;
}

/* ref: FUN_00a7b5b0 */
GEN_OWN GEN_FRAME uint F_00a7b5b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8))
{
  GEN_ENTER(0xa7b5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  uVar1 = F_0043a1b0(param_3,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = F_00a77000(param_1,param_2,uVar1,(*(undefined4 *)(gen_frame + 0x0)),param_4,param_5,param_6,param_7,param_8,param_9
                      );
  return uVar1;
}

/* ref: FUN_00a7b600 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a7b600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa7b600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((char *)GEN_TOP(((int)this + 0x3a65))) == '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 0x3aae))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x3a90))) = param_2;
    F_00a77420(this GEN_EDX_FWD,param_1);
  }
  return;
}

/* ref: FUN_00a7b630 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a7b630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa7b630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((char *)GEN_TOP(((int)this + 0x3a65))) == '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 0x3aae))) = 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x3a90))) = param_2;
    F_00a77420(this GEN_EDX_FWD,param_1);
  }
  return;
}

/* ref: FUN_00a7b660 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a7b660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa7b660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * this_00;
  uint uVar4;
  uint uVar5;
  
  piVar2 = ((int *)GEN_TOP(F_0052fba0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,&REFG(undefined, 0x10e778c))));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  uVar5 = *((int *)GEN_TOP(((int)this + 0x7c))) - *((int *)GEN_TOP(((int)this + 0x3a6c)));
  if (uVar3 < uVar5) {
    uVar5 = uVar3;
  }
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    this_00 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,uVar5,0);
    this_00[5] = uVar5;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e78b0));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xa777c0));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39d4))) = this_00;
  if (*((int *)GEN_TOP(((int)this + 0x39d0))) == 0) {
    uVar3 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x3c);
    *((uint *)GEN_TOP(((int)this + 0x39d0))) = uVar3;
  }
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar4 = 0;
    do {
      iVar1 = *((int *)GEN_TOP(((int)this + 0x3a6c)));
      *((int *)GEN_TOP(((int)this + 0x3a6c))) = iVar1 + 1;
      F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x39d4))) GEN_EDX_ARG,uVar4,
                   *((undefined4 *)GEN_TOP((iVar1 * 0x11c + 0x54 + *((int *)GEN_TOP(((int)this + 0xe8)))))));
      uVar3 = uVar3 + 1;
      uVar4 = uVar3 & 0xffff;
    } while (uVar4 < uVar5);
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x39d0))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x39d0))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x39d4))));
  return uVar5;
}

/* ref: FUN_00a7b750 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a7b750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa7b750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x230, 0, 4);
  char cVar1;
  byte bVar2;
  undefined * pvVar3;
  ushort uVar4;
  uint uVar5;
  uint * puVar6;
  uint uVar7;
  int iVar8;
  undefined * pvVar9;
  undefined4 * puVar10;
  int * piVar11;
  byte bVar12;
  int iVar13;
  uint * puVar14;
  byte * pbVar15;
  code * pcVar16;
  bool bVar17;
  float10 fVar18;
  float fVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x228)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x22c));
  (*(int *)(gen_frame + 0x4)) = REFG(int, 0x1379694);
  iVar8 = *((int *)GEN_TOP(((int)this + 0x39b4)));
  (*(uint * PTR32 *)(gen_frame + 0x24)) = param_1;
  if (iVar8 != 2) {
    if (iVar8 == 4) {
      puVar14 = *((uint * PTR32 *)GEN_TOP((*param_1 + 4)));
      (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar14;
      (*(uint *)(gen_frame + 0x20)) = 0xffffffff;
      F_00a94c50(((undefined *)GEN_TOP(((int)this + 0x17c))) GEN_EDX_FWD);
      *((uint *)GEN_TOP(((int)this + 0x17c))) = (uint)*((ushort *)GEN_TOP(((int)this + 0x39f8)));
      F_0042e430(((undefined *)GEN_TOP(((int)this + 0x180))) GEN_EDX_ARG,(*puVar14 & 0xffffff) + (int)puVar14);
      uVar5 = F_00463610(0,puVar14[0x2de],3);
      F_0042e430(((undefined *)GEN_TOP(((int)this + 0x1d4))) GEN_EDX_ARG,uVar5);
      *((uint *)GEN_TOP(((int)this + 0x228))) = puVar14[0x2de];
      *((uint *)GEN_TOP(((int)this + 0x280))) = (uint)(byte)puVar14[0x2e4];
      *((uint *)GEN_TOP(((int)this + 0x284))) = (uint)(ushort)puVar14[0x2e1];
      *((uint *)GEN_TOP(((int)this + 0x288))) = (uint)*((byte *)GEN_TOP(((int)puVar14 + 0xb92)));
      *((uint *)GEN_TOP(((int)this + 0x28c))) = (uint)*((ushort *)GEN_TOP(((int)puVar14 + 0xb86)));
      *((uint *)GEN_TOP(((int)this + 0x2b0))) = (uint)*((byte *)GEN_TOP(((int)puVar14 + 0xb9f)));
      *((uint *)GEN_TOP(((int)this + 0x2b4))) = puVar14[0x2e0];
      if (*((byte *)GEN_TOP(((int)puVar14 + 0xb95))) != 0) {
        *((uint *)GEN_TOP(((int)this + 700))) = (uint)*((byte *)GEN_TOP(((int)puVar14 + 0xb95)));
      }
      uVar4 = F_006c0340(puVar14);
      *((ushort *)GEN_TOP(((int)this + 0x290))) = uVar4;
      *((undefined1 *)GEN_TOP(((int)this + 0x2aa))) = *((undefined1 *)GEN_TOP(((int)puVar14 + 0xba1)));
      *((undefined1 *)GEN_TOP(((int)this + 0x2b8))) = *((undefined1 *)GEN_TOP(((int)puVar14 + 0xba3)));
      uVar5 = puVar14[0x2e8];
      *((uint *)GEN_TOP(((int)this + 0x448))) = (uint)(byte)uVar5;
      uVar5 = F_00a67d80(*((undefined4 *)GEN_TOP(((int)this + 0x2b0))),(byte)uVar5);
      *((uint *)GEN_TOP(((int)this + 0x2ac))) = uVar5;
      F_00a774d0(this GEN_EDX_ARG,puVar14);
      F_00a67300(this GEN_EDX_ARG,puVar14);
      F_0042e430(((undefined *)GEN_TOP(((int)this + 0x3a00))) GEN_EDX_ARG,(int)puVar14 + (puVar14[0x2d5] & 0xffffff) + 0xb54);
      uVar5 = F_00a4ffd0();
      (*(uint *)(gen_frame + 0x10)) = uVar5;
      uVar7 = 0;
      do {
        if (*((ushort *)GEN_TOP((uVar5 + 0x13b8 + uVar7 * 0x10))) == *((ushort *)GEN_TOP(((int)this + 0x39f8)))) {
          *((uint *)GEN_TOP(((int)this + 0x3a54))) = (uint)*((byte *)GEN_TOP((uVar5 + uVar7 * 0x10 + 0x13ba)));
          (*(uint *)(gen_frame + 0x20)) = uVar7;
          break;
        }
        bVar12 = (char)uVar7 + 1;
        uVar7 = (uint)bVar12;
      } while (bVar12 < 0x1e);
      uVar5 = *((ushort *)GEN_TOP(((int)this + 0x39f8))) | 0x10000;
      *((undefined4 *)GEN_TOP(((int)this + 0xc34))) = *((undefined4 *)GEN_TOP(((int)this + 0x3a54)));
      pvVar9 = ((undefined *)GEN_TOP(F_006b8c00()));
      piVar11 = ((int *)GEN_TOP(F_006e3240(pvVar9 GEN_EDX_ARG,uVar5)));
      uVar5 = (*(uint *)(gen_frame + 0x30));
      bVar12 = 0;
      (*(int * PTR32 *)(gen_frame + 0x48)) = piVar11;
      (*(byte *)(gen_frame + 0x53)) = 1;
      (*(uint *)(gen_frame + 0x28)) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x3158))) = 0;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 0)) = 0;
      (*(uint *)(gen_frame + 0x30)) = uVar5 & 0xffffff00;
      do {
        puVar6 = puVar14 + (uint)bVar12 * 9 + 0x1e5;
        bVar2 = (byte)puVar6[8];
        (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar6;
        if (bVar2 == 0) {
          uVar5 = 1;
          *((short *)GEN_TOP(((int)this + 0x3158))) = *((short *)GEN_TOP(((int)this + 0x3158))) + 1;
          *((short *)GEN_TOP(((int)this + 0x315a))) = *((short *)GEN_TOP(((int)this + 0x315a))) + 1;
          *((uint *)GEN_TOP(((int)this + 0xc30))) = (uint)bVar12;
          break;
        }
        pbVar15 = ((byte *)GEN_TOP(((uint)bVar12 * 0x18c + 0xc38 + (int)this)));
        (*(byte * PTR32 *)(gen_frame + 0x34)) = pbVar15;
        if ((*(byte *)(gen_frame + 0x53)) == 0) {
          if ((*(uint *)(gen_frame + 0x28)) != bVar2) {
            *((short *)GEN_TOP(((int)this + 0x315a))) = *((short *)GEN_TOP(((int)this + 0x315a))) + 1;
            (*(uint *)(gen_frame + 0x28)) = (uint)(byte)puVar6[8];
          }
        }
        else if ((*(uint *)(gen_frame + 0x28)) != bVar2) {
          *((short *)GEN_TOP(((int)this + 0x3158))) = *((short *)GEN_TOP(((int)this + 0x3158))) + 1;
          *((short *)GEN_TOP(((int)this + 0x315a))) = *((short *)GEN_TOP(((int)this + 0x315a))) + 1;
          (*(uint *)(gen_frame + 0x28)) = (uint)(byte)puVar6[8];
          *((uint *)GEN_TOP(((uint)*((ushort *)GEN_TOP(((int)this + 0x3158))) * 0x58 + 0x31b0 + (int)this))) =
               (uint)(byte)puVar6[8];
        }
        *(uint *)(pbVar15 + 0x58) = (uint)(byte)puVar6[8];
        uVar5 = *((uint *)GEN_TOP(((int)this + 0x3a54)));
        if (uVar5 == (byte)puVar6[8]) {
          if ((((*(int * PTR32 *)(gen_frame + 0x48)) != ((int *)GEN_TOP(0x0))) &&
              (bVar12 = F_006bfeb0((*(uint *)(gen_frame + 0x10)),(uint)*((ushort *)GEN_TOP(((int)this + 0x39f8)))), bVar12 == 0))
             && ((*(int *)(gen_frame + 0x4)) != 0)) {
            bVar12 = F_006c0260((*(int * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0x30)));
            *(*(byte * PTR32 *)(gen_frame + 0x34)) = bVar12;
          }
          (*(byte *)(gen_frame + 0x53)) = 0;
          (*(uint *)(gen_frame + 0x44)) = 0;
          (*(int *)(gen_frame + 0x2c)) = 0;
          (*(char *)(gen_frame + 0x52)) = '\0';
          (*(uint *)(gen_frame + 0x40)) = 0;
          do {
            if (puVar6[(*(uint *)(gen_frame + 0x40))] == 0) break;
            uVar5 = F_00ab37e0(puVar6[(*(uint *)(gen_frame + 0x40))]);
            if (uVar5 != 0) {
              uVar4 = *((ushort *)GEN_TOP((uVar5 + 0x20)));
              uVar5 = F_00ab1c90((uint)uVar4);
              puVar6 = (*(uint * PTR32 *)(gen_frame + 0x3c));
              if (uVar5 != 0) {
                if ((*((char *)GEN_TOP((uVar5 + 0x2a))) == '\a') && (*(uint *)&REFG(undefined2, 0x1379c78) == uVar4)) {
                  (*(char *)(gen_frame + 0x52)) = '\x01';
                }
                (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 1;
              }
            }
            uVar5 = (*(uint *)(gen_frame + 0x40)) + 1;
            (*(uint *)(gen_frame + 0x40)) = uVar5;
          } while (uVar5 < 8);
          (*(uint *)(gen_frame + 0x40)) = 0;
          (*(byte * PTR32 *)(gen_frame + 0x38)) = (*(byte * PTR32 *)(gen_frame + 0x34)) + 0xd0;
          do {
            uVar5 = (*(uint * PTR32 *)(gen_frame + 0x3c))[(*(uint *)(gen_frame + 0x40))];
            if (uVar5 == 0) break;
            puVar10 = ((undefined4 *)GEN_TOP(F_00ab37e0(uVar5)));
            if (puVar10 != ((undefined4 *)GEN_TOP(0x0))) {
              uVar7 = F_005d4e80(&REFG(undefined, 0x1379c6c) GEN_EDX_ARG,uVar5,puVar10[6]);
              (*(uint *)(gen_frame + 0x1c)) = uVar7;
              (*(uint *)(gen_frame + 0x18)) = (uint)*(ushort *)(puVar10 + 8);
              pvVar9 = ((undefined *)GEN_TOP(F_00ab1c90((uint)*(ushort *)(puVar10 + 8))));
              (*(undefined * PTR32 *)(gen_frame + 0x4c)) = pvVar9;
              if (pvVar9 != ((undefined *)GEN_TOP(0x0))) {
                uVar7 = 0;
                if ((*(uint *)(gen_frame + 0x44)) != 0) {
                  puVar14 = (uint *)((*(byte * PTR32 *)(gen_frame + 0x34)) + 200);
                  do {
                    if (*puVar14 == uVar5) goto LAB_00a7c692;
                    uVar7 = uVar7 + 1;
                    puVar14 = puVar14 + 6;
                  } while (uVar7 < (*(uint *)(gen_frame + 0x44)));
                }
                if (*((char *)GEN_TOP(((int)pvVar9 + 0x2a))) == '\a') {
                  bVar17 = *(uint *)&REFG(undefined2, 0x1379c78) == ((*(uint *)(gen_frame + 0x18)) & 0xffff);
                }
                else {
                  bVar17 = (*(char *)(gen_frame + 0x52)) == '\0';
                }
                if ((bVar17) || ((*(int *)(gen_frame + 0x2c)) == 1)) {
                  if ((int)(*(uint *)(gen_frame + 0x20)) < 0) {
LAB_00a7c59b: ;
                    *(uint *)((*(byte * PTR32 *)(gen_frame + 0x38)) - 8) = uVar5;
                    *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x38)) - 4) = *puVar10;
                    *(undefined4 *)(*(byte * PTR32 *)(gen_frame + 0x38)) = puVar10[1];
                    *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x38)) + 4) = puVar10[2];
                    if ((puVar10[9] == 9) || (puVar10[9] == 0x33)) {
                      fVar18 = F_007733a0(GEN_ARGF(gen_bits2f(puVar10[4])));
                      fVar19 = (float)fVar18;
                      (*(float *)(gen_frame + 0xc)) = fVar19;
                    }
                    else {
                      fVar19 = gen_bits2f(puVar10[4]);
                    }
                    *(float *)((*(byte * PTR32 *)(gen_frame + 0x38)) + 8) = fVar19;
                    iVar8 = puVar10[9];
                    if ((iVar8 == 0x33) || (iVar8 == 9)) {
                      pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x38));
                      pbVar15[0xc] = 0xf9;
                      pbVar15[0xd] = 0xeb;
                      pbVar15[0xe] = 0;
                      pbVar15[0xf] = 0;
                    }
                    else {
                      bVar12 = F_00a5f470(iVar8);
                      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 0)) = bVar12;
                      (*(undefined4 *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x14)), 1, 3),bVar12);
                      pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x38));
                      if ((*(int * PTR32 *)(gen_frame + 0x48)) != ((int *)GEN_TOP(0x0))) {
                        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x48)) + 0x204))))
                                          ((*(int * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)),puVar10[5],uVar5,puVar10[5]);
                        *(uint *)((*(byte * PTR32 *)(gen_frame + 0x38)) + 0xc) = uVar5;
                        pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x38));
                      }
                    }
                    (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x44)) + 1;
                    *(undefined2 *)((*(byte * PTR32 *)(gen_frame + 0x34)) + 0xb8) = (undefined2)(*(uint *)(gen_frame + 0x18));
                    *(uint *)((*(byte * PTR32 *)(gen_frame + 0x34)) + 0xbc) = (*(uint *)(gen_frame + 0x1c));
                    *(uint *)((*(byte * PTR32 *)(gen_frame + 0x34)) + 0xc0) = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x1e)));
                    *(uint *)((*(byte * PTR32 *)(gen_frame + 0x34)) + 0xc4) = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x20)));
                    (*(byte * PTR32 *)(gen_frame + 0x38)) = pbVar15 + 0x18;
                  }
                  else {
                    for (puVar14 = *(uint * PTR32 *)(&REFG(undefined, 0x14b12e4) + (*(uint *)(gen_frame + 0x20)) * 0x70);
                        puVar14 != *(uint * PTR32 *)(&REFG(undefined, 0x14b12e8) + (*(uint *)(gen_frame + 0x20)) * 0x70);
                        puVar14 = puVar14 + 0xd) {
                      if ((*((char *)GEN_TOP(((int)puVar14 + 0x33))) == (byte)(*(uint *)(gen_frame + 0x30))) && (*puVar14 == uVar5)
                         ) goto LAB_00a7c59b;
                    }
                  }
                }
              }
            }
LAB_00a7c692: ;
            uVar5 = (*(uint *)(gen_frame + 0x40)) + 1;
            (*(uint *)(gen_frame + 0x40)) = uVar5;
            puVar14 = (*(uint * PTR32 *)(gen_frame + 0x24));
          } while (uVar5 < 8);
          *(uint *)((*(byte * PTR32 *)(gen_frame + 0x34)) + 0x188) = (*(uint *)(gen_frame + 0x44));
          uVar5 = (*(uint *)(gen_frame + 0x44));
        }
        else {
          if (uVar5 == 0) {
            (*(byte *)(gen_frame + 0x53)) = 0;
          }
          uVar5 = CONCAT31((int3)(uVar5 >> 8),(*(byte *)(gen_frame + 0x53)));
          *pbVar15 = (*(byte *)(gen_frame + 0x53));
        }
        bVar12 = (byte)(*(uint *)(gen_frame + 0x30)) + 1;
        uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar12);
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 0)) = bVar12;
        (*(uint *)(gen_frame + 0x30)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x30)), 1, 3),bVar12);
      } while (bVar12 < 0x18);
      puVar10 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39bc)));
      if (puVar10 != ((undefined4 *)GEN_TOP(0x0))) {
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar10)))(puVar10 GEN_EDX_ARG,1);
        *((undefined4 *)GEN_TOP(((int)this + 0x39bc))) = 0;
      }
      if ((*((int *)GEN_TOP(((int)this + 0x3a94))) == 0) && (*((char *)GEN_TOP(((int)this + 0x44d))) == '\0')) {
        *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 0;
        if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
          piVar11 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
        }
        else {
          piVar11 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0)));
        }
        if (piVar11 == ((int *)GEN_TOP(0x0))) {
          return uVar5;
        }
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 4))))(piVar11 GEN_EDX_ARG,0xc);
        return uVar5;
      }
      puVar10 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
      if (puVar10 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar10 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        iVar8 = (uint)*((byte *)GEN_TOP(((int)this + 0x44d))) + *((int *)GEN_TOP(((int)this + 0x3a94)));
        F_00cb4700(puVar10 GEN_EDX_ARG,iVar8,0);
        puVar10[5] = iVar8;
        *puVar10 = (*(undefined * PTR32 (*)[2])REFP(0x10e78b0));
        puVar10[6] = this;
        puVar10[7] = ((code *)REFP(0xa6c000));
      }
      *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39c4))) = puVar10;
      (*(byte *)(gen_frame + 0x53)) = 0;
      if (*((int *)GEN_TOP(((int)this + 0x39c0))) == 0) {
        uVar5 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,9);
        *((uint *)GEN_TOP(((int)this + 0x39c0))) = uVar5;
      }
      bVar12 = 0;
      if (*((char *)GEN_TOP(((int)this + 0x44c))) != '\0') {
        do {
          iVar8 = *((int *)GEN_TOP(((uint)bVar12 * 0x6c + 0x450 + (int)this)));
          if ((((iVar8 == 2) || (iVar8 == 3)) || (iVar8 == 4)) || (iVar8 == 6)) {
            F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x39c4))) GEN_EDX_ARG,(uint)(*(byte *)(gen_frame + 0x53)),
                         *((undefined4 *)GEN_TOP(((uint)bVar12 * 0x6c + 0x4b0 + (int)this))));
            (*(byte *)(gen_frame + 0x53)) = (*(byte *)(gen_frame + 0x53)) + 1;
          }
          bVar12 = bVar12 + 1;
        } while (bVar12 < *((byte *)GEN_TOP(((int)this + 0x44c))));
      }
      bVar12 = 0;
      if (*((char *)GEN_TOP(((int)this + 0x44d))) != '\0') {
        do {
          F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x39c4))) GEN_EDX_ARG,(uint)(*(byte *)(gen_frame + 0x53)),
                       *((undefined4 *)GEN_TOP(((uint)bVar12 * 0x6c + 0x6cc + (int)this))));
          (*(byte *)(gen_frame + 0x53)) = (*(byte *)(gen_frame + 0x53)) + 1;
          bVar12 = bVar12 + 1;
        } while (bVar12 < *((byte *)GEN_TOP(((int)this + 0x44d))));
      }
      piVar11 = *((int * PTR32 *)GEN_TOP(((int)this + 0x39c0)));
      uVar21 = *((undefined4 *)GEN_TOP(((int)this + 0x39c4)));
      pcVar16 = *((gen_code32 *)GEN_TOP((*piVar11 + 0x48)));
    }
    else {
      if (iVar8 != 5) {
        return (uint)param_1;
      }
      puVar14 = *((uint * PTR32 *)GEN_TOP((*param_1 + 4)));
      F_00a94c50(((undefined *)GEN_TOP(((int)this + 0x17c))) GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)this + 0x17c))) = (uint)*((ushort *)GEN_TOP(((int)this + 0x39f8)));
      F_0042e430(((undefined *)GEN_TOP(((int)this + 0x180))) GEN_EDX_ARG,(*puVar14 & 0xffffff) + (int)puVar14);
      *((uint *)GEN_TOP(((int)this + 0x2b0))) = (uint)*((byte *)GEN_TOP(((int)puVar14 + 0xb9f)));
      *((uint *)GEN_TOP(((int)this + 0x2b4))) = puVar14[0x2e0];
      uVar4 = F_006c0340(puVar14);
      *((ushort *)GEN_TOP(((int)this + 0x290))) = uVar4;
      uVar5 = puVar14[0x2e8];
      *((uint *)GEN_TOP(((int)this + 0x448))) = (uint)(byte)uVar5;
      uVar5 = F_00a67d80(*((undefined4 *)GEN_TOP(((int)this + 0x2b0))),(byte)uVar5);
      *((uint *)GEN_TOP(((int)this + 0x2ac))) = uVar5;
      F_0042e430(((undefined *)GEN_TOP(((int)this + 0x3a00))) GEN_EDX_ARG,(int)puVar14 + (puVar14[0x2d5] & 0xffffff) + 0xb54);
      F_00a4ffd0();
      uVar7 = 0;
      *((undefined2 *)GEN_TOP(((int)this + 0x3158))) = 0;
      uVar5 = 0;
      do {
        puVar6 = puVar14 + uVar5 * 9 + 0x1ed;
        if ((byte)*puVar6 == 0) {
          *((short *)GEN_TOP(((int)this + 0x3158))) = *((short *)GEN_TOP(((int)this + 0x3158))) + 2;
          *((uint *)GEN_TOP(((int)this + 0xc30))) = uVar5;
          if (0x18 < *((ushort *)GEN_TOP(((int)this + 0x3158)))) {
            *((undefined2 *)GEN_TOP(((int)this + 0x3158))) = 0x18;
          }
          break;
        }
        if (uVar7 != (byte)*puVar6) {
          *((short *)GEN_TOP(((int)this + 0x3158))) = *((short *)GEN_TOP(((int)this + 0x3158))) + 1;
          uVar7 = (uint)(byte)*puVar6;
          puVar6 = ((uint *)GEN_TOP(((uint)*((ushort *)GEN_TOP(((int)this + 0x3158))) * 0x58)));
          *((uint *)GEN_TOP(((int)(puVar6 + 0xc6c) + (int)this))) = uVar7;
        }
        bVar12 = (char)uVar5 + 1;
        uVar5 = (uint)bVar12;
      } while (bVar12 < 0x18);
      puVar10 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39bc)));
      if (puVar10 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar6 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar10)))(puVar10 GEN_EDX_ARG,1)));
        *((undefined4 *)GEN_TOP(((int)this + 0x39bc))) = 0;
      }
      *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 0;
      if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
        piVar11 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
      }
      else {
        piVar11 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0)));
      }
      if (piVar11 == ((int *)GEN_TOP(0x0))) {
        return (uint)puVar6;
      }
      pcVar16 = *((gen_code32 *)GEN_TOP((*piVar11 + 4)));
      uVar21 = 0xc;
    }
    uVar5 = (*pcVar16)(piVar11,uVar21);
    return uVar5;
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x208)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)(gen_frame + 0x20c)) = ((undefined *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x210)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x218)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)(gen_frame + 0x21c)) = ((undefined *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x220)) = 0;
  F_00a962b0(&(*(uint *)(gen_frame + 0x1a8)) GEN_EDX_ARG);
  if (*((int *)GEN_TOP(((int)this + 0x39b4))) == 2) {
    uVar21 = *((undefined4 *)GEN_TOP(((int)this + 0x7c)));
    (*(uint *)(gen_frame + 0x1a8)) = *((uint *)GEN_TOP(((int)this + 0x78)));
    (*(undefined4 *)(gen_frame + 0x1ac)) = uVar21;
    F_0042ccf0(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,(int)this + 0x80);
    (*(undefined4 *)(gen_frame + 0x204)) = *((undefined4 *)GEN_TOP(((int)this + 0xd4)));
    F_00a956f0(&(*(undefined * PTR32 *)(gen_frame + 0x208)) GEN_EDX_ARG,(int)this + 0xd8);
    F_00a956f0(&(*(undefined * PTR32 *)(gen_frame + 0x218)) GEN_EDX_ARG,(int)this + 0xe8);
  }
  (*(int * PTR32 *)(gen_frame + 0x48)) = ((int *)GEN_TOP(0x0));
  if (param_2 != 0) {
    do {
      F_0042b630(((undefined1 *)(gen_frame + 0x130)) GEN_EDX_ARG);
      (*(undefined * PTR32 *)(gen_frame + 0x188)) = ((undefined *)GEN_TOP(0x0));
      (*(undefined * PTR32 *)(gen_frame + 0x18c)) = ((undefined *)GEN_TOP(0x0));
      (*(int *)(gen_frame + 0x190)) = 0;
      (*(undefined * PTR32 *)(gen_frame + 0x198)) = ((undefined *)GEN_TOP(0x0));
      (*(undefined * PTR32 *)(gen_frame + 0x19c)) = ((undefined *)GEN_TOP(0x0));
      (*(int *)(gen_frame + 0x1a0)) = 0;
      (*(undefined4 *)(gen_frame + 0x128)) = 0;
      (*(undefined4 *)(gen_frame + 0x184)) = 0;
      (*(undefined4 *)(gen_frame + 0x12c)) = 0;
      puVar14 = *((uint * PTR32 *)GEN_TOP(((*(uint * PTR32 *)(gen_frame + 0x24))[(int)(*(int * PTR32 *)(gen_frame + 0x48))] + 4)));
      F_0042e430(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3a5c))) * 0x11c + (int)(*(undefined * PTR32 *)(gen_frame + 0x208))))) GEN_EDX_ARG,
                   (*puVar14 & 0xffffff) + (int)puVar14);
      pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x208));
      iVar8 = *((int *)GEN_TOP(((int)this + 0x3a5c)));
      uVar4 = F_006c0340(puVar14);
      *((uint *)GEN_TOP(((int)pvVar9 + iVar8 * 0x11c + 0x110))) = (uint)uVar4;
      *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3a5c))) * 0x11c + 0x5c + (int)(*(undefined * PTR32 *)(gen_frame + 0x208))))) =
           (uint)(ushort)puVar14[0x2e3];
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3a5c))) * 0x11c + 0x118 + (int)(*(undefined * PTR32 *)(gen_frame + 0x208))))) =
           *((undefined1 *)GEN_TOP(((int)puVar14 + 0xba1)));
      uVar5 = F_00ab2750((uint)(ushort)puVar14[0x2e3]);
      if (uVar5 != 0) {
        puVar6 = ((uint *)GEN_TOP(F_00ab2750((uint)(ushort)puVar14[0x2e3])));
        F_0042e430(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3a5c))) * 0x11c + 0x60 + (int)(*(undefined * PTR32 *)(gen_frame + 0x208))))) GEN_EDX_ARG,
                     (*puVar6 & 0xffffff) + (int)puVar6);
      }
      *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3a5c))) * 0x11c + 0xb4 + (int)(*(undefined * PTR32 *)(gen_frame + 0x208))))) =
           (uint)*((byte *)GEN_TOP(((int)puVar14 + 0xb9f)));
      cVar1 = (char)puVar14[0x2e8];
      uVar5 = (uint)*((byte *)GEN_TOP(((int)puVar14 + 0xb9f)));
      (*(uint * PTR32 *)(gen_frame + 0x3c)) = ((uint *)GEN_TOP(0x0));
      if (((((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\x03')) ||
          (((uVar5 == 0 || (2 < uVar5)) && (4 < uVar5 - 3)))) &&
         (uVar7 = F_00ab32a0(uVar5), uVar7 != 0)) {
        uVar5 = F_00ab32a0(uVar5);
        (*(uint * PTR32 *)(gen_frame + 0x3c)) = *((uint * PTR32 *)GEN_TOP((uVar5 + 4)));
      }
      *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3a5c))) * 0x11c + 0xb8 + (int)(*(undefined * PTR32 *)(gen_frame + 0x208))))) = (*(uint * PTR32 *)(gen_frame + 0x3c));
      iVar8 = *((int *)GEN_TOP(((int)this + 0x3a5c))) * 0x11c;
      puVar10 = ((undefined4 *)GEN_TOP((iVar8 + 0xb8 + (int)(*(undefined * PTR32 *)(gen_frame + 0x208)))));
      if (*((int *)GEN_TOP((iVar8 + 0xb8 + (int)(*(undefined * PTR32 *)(gen_frame + 0x208))))) == 0) {
        cVar1 = (char)puVar14[0x2e8];
        if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
          *puVar10 = 0xefe3;
        }
        else if (cVar1 == '\x03') {
          *puVar10 = 0xefe4;
        }
      }
      F_0042ccf0(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x3a5c))) * 0x11c + 0x60 + (int)(*(undefined * PTR32 *)(gen_frame + 0x208)));
      F_00a94160(&(*(undefined * PTR32 *)(gen_frame + 0x188)) GEN_EDX_ARG,((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3a5c))) * 0x11c + (int)(*(undefined * PTR32 *)(gen_frame + 0x208))))));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x130)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)));
      if (*((int *)GEN_TOP(((int)this + 0x174))) == 0) {
        pvVar9 = ((undefined *)GEN_TOP(F_00a96590(((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x130)),&(*(undefined4 *)(gen_frame + 0x128)))));
        (*(undefined * PTR32 *)(gen_frame + 0x4c)) = pvVar9;
        puVar10 = ((undefined4 *)GEN_TOP(F_004296a0(0xe4,0,800)));
        *puVar10 = *((undefined4 *)GEN_TOP(((int)this + 0x170)));
        puVar10[1] = *((undefined4 *)GEN_TOP(((int)this + 0x170)));
        puVar10[2] = *((undefined4 *)GEN_TOP(((int)this + 0x170)));
        *(undefined2 *)(puVar10 + 0x38) = 0;
        F_00a97460((int)this + 0x179,puVar10 + 3,(*(undefined * PTR32 *)(gen_frame + 0x4c)));
        F_00a98430(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),puVar10,0);
        if ((*(int *)(gen_frame + 0x118)) != 0) {
          F_00a92090((*(int *)(gen_frame + 0x118)),(*(undefined4 *)(gen_frame + 0x11c)));
          F_00429760((*(int *)(gen_frame + 0x118)),(((*(int *)(gen_frame + 0x120)) - (*(int *)(gen_frame + 0x118))) / 0x11c) * 0x11c,800);
        }
        (*(int *)(gen_frame + 0x118)) = 0;
        (*(undefined4 *)(gen_frame + 0x11c)) = 0;
        (*(int *)(gen_frame + 0x120)) = 0;
        if ((*(int *)(gen_frame + 0x108)) != 0) {
          F_00a92090((*(int *)(gen_frame + 0x108)),(*(undefined4 *)(gen_frame + 0x10c)));
          F_00429760((*(int *)(gen_frame + 0x108)),(((*(int *)(gen_frame + 0x110)) - (*(int *)(gen_frame + 0x108))) / 0x11c) * 0x11c,800);
        }
        (*(int *)(gen_frame + 0x108)) = 0;
        (*(undefined4 *)(gen_frame + 0x10c)) = 0;
        (*(int *)(gen_frame + 0x110)) = 0;
        F_0042c880(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
LAB_00a7bc44: ;
        piVar11 = ((int *)GEN_TOP(F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x130)))));
        *piVar11 = *piVar11 + 1;
        *((int *)GEN_TOP(((int)this + 0x168))) = *((int *)GEN_TOP(((int)this + 0x168))) + 1;
      }
      else {
        iVar8 = *((int *)GEN_TOP(((int)this + 0x170)));
        piVar11 = ((int *)GEN_TOP(F_00a910c0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x130)))));
        if (*piVar11 == iVar8) {
          uVar5 = F_00a96590(((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x130)),&(*(undefined4 *)(gen_frame + 0x128)));
          F_00a99f80(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar5);
          F_00a920d0(&(*(int *)(gen_frame + 0x118)) GEN_EDX_ARG);
          F_00a920d0(&(*(int *)(gen_frame + 0x108)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
          goto LAB_00a7bc44;
        }
        (*(uint *)(gen_frame + 0x44)) = 0;
        uVar5 = F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x130)));
        iVar8 = *((int *)GEN_TOP((uVar5 + 0x60)));
        uVar5 = F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x130)));
        if (iVar8 != *((int *)GEN_TOP((uVar5 + 100)))) {
          do {
            if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x188)) + 0x110))) < *((uint *)GEN_TOP((iVar8 + 0x110)))) {
              (*(undefined * PTR32 *)(gen_frame + 0x4c)) = (*(undefined * PTR32 *)(gen_frame + 0x188));
              uVar5 = F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x130)));
              F_00a94950(((undefined *)GEN_TOP((uVar5 + 0x60))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x14)),iVar8,(*(undefined * PTR32 *)(gen_frame + 0x4c)));
              break;
            }
            uVar5 = F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x130)));
            if ((*(uint *)(gen_frame + 0x44)) == (*((int *)GEN_TOP((uVar5 + 100))) - *((int *)GEN_TOP((uVar5 + 0x60)))) / 0x11c - 1U) {
              pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x188));
              uVar5 = F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x130)));
              F_00a94160(((undefined *)GEN_TOP((uVar5 + 0x60))) GEN_EDX_ARG,pvVar9);
              break;
            }
            (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x44)) + 1;
            iVar8 = iVar8 + 0x11c;
            uVar5 = F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x130)));
          } while (iVar8 != *((int *)GEN_TOP((uVar5 + 100))));
        }
        uVar5 = F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x130)));
        iVar13 = *((int *)GEN_TOP((uVar5 + 100))) - *((int *)GEN_TOP((uVar5 + 0x60)));
        iVar8 = iVar13 >> 0x1f;
        if (iVar13 / 0x11c + iVar8 == iVar8) {
          pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x188));
          uVar5 = F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x130)));
          F_00a94160(((undefined *)GEN_TOP((uVar5 + 0x60))) GEN_EDX_ARG,pvVar9);
        }
        piVar11 = ((int *)GEN_TOP(F_00a9a6d0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x130)))));
        *piVar11 = *piVar11 + 1;
      }
      *((int *)GEN_TOP(((int)this + 0x3a5c))) = *((int *)GEN_TOP(((int)this + 0x3a5c))) + 1;
      if ((*(undefined * PTR32 *)(gen_frame + 0x198)) != ((undefined *)GEN_TOP(0x0))) {
        (*(undefined * PTR32 *)(gen_frame + 0x4c)) = (*(undefined * PTR32 *)(gen_frame + 0x19c));
        pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x198));
        if ((*(undefined * PTR32 *)(gen_frame + 0x198)) != (*(undefined * PTR32 *)(gen_frame + 0x19c))) {
          do {
            F_0042c880(((undefined *)GEN_TOP(((int)pvVar9 + 0xbc))) GEN_EDX_ARG);
            F_0042c880(((undefined *)GEN_TOP(((int)pvVar9 + 0x60))) GEN_EDX_ARG);
            F_0042c880(pvVar9 GEN_EDX_ARG);
            pvVar9 = ((undefined *)GEN_TOP(((int)pvVar9 + 0x11c)));
          } while (pvVar9 != (*(undefined * PTR32 *)(gen_frame + 0x4c)));
        }
        F_00429760((*(undefined * PTR32 *)(gen_frame + 0x198)),(((*(int *)(gen_frame + 0x1a0)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x198))) / 0x11c) * 0x11c,800);
      }
      (*(undefined * PTR32 *)(gen_frame + 0x198)) = ((undefined *)GEN_TOP(0x0));
      (*(undefined * PTR32 *)(gen_frame + 0x19c)) = ((undefined *)GEN_TOP(0x0));
      (*(int *)(gen_frame + 0x1a0)) = 0;
      if ((*(undefined * PTR32 *)(gen_frame + 0x188)) != ((undefined *)GEN_TOP(0x0))) {
        (*(undefined * PTR32 *)(gen_frame + 0x4c)) = (*(undefined * PTR32 *)(gen_frame + 0x18c));
        pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x188));
        if ((*(undefined * PTR32 *)(gen_frame + 0x188)) != (*(undefined * PTR32 *)(gen_frame + 0x18c))) {
          do {
            F_0042c880(((undefined *)GEN_TOP(((int)pvVar9 + 0xbc))) GEN_EDX_ARG);
            F_0042c880(((undefined *)GEN_TOP(((int)pvVar9 + 0x60))) GEN_EDX_ARG);
            F_0042c880(pvVar9 GEN_EDX_ARG);
            pvVar9 = ((undefined *)GEN_TOP(((int)pvVar9 + 0x11c)));
          } while (pvVar9 != (*(undefined * PTR32 *)(gen_frame + 0x4c)));
        }
        F_00429760((*(undefined * PTR32 *)(gen_frame + 0x188)),(((*(int *)(gen_frame + 0x190)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x188))) / 0x11c) * 0x11c,800);
      }
      (*(undefined * PTR32 *)(gen_frame + 0x188)) = ((undefined *)GEN_TOP(0x0));
      (*(undefined * PTR32 *)(gen_frame + 0x18c)) = ((undefined *)GEN_TOP(0x0));
      (*(int *)(gen_frame + 0x190)) = 0;
      F_0042c880(((undefined1 *)(gen_frame + 0x130)) GEN_EDX_ARG);
      uVar5 = (int)(*(int * PTR32 *)(gen_frame + 0x48)) + 1;
      (*(int * PTR32 *)(gen_frame + 0x48)) = ((int *)GEN_TOP(uVar5));
    } while (uVar5 < param_2);
  }
  if (*((int *)GEN_TOP(((int)this + 0x39b4))) == 2) {
    *((uint *)GEN_TOP(((int)this + 0x78))) = (*(uint *)(gen_frame + 0x1a8));
    *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = (*(undefined4 *)(gen_frame + 0x1ac));
    F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1b0)));
    *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = (*(undefined4 *)(gen_frame + 0x204));
    F_00a956f0(((undefined *)GEN_TOP(((int)this + 0xd8))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x208)));
    F_00a956f0(((undefined *)GEN_TOP(((int)this + 0xe8))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x218)));
  }
  puVar10 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39bc)));
  if (*((uint *)GEN_TOP(((int)this + 0x3a58))) < (*(uint *)(gen_frame + 0x1a8))) {
    if (puVar10 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar10)))(puVar10 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x39bc))) = 0;
    }
    F_00a7dfc0(this GEN_EDX_ARG);
    goto LAB_00a7c01a;
  }
  if (puVar10 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar10)))(puVar10 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x39bc))) = 0;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 0;
  if (*((char *)GEN_TOP(((int)this + 0x3a67))) == '\0') {
    if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
      piVar11 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
    }
    else {
      piVar11 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0)));
    }
    if (piVar11 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 4))))(piVar11 GEN_EDX_ARG,10);
    }
  }
  else if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
    piVar11 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
    if (piVar11 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 4))))(piVar11 GEN_EDX_ARG,0xb);
      *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 0;
      goto LAB_00a7c01a;
    }
  }
  else {
    piVar11 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0)));
    if (piVar11 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 4))))(piVar11 GEN_EDX_ARG,0xb);
      *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 0;
      goto LAB_00a7c01a;
    }
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 0;
LAB_00a7c01a: ;
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x21c));
  pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x218));
  if ((*(undefined * PTR32 *)(gen_frame + 0x218)) != ((undefined *)GEN_TOP(0x0))) {
    for (; pvVar9 != pvVar3; pvVar9 = ((undefined *)GEN_TOP(((int)pvVar9 + 0x11c)))) {
      F_0042c880(((undefined *)GEN_TOP(((int)pvVar9 + 0xbc))) GEN_EDX_ARG);
      F_0042c880(((undefined *)GEN_TOP(((int)pvVar9 + 0x60))) GEN_EDX_ARG);
      F_0042c880(pvVar9 GEN_EDX_ARG);
    }
    F_00429760((*(undefined * PTR32 *)(gen_frame + 0x218)),(((*(int *)(gen_frame + 0x220)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x218))) / 0x11c) * 0x11c,800);
  }
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x20c));
  (*(undefined * PTR32 *)(gen_frame + 0x218)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)(gen_frame + 0x21c)) = ((undefined *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x220)) = 0;
  pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x208));
  if ((*(undefined * PTR32 *)(gen_frame + 0x208)) != ((undefined *)GEN_TOP(0x0))) {
    for (; pvVar9 != pvVar3; pvVar9 = ((undefined *)GEN_TOP(((int)pvVar9 + 0x11c)))) {
      F_0042c880(((undefined *)GEN_TOP(((int)pvVar9 + 0xbc))) GEN_EDX_ARG);
      F_0042c880(((undefined *)GEN_TOP(((int)pvVar9 + 0x60))) GEN_EDX_ARG);
      F_0042c880(pvVar9 GEN_EDX_ARG);
    }
    F_00429760((*(undefined * PTR32 *)(gen_frame + 0x208)),(((*(int *)(gen_frame + 0x210)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x208))) / 0x11c) * 0x11c,800);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x208)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)(gen_frame + 0x20c)) = ((undefined *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x210)) = 0;
  uVar20 = F_0042c880(((undefined1 *)(gen_frame + 0x1b0)) GEN_EDX_ARG);
  return (uint)uVar20;
}

/* ref: FUN_00a7ca30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a7ca30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa7ca30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * this_00;
  uint uVar1;
  
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    this_00 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e78b0));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xa7b750));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39bc))) = this_00;
  if (*((int *)GEN_TOP(((int)this + 0x39b8))) == 0) {
    uVar1 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x11);
    *((uint *)GEN_TOP(((int)this + 0x39b8))) = uVar1;
  }
  F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x39bc))) GEN_EDX_ARG,0,(ushort)param_1 | 0x10000);
  *((undefined4 *)GEN_TOP(((int)this + 0x3a54))) = 0;
  *((ushort *)GEN_TOP(((int)this + 0x39f8))) = (ushort)param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x39fc))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x39b4))) = 4;
  *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x39b8))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x39b8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x39bc))));
  return uVar1;
}

/* ref: FUN_00a7cb00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a7cb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa7cb00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * this_00;
  uint uVar1;
  
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    this_00 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e78b0));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xa7b750));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39bc))) = this_00;
  if (*((int *)GEN_TOP(((int)this + 0x39b8))) == 0) {
    uVar1 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x11);
    *((uint *)GEN_TOP(((int)this + 0x39b8))) = uVar1;
  }
  F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x39bc))) GEN_EDX_ARG,0,(ushort)param_1 | 0x10000);
  *((ushort *)GEN_TOP(((int)this + 0x39f8))) = (ushort)param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x39fc))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x39b4))) = 5;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x39b8))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x39b8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x39bc))));
  return uVar1;
}

/* ref: FUN_00a7cbc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a7cbc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa7cbc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined * pvVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  float10 fVar9;
  float fVar10;
  
  uVar1 = *((ushort *)GEN_TOP(((int)this + 0x17c)));
  (*(uint *)(gen_frame + 0x4)) = (uint)uVar1;
  pvVar5 = ((undefined *)GEN_TOP(F_006b8c00()));
  uVar6 = F_006d6fd0(pvVar5 GEN_EDX_ARG);
  if ((((uVar6 != 0) && (uVar1 == *((ushort *)GEN_TOP((uVar6 + 0x310))))) && (REFG(int, 0x14b119c) != 0)) &&
     (REFG(char, 0x14b11f5) != '\0')) {
    *((undefined1 *)GEN_TOP(((int)this + 0x3a68))) = 1;
    return uVar6;
  }
  (*(int *)(gen_frame + 0x0)) = 0;
  F_006c42f0((uint)uVar1,&(*(int *)(gen_frame + 0x0)));
  if (*((int *)GEN_TOP(((int)this + 0x318))) == 0xe) {
    uVar6 = F_006b8c00();
    pvVar5 = ((undefined *)GEN_TOP(F_006def00(uVar6 GEN_EDX_ARG)));
    uVar8 = *((undefined4 *)GEN_TOP(((int)this + 0x374)));
    puVar7 = ((undefined4 *)GEN_TOP(F_00ab37e0(uVar8)));
    if (((*(int *)(gen_frame + 0x0)) == 0) ||
       ((*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 6))) < 10 && (bVar4 = F_006dd140(pvVar5 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4))), bVar4 == 0)))) {
      (*(uint *)(gen_frame + 0x4)) = 0xecef;
    }
    else {
      (*(uint *)(gen_frame + 0x4)) = 0xece5;
    }
  }
  else {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x434)));
    if ((iVar2 == 1) || (iVar2 == 3)) {
      uVar8 = *((undefined4 *)GEN_TOP(((int)this + 0x3d0)));
      puVar7 = ((undefined4 *)GEN_TOP(F_00ab37e0(uVar8)));
      (*(uint *)(gen_frame + 0x4)) = 0xebf9;
    }
    else {
      if (iVar2 != 0xff) goto LAB_00a7cd61;
      uVar8 = *((undefined4 *)GEN_TOP(((int)this + 0x374)));
      puVar7 = ((undefined4 *)GEN_TOP(F_00ab37e0(uVar8)));
      (*(uint *)(gen_frame + 0x4)) = 0xece5;
    }
  }
  if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar1 = *(ushort *)(puVar7 + 8);
    uVar3 = puVar7[6];
    uVar6 = F_00ab1c90((uint)uVar1);
    if (uVar6 != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xd00))) = uVar8;
      *((undefined4 *)GEN_TOP(((int)this + 0xd04))) = *puVar7;
      *((undefined4 *)GEN_TOP(((int)this + 0xd08))) = puVar7[1];
      *((undefined4 *)GEN_TOP(((int)this + 0xd0c))) = puVar7[2];
      if ((puVar7[9] == 9) || (puVar7[9] == 0x33)) {
        fVar9 = F_007733a0(GEN_ARGF(gen_bits2f(puVar7[4])));
        fVar10 = (float)fVar9;
      }
      else {
        fVar10 = gen_bits2f(puVar7[4]);
      }
      *((uint *)GEN_TOP(((int)this + 0xd14))) = (*(uint *)(gen_frame + 0x4));
      *((float *)GEN_TOP(((int)this + 0xd10))) = fVar10;
      *((ushort *)GEN_TOP(((int)this + 0xcf0))) = uVar1;
      *((undefined4 *)GEN_TOP(((int)this + 0xcf4))) = uVar3;
      *((uint *)GEN_TOP(((int)this + 0xdc0))) = (uint)((*(uint *)(gen_frame + 0x4)) != 0);
    }
  }
LAB_00a7cd61: ;
  uVar6 = F_00a78d80(this GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_00a7cd70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a7cd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa7cd70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * this_00;
  uint uVar1;
  
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    this_00 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e78b0));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xa794b0));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39ec))) = this_00;
  if (*((int *)GEN_TOP(((int)this + 0x39e8))) == 0) {
    uVar1 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x8a);
    *((uint *)GEN_TOP(((int)this + 0x39e8))) = uVar1;
  }
  F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x39ec))) GEN_EDX_ARG,0,param_1);
  *((short *)GEN_TOP(((int)this + 0x39f8))) = (short)param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x39fc))) = 4;
  *((undefined4 *)GEN_TOP(((int)this + 0x39b4))) = 8;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x39e8))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x39e8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x39ec))));
  return uVar1;
}

/* ref: FUN_00a7ce30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a7ce30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa7ce30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint * puVar1;
  uint * puVar2;
  int * piVar3;
  bool bVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined * this_00;
  undefined4 * puVar10;
  byte bVar11;
  int iVar12;
  
  uVar7 = F_00a4ffd0();
  puVar2 = *((uint * PTR32 *)GEN_TOP((*param_1 + 4)));
  F_00a94f60(((undefined *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x78))) = (uint)*((ushort *)GEN_TOP(((int)this + 0xe40)));
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x7c))) GEN_EDX_ARG,(*puVar2 & 0xffffff) + (int)puVar2);
  uVar8 = F_00463610(0,puVar2[0x2de],3);
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0xd0))) GEN_EDX_ARG,uVar8);
  *((uint *)GEN_TOP(((int)this + 0x124))) = puVar2[0x2de];
  *((uint *)GEN_TOP(((int)this + 0x17c))) = (uint)(byte)puVar2[0x2e4];
  *((uint *)GEN_TOP(((int)this + 0x180))) = (uint)(ushort)puVar2[0x2e1];
  *((uint *)GEN_TOP(((int)this + 0x188))) = (uint)*((ushort *)GEN_TOP(((int)puVar2 + 0xb86)));
  *((uint *)GEN_TOP(((int)this + 0x184))) = (uint)*((byte *)GEN_TOP(((int)puVar2 + 0xb92)));
  *((uint *)GEN_TOP(((int)this + 0x1bc))) = (uint)*((byte *)GEN_TOP(((int)puVar2 + 0xb9f)));
  *((uint *)GEN_TOP(((int)this + 0x1c4))) = puVar2[0x2e0];
  if (*((byte *)GEN_TOP(((int)puVar2 + 0xb95))) != 0) {
    *((uint *)GEN_TOP(((int)this + 0x1c8))) = (uint)*((byte *)GEN_TOP(((int)puVar2 + 0xb95)));
  }
  uVar6 = F_006c0340(puVar2);
  uVar8 = *((uint *)GEN_TOP(((int)this + 0x1bc)));
  *((ushort *)GEN_TOP(((int)this + 0x18c))) = uVar6;
  param_1 = ((int *)GEN_TOP(0x0));
  *((bool *)GEN_TOP(((int)this + 0x1ba))) = *((char *)GEN_TOP(((int)puVar2 + 0xba1))) == '\x01';
  bVar5 = (byte)puVar2[0x2e8];
  *((uint *)GEN_TOP(((int)this + 0x1cc))) = (uint)bVar5;
  if (((((bVar5 != 1) && (bVar5 != 2)) && (bVar5 != 3)) ||
      (((uVar8 == 0 || (2 < uVar8)) && (4 < uVar8 - 3)))) &&
     (uVar9 = F_00ab32a0(uVar8), uVar9 != 0)) {
    uVar8 = F_00ab32a0(uVar8);
    param_1 = *((int * PTR32 *)GEN_TOP((uVar8 + 4)));
  }
  *((int * PTR32 *)GEN_TOP(((int)this + 0x1c0))) = param_1;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0xe44))) GEN_EDX_ARG,(puVar2[0x2d5] & 0xffffff) + (int)(puVar2 + 0x2d5));
  uVar8 = 0;
  do {
    if (*((short *)GEN_TOP((uVar7 + 0x13b8 + uVar8 * 0x10))) == *((short *)GEN_TOP(((int)this + 0xe40)))) {
      *((uint *)GEN_TOP(((int)this + 0xe98))) = (uint)*((byte *)GEN_TOP((uVar7 + uVar8 * 0x10 + 0x13ba)));
      break;
    }
    bVar5 = (char)uVar8 + 1;
    uVar8 = (uint)bVar5;
  } while (bVar5 < 0x1e);
  F_00a7a6b0(this GEN_EDX_ARG,puVar2);
  F_00a6a070(this GEN_EDX_ARG,puVar2);
  uVar7 = *((ushort *)GEN_TOP(((int)this + 0xe40))) | 0x10000;
  this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
  F_006e3240(this_00 GEN_EDX_ARG,uVar7);
  uVar7 = 0;
  uVar8 = 0;
  bVar4 = true;
  *((undefined2 *)GEN_TOP(((int)this + 0x5ec))) = 0;
  bVar5 = 0;
  do {
    puVar1 = puVar2 + (uVar8 & 0xff) * 9 + 0x1ed;
    bVar11 = (byte)*puVar1;
    uVar8 = CONCAT31((int3)((uVar8 & 0xff) * 9 >> 8),bVar11);
    if (bVar11 == 0) {
      *((short *)GEN_TOP(((int)this + 0x5ec))) = *((short *)GEN_TOP(((int)this + 0x5ec))) + 1;
      break;
    }
    uVar8 = (uint)bVar11;
    if (bVar4) {
      if (uVar7 != uVar8) {
        *((short *)GEN_TOP(((int)this + 0x5ec))) = *((short *)GEN_TOP(((int)this + 0x5ec))) + 1;
        uVar7 = *puVar1;
        *((uint *)GEN_TOP(((uint)*((ushort *)GEN_TOP(((int)this + 0x5ec))) * 0x58 + 0x644 + (int)this))) =
             (uint)(byte)uVar7;
        uVar7 = (uint)(byte)uVar7;
      }
    }
    else if (uVar7 != uVar8) {
      uVar7 = uVar8;
    }
    uVar8 = *((uint *)GEN_TOP(((int)this + 0xe98)));
    if ((uVar8 != (byte)*puVar1) && (uVar8 == 0)) {
      bVar4 = false;
    }
    bVar5 = bVar5 + 1;
    uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar5);
  } while (bVar5 < 0x18);
  puVar10 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xe34)));
  if (puVar10 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar10)))(puVar10 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0xe34))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xe30))) = 0;
  if ((*((int *)GEN_TOP(((int)this + 0xea0))) == 0) && (*((char *)GEN_TOP(((int)this + 0x1d1))) == '\0')) {
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0xe9c)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG,0x13);
      return uVar7;
    }
  }
  else {
    puVar10 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
    if (puVar10 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar10 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      iVar12 = (uint)*((byte *)GEN_TOP(((int)this + 0x1d1))) + *((int *)GEN_TOP(((int)this + 0xea0)));
      F_00cb4700(puVar10 GEN_EDX_ARG,iVar12,0);
      puVar10[5] = iVar12;
      *puVar10 = (*(undefined * PTR32 (*)[2])REFP(0x10e78e0));
      puVar10[6] = this;
      puVar10[7] = ((code *)REFP(0xa69ed0));
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xe3c))) = puVar10;
    bVar5 = 0;
    uVar7 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,9);
    bVar11 = 0;
    *((uint *)GEN_TOP(((int)this + 0xe38))) = uVar7;
    if (*((char *)GEN_TOP(((int)this + 0x1d0))) != '\0') {
      do {
        iVar12 = *((int *)GEN_TOP(((uint)bVar11 * 0x68 + 0x1d4 + (int)this)));
        if ((((iVar12 == 2) || (iVar12 == 3)) || (iVar12 == 4)) || (iVar12 == 6)) {
          F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xe3c))) GEN_EDX_ARG,(uint)bVar5,
                       *((undefined4 *)GEN_TOP(((uint)bVar11 * 0x68 + 0x234 + (int)this))));
          bVar5 = bVar5 + 1;
        }
        bVar11 = bVar11 + 1;
      } while (bVar11 < *((byte *)GEN_TOP(((int)this + 0x1d0))));
    }
    bVar11 = 0;
    if (*((char *)GEN_TOP(((int)this + 0x1d1))) != '\0') {
      do {
        F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xe3c))) GEN_EDX_ARG,(uint)bVar5,
                     *((undefined4 *)GEN_TOP(((uint)bVar11 * 0x68 + 0x43c + (int)this))));
        bVar5 = bVar5 + 1;
        bVar11 = bVar11 + 1;
      } while (bVar11 < *((byte *)GEN_TOP(((int)this + 0x1d1))));
    }
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xe38))) + 0x48))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0xe38))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xe3c))));
  }
  return uVar8;
}

/* ref: FUN_00a7d1e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a7d1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa7d1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a1;)
  ushort uVar1;
  undefined4 * this_00;
  uint uVar2;
  
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    this_00 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e78e0));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xa7ce30));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xe34))) = this_00;
  uVar1 = *param_1;
  uVar2 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x11);
  *((uint *)GEN_TOP(((int)this + 0xe30))) = uVar2;
  F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xe34))) GEN_EDX_ARG,0,uVar1 | 0x10000);
  *((undefined4 *)GEN_TOP(((int)this + 0xe98))) = 0;
  *((ushort *)GEN_TOP(((int)this + 0xe40))) = *param_1;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xe30))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0xe30))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xe34))));
  return uVar2;
}

/* ref: FUN_00a7d290 */
GEN_OWN_GS GEN_FRAME uint F_00a7d290(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5))
{
  GEN_ENTER(0xa7d290u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_FRAME_DECL_GS(0x30, 0, 4);
  int * piVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  uint uVar4;
  ulonglong uVar5;
  double dVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 * PTR32 * ppuVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c));
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  (*(int *)(gen_frame + 0x18)) = REFG(int, 0x1379694);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    goto LAB_00a7d48d;
  }
  if (param_2 == 0) {
LAB_00a7d353: ;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x20))));
      *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
        F_0042c880(pvVar3 GEN_EDX_ARG);
        F_00406ad0(pvVar3);
      }
    }
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_4;
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x20))));
      *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
        F_0042c880(pvVar3 GEN_EDX_ARG);
        F_00406ad0(pvVar3);
      }
    }
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_5;
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x20))));
      *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
        F_0042c880(pvVar3 GEN_EDX_ARG);
        F_00406ad0(pvVar3);
      }
    }
    ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
    uVar9 = 0;
    uVar7 = param_1;
    iVar8 = param_2;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
    F_0046abb0(pvVar3 GEN_EDX_ARG,uVar7,iVar8,uVar9,ppuVar10);
    (*(int *)(gen_frame + 0x18)) = 0;
    uVar4 = F_0043a1b0(param_1,&(*(int *)(gen_frame + 0x18)));
    F_00a77000(param_2,param_2,uVar4,(*(int *)(gen_frame + 0x18)),0,0,param_3,param_4,param_5,0);
  }
  else {
    if ((*(int *)(gen_frame + 0x18)) == 0) {
LAB_00a7d332: ;
      if ((*((byte *)GEN_TOP((param_2 + 0x2dd4))) & 0x10) != 0) {
        F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        goto LAB_00a7d48d;
      }
      goto LAB_00a7d353;
    }
    dVar6 = F_00a600a0((*(int *)(gen_frame + 0x18)),param_2);
    if (!((double)param_6 <= dVar6)) goto LAB_00a7d332;
  }
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
LAB_00a7d48d: ;
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar5;
}

/* ref: FUN_00a7d4b0 */
GEN_OWN_GS GEN_FRAME uint F_00a7d4b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(float param_10, float gen_a9))
{
  GEN_ENTER(0xa7d4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(float param_10 = (float)gen_a9;)
  GEN_FRAME_DECL_GS(0x8c, 4, 4);
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * pvVar4;
  ulonglong uVar5;
  double dVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 * PTR32 * ppuVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x84)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x88));
  (*(int *)(gen_frame + 0x1c)) = param_3;
  (*(undefined4 *)(gen_frame + 0x18)) = param_5;
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  (*(int *)(gen_frame + 0x20)) = REFG(int, 0x1379694);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    goto LAB_00a7d80b;
  }
  if (param_2 == 0) {
LAB_00a7d5ae: ;
    if (((*(int *)(gen_frame + 0x1c)) == 0) || ((*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x1c)) + 0x2dd4))) & 0x10) == 0)) {
      if ((param_4 == 2) || (param_4 == 3)) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = &(*(undefined4 *)(gen_frame + 0x78));
        (*(undefined4 *)(gen_frame + 0x78)) = 0;
        (*(undefined4 *)(gen_frame + 0x78)) = (*(undefined4 *)(gen_frame + 0x18));
        (*(char *)(gen_frame + 0x80)) = 0;
        F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x78)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x78)) GEN_EDX_ARG);
      }
      else {
        uVar7 = REFG(undefined4, 0x108cc50);
        uVar3 = F_00ac1ac0(param_4,(*(undefined4 *)(gen_frame + 0x18)));
        uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG,uVar3,uVar7);
        (*(undefined4 *)(gen_frame + 0x78)) = 0;
        (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = ((undefined4 *)GEN_TOP(0x0));
        (*(char *)(gen_frame + 0x80)) = 0xff;
        F_00490f90(&(*(undefined4 *)(gen_frame + 0x78)) GEN_EDX_ARG,uVar3);
        F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x78)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x78)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = &(*(undefined4 *)(gen_frame + 0x78));
      (*(undefined4 *)(gen_frame + 0x78)) = 0;
      (*(undefined4 *)(gen_frame + 0x78)) = param_6;
      (*(char *)(gen_frame + 0x80)) = '\0';
      F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x78)));
      if ((((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x80)) != '\0')) && ((*(char *)(gen_frame + 0x80)) == '\x01')) {
        pvVar4 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x7c))));
        *((int *)GEN_TOP(((int)pvVar4 + 0x54))) = *((int *)GEN_TOP(((int)pvVar4 + 0x54))) - 1;
        if (*((int *)GEN_TOP(((int)pvVar4 + 0x54))) < 1) {
          F_0042c880(pvVar4 GEN_EDX_ARG);
          F_00406ad0(pvVar4);
        }
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = &(*(undefined4 *)(gen_frame + 0x78));
      (*(undefined4 *)(gen_frame + 0x78)) = 0;
      (*(undefined4 *)(gen_frame + 0x78)) = param_7;
      (*(char *)(gen_frame + 0x80)) = '\0';
      F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x78)));
      if ((((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x80)) != '\0')) && ((*(char *)(gen_frame + 0x80)) == '\x01')) {
        pvVar4 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x7c))));
        *((int *)GEN_TOP(((int)pvVar4 + 0x54))) = *((int *)GEN_TOP(((int)pvVar4 + 0x54))) - 1;
        if (*((int *)GEN_TOP(((int)pvVar4 + 0x54))) < 1) {
          F_0042c880(pvVar4 GEN_EDX_ARG);
          F_00406ad0(pvVar4);
        }
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = &(*(undefined4 *)(gen_frame + 0x78));
      (*(undefined4 *)(gen_frame + 0x78)) = 0;
      (*(undefined4 *)(gen_frame + 0x78)) = param_8;
      (*(char *)(gen_frame + 0x80)) = '\0';
      F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x78)));
      if ((((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x80)) != '\0')) && ((*(char *)(gen_frame + 0x80)) == '\x01')) {
        pvVar4 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x7c))));
        *((int *)GEN_TOP(((int)pvVar4 + 0x54))) = *((int *)GEN_TOP(((int)pvVar4 + 0x54))) - 1;
        if (*((int *)GEN_TOP(((int)pvVar4 + 0x54))) < 1) {
          F_0042c880(pvVar4 GEN_EDX_ARG);
          F_00406ad0(pvVar4);
        }
      }
      (*(undefined4 *)(gen_frame + 0x78)) = 0;
      (*(undefined4 *)(gen_frame + 0x78)) = param_9;
      (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = &(*(undefined4 *)(gen_frame + 0x78));
      (*(char *)(gen_frame + 0x80)) = '\0';
      F_00493bc0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x78)));
      if ((((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x80)) != '\0')) && ((*(char *)(gen_frame + 0x80)) == '\x01')) {
        pvVar4 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x7c))));
        *((int *)GEN_TOP(((int)pvVar4 + 0x54))) = *((int *)GEN_TOP(((int)pvVar4 + 0x54))) - 1;
        if (*((int *)GEN_TOP(((int)pvVar4 + 0x54))) < 1) {
          F_0042c880(pvVar4 GEN_EDX_ARG);
          F_00406ad0(pvVar4);
        }
      }
      ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
      uVar7 = param_1;
      iVar8 = param_2;
      iVar9 = (*(int *)(gen_frame + 0x1c));
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
      F_0046abb0(pvVar4 GEN_EDX_ARG,uVar7,iVar8,iVar9,ppuVar10);
      (*(int *)(gen_frame + 0x20)) = 0;
      uVar3 = F_0043a1b0(param_1,&(*(int *)(gen_frame + 0x20)));
      F_00a77000((*(int *)(gen_frame + 0x1c)),param_2,uVar3,(*(int *)(gen_frame + 0x20)),param_4,(*(undefined4 *)(gen_frame + 0x18)),param_6,param_7,param_8,param_9)
      ;
    }
  }
  else {
    if (((*(int *)(gen_frame + 0x20)) != 0) && (dVar6 = F_00a600a0((*(int *)(gen_frame + 0x20)),param_2), (double)param_10 <= dVar6)) {
      F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      goto LAB_00a7d80b;
    }
    if ((*((byte *)GEN_TOP((param_2 + 0x2dd4))) & 0x10) == 0) goto LAB_00a7d5ae;
  }
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
LAB_00a7d80b: ;
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar5;
}

/* ref: FUN_00a7d830 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a7d830(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa7d830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar2 = 0;
  if (REFG(int, 0x1379694) != 0) {
    uVar2 = F_00a7d4b0(0x228,REFG(int, 0x1379694),0,param_1,param_2,0,0,0,0,REFG(float, 0x10916ec));
  }
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xf0))))(piVar1 GEN_EDX_ARG,param_1,param_2);
  }
  return uVar2;
}

/* ref: FUN_00a7d890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a7d890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa7d890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ushort uVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar2 = REFG(undefined4, 0x1379694);
  piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  iVar7 = 1;
  uVar4 = F_00aafad0();
  if (1 < (int)uVar4) {
    do {
      uVar4 = F_00ab1ed0(iVar7);
      if (((((int)*((char *)GEN_TOP((uVar4 + 0x2b))) == param_1) &&
           (*((byte *)GEN_TOP((uVar4 + 0x1f))) == (ushort)param_2)) && (*((char *)GEN_TOP((uVar4 + 0x27))) == '\0')) &&
         (F_00a6bcb0(iVar7), (ushort)param_2 != 1)) {
        F_00a7d830(1,iVar7);
      }
      iVar7 = iVar7 + 1;
      uVar4 = F_00aafad0();
    } while (iVar7 < (int)uVar4);
  }
  uVar4 = F_00aafaf0();
  if (1 < (int)uVar4) {
    iVar7 = 0x186a1;
    do {
      uVar4 = F_00ab1f00(iVar7);
      if (((int)*((char *)GEN_TOP((uVar4 + 0x11))) == param_1) && (*((byte *)GEN_TOP((uVar4 + 0xf))) == (ushort)param_2))
      {
        piVar5 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        uVar12 = 1;
        uVar11 = 0;
        uVar9 = 9;
        uVar4 = param_1;
        iVar10 = iVar7;
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x30))))(piVar5 GEN_EDX_ARG)));
        F_0045c4d0(this_00 GEN_EDX_ARG,uVar4,uVar9,iVar10,uVar11,uVar12);
        if ((ushort)param_2 != 1) {
          F_00a7d4b0(0x228,uVar2,0,9,iVar7,0,0,0,0,REFG(float, 0x10916ec));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xf0))))(piVar3 GEN_EDX_ARG,9,iVar7);
        }
      }
      uVar4 = F_00aafaf0();
      iVar10 = iVar7 - 99999;
      iVar7 = iVar7 + 1;
    } while (iVar10 < (int)uVar4);
  }
  iVar7 = 1;
  uVar4 = F_00aafb50();
  if (1 < (int)uVar4) {
    do {
      uVar4 = F_00ab1f90(iVar7);
      if (((*((byte *)GEN_TOP((uVar4 + 0xe))) == param_1) &&
          (uVar4 = F_00ab1f90(iVar7), *((byte *)GEN_TOP((uVar4 + 0xf))) == (ushort)param_2)) &&
         ((ushort)param_2 != 1)) {
        F_00a7d290(0x229,uVar2,iVar7,0,0,REFG(float, 0x10916ec));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xf0))))(piVar3 GEN_EDX_ARG,0,iVar7);
      }
      iVar7 = iVar7 + 1;
      uVar4 = F_00aafb50();
    } while (iVar7 < (int)uVar4);
  }
  uVar4 = F_00ab21a0(param_1);
  uVar4 = *((uint *)GEN_TOP((uVar4 + 0x10)));
  if (((uVar4 == 0x1e) || (uVar4 == 0x1f)) &&
     (uVar4 = CONCAT22((short)(uVar4 >> 0x10),(ushort)param_2), 1 < (ushort)param_2)) {
    uVar8 = (uint)(ushort)param_2;
    uVar6 = F_00ab2260(uVar8 - 1);
    uVar4 = F_00ab2260(uVar8);
    if (*((ushort *)GEN_TOP((uVar6 + 0x18))) < *((ushort *)GEN_TOP((uVar4 + 0x18)))) {
      uVar4 = F_00ab2260(uVar8 - 1);
      uVar1 = *((ushort *)GEN_TOP((uVar4 + 0x18)));
      uVar4 = F_00ab2260(uVar8);
      uVar4 = F_00a7d290(0x22a,uVar2,0,(uint)*((ushort *)GEN_TOP((uVar4 + 0x18))) - (uint)uVar1,0,
                           REFG(float, 0x10916ec));
      if ((REFG(char, 0x14ab070) != '\0') &&
         (uVar4 = CONCAT31((int3)(uVar4 >> 8),REFG(undefined1, 0x14b4ee1)) & 0xffffff01, (REFG(undefined1, 0x14b4ee1) & 1) == 0))
      {
        piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc0))))(piVar3 GEN_EDX_ARG,0x28,0);
        REFG(undefined1, 0x14b4ee1) = REFG(undefined1, 0x14b4ee1) | 1;
        uVar4 = F_00a51200(0x1d,0x28,0,0,0);
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00a7db00 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a7db00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa7db00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x12c, 4, 4);
  int iVar1;
  undefined1 * puVar2;
  undefined1 * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte * pbVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint * puVar12;
  int * piVar13;
  uint uVar14;
  int iVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x124)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x128));
  uVar5 = F_00a4ffd0();
  (*(byte *)(gen_frame + 0x7)) = 0;
  do {
    iVar1 = uVar5 + 0x1684 + (uint)(*(byte *)(gen_frame + 0x7)) * 0x10;
    if (*((short *)GEN_TOP((uVar5 + 0x1688 + (uint)(*(byte *)(gen_frame + 0x7)) * 0x10))) != 0) {
      F_00a8a4c0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      uVar9 = (uint)*((ushort *)GEN_TOP((iVar1 + 4)));
      puVar12 = ((uint *)GEN_TOP(((int)this + 0xe8)));
      (*(bool *)(gen_frame + 0x121)) = *((char *)GEN_TOP((iVar1 + 6))) == '\x03';
      uVar6 = *puVar12;
      uVar14 = 0;
      (*(uint *)(gen_frame + 0x5c)) = uVar9;
      (*(undefined4 *)(gen_frame + 0x11c)) = 2;
      if (uVar6 != *((uint *)GEN_TOP(((int)this + 0xec)))) {
        do {
          if (uVar9 < *((uint *)GEN_TOP((uVar6 + 0x54)))) {
            uVar9 = *puVar12;
            if (*((int *)GEN_TOP(((int)this + 0xec))) == *((int *)GEN_TOP(((int)this + 0xf0)))) {
              iVar1 = (int)(*((int *)GEN_TOP(((int)this + 0xec))) - uVar9) / 0x11c;
              if (iVar1 == -1) goto LAB_00a7de66;
              uVar7 = (int)(*((int *)GEN_TOP(((int)this + 0xf0))) - *puVar12) / 0x11c;
              uVar10 = iVar1 + 1;
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
                F_00a92850(puVar12 GEN_EDX_ARG,uVar7);
              }
            }
            if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xec))) != ((undefined *)GEN_TOP(0x0))) {
              F_00a88c70(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xec))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
            }
            *((int *)GEN_TOP(((int)this + 0xec))) = *((int *)GEN_TOP(((int)this + 0xec))) + 0x11c;
            iVar11 = *((int *)GEN_TOP(((int)this + 0xec)));
            iVar15 = ((int)(uVar6 - uVar9) / 0x11c) * 0x11c + *puVar12;
            iVar1 = iVar11 - 0x11c;
            if ((iVar15 != iVar1) && (iVar1 != iVar11)) {
              F_00a90b90(iVar15,iVar1,iVar11,0,0);
            }
            break;
          }
          uVar6 = uVar6 + 0x11c;
          uVar14 = uVar14 + 1;
        } while (uVar6 != *((uint *)GEN_TOP(((int)this + 0xec))));
      }
      if ((uint)((int)(*((int *)GEN_TOP(((int)this + 0xec))) - *puVar12) / 0x11c) <= uVar14) {
        puVar2 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0xec)));
        if ((((undefined1 *)(gen_frame + 0x8)) < puVar2) && (puVar3 = ((undefined1 *)GEN_TOP(*puVar12)), puVar3 <= ((undefined1 *)(gen_frame + 0x8)))) {
          if (puVar2 == *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0xf0)))) {
            iVar1 = (int)((int)puVar2 - *puVar12) / 0x11c;
            if (iVar1 == -1) {
LAB_00a7de66: ;
                    
              F_00c4579a(((char *)REFP(0x108497c)));
            }
            uVar6 = (int)((int)*((undefined1 * PTR32 *)GEN_TOP(((int)this + 0xf0))) - *puVar12) / 0x11c;
            uVar9 = iVar1 + 1;
            if (uVar6 < uVar9) {
              if (-(uVar6 >> 1) - 1 < uVar6) {
                uVar6 = 0;
              }
              else {
                uVar6 = uVar6 + (uVar6 >> 1);
              }
              if (uVar6 < uVar9) {
                uVar6 = uVar9;
              }
              F_00a92850(puVar12 GEN_EDX_ARG,uVar6);
            }
          }
          if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xec))) != ((undefined *)GEN_TOP(0x0))) {
            F_00a88c70(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xec))) GEN_EDX_ARG,
                         (((int)((undefined1 *)(gen_frame + 0x8)) - (int)puVar3) / 0x11c) * 0x11c + *puVar12);
          }
        }
        else {
          if (puVar2 == *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0xf0)))) {
            iVar1 = (int)((int)puVar2 - *puVar12) / 0x11c;
            if (iVar1 == -1) goto LAB_00a7de66;
            uVar6 = (int)((int)*((undefined1 * PTR32 *)GEN_TOP(((int)this + 0xf0))) - *puVar12) / 0x11c;
            uVar9 = iVar1 + 1;
            if (uVar6 < uVar9) {
              if (-(uVar6 >> 1) - 1 < uVar6) {
                uVar6 = 0;
              }
              else {
                uVar6 = uVar6 + (uVar6 >> 1);
              }
              if (uVar6 < uVar9) {
                uVar6 = uVar9;
              }
              F_00a92850(puVar12 GEN_EDX_ARG,uVar6);
            }
          }
          if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xec))) != ((undefined *)GEN_TOP(0x0))) {
            F_00a88c70(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xec))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
          }
        }
        *((int *)GEN_TOP(((int)this + 0xec))) = *((int *)GEN_TOP(((int)this + 0xec))) + 0x11c;
      }
      F_0042c880(((undefined1 *)(gen_frame + 0xc4)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    }
    (*(byte *)(gen_frame + 0x7)) = (*(byte *)(gen_frame + 0x7)) + 1;
    if (0xf < (*(byte *)(gen_frame + 0x7))) {
      pbVar8 = ((byte *)GEN_TOP((uVar5 + 0x1895)));
      (*(int *)(gen_frame + 0x0)) = 5;
      do {
        if (pbVar8[-1] == 2) {
          iVar11 = *((int *)GEN_TOP(((int)this + 0xec))) - *((int *)GEN_TOP(((int)this + 0xe8)));
          iVar1 = iVar11 >> 0x1f;
          iVar11 = iVar11 / 0x11c + iVar1;
          uVar6 = 0;
          if (iVar11 != iVar1) {
            puVar12 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xe8))) + 0x54)));
            do {
              if (*puVar12 == (uint)*((ushort *)GEN_TOP((uVar5 + 0x1688 + (uint)*pbVar8 * 0x10)))) {
                *((undefined1 *)GEN_TOP((uVar6 * 0x11c + 0x58 + *((int *)GEN_TOP(((int)this + 0xe8)))))) = 1;
                break;
              }
              uVar6 = uVar6 + 1;
              puVar12 = puVar12 + 0x47;
            } while (uVar6 < (uint)(iVar11 - iVar1));
          }
        }
        pbVar8 = pbVar8 + 8;
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
        if ((*(int *)(gen_frame + 0x0)) == 0) {
          iVar1 = (*((int *)GEN_TOP(((int)this + 0xec))) - *((int *)GEN_TOP(((int)this + 0xe8)))) / 0x11c;
          *((int *)GEN_TOP(((int)this + 0x7c))) = iVar1;
          *((uint *)GEN_TOP(((int)this + 0xd4))) = (uint)*((byte *)GEN_TOP((uVar5 + 0x18b8)));
          if (iVar1 != 0) {
            *((undefined4 *)GEN_TOP(((int)this + 0x3a6c))) = 0;
            *((undefined4 *)GEN_TOP(((int)this + 0x39b4))) = 6;
            uVar5 = F_00a7b660(this GEN_EDX_ARG);
            return uVar5;
          }
          puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39d4)));
          uVar5 = 0;
          if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
            uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,1);
            *((undefined4 *)GEN_TOP(((int)this + 0x39d4))) = 0;
          }
          *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 0;
          if (*((char *)GEN_TOP(((int)this + 0x3a67))) == '\0') {
            if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
              piVar13 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
            }
            else {
              piVar13 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0)));
            }
            if (piVar13 != ((int *)GEN_TOP(0x0))) {
              uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar13 + 4))))(piVar13 GEN_EDX_ARG,0xf);
            }
          }
          else if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
            piVar13 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
            if (piVar13 != ((int *)GEN_TOP(0x0))) {
              uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar13 + 4))))(piVar13 GEN_EDX_ARG,0x10);
              *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 0;
              return uVar5;
            }
          }
          else {
            piVar13 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0)));
            if (piVar13 != ((int *)GEN_TOP(0x0))) {
              uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar13 + 4))))(piVar13 GEN_EDX_ARG,0x10);
              *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 0;
              return uVar5;
            }
          }
          *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 0;
          return uVar5;
        }
      } while( true );
    }
  } while( true );
}

/* ref: FUN_00a7dfc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a7dfc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa7dfc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * this_00;
  byte bVar4;
  uint uVar5;
  
  piVar2 = ((int *)GEN_TOP(F_0052fba0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,((char *)REFP(0x10e7784)))));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  uVar5 = *((int *)GEN_TOP(((int)this + 0x78))) - *((int *)GEN_TOP(((int)this + 0x3a58)));
  if (uVar3 < uVar5) {
    uVar5 = uVar3;
  }
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    this_00 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,uVar5,0);
    this_00[5] = uVar5;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e78b0));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xa7b750));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39bc))) = this_00;
  if (*((int *)GEN_TOP(((int)this + 0x39b8))) == 0) {
    uVar3 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x11);
    *((uint *)GEN_TOP(((int)this + 0x39b8))) = uVar3;
  }
  bVar4 = 0;
  if (uVar5 != 0) {
    uVar3 = 0;
    do {
      iVar1 = *((int *)GEN_TOP(((int)this + 0x3a58)));
      *((int *)GEN_TOP(((int)this + 0x3a58))) = iVar1 + 1;
      F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x39bc))) GEN_EDX_ARG,uVar3,
                   *((uint *)GEN_TOP((iVar1 * 0x11c + 0x54 + *((int *)GEN_TOP(((int)this + 0xd8)))))) & 0xffff | 0x10000);
      bVar4 = bVar4 + 1;
      uVar3 = (uint)bVar4;
    } while (uVar3 < uVar5);
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x39b8))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x39b8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x39bc))));
  return uVar5;
}

/* ref: FUN_00a7e0c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a7e0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa7e0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  if (*((char *)GEN_TOP(((int)this + 0x3a65))) == '\0') {
    piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar3 = 3;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar3)));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        uVar2 = F_0076ecb0(this_00 GEN_EDX_ARG,4);
        if ((char)uVar2 != '\0') {
          *((undefined4 *)GEN_TOP(((int)this + 0x3a9c))) = param_1;
          *((undefined1 *)GEN_TOP(((int)this + 0x3aae))) = 0;
          F_00a94c50(((undefined *)GEN_TOP(((int)this + 0x17c))) GEN_EDX_ARG);
          F_00a85260(((undefined *)GEN_TOP(((int)this + 0xc30))) GEN_EDX_ARG);
          *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 1;
          if (param_3 == 0) {
            *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 0;
            F_00a67ca0(this GEN_EDX_ARG,0xc);
            return;
          }
          *((int *)GEN_TOP(((int)this + 0x39fc))) = param_2;
          if (param_2 == 1) {
            F_00a7ca30(this GEN_EDX_ARG,param_3);
          }
          else if (param_2 == 2) {
            F_00a78bf0(this GEN_EDX_ARG,param_3);
            return;
          }
        }
      }
    }
  }
  return;
}

/* ref: FUN_00a7e180 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a7e180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa7e180u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  undefined * this_00;
  int * piVar2;
  
  if (*((char *)GEN_TOP(((int)this + 0x3a65))) == '\0') {
    if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
      *((undefined4 *)GEN_TOP(((int)this + 0x3a9c))) = param_1;
    }
    else {
      *((undefined4 *)GEN_TOP(((int)this + 0x3aa0))) = param_1;
    }
    F_00a94c50(((undefined *)GEN_TOP(((int)this + 0x17c))) GEN_EDX_FWD);
    F_00a85260(((undefined *)GEN_TOP(((int)this + 0xc30))) GEN_EDX_ARG);
    *((undefined2 *)GEN_TOP(((int)this + 0x3158))) = 0;
    this_00 = ((undefined *)GEN_TOP(((int)this + 0x315c)));
    iVar1 = 0x18;
    do {
      F_0042e430(this_00 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
      *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0;
      this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)));
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
    *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 1;
    if (param_3 == 0) {
      *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 0;
      if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
        piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
      }
      else {
        piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0)));
      }
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,0xc);
        return;
      }
    }
    else {
      *((undefined4 *)GEN_TOP(((int)this + 0x39fc))) = param_2;
      switch((unsigned int)(uintptr_t)(param_2)) {
      case 1: ;
        F_00a7cb00(this GEN_EDX_ARG,param_3);
        return;
      case 2: ;
        F_00a78bf0(this GEN_EDX_ARG,param_3);
        return;
      case 3: ;
        F_00a73480(this GEN_EDX_ARG,param_3);
        break;
      case 4: ;
        F_00a7cd70(this GEN_EDX_ARG,param_3);
        return;
      }
    }
  }
  return;
}

/* ref: FUN_00a7e2a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a7e2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa7e2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined1 *)GEN_TOP(((int)this + 0x3aae))) = 0;
  if (param_2 < 10) {
    F_00a7e180(this GEN_EDX_FWD,param_1,1,param_3);
    return;
  }
  if (param_2 - 10 < 0xe) {
    F_00a7e180(this GEN_EDX_ARG,param_1,2,param_3);
    return;
  }
  if (param_2 == 0x19) {
    F_00a7e180(this GEN_EDX_ARG,param_1,3,param_3);
  }
  return;
}

/* ref: FUN_00a7e300 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a7e300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa7e300u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined1 *)GEN_TOP(((int)this + 0x3aae))) = 1;
  if (param_2 < 10) {
    F_00a7e180(this GEN_EDX_FWD,param_1,1,param_3);
    return;
  }
  if (param_2 - 10 < 0xe) {
    F_00a7e180(this GEN_EDX_ARG,param_1,2,param_3);
    return;
  }
  if (param_2 == 0x18) {
    F_00a7e180(this GEN_EDX_ARG,param_1,4,param_3);
    return;
  }
  if (param_2 == 0x19) {
    F_00a7e180(this GEN_EDX_ARG,param_1,3,param_3);
  }
  return;
}

/* ref: FUN_00a7e370 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a7e370(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa7e370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  if (*((char *)GEN_TOP(((int)param_1 + 0x3a65))) != '\0') {
    return;
  }
  if (param_2 == '\0') {
    piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return;
    }
    uVar3 = 3;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
    this = ((undefined *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar3)));
    if (this == ((undefined *)GEN_TOP(0x0))) {
      return;
    }
    uVar2 = F_0076ecb0(this GEN_EDX_ARG,4);
    if ((char)uVar2 == '\0') {
      return;
    }
  }
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x3a65))) = 1;
  if (*((int *)GEN_TOP(((int)param_1 + 0x39fc))) == 1) {
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x39b4))) = 0;
    F_00a74270(param_1 GEN_EDX_ARG);
    return;
  }
  if (*((int *)GEN_TOP(((int)param_1 + 0x39fc))) != 2) {
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x3a65))) = 0;
    F_00a67ca0(param_1 GEN_EDX_ARG,0xd);
    return;
  }
  F_00a7cbc0(param_1 GEN_EDX_ARG);
  return;
}

/* ref: FUN_00a7e410 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a7e410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa7e410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (((*((int *)GEN_TOP(((int)this + 0x3a9c))) != 0) && (*((int *)GEN_TOP(((int)this + 0x39fc))) == param_1)) &&
     (*((ushort *)GEN_TOP(((int)this + 0x39f8))) == (ushort)param_2)) {
    F_00a7e0c0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x3a9c))),param_1,(uint)(ushort)param_2);
  }
  return;
}

/* ref: FUN_00a7e450 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a7e450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa7e450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  puVar3 = param_1;
  puVar4 = ((undefined4 *)GEN_TOP(((int)this + 1)));
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  F_00a9c0d0(0,uVar1);
  uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)uVar5;
}

/* ref: FUN_00a7e4b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a7e4b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa7e4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  
  *((byte *)GEN_TOP(((int)this + 0x61))) = (byte)(*(uint *)&gen_args[0]);
  (*(uint *)&gen_args[0]) = (uint)(byte)(*(uint *)&gen_args[0]);
  uVar1 = F_00a9c160(3,&(*(uint *)&gen_args[0]));
  return uVar1;
}

/* ref: FUN_00a7e4e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a7e4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa7e4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  
  *((byte *)GEN_TOP(((int)this + 100))) = (byte)(*(uint *)&gen_args[0]);
  (*(uint *)&gen_args[0]) = (uint)(byte)(*(uint *)&gen_args[0]);
  uVar1 = F_00a9c160(0x43,&(*(uint *)&gen_args[0]));
  return uVar1;
}

/* ref: FUN_00a7e510 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a7e510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa7e510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  short * psVar1;
  char cVar2;
  short sVar3;
  code * pcVar4;
  short sVar5;
  uint uVar6;
  int * piVar7;
  
  if ((*(int *)&gen_args[0]) < 0x1d) {
    uVar6 = F_00ab21a0((*(int *)&gen_args[0]));
    if (((uVar6 != 0) && (cVar2 = *((char *)GEN_TOP((uVar6 + 0x43))), -1 < cVar2)) && (cVar2 < '\x13')) {
      psVar1 = ((short *)GEN_TOP(((int)this + cVar2 * 2 + 0x66)));
      sVar5 = (short)(*(uint *)&gen_args[1]);
      sVar3 = *psVar1;
      *psVar1 = (short)(*(uint *)&gen_args[1]);
      (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffff;
      F_00a9c160(0x44,&(*(uint *)&gen_args[1]));
      if (sVar3 != sVar5) {
        piVar7 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        if (piVar7 != ((int *)GEN_TOP(0x0))) {
          pcVar4 = *((gen_code32 *)GEN_TOP((*piVar7 + 0x7c)));
          (*(int *)(gen_frame + 0x0)) = (*(int *)&gen_args[0]);
          (*(short *)(gen_frame + 0x4)) = sVar5;
          (*pcVar4)(piVar7,3,0,&(*(int *)(gen_frame + 0x0)));
        }
      }
    }
  }
  return;
}

/* ref: FUN_00a7e5a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a7e5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa7e5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  char cVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  ushort uVar8;
  uint uVar9;
  
  uVar9 = (*(uint *)&gen_args[0]);
  uVar8 = (ushort)(*(uint *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(int, 0x1379694);
  if ((ushort)(*(uint *)&gen_args[0]) == 0) {
    if (*((short *)GEN_TOP(((int)this + 0xd8))) != 0) {
      uVar9 = (uint)*((byte *)GEN_TOP(((int)this + 100)));
      if (((uVar9 < 0x1d) && (uVar5 = F_00ab21a0(uVar9), uVar5 != 0)) &&
         ((uVar9 = F_00ab21a0(uVar9), uVar9 != 0 &&
          ((cVar1 = *((char *)GEN_TOP((uVar9 + 0x43))), -1 < cVar1 && (cVar1 < '\x13')))))) {
        uVar4 = *((ushort *)GEN_TOP(((int)this + cVar1 * 2 + 0x66)));
      }
      else {
        uVar4 = 0;
      }
      if (*((ushort *)GEN_TOP(((int)this + 0xd8))) < uVar4) {
        if ((*(uint *)(gen_frame + 0x4)) != 0) {
          F_00a7d290(0x26b,(*(uint *)(gen_frame + 0x4)),0,0,0,REFG(float, 0x10916ec));
        }
        F_0043f8b0(0x30);
      }
    }
    *((undefined1 *)GEN_TOP(((int)this + 0xda))) = 0;
  }
  else if (((((*((char *)GEN_TOP(((int)this + 0xda))) == '\0') &&
             (uVar5 = (uint)*((byte *)GEN_TOP(((int)this + 100))), uVar5 < 0x1d)) &&
            (uVar6 = F_00ab21a0(uVar5), uVar6 != 0)) &&
           ((uVar5 = F_00ab21a0(uVar5), uVar5 != 0 &&
            (cVar1 = *((char *)GEN_TOP((uVar5 + 0x43))), -1 < cVar1)))) &&
          ((cVar1 < '\x13' && (uVar8 < *((ushort *)GEN_TOP(((int)this + cVar1 * 2 + 0x66))))))) {
    F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x5d,0,0);
    if ((*(uint *)(gen_frame + 0x4)) != 0) {
      F_00a7d290(0x26a,(*(uint *)(gen_frame + 0x4)),uVar9 & 0xffff,0,0,REFG(float, 0x10916ec));
    }
    *((undefined1 *)GEN_TOP(((int)this + 0xda))) = 1;
  }
  uVar9 = (uint)*((byte *)GEN_TOP(((int)this + 100)));
  (*(uint *)(gen_frame + 0x4)) = (uint)*((ushort *)GEN_TOP(((int)this + 0xd8)));
  *((ushort *)GEN_TOP(((int)this + 0xd8))) = uVar8;
  if ((uVar9 < 0x1d) && (uVar5 = F_00ab21a0(uVar9), uVar5 != 0)) {
    cVar1 = *((char *)GEN_TOP((uVar5 + 0x3e)));
    uVar9 = F_00ab21a0(uVar9);
    uVar8 = (ushort)(*(uint *)&gen_args[0]);
    if ((uVar9 != 0) && ((cVar2 = *((char *)GEN_TOP((uVar9 + 0x43))), -1 < cVar2 && (cVar2 < '\x13')))) {
      uVar4 = *((ushort *)GEN_TOP(((int)this + cVar2 * 2 + 0x66)));
      if ((cVar1 == *((char *)GEN_TOP((uVar9 + 0x3e)))) &&
         ((uVar3 = *((ushort *)GEN_TOP(((int)this + 0xd8))), uVar3 != 0 && (uVar3 < uVar4)))) {
        uVar4 = uVar3;
      }
      goto LAB_00a7e73e;
    }
  }
  uVar4 = 0;
LAB_00a7e73e: ;
  (*(uint *)&gen_args[0]) = (uint)uVar4;
  uVar9 = F_00a9c160(0x47,&(*(uint *)&gen_args[0]));
  if ((ushort)(*(uint *)(gen_frame + 0x4)) != uVar8) {
    piVar7 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar9 = 0;
    if (piVar7 != ((int *)GEN_TOP(0x0))) {
      (*(uint *)(gen_frame + 0x0)) = (uint)*((byte *)GEN_TOP(((int)this + 100)));
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 0)) = uVar8;
      (*(uint *)(gen_frame + 0x4)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 2)),uVar8);
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x7c))))(piVar7 GEN_EDX_ARG,3,0,&(*(uint *)(gen_frame + 0x0)));
    }
  }
  return uVar9;
}

/* ref: FUN_00a7e790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a7e790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa7e790u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(byte)(*(uint *)&gen_args[0]);
  uVar2 = uVar1 - 1;
  if (uVar2 < 3) {
    *((byte *)GEN_TOP((uVar1 + 0x22a + param_1))) = (*(byte *)&gen_args[1]);
    if ((byte)(*(uint *)&gen_args[0]) == *((byte *)GEN_TOP((param_1 + 0x22a)))) {
      (*(uint *)&gen_args[0]) = (uint)(*(byte *)&gen_args[1]);
    }
    else {
      (*(uint *)&gen_args[0]) = 0;
    }
    uVar2 = F_00a9c160(uVar1 + 0x32,&(*(uint *)&gen_args[0]));
  }
  return uVar2;
}

/* ref: FUN_00a7e7e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a7e7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa7e7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  
  *((byte *)GEN_TOP(((int)this + 0xdf))) = (byte)(*(uint *)&gen_args[0]);
  (*(uint *)&gen_args[0]) = (uint)(byte)(*(uint *)&gen_args[0]);
  uVar1 = F_00a9c160(0x45,&(*(uint *)&gen_args[0]));
  return uVar1;
}

/* ref: FUN_00a7e810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a7e810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa7e810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  
  *((byte *)GEN_TOP(((int)this + 0x62))) = (byte)(*(uint *)&gen_args[0]);
  (*(uint *)&gen_args[0]) = (uint)(byte)(*(uint *)&gen_args[0]);
  uVar1 = F_00a9c160(0x46,&(*(uint *)&gen_args[0]));
  return uVar1;
}

/* ref: FUN_00a7e840 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a7e840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa7e840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if (REFG(int, 0x1379694) != 0) {
    F_00a75360(this GEN_EDX_FWD);
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    if ((*(uint *)&REFG(undefined, 0x14b4fb4) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14b4fb4) = *(uint *)&REFG(undefined, 0x14b4fb4) | 1;
      F_0042b630(&REFG(undefined, 0x14b4f60) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c630)));
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1a8)));
    for (uVar8 = *((uint *)GEN_TOP(((int)this + 0x1b4)));
        uVar8 != *((int *)GEN_TOP(((int)this + 0x1b8))) + *((int *)GEN_TOP(((int)this + 0x1b4))); uVar8 = uVar8 + 1) {
      if (piVar1 == ((int *)GEN_TOP(0x0))) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar1;
      }
      uVar3 = uVar8;
      if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar8) {
        uVar3 = uVar8 - *((uint *)GEN_TOP((iVar6 + 8)));
      }
      if (*((char *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar3 * 4))) + 0x70))) == '\0') {
        F_0042aca0(&REFG(undefined, 0x14b4f60) GEN_EDX_ARG);
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG)));
        if (piVar1 == ((int *)GEN_TOP(0x0))) {
          iVar6 = 0;
        }
        else {
          iVar6 = *piVar1;
        }
        uVar3 = uVar8;
        if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar8) {
          uVar3 = uVar8 - *((uint *)GEN_TOP((iVar6 + 8)));
        }
        if (piVar1 == ((int *)GEN_TOP(0x0))) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar1;
        }
        uVar7 = uVar8;
        if (*((uint *)GEN_TOP((iVar5 + 8))) <= uVar8) {
          uVar7 = uVar8 - *((uint *)GEN_TOP((iVar5 + 8)));
        }
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))
                          (piVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 4))) + uVar7 * 4))),
                           *((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar3 * 4))) + 0x54,&REFG(undefined, 0x14b4f60));
        if (uVar3 != 0) {
          if (uVar3 == 1) {
            if (piVar1 == ((int *)GEN_TOP(0x0))) {
              iVar6 = 0;
            }
            else {
              iVar6 = *piVar1;
            }
            uVar3 = uVar8;
            if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar8) {
              uVar3 = uVar8 - *((uint *)GEN_TOP((iVar6 + 8)));
            }
            F_00a6eb20(this GEN_EDX_ARG,1,&REFG(undefined, 0x14b4f60),
                         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar3 * 4))) + 0x6c))));
            if (piVar1 == ((int *)GEN_TOP(0x0))) {
              iVar6 = 0;
            }
            else {
              iVar6 = *piVar1;
            }
          }
          else {
            F_0042e430(&REFG(undefined, 0x14b4f60) GEN_EDX_ARG,&REFG(undefined, 0x10e7143));
            if (piVar1 == ((int *)GEN_TOP(0x0))) {
              iVar6 = 0;
            }
            else {
              iVar6 = *piVar1;
            }
          }
          uVar3 = uVar8;
          if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar8) {
            uVar3 = uVar8 - *((uint *)GEN_TOP((iVar6 + 8)));
          }
          *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar3 * 4))) + 0x70))) = 1;
        }
      }
    }
    iVar6 = *((int *)GEN_TOP(((int)this + 0x1b8)));
    while (iVar6 != 0) {
      uVar8 = *((uint *)GEN_TOP(((int)this + 0x1b4)));
      if (*((int * PTR32 *)GEN_TOP(((int)this + 0x1a8))) == ((int *)GEN_TOP(0x0))) {
        iVar6 = 0;
      }
      else {
        iVar6 = **((int * PTR32 *)GEN_TOP(((int)this + 0x1a8)));
      }
      if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar8) {
        uVar8 = uVar8 - *((uint *)GEN_TOP((iVar6 + 8)));
      }
      if ((*((char *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar8 * 4))) + 0x70))) == '\0') ||
         (*((int *)GEN_TOP(((int)this + 0x1b8))) == 0)) break;
      this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1ac))) + *((int *)GEN_TOP(((int)this + 0x1b4))) * 4)));
      F_00492c50(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_ARG);
      F_00429760(*((undefined4 *)GEN_TOP(((int)this_00 + 0x54))),8,0x2c4);
      *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0;
      F_0042c880(this_00 GEN_EDX_ARG);
      *((int *)GEN_TOP(((int)this + 0x1b4))) = *((int *)GEN_TOP(((int)this + 0x1b4))) + 1;
      if (*((uint *)GEN_TOP(((int)this + 0x1b0))) <= *((uint *)GEN_TOP(((int)this + 0x1b4)))) {
        *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = 0;
      }
      piVar2 = ((int *)GEN_TOP(((int)this + 0x1b8)));
      *piVar2 = *piVar2 - 1;
      if (*piVar2 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = 0;
      }
      iVar6 = *((int *)GEN_TOP(((int)this + 0x1b8)));
    }
    if (((*((char *)GEN_TOP(((int)this + 0x1d4))) != '\0') && (*((char *)GEN_TOP(((int)this + 0x1d5))) != '\0')) &&
       (piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) + 0x10))),
       uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x38))))(piVar2 GEN_EDX_ARG), (char)uVar8 == '\0')) {
      *((undefined1 *)GEN_TOP(((int)this + 0x1d5))) = 0;
      F_00a737b0(this GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: FUN_00a7eac0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a7eac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa7eac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (REFG(int, 0x1379694) != 0) {
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    if ((*(uint *)&REFG(undefined, 0x14b500c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14b500c) = *(uint *)&REFG(undefined, 0x14b500c) | 1;
      F_0042b630(&REFG(undefined, 0x14b4fb8) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c640)));
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xfb4)));
    for (uVar8 = *((uint *)GEN_TOP(((int)this + 0xfc0)));
        uVar8 != *((int *)GEN_TOP(((int)this + 0xfc4))) + *((int *)GEN_TOP(((int)this + 0xfc0))); uVar8 = uVar8 + 1) {
      if (piVar1 == ((int *)GEN_TOP(0x0))) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar1;
      }
      uVar3 = uVar8;
      if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar8) {
        uVar3 = uVar8 - *((uint *)GEN_TOP((iVar6 + 8)));
      }
      if (*((char *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar3 * 4))) + 0x70))) == '\0') {
        F_0042aca0(&REFG(undefined, 0x14b4fb8) GEN_EDX_ARG);
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG)));
        if (piVar1 == ((int *)GEN_TOP(0x0))) {
          iVar6 = 0;
        }
        else {
          iVar6 = *piVar1;
        }
        uVar3 = uVar8;
        if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar8) {
          uVar3 = uVar8 - *((uint *)GEN_TOP((iVar6 + 8)));
        }
        if (piVar1 == ((int *)GEN_TOP(0x0))) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar1;
        }
        uVar7 = uVar8;
        if (*((uint *)GEN_TOP((iVar5 + 8))) <= uVar8) {
          uVar7 = uVar8 - *((uint *)GEN_TOP((iVar5 + 8)));
        }
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))
                          (piVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 4))) + uVar7 * 4))),
                           *((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar3 * 4))) + 0x54,&REFG(undefined, 0x14b4fb8));
        if (uVar3 != 0) {
          if (uVar3 == 1) {
            if (piVar1 == ((int *)GEN_TOP(0x0))) {
              iVar6 = 0;
            }
            else {
              iVar6 = *piVar1;
            }
            uVar3 = uVar8;
            if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar8) {
              uVar3 = uVar8 - *((uint *)GEN_TOP((iVar6 + 8)));
            }
            uVar10 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar3 * 4))) + 0x6c)));
            uVar9 = 1;
          }
          else {
            F_0042e430(&REFG(undefined, 0x14b4fb8) GEN_EDX_ARG,&REFG(undefined, 0x10e715e));
            if (piVar1 == ((int *)GEN_TOP(0x0))) {
              iVar6 = 0;
            }
            else {
              iVar6 = *piVar1;
            }
            uVar3 = uVar8;
            if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar8) {
              uVar3 = uVar8 - *((uint *)GEN_TOP((iVar6 + 8)));
            }
            uVar10 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar3 * 4))) + 0x6c)));
            uVar9 = 0;
          }
          F_00a74ba0(this GEN_EDX_ARG,uVar9,&REFG(undefined, 0x14b4fb8),uVar10);
          if (piVar1 == ((int *)GEN_TOP(0x0))) {
            iVar6 = 0;
          }
          else {
            iVar6 = *piVar1;
          }
          uVar3 = uVar8;
          if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar8) {
            uVar3 = uVar8 - *((uint *)GEN_TOP((iVar6 + 8)));
          }
          *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar3 * 4))) + 0x70))) = 1;
        }
      }
    }
    iVar6 = *((int *)GEN_TOP(((int)this + 0xfc4)));
    while (iVar6 != 0) {
      uVar8 = *((uint *)GEN_TOP(((int)this + 0xfc0)));
      if (*((int * PTR32 *)GEN_TOP(((int)this + 0xfb4))) == ((int *)GEN_TOP(0x0))) {
        iVar6 = 0;
      }
      else {
        iVar6 = **((int * PTR32 *)GEN_TOP(((int)this + 0xfb4)));
      }
      if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar8) {
        uVar8 = uVar8 - *((uint *)GEN_TOP((iVar6 + 8)));
      }
      if (*((char *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar8 * 4))) + 0x70))) == '\0') {
        return;
      }
      if (*((int *)GEN_TOP(((int)this + 0xfc4))) == 0) {
        return;
      }
      this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xfb8))) + *((int *)GEN_TOP(((int)this + 0xfc0))) * 4)));
      F_00492c50(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_ARG);
      F_00429760(*((undefined4 *)GEN_TOP(((int)this_00 + 0x54))),8,0x2c4);
      *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0;
      F_0042c880(this_00 GEN_EDX_ARG);
      *((int *)GEN_TOP(((int)this + 0xfc0))) = *((int *)GEN_TOP(((int)this + 0xfc0))) + 1;
      if (*((uint *)GEN_TOP(((int)this + 0xfbc))) <= *((uint *)GEN_TOP(((int)this + 0xfc0)))) {
        *((undefined4 *)GEN_TOP(((int)this + 0xfc0))) = 0;
      }
      piVar2 = ((int *)GEN_TOP(((int)this + 0xfc4)));
      *piVar2 = *piVar2 - 1;
      if (*piVar2 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0xfc0))) = 0;
      }
      iVar6 = *((int *)GEN_TOP(((int)this + 0xfc4)));
    }
  }
  return;
}

/* ref: FUN_00a7ed30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a7ed30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa7ed30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int * piVar1;
  uint uVar2;
  
  *((uint *)GEN_TOP(((int)this + 0xe9c))) = (*(uint *)&gen_args[0]);
  F_00a94f60(((undefined *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD);
  if ((*(uint *)&gen_args[1]) == 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xe9c)));
    uVar2 = 0;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,0x13);
      return uVar2;
    }
  }
  else {
    (*(uint *)&gen_args[0]) = (*(uint *)&gen_args[1]) & 0xffff;
    uVar2 = F_00a7d1e0(this GEN_EDX_ARG,&(*(uint *)&gen_args[0]));
  }
  return uVar2;
}

/* ref: FUN_00a7ed80 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a7ed80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa7ed80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_00c49908((int)this + 0x17,0x15,param_1);
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,REFG(undefined4, 0x108cc50));
  F_00a9c0d0(0x36,uVar1);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_00a7ede0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a7ede0(GEN_P(byte * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa7ede0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  uint uVar1;
  uint uVar2;
  
  if (*param_1 == param_2) {
    return 0;
  }
  uVar1 = F_005339c0(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD);
  if (param_2 != 0) {
    uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,uVar1);
    if (uVar2 != 0) {
      uVar2 = F_00a62220(uVar2);
      if ((char)uVar2 != '\0') {
        if (REFG(char, 0x14ab058) == '\0') {
          F_00a7ef20(&REFG(char, 0x14ab058) GEN_EDX_ARG,1,0,param_4);
        }
        F_005372b0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
        goto LAB_00a7ee70;
      }
    }
    F_00a7d290(0x233,0,0,0,0,REFG(float, 0x10916ec));
    return 0;
  }
LAB_00a7ee70: ;
  *param_1 = param_2;
  if (param_3 != '\0') {
    F_00a51200(1,(uint)param_2,uVar1,param_4 & 0xff,0);
  }
  return 1;
}

/* ref: FUN_00a7eea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a7eea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa7eea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined3 extraout_var_00 = 0;
  float10 fVar3;
  
  if (!(*(float *)&REFG(undefined, 0x1088114) < REFG(float, 0x14ab05c))) {
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_FWD,0x38);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      if ((char)param_1 == '\x01') {
        uVar2 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,0x54);
        fVar3 = (float10)*((int *)GEN_TOP((uVar2 + 0x14)));
        if (*((int *)GEN_TOP((uVar2 + 0x14))) < 0) {
          fVar3 = GEN_X87(fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110));
        }
        *(float *)&REFG(undefined, 0x14ab060) = (float)fVar3;
        REFG(undefined4, 0x14ab064) = 1;
      }
      bVar1 = F_00a7ede0(this GEN_EDX_ARG,(char)param_1,1,1);
      return CONCAT31(extraout_var_00,bVar1);
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00a7ef20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a7ef20(GEN_P(byte * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa7ef20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  if (*param_1 != (byte)param_2) {
    *param_1 = (byte)param_2;
    F_00aa6f20(iVar1 GEN_EDX_FWD,(byte)param_2,(byte)param_4);
    if (param_3 != '\0') {
      F_00a51200(0,(uint)(byte)param_2,(uint)(byte)param_4,0,0);
    }
    *(undefined4 *)(param_1 + 4) = GEN_FLT_TO(*(undefined4 *)(param_1 + 4), REFG(float, 0x1087f04));
    if (((byte)param_2 == 0) && (REFG(char, 0x14ab068) == '\x01')) {
      F_005339c0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
      REFG(char, 0x14ab068) = '\0';
    }
  }
  return 1;
}

/* ref: FUN_00a7efa0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a7efa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa7efa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  byte bVar2;
  
  if ((!GEN_ISNAN(*((float *)GEN_TOP(((int)this + 4)))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(*((float *)GEN_TOP(((int)this + 4))) <= *(float *)&REFG(undefined, 0x1088114))) {
    return 0;
  }
  if ((byte)param_1 == 0) {
    bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_FWD,0x36);
    if (bVar2 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x36);
      return 0;
    }
  }
  else {
    bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x35);
    if (bVar2 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x35);
      return 0;
    }
  }
  iVar1 = REFG(int, 0x1379694);
  if ((REFG(int, 0x1379694) != 0) && (*(byte *)this != (byte)param_1)) {
    *(byte *)this = (byte)param_1;
    F_00aa6f20(iVar1 GEN_EDX_ARG,(byte)param_1,1);
    F_00a51200(0,(uint)(byte)param_1,1,0,0);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 4))), REFG(float, 0x1087f04));
    if (((byte)param_1 == 0) && (REFG(char, 0x14ab068) == '\x01')) {
      F_005339c0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
      REFG(char, 0x14ab068) = '\0';
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  return 1;
}

/* ref: FUN_00a7f070 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a7f070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa7f070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x12c, 4, 4);
  undefined1 * puVar1;
  undefined1 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte * pbVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint * puVar11;
  int * piVar12;
  uint uVar13;
  int iVar14;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x124)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x128));
  uVar4 = F_00a4ffd0();
  (*(byte *)(gen_frame + 0x7)) = 0;
  do {
    if (*((short *)GEN_TOP((uVar4 + 0x13b8 + (uint)(*(byte *)(gen_frame + 0x7)) * 0x10))) != 0) {
      F_00a8a4c0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      uVar8 = (uint)*((ushort *)GEN_TOP((uVar4 + (uint)(*(byte *)(gen_frame + 0x7)) * 0x10 + 0x13b8)));
      iVar5 = *((int *)GEN_TOP(((int)this + 0xd8)));
      puVar11 = ((uint *)GEN_TOP(((int)this + 0xd8)));
      uVar13 = 0;
      (*(uint *)(gen_frame + 0x5c)) = uVar8;
      (*(undefined4 *)(gen_frame + 0x11c)) = 1;
      if (iVar5 != *((int *)GEN_TOP(((int)this + 0xdc)))) {
        do {
          if (uVar8 < *((uint *)GEN_TOP((iVar5 + 0x54)))) {
            uVar8 = *puVar11;
            if (*((int *)GEN_TOP(((int)this + 0xdc))) == *((int *)GEN_TOP(((int)this + 0xe0)))) {
              iVar10 = (int)(*((int *)GEN_TOP(((int)this + 0xdc))) - uVar8) / 0x11c;
              if (iVar10 == -1) goto LAB_00a7f3d1;
              uVar6 = (int)(*((int *)GEN_TOP(((int)this + 0xe0))) - *puVar11) / 0x11c;
              uVar9 = iVar10 + 1;
              if (uVar6 < uVar9) {
                if (-(uVar6 >> 1) - 1 < uVar6) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = uVar6 + (uVar6 >> 1);
                }
                if (uVar6 < uVar9) {
                  uVar6 = uVar9;
                }
                F_00a92850(puVar11 GEN_EDX_ARG,uVar6);
              }
            }
            if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xdc))) != ((undefined *)GEN_TOP(0x0))) {
              F_00a88c70(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xdc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
            }
            *((int *)GEN_TOP(((int)this + 0xdc))) = *((int *)GEN_TOP(((int)this + 0xdc))) + 0x11c;
            iVar10 = *((int *)GEN_TOP(((int)this + 0xdc)));
            iVar14 = ((int)(iVar5 - uVar8) / 0x11c) * 0x11c + *puVar11;
            iVar5 = iVar10 - 0x11c;
            if ((iVar14 != iVar5) && (iVar5 != iVar10)) {
              F_00a90b90(iVar14,iVar5,iVar10,0,0);
            }
            break;
          }
          iVar5 = iVar5 + 0x11c;
          uVar13 = uVar13 + 1;
        } while (iVar5 != *((int *)GEN_TOP(((int)this + 0xdc))));
      }
      if ((uint)((int)(*((int *)GEN_TOP(((int)this + 0xdc))) - *puVar11) / 0x11c) <= uVar13) {
        puVar1 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0xdc)));
        if ((((undefined1 *)(gen_frame + 0x8)) < puVar1) && (puVar2 = ((undefined1 *)GEN_TOP(*puVar11)), puVar2 <= ((undefined1 *)(gen_frame + 0x8)))) {
          if (puVar1 == *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0xe0)))) {
            iVar5 = (int)((int)puVar1 - *puVar11) / 0x11c;
            if (iVar5 == -1) {
LAB_00a7f3d1: ;
                    
              F_00c4579a(((char *)REFP(0x108497c)));
            }
            uVar8 = (int)((int)*((undefined1 * PTR32 *)GEN_TOP(((int)this + 0xe0))) - *puVar11) / 0x11c;
            uVar13 = iVar5 + 1;
            if (uVar8 < uVar13) {
              if (-(uVar8 >> 1) - 1 < uVar8) {
                uVar8 = 0;
              }
              else {
                uVar8 = uVar8 + (uVar8 >> 1);
              }
              if (uVar8 < uVar13) {
                uVar8 = uVar13;
              }
              F_00a92850(puVar11 GEN_EDX_ARG,uVar8);
            }
          }
          if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xdc))) != ((undefined *)GEN_TOP(0x0))) {
            F_00a88c70(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xdc))) GEN_EDX_ARG,
                         (((int)((undefined1 *)(gen_frame + 0x8)) - (int)puVar2) / 0x11c) * 0x11c + *puVar11);
          }
        }
        else {
          if (puVar1 == *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0xe0)))) {
            iVar5 = (int)((int)puVar1 - *puVar11) / 0x11c;
            if (iVar5 == -1) goto LAB_00a7f3d1;
            uVar8 = (int)((int)*((undefined1 * PTR32 *)GEN_TOP(((int)this + 0xe0))) - *puVar11) / 0x11c;
            uVar13 = iVar5 + 1;
            if (uVar8 < uVar13) {
              if (-(uVar8 >> 1) - 1 < uVar8) {
                uVar8 = 0;
              }
              else {
                uVar8 = uVar8 + (uVar8 >> 1);
              }
              if (uVar8 < uVar13) {
                uVar8 = uVar13;
              }
              F_00a92850(puVar11 GEN_EDX_ARG,uVar8);
            }
          }
          if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xdc))) != ((undefined *)GEN_TOP(0x0))) {
            F_00a88c70(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xdc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
          }
        }
        *((int *)GEN_TOP(((int)this + 0xdc))) = *((int *)GEN_TOP(((int)this + 0xdc))) + 0x11c;
      }
      F_0042c880(((undefined1 *)(gen_frame + 0xc4)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    }
    (*(byte *)(gen_frame + 0x7)) = (*(byte *)(gen_frame + 0x7)) + 1;
    if (0x1d < (*(byte *)(gen_frame + 0x7))) {
      pbVar7 = ((byte *)GEN_TOP((uVar4 + 0x1895)));
      (*(int *)(gen_frame + 0x0)) = 5;
      do {
        if (pbVar7[-1] == 1) {
          iVar10 = *((int *)GEN_TOP(((int)this + 0xdc))) - *((int *)GEN_TOP(((int)this + 0xd8)));
          iVar5 = iVar10 >> 0x1f;
          iVar10 = iVar10 / 0x11c + iVar5;
          uVar8 = 0;
          if (iVar10 != iVar5) {
            puVar11 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd8))) + 0x54)));
            do {
              if (*puVar11 == (uint)*((ushort *)GEN_TOP((uVar4 + 0x13b8 + (uint)*pbVar7 * 0x10)))) {
                *((undefined1 *)GEN_TOP((uVar8 * 0x11c + 0x58 + *((int *)GEN_TOP(((int)this + 0xd8)))))) = 1;
                break;
              }
              uVar8 = uVar8 + 1;
              puVar11 = puVar11 + 0x47;
            } while (uVar8 < (uint)(iVar10 - iVar5));
          }
        }
        pbVar7 = pbVar7 + 8;
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
        if ((*(int *)(gen_frame + 0x0)) == 0) {
          iVar5 = (*((int *)GEN_TOP(((int)this + 0xdc))) - *((int *)GEN_TOP(((int)this + 0xd8)))) / 0x11c;
          *((int *)GEN_TOP(((int)this + 0x78))) = iVar5;
          if (iVar5 != 0) {
            *((undefined4 *)GEN_TOP(((int)this + 0x3a58))) = 0;
            *((undefined4 *)GEN_TOP(((int)this + 0x3a5c))) = 0;
            *((undefined4 *)GEN_TOP(((int)this + 0x39b4))) = 2;
            uVar4 = F_00a7dfc0(this GEN_EDX_ARG);
            return uVar4;
          }
          puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x39bc)));
          uVar4 = 0;
          if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
            *((undefined4 *)GEN_TOP(((int)this + 0x39bc))) = 0;
          }
          *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 0;
          if (*((char *)GEN_TOP(((int)this + 0x3a67))) == '\0') {
            if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
              piVar12 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
            }
            else {
              piVar12 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0)));
            }
            if (piVar12 != ((int *)GEN_TOP(0x0))) {
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 4))))(piVar12 GEN_EDX_ARG,10);
            }
          }
          else if (*((char *)GEN_TOP(((int)this + 0x3aae))) == '\0') {
            piVar12 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3a9c)));
            if (piVar12 != ((int *)GEN_TOP(0x0))) {
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 4))))(piVar12 GEN_EDX_ARG,0xb);
              *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 0;
              return uVar4;
            }
          }
          else {
            piVar12 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3aa0)));
            if (piVar12 != ((int *)GEN_TOP(0x0))) {
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 4))))(piVar12 GEN_EDX_ARG,0xb);
              *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 0;
              return uVar4;
            }
          }
          *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 0;
          return uVar4;
        }
      } while( true );
    }
  } while( true );
}

/* ref: Global::ReadPlayerStatus */
GEN_OWN_GS GEN_FRAME unsigned int GEN_THISCALL F_00a7f520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa7f520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  uint * puVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined2 * puVar8;
  uint uVar9;
  undefined4 * puVar10;
  undefined2 * puVar11;
  int * piVar12;
  undefined * this_00;
  int iVar13;
  uint uVar14;
  undefined2 * puVar15;
  undefined4 * puVar16;
  bool bVar17;
  undefined * puVar18;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  (*(undefined2 * PTR32 *)(gen_frame + 0x4)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = param_1;
  F_005d4dc0();
  *(undefined1 *)this = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_1[1];
  puVar10 = param_1 + 0xd;
  puVar16 = ((undefined4 *)GEN_TOP(((int)this + 1)));
  for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
    *puVar16 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar16 = puVar16 + 1;
  }
  uVar9 = F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1 + 0xd,REFG(undefined4, 0x108cc50));
  F_00a9c0d0(0,uVar9);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  puVar16 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
  puVar8 = (*(undefined2 * PTR32 *)(gen_frame + 0x4));
  *((undefined4 *)GEN_TOP(((int)(*(undefined2 * PTR32 *)(gen_frame + 0x4)) + 0x41))) = (*(undefined4 * PTR32 *)(gen_frame + 0x8))[0x15];
  *((undefined4 *)GEN_TOP(((int)(*(undefined2 * PTR32 *)(gen_frame + 0x4)) + 0x45))) = (*(undefined4 * PTR32 *)(gen_frame + 0x8))[0x16];
  *((undefined4 *)GEN_TOP(((int)(*(undefined2 * PTR32 *)(gen_frame + 0x4)) + 0x49))) = (*(undefined4 * PTR32 *)(gen_frame + 0x8))[0x17];
  *((undefined4 *)GEN_TOP(((int)(*(undefined2 * PTR32 *)(gen_frame + 0x4)) + 0x4d))) = (*(undefined4 * PTR32 *)(gen_frame + 0x8))[0x18];
  *((undefined1 *)GEN_TOP(((int)(*(undefined2 * PTR32 *)(gen_frame + 0x4)) + 0x51))) = *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 0x19);
  bVar4 = *(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 3);
  *((byte *)GEN_TOP(((int)(*(undefined2 * PTR32 *)(gen_frame + 0x4)) + 0x62))) = bVar4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = ((undefined4 *)GEN_TOP((uint)bVar4));
  F_00a9c160(0x46,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  *((undefined1 *)GEN_TOP(((int)puVar8 + 99))) = *((undefined1 *)GEN_TOP(((int)puVar16 + 0xd)));
  bVar4 = *((byte *)GEN_TOP(((int)puVar16 + 0xe)));
  *((byte *)GEN_TOP(((int)puVar8 + 0x61))) = bVar4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = ((undefined4 *)GEN_TOP((uint)bVar4));
  F_00a9c160(3,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  bVar4 = *((byte *)GEN_TOP(((int)puVar16 + 0xf)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = ((undefined4 *)GEN_TOP((uint)bVar4));
  *((byte *)GEN_TOP(((int)puVar8 + 100))) = bVar4;
  F_00a9c160(0x43,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined2 * PTR32 *)(gen_frame + 0x4)) = ((undefined2 *)GEN_TOP(((int)puVar8 + 0x66)));
  uVar9 = (int)puVar16 - (int)puVar8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = ((undefined4 *)GEN_TOP(0x0));
  puVar10 = ((undefined4 *)GEN_TOP(((int)puVar8 + 0x8c)));
  (*(uint *)(gen_frame + 0x0)) = uVar9;
  do {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x8)) < ((undefined4 *)GEN_TOP(0x13))) {
      *(*(undefined2 * PTR32 *)(gen_frame + 0x4)) = *((undefined2 *)GEN_TOP((uVar9 + (int)(*(undefined2 * PTR32 *)(gen_frame + 0x4)))));
    }
    uVar7 = *((undefined4 *)GEN_TOP((uVar9 + (int)puVar10)));
    puVar2 = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 1)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar2;
    (*(undefined2 * PTR32 *)(gen_frame + 0x4)) = (*(undefined2 * PTR32 *)(gen_frame + 0x4)) + 1;
    *puVar10 = uVar7;
    puVar10 = puVar10 + 1;
  } while ((int)puVar2 < 0x13);
  *((undefined1 *)GEN_TOP(((int)puVar8 + 0xde))) = *(undefined1 *)(puVar16 + 4);
  *((undefined1 *)GEN_TOP(((int)puVar8 + 0xdb))) = *((undefined1 *)GEN_TOP(((int)puVar16 + 0x11)));
  uVar5 = *((undefined1 *)GEN_TOP(((int)puVar16 + 0x12)));
  *((undefined1 *)GEN_TOP(((int)puVar8 + 0xdd))) = *((undefined1 *)GEN_TOP(((int)puVar16 + 0x13)));
  *((undefined1 *)GEN_TOP(((int)puVar8 + 0xdc))) = uVar5;
  *((undefined1 *)GEN_TOP(((int)puVar8 + 0x22a))) = *(undefined1 *)(puVar16 + 5);
  bVar4 = *(byte *)(puVar16 + 5);
  bVar6 = *((byte *)GEN_TOP(((int)puVar16 + 0x15)));
  uVar9 = (uint)bVar4;
  if (uVar9 - 1 < 3) {
    *((byte *)GEN_TOP(((int)puVar8 + uVar9 + 0x22a))) = bVar6;
    if (bVar4 == *((byte *)GEN_TOP(((int)puVar8 + 0x22a)))) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = ((undefined4 *)GEN_TOP((uint)bVar6));
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = ((undefined4 *)GEN_TOP(0x0));
    }
    F_00a9c160(uVar9 + 0x32,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  }
  bVar4 = *((byte *)GEN_TOP(((int)puVar16 + 0x16)));
  *((byte *)GEN_TOP(((int)puVar8 + 0xdf))) = bVar4;
  (*(uint *)(gen_frame + 0x0)) = (uint)bVar4;
  F_00a9c160(0x45,&(*(uint *)(gen_frame + 0x0)));
  *((undefined1 *)GEN_TOP(((int)puVar8 + 0xe0))) = *((undefined1 *)GEN_TOP(((int)puVar16 + 0x19)));
  *((undefined4 *)GEN_TOP(((int)puVar8 + 0x254))) = puVar16[2];
  *((undefined1 *)GEN_TOP(((int)puVar8 + 0x22e))) = *(undefined1 *)(puVar16 + 6);
  uVar7 = puVar16[0xc1];
  uVar3 = puVar16[0xc2];
  *((undefined4 *)GEN_TOP(((int)puVar8 + 0x240))) = puVar16[0xc0];
  *((undefined4 *)GEN_TOP(((int)puVar8 + 0x244))) = uVar7;
  *((undefined4 *)GEN_TOP(((int)puVar8 + 0x248))) = uVar3;
  *((undefined1 *)GEN_TOP(((int)puVar8 + 0x250))) = 0;
  *((undefined1 *)GEN_TOP(((int)puVar8 + 0x22f))) = *(undefined1 *)(puVar16 + 0x3d);
  *((undefined1 *)GEN_TOP(((int)puVar8 + 0x230))) = *((undefined1 *)GEN_TOP(((int)puVar16 + 0xf5)));
  uVar9 = 0;
  *((undefined1 *)GEN_TOP(((int)puVar8 + 0x231))) = *((undefined1 *)GEN_TOP(((int)puVar16 + 0xf6)));
  bVar17 = true;
  do {
    if (bVar17) {
      (&REFG(undefined1, 0x14b4ec0))[(int)(uVar9)] = *((undefined1 *)GEN_TOP(((int)puVar16 + uVar9 + 0xd8)));
    }
    uVar9 = uVar9 + 1;
    bVar17 = uVar9 < 0x10;
  } while ((int)uVar9 < 0x10);
  uVar9 = 0;
  bVar17 = true;
  do {
    if (bVar17) {
      (&REFG(undefined1, 0x14b4ed0))[(int)(uVar9)] = *((undefined1 *)GEN_TOP(((int)puVar16 + uVar9 + 0xe8)));
    }
    uVar9 = uVar9 + 1;
    bVar17 = uVar9 < 0xc;
  } while ((int)uVar9 < 0xc);
  uVar9 = 0;
  bVar17 = true;
  do {
    if (bVar17) {
      (&REFG(undefined1, 0x14b4edc))[(int)(uVar9)] = *((undefined1 *)GEN_TOP(((int)puVar16 + uVar9 + 0x287)));
    }
    uVar9 = uVar9 + 1;
    bVar17 = uVar9 < 0x20;
  } while ((int)uVar9 < 0x20);
  uVar9 = 0;
  bVar17 = true;
  do {
    if (bVar17) {
      (&REFG(undefined1, 0x14b4efc))[(int)(uVar9)] = *((undefined1 *)GEN_TOP(((int)puVar16 + uVar9 + 0x2a7)));
    }
    uVar9 = uVar9 + 1;
    bVar17 = uVar9 < 0x10;
  } while ((int)uVar9 < 0x10);
  REFG(undefined4, 0x14b4f0c) = *((undefined1 *)GEN_TOP(((int)puVar16 + 0x2b7)));
  REFG(undefined4, 0x14b4f0d) = *(undefined1 *)(puVar16 + 0xae);
  REFG(undefined4, 0x14b4f0e) = *((undefined1 *)GEN_TOP(((int)puVar16 + 0x2b9)));
  REFG(undefined4, 0x14b4f0f) = *((undefined1 *)GEN_TOP(((int)puVar16 + 0x2ba)));
  REFG(undefined4, 0x14b4f10) = *((undefined1 *)GEN_TOP(((int)puVar16 + 699)));
  REFG(undefined4, 0x14b4f11) = *(undefined1 *)(puVar16 + 0xaf);
  REFG(undefined4, 0x14b4f12) = *((undefined1 *)GEN_TOP(((int)puVar16 + 0x2bd)));
  REFG(undefined4, 0x14b4f13) = *((undefined1 *)GEN_TOP(((int)puVar16 + 0x2be)));
  uVar9 = 0;
  bVar17 = true;
  do {
    if (bVar17) {
      (&REFG(undefined1, 0x14b4f14))[(int)(uVar9)] = *((undefined1 *)GEN_TOP(((int)puVar16 + uVar9 + 0x2bf)));
    }
    uVar9 = uVar9 + 1;
    bVar17 = uVar9 < 0x40;
  } while ((int)uVar9 < 0x40);
  F_00a6e6a0(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG);
  F_00ab5410(&REFG(undefined, 0x14b5268) GEN_EDX_ARG,(int)puVar16 + 0xf7,(int)puVar16 + 0x237);
  *((undefined1 *)GEN_TOP(((int)puVar8 + 600))) = *((undefined1 *)GEN_TOP(((int)puVar16 + 0x317)));
  *((undefined1 *)GEN_TOP(((int)puVar8 + 0x259))) = *(undefined1 *)(puVar16 + 0xc6);
  *((undefined1 *)GEN_TOP(((int)puVar8 + 0x25a))) = *((undefined1 *)GEN_TOP(((int)puVar16 + 0x319)));
  *((undefined1 *)GEN_TOP(((int)puVar8 + 0x25b))) = *((undefined1 *)GEN_TOP(((int)puVar16 + 0x31a)));
  *((undefined4 *)GEN_TOP(((int)puVar8 + 0x268))) = puVar16[10];
  uVar9 = 0;
  do {
    uVar14 = uVar9 >> 2;
    (*(uint *)(gen_frame + 0x0)) = uVar14;
    bVar4 = (byte)uVar9;
    iVar13 = uVar9 + 0x31b;
    uVar9 = uVar9 + 1;
    puVar1 = ((uint *)GEN_TOP(((int)puVar8 + uVar14 * 4 + 0x25c)));
    *puVar1 = *puVar1 | (uint)*((byte *)GEN_TOP(((int)puVar16 + iVar13))) <<
                        (('\x03' - (bVar4 & 3)) * '\b' & 0x1f);
  } while ((int)uVar9 < 0xb);
  *((undefined1 *)GEN_TOP(((int)puVar8 + 0x26d))) = *((undefined1 *)GEN_TOP(((int)puVar16 + 0x33e)));
  *((undefined1 *)GEN_TOP(((int)puVar8 + 0x26e))) = *((undefined1 *)GEN_TOP(((int)puVar16 + 0x33f)));
  *((undefined1 *)GEN_TOP(((int)puVar8 + 0x26f))) = *(undefined1 *)(puVar16 + 0xd0);
  *((undefined1 *)GEN_TOP(((int)puVar8 + 0x270))) = *((undefined1 *)GEN_TOP(((int)puVar16 + 0x341)));
  puVar15 = ((undefined2 *)GEN_TOP(((int)puVar8 + 0x296)));
  puVar11 = ((undefined2 *)GEN_TOP(((int)puVar16 + 0x3b2)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = ((undefined4 *)GEN_TOP(0x12));
  do {
    puVar15[-0x12] = puVar11[-0x12];
    *puVar15 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar15 = puVar15 + 1;
    puVar10 = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) - 1)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar10;
  } while (puVar10 != ((undefined4 *)GEN_TOP(0x0)));
  iVar13 = 0;
  do {
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar13 + 0x2ba))) = *((undefined1 *)GEN_TOP(((int)puVar16 + iVar13 + 0x374)));
    iVar13 = iVar13 + 1;
  } while (iVar13 < 0x19);
  iVar13 = 0;
  do {
    *((undefined1 *)GEN_TOP(((int)puVar8 + iVar13 + 0x2d3))) = *((undefined1 *)GEN_TOP(((int)puVar16 + iVar13 + 0x342)));
    iVar13 = iVar13 + 1;
  } while (iVar13 < 0x32);
  *((undefined4 *)GEN_TOP(((int)puVar8 + 0x308))) = puVar16[0xb];
  *((undefined4 *)GEN_TOP(((int)puVar8 + 0x30c))) = puVar16[0xc];
  piVar12 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  puVar18 = &REFG(undefined, 0x14a9e40);
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 0x30))))(piVar12 GEN_EDX_ARG)));
  F_0043b380(this_00 GEN_EDX_ARG,puVar18);
  return;
}

/* ref: FUN_00a7f9c0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a7f9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa7f9c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = *((undefined1 *)GEN_TOP((param_1 + 0x30c)));
  *((undefined1 *)GEN_TOP(((int)this + 0xd))) = *((undefined1 *)GEN_TOP((param_1 + 0x30d)));
  *((undefined1 *)GEN_TOP(((int)this + 0xe))) = *((undefined1 *)GEN_TOP((param_1 + 0x30e)));
  *((undefined1 *)GEN_TOP(((int)this + 0xf))) = *((undefined1 *)GEN_TOP((param_1 + 0x30f)));
  *((undefined1 *)GEN_TOP(((int)this + 0x10))) = *((undefined1 *)GEN_TOP((param_1 + 0x310)));
  *((undefined1 *)GEN_TOP(((int)this + 0x11))) = *((undefined1 *)GEN_TOP((param_1 + 0x311)));
  *((undefined1 *)GEN_TOP(((int)this + 0x12))) = *((undefined1 *)GEN_TOP((param_1 + 0x312)));
  *((undefined1 *)GEN_TOP(((int)this + 0x13))) = *((undefined1 *)GEN_TOP((param_1 + 0x313)));
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = *((undefined1 *)GEN_TOP((param_1 + 0x314)));
  *((undefined1 *)GEN_TOP(((int)this + 0x15))) = *((undefined1 *)GEN_TOP((param_1 + 0x315)));
  *((undefined1 *)GEN_TOP(((int)this + 0x16))) = *((undefined1 *)GEN_TOP((param_1 + 0x316)));
  F_00c49908((int)this + 0x17,0x15,param_1 + 0x326);
  uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1 + 0x326,REFG(undefined4, 0x108cc50));
  piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG)));
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG)));
  if ((uint)piVar4[4] < 0x37) {
    F_00494140(piVar4 GEN_EDX_ARG,0x37);
  }
  piVar6 = ((int *)GEN_TOP(0x0));
  if ((((int *)GEN_TOP(*piVar4)) != ((int *)GEN_TOP(0x0))) &&
     (puVar2 = *((undefined4 * PTR32 *)GEN_TOP(*piVar4)), puVar2 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar6 = ((int *)GEN_TOP(*puVar2));
  }
  uVar5 = piVar4[3] + 0x36;
  if (((piVar6 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*piVar6)) == ((int *)GEN_TOP(0x0)))) ||
     (piVar4 = *((int * PTR32 *)GEN_TOP(*piVar6)), piVar4 == ((int *)GEN_TOP(0x0)))) {
    iVar7 = 0;
  }
  else {
    iVar7 = *piVar4;
  }
  if (*((uint *)GEN_TOP((iVar7 + 8))) <= uVar5) {
    uVar5 = uVar5 - *((uint *)GEN_TOP((iVar7 + 8)));
  }
  F_00490f90(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar7 + 4))) + uVar5 * 4))) GEN_EDX_ARG,uVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = *((undefined4 *)GEN_TOP((param_1 + 0x24)));
  *((undefined1 *)GEN_TOP(((int)this + 0x30))) = *((undefined1 *)GEN_TOP((param_1 + 0x1b)));
  *((undefined1 *)GEN_TOP(((int)this + 0x31))) = *((undefined1 *)GEN_TOP((param_1 + 0x1c)));
  *((undefined1 *)GEN_TOP(((int)this + 0x32))) = *((undefined1 *)GEN_TOP((param_1 + 0x33b)));
  *((undefined1 *)GEN_TOP(((int)this + 0x33))) = *((undefined1 *)GEN_TOP((param_1 + 0x33c)));
  *((undefined1 *)GEN_TOP(((int)this + 0x34))) = *((undefined1 *)GEN_TOP((param_1 + 0x33d)));
  *((undefined1 *)GEN_TOP(((int)this + 0x35))) = *((undefined1 *)GEN_TOP((param_1 + 0x1d)));
  bVar1 = *((byte *)GEN_TOP((param_1 + 0x1a)));
  uVar3 = (uint)bVar1;
  if (*((byte *)GEN_TOP(((int)this + 0x36))) != bVar1) {
    *((byte *)GEN_TOP(((int)this + 0x36))) = bVar1;
    uVar3 = F_00a6fbc0(&REFG(undefined, 0x14ab740) GEN_EDX_ARG,1,3);
  }
  return uVar3;
}

/* ref: FUN_00a7fb60 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a7fb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa7fb60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  
  piVar2 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) != ((int *)GEN_TOP(0x0))) {
    if (0.0 < *((float *)GEN_TOP(((int)this + 4)))) {
      fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 4))) -
                     (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))))));
      *((float *)GEN_TOP(((int)this + 4))) = fVar1;
      if ((float10)fVar1 < (float10)0) {
        *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
      }
    }
    uVar4 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_FWD,0x53);
    if (((*((int *)GEN_TOP((uVar4 + 0x14))) != 0) && ((*((byte *)GEN_TOP(((int)piVar2 + 0x2dd2))) & 2) == 0)) &&
       (REFG(char, 0x14ab068) == '\0')) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xd8))))(piVar2 GEN_EDX_ARG);
      if (*((int *)GEN_TOP((uVar4 + 0x40))) == 0) {
        bVar3 = F_00ac2f20();
        if ((bVar3 == 0) && (*((char *)GEN_TOP(((int)this + 0xc))) == '\x01')) {
          fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 8))) -
                         (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))))));
          *((float *)GEN_TOP(((int)this + 8))) = fVar1;
          if ((float10)fVar1 <= (float10)0) {
            bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x36);
            if (bVar3 == 1) {
              bVar3 = F_00a7efa0(this GEN_EDX_ARG,0);
              if (bVar3 != 0) {
                *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
                *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
              }
            }
          }
        }
      }
    }
  }
  return;
}

/* ref: FUN_00a7fc50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a7fc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa7fc50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e796c));
  F_0042b630((int)this + 4 GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7984));
  F_0042b630((int)this + 0x80 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  F_00a962b0(((undefined *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG);
  F_00a9b800(((undefined *)GEN_TOP(((int)this + 0xf8))) GEN_EDX_ARG);
  F_00a9b800(((undefined *)GEN_TOP(((int)this + 0x120))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x148))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x150))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x158))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x15c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x160))) = 0;
  F_00a9b780(((undefined *)GEN_TOP(((int)this + 0x168))) GEN_EDX_ARG);
  F_00a96120(((undefined *)GEN_TOP(((int)this + 0x17c))) GEN_EDX_ARG);
  F_00a8a5d0(((undefined *)GEN_TOP(((int)this + 0xc30))) GEN_EDX_ARG);
  F_00a8a630(((undefined *)GEN_TOP(((int)this + 0x3158))) GEN_EDX_ARG);
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x399c)));
  *puVar1 = 0;
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,800)));
  *puVar1 = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar1)) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x39a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x39a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x39a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x39ac))) = 0;
  F_0042b630((int)this + 0x3a00 GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)this + 0x3a67))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3a9c))) = 0;
  F_00a66e30(this GEN_EDX_ARG);
  F_00a85260(((undefined *)GEN_TOP(((int)this + 0xc30))) GEN_EDX_ARG);
  F_00a962b0(((undefined *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x168))) = 0;
  F_00a97b90(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x170))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x170))) + 4))) = *((int *)GEN_TOP(((int)this + 0x170)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 0x170))))) = *((undefined4 *)GEN_TOP(((int)this + 0x170)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x170))) + 8))) = *((int *)GEN_TOP(((int)this + 0x170)));
  *((undefined4 *)GEN_TOP(((int)this + 0x174))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  F_00a93600(((undefined4 *)GEN_TOP(((int)this + 0x100))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 0x100))),
               *((undefined4 *)GEN_TOP(((int)this + 0x104))));
  F_00a97d20(((undefined *)GEN_TOP(((int)this + 0x110))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x114))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x114))) + 4))) = *((int *)GEN_TOP(((int)this + 0x114)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 0x114))))) = *((undefined4 *)GEN_TOP(((int)this + 0x114)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x114))) + 8))) = *((int *)GEN_TOP(((int)this + 0x114)));
  *((undefined4 *)GEN_TOP(((int)this + 0x118))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3aa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3aa8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x3aac))) = 0;
  F_00a94c50(((undefined *)GEN_TOP(((int)this + 0x17c))) GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)this + 0x3a69))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x3aae))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 0;
  return (uint)this;
}

/* ref: FUN_00a7fe60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a7fe60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa7fe60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  int iVar2;
  undefined * pvVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7984));
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x3a00))) GEN_EDX_FWD);
  F_00a9c3c0(((undefined *)GEN_TOP(((int)this + 0x399c))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x399c))),8,800);
  *((undefined4 *)GEN_TOP(((int)this + 0x399c))) = 0;
  pvVar3 = ((undefined *)GEN_TOP(((int)this + 0x399c)));
  iVar2 = 0x17;
  do {
    pvVar3 = ((undefined *)GEN_TOP(((int)pvVar3 - 0x58)));
    F_0042c880(pvVar3 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  iVar2 = 0x17;
  pvVar3 = ((undefined *)GEN_TOP(((int)this + 0x315c)));
  do {
    F_0042c880(((undefined *)GEN_TOP(((int)pvVar3 - 0x134))) GEN_EDX_ARG);
    F_0042c880(((undefined *)GEN_TOP(((int)pvVar3 - 0x18c))) GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
    pvVar3 = ((undefined *)GEN_TOP(((int)pvVar3 - 0x18c)));
  } while (-1 < iVar2);
  F_00a95220(((undefined *)GEN_TOP(((int)this + 0x17c))) GEN_EDX_ARG);
  F_00a997c0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x170))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x170))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x170))),0xe4,800);
  iVar2 = *((int *)GEN_TOP(((int)this + 0x158)));
  if (iVar2 != 0) {
    F_00429760(iVar2,(*((int *)GEN_TOP(((int)this + 0x160))) - iVar2 >> 2) * 4,800);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x158))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x15c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x160))) = 0;
  F_0074d8a0(((undefined *)GEN_TOP(((int)this + 0x148))) GEN_EDX_ARG);
  F_00a99890(((undefined *)GEN_TOP(((int)this + 0x138))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x13c))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x13c))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x13c))),0x74,800);
  F_00a93680(((undefined *)GEN_TOP(((int)this + 0x128))) GEN_EDX_ARG);
  F_00a99890(((undefined *)GEN_TOP(((int)this + 0x110))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x114))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x114))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x114))),0x74,800);
  F_00a93680(((undefined *)GEN_TOP(((int)this + 0x100))) GEN_EDX_ARG);
  F_00a920d0(((undefined *)GEN_TOP(((int)this + 0xe8))) GEN_EDX_ARG);
  F_00a920d0(((undefined *)GEN_TOP(((int)this + 0xd8))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG);
  uVar1 = F_00a71520(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a80010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a80010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa80010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint in_EAX = 0;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  if (*((char *)GEN_TOP(((int)this + 0x3a65))) == '\0') {
    piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    in_EAX = 0;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar3 = 3;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar3)));
      in_EAX = 0;
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        in_EAX = F_0076ecb0(this_00 GEN_EDX_ARG,4);
        if ((char)in_EAX != '\0') {
          *((undefined1 *)GEN_TOP(((int)this + 0x3aae))) = 0;
          if (param_1 != 0) {
            *((int *)GEN_TOP(((int)this + 0x3a9c))) = param_1;
          }
          F_00a66e30(this GEN_EDX_ARG);
          *((int *)GEN_TOP(((int)this + 0x39fc))) = param_2;
          *((undefined1 *)GEN_TOP(((int)this + 0x3a65))) = 1;
          if (param_2 == 1) {
            F_00a94ee0(((undefined *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG);
            F_00a99470(((undefined *)GEN_TOP(((int)this + 0x168))) GEN_EDX_ARG);
            in_EAX = F_00a7f070(this GEN_EDX_ARG);
          }
          else {
            in_EAX = param_2 - 2;
            if (in_EAX == 0) {
              F_00a94f20(((undefined *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG);
              F_00a995a0(((undefined *)GEN_TOP(((int)this + 0x168))) GEN_EDX_ARG);
              uVar2 = F_00a7db00(this GEN_EDX_ARG);
              return uVar2;
            }
          }
        }
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00a800d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a800d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa800d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x3a9c)));
  if (uVar1 != 0) {
    if (*((char *)GEN_TOP(((int)this + 0x3a69))) == '\0') {
      uVar1 = F_00a80010(this GEN_EDX_FWD,uVar1,param_1);
    }
    else if (*((char *)GEN_TOP(((int)this + 0x3a65))) == '\0') {
      *((undefined1 *)GEN_TOP(((int)this + 0x3aae))) = 0;
      uVar1 = F_00a77420(this GEN_EDX_ARG,uVar1);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00a80110 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a80110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa80110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e796c));
  F_0042b630((int)this + 4 GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7990));
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  F_00a950c0(((undefined *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG);
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x1a8)));
  *puVar1 = 0;
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,800)));
  *puVar1 = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar1)) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b8))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x10e7894));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c4))) = this;
  *((undefined4 *)GEN_TOP(((int)this + 0x200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x204))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x208))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x210))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x214))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x218))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x21c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x220))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x224))) = 0;
  F_00a73730(this GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)this + 0x1dd))) = 0;
  return (uint)this;
}

/* ref: FUN_00a801f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a801f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa801f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7990));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c0))) = (*(undefined * PTR32 (*)[3])REFP(0x10b8194));
  F_00a9c540(((undefined *)GEN_TOP(((int)this + 0x1a8))) GEN_EDX_FWD);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x1a8))),8,800);
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 0;
  F_00a93740(((undefined *)GEN_TOP(((int)this + 0x198))) GEN_EDX_ARG);
  uVar1 = F_00a71520(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a80250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a80250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa80250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  int in_ecx;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e796c));
  F_0042b630((int)this + 4 GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e799c));
  F_00a96330(((undefined *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG);
  F_00a8a6e0(((undefined *)GEN_TOP(((int)this + 0x5ec))) GEN_EDX_ARG);
  F_0042b630((int)this + 0xe44 GEN_EDX_ARG);
  in_ecx = (int)this + 0xeb0;
  local_8 = 2;
  do {
    F_0042b630(in_ecx GEN_EDX_ARG);
    in_ecx = in_ecx + 0x54;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0xfb4)));
  *puVar1 = 0;
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,800)));
  *puVar1 = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar1)) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xfb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc4))) = 0;
  F_00a73a30(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00a80310 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a80310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa80310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * pvVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e799c));
  F_00a9c480(((undefined *)GEN_TOP(((int)this + 0xfb4))) GEN_EDX_FWD);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0xfb4))),8,800);
  *((undefined4 *)GEN_TOP(((int)this + 0xfb4))) = 0;
  pvVar3 = ((undefined *)GEN_TOP(((int)this + 0xfac)));
  iVar2 = 2;
  do {
    pvVar3 = ((undefined *)GEN_TOP(((int)pvVar3 - 0x54)));
    F_0042c880(pvVar3 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xe44))) GEN_EDX_ARG);
  pvVar3 = ((undefined *)GEN_TOP(((int)this + 0xe30)));
  iVar2 = 0x17;
  do {
    pvVar3 = ((undefined *)GEN_TOP(((int)pvVar3 - 0x58)));
    F_0042c880(pvVar3 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00a95380(((undefined *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG);
  uVar1 = F_00a71520(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a803a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a803a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa803a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined * pvVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  
  if (REFG(int, 0x1379694) != 0) {
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    if ((*(uint *)&REFG(undefined, 0x14b5064) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14b5064) = *(uint *)&REFG(undefined, 0x14b5064) | 1;
      F_0042b630(&REFG(undefined, 0x14b5010) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c620)));
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x399c)));
    for (uVar12 = *((uint *)GEN_TOP(((int)this + 0x39a8)));
        uVar12 != *((int *)GEN_TOP(((int)this + 0x39ac))) + *((int *)GEN_TOP(((int)this + 0x39a8))); uVar12 = uVar12 + 1)
    {
      if (piVar1 == ((int *)GEN_TOP(0x0))) {
        iVar9 = 0;
      }
      else {
        iVar9 = *piVar1;
      }
      uVar4 = uVar12;
      if (*((uint *)GEN_TOP((iVar9 + 8))) <= uVar12) {
        uVar4 = uVar12 - *((uint *)GEN_TOP((iVar9 + 8)));
      }
      if (*((char *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar9 + 4))) + uVar4 * 4))) + 0x70))) == '\0') {
        F_0042aca0(&REFG(undefined, 0x14b5010) GEN_EDX_ARG);
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG)));
        if (piVar1 == ((int *)GEN_TOP(0x0))) {
          iVar9 = 0;
        }
        else {
          iVar9 = *piVar1;
        }
        uVar4 = uVar12;
        if (*((uint *)GEN_TOP((iVar9 + 8))) <= uVar12) {
          uVar4 = uVar12 - *((uint *)GEN_TOP((iVar9 + 8)));
        }
        if (piVar1 == ((int *)GEN_TOP(0x0))) {
          iVar8 = 0;
        }
        else {
          iVar8 = *piVar1;
        }
        uVar10 = uVar12;
        if (*((uint *)GEN_TOP((iVar8 + 8))) <= uVar12) {
          uVar10 = uVar12 - *((uint *)GEN_TOP((iVar8 + 8)));
        }
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))
                          (piVar5 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar8 + 4))) + uVar10 * 4))),
                           *((int *)GEN_TOP((*((int *)GEN_TOP((iVar9 + 4))) + uVar4 * 4))) + 0x54,&REFG(undefined, 0x14b5010));
        if (uVar4 == 1) {
          if (piVar1 == ((int *)GEN_TOP(0x0))) {
            iVar9 = 0;
          }
          else {
            iVar9 = *piVar1;
          }
          uVar4 = uVar12;
          if (*((uint *)GEN_TOP((iVar9 + 8))) <= uVar12) {
            uVar4 = uVar12 - *((uint *)GEN_TOP((iVar9 + 8)));
          }
          F_00a6c9b0(this GEN_EDX_ARG,1,&REFG(undefined, 0x14b5010),
                       *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar9 + 4))) + uVar4 * 4))) + 0x6c))));
          if (piVar1 == ((int *)GEN_TOP(0x0))) {
            iVar9 = 0;
          }
          else {
            iVar9 = *piVar1;
          }
          uVar4 = uVar12;
          if (*((uint *)GEN_TOP((iVar9 + 8))) <= uVar12) {
            uVar4 = uVar12 - *((uint *)GEN_TOP((iVar9 + 8)));
          }
          *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar9 + 4))) + uVar4 * 4))) + 0x70))) = 1;
        }
      }
    }
    iVar9 = *((int *)GEN_TOP(((int)this + 0x39ac)));
    while (iVar9 != 0) {
      uVar12 = *((uint *)GEN_TOP(((int)this + 0x39a8)));
      if (*((int * PTR32 *)GEN_TOP(((int)this + 0x399c))) == ((int *)GEN_TOP(0x0))) {
        iVar9 = 0;
      }
      else {
        iVar9 = **((int * PTR32 *)GEN_TOP(((int)this + 0x399c)));
      }
      if (*((uint *)GEN_TOP((iVar9 + 8))) <= uVar12) {
        uVar12 = uVar12 - *((uint *)GEN_TOP((iVar9 + 8)));
      }
      if ((*((char *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar9 + 4))) + uVar12 * 4))) + 0x70))) == '\0') ||
         (*((int *)GEN_TOP(((int)this + 0x39ac))) == 0)) break;
      pvVar6 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x39a0))) + *((int *)GEN_TOP(((int)this + 0x39a8))) * 4)));
      F_00492c50(((undefined *)GEN_TOP(((int)pvVar6 + 0x54))) GEN_EDX_ARG);
      F_00429760(*((undefined4 *)GEN_TOP(((int)pvVar6 + 0x54))),8,0x2c4);
      *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x54))) = 0;
      F_0042c880(pvVar6 GEN_EDX_ARG);
      *((int *)GEN_TOP(((int)this + 0x39a8))) = *((int *)GEN_TOP(((int)this + 0x39a8))) + 1;
      if (*((uint *)GEN_TOP(((int)this + 0x39a4))) <= *((uint *)GEN_TOP(((int)this + 0x39a8)))) {
        *((undefined4 *)GEN_TOP(((int)this + 0x39a8))) = 0;
      }
      piVar3 = ((int *)GEN_TOP(((int)this + 0x39ac)));
      *piVar3 = *piVar3 - 1;
      if (*piVar3 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x39a8))) = 0;
      }
      iVar9 = *((int *)GEN_TOP(((int)this + 0x39ac)));
    }
    if ((((*((int *)GEN_TOP(((int)this + 0x3aa4))) != 0) && (*((char *)GEN_TOP(((int)this + 0x3a65))) == '\0')) &&
        (REFG(int, 0x1379694) != 0)) && (bVar2 = F_006e4d80(), bVar2 != 0)) {
      pvVar6 = ((undefined *)GEN_TOP(F_006b8c00()));
      bVar2 = F_006def40(pvVar6 GEN_EDX_ARG);
      if (bVar2 != 0) {
        F_00a800d0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x3aa4))));
        *((undefined4 *)GEN_TOP(((int)this + 0x3aa4))) = 0;
      }
    }
    if (((*((char *)GEN_TOP(((int)this + 0x3a68))) != '\0') && (REFG(int * PTR32, 0x14b26a8) != ((int *)GEN_TOP(0x0)))) &&
       (uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14b26a8) + 8))))(REFG(int * PTR32, 0x14b26a8) GEN_EDX_ARG), (char)uVar12 != '\0')) {
      *((undefined1 *)GEN_TOP(((int)this + 0x3a68))) = 0;
      uVar12 = 0;
      puVar7 = REFG(undefined4 * PTR32, 0x14b2708);
      if (REFG(undefined4 * PTR32, 0x14b2708) != REFG(undefined4 * PTR32, 0x14b270c)) {
        do {
          *((undefined4 *)GEN_TOP(((int)this + uVar12 * 0x18 + 0xd00))) = *puVar7;
          *((undefined4 *)GEN_TOP(((int)this + uVar12 * 0x18 + 0xd04))) = puVar7[4];
          *((undefined4 *)GEN_TOP(((int)this + (uVar12 * 3 + 0x1a1) * 8))) = puVar7[5];
          *((undefined4 *)GEN_TOP(((int)this + uVar12 * 0x18 + 0xd0c))) = puVar7[6];
          *((undefined4 *)GEN_TOP(((int)this + uVar12 * 0x18 + 0xd10))) = puVar7[7];
          if ((*((byte *)GEN_TOP(((int)puVar7 + 0x32))) & 1) == 0) {
            uVar11 = puVar7[2];
          }
          else {
            uVar11 = 0;
          }
          *((undefined4 *)GEN_TOP(((int)this + uVar12 * 0x18 + 0xd14))) = uVar11;
          *((undefined4 *)GEN_TOP(((int)this + 0xcf4))) = puVar7[9];
          puVar7 = puVar7 + 0xd;
          uVar12 = (uint)(byte)((char)uVar12 + 1);
        } while (puVar7 != REFG(undefined4 * PTR32, 0x14b270c));
      }
      *((int *)GEN_TOP(((int)this + 0xdc0))) = ((int)REFG(undefined4 * PTR32, 0x14b270c) - (int)REFG(undefined4 * PTR32, 0x14b2708)) / 0x34;
      F_00a78d80(this GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: FUN_00a806e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a806e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa806e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  undefined4 * puVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = F_00533b90(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD);
  if (uVar4 != *((uint *)GEN_TOP(((int)this + 0x908)))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x904))) = 0;
    F_00c48350(((undefined *)GEN_TOP(((int)this + 4))),0,0x900);
    *((undefined4 *)GEN_TOP(((int)this + 0x908))) = 0;
  }
  *((uint *)GEN_TOP(((int)this + 0x908))) = uVar4;
  if (0.0 < *((float *)GEN_TOP(((int)this + 0x1214)))) {
    fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x1214))) -
                   (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))))));
    *((float *)GEN_TOP(((int)this + 0x1214))) = fVar1;
    if ((float10)fVar1 < (float10)0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x1214))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x1210))) = 0;
    }
  }
  F_00a7fb60(((undefined *)GEN_TOP(((int)this + 0x1218))) GEN_EDX_ARG);
  F_00a6d9d0(((undefined *)GEN_TOP(((int)this + 0x1540))) GEN_EDX_ARG);
  if ((REFG(int, 0x1379694) != 0) && (*((char *)GEN_TOP((REFG(int, 0x1379694) + 0x188))) == '\x02')) {
    F_00a6efa0(((undefined *)GEN_TOP(((int)this + 0x15e8))) GEN_EDX_ARG);
  }
  F_00a6ee60(((undefined *)GEN_TOP(((int)this + 0x1564))) GEN_EDX_ARG);
  F_00a803a0(((undefined *)GEN_TOP(((int)this + 0x2448))) GEN_EDX_ARG);
  F_00a7eac0(((undefined *)GEN_TOP(((int)this + 0x5ef8))) GEN_EDX_ARG);
  F_00a7e840(((undefined *)GEN_TOP(((int)this + 0x6ec4))) GEN_EDX_ARG);
  F_00b9f970();
  if ((!GEN_ISNAN(*((float *)GEN_TOP(((int)this + 0x1748)))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(*((float *)GEN_TOP(((int)this + 0x1748))) <= *(float *)&REFG(undefined, 0x1088114))) {
    bVar3 = F_00ac36a0();
    if (bVar3 == 1) {
      fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x1748))) -
                     (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))))));
      *((float *)GEN_TOP(((int)this + 0x1748))) = fVar1;
      if ((float10)fVar1 < (float10)0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x1748))) = 0;
      }
    }
  }
  F_00b9cde0();
  bVar3 = F_00a6feb0(((undefined *)GEN_TOP(((int)this + 0xb074))) GEN_EDX_ARG);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x92e4))) != ((undefined *)GEN_TOP(0x0))) {
    bVar3 = F_00bc6220(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x92e4))) GEN_EDX_ARG);
    if ((bVar3 != 0) && (puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x92e4))), puVar2 != ((undefined4 *)GEN_TOP(0x0)))
       ) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      bVar3 = (byte)uVar4;
      *((undefined4 *)GEN_TOP(((int)this + 0x92e4))) = 0;
    }
  }
  if (0.0 < *((float *)GEN_TOP(((int)this + 0xb07c)))) {
    fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0xb07c))) -
                   (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))))));
    *((float *)GEN_TOP(((int)this + 0xb07c))) = fVar1;
    if ((float10)fVar1 <= (float10)0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xb07c))) = 0;
    }
  }
  return bVar3;
}

/* ref: FUN_00a808c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a808c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa808c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  int local_10;
  int local_c;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x1450))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0x14f4))) != 0) {
    piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14f0)));
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x4c))))(piVar4 GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x14f4))));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14f4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x14f4))) = 0;
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14f0))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0x1520))) != 0) {
    piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x151c)));
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x4c))))(piVar4 GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x1520))));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1520)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x1520))) = 0;
    }
  }
  piVar4 = ((int *)GEN_TOP(((int)this + 0x90)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1520))) = 0;
  local_10 = 0x1e;
  do {
    piVar4[-0x18] = 0;
    piVar4[-0x17] = 0;
    F_0042aca0(piVar4 - 0x16 GEN_EDX_ARG);
    if (piVar4[-1] != *piVar4) {
      *piVar4 = piVar4[-1];
    }
    *(undefined2 *)(piVar4 + 3) = 0;
    piVar4 = piVar4 + 0x1c;
    local_10 = local_10 - 1;
  } while (local_10 != 0);
  piVar4 = ((int *)GEN_TOP(((int)this + 0xdb0)));
  local_c = 0x10;
  do {
    piVar4[-0x18] = 0;
    piVar4[-0x17] = 0;
    F_0042aca0(piVar4 - 0x16 GEN_EDX_ARG);
    if (piVar4[-1] != *piVar4) {
      *piVar4 = piVar4[-1];
    }
    *(undefined2 *)(piVar4 + 3) = 0;
    piVar4 = piVar4 + 0x1c;
    local_c = local_c - 1;
  } while (local_c != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0x1454))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1458))) = 0;
  F_0042aca0((int)this + 0x145c GEN_EDX_ARG);
  if (*((int *)GEN_TOP(((int)this + 0x14b0))) != *((int *)GEN_TOP(((int)this + 0x14b4)))) {
    *((int *)GEN_TOP(((int)this + 0x14b4))) = *((int *)GEN_TOP(((int)this + 0x14b0)));
  }
  *((undefined2 *)GEN_TOP(((int)this + 0x14c0))) = 0;
  F_00a97b00(((undefined *)GEN_TOP(((int)this + 0x14cc))) GEN_EDX_ARG);
  F_00a8ff70(((undefined *)GEN_TOP(((int)this + 0x14d8))) GEN_EDX_ARG);
  F_00a97b00(((undefined *)GEN_TOP(((int)this + 0x14f8))) GEN_EDX_ARG);
  F_00a8ff70(((undefined *)GEN_TOP(((int)this + 0x1504))) GEN_EDX_ARG);
  F_00a97b00(((undefined *)GEN_TOP(((int)this + 0x1524))) GEN_EDX_ARG);
  F_00a9cb60(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  iVar3 = 1;
  do {
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP(((int)this + iVar3 * 8 + 0x28))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + iVar3 * 8 + 0x2c))) = 0;
  } while (-1 < iVar3);
  *((undefined4 *)GEN_TOP(((int)this + 0x14c4))) = 0;
  F_00a99750(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 4))) = *((int *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 0x14))))) = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((uint *)GEN_TOP((uVar2 + 8))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return uVar2;
}

/* ref: FUN_00a80b10 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a80b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa80b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  ulonglong uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1);
  F_004949f0(((undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,param_2);
  (*(undefined4 *)(gen_frame + 0x6c)) = param_3;
  (*(undefined1 *)(gen_frame + 0x70)) = 0;
  F_00a9d780(((undefined *)GEN_TOP(((int)this + 0x399c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_00492c50(((undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  F_00429760(((undefined4 *)(gen_frame + 0x54))[0],8,0x2c4);
  ((undefined4 *)(gen_frame + 0x54))[0] = 0;
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a80ba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a80ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa80ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xfc, 4, 4);
  byte bVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined * pvVar6;
  uint uVar7;
  undefined * pvVar8;
  ulonglong uVar9;
  
  ((int *)(gen_frame + 0xcc))[10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf8);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)GEN_TOP(0x0));
  piVar2 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar2;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x10));
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x2c)) = ((int *)GEN_TOP(0x0));
  pvVar8 = this;
  if (*((int *)GEN_TOP(((int)this + 0xc30))) != 0) {
    piVar2 = ((int *)GEN_TOP(((int)this + 0xcec)));
    (*(int * PTR32 *)(gen_frame + 0x30)) = piVar2;
    do {
      (*(int * PTR32 *)(gen_frame + 0x30)) = piVar2;
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      if ((char)piVar2[-0x2d] == '\0') {
        iVar3 = piVar2[-1];
      }
      else {
        iVar3 = *piVar2;
      }
      (*(int *)(gen_frame + 0xc0)) = 0;
      (*(int *)(gen_frame + 0xc0)) = iVar3;
      (*(int * PTR32 *)(gen_frame + 0xc4)) = &(*(int *)(gen_frame + 0xc0));
      (*(char *)(gen_frame + 0xc8)) = '\0';
      if ((*(uint *)(gen_frame + 0x18)) <= (*(int *)(gen_frame + 0x20)) + 1U) {
        F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,1);
      }
      uVar7 = (*(int *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0x1c));
      if ((*(uint *)(gen_frame + 0x18)) <= uVar7) {
        uVar7 = uVar7 - (*(uint *)(gen_frame + 0x18));
      }
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + uVar7 * 4))) == 0) {
        uVar4 = F_004296a0(0xc,0,0x2c4);
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + uVar7 * 4))) = uVar4;
      }
      piVar2 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + uVar7 * 4)));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        *piVar2 = 0;
        piVar2[1] = 0;
        *(undefined1 *)(piVar2 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0xc8)) != -1) && (piVar2 != &(*(int *)(gen_frame + 0xc0)))) {
          (*(int * PTR32 *)(gen_frame + 0x8)) = piVar2;
          (*(int * PTR32 *)(gen_frame + 0xc)) = (*(int * PTR32 *)(gen_frame + 0xc4));
          if ((*(char *)(gen_frame + 0xc8)) == '\0') {
            F_004919b0(&(*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
          }
          else if ((*(char *)(gen_frame + 0xc8)) == '\x01') {
            F_00491a60(&(*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
          }
        }
      }
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
      if ((*(int * PTR32 *)(gen_frame + 0xc4)) != ((int *)GEN_TOP(0x0))) {
        if (((*(char *)(gen_frame + 0xc8)) != '\0') && ((*(char *)(gen_frame + 0xc8)) == '\x01')) {
          pvVar8 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xc4))));
          *((int *)GEN_TOP(((int)pvVar8 + 0x54))) = *((int *)GEN_TOP(((int)pvVar8 + 0x54))) - 1;
          if (*((int *)GEN_TOP(((int)pvVar8 + 0x54))) < 1) {
            F_0042c880(pvVar8 GEN_EDX_ARG);
            F_00406ad0(pvVar8);
          }
        }
        (*(int * PTR32 *)(gen_frame + 0xc4)) = ((int *)GEN_TOP(0x0));
        (*(char *)(gen_frame + 0xc8)) = -1;
      }
      iVar3 = *(*(int * PTR32 *)(gen_frame + 0x30));
      (*(int *)(gen_frame + 0xb4)) = 0;
      (*(int *)(gen_frame + 0xb4)) = iVar3;
      (*(int * PTR32 *)(gen_frame + 0xb8)) = &(*(int *)(gen_frame + 0xb4));
      (*(char *)(gen_frame + 0xbc)) = '\0';
      if ((*(uint *)(gen_frame + 0x18)) <= (*(int *)(gen_frame + 0x20)) + 1U) {
        F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,1);
      }
      uVar7 = (*(int *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0x1c));
      if ((*(uint *)(gen_frame + 0x18)) <= uVar7) {
        uVar7 = uVar7 - (*(uint *)(gen_frame + 0x18));
      }
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + uVar7 * 4))) == 0) {
        uVar4 = F_004296a0(0xc,0,0x2c4);
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + uVar7 * 4))) = uVar4;
      }
      piVar2 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + uVar7 * 4)));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        *piVar2 = 0;
        piVar2[1] = 0;
        *(undefined1 *)(piVar2 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0xbc)) != -1) && (piVar2 != &(*(int *)(gen_frame + 0xb4)))) {
          (*(int * PTR32 *)(gen_frame + 0x0)) = piVar2;
          (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)(gen_frame + 0xb8));
          if ((*(char *)(gen_frame + 0xbc)) == '\0') {
            F_004919b0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          }
          else if ((*(char *)(gen_frame + 0xbc)) == '\x01') {
            F_00491a60(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          }
        }
      }
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
      if ((*(int * PTR32 *)(gen_frame + 0xb8)) != ((int *)GEN_TOP(0x0))) {
        if (((*(char *)(gen_frame + 0xbc)) != '\0') && ((*(char *)(gen_frame + 0xbc)) == '\x01')) {
          pvVar8 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xb8))));
          *((int *)GEN_TOP(((int)pvVar8 + 0x54))) = *((int *)GEN_TOP(((int)pvVar8 + 0x54))) - 1;
          if (*((int *)GEN_TOP(((int)pvVar8 + 0x54))) < 1) {
            F_0042c880(pvVar8 GEN_EDX_ARG);
            F_00406ad0(pvVar8);
          }
        }
        (*(int * PTR32 *)(gen_frame + 0xb8)) = ((int *)GEN_TOP(0x0));
        (*(char *)(gen_frame + 0xbc)) = -1;
      }
      F_0042cbc0(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x30)) - 0x2c);
      F_004949f0(((undefined4 *)(gen_frame + 0x88)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x10)));
      (*(int * PTR32 *)(gen_frame + 0xa0)) = (*(int * PTR32 *)(gen_frame + 0x2c));
      (*(undefined1 *)(gen_frame + 0xa4)) = 0;
      if (*((uint *)GEN_TOP(((int)this + 0x39a4))) <= *((int *)GEN_TOP(((int)this + 0x39ac))) + 1U) {
        F_00a92130(((undefined *)GEN_TOP(((int)this + 0x399c))) GEN_EDX_ARG,1);
      }
      uVar7 = *((int *)GEN_TOP(((int)this + 0x39a8))) + *((int *)GEN_TOP(((int)this + 0x39ac)));
      if (*((uint *)GEN_TOP(((int)this + 0x39a4))) <= uVar7) {
        uVar7 = uVar7 - *((uint *)GEN_TOP(((int)this + 0x39a4)));
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x39a0))) + uVar7 * 4))) == 0) {
        uVar4 = F_004296a0(0x74,0,800);
        *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x39a0))) + uVar7 * 4))) = uVar4;
      }
      pvVar8 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x39a0))) + uVar7 * 4)));
      if (pvVar8 != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(pvVar8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x34)));
        F_004949f0(((undefined *)GEN_TOP(((int)pvVar8 + 0x54))) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x88)));
        *((int * PTR32 *)GEN_TOP(((int)pvVar8 + 0x6c))) = (*(int * PTR32 *)(gen_frame + 0xa0));
        *((undefined1 *)GEN_TOP(((int)pvVar8 + 0x70))) = (*(undefined1 *)(gen_frame + 0xa4));
      }
      *((int *)GEN_TOP(((int)this + 0x39ac))) = *((int *)GEN_TOP(((int)this + 0x39ac))) + 1;
      F_00492c50(((undefined4 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      F_00429760(((undefined4 *)(gen_frame + 0x88))[0],8,0x2c4);
      ((undefined4 *)(gen_frame + 0x88))[0] = 0;
      F_0042c880(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
      piVar2 = (*(int * PTR32 *)(gen_frame + 0x30)) + 99;
      (*(int * PTR32 *)(gen_frame + 0x30)) = piVar2;
      piVar5 = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 1)));
      (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar5;
      pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x28));
    } while (piVar5 < *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xc30))));
  }
  (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(0x0));
  if (*((short *)GEN_TOP(((int)pvVar8 + 0x3158))) != 0) {
    (*(int * PTR32 *)(gen_frame + 0x30)) = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x315c)));
    do {
      (*(int * PTR32 *)(gen_frame + 0xa8)) = ((int *)GEN_TOP(0x0));
      piVar2 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
      pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      (*(int * PTR32 *)(gen_frame + 0xa8)) = piVar2;
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        *piVar2 = 0;
        piVar2[1] = 0;
      }
      *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0xa8));
      uVar7 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x39f8))) | 0x10000;
      (*(int *)(gen_frame + 0xac)) = 0;
      (*(uint *)(gen_frame + 0xb0)) = 0;
      (*(int *)(gen_frame + 0xb4)) = 0;
      (*(int * PTR32 *)(gen_frame + 0xb8)) = ((int *)GEN_TOP(0x0));
      ((int *)(gen_frame + 0xcc))[0] = 0;
      ((int *)(gen_frame + 0xcc))[1] = 0;
      ((int *)(gen_frame + 0xcc))[2] = 0;
      ((int *)(gen_frame + 0xcc))[3] = 0;
      ((int *)(gen_frame + 0xcc))[4] = 0;
      ((int *)(gen_frame + 0xcc))[5] = 0;
      ((int *)(gen_frame + 0xcc))[6] = 0;
      ((int *)(gen_frame + 0xcc))[7] = 0;
      ((int *)(gen_frame + 0xcc))[8] = 0;
      ((int *)(gen_frame + 0xcc))[9] = 0;
      (*(int * PTR32 *)(gen_frame + 0x2c)) = ((int *)GEN_TOP(0x0));
      pvVar6 = ((undefined *)GEN_TOP(F_006b8c00()));
      pvVar6 = ((undefined *)GEN_TOP(F_006e3240(pvVar6 GEN_EDX_ARG,uVar7)));
      uVar7 = F_00a4ffd0();
      if ((pvVar6 != ((undefined *)GEN_TOP(0x0))) &&
         (bVar1 = F_006bfeb0(uVar7,(uint)*((ushort *)GEN_TOP(((int)pvVar8 + 0x39f8)))), bVar1 == 0)) {
        piVar2 = ((int *)GEN_TOP(F_006d0830(pvVar6 GEN_EDX_ARG,(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x30)) + 0x15),((int *)(gen_frame + 0xcc)),10)));
        (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar2;
      }
      (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(0x0));
      if ((*(int * PTR32 *)(gen_frame + 0x2c)) != ((int *)GEN_TOP(0x0))) {
        do {
          iVar3 = ((int *)(gen_frame + 0xcc))[(int)((int)(*(int * PTR32 *)(gen_frame + 0x4)))];
          (*(int *)(gen_frame + 0xc0)) = 0;
          (*(int *)(gen_frame + 0xc0)) = iVar3;
          (*(int * PTR32 *)(gen_frame + 0xc4)) = &(*(int *)(gen_frame + 0xc0));
          (*(char *)(gen_frame + 0xc8)) = '\0';
          if ((*(uint *)(gen_frame + 0xb0)) <= (int)(*(int * PTR32 *)(gen_frame + 0xb8)) + 1U) {
            F_00486f80(&(*(int * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG,1);
          }
          uVar7 = (int)(*(int * PTR32 *)(gen_frame + 0xb8)) + (*(int *)(gen_frame + 0xb4));
          if ((*(uint *)(gen_frame + 0xb0)) <= uVar7) {
            uVar7 = uVar7 - (*(uint *)(gen_frame + 0xb0));
          }
          if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0xac)) + uVar7 * 4))) == 0) {
            uVar4 = F_004296a0(0xc,0,0x2c4);
            *((uint *)GEN_TOP(((*(int *)(gen_frame + 0xac)) + uVar7 * 4))) = uVar4;
          }
          piVar2 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xac)) + uVar7 * 4)));
          if (piVar2 != ((int *)GEN_TOP(0x0))) {
            *piVar2 = 0;
            piVar2[1] = 0;
            *(undefined1 *)(piVar2 + 2) = 0xff;
            if (((*(char *)(gen_frame + 0xc8)) != -1) && (piVar2 != &(*(int *)(gen_frame + 0xc0)))) {
              if ((*(char *)(gen_frame + 0xc8)) == '\0') {
                *piVar2 = *(*(int * PTR32 *)(gen_frame + 0xc4));
                *(undefined1 *)(piVar2 + 2) = 0;
              }
              else {
                if ((*(char *)(gen_frame + 0xc8)) != '\x01') goto LAB_00a81171;
                iVar3 = *(*(int * PTR32 *)(gen_frame + 0xc4));
                piVar5 = ((int *)GEN_TOP((iVar3 + 0x54)));
                *piVar5 = *piVar5 + 1;
                *piVar2 = iVar3;
                *(undefined1 *)(piVar2 + 2) = 1;
              }
              piVar2[1] = (int)piVar2;
            }
          }
LAB_00a81171: ;
          (*(int * PTR32 *)(gen_frame + 0xb8)) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xb8)) + 1)));
          if ((*(int * PTR32 *)(gen_frame + 0xc4)) != ((int *)GEN_TOP(0x0))) {
            if (((*(char *)(gen_frame + 0xc8)) != '\0') && ((*(char *)(gen_frame + 0xc8)) == '\x01')) {
              pvVar8 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xc4))));
              *((int *)GEN_TOP(((int)pvVar8 + 0x54))) = *((int *)GEN_TOP(((int)pvVar8 + 0x54))) - 1;
              if (*((int *)GEN_TOP(((int)pvVar8 + 0x54))) < 1) {
                F_0042c880(pvVar8 GEN_EDX_ARG);
                F_00406ad0(pvVar8);
              }
            }
            (*(int * PTR32 *)(gen_frame + 0xc4)) = ((int *)GEN_TOP(0x0));
            (*(char *)(gen_frame + 0xc8)) = -1;
          }
          piVar2 = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x4)) + 1)));
          (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
        } while (piVar2 < (*(int * PTR32 *)(gen_frame + 0x2c)));
      }
      pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      piVar2 = (*(int * PTR32 *)(gen_frame + 0xc));
      piVar5 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xc30))) + (int)(*(int * PTR32 *)(gen_frame + 0xc)))));
      F_0042cbc0(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x30)));
      F_004949f0(((undefined4 *)(gen_frame + 0x88)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0xa8)));
      (*(int * PTR32 *)(gen_frame + 0xa0)) = piVar5;
      (*(undefined1 *)(gen_frame + 0xa4)) = 0;
      if (*((uint *)GEN_TOP(((int)pvVar8 + 0x39a4))) <= *((int *)GEN_TOP(((int)pvVar8 + 0x39ac))) + 1U) {
        F_00a92130(((undefined *)GEN_TOP(((int)pvVar8 + 0x399c))) GEN_EDX_ARG,1);
      }
      uVar7 = *((int *)GEN_TOP(((int)pvVar8 + 0x39a8))) + *((int *)GEN_TOP(((int)pvVar8 + 0x39ac)));
      if (*((uint *)GEN_TOP(((int)pvVar8 + 0x39a4))) <= uVar7) {
        uVar7 = uVar7 - *((uint *)GEN_TOP(((int)pvVar8 + 0x39a4)));
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar8 + 0x39a0))) + uVar7 * 4))) == 0) {
        uVar4 = F_004296a0(0x74,0,800);
        *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar8 + 0x39a0))) + uVar7 * 4))) = uVar4;
      }
      pvVar6 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar8 + 0x39a0))) + uVar7 * 4)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(pvVar6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x34)));
        F_004949f0(((undefined *)GEN_TOP(((int)pvVar6 + 0x54))) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x88)));
        *((int * PTR32 *)GEN_TOP(((int)pvVar6 + 0x6c))) = (*(int * PTR32 *)(gen_frame + 0xa0));
        *((undefined1 *)GEN_TOP(((int)pvVar6 + 0x70))) = (*(undefined1 *)(gen_frame + 0xa4));
      }
      *((int *)GEN_TOP(((int)pvVar8 + 0x39ac))) = *((int *)GEN_TOP(((int)pvVar8 + 0x39ac))) + 1;
      F_00492c50(((undefined4 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      F_00429760(((undefined4 *)(gen_frame + 0x88))[0],8,0x2c4);
      ((undefined4 *)(gen_frame + 0x88))[0] = 0;
      F_0042c880(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
      F_00429760((*(int * PTR32 *)(gen_frame + 0xa8)),8,0x2c4);
      (*(int * PTR32 *)(gen_frame + 0x30)) = (*(int * PTR32 *)(gen_frame + 0x30)) + 0x16;
      (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(((int)piVar2 + 1U)));
    } while ((int)piVar2 + 1U < (uint)*((ushort *)GEN_TOP(((int)pvVar8 + 0x3158))));
  }
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  uVar9 = F_00429760((*(int * PTR32 *)(gen_frame + 0x10)),8,0x2c4);
  return (uint)uVar9;
}

/* ref: FUN_00a81330 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a81330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa81330u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  ulonglong uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1);
  F_004949f0(((undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,param_2);
  (*(undefined4 *)(gen_frame + 0x6c)) = param_3;
  (*(undefined1 *)(gen_frame + 0x70)) = 0;
  F_00a9d880(((undefined *)GEN_TOP(((int)this + 0x1a8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_00492c50(((undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  F_00429760(((undefined4 *)(gen_frame + 0x54))[0],8,0x2c4);
  ((undefined4 *)(gen_frame + 0x54))[0] = 0;
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a813c0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a813c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa813c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0xc8, 8, 4);
  undefined * pvVar1;
  int * piVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc4));
  puVar4 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x1d0))) * 4 + 0x7c))) * 0x2624 + 0xb0 +
                   *((int *)GEN_TOP(((int)this + 0x198))))));
  (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar4;
  (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP(0x0));
  piVar2 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar2;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x18));
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x24)) = 0;
  (*(int *)(gen_frame + 0x28)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (*puVar4 != 0) {
    puVar4 = (*(uint * PTR32 *)(gen_frame + 0x10)) + 0x2e;
    (*(uint * PTR32 *)(gen_frame + 0x30)) = puVar4;
    do {
      (*(uint * PTR32 *)(gen_frame + 0x30)) = puVar4;
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG);
      if ((char)puVar4[-0x2d] == '\0') {
        uVar5 = puVar4[-1];
      }
      else {
        uVar5 = *puVar4;
      }
      (*(uint *)(gen_frame + 0xb4)) = 0;
      (*(uint *)(gen_frame + 0xb4)) = uVar5;
      (*(uint * PTR32 *)(gen_frame + 0xb8)) = &(*(uint *)(gen_frame + 0xb4));
      (*(char *)(gen_frame + 0xbc)) = '\0';
      if ((*(uint *)(gen_frame + 0x20)) <= (*(int *)(gen_frame + 0x28)) + 1U) {
        F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
      }
      uVar5 = (*(int *)(gen_frame + 0x28)) + (*(int *)(gen_frame + 0x24));
      if ((*(uint *)(gen_frame + 0x20)) <= uVar5) {
        uVar5 = uVar5 - (*(uint *)(gen_frame + 0x20));
      }
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x1c)) + uVar5 * 4))) == 0) {
        uVar3 = F_004296a0(0xc,0,0x2c4);
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x1c)) + uVar5 * 4))) = uVar3;
      }
      puVar4 = *((uint * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x1c)) + uVar5 * 4)));
      if (puVar4 != ((uint *)GEN_TOP(0x0))) {
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0xbc)) != -1) && (puVar4 != &(*(uint *)(gen_frame + 0xb4)))) {
          (*(uint * PTR32 *)(gen_frame + 0x0)) = puVar4;
          (*(uint * PTR32 *)(gen_frame + 0x4)) = (*(uint * PTR32 *)(gen_frame + 0xb8));
          if ((*(char *)(gen_frame + 0xbc)) == '\0') {
            F_004919b0(&(*(uint * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          }
          else if ((*(char *)(gen_frame + 0xbc)) == '\x01') {
            F_00491a60(&(*(uint * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          }
        }
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
      if ((*(uint * PTR32 *)(gen_frame + 0xb8)) != ((uint *)GEN_TOP(0x0))) {
        if (((*(char *)(gen_frame + 0xbc)) != '\0') && ((*(char *)(gen_frame + 0xbc)) == '\x01')) {
          pvVar1 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0xb8))));
          *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
          if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
            F_0042c880(pvVar1 GEN_EDX_ARG);
            F_00406ad0(pvVar1);
          }
        }
        (*(uint * PTR32 *)(gen_frame + 0xb8)) = ((uint *)GEN_TOP(0x0));
        (*(char *)(gen_frame + 0xbc)) = -1;
      }
      uVar5 = *(*(uint * PTR32 *)(gen_frame + 0x30));
      (*(uint *)(gen_frame + 0xa8)) = 0;
      (*(uint *)(gen_frame + 0xa8)) = uVar5;
      (*(uint * PTR32 *)(gen_frame + 0xac)) = &(*(uint *)(gen_frame + 0xa8));
      (*(char *)(gen_frame + 0xb0)) = '\0';
      if ((*(uint *)(gen_frame + 0x20)) <= (*(int *)(gen_frame + 0x28)) + 1U) {
        F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
      }
      uVar5 = (*(int *)(gen_frame + 0x28)) + (*(int *)(gen_frame + 0x24));
      if ((*(uint *)(gen_frame + 0x20)) <= uVar5) {
        uVar5 = uVar5 - (*(uint *)(gen_frame + 0x20));
      }
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x1c)) + uVar5 * 4))) == 0) {
        uVar3 = F_004296a0(0xc,0,0x2c4);
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x1c)) + uVar5 * 4))) = uVar3;
      }
      puVar4 = *((uint * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x1c)) + uVar5 * 4)));
      if (puVar4 != ((uint *)GEN_TOP(0x0))) {
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0xb0)) != -1) && (puVar4 != &(*(uint *)(gen_frame + 0xa8)))) {
          (*(uint * PTR32 *)(gen_frame + 0x8)) = puVar4;
          (*(uint * PTR32 *)(gen_frame + 0xc)) = (*(uint * PTR32 *)(gen_frame + 0xac));
          if ((*(char *)(gen_frame + 0xb0)) == '\0') {
            F_004919b0(&(*(uint * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
          }
          else if ((*(char *)(gen_frame + 0xb0)) == '\x01') {
            F_00491a60(&(*(uint * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
          }
        }
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
      if ((*(uint * PTR32 *)(gen_frame + 0xac)) != ((uint *)GEN_TOP(0x0))) {
        if (((*(char *)(gen_frame + 0xb0)) != '\0') && ((*(char *)(gen_frame + 0xb0)) == '\x01')) {
          pvVar1 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0xac))));
          *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
          if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
            F_0042c880(pvVar1 GEN_EDX_ARG);
            F_00406ad0(pvVar1);
          }
        }
        (*(uint * PTR32 *)(gen_frame + 0xac)) = ((uint *)GEN_TOP(0x0));
        (*(char *)(gen_frame + 0xb0)) = -1;
      }
      F_0042cbc0(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,(*(uint * PTR32 *)(gen_frame + 0x30)) - 0x2c);
      F_004949f0(((undefined4 *)(gen_frame + 0x88)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x18)));
      (*(uint *)(gen_frame + 0xa0)) = (*(uint *)(gen_frame + 0x14));
      (*(undefined1 *)(gen_frame + 0xa4)) = 0;
      if (*((uint *)GEN_TOP(((int)this + 0x1b0))) <= *((int *)GEN_TOP(((int)this + 0x1b8))) + 1U) {
        F_00a92410(((undefined *)GEN_TOP(((int)this + 0x1a8))) GEN_EDX_ARG,1);
      }
      uVar5 = *((int *)GEN_TOP(((int)this + 0x1b4))) + *((int *)GEN_TOP(((int)this + 0x1b8)));
      if (*((uint *)GEN_TOP(((int)this + 0x1b0))) <= uVar5) {
        uVar5 = uVar5 - *((uint *)GEN_TOP(((int)this + 0x1b0)));
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1ac))) + uVar5 * 4))) == 0) {
        uVar3 = F_004296a0(0x74,0,800);
        *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1ac))) + uVar5 * 4))) = uVar3;
      }
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1ac))) + uVar5 * 4)));
      if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(pvVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x34)));
        F_004949f0(((undefined *)GEN_TOP(((int)pvVar1 + 0x54))) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x88)));
        *((uint *)GEN_TOP(((int)pvVar1 + 0x6c))) = (*(uint *)(gen_frame + 0xa0));
        *((undefined1 *)GEN_TOP(((int)pvVar1 + 0x70))) = (*(undefined1 *)(gen_frame + 0xa4));
      }
      *((int *)GEN_TOP(((int)this + 0x1b8))) = *((int *)GEN_TOP(((int)this + 0x1b8))) + 1;
      F_00492c50(((undefined4 *)(gen_frame + 0x88)) GEN_EDX_ARG);
      F_00429760(((undefined4 *)(gen_frame + 0x88))[0],8,0x2c4);
      ((undefined4 *)(gen_frame + 0x88))[0] = 0;
      F_0042c880(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
      puVar4 = (*(uint * PTR32 *)(gen_frame + 0x30)) + 99;
      (*(uint * PTR32 *)(gen_frame + 0x30)) = puVar4;
      uVar5 = (*(uint *)(gen_frame + 0x14)) + 1;
      (*(uint *)(gen_frame + 0x14)) = uVar5;
    } while (uVar5 < *(*(uint * PTR32 *)(gen_frame + 0x10)));
  }
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG);
  uVar6 = F_00429760((*(int * PTR32 *)(gen_frame + 0x18)),8,0x2c4);
  return (uint)uVar6;
}

/* ref: FUN_00a817c0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a817c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa817c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  ulonglong uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1);
  F_004949f0(((undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,param_2);
  (*(undefined4 *)(gen_frame + 0x6c)) = param_3;
  (*(undefined1 *)(gen_frame + 0x70)) = 0;
  F_00a9d800(((undefined *)GEN_TOP(((int)this + 0xfb4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_00492c50(((undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  F_00429760(((undefined4 *)(gen_frame + 0x54))[0],8,0x2c4);
  ((undefined4 *)(gen_frame + 0x54))[0] = 0;
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a81860 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a81860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa81860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00a808c0(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0x14c8))) = *((byte *)GEN_TOP(((int)this + 0x14c8))) & 0xfe;
  return uVar1;
}

/* ref: Client::Game::UI::Journal::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a81880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa81880u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  undefined4 * puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined * this_00;
  undefined * pJVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (param_2 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = this + *(int *)(this + 0x74) * 0x18c + 0xc3c;
    pJVar5 = this + *(int *)(this + 0x74) * 0x58 + 0x315c;
    do {
      iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + uVar6 * 4))) + 4)));
      if (iVar4 == 0) break;
      if (*(int *)(this + 0x39b4) == 0) {
        iVar4 = (*((uint *)GEN_TOP((iVar4 + 4))) & 0xffffff) + iVar4 + 4;
        this_00 = pJVar5;
LAB_00a818f4: ;
        F_0042e430(this_00 GEN_EDX_FWD,iVar4);
      }
      else if (*(int *)(this + 0x39b4) == 1) {
        iVar4 = (*((uint *)GEN_TOP((iVar4 + 4))) & 0xffffff) + iVar4 + 4;
        this_00 = (*(undefined * PTR32 *)(gen_frame + 0x10));
        goto LAB_00a818f4;
      }
      (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x18c;
      uVar6 = uVar6 + 1;
      pJVar5 = pJVar5 + 0x58;
    } while (uVar6 < param_2);
  }
  if (*(int *)(this + 0x58) != 0) {
    *(uint *)(this + 0x74) = *(int *)(this + 0x74) + param_2;
    bVar3 = F_00a6dec0(this GEN_EDX_ARG);
    if (bVar3 != 0) {
      return 1;
    }
    puVar1 = *(undefined4 * PTR32 *)(this + 0x5c);
    *(undefined4 *)(this + 0x74) = 0;
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x5c) = 0;
    }
    pJVar5 = this + 0x60;
    *(undefined4 *)(this + 0x58) = 0;
    if (pJVar5 != ((undefined1 *)(gen_frame + 0x0))) {
      iVar4 = *(int *)pJVar5;
      *(int *)pJVar5 = 0;
      *(undefined4 *)(this + 100) = 0;
      iVar2 = *(int *)(this + 0x68);
      *(undefined4 *)(this + 0x68) = 0;
      if (iVar4 != 0) {
        F_00429760(iVar4,(iVar2 - iVar4 >> 2) * 4,800);
      }
    }
  }
  if (*(int *)(this + 0x39b4) != 0) {
    if (*(int *)(this + 0x39b4) == 1) {
      F_00a67140(this GEN_EDX_ARG);
      *(undefined4 *)(this + 15000) = 0;
      F_00a80ba0(this GEN_EDX_ARG);
    }
    return 1;
  }
  *(undefined4 *)(this + 0x39b4) = 1;
  F_00a74270(this GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00a819c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a819c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa819c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_FWD,iVar2);
    if (uVar1 != 0) {
      uVar1 = F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,iVar2);
      *((undefined1 *)GEN_TOP((uVar1 + 0x1e0))) = 0;
      uVar1 = F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,iVar2);
      *((undefined4 *)GEN_TOP((uVar1 + 0x1f0))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 500))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0x1f8))) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  *((undefined4 *)GEN_TOP(((int)this + 0x904))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 4))),0,0x900);
  *((undefined4 *)GEN_TOP(((int)this + 0x908))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x120c))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x90c))),0,0x900);
  *((undefined4 *)GEN_TOP(((int)this + 0x1210))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1214))) = 0;
  F_00a808c0(((undefined *)GEN_TOP(((int)this + 0x7418))) GEN_EDX_ARG);
  *((byte *)GEN_TOP(((int)this + 0x88e0))) = *((byte *)GEN_TOP(((int)this + 0x88e0))) & 0xfe;
  uVar1 = F_00a6fbc0((int)this + 0x1900 GEN_EDX_ARG,1,0);
  return uVar1;
}

/* ref: Client::Game::UI::QuestTodoList::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a81aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa81aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined * pQVar1;
  int iVar2;
  undefined4 * puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  
  F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  uVar6 = 0;
  if (param_2 != 0) {
    iVar5 = *(int *)(this + 0x74) * 0x18c;
    do {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + uVar6 * 4))) + 4)));
      if (iVar2 == 0) break;
      F_0042e430(((undefined *)GEN_TOP((*((int *)GEN_TOP((this + *(int *)(this + 0x1d0) * 4 + 0x7c))) * 0x2624 +
                            *(int *)(this + 0x198) + 0xb8 + iVar5))) GEN_EDX_ARG,
                   (*((uint *)GEN_TOP((iVar2 + 4))) & 0xffffff) + iVar2 + 4);
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x18c;
    } while (uVar6 < param_2);
  }
  if (*(int *)(this + 0x58) != 0) {
    *(uint *)(this + 0x74) = *(int *)(this + 0x74) + param_2;
    bVar4 = F_00a6dec0(this GEN_EDX_ARG);
    if (bVar4 != 0) {
      return 1;
    }
    puVar3 = *(undefined4 * PTR32 *)(this + 0x5c);
    *(undefined4 *)(this + 0x74) = 0;
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x5c) = 0;
    }
    pQVar1 = this + 0x60;
    *(undefined4 *)(this + 0x58) = 0;
    if (pQVar1 != ((undefined1 *)(gen_frame + 0x0))) {
      iVar5 = *(int *)pQVar1;
      *(int *)pQVar1 = 0;
      *(undefined4 *)(this + 100) = 0;
      iVar2 = *(int *)(this + 0x68);
      *(undefined4 *)(this + 0x68) = 0;
      if (iVar5 != 0) {
        F_00429760(iVar5,(iVar2 - iVar5 >> 2) * 4,800);
      }
    }
  }
  puVar3 = *(undefined4 * PTR32 *)(this + 0x204);
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
    *(undefined4 *)(this + 0x204) = 0;
  }
  F_00a6e9a0(this GEN_EDX_ARG);
  *(undefined4 *)(this + 0x1d8) = 0;
  F_00a813c0(this GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00a81bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a81bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa81bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xe0, 0, 4);
  int * piVar1;
  int iVar2;
  undefined * pvVar3;
  int * piVar4;
  undefined * pvVar5;
  uint uVar6;
  uint * puVar7;
  uint uVar8;
  
  ((int *)(gen_frame + 0xb0))[10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(0x0));
  if (*((short *)GEN_TOP(((int)this + 0x5ec))) != 0) {
    (*(int * PTR32 *)(gen_frame + 0x2c)) = ((int *)GEN_TOP(((int)this + 0x5f0)));
    do {
      (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(0x0));
      piVar4 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar4;
      if (piVar4 != ((int *)GEN_TOP(0x0))) {
        *piVar4 = 0;
        piVar4[1] = 0;
      }
      *piVar4 = (int)&(*(int * PTR32 *)(gen_frame + 0xc));
      ((int *)(gen_frame + 0xb0))[1] = 0;
      ((int *)(gen_frame + 0xb0))[2] = 0;
      ((int *)(gen_frame + 0xb0))[3] = 0;
      ((int *)(gen_frame + 0xb0))[4] = 0;
      ((int *)(gen_frame + 0xb0))[5] = 0;
      ((int *)(gen_frame + 0xb0))[6] = 0;
      ((int *)(gen_frame + 0xb0))[7] = 0;
      ((int *)(gen_frame + 0xb0))[8] = 0;
      ((int *)(gen_frame + 0xb0))[9] = 0;
      uVar8 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xe40))) | 0x10000;
      (*(int *)(gen_frame + 0x10)) = 0;
      (*(uint *)(gen_frame + 0x14)) = 0;
      (*(int *)(gen_frame + 0x18)) = 0;
      (*(int *)(gen_frame + 0x1c)) = 0;
      ((int *)(gen_frame + 0xb0))[0] = 0;
      (*(uint *)(gen_frame + 0x0)) = 0;
      pvVar5 = ((undefined *)GEN_TOP(F_006b8c00()));
      pvVar5 = ((undefined *)GEN_TOP(F_006e3240(pvVar5 GEN_EDX_ARG,uVar8)));
      if (pvVar5 != ((undefined *)GEN_TOP(0x0))) {
        (*(uint *)(gen_frame + 0x0)) = F_006d0830(pvVar5 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x54))),((int *)(gen_frame + 0xb0)),10);
      }
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(0x0));
      if ((*(uint *)(gen_frame + 0x0)) != 0) {
        do {
          iVar2 = ((int *)(gen_frame + 0xb0))[(int)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)))];
          (*(int *)(gen_frame + 0xa4)) = 0;
          (*(int *)(gen_frame + 0xa4)) = iVar2;
          (*(int * PTR32 *)(gen_frame + 0xa8)) = &(*(int *)(gen_frame + 0xa4));
          (*(char *)(gen_frame + 0xac)) = '\0';
          if ((*(uint *)(gen_frame + 0x14)) <= (*(int *)(gen_frame + 0x1c)) + 1U) {
            F_00486f80(&(*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
          }
          uVar8 = (*(int *)(gen_frame + 0x1c)) + (*(int *)(gen_frame + 0x18));
          if ((*(uint *)(gen_frame + 0x14)) <= uVar8) {
            uVar8 = uVar8 - (*(uint *)(gen_frame + 0x14));
          }
          if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + uVar8 * 4))) == 0) {
            uVar6 = F_004296a0(0xc,0,0x2c4);
            *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + uVar8 * 4))) = uVar6;
          }
          piVar4 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + uVar8 * 4)));
          if (piVar4 != ((int *)GEN_TOP(0x0))) {
            *piVar4 = 0;
            piVar4[1] = 0;
            *(undefined1 *)(piVar4 + 2) = 0xff;
            if (((*(char *)(gen_frame + 0xac)) != -1) && (piVar4 != &(*(int *)(gen_frame + 0xa4)))) {
              if ((*(char *)(gen_frame + 0xac)) == '\0') {
                (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0xa8));
                *piVar4 = *(*(int * PTR32 *)(gen_frame + 0xa8));
                *(undefined1 *)(piVar4 + 2) = 0;
              }
              else {
                if ((*(char *)(gen_frame + 0xac)) != '\x01') goto LAB_00a81e24;
                (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0xa8));
                iVar2 = *(*(int * PTR32 *)(gen_frame + 0xa8));
                piVar1 = ((int *)GEN_TOP((iVar2 + 0x54)));
                *piVar1 = *piVar1 + 1;
                *piVar4 = iVar2;
                *(undefined1 *)(piVar4 + 2) = 1;
              }
              (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0xa8));
              piVar4[1] = (int)piVar4;
            }
          }
LAB_00a81e24: ;
          (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
          if ((*(int * PTR32 *)(gen_frame + 0xa8)) != ((int *)GEN_TOP(0x0))) {
            if (((*(char *)(gen_frame + 0xac)) != '\0') && ((*(char *)(gen_frame + 0xac)) == '\x01')) {
              pvVar5 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xa8))));
              *((int *)GEN_TOP(((int)pvVar5 + 0x54))) = *((int *)GEN_TOP(((int)pvVar5 + 0x54))) - 1;
              if (*((int *)GEN_TOP(((int)pvVar5 + 0x54))) < 1) {
                F_0042c880(pvVar5 GEN_EDX_ARG);
                F_00406ad0(pvVar5);
              }
            }
            (*(int * PTR32 *)(gen_frame + 0xa8)) = ((int *)GEN_TOP(0x0));
            (*(char *)(gen_frame + 0xac)) = -1;
          }
          (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 1)));
        } while ((*(undefined * PTR32 *)(gen_frame + 0x8)) < (*(uint *)(gen_frame + 0x0)));
      }
      F_0042cbc0(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x2c)));
      F_004949f0(((undefined4 *)(gen_frame + 0x84)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0xc)));
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      (*(undefined4 *)(gen_frame + 0x9c)) = 0;
      (*(undefined1 *)(gen_frame + 0xa0)) = 0;
      if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xfbc))) <= *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xfc4))) + 1U) {
        F_00a922a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xfb4))) GEN_EDX_ARG,1);
      }
      uVar8 = *((int *)GEN_TOP(((int)pvVar5 + 0xfc0))) + *((int *)GEN_TOP(((int)pvVar5 + 0xfc4)));
      if (*((uint *)GEN_TOP(((int)pvVar5 + 0xfbc))) <= uVar8) {
        uVar8 = uVar8 - *((uint *)GEN_TOP(((int)pvVar5 + 0xfbc)));
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar5 + 0xfb8))) + uVar8 * 4))) == 0) {
        uVar6 = F_004296a0(0x74,0,800);
        *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar5 + 0xfb8))) + uVar8 * 4))) = uVar6;
      }
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar5 + 0xfb8))) + uVar8 * 4)));
      if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(pvVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
        F_004949f0(((undefined *)GEN_TOP(((int)pvVar3 + 0x54))) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x84)));
        *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x6c))) = (*(undefined4 *)(gen_frame + 0x9c));
        *((undefined1 *)GEN_TOP(((int)pvVar3 + 0x70))) = (*(undefined1 *)(gen_frame + 0xa0));
      }
      *((int *)GEN_TOP(((int)pvVar5 + 0xfc4U))) = *((int *)GEN_TOP(((int)pvVar5 + 0xfc4U))) + 1;
      F_00492c50(((undefined4 *)(gen_frame + 0x84)) GEN_EDX_ARG);
      F_00429760(((undefined4 *)(gen_frame + 0x84))[0],8,0x2c4);
      ((undefined4 *)(gen_frame + 0x84))[0] = 0;
      F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
      (*(int * PTR32 *)(gen_frame + 0x2c)) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x58)));
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 1)));
    } while ((*(undefined * PTR32 *)(gen_frame + 0x4)) < (uint)*((ushort *)GEN_TOP(((int)pvVar5 + 0x5ec))));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(0x0));
  pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x28));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xfac))) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xeb0)));
    (*(int * PTR32 *)(gen_frame + 0x2c)) = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xea4)));
    do {
      (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(0x0));
      piVar4 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar4;
      if (piVar4 != ((int *)GEN_TOP(0x0))) {
        *piVar4 = 0;
        piVar4[1] = 0;
      }
      *piVar4 = (int)&(*(int * PTR32 *)(gen_frame + 0xc));
      iVar2 = *(*(int * PTR32 *)(gen_frame + 0x2c));
      (*(int * PTR32 *)(gen_frame + 0xa8)) = &(*(int *)(gen_frame + 0xa4));
      (*(int *)(gen_frame + 0xa4)) = 0;
      (*(int *)(gen_frame + 0x10)) = 0;
      (*(uint *)(gen_frame + 0x14)) = 0;
      (*(int *)(gen_frame + 0x18)) = 0;
      (*(int *)(gen_frame + 0x1c)) = 0;
      (*(int *)(gen_frame + 0xa4)) = iVar2;
      (*(char *)(gen_frame + 0xac)) = '\0';
      F_00486f80(&(*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
      uVar8 = (*(int *)(gen_frame + 0x1c)) + (*(int *)(gen_frame + 0x18));
      if ((*(uint *)(gen_frame + 0x14)) <= uVar8) {
        uVar8 = uVar8 - (*(uint *)(gen_frame + 0x14));
      }
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + uVar8 * 4))) == 0) {
        uVar6 = F_004296a0(0xc,0,0x2c4);
        *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + uVar8 * 4))) = uVar6;
      }
      piVar4 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + uVar8 * 4)));
      if (piVar4 != ((int *)GEN_TOP(0x0))) {
        *piVar4 = 0;
        piVar4[1] = 0;
        *(undefined1 *)(piVar4 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0xac)) != -1) && (piVar4 != &(*(int *)(gen_frame + 0xa4)))) {
          if ((*(char *)(gen_frame + 0xac)) == '\0') {
            (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0xa8));
            *piVar4 = *(*(int * PTR32 *)(gen_frame + 0xa8));
            *(undefined1 *)(piVar4 + 2) = 0;
          }
          else {
            if ((*(char *)(gen_frame + 0xac)) != '\x01') goto LAB_00a82156;
            (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0xa8));
            iVar2 = *(*(int * PTR32 *)(gen_frame + 0xa8));
            piVar1 = ((int *)GEN_TOP((iVar2 + 0x54)));
            *piVar1 = *piVar1 + 1;
            *piVar4 = iVar2;
            *(undefined1 *)(piVar4 + 2) = 1;
          }
          (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0xa8));
          piVar4[1] = (int)piVar4;
        }
      }
LAB_00a82156: ;
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
      if ((*(int * PTR32 *)(gen_frame + 0xa8)) != ((int *)GEN_TOP(0x0))) {
        if (((*(char *)(gen_frame + 0xac)) != '\0') && ((*(char *)(gen_frame + 0xac)) == '\x01')) {
          pvVar5 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xa8))));
          *((int *)GEN_TOP(((int)pvVar5 + 0x54))) = *((int *)GEN_TOP(((int)pvVar5 + 0x54))) - 1;
          if (*((int *)GEN_TOP(((int)pvVar5 + 0x54))) < 1) {
            F_0042c880(pvVar5 GEN_EDX_ARG);
            F_00406ad0(pvVar5);
          }
        }
        (*(int * PTR32 *)(gen_frame + 0xa8)) = ((int *)GEN_TOP(0x0));
        (*(char *)(gen_frame + 0xac)) = -1;
      }
      puVar7 = ((uint *)GEN_TOP(F_00ab31d0(0x18f75)));
      F_0042e430((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*puVar7 & 0xffffff) + (int)puVar7);
      F_0042cbc0(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x8)));
      F_004949f0(((undefined4 *)(gen_frame + 0x84)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0xc)));
      pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      (*(undefined4 *)(gen_frame + 0x9c)) = 0;
      (*(undefined1 *)(gen_frame + 0xa0)) = 0;
      if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xfbc))) <= *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xfc4))) + 1U) {
        F_00a922a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xfb4))) GEN_EDX_ARG,1);
      }
      uVar8 = *((int *)GEN_TOP(((int)pvVar3 + 0xfc0))) + *((int *)GEN_TOP(((int)pvVar3 + 0xfc4)));
      if (*((uint *)GEN_TOP(((int)pvVar3 + 0xfbc))) <= uVar8) {
        uVar8 = uVar8 - *((uint *)GEN_TOP(((int)pvVar3 + 0xfbc)));
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar3 + 0xfb8))) + uVar8 * 4))) == 0) {
        uVar6 = F_004296a0(0x74,0,800);
        *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar3 + 0xfb8))) + uVar8 * 4))) = uVar6;
      }
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar3 + 0xfb8))) + uVar8 * 4)));
      if (pvVar5 != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(pvVar5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
        F_004949f0(((undefined *)GEN_TOP(((int)pvVar5 + 0x54))) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x84)));
        *((undefined4 *)GEN_TOP(((int)pvVar5 + 0x6c))) = (*(undefined4 *)(gen_frame + 0x9c));
        *((undefined1 *)GEN_TOP(((int)pvVar5 + 0x70))) = (*(undefined1 *)(gen_frame + 0xa0));
      }
      *((int *)GEN_TOP(((int)pvVar3 + 0xfc4U))) = *((int *)GEN_TOP(((int)pvVar3 + 0xfc4U))) + 1;
      F_00492c50(((undefined4 *)(gen_frame + 0x84)) GEN_EDX_ARG);
      F_00429760(((undefined4 *)(gen_frame + 0x84))[0],8,0x2c4);
      ((undefined4 *)(gen_frame + 0x84))[0] = 0;
      F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
      (*(int * PTR32 *)(gen_frame + 0x2c)) = (*(int * PTR32 *)(gen_frame + 0x2c)) + 1;
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x54)));
      pvVar5 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 1)));
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = pvVar5;
    } while (pvVar5 < *((undefined * PTR32 *)GEN_TOP(((int)pvVar3 + 0xfac))));
  }
  return (uint)pvVar5;
}

/* ref: FUN_00a82300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a82300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa82300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x58, 8, 4);
  ushort uVar1;
  short sVar2;
  int * piVar3;
  float fVar4;
  byte bVar5;
  uint in_EAX = 0;
  float * pfVar6;
  uint uVar7;
  undefined * pvVar8;
  float10 fVar9;
  float fVar10;
  uint * puVar11;
  
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1450)));
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_FWD), (char)in_EAX != '\0'))
  {
    pfVar6 = ((float *)GEN_TOP(F_00ab37e0(param_1)));
    in_EAX = 0;
    if (pfVar6 != ((float *)GEN_TOP(0x0))) {
      (*(uint *)(gen_frame + 0x40)) = (uint)*(ushort *)(pfVar6 + 8);
      uVar7 = F_00ab1c90((uint)*(ushort *)(pfVar6 + 8));
      in_EAX = 0;
      if (uVar7 != 0) {
        uVar1 = *((ushort *)GEN_TOP((uVar7 + 0x20)));
        (*(uint *)(gen_frame + 0x4c)) = (uint)*((ushort *)GEN_TOP((uVar7 + 0x1e)));
        (*(uint *)(gen_frame + 0x50)) = (uint)uVar1;
        fVar10 = F_00a6a920(pfVar6);
        fVar4 = pfVar6[9];
        (*(float *)(gen_frame + 0x48)) = fVar10;
        if ((fVar4 == 5.60519e-44) || (fVar4 == 1.96182e-44)) {
          sVar2 = *((short *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1450))) + 0x1d4))) + 2)));
          if ((sVar2 == -0x7fff) || ((sVar2 == -0x7ffe || (sVar2 == -0x7ff9)))) {
            fVar9 = F_007733a0(REFG(float, 0x1087ef8));
            (*(float *)(gen_frame + 0x48)) = (float)fVar9;
          }
          (*(uint *)(gen_frame + 0x44)) = 0xebf9;
        }
        else {
          bVar5 = F_00a5f470((undefined4)gen_fl2bits(fVar4));
          (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = bVar5;
          (*(uint *)(gen_frame + 0x44)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x44)), 1, 3),bVar5);
          uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1450))) + 0x200))))
                            (*((int * PTR32 *)GEN_TOP(((int)this + 0x1450))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)),
                             (undefined4)gen_fl2bits(pfVar6[5]),param_1,
                             (undefined4)gen_fl2bits(pfVar6[5]));
          (*(uint *)(gen_frame + 0x44)) = uVar7;
        }
        uVar7 = F_00a6a710(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,(int)this + 0x145c,(*(uint *)(gen_frame + 0x44)),*pfVar6,pfVar6[1],
                             pfVar6[2],(*(float *)(gen_frame + 0x48)),(*(uint *)(gen_frame + 0x40)),(undefined4)gen_fl2bits(pfVar6[6]),(*(uint *)(gen_frame + 0x4c)),
                             (*(uint *)(gen_frame + 0x50)),0xff);
        F_00a942b0(((undefined *)GEN_TOP(((int)this + 0x14b0))) GEN_EDX_ARG,uVar7);
        (*(int *)(gen_frame + 0x3c)) = (int)this + 0x1454;
        puVar11 = &(*(uint *)(gen_frame + 0x50));
        (*(uint *)(gen_frame + 0x40)) = (*((int *)GEN_TOP(((int)this + 0x14b4))) - *((int *)GEN_TOP(((int)this + 0x14b0)))) / 0x34 - 1;
        pvVar8 = ((undefined *)GEN_TOP(F_00a9de00(this GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x4c)))));
        pvVar8 = ((undefined *)GEN_TOP(F_00a9b010(pvVar8 GEN_EDX_ARG,puVar11)));
        F_00a92ca0(pvVar8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x34)),&(*(int *)(gen_frame + 0x3c)));
        *((undefined1 *)GEN_TOP(((int)this + 0x14c0))) = 1;
        if ((uint)gen_fl2bits(pfVar6[6]) < 0x6c) {
          F_00a8ac50((int)this + 0x20 GEN_EDX_ARG,(undefined4)gen_fl2bits(pfVar6[6]),1);
        }
        in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1450))) + 600))))
                           (*((int * PTR32 *)GEN_TOP(((int)this + 0x1450))) GEN_EDX_ARG,param_1,(*(uint *)(gen_frame + 0x44)),
                            (undefined4)gen_fl2bits(*pfVar6),(undefined4)gen_fl2bits(pfVar6[1]),
                            (undefined4)gen_fl2bits(pfVar6[2]),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x48))),
                            (undefined4)gen_fl2bits(pfVar6[6]),(*(uint *)(gen_frame + 0x4c)),(*(uint *)(gen_frame + 0x50)));
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00a82500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a82500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa82500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  char cVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  int * piVar7;
  int * piVar8;
  int * piVar9;
  int * piVar10;
  
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14b4)));
  piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14b0)));
  uVar4 = 0;
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  if (piVar9 != piVar3) {
    while (*piVar9 != param_1) {
      piVar9 = piVar9 + 0xd;
      uVar4 = uVar4 + 1;
      if (piVar9 == piVar3) {
        return (uint)piVar3;
      }
    }
    (*(uint *)(gen_frame + 0x18)) = uVar4;
    iVar5 = piVar9[0xb];
    (*(int *)(gen_frame + 0x10)) = piVar9[10];
    (*(int *)(gen_frame + 0x14)) = iVar5;
    piVar3 = &(*(int *)(gen_frame + 0x14));
    (*(int *)(gen_frame + 0xc)) = (int)this + 0x1454;
    pvVar2 = ((undefined *)GEN_TOP(F_00a9de00(this GEN_EDX_FWD,&(*(int *)(gen_frame + 0x10)))));
    pvVar2 = ((undefined *)GEN_TOP(F_00a9b010(pvVar2 GEN_EDX_ARG,piVar3)));
    F_00a8fd90(pvVar2 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(int *)(gen_frame + 0xc)));
    piVar3 = (*(int * PTR32 *)(gen_frame + 0x0));
    if ((*(int * PTR32 *)(gen_frame + 0x0)) != (*(int * PTR32 *)(gen_frame + 0x4))) {
      do {
        if (piVar3[4] == (*(uint *)(gen_frame + 0x18))) {
          piVar7 = piVar3;
          if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
            piVar7 = ((int *)GEN_TOP(piVar3[2]));
            if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
              cVar1 = *((char *)GEN_TOP((*piVar7 + 0x15)));
              piVar8 = ((int *)GEN_TOP(*piVar7));
              while (cVar1 == '\0') {
                cVar1 = *((char *)GEN_TOP((*piVar8 + 0x15)));
                piVar7 = piVar8;
                piVar8 = ((int *)GEN_TOP(*piVar8));
              }
            }
            else {
              cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x15)));
              piVar10 = ((int *)GEN_TOP(piVar3[1]));
              piVar8 = piVar3;
              while ((piVar7 = piVar10, cVar1 == '\0' && (piVar8 == ((int *)GEN_TOP(piVar7[2]))))) {
                cVar1 = *((char *)GEN_TOP((piVar7[1] + 0x15)));
                piVar10 = ((int *)GEN_TOP(piVar7[1]));
                piVar8 = piVar7;
              }
            }
          }
          piVar8 = &(*(int *)(gen_frame + 0xc));
          piVar10 = &(*(int *)(gen_frame + 0x14));
          pvVar2 = ((undefined *)GEN_TOP(F_00a9de00(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x10)))));
          pvVar2 = ((undefined *)GEN_TOP(F_00a9b010(pvVar2 GEN_EDX_ARG,piVar10)));
          F_00953740(pvVar2 GEN_EDX_ARG,piVar8,piVar3);
          piVar3 = piVar7;
        }
        else {
          if ((*(uint *)(gen_frame + 0x18)) < (uint)piVar3[4]) {
            piVar3[4] = piVar3[4] - 1;
          }
          if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
            piVar7 = ((int *)GEN_TOP(piVar3[2]));
            if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
              cVar1 = *((char *)GEN_TOP((*piVar7 + 0x15)));
              piVar3 = piVar7;
              piVar7 = ((int *)GEN_TOP(*piVar7));
              while (cVar1 == '\0') {
                cVar1 = *((char *)GEN_TOP((*piVar7 + 0x15)));
                piVar3 = piVar7;
                piVar7 = ((int *)GEN_TOP(*piVar7));
              }
            }
            else {
              cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x15)));
              piVar8 = ((int *)GEN_TOP(piVar3[1]));
              piVar7 = piVar3;
              while ((piVar3 = piVar8, cVar1 == '\0' && (piVar7 == ((int *)GEN_TOP(piVar3[2]))))) {
                cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x15)));
                piVar8 = ((int *)GEN_TOP(piVar3[1]));
                piVar7 = piVar3;
              }
            }
          }
        }
      } while (piVar3 != (*(int * PTR32 *)(gen_frame + 0x4)));
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1450))) + 0x25c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1450))) GEN_EDX_ARG,param_1);
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14b4)));
    piVar7 = piVar9;
    while (piVar9 = piVar9 + 0xd, piVar9 != piVar3) {
      piVar6 = piVar7 + 0xd;
      piVar8 = piVar9;
      piVar10 = piVar7;
      for (iVar5 = 0xd; piVar7 = piVar6, iVar5 != 0; iVar5 = iVar5 - 1) {
        *piVar10 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar10 = piVar10 + 1;
      }
    }
    (*(int * PTR32 *)(gen_frame + 0x8))[0x52d] = (*(int * PTR32 *)(gen_frame + 0x8))[0x52d] - 0x34;
    piVar3 = (*(int * PTR32 *)(gen_frame + 0x8));
  }
  return (uint)piVar3;
}

/* ref: FUN_00a826a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a826a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa826a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  uint * puVar1;
  char cVar2;
  undefined4 uVar3;
  int * piVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int * piVar9;
  undefined * pvVar10;
  uint uVar11;
  int * piVar12;
  int * piVar13;
  undefined4 * puVar14;
  undefined4 * puVar15;
  undefined4 * puVar16;
  
  iVar8 = (*(int *)&gen_args[0]);
  puVar14 = ((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) * 0x34 + *((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x5c))))));
  uVar3 = puVar14[10];
  (*(undefined4 *)(gen_frame + 0xc)) = *puVar14;
  (*(int *)&gen_args[0]) = puVar14[0xb];
  (*(undefined4 *)(gen_frame + 0x14)) = uVar3;
  if ((char)(*(int *)&gen_args[2]) != '\0') {
    F_00a767f0(this GEN_EDX_FWD,iVar8,(*(int * PTR32 *)&gen_args[1]));
  }
  puVar16 = &(*(int *)&gen_args[0]);
  (*(int *)(gen_frame + 0x10)) = iVar8;
  pvVar10 = ((undefined *)GEN_TOP(F_00a9de00(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x14)))));
  pvVar10 = ((undefined *)GEN_TOP(F_00a9b010(pvVar10 GEN_EDX_ARG,puVar16)));
  uVar11 = F_00a8fd90(pvVar10 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(int *)(gen_frame + 0x10)));
  piVar13 = (*(int * PTR32 *)(gen_frame + 0x0));
  if ((*(int * PTR32 *)(gen_frame + 0x0)) != (*(int * PTR32 *)(gen_frame + 0x4))) {
    while (((int *)GEN_TOP(piVar13[4])) != (*(int * PTR32 *)&gen_args[1])) {
      piVar12 = (*(int * PTR32 *)&gen_args[1]);
      if (*((char *)GEN_TOP(((int)piVar13 + 0x15))) == '\0') {
        piVar4 = ((int *)GEN_TOP(piVar13[2]));
        if (*((char *)GEN_TOP(((int)piVar4 + 0x15))) == '\0') {
          cVar2 = *((char *)GEN_TOP((*piVar4 + 0x15)));
          piVar12 = ((int *)GEN_TOP(*piVar4));
          while (piVar13 = piVar4, cVar2 == '\0') {
            cVar2 = *((char *)GEN_TOP((*piVar12 + 0x15)));
            piVar4 = piVar12;
            piVar12 = ((int *)GEN_TOP(*piVar12));
          }
        }
        else {
          cVar2 = *((char *)GEN_TOP((piVar13[1] + 0x15)));
          piVar9 = ((int *)GEN_TOP(piVar13[1]));
          piVar4 = piVar13;
          while ((piVar12 = piVar9, piVar13 = piVar12, cVar2 == '\0' &&
                 (piVar4 == ((int *)GEN_TOP(piVar12[2]))))) {
            cVar2 = *((char *)GEN_TOP((piVar12[1] + 0x15)));
            piVar9 = ((int *)GEN_TOP(piVar12[1]));
            piVar4 = piVar12;
          }
        }
      }
      if (piVar13 == (*(int * PTR32 *)(gen_frame + 0x4))) {
        return (uint)piVar12;
      }
    }
    puVar16 = &(*(int * PTR32 *)&gen_args[1]);
    puVar15 = &(*(int *)&gen_args[0]);
    pvVar10 = ((undefined *)GEN_TOP(F_00a9de00(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x14)))));
    pvVar10 = ((undefined *)GEN_TOP(F_00a9b010(pvVar10 GEN_EDX_ARG,puVar15)));
    uVar11 = F_00953740(pvVar10 GEN_EDX_ARG,puVar16,piVar13);
    if (((char)(*(int *)&gen_args[2]) != '\0') &&
       (uVar11 = F_00a912a0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,&(*(int *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0xc))),
       (*(int *)&gen_args[2]) != *((int *)GEN_TOP(((int)this + 0x14))))) {
      uVar11 = 0;
      if (*((int * PTR32 *)GEN_TOP(((*(int *)&gen_args[2]) + 0x20))) != ((int *)GEN_TOP(0x0))) {
        (*(int * PTR32 *)(gen_frame + 0x0)) = *((int * PTR32 *)GEN_TOP(((*(int *)&gen_args[2]) + 0x20)));
        puVar16 = &(*(int *)&gen_args[0]);
        (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(*((undefined4 *)GEN_TOP(((*(int *)&gen_args[2]) + 0x24)))));
        pvVar10 = ((undefined *)GEN_TOP(F_00a9de00(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x14)))));
        pvVar10 = ((undefined *)GEN_TOP(F_00a9b010(pvVar10 GEN_EDX_ARG,puVar16)));
        uVar11 = F_009670d0(pvVar10 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),&(*(int * PTR32 *)(gen_frame + 0x0)));
      }
    }
    uVar5 = puVar14[9];
    if (uVar5 < 0x6c) {
      puVar1 = ((uint *)GEN_TOP(((int)this + (uVar5 >> 6) * 8 + 0x20)));
      uVar7 = (ulonglong)((byte)uVar5 & 0x3f);
      lVar6 = ((ulonglong)((uVar7 < 0x40) ? ((1L << uVar7)) : 0));
      uVar11 = (uint)lVar6;
      *puVar1 = *puVar1 | uVar11;
      puVar1[1] = puVar1[1] | (uint)((ulonglong)lVar6 >> 0x20);
    }
  }
  return uVar11;
}

/* ref: FUN_00a82810 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a82810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa82810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  F_00a71980(this GEN_EDX_FWD);
  F_00a9d900(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 8))))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 8)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    uVar2 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x125);
    uVar4 = 0;
    if (uVar2 != 0) {
      piVar3 = ((int *)GEN_TOP(F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x125)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x4c))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x24))));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  return uVar4;
}

/* ref: FUN_00a828a0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a828a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa828a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0xf8, 8, 4);
  undefined1 * puVar1;
  undefined1 * puVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 * puVar6;
  uint uVar7;
  int * piVar8;
  uint * puVar9;
  int iVar10;
  undefined4 * puVar11;
  bool bVar12;
  ulonglong uVar13;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xf0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf4));
  (*(int *)(gen_frame + 0x24)) = param_1;
  (*(int *)(gen_frame + 0x28)) = *((int *)GEN_TOP(((int)this + 0x2c)));
  (*(int * PTR32 *)(gen_frame + 0x40)) = this;
  *((uint *)GEN_TOP(((int)this + 0x2c))) = *((int *)GEN_TOP(((int)this + 0x2c))) + param_2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  puVar6 = ((undefined4 *)GEN_TOP(F_004296a0(0x28,0,0x191)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar6;
  *puVar6 = puVar6;
  puVar6[1] = puVar6;
  puVar6[2] = puVar6;
  *(undefined1 *)(puVar6 + 9) = 1;
  *((undefined1 *)GEN_TOP(((int)puVar6 + 0x25))) = 1;
  (*(undefined2 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x60)) = 0;
  if (param_2 != 0) {
    do {
      iVar10 = *((int *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + (*(uint *)(gen_frame + 0x60)) * 4))) + 4)));
      uVar7 = F_00ab1c90(*((undefined4 *)GEN_TOP((iVar10 + 8))));
      (*(uint *)(gen_frame + 0x64)) = uVar7;
      if (uVar7 != 0) {
        (*(undefined2 *)(gen_frame + 0x48)) = *((undefined2 *)GEN_TOP((uVar7 + 0x1c)));
        (*(undefined4 *)(gen_frame + 0x54)) = 0;
        puVar6 = ((undefined4 *)GEN_TOP(F_004296a0(0x28,0,0x191)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = puVar6;
        *puVar6 = puVar6;
        puVar6[1] = puVar6;
        puVar6[2] = puVar6;
        *(undefined1 *)(puVar6 + 9) = 1;
        *((undefined1 *)GEN_TOP(((int)puVar6 + 0x25))) = 1;
        F_00a9ae70(((undefined1 *)(gen_frame + 0x4c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
        piVar8 = ((int *)GEN_TOP(F_004296a0(0x24,0,0x191)));
        *piVar8 = *((int *)GEN_TOP(((int)this + 8)));
        piVar8[1] = *((int *)GEN_TOP(((int)this + 8)));
        piVar8[2] = *((int *)GEN_TOP(((int)this + 8)));
        *(undefined2 *)(piVar8 + 8) = 0;
        if (piVar8 + 3 != ((int *)GEN_TOP(0x0))) {
          *(undefined2 *)(piVar8 + 3) = (*(undefined2 *)(gen_frame + 0x48));
          piVar8[6] = 0;
          uVar7 = F_004296a0(0x28,0,0x191);
          piVar8[5] = uVar7;
          *((uint *)GEN_TOP(uVar7)) = uVar7;
          *((int *)GEN_TOP((piVar8[5] + 4))) = piVar8[5];
          *((int *)GEN_TOP((piVar8[5] + 8))) = piVar8[5];
          *((undefined1 *)GEN_TOP((piVar8[5] + 0x24))) = 1;
          *((undefined1 *)GEN_TOP((piVar8[5] + 0x25))) = 1;
          F_00a9ae70(piVar8 + 4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4c)));
          this = (*(int * PTR32 *)(gen_frame + 0x40));
        }
        F_00a9dc70(((int *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((int *)(gen_frame + 0x0)),piVar8,0);
        F_00a9b1a0(((undefined1 *)(gen_frame + 0x4c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2c)),*(*(undefined4 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)));
        F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x50)),0x28,0x191);
        (*(undefined2 *)(gen_frame + 0x48)) = 0;
        (*(undefined2 *)(gen_frame + 0x44)) = *((undefined2 *)GEN_TOP(((*(uint *)(gen_frame + 0x64)) + 0x20)));
        F_00a93db0(((undefined1 *)(gen_frame + 0x4c)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)));
        iVar5 = ((int *)(gen_frame + 0x0))[0];
        puVar6 = ((undefined4 *)GEN_TOP(F_004296a0(0x28,0,0x191)));
        *puVar6 = *((undefined4 *)GEN_TOP((iVar5 + 0x14)));
        puVar6[1] = *((undefined4 *)GEN_TOP((iVar5 + 0x14)));
        puVar6[2] = *((undefined4 *)GEN_TOP((iVar5 + 0x14)));
        *(undefined2 *)(puVar6 + 9) = 0;
        if (puVar6 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
          *(undefined2 *)(puVar6 + 3) = (*(undefined2 *)(gen_frame + 0x44));
          *(undefined2 *)(puVar6 + 4) = (*(undefined2 *)(gen_frame + 0x48));
          F_00a93db0(puVar6 + 5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4c)));
        }
        F_00a9a0b0(((undefined *)GEN_TOP((iVar5 + 0x10))) GEN_EDX_ARG,((int *)(gen_frame + 0x1c)),puVar6,0);
        F_00a934c0(((undefined1 *)(gen_frame + 0x4c)) GEN_EDX_ARG);
        iVar5 = ((int *)(gen_frame + 0x1c))[0];
        *((undefined2 *)GEN_TOP((((int *)(gen_frame + 0x1c))[0] + 0x10))) = *((undefined2 *)GEN_TOP(((*(uint *)(gen_frame + 0x64)) + 0x22)));
        puVar9 = ((uint *)GEN_TOP(F_00ab2750((uint)*((ushort *)GEN_TOP((iVar10 + 0x34))))));
        F_0042b630(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG);
        (*(undefined4 *)(gen_frame + 0xea)) = 0;
        (*(undefined4 *)(gen_frame + 0xe6)) = 0;
        (*(short *)(gen_frame + 0xe4)) = (short)(*(int *)(gen_frame + 0x28)) + (short)(*(uint *)(gen_frame + 0x60));
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xea)) + 0)) = *((undefined1 *)GEN_TOP((iVar10 + 0x3a)));
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xea)) + 2)) = *((undefined1 *)GEN_TOP((iVar10 + 0x3c)));
        uVar7 = (*(int *)(gen_frame + 0x28)) + (*(uint *)(gen_frame + 0x60)) >> 3;
        bVar12 = ((&REFG(undefined, 0x14ab32a))[(int)(uVar7)] &
                 (byte)(1 << ((char)((*(int *)(gen_frame + 0x28)) + (*(uint *)(gen_frame + 0x60))) + (char)uVar7 * -8 & 0x1fU))) != 0;
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xea)) + 3)) = bVar12;
        (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xe6)) + 0)) = *((undefined2 *)GEN_TOP((iVar10 + 0x36)));
        uVar4 = *((undefined4 *)GEN_TOP((iVar10 + 0x36)));
        (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xe6)) + 2)) = *((undefined2 *)GEN_TOP((iVar10 + 0x38)));
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xea)) + 1)) = *((undefined1 *)GEN_TOP((iVar10 + 0x3b)));
        (*(undefined4 *)(gen_frame + 0xea)) = CONCAT22(CONCAT11(bVar12,*((undefined1 *)GEN_TOP((iVar10 + 0x3c)))),
                           *((undefined2 *)GEN_TOP((iVar10 + 0x3a))));
        (*(undefined4 *)(gen_frame + 0xe6)) = uVar4;
        if (puVar9 != ((uint *)GEN_TOP(0x0))) {
          F_0042e430(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG,(*puVar9 & 0xffffff) + (int)puVar9);
        }
        ((undefined4 *)(gen_frame + 0xbc))[0] = *((undefined4 *)GEN_TOP((iVar10 + 0xc)));
        ((undefined4 *)(gen_frame + 0xbc))[1] = *((undefined4 *)GEN_TOP((iVar10 + 0x10)));
        ((undefined4 *)(gen_frame + 0xbc))[2] = *((undefined4 *)GEN_TOP((iVar10 + 0x14)));
        ((undefined4 *)(gen_frame + 0xbc))[3] = *((undefined4 *)GEN_TOP((iVar10 + 0x18)));
        (*(undefined4 *)(gen_frame + 0xcc)) = *((undefined4 *)GEN_TOP((iVar10 + 0x1c)));
        (*(undefined4 *)(gen_frame + 0xd0)) = *((undefined4 *)GEN_TOP((iVar10 + 0x20)));
        (*(undefined4 *)(gen_frame + 0xd4)) = *((undefined4 *)GEN_TOP((iVar10 + 0x24)));
        (*(undefined4 *)(gen_frame + 0xd8)) = *((undefined4 *)GEN_TOP((iVar10 + 0x28)));
        (*(undefined4 *)(gen_frame + 0xdc)) = *((undefined4 *)GEN_TOP((iVar10 + 0x2c)));
        (*(undefined4 *)(gen_frame + 0xe0)) = *((undefined4 *)GEN_TOP((iVar10 + 0x30)));
        puVar1 = *((undefined1 * PTR32 *)GEN_TOP((iVar5 + 0x18)));
        if ((((undefined1 *)(gen_frame + 0x68)) < puVar1) && (puVar2 = *((undefined1 * PTR32 *)GEN_TOP((iVar5 + 0x14))), puVar2 <= ((undefined1 *)(gen_frame + 0x68)))) {
          if (puVar1 == *((undefined1 * PTR32 *)GEN_TOP((iVar5 + 0x1c)))) {
            F_00a944e0(((undefined *)GEN_TOP((iVar5 + 0x14))) GEN_EDX_ARG,1);
          }
          pvVar3 = *((undefined * PTR32 *)GEN_TOP((iVar5 + 0x18)));
          uVar7 = (((int)((undefined1 *)(gen_frame + 0x68)) - (int)puVar2) / 0x88) * 0x88 + *((int *)GEN_TOP((iVar5 + 0x14)));
          (*(undefined * PTR32 *)(gen_frame + 0x5c)) = pvVar3;
          (*(uint *)(gen_frame + 0x64)) = uVar7;
          if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
            F_0042cbc0(pvVar3 GEN_EDX_ARG,uVar7);
            puVar6 = ((undefined4 *)GEN_TOP((uVar7 + 0x54)));
            puVar11 = ((undefined4 *)GEN_TOP(((int)pvVar3 + 0x54)));
            for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 - 1) {
              *puVar11 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar11 = puVar11 + 1;
            }
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x5c)) + 0x7c))) = *((undefined2 *)GEN_TOP(((*(uint *)(gen_frame + 0x64)) + 0x7c)));
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x5c)) + 0x7e))) = *((undefined2 *)GEN_TOP(((*(uint *)(gen_frame + 0x64)) + 0x7e)));
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x5c)) + 0x80))) = *((undefined2 *)GEN_TOP(((*(uint *)(gen_frame + 0x64)) + 0x80)));
            *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x5c)) + 0x82))) = *((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0x64)) + 0x82)));
            *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x5c)) + 0x83))) = *((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0x64)) + 0x83)));
            *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x5c)) + 0x84))) = *((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0x64)) + 0x84)));
            *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x5c)) + 0x85))) = *((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0x64)) + 0x85)));
          }
        }
        else {
          if (puVar1 == *((undefined1 * PTR32 *)GEN_TOP((iVar5 + 0x1c)))) {
            F_00a944e0(((undefined *)GEN_TOP((iVar5 + 0x14))) GEN_EDX_ARG,1);
          }
          pvVar3 = *((undefined * PTR32 *)GEN_TOP((iVar5 + 0x18)));
          (*(undefined * PTR32 *)(gen_frame + 0x5c)) = pvVar3;
          if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
            F_0042cbc0(pvVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x68)));
            puVar6 = ((undefined4 *)(gen_frame + 0xbc));
            puVar11 = ((undefined4 *)GEN_TOP(((int)pvVar3 + 0x54)));
            for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 - 1) {
              *puVar11 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar11 = puVar11 + 1;
            }
            *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x5c)) + 0x7c))) = (*(short *)(gen_frame + 0xe4));
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x5c)) + 0x7e))) = (undefined2)(*(undefined4 *)(gen_frame + 0xe6));
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x5c)) + 0x80))) = (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xe6)) + 2));
            *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x5c)) + 0x82))) = (undefined1)(*(undefined4 *)(gen_frame + 0xea));
            *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x5c)) + 0x83))) = (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xea)) + 1));
            *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x5c)) + 0x84))) = (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xea)) + 2));
            *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x5c)) + 0x85))) = (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xea)) + 3));
          }
        }
        *((int *)GEN_TOP((iVar5 + 0x18))) = *((int *)GEN_TOP((iVar5 + 0x18))) + 0x88;
        F_0042c880(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG);
        this = (*(int * PTR32 *)(gen_frame + 0x40));
      }
      uVar7 = (*(uint *)(gen_frame + 0x60)) + 1;
      (*(uint *)(gen_frame + 0x60)) = uVar7;
    } while (uVar7 < param_2);
  }
  puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24)));
  if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
    *((int *)GEN_TOP(((int)this + 0x24))) = 0;
  }
  if (*((uint *)GEN_TOP(((int)this + 0x2c))) < 0x68) {
    F_00a82e50(this GEN_EDX_ARG);
  }
  else if (200 < *((uint *)GEN_TOP(((int)this + 0x30)))) {
    *((int *)GEN_TOP(((int)this + 0x34))) = 2;
    piVar8 = *(int * PTR32 *)this;
    if (piVar8 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 4))))(piVar8 GEN_EDX_ARG,5);
    }
  }
  F_00a9b1a0(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2c)),*(*(undefined4 * PTR32 *)(gen_frame + 0x34)),(*(undefined4 * PTR32 *)(gen_frame + 0x34)));
  uVar13 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x34)),0x28,0x191);
  return (uint)uVar13;
}

/* ref: FUN_00a82e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a82e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa82e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined4 * this_00;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x125)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
  if (0x68 < *((int *)GEN_TOP(((int)this + 0x2c))) + uVar2) {
    uVar2 = 0x68 - *((int *)GEN_TOP(((int)this + 0x2c)));
  }
  this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    this_00 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,uVar2,0);
    this_00[5] = uVar2;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e7904));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xa828a0));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24))) = this_00;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG,uVar3,*((int *)GEN_TOP(((int)this + 0x2c))) + uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x24))));
  return uVar2;
}

/* ref: FUN_00a82f00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a82f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa82f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  
  F_00a72450(((undefined *)GEN_TOP(((int)this + 0x1904))) GEN_EDX_FWD);
  F_00a70fe0(((undefined *)GEN_TOP(((int)this + 0x1950))) GEN_EDX_ARG);
  F_00a73150(((undefined *)GEN_TOP(((int)this + 0x237c))) GEN_EDX_ARG);
  F_00a82810(((undefined *)GEN_TOP(((int)this + 0x2344))) GEN_EDX_ARG);
  F_00a6fb50(((undefined *)GEN_TOP(((int)this + 0x23f4))) GEN_EDX_ARG);
  F_00a66f30(((undefined *)GEN_TOP(((int)this + 0x2448))) GEN_EDX_ARG);
  F_00a73a30(((undefined *)GEN_TOP(((int)this + 0x5ef8))) GEN_EDX_ARG);
  F_00a69ca0(((undefined *)GEN_TOP(((int)this + 0x6ec4))) GEN_EDX_ARG);
  if (REFG(int, 0x1488344) != 0) {
    iVar4 = (int)this + 0x7084;
    this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
    F_006ff0a0(this_00 GEN_EDX_ARG,iVar4);
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x70a1))) = 0;
  F_00b9ff40(((undefined *)GEN_TOP(((int)this + 0x70ec))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x735c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x73b5))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x73b8))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x7411))) = 0;
  F_00a808c0(((undefined *)GEN_TOP(((int)this + 0x7418))) GEN_EDX_ARG);
  F_00a859d0(((undefined *)GEN_TOP(((int)this + 0x8948))) GEN_EDX_ARG);
  F_00bc6580();
  F_00b9d660(((undefined *)GEN_TOP(((int)this + 0x92f4))) GEN_EDX_ARG);
  uVar3 = *((uint *)GEN_TOP(((int)this + 0xb070)));
  if (uVar3 != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xb06c)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG,uVar3);
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xb070)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0xb070))) = 0;
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xb06c))) = 0;
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x92e4)));
  *((undefined4 *)GEN_TOP(((int)this + 0xb074))) = 0;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x92e4))) = 0;
  }
  return uVar3;
}

/* ref: Client::Game::UI::QuestUI::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a83030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa83030u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  byte bVar4;
  undefined * pQVar5;
  uint uVar6;
  
  F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  uVar6 = 0;
  if (param_2 != 0) {
    pQVar5 = this + *(int *)(this + 0x74) * 0x58 + 0x5f0;
    do {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + uVar6 * 4))) + 4)));
      if (iVar1 == 0) break;
      F_0042e430(pQVar5 GEN_EDX_ARG,(*((uint *)GEN_TOP((iVar1 + 4))) & 0xffffff) + iVar1 + 4);
      uVar6 = uVar6 + 1;
      pQVar5 = pQVar5 + 0x58;
    } while (uVar6 < param_2);
  }
  if (*(int *)(this + 0x58) != 0) {
    *(uint *)(this + 0x74) = *(int *)(this + 0x74) + param_2;
    bVar4 = F_00a6dec0(this GEN_EDX_ARG);
    if (bVar4 != 0) {
      return 1;
    }
    puVar2 = *(undefined4 * PTR32 *)(this + 0x5c);
    *(undefined4 *)(this + 0x74) = 0;
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x5c) = 0;
    }
    pQVar5 = this + 0x60;
    *(undefined4 *)(this + 0x58) = 0;
    if (pQVar5 != ((undefined1 *)(gen_frame + 0x0))) {
      iVar1 = *(int *)pQVar5;
      *(int *)pQVar5 = 0;
      *(undefined4 *)(this + 100) = 0;
      iVar3 = *(int *)(this + 0x68);
      *(undefined4 *)(this + 0x68) = 0;
      if (iVar1 != 0) {
        F_00429760(iVar1,(iVar3 - iVar1 >> 2) * 4,800);
      }
    }
  }
  puVar2 = *(undefined4 * PTR32 *)(this + 0xe34);
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *(undefined4 *)(this + 0xe34) = 0;
  }
  *(undefined4 *)(this + 0xe30) = 0;
  *(undefined4 *)(this + 0xfb0) = 0;
  F_00a81bd0(this GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00a83140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a83140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa83140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x60, 0, 4);
  uint * puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 * puVar8;
  int iVar9;
  undefined * pvVar10;
  uint uVar11;
  undefined4 * puVar12;
  
  puVar12 = ((undefined4 *)GEN_TOP((param_2 * 0x34 + *((int *)GEN_TOP((param_1 + 0x5c))))));
  uVar3 = puVar12[0xb];
  uVar4 = *puVar12;
  (*(undefined4 *)(gen_frame + 0x38)) = puVar12[10];
  uVar2 = *(undefined2 *)(puVar12 + 3);
  (*(undefined4 *)(gen_frame + 0x3c)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x54)) = uVar4;
  (*(undefined2 *)(gen_frame + 0x58)) = uVar2;
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = this;
  F_00a912a0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,&(*(int *)(gen_frame + 0x4c)),&(*(undefined4 *)(gen_frame + 0x54)));
  iVar9 = (*(int *)(gen_frame + 0x4c));
  if ((*(int *)(gen_frame + 0x4c)) == *((int *)GEN_TOP(((int)this + 0x14)))) {
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    puVar8 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,800)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = puVar8;
    *puVar8 = puVar8;
    puVar8[1] = puVar8;
    puVar8[2] = puVar8;
    *(undefined1 *)(puVar8 + 5) = 1;
    *((undefined1 *)GEN_TOP(((int)puVar8 + 0x15))) = 1;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)(gen_frame + 0x54));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    puVar8 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,800)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar8;
    *puVar8 = puVar8;
    puVar8[1] = puVar8;
    puVar8[2] = puVar8;
    *(undefined1 *)(puVar8 + 5) = 1;
    *((undefined1 *)GEN_TOP(((int)puVar8 + 0x15))) = 1;
    F_00a92ec0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1c)));
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)(gen_frame + 0x2c));
    (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x30));
    puVar8 = ((undefined4 *)GEN_TOP(F_004296a0(0x2c,0,800)));
    *puVar8 = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
    puVar8[1] = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
    puVar8[2] = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
    *(undefined2 *)(puVar8 + 10) = 0;
    F_00a992a0((int)this + 0x1d,puVar8 + 3,&(*(undefined4 *)(gen_frame + 0x0)));
    F_00a9a1a0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x50)),puVar8,0);
    F_0095c5e0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4c)),*(*(undefined4 * PTR32 *)(gen_frame + 0x8)),(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x8)),0x18,800);
    F_0095c5e0(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4c)),*(*(undefined4 * PTR32 *)(gen_frame + 0x20)),(*(undefined4 * PTR32 *)(gen_frame + 0x20)));
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x20)),0x18,800);
    iVar9 = (*(int *)(gen_frame + 0x50));
    this = (*(undefined * PTR32 *)(gen_frame + 0x44));
  }
  (*(uint *)(gen_frame + 0x40)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = ((undefined *)GEN_TOP(param_2));
  F_009670d0(((undefined *)GEN_TOP((iVar9 + 0x10))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x48)),&(*(uint *)(gen_frame + 0x40)));
  uVar5 = *((uint *)GEN_TOP((iVar9 + 0x20)));
  if (uVar5 != 0) {
    uVar2 = *((undefined2 *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x5c))) + 0xc + *((int *)GEN_TOP((iVar9 + 0x24))) * 0x34)));
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x54)) + 0)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x54)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x54)) + 2)),uVar2);
    if ((byte)(*(undefined2 *)(gen_frame + 0x58)) <= (byte)uVar2) {
      if ((byte)uVar2 != (byte)(*(undefined2 *)(gen_frame + 0x58))) {
        return uVar5;
      }
      if ((byte)((ushort)(*(undefined2 *)(gen_frame + 0x58)) >> 8) <= (byte)((ushort)uVar2 >> 8)) {
        return uVar5;
      }
    }
    F_00a826a0(this GEN_EDX_ARG,uVar5,*((undefined4 *)GEN_TOP((iVar9 + 0x24))),0);
  }
  puVar8 = &(*(undefined4 *)(gen_frame + 0x3c));
  (*(uint *)(gen_frame + 0x40)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = ((undefined *)GEN_TOP(param_2));
  pvVar10 = ((undefined *)GEN_TOP(F_00a9de00(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x38)))));
  pvVar10 = ((undefined *)GEN_TOP(F_00a9b010(pvVar10 GEN_EDX_ARG,puVar8)));
  F_009670d0(pvVar10 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x34)),&(*(uint *)(gen_frame + 0x40)));
  *((uint *)GEN_TOP((iVar9 + 0x20))) = param_1;
  *((int *)GEN_TOP((iVar9 + 0x24))) = param_2;
  uVar5 = puVar12[9];
  uVar11 = param_1;
  if (uVar5 < 0x6c) {
    puVar1 = ((uint *)GEN_TOP(((int)this + (uVar5 >> 6) * 8 + 0x20)));
    uVar7 = (ulonglong)((byte)uVar5 & 0x3f);
    lVar6 = ((ulonglong)((uVar7 < 0x40) ? ((1L << uVar7)) : 0));
    uVar11 = (uint)lVar6;
    *puVar1 = *puVar1 | uVar11;
    puVar1[1] = puVar1[1] | (uint)((ulonglong)lVar6 >> 0x20);
  }
  return uVar11;
}

/* ref: FUN_00a83380 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a83380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa83380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint * puVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int local_8;
  
  iVar5 = *((int *)GEN_TOP((param_1 + 0x5c)));
  local_8 = 0;
  if (iVar5 != *((int *)GEN_TOP((param_1 + 0x60)))) {
    do {
      uVar2 = *((uint *)GEN_TOP((iVar5 + 0x24)));
      if (uVar2 < 0x6c) {
        puVar1 = ((uint *)GEN_TOP(((int)this + (uVar2 >> 6) * 8 + 0x20)));
        uVar4 = (ulonglong)((byte)uVar2 & 0x3f);
        lVar3 = ((ulonglong)((uVar4 < 0x40) ? ((1L << uVar4)) : 0));
        *puVar1 = *puVar1 | (uint)lVar3;
        puVar1[1] = puVar1[1] | (uint)((ulonglong)lVar3 >> 0x20);
      }
      F_00a826a0(this GEN_EDX_FWD,param_1,local_8,1);
      local_8 = local_8 + 1;
      iVar5 = iVar5 + 0x34;
    } while (iVar5 != *((int *)GEN_TOP((param_1 + 0x60))));
  }
  return;
}

/* ref: FUN_00a833f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a833f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa833f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  
  *((uint *)GEN_TOP(((int)this + 0x14c4))) = param_1;
  if ((param_1 & 1) != 0) {
    if (*((int *)GEN_TOP(((int)this + 0x14f4))) != 0) {
      piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14f0)));
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x4c))))(piVar3 GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x14f4))));
      }
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14f4)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
        *((undefined4 *)GEN_TOP(((int)this + 0x14f4))) = 0;
      }
    }
    piVar3 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x14cc)))));
    if (piVar3 != *((int * PTR32 *)GEN_TOP(((int)this + 0x14cc)))) {
      do {
        F_00a83380(this GEN_EDX_ARG,piVar3 + 2);
        piVar3 = ((int *)GEN_TOP(*piVar3));
      } while (piVar3 != ((int *)GEN_TOP(*((int *)GEN_TOP(((int)this + 0x14cc))))));
    }
    F_00a97b00(((undefined *)GEN_TOP(((int)this + 0x14cc))) GEN_EDX_ARG);
    F_00a8ff70(((undefined *)GEN_TOP(((int)this + 0x14d8))) GEN_EDX_ARG);
  }
  if ((param_1 & 2) != 0) {
    if (*((int *)GEN_TOP(((int)this + 0x1520))) != 0) {
      piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x151c)));
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x4c))))(piVar3 GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x1520))));
      }
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1520)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
        *((undefined4 *)GEN_TOP(((int)this + 0x1520))) = 0;
      }
    }
    piVar3 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x14f8)))));
    if (piVar3 != *((int * PTR32 *)GEN_TOP(((int)this + 0x14f8)))) {
      do {
        F_00a83380(this GEN_EDX_ARG,piVar3 + 2);
        piVar3 = ((int *)GEN_TOP(*piVar3));
      } while (piVar3 != ((int *)GEN_TOP(*((int *)GEN_TOP(((int)this + 0x14f8))))));
    }
    F_00a97b00(((undefined *)GEN_TOP(((int)this + 0x14f8))) GEN_EDX_ARG);
    F_00a8ff70(((undefined *)GEN_TOP(((int)this + 0x1504))) GEN_EDX_ARG);
  }
  uVar2 = param_1;
  if ((param_1 & 4) != 0) {
    piVar3 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x1524)))));
    if (piVar3 != *((int * PTR32 *)GEN_TOP(((int)this + 0x1524)))) {
      do {
        F_00a83380(this GEN_EDX_ARG,piVar3 + 2);
        piVar3 = ((int *)GEN_TOP(*piVar3));
      } while (piVar3 != ((int *)GEN_TOP(*((int *)GEN_TOP(((int)this + 0x1524))))));
    }
    uVar2 = F_00a97b00(((undefined *)GEN_TOP(((int)this + 0x1524))) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_00a83530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a83530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa83530u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_FRAME_DECL_TOP(0xf0, 0, 4);
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined * this_00;
  undefined4 * puVar6;
  int iVar7;
  float10 fVar8;
  undefined1 * puVar9;
  undefined4 uVar10;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  (*(uint *)(gen_frame + 0xe8)) = uVar3;
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = this;
  (*(uint *)(gen_frame + 0x60)) = 0;
  if (param_4 != 0) {
    iVar7 = param_1 - (int)param_2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = param_2;
    (*(int *)(gen_frame + 0x70)) = iVar7;
    (*(int *)(gen_frame + 0x50)) = param_3 - (int)param_2;
    puVar6 = param_2;
    do {
      uVar3 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x50)) + (int)puVar6)));
      uVar4 = uVar3 >> 0x10;
      (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = puVar6;
      if (uVar4 == 1) {
        uVar10 = *puVar6;
        (*(uint *)(gen_frame + 0x3c)) = uVar3;
        (*(undefined4 *)(gen_frame + 0x34)) = *((undefined4 *)GEN_TOP((iVar7 + (int)puVar6)));
        (*(undefined4 *)(gen_frame + 0x38)) = uVar10;
        F_00a93380(((undefined *)GEN_TOP(((int)this + 0x14d8))) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x34)));
      }
      else if (uVar4 == 6) {
        uVar10 = *puVar6;
        (*(uint *)(gen_frame + 0x48)) = uVar3;
        (*(undefined4 *)(gen_frame + 0x40)) = *((undefined4 *)GEN_TOP((iVar7 + (int)puVar6)));
        (*(undefined4 *)(gen_frame + 0x44)) = uVar10;
        F_00a93380(((undefined *)GEN_TOP(((int)this + 0x1504))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x40)));
      }
      else if ((uVar4 == 0x17) &&
              (puVar5 = ((undefined4 *)GEN_TOP(F_00ab37e0(*puVar6))), iVar7 = (*(int *)(gen_frame + 0x70)),
              puVar5 != ((undefined4 *)GEN_TOP(0x0)))) {
        (*(uint *)(gen_frame + 0x54)) = (uint)*(ushort *)(puVar5 + 8);
        uVar3 = F_00ab1c90((uint)*(ushort *)(puVar5 + 8));
        (*(uint *)(gen_frame + 0x6c)) = uVar3;
        iVar7 = (*(int *)(gen_frame + 0x70));
        if (uVar3 != 0) {
          if ((*(uint *)&REFG(undefined, 0x14b50bc) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x14b50bc) = *(uint *)&REFG(undefined, 0x14b50bc) | 1;
            F_0042b630(&REFG(char * PTR32, 0x14b5068) GEN_EDX_ARG);
            F_00c47de6(((code *)REFP(0x107c650)));
          }
          if (*REFG(char * PTR32, 0x14b5068) == '\0') {
            F_00ab0230(0xc5f,&REFG(char * PTR32, 0x14b5068));
          }
          uVar3 = F_0042a990(&REFG(char * PTR32, 0x14b5068) GEN_EDX_ARG);
          (*(undefined4 *)(gen_frame + 0x78)) = 0;
          (*(undefined4 *)(gen_frame + 0x7c)) = 0;
          F_0042cc20(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG,uVar3,REFG(undefined4, 0x108cc50));
          (*(undefined4 *)(gen_frame + 0xd4)) = 0;
          (*(undefined4 *)(gen_frame + 0xd8)) = 0;
          (*(undefined4 *)(gen_frame + 0xdc)) = 0;
          (*(undefined2 *)(gen_frame + 0xe4)) = 0;
          iVar7 = *((int *)GEN_TOP(((int)this + 0x1524)));
          uVar3 = F_00a968a0(iVar7,*((undefined4 *)GEN_TOP((iVar7 + 4))),&(*(undefined4 *)(gen_frame + 0x78)));
          if (*((int *)GEN_TOP(((int)this + 0x1528))) == -2) {
                    
            F_00c4579a(((char *)REFP(0x108b258)));
          }
          *((int *)GEN_TOP(((int)this + 0x1528))) = *((int *)GEN_TOP(((int)this + 0x1528))) + 1;
          *((uint *)GEN_TOP((iVar7 + 4))) = uVar3;
          **((uint * PTR32 *)GEN_TOP((uVar3 + 4))) = uVar3;
          F_00a93fd0(&(*(undefined4 *)(gen_frame + 0x78)) GEN_EDX_ARG);
          uVar1 = *((ushort *)GEN_TOP(((*(uint *)(gen_frame + 0x6c)) + 0x1e)));
          iVar7 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1524))) + 4)));
          (*(uint *)(gen_frame + 0x6c)) = (uint)*((ushort *)GEN_TOP(((*(uint *)(gen_frame + 0x6c)) + 0x20)));
          if ((puVar5[9] == 9) || (puVar5[9] == 0x33)) {
            fVar8 = F_007733a0(GEN_ARGF(gen_bits2f(puVar5[4])));
            (*(float *)(gen_frame + 0x64)) = (float)fVar8;
          }
          else {
            (*(float *)(gen_frame + 0x64)) = gen_bits2f(puVar5[4]);
          }
          uVar10 = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x70)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x74)))));
          (*(undefined4 *)(gen_frame + 0x5c)) = *puVar5;
          (*(undefined4 *)(gen_frame + 0x4c)) = puVar5[1];
          uVar2 = puVar5[6];
          (*(undefined4 *)(gen_frame + 0x8)) = uVar10;
          puVar9 = ((undefined1 *)(gen_frame + 0xc));
          (*(undefined4 *)(gen_frame + 0x58)) = puVar5[2];
          (*(undefined4 *)(gen_frame + 0x0)) = *(*(undefined4 * PTR32 *)(gen_frame + 0x74));
          (*(int *)(gen_frame + 0x4)) = iVar7 + 0x10;
          this_00 = ((undefined *)GEN_TOP(F_006b8c00()));
          F_006ded20(this_00 GEN_EDX_ARG,puVar9,uVar10);
          (*(byte *)(gen_frame + 0x32)) = (*(byte *)(gen_frame + 0x32)) & 0xfc;
          (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0x5c));
          (*(undefined2 *)(gen_frame + 0x20)) = (undefined2)(*(uint *)(gen_frame + 0x54));
          (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)(gen_frame + 0x4c));
          (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x58));
          (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0x64));
          (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
          (*(uint *)(gen_frame + 0x28)) = (uint)uVar1;
          (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x6c));
          (*(undefined2 *)(gen_frame + 0x30)) = 0;
          (*(undefined1 *)(gen_frame + 0x33)) = 0xff;
          F_00a942b0(((undefined *)GEN_TOP((iVar7 + 100))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
          F_00a83140((*(undefined * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,iVar7 + 8,
                       (*((int *)GEN_TOP((iVar7 + 0x68))) - *((int *)GEN_TOP((iVar7 + 100)))) / 0x34 - 1);
          puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x74));
          this = (*(undefined * PTR32 *)(gen_frame + 0x68));
          iVar7 = (*(int *)(gen_frame + 0x70));
        }
      }
      uVar3 = (*(uint *)(gen_frame + 0x60)) + 1;
      puVar6 = puVar6 + 1;
      (*(uint *)(gen_frame + 0x60)) = uVar3;
      (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = puVar6;
    } while (uVar3 < param_4);
  }
  return uVar3;
}

/* ref: FUN_00a83890 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a83890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa83890u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0xc8, 8, 4);
  uint * puVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  float * pfVar5;
  undefined4 * puVar6;
  int iVar7;
  float fVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc4));
  puVar1 = *((uint * PTR32 *)GEN_TOP((*param_1 + 4)));
  if ((puVar1 != ((uint *)GEN_TOP(0x0))) &&
     (*((char *)GEN_TOP(((puVar1[0x2d5] & 0xffffff) + 0xb54 + (int)puVar1))) != '\0')) {
    uVar4 = *((uint *)GEN_TOP(((int)this + 0x14e4)));
    iVar7 = 0;
    if (*((int * PTR32 *)GEN_TOP(((int)this + 0x14d8))) != ((int *)GEN_TOP(0x0))) {
      iVar7 = **((int * PTR32 *)GEN_TOP(((int)this + 0x14d8)));
    }
    if (*((uint *)GEN_TOP((iVar7 + 8))) <= uVar4) {
      uVar4 = uVar4 - *((uint *)GEN_TOP((iVar7 + 8)));
    }
    uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar7 + 4))) + uVar4 * 4))) + 4)));
    (*(undefined4 *)(gen_frame + 0x48)) = uVar2;
    pfVar5 = ((float *)GEN_TOP(F_00ab37e0(uVar2)));
    if (pfVar5 != ((float *)GEN_TOP(0x0))) {
      (*(uint *)(gen_frame + 0x44)) = (uint)*(ushort *)(pfVar5 + 8);
      uVar4 = F_00ab1c90((uint)*(ushort *)(pfVar5 + 8));
      (*(uint *)(gen_frame + 0x4c)) = uVar4;
      if (uVar4 != 0) {
        uVar4 = F_00a93f90(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG,(*puVar1 & 0xffffff) + (int)puVar1);
        F_00a97ab0(((undefined *)GEN_TOP(((int)this + 0x14cc))) GEN_EDX_ARG,uVar4);
        F_00a93fd0(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG);
        iVar7 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14cc))) + 4)));
        (*(uint *)(gen_frame + 0x3c)) = (uint)*((ushort *)GEN_TOP(((*(uint *)(gen_frame + 0x4c)) + 0x1e)));
        (*(uint *)(gen_frame + 0x4c)) = (uint)*((ushort *)GEN_TOP(((*(uint *)(gen_frame + 0x4c)) + 0x20)));
        fVar8 = F_00a6a920(pfVar5);
        (*(float *)(gen_frame + 0x34)) = fVar8;
        uVar4 = F_005d4e80(&REFG(undefined, 0x1379c6c) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x48)),(undefined4)gen_fl2bits(pfVar5[6]));
        (*(uint *)(gen_frame + 0x38)) = uVar4;
        puVar6 = ((undefined4 *)GEN_TOP(F_00a91340(((undefined *)GEN_TOP(((int)this + 0x14d8))) GEN_EDX_ARG)));
        (*(int * PTR32 *)(gen_frame + 0x40)) = ((int *)GEN_TOP((iVar7 + 100)));
        uVar4 = F_00a6a710(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x48)),iVar7 + 0x10,*puVar6,*pfVar5,pfVar5[1],pfVar5[2],
                             (*(float *)(gen_frame + 0x34)),(*(uint *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0x4c)),0xff);
        piVar3 = (*(int * PTR32 *)(gen_frame + 0x40));
        F_00a942b0((*(int * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG,uVar4);
        F_00a83140(this GEN_EDX_ARG,iVar7 + 8,(piVar3[1] - *piVar3) / 0x34 - 1);
      }
    }
  }
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x14e8)));
  if (uVar4 != 0) {
    *((int *)GEN_TOP(((int)this + 0x14e4))) = *((int *)GEN_TOP(((int)this + 0x14e4))) + 1;
    if (*((uint *)GEN_TOP(((int)this + 0x14e0))) <= *((uint *)GEN_TOP(((int)this + 0x14e4)))) {
      *((undefined4 *)GEN_TOP(((int)this + 0x14e4))) = 0;
    }
    uVar4 = uVar4 - 1;
    *((uint *)GEN_TOP(((int)this + 0x14e8))) = uVar4;
    if (uVar4 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x14e4))) = 0;
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x14e8))) != 0) {
    uVar4 = *((uint *)GEN_TOP(((int)this + 0x14e4)));
    if (*((int * PTR32 *)GEN_TOP(((int)this + 0x14d8))) == ((int *)GEN_TOP(0x0))) {
      iVar7 = 0;
    }
    else {
      iVar7 = **((int * PTR32 *)GEN_TOP(((int)this + 0x14d8)));
    }
    if (*((uint *)GEN_TOP((iVar7 + 8))) <= uVar4) {
      uVar4 = uVar4 - *((uint *)GEN_TOP((iVar7 + 8)));
    }
    F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14f4))) GEN_EDX_ARG,0,
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar7 + 4))) + uVar4 * 4))) + 8))));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x14f0))) + 0x48))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x14f0))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x14f4))));
    return uVar4;
  }
  puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14f4)));
  if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x14f4))) = 0;
  }
  if (REFG(int, 0x14b4eb4) < 1) {
    REFG(int, 0x14b4eb4) = 1;
  }
  return uVar4;
}

/* ref: FUN_00a83b10 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a83b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa83b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0xc8, 8, 4);
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  float * pfVar4;
  int iVar5;
  undefined4 * puVar6;
  int iVar7;
  float fVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc4));
  iVar7 = *((int *)GEN_TOP((*param_1 + 4)));
  if (iVar7 != 0) {
    uVar3 = *((uint *)GEN_TOP(((int)this + 0x1510)));
    iVar5 = 0;
    if (*((int * PTR32 *)GEN_TOP(((int)this + 0x1504))) != ((int *)GEN_TOP(0x0))) {
      iVar5 = **((int * PTR32 *)GEN_TOP(((int)this + 0x1504)));
    }
    if (*((uint *)GEN_TOP((iVar5 + 8))) <= uVar3) {
      uVar3 = uVar3 - *((uint *)GEN_TOP((iVar5 + 8)));
    }
    puVar6 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 4))) + uVar3 * 4)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = puVar6;
    uVar1 = puVar6[1];
    (*(undefined4 *)(gen_frame + 0x44)) = uVar1;
    pfVar4 = ((float *)GEN_TOP(F_00ab37e0(uVar1)));
    if (pfVar4 != ((float *)GEN_TOP(0x0))) {
      (*(uint *)(gen_frame + 0x38)) = (uint)*(ushort *)(pfVar4 + 8);
      uVar3 = F_00ab1c90((uint)*(ushort *)(pfVar4 + 8));
      (*(uint *)(gen_frame + 0x4c)) = uVar3;
      if (uVar3 != 0) {
        if (*((char *)GEN_TOP((iVar7 + 0xc))) == '\0') {
          if ((*(uint *)&REFG(undefined, 0x14b516c) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x14b516c) = *(uint *)&REFG(undefined, 0x14b516c) | 1;
            F_0042b630(&REFG(char * PTR32, 0x14b5118) GEN_EDX_ARG);
            F_00c47de6(((code *)REFP(0x107c670)));
          }
          if (*REFG(char * PTR32, 0x14b5118) == '\0') {
            F_00ab0230(0x24d,&REFG(char * PTR32, 0x14b5118));
          }
          puVar6 = &REFG(char * PTR32, 0x14b5118);
        }
        else {
          if ((*(uint *)&REFG(undefined, 0x14b516c) & 2) == 0) {
            *(uint *)&REFG(undefined, 0x14b516c) = *(uint *)&REFG(undefined, 0x14b516c) | 2;
            F_0042b630(&REFG(char * PTR32, 0x14b50c0) GEN_EDX_ARG);
            F_00c47de6(((code *)REFP(0x107c660)));
          }
          if (*REFG(char * PTR32, 0x14b50c0) == '\0') {
            F_00ab0230(0x243,&REFG(char * PTR32, 0x14b50c0));
          }
          puVar6 = &REFG(char * PTR32, 0x14b50c0);
        }
        uVar3 = F_0042a990(puVar6 GEN_EDX_ARG);
        uVar3 = F_00a93f90(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG,uVar3);
        F_00a97ab0(((int *)GEN_TOP(((int)this + 0x14f8))) GEN_EDX_ARG,uVar3);
        F_00a93fd0(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG);
        iVar7 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14f8))) + 4)));
        (*(uint *)(gen_frame + 0x3c)) = (uint)*((ushort *)GEN_TOP(((*(uint *)(gen_frame + 0x4c)) + 0x1e)));
        (*(uint *)(gen_frame + 0x4c)) = (uint)*((ushort *)GEN_TOP(((*(uint *)(gen_frame + 0x4c)) + 0x20)));
        fVar8 = F_00a6a920(pfVar4);
        (*(float *)(gen_frame + 0x34)) = fVar8;
        (*(int * PTR32 *)(gen_frame + 0x40)) = ((int *)GEN_TOP((iVar7 + 100)));
        uVar3 = F_00a6a710(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x44)),iVar7 + 0x10,*(*(undefined4 * PTR32 *)(gen_frame + 0x48)),*pfVar4,pfVar4[1],pfVar4[2],
                             fVar8,(*(uint *)(gen_frame + 0x38)),(undefined4)gen_fl2bits(pfVar4[6]),(*(uint *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0x4c)),
                             0xff);
        piVar2 = (*(int * PTR32 *)(gen_frame + 0x40));
        F_00a942b0((*(int * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG,uVar3);
        F_00a83140(this GEN_EDX_ARG,iVar7 + 8,(piVar2[1] - *piVar2) / 0x34 - 1);
      }
    }
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x1514)));
  if (uVar3 != 0) {
    *((int *)GEN_TOP(((int)this + 0x1510))) = *((int *)GEN_TOP(((int)this + 0x1510))) + 1;
    if (*((uint *)GEN_TOP(((int)this + 0x150c))) <= *((uint *)GEN_TOP(((int)this + 0x1510)))) {
      *((undefined4 *)GEN_TOP(((int)this + 0x1510))) = 0;
    }
    uVar3 = uVar3 - 1;
    *((uint *)GEN_TOP(((int)this + 0x1514))) = uVar3;
    if (uVar3 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x1510))) = 0;
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x1514))) == 0) {
    puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1520)));
    if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x1520))) = 0;
    }
    return uVar3;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x1510)));
  if (*((int * PTR32 *)GEN_TOP(((int)this + 0x1504))) == ((int *)GEN_TOP(0x0))) {
    iVar7 = 0;
  }
  else {
    iVar7 = **((int * PTR32 *)GEN_TOP(((int)this + 0x1504)));
  }
  if (*((uint *)GEN_TOP((iVar7 + 8))) <= uVar3) {
    uVar3 = uVar3 - *((uint *)GEN_TOP((iVar7 + 8)));
  }
  F_00cb4540(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1520))) GEN_EDX_ARG,0,
               *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar7 + 4))) + uVar3 * 4))) + 8))));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x151c))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x151c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1520))));
  return uVar3;
}

/* ref: FUN_00a83de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a83de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa83de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)this = param_1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x34)));
  uVar2 = 1;
  if (iVar1 != 1) {
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 1;
    if (iVar1 != 2) {
      F_00a82e50(this GEN_EDX_FWD);
    }
    uVar2 = F_00a728c0(this GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_00a83e20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a83e20(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5), GEN_P(char param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xa83e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  GEN_PIN(char param_7 = (char)gen_a6;)
  GEN_FRAME_DECL_TOP(0x50, 0, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined * this;
  float10 fVar6;
  undefined1 * puVar7;
  
  uVar3 = param_6;
  (*(uint *)(gen_frame + 0x44)) = (uint)*((ushort *)GEN_TOP((param_6 + 0x20)));
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = param_1;
  uVar4 = F_00ab1c90((uint)*((ushort *)GEN_TOP((param_6 + 0x20))));
  uVar5 = 0;
  if (uVar4 != 0) {
    (*(uint *)(gen_frame + 0x3c)) = (uint)*((ushort *)GEN_TOP((uVar4 + 0x1e)));
    (*(uint *)(gen_frame + 0x38)) = (uint)*((ushort *)GEN_TOP((uVar4 + 0x20)));
    if ((*((int *)GEN_TOP((param_6 + 0x24))) == 9) || (*((int *)GEN_TOP((param_6 + 0x24))) == 0x33)) {
      fVar6 = F_007733a0(GEN_ARGF(*((float *)GEN_TOP((param_6 + 0x10)))));
      param_6 = (uint)gen_fl2bits((float)fVar6);
    }
    else {
      param_6 = *((uint *)GEN_TOP((param_6 + 0x10)));
    }
    uVar5 = F_005d4e80(&REFG(undefined, 0x1379c6c) GEN_EDX_ARG,param_3,*((undefined4 *)GEN_TOP((uVar3 + 0x18))));
    uVar1 = *((undefined4 *)GEN_TOP(uVar3));
    (*(uint *)(gen_frame + 0x40)) = uVar5;
    (*(int *)(gen_frame + 0x4)) = (int)param_1 + param_2 * 0x70 + 0x38;
    uVar2 = *((undefined4 *)GEN_TOP((uVar3 + 4)));
    puVar7 = ((undefined1 *)(gen_frame + 0xc));
    (*(undefined4 *)(gen_frame + 0x48)) = *((undefined4 *)GEN_TOP((uVar3 + 8)));
    (*(uint *)(gen_frame + 0x0)) = param_3;
    (*(undefined4 *)(gen_frame + 0x8)) = param_4;
    this = ((undefined *)GEN_TOP(F_006b8c00()));
    F_006ded20(this GEN_EDX_ARG,puVar7,param_4);
    (*(byte *)(gen_frame + 0x32)) = (*(byte *)(gen_frame + 0x32)) & 0xfc;
    (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
    (*(undefined2 *)(gen_frame + 0x20)) = (undefined2)(*(uint *)(gen_frame + 0x44));
    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x3c));
    (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
    (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x38));
    (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x40));
    (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x48));
    (*(undefined1 *)(gen_frame + 0x33)) = param_5;
    (*(uint *)(gen_frame + 0x1c)) = param_6;
    (*(undefined2 *)(gen_frame + 0x30)) = 0;
    uVar5 = F_00a942b0(((undefined *)GEN_TOP(((int)param_1 + param_2 * 0x70 + 0x8c))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
    if ((param_7 != '\0') || (*((char *)GEN_TOP(((int)param_1 + param_2 * 0x70 + 0x9d))) != '\0')) {
      uVar5 = F_00a83140((*(undefined * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,(int)param_1 + param_2 * 0x70 + 0x30,
                           (*((int *)GEN_TOP(((int)param_1 + param_2 * 0x70 + 0x90))) -
                           *((int *)GEN_TOP(((int)param_1 + param_2 * 0x70 + 0x8c)))) / 0x34 - 1);
      *((undefined1 *)GEN_TOP(((int)param_1 + param_2 * 0x70 + 0x9c))) = 1;
    }
  }
  return uVar5;
}

/* ref: FUN_00a83f80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a83f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa83f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP((param_1 * 0x70 + 0x30 + (int)this)));
  F_00a83380(this GEN_EDX_FWD,this_00);
  uVar1 = F_00a73d10(this_00 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a83fa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a83fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa83fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  GEN_FRAME_DECL_TOP(0x54, 12, 4);
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined * this;
  uint uVar6;
  float10 fVar7;
  undefined1 * puVar8;
  int iVar9;
  
  uVar4 = (*(uint *)&gen_args[3]);
  (*(uint *)(gen_frame + 0x3c)) = (uint)*((ushort *)GEN_TOP(((*(uint *)&gen_args[3]) + 0x20)));
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = param_1;
  uVar5 = F_00ab1c90((uint)*((ushort *)GEN_TOP(((*(uint *)&gen_args[3]) + 0x20))));
  uVar6 = 0;
  if (uVar5 != 0) {
    (*(uint *)(gen_frame + 0x38)) = (uint)*((ushort *)GEN_TOP((uVar5 + 0x1e)));
    (*(uint *)(gen_frame + 0x34)) = (uint)*((ushort *)GEN_TOP((uVar5 + 0x20)));
    if ((*((int *)GEN_TOP((uVar4 + 0x24))) == 9) || (*((int *)GEN_TOP((uVar4 + 0x24))) == 0x33)) {
      fVar7 = F_007733a0(GEN_ARGF(*((float *)GEN_TOP((uVar4 + 0x10)))));
      (*(uint *)&gen_args[3]) = (uint)gen_fl2bits((float)fVar7);
    }
    else {
      (*(uint *)&gen_args[3]) = *((uint *)GEN_TOP((uVar4 + 0x10)));
    }
    (*(undefined4 *)(gen_frame + 0x48)) = *((undefined4 *)GEN_TOP(uVar4));
    puVar8 = ((undefined1 *)(gen_frame + 0xc));
    (*(undefined4 *)(gen_frame + 0x44)) = *((undefined4 *)GEN_TOP((uVar4 + 4)));
    uVar3 = *((undefined4 *)GEN_TOP((uVar4 + 0x18)));
    (*(undefined4 *)(gen_frame + 0x40)) = *((undefined4 *)GEN_TOP((uVar4 + 8)));
    (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)&gen_args[1]);
    (*(int *)(gen_frame + 0x4)) = (int)param_1 + (*(uint *)&gen_args[0]) * 0x70 + 0xd58;
    (*(int *)(gen_frame + 0x8)) = (*(int *)&gen_args[2]);
    iVar9 = (*(int *)&gen_args[2]);
    this = ((undefined *)GEN_TOP(F_006b8c00()));
    F_006ded20(this GEN_EDX_ARG,puVar8,iVar9);
    (*(byte *)(gen_frame + 0x32)) = (*(byte *)(gen_frame + 0x32)) & 0xfc;
    (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0x48));
    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x38));
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)(gen_frame + 0x44));
    (*(undefined2 *)(gen_frame + 0x20)) = (undefined2)(*(uint *)(gen_frame + 0x3c));
    (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x40));
    (*(uint *)(gen_frame + 0x1c)) = (*(uint *)&gen_args[3]);
    (*(undefined4 *)(gen_frame + 0x24)) = uVar3;
    (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x34));
    (*(undefined2 *)(gen_frame + 0x30)) = 0;
    (*(undefined1 *)(gen_frame + 0x33)) = 0xff;
    F_00a942b0(((undefined *)GEN_TOP(((int)param_1 + (*(uint *)&gen_args[0]) * 0x70 + 0xdac))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
    uVar6 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x1450)));
    if ((uVar6 != 0) &&
       (((sVar1 = *((short *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x1d4))) + 2))), sVar1 == -0x7fff || (sVar1 == -0x7ffe))
        || (sVar1 == -0x7ff9)))) {
      uVar2 = *((ushort *)GEN_TOP((uVar6 + 0x310)));
      (*(uint *)&gen_args[3]) = 0;
      uVar6 = F_006c42f0((uint)uVar2,&(*(uint *)&gen_args[3]));
      if ((uVar6 == (*(uint *)&gen_args[0])) &&
         (uVar6 = *((uint *)GEN_TOP(((int)param_1 + (*(uint *)&gen_args[0]) * 0x70 + 0xdb0))), (*(int *)&gen_args[2]) == 0xebf9)) {
        *((byte *)GEN_TOP((uVar6 - 2))) = *((byte *)GEN_TOP((uVar6 - 2))) | 1;
      }
    }
    if (((*(char *)&gen_args[4]) != '\0') || (*((char *)GEN_TOP(((int)param_1 + (*(uint *)&gen_args[0]) * 0x70 + 0xdbd))) != '\0')) {
      uVar6 = F_00a83140((*(undefined * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,(int)param_1 + (*(uint *)&gen_args[0]) * 0x70 + 0xd50,
                           (*((int *)GEN_TOP(((int)param_1 + (*(uint *)&gen_args[0]) * 0x70 + 0xdb0))) -
                           *((int *)GEN_TOP(((int)param_1 + (*(uint *)&gen_args[0]) * 0x70 + 0xdac)))) / 0x34 - 1);
      *((undefined1 *)GEN_TOP(((int)param_1 + (*(uint *)&gen_args[0]) * 0x70 + 0xdbc))) = 1;
    }
  }
  return uVar6;
}

/* ref: FUN_00a84160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a84160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa84160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP((param_1 * 0x70 + 0xd50 + (int)this)));
  F_00a83380(this GEN_EDX_FWD,this_00);
  uVar1 = F_00a73d10(this_00 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a841b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a841b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa841b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  if (((*((byte *)GEN_TOP(((int)this + 0x14c4))) & 1) != 0) && (*((int *)GEN_TOP(((int)this + 0x14e8))) != 0)) {
    uVar2 = *((uint *)GEN_TOP(((int)this + 0x14e4)));
    iVar4 = 0;
    if (*((int * PTR32 *)GEN_TOP(((int)this + 0x14d8))) != ((int *)GEN_TOP(0x0))) {
      iVar4 = **((int * PTR32 *)GEN_TOP(((int)this + 0x14d8)));
    }
    if (*((uint *)GEN_TOP((iVar4 + 8))) <= uVar2) {
      uVar2 = uVar2 - *((uint *)GEN_TOP((iVar4 + 8)));
    }
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 4))) + uVar2 * 4))) + 8)));
    if (*((int *)GEN_TOP(((int)this + 0x14f0))) == 0) {
      uVar2 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x11);
      *((uint *)GEN_TOP(((int)this + 0x14f0))) = uVar2;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
    if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar3 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      F_00cb4700(puVar3 GEN_EDX_ARG,1,0);
      puVar3[5] = 1;
      *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10e78ec));
      puVar3[6] = this;
      puVar3[7] = ((code *)REFP(0xa83890));
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14f4))) = puVar3;
    F_00cb4540(puVar3 GEN_EDX_ARG,0,uVar1);
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x14f0))) + 0x48))))
                       (*((int * PTR32 *)GEN_TOP(((int)this + 0x14f0))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x14f4))));
  }
  if (((*((byte *)GEN_TOP(((int)this + 0x14c4))) & 2) != 0) && (*((int *)GEN_TOP(((int)this + 0x1514))) != 0)) {
    uVar2 = *((uint *)GEN_TOP(((int)this + 0x1510)));
    iVar4 = 0;
    if (*((int * PTR32 *)GEN_TOP(((int)this + 0x1504))) != ((int *)GEN_TOP(0x0))) {
      iVar4 = **((int * PTR32 *)GEN_TOP(((int)this + 0x1504)));
    }
    if (*((uint *)GEN_TOP((iVar4 + 8))) <= uVar2) {
      uVar2 = uVar2 - *((uint *)GEN_TOP((iVar4 + 8)));
    }
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 4))) + uVar2 * 4))) + 8)));
    if (*((int *)GEN_TOP(((int)this + 0x151c))) == 0) {
      uVar2 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x9c);
      *((uint *)GEN_TOP(((int)this + 0x151c))) = uVar2;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00406b90(0x20,0,0)));
    if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar3 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      F_00cb4700(puVar3 GEN_EDX_ARG,1,0);
      puVar3[5] = 1;
      *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10e78ec));
      puVar3[6] = this;
      puVar3[7] = ((code *)REFP(0xa83b10));
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1520))) = puVar3;
    F_00cb4540(puVar3 GEN_EDX_ARG,0,uVar1);
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x151c))) + 0x48))))
                       (*((int * PTR32 *)GEN_TOP(((int)this + 0x151c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1520))));
  }
  *((byte *)GEN_TOP(((int)this + 0x14c8))) = *((byte *)GEN_TOP(((int)this + 0x14c8))) | 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14c4))) = 0;
  return in_EAX;
}

/* ref: FUN_00a84350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a84350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa84350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  ushort uVar1;
  short sVar2;
  uint uVar3;
  
  if (param_1 == ((int *)GEN_TOP(0x0))) {
    F_00a83380(this GEN_EDX_FWD,((undefined *)GEN_TOP(((int)this + 0x1454))));
    F_00a73d10(((undefined *)GEN_TOP(((int)this + 0x1454))) GEN_EDX_ARG);
    uVar3 = *((uint *)GEN_TOP(((int)this + 0x1450)));
    if ((uVar3 != 0) &&
       (((sVar2 = *((short *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x1d4))) + 2))), sVar2 == -0x7fff || (sVar2 == -0x7ffe))
        || (sVar2 == -0x7ff9)))) {
      uVar3 = F_00a71480(this GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((uVar3 + 0x310))),0);
    }
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1b8))))(param_1 GEN_EDX_ARG,(int)this + 0x145c);
    *((undefined4 *)GEN_TOP(((int)this + 0x1454))) = 3;
    *((undefined4 *)GEN_TOP(((int)this + 0x1458))) = *((undefined4 *)GEN_TOP(param_1[0x75]));
    *((undefined1 *)GEN_TOP(((int)this + 0x14c1))) = 0;
    uVar1 = *((ushort *)GEN_TOP((param_1[0x75] + 2)));
    uVar3 = (uint)uVar1;
    if (((uVar1 == 0x8001) || (uVar1 == 0x8002)) || (uVar1 == 0x8007)) {
      uVar3 = F_00a71480(this GEN_EDX_ARG,(uint)*(ushort *)(param_1 + 0xc4),1);
      *((int * PTR32 *)GEN_TOP(((int)this + 0x1450))) = param_1;
      return uVar3;
    }
  }
  *((int * PTR32 *)GEN_TOP(((int)this + 0x1450))) = param_1;
  return uVar3;
}

/* ref: FUN_00a84440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a84440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa84440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  ulonglong uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    uVar2 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x125);
    if (uVar2 != 0) {
      piVar3 = ((int *)GEN_TOP(F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x125)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x4c))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x24))));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x28))) != 0) {
    uVar2 = F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x127);
    if (uVar2 != 0) {
      piVar3 = ((int *)GEN_TOP(F_0052fbb0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x127)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x4c))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x28))));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x28)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
    }
  }
  F_00a90060(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x18))),0x18,0x191);
  F_00a9dfd0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar4 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x24,0x191);
  return (uint)uVar4;
}

/* ref: FUN_00a84550 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a84550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa84550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  short sVar1;
  uint uVar2;
  
  F_00a83380(this GEN_EDX_FWD,((undefined *)GEN_TOP(((int)this + 0x1454))));
  F_00a73d10(((undefined *)GEN_TOP(((int)this + 0x1454))) GEN_EDX_ARG);
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x1450)));
  if ((uVar2 != 0) &&
     (((sVar1 = *((short *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x1d4))) + 2))), sVar1 == -0x7fff || (sVar1 == -0x7ffe)) ||
      (sVar1 == -0x7ff9)))) {
    uVar2 = F_00a71480(this GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((uVar2 + 0x310))),0);
  }
  *((byte *)GEN_TOP(((int)this + 0x14c8))) = *((byte *)GEN_TOP(((int)this + 0x14c8))) & 0xfe;
  *((undefined4 *)GEN_TOP(((int)this + 0x1450))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14f4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x151c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1520))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14c4))) = 0;
  return uVar2;
}

/* ref: FUN_00a845e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a845e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa845e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  F_00a9e680(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  return (uint)this;
}

/* ref: FUN_00a84610 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a84610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa84610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x904))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 4))),0,0x900);
  *((undefined4 *)GEN_TOP(((int)this + 0x908))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x120c))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x90c))),0,0x900);
  *((undefined4 *)GEN_TOP(((int)this + 0x1210))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1214))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1218))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x121c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1220))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1224))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1228))) = 0;
  F_00a68080(((undefined *)GEN_TOP(((int)this + 0x1230))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x1544))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x154c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1550))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1554))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1558))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x155c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1560))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x15ca))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1564))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1568))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x156c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1574))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x15b4))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x15c6))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x15c8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1570))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x1600))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1604))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1608))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x160c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1610))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1614))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1618))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x161c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1620))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1624))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x1628))),0,0x100);
  *((undefined4 *)GEN_TOP(((int)this + 0x1728))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x172c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1730))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1734))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1738))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x173c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1740))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1744))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1748))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x174c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1750))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1754))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1758))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x175a))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 6000))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1774))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1778))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x177a))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x177c))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x1780))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1784))) = 0;
  F_00b7af70(((undefined *)GEN_TOP(((int)this + 0x1788))) GEN_EDX_ARG,0);
  *((undefined2 *)GEN_TOP(((int)this + 0x18fc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1900))) = 0;
  F_00a74d40(((undefined *)GEN_TOP(((int)this + 0x1904))) GEN_EDX_ARG);
  F_00a74da0(((undefined *)GEN_TOP(((int)this + 0x1950))) GEN_EDX_ARG);
  F_00a66e30(((undefined *)GEN_TOP(((int)this + 0x2448))) GEN_EDX_ARG);
  F_00a73a30(((undefined *)GEN_TOP(((int)this + 0x5ef8))) GEN_EDX_ARG);
  F_00a73730(((undefined *)GEN_TOP(((int)this + 0x6ec4))) GEN_EDX_ARG);
  F_00b9fee0(((undefined *)GEN_TOP(((int)this + 0x70ec))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x735c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x73b5))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x73b8))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x7411))) = 0;
  F_00a84550(((undefined *)GEN_TOP(((int)this + 0x7418))) GEN_EDX_ARG);
  F_00a859d0(((undefined *)GEN_TOP(((int)this + 0x8948))) GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)this + 0x8b74))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x8b76))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x8b78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8b84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8b88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8b8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8b90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8b94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8b98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8b9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8ba0))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x8ba4))) = 0;
  F_00415250(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,(int)this + 0x92e8);
  F_00bc6530(((undefined *)GEN_TOP(((int)this + 0x8ba8))) GEN_EDX_ARG);
  F_00b9d7c0(((undefined *)GEN_TOP(((int)this + 0x92f4))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0xb030))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb034))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb038))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb03c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xb042))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xb040))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb044))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb048))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb04c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb050))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xb056))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xb054))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb058))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb05c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb060))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb064))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xb068))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xb06a))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb06c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb070))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb074))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x92e4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb114))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb07c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb080))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb084))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb088))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb08c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb090))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb094))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb098))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb09c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0ac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0b4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0b8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0cc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0d0))) = 0;
  pvVar1 = F_00c48350(((undefined *)GEN_TOP(((int)this + 0xb0d4))),0,0x40);
  return (uint)pvVar1;
}

/* ref: FUN_00a84a20 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00a84a20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa84a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x168e))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: Client::UI::Misc::RaptureHotbarModule::ClearCallback::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a84a50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa84a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10e7874));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a84a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a84a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa84a90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined2 *)GEN_TOP(((int)this + 4))) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_00a84ad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a84ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa84ad0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x58))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_2;
  return param_1;
}

/* ref: FUN_00a84af0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a84af0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa84af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 99))) = param_2;
  return param_2;
}

/* ref: FUN_00a84b00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a84b00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa84b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0xde))) = param_2;
  return param_2;
}

/* ref: FUN_00a84b10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a84b10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa84b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0xdb))) = param_2;
  return param_2;
}

/* ref: FUN_00a84b20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a84b20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa84b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0xe0))) = param_2;
  return param_2;
}

/* ref: FUN_00a84b30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a84b30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa84b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *((byte *)GEN_TOP((param_1 + 0xdc))) = param_2;
  *((undefined1 *)GEN_TOP((param_1 + 0xdd))) = param_3;
  return param_2;
}

/* ref: FUN_00a84b50 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a84b50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa84b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x250))) = param_2;
  return param_2;
}

/* ref: FUN_00a84b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a84b60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa84b60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP((param_1 + 0x25c + (param_2 >> 2) * 4)));
  *puVar1 = *puVar1 | (uint)param_3 << GEN_SHC(('\x03' - ((byte)param_2 & 3)) * '\b', ('\x03' - ((byte)param_2 & 3)) * '\b');
  return param_2 >> 2;
}

/* ref: FUN_00a84b90 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00a84b90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa84b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((ushort *)GEN_TOP((in_ecx + 0x272 + param_2 * 2)));
}

/* ref: FUN_00a84bb0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00a84bb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa84bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((ushort *)GEN_TOP((in_ecx + 0x296 + param_2 * 2)));
}

/* ref: FUN_00a84bd0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a84bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa84bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x2ba + (int)this))) &
         (byte)(1 << ((char)param_1 + (char)(param_1 >> 3) * -8 & 0x1fU))) != 0;
}

/* ref: FUN_00a84c00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a84c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa84c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x2d3 + (int)this))) &
         (byte)(1 << ((char)param_1 + (char)(param_1 >> 3) * -8 & 0x1fU))) != 0;
}

/* ref: FUN_00a84ca0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a84ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa84ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((byte *)GEN_TOP(((int)this + 10))) = *((byte *)GEN_TOP(((int)this + 10))) & 0xfc;
  *(undefined4 *)this = 9999;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 0;
  F_0042b630((int)this + 0x10 GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0x6e))) = *((byte *)GEN_TOP(((int)this + 0x6e))) & 0xfe;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x6c))) = 0;
  return (uint)this;
}

/* ref: FUN_00a84d00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a84d00(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa84d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP((in_ecx + 0x54))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x58))) = 0;
  *((undefined2 *)GEN_TOP((in_ecx + 0x5c))) = 0;
  return in_ecx;
}

/* ref: FUN_00a84d40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a84d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa84d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 9999;
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 9999;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 9999;
  *((undefined2 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 9999;
  *((undefined2 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 9999;
  *((undefined2 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 9999;
  *((undefined2 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 9999;
  *((undefined2 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 9999;
  *((undefined2 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x72))) = 0;
  F_00c48350(this,0,0x60);
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  return (uint)this;
}

/* ref: FUN_00a84e00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a84e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa84e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
  return (uint)uVar1;
}

/* ref: FUN_00a84e10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a84e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa84e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0042b630(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  return (uint)this;
}

/* ref: FUN_00a84e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a84e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa84e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = ((undefined *)GEN_TOP((param_1 * 0xa8 + 0x60 + (int)this)));
  if (*((char *)GEN_TOP((param_1 * 0xa8 + 0x66 + (int)this))) != '\0') {
    pvVar1 = ((undefined *)GEN_TOP(F_00a3a860(pvVar1 GEN_EDX_FWD)));
    uVar2 = F_0046e5e0(pvVar1 GEN_EDX_ARG);
    return uVar2;
  }
  uVar2 = *((uint *)GEN_TOP(((int)pvVar1 + 8)));
  if ((*((byte *)GEN_TOP(((int)pvVar1 + 0x14))) & 1) != 0) {
    uVar2 = uVar2 + 1000000;
  }
  return uVar2;
}

/* ref: FUN_00a84ec0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a84ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa84ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  uVar1 = F_0042e430(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x68))) = 0;
  return uVar1;
}

/* ref: FUN_00a84ef0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a84ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa84ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x12))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0xf8))) GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x14c))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  uVar1 = F_0042e430(((undefined *)GEN_TOP(((int)this + 0x1a0))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP(((int)this + 500))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  return uVar1;
}

/* ref: FUN_00a84fd0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a84fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa84fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x110))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x114))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x118))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  return 0;
}

/* ref: FUN_00a850a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a850a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa850a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined1 *)this = 0;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x110))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x124))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x128))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x13c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x140))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x154))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x158))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x16c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x170))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x114))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x118))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x11c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x120))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 300))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x130))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x134))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x144))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x148))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x150))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x15c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x160))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x164))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x168))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x174))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x178))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x17c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  return 0;
}

/* ref: FUN_00a85260 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a85260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa85260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int iVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  this_00 = ((undefined *)GEN_TOP(((int)this + 100)));
  iVar1 = 0x18;
  do {
    *((undefined1 *)GEN_TOP(((int)this_00 - 0x5c))) = 0;
    F_0042e430(((undefined *)GEN_TOP(((int)this_00 - 0x58))) GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
    F_0042e430(this_00 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    *((undefined4 *)GEN_TOP(((int)this_00 - 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x58))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x60))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 100))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x68))) = 0;
    *((undefined2 *)GEN_TOP(((int)this_00 + 0x5c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x6c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x70))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x74))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x78))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x7c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x80))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x84))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x88))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x8c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x90))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x94))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x98))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x9c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xa0))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xa4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xa8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xac))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xb0))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xb4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xb8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xbc))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xc0))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xc4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 200))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xcc))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xd0))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xd4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xd8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xdc))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xe0))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xe4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xe8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xec))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xf0))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xf4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xf8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xfc))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x100))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x104))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x108))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x10c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x110))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x114))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x118))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x11c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x120))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x124))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x128))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 300))) = 0;
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x18c)));
    iVar1 = iVar1 - 1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00a85430 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a85430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa85430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined2 *)this = 0;
  this_00 = ((undefined *)GEN_TOP(((int)this + 4)));
  iVar2 = 0x18;
  do {
    uVar1 = F_0042e430(this_00 GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0;
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)));
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00a85470 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a85470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa85470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x1a0))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x14c))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xf8))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a854b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a854b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa854b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_FWD);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a854e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a854e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa854e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  uVar1 = F_0042e430(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  return uVar1;
}

/* ref: FUN_00a85580 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a85580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa85580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined1 *)this = 0;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
  uVar1 = F_0042e430(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x110))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x124))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x128))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x13c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x140))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x154))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x158))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x16c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x170))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x114))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x118))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x11c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x120))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 300))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x130))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x134))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x144))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x148))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x150))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x15c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x160))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x164))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x168))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x174))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x178))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x17c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = 0;
  return uVar1;
}

/* ref: FUN_00a85730 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a85730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa85730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined4 *)this = 0;
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x60)));
  iVar2 = 0x18;
  do {
    *((undefined1 *)GEN_TOP(((int)this_00 - 0x5c))) = 0;
    F_0042e430(((undefined *)GEN_TOP(((int)this_00 - 0x58))) GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
    uVar1 = F_0042e430(this_00 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    *((undefined4 *)GEN_TOP(((int)this_00 - 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x58))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x60))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 100))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x68))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x6c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x70))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x74))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x78))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x7c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x80))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x84))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x88))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x8c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x90))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x94))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x98))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x9c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xa0))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xa4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xa8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xac))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xb0))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xb4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xb8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xbc))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xc0))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xc4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 200))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xcc))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xd0))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xd4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xd8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xdc))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xe0))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xe4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xe8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xec))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xf0))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xf4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xf8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xfc))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x100))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x104))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x108))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x10c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x110))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x114))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x118))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x11c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x120))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x124))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x128))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 300))) = 0;
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x18c)));
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00a858e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a858e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa858e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int local_8;
  
  F_0042e430(this GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x25e4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x25e8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x25e0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x25d4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x25d8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x25dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  this_00 = ((undefined *)GEN_TOP(((int)this + 0xb4)));
  local_8 = 0x18;
  do {
    uVar1 = F_00a85580(this_00 GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x18c)));
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0x25ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x25f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2618))) = 0;
  return uVar1;
}

/* ref: FUN_00a85980 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a85980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa85980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_FWD);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a859d0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a859d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa859d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x10)));
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0xe0000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0xe0)));
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0xe8)));
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x150))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x154))) = 0;
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x150)));
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x158)));
  for (iVar1 = 0x32; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x220))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x224))) = 0;
  return 0;
}

/* ref: FUN_00a85af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a85af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa85af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 8))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0xc))) = param_3;
  return param_1;
}

/* ref: FUN_00a85b10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a85b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa85b10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  *((uint *)GEN_TOP(((int)this + param_1 * 4 + 0x78))) = param_2;
  return param_2;
}

/* ref: FUN_00a85b30 */
GEN_OWN GEN_FRAME ulonglong GEN_THISCALL F_00a85b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa85b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return CONCAT44(*((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0xe4))),
                  *((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0xe0))));
}

/* ref: FUN_00a85b50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a85b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa85b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0xe0))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0xe4))) = param_3;
  return param_1;
}

/* ref: FUN_00a85b70 */
GEN_OWN GEN_FRAME ulonglong GEN_THISCALL F_00a85b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa85b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return CONCAT44(*((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0x154))),
                  *((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0x150))));
}

/* ref: FUN_00a85b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a85b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa85b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0x150))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0x154))) = param_3;
  return param_1;
}

/* ref: FUN_00a85bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a85bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa85bc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x220))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x224))) = param_2;
  return param_1;
}

/* ref: FUN_00a85c00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a85c00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa85c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00a85c10 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00a85c10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa85c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 6))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a85c20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a85c20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa85c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00a85c80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a85c80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa85c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((byte *)GEN_TOP((param_2 + 4 + in_ecx)));
}

/* ref: FUN_00a85c90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a85c90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa85c90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  *((byte *)GEN_TOP((param_2 + 4 + param_1))) = param_3;
  return param_3;
}

/* ref: FUN_00a85cb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a85cb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa85cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x24))) = param_2;
  return param_2;
}

/* ref: FUN_00a85cc0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a85cc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa85cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x25))) = param_2;
  return param_2;
}

/* ref: FUN_00a85d60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a85d60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa85d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  byte bVar1;
  
  bVar1 = (*((byte *)GEN_TOP((in_ecx + 0x32))) ^ param_2) & 1;
  *((byte *)GEN_TOP((in_ecx + 0x32))) = *((byte *)GEN_TOP((in_ecx + 0x32))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a85d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a85d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa85d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  return (uint)this;
}

/* ref: FUN_00a85e70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a85e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa85e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)this + 0x1888))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a85e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a85e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa85e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *((undefined2 *)GEN_TOP(((int)this + 0x188a))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a85eb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a85eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa85eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *((undefined2 *)GEN_TOP(((int)this + 4))) = *((undefined2 *)GEN_TOP((param_1 + 4)));
  *((undefined1 *)GEN_TOP(((int)this + 6))) = *((undefined1 *)GEN_TOP((param_1 + 6)));
  *((undefined2 *)GEN_TOP(((int)this + 8))) = *((undefined2 *)GEN_TOP((param_1 + 8)));
  *((undefined2 *)GEN_TOP(((int)this + 10))) = *((undefined2 *)GEN_TOP((param_1 + 10)));
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = *((undefined1 *)GEN_TOP((param_1 + 0xc)));
  return (uint)this;
}

/* ref: FUN_00a85f80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a85f80(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa85f80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  if (param_2 < 0x10) {
    *((undefined1 *)GEN_TOP((param_2 + 0xb080 + param_1))) = param_3;
  }
  return param_2;
}

/* ref: FUN_00a85fa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a85fa0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa85fa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  if (param_2 < 0xc) {
    *((undefined1 *)GEN_TOP((param_2 + 0xb090 + param_1))) = param_3;
  }
  return param_2;
}

/* ref: FUN_00a85fc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a85fc0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa85fc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  if (param_2 < 8) {
    *((undefined1 *)GEN_TOP((param_2 + 0xb0cc + param_1))) = param_3;
  }
  return param_2;
}

/* ref: FUN_00a85fe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a85fe0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa85fe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  if (param_2 < 0x40) {
    *((undefined1 *)GEN_TOP((param_2 + 0xb0d4 + param_1))) = param_3;
  }
  return param_2;
}

/* ref: FUN_00a86000 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a86000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa86000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0xb0d4 + (int)this))) & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_00a86030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86030(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa86030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  if (param_2 < 0x20) {
    *((undefined1 *)GEN_TOP((param_2 + 0xb09c + param_1))) = param_3;
  }
  return param_2;
}

/* ref: FUN_00a86050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86050(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa86050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  if (param_2 < 0x10) {
    *((undefined1 *)GEN_TOP((param_2 + 0xb0bc + param_1))) = param_3;
  }
  return param_2;
}

/* ref: FUN_00a860f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a860f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa860f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xbc))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a86110 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a86110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa86110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_FWD);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a86130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa86130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042ccf0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  return (uint)this;
}

/* ref: FUN_00a86160 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a86160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa86160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int iVar1;
  ulonglong uVar2;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 900))) GEN_EDX_FWD);
  iVar1 = 7;
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x390)));
  do {
    this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x70)));
    uVar2 = F_0042c880(this_00 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  return (uint)uVar2;
}

/* ref: FUN_00a861a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a861a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa861a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,param_1 + 4);
  *((undefined4 *)GEN_TOP(((int)this + 100))) = param_1[0x19];
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = param_1[0x1a];
  *((undefined1 *)GEN_TOP(((int)this + 0x6c))) = *(undefined1 *)(param_1 + 0x1b);
  *((undefined1 *)GEN_TOP(((int)this + 0x6d))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x6d)));
  *((byte *)GEN_TOP(((int)this + 0x6e))) =
       *((byte *)GEN_TOP(((int)this + 0x6e))) ^
       (*((byte *)GEN_TOP(((int)param_1 + 0x6e))) ^ *((byte *)GEN_TOP(((int)this + 0x6e)))) & 1;
  return (uint)this;
}

/* ref: FUN_00a86260 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a86260(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa86260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx + 4 GEN_EDX_FWD);
  return in_ecx;
}

/* ref: Client::Game::UI::Revive::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86290(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa86290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a863e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a863e0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa863e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x11c + *in_ecx;
}

/* ref: FUN_00a86430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86430(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa86430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x11c + *in_ecx;
}

/* ref: FUN_00a86470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86470(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa86470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x2624 + *in_ecx;
}

/* ref: FUN_00a864a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a864a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa864a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10e7894));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: ListenItemCallback_VQuestTodoList_UI_Game_Client_Event::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a864d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa864d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 4)));
  *((undefined1 *)GEN_TOP((uVar1 + 0x1dc))) = 1;
  return uVar1;
}

/* ref: ListenItemCallback_VQuestTodoList_UI_Game_Client_Event::vf2 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a864e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa864e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) == *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_00a86510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa86510u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10e78a4));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGatheringNotebook_UI_Game_Client_Game::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa86550u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x1c))))(*((undefined4 *)GEN_TOP(((int)this + 0x18))),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a86570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa86570u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e78b0));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VJournal_UI_Game_Client_Game::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a865b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa865b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x1c))))(*((undefined4 *)GEN_TOP(((int)this + 0x18))),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a865f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a865f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa865f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10e78bc));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VRecipeNotebook_UI_Game_Client_Game::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa86630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x1c))))(*((undefined4 *)GEN_TOP(((int)this + 0x18))),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a86650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa86650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00cb4700(this GEN_EDX_FWD,param_2,param_3);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e78c8));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  return (uint)this;
}

/* ref: FUN_00a86680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa86680u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e78d4))
  ;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VQuestTodoList_UI_Game_Client_Game::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a866c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa866c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x1c))))(*((undefined4 *)GEN_TOP(((int)this + 0x18))),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a866e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a866e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa866e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e78e0));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VQuestUI_UI_Game_Client_Game::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa86720u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x1c))))(*((undefined4 *)GEN_TOP(((int)this + 0x18))),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a86760 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a86760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa86760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00a86780 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a86780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa86780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00a867a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a867a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa867a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e78ec));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VMap_UI_Game_Client_Game::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a867e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa867e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x1c))))(*((undefined4 *)GEN_TOP(((int)this + 0x18))),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a86800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa86800u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10e78f8));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGuildOrderReward_UI_Game_Client_Game::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa86840u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x1c))))(*((undefined4 *)GEN_TOP(((int)this + 0x18))),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a86860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa86860u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10e7904));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VFishingNotebook_UI_Game_Client_Game::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a868a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa868a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x1c))))(*((undefined4 *)GEN_TOP(((int)this + 0x18))),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a868c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a868c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa868c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7910));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VFishingGuide_UI_Game_Client_Game::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa86900u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x1c))))(*((undefined4 *)GEN_TOP(((int)this + 0x18))),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a86920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa86920u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e791c));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VFishRecord_UI_Game_Client_Game::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa86960u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x1c))))(*((undefined4 *)GEN_TOP(((int)this + 0x18))),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: ListenItemCallback_VQuestTodoList_UI_Game_Client_Event::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86980(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa86980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10b8194));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: SheetWaiter_VScenarioTextReader_UI_Game_Client_Game::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a869b0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa869b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00cb4870(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a86a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86a90(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa86a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86ae0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa86ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86b40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86b40(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa86b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86bf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa86bf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a86c30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86c30(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa86c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86c90 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a86c90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa86c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,0x191);
  return uVar1;
}

/* ref: FUN_00a86cc0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a86cc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa86cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a86cf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86cf0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa86cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86d40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86d40(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa86d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86d90 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a86d90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa86d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x11c,800);
  return (uint)uVar1;
}

/* ref: FUN_00a86dc0 */
GEN_OWN GEN_FRAME uint F_00a86dc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa86dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xe0;
}

/* ref: FUN_00a86dd0 */
GEN_OWN GEN_FRAME uint F_00a86dd0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa86dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0xe1)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0xe1)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00a86e20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a86e20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa86e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xe4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a86e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86e50(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa86e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86ee0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a86ee0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa86ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x74,param_2,800);
  return uVar1;
}

/* ref: FUN_00a86f10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86f10(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa86f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86f80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a86f80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa86f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x74,param_2,800);
  return uVar1;
}

/* ref: FUN_00a86fa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a86fa0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa86fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a87010 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87010(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x74,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a87040(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a870e0 */
GEN_OWN GEN_FRAME uint F_00a870e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa870e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a870f0 */
GEN_OWN GEN_FRAME uint F_00a870f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa870f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00a87120 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87120(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x78,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87170 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87170(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,800);
  return uVar1;
}

/* ref: FUN_00a871c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a871c0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa871c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a87220 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87220(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_00a87250 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87250(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_00a872f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a872f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa872f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a87380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a87380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa87380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00a873a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a873a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa873a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a873d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a873d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa873d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00a87430 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87430(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 2,0);
  return (uint)uVar1;
}

/* ref: FUN_00a87480 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87480(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a874f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a874f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa874f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x88,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a87540 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87540(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a87590 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87590(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x24,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a875e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a875e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa875e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a87650 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87650(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x11c,param_2,800);
  return uVar1;
}

/* ref: FUN_00a876e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a876e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa876e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x11c,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87730 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87730(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x74,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87770 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87770(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x74,800);
  return (uint)uVar1;
}

/* ref: FUN_00a877a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a877a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa877a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a877d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a877d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa877d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87850 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87850(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87890 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87890(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x74,800);
  return (uint)uVar1;
}

/* ref: FUN_00a878c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a878c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa878c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a878f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a878f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa878f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87980 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87980(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x2624,800);
  return (uint)uVar1;
}

/* ref: FUN_00a879d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a879d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa879d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x74,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87a00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87a00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87a30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87a30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87aa0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87aa0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x34,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87ae0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87ae0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87b10 */
GEN_OWN GEN_FRAME uint F_00a87b10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa87b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x29;
}

/* ref: FUN_00a87b20 */
GEN_OWN GEN_FRAME uint F_00a87b20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa87b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a87b30 */
GEN_OWN GEN_FRAME uint F_00a87b30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa87b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00a87b40 */
GEN_OWN GEN_FRAME uint F_00a87b40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa87b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00a87b50 */
GEN_OWN GEN_FRAME uint F_00a87b50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa87b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00a87b80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87b80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x2c,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87ba0 */
GEN_OWN GEN_FRAME uint F_00a87ba0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa87ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00a87bd0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87bd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x78,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87c20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87c20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87c60 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87c60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87c90 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87c90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a87ce0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa87ce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a87de0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87de0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 2,param_2,0);
  return uVar1;
}

/* ref: FUN_00a87e10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87e10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87e50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87e50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x88,param_2,0x191);
  return uVar1;
}

/* ref: FUN_00a87e90 */
GEN_OWN GEN_FRAME uint F_00a87e90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa87e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x24;
}

/* ref: FUN_00a87ea0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87ea0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,0x191);
  return uVar1;
}

/* ref: FUN_00a87ed0 */
GEN_OWN GEN_FRAME uint F_00a87ed0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa87ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x20;
}

/* ref: FUN_00a87ee0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87ee0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x24,param_2,0x191);
  return uVar1;
}

/* ref: FUN_00a87f10 */
GEN_OWN GEN_FRAME uint F_00a87f10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa87f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_00a87f20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87f20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x191);
  return uVar1;
}

/* ref: FUN_00a87f50 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a87f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa87f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00a87f80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87f80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xe4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87fb0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a87fb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa87fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x11c,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87ff0 */
GEN_OWN GEN_FRAME uint F_00a87ff0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa87ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x70;
}

/* ref: FUN_00a88000 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a88000(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa88000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x74,param_2,800);
  return uVar1;
}

/* ref: FUN_00a88030 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a88030(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa88030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,800);
  return uVar1;
}

/* ref: FUN_00a88070 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a88070(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa88070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x2624,param_2,800);
  return uVar1;
}

/* ref: FUN_00a880c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a880c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa880c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x34,param_2,800);
  return uVar1;
}

/* ref: FUN_00a880f0 */
GEN_OWN GEN_FRAME uint F_00a880f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa880f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x20;
}

/* ref: FUN_00a88100 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a88100(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa88100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x24,param_2,800);
  return uVar1;
}

/* ref: FUN_00a88130 */
GEN_OWN GEN_FRAME uint F_00a88130(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa88130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x28;
}

/* ref: FUN_00a88140 */
GEN_OWN GEN_FRAME uint F_00a88140(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa88140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x29)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x29)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00a88160 */
GEN_OWN GEN_FRAME uint F_00a88160(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa88160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x29)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x29)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00a88180 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a88180(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa88180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x2c,param_2,800);
  return uVar1;
}

/* ref: FUN_00a881b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a881b0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa881b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a881d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a881d0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa881d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a881f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a881f0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa881f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a88230 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a88230(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa88230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00a88260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a88260(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa88260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

