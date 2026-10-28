#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00a64110 */
GEN_NOFRAME uint GEN_THISCALL F_00a64110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa64110u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    in_ecx = in_ecx + 1;
    if (*in_ecx == 0) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 100);
  return 0xffffffff;
}

/* ref: FUN_00a641b0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a641b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa641b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * param_1 = (code *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x3f4);
  if (0 < iVar2) {
    piVar1 = (int *)((int)this + 0x19c);
    do {
      (*param_1)(*piVar1 + param_2);
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00a642c0 */
GEN_FRAME uint GEN_FASTCALL F_00a642c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa642c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_3 + 400 + param_2 * 4);
  uVar2 = *(undefined4 *)(param_3 + param_2 * 4);
  *(undefined4 *)(param_3 + param_2 * 4) = *(undefined4 *)(param_3 + param_1 * 4);
  *(undefined4 *)(param_3 + 400 + param_2 * 4) = *(undefined4 *)(param_3 + 400 + param_1 * 4);
  *(undefined4 *)(param_3 + param_1 * 4) = uVar2;
  *(undefined4 *)(param_3 + 400 + param_1 * 4) = uVar1;
  return param_3;
}

/* ref: FUN_00a64300 */
GEN_FRAME unsigned int GEN_THISCALL F_00a64300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa64300u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  float * pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  float * pfVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  
  uVar6 = param_2;
  do {
    fVar8 = (float10)*((float *)GEN_TOP((param_1 + 400 + ((int)(uVar6 + param_3) >> 1) * 4)));
    uVar4 = uVar6;
    iVar7 = param_3;
    while( true ) {
      pfVar5 = (float *)(param_1 + 400 + uVar4 * 4);
      if ((float10)*pfVar5 < fVar8) {
        do {
          pfVar1 = pfVar5 + 1;
          pfVar5 = pfVar5 + 1;
          uVar4 = uVar4 + 1;
        } while ((!GEN_ISNAN(fVar8) && !GEN_ISNAN((float10)*pfVar1)) && !(fVar8 <= (float10)*pfVar1));
      }
      pfVar5 = (float *)(param_1 + 400 + iVar7 * 4);
      if (fVar8 < (float10)*pfVar5) {
        do {
          pfVar1 = pfVar5 - 1;
          pfVar5 = pfVar5 - 1;
          iVar7 = iVar7 - 1;
        } while ((!GEN_ISNAN((float10)*pfVar1) && !GEN_ISNAN(fVar8)) && !((float10)*pfVar1 <= fVar8));
      }
      if (iVar7 <= (int)uVar4) break;
      uVar3 = *(undefined4 *)(param_1 + uVar4 * 4);
      uVar2 = *(undefined4 *)(param_1 + 400 + uVar4 * 4);
      *(undefined4 *)(param_1 + uVar4 * 4) = *(undefined4 *)(param_1 + iVar7 * 4);
      *(undefined4 *)(param_1 + 400 + uVar4 * 4) = *(undefined4 *)(param_1 + 400 + iVar7 * 4);
      *(undefined4 *)(param_1 + iVar7 * 4) = uVar3;
      *(undefined4 *)(param_1 + 400 + iVar7 * 4) = uVar2;
      uVar4 = uVar4 + 1;
      iVar7 = iVar7 - 1;
    }
    if ((int)uVar6 < (int)(uVar4 - 1)) {
      F_00a64300(param_1 GEN_EDX_FWD,uVar6,uVar4 - 1);
    }
    uVar6 = iVar7 + 1;
  } while ((int)uVar6 < param_3);
  return 0;
}

/* ref: FUN_00a643d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a643d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa643d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = 100;
  do {
    this = (undefined *)((int)this + 4);
    if (*(undefined * PTR32 *)this != (undefined *)0x0) {
      F_00aa0be0(*(undefined * PTR32 *)this GEN_EDX_FWD);
    }
    iVar1 = iVar1 - 1;
  } while (iVar1 != 0);
  return;
}

/* ref: FUN_00a64400 */
GEN_NOFRAME unsigned int F_00a64400(void)
{
  GEN_ENTER(0xa64400u, 0u, 0u, 0u, 0u);
  if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
    F_00aa0c40(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
    return;
  }
  return;
}

/* ref: FUN_00a64420 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a64420(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa64420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = 100;
  do {
    this = (undefined *)((int)this + 4);
    if (*(undefined * PTR32 *)this != (undefined *)0x0) {
      F_00aa8770(*(undefined * PTR32 *)this GEN_EDX_FWD);
    }
    iVar1 = iVar1 - 1;
  } while (iVar1 != 0);
  return;
}

/* ref: FUN_00a64450 */
GEN_FRAME uint GEN_THISCALL F_00a64450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  piVar2 = this;
  while( true ) {
    piVar2 = piVar2 + 1;
    if ((*piVar2 != 0) && (*(int *)(*piVar2 + 0x74) == param_1)) break;
    iVar1 = iVar1 + 1;
    if (99 < iVar1) {
      return 0;
    }
  }
  return *(uint *)((int)this + iVar1 * 4 + 4);
}

/* ref: FUN_00a64490 */
GEN_FRAME uint GEN_THISCALL F_00a64490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa64490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  int iVar6;
  byte * pbVar7;
  int * piVar8;
  bool bVar9;
  
  if (param_1 != (byte *)0x0) {
    iVar6 = 0;
    piVar8 = this;
    do {
      piVar8 = piVar8 + 1;
      piVar2 = (int *)*piVar8;
      if (piVar2 != (int *)0x0) {
        if ((char)param_2 != '\0') {
          uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_FWD);
          if (uVar3 != 1) goto LAB_00a644f9;
        }
        pbVar4 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)*piVar8 + 0xc))((int *)*piVar8 GEN_EDX_ARG)));
        pbVar7 = param_1;
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00a644f0: ;
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00a644f5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00a644f0;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00a644f5: ;
        if (iVar5 == 0) {
          return *(uint *)((int)this + iVar6 * 4 + 4);
        }
      }
LAB_00a644f9: ;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 100);
  }
  return 0;
}

/* ref: FUN_00a64520 */
GEN_FRAME uint GEN_THISCALL F_00a64520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  if (param_1 != 0) {
    iVar3 = 0;
    piVar4 = this;
    do {
      piVar4 = piVar4 + 1;
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
        if (uVar2 == 2) {
          uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
          if (((char)uVar2 == '\x03') && (*(int *)(*piVar4 + 0x84) == *(int *)(param_1 + 0x74))) {
            return *(uint *)((int)this + iVar3 * 4 + 4);
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 100);
  }
  return 0;
}

/* ref: FUN_00a64590 */
GEN_FRAME uint GEN_THISCALL F_00a64590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  if (param_1 != 0) {
    iVar3 = 0;
    piVar4 = this;
    do {
      piVar4 = piVar4 + 1;
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
        if (uVar2 == 2) {
          uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
          if (((char)uVar2 == '\x02') && (*(int *)(*piVar4 + 0x84) == *(int *)(param_1 + 0x74))) {
            return *(uint *)((int)this + iVar3 * 4 + 4);
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 100);
  }
  return 0;
}

/* ref: FUN_00a64600 */
GEN_FRAME unsigned int GEN_THISCALL F_00a64600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = (int *)((int)this + 8);
  iVar3 = 0x14;
  do {
    iVar1 = piVar2[-1];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    iVar1 = piVar2[1];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    iVar1 = piVar2[2];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    iVar1 = piVar2[3];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    piVar2 = piVar2 + 5;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return 0;
}

/* ref: FUN_00a64690 */
GEN_FRAME byte GEN_THISCALL F_00a64690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    this = (undefined *)((int)this + 4);
    piVar1 = *(int * PTR32 *)this;
    if ((piVar1 != (int *)0x0) && (((byte)param_1 & 1 < *(byte *)((int)piVar1 + 0x8a)) != 0)) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1 GEN_EDX_FWD);
      if ((char)uVar2 == '\0') {
        return 0;
      }
      if (((*(byte *)((int)piVar1 + 0x8e) & 0x80) != 0) &&
         (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1 GEN_EDX_ARG), (char)uVar2 == '\0')) {
        return 0;
      }
    }
    uVar3 = uVar3 + 1;
    if (99 < uVar3) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00a64700 */
GEN_NOFRAME uint GEN_THISCALL F_00a64700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa64700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a64090(this GEN_EDX_FWD);
  F_00406ad0(*(undefined4 *)((int)this + 0x3f8));
  *(undefined4 *)((int)this + 0x3f8) = 0;
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 0x3fc));
  *(undefined4 *)((int)this + 0x3fc) = 0;
  return uVar1;
}

/* ref: FUN_00a64740 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a64740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa64740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  int * piVar3;
  
  F_00a54e30(&REFG(undefined * PTR32, 0x1334920) GEN_EDX_FWD,3);
  F_00a55030(&REFG(undefined * PTR32, 0x1334920) GEN_EDX_ARG,0x14);
  F_00a55210(&REFG(undefined * PTR32, 0x1334920) GEN_EDX_ARG,100);
  iVar2 = 100;
  piVar3 = this;
  do {
    piVar3 = piVar3 + 1;
    if (*piVar3 != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)*piVar3 + 0x84))((int *)*piVar3 GEN_EDX_ARG);
    }
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  if (*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x404) * 4 + 4))) != 0) {
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x404) * 4 + 4)));
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3 GEN_EDX_ARG);
    if (uVar1 != 0) {
      piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x404) * 4 + 4)));
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3 GEN_EDX_ARG)));
      F_00ac3c90(this_00 GEN_EDX_ARG);
    }
  }
  *(int *)((int)this + 0x404) = *(int *)((int)this + 0x404) + 1;
  if (99 < *(int *)((int)this + 0x404)) {
    *(undefined4 *)((int)this + 0x404) = 0;
  }
  return;
}

/* ref: FUN_00a647f0 */
GEN_FRAME uint F_00a647f0(void)
{
  GEN_ENTER(0xa647f0u, 0u, 0u, 0u, 0u);
  undefined1 gen_out[0x4];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a64810 */
GEN_FRAME unsigned int GEN_THISCALL F_00a64810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa64810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 gen_out[0x4];
  uint uVar1;
  int iVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  F_00ae6910();
  iVar2 = 100;
  do {
    this = (undefined *)((int)this + 4);
    if (*(undefined * PTR32 *)this != (undefined *)0x0) {
      F_00aa0b80(*(undefined * PTR32 *)this GEN_EDX_ARG);
    }
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0) GEN_EDX_ARG);
  return;
}

/* ref: Global::CreateCharacter */
GEN_FRAME uint GEN_THISCALL F_00a64860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa64860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  float10 fVar3;
  byte bVar4;
  int * this_00;
  undefined * this_01;
  
  if ((*(int *)((int)this + 0x3f8) != 0) && (*(int *)((int)this + 0x3fc) != 0)) {
    if (99 < param_2) {
      return 0;
    }
    if (*(int *)((int)this + param_2 * 4 + 4) != 0) {
      F_00a63f80(this GEN_EDX_FWD,param_2);
    }
    this_01 = ((undefined *)GEN_TOP((param_2 * 0x3e90 + *(int *)((int)this + 0x3f8))));
    if (this_01 == (undefined *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      this_00 = (int *)F_00a668f0(this_01 GEN_EDX_ARG);
    }
    iVar1 = *(int *)((int)this + 0x400);
    iVar2 = *(int *)((int)this + 0x3fc);
    ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xac))(this_00 GEN_EDX_ARG,param_2 * 2);
    F_00aa1460(this_00 GEN_EDX_ARG,iVar1 * param_2 + iVar2);
    F_00a5f450(this_00 GEN_EDX_ARG,param_1);
    fVar3 = (float10)0;
    ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x40))
              (this_00 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)fVar3),(undefined4)gen_fl2bits((float)fVar3),
               (undefined4)gen_fl2bits((float)fVar3));
    ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x48))(this_00 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)0));
    bVar4 = F_00ae0910(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,param_1);
    F_00aa6a30(this_00 GEN_EDX_ARG,(uint)bVar4);
    if (param_1 == REFG(int, 0x1379690)) {
      F_00a9f360(this_00 GEN_EDX_ARG);
    }
    *(int * PTR32 *)((int)this + param_2 * 4 + 4) = this_00;
    F_00a35730(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,this_00);
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_00a64960 */
GEN_FRAME uint GEN_THISCALL F_00a64960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = this;
  do {
    piVar1 = piVar1 + 1;
    if (*piVar1 == 0) {
      if (uVar2 == 0xffffffff) {
        return 0;
      }
      F_00a64860(this GEN_EDX_FWD,param_1,uVar2);
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 100);
  return 0;
}

/* ref: Client::Game::Control::ActionTimelineSequencer::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a649d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa649d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6d94));
  *(undefined * PTR32 * PTR32 *)(this + 0x100) = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::EmoteController::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a64a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6d9c));
  *(undefined * PTR32 * PTR32 *)(this + 0x18) = (*(undefined * PTR32 (*)[1])REFP(0x1090544));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TimelineTransitController::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a64ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6da4));
  *(undefined * PTR32 * PTR32 *)(this + 0xc0) = (*(undefined * PTR32 (*)[1])REFP(0x109c984));
  *(undefined * PTR32 * PTR32 *)(this + 0x70) = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::CharacterLookAtTargetParam::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a64b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6dac));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a64b60 */
GEN_FRAME uint GEN_THISCALL F_00a64b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64b60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00a64b70 */
GEN_NOFRAME uint GEN_THISCALL F_00a64b70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa64b70u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 0x14 GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00a64ba0 */
GEN_FRAME uint GEN_THISCALL F_00a64ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  
  uVar1 = *(ushort *)((int)this + param_1 * 2 + 0x194);
  *(ushort *)((int)this + param_1 * 2 + 0x194) = uVar1 + 1;
  return (uint)uVar1;
}

/* ref: FUN_00a64bd0 */
GEN_FRAME byte GEN_THISCALL F_00a64bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x3f4)) {
    piVar2 = (int *)((int)this + 0x19c);
    do {
      if (*piVar2 == param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)((int)this + 0x3f4));
  }
  return 0;
}

/* ref: FUN_00a64c10 */
GEN_FRAME byte GEN_THISCALL F_00a64c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x3f4);
  if (iVar1 < 0x96) {
    *(undefined4 *)((int)this + iVar1 * 4 + 0x19c) = param_1;
    *(int *)((int)this + 0x3f4) = iVar1 + 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00a64c40 */
GEN_FRAME uint GEN_THISCALL F_00a64c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64c40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x3b04) = param_2;
  return param_2;
}

/* ref: SplineController2D_MMM_MoveControl_Control_Game_Client::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a64c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6db4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SplineController2D_MVSplineVector2_MoveControl_Control_Game_Client::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a64cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6dbc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a64d20 */
GEN_FRAME uint GEN_STDCALL F_00a64d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64d20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,400);
  return (uint)uVar1;
}

/* ref: Client::Graphics::Vfx::VfxDataListenner::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a64da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Vfx::VfxDataListenner::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a64db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e6dc4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Object::GameObject::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_00a64de0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa64de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0xec);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1 GEN_EDX_FWD,(uint)(byte)this[0x8c]);
  }
  return uVar2;
}

/* ref: FUN_00a64e00 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a64e00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa64e00u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0x14] = 0;
  in_ecx[0x15] = 0;
  in_ecx[0x16] = 0;
  *(undefined2 *)(in_ecx + 0x18) = 0;
  *(undefined1 *)((int)in_ecx + 0x62) = 0;
  in_ecx[0x1c] = 0;
  in_ecx[0x1d] = 0;
  in_ecx[0x1e] = 0;
  *(undefined2 *)(in_ecx + 0x20) = 0;
  *(undefined1 *)((int)in_ecx + 0x82) = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  return 0;
}

/* ref: Client::Game::Control::MoveControl::MoveControllerSubMemberForAutoMove::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a64f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6dd0));
  F_00a65930(this GEN_EDX_FWD,0);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a64fd0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a64fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined1 *)((int)this + 0x14) = *(undefined1 *)(param_1 + 0x14);
  *(undefined1 *)((int)this + 0x15) = *(undefined1 *)(param_1 + 0x15);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 *)((int)this + 0x24) = *(undefined1 *)(param_1 + 0x24);
  *(undefined1 *)((int)this + 0x25) = *(undefined1 *)(param_1 + 0x25);
  *(undefined1 *)((int)this + 0x26) = *(undefined1 *)(param_1 + 0x26);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined1 *)((int)this + 0x4c) = *(undefined1 *)(param_1 + 0x4c);
  return 0;
}

/* ref: Client::Game::Control::MoveControl::MoveController::BGCollisionEventCallback::vf1 */
GEN_FRAME unsigned int GEN_THISCALL F_00a65060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa65060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)(this + 0xc) != (undefined *)0x0) {
    F_00aed120(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
    return;
  }
  return;
}

/* ref: Client::Game::Control::MoveControl::MoveController::BGCollisionEventCallback::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_00a65080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa65080u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(int *)(in_ecx + 0xc) != 0) {
    return;
  }
  return;
}

/* ref: FUN_00a650a0 */
GEN_NOFRAME uint GEN_THISCALL F_00a650a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa650a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6de0));
  F_00c9f2d0((undefined *)((int)this + 0x454) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x370) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6d64));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6d7c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f0) = (*(undefined * PTR32 (*)[1])REFP(0x10e6d74));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c0) = (*(undefined * PTR32 (*)[1])REFP(0x10e6d6c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x270) = (*(undefined * PTR32 (*)[1])REFP(0x10e6d6c));
  *(undefined4 *)((int)this + 0x1c4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6dd0));
  F_00a65930((undefined4 *)((int)this + 0x1c4) GEN_EDX_ARG,0);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x124) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6db4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6db4));
  return 0x10e6db4;
}

/* ref: FUN_00a65110 */
GEN_NOFRAME uint GEN_THISCALL F_00a65110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa65110u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x80) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x80), REFG(float, 0x10e6528));
  *(undefined4 *)(in_ecx + 0x36c) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x36c), REFG(float, 0x1087f04));
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined1 *)(in_ecx + 0x420) = 0;
  *(undefined4 *)(in_ecx + 0x360) = 0;
  *(undefined4 *)(in_ecx + 0x364) = 0;
  *(undefined4 *)(in_ecx + 0x368) = 0;
  *(undefined1 *)(in_ecx + 0x422) = 0;
  *(undefined4 *)(in_ecx + 0x410) = 0;
  *(undefined4 *)(in_ecx + 0x414) = 0;
  *(undefined4 *)(in_ecx + 0x418) = 0;
  *(undefined1 *)(in_ecx + 0x421) = 0;
  *(undefined4 *)(in_ecx + 0x430) = 0;
  *(undefined4 *)(in_ecx + 0x434) = 0;
  *(undefined4 *)(in_ecx + 0x438) = 0;
  *(undefined4 *)(in_ecx + 0x440) = 0;
  *(undefined4 *)(in_ecx + 0x444) = 0;
  *(undefined4 *)(in_ecx + 0x448) = 0;
  *(undefined4 *)(in_ecx + 0x44c) = 0;
  *(undefined4 *)(in_ecx + 0x450) = 0;
  return 0;
}

/* ref: Client::Game::Control::MoveControl::MoveController::BGCollisionEventCallback::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a651c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa651c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c9f2d0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::MoveControl::MoveController::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a651f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa651f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a650a0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a65220 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a65220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa65220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  
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
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
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
  uVar2 = REFG(undefined4, 0x1334d70);
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0x124) = uVar2;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 300) = uVar1;
  *(undefined4 *)((int)this + 0x128) = 0xffffffff;
  *(undefined4 *)((int)this + 0x130) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x130), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x134) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x134), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x138) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x138), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0xffffffff;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x168), REFG(float, 0x10e6528));
  *(undefined4 *)((int)this + 0x16c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x170) = 0x3f800000;
  *(undefined4 *)((int)this + 0x174) = 0x3f800000;
  *(undefined4 *)((int)this + 0x178) = 0x3f800000;
  *(undefined4 *)((int)this + 0x17c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x180) = 0x3f800000;
  *(undefined4 *)((int)this + 0x184) = 0x3f800000;
  *(undefined4 *)((int)this + 0x188) = 0x3f800000;
  *(undefined4 *)((int)this + 0x18c) = 0x3f800000;
  *(undefined4 *)((int)this + 400) = 0x3f800000;
  *(undefined4 *)((int)this + 0x194) = 0x3f800000;
  *(undefined4 *)((int)this + 0x198) = 0x3f800000;
  *(undefined4 *)((int)this + 0x19c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1a0) = 0x3f800000;
  *(undefined1 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1ac) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1b0) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1b4) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1b8) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1bc) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1c0) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1c4) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1c8) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1cc) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1d0) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1d4) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1d8) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1dc) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined2 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1ee) = 0;
  *(undefined4 *)((int)this + 0x1f2) = 0;
  *(undefined4 *)((int)this + 0x1f6) = 0;
  *(undefined2 *)((int)this + 0x1fa) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined2 *)((int)this + 0x208) = 0;
  *(char * PTR32 *)((int)this + 0x20c) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x210) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x214) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x218) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x21c) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x220) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x224) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x228) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x22c) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x230) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x234) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x238) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x23c) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x240) = "cbbm_id0";
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x278) = 0;
  *(undefined4 *)((int)this + 0x27c) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  return 0;
}

/* ref: Client::Game::Control::CharacterLookAtControlParam::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a656c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa656c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6df4));
  *(undefined * PTR32 * PTR32 *)(this + 0x2c4) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[1])REFP(0x10e6db4));
  *(undefined * PTR32 * PTR32 *)(this + 0xd0) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6dbc));
  *(undefined * PTR32 * PTR32 *)(this + 0x174) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  *(undefined * PTR32 * PTR32 *)(this + 0x168) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  *(undefined * PTR32 * PTR32 *)(this + 0x60) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x10e6dac));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a65720 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a65720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa65720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6dfc));
  puVar2 = (undefined4 *)((int)this + 0x920);
  iVar3 = 2;
  puVar1 = (undefined4 *)((int)this + 0xa88);
  do {
    puVar2 = puVar2 - 0xc0;
    iVar3 = iVar3 - 1;
    *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10e6df4));
    puVar1[-0x69] = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    puVar1[-0xba] =
         (*(undefined * PTR32 (*)[1])REFP(0x10e6db4));
    puVar1[-0xe6] =
         (*(undefined * PTR32 (*)[1])REFP(0x10e6dbc));
    puVar1[-0xbd] = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    puVar1[-0xc0] = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    puVar1[-0xf9] = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    puVar1[-0x102] = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    puVar1[-0x116] = (*(undefined * PTR32 (*)[1])REFP(0x10e6dac));
    puVar1 = puVar1 - 0xc0;
  } while (-1 < iVar3);
  return 0;
}

/* ref: FUN_00a65790 */
GEN_FRAME uint GEN_THISCALL F_00a65790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa65790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x920) = 0;
  *(undefined4 *)((int)this + 0x924) = 0xffffffff;
  *(undefined1 *)((int)this + 0x928) = 0;
  F_0053b290(this GEN_EDX_FWD);
  *(uint *)((int)this + 0x10) = param_1;
  F_00535c40(this GEN_EDX_ARG);
  return param_1;
}

/* ref: Client::Game::Control::CharacterLookAtController::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a657d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa657d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a65720(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a65930 */
GEN_FRAME uint GEN_THISCALL F_00a65930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa65930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  F_00af9b10(this GEN_EDX_FWD);
  *(undefined1 *)((int)this + 9) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar1 = F_00aea850(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Game::Control::MoveControl::MoveControllerSubMemberForPacketMove::vf1 */
GEN_FRAME uint GEN_THISCALL F_00a65980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa65980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 4) = param_1;
  this[8] = (undefined1)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (undefined1)0x0;
  F_00af9b10(this GEN_EDX_FWD);
  this[9] = (undefined1)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  uVar1 = F_00aea850(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a65a30 */
GEN_FRAME uint GEN_THISCALL F_00a65a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa65a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x30), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x34) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x34), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x38) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x38), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x60), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 100) = GEN_FLT_TO(*(undefined4 *)((int)this + 100), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x68) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x68), REFG(float, 0x1375ac8));
  *(undefined1 *)((int)this + 0x70) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10e6528)));
  if ((char)param_1 != '\0') {
    *(undefined4 *)((int)this + 0x90) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x90), REFG(float, 0x10e6528));
    *(undefined2 *)((int)this + 0x94) = 0;
    *(undefined4 *)((int)this + 0x98) = 0;
    *(undefined4 *)((int)this + 0x9c) = 0;
    *(undefined4 *)((int)this + 0xa0) = 0;
    *(undefined2 *)((int)this + 0xa4) = 0;
    *(undefined1 *)((int)this + 0xa6) = 0;
    *(undefined4 *)((int)this + 0xb0) = 0;
    *(undefined4 *)((int)this + 0xb4) = 0;
    *(undefined4 *)((int)this + 0xb8) = 0;
    *(undefined4 *)((int)this + 0xc0) = 0;
    *(undefined4 *)((int)this + 0xc4) = 0;
    *(undefined4 *)((int)this + 200) = uVar1;
    *(undefined1 *)((int)this + 0xcc) = 0;
    *(undefined4 *)((int)this + 0xe0) = uVar1;
    *(undefined2 *)((int)this + 0xe4) = 0;
    *(undefined4 *)((int)this + 0xe8) = 0;
    *(undefined4 *)((int)this + 0xec) = 0;
    *(undefined4 *)((int)this + 0xf0) = 0;
    *(undefined2 *)((int)this + 0xf4) = 0;
    *(undefined1 *)((int)this + 0xf6) = 0;
    *(undefined4 *)((int)this + 0x100) = 0;
    *(undefined4 *)((int)this + 0x104) = 0;
    *(undefined4 *)((int)this + 0x108) = 0;
    *(undefined4 *)((int)this + 0x110) = 0;
    *(undefined4 *)((int)this + 0x114) = 0;
    *(undefined4 *)((int)this + 0x118) = uVar1;
    *(undefined1 *)((int)this + 0x11c) = 0;
    *(undefined4 *)((int)this + 0xe0) = uVar1;
    *(undefined2 *)((int)this + 0xe4) = 0;
    *(undefined4 *)((int)this + 0xe8) = 0;
    *(undefined4 *)((int)this + 0xec) = 0;
    *(undefined4 *)((int)this + 0xf0) = 0;
    *(undefined2 *)((int)this + 0xf4) = 0;
    *(undefined1 *)((int)this + 0xf6) = 0;
    *(undefined4 *)((int)this + 0x100) = 0;
    *(undefined4 *)((int)this + 0x104) = 0;
    *(undefined4 *)((int)this + 0x108) = 0;
    *(undefined4 *)((int)this + 0x110) = 0;
    *(undefined4 *)((int)this + 0x114) = 0;
    *(undefined4 *)((int)this + 0x118) = uVar1;
    *(undefined1 *)((int)this + 0x11c) = 0;
    uVar2 = F_00aeaa80(this GEN_EDX_FWD);
    return uVar2;
  }
  F_00a64fd0((undefined *)((int)this + 0x80) GEN_EDX_ARG,(int)this + 0xd0);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10e6528)));
  *(undefined4 *)((int)this + 0xe0) = GEN_FLT_TO(*(undefined4 *)((int)this + 0xe0), REFG(float, 0x10e6528));
  *(undefined2 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined2 *)((int)this + 0xf4) = 0;
  *(undefined1 *)((int)this + 0xf6) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = uVar1;
  *(undefined1 *)((int)this + 0x11c) = 0;
  uVar2 = F_00aeaa80(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00a65c80 */
GEN_NOFRAME uint GEN_THISCALL F_00a65c80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa65c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = REFG(undefined4, 0x1334d70);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6d94));
  *(undefined4 *)((int)this + 0x124) = uVar2;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x100) = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x128) = 0xffffffff;
  *(undefined4 *)((int)this + 300) = uVar1;
  *(undefined4 *)((int)this + 0x130) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x130), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x134) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x134), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x138) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x138), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 0x140) = 0;
  F_00a65220(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a65d20 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a65d20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa65d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6da4));
  uVar1 = REFG(undefined4, 0x1334d70);
  *(undefined4 *)((int)this + 0x9c) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x9c), REFG(float, 0x1087f04));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
  *(undefined4 *)((int)this + 0x94) = uVar1;
  *(undefined4 *)((int)this + 0x98) = 0xffffffff;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa0) = GEN_FLT_TO(*(undefined4 *)((int)this + 0xa0), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0xa4) = GEN_FLT_TO(*(undefined4 *)((int)this + 0xa4), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0xa8) = GEN_FLT_TO(*(undefined4 *)((int)this + 0xa8), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc0) = (*(undefined * PTR32 (*)[1])REFP(0x109c984));
  *(undefined2 *)((int)this + 0xc4) = 0;
  *(undefined1 *)((int)this + 0xc6) = 0;
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
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined1 *)((int)this + 0x60) = 0;
  *(undefined1 *)((int)this + 200) = 0;
  return 0;
}

/* ref: FUN_00a65e50 */
GEN_NOFRAME uint GEN_THISCALL F_00a65e50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa65e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6df4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x10e6dac));
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0xe0000000;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6dbc));
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6db4));
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c4) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  *(undefined4 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0xffffffff;
  F_0054eb10(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a65f70 */
GEN_NOFRAME uint GEN_THISCALL F_00a65f70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa65f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6dfc));
  this_00 = (undefined *)((int)this + 0x20);
  iVar1 = 2;
  do {
    F_00a65e50(this_00 GEN_EDX_FWD);
    this_00 = (undefined *)((int)this_00 + 0x300);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x920) = 0;
  *(undefined4 *)((int)this + 0x924) = 0xffffffff;
  *(undefined1 *)((int)this + 0x928) = 0;
  F_0053b290(this GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x10) = 0;
  F_00535c40(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00a66040 */
GEN_NOFRAME uint GEN_THISCALL F_00a66040(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa66040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a66120 */
GEN_NOFRAME uint GEN_THISCALL F_00a66120(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa66120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6dd0));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  F_00af9b10(this GEN_EDX_FWD);
  *(undefined1 *)((int)this + 9) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_00aea850(this GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10e6e04));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  F_00af9b10(this GEN_EDX_ARG);
  *(undefined1 *)((int)this + 9) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_00aea850(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: Client::Game::Control::MoveControl::MoveControllerSubMemberForPacketMove::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a661a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa661a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6dd0));
  F_00a65930(this GEN_EDX_FWD,0);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a661d0 */
GEN_FRAME uint GEN_THISCALL F_00a661d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa661d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  uVar1 = F_00a65a30(this GEN_EDX_FWD,1);
  return uVar1;
}

/* ref: FUN_00a66240 */
GEN_NOFRAME uint GEN_THISCALL F_00a66240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa66240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10e6528)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6d74));
  *(undefined4 *)((int)this + 0x90) = uVar1;
  *(undefined2 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined2 *)((int)this + 0xa4) = 0;
  *(undefined1 *)((int)this + 0xa6) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x80) = (*(undefined * PTR32 (*)[1])REFP(0x10e6d6c));
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = uVar1;
  *(undefined1 *)((int)this + 0xcc) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) = (*(undefined * PTR32 (*)[1])REFP(0x10e6d6c));
  *(undefined4 *)((int)this + 0xe0) = uVar1;
  *(undefined2 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined2 *)((int)this + 0xf4) = 0;
  *(undefined1 *)((int)this + 0xf6) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = uVar1;
  *(undefined1 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  F_00a65a30(this GEN_EDX_FWD,1);
  return (uint)this;
}

/* ref: FUN_00a66350 */
GEN_NOFRAME uint GEN_THISCALL F_00a66350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa66350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10e6528)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6de0));
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  *(undefined4 *)((int)this + 0x44) = uVar1;
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x68) = 0;
  *(undefined1 *)((int)this + 0x6a) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined2 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x48) = uVar1;
  *(undefined4 *)((int)this + 0x50) = uVar1;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined2 *)((int)this + 0x5c) = 0;
  *(undefined2 *)((int)this + 0x65) = 0;
  *(undefined1 *)((int)this + 0x67) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6db4));
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x124) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6db4));
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  F_00a66120((undefined *)((int)this + 0x1c4) GEN_EDX_FWD);
  F_00a66240((undefined *)((int)this + 0x1f0) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6d7c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x370) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6d64));
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  *(undefined2 *)((int)this + 0x3e0) = 0;
  *(undefined1 *)((int)this + 0x3e2) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 *)((int)this + 0x3f8) = 0;
  *(undefined2 *)((int)this + 0x400) = 0;
  *(undefined1 *)((int)this + 0x402) = 0;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined4 *)((int)this + 0x408) = 0;
  F_00c9da70((int)this + 0x454 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x454) =
       (*(undefined * PTR32 (*)[3])REFP(0x10e6d84));
  *(undefined4 *)((int)this + 0x460) = 0;
  F_00a65110(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00a66570 */
GEN_NOFRAME uint GEN_THISCALL F_00a66570(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa66570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006ae690((undefined *)((int)this + 0x10) GEN_EDX_FWD);
  F_00690370((int)this + 0x760 GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00a665b0 */
GEN_FRAME uint GEN_THISCALL F_00a665b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa665b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int in_ecx;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[2])REFP(0x10e6dc4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x10e6e24));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[2])REFP(0x10e6e14));
  F_00a66350((undefined *)((int)this + 0x1b0) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x620) = (*(undefined * PTR32 (*)[1])REFP(0x10e6d9c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x638) =
       (*(undefined * PTR32 (*)[1])REFP(0x1090544));
  *(undefined4 *)((int)this + 0x644) = 0;
  *(undefined2 *)((int)this + 0x648) = 0;
  *(undefined4 *)((int)this + 0x64c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x650) = 1;
  *(undefined4 *)((int)this + 0x640) = 0xe0000000;
  *(undefined4 *)((int)this + 0x628) = 0;
  *(undefined4 *)((int)this + 0x62c) = 0;
  *(undefined4 *)((int)this + 0x630) = 0;
  *(undefined4 *)((int)this + 0x658) = 0;
  *(undefined1 *)((int)this + 0x65c) = 0;
  *(undefined4 *)((int)this + 0x660) = 0;
  *(undefined4 *)((int)this + 0x668) = 0xe0000000;
  *(undefined4 *)((int)this + 0x66c) = 0;
  *(undefined4 *)((int)this + 0x670) = 0;
  *(undefined4 *)((int)this + 0x674) = 0;
  F_00a65c80((undefined *)((int)this + 0x680) GEN_EDX_ARG);
  F_00a65d20((undefined *)((int)this + 0x940) GEN_EDX_ARG);
  F_00a65f70((undefined *)((int)this + 0xa10) GEN_EDX_ARG);
  F_0042b630((int)this + 0x1584 GEN_EDX_ARG);
  F_00bc5b60((undefined *)((int)this + 0x15dc) GEN_EDX_ARG);
  local_8 = 2;
  in_ecx = (int)this + 0x1e10;
  do {
    F_006ae690((undefined *)(in_ecx - 0x750) GEN_EDX_ARG);
    F_00690370(in_ecx GEN_EDX_ARG);
    in_ecx = in_ecx + 0x7a0;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x2df4) = 0;
  *(undefined4 *)((int)this + 0x2df8) = 0;
  return (uint)this;
}

/* ref: FUN_00a666e0 */
GEN_NOFRAME uint GEN_THISCALL F_00a666e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa666e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x184);
}

/* ref: FUN_00a666f0 */
GEN_NOFRAME byte GEN_THISCALL F_00a666f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa666f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2f03);
}

/* ref: Client::Game::Character::Companion::vf53 */
GEN_NOFRAME uint F_00a66700(void)
{
  GEN_ENTER(0xa66700u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Character::Companion::vf54 */
GEN_NOFRAME uint F_00a66710(void)
{
  GEN_ENTER(0xa66710u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Character::Companion::vf55 */
GEN_NOFRAME uint F_00a66720(void)
{
  GEN_ENTER(0xa66720u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Character::Companion::vf56 */
GEN_NOFRAME uint F_00a66730(void)
{
  GEN_ENTER(0xa66730u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00a66740 */
GEN_NOFRAME byte F_00a66740(void)
{
  GEN_ENTER(0xa66740u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00a66750 */
GEN_FRAME uint GEN_THISCALL F_00a66750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa66750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00aa98a0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a66780 */
GEN_NOFRAME uint GEN_THISCALL F_00a66780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa66780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a66750((undefined *)((int)this - 0x180) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00a66790 */
GEN_NOFRAME uint GEN_THISCALL F_00a66790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa66790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *(int *)((int)this + 0x10);
  while (iVar3 != 0) {
    if (*(int *)((int)this + 0x10) != 0) {
      uVar2 = *(int *)((int)this + 0x10) - 1 + *(int *)((int)this + 0xc);
      if (*(uint *)((int)this + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)((int)this + 8);
      }
      iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4)));
      F_00492c50((undefined *)(iVar3 + 4) GEN_EDX_FWD);
      F_00429760(*(undefined4 *)(iVar3 + 4),8,0x2c4);
      *(undefined4 *)(iVar3 + 4) = 0;
      piVar1 = (int *)((int)this + 0x10);
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar3 = *(int *)((int)this + 0x10);
  }
  iVar3 = *(int *)((int)this + 8);
  while (iVar3 != 0) {
    iVar3 = iVar3 - 1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))),0x28,400);
    }
  }
  uVar2 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,400);
    uVar2 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a66840 */
GEN_NOFRAME uint GEN_THISCALL F_00a66840(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa66840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a66790(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a668c0 */
GEN_NOFRAME uint GEN_THISCALL F_00a668c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa668c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a66790(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a668f0 */
GEN_NOFRAME uint GEN_THISCALL F_00a668f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa668f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  F_00a665b0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x10e6f1c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[2])REFP(0x10e6f0c));
  puVar1 = (undefined4 *)((int)this + 0x2f20);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,400);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x2f24) = 0;
  *(undefined4 *)((int)this + 0x2f28) = 0;
  *(undefined4 *)((int)this + 0x2f2c) = 0;
  *(undefined4 *)((int)this + 0x2f30) = 0;
  *(undefined4 *)((int)this + 0x2f38) = 0;
  *(undefined4 *)((int)this + 0x2f3c) = 0;
  *(undefined4 *)((int)this + 0x2f40) = 0;
  *(undefined4 *)((int)this + 0x2f38) = *puVar1;
  return (uint)this;
}

/* ref: Client::Game::Character::BattleChara::vf56 */
GEN_NOFRAME uint GEN_THISCALL F_00a66960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa66960u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2f20;
}

/* ref: Client::Game::Character::BattleChara::vf53 */
GEN_NOFRAME uint GEN_THISCALL F_00a66970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa66970u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2f44;
}

/* ref: Client::Game::Character::BattleChara::vf54 */
GEN_NOFRAME uint GEN_THISCALL F_00a66980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa66980u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30c0;
}

/* ref: Client::Game::Character::BattleChara::vf55 */
GEN_NOFRAME uint GEN_THISCALL F_00a66990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa66990u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x3210;
}

/* ref: FUN_00a669a0 */
GEN_NOFRAME uint GEN_THISCALL F_00a669a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa669a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a66a00((undefined *)((int)this - 0x180) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00a669b0 */
GEN_NOFRAME uint GEN_THISCALL F_00a669b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa669b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x10e6f1c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[2])REFP(0x10e6f0c));
  F_00a66790((undefined *)((int)this + 0x2f20) GEN_EDX_FWD);
  F_00429760(*(undefined4 *)((int)this + 0x2f20),8,400);
  *(undefined4 *)((int)this + 0x2f20) = 0;
  uVar1 = F_00aa98a0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Game::Character::BattleChara::vf45 */
GEN_FRAME uint GEN_THISCALL F_00a66a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa66a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x10e6f1c));
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[2])REFP(0x10e6f0c));
  F_00a66790(this + 0x2f20 GEN_EDX_FWD);
  F_00429760(*(undefined4 *)(this + 0x2f20),8,400);
  *(undefined4 *)(this + 0x2f20) = 0;
  F_00aa98a0(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a66a60 */
GEN_FRAME float10 F_00a66a60(float gen_a0)
{
  GEN_ENTER(0xa66a60u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00a66b10 */
GEN_FRAME uint GEN_THISCALL F_00a66b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa66b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint in_EAX = 0;
  
  this_00 = REFG(void * PTR32, 0x1379694);
  if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
    in_EAX = param_1;
    if (*(char *)this != (char)param_1) {
      *(char *)this = (char)param_1;
      in_EAX = F_00aa6f20(this_00 GEN_EDX_FWD,param_1,0);
      *(undefined4 *)((int)this + 4) = GEN_FLT_TO(*(undefined4 *)((int)this + 4), REFG(float, 0x1087f04));
    }
  }
  return in_EAX;
}

/* ref: FUN_00a66b50 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00a66b50(unsigned int gen_a0)
{
  GEN_ENTER(0xa66b50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return;
}

/* ref: FUN_00a66b60 */
GEN_FRAME byte GEN_STDCALL F_00a66b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa66b60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_006ce8a0(param_1,param_2);
  if (bVar1 == 0) {
    F_00a51200(0x46,param_1,param_2,0,0);
    bVar1 = F_006ce8e0(param_1,param_2);
  }
  return bVar1;
}

/* ref: FUN_00a66ba0 */
GEN_FRAME uint GEN_THISCALL F_00a66ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa66ba0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)*((byte *)GEN_TOP((*(int *)(in_ecx + 0x28) + 8 + param_2)));
}

/* ref: FUN_00a66bc0 */
GEN_FRAME byte GEN_STDCALL F_00a66bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa66bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_006ce8a0(param_1,param_2);
  return bVar1 == 0;
}

/* ref: FUN_00a66c00 */
GEN_FRAME unsigned int GEN_THISCALL F_00a66c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa66c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (uint)(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 4))))(*(int * PTR32 *)((int)this + 0x24) GEN_EDX_FWD,param_1));
}

/* ref: FUN_00a66c10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a66c10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa66c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar1 = *(int *)((int)this + iVar4 * 4);
    if (iVar1 != 0) {
      piVar2 = *(int * PTR32 *)((int)this + iVar4 * 4 + 0xc);
      if (piVar2 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2 GEN_EDX_FWD,iVar1);
      }
      puVar3 = *(undefined4 * PTR32 *)((int)this + iVar4 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
        *(undefined4 *)((int)this + iVar4 * 4) = 0;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  return 0;
}

/* ref: FUN_00a66c50 */
GEN_FRAME uint GEN_THISCALL F_00a66c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa66c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + param_1 * 4);
  if (uVar3 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0xc);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,uVar3);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + param_1 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + param_1 * 4) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x48 + (int)this) = 0;
  return uVar3;
}

/* ref: FUN_00a66d10 */
GEN_NOFRAME uint GEN_THISCALL F_00a66d10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa66d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * pvVar2;
  
  pvVar1 = (undefined *)F_00533b90(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD);
  pvVar2 = pvVar1;
  if (pvVar1 != *(undefined * PTR32 *)((int)this + 0x904)) {
    *(undefined4 *)((int)this + 0x900) = 0;
    pvVar2 = F_00c48350(this,0,0x900);
    *(undefined4 *)((int)this + 0x904) = 0;
  }
  *(undefined * PTR32 *)((int)this + 0x904) = pvVar1;
  return (uint)pvVar2;
}

/* ref: FUN_00a66dc0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a66dc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa66dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  char * pcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar2 = this;
  if (0 < *(int *)((int)this + 0x900)) {
    do {
      if (*pcVar2 == '\0') {
        uVar1 = F_00aadfc0(&REFG(undefined, 0x14b5ef0) GEN_EDX_FWD,*(undefined4 *)(pcVar2 + 0x40));
        F_00c49908(pcVar2,0x40,uVar1);
      }
      iVar3 = iVar3 + 1;
      pcVar2 = pcVar2 + 0x48;
    } while (iVar3 < *(int *)((int)this + 0x900));
  }
  return;
}

/* ref: FUN_00a66e00 */
GEN_FRAME byte GEN_THISCALL F_00a66e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa66e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x900)) {
    piVar2 = (int *)((int)this + 0x40);
    do {
      if (*piVar2 == param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x12;
    } while (iVar1 < *(int *)((int)this + 0x900));
  }
  return 0;
}

/* ref: FUN_00a66e30 */
GEN_FRAME uint GEN_THISCALL F_00a66e30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa66e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int local_8;
  
  *(undefined2 *)((int)this + 0x3158) = 0;
  this_00 = (undefined *)((int)this + 0x315c);
  local_8 = 0x18;
  do {
    F_0042e430(this_00 GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    this_00 = (undefined *)((int)this_00 + 0x58);
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  *(undefined2 *)((int)this + 0x39f8) = 0;
  *(undefined4 *)((int)this + 0x39c0) = 0;
  *(undefined4 *)((int)this + 0x39c4) = 0;
  uVar1 = F_0042e430((undefined *)((int)this + 0x3a00) GEN_EDX_ARG,&REFG(undefined, 0x10e70a7));
  *(undefined4 *)((int)this + 0x3a54) = 0;
  *(undefined4 *)((int)this + 0x39b8) = 0;
  *(undefined4 *)((int)this + 0x39bc) = 0;
  *(undefined4 *)((int)this + 0x3a58) = 0;
  *(undefined4 *)((int)this + 0x3a5c) = 0;
  *(undefined4 *)((int)this + 0x3a60) = 0;
  *(undefined1 *)((int)this + 0x3a64) = 0;
  *(undefined1 *)((int)this + 0x3a66) = 0;
  *(undefined1 *)((int)this + 0x3a68) = 0;
  *(undefined4 *)((int)this + 0x39c8) = 0;
  *(undefined4 *)((int)this + 0x39cc) = 0;
  *(undefined4 *)((int)this + 0x39d0) = 0;
  *(undefined4 *)((int)this + 0x39d4) = 0;
  *(undefined4 *)((int)this + 0x39d8) = 0;
  *(undefined4 *)((int)this + 0x39dc) = 0;
  *(undefined4 *)((int)this + 0x39e0) = 0;
  *(undefined4 *)((int)this + 0x39e4) = 0;
  *(undefined4 *)((int)this + 0x3a6c) = 0;
  *(undefined4 *)((int)this + 0x3a70) = 0;
  *(undefined1 *)((int)this + 0x3a74) = 0;
  *(undefined4 *)((int)this + 0x3a78) = 0;
  *(undefined4 *)((int)this + 0x3a80) = 0;
  *(undefined4 *)((int)this + 0x39e8) = 0;
  *(undefined4 *)((int)this + 0x39ec) = 0;
  *(undefined4 *)((int)this + 0x39f0) = 0;
  *(undefined4 *)((int)this + 0x39f4) = 0;
  return uVar1;
}

/* ref: FUN_00a66f30 */
GEN_NOFRAME uint GEN_THISCALL F_00a66f30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa66f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x39bc) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x39b8);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,*(int *)((int)this + 0x39bc));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x39bc);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x39bc) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x39b8) = 0;
  if (*(int *)((int)this + 0x39c4) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x39c0);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,*(int *)((int)this + 0x39c4));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x39c4);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x39c4) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x39c0) = 0;
  if (*(int *)((int)this + 0x39cc) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x39c8);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,*(int *)((int)this + 0x39cc));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x39cc);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x39cc) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x39c8) = 0;
  if (*(int *)((int)this + 0x39d4) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x39d0);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,*(int *)((int)this + 0x39d4));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x39d4);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x39d4) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x39d0) = 0;
  if (*(int *)((int)this + 0x39dc) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x39d8);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,*(int *)((int)this + 0x39dc));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x39dc);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x39dc) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x39d8) = 0;
  if (*(int *)((int)this + 0x39e4) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x39e0);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,*(int *)((int)this + 0x39e4));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x39e4);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x39e4) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x39e0) = 0;
  if (*(int *)((int)this + 0x39ec) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x39e8);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,*(int *)((int)this + 0x39ec));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x39ec);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x39ec) = 0;
    }
  }
  uVar3 = *(uint *)((int)this + 0x39f4);
  *(undefined4 *)((int)this + 0x39e8) = 0;
  if (uVar3 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x39f0);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,uVar3);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x39f4);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x39f4) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x39f0) = 0;
  *(undefined4 *)((int)this + 0x3aa0) = 0;
  *(undefined4 *)((int)this + 0x3a9c) = 0;
  *(undefined1 *)((int)this + 0x3a65) = 0;
  *(undefined1 *)((int)this + 0x3a67) = 0;
  return uVar3;
}

/* ref: FUN_00a67140 */
GEN_FRAME uint GEN_THISCALL F_00a67140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa67140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  bool bVar6;
  
  uVar1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 17));
  uVar3 = REFG(undefined4, 0x1379694);
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  bVar6 = *(int *)((int)this + 0x3a54) == 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)) = REFG(undefined4, 0x1379694);
  ((byte *)(gen_frame + 0x8))[0x15] = 0;
  if (bVar6) {
    *(undefined4 *)((int)this + 0x3a54) = *(undefined4 *)((int)this + 0xc90);
    ((byte *)(gen_frame + 0x8))[0x15] = 1;
  }
  ((byte *)(gen_frame + 0x8))[0x11] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 17)) = uVar1 & 0xffffff00;
  ((byte *)(gen_frame + 0x8))[0x15] = bVar6;
  if (*(int *)((int)this + 0xc30) != 0) {
    uVar3 = 0;
    do {
      iVar4 = uVar3 * 0x18c;
      if ((*(int *)((int)this + 0x3a54) == *(int *)(iVar4 + 0xc90 + (int)this)) &&
         (((byte *)(gen_frame + 0x8))[0x15] == 0)) {
        uVar3 = *(ushort *)((int)this + 0x39f8) | 0x10000;
        ((byte *)(gen_frame + 0x8))[0x16] = 0;
        ((byte *)(gen_frame + 0x8))[0x17] = 0;
        pvVar5 = (undefined *)F_006b8c00();
        pvVar5 = (undefined *)F_006e3240(pvVar5 GEN_EDX_ARG,uVar3);
        uVar3 = F_00a4ffd0();
        if ((pvVar5 != (undefined *)0x0) &&
           ((bVar2 = F_006bfeb0(uVar3,(uint)*(ushort *)((int)this + 0x39f8)), bVar2 == 0 &&
            ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)) != 0)))) {
          F_006d0d30(pvVar5 GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 17)),((byte *)(gen_frame + 0x8)) + 0x17,((byte *)(gen_frame + 0x8)) + 0x16);
        }
        *(uint *)((int)this + iVar4 + 0xcec) = (uint)((byte *)(gen_frame + 0x8))[0x16];
        *(uint *)((int)this + iVar4 + 0xce8) = (uint)((byte *)(gen_frame + 0x8))[0x17];
        F_0042cc20(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG,&REFG(undefined, 0x10e70fd),REFG(undefined4, 0x108cc50));
        if ((((byte *)(gen_frame + 0x8))[0x16] != 0) && (*(char *)((int)this + iVar4 + 0xc38) == '\0')) {
          bVar2 = ((byte *)(gen_frame + 0x8))[0x17];
          if (((byte *)(gen_frame + 0x8))[0x16] < ((byte *)(gen_frame + 0x8))[0x17]) {
            bVar2 = ((byte *)(gen_frame + 0x8))[0x16];
          }
          uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x20))," %u/%u",(uint)bVar2,(uint)((byte *)(gen_frame + 0x8))[0x16]);
          F_0042ccf0(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG,uVar3);
          F_0042c880(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
        }
        F_0042ccf0((undefined *)((int)this + iVar4 + 0xc94) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x74)));
        F_0042c880(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
      }
      bVar2 = ((byte *)(gen_frame + 0x8))[0x11] + 1;
      ((byte *)(gen_frame + 0x8))[0x11] = bVar2;
      uVar3 = (uint)bVar2;
    } while (uVar3 < *(uint *)((int)this + 0xc30));
  }
  ((byte *)(gen_frame + 0x8))[8] = 0xf5;
  ((byte *)(gen_frame + 0x8))[9] = 0x72;
  ((byte *)(gen_frame + 0x8))[10] = 0xa6;
  ((byte *)(gen_frame + 0x8))[0xb] = 0;
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00a67300 */
GEN_FRAME byte GEN_THISCALL F_00a67300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa67300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint * puVar7;
  byte * pbVar8;
  int * piVar9;
  uint uVar10;
  byte bVar11;
  
  bVar3 = REFG(undefined1, 0x14ab29a);
  bVar4 = REFG(undefined1, 0x14ab0d1);
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar10 = (uint)REFG(undefined1, 0x14ab0d2);
  *(undefined4 *)((int)this + 0x3a94) = 0;
  bVar11 = *(char *)(param_1 + 0xb30) != '\0';
  if ((bool)bVar11) {
    *(undefined4 *)((int)this + 0x450) = 1;
    *(undefined4 *)((int)this + 0x4b4) = 2;
    uVar5 = F_006c0360(param_1);
    *(uint *)((int)this + 0x4ac) = uVar5;
    F_0042b630(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    F_00ab0230(0x18f58,((undefined1 *)(gen_frame + 0x14)));
    F_0042ccf0((undefined *)((int)this + 0x454) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    *(undefined4 *)((int)this + 0x4a8) = 0xf01f;
    F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  }
  if ((*(int *)(param_1 + 0xaf4) != 0) && (bVar11 < 5)) {
    puVar6 = (undefined4 *)((uint)bVar11 * 0x6c + 0x450 + (int)this);
    *puVar6 = 2;
    puVar6[0x19] = 2;
    puVar6[0x17] = *(undefined4 *)(param_1 + 0xaf4);
    bVar11 = bVar11 + 1;
    puVar6[0x18] = 1;
    *(int *)((int)this + 0x3a94) = *(int *)((int)this + 0x3a94) + 1;
  }
  if (*(short *)(param_1 + 0xb28) != 0) {
    cVar1 = *(char *)(param_1 + 0xb31);
    if ((((cVar1 == '\x14') || (cVar1 == '\x15')) || (cVar1 == '\x16')) && (bVar11 < 5)) {
      puVar6 = (undefined4 *)((uint)bVar11 * 0x6c + 0x450 + (int)this);
      *puVar6 = 3;
      puVar6[0x19] = 2;
      puVar6[0x17] = (uint)*(ushort *)(param_1 + 0xb28);
      uVar5 = (uint)*(byte *)(param_1 + 0xb31);
    }
    else {
      if (((cVar1 != '\0') || (4 < bVar11)) || (REFG(undefined1, 0x14ab29a) == 0)) goto LAB_00a67482;
      puVar6 = (undefined4 *)((uint)bVar11 * 0x6c + 0x450 + (int)this);
      puVar6[0x19] = 2;
      *puVar6 = 3;
      puVar6[0x17] = (uint)*(ushort *)(param_1 + 0xb28);
      uVar5 = REFG(undefined1, 0x14ab29a) + 0x13;
    }
    bVar11 = bVar11 + 1;
    puVar6[0x18] = uVar5;
    *(int *)((int)this + 0x3a94) = *(int *)((int)this + 0x3a94) + 1;
  }
LAB_00a67482: ;
  pbVar8 = (byte *)(param_1 + 0xb32);
  (*(int *)(gen_frame + 0xc)) = 3;
  do {
    if (((1 < *pbVar8) && (*pbVar8 < 0x14)) && (bVar11 < 5)) {
      puVar6 = (undefined4 *)((uint)bVar11 * 0x6c + 0x450 + (int)this);
      *puVar6 = 4;
      puVar6[0x19] = 0x81;
      puVar6[0x17] = (uint)pbVar8[3];
      puVar6[0x18] = (uint)*pbVar8;
      bVar11 = bVar11 + 1;
      *(int *)((int)this + 0x3a94) = *(int *)((int)this + 0x3a94) + 1;
    }
    pbVar8 = pbVar8 + 1;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) - 1;
  } while ((*(int *)(gen_frame + 0xc)) != 0);
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_1 + 0xb38))) {
  case 1: ;
    pbVar8 = (byte *)(param_1 + 0xb39);
    piVar9 = (int *)(param_1 + 0xaf8);
    (*(int *)(gen_frame + 0x10)) = 6;
    do {
      if (((*pbVar8 != 0) && (*piVar9 != 0)) && (bVar11 < 5)) {
        puVar6 = (undefined4 *)((uint)bVar11 * 0x6c + 0x450 + (int)this);
        *puVar6 = 6;
        puVar6[0x19] = 0x81;
        puVar6[0x17] = (uint)*pbVar8;
        puVar6[0x18] = *piVar9;
        bVar11 = bVar11 + 1;
        *(int *)((int)this + 0x3a94) = *(int *)((int)this + 0x3a94) + 1;
      }
      pbVar8 = pbVar8 + 1;
      piVar9 = piVar9 + 1;
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) - 1;
    } while ((*(int *)(gen_frame + 0x10)) != 0);
    break;
  case 2: ;
    if ((5 < bVar3) || (3 < bVar3)) break;
    uVar10 = (uint)bVar3;
    iVar2 = *(int *)(param_1 + 0xaf8 + uVar10 * 4);
    goto joined_r0x00a675d7;
  case 3: ;
    if ((5 < bVar4) || (1 < bVar4)) break;
    uVar10 = (uint)bVar4;
    iVar2 = *(int *)(param_1 + 0xaf8 + uVar10 * 4);
joined_r0x00a675d7: ;
    if ((iVar2 != 0) && (bVar11 < 5)) {
      puVar6 = (undefined4 *)((uint)bVar11 * 0x6c + 0x450 + (int)this);
      *puVar6 = 6;
      puVar6[0x19] = 0x81;
      puVar6[0x17] = (uint)*(byte *)(uVar10 + 0xb39 + param_1);
      bVar11 = bVar11 + 1;
      puVar6[0x18] = *(undefined4 *)(param_1 + 0xaf8 + uVar10 * 4);
      *(int *)((int)this + 0x3a94) = *(int *)((int)this + 0x3a94) + 1;
    }
    break;
  case 4: ;
    if (((uVar10 < 6) && (*(int *)(param_1 + 0xaf8 + uVar10 * 4) != 0)) && (bVar11 < 5)) {
      puVar6 = (undefined4 *)((uint)bVar11 * 0x6c + 0x450 + (int)this);
      *puVar6 = 6;
      puVar6[0x19] = 0x81;
      puVar6[0x17] = (uint)*(byte *)(param_1 + 0xb39 + uVar10);
      bVar11 = bVar11 + 1;
      puVar6[0x18] = *(undefined4 *)(param_1 + 0xaf8 + uVar10 * 4);
      *(int *)((int)this + 0x3a94) = *(int *)((int)this + 0x3a94) + 1;
    }
  }
  if ((*(byte *)(param_1 + 0xb4f) != 0) && (bVar11 < 5)) {
    puVar6 = (undefined4 *)((uint)bVar11 * 0x6c + 0x450 + (int)this);
    bVar11 = bVar11 + 1;
    puVar7 = (uint *)F_00ab28a0((uint)*(byte *)(param_1 + 0xb4f));
    *puVar6 = 8;
    puVar6[0x19] = 1;
    puVar6[0x18] = (uint)*(byte *)(param_1 + 0xb4f);
    F_0042e430(puVar6 + 1 GEN_EDX_ARG,(*puVar7 & 0xffffff) + (int)puVar7);
    puVar6[0x16] = (uint)(ushort)puVar7[8];
  }
  if ((*(ushort *)(param_1 + 0xb2a) != 0) && (bVar11 < 5)) {
    puVar6 = (undefined4 *)((uint)bVar11 * 0x6c + 0x450 + (int)this);
    bVar11 = bVar11 + 1;
    puVar7 = (uint *)F_00ab1ed0((uint)*(ushort *)(param_1 + 0xb2a));
    *puVar6 = 9;
    puVar6[0x19] = 0x101;
    puVar6[0x18] = (uint)*(ushort *)(param_1 + 0xb2a);
    F_0042e430(puVar6 + 1 GEN_EDX_ARG,(*puVar7 & 0xffffff) + (int)puVar7);
    puVar6[0x16] = (uint)(ushort)puVar7[2];
  }
  if ((*(byte *)(param_1 + 0xb50) != 0) && (bVar11 < 5)) {
    puVar6 = (undefined4 *)((uint)bVar11 * 0x6c + 0x450 + (int)this);
    bVar11 = bVar11 + 1;
    puVar7 = (uint *)F_00ab1f30((uint)*(byte *)(param_1 + 0xb50));
    *puVar6 = 10;
    puVar6[0x19] = 0x301;
    puVar6[0x18] = (uint)*(byte *)(param_1 + 0xb50);
    F_0042e430(puVar6 + 1 GEN_EDX_ARG,(*puVar7 & 0xffffff) + (int)puVar7);
    puVar6[0x16] = puVar7[2];
  }
  *(byte *)((int)this + 0x44c) = bVar11;
  bVar4 = 0;
  if ((*(int *)(param_1 + 0xb10) != 0) && (*(char *)(param_1 + 0xb45) != '\0')) {
    *(undefined4 *)((int)this + 0x66c) = 6;
    *(undefined4 *)((int)this + 0x6d0) = 0x81;
    *(uint *)((int)this + 0x6c8) = (uint)*(byte *)(param_1 + 0xb45);
    bVar4 = 1;
    *(undefined4 *)((int)this + 0x6cc) = *(undefined4 *)(param_1 + 0xb10);
  }
  if ((*(int *)(param_1 + 0xb14) != 0) && (*(char *)(param_1 + 0xb46) != '\0')) {
    puVar6 = (undefined4 *)((uint)bVar4 * 0x6c + 0x66c + (int)this);
    *puVar6 = 6;
    puVar6[0x19] = 0x81;
    puVar6[0x17] = (uint)*(byte *)(param_1 + 0xb46);
    bVar4 = bVar4 + 1;
    puVar6[0x18] = *(undefined4 *)(param_1 + 0xb14);
  }
  if ((*(int *)(param_1 + 0xb18) != 0) && (*(char *)(param_1 + 0xb47) != '\0')) {
    puVar6 = (undefined4 *)((uint)bVar4 * 0x6c + 0x66c + (int)this);
    *puVar6 = 6;
    puVar6[0x19] = 0x81;
    puVar6[0x17] = (uint)*(byte *)(param_1 + 0xb47);
    bVar4 = bVar4 + 1;
    puVar6[0x18] = *(undefined4 *)(param_1 + 0xb18);
  }
  if ((*(int *)(param_1 + 0xb1c) != 0) && (*(char *)(param_1 + 0xb48) != '\0')) {
    puVar6 = (undefined4 *)((uint)bVar4 * 0x6c + 0x66c + (int)this);
    *puVar6 = 6;
    puVar6[0x19] = 0x81;
    puVar6[0x17] = (uint)*(byte *)(param_1 + 0xb48);
    bVar4 = bVar4 + 1;
    puVar6[0x18] = *(undefined4 *)(param_1 + 0xb1c);
  }
  if ((*(int *)(param_1 + 0xb20) != 0) && (*(char *)(param_1 + 0xb49) != '\0')) {
    puVar6 = (undefined4 *)((uint)bVar4 * 0x6c + 0x66c + (int)this);
    *puVar6 = 6;
    puVar6[0x19] = 0x81;
    puVar6[0x17] = (uint)*(byte *)(param_1 + 0xb49);
    bVar4 = bVar4 + 1;
    puVar6[0x18] = *(undefined4 *)(param_1 + 0xb20);
  }
  *(byte *)((int)this + 0x44d) = bVar4;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return bVar4;
}

/* ref: FUN_00a678f0 */
GEN_NOFRAME uint GEN_THISCALL F_00a678f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa678f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x3a69) = 0;
  return in_ecx + 0x168;
}

/* ref: FUN_00a67900 */
GEN_NOFRAME uint GEN_THISCALL F_00a67900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa67900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x78;
}

/* ref: FUN_00a67910 */
GEN_NOFRAME uint GEN_THISCALL F_00a67910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa67910u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x3a69) = 1;
  return in_ecx + 0xf8;
}

/* ref: FUN_00a67920 */
GEN_NOFRAME uint GEN_THISCALL F_00a67920(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa67920u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x120;
}

/* ref: FUN_00a67930 */
GEN_NOFRAME uint GEN_THISCALL F_00a67930(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa67930u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x17c;
}

/* ref: FUN_00a67940 */
GEN_NOFRAME uint GEN_THISCALL F_00a67940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa67940u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xc30;
}

/* ref: FUN_00a67950 */
GEN_NOFRAME uint GEN_THISCALL F_00a67950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa67950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x3158;
}

/* ref: FUN_00a67960 */
GEN_NOFRAME uint GEN_THISCALL F_00a67960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa67960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  uint uVar2;
  int iVar3;
  ushort * puVar4;
  ushort uVar5;
  
  uVar2 = F_00a4ffd0();
  uVar5 = 0;
  if (*(int *)((int)this + 0x39fc) == 1) {
    if (*(short *)((int)this + 0x39f8) == 0) {
      *(undefined2 *)((int)this + 0x39f8) = *(undefined2 *)(uVar2 + 0x188a);
    }
    puVar4 = (ushort *)(uVar2 + 0x13b8);
    bVar1 = false;
    *(undefined4 *)((int)this + 0x78) = 0;
    iVar3 = 0x1e;
    do {
      if (*puVar4 != 0) {
        if (*puVar4 == *(ushort *)((int)this + 0x39f8)) {
          bVar1 = true;
        }
        *(int *)((int)this + 0x78) = *(int *)((int)this + 0x78) + 1;
        uVar5 = *puVar4;
      }
      puVar4 = puVar4 + 8;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    if (bVar1) {
      return (uint)*(ushort *)((int)this + 0x39f8);
    }
    if (*(int *)((int)this + 0x78) != 0) {
      return (uint)uVar5;
    }
  }
  return 0;
}

/* ref: FUN_00a679e0 */
GEN_NOFRAME uint GEN_THISCALL F_00a679e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa679e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a4ffd0();
  bVar1 = *(byte *)(uVar2 + 0x1888);
  if (bVar1 != 0) {
    *(uint *)(in_ecx + 0x39fc) = (uint)bVar1;
    return (uint)bVar1;
  }
  *(undefined4 *)(in_ecx + 0x39fc) = 1;
  return *(uint *)(in_ecx + 0x39fc);
}

/* ref: FUN_00a67a10 */
GEN_FRAME byte GEN_STDCALL F_00a67a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa67a10u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  char * pcVar2;
  uint uVar3;
  
  uVar1 = F_00a4ffd0();
  uVar3 = 0;
  pcVar2 = (char *)(uVar1 + 0x1895);
  while (((byte)pcVar2[-1] != param_1 || (*pcVar2 != (char)param_2))) {
    uVar3 = uVar3 + 1;
    pcVar2 = pcVar2 + 8;
    if (4 < uVar3) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00a67a50 */
GEN_FRAME uint GEN_STDCALL F_00a67a50(unsigned int gen_a0)
{
  GEN_ENTER(0xa67a50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  undefined * this;
  uint uVar2;
  
  this = (undefined *)F_006b8c00();
  uVar2 = F_006d6fd0(this GEN_EDX_ARG);
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x49);
  if (((bVar1 == 0) && (uVar2 != 0)) && (*(ushort *)(uVar2 + 0x310) == (ushort)param_1)) {
    uVar2 = F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x49);
    return uVar2;
  }
  uVar2 = F_00a51200(0x50,(uint)(ushort)param_1,0,0,0);
  return uVar2;
}

/* ref: FUN_00a67ab0 */
GEN_FRAME byte GEN_STDCALL F_00a67ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xa67ab0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(int *)(gen_frame + 0x8)) = 0;
  F_006c42f0(param_1,&(*(int *)(gen_frame + 0x8)));
  if ((*(int *)(gen_frame + 0x8)) != 0) {
    return *(byte *)((*(int *)(gen_frame + 0x8)) + 6);
  }
  return 0;
}

/* ref: FUN_00a67af0 */
GEN_NOFRAME uint GEN_THISCALL F_00a67af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa67af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = *(uint *)((int)this + 0x440);
  uVar4 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
  iVar2 = REFG(int, 0x1379694);
  if ((uVar4 == 0) || (*(ushort *)(uVar4 + 0x20) != uVar8)) {
    return 1;
  }
  if ((REFG(int, 0x1379694) != 0) && (*(int *)(REFG(int, 0x1379694) + 0xe4) != 0)) {
    return 2;
  }
  iVar9 = *(int *)((int)this + 0x318);
  if (iVar9 == 1) {
    uVar8 = (uint)REFG(undefined1, 0x1338ad4);
    iVar9 = 0;
    if (uVar8 != 0) {
      do {
        piVar5 = (int *)F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,iVar9);
        if (iVar2 == 0) {
          iVar7 = -0x20000000;
        }
        else {
          iVar7 = *(int *)(iVar2 + 0x74);
        }
        if (piVar5 == (int *)0x0) {
          iVar6 = -0x20000000;
        }
        else {
          iVar6 = *piVar5;
        }
        if ((iVar6 != -0x20000000) && (iVar6 != iVar7)) {
          if ((char)piVar5[0x78] == '\0') {
            return 3;
          }
          uVar4 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,iVar6);
          if ((uVar4 != 0) &&
             (((cVar1 = *(char *)(uVar4 + 0x18a), cVar1 == '\x0e' || (cVar1 == '\x0f')) ||
              (cVar1 == '\x11')))) {
            return 4;
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar8);
    }
  }
  else if (iVar9 == 2) {
    if (1 < REFG(undefined1, 0x1338ad4)) {
      return 8;
    }
    if (REFG(int, 0x1379694) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (uint)*(byte *)(REFG(int, 0x1379694) + 0x1688);
    }
    uVar4 = F_00ab21d0(*(undefined4 *)((int)this + 0x280));
    if (((uVar8 == 0) || (uVar4 == 0)) || (*(char *)(uVar4 + 4 + uVar8) == '\0')) {
      return 9;
    }
    uVar8 = F_00ab33f0(*(undefined4 *)((int)this + 0x314));
    if ((uVar8 != 0) && (*(char *)(uVar8 + 0x32) != '\0')) {
      uVar8 = F_00a3c850(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,1);
      if ((int)uVar8 < 1) {
        return 10;
      }
    }
  }
  else if ((iVar9 == 3) && (1 < REFG(undefined1, 0x1338ad4))) {
    return 0xb;
  }
  bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x49);
  return (-(uint)(bVar3 != 0) & 0xfffffffa) + 6;
}

/* ref: FUN_00a67ca0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a67ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa67ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(char *)((int)this + 0x3aae) == '\0') {
    if (*(int *)((int)this + 0x3a9c) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3a9c) + 4))))(*(int * PTR32 *)((int)this + 0x3a9c) GEN_EDX_FWD,param_1);
      return;
    }
  }
  else if (*(int *)((int)this + 0x3aa0) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3aa0) + 4))))(*(int * PTR32 *)((int)this + 0x3aa0) GEN_EDX_ARG,param_1);
    return;
  }
  return;
}

/* ref: FUN_00a67ce0 */
GEN_FRAME uint GEN_STDCALL F_00a67ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa67ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((*(uint *)&gen_a0) - 0x39 < 4) {
    return 0xefef;
  }
  if ((*(uint *)&gen_a0) - 0x3d < 5) {
    return 0xeffb;
  }
  uVar1 = F_00ab3110((uint)(byte)param_2);
  if (uVar1 == 0) {
    return 0;
  }
  if ((char)param_3 != '\0') {
    return 0xeff9;
  }
  if ((((byte)param_2 == 1) || ((byte)param_2 == 2)) &&
     ((((*(uint *)&gen_a0) != 0 && ((*(uint *)&gen_a0) < 3)) || ((*(uint *)&gen_a0) - 3 < 5)))) {
    return 0xeff7;
  }
  return *(uint *)(uVar1 + 8);
}

/* ref: FUN_00a67d80 */
GEN_FRAME uint GEN_STDCALL F_00a67d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa67d80u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if (((((char)param_2 != '\x01') && ((char)param_2 != '\x02')) && ((char)param_2 != '\x03')) ||
     (((param_1 == 0 || (2 < param_1)) && (4 < param_1 - 3)))) {
    uVar1 = F_00ab32a0(param_1);
    if (uVar1 != 0) {
      uVar1 = F_00ab32a0(param_1);
      return *(uint *)(uVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00a67de0 */
GEN_FRAME byte GEN_STDCALL F_00a67de0(unsigned int gen_a0)
{
  GEN_ENTER(0xa67de0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(int *)(gen_frame + 0x8)) = 0;
  F_006c42f0(param_1,&(*(int *)(gen_frame + 0x8)));
  if ((*(int *)(gen_frame + 0x8)) != 0) {
    return *(char *)((*(int *)(gen_frame + 0x8)) + 6) != '\0';
  }
  return 0;
}

/* ref: FUN_00a67e30 */
GEN_FRAME byte F_00a67e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21, unsigned int gen_a22, unsigned int gen_a23, unsigned int gen_a24, unsigned int gen_a25, unsigned int gen_a26, unsigned int gen_a27, unsigned int gen_a28, unsigned int gen_a29, unsigned int gen_a30, unsigned int gen_a31, unsigned int gen_a32, unsigned int gen_a33, unsigned int gen_a34, unsigned int gen_a35, unsigned int gen_a36, unsigned int gen_a37, unsigned int gen_a38, unsigned int gen_a39, unsigned int gen_a40, unsigned int gen_a41)
{
  GEN_ENTER(0xa67e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[42];
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
  gen_args[14] = gen_a14;
  gen_args[15] = gen_a15;
  gen_args[16] = gen_a16;
  gen_args[17] = gen_a17;
  gen_args[18] = gen_a18;
  gen_args[19] = gen_a19;
  gen_args[20] = gen_a20;
  gen_args[21] = gen_a21;
  gen_args[22] = gen_a22;
  gen_args[23] = gen_a23;
  gen_args[24] = gen_a24;
  gen_args[25] = gen_a25;
  gen_args[26] = gen_a26;
  gen_args[27] = gen_a27;
  gen_args[28] = gen_a28;
  gen_args[29] = gen_a29;
  gen_args[30] = gen_a30;
  gen_args[31] = gen_a31;
  gen_args[32] = gen_a32;
  gen_args[33] = gen_a33;
  gen_args[34] = gen_a34;
  gen_args[35] = gen_a35;
  gen_args[36] = gen_a36;
  gen_args[37] = gen_a37;
  gen_args[38] = gen_a38;
  gen_args[39] = gen_a39;
  gen_args[40] = gen_a40;
  gen_args[41] = gen_a41;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar4 = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  uVar3 = 0;
  do {
    puVar2 = (uint *)F_00ab32a0(uVar3);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,(*puVar2 & 0xffffff) + (int)puVar2,REFG(undefined4, 0x108cc50));
    bVar1 = F_0042ac50(&(*(undefined4 *)&gen_args[0]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    if (bVar1 != 0) {
      (*(uint *)(gen_frame + 0x0)) = uVar3;
    }
    puVar2 = (uint *)F_00ab32a0(uVar3);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,(*puVar2 & 0xffffff) + (int)puVar2,REFG(undefined4, 0x108cc50));
    bVar1 = F_0042ac50(&(*(undefined4 *)&gen_args[21]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    if (bVar1 != 0) {
      uVar4 = uVar3;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x42);
  if (((*(uint *)(gen_frame + 0x0)) - 8 < 0x1c) && (uVar4 - 8 < 0x1c)) {
    F_0042c880(&(*(undefined4 *)&gen_args[0]) GEN_EDX_ARG);
    F_0042c880(&(*(undefined4 *)&gen_args[21]) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return (*(uint *)(gen_frame + 0x0)) < uVar4;
  }
  bVar1 = F_0042c7c0(&(*(undefined4 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[21]));
  F_0042c880(&(*(undefined4 *)&gen_args[0]) GEN_EDX_ARG);
  F_0042c880(&(*(undefined4 *)&gen_args[21]) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00a67f50 */
GEN_FRAME uint GEN_STDCALL F_00a67f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa67f50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if ((param_1 == -0x20000000) && ((*(int *)&gen_a1) == 0)) {
    return 0;
  }
  uVar1 = 0;
  while (((&REFG(undefined4, 0x14b2790))[(int)(uVar1 * 2)] != param_1 || ((&REFG(undefined4, 0x14b2794))[(int)(uVar1 * 2)] != (*(int *)&gen_a1)))) {
    uVar1 = uVar1 + 1;
    if (0xd < uVar1) {
      return 0;
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00a67fa0 */
GEN_FRAME uint GEN_STDCALL F_00a67fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xa67fa0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != -0x20000000) {
    do {
      if ((&REFG(undefined4, 0x14b2800))[(int)(uVar1)] == param_1) {
        return uVar1 + 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x1a);
  }
  return 0;
}

/* ref: FUN_00a67fd0 */
GEN_FRAME uint GEN_STDCALL F_00a67fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa67fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a67f50(param_1,param_2);
  if (uVar1 != 0) {
    uVar1 = F_00ab28d0(uVar1);
    if (uVar1 != 0) {
      return *(uint *)(uVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00a68000 */
GEN_FRAME uint GEN_STDCALL F_00a68000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa68000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a512b0(0x17,param_2,param_3,param_1,0,0,0);
  return uVar1;
}

/* ref: FUN_00a68030 */
GEN_FRAME uint GEN_THISCALL F_00a68030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa68030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = 0xe;
  piVar1 = this;
  do {
    piVar2 = piVar1 + 2;
    if ((*piVar2 == param_2) && (piVar1[3] == param_3)) {
      *piVar2 = -0x20000000;
      piVar1[3] = 0;
    }
    iVar3 = iVar3 - 1;
    piVar1 = piVar2;
  } while (iVar3 != 0);
  *(int *)((int)this + param_1 * 8 + 8) = param_2;
  *(int *)((int)this + param_1 * 8 + 0xc) = param_3;
  return param_1;
}

/* ref: FUN_00a68080 */
GEN_NOFRAME uint GEN_THISCALL F_00a68080(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa68080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * puVar1;
  undefined * pvVar2;
  int iVar3;
  undefined4 * puVar4;
  
  *(undefined2 *)this = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined1 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x66) = 0;
  *(undefined4 *)((int)this + 0x6a) = 0;
  *(undefined4 *)((int)this + 0x6e) = 0;
  *(undefined4 *)((int)this + 0x72) = 0;
  *(undefined4 *)((int)this + 0x76) = 0;
  *(undefined4 *)((int)this + 0x7a) = 0;
  *(undefined4 *)((int)this + 0x7e) = 0;
  *(undefined4 *)((int)this + 0x82) = 0;
  *(undefined4 *)((int)this + 0x86) = 0;
  *(undefined2 *)((int)this + 0x8a) = 0;
  *(undefined2 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
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
  *(undefined4 *)((int)this + 0xdb) = 0;
  *(undefined2 *)((int)this + 0xdf) = 0;
  *(undefined1 *)((int)this + 0xda) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  puVar4 = (undefined4 *)((int)this + 0xfc);
  for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined2 *)((int)this + 0x228) = 0;
  *(undefined1 *)((int)this + 0x22a) = 0;
  *(undefined2 *)((int)this + 0x22b) = 0;
  *(undefined2 *)((int)this + 0x22d) = 0;
  *(undefined2 *)((int)this + 0x22f) = 0;
  *(undefined1 *)((int)this + 0x231) = 0;
  *(undefined4 *)((int)this + 0x240) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x240), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x244) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x244), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x248) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x248), REFG(float, 0x1375ac8));
  *(undefined1 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined1 *)((int)this + 0x26c) = 0xff;
  *(undefined4 *)((int)this + 0x26d) = 0;
  puVar1 = (undefined2 *)((int)this + 0x296);
  iVar3 = 0x12;
  do {
    puVar1[-0x12] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x2ba) = 0;
  *(undefined4 *)((int)this + 0x2be) = 0;
  *(undefined4 *)((int)this + 0x2c2) = 0;
  *(undefined4 *)((int)this + 0x2c6) = 0;
  *(undefined4 *)((int)this + 0x2ca) = 0;
  *(undefined4 *)((int)this + 0x2ce) = 0;
  *(undefined1 *)((int)this + 0x2d2) = 0;
  pvVar2 = F_00c48350((undefined *)((int)this + 0x2d3),0,0x32);
  *(undefined4 *)((int)this + 0x308) = 0;
  *(undefined4 *)((int)this + 0x30c) = 0;
  return (uint)pvVar2;
}

/* ref: FUN_00a68280 */
GEN_FRAME uint GEN_THISCALL F_00a68280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa68280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  
  uVar6 = param_1;
  if (param_1 == 0xffffffff) {
    uVar6 = (uint)*(byte *)((int)this + 100);
  }
  if ((int)uVar6 < 0x1d) {
    uVar4 = F_00ab21a0((uint)*(byte *)((int)this + 100));
    if (uVar4 != 0) {
      cVar1 = *(char *)(uVar4 + 0x3e);
      uVar6 = F_00ab21a0(uVar6);
      if (((uVar6 != 0) && (cVar2 = *(char *)(uVar6 + 0x43), -1 < cVar2)) && (cVar2 < '\x13')) {
        uVar5 = *(ushort *)((int)this + cVar2 * 2 + 0x66);
        if (((char)param_2 == '\x01') && (cVar1 == *(char *)(uVar6 + 0x3e))) {
          uVar3 = *(ushort *)((int)this + 0xd8);
          uVar6 = (uint)uVar3;
          if ((uVar3 != 0) && (uVar6 < uVar5)) {
            uVar5 = uVar3;
          }
        }
        return CONCAT22((short)(uVar6 >> 0x10),uVar5);
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00a68310 */
GEN_FRAME uint GEN_THISCALL F_00a68310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa68310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort * puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = 0;
  if (param_1 == 1) {
    puVar6 = (ushort *)((int)this + 0x66);
    iVar7 = 0x13;
    do {
      if ((ushort)uVar9 < *puVar6) {
        uVar9 = (uint)*puVar6;
      }
      puVar6 = puVar6 + 1;
      iVar7 = iVar7 - 1;
    } while (iVar7 != 0);
    return uVar9;
  }
  uVar3 = F_00ab21d0(param_1);
  if (uVar3 != 0) {
    uVar8 = 0;
    do {
      uVar5 = uVar3;
      if (*(char *)(uVar3 + 4 + uVar8) != '\0') {
        uVar4 = F_00ab21a0(uVar8);
        uVar5 = 0;
        if (uVar4 != 0) {
          cVar1 = *(char *)(uVar4 + 0x43);
          uVar5 = CONCAT31((int3)(uVar4 >> 8),cVar1);
          if ((-1 < cVar1) &&
             (uVar2 = *(ushort *)((int)this + cVar1 * 2 + 0x66), uVar5 = (uint)uVar2,
             (ushort)uVar9 < uVar2)) {
            uVar9 = uVar5;
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0x1d);
    return CONCAT22((short)(uVar5 >> 0x10),(short)uVar9);
  }
  return 0;
}

/* ref: FUN_00a683a0 */
GEN_FRAME uint GEN_THISCALL F_00a683a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa683a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 0x13) {
    *(undefined2 *)((int)this + param_1 * 2 + 0x66) = (undefined2)param_2;
  }
  return param_1;
}

/* ref: FUN_00a683c0 */
GEN_FRAME uint GEN_THISCALL F_00a683c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa683c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  
  if (param_1 < 0x1d) {
    uVar2 = F_00ab21a0(param_1);
    if (((uVar2 != 0) && (cVar1 = *(char *)(uVar2 + 0x43), -1 < cVar1)) && (cVar1 < '\x13')) {
      return *(uint *)((int)this + cVar1 * 4 + 0x8c);
    }
  }
  return 0;
}

/* ref: FUN_00a68400 */
GEN_FRAME uint GEN_THISCALL F_00a68400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa68400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1;
  if (param_1 < 0x1d) {
    uVar2 = F_00ab21a0(param_1);
    uVar3 = 0;
    if (uVar2 != 0) {
      cVar1 = *(char *)(uVar2 + 0x43);
      uVar3 = CONCAT31((int3)(uVar2 >> 8),cVar1);
      if ((-1 < cVar1) && (cVar1 < '\x13')) {
        uVar3 = (uint)cVar1;
        *(undefined4 *)((int)this + uVar3 * 4 + 0x8c) = param_2;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00a68440 */
GEN_FRAME uint GEN_THISCALL F_00a68440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa68440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((int)param_1 < 0x13) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x8c) = param_2;
  }
  return param_1;
}

/* ref: FUN_00a68460 */
GEN_FRAME uint GEN_THISCALL F_00a68460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa68460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if (param_1 == 0xffffffff) {
    uVar4 = (uint)*(byte *)((int)this + 100);
  }
  if ((int)uVar4 < 0x1d) {
    uVar2 = F_00ab21a0((uint)*(byte *)((int)this + 100));
    if (uVar2 != 0) {
      uVar4 = F_00ab21a0(uVar4);
      if (((uVar4 != 0) && (cVar1 = *(char *)(uVar4 + 0x43), -1 < cVar1)) && (cVar1 < '\x13')) {
        uVar4 = (uint)*(ushort *)((int)this + cVar1 * 2 + 0x66);
        goto LAB_00a684ad;
      }
    }
  }
  uVar4 = 0;
LAB_00a684ad: ;
  puVar3 = (uint *)F_00ab2260(uVar4);
  if (puVar3 == (uint *)0x0) {
    return 0;
  }
  return *puVar3;
}

/* ref: FUN_00a684d0 */
GEN_FRAME uint GEN_THISCALL F_00a684d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa684d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 - 1U < 6) {
    return *(uint *)((int)this + param_1 * 4 + 0xe0);
  }
  return 0;
}

/* ref: FUN_00a684f0 */
GEN_FRAME uint GEN_THISCALL F_00a684f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa684f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 - 1 < 6) {
    *(undefined4 *)((int)this + param_1 * 4 + 0xe0) = param_2;
  }
  return param_1;
}

/* ref: FUN_00a68510 */
GEN_FRAME uint GEN_THISCALL F_00a68510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa68510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0x49 < param_2) {
    return 0;
  }
  return *(uint *)(in_ecx + 0xfc + param_2 * 4);
}

/* ref: FUN_00a68530 */
GEN_FRAME uint GEN_THISCALL F_00a68530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa68530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 0x4a) {
    *(undefined4 *)((int)this + param_1 * 4 + 0xfc) = param_2;
  }
  return param_1;
}

/* ref: FUN_00a68550 */
GEN_FRAME byte GEN_THISCALL F_00a68550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa68550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00ab1f90(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = F_00a68280(this GEN_EDX_ARG,(uint)*(byte *)((int)this + 100),1);
  uVar3 = F_00ab21a0((uint)*(byte *)((int)this + 100));
  if (((uVar3 != 0) && (*(char *)(uVar1 + 0xe) == *(char *)(uVar3 + 0x3e))) &&
     ((uint)*(byte *)(uVar1 + 0xf) <= (uVar2 & 0xffff))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a685c0 */
GEN_NOFRAME uint GEN_THISCALL F_00a685c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa685c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)((int)this + 100);
  if (uVar3 < 0x1d) {
    uVar2 = F_00ab21a0(uVar3);
    if (uVar2 != 0) {
      uVar3 = F_00ab21a0(uVar3);
      if (((uVar3 != 0) && (cVar1 = *(char *)(uVar3 + 0x43), -1 < cVar1)) && (cVar1 < '\x13')) {
        uVar3 = (uint)*(ushort *)((int)this + cVar1 * 2 + 0x66);
        goto LAB_00a685fe;
      }
    }
  }
  uVar3 = 0;
LAB_00a685fe: ;
  uVar3 = F_00ab2260(uVar3);
  if (uVar3 == 0) {
    return 0;
  }
  return (uint)*(byte *)(uVar3 + 0x1f);
}

/* ref: FUN_00a68620 */
GEN_NOFRAME uint GEN_THISCALL F_00a68620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa68620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)((int)this + 100);
  if (uVar3 < 0x1d) {
    uVar2 = F_00ab21a0(uVar3);
    if (uVar2 != 0) {
      uVar3 = F_00ab21a0(uVar3);
      if (((uVar3 != 0) && (cVar1 = *(char *)(uVar3 + 0x43), -1 < cVar1)) && (cVar1 < '\x13')) {
        uVar3 = (uint)*(ushort *)((int)this + cVar1 * 2 + 0x66);
        goto LAB_00a6865e;
      }
    }
  }
  uVar3 = 0;
LAB_00a6865e: ;
  uVar3 = F_00ab2260(uVar3);
  if (uVar3 == 0) {
    return 0;
  }
  return (uint)*(ushort *)(uVar3 + 0x18);
}

/* ref: FUN_00a68680 */
GEN_FRAME uint GEN_THISCALL F_00a68680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa68680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  byte bVar2;
  uint in_EAX = 0;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  if (param_1 < 6) {
    uVar5 = (uint)*(byte *)((int)this + 100);
    if ((((uVar5 < 0x1d) && (uVar3 = F_00ab21a0(uVar5), uVar3 != 0)) &&
        (uVar5 = F_00ab21a0(uVar5), uVar5 != 0)) &&
       ((cVar1 = *(char *)(uVar5 + 0x43), -1 < cVar1 && (cVar1 < '\x13')))) {
      uVar5 = (uint)*(ushort *)((int)this + cVar1 * 2 + 0x66);
    }
    else {
      uVar5 = 0;
    }
    uVar5 = F_00ab2260(uVar5);
    bVar2 = *(byte *)(uVar5 + 0x1f);
    bVar4 = (byte)param_2;
    if (bVar2 < (byte)param_2) {
      bVar4 = bVar2;
    }
    *(byte *)(param_1 + 0x224 + (int)this) = bVar4;
    return CONCAT31((int3)(uVar5 >> 8),bVar2);
  }
  return in_EAX;
}

/* ref: FUN_00a686f0 */
GEN_FRAME byte GEN_THISCALL F_00a686f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa686f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x224 + (int)this);
  F_00a68680(this GEN_EDX_FWD,param_1,param_2);
  F_00a51200(0x1f,(uint)*(byte *)((int)this + 100),param_1,(uint)bVar1,
             (uint)*(byte *)(param_1 + 0x224 + (int)this));
  return 1;
}

/* ref: FUN_00a68750 */
GEN_NOFRAME byte GEN_THISCALL F_00a68750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa68750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)(in_ecx + 0x22f + uVar1) == '\0') goto LAB_00a68765;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  uVar1 = 0xffffffff;
LAB_00a68765: ;
  return (byte)uVar1;
}

/* ref: FUN_00a68770 */
GEN_FRAME byte GEN_THISCALL F_00a68770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa68770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    uVar1 = 0;
    do {
      if (*(char *)((int)this + uVar1 + 0x22f) == (char)param_1) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
  }
  return 0;
}

/* ref: FUN_00a687b0 */
GEN_NOFRAME uint GEN_THISCALL F_00a687b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa687b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = (uint)*(byte *)((int)this + 100);
  if (uVar4 < 0x1d) {
    uVar2 = F_00ab21a0(uVar4);
    if (uVar2 != 0) {
      uVar4 = F_00ab21a0(uVar4);
      if (((uVar4 != 0) && (cVar1 = *(char *)(uVar4 + 0x43), -1 < cVar1)) && (cVar1 < '\x13')) {
        uVar4 = (uint)*(ushort *)((int)this + cVar1 * 2 + 0x66);
        goto LAB_00a687ee;
      }
    }
  }
  uVar4 = 0;
LAB_00a687ee: ;
  piVar3 = (int *)F_00ab2260(uVar4);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  return (uint)(((longlong)*(int *)((int)this + 0x254) * (longlong)*piVar3) / 0x93a80);
}

/* ref: FUN_00a68850 */
GEN_NOFRAME uint F_00a68850(void)
{
  GEN_ENTER(0xa68850u, 0u, 0u, 0u, 0u);
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00a4ffd0();
  iVar1 = *(int *)(uVar2 + 0x18bc);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = F_006c3740();
  return (iVar1 + uVar2) / 0x3c;
}

/* ref: FUN_00a688d0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a688d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa688d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(byte *)(in_ecx + 0xe0) = *(byte *)(in_ecx + 0xe0) | 1;
    return;
  }
  *(undefined1 *)(in_ecx + 0xe0) = 0;
  return;
}

/* ref: FUN_00a688f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a688f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa688f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(byte *)(in_ecx + 0xe0) = *(byte *)(in_ecx + 0xe0) | 3;
    return;
  }
  *(byte *)(in_ecx + 0xe0) = *(byte *)(in_ecx + 0xe0) & 0xfd;
  return;
}

/* ref: FUN_00a68910 */
GEN_FRAME byte GEN_THISCALL F_00a68910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa68910u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x22a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a68920 */
GEN_FRAME byte GEN_THISCALL F_00a68920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa68920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((byte)param_2 - 1 < 3) {
    return *(byte *)((byte)param_2 + 0x22a + in_ecx);
  }
  return 0;
}

/* ref: FUN_00a68940 */
GEN_NOFRAME byte GEN_THISCALL F_00a68940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa68940u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(byte *)(in_ecx + 0x22a) - 1 < 3) {
    return *((byte *)GEN_TOP((*(byte *)(in_ecx + 0x22a) + 0x22a + in_ecx)));
  }
  return 0;
}

/* ref: FUN_00a68960 */
GEN_FRAME byte GEN_THISCALL F_00a68960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa68960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00ab2840(param_1);
  if (((uVar2 != 0) && (cVar1 = *(char *)(uVar2 + 0xa0), -1 < cVar1)) && (cVar1 < ' ')) {
    uVar2 = (uint)cVar1;
    uVar3 = uVar2 & 0x80000007;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
    }
    return (*((byte *)GEN_TOP((((int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3 & 0xffU) + 0x26d + (int)this))) &
           (byte)(1 << ((byte)uVar3 & 0x1f))) != 0;
  }
  return 0;
}

/* ref: FUN_00a689d0 */
GEN_FRAME uint GEN_THISCALL F_00a689d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa689d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x40);
  *(undefined2 *)(uVar1 + 8) = (undefined2)param_2;
  return uVar1;
}

/* ref: FUN_00a689f0 */
GEN_FRAME uint GEN_THISCALL F_00a689f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa689f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (uint)*((ushort *)GEN_TOP((*(int * PTR32 *)((int)this + 0x40) + 2))) * 0x444 + param_1 * 0x70 +
          **(int * PTR32 *)((int)this + 0x40);
  bVar1 = *(byte *)(iVar2 + 8);
  if ((bVar1 < *(byte *)(iVar2 + 0x6c)) && ((ushort)bVar1 < *(ushort *)(iVar2 + 4))) {
    *(byte *)(iVar2 + 8) = bVar1 + 1;
    if (*(byte *)(iVar2 + 0x6c) < (byte)(bVar1 + 1 + *(char *)(iVar2 + 9))) {
      *(char *)(iVar2 + 9) = *(char *)(iVar2 + 9) - 1;
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 4))))(*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_FWD,3);
  return uVar3;
}

/* ref: FUN_00a68a50 */
GEN_FRAME uint GEN_THISCALL F_00a68a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa68a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (uint)*((ushort *)GEN_TOP((*(int * PTR32 *)((int)this + 0x40) + 2))) * 0x444 + param_1 * 0x70 +
          **(int * PTR32 *)((int)this + 0x40);
  bVar1 = *(byte *)(iVar2 + 9);
  if ((bVar1 < *(byte *)(iVar2 + 0x6c)) && ((ushort)bVar1 < *(ushort *)(iVar2 + 6))) {
    *(byte *)(iVar2 + 9) = bVar1 + 1;
    if (*(byte *)(iVar2 + 0x6c) < (byte)(bVar1 + 1 + *(char *)(iVar2 + 8))) {
      *(char *)(iVar2 + 8) = *(char *)(iVar2 + 8) - 1;
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 4))))(*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_FWD,3);
  return uVar3;
}

/* ref: FUN_00a68ab0 */
GEN_FRAME uint GEN_THISCALL F_00a68ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa68ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  int iVar2;
  ushort * puVar3;
  uint uVar4;
  byte bVar5;
  
  iVar2 = (uint)*((ushort *)GEN_TOP((*(int * PTR32 *)((int)this + 0x40) + 2))) * 0x444 + **(int * PTR32 *)((int)this + 0x40);
  if ((char)param_1 == '\0') {
    puVar3 = (ushort *)(iVar2 + 0x74);
    iVar2 = 2;
    do {
      if (((*(int *)(puVar3 - 8) != 0) && (bVar5 = (byte)puVar3[-4], bVar5 != 0)) &&
         ((byte)puVar3[-0x36] < bVar5)) {
        uVar1 = puVar3[-0x38];
        if (uVar1 < bVar5) {
          if ((uVar1 != 0) && ((byte)puVar3[-0x36] < uVar1)) {
            bVar5 = bVar5 - (char)puVar3[-0x38];
            *(char *)(puVar3 - 0x36) = (char)puVar3[-0x38];
            if (bVar5 < *(byte *)((int)puVar3 - 0x6b)) {
              *(byte *)((int)puVar3 - 0x6b) = bVar5;
            }
          }
        }
        else {
          *(byte *)(puVar3 - 0x36) = bVar5;
          *(char *)((int)puVar3 - 0x6b) = '\0';
        }
      }
      if (((*(int *)(puVar3 + 0x30) != 0) && (bVar5 = (byte)puVar3[0x34], bVar5 != 0)) &&
         ((byte)puVar3[2] < bVar5)) {
        uVar1 = *puVar3;
        if (uVar1 < bVar5) {
          if ((uVar1 != 0) && ((byte)puVar3[2] < uVar1)) {
            *(char *)(puVar3 + 2) = (char)*puVar3;
            bVar5 = (char)puVar3[0x34] - (char)*puVar3;
            if (bVar5 < *(byte *)((int)puVar3 + 5)) {
              *(byte *)((int)puVar3 + 5) = bVar5;
            }
          }
        }
        else {
          *(byte *)(puVar3 + 2) = bVar5;
          *(char *)((int)puVar3 + 5) = '\0';
        }
      }
      if (((*(int *)(puVar3 + 0x68) != 0) && (bVar5 = (byte)puVar3[0x6c], bVar5 != 0)) &&
         ((byte)puVar3[0x3a] < bVar5)) {
        uVar1 = puVar3[0x38];
        if (uVar1 < bVar5) {
          if ((uVar1 != 0) && ((byte)puVar3[0x3a] < uVar1)) {
            *(char *)(puVar3 + 0x3a) = (char)puVar3[0x38];
            bVar5 = (char)puVar3[0x6c] - (char)puVar3[0x38];
            if (bVar5 < *(byte *)((int)puVar3 + 0x75)) {
              *(byte *)((int)puVar3 + 0x75) = bVar5;
            }
          }
        }
        else {
          *(byte *)(puVar3 + 0x3a) = bVar5;
          *(char *)((int)puVar3 + 0x75) = '\0';
        }
      }
      if (((*(int *)(puVar3 + 0xa0) != 0) && (bVar5 = (byte)puVar3[0xa4], bVar5 != 0)) &&
         ((byte)puVar3[0x72] < bVar5)) {
        uVar1 = puVar3[0x70];
        if (uVar1 < bVar5) {
          if ((uVar1 != 0) && ((byte)puVar3[0x72] < uVar1)) {
            *(char *)(puVar3 + 0x72) = (char)puVar3[0x70];
            bVar5 = (char)puVar3[0xa4] - (char)puVar3[0x70];
            if (bVar5 < *(byte *)((int)puVar3 + 0xe5)) {
              *(byte *)((int)puVar3 + 0xe5) = bVar5;
            }
          }
        }
        else {
          *(byte *)(puVar3 + 0x72) = bVar5;
          *(char *)((int)puVar3 + 0xe5) = '\0';
        }
      }
      puVar3 = puVar3 + 0xe0;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  else {
    puVar3 = (ushort *)(iVar2 + 0x76);
    iVar2 = 2;
    do {
      if (((*(int *)(puVar3 - 9) != 0) && (bVar5 = (byte)puVar3[-5], bVar5 != 0)) &&
         (*(byte *)((int)puVar3 - 0x6d) < bVar5)) {
        uVar1 = puVar3[-0x38];
        if (uVar1 < bVar5) {
          if ((uVar1 != 0) && (*(byte *)((int)puVar3 - 0x6d) < uVar1)) {
            bVar5 = bVar5 - (char)puVar3[-0x38];
            *(char *)((int)puVar3 - 0x6d) = (char)puVar3[-0x38];
            if (bVar5 < (byte)puVar3[-0x37]) {
              *(byte *)(puVar3 - 0x37) = bVar5;
            }
          }
        }
        else {
          *(byte *)((int)puVar3 - 0x6d) = bVar5;
          *(char *)(puVar3 - 0x37) = '\0';
        }
      }
      if (((*(int *)(puVar3 + 0x2f) != 0) && (bVar5 = (byte)puVar3[0x33], bVar5 != 0)) &&
         (*(byte *)((int)puVar3 + 3) < bVar5)) {
        uVar1 = *puVar3;
        if (uVar1 < bVar5) {
          if ((uVar1 != 0) && (*(byte *)((int)puVar3 + 3) < uVar1)) {
            *(char *)((int)puVar3 + 3) = (char)*puVar3;
            bVar5 = (char)puVar3[0x33] - (char)*puVar3;
            if (bVar5 < (byte)puVar3[1]) {
              *(byte *)(puVar3 + 1) = bVar5;
            }
          }
        }
        else {
          *(byte *)((int)puVar3 + 3) = bVar5;
          *(char *)(puVar3 + 1) = '\0';
        }
      }
      if (((*(int *)(puVar3 + 0x67) != 0) && (bVar5 = (byte)puVar3[0x6b], bVar5 != 0)) &&
         (*(byte *)((int)puVar3 + 0x73) < bVar5)) {
        uVar1 = puVar3[0x38];
        if (uVar1 < bVar5) {
          if ((uVar1 != 0) && (*(byte *)((int)puVar3 + 0x73) < uVar1)) {
            *(char *)((int)puVar3 + 0x73) = (char)puVar3[0x38];
            bVar5 = (char)puVar3[0x6b] - (char)puVar3[0x38];
            if (bVar5 < (byte)puVar3[0x39]) {
              *(byte *)(puVar3 + 0x39) = bVar5;
            }
          }
        }
        else {
          *(byte *)((int)puVar3 + 0x73) = bVar5;
          *(char *)(puVar3 + 0x39) = '\0';
        }
      }
      if (((*(int *)(puVar3 + 0x9f) != 0) && (bVar5 = (byte)puVar3[0xa3], bVar5 != 0)) &&
         (*(byte *)((int)puVar3 + 0xe3) < bVar5)) {
        uVar1 = puVar3[0x70];
        if (uVar1 < bVar5) {
          if ((uVar1 != 0) && (*(byte *)((int)puVar3 + 0xe3) < uVar1)) {
            *(char *)((int)puVar3 + 0xe3) = (char)puVar3[0x70];
            bVar5 = (char)puVar3[0xa3] - (char)puVar3[0x70];
            if (bVar5 < (byte)puVar3[0x71]) {
              *(byte *)(puVar3 + 0x71) = bVar5;
            }
          }
        }
        else {
          *(byte *)((int)puVar3 + 0xe3) = bVar5;
          *(char *)(puVar3 + 0x71) = '\0';
        }
      }
      puVar3 = puVar3 + 0xe0;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 4))))(*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_FWD,3);
  return uVar4;
}

/* ref: FUN_00a68db0 */
GEN_FRAME byte GEN_STDCALL F_00a68db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa68db0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  F_00a51200(0x49,param_1,param_2,0,0);
  bVar1 = F_006d0640(param_1,param_2);
  return bVar1;
}

/* ref: FUN_00a68de0 */
GEN_FRAME uint GEN_THISCALL F_00a68de0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa68de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  int local_10;
  int local_c;
  int local_8;
  
  if (*((ushort *)GEN_TOP((*(int *)((int)this + 0x40) + 8))) <
      (ushort)*((byte *)GEN_TOP((*(int *)((int)this + 0x40) + 4)))) {
    local_c = 0;
    local_8 = 0;
    iVar3 = (uint)*((ushort *)GEN_TOP((*(int * PTR32 *)((int)this + 0x40) + 2))) * 0x444 +
            **(int * PTR32 *)((int)this + 0x40);
    pbVar2 = (byte *)(iVar3 + 0x6d);
    local_10 = 2;
    do {
      if (*(int *)(pbVar2 - 9) != 0) {
        uVar4 = (uint)pbVar2[-0x65];
        uVar1 = pbVar2[-100] + uVar4;
        if (uVar1 < pbVar2[-1]) {
          uVar4 = uVar4 + (pbVar2[-1] - uVar1);
        }
        local_c = local_c + uVar4 * *pbVar2;
        local_8 = local_8 + (uint)pbVar2[-100] * (uint)*pbVar2;
      }
      if (*(int *)(pbVar2 + 0x67) != 0) {
        uVar4 = (uint)pbVar2[0xb];
        uVar1 = pbVar2[0xc] + uVar4;
        if (uVar1 < pbVar2[0x6f]) {
          uVar4 = uVar4 + (pbVar2[0x6f] - uVar1);
        }
        local_c = local_c + uVar4 * pbVar2[0x70];
        local_8 = local_8 + (uint)pbVar2[0xc] * (uint)pbVar2[0x70];
      }
      if (*(int *)(pbVar2 + 0xd7) != 0) {
        uVar4 = (uint)pbVar2[0x7b];
        uVar1 = pbVar2[0x7c] + uVar4;
        if (uVar1 < pbVar2[0xdf]) {
          uVar4 = uVar4 + (pbVar2[0xdf] - uVar1);
        }
        local_c = local_c + uVar4 * pbVar2[0xe0];
        local_8 = local_8 + (uint)pbVar2[0x7c] * (uint)pbVar2[0xe0];
      }
      if (*(int *)(pbVar2 + 0x147) != 0) {
        uVar4 = (uint)pbVar2[0xeb];
        uVar1 = pbVar2[0xec] + uVar4;
        if (uVar1 < pbVar2[0x14f]) {
          uVar4 = uVar4 + (pbVar2[0x14f] - uVar1);
        }
        local_c = local_c + uVar4 * pbVar2[0x150];
        local_8 = local_8 + (uint)pbVar2[0xec] * (uint)pbVar2[0x150];
      }
      pbVar2 = pbVar2 + 0x1c0;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
    if (local_8 + local_c != 0) {
      return (int)((uint)(*(ushort *)(iVar3 + 0x3e4) >> 1) * local_8) / (local_8 + local_c);
    }
  }
  return 0;
}

/* ref: FUN_00a68f30 */
GEN_FRAME uint GEN_THISCALL F_00a68f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa68f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  byte * pbVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar4;
  piVar3 = *(int * PTR32 *)((int)this + 0x40);
  if (((piVar3 != (int *)0x0) && (*piVar3 != 0)) &&
     (*(ushort *)(piVar3 + 2) < (ushort)*(byte *)(piVar3 + 1))) {
    iVar7 = (uint)*(ushort *)(piVar3 + 2) * 0x444 + *piVar3;
    if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x3f1) & 2) != 0)) {
      (*(uint *)(gen_frame + 0x0)) = 99;
      if ((*(byte *)(iVar7 + 0x380) != 0xff) &&
         ((*(byte *)(iVar7 + 0x381) != 0 &&
          (uVar5 = (uint)((ulonglong)
                          *((ushort *)GEN_TOP(((uint)*(byte *)(iVar7 + 0x380) * 0x60 + 0x388 + (int)this))) /
                         (ulonglong)(longlong)(int)(uint)*(byte *)(iVar7 + 0x381)), uVar5 < 99)))) {
        (*(uint *)(gen_frame + 0x0)) = uVar5;
      }
      (*(uint *)(gen_frame + 0x4)) = 99;
      if (((*(byte *)(iVar7 + 0x382) != 0xff) && (*(byte *)(iVar7 + 899) != 0)) &&
         (uVar5 = (uint)((ulonglong)
                         *((ushort *)GEN_TOP(((uint)*(byte *)(iVar7 + 0x382) * 0x60 + 0x388 + (int)this))) /
                        (ulonglong)(longlong)(int)(uint)*(byte *)(iVar7 + 899)), uVar5 < 99)) {
        (*(uint *)(gen_frame + 0x4)) = uVar5;
      }
      iVar8 = 0;
      pbVar6 = (byte *)(iVar7 + 10);
      do {
        bVar1 = *pbVar6;
        bVar2 = pbVar6[0x62];
        ((uint *)(gen_frame + 0x8))[(int)(iVar8)] = 99;
        if ((((bVar1 & 1) != 0) && (*(int *)(pbVar6 + 0x5a) != 0)) && (bVar2 != 0)) {
          uVar5 = (uint)*(ushort *)(pbVar6 - 6);
          if ((char)param_1 != '\0') {
            uVar5 = uVar5 + *(ushort *)(pbVar6 - 4);
          }
          uVar5 = (uint)((ulonglong)uVar5 / (ulonglong)(longlong)(int)(uint)bVar2);
          if (uVar5 < 99) {
            ((uint *)(gen_frame + 0x8))[(int)(iVar8)] = uVar5;
          }
        }
        iVar8 = iVar8 + 1;
        pbVar6 = pbVar6 + 0x70;
      } while (iVar8 < 8);
      uVar5 = 99;
      if ((*(uint *)(gen_frame + 0x0)) < 99) {
        uVar5 = (*(uint *)(gen_frame + 0x0));
      }
      if ((*(uint *)(gen_frame + 0x4)) < uVar5) {
        uVar5 = (*(uint *)(gen_frame + 0x4));
      }
      if ((int)((uint *)(gen_frame + 0x8))[0] < (int)uVar5) {
        uVar5 = ((uint *)(gen_frame + 0x8))[0];
      }
      if ((int)((uint *)(gen_frame + 0x8))[1] < (int)uVar5) {
        uVar5 = ((uint *)(gen_frame + 0x8))[1];
      }
      if ((int)((uint *)(gen_frame + 0x8))[2] < (int)uVar5) {
        uVar5 = ((uint *)(gen_frame + 0x8))[2];
      }
      if ((int)((uint *)(gen_frame + 0x8))[3] < (int)uVar5) {
        uVar5 = ((uint *)(gen_frame + 0x8))[3];
      }
      if ((int)((uint *)(gen_frame + 0x8))[4] < (int)uVar5) {
        uVar5 = ((uint *)(gen_frame + 0x8))[4];
      }
      if ((int)((uint *)(gen_frame + 0x8))[5] < (int)uVar5) {
        uVar5 = ((uint *)(gen_frame + 0x8))[5];
      }
      if ((int)((uint *)(gen_frame + 0x8))[6] < (int)uVar5) {
        uVar5 = ((uint *)(gen_frame + 0x8))[6];
      }
      if ((int)((uint *)(gen_frame + 0x8))[7] < (int)uVar5) {
        uVar5 = ((uint *)(gen_frame + 0x8))[7];
      }
      F_00c47745(uVar4 ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_FWD);
      return uVar5;
    }
    F_00c47745(uVar4 ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return 0;
  }
  F_00c47745(uVar4 ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00a690c0 */
GEN_FRAME byte GEN_STDCALL F_00a690c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa690c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_006d05b0(param_1);
  return bVar1;
}

/* ref: FUN_00a690e0 */
GEN_FRAME byte GEN_STDCALL F_00a690e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa690e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_006d0600(param_1,param_2);
  return bVar1 == 0;
}

/* ref: FUN_00a69100 */
GEN_FRAME uint GEN_STDCALL F_00a69100(unsigned int gen_a0)
{
  GEN_ENTER(0xa69100u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,8,1);
    return uVar1;
  case 1: ;
    uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,9,1);
    return uVar1;
  case 2: ;
    uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,10,1);
    return uVar1;
  case 3: ;
    uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0xb,1);
    return uVar1;
  case 4: ;
    uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0xc,1);
    return uVar1;
  case 5: ;
    uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0xd,1);
    return uVar1;
  case 6: ;
    uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0xe,1);
    return uVar1;
  case 7: ;
    uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0xf,1);
    return uVar1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00a691f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a691f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa691f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined1 *)((int)this + 0x9ee) = 1;
  if (param_2 != 0) {
    this_00 = (undefined *)((int)this + 0x32c);
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + uVar4 * 4) + 4)));
      uVar3 = F_00ab6240(*(undefined4 *)((int)this_00 + 0x54),0,iVar1);
      F_0042e430(this_00 GEN_EDX_ARG,uVar3);
      *(uint *)((int)this_00 + 0x58) = (uint)*(ushort *)(iVar1 + 0x7c);
      uVar4 = uVar4 + 1;
      this_00 = (undefined *)((int)this_00 + 0x60);
    } while (uVar4 < param_2);
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar2 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return;
}

/* ref: FUN_00a69270 */
GEN_FRAME byte GEN_THISCALL F_00a69270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa69270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x40);
  if (((piVar1 != (int *)0x0) && (*piVar1 != 0)) &&
     (iVar2 = (uint)*(ushort *)(piVar1 + 2) * 0x444 + *piVar1, (*(byte *)(iVar2 + 0x3f1) & 2) != 0))
  {
    *(undefined2 *)((int)this + 0xac) = *(undefined2 *)(iVar2 + 0x3e0);
    *(byte *)((int)this + 0xb4) = *(byte *)(iVar2 + 0x3f1) & 1;
    *(undefined2 *)((int)this + 0xae) = *(undefined2 *)(iVar2 + 1000);
    *(undefined2 *)((int)this + 0xb0) = *(undefined2 *)(iVar2 + 0x3ea);
    if ((char)param_1 == '\0') {
      puVar5 = (undefined1 *)((int)this + 0x4c);
      puVar4 = (undefined1 *)(iVar2 + 8);
      iVar3 = 8;
      do {
        *(undefined4 *)(puVar5 - 8) = *(undefined4 *)(puVar4 + 0x5c);
        *puVar5 = *puVar4;
        puVar5[1] = puVar4[1];
        *(undefined2 *)(puVar5 - 4) = *(undefined2 *)(puVar4 - 8);
        *(undefined2 *)(puVar5 - 2) = *(undefined2 *)(puVar4 - 6);
        puVar4 = puVar4 + 0x70;
        puVar5 = puVar5 + 0xc;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
    }
    else {
      *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(iVar2 + 100);
      *(undefined1 *)((int)this + 0x4c) = *(undefined1 *)(iVar2 + 0x6c);
      *(undefined1 *)((int)this + 0x4d) = 0;
      *(undefined2 *)((int)this + 0x48) = 9999;
      *(undefined2 *)((int)this + 0x4a) = 0;
      *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(iVar2 + 0xd4);
      *(undefined1 *)((int)this + 0x58) = *(undefined1 *)(iVar2 + 0xdc);
      *(undefined1 *)((int)this + 0x59) = 0;
      *(undefined2 *)((int)this + 0x54) = 9999;
      *(undefined2 *)((int)this + 0x56) = 0;
      *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(iVar2 + 0x144);
      *(undefined1 *)((int)this + 100) = *(undefined1 *)(iVar2 + 0x14c);
      *(undefined1 *)((int)this + 0x65) = 0;
      *(undefined2 *)((int)this + 0x60) = 9999;
      *(undefined2 *)((int)this + 0x62) = 0;
      *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(iVar2 + 0x1b4);
      *(undefined1 *)((int)this + 0x70) = *(undefined1 *)(iVar2 + 0x1bc);
      *(undefined1 *)((int)this + 0x71) = 0;
      *(undefined2 *)((int)this + 0x6c) = 9999;
      *(undefined2 *)((int)this + 0x6e) = 0;
      *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(iVar2 + 0x224);
      *(undefined1 *)((int)this + 0x7c) = *(undefined1 *)(iVar2 + 0x22c);
      *(undefined2 *)((int)this + 0x78) = 9999;
      *(undefined2 *)((int)this + 0x7a) = 0;
      *(undefined1 *)((int)this + 0x7d) = 0;
      *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(iVar2 + 0x294);
      *(undefined1 *)((int)this + 0x88) = *(undefined1 *)(iVar2 + 0x29c);
      *(undefined2 *)((int)this + 0x84) = 9999;
      *(undefined2 *)((int)this + 0x86) = 0;
      *(undefined1 *)((int)this + 0x89) = 0;
      *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(iVar2 + 0x304);
      *(undefined1 *)((int)this + 0x94) = *(undefined1 *)(iVar2 + 0x30c);
      *(undefined2 *)((int)this + 0x90) = 9999;
      *(undefined2 *)((int)this + 0x92) = 0;
      *(undefined1 *)((int)this + 0x95) = 0;
      *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(iVar2 + 0x374);
      *(undefined1 *)((int)this + 0xa0) = *(undefined1 *)(iVar2 + 0x37c);
      *(undefined2 *)((int)this + 0x9c) = 9999;
      *(undefined1 *)((int)this + 0xa1) = 0;
      *(undefined2 *)((int)this + 0x9e) = 0;
    }
    if (*(char *)(iVar2 + 0x380) != -1) {
      *(undefined4 *)((int)this + 0xa4) =
           *((undefined4 *)GEN_TOP((*(char *)(iVar2 + 0x380) * 0x60 + 0x380 + (int)this)));
    }
    *(undefined1 *)((int)this + 0xb2) = *(undefined1 *)(iVar2 + 0x381);
    if (*(char *)(iVar2 + 0x382) != -1) {
      *(undefined4 *)((int)this + 0xa8) =
           *((undefined4 *)GEN_TOP((*(char *)(iVar2 + 0x382) * 0x60 + 0x380 + (int)this)));
    }
    *(undefined1 *)((int)this + 0xb3) = *(undefined1 *)(iVar2 + 899);
    *(bool *)((int)this + 0xb5) = (char)param_1 != '\0';
    *(undefined1 *)((int)this + 0xb6) = (undefined1)param_2;
    *((char *)GEN_TOP((*(int *)((int)this + 0x40) + 10))) = (char)param_1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00a694f0 */
GEN_FRAME uint GEN_THISCALL F_00a694f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa694f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar6;
  uint uVar7;
  int * piVar8;
  uint uVar5;
  
  iVar6 = (uint)(byte)param_1 * 0x444 + **(int * PTR32 *)((int)this + 0x40);
  piVar8 = (int *)(iVar6 + 100);
  param_1 = 8;
  do {
    uVar3 = 0;
    if (*piVar8 != 0) {
      uVar7 = (uint)*(byte *)(piVar8 + 2);
      uVar2 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,*piVar8,0,1,1);
      uVar3 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*piVar8,1,1,1);
      uVar4 = 0;
      if (uVar3 + uVar2 < uVar7) {
        *(byte *)((int)piVar8 - 0x5a) = *(byte *)((int)piVar8 - 0x5a) | 2;
      }
      else {
        *(byte *)((int)piVar8 - 0x5a) = *(byte *)((int)piVar8 - 0x5a) & 0xfd;
      }
      if ((char)param_2 != '\0') {
        uVar7 = (uint)*(byte *)(piVar8 - 0x17);
        uVar5 = (uint)*(byte *)((int)piVar8 - 0x5b);
        if (uVar3 < *(byte *)((int)piVar8 - 0x5b)) {
          uVar5 = uVar3;
        }
        uVar4 = (undefined1)uVar5;
      }
      if (uVar2 < uVar7) {
        uVar7 = uVar2;
      }
      *(byte *)((int)piVar8 - 0x5a) = *(byte *)((int)piVar8 - 0x5a) | 1;
      *(short *)(piVar8 - 0x18) = (short)uVar2;
      *(short *)((int)piVar8 - 0x5e) = (short)uVar3;
      *(char *)(piVar8 - 0x17) = (char)uVar7;
      *(undefined1 *)((int)piVar8 - 0x5b) = uVar4;
    }
    piVar8 = piVar8 + 0x1c;
    param_1 = param_1 - 1;
  } while (param_1 != 0);
  pbVar1 = (byte *)(iVar6 + 0x3f1);
  *pbVar1 = *pbVar1 | 2;
  return uVar3;
}

/* ref: FUN_00a695b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a695b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa695b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined2 * puVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x40) != 0) {
    puVar2 = (undefined2 *)((int)this + 0x388);
    iVar3 = 0x12;
    do {
      if (*(int *)(puVar2 - 4) != 0) {
        uVar1 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,*(int *)(puVar2 - 4),0,1,1);
        *puVar2 = (short)uVar1;
      }
      puVar2 = puVar2 + 0x30;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return;
}

/* ref: FUN_00a695f0 */
GEN_FRAME uint GEN_THISCALL F_00a695f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa695f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + param_1 * 4);
  if (uVar3 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x14);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,uVar3);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + param_1 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + param_1 * 4) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x9ed + (int)this) = 0;
  return uVar3;
}

/* ref: FUN_00a69640 */
GEN_NOFRAME uint GEN_THISCALL F_00a69640(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa69640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  byte * pbVar3;
  int iVar4;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x40);
  if (((piVar1 != (int *)0x0) && (*piVar1 != 0)) &&
     (iVar2 = (uint)*(ushort *)(piVar1 + 2) * 0x444 + *piVar1, (*(byte *)(iVar2 + 0x3f1) & 2) != 0))
  {
    iVar4 = 0;
    pbVar3 = (byte *)(iVar2 + 0x6e);
    do {
      if (((*(int *)(pbVar3 - 10) != 0) && ((*pbVar3 & 1) != 0)) && ((pbVar3[-100] & 1) != 0)) {
        return (uint)(pbVar3 - 0x6e);
      }
      iVar4 = iVar4 + 1;
      pbVar3 = pbVar3 + 0x70;
    } while (iVar4 < 8);
  }
  return 0;
}

/* ref: FUN_00a69690 */
GEN_NOFRAME byte F_00a69690(void)
{
  GEN_ENTER(0xa69690u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00a68310(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0x21);
  return 9 < (ushort)uVar1;
}

/* ref: FUN_00a696e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a696e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa696e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  return;
}

/* ref: FUN_00a696f0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a696f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa696f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 4) != 3) {
    *(undefined4 *)(in_ecx + 4) = 0;
    return;
  }
  *(undefined1 *)(in_ecx + 0x1f) = 1;
  return;
}

/* ref: FUN_00a69710 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a69710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa69710u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 4) == 3) {
    *(undefined1 *)(in_ecx + 0x20) = 1;
  }
  return;
}

/* ref: FUN_00a69720 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a69720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa69720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x21) = 0;
  return;
}

/* ref: FUN_00a69750 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a69750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa69750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0x58) == '\0') {
    *(undefined1 *)(in_ecx + 0x58) = 1;
  }
  return;
}

/* ref: FUN_00a69760 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a69760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa69760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x58) = 0;
  return;
}

/* ref: FUN_00a69770 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a69770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa69770u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x59) = 1;
  return;
}

/* ref: FUN_00a69780 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a69780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa69780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x59) = 0;
  return;
}

/* ref: FUN_00a69790 */
GEN_NOFRAME uint GEN_THISCALL F_00a69790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa69790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: FUN_00a697a0 */
GEN_NOFRAME uint GEN_THISCALL F_00a697a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa697a0u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  return *(uint *)(*in_ecx + 0x3c);
}

/* ref: FUN_00a697b0 */
GEN_NOFRAME uint GEN_THISCALL F_00a697b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa697b0u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  return *in_ecx + 0x23c;
}

/* ref: FUN_00a697c0 */
GEN_NOFRAME uint GEN_THISCALL F_00a697c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa697c0u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  return *in_ecx + 0x290;
}

/* ref: FUN_00a697d0 */
GEN_NOFRAME uint GEN_THISCALL F_00a697d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa697d0u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  return *(uint *)(*in_ecx + 0x308);
}

/* ref: FUN_00a697e0 */
GEN_NOFRAME uint GEN_THISCALL F_00a697e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa697e0u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  return *(uint *)(*in_ecx + 0x30c);
}

/* ref: FUN_00a697f0 */
GEN_NOFRAME uint GEN_THISCALL F_00a697f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa697f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  int in_ecx;
  ushort uVar2;
  
  in_ecx = *(int *)this;
  sVar1 = *((short *)GEN_TOP((*(int *)(in_ecx + 0x1d4) + 2)));
  if (((sVar1 != -0x7fff) && (sVar1 != -0x7ffe)) && (sVar1 != -0x7ff9)) {
    if (sVar1 == -0x7fe6) {
      return *(uint *)(in_ecx + 0x310);
    }
    return 0xffffffff;
  }
  uVar2 = F_006c3790(in_ecx GEN_EDX_FWD);
  return (uint)uVar2;
}

/* ref: FUN_00a69840 */
GEN_FRAME uint GEN_THISCALL F_00a69840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa69840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  short sVar1;
  uint uVar2;
  
  sVar1 = *((short *)GEN_TOP((*((int *)GEN_TOP(((int)*(undefined * PTR32 *)this + 0x1d4))) + 2)));
  if (((sVar1 != -0x7fff) && (sVar1 != -0x7ffe)) && (sVar1 != -0x7ff9)) {
    *param_1 = 0;
    *param_2 = 0;
    *param_3 = 0;
    return (uint)param_1;
  }
  uVar2 = F_006c3760(*(undefined * PTR32 *)this GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar2;
}

/* ref: FUN_00a698a0 */
GEN_NOFRAME uint GEN_THISCALL F_00a698a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa698a0u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  return *in_ecx + 0x2f8;
}

/* ref: FUN_00a698b0 */
GEN_NOFRAME byte GEN_THISCALL F_00a698b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa698b0u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  if (*(int *)(*in_ecx + 0x2e8) != 0 || *(int *)(*in_ecx + 0x2ec) != 0) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a698d0 */
GEN_NOFRAME uint GEN_THISCALL F_00a698d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa698d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  
  sVar1 = *((short *)GEN_TOP((*(int *)(*(int *)this + 0x1d4) + 2)));
  if (((sVar1 != -0x7fff) && (sVar1 != -0x7ffe)) && (sVar1 != -0x7ff9)) {
    return 0;
  }
  return 2;
}

/* ref: FUN_00a69910 */
GEN_NOFRAME ushort GEN_THISCALL F_00a69910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa69910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  
  sVar1 = *((short *)GEN_TOP((*(int *)(*(int *)this + 0x1d4) + 2)));
  if (((sVar1 != -0x7fff) && (sVar1 != -0x7ffe)) && (sVar1 != -0x7ff9)) {
    return 0;
  }
  return *(ushort *)(*(int *)this + 0x1d8);
}

/* ref: FUN_00a69950 */
GEN_NOFRAME byte GEN_THISCALL F_00a69950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa69950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x244))))(*(int * PTR32 *)this GEN_EDX_FWD);
  return (byte)uVar1;
}

/* ref: FUN_00a69960 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a69960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa69960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (uint)(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x248))))(*(int * PTR32 *)this GEN_EDX_FWD));
}

/* ref: FUN_00a69970 */
GEN_FRAME byte F_00a69970(unsigned int gen_a0)
{
  GEN_ENTER(0xa69970u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((REFG(int * PTR32, 0x1379694) != (int *)0x0) &&
     ((REFG(int * PTR32, 0x1379694) == param_1 || (param_1[0x21] == REFG(int * PTR32, 0x1379694)[0x1d])))) {
    return 1;
  }
  bVar1 = F_00ae0910(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,param_1[0x1d]);
  if (bVar1 == 0) {
    bVar1 = F_00ae0910(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,param_1[0x21]);
    if (bVar1 == 0) {
      iVar2 = 0;
      if (0 < REFG(int, 0x14ab04c)) {
        piVar4 = &REFG(undefined4, 0x14aa78c);
        do {
          if (*piVar4 == param_1[0x1d]) {
            return 5;
          }
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 0x12;
        } while (iVar2 < REFG(int, 0x14ab04c));
      }
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
      return (-(uVar3 != 1) & 2U) + 4;
    }
  }
  return 2;
}

/* ref: FUN_00a69a10 */
GEN_FRAME byte F_00a69a10(unsigned int gen_a0)
{
  GEN_ENTER(0xa69a10u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  
  if ((REFG(int * PTR32, 0x1379694) == (int *)0x0) || (param_1 == (byte *)0x0)) {
    return 0;
  }
  pbVar2 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0xc))))(REFG(int * PTR32, 0x1379694) GEN_EDX_ARG)));
  pbVar4 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00a69a50: ;
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00a69a55;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00a69a50;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00a69a55: ;
  if (iVar3 == 0) {
    return 1;
  }
  bVar1 = F_00ae0950(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,param_1);
  return (bVar1 == 0) * '\x02' + 2;
}

/* ref: FUN_00a69a80 */
GEN_NOFRAME uint F_00a69a80(void)
{
  GEN_ENTER(0xa69a80u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00a51200(4,0,0,0,0);
  return uVar1;
}

/* ref: FUN_00a69aa0 */
GEN_NOFRAME uint F_00a69aa0(void)
{
  GEN_ENTER(0xa69aa0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00a51200(8,0,0,0,0);
  return uVar1;
}

/* ref: FUN_00a69ac0 */
GEN_FRAME uint GEN_THISCALL F_00a69ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa69ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = param_1 >> 3;
  if (uVar2 < 0xc) {
    bVar3 = '\x01' << ((byte)param_1 & 7);
    if ((char)param_2 != '\0') {
      pbVar1 = (byte *)(uVar2 + 0xb090 + (int)this);
      *pbVar1 = *pbVar1 | bVar3;
      return uVar2;
    }
    pbVar1 = (byte *)(uVar2 + 0xb090 + (int)this);
    *pbVar1 = *pbVar1 & ~bVar3;
  }
  return uVar2;
}

/* ref: FUN_00a69b00 */
GEN_FRAME uint GEN_THISCALL F_00a69b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa69b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = param_1 >> 3;
  if (uVar2 < 8) {
    bVar3 = '\x01' << ((byte)param_1 & 7);
    if ((char)param_2 != '\0') {
      pbVar1 = (byte *)(uVar2 + 0xb0cc + (int)this);
      *pbVar1 = *pbVar1 | bVar3;
      return uVar2;
    }
    pbVar1 = (byte *)(uVar2 + 0xb0cc + (int)this);
    *pbVar1 = *pbVar1 & ~bVar3;
  }
  return uVar2;
}

/* ref: FUN_00a69b40 */
GEN_FRAME uint GEN_THISCALL F_00a69b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa69b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = param_1 >> 3;
  if (uVar2 < 0x20) {
    bVar3 = '\x01' << ((byte)param_1 & 7);
    if ((char)param_2 != '\0') {
      pbVar1 = (byte *)(uVar2 + 0xb09c + (int)this);
      *pbVar1 = *pbVar1 | bVar3;
      return uVar2;
    }
    pbVar1 = (byte *)(uVar2 + 0xb09c + (int)this);
    *pbVar1 = *pbVar1 & ~bVar3;
  }
  return uVar2;
}

/* ref: FUN_00a69b80 */
GEN_FRAME uint GEN_THISCALL F_00a69b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa69b80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_2 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  *(uint *)(in_ecx + 0xb09c) = uVar1;
  *(uint *)(in_ecx + 0xb0a0) = uVar1;
  *(uint *)(in_ecx + 0xb0a4) = uVar1;
  *(uint *)(in_ecx + 0xb0a8) = uVar1;
  *(uint *)(in_ecx + 0xb0ac) = uVar1;
  *(uint *)(in_ecx + 0xb0b0) = uVar1;
  *(uint *)(in_ecx + 0xb0b4) = uVar1;
  *(uint *)(in_ecx + 0xb0b8) = uVar1;
  return uVar1;
}

/* ref: FUN_00a69bd0 */
GEN_FRAME uint GEN_THISCALL F_00a69bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa69bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = param_1 >> 3;
  if (uVar2 < 0x40) {
    bVar3 = '\x01' << ((byte)param_1 & 7);
    if ((char)param_2 != '\0') {
      pbVar1 = (byte *)(uVar2 + 0xb0d4 + (int)this);
      *pbVar1 = *pbVar1 | bVar3;
      return uVar2;
    }
    pbVar1 = (byte *)(uVar2 + 0xb0d4 + (int)this);
    *pbVar1 = *pbVar1 & ~bVar3;
  }
  return uVar2;
}

/* ref: FUN_00a69c10 */
GEN_FRAME uint GEN_STDCALL F_00a69c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa69c10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a51200(10,param_1,param_2,0,0);
  return uVar1;
}

/* ref: FUN_00a69c30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a69c30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa69c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (((*(int *)((int)this + 0x92e4) == 0) && (REFG(int, 0x1379694) != 0)) &&
     (*(char *)(REFG(int, 0x1379694) + 0x189) == '\0')) {
    uVar1 = F_00406b90(0x188,0,0);
    if (uVar1 != 0) {
      uVar1 = F_00bc61e0(uVar1 GEN_EDX_ARG);
      *(uint *)((int)this + 0x92e4) = uVar1;
      return;
    }
    *(undefined4 *)((int)this + 0x92e4) = 0;
  }
  return;
}

/* ref: FUN_00a69c80 */
GEN_FRAME byte GEN_THISCALL F_00a69c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa69c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined1 *)((int)this + 4) = (undefined1)param_1;
  *(undefined2 *)((int)this + 6) = (undefined2)param_2;
  *(byte *)((int)this + 8) = (byte)param_3;
  return (byte)param_3;
}

/* ref: FUN_00a69ca0 */
GEN_NOFRAME uint GEN_THISCALL F_00a69ca0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa69ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x204) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x200);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,*(int *)((int)this + 0x204));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x204);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x204) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x200) = 0;
  if (*(int *)((int)this + 0x20c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x208);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,*(int *)((int)this + 0x20c));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x20c);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x20c) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x208) = 0;
  if (*(int *)((int)this + 0x214) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x210);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,*(int *)((int)this + 0x214));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x214);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x214) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x210) = 0;
  if (*(int *)((int)this + 0x21c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x218);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,*(int *)((int)this + 0x21c));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x21c);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x21c) = 0;
    }
  }
  uVar3 = *(uint *)((int)this + 0x224);
  *(undefined4 *)((int)this + 0x218) = 0;
  if (uVar3 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x220);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,uVar3);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x224);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    }
  }
  *(undefined4 *)((int)this + 0x224) = 0;
  return uVar3;
}

/* ref: FUN_00a69df0 */
GEN_NOFRAME uint GEN_THISCALL F_00a69df0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa69df0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x78;
}

/* ref: FUN_00a69e00 */
GEN_FRAME byte GEN_THISCALL F_00a69e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa69e00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x194) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a69e10 */
GEN_FRAME uint GEN_STDCALL F_00a69e10(unsigned int gen_a0)
{
  GEN_ENTER(0xa69e10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  ushort * puVar3;
  
  uVar1 = F_00a4ffd0();
  uVar2 = 0;
  puVar3 = (ushort *)(uVar1 + 0x1688);
  do {
    if (param_1 == *puVar3) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 8;
  } while ((int)uVar2 < 0x10);
  return 0x10;
}

/* ref: FUN_00a69e50 */
GEN_NOFRAME uint GEN_THISCALL F_00a69e50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa69e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0xe34) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0xe30);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,*(int *)((int)this + 0xe34));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0xe34);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0xe34) = 0;
    }
  }
  uVar3 = *(uint *)((int)this + 0xe3c);
  if (uVar3 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0xe38);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,uVar3);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0xe3c);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0xe3c) = 0;
    }
  }
  *(undefined4 *)((int)this + 0xe9c) = 0;
  return uVar3;
}

/* ref: FUN_00a69ed0 */
GEN_FRAME uint GEN_THISCALL F_00a69ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa69ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar6 = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_FWD);
  (*(byte *)(gen_frame + 0x13)) = 0;
  if (*(char *)((int)this + 0x1d0) != '\0') {
    (*(int *)(gen_frame + 0xc)) = 0;
    do {
      if (param_2 <= uVar6) break;
      iVar4 = (uint)(*(byte *)(gen_frame + 0x13)) * 0x68;
      iVar3 = *(int *)(iVar4 + 0x1d4 + (int)this);
      if ((((iVar3 == 2) || (iVar3 == 3)) || (iVar3 == 4)) || (iVar3 == 6)) {
        iVar3 = *((int *)GEN_TOP((*(int *)(param_1 + uVar6 * 4) + 4)));
        F_00ab9240(0x18f5f,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xe3c) + 0xc))) + (*(int *)(gen_frame + 0xc)))))
                     ,((undefined1 *)(gen_frame + 0x14)));
        F_0042ccf0((undefined *)(iVar4 + 0x1d8 + (int)this) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
        *(uint *)(iVar4 + 0x22c + (int)this) = (uint)*(ushort *)(iVar3 + 0x7c);
        uVar6 = uVar6 + 1;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 0x10;
      }
      (*(byte *)(gen_frame + 0x13)) = (*(byte *)(gen_frame + 0x13)) + 1;
    } while ((*(byte *)(gen_frame + 0x13)) < *(byte *)((int)this + 0x1d0));
  }
  (*(byte *)(gen_frame + 0x13)) = 0;
  if (*(char *)((int)this + 0x1d1) != '\0') {
    iVar3 = uVar6 << 4;
    do {
      if (param_2 <= uVar6) break;
      iVar4 = *((int *)GEN_TOP((*(int *)(param_1 + uVar6 * 4) + 4)));
      F_00ab9240(0x18f5f,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xe3c) + 0xc))) + iVar3))),
                   ((undefined1 *)(gen_frame + 0x14)));
      uVar5 = (uint)(*(byte *)(gen_frame + 0x13));
      F_0042ccf0((undefined *)(uVar5 * 0x68 + 0x3e0 + (int)this) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
      iVar3 = iVar3 + 0x10;
      (*(byte *)(gen_frame + 0x13)) = (*(byte *)(gen_frame + 0x13)) + 1;
      *(uint *)(uVar5 * 0x68 + 0x434 + (int)this) = (uint)*(ushort *)(iVar4 + 0x7c);
      uVar6 = uVar6 + 1;
    } while ((*(byte *)(gen_frame + 0x13)) < *(byte *)((int)this + 0x1d1));
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xe3c);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0xe3c) = 0;
  }
  *(undefined4 *)((int)this + 0xe38) = 0;
  piVar2 = *(int * PTR32 *)((int)this + 0xe9c);
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG,0x13);
  }
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return (uint)uVar7;
}

/* ref: FUN_00a6a070 */
GEN_FRAME byte GEN_THISCALL F_00a6a070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6a070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint * puVar7;
  byte * pbVar8;
  int * piVar9;
  uint uVar10;
  byte bVar11;
  
  bVar3 = REFG(undefined1, 0x14ab29a);
  bVar4 = REFG(undefined1, 0x14ab0d1);
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar10 = (uint)REFG(undefined1, 0x14ab0d2);
  *(undefined4 *)((int)this + 0xea0) = 0;
  bVar11 = *(char *)(param_1 + 0xb30) != '\0';
  if ((bool)bVar11) {
    *(undefined4 *)((int)this + 0x1d4) = 1;
    *(undefined4 *)((int)this + 0x238) = 2;
    uVar5 = F_006c0360(param_1);
    *(uint *)((int)this + 0x230) = uVar5;
    F_0042b630(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    F_00ab0230(0x18f58,((undefined1 *)(gen_frame + 0x14)));
    F_0042ccf0((undefined *)((int)this + 0x1d8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    *(undefined4 *)((int)this + 0x22c) = 0xf01f;
    F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  }
  if ((*(int *)(param_1 + 0xaf4) != 0) && (bVar11 < 5)) {
    puVar6 = (undefined4 *)((uint)bVar11 * 0x68 + 0x1d4 + (int)this);
    *puVar6 = 2;
    puVar6[0x19] = 2;
    puVar6[0x17] = *(undefined4 *)(param_1 + 0xaf4);
    bVar11 = bVar11 + 1;
    puVar6[0x18] = 1;
    *(int *)((int)this + 0xea0) = *(int *)((int)this + 0xea0) + 1;
  }
  if (*(short *)(param_1 + 0xb28) != 0) {
    cVar1 = *(char *)(param_1 + 0xb31);
    if ((((cVar1 == '\x14') || (cVar1 == '\x15')) || (cVar1 == '\x16')) && (bVar11 < 5)) {
      puVar6 = (undefined4 *)((uint)bVar11 * 0x68 + 0x1d4 + (int)this);
      *puVar6 = 3;
      puVar6[0x19] = 2;
      puVar6[0x17] = (uint)*(ushort *)(param_1 + 0xb28);
      uVar5 = (uint)*(byte *)(param_1 + 0xb31);
    }
    else {
      if (((cVar1 != '\0') || (4 < bVar11)) || (REFG(undefined1, 0x14ab29a) == 0)) goto LAB_00a6a1f2;
      puVar6 = (undefined4 *)((uint)bVar11 * 0x68 + 0x1d4 + (int)this);
      puVar6[0x19] = 2;
      *puVar6 = 3;
      puVar6[0x17] = (uint)*(ushort *)(param_1 + 0xb28);
      uVar5 = REFG(undefined1, 0x14ab29a) + 0x13;
    }
    bVar11 = bVar11 + 1;
    puVar6[0x18] = uVar5;
    *(int *)((int)this + 0xea0) = *(int *)((int)this + 0xea0) + 1;
  }
LAB_00a6a1f2: ;
  pbVar8 = (byte *)(param_1 + 0xb32);
  (*(int *)(gen_frame + 0xc)) = 3;
  do {
    if (((1 < *pbVar8) && (*pbVar8 < 0x14)) && (bVar11 < 5)) {
      puVar6 = (undefined4 *)((uint)bVar11 * 0x68 + 0x1d4 + (int)this);
      *puVar6 = 4;
      puVar6[0x19] = 0x81;
      puVar6[0x17] = (uint)pbVar8[3];
      puVar6[0x18] = (uint)*pbVar8;
      bVar11 = bVar11 + 1;
      *(int *)((int)this + 0xea0) = *(int *)((int)this + 0xea0) + 1;
    }
    pbVar8 = pbVar8 + 1;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) - 1;
  } while ((*(int *)(gen_frame + 0xc)) != 0);
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_1 + 0xb38))) {
  case 1: ;
    pbVar8 = (byte *)(param_1 + 0xb39);
    piVar9 = (int *)(param_1 + 0xaf8);
    (*(int *)(gen_frame + 0x10)) = 6;
    do {
      if (((*pbVar8 != 0) && (*piVar9 != 0)) && (bVar11 < 5)) {
        puVar6 = (undefined4 *)((uint)bVar11 * 0x68 + 0x1d4 + (int)this);
        *puVar6 = 6;
        puVar6[0x19] = 0x81;
        puVar6[0x17] = (uint)*pbVar8;
        puVar6[0x18] = *piVar9;
        bVar11 = bVar11 + 1;
        *(int *)((int)this + 0xea0) = *(int *)((int)this + 0xea0) + 1;
      }
      pbVar8 = pbVar8 + 1;
      piVar9 = piVar9 + 1;
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) - 1;
    } while ((*(int *)(gen_frame + 0x10)) != 0);
    break;
  case 2: ;
    if ((5 < bVar3) || (3 < bVar3)) break;
    uVar10 = (uint)bVar3;
    iVar2 = *(int *)(param_1 + 0xaf8 + uVar10 * 4);
    goto joined_r0x00a6a347;
  case 3: ;
    if ((5 < bVar4) || (1 < bVar4)) break;
    uVar10 = (uint)bVar4;
    iVar2 = *(int *)(param_1 + 0xaf8 + uVar10 * 4);
joined_r0x00a6a347: ;
    if ((iVar2 != 0) && (bVar11 < 5)) {
      puVar6 = (undefined4 *)((uint)bVar11 * 0x68 + 0x1d4 + (int)this);
      *puVar6 = 6;
      puVar6[0x19] = 0x81;
      puVar6[0x17] = (uint)*(byte *)(uVar10 + 0xb39 + param_1);
      bVar11 = bVar11 + 1;
      puVar6[0x18] = *(undefined4 *)(param_1 + 0xaf8 + uVar10 * 4);
      *(int *)((int)this + 0xea0) = *(int *)((int)this + 0xea0) + 1;
    }
    break;
  case 4: ;
    if (((uVar10 < 6) && (*(int *)(param_1 + 0xaf8 + uVar10 * 4) != 0)) && (bVar11 < 5)) {
      puVar6 = (undefined4 *)((uint)bVar11 * 0x68 + 0x1d4 + (int)this);
      *puVar6 = 6;
      puVar6[0x19] = 0x81;
      puVar6[0x17] = (uint)*(byte *)(param_1 + 0xb39 + uVar10);
      bVar11 = bVar11 + 1;
      puVar6[0x18] = *(undefined4 *)(param_1 + 0xaf8 + uVar10 * 4);
      *(int *)((int)this + 0xea0) = *(int *)((int)this + 0xea0) + 1;
    }
  }
  if ((*(byte *)(param_1 + 0xb4f) != 0) && (bVar11 < 5)) {
    puVar6 = (undefined4 *)((uint)bVar11 * 0x68 + 0x1d4 + (int)this);
    bVar11 = bVar11 + 1;
    puVar7 = (uint *)F_00ab28a0((uint)*(byte *)(param_1 + 0xb4f));
    *puVar6 = 8;
    puVar6[0x19] = 1;
    puVar6[0x18] = (uint)*(byte *)(param_1 + 0xb4f);
    F_0042e430(puVar6 + 1 GEN_EDX_ARG,(*puVar7 & 0xffffff) + (int)puVar7);
    puVar6[0x16] = (uint)(ushort)puVar7[8];
  }
  if ((*(ushort *)(param_1 + 0xb2a) != 0) && (bVar11 < 5)) {
    puVar6 = (undefined4 *)((uint)bVar11 * 0x68 + 0x1d4 + (int)this);
    bVar11 = bVar11 + 1;
    puVar7 = (uint *)F_00ab1ed0((uint)*(ushort *)(param_1 + 0xb2a));
    *puVar6 = 9;
    puVar6[0x19] = 0x101;
    puVar6[0x18] = (uint)*(ushort *)(param_1 + 0xb2a);
    F_0042e430(puVar6 + 1 GEN_EDX_ARG,(*puVar7 & 0xffffff) + (int)puVar7);
    puVar6[0x16] = (uint)(ushort)puVar7[2];
  }
  if ((*(byte *)(param_1 + 0xb50) != 0) && (bVar11 < 5)) {
    puVar6 = (undefined4 *)((uint)bVar11 * 0x68 + 0x1d4 + (int)this);
    bVar11 = bVar11 + 1;
    puVar7 = (uint *)F_00ab1f30((uint)*(byte *)(param_1 + 0xb50));
    *puVar6 = 10;
    puVar6[0x19] = 0x301;
    puVar6[0x18] = (uint)*(byte *)(param_1 + 0xb50);
    F_0042e430(puVar6 + 1 GEN_EDX_ARG,(*puVar7 & 0xffffff) + (int)puVar7);
    puVar6[0x16] = puVar7[2];
  }
  *(byte *)((int)this + 0x1d0) = bVar11;
  bVar4 = 0;
  if ((*(int *)(param_1 + 0xb10) != 0) && (*(char *)(param_1 + 0xb45) != '\0')) {
    *(undefined4 *)((int)this + 0x3dc) = 6;
    *(undefined4 *)((int)this + 0x440) = 0x81;
    *(uint *)((int)this + 0x438) = (uint)*(byte *)(param_1 + 0xb45);
    bVar4 = 1;
    *(undefined4 *)((int)this + 0x43c) = *(undefined4 *)(param_1 + 0xb10);
  }
  if ((*(int *)(param_1 + 0xb14) != 0) && (*(char *)(param_1 + 0xb46) != '\0')) {
    puVar6 = (undefined4 *)((uint)bVar4 * 0x68 + 0x3dc + (int)this);
    *puVar6 = 6;
    puVar6[0x19] = 0x81;
    puVar6[0x17] = (uint)*(byte *)(param_1 + 0xb46);
    bVar4 = bVar4 + 1;
    puVar6[0x18] = *(undefined4 *)(param_1 + 0xb14);
  }
  if ((*(int *)(param_1 + 0xb18) != 0) && (*(char *)(param_1 + 0xb47) != '\0')) {
    puVar6 = (undefined4 *)((uint)bVar4 * 0x68 + 0x3dc + (int)this);
    *puVar6 = 6;
    puVar6[0x19] = 0x81;
    puVar6[0x17] = (uint)*(byte *)(param_1 + 0xb47);
    bVar4 = bVar4 + 1;
    puVar6[0x18] = *(undefined4 *)(param_1 + 0xb18);
  }
  if ((*(int *)(param_1 + 0xb1c) != 0) && (*(char *)(param_1 + 0xb48) != '\0')) {
    puVar6 = (undefined4 *)((uint)bVar4 * 0x68 + 0x3dc + (int)this);
    *puVar6 = 6;
    puVar6[0x19] = 0x81;
    puVar6[0x17] = (uint)*(byte *)(param_1 + 0xb48);
    bVar4 = bVar4 + 1;
    puVar6[0x18] = *(undefined4 *)(param_1 + 0xb1c);
  }
  if ((*(int *)(param_1 + 0xb20) != 0) && (*(char *)(param_1 + 0xb49) != '\0')) {
    puVar6 = (undefined4 *)((uint)bVar4 * 0x68 + 0x3dc + (int)this);
    *puVar6 = 6;
    puVar6[0x19] = 0x81;
    puVar6[0x17] = (uint)*(byte *)(param_1 + 0xb49);
    bVar4 = bVar4 + 1;
    puVar6[0x18] = *(undefined4 *)(param_1 + 0xb20);
  }
  *(byte *)((int)this + 0x1d1) = bVar4;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return bVar4;
}

/* ref: FUN_00a6a660 */
GEN_NOFRAME uint GEN_THISCALL F_00a6a660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6a660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x78;
}

/* ref: FUN_00a6a670 */
GEN_NOFRAME uint GEN_THISCALL F_00a6a670(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6a670u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x5ec;
}

/* ref: FUN_00a6a680 */
GEN_FRAME uint GEN_THISCALL F_00a6a680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6a680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  *(int *)((int)this + 0x5e4) = param_1;
  uVar2 = in_EAX & 0xffffff00;
  while ((*((int *)GEN_TOP(((uVar2 & 0xff) * 0x68 + 0x43c + (int)this))) != param_1 || (param_1 == 0))) {
    bVar1 = (char)uVar2 + 1;
    uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
    if (4 < bVar1) {
      return uVar2;
    }
  }
  *(uint *)((int)this + 0x5e8) = uVar2 & 0xff;
  return uVar2 & 0xff;
}

/* ref: FUN_00a6a6c0 */
GEN_NOFRAME uint GEN_THISCALL F_00a6a6c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6a6c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(byte *)((int)this + 0x32) = *(byte *)((int)this + 0x32) & 0xfc;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x33) = 0xff;
  return (uint)this;
}

/* ref: FUN_00a6a710 */
GEN_FRAME uint GEN_THISCALL F_00a6a710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12)
{
  GEN_ENTER(0xa6a710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  undefined4 param_13 = (undefined4)gen_a12;
  undefined * this;
  undefined4 * puVar1;
  
  *param_1 = param_2;
  puVar1 = param_1 + 3;
  param_1[1] = param_3;
  param_1[2] = param_4;
  this = (undefined *)F_006b8c00();
  F_006ded20(this GEN_EDX_ARG,puVar1,param_4);
  param_1[4] = (undefined4)gen_fl2bits(param_5);
  param_1[5] = (undefined4)gen_fl2bits(param_6);
  *(undefined2 *)(param_1 + 8) = (undefined2)param_9;
  param_1[9] = param_10;
  param_1[10] = param_11;
  param_1[6] = (undefined4)gen_fl2bits(param_7);
  *(byte *)((int)param_1 + 0x32U) = *(byte *)((int)param_1 + 0x32U) & 0xfc;
  param_1[0xb] = param_12;
  param_1[7] = (undefined4)gen_fl2bits(param_8);
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x33) = (undefined1)param_13;
  return (uint)param_1;
}

/* ref: FUN_00a6a7a0 */
GEN_FRAME uint GEN_THISCALL F_00a6a7a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6a7a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  int iVar1;
  
  *(undefined4 *)this = param_1;
  iVar1 = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  this_00 = (undefined *)F_006b8c00();
  F_006ded20(this_00 GEN_EDX_ARG,iVar1,param_2);
  *(byte *)((int)this + 0x32) = *(byte *)((int)this + 0x32) & 0xfc;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x33) = 0xff;
  return (uint)this;
}

/* ref: FUN_00a6a810 */
GEN_FRAME byte GEN_THISCALL F_00a6a810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa6a810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  
  puVar1 = (undefined4 *)(param_1 * 0x70 + 0x30 + (int)this);
  puVar1[1] = param_2 & 0xffff;
  *puVar1 = 1;
  F_0042ccf0(puVar1 + 2 GEN_EDX_FWD,param_3);
  uVar2 = F_00a4ffd0();
  uVar4 = 0;
  pcVar3 = (char *)(uVar2 + 0x1895);
  while ((pcVar3[-1] != '\x01' || (*pcVar3 != (char)param_1))) {
    uVar4 = uVar4 + 1;
    pcVar3 = pcVar3 + 8;
    if (4 < uVar4) {
      *(undefined1 *)((int)puVar1 + 0x6d) = 0;
      return 0;
    }
  }
  *(undefined1 *)((int)puVar1 + 0x6d) = 1;
  return 1;
}

/* ref: FUN_00a6a870 */
GEN_FRAME uint GEN_THISCALL F_00a6a870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6a870u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x70 + 0x30 + in_ecx;
}

/* ref: FUN_00a6a890 */
GEN_FRAME byte GEN_THISCALL F_00a6a890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa6a890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  
  puVar1 = (undefined4 *)(param_1 * 0x70 + 0xd50 + (int)this);
  puVar1[1] = param_2 & 0xffff;
  *puVar1 = 2;
  F_0042ccf0(puVar1 + 2 GEN_EDX_FWD,param_3);
  uVar2 = F_00a4ffd0();
  uVar4 = 0;
  pcVar3 = (char *)(uVar2 + 0x1895);
  while ((pcVar3[-1] != '\x02' || (*pcVar3 != (char)param_1))) {
    uVar4 = uVar4 + 1;
    pcVar3 = pcVar3 + 8;
    if (4 < uVar4) {
      *(undefined1 *)((int)puVar1 + 0x6d) = 0;
      return 0;
    }
  }
  *(undefined1 *)((int)puVar1 + 0x6d) = 1;
  return 1;
}

/* ref: FUN_00a6a900 */
GEN_FRAME uint GEN_THISCALL F_00a6a900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6a900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x70 + 0xd50 + in_ecx;
}

/* ref: FUN_00a6a920 */
GEN_FRAME float F_00a6a920(unsigned int gen_a0)
{
  GEN_ENTER(0xa6a920u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float10 fVar1;
  
  if (param_1 == 0) {
    return (float)(float10)0;
  }
  if ((*(int *)(param_1 + 0x24) != 9) && (*(int *)(param_1 + 0x24) != 0x33)) {
    return *(float *)(param_1 + 0x10);
  }
  fVar1 = F_007733a0(*(float *)(param_1 + 0x10));
  return (float)fVar1;
}

/* ref: FUN_00a6a960 */
GEN_FRAME uint GEN_STDCALL F_00a6a960(unsigned int gen_a0)
{
  GEN_ENTER(0xa6a960u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a51200(0x18,param_1 & 0xffff,0,0,0);
  return uVar1;
}

/* ref: FUN_00a6a980 */
GEN_FRAME ushort GEN_STDCALL F_00a6a980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6a980u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(param_1 + 0x168e) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a6a9a0 */
GEN_NOFRAME uint GEN_THISCALL F_00a6a9a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6a9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a51200(0x19,0,0,0,0);
  *(undefined1 *)((int)this + 0x24) = 1;
  return uVar1;
}

/* ref: FUN_00a6a9c0 */
GEN_FRAME uint GEN_THISCALL F_00a6a9c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6a9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = in_ecx;
  for (iVar1 = 8; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)(in_ecx + 9) = 0x100;
  return (uint)in_ecx;
}

/* ref: FUN_00a6a9e0 */
GEN_FRAME byte GEN_THISCALL F_00a6a9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6a9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (*((byte *)GEN_TOP((((ushort)param_1 >> 3) + 4 + (int)this))) & '\x01' << ((byte)(ushort)param_1 & 7))
         != 0;
}

/* ref: FUN_00a6aa10 */
GEN_FRAME byte GEN_THISCALL F_00a6aa10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6aa10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  byte bVar3;
  ushort uVar2;
  
  uVar2 = (ushort)param_1;
  if ((ushort)param_1 < 0x100) {
    bVar3 = '\x01' << ((byte)(ushort)param_1 & 7);
    bVar1 = ~bVar3 & *((byte *)GEN_TOP((((ushort)param_1 >> 3) + 4 + (int)this)));
    if ((char)param_2 != '\0') {
      bVar1 = bVar1 | bVar3;
    }
    uVar2 = (ushort)bVar1;
    *((byte *)GEN_TOP((((ushort)param_1 >> 3) + 4 + (int)this))) = bVar1;
  }
  return (byte)uVar2;
}

/* ref: FUN_00a6aad0 */
GEN_FRAME byte GEN_THISCALL F_00a6aad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6aad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  if ((*(char *)this != '\x01') && (!(*(float *)&REFG(undefined, 0x1088114) < *(float *)((int)this + 4)))) {
    *(undefined4 *)((int)this + 0xc) = 0xe0000000;
    F_00a51200(0x16,param_1,0,0,0);
    *(undefined4 *)((int)this + 8) = 0;
    uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    *(undefined1 *)this = 1;
    *(undefined4 *)((int)this + 4) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00a6ab30 */
GEN_FRAME uint GEN_THISCALL F_00a6ab30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6ab30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  undefined2 * puVar1;
  undefined * this_00;
  int iVar2;
  undefined * this_01;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,0x7d9);
  *(undefined1 *)this = 0;
  *(uint *)((int)this + 0xc) = param_1;
  F_00c49908((int)this + 0x10,0x40,param_2 + 0x1c8);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_2 + 500);
  *(undefined1 *)((int)this + 0x60) = param_2[0x1f8];
  *(undefined1 *)((int)this + 0x62) = param_2[1];
  *(undefined1 *)((int)this + 0x61) = *param_2;
  *(undefined1 *)((int)this + 99) = param_2[2];
  *(undefined1 *)((int)this + 100) = param_2[3];
  *(undefined1 *)((int)this + 0x68) = param_2[6];
  *(undefined1 *)((int)this + 0x69) = param_2[7];
  *(undefined2 *)((int)this + 0x66) = *(undefined2 *)(param_2 + 4);
  iVar2 = 0;
  do {
    *(undefined1 *)((int)this + iVar2 + 0x6a) = param_2[iVar2 + 0x1f9];
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1a);
  param_1 = 0;
  puVar5 = (undefined4 *)(param_2 + 8);
  do {
    this_01 = (undefined *)F_00a37da0(this_00 GEN_EDX_ARG,param_1);
    F_00a35ee0(this_01 GEN_EDX_ARG,*puVar5,1);
    F_00a35f80(this_01 GEN_EDX_ARG,1);
    if (*(char *)(puVar5 + 2) == '\0') {
      *(byte *)((int)this_01 + 0x14) = *(byte *)((int)this_01 + 0x14) & 0xfe;
    }
    else {
      *(byte *)((int)this_01 + 0x14) = *(byte *)((int)this_01 + 0x14) | 1;
    }
    *(undefined1 *)((int)this_01 + 0x2f) = *(undefined1 *)((int)puVar5 + 9);
    *(undefined4 *)((int)this_01 + 0x30) = *puVar5;
    uVar3 = 0;
    puVar4 = puVar5 + 3;
    do {
      uVar6 = uVar3 & 0xff;
      *(undefined2 *)((int)this_01 + uVar6 * 2 + 0x20) = *(undefined2 *)puVar4;
      puVar1 = (undefined2 *)((int)puVar4 + 2);
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
      *(undefined1 *)(uVar6 + 0x2a + (int)this_01) = *(undefined1 *)puVar1;
    } while ((int)uVar3 < 5);
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 8;
  } while ((int)param_1 < 0xe);
  return param_1;
}

/* ref: FUN_00a6ac90 */
GEN_FRAME uint GEN_STDCALL F_00a6ac90(unsigned int gen_a0)
{
  GEN_ENTER(0xa6ac90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a51200(0xf,param_1,0,0,0);
  return uVar1;
}

/* ref: FUN_00a6acb0 */
GEN_FRAME uint GEN_STDCALL F_00a6acb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa6acb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab4370(0x70,param_1,param_1,0,0);
  return uVar1;
}

/* ref: Client::Game::UI::Telepo::vf1 */
GEN_FRAME uint GEN_THISCALL F_00a6acd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa6acd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*param_2 & 0xf) != 0) && (*(int *)(param_2 + 4) != 0)) {
    uVar1 = 1;
  }
  if ((REFG(int, 0x1379c70) != 3) && (this[0x15] == (undefined1)0x1)) {
    F_00a51200(0x10,uVar1,0,0,0);
    this[0x15] = (undefined1)0x0;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: FUN_00a6ad20 */
GEN_FRAME uint F_00a6ad20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6ad20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = F_00ab2b70((uint)*(byte *)(param_2 + 0x9e));
  uVar2 = F_00ab2290(param_1);
  if ((uVar1 != 0) && (uVar2 != 0)) {
    if ((param_1 - 1U < 0x49) &&
       (((byte)(*(byte *)(param_2 + 0xa6) - 1) < 0x14 && (*(byte *)(param_2 + 0xb0) < 0xb)))) {
      return ((int)((uint)*((ushort *)GEN_TOP(((uVar1 - 2) + param_1 * 2))) *
                    (uint)*((byte *)GEN_TOP((*(byte *)(param_2 + 0xb0) + 0x1a + uVar2))) *
                   (uint)*((byte *)GEN_TOP((*(byte *)(param_2 + 0xa6) + 7 + uVar2)))) / 100 + 0x32) / 100;
    }
  }
  return 0;
}

/* ref: FUN_00a6add0 */
GEN_FRAME uint F_00a6add0(unsigned int gen_a0)
{
  GEN_ENTER(0xa6add0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = F_00aafbf0();
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = F_00ab20e0(uVar4);
      if (uVar2 != 0) {
        iVar3 = 0;
        do {
          if (*(int *)(uVar2 + iVar3 * 4) == param_1) {
            return uVar2;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 10);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return 0;
}

/* ref: FUN_00a6ae10 */
GEN_FRAME uint F_00a6ae10(unsigned int gen_a0)
{
  GEN_ENTER(0xa6ae10u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  uint uVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == (undefined *)0x0) {
    return 0;
  }
  uVar4 = 0;
  uVar3 = 0;
  do {
    if (*(char *)((int)param_1 + 6) == '\0') {
LAB_00a6ae4b: ;
      uVar1 = *((ushort *)GEN_TOP(((int)param_1 + (uVar3 & 0xff) * 2 + 0x20)));
    }
    else {
      uVar2 = F_00a3a860(param_1 GEN_EDX_ARG);
      if (uVar2 == 0) goto LAB_00a6ae4b;
      uVar2 = uVar3;
      this = (undefined *)F_00a3a860(param_1 GEN_EDX_ARG);
      uVar1 = F_0071d2c0(this GEN_EDX_ARG,uVar2);
    }
    if (uVar1 != 0) {
      uVar4 = uVar4 + 1;
    }
    uVar3 = uVar3 + 1;
    if (4 < (int)uVar3) {
      return uVar4;
    }
  } while( true );
}

/* ref: FUN_00a6aeb0 */
GEN_NOFRAME uint GEN_THISCALL F_00a6aeb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6aeb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)this = 1;
  uVar1 = F_00a51200(0x5a,0,0,0,0);
  return uVar1;
}

/* ref: FUN_00a6aed0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a6aed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6aed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  if (param_1 < 0x100) {
    iVar2 = (int)(param_1 + ((int)param_1 >> 0x1f & 7U)) >> 3;
    uVar4 = param_1 & 0x80000007;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
    }
    bVar3 = '\x01' << ((byte)uVar4 & 0x1f);
    if ((char)param_2 == '\x01') {
      pbVar1 = (byte *)(iVar2 + 4 + (int)this);
      *pbVar1 = *pbVar1 | bVar3;
      return;
    }
    pbVar1 = (byte *)(iVar2 + 4 + (int)this);
    *pbVar1 = *pbVar1 & ~bVar3;
  }
  return;
}

/* ref: FUN_00a6af20 */
GEN_FRAME uint GEN_THISCALL F_00a6af20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6af20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = in_ecx;
  for (iVar1 = 8; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  *in_ecx = 2;
  return (uint)in_ecx;
}

/* ref: FUN_00a6af40 */
GEN_NOFRAME uint GEN_THISCALL F_00a6af40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6af40u, gen_a0, 0u, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  return *in_ecx;
}

/* ref: FUN_00a6af60 */
GEN_FRAME byte GEN_THISCALL F_00a6af60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6af60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (param_1 < 0x100) {
    uVar1 = param_1 & 0x80000007;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
    }
    return (*((byte *)GEN_TOP((((int)(param_1 + ((int)param_1 >> 0x1f & 7U)) >> 3) + 4 + (int)this))) &
           (byte)(1 << ((byte)uVar1 & 0x1f))) != 0;
  }
  return 0;
}

/* ref: FUN_00a6afb0 */
GEN_NOFRAME uint GEN_THISCALL F_00a6afb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6afb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  F_00c48350((undefined *)((int)this + 4),0,0x100);
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined2 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  return 0;
}

/* ref: FUN_00a6b020 */
GEN_NOFRAME uint GEN_THISCALL F_00a6b020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6b020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)this = 1;
  uVar1 = F_00a51200(0x5e,0,0,0,0);
  return uVar1;
}

/* ref: FUN_00a6b040 */
GEN_FRAME uint GEN_THISCALL F_00a6b040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x110) = 1;
  uVar1 = F_00a51200(0x5d,param_1,0,0,0);
  return uVar1;
}

/* ref: FUN_00a6b070 */
GEN_FRAME uint GEN_THISCALL F_00a6b070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6b070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  puVar3 = this;
  for (iVar1 = 0x40; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x104) = *param_2;
  *(undefined4 *)((int)this + 0x108) = param_2[1];
  *(undefined2 *)((int)this + 0x10c) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)this = 2;
  return (uint)this;
}

/* ref: FUN_00a6b0b0 */
GEN_NOFRAME uint GEN_THISCALL F_00a6b0b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6b0b0u, gen_a0, 0u, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  return *in_ecx;
}

/* ref: FUN_00a6b0c0 */
GEN_FRAME byte GEN_THISCALL F_00a6b0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (param_1 < 0x800) {
    uVar1 = param_1 & 0x80000007;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
    }
    return (*((byte *)GEN_TOP((((int)(param_1 + ((int)param_1 >> 0x1f & 7U)) >> 3) + 4 + (int)this))) &
           (byte)(1 << ((byte)uVar1 & 0x1f))) != 0;
  }
  return 0;
}

/* ref: FUN_00a6b110 */
GEN_FRAME ushort GEN_THISCALL F_00a6b110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b110u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 5) {
    return *(ushort *)(in_ecx + 0x104 + param_2 * 2);
  }
  return 0;
}

/* ref: FUN_00a6b130 */
GEN_FRAME uint GEN_THISCALL F_00a6b130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa6b130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)((int)this + 0x114) = param_1;
  *(undefined4 *)((int)this + 0x110) = 2;
  *(undefined4 *)((int)this + 0x118) = param_2;
  *(uint *)((int)this + 0x11c) = param_3;
  return param_3;
}

/* ref: FUN_00a6b160 */
GEN_NOFRAME uint GEN_THISCALL F_00a6b160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6b160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x110);
}

/* ref: FUN_00a6b180 */
GEN_NOFRAME uint GEN_THISCALL F_00a6b180(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6b180u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x118);
}

/* ref: FUN_00a6b190 */
GEN_NOFRAME uint GEN_THISCALL F_00a6b190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6b190u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x11c);
}

/* ref: FUN_00a6b200 */
GEN_NOFRAME uint GEN_THISCALL F_00a6b200(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6b200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x44);
  if (uVar3 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x40);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,uVar3);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x44);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x44) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  return uVar3;
}

/* ref: FUN_00a6b2b0 */
GEN_FRAME uint GEN_THISCALL F_00a6b2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 < 0x40) {
    this = ((undefined *)GEN_TOP(((param_1 >> 3) + 0xc + (int)this)));
    *(byte *)this = *(byte *)this | '\x01' << ((byte)param_1 & 7);
  }
  return (uint)this;
}

/* ref: FUN_00a6b2e0 */
GEN_FRAME byte GEN_THISCALL F_00a6b2e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (0x3f < param_1) {
    return 0;
  }
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0xc + (int)this))) & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_00a6b320 */
GEN_FRAME uint GEN_THISCALL F_00a6b320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6b320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 < 3) && ((*(uint *)&gen_a2) < 0x40)) {
    *(char *)(param_1 + 0x14 + (int)this) = (char)(*(uint *)&gen_a2);
  }
  return param_1;
}

/* ref: FUN_00a6b340 */
GEN_FRAME byte GEN_THISCALL F_00a6b340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (2 < param_2) {
    return 0;
  }
  return *(byte *)(param_2 + 0x14 + in_ecx);
}

/* ref: FUN_00a6b360 */
GEN_FRAME uint GEN_THISCALL F_00a6b360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6b360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_1);
  if ((byte)param_1 < 3) {
    uVar1 = (uint)(byte)param_1;
    *(undefined1 *)(uVar1 + 0x32 + (int)this) = (undefined1)param_2;
  }
  return uVar1;
}

/* ref: FUN_00a6b380 */
GEN_FRAME byte GEN_THISCALL F_00a6b380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((byte)param_2 < 3) {
    return *(byte *)((byte)param_2 + 0x32 + in_ecx);
  }
  return 0;
}

/* ref: FUN_00a6b3a0 */
GEN_FRAME uint F_00a6b3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b3a0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if ((param_1 < 3) && ((*(uint *)&gen_a1) < 0x40)) {
    uVar2 = 0;
    if ((*(uint *)&gen_a1) == 0) {
      uVar1 = F_00ab2c00(1);
      if (uVar1 != 0) {
        return *(uint *)(uVar1 + 0x10 + param_1 * 4);
      }
    }
    else {
      uVar1 = F_00ab2c60((*(uint *)&gen_a1));
      if (uVar1 != 0) {
        uVar2 = *(uint *)(uVar1 + 0x14 + param_1 * 4);
      }
    }
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00a6b3f0 */
GEN_FRAME uint GEN_STDCALL F_00a6b3f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa6b3f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a51200(0xc,param_1 & 0xff,0,0,0);
  return uVar1;
}

/* ref: FUN_00a6b410 */
GEN_FRAME uint GEN_STDCALL F_00a6b410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b410u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a51200(10,param_1,param_2,0,0);
  return uVar1;
}

/* ref: FUN_00a6b470 */
GEN_FRAME uint F_00a6b470(unsigned int gen_a0)
{
  GEN_ENTER(0xa6b470u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((char)param_1 != '\x01') {
    return 0;
  }
  return 0x1304;
}

/* ref: FUN_00a6b490 */
GEN_FRAME uint F_00a6b490(unsigned int gen_a0)
{
  GEN_ENTER(0xa6b490u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((char)param_1 != '\x01') {
    return 0;
  }
  return 0x1771;
}

/* ref: FUN_00a6b4b0 */
GEN_FRAME uint F_00a6b4b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa6b4b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((char)param_1 != '\x01') {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a6b4f0 */
GEN_FRAME uint GEN_THISCALL F_00a6b4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != *(uint *)((int)this + 0x38)) {
    *(uint *)((int)this + 0x38) = param_1;
    *(undefined4 *)((int)this + 0x3c) = 0;
    *(undefined4 *)((int)this + 0x40) = 0;
    uVar1 = F_00b7bbd0((undefined *)((int)this + 0x44) GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: FUN_00a6b540 */
GEN_FRAME uint GEN_THISCALL F_00a6b540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa6b540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = F_0042e430((undefined *)((int)this + 0x14) GEN_EDX_FWD,
                       (**(uint * PTR32 *)(*param_1 + 4) & 0xffffff) + (int)*(uint * PTR32 *)(*param_1 + 4));
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x6c);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x6c) = 0;
  }
  piVar2 = *(int * PTR32 *)this;
  if (piVar2 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG,7);
  }
  return uVar3;
}

/* ref: FUN_00a6b5a0 */
GEN_FRAME uint GEN_THISCALL F_00a6b5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa6b5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  int iVar2;
  undefined4 * puVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  ushort * puVar7;
  uint local_c;
  char local_5;
  
  local_c = 0;
  if (param_2 != 0) {
    puVar7 = (ushort *)((int)this + 8);
    do {
      iVar2 = *((int *)GEN_TOP((*(int *)(param_1 + local_c * 4) + 4)));
      if (*(int *)(iVar2 + 4) != 0) {
        *(int *)(puVar7 - 2) = *(int *)(iVar2 + 4);
        uVar1 = (&REFG(undefined2, 0x14ab306))[(int)(local_c)];
        *puVar7 = uVar1;
        local_5 = '\x01';
        uVar5 = F_00ab3080((uint)*(byte *)(iVar2 + 0xd));
        if (uVar5 != 0) {
          cVar6 = '\x01';
          do {
            if (*(ushort *)(uVar5 + 4 + cVar6 * 2) <= uVar1) {
              local_5 = cVar6 + '\x02';
              break;
            }
            cVar6 = cVar6 - 1;
          } while (-1 < cVar6);
        }
        *(char *)(puVar7 + 2) = local_5;
        bVar4 = *(byte *)(iVar2 + 0xc);
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
        *(char *)((int)puVar7 + 3) = cVar6;
        *(byte *)(puVar7 + 1) = bVar4;
      }
      local_c = local_c + 1;
      puVar7 = puVar7 + 6;
    } while (local_c < param_2);
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x4c);
  if (puVar3 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 4))))(*(int * PTR32 *)this GEN_EDX_ARG,8);
  return uVar5;
}

/* ref: FUN_00a6b6c0 */
GEN_FRAME byte GEN_STDCALL F_00a6b6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa6b6c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(char *)(param_1 + 0xa0) == '\x11';
}

/* ref: FUN_00a6b6e0 */
GEN_FRAME byte GEN_STDCALL F_00a6b6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b6e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char cVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  
  uVar4 = F_00ab21a0((uint)*(byte *)(param_1 + 100));
  if (uVar4 == 0) {
    return (ushort)param_2 == 0;
  }
  cVar1 = *(char *)(uVar4 + 0x3e);
  uVar4 = F_00ab21a0(0x12);
  if (((uVar4 != 0) && (cVar2 = *(char *)(uVar4 + 0x43), -1 < cVar2)) && (cVar2 < '\x13')) {
    uVar5 = *(ushort *)(param_1 + 0x66 + cVar2 * 2);
    if (cVar1 == *(char *)(uVar4 + 0x3e)) {
      uVar3 = *(ushort *)(param_1 + 0xd8);
      if ((uVar3 != 0) && (uVar3 < uVar5)) {
        uVar5 = uVar3;
      }
    }
    return (ushort)param_2 <= uVar5;
  }
  return (ushort)param_2 == 0;
}

/* ref: FUN_00a6b810 */
GEN_FRAME uint GEN_THISCALL F_00a6b810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  *(char *)this = (char)param_1;
  if ((((char)param_1 == '\x01') && (REFG(void * PTR32, 0x1379694) != (undefined *)0x0)) && (REFG(char, 0x14ab058) != '\x01')) {
    REFG(char, 0x14ab058) = '\x01';
    uVar1 = F_00aa6f20(REFG(void * PTR32, 0x1379694) GEN_EDX_FWD,1,0);
    REFG(float, 0x14ab05c) = REFG(float, 0x1087f04);
  }
  return uVar1;
}

/* ref: FUN_00a6b870 */
GEN_FRAME uint GEN_THISCALL F_00a6b870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xa6b870u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  int * piVar1;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  if (((piVar1 != (int *)0x0) && (0 < param_2)) && (*param_1 != param_2)) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xe0))(piVar1 GEN_EDX_ARG,param_2)));
  }
  *param_1 = param_2;
  param_1[1] = (int)gen_fl2bits(param_3);
  return (uint)piVar1;
}

/* ref: FUN_00a6b8b0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a6b8b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6b8b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float fVar1;
  
  if (0.0 < gen_bits2f(in_ecx[1])) {
    fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(in_ecx[1]))) - (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
    in_ecx[1] = (undefined4)gen_fl2bits(fVar1);
    if ((float10)fVar1 < (float10)0) {
      in_ecx[1] = 0;
      *in_ecx = 0;
    }
  }
  return;
}

/* ref: FUN_00a6b900 */
GEN_FRAME uint GEN_THISCALL F_00a6b900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6b900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  float10 fVar2;
  
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_FWD,0x54);
  fVar2 = (float10)*(int *)(uVar1 + 0x14);
  if (*(int *)(uVar1 + 0x14) < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(in_ecx + 8) = (float)fVar2;
  *(undefined1 *)(in_ecx + 0xc) = 1;
  return uVar1;
}

/* ref: FUN_00a6b940 */
GEN_FRAME uint GEN_STDCALL F_00a6b940(unsigned int gen_a0)
{
  GEN_ENTER(0xa6b940u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab2de0(param_1);
  if (puVar1 != (uint *)0x0) {
    return (*puVar1 & 0xffffff) + (int)puVar1;
  }
  return 0;
}

/* ref: FUN_00a6b970 */
GEN_FRAME uint GEN_STDCALL F_00a6b970(unsigned int gen_a0)
{
  GEN_ENTER(0xa6b970u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab2f00(param_1);
  if (puVar1 != (uint *)0x0) {
    return (*puVar1 & 0xffffff) + (int)puVar1;
  }
  return 0;
}

/* ref: FUN_00a6b9a0 */
GEN_FRAME uint GEN_THISCALL F_00a6b9a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa6b9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  uint local_c;
  int local_8;
  
  *(undefined1 *)((int)this + 0x4a) = 1;
  if ((**(int * PTR32 *)((int)this + 0x28) != 0) && (local_c = 0, param_2 != 0)) {
    local_8 = 0;
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + local_c * 4) + 4)));
      if (iVar1 != 0) {
        iVar4 = **(int * PTR32 *)((int)this + 0x28) + local_8;
        *(uint *)(iVar4 + 0xb8) = (uint)*(ushort *)(iVar1 + 0x7c);
        uVar3 = F_00ab6240(*(undefined4 *)(iVar4 + 0xbc),0,iVar1);
        F_0042e430((undefined *)(iVar4 + 0x10) GEN_EDX_ARG,uVar3);
        F_0042e430((undefined *)(iVar4 + 100) GEN_EDX_ARG,(*(uint *)(iVar1 + 8) & 0xffffff) + iVar1 + 8);
      }
      local_8 = local_8 + 0xc4;
      local_c = local_c + 1;
    } while (local_c < param_2);
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 4))))(*(int * PTR32 *)((int)this + 0x24) GEN_EDX_ARG,1);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  return uVar3;
}

/* ref: FUN_00a6ba60 */
GEN_FRAME ushort GEN_STDCALL F_00a6ba60(unsigned int gen_a0)
{
  GEN_ENTER(0xa6ba60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  char cVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  
  if (param_1 == 0) {
    uVar5 = F_00ab21a0((uint)REFG(undefined1, 0x14ab0d4));
    if (uVar5 == 0) {
      return 0;
    }
    cVar1 = *(char *)(uVar5 + 0x3e);
    uVar5 = F_00ab21a0(0x10);
    if (uVar5 == 0) {
      return 0;
    }
    cVar2 = *(char *)(uVar5 + 0x43);
    bVar3 = REFG(undefined1, 0x14ab0d4);
    uVar4 = REFG(undefined2, 0x14ab148);
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    uVar5 = F_00ab21a0((uint)REFG(undefined1, 0x14ab0d4));
    if (uVar5 == 0) {
      return 0;
    }
    cVar1 = *(char *)(uVar5 + 0x3e);
    uVar5 = F_00ab21a0(0x11);
    if (uVar5 == 0) {
      return 0;
    }
    cVar2 = *(char *)(uVar5 + 0x43);
    bVar3 = REFG(undefined1, 0x14ab0d4);
    uVar4 = REFG(undefined2, 0x14ab148);
  }
  if ((-1 < cVar2) && (cVar2 < '\x13')) {
    REFG(undefined1, 0x14ab0d4) = bVar3;
    REFG(undefined2, 0x14ab148) = uVar4;
    uVar6 = *(ushort *)(&REFG(undefined, 0x14ab0d6) + cVar2 * 2);
    if ((cVar1 == *(char *)(uVar5 + 0x3e)) && ((uVar4 != 0 && (uVar4 < uVar6)))) {
      uVar6 = uVar4;
    }
    return uVar6;
  }
  REFG(undefined1, 0x14ab0d4) = bVar3;
  REFG(undefined2, 0x14ab148) = uVar4;
  return 0;
}

/* ref: FUN_00a6bb10 */
GEN_FRAME uint GEN_THISCALL F_00a6bb10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa6bb10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 0x48 + (int)this) = 0;
  iVar5 = *(int *)((int)this + param_1 * 4);
  if (iVar5 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0xc);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,iVar5);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + param_1 * 4);
    if (puVar3 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + param_1 * 4) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x48 + (int)this) = 0;
  if (param_1 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      piVar1 = *(int * PTR32 *)((int)this + 0x10);
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,*(int *)((int)this + 4));
      }
      puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
      if (puVar3 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
        *(undefined4 *)((int)this + 4) = 0;
      }
    }
    *(undefined1 *)((int)this + 0x49) = 0;
  }
  else if (param_1 != 1) goto LAB_00a6bbb3;
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x14);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,*(int *)((int)this + 8));
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 8);
    if (puVar3 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  *(undefined1 *)((int)this + 0x4a) = 0;
LAB_00a6bbb3: ;
  puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar2 = *(undefined4 *)((int)this + param_1 * 4 + 0x18);
    F_00cb4700(puVar3 GEN_EDX_ARG,param_2,param_4);
    puVar3[5] = param_2;
    *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10e78a4));
    puVar3[6] = this;
    puVar3[7] = uVar2;
  }
  *(undefined4 * PTR32 *)((int)this + param_1 * 4) = puVar3;
  if (0 < param_2) {
    iVar5 = 0;
    do {
      F_00cb4540(*(undefined * PTR32 *)((int)this + param_1 * 4) GEN_EDX_ARG,iVar5,*(undefined4 *)(param_3 + iVar5 * 4));
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
  }
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0xc);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + param_1 * 4));
  return uVar4;
}

/* ref: FUN_00a6bc80 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a6bc80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6bc80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG)));
  F_0043b380(this_00 GEN_EDX_ARG,this);
  return;
}

/* ref: FUN_00a6bcb0 */
GEN_FRAME uint GEN_STDCALL F_00a6bcb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa6bcb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  undefined * this;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = F_00ab1ed0(param_1);
  uVar4 = 1;
  do {
    uVar2 = F_00ab21a0(uVar4);
    if (((int)*(char *)(uVar1 + 0x2b) == uVar4) ||
       (uVar2 = (uint)*(byte *)(uVar2 + 0x3e), (int)*(char *)(uVar1 + 0x2b) == uVar2)) {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      uVar8 = 1;
      uVar7 = 0;
      uVar5 = 1;
      uVar2 = uVar4;
      uVar6 = param_1;
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x30))(piVar3 GEN_EDX_ARG)));
      uVar2 = F_0045c4d0(this GEN_EDX_ARG,uVar2,uVar5,uVar6,uVar7,uVar8);
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x1d);
  return uVar2;
}

/* ref: FUN_00a6bd20 */
GEN_FRAME uint GEN_STDCALL F_00a6bd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6bd20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc10];
  byte * pbVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  ((uint *)(gen_frame + 0x808))[0x100] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0c);
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar5 = 0;
  if (piVar3 != (int *)0x0) {
    uVar4 = F_00ab21a0(param_1);
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = F_00ab21a0(param_1);
      bVar2 = *(byte *)(uVar5 + 0x3e);
      uVar5 = 0;
      do {
        uVar8 = uVar5 / 0xc;
        uVar14 = 0;
        uVar13 = 0;
        uVar4 = uVar5 % 0xc;
        iVar10 = param_1;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x30))(piVar3 GEN_EDX_ARG)));
        F_004591f0(pvVar6 GEN_EDX_ARG,iVar10,uVar8,uVar4,uVar13,uVar14);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < 0x18);
      iVar11 = 0;
      iVar10 = 1;
      uVar5 = F_00aafad0();
      if (1 < (int)uVar5) {
        do {
          uVar5 = F_00ab1ed0(iVar10);
          if (*(char *)(uVar5 + 0x2b) == param_1) {
LAB_00a6bde6: ;
            uVar5 = F_00ab1ed0(iVar10);
            if ((int)(uint)*(byte *)(uVar5 + 0x1f) <= param_2) {
              ((int *)(gen_frame + 0x8))[(int)(iVar11)] = iVar10;
              uVar5 = F_00ab1ed0(iVar10);
              ((uint *)(gen_frame + 0x808))[(int)(iVar11)] = (uint)*(byte *)(uVar5 + 0x1f);
              pbVar1 = ((byte *)(gen_frame + 0x408)) + iVar11 * 4;
              pbVar1[0] = 1;
              pbVar1[1] = 0;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
              iVar11 = iVar11 + 1;
              if (0xff < iVar11) break;
            }
          }
          else {
            uVar5 = F_00ab1ed0(iVar10);
            if ((int)*(char *)(uVar5 + 0x2b) == (uint)bVar2) goto LAB_00a6bde6;
          }
          iVar10 = iVar10 + 1;
          uVar5 = F_00aafad0();
        } while (iVar10 < (int)uVar5);
      }
      uVar5 = F_00aafaf0();
      if (1 < (int)uVar5) {
        iVar10 = 0x186a1;
        do {
          uVar5 = F_00ab1f00(iVar10);
          if (*(char *)(uVar5 + 0x11) == param_1) {
            uVar5 = F_00ab1f00(iVar10);
            if ((int)(uint)*(byte *)(uVar5 + 0xf) <= param_2) {
              ((int *)(gen_frame + 0x8))[(int)(iVar11)] = iVar10;
              uVar5 = F_00ab1f00(iVar10);
              ((uint *)(gen_frame + 0x808))[(int)(iVar11)] = (uint)*(byte *)(uVar5 + 0xf);
              pbVar1 = ((byte *)(gen_frame + 0x408)) + iVar11 * 4;
              pbVar1[0] = 9;
              pbVar1[1] = 0;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
              iVar11 = iVar11 + 1;
              if (0xff < iVar11) break;
            }
          }
          uVar5 = F_00aafaf0();
          iVar7 = iVar10 - 99999;
          iVar10 = iVar10 + 1;
        } while (iVar7 < (int)uVar5);
      }
      uVar5 = 0;
      do {
        iVar10 = -1;
        iVar7 = 0;
        if (iVar11 < 1) break;
        do {
          if ((((uint *)(gen_frame + 0x808))[(int)(iVar7)] != 0xffffffff) &&
             ((iVar10 == -1 || ((int)((uint *)(gen_frame + 0x808))[(int)(iVar7)] < (int)((uint *)(gen_frame + 0x808))[(int)(iVar10)])))) {
            iVar10 = iVar7;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar11);
        if (iVar10 == -1) break;
        uVar4 = (uint)((byte *)(gen_frame + 0x408))[(int)(iVar10 * 4)];
        iVar7 = ((int *)(gen_frame + 0x8))[(int)(iVar10)];
        uVar9 = uVar5 / 0xc;
        uVar8 = uVar5 % 0xc;
        iVar12 = param_1;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x30))(piVar3 GEN_EDX_ARG)));
        F_004591f0(pvVar6 GEN_EDX_ARG,iVar12,uVar9,uVar8,uVar4,iVar7);
        uVar5 = uVar5 + 1;
        ((uint *)(gen_frame + 0x808))[(int)(iVar10)] = 0xffffffff;
      } while ((int)uVar5 < 0x18);
      iVar10 = (int)uVar5 / 0xc;
      uVar15 = 4;
      uVar14 = 10;
      uVar13 = 0xb;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x30))(piVar3 GEN_EDX_ARG)));
      uVar5 = F_004591f0(pvVar6 GEN_EDX_ARG,param_1,iVar10,uVar13,uVar14,uVar15);
    }
  }
  F_00c47745(((uint *)(gen_frame + 0x808))[0x100] ^ (uint)(uint)(gen_frame + 0xc0c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_00a6bf80 */
GEN_NOFRAME uint GEN_THISCALL F_00a6bf80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6bf80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0xc30) = 1;
  *(undefined4 *)((int)this + 0xc34) = 0;
  F_0042ccf0((undefined *)((int)this + 0xc3c) GEN_EDX_FWD,(int)this + 0x3d4);
  *(undefined2 *)((int)this + 0x3158) = 2;
  *(undefined4 *)((int)this + 0xc90) = 0;
  F_0042ccf0((undefined *)((int)this + 0x315c) GEN_EDX_ARG,(int)this + 0x2c0);
  *(undefined4 *)((int)this + 0x31b0) = 0;
  F_0042ccf0((undefined *)((int)this + 0x31b4) GEN_EDX_ARG,(undefined *)((int)this + 0x315c));
  *(uint *)((int)this + 0x3208) = *(uint *)((int)this + 0x31b0);
  return *(uint *)((int)this + 0x31b0);
}

/* ref: FUN_00a6c000 */
GEN_FRAME uint GEN_THISCALL F_00a6c000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa6c000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x340];
  undefined4 uVar1;
  uint uVar2;
  uint * puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  int * piVar8;
  undefined1 * this_00;
  int iVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined4 * puVar12;
  
  (*(uint *)(gen_frame + 0x338)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x33c);
  if (*(char *)((int)this + 0x3a74) != '\0') {
    bVar4 = 0;
    *(undefined1 *)((int)this + 0x3a74) = 0;
    if (param_2 != 0) {
      iVar9 = *(int *)((int)this + 0x39c4);
      uVar2 = 0;
      do {
        ((undefined4 *)(gen_frame + 0x8))[(int)(uVar2)] = *(undefined4 *)(param_1[uVar2] + 4);
        bVar4 = bVar4 + 1;
        ((undefined4 *)(gen_frame + 0x328))[(int)(uVar2)] = *((undefined4 *)GEN_TOP((*(int *)(iVar9 + 0xc) + uVar2 * 0x10)));
        uVar2 = (uint)bVar4;
      } while (uVar2 < param_2);
    }
    ((undefined4 *)(gen_frame + 0x24))[0] = 0;
    this_00 = ((undefined1 *)(gen_frame + 0x2c));
    (*(int *)(gen_frame + 0x18)) = 3;
    do {
      F_0071dbc0(this_00 GEN_EDX_FWD);
      this_00 = this_00 + 0xa8;
      iVar9 = (*(int *)(gen_frame + 0x18)) - 1;
      (*(int *)(gen_frame + 0x18)) = iVar9;
    } while (-1 < iVar9);
    uVar1 = *(undefined4 *)((int)this + 0x374);
    puVar7 = ((undefined4 *)(gen_frame + 0x328));
    puVar12 = ((undefined4 *)(gen_frame + 0x8));
    ((undefined4 *)(gen_frame + 0x2cc))[0] = 0;
    uVar2 = F_00ab37e0(uVar1);
    F_006d42d0(((undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x43c),*(undefined4 *)(uVar2 + 0x14),puVar12,
                 puVar7,param_2);
    F_0042b630(((undefined1 *)(gen_frame + 0x2d4)) GEN_EDX_ARG);
    F_00709790(((undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG,(undefined *)((int)this + 0x3d4),((undefined1 *)(gen_frame + 0x2d4)));
    F_0042e360((undefined *)((int)this + 0x3d4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2d4)));
    puVar7 = *(undefined4 * PTR32 *)((int)this + 0x39c4);
    if (puVar7 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar7)(puVar7 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x39c4) = 0;
    }
    F_00a6bf80(this GEN_EDX_ARG);
    *(undefined1 *)((int)this + 0x3a65) = 0;
    if (*(char *)((int)this + 0x3aae) == '\0') {
      piVar8 = *(int * PTR32 *)((int)this + 0x3a9c);
    }
    else {
      piVar8 = *(int * PTR32 *)((int)this + 0x3aa0);
    }
    if (piVar8 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 4))(piVar8 GEN_EDX_ARG,0x12);
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x2d4)) GEN_EDX_ARG);
    puVar7 = ((undefined4 *)(gen_frame + 0x2cc));
    iVar9 = 3;
    do {
      puVar7 = puVar7 - 0x2a;
      uVar11 = F_0042c880(puVar7 GEN_EDX_ARG);
      iVar9 = iVar9 - 1;
    } while (-1 < iVar9);
    F_00c47745((*(uint *)(gen_frame + 0x338)) ^ (uint)(uint)(gen_frame + 0x33c) GEN_EDX_ARG);
    return (uint)uVar11;
  }
  uVar2 = *(uint *)((int)this + 0x39b4);
  if (uVar2 == 4) {
    uVar2 = 0;
    F_0042b630(((undefined1 *)(gen_frame + 0x2d4)) GEN_EDX_ARG);
    (*(byte *)(gen_frame + 0x23)) = 0;
    if (*(char *)((int)this + 0x44c) != '\0') {
      (*(int *)(gen_frame + 0x18)) = 0;
      do {
        if (param_2 <= uVar2) break;
        iVar5 = (uint)(*(byte *)(gen_frame + 0x23)) * 0x6c;
        iVar9 = *(int *)(iVar5 + 0x450 + (int)this);
        if ((((iVar9 == 2) || (iVar9 == 3)) || (iVar9 == 4)) || (bVar4 = (*(byte *)(gen_frame + 0x23)), iVar9 == 6)) {
          (*(int *)(gen_frame + 0x1c)) = *(int *)(param_1[uVar2] + 4);
          F_00ab9240(0x18f5f,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x39c4) + 0xc))) + (*(int *)(gen_frame + 0x18))))),((undefined1 *)(gen_frame + 0x2d4)))
          ;
          F_0042ccf0((undefined *)(iVar5 + 0x454 + (int)this) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2d4)));
          *(uint *)(iVar5 + 0x4a8 + (int)this) = (uint)*(ushort *)((*(int *)(gen_frame + 0x1c)) + 0x7c);
          uVar2 = uVar2 + 1;
          (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 0x10;
          bVar4 = (*(byte *)(gen_frame + 0x23));
        }
        (*(byte *)(gen_frame + 0x23)) = bVar4 + 1;
      } while ((byte)(bVar4 + 1) < *(byte *)((int)this + 0x44c));
    }
    (*(byte *)(gen_frame + 0x23)) = 0;
    if (*(char *)((int)this + 0x44d) != '\0') {
      (*(int *)(gen_frame + 0x18)) = uVar2 << 4;
      do {
        if (param_2 <= uVar2) break;
        (*(int *)(gen_frame + 0x1c)) = *(int *)(param_1[uVar2] + 4);
        F_00ab9240(0x18f5f,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x39c4) + 0xc))) + (*(int *)(gen_frame + 0x18))))),((undefined1 *)(gen_frame + 0x2d4)));
        uVar6 = (uint)(*(byte *)(gen_frame + 0x23));
        F_0042ccf0((undefined *)(uVar6 * 0x6c + 0x670 + (int)this) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2d4)));
        (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 0x10;
        bVar4 = (*(byte *)(gen_frame + 0x23)) + 1;
        *(uint *)(uVar6 * 0x6c + 0x6c4 + (int)this) = (uint)*(ushort *)((*(int *)(gen_frame + 0x1c)) + 0x7c);
        uVar2 = uVar2 + 1;
        (*(byte *)(gen_frame + 0x23)) = bVar4;
      } while (bVar4 < *(byte *)((int)this + 0x44d));
    }
    puVar7 = *(undefined4 * PTR32 *)((int)this + 0x39c4);
    if (puVar7 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar7)(puVar7 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x39c4) = 0;
    }
    *(undefined1 *)((int)this + 0x3a65) = 0;
    if (*(char *)((int)this + 0x3aae) == '\0') {
      piVar8 = *(int * PTR32 *)((int)this + 0x3a9c);
    }
    else {
      piVar8 = *(int * PTR32 *)((int)this + 0x3aa0);
    }
    if (piVar8 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 4))(piVar8 GEN_EDX_ARG,0xc);
    }
  }
  else {
    if (uVar2 != 7) goto LAB_00a6c875;
    F_0042b630(((undefined1 *)(gen_frame + 0x2d4)) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x3a78) = 0;
    *(undefined4 *)((int)this + 0x3a7c) = 0;
    if (*(int *)((int)this + 0xa38) != 0) {
      *(undefined4 *)((int)this + 0x3a78) = 1;
      *(undefined4 *)((int)this + 0x450) = 1;
      *(undefined4 *)((int)this + 0x4b4) = 2;
      *(undefined4 *)((int)this + 0x4ac) = *(undefined4 *)((int)this + 0xa38);
      F_0042ccf0((undefined *)((int)this + 0x454) GEN_EDX_ARG,(int)this + 0xb84);
      *(undefined4 *)((int)this + 0x4a8) = 0xf01f;
    }
    bVar10 = *(int *)((int)this + 0xa3c) != 0;
    if (bVar10) {
      iVar9 = *(int *)(*param_1 + 4);
      puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3a78) * 0x6c + 0x450 + (int)this)));
      *(int *)((int)this + 0x3a78) = *(int *)((int)this + 0x3a78) + 1;
      *puVar7 = 2;
      puVar7[0x19] = 2;
      puVar7[0x17] = *(undefined4 *)((int)this + 0xa3c);
      F_00ab9240(0x18f5f,**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x39c4) + 0xc))),puVar7 + 1);
      puVar7[0x18] = 1;
      puVar7[0x16] = (uint)*(ushort *)(iVar9 + 0x7c);
    }
    uVar2 = (uint)bVar10;
    if ((*(int *)((int)this + 0xa50) != 0) && (*(int *)((int)this + 0xa4c) != 0)) {
      iVar9 = *(int *)(param_1[uVar2] + 4);
      puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3a78) * 0x6c + 0x450 + (int)this)));
      *(int *)((int)this + 0x3a78) = *(int *)((int)this + 0x3a78) + 1;
      *puVar7 = 6;
      puVar7[0x19] = 2;
      puVar7[0x17] = *(undefined4 *)((int)this + 0xa50);
      (*(int *)(gen_frame + 0x1c)) = iVar9;
      F_00ab9240(0x18f5f,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x39c4) + 0xc))) + uVar2 * 0x10))),puVar7 + 1
                  );
      puVar7[0x18] = *(undefined4 *)((int)this + 0xa4c);
      puVar7[0x16] = (uint)*(ushort *)((*(int *)(gen_frame + 0x1c)) + 0x7c);
      uVar2 = uVar2 + 1;
    }
    if ((*(short *)((int)this + 0xa48) != 0) && (*(short *)((int)this + 0xa46) != 0)) {
      puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3a78) * 0x6c + 0x450 + (int)this)));
      *(int *)((int)this + 0x3a78) = *(int *)((int)this + 0x3a78) + 1;
      *puVar7 = 2;
      puVar7[0x19] = 2;
      puVar7[0x17] = (uint)*(ushort *)((int)this + 0xa48);
      puVar3 = (uint *)F_00ab3570((uint)*(ushort *)((int)this + 0xa46));
      F_0042e430(puVar7 + 1 GEN_EDX_ARG,(*puVar3 & 0xffffff) + (int)puVar3);
      puVar7[0x16] = (uint)*(ushort *)((int)this + 0xb28);
    }
    if ((*(short *)((int)this + 0xa44) != 0) && (*(int *)((int)this + 0xa40) != 0)) {
      (*(int *)(gen_frame + 0x1c)) = *(int *)(param_1[uVar2] + 4);
      puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3a78) * 0x6c + 0x450 + (int)this)));
      *(int *)((int)this + 0x3a78) = *(int *)((int)this + 0x3a78) + 1;
      *puVar7 = 6;
      puVar7[0x19] = 0x81;
      puVar7[0x17] = (uint)*(ushort *)((int)this + 0xa44);
      F_00ab9240(0x18f5f,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x39c4) + 0xc))) + uVar2 * 0x10))),puVar7 + 1
                  );
      puVar7[0x18] = *(undefined4 *)((int)this + 0xa40);
      puVar7[0x16] = (uint)*(ushort *)((*(int *)(gen_frame + 0x1c)) + 0x7c);
      *(undefined1 *)(puVar7 + 0x1a) = *(undefined1 *)((int)this + 0xa4a);
      uVar2 = uVar2 + 1;
    }
    if (*(int *)((int)this + 0xa54) != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3a7c) * 0x6c + 0x888 + (int)this)));
      *(int *)((int)this + 0x3a7c) = *(int *)((int)this + 0x3a7c) + 1;
      *puVar7 = 1;
      puVar7[0x19] = 2;
      puVar7[0x17] = *(undefined4 *)((int)this + 0xa54);
      F_0042ccf0(puVar7 + 1 GEN_EDX_ARG,(int)this + 0xb84);
      puVar7[0x16] = 0xf01f;
    }
    if (*(int *)((int)this + 0xa58) != 0) {
      (*(int *)(gen_frame + 0x1c)) = *(int *)(param_1[uVar2] + 4);
      puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3a7c) * 0x6c + 0x888 + (int)this)));
      *(int *)((int)this + 0x3a7c) = *(int *)((int)this + 0x3a7c) + 1;
      *puVar7 = 2;
      puVar7[0x19] = 2;
      puVar7[0x17] = *(undefined4 *)((int)this + 0xa58);
      F_00ab9240(0x18f5f,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x39c4) + 0xc))) + uVar2 * 0x10))),puVar7 + 1
                  );
      puVar7[0x18] = 1;
      puVar7[0x16] = (uint)*(ushort *)((*(int *)(gen_frame + 0x1c)) + 0x7c);
      uVar2 = uVar2 + 1;
    }
    if ((*(int *)((int)this + 0xa68) != 0) && (*(int *)((int)this + 0xa4c) != 0)) {
      (*(int *)(gen_frame + 0x1c)) = *(int *)(param_1[uVar2] + 4);
      puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3a7c) * 0x6c + 0x888 + (int)this)));
      *(int *)((int)this + 0x3a7c) = *(int *)((int)this + 0x3a7c) + 1;
      *puVar7 = 6;
      puVar7[0x19] = 2;
      puVar7[0x17] = *(undefined4 *)((int)this + 0xa68);
      F_00ab9240(0x18f5f,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x39c4) + 0xc))) + uVar2 * 0x10))),puVar7 + 1
                  );
      puVar7[0x18] = *(undefined4 *)((int)this + 0xa4c);
      puVar7[0x16] = (uint)*(ushort *)((*(int *)(gen_frame + 0x1c)) + 0x7c);
      uVar2 = uVar2 + 1;
    }
    if ((*(short *)((int)this + 0xa62) != 0) && (*(short *)((int)this + 0xa46) != 0)) {
      puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3a7c) * 0x6c + 0x888 + (int)this)));
      *(int *)((int)this + 0x3a7c) = *(int *)((int)this + 0x3a7c) + 1;
      *puVar7 = 2;
      puVar7[0x19] = 2;
      puVar7[0x17] = (uint)*(ushort *)((int)this + 0xa62);
      puVar3 = (uint *)F_00ab3570((uint)*(ushort *)((int)this + 0xa46));
      F_0042e430(puVar7 + 1 GEN_EDX_ARG,(*puVar3 & 0xffffff) + (int)puVar3);
      puVar7[0x16] = (uint)*(ushort *)((int)this + 0xb28);
    }
    if ((*(short *)((int)this + 0xa60) != 0) && (*(int *)((int)this + 0xa5c) != 0)) {
      (*(int *)(gen_frame + 0x1c)) = *(int *)(param_1[uVar2] + 4);
      puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3a7c) * 0x6c + 0x888 + (int)this)));
      *(int *)((int)this + 0x3a7c) = *(int *)((int)this + 0x3a7c) + 1;
      *puVar7 = 6;
      puVar7[0x19] = 0x81;
      puVar7[0x17] = (uint)*(ushort *)((int)this + 0xa60);
      F_00ab9240(0x18f5f,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x39c4) + 0xc))) + uVar2 * 0x10))),puVar7 + 1
                  );
      puVar7[0x18] = *(undefined4 *)((int)this + 0xa5c);
      puVar7[0x16] = (uint)*(ushort *)((*(int *)(gen_frame + 0x1c)) + 0x7c);
      *(undefined1 *)(puVar7 + 0x1a) = *(undefined1 *)((int)this + 0xa64);
    }
    puVar7 = *(undefined4 * PTR32 *)((int)this + 0x39c4);
    *(undefined1 *)((int)this + 0x44c) = *(undefined1 *)((int)this + 0x3a78);
    *(undefined1 *)((int)this + 0x44e) = *(undefined1 *)((int)this + 0x3a7c);
    if (puVar7 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar7)(puVar7 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x39c4) = 0;
    }
    *(undefined1 *)((int)this + 0x3a65) = 0;
    F_00a67ca0(this GEN_EDX_ARG,0x11);
  }
  uVar11 = F_0042c880(((undefined1 *)(gen_frame + 0x2d4)) GEN_EDX_ARG);
  uVar2 = (uint)uVar11;
LAB_00a6c875: ;
  F_00c47745((*(uint *)(gen_frame + 0x338)) ^ (uint)(uint)(gen_frame + 0x33c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00a6c890 */
GEN_NOFRAME uint GEN_THISCALL F_00a6c890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6c890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00a4ffd0();
  if (*(short *)((int)this + 0x39f8) != 0) {
    *(short *)(uVar1 + 0x188a) = *(short *)((int)this + 0x39f8);
    *(undefined1 *)(uVar1 + 0x1888) = *(undefined1 *)((int)this + 0x39fc);
    uVar2 = F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = F_00a51200(0x44,*(undefined4 *)((int)this + 0x39fc),
                         (uint)*(ushort *)((int)this + 0x39f8),0,0);
    }
  }
  return uVar1;
}

/* ref: FUN_00a6c8f0 */
GEN_FRAME uint GEN_THISCALL F_00a6c8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6c8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  
  uVar1 = (*(int *)((int)this + 0xdc) - *(int *)((int)this + 0xd8)) / 0x11c;
  uVar4 = 0;
  uVar2 = 0;
  if (uVar1 != 0) {
    puVar3 = ((uint *)GEN_TOP((*(int *)((int)this + 0xd8) + 0x54)));
    while (*puVar3 != (uint)(ushort)param_1) {
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 0x47;
      if (uVar1 <= uVar4) {
        return uVar1;
      }
    }
    uVar2 = CONCAT31((int3)(uVar1 >> 8),(undefined1)param_2);
    *((undefined1 *)GEN_TOP((uVar4 * 0x11c + 0x58 + *(int *)((int)this + 0xd8)))) = (undefined1)param_2;
  }
  return uVar2;
}

/* ref: FUN_00a6c950 */
GEN_FRAME uint GEN_THISCALL F_00a6c950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6c950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  
  uVar1 = (*(int *)((int)this + 0xec) - *(int *)((int)this + 0xe8)) / 0x11c;
  uVar4 = 0;
  uVar2 = 0;
  if (uVar1 != 0) {
    puVar3 = ((uint *)GEN_TOP((*(int *)((int)this + 0xe8) + 0x54)));
    while (*puVar3 != (uint)(ushort)param_1) {
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 0x47;
      if (uVar1 <= uVar4) {
        return uVar1;
      }
    }
    uVar2 = CONCAT31((int3)(uVar1 >> 8),(undefined1)param_2);
    *((undefined1 *)GEN_TOP((uVar4 * 0x11c + 0x58 + *(int *)((int)this + 0xe8)))) = (undefined1)param_2;
  }
  return uVar2;
}

/* ref: FUN_00a6c9b0 */
GEN_FRAME uint GEN_THISCALL F_00a6c9b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa6c9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  if ((char)param_1 != '\0') {
    if (param_3 < *(uint *)((int)this + 0xc30)) {
      iVar1 = param_3 * 0x18c + 0xc3c;
    }
    else {
      iVar1 = (param_3 - *(uint *)((int)this + 0xc30)) * 0x58 + 0x315c;
    }
    F_0042ccf0((undefined *)(iVar1 + (int)this) GEN_EDX_FWD,param_2);
    *(int *)((int)this + 15000) = *(int *)((int)this + 15000) + 1;
  }
  uVar2 = (uint)*(ushort *)((int)this + 0x3158) + *(int *)((int)this + 0xc30);
  if (uVar2 <= *(uint *)((int)this + 15000)) {
    *(undefined4 *)((int)this + 15000) = 0;
    *(undefined1 *)((int)this + 0x3a65) = 0;
    if (*(char *)((int)this + 0x3aae) == '\0') {
      piVar3 = *(int * PTR32 *)((int)this + 0x3a9c);
    }
    else {
      piVar3 = *(int * PTR32 *)((int)this + 0x3aa0);
    }
    if (piVar3 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG,0xd);
    }
  }
  return uVar2;
}

/* ref: FUN_00a6ca50 */
GEN_FRAME uint GEN_THISCALL F_00a6ca50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6ca50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int * piVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  
  uVar1 = F_006b8c00();
  uVar1 = F_006c5190(uVar1 GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    if (param_1 == 1) {
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      uVar4 = 0x648;
    }
    else {
      if (param_1 - 2U != 0) {
        return param_1 - 2U;
      }
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      uVar4 = 0x55e;
    }
LAB_00a6ca95: ;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
    uVar1 = F_0046a630(pvVar3 GEN_EDX_ARG,uVar4);
    return uVar1;
  }
  if (param_1 == 1) {
    F_00a51200(0x4b,param_2,0,0,0);
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    uVar1 = param_2 & 0xffff | 0x10000;
    uVar4 = 0x644;
  }
  else {
    if (param_1 - 2U != 0) {
      return param_1 - 2U;
    }
    pvVar3 = (undefined *)F_006b8c00();
    uVar1 = F_006d6fd0(pvVar3 GEN_EDX_ARG);
    if ((uVar1 != 0) && (*(short *)(uVar1 + 0x310) == *(short *)((int)this + 0x17c))) {
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      uVar4 = 0x55f;
      goto LAB_00a6ca95;
    }
    F_00a51200(0x4d,param_2,0,0,0);
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    uVar4 = 0x55d;
    uVar1 = param_2;
  }
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
  uVar1 = F_0046a6b0(pvVar3 GEN_EDX_ARG,uVar4,uVar1);
  return uVar1;
}

/* ref: FUN_00a6cb60 */
GEN_FRAME uint GEN_THISCALL F_00a6cb60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6cb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a67af0(this GEN_EDX_FWD,param_1);
  if (uVar1 == 0) {
    uVar1 = F_00ab2690((uint)REFG(undefined1, 0x14ab29e));
    uVar1 = -(uint)(*(ushort *)(uVar1 + 0x28) != *(uint *)&REFG(undefined2, 0x1379c78)) & 5;
  }
  return uVar1;
}

/* ref: FUN_00a6cba0 */
GEN_FRAME uint GEN_THISCALL F_00a6cba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6cba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  char cVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  F_006c42f0(param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = *(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 6);
  }
  this_00 = (undefined *)F_006b8c00();
  uVar2 = F_006d6fd0(this_00 GEN_EDX_ARG);
  if ((uVar2 == 0) || (*(short *)(uVar2 + 0x310) != (short)param_1)) {
    if (cVar4 == '\x01') {
      uVar2 = F_00a67af0(this GEN_EDX_ARG,param_1);
      if (uVar2 != 0) {
        return uVar2;
      }
      F_00a51200(0x4f,param_1 & 0xffff,param_2,0,0);
    }
    return 0;
  }
  sVar1 = *((short *)GEN_TOP((*(int *)(uVar2 + 0x1d4) + 2)));
  uVar3 = 0;
  if ((sVar1 == -0x7fff) || ((sVar1 == -0x7ffe || (sVar1 == -0x7ff9)))) {
    uVar3 = (uint)*(byte *)(uVar2 + 0x322);
  }
  if ((int)uVar3 <= (int)param_2) {
    return -(uint)(param_2 != uVar3) & 7;
  }
  F_00a51200(0x51,param_1 & 0xffff,param_2,0,0);
  return 0;
}

/* ref: FUN_00a6cc80 */
GEN_FRAME uint GEN_THISCALL F_00a6cc80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6cc80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  char cVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  undefined * puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  pvVar3 = (undefined *)F_006b8c00();
  uVar4 = F_006d6fd0(pvVar3 GEN_EDX_ARG);
  if ((uVar4 == 0) || (*(short *)(uVar4 + 0x310) != (short)param_1)) {
    uVar4 = (uint)REFG(undefined1, 0x14ab0d4);
    iVar2 = *(int *)((int)this + 0x284);
    if ((((uVar4 < 0x1d) && (uVar5 = F_00ab21a0(uVar4), uVar5 != 0)) &&
        (uVar4 = F_00ab21a0(uVar4), uVar4 != 0)) &&
       ((cVar1 = *(char *)(uVar4 + 0x43), -1 < cVar1 && (cVar1 < '\x13')))) {
      uVar4 = (uint)*(ushort *)(&REFG(undefined, 0x14ab0d6) + cVar1 * 2);
    }
    else {
      uVar4 = 0;
    }
    uVar4 = uVar4 - iVar2;
    if ((int)uVar4 < 5) {
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 4;
    }
  }
  else {
    uVar4 = (uint)*(byte *)(uVar4 + 0x322);
  }
  uVar5 = F_0042a990((int)this + 0x180 GEN_EDX_ARG);
  F_005a2710(param_2 GEN_EDX_ARG,6);
  *(uint *)((int)param_2 + 4) = uVar5;
  if (*(char *)((int)this + 0x444) == '\0') {
    F_005a2710((undefined *)((int)param_2 + 8) GEN_EDX_ARG,3);
    *(undefined4 *)((int)param_2 + 0xc) = 0xffffffff;
  }
  else {
    F_005a2710((undefined *)((int)param_2 + 8) GEN_EDX_ARG,3);
    *(uint *)((int)param_2 + 0xc) = uVar4;
    F_005a2710((undefined *)((int)param_2 + 0x10) GEN_EDX_ARG,4);
    *(undefined4 *)((int)param_2 + 0x14) = 0;
    F_005a2710((undefined *)((int)param_2 + 0x18) GEN_EDX_ARG,4);
    *(undefined4 *)((int)param_2 + 0x1c) = 4;
  }
  piVar6 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar8 = 0x249;
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x18))(piVar6 GEN_EDX_ARG)));
  uVar4 = F_00460bd0(pvVar3 GEN_EDX_ARG,uVar8,uVar4);
  F_005a2710((undefined *)((int)param_2 + 0x20) GEN_EDX_ARG,6);
  *(uint *)((int)param_2 + 0x24) = uVar4;
  if (*(int *)((int)this + 0x318) == 2) {
    puVar7 = &REFG(undefined, 0x10e70fe);
  }
  else {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0x248;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x18))(piVar6 GEN_EDX_ARG)));
    puVar7 = (undefined *)F_0043bd00(pvVar3 GEN_EDX_ARG,uVar8,uVar9,uVar10);
  }
  uVar4 = F_005a2710((undefined *)((int)param_2 + 0x28) GEN_EDX_ARG,6);
  *(undefined * PTR32 *)((int)param_2 + 0x2c) = puVar7;
  return uVar4;
}

/* ref: FUN_00a6cdf0 */
GEN_FRAME uint GEN_STDCALL F_00a6cdf0(unsigned int gen_a0)
{
  GEN_ENTER(0xa6cdf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 uVar4;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = 0;
  if (piVar2 != (int *)0x0) {
    uVar4 = 3;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2 GEN_EDX_ARG);
    this = (undefined *)F_00763050(uVar3 GEN_EDX_ARG,uVar4);
    uVar3 = 0;
    if (this != (undefined *)0x0) {
      bVar1 = F_007d3410(this GEN_EDX_ARG,4,param_1);
      uVar3 = CONCAT31(extraout_var,bVar1);
    }
  }
  return uVar3;
}

/* ref: FUN_00a6ce30 */
GEN_FRAME unsigned int GEN_THISCALL F_00a6ce30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa6ce30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)((int)this + 0x220);
    uVar4 = F_00427d90();
    lVar1 = uVar4 - lVar1;
    if (((int)((ulonglong)lVar1 >> 0x20) != 0) || (499 < (uint)lVar1)) {
      iVar3 = param_1 - 1;
      iVar2 = param_3;
      if ((*(int *)((int)this + param_1 * 8) == param_2) &&
         (*(int *)((int)this + iVar3 * 8 + 0xc) == param_3)) {
        param_2 = -0x20000000;
        iVar2 = 0;
      }
      F_00a68030(this GEN_EDX_ARG,iVar3,param_2,iVar2);
      F_00a512b0(0x17,param_2,iVar2,iVar3,0,0,0);
      uVar4 = F_00427d90();
      *(ulonglong *)((int)this + 0x220) = uVar4;
    }
  }
  return;
}

/* ref: FUN_00a6cf10 */
GEN_NOFRAME uint F_00a6cf10(void)
{
  GEN_ENTER(0xa6cf10u, 0u, 0u, 0u, 0u);
  uint uVar1;
  undefined * this;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = F_00a4ffd0();
  iVar2 = *(int *)(uVar1 + 0x18bc);
  if (iVar2 != 0) {
    uVar1 = F_006c3740();
    iVar2 = uVar1 + iVar2;
    if (iVar2 != 0) {
      this = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      if (this != (undefined *)0x0) {
        uVar1 = F_00975680(this GEN_EDX_ARG);
        return (iVar2 - uVar1) / 0x3c;
      }
      uVar3 = F_0046ff40();
      return (uint)(iVar2 - (int)(uVar3 / 1000)) / 0x3c;
    }
  }
  return 0;
}

/* ref: FUN_00a6cf80 */
GEN_FRAME uint GEN_THISCALL F_00a6cf80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6cf80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte * pbVar1;
  uint in_EAX = 0;
  int * piVar2;
  
  if (param_1 < 0x20) {
    pbVar1 = ((byte *)GEN_TOP(((param_1 >> 3 & 0xff) + 0x26d + (int)this)));
    *pbVar1 = *pbVar1 | '\x01' << ((byte)param_1 & 7);
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    in_EAX = 0;
    if (piVar2 != (int *)0x0) {
      in_EAX = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2 GEN_EDX_ARG);
      *(byte *)(in_EAX + 0x230bf) = *(byte *)(in_EAX + 0x230bf) | 0x10;
    }
  }
  return in_EAX;
}

/* ref: FUN_00a6cfd0 */
GEN_FRAME uint GEN_THISCALL F_00a6cfd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6cfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  *(undefined4 *)((int)this + 0x30c) = param_1;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 100;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
    this_00 = (undefined *)F_00763050(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar2 = F_00878650(this_00 GEN_EDX_ARG,param_1);
    }
  }
  return uVar2;
}

/* ref: FUN_00a6d010 */
GEN_NOFRAME byte GEN_THISCALL F_00a6d010(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6d010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  undefined * this_00;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar7 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  if (((piVar3 != (int *)0x0) && (piVar1 = *(int * PTR32 *)((int)this + 0x40), piVar1 != (int *)0x0)) &&
     (*piVar1 != 0)) {
    iVar4 = (uint)*(ushort *)(piVar1 + 2) * 0x444 + *piVar1;
    bVar2 = *(byte *)(iVar4 + 0x3f1);
    if ((bVar2 & 2) != 0) {
      if ((bVar2 & 8) == 0) {
        uVar6 = 0x4b8;
      }
      else {
        bVar2 = F_006d05b0((uint)*(ushort *)(iVar4 + 0x3e0));
        if (bVar2 == 0) {
          uVar6 = 0x4b9;
        }
        else {
          uVar5 = F_00a68f30(this GEN_EDX_ARG,1);
          if ((int)uVar5 < 1) {
            uVar6 = 0x478;
          }
          else {
            uVar5 = F_00a3a180(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
            if (uVar5 != 0) {
              return 1;
            }
            uVar6 = 0x46e;
          }
        }
      }
      uVar8 = 0;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG)));
      F_0046ac40(this_00 GEN_EDX_ARG,uVar6,iVar7,uVar8);
    }
  }
  return 0;
}

/* ref: FUN_00a6d0e0 */
GEN_NOFRAME uint GEN_THISCALL F_00a6d0e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6d0e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x40);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    if ((undefined *)*piVar1 != (undefined *)0x0) {
      F_00a8a960((undefined *)*piVar1 GEN_EDX_FWD,3);
    }
    **(undefined4 * PTR32 *)((int)this + 0x40) = 0;
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x40) != 0) {
    uVar2 = F_00406ad0(*(int *)((int)this + 0x40));
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  return uVar2;
}

/* ref: FUN_00a6d120 */
GEN_FRAME uint GEN_THISCALL F_00a6d120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6d120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint in_EAX = 0;
  byte bVar1;
  
  if (*(int *)((int)this + 0x40) != 0) {
    F_00a695b0(this GEN_EDX_FWD);
    bVar1 = 0;
    (*(uint *)(gen_frame + 0x8)) = (uint)this & 0xffffff00;
    if (*((char *)GEN_TOP((*(int *)((int)this + 0x40) + 4))) != '\0') {
      do {
        F_00a694f0(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x8)),param_1);
        bVar1 = bVar1 + 1;
        (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),bVar1);
      } while (bVar1 < *((byte *)GEN_TOP((*(int *)((int)this + 0x40) + 4))));
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 4))))(*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_ARG,2);
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 4))))(*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_ARG,3);
  }
  return in_EAX;
}

/* ref: FUN_00a6d180 */
GEN_FRAME uint GEN_THISCALL F_00a6d180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa6d180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 0x9ed + (int)this) = 0;
  iVar5 = *(int *)((int)this + param_1 * 4);
  if (iVar5 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x14);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,iVar5);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + param_1 * 4);
    if (puVar3 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + param_1 * 4) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x9ed + (int)this) = 0;
  if (param_1 == 2) {
    if (*(int *)((int)this + 0xc) != 0) {
      piVar1 = *(int * PTR32 *)((int)this + 0x20);
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,*(int *)((int)this + 0xc));
      }
      puVar3 = *(undefined4 * PTR32 *)((int)this + 0xc);
      if (puVar3 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    *(undefined1 *)((int)this + 0x9f0) = 0;
    if (*(int *)((int)this + 0x10) != 0) {
      piVar1 = *(int * PTR32 *)((int)this + 0x24);
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,*(int *)((int)this + 0x10));
      }
      puVar3 = *(undefined4 * PTR32 *)((int)this + 0x10);
      if (puVar3 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
        *(undefined4 *)((int)this + 0x10) = 0;
      }
    }
    *(undefined1 *)((int)this + 0x9f1) = 0;
  }
  else if (param_1 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      piVar1 = *(int * PTR32 *)((int)this + 0x18);
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,*(int *)((int)this + 4));
      }
      puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
      if (puVar3 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
        *(undefined4 *)((int)this + 4) = 0;
      }
    }
    *(undefined1 *)((int)this + 0x9ee) = 0;
  }
  puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar2 = *(undefined4 *)((int)this + param_1 * 4 + 0x28);
    F_00cb4700(puVar3 GEN_EDX_ARG,param_2,param_4);
    puVar3[5] = param_2;
    *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10e78bc));
    puVar3[6] = this;
    puVar3[7] = uVar2;
  }
  *(undefined4 * PTR32 *)((int)this + param_1 * 4) = puVar3;
  iVar5 = 0;
  if (0 < param_2) {
    do {
      F_00cb4540(*(undefined * PTR32 *)((int)this + param_1 * 4) GEN_EDX_ARG,iVar5,*(undefined4 *)(param_3 + iVar5 * 4));
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
  }
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x14);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + param_1 * 4));
  return uVar4;
}

/* ref: FUN_00a6d2e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a6d2e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6d2e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar1 = *(int *)((int)this + iVar4 * 4);
    if (iVar1 != 0) {
      piVar2 = *(int * PTR32 *)((int)this + iVar4 * 4 + 0x14);
      if (piVar2 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2 GEN_EDX_FWD,iVar1);
      }
      puVar3 = *(undefined4 * PTR32 *)((int)this + iVar4 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
        *(undefined4 *)((int)this + iVar4 * 4) = 0;
      }
    }
    *(undefined1 *)((int)this + iVar4 + 0x9ed) = 0;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  return 0;
}

/* ref: FUN_00a6d330 */
GEN_FRAME byte GEN_STDCALL F_00a6d330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6d330u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  undefined * this;
  uint uVar2;
  undefined4 uVar3;
  
  ((uint *)(gen_frame + 0x8))[0x10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  ((uint *)(gen_frame + 0x8))[8] = 8;
  ((uint *)(gen_frame + 0x8))[9] = 9;
  ((uint *)(gen_frame + 0x8))[10] = 10;
  ((uint *)(gen_frame + 0x8))[0xb] = 0xb;
  ((uint *)(gen_frame + 0x8))[0xc] = 0xc;
  ((uint *)(gen_frame + 0x8))[0xd] = 0xd;
  ((uint *)(gen_frame + 0x8))[0xe] = 0xe;
  ((uint *)(gen_frame + 0x8))[0xf] = 0xf;
  ((uint *)(gen_frame + 0x8))[0] = 0x46f;
  ((uint *)(gen_frame + 0x8))[1] = 0x470;
  ((uint *)(gen_frame + 0x8))[2] = 0x471;
  ((uint *)(gen_frame + 0x8))[3] = 0x472;
  ((uint *)(gen_frame + 0x8))[4] = 0x473;
  ((uint *)(gen_frame + 0x8))[5] = 0x474;
  ((uint *)(gen_frame + 0x8))[6] = 0x475;
  ((uint *)(gen_frame + 0x8))[7] = 0x476;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  if ((uint)*(byte *)(param_1 + 0x1688) != ((uint *)(gen_frame + 0x8))[(int)((param_2 & 0xff) + 8)]) {
    if (piVar1 != (int *)0x0) {
      uVar2 = ((uint *)(gen_frame + 0x8))[(int)(param_2 & 0xff)];
      uVar3 = 0;
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
      F_0046ac40(this GEN_EDX_ARG,uVar2,param_1,uVar3);
    }
    F_00c47745(((uint *)(gen_frame + 0x8))[0x10] ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return 0;
  }
  F_00c47745(((uint *)(gen_frame + 0x8))[0x10] ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00a6d420 */
GEN_FRAME byte GEN_STDCALL F_00a6d420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6d420u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * piVar1;
  undefined * this;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((int)((param_2 & 0xff) - (uint)*(byte *)(param_1 + 0x1689)) < 6) {
    return 1;
  }
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  if (piVar1 != (int *)0x0) {
    uVar3 = 0;
    uVar2 = 0x477;
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
    F_0046ac40(this GEN_EDX_ARG,uVar2,param_1,uVar3);
  }
  return 0;
}

/* ref: FUN_00a6d470 */
GEN_FRAME byte GEN_THISCALL F_00a6d470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6d470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int * piVar5;
  undefined * pvVar6;
  int * piVar7;
  int * piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  ((byte *)(gen_frame + 0x8))[0x70] = (char)uVar4;
  ((byte *)(gen_frame + 0x8))[0x71] = (char)(uVar4 >> 8);
  ((byte *)(gen_frame + 0x8))[0x72] = (char)(uVar4 >> 0x10);
  ((byte *)(gen_frame + 0x8))[0x73] = (char)(uVar4 >> 0x18);
  piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  bVar3 = false;
  if ((*(byte *)(param_2 + 0x380) != 0xff) &&
     (*((ushort *)GEN_TOP(((uint)*(byte *)(param_2 + 0x380) * 0x60 + 0x388 + (int)this))) <
      (ushort)*(byte *)(param_2 + 0x381))) {
    bVar3 = true;
  }
  if ((*(byte *)(param_2 + 0x382) != 0xff) &&
     (*((ushort *)GEN_TOP(((uint)*(byte *)(param_2 + 0x382) * 0x60 + 0x388 + (int)this))) <
      (ushort)*(byte *)(param_2 + 899))) {
    bVar3 = true;
  }
  bVar2 = false;
  piVar7 = (int *)(param_2 + 100);
  iVar9 = 8;
  piVar8 = piVar7;
  do {
    iVar1 = piVar8[-0x17];
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) = piVar8[-0x18];
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = piVar8[-0x19];
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) = iVar1;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)) = piVar8[-0x16];
    F_0042cbc0(((byte *)(gen_frame + 0x8)) + 0x10 GEN_EDX_ARG,piVar8 - 0x15);
    iVar1 = *piVar8;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 104)) = piVar8[1];
    ((byte *)(gen_frame + 0x8))[0x6d] = *(byte *)((int)piVar8 + 9);
    ((byte *)(gen_frame + 0x8))[0x6c] = *(byte *)(piVar8 + 2);
    ((byte *)(gen_frame + 0x8))[0x6e] = ((byte *)(gen_frame + 0x8))[0x6e] ^ (*(byte *)((int)piVar8 + 10) ^ ((byte *)(gen_frame + 0x8))[0x6e]) & 1;
    ((byte *)(gen_frame + 0x8))[100] = (char)iVar1;
    ((byte *)(gen_frame + 0x8))[0x65] = (char)((uint)iVar1 >> 8);
    ((byte *)(gen_frame + 0x8))[0x66] = (char)((uint)iVar1 >> 0x10);
    ((byte *)(gen_frame + 0x8))[0x67] = (char)((uint)iVar1 >> 0x18);
    if (((((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) & 0x10000) != 0) && (iVar1 != 0)) && (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) & 0x20000) != 0)) {
      bVar2 = true;
    }
    F_0042c880(((byte *)(gen_frame + 0x8)) + 0x10 GEN_EDX_ARG);
    piVar8 = piVar8 + 0x1c;
    iVar9 = iVar9 - 1;
  } while (iVar9 != 0);
  if (bVar3) {
    if (!bVar2) {
      if (piVar5 != (int *)0x0) {
        uVar11 = 0;
        uVar10 = 0x479;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5 GEN_EDX_ARG)));
        F_0046ac40(pvVar6 GEN_EDX_ARG,uVar10,param_1,uVar11);
        F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 112)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
        return 0;
      }
      goto LAB_00a6d599;
    }
    if (piVar5 == (int *)0x0) goto LAB_00a6d599;
    uVar10 = 0x47a;
  }
  else if (bVar2) {
    if (piVar5 == (int *)0x0) goto LAB_00a6d599;
    uVar10 = 0x478;
  }
  else {
    iVar9 = 0;
    while ((((*(byte *)((int)piVar7 - 0x5a) & 1) == 0 || (*piVar7 == 0)) ||
           (*(byte *)(piVar7 + 2) <= (byte)((char)piVar7[-0x17] + *(char *)((int)piVar7 - 0x5b)))))
    {
      iVar9 = iVar9 + 1;
      piVar7 = piVar7 + 0x1c;
      if (7 < iVar9) {
        F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 112)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
        return 1;
      }
    }
    if (piVar5 == (int *)0x0) goto LAB_00a6d599;
    uVar10 = 0x47b;
  }
  uVar11 = 0;
  pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5 GEN_EDX_ARG)));
  F_0046ac40(pvVar6 GEN_EDX_ARG,uVar10,param_1,uVar11);
LAB_00a6d599: ;
  F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 112)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00a6d650 */
GEN_FRAME byte GEN_STDCALL F_00a6d650(unsigned int gen_a0)
{
  GEN_ENTER(0xa6d650u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int * piVar2;
  undefined * this;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = F_00a3a180(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
  if (uVar1 == 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if (piVar2 != (int *)0x0) {
      uVar4 = 0;
      uVar3 = 0x46e;
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
      F_0046ac40(this GEN_EDX_ARG,uVar3,param_1,uVar4);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00a6d6a0 */
GEN_FRAME uint GEN_THISCALL F_00a6d6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6d6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined * puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = param_1 - 1;
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0: ;
      if (*(int *)((int)this + 0x10) == 0) {
        uVar2 = (uint)REFG(undefined1, 0x14ab29e);
        uVar14 = 0x6f;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG)));
        uVar2 = F_00460bd0(pvVar4 GEN_EDX_ARG,uVar14,uVar2);
        uVar14 = 1;
LAB_00a6d700: ;
        uVar8 = 0;
        uVar7 = 1;
        uVar6 = 1;
        uVar5 = 4;
        uVar17 = 0;
        pvVar4 = this;
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
        uVar2 = F_00897360(pvVar3 GEN_EDX_ARG,uVar2,pvVar4,uVar14,uVar17,uVar5,uVar6,uVar7,uVar8);
        *(uint *)((int)this + 0x10) = uVar2;
        return uVar2;
      }
      break;
    case 1: ;
      if (*(int *)((int)this + 0x14) == 0) {
        uVar17 = 0;
        puVar15 = &REFG(undefined, 0x10e7123);
        uVar14 = 0x70;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG)));
        uVar2 = F_00460620(pvVar4 GEN_EDX_ARG,uVar14,puVar15,uVar17);
        uVar18 = 0;
        uVar16 = 0;
        uVar13 = 1;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 4;
        uVar7 = 0;
        uVar6 = 1;
        uVar5 = 2;
        uVar17 = 0;
        uVar14 = 0;
        pvVar4 = this;
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
        uVar2 = F_00866a60(pvVar3 GEN_EDX_ARG,uVar2,uVar14,uVar17,pvVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,
                             uVar11,uVar12,uVar13,uVar16,uVar18);
        *(uint *)((int)this + 0x14) = uVar2;
        return uVar2;
      }
      break;
    case 2: ;
      if (*(int *)((int)this + 0x18) == 0) {
        uVar17 = 0;
        puVar15 = &REFG(undefined, 0x10e7133);
        uVar14 = 0x71;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG)));
        uVar2 = F_00460620(pvVar4 GEN_EDX_ARG,uVar14,puVar15,uVar17);
        uVar18 = 0;
        uVar16 = 0;
        uVar13 = 1;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 4;
        uVar7 = 0;
        uVar6 = 1;
        uVar5 = 3;
        uVar17 = 0;
        uVar14 = 0;
        pvVar4 = this;
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
        uVar2 = F_00866a60(pvVar3 GEN_EDX_ARG,uVar2,uVar14,uVar17,pvVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,
                             uVar11,uVar12,uVar13,uVar16,uVar18);
        *(uint *)((int)this + 0x18) = uVar2;
      }
      break;
    case 3: ;
      if (*(int *)((int)this + 0x10) == 0) {
        uVar17 = 1;
        uVar14 = 0x77;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG)));
        uVar2 = F_00460bd0(pvVar4 GEN_EDX_ARG,uVar14,uVar17);
        uVar14 = 4;
        goto LAB_00a6d700;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00a6d810 */
GEN_FRAME uint GEN_THISCALL F_00a6d810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6d810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = param_1 - 1;
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0: ;
    case 3: ;
      if (*(int *)((int)this + 0x10) != 0) {
        piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x10),0);
        *(undefined4 *)((int)this + 0x10) = 0;
        return uVar2;
      }
      break;
    case 1: ;
      if (*(int *)((int)this + 0x14) != 0) {
        piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x14),0);
        *(undefined4 *)((int)this + 0x14) = 0;
        return uVar2;
      }
      break;
    case 2: ;
      if (*(int *)((int)this + 0x18) != 0) {
        piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x18),0);
        *(undefined4 *)((int)this + 0x18) = 0;
      }
    }
  }
  return uVar2;
}

/* ref: Client::Game::UI::Revive::vf1 */
GEN_FRAME uint GEN_THISCALL F_00a6d8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa6d8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int * piVar1;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  if (param_4 == 1) {
LAB_00a6d8f7: ;
    if (((param_3 != 0) && ((*param_2 & 0xf) != 0)) && (*(int *)(param_2 + 4) != 0)) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
    F_00a51200(0xd,8,0,0,0);
    F_00ab5c50(&REFG(undefined4, 0x14bcc80) GEN_EDX_ARG);
    *(undefined4 *)(this + 0x10) = 0;
  }
  else {
    if (param_4 != 2) {
      if (param_4 != 4) goto LAB_00a6d9ad;
      goto LAB_00a6d8f7;
    }
    if ((param_3 < 1) || (((*param_2 & 0xf) != 0 && (*(int *)(param_2 + 4) != 0)))) {
      F_00a51200(0x12,0,0,0,0);
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined2 *)(this + 0x1c) = 1;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return (uint)param_1;
    }
    F_00a51200(0xd,5,0,0,0);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1 GEN_EDX_ARG,0,0x5a,1);
    *(undefined4 *)(this + 0x14) = 0;
  }
  *(undefined2 *)(this + 0x1f) = 0;
  *(undefined4 *)(this + 4) = 3;
LAB_00a6d9ad: ;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_00a6d9d0 */
GEN_FRAME uint GEN_THISCALL F_00a6d9d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6d9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  undefined * this_00;
  byte bVar2;
  short sVar3;
  undefined3 extraout_var = 0;
  undefined * pvVar5;
  int * piVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar4;
  
  bVar2 = F_005d4e10(&REFG(undefined, 0x1379c6c) GEN_EDX_FWD);
  this_00 = REFG(void * PTR32, 0x1379694);
  uVar7 = REFG(undefined4, 0x137104c);
  uVar4 = CONCAT31(extraout_var,bVar2);
  if (bVar2 != 0) {
    return uVar4;
  }
  if (REFG(void * PTR32, 0x1379694) == (undefined *)0x0) {
    return uVar4;
  }
  if ((*(char *)((int)this + 0x21) == '\x01') && (*(int *)((int)this + 4) != 3)) {
    return uVar4;
  }
  piVar6 = *(int * PTR32 *)((int)this + 4);
  switch((unsigned int)(uintptr_t)(piVar6)) {
  case (int *)0x0: ;
    *(undefined1 *)((int)this + 0x1c) = 0;
    if (*(char *)((int)this_00 + 0x188) == '\x02') {
      *(undefined4 *)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 4) = 1;
      return (uint)piVar6;
    }
    F_00a6d810(this GEN_EDX_ARG,1);
    piVar6 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if ((piVar6 != (int *)0x0) && (*(int *)((int)this + 0x10) != 0)) {
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6 GEN_EDX_ARG)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x10),0);
      *(undefined4 *)((int)this + 0x10) = 0;
    }
    piVar6 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if ((piVar6 != (int *)0x0) && (*(int *)((int)this + 0x18) != 0)) {
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6 GEN_EDX_ARG)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x18),0);
      *(undefined4 *)((int)this + 0x18) = 0;
    }
    piVar6 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if ((piVar6 != (int *)0x0) && (*(int *)((int)this + 0x14) != 0)) {
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6 GEN_EDX_ARG)));
      uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x14),0);
      *(undefined4 *)((int)this + 0x14) = 0;
      return uVar7;
    }
    break;
  case (int *)0x1: ;
    if (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379694) + 0x188))) == '\x02') {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(REFG(undefined4, 0x137104c) + 0x1198) +
                     (float10)*(float *)((int)this + 0xc))));
      *(float *)((int)this + 0xc) = fVar1;
      if (!((float10)REFG(float, 0x1087ef8) <= (float10)fVar1)) {
        return uVar7;
      }
      *(undefined4 *)((int)this + 4) = 2;
      return uVar7;
    }
    goto LAB_00a6ddd1;
  case (int *)0x2: ;
    if (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379694) + 0x188))) != '\x02') {
      *(undefined1 *)((int)this + 0x1c) = 0;
      *(undefined2 *)((int)this + 0x1f) = 0;
      *(undefined4 *)((int)this + 4) = 3;
      return (uint)piVar6;
    }
    if (*(char *)((int)this + 0x1c) == '\x01') {
      uVar7 = F_0071ce90(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG,0x94);
      if (*(char *)((int)this + 0x1d) != (char)uVar7) {
        return uVar7;
      }
      *(undefined1 *)((int)this + 0x1c) = 0;
      return uVar7;
    }
    pvVar5 = (undefined *)F_006b8c00();
    pvVar5 = (undefined *)F_006d7020(pvVar5 GEN_EDX_ARG);
    if (pvVar5 == (undefined *)0x0) {
LAB_00a6dc2a: ;
      uVar7 = F_0071ce90(this_00 GEN_EDX_ARG,0x94);
      if ((char)uVar7 == '\0') {
        *(undefined1 *)((int)this + 0x1d) = 0;
        piVar6 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
        if ((piVar6 != (int *)0x0) && (*(int *)((int)this + 0x14) != 0)) {
          piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6 GEN_EDX_ARG)));
          ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x14),0);
          *(undefined4 *)((int)this + 0x14) = 0;
        }
        uVar7 = F_00ab1cc0((uint)REFG(undefined1, 0x1379c7c));
        if ((uVar7 == 0) || (*(char *)(uVar7 + 9) != '\0')) {
          uVar8 = 1;
          if ((*(int *)((int)this_00 + 0xe4) != 0) &&
             (((sVar3 = (short)((uint)*(int *)((int)this_00 + 0xe4) >> 0x10), sVar3 != -0x7fff &&
               (sVar3 != -0x7ffe)) && (sVar3 != -0x7ff9)))) {
            uVar8 = 4;
          }
          uVar7 = F_00a6d6a0(this GEN_EDX_ARG,uVar8,(undefined4)gen_fl2bits((float)(float10)0));
          return uVar7;
        }
      }
      else {
        *(undefined1 *)((int)this + 0x1d) = 1;
        F_00a6d6a0(this GEN_EDX_ARG,2,(undefined4)gen_fl2bits((float)(float10)0));
      }
    }
    else {
      uVar7 = F_00476000();
      uVar9 = F_006c4fe0(pvVar5 GEN_EDX_ARG,uVar7,0);
      if (uVar9 != 0) goto LAB_00a6dc2a;
      piVar6 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      if ((piVar6 != (int *)0x0) && (*(int *)((int)this + 0x18) != 0)) {
        piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6 GEN_EDX_ARG)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x18),0);
        *(undefined4 *)((int)this + 0x18) = 0;
      }
      piVar6 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      if ((piVar6 != (int *)0x0) && (*(int *)((int)this + 0x14) != 0)) {
        piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6 GEN_EDX_ARG)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x14),0);
        *(undefined4 *)((int)this + 0x14) = 0;
      }
    }
    F_00a6d810(this GEN_EDX_ARG,1);
    piVar6 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if ((piVar6 != (int *)0x0) && (*(int *)((int)this + 0x10) != 0)) {
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6 GEN_EDX_ARG)));
      uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x10),0);
      *(undefined4 *)((int)this + 0x10) = 0;
      return uVar7;
    }
    break;
  case (int *)0x3: ;
    piVar6 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if ((piVar6 != (int *)0x0) && (*(int *)((int)this + 0x18) != 0)) {
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6 GEN_EDX_ARG)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x18),0);
      *(undefined4 *)((int)this + 0x18) = 0;
    }
    piVar6 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if ((piVar6 != (int *)0x0) && (*(int *)((int)this + 0x14) != 0)) {
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6 GEN_EDX_ARG)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x14),0);
      *(undefined4 *)((int)this + 0x14) = 0;
    }
    F_00a6d810(this GEN_EDX_ARG,1);
    piVar6 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if ((piVar6 != (int *)0x0) && (*(int *)((int)this + 0x10) != 0)) {
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6 GEN_EDX_ARG)));
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x10),0)));
      *(undefined4 *)((int)this + 0x10) = 0;
    }
    if (*(char *)((int)this_00 + 0x188) == '\x02') {
      if (*(char *)((int)this + 0x1f) != '\x01') {
        return (uint)piVar6;
      }
      uVar7 = F_00aa0210(this_00 GEN_EDX_ARG,0,0);
      if (uVar7 == 0x4d) {
        return 0x4d;
      }
      if (*(char *)((int)this + 0x20) != '\x01') {
        return uVar7;
      }
    }
    F_00aaa5b0(this_00 GEN_EDX_ARG,1);
    piVar6 = (int *)F_00a51200(0x15,0,0,0,0);
    *(undefined1 *)((int)this + 0x1c) = 0;
    *(undefined2 *)((int)this + 0x1f) = 0;
LAB_00a6ddd1: ;
    *(undefined4 *)((int)this + 4) = 0;
  }
  return (uint)piVar6;
}

/* ref: FUN_00a6ddf0 */
GEN_NOFRAME uint GEN_THISCALL F_00a6ddf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6ddf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined1 *)((int)this + 0x21) = 1;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 0x18) != 0)) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x18),0);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 0x14) != 0)) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x14),0);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 0x10) != 0)) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x10),0);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 0x10) != 0)) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x10),0)));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00a6dec0 */
GEN_FRAME byte GEN_THISCALL F_00a6dec0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6dec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  undefined * PTR32 * ppvVar4;
  undefined * pvVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  ppvVar4 = (undefined * PTR32 *)((int)this + 0x70);
  pvVar2 = ((undefined *)GEN_TOP(((*(int *)((int)this + 100) - *(int *)((int)this + 0x60) >> 2) -
                   *(int *)((int)this + 0x74))));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
  if (pvVar2 < *ppvVar4) {
    ppvVar4 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  pvVar2 = *ppvVar4;
  if (pvVar2 != (undefined *)0x0) {
    if (*(int *)((int)this + 0x5c) != 0) {
      piVar1 = *(int * PTR32 *)((int)this + 0x58);
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,*(int *)((int)this + 0x5c));
      }
      puVar3 = *(undefined4 * PTR32 *)((int)this + 0x5c);
      if (((undefined *)puVar3[5] != pvVar2) && (puVar3 != (undefined4 *)0x0)) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
        *(undefined4 *)((int)this + 0x5c) = 0;
      }
    }
    if (*(int *)((int)this + 0x5c) == 0) {
      puVar3 = (undefined4 *)F_00406b90(0x1c,0,0);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        F_00cb4700(puVar3 GEN_EDX_ARG,pvVar2,0);
        puVar3[5] = pvVar2;
        puVar3[6] = this;
        *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10e7948));
      }
      *(undefined4 * PTR32 *)((int)this + 0x5c) = puVar3;
    }
    pvVar5 = (undefined *)0x0;
    if (pvVar2 != (undefined *)0x0) {
      do {
        F_00cb4540(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,pvVar5,
                     *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x60) + (*(int *)((int)this + 0x74) + (int)pvVar5) * 4))))
        ;
        pvVar5 = (undefined *)((int)pvVar5 + 1);
      } while (pvVar5 < pvVar2);
    }
    F_00cb4650(*(undefined4 *)((int)this + 0x5c) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x5c));
    piVar1 = *(int * PTR32 *)((int)this + 0x58);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x5c));
      return 1;
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x5c);
    if (puVar3 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x5c) = 0;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG,0,0,0);
  }
  return 0;
}

/* ref: FUN_00a6dfd0 */
GEN_NOFRAME uint GEN_THISCALL F_00a6dfd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6dfd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  ulonglong uVar2;
  
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00975680(this_00 GEN_EDX_ARG);
    uVar2 = F_006c4fe0(*(undefined * PTR32 *)this GEN_EDX_ARG,uVar1,0);
    return (uint)uVar2;
  }
  uVar2 = F_0046ff40();
  uVar2 = F_006c4fe0(*(undefined * PTR32 *)this GEN_EDX_ARG,(int)(uVar2 / 1000),0);
  return (uint)uVar2;
}

/* ref: FUN_00a6e020 */
GEN_FRAME uint GEN_THISCALL F_00a6e020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6e020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  uint uVar2;
  int * piVar3;
  byte bVar4;
  
  uVar2 = param_1 >> 3;
  if (uVar2 < 0x10) {
    bVar4 = '\x01' << ((byte)param_1 & 7);
    if ((char)param_2 == '\0') {
      pbVar1 = (byte *)(uVar2 + 0xb080 + (int)this);
      *pbVar1 = *pbVar1 & ~bVar4;
    }
    else {
      pbVar1 = (byte *)(uVar2 + 0xb080 + (int)this);
      *pbVar1 = *pbVar1 | bVar4;
    }
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    uVar2 = 0;
    if (piVar3 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3 GEN_EDX_ARG);
      *(byte *)(uVar2 + 0x230bf) = *(byte *)(uVar2 + 0x230bf) | 0x10;
    }
  }
  return uVar2;
}

/* ref: FUN_00a6e080 */
GEN_FRAME uint GEN_THISCALL F_00a6e080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa6e080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte * pbVar1;
  int * piVar2;
  undefined * pvVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  
  pvVar3 = this;
  if (*(char *)((int)this + 0x1230) != '\0') {
    bVar4 = (byte)param_1 & 7;
    uVar5 = param_1 >> 3;
    bVar6 = (*(byte *)(uVar5 + 0xb09c + (int)this) & (byte)(1 << bVar4)) != 0;
    pvVar3 = ((undefined *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),bVar6)));
    if (((char)param_3 != '\0') || (!bVar6)) {
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc0))(piVar2 GEN_EDX_ARG,param_1,param_2)));
      if (!bVar6) {
        if (uVar5 < 0x20) {
          pbVar1 = (byte *)(uVar5 + 0xb09c + (int)this);
          *pbVar1 = *pbVar1 | '\x01' << bVar4;
        }
        pvVar3 = (undefined *)F_00a51200(0x1d,param_1,0,0,0);
      }
    }
  }
  return (uint)pvVar3;
}

/* ref: FUN_00a6e120 */
GEN_FRAME uint GEN_THISCALL F_00a6e120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6e120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  char cVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  
  uVar2 = F_00ab1c90(param_1);
  cVar1 = *(char *)((int)this + 0x130f);
  if (param_1 == 0x81) {
    bVar3 = cVar1 == '\x01';
LAB_00a6e15a: ;
    if (bVar3) {
      F_00a6e080(this GEN_EDX_ARG,0xe,0,0);
    }
  }
  else {
    if (param_1 == 0x82) {
      bVar3 = cVar1 == '\x03';
      goto LAB_00a6e15a;
    }
    if (param_1 == 0x84) {
      bVar3 = cVar1 == '\x02';
      goto LAB_00a6e15a;
    }
  }
  if (*(char *)(uVar2 + 0x2a) == '\x01') {
    F_00a6e080(this GEN_EDX_ARG,7,0,0);
    if (*(char *)((int)this + 0x1294) == '\x11') {
      uVar4 = 0x17;
    }
    else {
      if (*(char *)((int)this + 0x1294) != '\x10') goto LAB_00a6e19e;
      uVar4 = 0x69;
    }
    F_00a6e080(this GEN_EDX_ARG,uVar4,0,0);
  }
LAB_00a6e19e: ;
  if (param_2 == 9) {
    uVar2 = F_00a6e080(this GEN_EDX_ARG,0x52,0,0);
  }
  else {
    uVar2 = param_2 - 10;
    if (uVar2 == 0) {
      uVar2 = F_00a6e080(this GEN_EDX_ARG,0x54,0,0);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00a6e1d0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a6e1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6e1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = 0;
  if (0x1c < (byte)param_1) {
    return;
  }
  uVar1 = F_00ab21a0((uint)(byte)param_1);
  if (uVar1 == 0) {
    return;
  }
  if (((*(int *)(uVar1 + 0x10) == 0x1e) || (*(int *)(uVar1 + 0x10) == 0x1f)) &&
     (0xe < (ushort)param_2)) {
    F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x58,0,0);
  }
  if (((((byte)param_1 == 1) || ((byte)param_1 == 3)) || ((byte)param_1 == 4)) &&
     (3 < (ushort)param_2)) {
    F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x41,0,0);
  }
  if ((byte)param_1 == 2) {
    if (1 < (ushort)param_2) {
      uVar4 = 0x80;
      goto LAB_00a6e288;
    }
  }
  else if ((byte)param_1 == 7) {
    if (1 < (ushort)param_2) {
      uVar4 = 0x7f;
LAB_00a6e288: ;
      F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,uVar4,0,0);
    }
  }
  else if (((byte)param_1 == 0x1a) && (3 < (ushort)param_2)) {
    uVar4 = 0x81;
    goto LAB_00a6e288;
  }
  if (((*(int *)(uVar1 + 0x10) == 0x1e) || (*(int *)(uVar1 + 0x10) == 0x1f)) &&
     (2 < (ushort)param_2)) {
    uVar1 = 1;
    do {
      uVar2 = F_00ab21a0(uVar1);
      if (((uVar1 != (byte)param_1) && (*(char *)(uVar2 + 0x45) == '\0')) &&
         (((*(int *)(uVar2 + 0x10) == 0x1e || (*(int *)(uVar2 + 0x10) == 0x1f)) &&
          (uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,uVar1,0), uVar3 < (uVar2 & 0xffff))))) {
        uVar3 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,uVar1,0);
        uVar3 = uVar3 & 0xffff;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x1d);
    if (9 < uVar3) {
      F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x29,0,0);
    }
  }
  uVar3 = F_00ab21a0((uint)(byte)param_1);
  if ((*(int *)(uVar3 + 0x10) == 0x20) &&
     (uVar1 = F_00a68310((undefined *)((int)this + 0x1230) GEN_EDX_ARG,0x20), 7 < (ushort)uVar1)) {
    F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x1a,0,0);
  }
  if (((byte)param_1 == 0x11) || ((byte)param_1 == 0x10)) {
    if (1 < (ushort)param_2) {
      F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x19,0,0);
    }
    if (0xb < (ushort)param_2) {
      F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x38,0,0);
    }
    if (0x2d < (ushort)param_2) {
      F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x37,0,0);
    }
  }
  if ((byte)param_1 == 0x11) {
    if ((ushort)param_2 < 0xb) goto LAB_00a6e43f;
    uVar4 = 0x1b;
  }
  else if ((byte)param_1 == 0x10) {
    if ((ushort)param_2 < 0xb) goto LAB_00a6e43f;
    uVar4 = 0x6a;
  }
  else {
    if ((byte)param_1 != 0x12) goto LAB_00a6e43f;
    if (7 < (ushort)param_2) {
      F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x7c,0,0);
    }
    if (0xe < (ushort)param_2) {
      F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x7d,0,0);
    }
    if (0x13 < (ushort)param_2) {
      F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x79,0,0);
    }
    if (0x18 < (ushort)param_2) {
      F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x7a,0,0);
    }
    if ((ushort)param_2 < 0x23) goto LAB_00a6e43f;
    uVar4 = 0x7b;
  }
  F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,uVar4,0,0);
LAB_00a6e43f: ;
  if (*(int *)(uVar3 + 0x10) == 0x21) {
    uVar3 = F_00a68310((undefined *)((int)this + 0x1230) GEN_EDX_ARG,0x21);
    uVar3 = uVar3 & 0xffff;
    if (0xc < uVar3) {
      F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x3a,0,0);
    }
    if (0x1b < uVar3) {
      F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x3b,0,0);
    }
    if (9 < uVar3) {
      F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x7e,0,0);
    }
  }
  return;
}

/* ref: FUN_00a6e4a0 */
GEN_FRAME uint GEN_THISCALL F_00a6e4a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6e4a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int iVar4;
  
  uVar2 = F_00ab21a0((uint)(byte)param_1);
  uVar3 = 0;
  if (uVar2 != 0) {
    if ((REFG(undefined1, 0x14ab14e) != (byte)param_1) &&
       ((*(int *)(uVar2 + 0x10) == 0x1e || (*(int *)(uVar2 + 0x10) == 0x1f)))) {
      F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x88,0,0);
    }
    uVar3 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
    if (((uVar3 != 0) && ((byte)param_1 == 0x11)) && (*(char *)(uVar3 + 0x2a) == '\x01')) {
      uVar3 = F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x17,0,0);
    }
    if ((*(int *)(uVar2 + 0x10) == 0x21) && ((*(byte *)((int)this + 0xb0a0) & 1) == 0)) {
      iVar4 = 0;
      do {
        bVar1 = F_00a3edd0(iVar4);
        if (bVar1 != 0) {
          F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x20,0,0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      bVar1 = F_00a3edd0(REFG(undefined4, 0x14a4258));
      uVar3 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        uVar3 = F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x20,0,0);
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00a6e590 */
GEN_FRAME unsigned int F_00a6e590(void)
{
  GEN_ENTER(0xa6e590u, 0u, 0u, 0u, 0u);
  char cVar1;
  char cVar2;
  int * piVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  
  if ((REFG(char, 0x14ab070) != '\0') && ((REFG(undefined1, 0x14b4edf) >> 5 & 1) == 0)) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc0))(piVar3 GEN_EDX_ARG,0x1d,0);
    REFG(undefined1, 0x14b4edf) = REFG(undefined1, 0x14b4edf) | 0x20;
    F_00a51200(0x1d,0x1d,0,0,0);
  }
  uVar6 = (uint)REFG(undefined1, 0x14ab0d4);
  if ((uVar6 < 0x1d) && (uVar4 = F_00ab21a0(uVar6), uVar4 != 0)) {
    cVar1 = *(char *)(uVar4 + 0x3e);
    uVar6 = F_00ab21a0(uVar6);
    if ((uVar6 != 0) && ((cVar2 = *(char *)(uVar6 + 0x43), -1 < cVar2 && (cVar2 < '\x13')))) {
      uVar5 = *(ushort *)(&REFG(undefined, 0x14ab0d6) + cVar2 * 2);
      if ((cVar1 == *(char *)(uVar6 + 0x3e)) && ((REFG(undefined2, 0x14ab148) != 0 && (REFG(undefined2, 0x14ab148) < uVar5)))) {
        uVar5 = REFG(undefined2, 0x14ab148);
      }
      if (((4 < uVar5) && (REFG(char, 0x14ab070) != '\0')) && ((REFG(undefined1, 0x14b4edf) >> 6 & 1) == 0)) {
        piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc0))(piVar3 GEN_EDX_ARG,0x1e,0);
        REFG(undefined1, 0x14b4edf) = REFG(undefined1, 0x14b4edf) | 0x40;
        F_00a51200(0x1d,0x1e,0,0,0);
      }
    }
  }
  return;
}

/* ref: FUN_00a6e6a0 */
GEN_FRAME uint GEN_THISCALL F_00a6e6a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6e6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  char cVar2;
  ushort uVar3;
  byte bVar4;
  ushort uVar5;
  int * piVar6;
  uint uVar7;
  undefined * this_00;
  uint3 extraout_var = 0;
  int iVar8;
  undefined3 extraout_var_00 = 0;
  uint uVar9;
  undefined4 uVar10;
  
  piVar6 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  uVar10 = 3;
  uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x48))(piVar6 GEN_EDX_ARG);
  this_00 = (undefined *)F_00763050(uVar7 GEN_EDX_ARG,uVar10);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  F_007d3410(this_00 GEN_EDX_ARG,0x24,(uint)(REFG(undefined1, 0x14b4ec0) >> 1 & 1));
  F_007d3410(this_00 GEN_EDX_ARG,0x23,(uint)(REFG(undefined1, 0x14b4ec0) >> 4 & 1));
  if ((REFG(undefined1, 0x14b4ec2) & 0x60) == 0) {
    iVar8 = (uint)extraout_var << 8;
  }
  else {
    iVar8 = 1;
  }
  F_007d3410(this_00 GEN_EDX_ARG,8,iVar8);
  uVar7 = F_00ab21a0((uint)*(byte *)((int)this + 0x1294));
  if (uVar7 == 0) {
LAB_00a6e782: ;
    (*(uint *)(gen_frame + 0x8)) = 0;
  }
  else {
    cVar1 = *(char *)(uVar7 + 0x3e);
    uVar7 = F_00ab21a0(0x10);
    if (((uVar7 == 0) || (cVar2 = *(char *)(uVar7 + 0x43), cVar2 < '\0')) || ('\x12' < cVar2))
    goto LAB_00a6e782;
    uVar9 = (uint)*(ushort *)((int)this + cVar2 * 2 + 0x1296);
    (*(uint *)(gen_frame + 0x8)) = uVar9;
    if (((cVar1 == *(char *)(uVar7 + 0x3e)) && (uVar5 = *(ushort *)((int)this + 0x1308), uVar5 != 0)
        ) && (uVar5 < uVar9)) {
      (*(uint *)(gen_frame + 0x8)) = (uint)uVar5;
    }
  }
  uVar7 = F_00ab21a0((uint)*(byte *)((int)this + 0x1294));
  if (uVar7 == 0) {
LAB_00a6e7e5: ;
    uVar5 = 0;
  }
  else {
    cVar1 = *(char *)(uVar7 + 0x3e);
    uVar7 = F_00ab21a0(0x11);
    if (((uVar7 == 0) || (cVar2 = *(char *)(uVar7 + 0x43), cVar2 < '\0')) || ('\x12' < cVar2))
    goto LAB_00a6e7e5;
    uVar5 = *(ushort *)((int)this + cVar2 * 2 + 0x1296);
    if (((cVar1 == *(char *)(uVar7 + 0x3e)) && (uVar3 = *(ushort *)((int)this + 0x1308), uVar3 != 0)
        ) && (uVar3 < uVar5)) {
      uVar5 = uVar3;
    }
  }
  if (((short)(*(uint *)(gen_frame + 0x8)) != 0) || ((*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) & 0xffffff00, uVar5 != 0)) {
    (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),1);
  }
  F_007d3410(this_00 GEN_EDX_ARG,7,(*(uint *)(gen_frame + 0x8)));
  uVar7 = F_00a68310((undefined *)((int)this + 0x1230) GEN_EDX_ARG,0x21);
  F_007d3410(this_00 GEN_EDX_ARG,9,(uint)((short)uVar7 != 0));
  uVar7 = F_00ab21a0((uint)*(byte *)((int)this + 0x1294));
  if (uVar7 != 0) {
    cVar1 = *(char *)(uVar7 + 0x3e);
    uVar7 = F_00ab21a0(0x12);
    if (((uVar7 != 0) && (cVar2 = *(char *)(uVar7 + 0x43), -1 < cVar2)) && (cVar2 < '\x13')) {
      uVar5 = *(ushort *)((int)this + cVar2 * 2 + 0x1296);
      if (((cVar1 == *(char *)(uVar7 + 0x3e)) &&
          (uVar3 = *(ushort *)((int)this + 0x1308), uVar3 != 0)) && (uVar3 < uVar5)) {
        uVar5 = uVar3;
      }
      goto LAB_00a6e886;
    }
  }
  uVar5 = 0;
LAB_00a6e886: ;
  (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),uVar5 != 0);
  F_007d3410(this_00 GEN_EDX_ARG,0x1d,(*(uint *)(gen_frame + 0x8)));
  F_007d3410(this_00 GEN_EDX_ARG,0x29,(*(uint *)(gen_frame + 0x8)));
  uVar7 = F_00a4ffd0();
  bVar4 = F_00b8c9f0(uVar7);
  F_007d3410(this_00 GEN_EDX_ARG,0x21,(uint)bVar4);
  F_007d3410(this_00 GEN_EDX_ARG,0x2a,(uint)(REFG(undefined1, 0x14b4ec2) >> 1 & 1));
  bVar4 = F_007d3410(this_00 GEN_EDX_ARG,0x1f,(uint)(REFG(undefined1, 0x14b4ec1) >> 1 & 1));
  return CONCAT31(extraout_var_00,bVar4);
}

/* ref: FUN_00a6e900 */
GEN_FRAME uint GEN_THISCALL F_00a6e900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6e900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1 >> 3;
  uVar3 = param_1 & 0xffffff07;
  if ((byte)uVar4 < 0x10) {
    if ((char)param_2 == '\0') {
      pbVar1 = ((byte *)GEN_TOP(((uVar4 & 0xff) + 0xb0bc + (int)this)));
      *pbVar1 = *pbVar1 & ~('\x01' << ((byte)param_1 & 7));
    }
    else {
      pbVar1 = ((byte *)GEN_TOP(((uVar4 & 0xff) + 0xb0bc + (int)this)));
      *pbVar1 = *pbVar1 | '\x01' << ((byte)param_1 & 7);
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2 GEN_EDX_ARG);
      *(byte *)(uVar3 + 0x230bf) = *(byte *)(uVar3 + 0x230bf) | 0x10;
    }
  }
  return uVar3;
}

/* ref: FUN_00a6e970 */
GEN_NOFRAME uint GEN_THISCALL F_00a6e970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6e970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  uVar1 = F_00a69ca0(this GEN_EDX_FWD);
  if (REFG(int, 0x1488344) != 0) {
    iVar2 = (int)this + 0x1c0;
    this_00 = (undefined *)F_006b8c00();
    uVar1 = F_006ff0a0(this_00 GEN_EDX_ARG,iVar2);
  }
  *(undefined1 *)((int)this + 0x1dd) = 0;
  return uVar1;
}

/* ref: FUN_00a6e9a0 */
GEN_FRAME uint GEN_THISCALL F_00a6e9a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6e9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int iVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  
  uVar2 = REFG(undefined4, 0x1379694);
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  iVar7 = *((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x1d0) * 4 + 0x7c))) * 0x2624 +
          *(int *)((int)this + 0x198);
  bVar6 = 0;
  (*(uint *)(gen_frame + 0xa)) = (*(uint *)(gen_frame + 0xa)) & 0xffffff00;
  if (*(int *)(iVar7 + 0xb0) != 0) {
    this = (undefined *)0x0;
    do {
      iVar1 = (int)((int)(uintptr_t)this) * 0x18c + 0xb0 + iVar7;
      if ((uint)*(ushort *)(iVar7 + 0xa8) == *(uint *)(iVar1 + 0x5c)) {
        uVar5 = *(ushort *)(iVar7 + 0xaa) | 0x10000;
        (*(byte *)(gen_frame + 0xe)) = 0;
        (*(byte *)(gen_frame + 0xf)) = 0;
        pvVar3 = (undefined *)F_006b8c00();
        pvVar3 = (undefined *)F_006e3240(pvVar3 GEN_EDX_ARG,uVar5);
        if (pvVar3 != (undefined *)0x0) {
          F_006d0d30(pvVar3 GEN_EDX_ARG,uVar2,(*(uint *)(gen_frame + 0xa)),&(*(byte *)(gen_frame + 0xf)),&(*(byte *)(gen_frame + 0xe)));
        }
        *(uint *)(iVar1 + 0xb4) = (uint)(*(byte *)(gen_frame + 0xf));
        *(uint *)(iVar1 + 0xb8) = (uint)(*(byte *)(gen_frame + 0xe));
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,&REFG(undefined, 0x10e715d),REFG(undefined4, 0x108cc50));
        if (((*(byte *)(gen_frame + 0xe)) != 0) && (*(char *)(iVar1 + 4) == '\0')) {
          bVar4 = (*(byte *)(gen_frame + 0xf));
          if ((*(byte *)(gen_frame + 0xe)) < (*(byte *)(gen_frame + 0xf))) {
            bVar4 = (*(byte *)(gen_frame + 0xe));
          }
          uVar5 = F_0042ce40(((undefined1 *)(gen_frame + 0x10))," %u/%u",(uint)bVar4,(uint)(*(byte *)(gen_frame + 0xe)));
          F_0042ccf0(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,uVar5);
          F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        }
        F_0042ccf0((undefined *)(iVar1 + 0x60) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
      }
      bVar6 = bVar6 + 1;
      this = (undefined *)(uint)bVar6;
      (*(uint *)(gen_frame + 0xa)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xa)), 1, 3),bVar6);
    } while (this < *(undefined * PTR32 *)(iVar7 + 0xb0));
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00a6eb20 */
GEN_FRAME unsigned int GEN_THISCALL F_00a6eb20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa6eb20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  int iVar2;
  
  if ((((char)param_1 != '\0') && (*(char *)((int)this + 0x1d4) != '\0')) &&
     (iVar2 = *((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x1d0) * 4 + 0x7c))) * 0x2624,
     piVar1 = ((int *)GEN_TOP((iVar2 + 0xb0 + *(int *)((int)this + 0x198)))),
     *(uint *)((int)this + 0x1d8) < *((uint *)GEN_TOP((iVar2 + 0xb0 + *(int *)((int)this + 0x198)))))) {
    F_0042ccf0(piVar1 + param_3 * 99 + 2 GEN_EDX_FWD,param_2);
    *(int *)((int)this + 0x1d8) = *(int *)((int)this + 0x1d8) + 1;
    if (*(int *)((int)this + 0x1d8) == *piVar1) {
      *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + 1;
      *(undefined4 *)((int)this + 0x1d8) = 0;
      if ((uint)*(ushort *)((int)this + 0x78) <= *(uint *)((int)this + 0x1d0)) {
        *(undefined2 *)((int)this + 0x1d4) = 0;
        *(undefined1 *)((int)this + 0x1dd) = 0;
        *(undefined1 *)((int)this + 0x194) = 1;
        return;
      }
      *(undefined1 *)((int)this + 0x1d5) = 1;
    }
  }
  return;
}

/* ref: FUN_00a6ebe0 */
GEN_NOFRAME uint GEN_THISCALL F_00a6ebe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6ebe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * this_00;
  byte bVar4;
  uint uVar5;
  
  piVar2 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_FWD,&REFG(undefined, 0x10e7818));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2 GEN_EDX_ARG);
  uVar5 = (uint)*(ushort *)((int)this + 0x7a) - *(int *)((int)this + 0x1e0);
  if (uVar3 < uVar5) {
    uVar5 = uVar3;
  }
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,uVar5,0);
    this_00[5] = uVar5;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e78d4));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xa79980));
  }
  *(undefined4 * PTR32 *)((int)this + 0x20c) = this_00;
  if (*(int *)((int)this + 0x208) == 0) {
    uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0x3c);
    *(uint *)((int)this + 0x208) = uVar3;
  }
  bVar4 = 0;
  if (uVar5 != 0) {
    uVar3 = 0;
    do {
      iVar1 = *((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x1e0) * 4 + 0x90)));
      *(int *)((int)this + 0x1e0) = *(int *)((int)this + 0x1e0) + 1;
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x20c) GEN_EDX_ARG,uVar3,
                   (uint)*((ushort *)GEN_TOP((iVar1 * 0x2624 + 0xaa + *(int *)((int)this + 0x198)))));
      bVar4 = bVar4 + 1;
      uVar3 = (uint)bVar4;
    } while (uVar3 < uVar5);
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x208) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x208) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x20c));
  return uVar5;
}

/* ref: FUN_00a6ece0 */
GEN_NOFRAME uint GEN_THISCALL F_00a6ece0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6ece0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * this_00;
  byte bVar4;
  uint uVar5;
  
  piVar2 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_FWD,"GatheringLeve");
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2 GEN_EDX_ARG);
  uVar5 = *(int *)((int)this + 500) - *(int *)((int)this + 0x1f8);
  if (uVar3 < uVar5) {
    uVar5 = uVar3;
  }
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,uVar5,0);
    this_00[5] = uVar5;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e78d4));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xa7a320));
  }
  *(undefined4 * PTR32 *)((int)this + 0x224) = this_00;
  if (*(int *)((int)this + 0x220) == 0) {
    uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0xb2);
    *(uint *)((int)this + 0x220) = uVar3;
  }
  bVar4 = 0;
  if (uVar5 != 0) {
    uVar3 = 0;
    do {
      iVar1 = *((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x1f8) * 4 + 0xb8)));
      *(int *)((int)this + 0x1f8) = *(int *)((int)this + 0x1f8) + 1;
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x224) GEN_EDX_ARG,uVar3,
                   *((undefined4 *)GEN_TOP((iVar1 * 0x2624 + 0x25ec + *(int *)((int)this + 0x198)))));
      bVar4 = bVar4 + 1;
      uVar3 = (uint)bVar4;
    } while (uVar3 < uVar5);
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x220) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x220) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x224));
  return uVar5;
}

/* ref: FUN_00a6ede0 */
GEN_FRAME byte GEN_THISCALL F_00a6ede0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6ede0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  byte bVar2;
  
  uVar1 = (ushort)param_1;
  if ((ushort)param_1 < 0x100) {
    bVar2 = '\x01' << ((byte)(ushort)param_1 & 7);
    bVar2 = ~bVar2 & *((byte *)GEN_TOP((((ushort)param_1 >> 3) + 4 + (int)this))) | bVar2;
    uVar1 = (ushort)bVar2;
    *((byte *)GEN_TOP((((ushort)param_1 >> 3) + 4 + (int)this))) = bVar2;
  }
  return (byte)uVar1;
}

/* ref: FUN_00a6ee60 */
GEN_FRAME unsigned int GEN_THISCALL F_00a6ee60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6ee60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  
  if (0.0 < *(float *)((int)this + 4)) {
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 4) - (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))))
    ;
    *(float *)((int)this + 4) = fVar1;
    if ((float10)fVar1 < (float10)0) {
      *(undefined4 *)((int)this + 4) = 0;
    }
  }
  if (*(char *)this != '\0') {
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) + (float10)*(float *)((int)this + 8))))
    ;
    *(float *)((int)this + 8) = fVar1;
    if ((float10)REFG(float, 0x1094880) <= (float10)fVar1) {
      *(undefined1 *)this = 0;
    }
  }
  return;
}

/* ref: FUN_00a6eed0 */
GEN_NOFRAME uint GEN_THISCALL F_00a6eed0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6eed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0x27;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
    uVar2 = F_00763050(uVar2 GEN_EDX_ARG,uVar3);
    F_00771690(uVar2 GEN_EDX_ARG);
  }
  *(undefined1 *)this = 0;
  return uVar2;
}

/* ref: FUN_00a6ef00 */
GEN_NOFRAME uint GEN_THISCALL F_00a6ef00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6ef00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)((int)this + 0x14) = 1;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0x28;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
    piVar1 = (int *)F_00763050(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if ((piVar1 != (int *)0x0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1 GEN_EDX_ARG), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00a6ef50 */
GEN_NOFRAME uint GEN_THISCALL F_00a6ef50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6ef50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)((int)this + 0x14) = 0;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0x28;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
    piVar1 = (int *)F_00763050(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if ((piVar1 != (int *)0x0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_ARG), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00a6efa0 */
GEN_NOFRAME uint GEN_THISCALL F_00a6efa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6efa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0x28;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
    piVar1 = (int *)F_00763050(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if ((piVar1 != (int *)0x0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG), (char)uVar2 == '\x01')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    }
  }
  if (*(char *)((int)this + 0x15) == '\x01') {
    uVar2 = F_00a51200(0x10,1,0,0,0);
    *(undefined1 *)((int)this + 0x15) = 0;
  }
  return uVar2;
}

/* ref: FUN_00a6f000 */
GEN_FRAME uint GEN_STDCALL F_00a6f000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa6f000u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
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
  
  piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  iVar2 = REFG(int, 0x1379694);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  if (param_1 == 0) {
    iVar1 = *(int *)(REFG(int, 0x1379694) + 0x74);
    iVar9 = 0;
    if (REFG(undefined1, 0x1338ad4) != 0) {
      bVar3 = 0;
      do {
        piVar7 = (int *)F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,iVar9);
        if ((piVar7 != (int *)0x0) && (*piVar7 != iVar1)) {
          uVar6 = param_3;
          bVar8 = bVar3;
          if (3 < iVar9) {
            uVar6 = param_4;
            bVar8 = bVar3 - 0x20;
          }
          if ((char)(uVar6 >> (bVar8 & 0x1f)) != '\0') {
            uVar10 = 0x67e;
            pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
            F_0046a630(pvVar5 GEN_EDX_ARG,uVar10);
            break;
          }
        }
        iVar9 = iVar9 + 1;
        bVar3 = bVar3 + 8;
      } while (iVar9 < (int)(uint)REFG(undefined1, 0x1338ad4));
    }
    bVar3 = F_00ac83b0(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,1,5,*(undefined4 *)(iVar2 + 0x74),0,param_2,0);
    if (bVar3 != 0) {
      return CONCAT31(extraout_var,bVar3);
    }
    uVar6 = F_00a51200(0x11,0,0,0,0);
    return uVar6;
  }
  if (param_1 == 3) {
    uVar10 = 0x67d;
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
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
  pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
  uVar6 = F_0046a630(pvVar5 GEN_EDX_ARG,uVar10);
  return uVar6;
}

/* ref: FUN_00a6f140 */
GEN_FRAME uint GEN_THISCALL F_00a6f140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa6f140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    if (piVar1 != (int *)0x0) {
      uVar3 = 0x28;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
      piVar1 = (int *)F_00763050(uVar2 GEN_EDX_ARG,uVar3);
      if (piVar1 != (int *)0x0) {
        *(undefined1 *)((int)this + 0x15) = 1;
        F_008f7820(piVar1 GEN_EDX_ARG,param_2,param_3,this);
        if (*(char *)((int)this + 0x14) == '\0') {
          uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG);
          return uVar2;
        }
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG);
        return uVar2;
      }
    }
    uVar2 = F_00a51200(0x10,1,0,0,0);
    *(undefined1 *)((int)this + 0x15) = 0;
  }
  else {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar3 = 0x687;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
      uVar2 = F_0046a630(this_00 GEN_EDX_ARG,uVar3);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: Client::Game::ConfigCallback::vf1 */
GEN_FRAME unsigned int GEN_THISCALL F_00a6f200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6f200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if (REFG(int, 0x1379c70) != 3) {
    if (param_1 == 0x30) {
      REFG(undefined1, 0x14b4f54) = *(undefined1 *)(param_2 + 0x14);
    }
    else {
      if (param_1 == 0x31) {
        REFG(undefined1, 0x14b4f55) = *(undefined1 *)(param_2 + 0x14);
        return;
      }
      if (param_1 == 0x32) {
        REFG(undefined4, 0x14b4f57) = *(undefined1 *)(param_2 + 0x14);
        return;
      }
    }
  }
  return;
}

/* ref: FUN_00a6f250 */
GEN_FRAME uint F_00a6f250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6f250u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  undefined * this;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  
  if ((param_1 != 0) && (param_2 != (undefined *)0x0)) {
    if (*(char *)(param_1 + 6) == '\0') {
      uVar2 = *(uint *)(param_1 + 8);
      if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
        uVar2 = uVar2 + 1000000;
      }
    }
    else {
      this = (undefined *)F_00a3a860((undefined *)param_1 GEN_EDX_ARG);
      uVar2 = F_0046e5e0(this GEN_EDX_ARG);
    }
    if (uVar2 != 0) {
      uVar2 = F_0046e5e0((undefined *)param_1 GEN_EDX_ARG);
      uVar2 = F_00ab24a0(uVar2);
      if (uVar2 == 0) {
        return 0;
      }
      uVar3 = F_00a6ae10(param_1);
      if ((int)uVar3 < (int)(uint)*(byte *)(uVar2 + 0xa5)) {
        return 10000;
      }
      bVar1 = F_0071d300(param_2 GEN_EDX_ARG,0);
      uVar4 = F_00ab2110((uint)bVar1);
      if (uVar4 == 0) {
        return 0;
      }
      iVar5 = uVar3 - *(byte *)(uVar2 + 0xa5);
      if (3 < iVar5) {
        iVar5 = 3;
      }
      if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
        fVar6 = *(float *)(uVar4 + iVar5 * 4);
      }
      else {
        fVar6 = *(float *)(uVar4 + 0x10 + iVar5 * 4);
      }
      return (int)((double)fVar6 * *(double *)&REFG(undefined, 0x1088118));
    }
  }
  return 0;
}

/* ref: FUN_00a6f370 */
GEN_FRAME byte GEN_THISCALL F_00a6f370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6f370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  ushort uVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined4 extraout_ECX = 0;
  uint3 uVar9;
  int iVar6;
  undefined4 extraout_ECX_00 = 0;
  undefined4 uVar7;
  int iVar8;
  undefined4 extraout_ECX_01 = 0;
  int iVar10;
  
  piVar3 = (int *)F_00ab2ba0(param_1);
  if (piVar3 == (int *)0x0) {
    return 6;
  }
  iVar10 = *piVar3;
  uVar9 = (uint3)((uint)extraout_ECX >> 8);
  if ((iVar10 < 0xf4241) || (1999999 < iVar10)) {
    iVar6 = (uint)uVar9 << 8;
  }
  else {
    iVar6 = CONCAT31(uVar9,1);
  }
  uVar4 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,iVar10 % 1000000,iVar6,0,1);
  if (uVar4 == 0) {
    iVar10 = 1000;
    uVar7 = extraout_ECX_00;
    while( true ) {
      iVar6 = *piVar3;
      uVar9 = (uint3)((uint)uVar7 >> 8);
      if ((iVar6 < 0xf4241) || (1999999 < iVar6)) {
        iVar8 = (uint)uVar9 << 8;
      }
      else {
        iVar8 = CONCAT31(uVar9,1);
      }
      uVar4 = F_00a3ded0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,iVar6 % 1000000,iVar10,iVar8);
      if (uVar4 != 0) break;
      iVar10 = iVar10 + 1;
      uVar7 = extraout_ECX_01;
      if (1000 < iVar10) {
        return 6;
      }
    }
    return 3;
  }
  iVar10 = *piVar3;
  uVar9 = (uint3)((uint)extraout_ECX_00 >> 8);
  if ((iVar10 < 0xf4241) || (1999999 < iVar10)) {
    iVar6 = (uint)uVar9 << 8;
  }
  else {
    iVar6 = CONCAT31(uVar9,1);
  }
  pvVar5 = (undefined *)F_00a40a20(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,iVar10 % 1000000,iVar6,0,0,1);
  if (pvVar5 == (undefined *)0x0) {
    return 6;
  }
  if (*(char *)((int)pvVar5 + 6) != '\0') {
    uVar4 = F_00a3a860(pvVar5 GEN_EDX_ARG);
    if (uVar4 != 0) {
      pvVar5 = (undefined *)F_00a3a860(pvVar5 GEN_EDX_ARG);
      uVar2 = F_00906d60(pvVar5 GEN_EDX_ARG);
      goto LAB_00a6f481;
    }
  }
  uVar2 = *(ushort *)((int)pvVar5 + 0x12);
LAB_00a6f481: ;
  if (uVar2 < 30000) {
    return 1;
  }
  bVar1 = F_00a6af60(this GEN_EDX_ARG,param_1);
  return (-(bVar1 != 1) & 0xfeU) + 2;
}

/* ref: FUN_00a6f4b0 */
GEN_FRAME uint GEN_THISCALL F_00a6f4b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6f4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte * pbVar1;
  uint uVar2;
  
  if (param_1 < 0x100) {
    uVar2 = param_1 & 0x80000007;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
    }
    pbVar1 = ((byte *)GEN_TOP((((int)(param_1 + ((int)param_1 >> 0x1f & 7U)) >> 3) + 4 + (int)this)));
    *pbVar1 = *pbVar1 | '\x01' << ((byte)uVar2 & 0x1f);
  }
  uVar2 = F_00a51200(0x5b,param_1,0,0,0);
  return uVar2;
}

/* ref: FUN_00a6f500 */
GEN_FRAME uint GEN_THISCALL F_00a6f500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6f500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  uint3 uVar6;
  bool bVar7;
  
  piVar1 = (int *)F_00ab2ba0((*(uint *)&gen_a1));
  piVar4 = piVar1;
  if ((piVar1 != (int *)0x0) && ((*(uint *)&gen_a1) < 0x100)) {
    uVar5 = (*(uint *)&gen_a1) & 0x80000007;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
    }
    iVar2 = 1 << ((byte)uVar5 & 0x1f);
    iVar3 = (*(uint *)&gen_a1) + ((int)(*(uint *)&gen_a1) >> 0x1f & 7U);
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
GEN_FRAME uint GEN_THISCALL F_00a6f5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6f5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte * pbVar1;
  uint uVar2;
  
  if (param_1 < 0x100) {
    uVar2 = param_1 & 0x80000007;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
    }
    pbVar1 = ((byte *)GEN_TOP((((int)(param_1 + ((int)param_1 >> 0x1f & 7U)) >> 3) + 4 + (int)this)));
    *pbVar1 = *pbVar1 & ~('\x01' << ((byte)uVar2 & 0x1f));
  }
  uVar2 = F_00a51200(0x5c,param_1,0,0,0);
  return uVar2;
}

/* ref: FUN_00a6f620 */
GEN_NOFRAME uint GEN_THISCALL F_00a6f620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6f620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  F_00c48350((undefined *)((int)this + 4),0,0x100);
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined2 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  return (uint)this;
}

/* ref: FUN_00a6f690 */
GEN_FRAME unsigned int GEN_THISCALL F_00a6f690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6f690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
    *pbVar1 = *pbVar1 | '\x01' << ((byte)uVar3 & 0x1f);
    *(undefined2 *)((int)this + 0x10c) = *(undefined2 *)((int)this + 0x10a);
    *(undefined2 *)((int)this + 0x10a) = *(undefined2 *)((int)this + 0x108);
    *(undefined2 *)((int)this + 0x108) = *(undefined2 *)((int)this + 0x106);
    *(undefined2 *)((int)this + 0x106) = *(undefined2 *)((int)this + 0x104);
    *(short *)((int)this + 0x104) = (short)param_1;
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    if (piVar2 != (int *)0x0) {
      uVar4 = 0x55;
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2 GEN_EDX_ARG);
      this_00 = (undefined *)F_00763050(uVar3 GEN_EDX_ARG,uVar4);
      F_007d1100(this_00 GEN_EDX_ARG,param_1);
    }
  }
  return;
}

/* ref: FUN_00a6f790 */
GEN_FRAME uint GEN_THISCALL F_00a6f790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa6f790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined4 * puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  uVar6 = *(undefined4 *)(*param_1 + 4);
  uVar4 = F_00b8b6f0(param_3);
  bVar3 = F_00b8dfd0(uVar4);
  F_00b8b710(uVar6,(uint)(bVar3 != 0),(int)this + 4);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x44);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar6 = 0x29;
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x48))(piVar5 GEN_EDX_ARG);
  this_00 = (undefined *)F_00763050(uVar4 GEN_EDX_ARG,uVar6);
  F_00921730(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  bVar3 = *(byte *)((int)this + 0x2a);
  iVar2 = *(int *)((int)this + 0x24);
  uVar6 = *(undefined4 *)((int)this + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this + 0x18);
  (*(undefined2 *)(gen_frame + 0xc)) = *(undefined2 *)((int)this + 0x28);
  (*(uint *)(gen_frame + 0x8)) = -(uint)((uint)bVar3 + iVar2 != 0) & 1000000;
  (*(undefined4 *)(gen_frame + 0x4)) = uVar6;
  (*(undefined4 *)(gen_frame + 0x5c)) = *(undefined4 *)((int)this + 0x30);
  (*(undefined4 *)(gen_frame + 0x58)) = *(undefined4 *)((int)this + 0x2c);
  (*(uint *)(gen_frame + 0x60)) = -(uint)((uint)*(byte *)((int)this + 0x3e) + *(int *)((int)this + 0x38) != 0) & 1000000;
  (*(undefined2 *)(gen_frame + 0x64)) = *(undefined2 *)((int)this + 0x3c);
  uVar4 = F_00824550(this_00 GEN_EDX_ARG,param_3,&(*(undefined4 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00a6f8a0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a6f8a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6f8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  byte bVar2;
  
  if ((!GEN_ISNAN(*(float *)((int)this + 4)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(*(float *)((int)this + 4) <= *(float *)&REFG(undefined, 0x1088114))) {
    bVar2 = F_00ac36a0();
    if (bVar2 == 1) {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 4) -
                     (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
      *(float *)((int)this + 4) = fVar1;
      if ((float10)fVar1 < (float10)0) {
        *(undefined4 *)((int)this + 4) = 0;
      }
    }
  }
  return;
}

/* ref: FUN_00a6f8f0 */
GEN_NOFRAME uint F_00a6f8f0(void)
{
  GEN_ENTER(0xa6f8f0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (REFG(int, 0x1379694) != 0) {
    uVar1 = F_00ae08d0(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,*(undefined4 *)(REFG(int, 0x1379694) + 0x74));
    if (uVar1 != 0) {
      return *(uint *)(uVar1 + 0x58);
    }
  }
  return 0;
}

/* ref: FUN_00a6f920 */
GEN_NOFRAME uint F_00a6f920(void)
{
  GEN_ENTER(0xa6f920u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (REFG(int, 0x1379694) != 0) {
    uVar1 = F_00ae08d0(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,*(undefined4 *)(REFG(int, 0x1379694) + 0x74));
    if (uVar1 != 0) {
      return *(uint *)(uVar1 + 0x5c);
    }
  }
  return 0;
}

/* ref: FUN_00a6f950 */
GEN_FRAME uint GEN_THISCALL F_00a6f950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6f950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  undefined4 * puVar4;
  
  piVar1 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_FWD,0x127);
  if (*(int *)((int)this + 0x6c) != 0) {
    uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0x127);
    if (uVar2 != 0) {
      piVar3 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0x127);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x6c));
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 0x6c);
    if (puVar4 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar4)(puVar4 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x6c) = 0;
    }
  }
  puVar4 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(puVar4 GEN_EDX_ARG,1,0);
    puVar4[5] = 1;
    *puVar4 = (*(undefined * PTR32 (*)[2])REFP(0x10e7910));
    puVar4[6] = this;
    puVar4[7] = ((code *)REFP(0xa6b540));
  }
  *(undefined4 * PTR32 *)((int)this + 0x6c) = puVar4;
  F_00cb4540(puVar4 GEN_EDX_ARG,0,param_1 & 0xffff);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x6c));
  return uVar2;
}

/* ref: FUN_00a6fa80 */
GEN_FRAME unsigned int GEN_THISCALL F_00a6fa80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6fa80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined4 * this_00;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)this == 0) {
    *(undefined4 *)this = param_1;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined1 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined1 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined1 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
    *(undefined1 *)((int)this + 0x3c) = 0;
    *(undefined4 *)((int)this + 0x38) = 0;
    *(undefined4 *)((int)this + 0x40) = 0;
    *(undefined1 *)((int)this + 0x48) = 0;
    *(undefined4 *)((int)this + 0x44) = 0;
    piVar1 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_FWD,0x127);
    this_00 = (undefined4 *)F_00406b90(0x20,0,0);
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(this_00 GEN_EDX_ARG,6,0);
      this_00[5] = 6;
      *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e791c));
      this_00[6] = this;
      this_00[7] = ((code *)REFP(0xa6b5a0));
    }
    *(undefined4 * PTR32 *)((int)this + 0x4c) = this_00;
    do {
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x4c) GEN_EDX_ARG,uVar2,(uint)(ushort)(&REFG(undefined2, 0x14ab2e2))[(int)(uVar2)]);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 6);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x4c));
  }
  return;
}

/* ref: FUN_00a6fb50 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a6fb50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6fb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  
  *(undefined4 *)this = 0;
  if (*(int *)((int)this + 0x4c) != 0) {
    uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_FWD,0x127);
    if (uVar2 != 0) {
      piVar3 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0x127);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x4c));
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x4c);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x4c) = 0;
    }
  }
  return;
}

/* ref: FUN_00a6fbc0 */
GEN_FRAME uint GEN_THISCALL F_00a6fbc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6fbc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar4 = 0;
  piVar1 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) == (int *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  }
  else if ((char)REFG(int * PTR32, 0x1379694)[0x62] == '\b') {
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x1;
  }
  else if ((char)REFG(int * PTR32, 0x1379694)[0xb82] == '\x11') {
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x2;
  }
  else {
    piVar1 = ((int *)GEN_TOP((-(uint)(REFG(char, 0x14ab5ba) != '\0') & 3)));
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar1;
  }
  if ((((*(int * PTR32 *)(gen_frame + 0x8)) == *(int * PTR32 *)this) && (((char)param_1 != '\x01' || (param_2 != (*(int * PTR32 *)(gen_frame + 0x8)))))) ||
     (piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD), piVar1 == (int *)0x0)) goto LAB_00a6fe8c;
  switch((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8)))) {
  case (int *)0x0: ;
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG)));
    piVar1[0x6f52] = 0;
    goto LAB_00a6fe7c;
  case (int *)0x1: ;
    uVar4 = 0;
    do {
      uVar9 = 0;
      uVar7 = 0;
      uVar5 = uVar4;
      pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG)));
      F_00459110(pvVar2 GEN_EDX_ARG,uVar5,uVar7,uVar9);
      uVar9 = 0;
      uVar7 = 0;
      uVar5 = uVar4;
      pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG)));
      F_00459180(pvVar2 GEN_EDX_ARG,uVar5,uVar7,uVar9);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x10);
    if ((REFG(char, 0x14bcfd0) == '\x01') && (uVar4 = F_00ab4310((uint)REFG(undefined1, 0x14bcfd1)), uVar4 != 0)) {
      uVar5 = (uint)*(ushort *)(uVar4 + 4);
      uVar9 = 1;
      uVar7 = 0;
      pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG)));
      F_00459110(pvVar2 GEN_EDX_ARG,uVar7,uVar9,uVar5);
      uVar4 = (uint)*(ushort *)(uVar4 + 4);
      uVar9 = 1;
      uVar7 = 0xe;
      pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG)));
      F_00459180(pvVar2 GEN_EDX_ARG,uVar7,uVar9,uVar4);
    }
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG)));
    *(byte *)(piVar1 + 0xb093) = *(byte *)(piVar1 + 0xb093) | 0x80;
    piVar1[0x6f52] = 1;
    break;
  case (int *)0x2: ;
    uVar4 = 0;
    do {
      uVar9 = 0;
      uVar7 = 0;
      uVar5 = uVar4;
      pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG)));
      F_00459110(pvVar2 GEN_EDX_ARG,uVar5,uVar7,uVar9);
      uVar9 = 0;
      uVar7 = 0;
      uVar5 = uVar4;
      pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG)));
      F_00459180(pvVar2 GEN_EDX_ARG,uVar5,uVar7,uVar9);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x10);
    uVar8 = 0x468;
    uVar9 = 1;
    uVar7 = 0;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG)));
    F_00459110(pvVar2 GEN_EDX_ARG,uVar7,uVar9,uVar8);
    uVar8 = 0x468;
    uVar9 = 1;
    uVar7 = 0xe;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG)));
    F_00459180(pvVar2 GEN_EDX_ARG,uVar7,uVar9,uVar8);
    uVar8 = 0x469;
    uVar9 = 1;
    uVar7 = 1;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG)));
    F_00459110(pvVar2 GEN_EDX_ARG,uVar7,uVar9,uVar8);
    uVar8 = 0x469;
    uVar9 = 1;
    uVar7 = 0xf;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG)));
    F_00459180(pvVar2 GEN_EDX_ARG,uVar7,uVar9,uVar8);
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG)));
    *(byte *)(piVar1 + 0xb093) = *(byte *)(piVar1 + 0xb093) | 0x80;
    piVar1[0x6f52] = 1;
    break;
  case (int *)0x3: ;
    uVar5 = 0;
    do {
      uVar9 = 0;
      uVar7 = 0;
      uVar6 = uVar5;
      pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG)));
      F_00459110(pvVar2 GEN_EDX_ARG,uVar6,uVar7,uVar9);
      uVar9 = 0;
      uVar7 = 0;
      uVar6 = uVar5;
      pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG)));
      F_00459180(pvVar2 GEN_EDX_ARG,uVar6,uVar7,uVar9);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x10);
    ((byte *)(gen_frame + 0xc))[0] = 0xe;
    ((byte *)(gen_frame + 0xc))[1] = 0xf;
    ((byte *)(gen_frame + 0xc))[2] = 0xc;
    ((byte *)(gen_frame + 0xc))[3] = 0xd;
    ((byte *)(gen_frame + 0xc))[4] = 10;
    ((byte *)(gen_frame + 0xc))[5] = 0xb;
    ((byte *)(gen_frame + 0xc))[6] = 8;
    ((byte *)(gen_frame + 0xc))[7] = 9;
    ((byte *)(gen_frame + 0xc))[8] = 6;
    ((byte *)(gen_frame + 0xc))[9] = 7;
    ((byte *)(gen_frame + 0xc))[10] = 4;
    ((byte *)(gen_frame + 0xc))[0xb] = 5;
    uVar6 = 1;
    uVar5 = F_00ab0130();
    if (1 < uVar5) {
      do {
        uVar5 = F_00ab2d50(uVar6);
        if ((uVar5 != 0) &&
           (((*(char *)(uVar5 + 0xe) == '\0' || (*(char *)(uVar5 + 0xe) == REFG(char, 0x14ab5ba))) &&
            (uVar4 < 0xc)))) {
          uVar7 = 0x10;
          uVar5 = uVar4;
          uVar3 = uVar6;
          pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG)));
          F_00459110(pvVar2 GEN_EDX_ARG,uVar5,uVar7,uVar3);
          uVar3 = (uint)((byte *)(gen_frame + 0xc))[(int)(uVar4)];
          uVar7 = 0x10;
          uVar5 = uVar6;
          pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG)));
          F_00459180(pvVar2 GEN_EDX_ARG,uVar3,uVar7,uVar5);
          uVar4 = uVar4 + 1;
        }
        uVar6 = uVar6 + 1;
        uVar5 = F_00ab0130();
      } while (uVar6 < uVar5);
    }
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG)));
    piVar1[0x6f52] = 2;
LAB_00a6fe7c: ;
    *(byte *)(piVar1 + 0xb093) = *(byte *)(piVar1 + 0xb093) & 0x7f;
  }
  *(int * PTR32 *)this = (*(int * PTR32 *)(gen_frame + 0x8));
LAB_00a6fe8c: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return (uint)piVar1;
}

/* ref: FUN_00a6feb0 */
GEN_NOFRAME byte GEN_THISCALL F_00a6feb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa6feb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte in_AL = 0;
  byte bVar2;
  undefined * this_00;
  int * piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (*(int *)this != 0) {
    this_00 = (undefined *)F_006b8c00();
    in_AL = F_00a505f0();
    if (((in_AL != 0) && ((REFG(undefined4, 0x14b2720) & 1) != 0)) && (REFG(int, 0x14b274c) == 0)) {
      bVar2 = F_006da290(this_00 GEN_EDX_ARG);
      in_AL = 0;
      if (bVar2 != 0) {
        bVar2 = F_006da2a0(this_00 GEN_EDX_ARG);
        in_AL = 0;
        if (bVar2 != 0) {
          piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
          uVar5 = 0x5b;
          uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3 GEN_EDX_ARG);
          piVar3 = (int *)F_00763050(uVar4 GEN_EDX_ARG,uVar5);
          uVar4 = 0;
          if ((piVar3 != (int *)0x0) &&
             (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3 GEN_EDX_ARG), (char)uVar4 != '\0')) {
            uVar4 = F_00ab1cc0((uint)REFG(undefined1, 0x1379c7c));
            if ((uVar4 == 0) || (*(char *)(uVar4 + 10) == '\0')) {
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
GEN_FRAME byte GEN_THISCALL F_00a6ffb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa6ffb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = F_00a6ba60((uint)((byte)(*((char *)GEN_TOP((*(int *)((int)this + 0x28) + 5))) - 2U) < 2));
  return (ushort)(byte)param_1 <= (ushort)((short)((uVar1 + 4) / 5) * 5);
}

/* ref: FUN_00a6fff0 */
GEN_FRAME uint GEN_THISCALL F_00a6fff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa6fff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
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
  *(undefined1 *)((int)this + 0x49) = 1;
  if (param_2 != 0) {
    do {
      puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + uVar10 * 4) + 4)));
      iVar3 = (*(int *)((int)this + 0x44) + uVar10) * 0xc4;
      *((undefined4 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0xbc + iVar3))) = *puVar5;
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
      *((byte *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0xc0 + iVar3))) = bVar7;
      uVar10 = uVar10 + 1;
      *((char *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0xc1 + iVar3))) = cVar9;
    } while (uVar10 < param_2);
  }
  puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar5 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_FWD,1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(int *)((int)this + 0x44) = *(int *)((int)this + 0x44) + param_2;
  if (*(uint *)((int)this + 0x44) <
      (uint)(*(int *)((int)this + 0x38) - *(int *)((int)this + 0x34) >> 2)) {
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x14))))(*(int * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
    uVar10 = *(uint *)((int)this + 0x44);
    uVar8 = *(int *)((int)this + 0x38) - *(int *)((int)this + 0x34) >> 2;
    uVar4 = uVar8 - uVar10;
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    if (uVar8 <= uVar10) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    uVar10 = F_00a6bb10(this GEN_EDX_ARG,1,uVar4,*(int *)((int)this + 0x34) + uVar10 * 4,0);
  }
  else {
    uVar4 = F_00406bb0((uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x28) + 4))) * 4,0,0);
    uVar10 = 0;
    if (*((char *)GEN_TOP((*(int *)((int)this + 0x28) + 4))) != '\0') {
      iVar3 = 0;
      do {
        *(undefined4 *)(uVar4 + uVar10 * 4) =
             *((undefined4 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0xbc + iVar3)));
        uVar10 = uVar10 + 1;
        iVar3 = iVar3 + 0xc4;
      } while (uVar10 < *((byte *)GEN_TOP((*(int *)((int)this + 0x28) + 4))));
    }
    uVar10 = (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x28) + 4)));
    *(undefined1 *)((int)this + 0x4a) = 0;
    if (*(int *)((int)this + 8) != 0) {
      piVar1 = *(int * PTR32 *)((int)this + 0x14);
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,*(int *)((int)this + 8));
      }
      puVar5 = *(undefined4 * PTR32 *)((int)this + 8);
      if (puVar5 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,1);
        *(undefined4 *)((int)this + 8) = 0;
      }
    }
    *(undefined1 *)((int)this + 0x4a) = 0;
    puVar5 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      uVar2 = *(undefined4 *)((int)this + 0x20);
      F_00cb4700(puVar5 GEN_EDX_ARG,uVar10,0);
      puVar5[5] = uVar10;
      *puVar5 = (*(undefined * PTR32 (*)[2])REFP(0x10e78a4));
      puVar5[6] = this;
      puVar5[7] = uVar2;
    }
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    iVar3 = 0;
    if (uVar10 != 0) {
      do {
        F_00cb4540(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,iVar3,*(undefined4 *)(uVar4 + iVar3 * 4));
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar10);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0x48))))
              (*(int * PTR32 *)((int)this + 0x14) GEN_EDX_ARG,*(undefined4 *)((int)this + 8));
    uVar10 = 0;
    if (uVar4 != 0) {
      uVar11 = F_00406b30(uVar4);
      return (uint)uVar11;
    }
  }
  return uVar10;
}

/* ref: Client::Game::UI::Hotbar::vf1 */
GEN_FRAME byte GEN_THISCALL F_00a70200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa70200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
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
      if (((uVar3 == 0) || (cVar1 = *(char *)(uVar3 + 0x43), cVar1 < '\0')) || ('\x12' < cVar1))
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
GEN_FRAME uint GEN_THISCALL F_00a703d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa703d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  byte bVar4;
  code * pcVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar7 = *(int *)(*param_1 + 4);
  *(int *)((int)this + 0x43c) = iVar7;
  bVar6 = 0;
  iVar8 = 8;
  (*(int *)(gen_frame + 0xc)) = 4;
  do {
    if (*(int *)(iVar8 + iVar7) != 0) {
      uVar2 = 0;
      if (bVar6 != 0) {
        do {
          if ((((int *)(gen_frame + 0x18))[(int)(uVar2)] == *(int *)(iVar8 + iVar7)) ||
             (((int *)(gen_frame + 0x18))[(int)(uVar2)] - 1000000 == *(int *)(iVar8 + iVar7))) goto LAB_00a70450;
          bVar4 = (char)uVar2 + 1;
          uVar2 = (uint)bVar4;
        } while (bVar4 < bVar6);
      }
      ((int *)(gen_frame + 0x18))[(int)(bVar6)] = *(int *)(iVar8 + iVar7);
      bVar6 = bVar6 + 1;
    }
LAB_00a70450: ;
    iVar8 = iVar8 + 4;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) - 1;
  } while ((*(int *)(gen_frame + 0xc)) != 0);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x39dc);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
    *(undefined4 *)((int)this + 0x39dc) = 0;
  }
  if (bVar6 == 0) {
    F_00a6bf80(this GEN_EDX_ARG);
    *(undefined1 *)((int)this + 0x3a65) = 0;
    if (*(char *)((int)this + 0x3aae) == '\0') {
      piVar3 = *(int * PTR32 *)((int)this + 0x3a9c);
    }
    else {
      piVar3 = *(int * PTR32 *)((int)this + 0x3aa0);
    }
    if (piVar3 == (int *)0x0) goto LAB_00a7056d;
    pcVar5 = *(gen_code32 *)(*piVar3 + 4);
    uVar9 = 0x12;
  }
  else {
    puVar1 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar1 GEN_EDX_ARG,(uint)bVar6,0);
      puVar1[5] = (uint)bVar6;
      *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10e78b0));
      puVar1[6] = this;
      puVar1[7] = ((code *)REFP(0xa6c000));
    }
    *(undefined4 * PTR32 *)((int)this + 0x39c4) = puVar1;
    if (*(int *)((int)this + 0x39c0) == 0) {
      uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,9);
      *(uint *)((int)this + 0x39c0) = uVar2;
    }
    if (bVar6 != 0) {
      iVar7 = 0;
      piVar3 = ((int *)(gen_frame + 0x18));
      uVar2 = (uint)bVar6;
      do {
        F_00cb4540(*(undefined * PTR32 *)((int)this + 0x39c4) GEN_EDX_ARG,iVar7,*piVar3);
        iVar7 = iVar7 + 1;
        piVar3 = piVar3 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x39c0);
    uVar9 = *(undefined4 *)((int)this + 0x39c4);
    *(undefined1 *)((int)this + 0x3a74) = 1;
    pcVar5 = *(gen_code32 *)(*piVar3 + 0x48);
  }
  this = ((undefined *)GEN_TOP((*pcVar5)(piVar3,uVar9)));
LAB_00a7056d: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00a70580 */
GEN_NOFRAME uint GEN_THISCALL F_00a70580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa70580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x3a69) = 0;
  *(undefined1 *)((int)this + 0x3a67) = 0;
  uVar1 = F_00a4ffd0();
  if (*(short *)((int)this + 0x39f8) != 0) {
    *(short *)(uVar1 + 0x188a) = *(short *)((int)this + 0x39f8);
    *(undefined1 *)(uVar1 + 0x1888) = *(undefined1 *)((int)this + 0x39fc);
    uVar1 = F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if (uVar1 != 0) {
      F_00a51200(0x44,*(undefined4 *)((int)this + 0x39fc),(uint)*(ushort *)((int)this + 0x39f8),0,0)
      ;
    }
  }
  uVar1 = F_00a66f30(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a705f0 */
GEN_FRAME uint GEN_THISCALL F_00a705f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa705f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00a4ffd0();
  if ((char)param_4 != '\0') {
    F_00a51200(0x43,param_1,param_2,param_3 & 0xff,0);
  }
  if (param_1 == 1) {
    uVar2 = F_00a6c8f0(this GEN_EDX_ARG,(uint)*(ushort *)(uVar1 + 0x13b8 + param_2 * 0x10),param_3);
  }
  else {
    uVar2 = param_1 - 2;
    if (uVar2 == 0) {
      uVar1 = F_00a6c950(this GEN_EDX_ARG,(uint)*(ushort *)(uVar1 + 0x1688 + param_2 * 0x10),param_3);
      return uVar1;
    }
  }
  return uVar2;
}

/* ref: FUN_00a70670 */
GEN_FRAME uint GEN_THISCALL F_00a70670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa70670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  ushort * puVar2;
  uint uVar3;
  
  uVar1 = F_00a4ffd0();
  if (param_1 != 1) {
    if (param_1 == 2) {
      uVar3 = 0;
      puVar2 = (ushort *)(uVar1 + 0x1688);
      while (*puVar2 != param_2) {
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 8;
        if (0xf < uVar3) {
          *(undefined1 *)((int)this + 0x3a67) = 1;
          return (uint)puVar2;
        }
      }
      uVar1 = F_00a4ffd0();
      F_00a51200(0x43,2,uVar3,param_3 & 0xff,0);
      uVar1 = F_00a6c950(this GEN_EDX_ARG,(uint)*(ushort *)(uVar1 + 0x1688 + uVar3 * 0x10),param_3);
    }
    *(undefined1 *)((int)this + 0x3a67) = 1;
    return uVar1;
  }
  uVar3 = 0;
  puVar2 = (ushort *)(uVar1 + 0x13b8);
  do {
    if (*puVar2 == param_2) {
      uVar1 = F_00a4ffd0();
      F_00a51200(0x43,1,uVar3,param_3 & 0xff,0);
      uVar1 = F_00a6c8f0(this GEN_EDX_ARG,(uint)*(ushort *)(uVar1 + 0x13b8 + uVar3 * 0x10),param_3);
      *(undefined1 *)((int)this + 0x3a67) = 1;
      return uVar1;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 8;
  } while (uVar3 < 0x1e);
  *(undefined1 *)((int)this + 0x3a67) = 1;
  return (uint)puVar2;
}

/* ref: FUN_00a70760 */
GEN_FRAME uint GEN_THISCALL F_00a70760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa70760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 * puVar3;
  
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
  (*(uint *)(gen_frame + 0x34)) = 0;
  (*(uint *)(gen_frame + 0x38)) = 0;
  puVar3 = &(*(undefined4 *)(gen_frame + 0xc));
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  F_009755f0(this_00 GEN_EDX_ARG,puVar3);
  uVar1 = *(uint *)((int)this + param_1 * 8 + 0xe4);
  uVar2 = param_1;
  if ((uVar1 <= (*(uint *)(gen_frame + 0x38))) &&
     ((uVar1 < (*(uint *)(gen_frame + 0x38)) || (*(uint *)((int)this + param_1 * 8 + 0xe0) <= (*(uint *)(gen_frame + 0x34)))))) {
    *(uint *)((int)this + param_1 * 8 + 0xe4) = (*(uint *)(gen_frame + 0x38));
    *(uint *)((int)this + param_1 * 8 + 0xe0) = (*(uint *)(gen_frame + 0x34));
    uVar2 = F_00a68030(this GEN_EDX_ARG,param_1,param_2,param_3);
  }
  return uVar2;
}

/* ref: FUN_00a707f0 */
GEN_FRAME uint GEN_THISCALL F_00a707f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa707f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined * this_00;
  undefined4 * puVar2;
  
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
  (*(uint *)(gen_frame + 0x34)) = 0;
  (*(uint *)(gen_frame + 0x38)) = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0xc));
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  F_009755f0(this_00 GEN_EDX_ARG,puVar2);
  uVar1 = *(uint *)((int)this + param_1 * 8 + 0x154);
  if ((uVar1 <= (*(uint *)(gen_frame + 0x38))) &&
     ((uVar1 < (*(uint *)(gen_frame + 0x38)) || (*(uint *)((int)this + param_1 * 8 + 0x150) <= (*(uint *)(gen_frame + 0x34)))))) {
    *(uint *)((int)this + param_1 * 8 + 0x154) = (*(uint *)(gen_frame + 0x38));
    *(uint *)((int)this + param_1 * 8 + 0x150) = (*(uint *)(gen_frame + 0x34));
    *(undefined4 *)((int)this + param_1 * 4 + 0x78) = param_2;
  }
  return param_1;
}

/* ref: FUN_00a70870 */
GEN_NOFRAME byte GEN_THISCALL F_00a70870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa70870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  undefined * pvVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  iVar6 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    if (*(char *)((int)this + 0x9ec) == '\0') {
      bVar1 = F_00ab1cf0(*(undefined4 *)&REFG(undefined2, 0x1379c78));
      if (bVar1 == 0) {
        if (piVar2 != (int *)0x0) {
          uVar7 = 0;
          uVar5 = 0x47d;
          pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
          F_0046ac40(pvVar3 GEN_EDX_ARG,uVar5,iVar6,uVar7);
          return 0;
        }
      }
      else {
        piVar2 = *(int * PTR32 *)((int)this + 0x40);
        if (((piVar2 != (int *)0x0) && (*piVar2 != 0)) &&
           (iVar4 = (uint)*(ushort *)(piVar2 + 2) * 0x444 + *piVar2,
           (*(byte *)(iVar4 + 0x3f1) & 2) != 0)) {
          bVar1 = F_00a6d330(iVar6,(uint)*(byte *)(iVar4 + 0x3ed));
          if (bVar1 != 0) {
            bVar1 = F_00a6d420(iVar6,(uint)*(byte *)(iVar4 + 0x3ee));
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
    else if (piVar2 != (int *)0x0) {
      uVar7 = 0;
      uVar5 = 0x47c;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
      F_0046ac40(pvVar3 GEN_EDX_ARG,uVar5,iVar6,uVar7);
    }
  }
  return 0;
}

/* ref: FUN_00a70960 */
GEN_NOFRAME uint GEN_THISCALL F_00a70960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa70960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a6d120(this GEN_EDX_FWD,1);
  return uVar1;
}

/* ref: FUN_00a70970 */
GEN_FRAME uint GEN_THISCALL F_00a70970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa70970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 * puVar1;
  int * piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  *(undefined1 *)((int)this + 0x9ed) = 1;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x4)),0,0x44);
  uVar4 = 0;
  if (param_2 != 0) {
    puVar5 = (undefined4 *)((int)this + 0x380);
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + uVar4 * 4) + 4)));
      *puVar5 = *puVar1;
      *(undefined4 *)(((undefined1 *)(gen_frame + 0x4)) + uVar4 * 4 - 4) = *puVar1;
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0x18;
    } while (uVar4 < param_2);
  }
  puVar5 = *(undefined4 * PTR32 *)this;
  if (puVar5 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,1);
    *(undefined4 *)this = 0;
  }
  *(undefined1 *)((int)this + 0x9ee) = 0;
  if (*(int *)((int)this + 4) != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0x18);
    if (piVar2 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2 GEN_EDX_ARG,*(int *)((int)this + 4));
    }
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar5 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 4) = 0;
    }
  }
  *(undefined1 *)((int)this + 0x9ee) = 0;
  puVar5 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    uVar3 = *(undefined4 *)((int)this + 0x2c);
    F_00cb4700(puVar5 GEN_EDX_ARG,param_2,0);
    puVar5[5] = param_2;
    *puVar5 = (*(undefined * PTR32 (*)[2])REFP(0x10e78bc));
    puVar5[6] = this;
    puVar5[7] = uVar3;
  }
  *(undefined4 * PTR32 *)((int)this + 4) = puVar5;
  iVar6 = 0;
  if (0 < (int)param_2) {
    do {
      F_00cb4540(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,iVar6,*(undefined4 *)(((undefined1 *)(gen_frame + 0x4)) + iVar6 * 4 - 4));
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)param_2);
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,*(undefined4 *)((int)this + 4));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00a70ab0 */
GEN_FRAME uint GEN_THISCALL F_00a70ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa70ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
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
  
  *(undefined1 *)((int)this + 0x9f0) = 1;
  local_8 = 0;
  if (param_2 != 0) {
    do {
      puVar1 = *((undefined1 * PTR32 *)GEN_TOP((*(int *)(param_1 + local_8 * 4) + 4)));
      puVar4 = (ushort *)F_00ab2ed0((uint)(byte)puVar1[0x3e]);
      iVar7 = (*(int *)((int)this + 0xd0) + local_8) * 0x444 + **(int * PTR32 *)((int)this + 0x40);
      *(undefined4 *)(iVar7 + 0x3dc) = *(undefined4 *)(puVar1 + 4);
      *(undefined1 *)(iVar7 + 0x3ec) = puVar1[0x3f];
      *(undefined1 *)(iVar7 + 0x3ed) = *puVar1;
      *(undefined1 *)(iVar7 + 0x3ef) = puVar1[0x4a];
      *(byte *)(iVar7 + 0x3f1) =
           *(byte *)(iVar7 + 0x3f1) ^ (puVar1[0x4b] ^ *(byte *)(iVar7 + 0x3f1)) & 1;
      iVar10 = (uint)*(ushort *)(puVar1 + 0x32) * (uint)*puVar4;
      *(short *)(iVar7 + 0x3e2) =
           ((short)(iVar10 / 100) + (short)(iVar10 >> 0x1f)) -
           (short)((longlong)iVar10 * 0x51eb851f >> 0x3f);
      iVar10 = (uint)*(ushort *)(puVar1 + 0x34) * (uint)puVar4[1];
      *(short *)(iVar7 + 0x3e4) =
           ((short)(iVar10 / 100) + (short)(iVar10 >> 0x1f)) -
           (short)((longlong)iVar10 * 0x51eb851f >> 0x3f);
      iVar10 = (uint)*(ushort *)(puVar1 + 0x36) * (uint)puVar4[2];
      *(short *)(iVar7 + 0x3e6) =
           ((short)(iVar10 / 100) + (short)(iVar10 >> 0x1f)) -
           (short)((longlong)iVar10 * 0x51eb851f >> 0x3f);
      *(undefined2 *)(iVar7 + 1000) = *(undefined2 *)(puVar1 + 0x3a);
      *(undefined2 *)(iVar7 + 0x3ea) = *(undefined2 *)(puVar1 + 0x3c);
      *(byte *)(iVar7 + 0x3f1) =
           *(byte *)(iVar7 + 0x3f1) ^ (puVar1[0x4d] * '\x04' ^ *(byte *)(iVar7 + 0x3f1)) & 4;
      *(byte *)(iVar7 + 0x3f1) =
           (puVar1[0x4c] * '\b' ^ *(byte *)(iVar7 + 0x3f1)) & 8 ^ *(byte *)(iVar7 + 0x3f1);
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
      *(byte *)(iVar7 + 0x3ee) = bVar3;
      *(char *)(iVar7 + 0x3f0) = cVar9;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd4) + *(int *)((int)this + 0xd8) * 4))) =
           *(undefined4 *)(puVar1 + 4);
      *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) + 1;
      *(undefined4 *)(iVar7 + 100) = *(undefined4 *)(puVar1 + 8);
      *(undefined1 *)(iVar7 + 0x6c) = puVar1[0x40];
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd4) + *(int *)((int)this + 0xd8) * 4))) =
           *(undefined4 *)(puVar1 + 8);
      *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) + 1;
      *(undefined4 *)(iVar7 + 0xd4) = *(undefined4 *)(puVar1 + 0xc);
      *(undefined1 *)(iVar7 + 0xdc) = puVar1[0x41];
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd4) + *(int *)((int)this + 0xd8) * 4))) =
           *(undefined4 *)(puVar1 + 0xc);
      *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) + 1;
      *(undefined4 *)(iVar7 + 0x144) = *(undefined4 *)(puVar1 + 0x10);
      *(undefined1 *)(iVar7 + 0x14c) = puVar1[0x42];
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd4) + *(int *)((int)this + 0xd8) * 4))) =
           *(undefined4 *)(puVar1 + 0x10);
      *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) + 1;
      *(undefined4 *)(iVar7 + 0x1b4) = *(undefined4 *)(puVar1 + 0x14);
      *(undefined1 *)(iVar7 + 0x1bc) = puVar1[0x43];
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd4) + *(int *)((int)this + 0xd8) * 4))) =
           *(undefined4 *)(puVar1 + 0x14);
      *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) + 1;
      *(undefined4 *)(iVar7 + 0x224) = *(undefined4 *)(puVar1 + 0x18);
      *(undefined1 *)(iVar7 + 0x22c) = puVar1[0x44];
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd4) + *(int *)((int)this + 0xd8) * 4))) =
           *(undefined4 *)(puVar1 + 0x18);
      *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) + 1;
      *(undefined4 *)(iVar7 + 0x294) = *(undefined4 *)(puVar1 + 0x1c);
      *(undefined1 *)(iVar7 + 0x29c) = puVar1[0x45];
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd4) + *(int *)((int)this + 0xd8) * 4))) =
           *(undefined4 *)(puVar1 + 0x1c);
      *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) + 1;
      *(undefined4 *)(iVar7 + 0x304) = *(undefined4 *)(puVar1 + 0x20);
      *(undefined1 *)(iVar7 + 0x30c) = puVar1[0x46];
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd4) + *(int *)((int)this + 0xd8) * 4))) =
           *(undefined4 *)(puVar1 + 0x20);
      *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) + 1;
      *(undefined4 *)(iVar7 + 0x374) = *(undefined4 *)(puVar1 + 0x24);
      *(undefined1 *)(iVar7 + 0x37c) = puVar1[0x47];
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd4) + *(int *)((int)this + 0xd8) * 4))) =
           *(undefined4 *)(puVar1 + 0x24);
      *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) + 1;
      *(undefined1 *)(iVar7 + 0x380) = puVar1[0x28];
      *(undefined1 *)(iVar7 + 0x381) = puVar1[0x48];
      *(undefined1 *)(iVar7 + 0x382) = puVar1[0x2c];
      local_8 = local_8 + 1;
      *(undefined1 *)(iVar7 + 899) = puVar1[0x49];
    } while (local_8 < param_2);
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(int *)((int)this + 0xd0) = *(int *)((int)this + 0xd0) + param_2;
  if ((uint)(*(int *)((int)this + 0xc4) - *(int *)((int)this + 0xc0) >> 2) <=
      *(uint *)((int)this + 0xd0)) {
    uVar5 = F_00a6d180(this GEN_EDX_ARG,4,*(undefined4 *)((int)this + 0xd8),*(undefined4 *)((int)this + 0xd4),
                         0);
    return uVar5;
  }
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 0x14))))(*(int * PTR32 *)((int)this + 0x20) GEN_EDX_ARG);
  uVar5 = *(uint *)((int)this + 0xd0);
  uVar8 = *(int *)((int)this + 0xc4) - *(int *)((int)this + 0xc0) >> 2;
  uVar11 = uVar8 - uVar5;
  if (uVar6 < uVar11) {
    uVar11 = uVar6;
  }
  if (uVar8 <= uVar5) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  uVar5 = F_00a6d180(this GEN_EDX_ARG,3,uVar11,*(int *)((int)this + 0xc0) + uVar5 * 4,0);
  return uVar5;
}

/* ref: FUN_00a70e70 */
GEN_FRAME uint GEN_THISCALL F_00a70e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa70e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
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
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9f1))) = 1;
  local_c = 0;
  if ((*(uint *)&gen_args[2]) != 0) {
    local_8 = 0;
    do {
      iVar2 = *((int *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + local_c * 4) + 4)));
      iVar7 = **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) + local_8;
      if (iVar6 == 0) {
        uVar4 = F_00ab6240(*(undefined4 *)(iVar7 + 0x3dc),0,iVar2);
        F_0042e430((undefined *)(iVar7 + 900) GEN_EDX_ARG,uVar4);
        *(uint *)(iVar7 + 0x3d8) = (uint)*(ushort *)(iVar2 + 0x7c);
LAB_00a70f25: ;
        iVar6 = iVar6 + 1;
      }
      else {
        iVar1 = iVar6 * 0x70 - 0x70 + iVar7;
        uVar4 = F_00ab6240(*(undefined4 *)(iVar6 * 0x70 - 0xc + iVar7),0,iVar2);
        F_0042e430((undefined *)(iVar1 + 0x10) GEN_EDX_ARG,uVar4);
        *(uint *)(iVar1 + 0x68) = (uint)*(ushort *)(iVar2 + 0x7c);
        *(undefined1 *)(iVar1 + 0x6d) = *(undefined1 *)(iVar2 + 0x9e);
        if (*(int *)(iVar2 + 0x28) == 1) {
          *(byte *)(iVar1 + 0x6e) = *(byte *)(iVar1 + 0x6e) | 1;
        }
        else {
          *(byte *)(iVar1 + 0x6e) = *(byte *)(iVar1 + 0x6e) & 0xfe;
        }
        if (iVar6 != 8) goto LAB_00a70f25;
        local_8 = local_8 + 0x444;
        iVar6 = 0;
      }
      local_c = local_c + 1;
    } while (local_c < (*(uint *)&gen_args[2]));
  }
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  if (puVar3 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) GEN_EDX_ARG,1);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) != 0) {
    puVar8 = ((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x388)));
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
    (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) & 0xffffff00;
    if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) + 4))) != '\0') {
      do {
        F_00a694f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(uint *)&gen_args[2]),0);
        bVar5 = bVar5 + 1;
        (*(uint *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[2]), 1, 3),bVar5);
      } while (bVar5 < *((byte *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) + 4))));
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) GEN_EDX_ARG,2);
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) GEN_EDX_ARG,3);
  }
  return uVar4;
}

/* ref: FUN_00a70fe0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a70fe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa70fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0xd4) != 0) {
    F_00406b30(*(int *)((int)this + 0xd4));
    *(undefined4 *)((int)this + 0xd4) = 0;
  }
  F_00a6d2e0(this GEN_EDX_ARG);
  piVar1 = *(int * PTR32 *)((int)this + 0x40);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    if ((undefined *)*piVar1 != (undefined *)0x0) {
      F_00a8a960((undefined *)*piVar1 GEN_EDX_ARG,3);
    }
    **(undefined4 * PTR32 *)((int)this + 0x40) = 0;
  }
  if (*(int *)((int)this + 0x40) != 0) {
    F_00406ad0(*(int *)((int)this + 0x40));
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  iVar2 = 0;
  do {
    *(undefined1 *)((int)this + iVar2 + 0x9ed) = 0;
    *(undefined4 *)((int)this + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  return 0;
}

/* ref: FUN_00a71060 */
GEN_FRAME unsigned int GEN_THISCALL F_00a71060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa71060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x40);
  iVar7 = 0;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    if ((undefined *)*piVar1 != (undefined *)0x0) {
      F_00a8a960((undefined *)*piVar1 GEN_EDX_FWD,3);
    }
    **(undefined4 * PTR32 *)((int)this + 0x40) = 0;
  }
  if (*(int *)((int)this + 0x40) != 0) {
    F_00406ad0(*(int *)((int)this + 0x40));
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  puVar2 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  else {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    *(undefined1 *)(puVar2 + 3) = 0;
    *(undefined4 *)((int)puVar2 + 0xd) = 0;
    *(undefined4 *)((int)puVar2 + 0x11) = 0;
    *(undefined4 *)((int)puVar2 + 0x15) = 0;
    *(undefined4 *)((int)puVar2 + 0x19) = 0;
    *(undefined4 * PTR32 *)((int)this + 0x40) = puVar2;
  }
  do {
    uVar3 = F_00a69100(iVar7);
    cVar5 = '\0';
    iVar6 = 0;
    do {
      uVar4 = F_00ab2f00(iVar6);
      if ((ushort)*(byte *)(uVar4 + 4) <= (ushort)uVar3) {
        cVar5 = cVar5 + '\x01';
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x28);
    *((char *)GEN_TOP((iVar7 + 0xd + *(int *)((int)this + 0x40)))) = cVar5;
    uVar4 = F_00ab2f00(1000);
    *((bool *)GEN_TOP((iVar7 + 0x15 + *(int *)((int)this + 0x40)))) =
         (ushort)*(byte *)(uVar4 + 4) <= (ushort)uVar3;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  return 0;
}

/* ref: FUN_00a71170 */
GEN_FRAME byte GEN_THISCALL F_00a71170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa71170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if (*(int *)((int)this + 0x44) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x40);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,*(int *)((int)this + 0x44));
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x44);
    if (puVar3 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x44) = 0;
    }
  }
  uVar2 = F_00b8b6f0(param_1);
  if (uVar2 == 0) {
    return 0;
  }
  puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(puVar3 GEN_EDX_ARG,1,param_1);
    puVar3[5] = 1;
    *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10e78f8));
    puVar3[6] = this;
    puVar3[7] = ((code *)REFP(0xa6f790));
  }
  *(undefined4 * PTR32 *)((int)this + 0x44) = puVar3;
  F_00cb4540(puVar3 GEN_EDX_ARG,0,uVar2);
  if (*(int *)((int)this + 0x40) == 0) {
    uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0xfa);
    *(uint *)((int)this + 0x40) = uVar2;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0x48))))
            (*(int * PTR32 *)((int)this + 0x40) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x44));
  return 1;
}

/* ref: FUN_00a71240 */
GEN_FRAME uint GEN_THISCALL F_00a71240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa71240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  if (*(char *)((int)this + 0x36) != (char)param_1) {
    *(char *)((int)this + 0x36) = (char)param_1;
    uVar1 = F_00a6fbc0(&REFG(undefined, 0x14ab740) GEN_EDX_FWD,1,3);
  }
  return uVar1;
}

/* ref: FUN_00a71270 */
GEN_FRAME uint GEN_THISCALL F_00a71270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa71270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xe8);
  if (iVar1 != *(int *)((int)this + 0xec)) {
    do {
      if (*(uint *)(iVar1 + 0x54) == (uint)(ushort)param_1) {
        return *(uint *)(iVar1 + 0x5c);
      }
      iVar1 = iVar1 + 0x11c;
    } while (iVar1 != *(int *)((int)this + 0xec));
  }
  return 0;
}

/* ref: FUN_00a712b0 */
GEN_FRAME uint GEN_THISCALL F_00a712b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa712b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x3c) = param_1;
  F_00a6d2e0(this GEN_EDX_FWD);
  F_00a71060(this GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 4))))(*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00a712e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a712e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa712e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((REFG(int, 0x1379694) != 0) && (*(char *)(REFG(int, 0x1379694) + 0x188) == '\x05')) {
    uVar3 = 0;
    uVar2 = 0;
    uVar1 = 4;
    this_00 = (undefined *)F_006b8c00();
    F_006fccf0(this_00 GEN_EDX_ARG,uVar1,uVar2,uVar3);
  }
  F_00a70fe0(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00a71310 */
GEN_NOFRAME byte GEN_THISCALL F_00a71310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa71310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
      uVar4 = (uint)*(ushort *)((int)this + 0xac);
      uVar5 = 0;
      uVar3 = (*(char *)(iVar1 + 0x188) != '\x05') - 1 & 2;
      this_00 = (undefined *)F_006b8c00();
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
GEN_FRAME byte GEN_THISCALL F_00a71370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa71370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
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
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      uVar7 = 0x478;
    }
    else {
      bVar1 = F_00a69270(this GEN_EDX_ARG,param_1,param_2);
      if (bVar1 != 0) {
        uVar5 = (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x40) + 10)));
        uVar4 = (uint)*(ushort *)((int)this + 0xac);
        iVar6 = (uint)(*(char *)(iVar6 + 0x188) == '\x05') * 2 + 1;
        pvVar3 = (undefined *)F_006b8c00();
        bVar1 = F_006fccf0(pvVar3 GEN_EDX_ARG,iVar6,uVar4,uVar5);
        if (bVar1 != 0) {
          F_00a70fe0(this GEN_EDX_ARG);
        }
        return bVar1;
      }
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      uVar7 = 0x47c;
    }
    uVar8 = 0;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
    F_0046ac40(pvVar3 GEN_EDX_ARG,uVar7,iVar6,uVar8);
  }
  return 0;
}

/* ref: FUN_00a71440 */
GEN_FRAME byte GEN_THISCALL F_00a71440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa71440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int * piVar2;
  
  puVar1 = (undefined4 *)(param_1 * 0x70 + 0x8c + (int)this);
  piVar2 = (int *)*puVar1;
  while( true ) {
    if (piVar2 == (int *)puVar1[1]) {
      return 0;
    }
    if ((*(char *)((int)piVar2 + 0x33) == (char)param_3) && (*piVar2 == param_2)) break;
    piVar2 = piVar2 + 0xd;
  }
  return 1;
}

/* ref: FUN_00a71480 */
GEN_FRAME uint GEN_THISCALL F_00a71480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa71480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  uVar1 = F_006c42f0(param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  uVar2 = uVar1;
  if ((-1 < (int)uVar1) && ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0)) {
    uVar2 = *(uint *)((int)this + uVar1 * 0x70 + 0xdac);
    if (uVar2 != *(uint *)((int)this + uVar1 * 0x70 + 0xdb0)) {
      do {
        if (*(int *)(uVar2 + 8) == 0xebf9) {
          *(byte *)(uVar2 + 0x32) =
               *(byte *)(uVar2 + 0x32) ^ (*(byte *)(uVar2 + 0x32) ^ (byte)param_2) & 1;
        }
        uVar2 = uVar2 + 0x34;
      } while (uVar2 != *(uint *)((int)this + uVar1 * 0x70 + 0xdb0));
    }
  }
  return uVar2;
}

/* ref: FUN_00a714f0 */
GEN_NOFRAME uint GEN_THISCALL F_00a714f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa714f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
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
GEN_NOFRAME uint GEN_THISCALL F_00a71520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa71520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  ulonglong uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e796c));
  if (*(int *)((int)this + 0x5c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x58);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,*(int *)((int)this + 0x5c));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x5c);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x5c) = 0;
    }
  }
  iVar3 = *(int *)((int)this + 0x60);
  if (iVar3 != 0) {
    F_00429760(iVar3,(*(int *)((int)this + 0x68) - iVar3 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  uVar4 = F_0042c880((undefined *)((int)this + 4) GEN_EDX_ARG);
  return (uint)uVar4;
}

/* ref: FUN_00a71590 */
GEN_FRAME uint GEN_THISCALL F_00a71590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa71590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
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
  (*(uint *)(gen_frame + 0x2c)) = 0;
  uVar14 = REFG(undefined4, 0x1379694);
  if (param_2 != 0) {
    do {
      puVar3 = *((uint * PTR32 *)GEN_TOP((*(int *)(param_1 + (*(uint *)(gen_frame + 0x2c)) * 4) + 4)));
      this_02 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x1cc) * 4 + 0x7c))) * 0x2624 +
                        *(int *)((int)this + 0x198))));
      F_0042e430(this_02 GEN_EDX_FWD,(*puVar3 & 0xffffff) + (int)puVar3);
      F_0042e430((undefined *)((int)this_02 + 0x54) GEN_EDX_ARG,(int)puVar3 + (puVar3[0x2d5] & 0xffffff) + 0xb54);
      uVar2 = *(ushort *)((int)this_02 + 0xaa);
      uVar14 = uVar2 | 0x10000;
      this_00 = (undefined *)F_006b8c00();
      this_01 = (int *)F_006e3240(this_00 GEN_EDX_ARG,uVar14);
      uVar14 = F_006bf680((uint)uVar2);
      bVar6 = 0;
      (*(byte *)(gen_frame + 0x4b)) = 1;
      *(undefined4 *)((int)this_02 + 0xb0) = 0;
      (*(uint *)(gen_frame + 0x40)) = (*(uint *)(gen_frame + 0x40)) & 0xffffff00;
      do {
        uVar16 = (uint)bVar6;
        if ((char)puVar3[uVar16 * 9 + 0x1ed] == '\0') {
          *(uint *)((int)this_02 + 0xb0) = (uint)bVar6;
          break;
        }
        pbVar1 = (byte *)(uVar16 * 0x18c + 0xb4 + (int)this_02);
        *(uint *)(pbVar1 + 0x58) = (uint)(byte)puVar3[uVar16 * 9 + 0x1ed];
        if (*(ushort *)((int)this_02 + 0xa8) == (ushort)(byte)puVar3[uVar16 * 9 + 0x1ed]) {
          if ((this_01 != (int *)0x0) && (uVar12 != 0)) {
            bVar6 = F_006c0260(this_01 GEN_EDX_ARG,uVar12,(*(uint *)(gen_frame + 0x40)));
            *pbVar1 = bVar6;
          }
          if ((*(byte *)(gen_frame + 0x4b)) != 0) {
            *(uint *)((int)this_02 + 0x25e4) = uVar16;
            (*(byte *)(gen_frame + 0x4b)) = 0;
          }
          *(int *)((int)this_02 + 0x25e8) = *(int *)((int)this_02 + 0x25e8) + 1;
          uVar17 = 0;
          (*(uint *)(gen_frame + 0x38)) = 0;
          (*(int *)(gen_frame + 0x3c)) = 0;
          bVar5 = false;
          do {
            if (puVar3[uVar16 * 9 + uVar17 + 0x1e5] == 0) break;
            uVar7 = F_00ab37e0(puVar3[uVar16 * 9 + uVar17 + 0x1e5]);
            if (uVar7 != 0) {
              uVar2 = *(ushort *)(uVar7 + 0x20);
              uVar7 = F_00ab1c90((uint)uVar2);
              if (uVar7 != 0) {
                if ((*(char *)(uVar7 + 0x2a) == '\a') && (*(uint *)&REFG(undefined2, 0x1379c78) == uVar2)) {
                  bVar5 = true;
                }
                (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 1;
              }
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < 8);
          (*(uint *)(gen_frame + 0x30)) = 0;
          pbVar15 = pbVar1 + 0xd0;
          do {
            uVar17 = puVar3[uVar16 * 9 + (*(uint *)(gen_frame + 0x30)) + 0x1e5];
            if (uVar17 == 0) break;
            puVar8 = (undefined4 *)F_00ab37e0(uVar17);
            if (puVar8 != (undefined4 *)0x0) {
              uVar7 = F_005d4e80(&REFG(undefined, 0x1379c6c) GEN_EDX_ARG,uVar17,puVar8[6]);
              uVar9 = (uint)*(ushort *)(puVar8 + 8);
              uVar10 = F_00ab1c90(uVar9);
              if (uVar10 != 0) {
                uVar11 = 0;
                if ((*(uint *)(gen_frame + 0x38)) != 0) {
                  puVar13 = (uint *)(pbVar1 + 200);
                  do {
                    if (*puVar13 == uVar17) goto LAB_00a718c3;
                    uVar11 = uVar11 + 1;
                    puVar13 = puVar13 + 6;
                  } while (uVar11 < (*(uint *)(gen_frame + 0x38)));
                }
                if (*(char *)(uVar10 + 0x2a) == '\a') {
                  bVar18 = *(uint *)&REFG(undefined2, 0x1379c78) == uVar9;
                }
                else {
                  bVar18 = !bVar5;
                }
                if ((bVar18) || ((*(int *)(gen_frame + 0x3c)) == 1)) {
                  if ((int)uVar14 < 0) {
LAB_00a7180e: ;
                    *(uint *)(pbVar15 - 8) = uVar17;
                    *(undefined4 *)(pbVar15 - 4) = *puVar8;
                    *(undefined4 *)pbVar15 = puVar8[1];
                    *(undefined4 *)(pbVar15 + 4) = puVar8[2];
                    if ((puVar8[9] == 9) || (puVar8[9] == 0x33)) {
                      fVar19 = F_007733a0(GEN_TOF(gen_bits2f(puVar8[4])));
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
                      (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),bVar6);
                      if (this_01 != (int *)0x0) {
                        uVar17 = ((GEN_TCODE *)*(gen_code32 *)(*this_01 + 0x200))
                                           (this_01 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)),puVar8[5],uVar17,puVar8[5]);
                        *(uint *)(pbVar15 + 0xc) = uVar17;
                      }
                    }
                    (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) + 1;
                    *(uint *)(pbVar1 + 0xb8) = uVar9;
                    *(uint *)(pbVar1 + 0xbc) = uVar7;
                    *(uint *)(pbVar1 + 0xc0) = (uint)*(ushort *)(uVar10 + 0x1e);
                    *(uint *)(pbVar1 + 0xc4) = (uint)*(ushort *)(uVar10 + 0x20);
                    pbVar15 = pbVar15 + 0x18;
                  }
                  else {
                    for (puVar13 = *(uint * PTR32 *)(&REFG(undefined, 0x14b12e4) + uVar14 * 0x70);
                        puVar13 != *(uint * PTR32 *)(&REFG(undefined, 0x14b12e8) + uVar14 * 0x70);
                        puVar13 = puVar13 + 0xd) {
                      if ((*(char *)((int)puVar13 + 0x33) == (char)(*(uint *)(gen_frame + 0x40))) && (*puVar13 == uVar17)
                         ) goto LAB_00a7180e;
                    }
                  }
                }
              }
            }
LAB_00a718c3: ;
            (*(uint *)(gen_frame + 0x30)) = (*(uint *)(gen_frame + 0x30)) + 1;
          } while ((*(uint *)(gen_frame + 0x30)) < 8);
          *(uint *)(pbVar1 + 0x188) = (*(uint *)(gen_frame + 0x38));
        }
        else {
          *pbVar1 = (*(byte *)(gen_frame + 0x4b));
        }
        bVar6 = (char)(*(uint *)(gen_frame + 0x40)) + 1;
        (*(uint *)(gen_frame + 0x40)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x40)), 1, 3),bVar6);
      } while (bVar6 < 0x18);
      *(int *)((int)this + 0x1cc) = *(int *)((int)this + 0x1cc) + 1;
      uVar14 = (*(uint *)(gen_frame + 0x2c)) + 1;
      (*(uint *)(gen_frame + 0x2c)) = uVar14;
    } while (uVar14 < param_2);
  }
  puVar8 = *(undefined4 * PTR32 *)((int)this + 0x204);
  if (puVar8 != (undefined4 *)0x0) {
    uVar14 = ((GEN_TCODE *)*(gen_code32 *)*puVar8)(puVar8 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x204) = 0;
  }
  if ((uint)*(ushort *)((int)this + 0x78) <= *(uint *)((int)this + 0x1c8)) {
    *(undefined4 *)((int)this + 0x1d0) = 0;
    if (*(char *)((int)this + 0x1d4) == '\0') {
      *(undefined1 *)((int)this + 0x1d4) = 1;
    }
    *(undefined1 *)((int)this + 0x1d5) = 1;
    return uVar14;
  }
  uVar12 = F_00a71ef0(this GEN_EDX_ARG);
  return uVar12;
}

/* ref: FUN_00a71980 */
GEN_NOFRAME uint GEN_THISCALL F_00a71980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa71980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(int *)((int)this + 0x28) != 0) {
    uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_FWD,0x127);
    if (uVar2 != 0) {
      piVar3 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0x127);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x28));
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x28);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x28) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  F_00a8f670((undefined *)((int)this + 0x14) GEN_EDX_ARG);
  *(undefined4 *)this = 0;
  if ((*(int *)((int)this + 0x34) != 2) && (0x67 < *(uint *)((int)this + 0x2c))) {
    *(undefined4 *)((int)this + 0x34) = 2;
  }
  return 2;
}

/* ref: FUN_00a71a10 */
GEN_FRAME unsigned int GEN_THISCALL F_00a71a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa71a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int * piVar5;
  undefined4 * puVar6;
  int * piVar7;
  int iVar8;
  int * piVar9;
  
  piVar2 = *(int * PTR32 *)((int)this + 8);
  piVar9 = (int *)*piVar2;
  if (piVar9 == piVar2) {
    return;
  }
  do {
    puVar3 = *(undefined4 * PTR32 *)piVar9[5];
    while (puVar3 != (undefined4 *)piVar9[5]) {
      for (iVar8 = puVar3[5]; iVar8 != puVar3[6]; iVar8 = iVar8 + 0x88) {
        if (*(short *)(iVar8 + 0x7c) == (short)param_1) {
          *(undefined1 *)(iVar8 + 0x85) = (undefined1)param_2;
          return;
        }
      }
      if (*(char *)((int)puVar3 + 0x25) == '\0') {
        puVar4 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar4 + 0x25) == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x25);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar4 + 0x25);
            puVar3 = puVar4;
            puVar4 = (undefined4 *)*puVar4;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x25);
          puVar6 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
          while ((puVar3 = puVar6, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x25);
            puVar6 = (undefined4 *)puVar3[1];
            puVar4 = puVar3;
          }
        }
      }
    }
    if (*(char *)((int)piVar9 + 0x21) == '\0') {
      piVar5 = (int *)piVar9[2];
      if (*(char *)((int)piVar5 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar5 + 0x21);
        piVar9 = piVar5;
        piVar5 = (int *)*piVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar5 + 0x21);
          piVar9 = piVar5;
          piVar5 = (int *)*piVar5;
        }
      }
      else {
        cVar1 = *(char *)(piVar9[1] + 0x21);
        piVar7 = (int *)piVar9[1];
        piVar5 = piVar9;
        while ((piVar9 = piVar7, cVar1 == '\0' && (piVar5 == (int *)piVar9[2]))) {
          cVar1 = *(char *)(piVar9[1] + 0x21);
          piVar7 = (int *)piVar9[1];
          piVar5 = piVar9;
        }
      }
    }
  } while (piVar9 != piVar2);
  return;
}

/* ref: FUN_00a71b20 */
GEN_FRAME uint GEN_THISCALL F_00a71b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa71b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
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
  
  bVar5 = *(byte *)(param_1 + 0x2ba + (int)this) ^ (byte)param_2;
  puVar7 = ((undefined4 *)GEN_TOP(CONCAT31((int3)((uint)in_EAX >> 8),bVar5)));
  *(byte *)(param_1 + 0x2ba + (int)this) = (byte)param_2;
  local_5 = 0;
  bVar8 = 0;
  do {
    bVar6 = '\x01' << (bVar8 & 0x1f);
    puVar7 = ((undefined4 *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)puVar7) >> 8),bVar6)));
    if ((bVar5 & bVar6) != 0) {
      puVar2 = ((undefined4 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x14ac18c)));
      while (puVar2 != REFG(undefined4 * PTR32, 0x14ac18c)) {
        puVar3 = *(undefined4 * PTR32 *)puVar2[5];
        while (puVar3 != (undefined4 *)puVar2[5]) {
          for (puVar7 = (undefined4 *)puVar3[5]; puVar7 != (undefined4 *)puVar3[6];
              puVar7 = puVar7 + 0x22) {
            if (*(short *)(puVar7 + 0x1f) == (ushort)((short)param_1 * 8 + (ushort)local_5)) {
              *(bool *)((int)puVar7 + 0x85) = ((byte)param_2 & bVar6) != 0;
              goto LAB_00a71c65;
            }
          }
          if (*(char *)((int)puVar3 + 0x25) == '\0') {
            puVar7 = (undefined4 *)puVar3[2];
            if (*(char *)((int)puVar7 + 0x25) == '\0') {
              cVar1 = *(char *)((int)*puVar7 + 0x25);
              puVar3 = puVar7;
              puVar7 = (undefined4 *)*puVar7;
              while (cVar1 == '\0') {
                cVar1 = *(char *)((int)*puVar7 + 0x25);
                puVar3 = puVar7;
                puVar7 = (undefined4 *)*puVar7;
              }
            }
            else {
              cVar1 = *(char *)((int)puVar3[1] + 0x25);
              puVar7 = (undefined4 *)puVar3[1];
              puVar4 = puVar3;
              while ((puVar3 = puVar7, puVar7 = puVar3, cVar1 == '\0' &&
                     (puVar4 == (undefined4 *)puVar3[2]))) {
                cVar1 = *(char *)((int)puVar3[1] + 0x25);
                puVar7 = (undefined4 *)puVar3[1];
                puVar4 = puVar3;
              }
            }
          }
        }
        if (*(char *)((int)puVar2 + 0x21) == '\0') {
          puVar7 = (undefined4 *)puVar2[2];
          if (*(char *)((int)puVar7 + 0x21) == '\0') {
            cVar1 = *(char *)((int)*puVar7 + 0x21);
            puVar2 = puVar7;
            puVar7 = (undefined4 *)*puVar7;
            while (cVar1 == '\0') {
              cVar1 = *(char *)((int)*puVar7 + 0x21);
              puVar2 = puVar7;
              puVar7 = (undefined4 *)*puVar7;
            }
          }
          else {
            cVar1 = *(char *)((int)puVar2[1] + 0x21);
            puVar7 = (undefined4 *)puVar2[1];
            puVar3 = puVar2;
            while ((puVar2 = puVar7, puVar7 = puVar2, cVar1 == '\0' &&
                   (puVar3 == (undefined4 *)puVar2[2]))) {
              cVar1 = *(char *)((int)puVar2[1] + 0x21);
              puVar7 = (undefined4 *)puVar2[1];
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
GEN_FRAME uint GEN_THISCALL F_00a71c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa71c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  piVar5 = *(int * PTR32 *)((int)this + 0x40);
  iVar3 = *piVar5;
  (*(int *)(gen_frame + 0x8)) = param_1;
  if (iVar3 != 0) {
    this_00 = (undefined *)*piVar5;
    if (this_00 != (undefined *)0x0) {
      F_00a8a960(this_00 GEN_EDX_FWD,3);
    }
    **(undefined4 * PTR32 *)((int)this + 0x40) = 0;
  }
  *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x40) + 8))) = (undefined2)param_3;
  *(undefined4 *)((int)this + 0xbc) = 0;
  iVar3 = *(int *)((int)this + 0xc0);
  iVar4 = param_1;
  if (iVar3 != *(int *)((int)this + 0xc4)) {
    F_00c46e20(iVar3,*(int *)((int)this + 0xc4),0);
    *(int *)((int)this + 0xc4) = iVar3;
    iVar4 = (*(int *)(gen_frame + 0x8));
  }
  *(undefined4 *)((int)this + 0xb8) = 1;
  *((char *)GEN_TOP((*(int *)((int)this + 0x40) + 0xc))) = (char)iVar4;
  if (param_2 < 1000) {
    if (param_2 < 9) {
      uVar2 = *(uint *)((int)this + 0xb8);
      iVar3 = 0;
      piVar5 = &(*(int *)(gen_frame + 0x8));
      (*(int *)(gen_frame + 0x8)) = param_2 + iVar4 * 0x28;
    }
    else {
      *(undefined4 *)((int)this + 0xb8) = 0x1f;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x14))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG);
      uVar2 = 0x1f;
      if (uVar1 < 0x1f) {
        uVar2 = uVar1;
      }
      uVar1 = 0;
      if (uVar2 != 0) {
        iVar3 = *(int *)((int)this + 0xbc) + 9 + iVar4 * 0x28;
        do {
          ((int *)(gen_frame + 0xc))[(int)(uVar1)] = iVar3;
          uVar1 = uVar1 + 1;
          iVar3 = iVar3 + 1;
        } while (uVar1 < uVar2);
      }
      piVar5 = ((int *)(gen_frame + 0xc));
      iVar3 = iVar4;
    }
  }
  else {
    iVar3 = 0;
    piVar5 = &(*(int *)(gen_frame + 0x8));
    (*(int *)(gen_frame + 0x8)) = iVar4 + param_2;
    uVar2 = 1;
  }
  uVar2 = F_00a6d180(this GEN_EDX_ARG,2,uVar2,piVar5,iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00a71dd0 */
GEN_FRAME uint GEN_THISCALL F_00a71dd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa71dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int local_8;
  
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  F_00a84d40((undefined *)((int)this + 0x44) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
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
    *(undefined4 *)(iVar2 + 0x54) = 0;
    *(undefined4 *)(iVar2 + 0x58) = 0;
    *(undefined2 *)(iVar2 + 0x5c) = 0;
    iVar2 = iVar2 + 0x60;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  *(undefined1 *)((int)this + 0x9ec) = 0;
  do {
    *(undefined1 *)((int)this + iVar1 + 0x9ed) = 0;
    *(undefined4 *)((int)this + iVar1 * 4) = 0;
    *(undefined4 *)((int)this + iVar1 * 4 + 0x14) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return (uint)this;
}

/* ref: FUN_00a71e70 */
GEN_NOFRAME uint GEN_THISCALL F_00a71e70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa71e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  ulonglong uVar4;
  
  pvVar2 = (undefined *)((int)this + 0x9ec);
  iVar3 = 0x11;
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x60);
    F_0042c880(pvVar2 GEN_EDX_FWD);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  pvVar2 = (undefined *)((int)this + 0x32c);
  iVar3 = 6;
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x54);
    F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  iVar3 = *(int *)((int)this + 0xc0);
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar4 = F_00429760(iVar3,(*(int *)((int)this + 200) - iVar3 >> 2) * 4,800);
    uVar1 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  return uVar1;
}

/* ref: FUN_00a71ef0 */
GEN_NOFRAME uint GEN_THISCALL F_00a71ef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa71ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * this_00;
  byte bVar4;
  uint uVar5;
  
  piVar2 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_FWD,"Quest");
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2 GEN_EDX_ARG);
  uVar5 = (uint)*(ushort *)((int)this + 0x78) - *(int *)((int)this + 0x1c8);
  if (uVar3 < uVar5) {
    uVar5 = uVar3;
  }
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,uVar5,0);
    this_00[5] = uVar5;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e78d4));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xa71590));
  }
  *(undefined4 * PTR32 *)((int)this + 0x204) = this_00;
  if (*(int *)((int)this + 0x200) == 0) {
    uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0x11);
    *(uint *)((int)this + 0x200) = uVar3;
  }
  bVar4 = 0;
  if (uVar5 != 0) {
    uVar3 = 0;
    do {
      iVar1 = *((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x1c8) * 4 + 0x7c)));
      *(int *)((int)this + 0x1c8) = *(int *)((int)this + 0x1c8) + 1;
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x204) GEN_EDX_ARG,uVar3,
                   *((ushort *)GEN_TOP((iVar1 * 0x2624 + 0xaa + *(int *)((int)this + 0x198)))) | 0x10000);
      bVar4 = bVar4 + 1;
      uVar3 = (uint)bVar4;
    } while (uVar3 < uVar5);
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x200) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x200) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x204));
  return uVar5;
}

/* ref: FUN_00a71ff0 */
GEN_FRAME uint GEN_THISCALL F_00a71ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa71ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x300];
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  byte bVar4;
  uint * puVar5;
  undefined1 * puVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined2 * puVar12;
  undefined4 * puVar13;
  undefined4 uVar14;
  undefined4 * puVar15;
  uint uVar16;
  
  (*(uint *)(gen_frame + 0x2f8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2fc);
  bVar4 = 0;
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      ((undefined4 *)(gen_frame + 0xc))[(int)(uVar1)] = *((undefined4 *)GEN_TOP((*(int *)(param_1 + uVar1 * 4) + 4)));
      bVar4 = bVar4 + 1;
      ((undefined4 *)(gen_frame + 0x2d4))[(int)(uVar1)] = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x21c) + 0xc))) + uVar1 * 0x10)));
      uVar1 = (uint)bVar4;
    } while (uVar1 < param_2);
  }
  (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x1f0) * 4 + 0xa4))) * 0x2624 + 0x261c +
               *(int *)((int)this + 0x198))));
  ((undefined4 *)(gen_frame + 0x24))[0] = 0;
  puVar6 = ((undefined1 *)(gen_frame + 0x2c));
  (*(int *)(gen_frame + 0x20)) = 3;
  do {
    F_0071dbc0(puVar6 GEN_EDX_FWD);
    puVar6 = puVar6 + 0xa8;
    iVar7 = (*(int *)(gen_frame + 0x20)) - 1;
    (*(int *)(gen_frame + 0x20)) = iVar7;
  } while (-1 < iVar7);
  puVar15 = ((undefined4 *)(gen_frame + 0x2d4));
  puVar13 = ((undefined4 *)(gen_frame + 0xc));
  ((uint *)(gen_frame + 0x2cc))[0] = 0;
  uVar1 = F_00ab37e0((*(undefined4 *)(gen_frame + 0x1c)));
  F_006d42d0(((undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG,(int)this + *(int *)((int)this + 0x1f0) * 0x28 + 0xcc,
               *(undefined4 *)(uVar1 + 0x14),puVar13,puVar15,param_2);
  iVar7 = *((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x1f0) * 4 + 0xa4))) * 0x2624 + 0xb4 +
          *(int *)((int)this + 0x198);
  F_00709790(((undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG,iVar7 + 4,iVar7 + 0x5c);
  uVar1 = 0;
  (*(undefined2 *)(gen_frame + 0x2e4)) = 0;
  (*(undefined4 *)(gen_frame + 0x2e6)) = 0;
  (*(undefined4 *)(gen_frame + 0x2ea)) = 0;
  (*(undefined1 *)(gen_frame + 0x2f0)) = 0;
  (*(undefined4 *)(gen_frame + 0x2f1)) = 0;
  if (((uint *)(gen_frame + 0x2cc))[0] != 0) {
    puVar5 = ((uint *)(gen_frame + 0x8c));
    do {
      if (*(char *)((int)puVar5 - 2) == '\0') {
        uVar3 = *puVar5;
        if ((puVar5[3] & 1) != 0) {
          uVar3 = uVar3 + 1000000;
        }
      }
      else {
        pvVar2 = (undefined *)F_00a3a860(puVar5 - 2 GEN_EDX_ARG);
        uVar3 = F_0046e5e0(pvVar2 GEN_EDX_ARG);
      }
      iVar7 = (int)this + 0x1c0;
      uVar14 = 0;
      puVar6 = &(*(undefined1 *)(gen_frame + 0x2f0));
      puVar12 = &(*(undefined2 *)(gen_frame + 0x2e4));
      uVar11 = 1;
      uVar10 = 0;
      uVar9 = 0;
      uVar16 = uVar1;
      pvVar2 = (undefined *)F_006b8c00();
      F_007013f0(pvVar2 GEN_EDX_ARG,uVar3,uVar9,uVar10,uVar11,puVar12,puVar6,uVar14,iVar7,uVar16);
      uVar1 = uVar1 + 1;
      puVar5 = puVar5 + 0x2a;
    } while (uVar1 < ((uint *)(gen_frame + 0x2cc))[0]);
  }
  puVar15 = *(undefined4 * PTR32 *)((int)this + 0x21c);
  *(int *)((int)this + 0x1f0) = *(int *)((int)this + 0x1f0) + 1;
  if (puVar15 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar15)(puVar15 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x21c) = 0;
  }
  if (*(uint *)((int)this + 0x1ec) < *(uint *)((int)this + 0x1e8)) {
    F_00a72220(this GEN_EDX_ARG);
  }
  else if (*(short *)((int)this + 0x78) == 0) {
    *(undefined1 *)((int)this + 0x1dd) = 0;
    *(undefined1 *)((int)this + 0x194) = 1;
  }
  else {
    *(undefined4 *)((int)this + 0x1c8) = 0;
    F_00a71ef0(this GEN_EDX_ARG);
  }
  puVar5 = ((uint *)(gen_frame + 0x2cc));
  iVar7 = 3;
  do {
    puVar5 = puVar5 - 0x2a;
    uVar8 = F_0042c880(puVar5 GEN_EDX_ARG);
    iVar7 = iVar7 - 1;
  } while (-1 < iVar7);
  F_00c47745((*(uint *)(gen_frame + 0x2f8)) ^ (uint)(uint)(gen_frame + 0x2fc) GEN_EDX_ARG);
  return (uint)uVar8;
}

/* ref: FUN_00a72220 */
GEN_NOFRAME uint GEN_THISCALL F_00a72220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa72220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 * this_00;
  uint uVar2;
  byte bVar3;
  
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x1ec) * 4 + 0xa4))) * 0x2624 + 0x2618 +
              *(int *)((int)this + 0x198)))) == 0) {
    do {
      *(int *)((int)this + 0x1ec) = *(int *)((int)this + 0x1ec) + 1;
      uVar2 = *(uint *)((int)this + 0x1ec);
      *(int *)((int)this + 0x1f0) = *(int *)((int)this + 0x1f0) + 1;
      if (*(uint *)((int)this + 0x1e8) <= uVar2) {
        if (*(short *)((int)this + 0x78) != 0) {
          *(undefined4 *)((int)this + 0x1c8) = 0;
          uVar2 = F_00a71ef0(this GEN_EDX_FWD);
          return uVar2;
        }
        *(undefined1 *)((int)this + 0x1dd) = 0;
        *(undefined1 *)((int)this + 0x194) = 1;
        return uVar2;
      }
    } while (*((int *)GEN_TOP((*(int *)((int)this + uVar2 * 4 + 0xa4) * 0x2624 + 0x2618 +
                     *(int *)((int)this + 0x198)))) == 0);
  }
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x1ec) * 4 + 0xa4))) * 0x2624 + 0x2618 +
             *(int *)((int)this + 0x198))));
    F_00cb4700(this_00 GEN_EDX_ARG,uVar1,0);
    this_00[5] = uVar1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e78d4));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xa71ff0));
  }
  *(undefined4 * PTR32 *)((int)this + 0x21c) = this_00;
  if (*(int *)((int)this + 0x218) == 0) {
    uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,9);
    *(uint *)((int)this + 0x218) = uVar2;
  }
  bVar3 = 0;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x1ec) * 4 + 0xa4))) * 0x2624 + 0x2618 +
              *(int *)((int)this + 0x198)))) != 0) {
    uVar2 = 0;
    do {
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x21c) GEN_EDX_ARG,uVar2,
                   *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x198) + 0x25f4 +
                    (*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x1ec) * 4 + 0xa4))) * 0x989 + uVar2) *
                    4))));
      bVar3 = bVar3 + 1;
      uVar2 = (uint)bVar3;
    } while (uVar2 < *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x1ec) * 4 + 0xa4))) * 0x2624
                               + 0x2618 + *(int *)((int)this + 0x198)))));
  }
  *(int *)((int)this + 0x1ec) = *(int *)((int)this + 0x1ec) + 1;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x218) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x218) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x21c));
  return uVar2;
}

/* ref: FUN_00a72410 */
GEN_NOFRAME uint GEN_THISCALL F_00a72410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa72410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x28);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    if ((undefined *)*piVar1 != (undefined *)0x0) {
      F_00a92f80((undefined *)*piVar1 GEN_EDX_FWD,3);
    }
    **(undefined4 * PTR32 *)((int)this + 0x28) = 0;
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x28) != 0) {
    uVar2 = F_00406ad0(*(int *)((int)this + 0x28));
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  return uVar2;
}

/* ref: FUN_00a72450 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a72450(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa72450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  F_00a66c10(this GEN_EDX_FWD);
  piVar1 = *(int * PTR32 *)((int)this + 0x28);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    if ((undefined *)*piVar1 != (undefined *)0x0) {
      F_00a92f80((undefined *)*piVar1 GEN_EDX_ARG,3);
    }
    **(undefined4 * PTR32 *)((int)this + 0x28) = 0;
  }
  if (*(int *)((int)this + 0x28) != 0) {
    F_00406ad0(*(int *)((int)this + 0x28));
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  iVar2 = 0;
  do {
    *(undefined1 *)((int)this + iVar2 + 0x48) = 0;
    *(undefined4 *)((int)this + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return 0;
}

/* ref: FUN_00a724b0 */
GEN_FRAME uint GEN_THISCALL F_00a724b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa724b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
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
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + local_14 * 4) + 4)));
      iVar2 = *((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x1f0) * 4 + 0xa4)));
      puVar7 = puVar1;
      puVar8 = ((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x1f0) * 0x28 + 0xcc)));
      for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      local_10 = (undefined1 *)((int)puVar1 + 0x21);
      local_c = puVar1 + 2;
      psVar3 = (short *)(puVar1 + 6);
      local_5 = 0;
      local_1c = 4;
      do {
        if (*psVar3 != 0) {
          bVar5 = 0;
          if (local_5 != 0) {
            do {
              iVar6 = *((int *)GEN_TOP((*(int *)((int)this + 0x198) + 0x25f4 +
                              ((uint)bVar5 + iVar2 * 0x989) * 4)));
              if ((iVar6 == *local_c) || (iVar6 - 1000000 == *local_c)) goto LAB_00a725af;
              bVar5 = bVar5 + 1;
            } while (bVar5 < local_5);
          }
          uVar4 = (uint)local_5;
          *((int *)GEN_TOP((*(int *)((int)this + 0x198) + 0x25f4 + (iVar2 * 0x989 + uVar4) * 4))) = *local_c;
          local_5 = local_5 + 1;
          *((undefined1 *)GEN_TOP((iVar2 * 0x2624 + uVar4 + 0x2614 + *(int *)((int)this + 0x198)))) = *local_10
          ;
        }
LAB_00a725af: ;
        local_c = local_c + 1;
        local_10 = local_10 + 1;
        psVar3 = psVar3 + 1;
        local_1c = local_1c - 1;
      } while (local_1c != 0);
      *((uint *)GEN_TOP((iVar2 * 0x2624 + 0x2618 + *(int *)((int)this + 0x198)))) = (uint)local_5;
      *(int *)((int)this + 0x1f0) = *(int *)((int)this + 0x1f0) + 1;
      local_14 = local_14 + 1;
    } while (local_14 < param_2);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x214);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
    *(undefined4 *)((int)this + 0x214) = 0;
  }
  if (*(uint *)((int)this + 0x1ec) < *(uint *)((int)this + 0x1e8)) {
    uVar4 = F_00a72650(this GEN_EDX_ARG);
    return uVar4;
  }
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  uVar4 = F_00a72220(this GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00a72650 */
GEN_NOFRAME uint GEN_THISCALL F_00a72650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa72650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * this_00;
  byte bVar4;
  uint uVar5;
  
  piVar2 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_FWD,"CraftLeve");
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2 GEN_EDX_ARG);
  uVar5 = *(int *)((int)this + 0x1e8) - *(int *)((int)this + 0x1ec);
  if (uVar3 < uVar5) {
    uVar5 = uVar3;
  }
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,uVar5,0);
    this_00[5] = uVar5;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e78d4));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xa724b0));
  }
  *(undefined4 * PTR32 *)((int)this + 0x214) = this_00;
  if (*(int *)((int)this + 0x210) == 0) {
    uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0x68);
    *(uint *)((int)this + 0x210) = uVar3;
  }
  bVar4 = 0;
  if (uVar5 != 0) {
    uVar3 = 0;
    do {
      iVar1 = *((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x1ec) * 4 + 0xa4)));
      *(int *)((int)this + 0x1ec) = *(int *)((int)this + 0x1ec) + 1;
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x214) GEN_EDX_ARG,uVar3,
                   *((undefined4 *)GEN_TOP((iVar1 * 0x2624 + 0x25ec + *(int *)((int)this + 0x198)))));
      bVar4 = bVar4 + 1;
      uVar3 = (uint)bVar4;
    } while (uVar3 < uVar5);
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x210) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x210) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x214));
  return uVar5;
}

/* ref: FUN_00a72750 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a72750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa72750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7978));
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 0xc) - iVar1) / 0xc) * 0xc,400);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return;
}

/* ref: FUN_00a727b0 */
GEN_FRAME uint GEN_THISCALL F_00a727b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa727b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = *(uint *)((int)this + 0x30);
  *(uint *)((int)this + 0x30) = uVar4 + param_2;
  (*(uint *)(gen_frame + 0x18)) = 0;
  if (param_2 != 0) {
    do {
      (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + (*(uint *)(gen_frame + 0x18)) * 4) + 4))) + 4)));
      (*(bool *)(gen_frame + 0x10)) = ((&REFG(undefined, 0x14ab343))[(int)(uVar4 >> 3)] &
                 (byte)(1 << ((char)uVar4 + (char)(uVar4 >> 3) * -8 & 0x1fU))) != 0;
      puVar2 = (undefined4 *)F_004296a0(0x18,0,0x191);
      *puVar2 = *(undefined4 *)((int)this + 0x18);
      puVar2[1] = *(undefined4 *)((int)this + 0x18);
      puVar2[2] = *(undefined4 *)((int)this + 0x18);
      *(undefined2 *)(puVar2 + 5) = 0;
      if (puVar2 + 3 != (undefined4 *)0x0) {
        puVar2[3] = (*(undefined4 *)(gen_frame + 0xc));
        *(bool *)(puVar2 + 4) = (*(bool *)(gen_frame + 0x10));
      }
      F_00a90200((undefined *)((int)this + 0x14) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),puVar2,0);
      uVar3 = (*(uint *)(gen_frame + 0x18)) + 1;
      uVar4 = uVar4 + 1;
      (*(uint *)(gen_frame + 0x18)) = uVar3;
    } while (uVar3 < param_2);
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x28);
  uVar4 = (*(uint *)(gen_frame + 0x18));
  if (puVar2 != (undefined4 *)0x0) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  if (*(uint *)((int)this + 0x30) < 0xc9) {
    uVar4 = F_00a728c0(this GEN_EDX_ARG);
  }
  else {
    bVar5 = 0x67 < *(uint *)((int)this + 0x2c);
    uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar5);
    if (bVar5) {
      piVar1 = *(int * PTR32 *)this;
      *(undefined4 *)((int)this + 0x34) = 2;
      if (piVar1 != (int *)0x0) {
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,5);
        return uVar4;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00a728c0 */
GEN_FRAME uint GEN_THISCALL F_00a728c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa728c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * this_00;
  uint uVar3;
  
  piVar1 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_FWD,0x127);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
  if (0xc9 < *(int *)((int)this + 0x30) + uVar2) {
    uVar2 = 0xc9 - *(int *)((int)this + 0x30);
  }
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,uVar2,0);
    this_00[5] = uVar2;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10e7904));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xa727b0));
  }
  *(undefined4 * PTR32 *)((int)this + 0x28) = this_00;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,uVar3,*(int *)((int)this + 0x30) + uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x28));
  return uVar2;
}

/* ref: FUN_00a72970 */
GEN_NOFRAME uint GEN_THISCALL F_00a72970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa72970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  ulonglong uVar5;
  
  if (*(int *)((int)this + 0x68) != 0) {
    uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_FWD,0x127);
    if (uVar3 != 0) {
      piVar4 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0x127);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x4c))(piVar4 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x68));
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x68);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x68) = 0;
    }
  }
  if (*(int *)((int)this + 0x6c) != 0) {
    uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0x127);
    if (uVar3 != 0) {
      piVar4 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0x127);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x4c))(piVar4 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x6c));
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x6c);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x6c) = 0;
    }
  }
  uVar5 = F_0042c880((undefined *)((int)this + 0x14) GEN_EDX_ARG);
  uVar3 = (uint)uVar5;
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 != 0) {
    uVar5 = F_00429760(iVar2,((*(int *)((int)this + 0xc) - iVar2) / 0x14) * 0x14,0x191);
    uVar3 = (uint)uVar5;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar3;
}

/* ref: FUN_00a72a70 */
GEN_FRAME uint GEN_THISCALL F_00a72a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa72a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x28);
  if ((undefined *)*puVar1 != (undefined *)0x0) {
    F_00a92f80((undefined *)*puVar1 GEN_EDX_FWD,3);
    *puVar1 = 0;
  }
  *(undefined2 *)(puVar1 + 1) = 0;
  *(undefined1 *)((int)puVar1 + 6) = 0;
  *((char *)GEN_TOP((*(int *)((int)this + 0x28) + 5))) = (char)param_1;
  *((char *)GEN_TOP((*(int *)((int)this + 0x28) + 6))) = (char)param_2;
  *(undefined4 *)((int)this + 0x2c) = 1;
  *(undefined4 *)((int)this + 0x30) = 0;
  iVar5 = *(int *)((int)this + 0x38);
  iVar2 = *(int *)((int)this + 0x34);
  if (iVar2 != iVar5) {
    (*(int *)(gen_frame + 0x8)) = 0;
    F_00c46e20(iVar2,iVar5,0);
    *(int *)((int)this + 0x38) = (*(int *)(gen_frame + 0x8)) + iVar2;
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  if (param_2 == 9) {
    *(undefined4 *)((int)this + 0x2c) = 0x1f;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x14))))(*(int * PTR32 *)((int)this + 0xc) GEN_EDX_ARG);
    uVar4 = 0x1f;
    if (uVar3 < 0x1f) {
      uVar4 = uVar3;
    }
    uVar3 = 0;
    if (uVar4 != 0) {
      iVar5 = *(int *)((int)this + 0x30) + 9 + param_1 * 0x28;
      do {
        ((int *)(gen_frame + 0xc))[(int)(uVar3)] = iVar5;
        uVar3 = uVar3 + 1;
        iVar5 = iVar5 + 1;
      } while (uVar3 < uVar4);
    }
    piVar6 = ((int *)(gen_frame + 0xc));
    iVar5 = param_1;
  }
  else {
    uVar4 = *(uint *)((int)this + 0x2c);
    iVar5 = 0;
    piVar6 = &(*(int *)(gen_frame + 0x8));
    (*(int *)(gen_frame + 0x8)) = param_2 + param_1 * 0x28;
  }
  uVar4 = F_00a6bb10(this GEN_EDX_ARG,0,uVar4,piVar6,iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00a72b90 */
GEN_NOFRAME uint GEN_THISCALL F_00a72b90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa72b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_00a72450(this GEN_EDX_FWD);
  iVar1 = *(int *)((int)this + 0x34);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0x3c) - iVar1 >> 2) * 4,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  return uVar2;
}

/* ref: FUN_00a72bf0 */
GEN_FRAME uint GEN_THISCALL F_00a72bf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa72bf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
  
  piVar2 = *(int * PTR32 *)((int)this + 0x28);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    if ((undefined *)*piVar2 != (undefined *)0x0) {
      F_00a92f80((undefined *)*piVar2 GEN_EDX_FWD,3);
    }
    **(undefined4 * PTR32 *)((int)this + 0x28) = 0;
  }
  if (*(int *)((int)this + 0x28) != 0) {
    F_00406ad0(*(int *)((int)this + 0x28));
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  puVar5 = (undefined4 *)F_00406b90(0x30,0,0);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    *(undefined2 *)(puVar5 + 1) = 0;
    *(undefined1 *)((int)puVar5 + 6) = 0;
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
  *(undefined4 * PTR32 *)((int)this + 0x28) = puVar5;
  uVar6 = F_00ab21a0((uint)REFG(undefined1, 0x14ab0d4));
  if (uVar6 == 0) {
LAB_00a72ce0: ;
    uVar9 = 0;
  }
  else {
    cVar7 = *(char *)(uVar6 + 0x3e);
    uVar6 = F_00ab21a0(0x10);
    if (((uVar6 == 0) || (cVar1 = *(char *)(uVar6 + 0x43), cVar1 < '\0')) || ('\x12' < cVar1))
    goto LAB_00a72ce0;
    uVar9 = *(ushort *)(&REFG(undefined, 0x14ab0d6) + cVar1 * 2);
    if (((cVar7 == *(char *)(uVar6 + 0x3e)) && (REFG(undefined2, 0x14ab148) != 0)) && (REFG(undefined2, 0x14ab148) < uVar9)) {
      uVar9 = REFG(undefined2, 0x14ab148);
    }
  }
  uVar6 = F_00ab21a0((uint)REFG(undefined1, 0x14ab0d4));
  if (uVar6 != 0) {
    cVar7 = *(char *)(uVar6 + 0x3e);
    uVar6 = F_00ab21a0(0x11);
    if (((uVar6 != 0) && (cVar1 = *(char *)(uVar6 + 0x43), -1 < cVar1)) && (cVar1 < '\x13')) {
      uVar3 = *(ushort *)(&REFG(undefined, 0x14ab0d6) + cVar1 * 2);
      if (((cVar7 == *(char *)(uVar6 + 0x3e)) && (REFG(undefined2, 0x14ab148) != 0)) && (REFG(undefined2, 0x14ab148) < uVar3)) {
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
      uVar4 = (ushort)*(byte *)(uVar6 + 5);
      if (uVar4 <= uVar9) goto LAB_00a72d68;
    }
    if (uVar4 <= uVar3) {
      cVar7 = cVar7 + '\x01';
    }
    iVar8 = iVar8 + 1;
    if (0x27 < iVar8) {
      *((char *)GEN_TOP((*(int *)((int)this + 0x28) + 8))) = local_5;
      *((char *)GEN_TOP((*(int *)((int)this + 0x28) + 9))) = local_5;
      uVar6 = *(uint *)((int)this + 0x28);
      *(char *)(uVar6 + 10) = cVar7;
      *((char *)GEN_TOP((*(int *)((int)this + 0x28) + 0xb))) = cVar7;
      return uVar6;
    }
  } while( true );
}

/* ref: FUN_00a72db0 */
GEN_NOFRAME uint GEN_THISCALL F_00a72db0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa72db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7978));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  F_00a91f10((undefined4 *)((int)this + 4) GEN_EDX_FWD,0x10);
  return (uint)this;
}

/* ref: FUN_00a72de0 */
GEN_FRAME uint GEN_THISCALL F_00a72de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa72de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x920];
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
  
  (*(uint *)(gen_frame + 0x918)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x91c);
  F_00c48350(((uint *)(gen_frame + 0x18)),0,0x400);
  F_00c48350(((uint *)(gen_frame + 0x418)),0,0x400);
  F_00c48350(((undefined1 *)(gen_frame + 0x818)),0,0x100);
  if (*(int *)((int)this + 4) != *(int *)((int)this + 8)) {
    *(int *)((int)this + 8) = *(int *)((int)this + 4);
  }
  piVar3 = REFG(int * PTR32, 0x1379694);
  (*(uint *)(gen_frame + 0x10)) = 100;
  if ((REFG(int * PTR32, 0x1379694) != (int *)0x0) &&
     (uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0xd4))))(REFG(int * PTR32, 0x1379694) GEN_EDX_ARG), uVar8 != 0)) {
    uVar16 = 0x16c;
    pvVar9 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xd4))(piVar3 GEN_EDX_ARG)));
    bVar5 = F_00b7aac0(pvVar9 GEN_EDX_ARG,uVar16);
    if ((bVar5 != 0) &&
       (pvVar9 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xd4))(piVar3 GEN_EDX_ARG))), pvVar9 != (undefined *)0x0)) {
      uVar7 = F_00b7abd0(pvVar9 GEN_EDX_ARG,0x16c);
      (*(uint *)(gen_frame + 0x10)) = (uint)(ushort)(100 - uVar7);
    }
  }
  uVar8 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
  if (uVar8 != 0) {
    uVar8 = F_00ab2690(*(undefined4 *)(uVar8 + 0x14));
    if (uVar8 != 0) goto LAB_00a72f0a;
  }
  uVar8 = F_00ab2690(2);
LAB_00a72f0a: ;
  uVar13 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  uVar10 = F_00aafe10();
  if (uVar10 != 0) {
    do {
      uVar10 = F_00ab2690(uVar13);
      if (((uVar10 != 0) && (*(char *)(uVar10 + 0x35) != '\0')) &&
         (bVar5 = *(byte *)(uVar10 + 0x33), bVar5 != 0)) {
        iVar12 = (int)(short)(*(short *)(uVar10 + 0x2e) - *(short *)(uVar8 + 0x2e));
        iVar12 = iVar12 * iVar12;
        iVar11 = (int)(short)(*(short *)(uVar10 + 0x30) - *(short *)(uVar8 + 0x30));
        iVar11 = iVar11 * iVar11;
        (*(float *)(gen_frame + 0x14)) = gen_bits2f(iVar12);
        (*(float *)(gen_frame + 0x14)) = gen_bits2f(iVar11);
        fVar1 = (float)((float10)iVar12 + (float10)iVar11);
        (*(float *)(gen_frame + 0x14)) = fVar1;
        fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
        (*(float *)(gen_frame + 0x14)) = fVar1;
        (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x14)) + 2)) = gen_x87_cw;
        (*(float *)(gen_frame + 0x14)) = gen_bits2f(CONCAT22(gen_x87_cw,(short)(uint)gen_fl2bits(fVar1)));
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4)) + 4)) = gen_x87_cw | 0xc00;
        (*(longlong *)(gen_frame + 0x4)) = (longlong)TRUNC((double)fVar1 * REFG(double, 0x1088108));
        lVar4 = (*(longlong *)(gen_frame + 0x4));
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4)) + 0)) = (uint)(longlong)TRUNC((double)fVar1 * REFG(double, 0x1088108));
        uVar2 = *(undefined1 *)(uVar10 + 0x34);
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
    uVar8 = *(uint *)((int)((uint *)(gen_frame + 0x18)) + iVar11);
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
          uVar8 = *(uint *)((int)((uint *)(gen_frame + 0x418)) + iVar11);
          (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4)) + 0)) = uVar8;
        }
        else {
          uVar8 = *(uint *)((int)((uint *)(gen_frame + 0x418)) + iVar11) >> 1;
          (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4)) + 0)) = uVar8;
        }
        (*(undefined1 *)((char *)&(*(longlong *)(gen_frame + 0x4)) + 4)) = *puVar14;
        (*(longlong *)(gen_frame + 0x4)) = CONCAT35(CONCAT21(CONCAT11((*(undefined1 *)((char *)&(*(longlong *)(gen_frame + 0x4)) + 7)),1),cVar6),CONCAT14(*puVar14,uVar8));
        F_00a933f0((undefined *)((int)this + 4) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
      }
    }
    iVar11 = iVar11 + 4;
    puVar14 = puVar14 + 1;
    iVar12 = (*(uint *)(gen_frame + 0x10)) - 1;
    (*(uint *)(gen_frame + 0x10)) = iVar12;
    if (iVar12 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x918)) ^ (uint)(uint)(gen_frame + 0x91c) GEN_EDX_ARG);
      return (uint)(undefined *)((int)this + 4);
    }
  } while( true );
}

/* ref: FUN_00a73110 */
GEN_NOFRAME uint GEN_THISCALL F_00a73110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa73110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  F_0042b630((int)this + 0x14 GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  F_00a91df0((undefined *)((int)this + 4) GEN_EDX_ARG,0xc9);
  return (uint)this;
}

/* ref: FUN_00a73150 */
GEN_NOFRAME uint GEN_THISCALL F_00a73150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa73150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  if (*(int *)((int)this + 0x68) != 0) {
    uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_FWD,0x127);
    if (uVar3 != 0) {
      piVar4 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0x127);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x4c))(piVar4 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x68));
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x68);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x68) = 0;
    }
  }
  if (*(int *)((int)this + 0x6c) != 0) {
    uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0x127);
    if (uVar3 != 0) {
      piVar4 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0x127);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x4c))(piVar4 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x6c));
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x6c);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x6c) = 0;
    }
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  iVar2 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 4) != iVar2) {
    uVar3 = F_00a8e660(iVar2,iVar2,*(int *)((int)this + 4));
    *(uint *)((int)this + 8) = uVar3;
  }
  uVar3 = F_0042aca0((int)this + 0x14 GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x70) = 0;
  return uVar3;
}

