#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00a3a230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3a230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3a230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  if (param_1 - 2U < 0x12) {
    this_00 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,0x7d1)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_00a37da0(this_00 GEN_EDX_ARG,param_1 - 2);
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00a3a270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3a270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3a270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  if (param_1 - 2U < 0x12) {
    this_00 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,0x2ee1)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_00a37da0(this_00 GEN_EDX_ARG,param_1 - 2);
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00a3a2b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3a2b0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa3a2b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  undefined * pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar5 = 0;
  do {
    F_00ab24a0(iVar5 + 0x15da);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  if (param_3 != '\0') {
    iVar5 = 1;
    do {
      uVar2 = F_00ab21a0(iVar5);
      if (*((int *)GEN_TOP((uVar2 + 0x10))) == 0x21) {
        uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,iVar5,0);
        if (((short)uVar2 != 0) && ((REFG(undefined1, 0x14b4edf) & 0x80) != 0)) {
          F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x20,0,0);
          uVar2 = F_00a399f0(param_1 GEN_EDX_ARG,param_2);
          return uVar2;
        }
      }
      iVar5 = iVar5 + 1;
      if (0x1c < iVar5) {
        uVar2 = F_00a399f0(param_1 GEN_EDX_ARG,param_2);
        return uVar2;
      }
    } while( true );
  }
  bVar1 = F_00ab1d50(*(undefined4 *)&REFG(undefined2, 0x1379c78));
  iVar5 = REFG(int, 0x1379694);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    if (REFG(int, 0x1379694) != 0) {
      piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar2 = 0;
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        uVar7 = 0;
        uVar6 = 0x577;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG)));
        uVar2 = F_0046ac40(pvVar4 GEN_EDX_ARG,uVar6,iVar5,uVar7);
        return uVar2;
      }
    }
  }
  else {
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17);
    if (bVar1 == 0) {
      uVar2 = F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17);
      return uVar2;
    }
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar6 = 0x34;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG);
    piVar3 = ((int *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar6)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG);
    if ((char)uVar2 == '\0') {
      F_00a39960(param_1 GEN_EDX_ARG,param_2);
      uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17,1);
    }
    else {
      piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar2 = 0;
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        uVar6 = 0x1a0;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG)));
        uVar2 = F_0046a630(pvVar4 GEN_EDX_ARG,uVar6);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00a3a440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3a440(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa3a440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  undefined * pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar5 = 0;
  do {
    F_00ab24a0(iVar5 + 0x15da);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  if (param_2 != '\0') {
    iVar5 = 1;
    do {
      uVar2 = F_00ab21a0(iVar5);
      if (*((int *)GEN_TOP((uVar2 + 0x10))) == 0x21) {
        uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,iVar5,0);
        if (((short)uVar2 != 0) && ((REFG(undefined1, 0x14b4edf) & 0x80) != 0)) {
          F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x20,0,0);
          uVar2 = F_00a39b00(param_1 GEN_EDX_ARG,param_3);
          return uVar2;
        }
      }
      iVar5 = iVar5 + 1;
      if (0x1c < iVar5) {
        uVar2 = F_00a39b00(param_1 GEN_EDX_ARG,param_3);
        return uVar2;
      }
    } while( true );
  }
  bVar1 = F_00ab1d50(*(undefined4 *)&REFG(undefined2, 0x1379c78));
  iVar5 = REFG(int, 0x1379694);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    if (REFG(int, 0x1379694) != 0) {
      piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar2 = 0;
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        uVar7 = 0;
        uVar6 = 0x577;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG)));
        uVar2 = F_0046ac40(pvVar4 GEN_EDX_ARG,uVar6,iVar5,uVar7);
        return uVar2;
      }
    }
  }
  else {
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17);
    if (bVar1 == 0) {
      uVar2 = F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17);
      return uVar2;
    }
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar6 = 0x34;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG);
    piVar3 = ((int *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar6)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG);
    if ((char)uVar2 == '\0') {
      F_00a39a80(param_1 GEN_EDX_ARG,param_3);
      uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17,1);
    }
    else {
      piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar2 = 0;
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        uVar6 = 0x1a0;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG)));
        uVar2 = F_0046a630(pvVar4 GEN_EDX_ARG,uVar6);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00a3a5d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a3a5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3a5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  undefined * this_00;
  ushort uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  if (param_1 < 0x55f1) {
    if (param_1 == 22000) {
      uVar2 = 0x20;
    }
    else {
      switch((unsigned int)(uintptr_t)(param_1)) {
      case 20000: ;
        uVar2 = 1;
        break;
      case 0x4e21: ;
        uVar2 = 2;
        break;
      case 0x4e22: ;
        uVar2 = 4;
        break;
      case 0x4e23: ;
        uVar2 = 8;
        break;
      case 0x4e24: ;
        uVar2 = 0x10;
      }
    }
  }
  else if (param_1 == 0x55f1) {
    uVar2 = 0x40;
  }
  if ((*((ushort *)GEN_TOP(((int)this + 0x311c))) & uVar2) == 0) {
    if ((*((char *)GEN_TOP(((int)this + 0x311e))) == '\0') || (param_1 == 22000)) {
      if (((*((char *)GEN_TOP(((int)this + 0x3124))) == '\0') || (param_1 != 22000)) &&
         (*((char *)GEN_TOP(((int)this + 0x3088))) == '\0')) {
        F_00a51200(0x28,param_1,0,0,0);
        *((ushort *)GEN_TOP(((int)this + 0x311c))) = *((ushort *)GEN_TOP(((int)this + 0x311c))) | uVar2;
        if (param_1 != 22000) {
          *((undefined4 *)GEN_TOP(((int)this + 0x3120))) = *(undefined4 *)&REFG(undefined, 0x10e4a84);
          *((undefined1 *)GEN_TOP(((int)this + 0x311e))) = 1;
          if ((param_1 - 20000U < 0x7d2) && (uVar2 != 0)) {
            *((ushort *)GEN_TOP(((int)this + 0x311c))) = *((ushort *)GEN_TOP(((int)this + 0x311c))) | 0x20;
          }
          return 1;
        }
        *((undefined4 *)GEN_TOP(((int)this + 0x3128))) = *(undefined4 *)&REFG(undefined, 0x10e4a84);
        *((undefined1 *)GEN_TOP(((int)this + 0x3124))) = 1;
        return 1;
      }
    }
    else {
      piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar3 = 0x744;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
      F_0046a630(this_00 GEN_EDX_ARG,uVar3);
    }
  }
  return 0;
}

/* ref: FUN_00a3a720 */
GEN_OWN GEN_NOFRAME uint F_00a3a720(void)
{
  GEN_ENTER(0xa3a720u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG);
  *((byte *)GEN_TOP((uVar2 + 0x230bf))) = *((byte *)GEN_TOP((uVar2 + 0x230bf))) | 1;
  F_006d0fd0();
  uVar2 = F_00701020();
  return uVar2;
}

/* ref: FUN_00a3a750 */
GEN_OWN GEN_FRAME uint F_00a3a750(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa3a750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 0) {
    return 0x2c7;
  }
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x3e);
  if (bVar1 == 0) {
    return (-(uint)(REFG(int, 0x14a4258) != param_1 + 1000) & 0xfffffff5) + 0x2c4;
  }
  if (param_2 != 0xd) {
    return 0;
  }
  piVar2 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1 + 1000)));
  if (((piVar2 != ((int *)GEN_TOP(0x0))) && (iVar4 = *piVar2, iVar4 != 0)) && (0 < piVar2[3])) {
    if (*((char *)GEN_TOP((iVar4 + 6))) != '\0') {
      iVar5 = (int)*((short *)GEN_TOP((iVar4 + 8)));
      piVar2 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((iVar4 + 10))))));
      if (((*piVar2 == 0) || (iVar5 < 0)) || (piVar2[3] <= iVar5)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar2 + iVar5 * 0x40;
      }
    }
    if ((iVar4 != 0) && ((*((char *)GEN_TOP((iVar4 + 6))) != '\0' || (*((int *)GEN_TOP((iVar4 + 8))) != 0)))) {
      uVar3 = F_00a36f00(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0);
      if (uVar3 == 0) {
        return 0x2cc;
      }
      uVar3 = F_00ab21a0((uint)*((byte *)GEN_TOP((uVar3 + 0xa8))));
      if (*((char *)GEN_TOP((uVar3 + 0x45))) == '\0') {
        bVar1 = F_00a35cb0();
        if (bVar1 != 0) {
          return 0;
        }
        return 0x2da;
      }
      return 0x2b5;
    }
  }
  return 0x2c4;
}

/* ref: FUN_00a3a860 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a3a860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3a860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  
  if (*((char *)GEN_TOP(((int)this + 6))) != '\0') {
    this_00 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,(uint)*((ushort *)GEN_TOP(((int)this + 10))))));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar1 = F_00a37da0(this_00 GEN_EDX_ARG,(int)*((short *)GEN_TOP(((int)this + 8))));
    if (uVar1 != 0) {
      return uVar1;
    }
  }
  return (uint)this;
}

/* ref: FUN_00a3a8a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a3a8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3a8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*((char *)GEN_TOP(((int)this + 6))) == '\0') {
    return *((uint *)GEN_TOP(((int)this + 0xc)));
  }
  iVar4 = (int)*((short *)GEN_TOP(((int)this + 8)));
  pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,(uint)*((ushort *)GEN_TOP(((int)this + 10))))));
  pvVar1 = ((undefined *)GEN_TOP(F_00a37da0(pvVar1 GEN_EDX_ARG,iVar4)));
  uVar3 = *((uint *)GEN_TOP(((int)this + 0xc)));
  uVar2 = F_00a3a8a0(pvVar1 GEN_EDX_ARG);
  if (uVar2 < uVar3) {
    uVar3 = F_00a3a8a0(pvVar1 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a3a8f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3a8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa3a8f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)this == 0) {
    return 0;
  }
  if (param_2 < *((int *)GEN_TOP(((int)this + 0xc)))) {
    iVar7 = param_2 << 6;
    iVar2 = param_2;
    do {
      iVar8 = iVar7 + *(int *)this;
      if (*((int *)GEN_TOP((iVar8 + 8))) == param_1) {
        if (*((char *)GEN_TOP((iVar8 + 6))) == '\0') {
          uVar5 = *((uint *)GEN_TOP((iVar8 + 0xc)));
        }
        else {
          iVar6 = (int)*((short *)GEN_TOP((iVar8 + 8)));
          pvVar4 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,(uint)*((ushort *)GEN_TOP((iVar8 + 10))))));
          pvVar4 = ((undefined *)GEN_TOP(F_00a37da0(pvVar4 GEN_EDX_ARG,iVar6)));
          uVar5 = *((uint *)GEN_TOP((iVar8 + 0xc)));
          uVar1 = F_00a3a8a0(pvVar4 GEN_EDX_ARG);
          if (uVar1 < uVar5) {
            uVar5 = F_00a3a8a0(pvVar4 GEN_EDX_ARG);
            *((uint *)GEN_TOP((iVar8 + 0xc))) = uVar5;
          }
        }
        if (uVar5 != 0) {
          puVar3 = ((undefined4 *)GEN_TOP((iVar2 * 0x40 + *(int *)this)));
          if (*((char *)GEN_TOP(((int)puVar3 + 6))) == '\0') {
            return (uint)puVar3;
          }
          iVar2 = (int)*(short *)(puVar3 + 1);
          pvVar4 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*puVar3)));
          uVar5 = F_00a37da0(pvVar4 GEN_EDX_ARG,iVar2);
          return uVar5;
        }
      }
      iVar2 = iVar2 + 1;
      iVar7 = iVar7 + 0x40;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0xc))));
  }
  return 0;
}

/* ref: FUN_00a3a9d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a3a9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa3a9d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = (uint)(*(undefined * PTR32 *)&gen_args[0]);
  if (*(int *)this != 0) {
    this_00 = ((undefined *)GEN_TOP(F_00a3a8f0(this GEN_EDX_FWD,(*(undefined * PTR32 *)&gen_args[0]),0)));
    (*(undefined * PTR32 *)&gen_args[0]) = this_00;
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      bVar1 = F_00a363f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[0]));
      if (bVar1 != 0) {
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = uVar2;
        if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) == '\0') && ((uVar2 < 0x1e8481 || (0x1e8909 < uVar2)))) {
          if (uVar2 < 1000000) {
            *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) & 0xfe;
          }
          else {
            *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) | 1;
            *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = uVar2 - 1000000;
          }
        }
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(int *)&gen_args[1]);
        if ((((*(int *)&gen_args[1]) == 0) &&
            (*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0, *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) == '\0')) &&
           (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 1)) {
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
          return;
        }
      }
    }
    else {
      uVar2 = F_00a3a8a0(this_00 GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)this_00 + 0xc))) = uVar2 + (*(int *)&gen_args[1]);
      if (((uVar2 + (*(int *)&gen_args[1]) == 0) &&
          (*((undefined4 *)GEN_TOP(((int)this_00 + 0xc))) = 0, *((char *)GEN_TOP(((int)this_00 + 6))) == '\0')) &&
         (*((int *)GEN_TOP(((int)this_00 + 8))) != 1)) {
        *((undefined4 *)GEN_TOP(((int)this_00 + 8))) = 0;
      }
    }
  }
  return;
}

/* ref: FUN_00a3aa90 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a3aa90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa3aa90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  if ((*(int *)this != 0) &&
     ((this_00 = ((undefined *)GEN_TOP(F_00a37da0(this GEN_EDX_FWD,param_1))), *((char *)GEN_TOP(((int)this_00 + 6))) != '\0' ||
      (*((int *)GEN_TOP(((int)this_00 + 8))) != 0)))) {
    uVar1 = F_00a3a8a0(this_00 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this_00 + 0xc))) = uVar1 + param_2;
    if ((uVar1 + param_2 == 0) &&
       ((*((undefined4 *)GEN_TOP(((int)this_00 + 0xc))) = 0, *((char *)GEN_TOP(((int)this_00 + 6))) == '\0' &&
        (*((int *)GEN_TOP(((int)this_00 + 8))) != 1)))) {
      *((undefined4 *)GEN_TOP(((int)this_00 + 8))) = 0;
    }
  }
  return;
}

/* ref: FUN_00a3aae0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a3aae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa3aae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  if ((*(int *)this != 0) &&
     (this_00 = ((undefined *)GEN_TOP(F_00a3a8f0(this GEN_EDX_FWD,param_1,0))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
    uVar1 = F_00a3a8a0(this_00 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this_00 + 0xc))) = uVar1 - param_2;
    if ((uVar1 - param_2 == 0) &&
       ((*((undefined4 *)GEN_TOP(((int)this_00 + 0xc))) = 0, *((char *)GEN_TOP(((int)this_00 + 6))) == '\0' &&
        (*((int *)GEN_TOP(((int)this_00 + 8))) != 1)))) {
      *((undefined4 *)GEN_TOP(((int)this_00 + 8))) = 0;
    }
  }
  return;
}

/* ref: FUN_00a3ab30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a3ab30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa3ab30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  if ((*(int *)this != 0) &&
     ((this_00 = ((undefined *)GEN_TOP(F_00a37da0(this GEN_EDX_FWD,param_1))), *((char *)GEN_TOP(((int)this_00 + 6))) != '\0' ||
      (*((int *)GEN_TOP(((int)this_00 + 8))) != 0)))) {
    uVar1 = F_00a3a8a0(this_00 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this_00 + 0xc))) = uVar1 - param_2;
    if ((uVar1 - param_2 == 0) &&
       ((*((undefined4 *)GEN_TOP(((int)this_00 + 0xc))) = 0, *((char *)GEN_TOP(((int)this_00 + 6))) == '\0' &&
        (*((int *)GEN_TOP(((int)this_00 + 8))) != 1)))) {
      *((undefined4 *)GEN_TOP(((int)this_00 + 8))) = 0;
    }
  }
  return;
}

/* ref: FUN_00a3ab80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a3ab80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3ab80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a3a8f0(this GEN_EDX_FWD,param_1,0);
  return uVar1 != 0;
}

/* ref: FUN_00a3aba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3aba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3aba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  undefined * this_00;
  uint local_8;
  
  uVar1 = 0;
  local_8 = 0;
  uVar5 = 0;
  if (*((short *)GEN_TOP(((int)this + 0xc))) != 0) {
    do {
      if ((*(int *)this == 0) || (*((int *)GEN_TOP(((int)this + 0xc))) <= (int)(uint)uVar5)) {
        iVar2 = 0;
      }
      else {
        iVar2 = (uint)uVar5 * 0x40 + *(int *)this;
        if (*((char *)GEN_TOP((iVar2 + 6))) != '\0') {
          iVar6 = (int)*((short *)GEN_TOP((iVar2 + 8)));
          piVar3 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,(uint)*((ushort *)GEN_TOP((iVar2 + 10))))));
          if (((*piVar3 == 0) || (iVar6 < 0)) || (piVar3[3] <= iVar6)) {
            iVar2 = 0;
          }
          else {
            iVar2 = iVar6 * 0x40 + *piVar3;
          }
        }
      }
      if (*((char *)GEN_TOP((iVar2 + 6))) == '\0') {
        if (*((int *)GEN_TOP((iVar2 + 8))) != 0) {
          uVar1 = *((uint *)GEN_TOP((iVar2 + 0xc)));
          goto LAB_00a3acb6;
        }
      }
      else {
        piVar3 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((iVar2 + 10))))));
        iVar6 = (int)*((short *)GEN_TOP((iVar2 + 8)));
        if (((*piVar3 == 0) || (iVar6 < 0)) || (piVar3[3] <= iVar6)) {
          this_00 = ((undefined *)GEN_TOP(0x0));
        }
        else {
          this_00 = ((undefined *)GEN_TOP((iVar6 * 0x40 + *piVar3)));
          if (*((char *)GEN_TOP(((int)this_00 + 6))) != '\0') {
            iVar6 = (int)*((short *)GEN_TOP(((int)this_00 + 8)));
            piVar3 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this_00 + 10))))));
            if (((*piVar3 == 0) || (iVar6 < 0)) || (piVar3[3] <= iVar6)) {
              this_00 = ((undefined *)GEN_TOP(0x0));
            }
            else {
              this_00 = ((undefined *)GEN_TOP((iVar6 * 0x40 + *piVar3)));
            }
          }
        }
        uVar1 = *((uint *)GEN_TOP((iVar2 + 0xc)));
        uVar4 = F_00a3a8a0(this_00 GEN_EDX_ARG);
        if (uVar4 < uVar1) {
          uVar1 = F_00a3a8a0(this_00 GEN_EDX_ARG);
          *((uint *)GEN_TOP((iVar2 + 0xc))) = uVar1;
        }
LAB_00a3acb6: ;
        local_8 = local_8 + uVar1;
      }
      uVar5 = uVar5 + 1;
      uVar1 = local_8;
    } while (uVar5 < *((ushort *)GEN_TOP(((int)this + 0xc))));
  }
  return uVar1;
}

/* ref: FUN_00a3ace0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a3ace0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3ace0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  
  piVar1 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,2000)));
  if (((piVar1 != ((int *)GEN_TOP(0x0))) && (this_00 = ((undefined *)GEN_TOP(*piVar1)), this_00 != ((undefined *)GEN_TOP(0x0)))) &&
     (0 < piVar1[3])) {
    if (*((char *)GEN_TOP(((int)this_00 + 6))) != '\0') {
      iVar3 = (int)*((short *)GEN_TOP(((int)this_00 + 8)));
      piVar1 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this_00 + 10))))));
      if (((*piVar1 == 0) || (iVar3 < 0)) || (piVar1[3] <= iVar3)) {
        this_00 = ((undefined *)GEN_TOP(0x0));
      }
      else {
        this_00 = ((undefined *)GEN_TOP((*piVar1 + iVar3 * 0x40)));
      }
    }
    if ((this_00 != ((undefined *)GEN_TOP(0x0))) &&
       ((*((char *)GEN_TOP(((int)this_00 + 6))) != '\0' || (*((int *)GEN_TOP(((int)this_00 + 8))) != 0)))) {
      uVar2 = F_00a3a8a0(this_00 GEN_EDX_ARG);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00a3ad50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3ad50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa3ad50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_2 == '\x01') {
    uVar3 = 1;
  }
  else if (param_2 == '\x02') {
    uVar3 = 2;
  }
  else {
    if (param_2 != '\x03') {
      return 0;
    }
    uVar3 = 3;
  }
  pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(param_1 GEN_EDX_FWD,2000)));
  if (((pvVar1 != ((undefined *)GEN_TOP(0x0))) &&
      (pvVar1 = ((undefined *)GEN_TOP(F_00a37da0(pvVar1 GEN_EDX_ARG,uVar3))), pvVar1 != ((undefined *)GEN_TOP(0x0)))) &&
     ((*((char *)GEN_TOP(((int)pvVar1 + 6))) != '\0' || (*((int *)GEN_TOP(((int)pvVar1 + 8))) != 0)))) {
    uVar2 = F_00a3a8a0(pvVar1 GEN_EDX_ARG);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00a3adb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a3adb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3adb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,22000)));
  if ((((puVar1 != ((undefined4 *)GEN_TOP(0x0))) && (this_00 = ((undefined *)GEN_TOP(*puVar1)), this_00 != ((undefined *)GEN_TOP(0x0)))) &&
      (0 < (int)puVar1[3])) &&
     ((*((char *)GEN_TOP(((int)this_00 + 6))) != '\0' || (*((int *)GEN_TOP(((int)this_00 + 8))) != 0)))) {
    uVar2 = F_00a3a8a0(this_00 GEN_EDX_ARG);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00a3ade0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a3ade0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3ade0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,0x7d5)));
  if ((((piVar2 != ((int *)GEN_TOP(0x0))) && (iVar1 = *piVar2, iVar1 != 0)) && (5 < piVar2[3])) &&
     ((((undefined *)GEN_TOP((iVar1 + 0x140))) != ((undefined *)GEN_TOP(0x0)) &&
      ((*((char *)GEN_TOP((iVar1 + 0x146))) != '\0' || (*((int *)GEN_TOP((iVar1 + 0x148))) != 0)))))) {
    uVar3 = F_00a3a8a0(((undefined *)GEN_TOP((iVar1 + 0x140))) GEN_EDX_ARG);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00a3ae20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a3ae20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3ae20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,12000)));
  if ((((puVar1 != ((undefined4 *)GEN_TOP(0x0))) && (this_00 = ((undefined *)GEN_TOP(*puVar1)), this_00 != ((undefined *)GEN_TOP(0x0)))) &&
      (0 < (int)puVar1[3])) &&
     ((*((char *)GEN_TOP(((int)this_00 + 6))) != '\0' || (*((int *)GEN_TOP(((int)this_00 + 8))) != 0)))) {
    uVar2 = F_00a3a8a0(this_00 GEN_EDX_ARG);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00a3ae50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3ae50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3ae50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * this_00;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,12000)));
  if ((((puVar1 == ((undefined4 *)GEN_TOP(0x0))) || (this_00 = ((undefined *)GEN_TOP(*puVar1)), this_00 == ((undefined *)GEN_TOP(0x0)))) ||
      ((int)puVar1[3] < 1)) ||
     ((*((char *)GEN_TOP(((int)this_00 + 6))) == '\0' && (*((int *)GEN_TOP(((int)this_00 + 8))) == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00a3a8a0(this_00 GEN_EDX_ARG);
  }
  uVar3 = F_00a3ace0(this GEN_EDX_ARG);
  if (uVar2 + uVar3 < param_1) {
    return 8;
  }
  F_00a38b40(this GEN_EDX_ARG,param_1);
  return 0;
}

/* ref: FUN_00a3aec0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a3aec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3aec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*((char *)GEN_TOP(((int)this + 0x2f6))) == '\0') {
    return *((uint *)GEN_TOP(((int)this + 0x2fc)));
  }
  iVar4 = (int)*((short *)GEN_TOP(((int)this + 0x2f8)));
  pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,(uint)*((ushort *)GEN_TOP(((int)this + 0x2fa))))));
  pvVar1 = ((undefined *)GEN_TOP(F_00a37da0(pvVar1 GEN_EDX_ARG,iVar4)));
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x2fc)));
  uVar2 = F_00a3a8a0(pvVar1 GEN_EDX_ARG);
  if (uVar2 < uVar3) {
    uVar3 = F_00a3a8a0(pvVar1 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this + 0x2fc))) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a3af20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3af20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3af20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  int * this_00;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  undefined * this_01;
  int iVar5;
  undefined4 * puVar6;
  
  if ((ushort)param_1 < 5) {
    this_00 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,0x7d5)));
    if (this_00 != ((int *)GEN_TOP(0x0))) {
      iVar5 = (int)(short)(ushort)param_1;
      puVar2 = ((undefined4 *)GEN_TOP(F_00a37da0(this_00 GEN_EDX_ARG,iVar5)));
      puVar1 = ((undefined4 *)GEN_TOP((iVar5 * 0x40 + 0x30 + (int)this)));
      puVar6 = puVar1;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      if (((*this_00 == 0) || (iVar5 < 0)) || (this_00[3] <= iVar5)) {
        this_01 = ((undefined *)GEN_TOP(0x0));
      }
      else {
        this_01 = ((undefined *)GEN_TOP((*this_00 + iVar5 * 0x40)));
      }
      uVar3 = F_00a3a8a0(this_01 GEN_EDX_ARG);
      puVar1[3] = uVar3;
      if (((uVar3 == 0) && (puVar1[3] = 0, *((char *)GEN_TOP(((int)puVar1 + 6))) == '\0')) && (puVar1[2] != 1))
      {
        puVar1[2] = 0;
      }
      return (uint)puVar1;
    }
  }
  return 0;
}

/* ref: FUN_00a3afd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3afd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa3afd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  uint uVar2;
  
  if ((param_1 != 0x7d6) && (param_3 != 0x7d6)) {
    return 3;
  }
  this_00 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,param_1)));
  this_01 = ((undefined *)GEN_TOP(F_00a36f30((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,param_3)));
  if ((this_00 != ((undefined *)GEN_TOP(0x0))) && (this_01 != ((undefined *)GEN_TOP(0x0)))) {
    uVar1 = F_00a37da0(this_00 GEN_EDX_ARG,(int)(short)param_2);
    if (uVar1 != 0) {
      uVar2 = F_00a37da0(this_01 GEN_EDX_ARG,(int)(short)param_4);
      if ((uVar2 != 0) && ((*((char *)GEN_TOP((uVar1 + 6))) != '\0' || (*((int *)GEN_TOP((uVar1 + 8))) != 0)))) {
        F_00a38ce0(this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
        return 0;
      }
    }
    return 4;
  }
  return 3;
}

/* ref: FUN_00a3b080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3b080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3b080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  uVar1 = F_00a3ace0(this GEN_EDX_FWD);
  if (uVar1 < param_1) {
    return 8;
  }
  piVar2 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d5)));
  if ((*piVar2 == 0) || (piVar2[3] < 6)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2 + 0x140;
  }
  *((uint *)GEN_TOP((iVar3 + 0xc))) = param_1;
  if (((param_1 == 0) && (*((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0, *((char *)GEN_TOP((iVar3 + 6))) == '\0')) &&
     (*((int *)GEN_TOP((iVar3 + 8))) != 1)) {
    *((undefined4 *)GEN_TOP((iVar3 + 8))) = 0;
  }
  F_00a38e20(this GEN_EDX_ARG,param_1);
  return 0;
}

/* ref: FUN_00a3b0f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a3b0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3b0f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined4 *)GEN_TOP(((int)this + 0x334))) = 4;
  *((undefined1 *)GEN_TOP(((int)this + 0x35c))) = 1;
  F_00a38eb0(this GEN_EDX_FWD);
  return 0;
}

/* ref: FUN_00a3b110 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a3b110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3b110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((char *)GEN_TOP(((int)this + 0x35e))) == '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 0x35e))) = 1;
    F_00a38f30(this GEN_EDX_FWD);
  }
  return 0;
}

/* ref: FUN_00a3b140 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a3b140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3b140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  
  F_00a39030(this GEN_EDX_FWD);
  uVar1 = F_00a64490(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(int)this + 0x33c,0);
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar4 = 0;
  uVar3 = 0x21;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
  F_0046ac40(this_00 GEN_EDX_ARG,uVar3,uVar4,uVar1);
  return 0;
}

/* ref: FUN_00a3b190 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00a3b190(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa3b190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  
  iVar1 = REFG(int, 0x1379694);
  bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,7);
  if (bVar2 == 0) {
    F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,7);
    return 0;
  }
  if (*((char *)GEN_TOP((iVar1 + 0x188))) == '\a') {
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar6 = 0x22;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG);
    pvVar5 = ((undefined *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar6)));
    F_008e9cb0(pvVar5 GEN_EDX_ARG);
    uVar6 = 0x23;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG);
    pvVar5 = ((undefined *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar6)));
    F_008edf60(pvVar5 GEN_EDX_ARG);
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar6 = 0x1a0;
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG)));
      F_0046a630(pvVar5 GEN_EDX_ARG,uVar6);
    }
    return 0;
  }
  F_00a51200(0x2b,param_1,0,0,0);
  return 1;
}

/* ref: FUN_00a3b250 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a3b250(GEN_P(char param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa3b250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  int * piVar1;
  undefined * this;
  undefined4 uVar2;
  
  if (param_1 == '\0') {
    if ((REFG(int, 0x1379694) != 0) && (*((char *)GEN_TOP((REFG(int, 0x1379694) + 0x188))) == '\a')) {
      F_00aa2900(REFG(int, 0x1379694) GEN_EDX_ARG,0);
    }
    piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar2 = 0x4c3;
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
    F_0046a630(this GEN_EDX_ARG,uVar2);
    F_00a51200(0x36,0,0,0,0);
  }
  return;
}

/* ref: FUN_00a3b2b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3b2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa3b2b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if ((param_1 == ((int *)GEN_TOP(0x0))) || (param_2 == 0)) {
    return 4;
  }
  bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_FWD,7);
  if (bVar2 == 0) {
    F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,7);
    F_00a369d0();
    return 0x1f;
  }
  if (REFG(char, 0x14a7367) == '\0') {
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar6 = 0x191;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG)));
    F_0046a630(pvVar4 GEN_EDX_ARG,uVar6);
    F_00a369d0();
    return 0x1f;
  }
  iVar1 = *param_1;
  if ((iVar1 != 1000) && (iVar1 != 11000)) {
    bVar2 = F_00a36750(iVar1);
    if ((bVar2 == 0) && ((iVar1 < 0 || (3 < iVar1)))) {
      return 3;
    }
  }
  piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar6 = 0x34;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG);
  piVar3 = ((int *)GEN_TOP(F_00763050(uVar5 GEN_EDX_ARG,uVar6)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG);
  if ((char)uVar5 != '\0') {
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar6 = 0x1a0;
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG)));
      F_0046a630(pvVar4 GEN_EDX_ARG,uVar6);
    }
    return 0x1f;
  }
  *((int * PTR32 *)GEN_TOP(((int)this + 0x2488))) = param_1;
  *((int *)GEN_TOP(((int)this + 0x248c))) = param_2;
  F_00a51200(0x2c,0,0,0,0);
  return 0;
}

/* ref: FUN_00a3b400 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a3b400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3b400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if ((*((char *)GEN_TOP(((int)this + 0x3114))) == '\0') && (*((int *)GEN_TOP(((int)this + 0x2488))) != 0)) {
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_FWD,7);
    if ((bVar1 == 0) || (REFG(char, 0x14a7367) == '\0')) {
      F_00a369d0();
      return;
    }
    F_00a39610(this GEN_EDX_ARG,**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x2488))),
                 (uint)*((ushort *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x2488))) + 1))),
                 **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x248c))),
                 (uint)*((ushort *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x248c))) + 1))),
                 *((undefined4 *)GEN_TOP((REFG(int, 0x1379694) + 0x74))));
  }
  return;
}

/* ref: FUN_00a3b470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3b470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xa3b470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  if (((((param_1 != 1000) && (param_1 != 11000)) && (param_1 != 0xdac)) &&
      ((9 < param_1 - 0xc80U && (param_1 != 0xce4)))) &&
     ((param_1 != 0xd48 && ((param_1 < 0 || (3 < param_1)))))) {
    return 3;
  }
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  uVar3 = 0x34;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar3)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar3 = 0x1a0;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
      F_0046a630(this_00 GEN_EDX_ARG,uVar3);
    }
    return 0x1f;
  }
  F_00a39610(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
  return 0;
}

/* ref: FUN_00a3b540 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3b540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa3b540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,param_1)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 3;
  }
  uVar1 = F_00a37da0(this_00 GEN_EDX_ARG,(int)(short)param_2);
  if ((*((char *)GEN_TOP((uVar1 + 6))) == '\0') && (*((int *)GEN_TOP((uVar1 + 8))) == 0)) {
    return 4;
  }
  F_00a39780(this GEN_EDX_ARG,param_1,param_2);
  return 0;
}

/* ref: FUN_00a3b5a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3b5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3b5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  short sVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x2340))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2344))) = 0;
  puVar6 = ((undefined4 *)GEN_TOP(((int)this + 0x2340)));
  puVar7 = ((undefined4 *)GEN_TOP(((int)this + 0x2348)));
  for (iVar5 = 0x26; iVar2 = param_1, iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  for (; iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 0x54)))) {
    if ((*((int *)GEN_TOP((iVar2 + 8))) == 0x1ad) && (sVar1 = *((short *)GEN_TOP((iVar2 + 0x18))), sVar1 < 0x14)) {
      *((undefined4 *)GEN_TOP(((int)this + sVar1 * 8 + 0x2340))) = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
      *((undefined4 *)GEN_TOP(((int)this + sVar1 * 8 + 0x2344))) = *((undefined4 *)GEN_TOP((iVar2 + 0x24)));
    }
  }
  piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG);
  *((byte *)GEN_TOP((uVar4 + 0x230bf))) = *((byte *)GEN_TOP((uVar4 + 0x230bf))) | 1;
  F_006d0fd0();
  uVar4 = F_00701020();
  return uVar4;
}

/* ref: FUN_00a3b630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3b630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3b630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  F_00a36850(this GEN_EDX_FWD);
  for (iVar1 = param_1; iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x54)))) {
    if (*((int *)GEN_TOP((iVar1 + 8))) == 0x1ab) {
      uVar3 = (uint)*((byte *)GEN_TOP((iVar1 + 0x20)));
      *((undefined4 *)GEN_TOP(((int)this + (uVar3 + 0x99) * 0x38))) = *((undefined4 *)GEN_TOP((iVar1 + 0x18)));
      *((undefined4 *)GEN_TOP(((int)this + (uVar3 + 0x99) * 0x38 + 4))) = *((undefined4 *)GEN_TOP((iVar1 + 0x1c)));
      *((undefined4 *)GEN_TOP(((int)this + uVar3 * 0x38 + 0x2180))) = *((undefined4 *)GEN_TOP((iVar1 + 0x24)));
      *((bool *)GEN_TOP(((int)this + uVar3 * 0x38 + 0x2184))) = *((char *)GEN_TOP((iVar1 + 0x28))) != '\0';
      *((undefined1 *)GEN_TOP(((int)this + uVar3 * 0x38 + 0x2185))) = *((undefined1 *)GEN_TOP((iVar1 + 0x29)));
      *((undefined2 *)GEN_TOP(((int)this + uVar3 * 0x38 + 0x2186))) = *((undefined2 *)GEN_TOP((iVar1 + 0x2a)));
      *((undefined4 *)GEN_TOP(((int)this + uVar3 * 0x38 + 0x2188))) = *((undefined4 *)GEN_TOP((iVar1 + 0x2c)));
      F_00c49908((int)this + uVar3 * 0x38 + 0x218c,0x20,iVar1 + 0x30);
    }
  }
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG);
  *((byte *)GEN_TOP((uVar3 + 0x230bf))) = *((byte *)GEN_TOP((uVar3 + 0x230bf))) | 1;
  F_006d0fd0();
  uVar3 = F_00701020();
  return uVar3;
}

/* ref: FUN_00a3b700 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a3b700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3b700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  int * piVar2;
  uint in_ecx;
  undefined4 uVar3;
  
  pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,0x7d2)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00a36310(pvVar1 GEN_EDX_ARG);
  }
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar3 = 0x1b;
  in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x48))))(piVar2 GEN_EDX_ARG);
  pvVar1 = ((undefined *)GEN_TOP(F_00763050(in_ecx GEN_EDX_ARG,uVar3)));
  F_00777710(pvVar1 GEN_EDX_ARG);
  return;
}

/* ref: FUN_00a3b740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3b740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3b740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (param_1 - 2U < 0x12) {
    uVar2 = F_00ab24a0(param_1);
    if (uVar2 != 0) {
      iVar1 = *((int *)GEN_TOP((uVar2 + 0x28)));
      pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d1)));
      if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
        pvVar3 = ((undefined *)GEN_TOP(F_00a37da0(pvVar3 GEN_EDX_ARG,param_1 - 2)));
        if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
          uVar2 = F_00a3a8a0(pvVar3 GEN_EDX_ARG);
          return iVar1 - uVar2;
        }
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00a3b7b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3b7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3b7b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (param_1 - 2U < 0x12) {
    uVar2 = F_00ab24a0(param_1);
    if (uVar2 != 0) {
      iVar1 = *((int *)GEN_TOP((uVar2 + 0x28)));
      pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x2ee1)));
      if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
        pvVar3 = ((undefined *)GEN_TOP(F_00a37da0(pvVar3 GEN_EDX_ARG,param_1 - 2)));
        if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
          uVar2 = F_00a3a8a0(pvVar3 GEN_EDX_ARG);
          return iVar1 - uVar2;
        }
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00a3b820 */
GEN_OWN GEN_FRAME uint F_00a3b820(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa3b820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x98, 8, 4);
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined * pvVar4;
  undefined * this;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  ((uint *)(gen_frame + 0x0))[0x24] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x94);
  ((uint *)(gen_frame + 0x0))[2] = 0x4b;
  ((uint *)(gen_frame + 0x0))[0xb] = 0x4b;
  ((uint *)(gen_frame + 0x0))[0x14] = 0x4b;
  ((uint *)(gen_frame + 0x0))[5] = 0x3c;
  ((uint *)(gen_frame + 0x0))[0xe] = 0x3c;
  ((uint *)(gen_frame + 0x0))[0x16] = 0x3c;
  ((uint *)(gen_frame + 0x0))[0x1e] = 0x3c;
  ((uint *)(gen_frame + 0x0))[0] = 100;
  ((uint *)(gen_frame + 0x0))[1] = 0x50;
  ((uint *)(gen_frame + 0x0))[3] = 0x46;
  ((uint *)(gen_frame + 0x0))[4] = 0x41;
  ((uint *)(gen_frame + 0x0))[6] = 0x37;
  ((uint *)(gen_frame + 0x0))[7] = 10;
  ((uint *)(gen_frame + 0x0))[8] = 0;
  ((uint *)(gen_frame + 0x0))[9] = 100;
  ((uint *)(gen_frame + 0x0))[10] = 0x50;
  ((uint *)(gen_frame + 0x0))[0xc] = 0x46;
  ((uint *)(gen_frame + 0x0))[0xd] = 0x41;
  ((uint *)(gen_frame + 0x0))[0xf] = 0x32;
  ((uint *)(gen_frame + 0x0))[0x10] = 10;
  ((uint *)(gen_frame + 0x0))[0x11] = 0;
  ((uint *)(gen_frame + 0x0))[0x12] = 100;
  ((uint *)(gen_frame + 0x0))[0x13] = 0x50;
  ((uint *)(gen_frame + 0x0))[0x15] = 0x46;
  ((uint *)(gen_frame + 0x0))[0x17] = 0x32;
  ((uint *)(gen_frame + 0x0))[0x18] = 0x28;
  ((uint *)(gen_frame + 0x0))[0x19] = 10;
  ((uint *)(gen_frame + 0x0))[0x1a] = 0;
  ((uint *)(gen_frame + 0x0))[0x1b] = 100;
  ((uint *)(gen_frame + 0x0))[0x1c] = 0x50;
  ((uint *)(gen_frame + 0x0))[0x1d] = 0x46;
  ((uint *)(gen_frame + 0x0))[0x1f] = 0x32;
  ((uint *)(gen_frame + 0x0))[0x20] = 0x28;
  ((uint *)(gen_frame + 0x0))[0x21] = 0x1e;
  ((uint *)(gen_frame + 0x0))[0x22] = 10;
  ((uint *)(gen_frame + 0x0))[0x23] = 0;
  pvVar4 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1)));
  if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
    this = ((undefined *)GEN_TOP(F_00a37da0(pvVar4 GEN_EDX_ARG,param_2)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      uVar3 = F_00906d60(this GEN_EDX_ARG);
      if (uVar3 == 0) {
        return 0;
      }
      pvVar4 = ((undefined *)GEN_TOP(F_00a37da0(pvVar4 GEN_EDX_ARG,0)));
      uVar5 = F_0046e5e0(pvVar4 GEN_EDX_ARG);
      uVar5 = F_00ab24a0(uVar5);
      if (uVar5 != 0) {
        bVar1 = *((byte *)GEN_TOP((uVar5 + 0xa8)));
        uVar5 = F_0046e5e0(this GEN_EDX_ARG);
        uVar5 = F_00ab24a0(uVar5);
        if (uVar5 != 0) {
          bVar2 = *((byte *)GEN_TOP((uVar5 + 0x9f)));
          if (bVar2 < 0x33) {
            if (bVar2 < 0x1f) {
              uVar8 = (uint)(10 < bVar2);
            }
            else {
              uVar8 = 2;
            }
          }
          else {
            uVar8 = 3;
          }
          uVar6 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)bVar1,1);
          iVar7 = (uint)*((byte *)GEN_TOP((uVar5 + 0x9f))) - (uVar6 & 0xffff);
          if (iVar7 < 7) {
            if (iVar7 < 0) {
              iVar7 = 0;
            }
          }
          else {
            iVar7 = 7;
          }
          return ((uint *)(gen_frame + 0x0))[(int)(iVar7 + uVar8 * 9)];
        }
      }
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00a3ba20 */
GEN_OWN GEN_FRAME uint F_00a3ba20(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa3ba20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint * puVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  int iVar9;
  undefined * this;
  undefined * this_00;
  short * psVar10;
  int iVar11;
  int iVar12;
  uint local_c;
  uint local_8;
  
  if (param_2 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar4 = F_0046e5e0(param_2 GEN_EDX_ARG);
  uVar4 = F_00ab24a0(uVar4);
  if (uVar4 == 0) {
    return 0xffffffff;
  }
  local_8 = 0;
  if (param_1 == 0xc) {
    local_8 = (uint)*((ushort *)GEN_TOP((uVar4 + 0x80)));
  }
  else if (param_1 == 0xd) {
    local_8 = (uint)*((ushort *)GEN_TOP((uVar4 + 0x82)));
  }
  else if (param_1 == 0x15) {
    local_8 = (uint)*((ushort *)GEN_TOP((uVar4 + 0x8a)));
  }
  else if (param_1 == 0xe) {
    local_8 = (uint)*((ushort *)GEN_TOP((uVar4 + 0x84)));
  }
  else if (param_1 == 0x11) {
    local_8 = (uint)*((ushort *)GEN_TOP((uVar4 + 0x86)));
  }
  else if (param_1 == 0x12) {
    local_8 = (uint)*((ushort *)GEN_TOP((uVar4 + 0x88)));
  }
  else if (param_1 == 0x18) {
    local_8 = (uint)*((ushort *)GEN_TOP((uVar4 + 0x8c)));
  }
  psVar10 = ((short *)GEN_TOP((uVar4 + 0x92)));
  puVar5 = ((uint *)GEN_TOP((uVar4 + 0x44)));
  iVar11 = 6;
  do {
    if (*puVar5 == param_1) {
      local_8 = local_8 + (int)*psVar10;
    }
    puVar5 = puVar5 + 1;
    psVar10 = psVar10 + 1;
    iVar11 = iVar11 - 1;
  } while (iVar11 != 0);
  uVar6 = F_0046e5e0(param_2 GEN_EDX_ARG);
  uVar7 = F_00ab24a0(uVar6);
  if (((uVar7 != 0) && (*((char *)GEN_TOP((uVar7 + 0xa7))) == '\x01')) && (uVar6 - 0xf4241 < 999999)) {
    puVar5 = ((uint *)GEN_TOP((uVar4 + 0x5c)));
    iVar11 = 0;
    do {
      if (*puVar5 == param_1) {
        local_8 = local_8 + (int)*((char *)GEN_TOP((iVar11 + 0xb1 + uVar4)));
      }
      iVar11 = iVar11 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar11 < 6);
  }
  if (param_3 == '\x01') {
    uVar4 = F_00a6ad20(param_1,uVar4);
    local_c = 0;
    do {
      uVar3 = F_0071d2c0(param_2 GEN_EDX_ARG,local_c);
      if (*((char *)GEN_TOP(((int)param_2 + 6))) == '\0') {
LAB_00a3bc31: ;
        bVar2 = *((byte *)GEN_TOP(((local_c & 0xff) + 0x2a + (int)param_2)));
      }
      else {
        uVar1 = *((ushort *)GEN_TOP(((int)param_2 + 10)));
        piVar8 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)uVar1)));
        if (piVar8 == ((int *)GEN_TOP(0x0))) goto LAB_00a3bc31;
        iVar11 = (int)*((short *)GEN_TOP(((int)param_2 + 8)));
        if (((*piVar8 == 0) || (iVar11 < 0)) || (piVar8[3] <= iVar11)) {
LAB_00a3bbf9: ;
          if (param_2 == ((undefined *)GEN_TOP(0x0))) goto LAB_00a3bc31;
        }
        else {
          iVar9 = iVar11 * 0x40 + *piVar8;
          if (*((char *)GEN_TOP((iVar9 + 6))) != '\0') {
            iVar12 = (int)*((short *)GEN_TOP((iVar9 + 8)));
            piVar8 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((iVar9 + 10))))));
            if (((*piVar8 == 0) || (iVar12 < 0)) || (piVar8[3] <= iVar12)) {
              iVar9 = 0;
            }
            else {
              iVar9 = iVar12 * 0x40 + *piVar8;
            }
          }
          if (iVar9 == 0) goto LAB_00a3bbf9;
        }
        this = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)uVar1)));
        this_00 = ((undefined *)GEN_TOP(0x0));
        if ((this != ((undefined *)GEN_TOP(0x0))) &&
           (this_00 = ((undefined *)GEN_TOP(F_00a37da0(this GEN_EDX_ARG,iVar11))), this_00 == ((undefined *)GEN_TOP(0x0)))) {
          this_00 = param_2;
        }
        bVar2 = F_0071d300(this_00 GEN_EDX_ARG,local_c);
      }
      if ((((uVar3 != 0) && (uVar6 = F_00ab20e0((uint)uVar3), uVar6 != 0)) &&
          (*((byte *)GEN_TOP((uVar6 + 0x28))) == param_1)) && (bVar2 < 10)) {
        iVar11 = (int)*((char *)GEN_TOP((bVar2 + 0x29 + uVar6)));
        if (((int)uVar4 < (int)(iVar11 + local_8)) && (iVar11 = uVar4 - local_8, iVar11 < 0)) {
          iVar11 = 0;
        }
        local_8 = local_8 + iVar11;
      }
      local_c = local_c + 1;
    } while ((int)local_c < 5);
  }
  return local_8;
}

/* ref: FUN_00a3bca0 */
GEN_OWN GEN_FRAME uint F_00a3bca0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa3bca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  piVar1 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_2)));
  if (((*piVar1 != 0) && (-1 < param_3)) && (param_3 < piVar1[3])) {
    iVar2 = param_3 * 0x40 + *piVar1;
    if (*((char *)GEN_TOP((iVar2 + 6))) == '\0') goto LAB_00a3bcff;
    iVar5 = (int)*((short *)GEN_TOP((iVar2 + 8)));
    piVar1 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((iVar2 + 10))))));
    if (((*piVar1 != 0) && (-1 < iVar5)) && (iVar5 < piVar1[3])) {
      iVar2 = *piVar1 + iVar5 * 0x40;
      goto LAB_00a3bcff;
    }
  }
  iVar2 = 0;
LAB_00a3bcff: ;
  uVar3 = F_00a3ba20(param_1,iVar2,1);
  if ((param_4 != '\0') && ((param_1 == 0xc || (param_1 == 0x15)))) {
    uVar4 = F_00a3b820(param_2,param_3);
    if (uVar4 == 0xffffffff) {
      return 0xffffffff;
    }
    uVar3 = (int)(uVar4 * uVar3) / 100;
  }
  return uVar3;
}

/* ref: FUN_00a3bd60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3bd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3bd60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar3 = F_0046e5e0(param_1 GEN_EDX_FWD);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar3;
  if ((*((char *)GEN_TOP(((int)this + 6))) == '\0') && ((uVar3 < 0x1e8481 || (0x1e8909 < uVar3)))) {
    if (uVar3 < 1000000) {
      *((byte *)GEN_TOP(((int)this + 0x14))) = *((byte *)GEN_TOP(((int)this + 0x14))) & 0xfe;
    }
    else {
      *((byte *)GEN_TOP(((int)this + 0x14))) = *((byte *)GEN_TOP(((int)this + 0x14))) | 1;
      *((uint *)GEN_TOP(((int)this + 8))) = uVar3 - 1000000;
    }
  }
  if (*((char *)GEN_TOP(((int)param_1 + 6))) == '\0') {
    uVar3 = *((uint *)GEN_TOP(((int)param_1 + 0xc)));
  }
  else {
    iVar6 = (int)*((short *)GEN_TOP(((int)param_1 + 8)));
    pvVar4 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)param_1 + 10))))));
    pvVar4 = ((undefined *)GEN_TOP(F_00a37da0(pvVar4 GEN_EDX_ARG,iVar6)));
    uVar3 = *((uint *)GEN_TOP(((int)param_1 + 0xc)));
    uVar5 = F_00a3a8a0(pvVar4 GEN_EDX_ARG);
    if (uVar5 < uVar3) {
      uVar3 = F_00a3a8a0(pvVar4 GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)param_1 + 0xc))) = uVar3;
    }
  }
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar3;
  uVar7 = F_00906d30(param_1 GEN_EDX_ARG);
  *((ulonglong *)GEN_TOP(((int)this + 0x18))) = uVar7;
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x14)));
  uVar2 = F_00906d60(param_1 GEN_EDX_ARG);
  *((ushort *)GEN_TOP(((int)this + 0x12))) = uVar2;
  uVar2 = F_0071d210(param_1 GEN_EDX_ARG);
  *((ushort *)GEN_TOP(((int)this + 0x10))) = uVar2;
  bVar1 = F_0046e590(param_1 GEN_EDX_ARG);
  *((byte *)GEN_TOP(((int)this + 0x2f))) = bVar1;
  uVar3 = F_00a4a5a0(param_1 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x30))) = uVar3;
  *((undefined1 *)GEN_TOP(((int)this + 6))) = *((undefined1 *)GEN_TOP(((int)param_1 + 6)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *((undefined4 *)GEN_TOP(((int)param_1 + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = *((undefined4 *)GEN_TOP(((int)param_1 + 0x24)));
  *((undefined2 *)GEN_TOP(((int)this + 0x28))) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x28)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2a))) = *((undefined4 *)GEN_TOP(((int)param_1 + 0x2a)));
  *((undefined1 *)GEN_TOP(((int)this + 0x2e))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x2e)));
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = *((undefined4 *)GEN_TOP(((int)param_1 + 0x34)));
  bVar1 = *((byte *)GEN_TOP(((int)param_1 + 0x38)));
  *((byte *)GEN_TOP(((int)this + 0x38))) = bVar1;
  return (uint)bVar1;
}

/* ref: FUN_00a3be70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3be70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa3be70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ushort uVar1;
  short sVar2;
  undefined * this_00;
  uint uVar3;
  undefined * pvVar4;
  
  *((uint *)GEN_TOP(((int)this + 8))) = CONCAT22((undefined2)param_1,(undefined2)param_2);
  uVar1 = *((ushort *)GEN_TOP(((int)this + 10)));
  *((undefined1 *)GEN_TOP(((int)this + 6))) = 1;
  this_00 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,(uint)uVar1)));
  pvVar4 = ((undefined *)GEN_TOP(0x0));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    sVar2 = *((short *)GEN_TOP(((int)this + 8)));
    uVar3 = F_00a37da0(this_00 GEN_EDX_ARG,(int)sVar2);
    if ((uVar3 != 0) || (pvVar4 = this, this != ((undefined *)GEN_TOP(0x0)))) {
      pvVar4 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)uVar1)));
      if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
        *((undefined1 *)GEN_TOP(((int)this + 0x14))) = REFG(uint, 0x00000014);
        return 0;
      }
      pvVar4 = ((undefined *)GEN_TOP(F_00a37da0(pvVar4 GEN_EDX_ARG,(int)sVar2)));
      if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
        pvVar4 = this;
      }
      *((undefined1 *)GEN_TOP(((int)this + 0x14))) = *((undefined1 *)GEN_TOP(((int)pvVar4 + 0x14)));
    }
  }
  return (uint)pvVar4;
}

/* ref: FUN_00a3bef0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a3bef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3bef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  short sVar1;
  ushort uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint local_c;
  byte local_5;
  
  local_5 = 0;
  local_c = 0;
  do {
    if (*((char *)GEN_TOP(((int)this + 6))) == '\0') {
LAB_00a3bf72: ;
      uVar2 = *((ushort *)GEN_TOP(((int)this + (local_c & 0xff) * 2 + 0x20)));
    }
    else {
      uVar2 = *((ushort *)GEN_TOP(((int)this + 10)));
      pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,(uint)uVar2)));
      if (pvVar3 == ((undefined *)GEN_TOP(0x0))) goto LAB_00a3bf72;
      sVar1 = *((short *)GEN_TOP(((int)this + 8)));
      uVar4 = F_00a37da0(pvVar3 GEN_EDX_ARG,(int)sVar1);
      if ((uVar4 == 0) && (this == ((undefined *)GEN_TOP(0x0)))) goto LAB_00a3bf72;
      pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)uVar2)));
      if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
        uVar2 = F_0071d2c0(((undefined *)GEN_TOP(0x0)) GEN_EDX_ARG,local_c);
      }
      else {
        pvVar3 = ((undefined *)GEN_TOP(F_00a37da0(pvVar3 GEN_EDX_ARG,(int)sVar1)));
        if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
          pvVar3 = this;
        }
        uVar2 = F_0071d2c0(pvVar3 GEN_EDX_ARG,local_c);
      }
    }
    if (uVar2 != 0) {
      local_5 = local_5 + 1;
    }
    local_c = local_c + 1;
    if (4 < (int)local_c) {
      return local_5;
    }
  } while( true );
}

/* ref: FUN_00a3bfa0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a3bfa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa3bfa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  if (*(int *)this == 0) {
    return;
  }
  this_00 = ((undefined *)GEN_TOP(F_00a37da0(this GEN_EDX_FWD,param_3)));
  if ((*((char *)GEN_TOP(((int)this_00 + 6))) == '\0') && (*((int *)GEN_TOP(((int)this_00 + 8))) == 0)) {
    *((uint *)GEN_TOP(((int)this_00 + 8))) = param_1;
    if ((param_1 < 0x1e8481) || (0x1e8909 < param_1)) {
      if (param_1 < 1000000) {
        *((byte *)GEN_TOP(((int)this_00 + 0x14))) = *((byte *)GEN_TOP(((int)this_00 + 0x14))) & 0xfe;
      }
      else {
        *((byte *)GEN_TOP(((int)this_00 + 0x14))) = *((byte *)GEN_TOP(((int)this_00 + 0x14))) | 1;
        *((uint *)GEN_TOP(((int)this_00 + 8))) = param_1 - 1000000;
      }
    }
    *((int *)GEN_TOP(((int)this_00 + 0xc))) = param_2;
    if (param_2 != 0) {
      return;
    }
    iVar1 = *((int *)GEN_TOP(((int)this_00 + 8)));
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xc))) = 0;
  }
  else {
    uVar2 = F_0046e5e0(this_00 GEN_EDX_ARG);
    if (uVar2 != param_1) {
      return;
    }
    uVar2 = F_00a3a8a0(this_00 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this_00 + 0xc))) = uVar2 + param_2;
    if (uVar2 + param_2 != 0) {
      return;
    }
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xc))) = 0;
    if (*((char *)GEN_TOP(((int)this_00 + 6))) != '\0') {
      return;
    }
    iVar1 = *((int *)GEN_TOP(((int)this_00 + 8)));
  }
  if (iVar1 != 1) {
    *((undefined4 *)GEN_TOP(((int)this_00 + 8))) = 0;
  }
  return;
}

/* ref: FUN_00a3c040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3c040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa3c040u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = F_00ab24a0(param_1);
  if ((uVar2 == 0) || (param_1 == 0)) {
    return 0;
  }
  uVar2 = *((uint *)GEN_TOP((uVar2 + 0x28)));
  uVar1 = (ushort)param_3;
  if ((ushort)param_3 < *((ushort *)GEN_TOP(((int)this + 0xc)))) {
    do {
      this_00 = ((undefined *)GEN_TOP(((uint)uVar1 * 0x40 + *(int *)this)));
      uVar3 = F_0046e5e0(this_00 GEN_EDX_ARG);
      if (uVar3 == param_1) {
        if (*((char *)GEN_TOP(((int)this_00 + 6))) == '\0') {
          uVar3 = *((uint *)GEN_TOP(((int)this_00 + 0xc)));
        }
        else {
          iVar6 = (int)*((short *)GEN_TOP(((int)this_00 + 8)));
          pvVar4 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this_00 + 10))))));
          pvVar4 = ((undefined *)GEN_TOP(F_00a37da0(pvVar4 GEN_EDX_ARG,iVar6)));
          uVar3 = *((uint *)GEN_TOP(((int)this_00 + 0xc)));
          uVar5 = F_00a3a8a0(pvVar4 GEN_EDX_ARG);
          if (uVar5 < uVar3) {
            uVar3 = F_00a3a8a0(pvVar4 GEN_EDX_ARG);
            *((uint *)GEN_TOP(((int)this_00 + 0xc))) = uVar3;
          }
        }
        if ((uVar3 + param_2 != 0) &&
           (uVar3 = F_00a3a8a0(((undefined *)GEN_TOP((*(int *)this + (uint)uVar1 * 0x40))) GEN_EDX_ARG), uVar3 < uVar2)) {
          return (uint)uVar1 * 0x40 + *(int *)this;
        }
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *((ushort *)GEN_TOP(((int)this + 0xc))));
  }
  return 0;
}

/* ref: Client::Game::Item::AskToTradeCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3c130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa3c130u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  if ((0 < param_3) && (((*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)))) {
    F_00a38c60(&REFG(undefined, 0x14a4230) GEN_EDX_FWD);
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
    return (uint)param_1;
  }
  if (REFG(char, 0x14a458e) == '\0') {
    REFG(char, 0x14a458e) = '\x01';
    F_00a38f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::Game::Item::ConfirmationCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3c190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa3c190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((0 < param_3) && (((*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)))) {
    F_00a39030(&REFG(undefined, 0x14a4230) GEN_EDX_FWD);
    uVar1 = F_00a64490(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,&REFG(undefined, 0x14a456c),0);
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar4 = 0;
    uVar3 = 0x21;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
    F_0046ac40(this_00 GEN_EDX_ARG,uVar3,uVar4,uVar1);
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return (uint)param_1;
  }
  if (((1 < REFG(int, 0x14a4564)) || (REFG(char, 0x14a7375) == '\x01')) && (REFG(char, 0x14a458e) == '\0')) {
    REFG(char, 0x14a458e) = '\x01';
    F_00a38f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_00a3c240 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3c240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3c240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  
  if (3 < param_1 - 0x17) {
    return 0;
  }
  pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,2000)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = ((undefined *)GEN_TOP(F_00a37da0(pvVar1 GEN_EDX_ARG,(uint)(byte)(((byte)param_1 & 1) + 5))));
    if ((pvVar1 != ((undefined *)GEN_TOP(0x0))) &&
       ((*((char *)GEN_TOP(((int)pvVar1 + 6))) != '\0' || (*((int *)GEN_TOP(((int)pvVar1 + 8))) != 0)))) {
      uVar2 = F_00906df0(pvVar1 GEN_EDX_ARG);
      if (uVar2 == param_1) {
        uVar2 = F_00a3a8a0(pvVar1 GEN_EDX_ARG);
        return uVar2;
      }
    }
  }
  return 0;
}

/* ref: FUN_00a3c2b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3c2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3c2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  
  if ((((param_1 - 0x17 < 4) && ((param_1 & 1) == 0)) &&
      (piVar2 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,2000))), piVar2 != ((int *)GEN_TOP(0x0)))) &&
     ((iVar1 = *piVar2, iVar1 != 0 && (5 < piVar2[3])))) {
    this_00 = ((undefined *)GEN_TOP((iVar1 + 0x140)));
    if (*((char *)GEN_TOP((iVar1 + 0x146))) != '\0') {
      iVar4 = (int)*((short *)GEN_TOP((iVar1 + 0x148)));
      piVar2 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((iVar1 + 0x14a))))));
      if (((*piVar2 == 0) || (iVar4 < 0)) || (piVar2[3] <= iVar4)) {
        this_00 = ((undefined *)GEN_TOP(0x0));
      }
      else {
        this_00 = ((undefined *)GEN_TOP((*piVar2 + iVar4 * 0x40)));
      }
    }
    if ((this_00 != ((undefined *)GEN_TOP(0x0))) &&
       (((*((char *)GEN_TOP(((int)this_00 + 6))) == '\0' && (*((int *)GEN_TOP(((int)this_00 + 8))) == 0)) ||
        (uVar3 = F_00906df0(this_00 GEN_EDX_ARG), uVar3 == param_1)))) {
      return *((uint *)GEN_TOP(((int)this + 0x3118)));
    }
  }
  return 0;
}

/* ref: FUN_00a3c360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3c360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3c360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  int * piVar4;
  undefined * pvVar5;
  uint uVar6;
  int * this_00;
  int * piVar7;
  uint3 uVar8;
  undefined4 uVar9;
  
  if (*((char *)GEN_TOP(((int)this + 0x3088))) != '\0') {
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    uVar9 = 0x745;
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
    uVar6 = F_0046a630(pvVar5 GEN_EDX_ARG,uVar9);
    return uVar6;
  }
  pvVar5 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,2000)));
  piVar4 = ((int *)GEN_TOP(F_00a36f30((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,22000)));
  if ((pvVar5 != ((undefined *)GEN_TOP(0x0))) && (piVar4 != ((int *)GEN_TOP(0x0)))) {
    this_00 = ((int *)GEN_TOP(F_00a37da0(pvVar5 GEN_EDX_ARG,0)));
    piVar7 = ((int *)GEN_TOP(F_00a37da0(piVar4 GEN_EDX_ARG,0)));
    piVar4 = piVar7;
    if ((this_00 != ((int *)GEN_TOP(0x0))) && (piVar7 != ((int *)GEN_TOP(0x0)))) {
      piVar4 = ((int *)GEN_TOP(F_0071d3a0(this_00 GEN_EDX_ARG)));
      if ((char)piVar4 == '\0') {
        piVar4 = ((int *)GEN_TOP(F_00a3a8a0(this_00 GEN_EDX_ARG)));
        if ((param_1 <= piVar4) && (param_1 != ((int *)GEN_TOP(0x0)))) {
          if ((*((char *)GEN_TOP(((int)this + 0x3086))) != '\0') && (*((char *)GEN_TOP(((int)this + 0x3087))) != '\0')) {
            bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x6e);
            if (bVar2 == 0) {
              F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x6e);
              uVar6 = F_00a51200(0x2a,22000,0,0,0);
              return uVar6;
            }
            uVar6 = F_00a51200(0x38,param_1,0,0,0);
            return uVar6;
          }
          F_00a51200(0x29,*this_00,*piVar7,0,0);
          *((undefined4 *)GEN_TOP(((int)this + 0x308c))) = 4;
          F_00a3bd60(((undefined *)GEN_TOP(((int)this + 0x3000))) GEN_EDX_ARG,this_00);
          *((int *)GEN_TOP(((int)this + 0x3000))) = *this_00;
          *((short *)GEN_TOP(((int)this + 0x3004))) = (short)this_00[1];
          F_00a3bd60(((undefined *)GEN_TOP(((int)this + 0x3040))) GEN_EDX_ARG,piVar7);
          *((int *)GEN_TOP(((int)this + 0x3040))) = *piVar7;
          *((short *)GEN_TOP(((int)this + 0x3044))) = (short)piVar7[1];
          *((int * PTR32 *)GEN_TOP(((int)this + 0x3080))) = param_1;
          if ((*this_00 < 20000) || (0x55f1 < *this_00)) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
          *((undefined1 *)GEN_TOP(((int)this + 0x3084))) = uVar3;
          iVar1 = *piVar7;
          uVar8 = (uint3)((uint)iVar1 >> 8);
          if ((iVar1 < 20000) || (0x55f1 < iVar1)) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
          *((undefined1 *)GEN_TOP(((int)this + 0x3085))) = uVar3;
          if ((*this_00 < 20000) || (0x55f1 < *this_00)) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
          *((undefined1 *)GEN_TOP(((int)this + 0x3086))) = uVar3;
          if ((19999 < *piVar7) && (*piVar7 < 0x55f2)) {
            *((undefined1 *)GEN_TOP(((int)this + 0x3087))) = 0;
            *((undefined1 *)GEN_TOP(((int)this + 0x3088))) = 1;
            return (uint)uVar8 << 8;
          }
          piVar4 = ((int *)GEN_TOP(CONCAT31(uVar8,1)));
          *((undefined1 *)GEN_TOP(((int)this + 0x3087))) = 1;
          *((undefined1 *)GEN_TOP(((int)this + 0x3088))) = 1;
        }
      }
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_00a3c570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3c570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3c570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  int * piVar4;
  undefined * pvVar5;
  uint uVar6;
  int * this_00;
  int * piVar7;
  uint3 uVar8;
  undefined4 uVar9;
  
  if (*((char *)GEN_TOP(((int)this + 0x3088))) != '\0') {
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    uVar9 = 0x745;
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
    uVar6 = F_0046a630(pvVar5 GEN_EDX_ARG,uVar9);
    return uVar6;
  }
  pvVar5 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,22000)));
  piVar4 = ((int *)GEN_TOP(F_00a36f30((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,2000)));
  if ((pvVar5 != ((undefined *)GEN_TOP(0x0))) && (piVar4 != ((int *)GEN_TOP(0x0)))) {
    this_00 = ((int *)GEN_TOP(F_00a37da0(pvVar5 GEN_EDX_ARG,0)));
    piVar7 = ((int *)GEN_TOP(F_00a37da0(piVar4 GEN_EDX_ARG,0)));
    piVar4 = piVar7;
    if ((this_00 != ((int *)GEN_TOP(0x0))) && (piVar7 != ((int *)GEN_TOP(0x0)))) {
      piVar4 = ((int *)GEN_TOP(F_0071d3a0(this_00 GEN_EDX_ARG)));
      if ((char)piVar4 == '\0') {
        piVar4 = ((int *)GEN_TOP(F_00a3a8a0(this_00 GEN_EDX_ARG)));
        if ((param_1 <= piVar4) && (param_1 != ((int *)GEN_TOP(0x0)))) {
          if ((*((char *)GEN_TOP(((int)this + 0x3086))) != '\0') && (*((char *)GEN_TOP(((int)this + 0x3087))) != '\0')) {
            bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x6e);
            if (bVar2 == 0) {
              F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x6e);
              uVar6 = F_00a51200(0x2a,22000,0,0,0);
              return uVar6;
            }
            uVar6 = F_00a51200(0x39,param_1,0,0,0);
            return uVar6;
          }
          F_00a51200(0x29,*this_00,*piVar7,0,0);
          *((undefined4 *)GEN_TOP(((int)this + 0x308c))) = 5;
          F_00a3bd60(((undefined *)GEN_TOP(((int)this + 0x3000))) GEN_EDX_ARG,this_00);
          *((int *)GEN_TOP(((int)this + 0x3000))) = *this_00;
          *((short *)GEN_TOP(((int)this + 0x3004))) = (short)this_00[1];
          F_00a3bd60(((undefined *)GEN_TOP(((int)this + 0x3040))) GEN_EDX_ARG,piVar7);
          *((int *)GEN_TOP(((int)this + 0x3040))) = *piVar7;
          *((short *)GEN_TOP(((int)this + 0x3044))) = (short)piVar7[1];
          *((int * PTR32 *)GEN_TOP(((int)this + 0x3080))) = param_1;
          if ((*this_00 < 20000) || (0x55f1 < *this_00)) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
          *((undefined1 *)GEN_TOP(((int)this + 0x3084))) = uVar3;
          iVar1 = *piVar7;
          uVar8 = (uint3)((uint)iVar1 >> 8);
          if ((iVar1 < 20000) || (0x55f1 < iVar1)) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
          *((undefined1 *)GEN_TOP(((int)this + 0x3085))) = uVar3;
          if ((*this_00 < 20000) || (0x55f1 < *this_00)) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
          *((undefined1 *)GEN_TOP(((int)this + 0x3086))) = uVar3;
          if ((19999 < *piVar7) && (*piVar7 < 0x55f2)) {
            *((undefined1 *)GEN_TOP(((int)this + 0x3087))) = 0;
            *((undefined1 *)GEN_TOP(((int)this + 0x3088))) = 1;
            return (uint)uVar8 << 8;
          }
          piVar4 = ((int *)GEN_TOP(CONCAT31(uVar8,1)));
          *((undefined1 *)GEN_TOP(((int)this + 0x3087))) = 1;
          *((undefined1 *)GEN_TOP(((int)this + 0x3088))) = 1;
        }
      }
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_00a3c780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3c780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3c780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 4;
  if (*((int *)GEN_TOP(((int)this + 0x334))) < 4) {
    if (3 < *((int *)GEN_TOP(((int)this + 0x338)))) {
      F_00a38fb0(this GEN_EDX_FWD);
    }
    uVar1 = F_00a3b080(this GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00a3c7b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3c7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa3c7b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = (ushort)param_1 + 1000;
  if ((ushort)param_1 == 10000) {
    uVar1 = 11000;
  }
  else {
    if (uVar1 < 1000) {
      return 0;
    }
    if ((1000 < uVar1) && (uVar1 != 11000)) {
      return 0;
    }
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,uVar1)));
  if ((pvVar2 != ((undefined *)GEN_TOP(0x0))) &&
     (pvVar2 = ((undefined *)GEN_TOP(F_00a37da0(pvVar2 GEN_EDX_ARG,(int)(short)param_2))), pvVar2 != ((undefined *)GEN_TOP(0x0)))) {
    uVar1 = F_0046e5e0(pvVar2 GEN_EDX_ARG);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00a3c810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3c810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa3c810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,param_1 & 0xffff)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = ((undefined *)GEN_TOP(F_00a37da0(pvVar1 GEN_EDX_ARG,(int)(short)param_2)));
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_0046e5e0(pvVar1 GEN_EDX_ARG);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00a3c850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3c850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3c850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined * pvVar2;
  ushort uVar3;
  
  uVar3 = *((short *)GEN_TOP(((int)this + 0x28))) - 1000;
  uVar1 = uVar3 + 1000;
  if (uVar3 == 10000) {
    uVar1 = 11000;
  }
  else {
    if (uVar1 < 1000) {
      return 0;
    }
    if ((1000 < uVar1) && (uVar1 != 11000)) {
      return 0;
    }
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,uVar1)));
  if ((pvVar2 != ((undefined *)GEN_TOP(0x0))) &&
     (pvVar2 = ((undefined *)GEN_TOP(F_00a37da0(pvVar2 GEN_EDX_ARG,(int)(short)param_1))), pvVar2 != ((undefined *)GEN_TOP(0x0)))) {
    uVar1 = F_0046e5e0(pvVar2 GEN_EDX_ARG);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00a3c8c0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00a3c8c0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa3c8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  ushort uVar1;
  uint uVar2;
  
  if (param_1 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar2 = param_2;
  if (param_2 == 0) {
    uVar2 = F_0046e5e0(param_1 GEN_EDX_ARG);
    uVar2 = F_00ab24a0(uVar2);
    if (uVar2 == 0) {
      return 0;
    }
  }
  if ((*((char *)GEN_TOP((uVar2 + 0xbf))) == '\0') && (uVar1 = F_0071d210(param_1 GEN_EDX_ARG), uVar1 == 0)) {
    if ((*((int *)GEN_TOP((uVar2 + 0x74))) != 0) && (uVar1 = F_00906d60(param_1 GEN_EDX_ARG), uVar1 < 30000)) {
      return 0;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00a3c930 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00a3c930(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa3c930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = param_2;
    if (param_2 == 0) {
      uVar1 = F_0046e5e0(param_1 GEN_EDX_ARG);
      uVar1 = F_00ab24a0(uVar1);
      if (uVar1 == 0) {
        return 0;
      }
    }
    if (*((char *)GEN_TOP((uVar1 + 0xbd))) == '\0') {
      return *((char *)GEN_TOP((uVar1 + 0xae))) != '\0';
    }
  }
  return 0;
}

/* ref: FUN_00a3c970 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a3c970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3c970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  int * piVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte local_5;
  
  piVar1 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,0x7d5)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  local_5 = 0;
  if (*param_1 == 0) {
    return 1;
  }
  do {
    iVar6 = *piVar1;
    uVar8 = (uint)local_5;
    if ((iVar6 == 0) || (piVar1[3] <= (int)uVar8)) {
      iVar7 = 0;
    }
    else {
      iVar7 = uVar8 * 0x40 + iVar6;
    }
    if ((iVar6 == 0) || (piVar1[3] <= (int)uVar8)) {
LAB_00a3ca18: ;
      this_00 = ((undefined *)GEN_TOP(0x0));
    }
    else {
      this_00 = ((undefined *)GEN_TOP((uVar8 * 0x40 + iVar6)));
      if (*((char *)GEN_TOP(((int)this_00 + 6))) != '\0') {
        iVar6 = (int)*((short *)GEN_TOP(((int)this_00 + 8)));
        piVar2 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this_00 + 10))))));
        if (((*piVar2 == 0) || (iVar6 < 0)) || (piVar2[3] <= iVar6)) goto LAB_00a3ca18;
        this_00 = ((undefined *)GEN_TOP((iVar6 * 0x40 + *piVar2)));
      }
    }
    if (iVar7 == 0) {
      return 0;
    }
    uVar3 = F_00906df0(this_00 GEN_EDX_ARG);
    if (uVar3 != *(uint *)(param_1 + uVar8 * 0x74 + 4)) {
      return 0;
    }
    if (*((char *)GEN_TOP(((int)this_00 + 6))) == '\0') {
      uVar3 = *((uint *)GEN_TOP(((int)this_00 + 0xc)));
    }
    else {
      iVar6 = (int)*((short *)GEN_TOP(((int)this_00 + 8)));
      pvVar4 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this_00 + 10))))));
      pvVar4 = ((undefined *)GEN_TOP(F_00a37da0(pvVar4 GEN_EDX_ARG,iVar6)));
      uVar3 = *((uint *)GEN_TOP(((int)this_00 + 0xc)));
      uVar5 = F_00a3a8a0(pvVar4 GEN_EDX_ARG);
      if (uVar5 < uVar3) {
        uVar3 = F_00a3a8a0(pvVar4 GEN_EDX_ARG);
        *((uint *)GEN_TOP(((int)this_00 + 0xc))) = uVar3;
      }
    }
    if (uVar3 < *(uint *)(param_1 + uVar8 * 0x74 + 8)) {
      return 0;
    }
    if ((param_1[uVar8 * 0x74 + 100] != 0) && ((*((byte *)GEN_TOP(((int)this_00 + 0x14))) & 1) == 0)) {
      return 0;
    }
    local_5 = local_5 + 1;
    if (*param_1 <= local_5) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00a3cac0 */
GEN_OWN_GS GEN_FRAME byte GEN_STDCALL F_00a3cac0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa3cac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x26c, 4, 4);
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort * puVar9;
  char * pcVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x264)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x268));
  uVar5 = F_00b9f960(&REFG(undefined, 0x14b0f2c) GEN_EDX_ARG);
  F_009222f0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar5);
  iVar7 = (int)(short)param_2;
  iVar6 = 0;
  iVar8 = iVar7 * 0x74;
  ((char *)(gen_frame + 0x25c))[0] = '\0';
  ((char *)(gen_frame + 0x25c))[1] = '\0';
  ((char *)(gen_frame + 0x25c))[2] = '\0';
  ((char *)(gen_frame + 0x25c))[3] = '\0';
  ((char *)(gen_frame + 0x25c))[4] = '\0';
  (*(byte *)(gen_frame + 0xb)) = 0;
  uVar5 = F_00906df0(param_1 GEN_EDX_ARG);
  if ((((uint *)(gen_frame + 0x10))[(int)(iVar7 * 0x1d)] == uVar5) &&
     (uVar5 = F_00a3a8a0(param_1 GEN_EDX_ARG), ((uint *)(gen_frame + 0x10))[(int)(iVar7 * 0x1d + 1)] <= uVar5)) {
    if ((((char *)(gen_frame + 0x70))[(int)(iVar8)] == '\0') || ((*((byte *)GEN_TOP(((int)param_1 + 0x14))) & 1) != 0)) {
      bVar1 = ((byte *)(gen_frame + 0x81))[(int)(iVar8)];
      (*(byte * PTR32 *)(gen_frame + 0x0)) = ((byte *)(gen_frame + 0x7c)) + iVar8;
      puVar9 = (ushort *)(((char *)(gen_frame + 0x70)) + iVar8 + 2);
      ((char *)(gen_frame + 0x254))[0] = '\0';
      ((char *)(gen_frame + 0x254))[1] = '\0';
      ((char *)(gen_frame + 0x254))[2] = '\0';
      ((char *)(gen_frame + 0x254))[3] = '\0';
      ((char *)(gen_frame + 0x254))[4] = '\0';
      do {
        ((char *)(gen_frame + 0x25c))[(int)(iVar6)] = '\0';
        if ((bVar1 != 0) && (uVar3 = F_0071d2c0(param_1 GEN_EDX_ARG,iVar6), uVar3 != 0)) {
          (*(byte *)(gen_frame + 0xb)) = (*(byte *)(gen_frame + 0xb)) + 1;
        }
        uVar3 = *puVar9;
        if (uVar3 == 0) {
          ((char *)(gen_frame + 0x25c))[(int)(iVar6)] = '\x01';
        }
        else {
          iVar7 = 0;
          do {
            if (((((char *)(gen_frame + 0x254))[(int)(iVar7)] == '\0') && (uVar4 = F_0071d2c0(param_1 GEN_EDX_ARG,iVar7), uVar3 == uVar4))
               && (bVar2 = F_0071d300(param_1 GEN_EDX_ARG,iVar7), *(*(byte * PTR32 *)(gen_frame + 0x0)) == bVar2)) {
              ((char *)(gen_frame + 0x25c))[(int)(iVar6)] = '\x01';
              ((char *)(gen_frame + 0x254))[(int)(iVar7)] = '\x01';
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 5);
          if (((char *)(gen_frame + 0x25c))[(int)(iVar6)] == '\0') break;
        }
        (*(byte * PTR32 *)(gen_frame + 0x0)) = (*(byte * PTR32 *)(gen_frame + 0x0)) + 1;
        iVar6 = iVar6 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar6 < 5);
      if ((bVar1 == 0) || (bVar1 <= (*(byte *)(gen_frame + 0xb)))) {
        iVar6 = 0;
        do {
          if (((char *)(gen_frame + 0x25c))[(int)(iVar6)] == '\0') {
            iVar6 = 4;
            pcVar10 = ((char *)(gen_frame + 0x25c)) + 4;
            do {
              pcVar10 = pcVar10 - 0x74;
              F_0042c880(pcVar10 GEN_EDX_ARG);
              iVar6 = iVar6 - 1;
            } while (-1 < iVar6);
            return 0;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 5);
        uVar5 = F_00a37c50(param_1 GEN_EDX_ARG);
        if ((uVar5 == 0) || (*((short *)GEN_TOP((uVar5 + 4))) == (short)param_2)) {
          iVar6 = 4;
          pcVar10 = ((char *)(gen_frame + 0x25c)) + 4;
          do {
            pcVar10 = pcVar10 - 0x74;
            F_0042c880(pcVar10 GEN_EDX_ARG);
            iVar6 = iVar6 - 1;
          } while (-1 < iVar6);
          return 1;
        }
        iVar6 = 4;
        pcVar10 = ((char *)(gen_frame + 0x25c)) + 4;
        do {
          pcVar10 = pcVar10 - 0x74;
          F_0042c880(pcVar10 GEN_EDX_ARG);
          iVar6 = iVar6 - 1;
        } while (-1 < iVar6);
      }
      else {
        iVar6 = 4;
        pcVar10 = ((char *)(gen_frame + 0x25c)) + 4;
        do {
          pcVar10 = pcVar10 - 0x74;
          F_0042c880(pcVar10 GEN_EDX_ARG);
          iVar6 = iVar6 - 1;
        } while (-1 < iVar6);
      }
    }
    else {
      F_00720090(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    }
  }
  else {
    iVar6 = 4;
    pcVar10 = ((char *)(gen_frame + 0x25c)) + 4;
    do {
      pcVar10 = pcVar10 - 0x74;
      F_0042c880(pcVar10 GEN_EDX_ARG);
      iVar6 = iVar6 - 1;
    } while (-1 < iVar6);
  }
  return 0;
}

/* ref: FUN_00a3cd20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3cd20(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa3cd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  ushort uVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  undefined4 uVar8;
  
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  iVar7 = (int)(short)param_4;
  piVar3 = ((int *)GEN_TOP(F_00a36f30(param_1 GEN_EDX_ARG,param_3)));
  if (((*piVar3 == 0) || (iVar7 < 0)) || (piVar3[3] <= iVar7)) {
    pvVar6 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    pvVar6 = ((undefined *)GEN_TOP((*piVar3 + iVar7 * 0x40)));
  }
  uVar4 = F_0046e5e0(param_2 GEN_EDX_ARG);
  if ((0x488 < uVar4 - 0x1e8481) && (param_3 != 0x7d7)) {
    uVar4 = F_0046e5e0(param_2 GEN_EDX_ARG);
    uVar4 = F_00ab24a0(uVar4);
    if ((uVar4 == 0) || (uVar5 = F_00906df0(param_2 GEN_EDX_ARG), uVar5 == 0)) {
      return 6;
    }
    if ((2 < *((int *)GEN_TOP(((int)param_1 + 0x334)))) || (param_3 == 0x7d2)) {
      if ((*((char *)GEN_TOP((uVar4 + 0xbf))) != '\0') || (uVar1 = F_0071d210(param_2 GEN_EDX_ARG), uVar1 != 0)) {
        uVar8 = 0x1f;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
        F_0046a630(pvVar6 GEN_EDX_ARG,uVar8);
        return 0x1c;
      }
      if ((*((int *)GEN_TOP((uVar4 + 0x74))) != 0) && (uVar1 = F_00906d60(param_2 GEN_EDX_ARG), uVar1 < 30000)) {
        uVar8 = 0x29;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
        F_0046a630(pvVar6 GEN_EDX_ARG,uVar8);
        return 0x1d;
      }
    }
  }
  if ((*((char *)GEN_TOP(((int)pvVar6 + 6))) == '\0') && (uVar4 = F_00a37c50(param_2 GEN_EDX_ARG), uVar4 == 0)) {
    F_00a3be70(pvVar6 GEN_EDX_ARG,*param_2,(uint)*(ushort *)(param_2 + 1));
    *((undefined4 *)GEN_TOP(((int)pvVar6 + 0xc))) = 1;
    if ((param_5 != '\0') &&
       (((uVar4 = F_0046e5e0(param_2 GEN_EDX_ARG), 0x488 < uVar4 - 0x1e8481 && (param_3 != 0x7d2)) &&
        (param_3 != 0x7d7)))) {
      uVar1 = *(ushort *)(param_2 + 1);
      uVar8 = *param_2;
      uVar4 = F_00a3a8a0(param_2 GEN_EDX_ARG);
      F_00a38890(param_1 GEN_EDX_ARG,uVar8,(uint)uVar1,param_3,param_4,uVar4);
    }
    return 0;
  }
  return 0x13;
}

/* ref: FUN_00a3ced0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3ced0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa3ced0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  ushort uVar1;
  undefined4 uVar2;
  int * piVar3;
  undefined * this_00;
  undefined4 * this_01;
  uint uVar4;
  undefined * this_03;
  int iVar5;
  
  if ((param_1 == 0x7d5) && (3 < *((int *)GEN_TOP(((int)this + 0x334))))) {
    return 0x13;
  }
  iVar5 = (int)(short)param_2;
  piVar3 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,param_1)));
  if ((*piVar3 == 0) || ((iVar5 < 0 || (piVar3[3] <= iVar5)))) {
    this_03 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    this_03 = ((undefined *)GEN_TOP((iVar5 * 0x40 + *piVar3)));
  }
  this_00 = ((undefined *)GEN_TOP(F_00a36f30((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,param_1)));
  this_01 = ((undefined4 *)GEN_TOP(F_00a37da0(this_00 GEN_EDX_ARG,iVar5)));
  if ((char)param_3 != '\0') {
    uVar4 = F_0046e5e0(this_01 GEN_EDX_ARG);
    if (((uVar4 < 0x1e8481) && (param_1 != 0x7d2)) && (param_1 != 0x7d7)) {
      uVar1 = *(ushort *)(this_01 + 1);
      uVar2 = *this_01;
      uVar4 = F_00a3a8a0(this_03 GEN_EDX_ARG);
      F_00a38890(this GEN_EDX_ARG,param_1,param_2,uVar2,(uint)uVar1,uVar4);
    }
  }
  *((undefined4 *)GEN_TOP(((int)this_03 + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this_03 + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this_03 + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this_03 + 0x1c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this_03 + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this_03 + 0x10))) = 0x75300000;
  *((undefined1 *)GEN_TOP(((int)this_03 + 0x2f))) = 0;
  *((undefined4 *)GEN_TOP(((int)this_03 + 0x30))) = 0;
  *((undefined1 *)GEN_TOP(((int)this_03 + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this_03 + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this_03 + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this_03 + 0x24))) = 0;
  *((undefined2 *)GEN_TOP(((int)this_03 + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this_03 + 0x2a))) = 0;
  *((undefined1 *)GEN_TOP(((int)this_03 + 0x2e))) = 0;
  *((undefined4 *)GEN_TOP(((int)this_03 + 0x34))) = 0;
  *((undefined1 *)GEN_TOP(((int)this_03 + 0x38))) = 0;
  piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG);
  *((byte *)GEN_TOP((uVar4 + 0x230bf))) = *((byte *)GEN_TOP((uVar4 + 0x230bf))) | 1;
  F_006d0fd0();
  F_00701020();
  return 0;
}

/* ref: FUN_00a3cff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3cff0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa3cff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this;
  int iVar5;
  undefined * local_c;
  undefined * local_8;
  
  iVar5 = (int)(short)param_3;
  piVar1 = ((int *)GEN_TOP(F_00a36f30(param_1 GEN_EDX_FWD,param_2)));
  if (((*piVar1 == 0) || (iVar5 < 0)) || (piVar1[3] <= iVar5)) {
    this = ((undefined *)GEN_TOP(0x0));
  }
  else {
    this = ((undefined *)GEN_TOP((iVar5 * 0x40 + *piVar1)));
  }
  piVar1 = ((int *)GEN_TOP(F_00a36f30(param_1 GEN_EDX_ARG,param_2)));
  if (((*piVar1 == 0) || (iVar5 < 0)) || (piVar1[3] <= iVar5)) {
    local_c = ((undefined *)GEN_TOP(0x0));
  }
  else {
    local_c = ((undefined *)GEN_TOP((iVar5 * 0x40 + *piVar1)));
    if (*((char *)GEN_TOP(((int)local_c + 6))) != '\0') {
      iVar5 = (int)*((short *)GEN_TOP(((int)local_c + 8)));
      piVar1 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)local_c + 10))))));
      if (((*piVar1 == 0) || (iVar5 < 0)) || (piVar1[3] <= iVar5)) {
        local_c = ((undefined *)GEN_TOP(0x0));
      }
      else {
        local_c = ((undefined *)GEN_TOP((iVar5 * 0x40 + *piVar1)));
      }
    }
  }
  iVar5 = (int)(short)param_5;
  piVar1 = ((int *)GEN_TOP(F_00a36f30(param_1 GEN_EDX_ARG,param_4)));
  if (((*piVar1 == 0) || (iVar5 < 0)) || (piVar1[3] <= iVar5)) {
    local_8 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    local_8 = ((undefined *)GEN_TOP((iVar5 * 0x40 + *piVar1)));
  }
  if (((param_6 != '\0') && (uVar2 = F_0046e5e0(local_c GEN_EDX_ARG), uVar2 < 0x1e8481)) &&
     ((param_2 != 0x7d2 && (param_2 != 0x7d7)))) {
    uVar2 = F_00a3a8a0(this GEN_EDX_ARG);
    F_00a38890(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,uVar2);
  }
  if (*((char *)GEN_TOP(((int)this + 6))) == '\0') {
    uVar2 = 9999;
  }
  else {
    uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + 10)));
  }
  F_00a3be70(local_8 GEN_EDX_ARG,uVar2,(uint)*((ushort *)GEN_TOP(((int)this + 8))));
  if (*((char *)GEN_TOP(((int)this + 6))) == '\0') {
    uVar2 = *((uint *)GEN_TOP(((int)this + 0xc)));
  }
  else {
    iVar5 = (int)*((short *)GEN_TOP(((int)this + 8)));
    pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this + 10))))));
    pvVar3 = ((undefined *)GEN_TOP(F_00a37da0(pvVar3 GEN_EDX_ARG,iVar5)));
    uVar2 = *((uint *)GEN_TOP(((int)this + 0xc)));
    uVar4 = F_00a3a8a0(pvVar3 GEN_EDX_ARG);
    if (uVar4 < uVar2) {
      uVar2 = F_00a3a8a0(pvVar3 GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
    }
  }
  *((uint *)GEN_TOP(((int)local_8 + 0xc))) = uVar2;
  if (((uVar2 == 0) &&
      (*((undefined4 *)GEN_TOP(((int)local_8 + 0xc))) = 0, *((char *)GEN_TOP(((int)local_8 + 6))) == '\0')) &&
     (*((int *)GEN_TOP(((int)local_8 + 8))) != 1)) {
    *((undefined4 *)GEN_TOP(((int)local_8 + 8))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2f))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x75300000;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2a))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2e))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x38))) = 0;
  return 0;
}

/* ref: FUN_00a3d1c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3d1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xa3d1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x48, 8, 4);
  char cVar1;
  ushort uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined * pvVar7;
  uint uVar8;
  int iVar9;
  undefined * pvVar10;
  
  iVar9 = (int)(short)param_2;
  piVar3 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,param_1)));
  if (((*piVar3 == 0) || (iVar9 < 0)) || (piVar3[3] <= iVar9)) {
    (*(undefined * PTR32 *)(gen_frame + 0x40)) = ((undefined *)GEN_TOP(0x0));
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x40)) = ((undefined *)GEN_TOP((iVar9 * 0x40 + *piVar3)));
  }
  iVar9 = (int)(short)param_4;
  piVar3 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,param_3)));
  if (((*piVar3 == 0) || (iVar9 < 0)) || (piVar3[3] <= iVar9)) {
    pvVar10 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    pvVar10 = ((undefined *)GEN_TOP((iVar9 * 0x40 + *piVar3)));
  }
  if ((char)param_5 != '\0') {
    uVar4 = F_00a3a8a0(pvVar10 GEN_EDX_ARG);
    uVar5 = F_00a3a8a0((*(undefined * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG);
    F_00a39130(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,uVar5,uVar4);
  }
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  cVar1 = *((char *)GEN_TOP(((int)pvVar10 + 6)));
  (*(undefined4 *)(gen_frame + 0x0)) = 9999;
  (*(undefined2 *)(gen_frame + 0x4)) = 0;
  (*(char *)(gen_frame + 0x6)) = '\0';
  (*(undefined1 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x75300000;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2a)) = 0;
  (*(undefined2 *)(gen_frame + 0x2e)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined1 *)(gen_frame + 0x38)) = 0;
  if (cVar1 == '\0') {
    uVar4 = 9999;
  }
  else {
    uVar4 = (uint)*((ushort *)GEN_TOP(((int)pvVar10 + 10)));
  }
  uVar2 = *((ushort *)GEN_TOP(((int)pvVar10 + 8)));
  F_00a3be70(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4,(uint)uVar2);
  if (cVar1 == '\0') {
    uVar4 = *((uint *)GEN_TOP(((int)pvVar10 + 0xc)));
  }
  else {
    iVar9 = (int)(short)uVar2;
    pvVar6 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar10 + 10))))));
    pvVar6 = ((undefined *)GEN_TOP(F_00a37da0(pvVar6 GEN_EDX_ARG,iVar9)));
    uVar4 = *((uint *)GEN_TOP(((int)pvVar10 + 0xc)));
    uVar5 = F_00a3a8a0(pvVar6 GEN_EDX_ARG);
    if (uVar5 < uVar4) {
      uVar4 = F_00a3a8a0(pvVar6 GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)pvVar10 + 0xc))) = uVar4;
    }
  }
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x40));
  (*(uint *)(gen_frame + 0xc)) = uVar4;
  if (((uVar4 == 0) && ((*(uint *)(gen_frame + 0xc)) = 0, (*(char *)(gen_frame + 0x6)) == '\0')) && ((*(uint *)(gen_frame + 0x8)) != 1)) {
    (*(uint *)(gen_frame + 0x8)) = 0;
  }
  uVar4 = (*(uint *)(gen_frame + 0x8));
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 6))) == '\0') {
    uVar5 = 9999;
  }
  else {
    uVar5 = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 10)));
  }
  F_00a3be70(pvVar10 GEN_EDX_ARG,uVar5,(uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 8))));
  if (*((char *)GEN_TOP(((int)pvVar6 + 6))) == '\0') {
    uVar5 = *((uint *)GEN_TOP(((int)pvVar6 + 0xc)));
  }
  else {
    iVar9 = (int)*((short *)GEN_TOP(((int)pvVar6 + 8)));
    pvVar7 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar6 + 10))))));
    pvVar7 = ((undefined *)GEN_TOP(F_00a37da0(pvVar7 GEN_EDX_ARG,iVar9)));
    uVar5 = *((uint *)GEN_TOP(((int)pvVar6 + 0xc)));
    uVar8 = F_00a3a8a0(pvVar7 GEN_EDX_ARG);
    uVar4 = (*(uint *)(gen_frame + 0x8));
    if (uVar8 < uVar5) {
      uVar5 = F_00a3a8a0(pvVar7 GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)pvVar6 + 0xc))) = uVar5;
      uVar4 = (*(uint *)(gen_frame + 0x8));
    }
  }
  *((uint *)GEN_TOP(((int)pvVar10 + 0xc))) = uVar5;
  if (((uVar5 == 0) &&
      (*((undefined4 *)GEN_TOP(((int)pvVar10 + 0xc))) = 0, *((char *)GEN_TOP(((int)pvVar10 + 6))) == '\0')) &&
     (*((int *)GEN_TOP(((int)pvVar10 + 8))) != 1)) {
    *((undefined4 *)GEN_TOP(((int)pvVar10 + 8))) = 0;
  }
  if ((*(char *)(gen_frame + 0x6)) == '\0') {
    uVar5 = 9999;
  }
  else {
    uVar5 = uVar4 >> 0x10;
  }
  F_00a3be70(pvVar6 GEN_EDX_ARG,uVar5,uVar4);
  uVar5 = (*(uint *)(gen_frame + 0xc));
  if ((*(char *)(gen_frame + 0x6)) != '\0') {
    iVar9 = (int)(short)(*(uint *)(gen_frame + 0x8));
    pvVar10 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar4 >> 0x10)));
    pvVar10 = ((undefined *)GEN_TOP(F_00a37da0(pvVar10 GEN_EDX_ARG,iVar9)));
    uVar5 = (*(uint *)(gen_frame + 0xc));
    uVar4 = F_00a3a8a0(pvVar10 GEN_EDX_ARG);
    if (uVar4 < uVar5) {
      uVar5 = F_00a3a8a0(pvVar10 GEN_EDX_ARG);
    }
  }
  *((uint *)GEN_TOP(((int)pvVar6 + 0xc))) = uVar5;
  if (((uVar5 == 0) && (*((undefined4 *)GEN_TOP(((int)pvVar6 + 0xc))) = 0, *((char *)GEN_TOP(((int)pvVar6 + 6))) == '\0'))
     && (*((int *)GEN_TOP(((int)pvVar6 + 8))) != 1)) {
    *((undefined4 *)GEN_TOP(((int)pvVar6 + 8))) = 0;
    return 0;
  }
  return 0;
}

/* ref: FUN_00a3d420 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a3d420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3d420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = REFG(int, 0x1379694);
  bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_FWD,7);
  if (bVar2 == 0) {
    F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,7);
  }
  else {
    if (*((char *)GEN_TOP((iVar1 + 0x188))) != '\a') {
      uVar8 = 0;
      uVar6 = 0;
      uVar7 = 0;
      *((undefined1 *)GEN_TOP(((int)this + 0x3114))) = 1;
      uVar4 = F_00906df0(((undefined *)GEN_TOP(((int)this + 0x30d0))) GEN_EDX_ARG);
      F_00a51200(0x2e,uVar4,uVar7,uVar6,uVar8);
      return 0;
    }
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar7 = 0x22;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG);
    pvVar5 = ((undefined *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar7)));
    F_008e9cb0(pvVar5 GEN_EDX_ARG);
    uVar7 = 0x23;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG);
    pvVar5 = ((undefined *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar7)));
    F_008edf60(pvVar5 GEN_EDX_ARG);
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar7 = 0x1a0;
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG)));
      F_0046a630(pvVar5 GEN_EDX_ARG,uVar7);
    }
  }
  if ((REFG(int, 0x1379694) != 0) && (*((char *)GEN_TOP((REFG(int, 0x1379694) + 0x188))) == '\a')) {
    F_00aa2900(REFG(int, 0x1379694) GEN_EDX_ARG,0);
  }
  F_00a51200(0x2f,0,0,0,0);
  return 0x1f;
}

/* ref: FUN_00a3d520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3d520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa3d520u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  undefined * this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar2 = ((int *)GEN_TOP(F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_FWD,param_1)));
  piVar4 = REFG(int * PTR32, 0x1379694);
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
    if ((uVar3 == 1) && (piVar2 != piVar4)) {
      piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x66);
      if (bVar1 == 0) {
        F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x66);
        return 0x16;
      }
      if (*((char *)GEN_TOP(((int)piVar2 + 0x18a))) == '\f') {
        uVar6 = 0;
        uVar5 = 0x4c4;
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
        F_0046ac40(this_00 GEN_EDX_ARG,uVar5,uVar6,piVar2);
        return 0x16;
      }
      F_00a3bd60(((undefined *)GEN_TOP(((int)this + 0x30d0))) GEN_EDX_ARG,param_2);
      *((undefined4 *)GEN_TOP(((int)this + 0x30d0))) = *param_2;
      *((undefined2 *)GEN_TOP(((int)this + 0x30d4))) = *(undefined2 *)(param_2 + 1);
      F_00a3bd60(((undefined *)GEN_TOP(((int)this + 0x3090))) GEN_EDX_ARG,param_3);
      *((undefined4 *)GEN_TOP(((int)this + 0x3090))) = *param_3;
      *((undefined2 *)GEN_TOP(((int)this + 0x3094))) = *(undefined2 *)(param_3 + 1);
      *((undefined4 *)GEN_TOP(((int)this + 0x3110))) = param_1;
      F_00a396c0(this GEN_EDX_ARG,*param_2,(uint)*(ushort *)(param_2 + 1),*param_3,
                   (uint)*(ushort *)(param_3 + 1),param_1,param_4);
      return 0;
    }
  }
  return 2;
}

/* ref: FUN_00a3d640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3d640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa3d640u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined1 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  undefined4 uVar6;
  
  pvVar2 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,param_1)));
  uVar3 = 0;
  if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
    pvVar2 = ((undefined *)GEN_TOP(F_00a37da0(pvVar2 GEN_EDX_ARG,(int)(short)param_2)));
    uVar3 = 0;
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      uVar3 = 0;
      pcVar5 = ((char *)GEN_TOP(((int)this + 0x364)));
      while (*pcVar5 == '\0') {
        uVar3 = uVar3 + 1;
        pcVar5 = pcVar5 + 0x3c;
        if (0x7f < (int)uVar3) {
          return uVar3;
        }
      }
      puVar1 = ((undefined1 *)GEN_TOP(((int)this + uVar3 * 0x3c + 0x364)));
      *puVar1 = 0;
      if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
        *(short *)(puVar1 + 0x14) = (short)param_2;
        *(undefined4 *)(puVar1 + 8) = 7;
        *(undefined4 *)(puVar1 + 0x10) = param_1;
        uVar3 = F_0046e5e0(pvVar2 GEN_EDX_ARG);
        *(uint *)(puVar1 + 0x1c) = uVar3;
        uVar3 = F_00a3a8a0(pvVar2 GEN_EDX_ARG);
        *(uint *)(puVar1 + 0x18) = uVar3;
        *(undefined4 *)(puVar1 + 0x24) = param_1;
        *(short *)(puVar1 + 0x28) = (short)param_2;
        uVar3 = F_0046e5e0(pvVar2 GEN_EDX_ARG);
        *(uint *)(puVar1 + 0x30) = uVar3;
        uVar3 = F_00a3a8a0(pvVar2 GEN_EDX_ARG);
        *(uint *)(puVar1 + 0x2c) = uVar3;
        *(undefined4 *)(puVar1 + 4) = *((undefined4 *)GEN_TOP(((int)this + 0x360)));
        uVar6 = *((undefined4 *)GEN_TOP(((int)this + 0x360)));
        uVar3 = F_00a3a8a0(pvVar2 GEN_EDX_ARG);
        uVar4 = F_0046e5e0(pvVar2 GEN_EDX_ARG);
        F_00a526e0(param_1,param_2,uVar4,uVar3,uVar6);
        uVar4 = *((int *)GEN_TOP(((int)this + 0x360))) + 1;
        uVar3 = uVar4 / 0xfffffff;
        *((uint *)GEN_TOP(((int)this + 0x360))) = uVar4 % 0xfffffff | 0x10000000;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00a3d750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3d750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa3d750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,0x7d7)));
  uVar4 = 0;
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00a36440(pvVar1 GEN_EDX_ARG,0);
    uVar4 = 0;
    if (uVar2 != 0) {
      pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,param_1)));
      uVar4 = 0;
      if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_00a37da0(pvVar1 GEN_EDX_ARG,(int)(short)param_2);
        uVar4 = 0;
        if (uVar3 != 0) {
          F_00a3cd20(this GEN_EDX_ARG,uVar3,0x7d7,(uint)*((ushort *)GEN_TOP((uVar2 + 4))),0);
          uVar4 = F_00a3a720();
        }
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00a3d7c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3d7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa3d7c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar2 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,0x7d7)));
  uVar6 = 0;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    iVar1 = piVar2[3];
    iVar4 = 0;
    if (0 < iVar1) {
      iVar5 = *piVar2;
      do {
        if (((*piVar2 == 0) || (iVar4 < 0)) || (iVar3 = iVar5, iVar1 <= iVar4)) {
          iVar3 = 0;
        }
        if (*((char *)GEN_TOP((iVar3 + 6))) == '\0') {
          uVar6 = 9999;
        }
        else {
          uVar6 = (uint)*((ushort *)GEN_TOP((iVar3 + 10)));
        }
        if ((uVar6 == param_1) && (*((short *)GEN_TOP((iVar3 + 8))) == (short)param_2)) {
          F_00a3ced0(this GEN_EDX_ARG,0x7d7,iVar4,0);
          break;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x40;
      } while (iVar4 < iVar1);
    }
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG);
    *((byte *)GEN_TOP((uVar6 + 0x230bf))) = *((byte *)GEN_TOP((uVar6 + 0x230bf))) | 1;
    F_006d0fd0();
    uVar6 = F_00701020();
  }
  return uVar6;
}

/* ref: FUN_00a3d870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3d870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3d870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  F_00a3ced0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_1 + 0xc))),(uint)*((ushort *)GEN_TOP((param_1 + 0x10))),0);
  uVar1 = F_00a376a0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0xc))),(uint)*((ushort *)GEN_TOP((param_1 + 0x10))));
  return uVar1;
}

/* ref: FUN_00a3d8b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3d8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa3d8b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_c;
  int local_8;
  
  uVar2 = F_00ab24a0(param_1);
  if ((uVar2 == 0) || (param_1 == 0)) {
    return 0;
  }
  uVar2 = *((uint *)GEN_TOP((uVar2 + 0x28)));
  local_c = 0;
  if (param_1 - 2 < 0x12) {
    pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d1)));
    if ((pvVar3 != ((undefined *)GEN_TOP(0x0))) &&
       (pvVar3 = ((undefined *)GEN_TOP(F_00a37da0(pvVar3 GEN_EDX_ARG,param_1 - 2))), pvVar3 != ((undefined *)GEN_TOP(0x0)))) {
      uVar4 = F_00a3a8a0(pvVar3 GEN_EDX_ARG);
      uVar2 = uVar2 - uVar4;
    }
    return uVar2;
  }
  if (3 < param_1 - 0x17) {
    local_8 = 0;
    do {
      pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,local_8)));
      for (uVar4 = F_00a3c040(pvVar3 GEN_EDX_ARG,param_1,1,0); uVar4 != 0;
          uVar4 = F_00a3c040(pvVar3 GEN_EDX_ARG,param_1,1,*((ushort *)GEN_TOP((uVar4 + 4))) + 1)) {
        if ((*((byte *)GEN_TOP((uVar4 + 0x14))) & 1) == (byte)param_2) {
          if (*((char *)GEN_TOP((uVar4 + 6))) == '\0') {
            uVar7 = *((uint *)GEN_TOP((uVar4 + 0xc)));
          }
          else {
            iVar8 = (int)*((short *)GEN_TOP((uVar4 + 8)));
            pvVar5 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((uVar4 + 10))))));
            pvVar5 = ((undefined *)GEN_TOP(F_00a37da0(pvVar5 GEN_EDX_ARG,iVar8)));
            uVar7 = *((uint *)GEN_TOP((uVar4 + 0xc)));
            uVar6 = F_00a3a8a0(pvVar5 GEN_EDX_ARG);
            if (uVar6 < uVar7) {
              uVar7 = F_00a3a8a0(pvVar5 GEN_EDX_ARG);
              *((uint *)GEN_TOP((uVar4 + 0xc))) = uVar7;
            }
          }
          local_c = local_c + (uVar2 - uVar7);
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < 4);
    return local_c;
  }
  bVar1 = ((byte)param_1 & 1) + 5;
  pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,2000)));
  if (((pvVar3 == ((undefined *)GEN_TOP(0x0))) ||
      (pvVar3 = ((undefined *)GEN_TOP(F_00a37da0(pvVar3 GEN_EDX_ARG,(uint)bVar1))), pvVar3 == ((undefined *)GEN_TOP(0x0)))) ||
     (uVar2 = F_0071d3a0(pvVar3 GEN_EDX_ARG), (char)uVar2 != '\0')) {
    if (bVar1 == 5) {
      return 300 - *((int *)GEN_TOP(((int)this + 0x3118)));
    }
    return 2000;
  }
  uVar2 = F_00906df0(pvVar3 GEN_EDX_ARG);
  if (uVar2 != param_1) {
    return 0;
  }
  if (bVar1 == 5) {
    uVar4 = 300 - *((int *)GEN_TOP(((int)this + 0x3118)));
    uVar2 = F_00a3a8a0(pvVar3 GEN_EDX_ARG);
    if ((int)uVar4 < (int)(2000 - uVar2)) {
      return uVar4;
    }
    return 2000 - uVar2;
  }
  uVar2 = F_00a3a8a0(pvVar3 GEN_EDX_ARG);
  return 2000 - uVar2;
}

/* ref: FUN_00a3dac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3dac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3dac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  char * pcVar6;
  int iVar7;
  char * pcVar8;
  char * pcVar9;
  uint uVar10;
  char * pcVar11;
  int iStack_8;
  
  uVar4 = F_00a373e0((undefined1)param_1);
  if (uVar4 == 0) {
    return 0;
  }
  param_1 = 1000;
  do {
    if (param_1 == 1000) {
LAB_00a3db16: ;
      if (param_1 == 0x3e9) goto LAB_00a3db1e;
      if (param_1 == 0xd49) {
        param_1 = 0;
      }
    }
    else {
      if (param_1 != 0x3e9) {
        if (((param_1 != 0xd48) && (param_1 != 0xd49)) && (3 < param_1)) {
          return 0;
        }
        goto LAB_00a3db16;
      }
LAB_00a3db1e: ;
      param_1 = 0xd48;
    }
    piVar5 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,param_1)));
    if (piVar5 != ((int *)GEN_TOP(0x0))) {
      iVar2 = piVar5[3];
      iStack_8 = 0;
      if (0 < iVar2) {
        iVar3 = *piVar5;
        pcVar11 = ((char *)GEN_TOP((iVar3 + 6)));
        do {
          if (((iVar3 != 0) && (-1 < iStack_8)) && (iStack_8 < iVar2)) {
            if (*pcVar11 == '\0') {
              pcVar8 = pcVar11 - 6;
            }
            else {
              iVar7 = (int)*(short *)(pcVar11 + 2);
              piVar5 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)(pcVar11 + 4))));
              if (((*piVar5 == 0) || (iVar7 < 0)) || (piVar5[3] <= iVar7)) {
                pcVar8 = ((char *)GEN_TOP(0x0));
              }
              else {
                pcVar8 = ((char *)GEN_TOP((iVar7 * 0x40 + *piVar5)));
              }
            }
            if (pcVar8 != ((char *)GEN_TOP(0x0))) {
              if (pcVar8[6] == '\0') {
                if (*(int *)(pcVar8 + 8) == 0) goto LAB_00a3dc32;
                uVar10 = *(uint *)(pcVar8 + 8);
              }
              else {
                this_00 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)(pcVar8 + 10))));
                if (this_00 == ((undefined *)GEN_TOP(0x0))) {
                  pcVar9 = ((char *)GEN_TOP(0x0));
                }
                else {
                  pcVar6 = ((char *)GEN_TOP(F_00a37da0(this_00 GEN_EDX_ARG,(int)*(short *)(pcVar8 + 8))));
                  pcVar9 = pcVar8;
                  if (pcVar6 != ((char *)GEN_TOP(0x0))) {
                    pcVar9 = pcVar6;
                  }
                }
                cVar1 = pcVar9[6];
                while (cVar1 == '\0') {
                  cVar1 = pcVar9[6];
                }
                uVar10 = *(uint *)(pcVar9 + 8);
              }
              if (uVar10 == uVar4) {
                return (uint)pcVar8;
              }
            }
          }
LAB_00a3dc32: ;
          iStack_8 = iStack_8 + 1;
          pcVar11 = pcVar11 + 0x40;
        } while (iStack_8 < iVar2);
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

/* ref: FUN_00a3dc60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3dc60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa3dc60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[6];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  ushort uVar1;
  bool bVar2;
  byte bVar3;
  undefined * this_00;
  undefined * pvVar4;
  undefined * pvVar5;
  uint uVar6;
  byte bVar7;
  short sVar8;
  
  this_00 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]))));
  sVar8 = 0;
  if ((*(uint *)&gen_args[1]) - 1000000 < 1000000) {
    (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[3]) + 0)) = 1;
    (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) - 1000000;
  }
  if (0 < *((int *)GEN_TOP(((int)this_00 + 0xc)))) {
    do {
      pvVar4 = ((undefined *)GEN_TOP(F_00a3a8f0(this_00 GEN_EDX_ARG,(*(uint *)&gen_args[1]),(int)sVar8)));
      if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
        return 0;
      }
      bVar7 = *((byte *)GEN_TOP(((int)pvVar4 + 0x14)));
      if ((*(uint *)&gen_args[4]) == 0xffffffff) {
LAB_00a3dd36: ;
        bVar2 = true;
      }
      else {
        if (*((char *)GEN_TOP(((int)pvVar4 + 6))) == '\0') {
LAB_00a3dd27: ;
          bVar3 = *((byte *)GEN_TOP(((int)pvVar4 + 0x2f)));
        }
        else {
          uVar1 = *((ushort *)GEN_TOP(((int)pvVar4 + 10)));
          pvVar5 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)uVar1)));
          if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto LAB_00a3dd27;
          sVar8 = *((short *)GEN_TOP(((int)pvVar4 + 8)));
          uVar6 = F_00a37da0(pvVar5 GEN_EDX_ARG,(int)sVar8);
          if ((uVar6 == 0) && (pvVar4 == ((undefined *)GEN_TOP(0x0)))) goto LAB_00a3dd27;
          pvVar5 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)uVar1)));
          if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
            bVar3 = F_0046e590(((undefined *)GEN_TOP(0x0)) GEN_EDX_ARG);
          }
          else {
            pvVar5 = ((undefined *)GEN_TOP(F_00a37da0(pvVar5 GEN_EDX_ARG,(int)sVar8)));
            if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
              pvVar5 = pvVar4;
            }
            bVar3 = F_0046e590(pvVar5 GEN_EDX_ARG);
          }
        }
        if ((*(uint *)&gen_args[4]) == bVar3) goto LAB_00a3dd36;
        bVar2 = false;
      }
      bVar7 = bVar7 & 1;
      if (*(*(short * PTR32 *)&gen_args[2]) < 1) {
        if ((((byte)(*(undefined4 *)&gen_args[3]) == bVar7) && (bVar2)) && (*((short *)GEN_TOP(((int)pvVar4 + 4))) != (short)(*(undefined4 *)&gen_args[5]))
           ) {
          return (uint)pvVar4;
        }
        sVar8 = *((short *)GEN_TOP(((int)pvVar4 + 4))) + 1;
      }
      else {
        sVar8 = *((short *)GEN_TOP(((int)pvVar4 + 4))) + 1;
        if (((byte)(*(undefined4 *)&gen_args[3]) == bVar7) && (bVar2)) {
          *(*(short * PTR32 *)&gen_args[2]) = *(*(short * PTR32 *)&gen_args[2]) - 1;
        }
      }
    } while ((int)sVar8 < *((int *)GEN_TOP(((int)this_00 + 0xc))));
  }
  return 0;
}

/* ref: FUN_00a3dda0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3dda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa3dda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  uVar1 = F_00a3dc60(this GEN_EDX_FWD,param_1,param_2,&(*(undefined * PTR32 *)(gen_frame + 0x0)),param_3,param_4,0xffffffff);
  return uVar1;
}

/* ref: FUN_00a3ddd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3ddd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xa3ddd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  uVar1 = F_00a3dc60(this GEN_EDX_FWD,param_1,param_2,&(*(undefined * PTR32 *)(gen_frame + 0x0)),param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00a3de00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3de00(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa3de00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  int iVar1;
  int iVar2;
  undefined * this;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  
  iVar2 = param_2;
  if (param_2 - 2 < 0x12) {
    return 0;
  }
  this = ((undefined *)GEN_TOP(F_00a36f30(param_1 GEN_EDX_FWD,param_3)));
  if (((this != ((undefined *)GEN_TOP(0x0))) && (uVar3 = F_00ab24a0(param_2), uVar3 != 0)) && (param_2 != 0)) {
    iVar1 = *((int *)GEN_TOP((uVar3 + 0x28)));
    this_00 = ((undefined *)GEN_TOP(F_00a3c040(this GEN_EDX_ARG,param_2,1,0)));
    param_2 = 0;
    for (; this_00 != ((undefined *)GEN_TOP(0x0));
        this_00 = ((undefined *)GEN_TOP(F_00a3c040(this GEN_EDX_ARG,iVar2,1,*((ushort *)GEN_TOP(((int)this_00 + 4))) + 1)))) {
      if ((*((byte *)GEN_TOP(((int)this_00 + 0x14))) & 1) == param_4) {
        uVar3 = F_00a3a8a0(this_00 GEN_EDX_ARG);
        param_2 = param_2 + (iVar1 - uVar3);
      }
    }
    uVar4 = F_00a36440(this GEN_EDX_ARG,0);
    uVar3 = param_2;
    for (; uVar4 != 0; uVar4 = F_00a36440(this GEN_EDX_ARG,(uint)(ushort)(*((short *)GEN_TOP((uVar4 + 4))) + 1))) {
      uVar3 = uVar3 + iVar1;
    }
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00a3ded0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3ded0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa3ded0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  int iVar1;
  int * piVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  piVar2 = ((int *)GEN_TOP(F_00a36f30(param_1 GEN_EDX_FWD,param_3)));
  iVar6 = 0;
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  iVar1 = piVar2[3];
  iVar8 = 0;
  param_3 = 0;
  if (param_4 == '\0') {
    if (0 < iVar1) {
      do {
        if (((*piVar2 != 0) && (-1 < iVar8)) && (iVar8 < piVar2[3])) {
          pvVar3 = ((undefined *)GEN_TOP((*piVar2 + iVar6)));
          if (*((char *)GEN_TOP(((int)pvVar3 + 6))) != '\0') {
            iVar7 = (int)*((short *)GEN_TOP(((int)pvVar3 + 8)));
            piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar3 + 10))))));
            if (((*piVar4 == 0) || (iVar7 < 0)) || (piVar4[3] <= iVar7)) {
              pvVar3 = ((undefined *)GEN_TOP(0x0));
            }
            else {
              pvVar3 = ((undefined *)GEN_TOP((iVar7 * 0x40 + *piVar4)));
            }
          }
          if (((pvVar3 != ((undefined *)GEN_TOP(0x0))) && (uVar5 = F_00906df0(pvVar3 GEN_EDX_ARG), uVar5 == param_2)) &&
             ((*((byte *)GEN_TOP(((int)pvVar3 + 0x14))) & 1) == 0)) {
            uVar5 = F_00a3a8a0(pvVar3 GEN_EDX_ARG);
            param_3 = param_3 + uVar5;
          }
        }
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 0x40;
      } while (iVar8 < iVar1);
    }
  }
  else if (0 < iVar1) {
    do {
      if (((*piVar2 != 0) && (-1 < iVar8)) && (iVar8 < piVar2[3])) {
        pvVar3 = ((undefined *)GEN_TOP((*piVar2 + iVar6)));
        if (*((char *)GEN_TOP(((int)pvVar3 + 6))) != '\0') {
          iVar7 = (int)*((short *)GEN_TOP(((int)pvVar3 + 8)));
          piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar3 + 10))))));
          if (((*piVar4 == 0) || (iVar7 < 0)) || (piVar4[3] <= iVar7)) {
            pvVar3 = ((undefined *)GEN_TOP(0x0));
          }
          else {
            pvVar3 = ((undefined *)GEN_TOP((iVar7 * 0x40 + *piVar4)));
          }
        }
        if (((pvVar3 != ((undefined *)GEN_TOP(0x0))) && (uVar5 = F_00906df0(pvVar3 GEN_EDX_ARG), uVar5 == param_2)) &&
           ((*((byte *)GEN_TOP(((int)pvVar3 + 0x14))) & 1) != 0)) {
          uVar5 = F_00a3a8a0(pvVar3 GEN_EDX_ARG);
          param_3 = param_3 + uVar5;
        }
      }
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 0x40;
    } while (iVar8 < iVar1);
    return param_3;
  }
  return param_3;
}

/* ref: FUN_00a3e020 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a3e020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa3e020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  int * piVar7;
  undefined * this_00;
  uint uVar8;
  uint uVar9;
  int * piVar10;
  undefined * pvVar11;
  int iVar12;
  int iVar13;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  piVar7 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,param_2)));
  if (piVar7 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  iVar1 = piVar7[3];
  (*(uint *)(gen_frame + 0x0)) = 0;
  ((char *)(gen_frame + 0x1c))[0] = '\0';
  ((char *)(gen_frame + 0x1c))[1] = '\0';
  ((char *)(gen_frame + 0x1c))[2] = '\0';
  ((char *)(gen_frame + 0x1c))[3] = '\0';
  ((char *)(gen_frame + 0x1c))[4] = '\0';
  (*(int *)(gen_frame + 0x4)) = 0;
  if (0 < iVar1) {
    do {
      if (((*piVar7 != 0) && (-1 < (*(int *)(gen_frame + 0x4)))) && ((*(int *)(gen_frame + 0x4)) < piVar7[3])) {
        this_00 = ((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x4)) * 0x40 + *piVar7)));
        if (*((char *)GEN_TOP(((int)this_00 + 6))) != '\0') {
          iVar13 = (int)*((short *)GEN_TOP(((int)this_00 + 8)));
          piVar10 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this_00 + 10))))));
          if (((*piVar10 == 0) || (iVar13 < 0)) || (piVar10[3] <= iVar13)) {
            this_00 = ((undefined *)GEN_TOP(0x0));
          }
          else {
            this_00 = ((undefined *)GEN_TOP((iVar13 * 0x40 + *piVar10)));
          }
        }
        if (this_00 != ((undefined *)GEN_TOP(0x0))) {
          uVar8 = F_00906df0(param_1 GEN_EDX_ARG);
          uVar9 = F_00906df0(this_00 GEN_EDX_ARG);
          if (uVar9 == uVar8) {
            bVar2 = *((byte *)GEN_TOP(((int)this_00 + 0x14)));
            if ((*((byte *)GEN_TOP(((int)param_1 + 0x14))) & 1) == 0) {
              bVar2 = ~bVar2;
            }
            if ((*((char *)GEN_TOP(((int)param_1 + 0x41))) != '\0') || ((bVar2 & 1) != 0)) {
              uVar5 = F_0071d210(param_1 GEN_EDX_ARG);
              uVar6 = F_0071d210(this_00 GEN_EDX_ARG);
              if (uVar5 <= uVar6) {
                bVar2 = *((byte *)GEN_TOP(((int)param_1 + 0x40)));
                iVar13 = 0;
                (*(byte *)(gen_frame + 0x13)) = 0;
                ((char *)(gen_frame + 0x14))[0] = '\0';
                ((char *)(gen_frame + 0x14))[1] = '\0';
                ((char *)(gen_frame + 0x14))[2] = '\0';
                ((char *)(gen_frame + 0x14))[3] = '\0';
                ((char *)(gen_frame + 0x14))[4] = '\0';
                do {
                  ((char *)(gen_frame + 0x1c))[(int)(iVar13)] = '\0';
                  if ((bVar2 != 0) && (uVar5 = F_0071d2c0(this_00 GEN_EDX_ARG,iVar13), uVar5 != 0)) {
                    (*(byte *)(gen_frame + 0x13)) = (*(byte *)(gen_frame + 0x13)) + 1;
                  }
                  uVar5 = F_0071d2c0(param_1 GEN_EDX_ARG,iVar13);
                  if (uVar5 == 0) {
                    ((char *)(gen_frame + 0x1c))[(int)(iVar13)] = '\x01';
                  }
                  else {
                    iVar12 = 0;
                    do {
                      if (((char *)(gen_frame + 0x14))[(int)(iVar12)] == '\0') {
                        uVar5 = F_0071d2c0(param_1 GEN_EDX_ARG,iVar13);
                        uVar6 = F_0071d2c0(this_00 GEN_EDX_ARG,iVar12);
                        if (uVar5 == uVar6) {
                          bVar3 = F_0071d300(param_1 GEN_EDX_ARG,iVar13);
                          bVar4 = F_0071d300(this_00 GEN_EDX_ARG,iVar12);
                          if (bVar3 == bVar4) {
                            ((char *)(gen_frame + 0x1c))[(int)(iVar13)] = '\x01';
                            ((char *)(gen_frame + 0x14))[(int)(iVar12)] = '\x01';
                            break;
                          }
                        }
                      }
                      iVar12 = iVar12 + 1;
                    } while (iVar12 < 5);
                    if (((char *)(gen_frame + 0x1c))[(int)(iVar13)] == '\0') break;
                  }
                  iVar13 = iVar13 + 1;
                } while (iVar13 < 5);
                if ((bVar2 == 0) || (bVar2 <= (*(byte *)(gen_frame + 0x13)))) {
                  iVar13 = 0;
                  do {
                    if (((char *)(gen_frame + 0x1c))[(int)(iVar13)] == '\0') goto LAB_00a3e348;
                    iVar13 = iVar13 + 1;
                  } while (iVar13 < 5);
                  if ((*((char *)GEN_TOP(((int)param_1 + 0x41))) != '\0') &&
                     ((*((byte *)GEN_TOP(((int)this_00 + 0x14))) & 1) != 0)) {
                    if (*((char *)GEN_TOP(((int)this_00 + 6))) == '\0') {
                      uVar8 = *((uint *)GEN_TOP(((int)this_00 + 0xc)));
                    }
                    else {
                      piVar10 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,
                                                    (uint)*((ushort *)GEN_TOP(((int)this_00 + 10))))));
                      iVar13 = (int)*((short *)GEN_TOP(((int)this_00 + 8)));
                      if (((*piVar10 == 0) || (iVar13 < 0)) || (piVar10[3] <= iVar13)) {
                        pvVar11 = ((undefined *)GEN_TOP(0x0));
                      }
                      else {
                        pvVar11 = ((undefined *)GEN_TOP((iVar13 * 0x40 + *piVar10)));
                        if (*((char *)GEN_TOP(((int)pvVar11 + 6))) != '\0') {
                          iVar13 = (int)*((short *)GEN_TOP(((int)pvVar11 + 8)));
                          piVar10 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,
                                                        (uint)*((ushort *)GEN_TOP(((int)pvVar11 + 10))))));
                          if (((*piVar10 == 0) || (iVar13 < 0)) || (piVar10[3] <= iVar13)) {
                            pvVar11 = ((undefined *)GEN_TOP(0x0));
                          }
                          else {
                            pvVar11 = ((undefined *)GEN_TOP((iVar13 * 0x40 + *piVar10)));
                          }
                        }
                      }
                      uVar8 = *((uint *)GEN_TOP(((int)this_00 + 0xc)));
                      uVar9 = F_00a3a8a0(pvVar11 GEN_EDX_ARG);
                      if (uVar9 < uVar8) {
                        uVar8 = F_00a3a8a0(pvVar11 GEN_EDX_ARG);
                        *((uint *)GEN_TOP(((int)this_00 + 0xc))) = uVar8;
                      }
                    }
                    *((int *)GEN_TOP(((int)param_1 + 0x44))) = *((int *)GEN_TOP(((int)param_1 + 0x44))) + uVar8;
                  }
                  if (*((char *)GEN_TOP(((int)this_00 + 6))) == '\0') {
                    uVar8 = *((uint *)GEN_TOP(((int)this_00 + 0xc)));
                  }
                  else {
                    piVar10 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this_00 + 10)))
                                                 )));
                    iVar13 = (int)*((short *)GEN_TOP(((int)this_00 + 8)));
                    if (((*piVar10 == 0) || (iVar13 < 0)) || (piVar10[3] <= iVar13)) {
                      pvVar11 = ((undefined *)GEN_TOP(0x0));
                    }
                    else {
                      pvVar11 = ((undefined *)GEN_TOP((iVar13 * 0x40 + *piVar10)));
                      if (*((char *)GEN_TOP(((int)pvVar11 + 6))) != '\0') {
                        iVar13 = (int)*((short *)GEN_TOP(((int)pvVar11 + 8)));
                        piVar10 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,
                                                      (uint)*((ushort *)GEN_TOP(((int)pvVar11 + 10))))));
                        if (((*piVar10 == 0) || (iVar13 < 0)) || (piVar10[3] <= iVar13)) {
                          pvVar11 = ((undefined *)GEN_TOP(0x0));
                        }
                        else {
                          pvVar11 = ((undefined *)GEN_TOP((iVar13 * 0x40 + *piVar10)));
                        }
                      }
                    }
                    uVar8 = *((uint *)GEN_TOP(((int)this_00 + 0xc)));
                    uVar9 = F_00a3a8a0(pvVar11 GEN_EDX_ARG);
                    if (uVar9 < uVar8) {
                      uVar8 = F_00a3a8a0(pvVar11 GEN_EDX_ARG);
                      *((uint *)GEN_TOP(((int)this_00 + 0xc))) = uVar8;
                    }
                  }
                  (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + uVar8;
                }
              }
            }
          }
        }
      }
LAB_00a3e348: ;
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
    } while ((*(int *)(gen_frame + 0x4)) < iVar1);
  }
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_00a3e370 */
GEN_OWN GEN_FRAME uint F_00a3e370(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa3e370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_0046e5e0(param_1 GEN_EDX_ARG);
    uVar1 = F_00a377f0(uVar1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00a3e390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3e390(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa3e390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined4 * this;
  int * piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 * local_c;
  uint local_8;
  
  bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_FWD,0x61);
  if (bVar2 == 0) {
    uVar3 = F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x61);
    return uVar3;
  }
  local_c = ((undefined4 *)GEN_TOP(0x0));
  local_8 = 0;
  do {
    piVar4 = ((int *)GEN_TOP(F_00a36f30(param_1 GEN_EDX_ARG,local_8)));
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
    iVar1 = piVar4[3];
    iVar8 = 0;
    this = local_c;
    if (0 < iVar1) {
      iVar6 = 0;
      do {
        if (((*piVar4 != 0) && (-1 < iVar8)) && (iVar8 < piVar4[3])) {
          this = ((undefined4 *)GEN_TOP((*piVar4 + iVar6)));
          if (*((char *)GEN_TOP(((int)this + 6))) != '\0') {
            iVar7 = (int)*(short *)(this + 2);
            piVar5 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this + 10))))));
            if (((*piVar5 == 0) || (iVar7 < 0)) || (piVar5[3] <= iVar7)) {
              this = ((undefined4 *)GEN_TOP(0x0));
            }
            else {
              this = ((undefined4 *)GEN_TOP((iVar7 * 0x40 + *piVar5)));
            }
          }
          if ((this != ((undefined4 *)GEN_TOP(0x0))) && ((*((char *)GEN_TOP(((int)this + 6))) != '\0' || (this[2] != 0))))
          {
            uVar3 = F_0046e5e0(this GEN_EDX_ARG);
            uVar3 = F_00ab24a0(uVar3);
            if ((uVar3 != 0) &&
               ((*((char *)GEN_TOP((uVar3 + 0xa0))) == '\x0f' && ((uint)param_2 == *((uint *)GEN_TOP((uVar3 + 0x2c)))))))
            break;
          }
        }
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 0x40;
        this = local_c;
      } while (iVar8 < iVar1);
    }
    local_c = this;
    local_8 = local_8 + 1;
    if (3 < local_8) {
      uVar3 = 0;
      if (local_c != ((undefined4 *)GEN_TOP(0x0))) {
        uVar3 = F_00a51200(0x21,param_3,(int)(short)param_4,*local_c,(int)*(short *)(local_c + 1));
      }
      return uVar3;
    }
  } while( true );
}

/* ref: FUN_00a3e4c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3e4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3e4c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  undefined * pvVar8;
  undefined4 uVar9;
  undefined4 * puVar10;
  uint local_14;
  int local_10;
  int local_8;
  
  puVar10 = param_1;
  for (iVar7 = 0x79; iVar7 != 0; iVar7 = iVar7 - 1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_14 = 0;
  do {
    piVar3 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,local_14)));
    if (piVar3 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
    piVar2 = ((int *)GEN_TOP(piVar3[3]));
    local_8 = 0;
    piVar4 = piVar2;
    if (0 < (int)piVar2) {
      local_10 = 0;
      do {
        piVar4 = ((int *)GEN_TOP(*piVar3));
        if (((piVar4 != ((int *)GEN_TOP(0x0))) && (-1 < local_8)) && (local_8 < piVar3[3])) {
          pvVar8 = ((undefined *)GEN_TOP((local_10 + (int)piVar4)));
          if (*((char *)GEN_TOP(((int)pvVar8 + 6))) != '\0') {
            iVar7 = (int)*((short *)GEN_TOP(((int)pvVar8 + 8)));
            piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar8 + 10))))));
            if (((*piVar4 == 0) || (iVar7 < 0)) || (piVar4[3] <= iVar7)) {
              pvVar8 = ((undefined *)GEN_TOP(0x0));
            }
            else {
              pvVar8 = ((undefined *)GEN_TOP((iVar7 * 0x40 + *piVar4)));
            }
          }
          if (pvVar8 != ((undefined *)GEN_TOP(0x0))) {
            piVar4 = ((int *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)piVar4) >> 8),*((char *)GEN_TOP(((int)pvVar8 + 6))))));
            if (*((char *)GEN_TOP(((int)pvVar8 + 6))) == '\0') {
              if (*((int *)GEN_TOP(((int)pvVar8 + 8))) == 0) goto LAB_00a3e66f;
              uVar5 = *((uint *)GEN_TOP(((int)pvVar8 + 8)));
              if ((*((byte *)GEN_TOP(((int)pvVar8 + 0x14))) & 1) != 0) {
                uVar5 = uVar5 + 1000000;
              }
            }
            else {
              piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar8 + 10))))));
              if (piVar4 == ((int *)GEN_TOP(0x0))) {
                uVar5 = F_0046e5e0(((undefined *)GEN_TOP(0x0)) GEN_EDX_ARG);
                goto LAB_00a3e603;
              }
              iVar7 = (int)*((short *)GEN_TOP(((int)pvVar8 + 8)));
              if (((*piVar4 == 0) || (iVar7 < 0)) || (piVar4[3] <= iVar7)) {
LAB_00a3e5ec: ;
                pvVar6 = pvVar8;
              }
              else {
                pvVar6 = ((undefined *)GEN_TOP((iVar7 * 0x40 + *piVar4)));
                if (*((char *)GEN_TOP(((int)pvVar6 + 6))) != '\0') {
                  iVar7 = (int)*((short *)GEN_TOP(((int)pvVar6 + 8)));
                  piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar6 + 10))))));
                  if (((*piVar4 == 0) || (iVar7 < 0)) || (piVar4[3] <= iVar7)) {
                    pvVar6 = ((undefined *)GEN_TOP(0x0));
                  }
                  else {
                    pvVar6 = ((undefined *)GEN_TOP((iVar7 * 0x40 + *piVar4)));
                  }
                }
                if (pvVar6 == ((undefined *)GEN_TOP(0x0))) goto LAB_00a3e5ec;
              }
              uVar5 = F_0046e5e0(pvVar6 GEN_EDX_ARG);
            }
LAB_00a3e603: ;
            piVar4 = ((int *)GEN_TOP(F_00ab24a0(uVar5)));
            if ((piVar4 != ((int *)GEN_TOP(0x0))) && ((char)piVar4[0x28] == '\x0f')) {
              iVar7 = piVar4[0xb];
              if (*((char *)GEN_TOP(((int)pvVar8 + 6))) == '\0') {
                uVar9 = *((undefined4 *)GEN_TOP(((int)pvVar8 + 8)));
              }
              else {
                pvVar6 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar8 + 10))))));
                if (pvVar6 == ((undefined *)GEN_TOP(0x0))) {
                  pvVar6 = ((undefined *)GEN_TOP(0x0));
                  pvVar8 = ((undefined *)GEN_TOP(0x0));
                }
                else {
                  pvVar6 = ((undefined *)GEN_TOP(F_00a37da0(pvVar6 GEN_EDX_ARG,(int)*((short *)GEN_TOP(((int)pvVar8 + 8))))));
                  if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
                    pvVar8 = pvVar6;
                  }
                }
                cVar1 = *((char *)GEN_TOP(((int)pvVar8 + 6)));
                piVar4 = ((int *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)pvVar6) >> 8),cVar1)));
                while (cVar1 == '\0') {
                  cVar1 = *((char *)GEN_TOP(((int)pvVar8 + 6)));
                  piVar4 = ((int *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)piVar4) >> 8),cVar1)));
                }
                uVar9 = *((undefined4 *)GEN_TOP(((int)pvVar8 + 8)));
              }
              param_1[iVar7] = uVar9;
            }
          }
        }
LAB_00a3e66f: ;
        local_8 = local_8 + 1;
        local_10 = local_10 + 0x40;
      } while (local_8 < (int)piVar2);
    }
    local_14 = local_14 + 1;
    if (3 < local_14) {
      return (uint)piVar4;
    }
  } while( true );
}

/* ref: FUN_00a3e6a0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00a3e6a0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa3e6a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_0046e5e0(param_1 GEN_EDX_ARG);
  if (0x488 < uVar2 - 0x1e8481) {
    uVar2 = F_0046e5e0(param_1 GEN_EDX_ARG);
    if (uVar2 != 1) {
      uVar2 = F_0046e5e0(param_1 GEN_EDX_ARG);
      uVar2 = F_00ab24a0(uVar2);
      if (uVar2 != 0) {
        uVar3 = F_00906df0(param_1 GEN_EDX_ARG);
        if ((uVar3 != 0) && (*((int *)GEN_TOP((uVar2 + 0x74))) != 0)) {
          uVar1 = F_00906d60(param_1 GEN_EDX_ARG);
          return uVar1 < 30000;
        }
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00a3e720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3e720(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa3e720u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int * piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pvVar2 = ((undefined *)GEN_TOP(F_00a36f30(param_1 GEN_EDX_FWD,param_2)));
  uVar3 = 0;
  if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
    pvVar2 = ((undefined *)GEN_TOP(F_00a37da0(pvVar2 GEN_EDX_ARG,(int)(short)param_3)));
    uVar3 = 0;
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      iVar5 = 0;
      do {
        F_00ab24a0(iVar5 + 0x15da);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 5);
      if (param_4 != '\0') {
        iVar5 = 1;
        while (((uVar3 = F_00ab21a0(iVar5), *((int *)GEN_TOP((uVar3 + 0x10))) != 0x21 ||
                (uVar3 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,iVar5,0), (short)uVar3 == 0)) ||
               ((REFG(undefined1, 0x14b4edf) & 0x80) == 0))) {
          iVar5 = iVar5 + 1;
          if (0x1c < iVar5) {
LAB_00a3e7b6: ;
            uVar3 = F_0046e5e0(pvVar2 GEN_EDX_ARG);
            uVar3 = F_00a398c0(param_1 GEN_EDX_ARG,param_2,param_3,uVar3);
            return uVar3;
          }
        }
        F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x20,0,0);
        goto LAB_00a3e7b6;
      }
      bVar1 = F_00ab1d50(*(undefined4 *)&REFG(undefined2, 0x1379c78));
      iVar5 = REFG(int, 0x1379694);
      uVar3 = CONCAT31(extraout_var,bVar1);
      if (bVar1 == 0) {
        if (REFG(int, 0x1379694) != 0) {
          piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
          if (piVar4 != ((int *)GEN_TOP(0x0))) {
            uVar7 = 0;
            uVar6 = 0x577;
            pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
            F_0046ac40(pvVar2 GEN_EDX_ARG,uVar6,iVar5,uVar7);
          }
          uVar3 = F_00a3d7c0(param_1 GEN_EDX_ARG,param_2,param_3);
          return uVar3;
        }
      }
      else {
        bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17);
        if (bVar1 == 0) {
          F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17);
          uVar3 = F_00a3d7c0(param_1 GEN_EDX_ARG,param_2,param_3);
          return uVar3;
        }
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        uVar6 = 0x34;
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
        piVar4 = ((int *)GEN_TOP(F_00763050(uVar3 GEN_EDX_ARG,uVar6)));
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG);
        if ((char)uVar3 != '\0') {
          piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
          if (piVar4 != ((int *)GEN_TOP(0x0))) {
            uVar6 = 0x1a0;
            pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
            F_0046a630(pvVar2 GEN_EDX_ARG,uVar6);
          }
          uVar3 = F_00a3d7c0(param_1 GEN_EDX_ARG,param_2,param_3);
          return uVar3;
        }
        uVar3 = F_0046e5e0(pvVar2 GEN_EDX_ARG);
        F_00a39820(param_1 GEN_EDX_ARG,param_2,param_3,uVar3);
        uVar3 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17,1);
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00a3e8f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3e8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa3e8f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  ushort uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  undefined4 uVar8;
  
  pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,param_1)));
  if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
    return 3;
  }
  pvVar3 = ((undefined *)GEN_TOP(F_00a37da0(pvVar3 GEN_EDX_ARG,(int)(short)param_2)));
  if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
    return 4;
  }
  uVar4 = F_0046e5e0(pvVar3 GEN_EDX_ARG);
  uVar4 = F_00ab24a0(uVar4);
  if ((uVar4 == 0) || (uVar5 = F_00906df0(pvVar3 GEN_EDX_ARG), uVar5 == 0)) {
    return 4;
  }
  if ((*((char *)GEN_TOP((uVar4 + 0xbf))) == '\0') && (*((char *)GEN_TOP((uVar4 + 0xa2))) != '\0')) {
    uVar2 = F_00906d60(pvVar3 GEN_EDX_ARG);
    if (uVar2 < 30000) {
      return 0x1d;
    }
    uVar2 = F_0071d210(pvVar3 GEN_EDX_ARG);
    if (uVar2 == 0) {
      bVar1 = F_00a366f0(param_1);
      if (bVar1 != 0) {
        return 0;
      }
      uVar4 = F_00906df0(pvVar3 GEN_EDX_ARG);
      uVar4 = F_00ab24a0(uVar4);
      if ((uVar4 == 0) || (uVar5 = F_00906df0(pvVar3 GEN_EDX_ARG), uVar5 == 0)) {
        return 6;
      }
      if (*((char *)GEN_TOP((uVar4 + 0xbe))) == '\0') {
        return 0;
      }
      iVar7 = 10000;
      do {
        uVar8 = 0;
        uVar4 = F_00906df0(pvVar3 GEN_EDX_ARG);
        pvVar6 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,iVar7)));
        uVar4 = F_00a3a8f0(pvVar6 GEN_EDX_ARG,uVar4,uVar8);
        if (uVar4 != 0) {
          return 0x1b;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x2717);
      iVar7 = 11000;
      do {
        uVar8 = 0;
        uVar4 = F_00906df0(pvVar3 GEN_EDX_ARG);
        pvVar6 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,iVar7)));
        uVar4 = F_00a3a8f0(pvVar6 GEN_EDX_ARG,uVar4,uVar8);
        if (uVar4 != 0) {
          return 0x1b;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x2af9);
      uVar5 = F_00906df0(pvVar3 GEN_EDX_ARG);
      pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x2ee2)));
      uVar4 = F_00a3a8f0(pvVar3 GEN_EDX_ARG,uVar5,uVar4);
      if (uVar4 == 0) {
        return 0;
      }
      return 0x1b;
    }
  }
  return 0x1c;
}

/* ref: FUN_00a3eaa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3eaa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa3eaa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ushort uVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  
  pvVar2 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 3;
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00a37da0(pvVar2 GEN_EDX_ARG,(int)(short)param_2)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 4;
  }
  uVar3 = F_0046e5e0(pvVar2 GEN_EDX_ARG);
  uVar3 = F_00ab24a0(uVar3);
  if (uVar3 != 0) {
    uVar4 = F_00906df0(pvVar2 GEN_EDX_ARG);
    if (uVar4 != 0) {
      if (*((char *)GEN_TOP((uVar3 + 0xbf))) != '\0') {
        return 0x1c;
      }
      if (*((char *)GEN_TOP((uVar3 + 0xbe))) != '\0') {
        return 0x1b;
      }
      uVar1 = F_00906d60(pvVar2 GEN_EDX_ARG);
      if (uVar1 < 30000) {
        return 0x1d;
      }
      uVar1 = F_0071d210(pvVar2 GEN_EDX_ARG);
      return -(uint)(uVar1 != 0) & 0x1c;
    }
  }
  return 4;
}

/* ref: FUN_00a3eb60 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a3eb60(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa3eb60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  char cVar1;
  short sVar2;
  undefined * this;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined * pvVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint local_10;
  uint local_c;
  
  this = param_2;
  uVar7 = F_0046e5e0(param_1 GEN_EDX_ARG);
  uVar8 = F_0046e5e0(param_2 GEN_EDX_ARG);
  local_c = (uint)(uVar8 != uVar7);
  if (*((char *)GEN_TOP(((int)param_2 + 6))) == '\0') {
    uVar7 = *((uint *)GEN_TOP(((int)param_2 + 0xc)));
  }
  else {
    iVar10 = (int)*((short *)GEN_TOP(((int)param_2 + 8)));
    pvVar9 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)param_2 + 10))))));
    pvVar9 = ((undefined *)GEN_TOP(F_00a37da0(pvVar9 GEN_EDX_ARG,iVar10)));
    uVar7 = *((uint *)GEN_TOP(((int)param_2 + 0xc)));
    uVar8 = F_00a3a8a0(pvVar9 GEN_EDX_ARG);
    if (uVar8 < uVar7) {
      uVar7 = F_00a3a8a0(pvVar9 GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)param_2 + 0xc))) = uVar7;
    }
  }
  param_2 = ((undefined *)GEN_TOP(uVar7));
  if (*((char *)GEN_TOP(((int)param_1 + 6))) == '\0') {
    uVar7 = *((uint *)GEN_TOP(((int)param_1 + 0xc)));
  }
  else {
    iVar10 = (int)*((short *)GEN_TOP(((int)param_1 + 8)));
    pvVar9 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)param_1 + 10))))));
    pvVar9 = ((undefined *)GEN_TOP(F_00a37da0(pvVar9 GEN_EDX_ARG,iVar10)));
    uVar7 = *((uint *)GEN_TOP(((int)param_1 + 0xc)));
    uVar8 = F_00a3a8a0(pvVar9 GEN_EDX_ARG);
    if (uVar8 < uVar7) {
      uVar7 = F_00a3a8a0(pvVar9 GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)param_1 + 0xc))) = uVar7;
    }
  }
  if (param_2 != ((undefined *)GEN_TOP(uVar7))) {
    local_c = local_c | 2;
  }
  uVar5 = F_00906d60(param_1 GEN_EDX_ARG);
  uVar6 = F_00906d60(this GEN_EDX_ARG);
  if (uVar6 != uVar5) {
    local_c = local_c | 4;
  }
  uVar5 = F_0071d210(param_1 GEN_EDX_ARG);
  uVar6 = F_0071d210(this GEN_EDX_ARG);
  if (uVar6 != uVar5) {
    local_c = local_c | 8;
  }
  if (((*((byte *)GEN_TOP(((int)param_1 + 0x14))) ^ *((byte *)GEN_TOP(((int)this + 0x14)))) & 1) != 0) {
    local_c = local_c | 0x10;
  }
  uVar11 = F_00906d30(param_1 GEN_EDX_ARG);
  uVar12 = F_00906d30(this GEN_EDX_ARG);
  if (uVar11 != uVar12) {
    local_c = local_c | 0x20;
  }
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 6)));
  local_10 = 0;
  do {
    uVar5 = F_0071d2c0(param_1 GEN_EDX_ARG,local_10);
    uVar6 = F_0071d2c0(this GEN_EDX_ARG,local_10);
    if (uVar6 != uVar5) {
      local_c = local_c | 0x40;
    }
    if (*((char *)GEN_TOP(((int)this + 6))) == '\0') {
LAB_00a3ed2a: ;
      bVar3 = *((byte *)GEN_TOP(((local_10 & 0xff) + 0x2a + (int)this)));
    }
    else {
      uVar5 = *((ushort *)GEN_TOP(((int)this + 10)));
      pvVar9 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)uVar5)));
      if (pvVar9 == ((undefined *)GEN_TOP(0x0))) goto LAB_00a3ed2a;
      sVar2 = *((short *)GEN_TOP(((int)this + 8)));
      uVar7 = F_00a37da0(pvVar9 GEN_EDX_ARG,(int)sVar2);
      if ((uVar7 == 0) && (this == ((undefined *)GEN_TOP(0x0)))) goto LAB_00a3ed2a;
      pvVar9 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)uVar5)));
      if (pvVar9 == ((undefined *)GEN_TOP(0x0))) {
        bVar3 = F_0071d300(((undefined *)GEN_TOP(0x0)) GEN_EDX_ARG,local_10);
      }
      else {
        pvVar9 = ((undefined *)GEN_TOP(F_00a37da0(pvVar9 GEN_EDX_ARG,(int)sVar2)));
        if (pvVar9 == ((undefined *)GEN_TOP(0x0))) {
          pvVar9 = this;
        }
        bVar3 = F_0071d300(pvVar9 GEN_EDX_ARG,local_10);
      }
    }
    if (cVar1 == '\0') {
LAB_00a3eda0: ;
      bVar4 = *((byte *)GEN_TOP(((local_10 & 0xff) + 0x2a + (int)param_1)));
    }
    else {
      uVar5 = *((ushort *)GEN_TOP(((int)param_1 + 10)));
      pvVar9 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)uVar5)));
      if (pvVar9 == ((undefined *)GEN_TOP(0x0))) goto LAB_00a3eda0;
      sVar2 = *((short *)GEN_TOP(((int)param_1 + 8)));
      uVar7 = F_00a37da0(pvVar9 GEN_EDX_ARG,(int)sVar2);
      if ((uVar7 == 0) && (param_1 == ((undefined *)GEN_TOP(0x0)))) goto LAB_00a3eda0;
      pvVar9 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)uVar5)));
      if (pvVar9 == ((undefined *)GEN_TOP(0x0))) {
        bVar4 = F_0071d300(((undefined *)GEN_TOP(0x0)) GEN_EDX_ARG,local_10);
      }
      else {
        pvVar9 = ((undefined *)GEN_TOP(F_00a37da0(pvVar9 GEN_EDX_ARG,(int)sVar2)));
        if (pvVar9 == ((undefined *)GEN_TOP(0x0))) {
          pvVar9 = param_1;
        }
        bVar4 = F_0071d300(pvVar9 GEN_EDX_ARG,local_10);
      }
    }
    if (bVar3 != bVar4) {
      local_c = local_c | 0x40;
    }
    local_10 = local_10 + 1;
    if (4 < (int)local_10) {
      return local_c;
    }
  } while( true );
}

/* ref: FUN_00a3edd0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00a3edd0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa3edd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  ushort uVar1;
  int * piVar2;
  undefined * this;
  int * piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  piVar2 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1)));
  iVar6 = 0;
  do {
    if ((((piVar2 != ((int *)GEN_TOP(0x0))) && (*piVar2 != 0)) && (-1 < iVar4)) && (iVar4 < piVar2[3])) {
      this = ((undefined *)GEN_TOP((*piVar2 + iVar6)));
      if (*((char *)GEN_TOP(((int)this + 6))) != '\0') {
        iVar5 = (int)*((short *)GEN_TOP(((int)this + 8)));
        piVar3 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this + 10))))));
        if (((*piVar3 == 0) || (iVar5 < 0)) || (piVar3[3] <= iVar5)) {
          this = ((undefined *)GEN_TOP(0x0));
        }
        else {
          this = ((undefined *)GEN_TOP((iVar5 * 0x40 + *piVar3)));
        }
      }
      if ((this != ((undefined *)GEN_TOP(0x0))) && (uVar1 = F_00906d60(this GEN_EDX_ARG), uVar1 < 0x2329)) {
        return 1;
      }
    }
    iVar6 = iVar6 + 0x40;
    iVar4 = iVar4 + 1;
    if (0x63f < iVar6) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00a3ee70 */
GEN_OWN GEN_FRAME uint F_00a3ee70(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa3ee70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  undefined * this;
  uint uVar2;
  uint uVar3;
  
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x3e);
  if (bVar1 == 0) {
    return 0x2c4;
  }
  this = ((undefined *)GEN_TOP(F_006b8c00()));
  bVar1 = F_006d7160(this GEN_EDX_ARG);
  if (bVar1 != 0) {
    if ((short)param_1 != 10000) {
      if ((param_1 & 0xffff) != 0) {
        return 0x2cb;
      }
      uVar2 = F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,1000);
      if (*((char *)GEN_TOP((uVar2 + 0x10))) == '\0') {
        return 0x2cb;
      }
    }
    bVar1 = F_00a38650(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_2);
    if (bVar1 == 0) {
      return 0x2cb;
    }
    uVar2 = F_00a3c7b0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1,0);
    uVar3 = F_00a3c7b0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_2,0);
    uVar2 = F_00ab24a0(uVar2);
    uVar3 = F_00ab24a0(uVar3);
    if ((uVar2 == 0) || (uVar3 == 0)) {
      return 0x2cc;
    }
    if (*((char *)GEN_TOP((uVar2 + 0xa8))) != *((char *)GEN_TOP((uVar3 + 0xa8)))) {
      return 0x2da;
    }
  }
  return 0;
}

/* ref: FUN_00a3ef50 */
GEN_OWN GEN_FRAME uint F_00a3ef50(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa3ef50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (((short)param_1 != 10000) &&
     (((param_1 & 0xffff) != 0 ||
      (uVar2 = F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,1000), *((char *)GEN_TOP((uVar2 + 0x10))) == '\0')))) {
    return 0x2cb;
  }
  uVar2 = F_00ab24a0(param_3);
  if (uVar2 == 0) {
    return 0x2cc;
  }
  if (*((byte *)GEN_TOP((uVar2 + 0xa6))) == 0) {
    return 0x2c9;
  }
  if ((REFG(undefined1, 0x14ab0d2) == 0) || (*((char *)GEN_TOP((REFG(undefined1, 0x14ab0d2) + 0xc2 + uVar2))) == '\0')) {
    return 0x2c0;
  }
  if (REFG(char, 0x14ab0d1) == '\0') {
    if (*((char *)GEN_TOP((uVar2 + 200))) == '\0') {
      return 0x2c2;
    }
  }
  else if ((REFG(char, 0x14ab0d1) == '\x01') && (*((char *)GEN_TOP((uVar2 + 0xc9))) == '\0')) {
    return 0x2c1;
  }
  if ((*((char *)GEN_TOP((uVar2 + 0xaf))) != '\0') && (*((char *)GEN_TOP((uVar2 + 0xaf))) != REFG(char, 0x14ab29a))) {
    return 0x2f0;
  }
  uVar3 = F_00ab25a0((uint)*((byte *)GEN_TOP((uVar2 + 0xa6))));
  if (uVar3 == 0) {
    return 0x2cc;
  }
  if (*((char *)GEN_TOP((uVar3 + 4 + param_2))) != '\x01') {
    return 0x2be;
  }
  if (param_2 == 0xd) {
    uVar3 = F_00a3c7b0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1,0);
    if (uVar3 == 0) {
      return 0x2c6;
    }
    uVar3 = F_00a36f00(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0);
    if (uVar3 == 0) {
      return 0x2cc;
    }
    bVar1 = F_00a368f0(uVar3,(uint)*((byte *)GEN_TOP((uVar2 + 0xa8))));
    if (bVar1 == 0) {
      bVar1 = F_00a36890(uVar3);
      if (bVar1 == 0) {
        uVar2 = F_00a36f00(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0xd);
        return (uVar2 != 0) + 0x2ad;
      }
      return 0x2b4;
    }
    bVar1 = F_00a35cb0();
    if (bVar1 == 0) {
      return 0x2da;
    }
LAB_00a3f105: ;
    uVar3 = F_00a3c7b0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1,0);
    if (uVar3 == 0) {
      return 0x2c6;
    }
    uVar3 = F_00a36f00(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0);
    if (uVar3 == 0) {
      return 0x2cc;
    }
    uVar3 = F_00ab25a0((uint)*((byte *)GEN_TOP((uVar3 + 0xa6))));
    if (uVar3 == 0) {
      return 0x2cc;
    }
    if (*((char *)GEN_TOP((uVar3 + 4 + param_2))) == -1) {
      return 0x2c7;
    }
  }
  else if (param_2 != 0) goto LAB_00a3f105;
  uVar3 = F_00a3c7b0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1,0);
  if (param_2 == 0) {
    if (uVar3 == 0) {
      uVar3 = F_00ab24a0(0);
      goto LAB_00a3f167;
    }
  }
  else if (uVar3 == 0) {
    return 0x2c6;
  }
  uVar3 = F_00a36f00(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0);
LAB_00a3f167: ;
  if (uVar3 == 0) {
    return 0x2cc;
  }
  bVar1 = *((byte *)GEN_TOP((uVar3 + 0xa8)));
  uVar5 = F_00a3c7b0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1,0xd);
  if (uVar5 != 0) {
    uVar5 = F_00a36f00(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0xd);
    if (uVar5 == 0) {
      return 0x2cc;
    }
    bVar1 = *((byte *)GEN_TOP((uVar5 + 0xa8)));
  }
  uVar5 = (uint)bVar1;
  if (param_2 == 0) {
    uVar3 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP((uVar2 + 0xa8))),0);
    uVar3 = uVar3 & 0xffff;
    if ((param_1 == (REFG(int, 0x14a4258) - 1000U & 0xffff)) && (bVar1 = F_00a35cb0(), bVar1 == 0)) {
      if ((uVar5 != 0) &&
         ((uVar5 != *((byte *)GEN_TOP((uVar2 + 0xa8))) && (bVar1 = F_00a368f0(uVar2,uVar5), bVar1 == 0)))) {
        return 0x2da;
      }
      if (*(int *)&REFG(undefined2, 0x1379c78) == 0x14e) {
        return 0x2b1;
      }
    }
  }
  else {
    uVar4 = F_00ab21d0((uint)*((byte *)GEN_TOP((uVar2 + 0xac))));
    if (*((char *)GEN_TOP((uVar4 + 4 + uVar5))) == '\0') {
      return 0x2bf;
    }
    uVar3 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP((uVar3 + 0xa8))),0);
    uVar3 = uVar3 & 0xffff;
  }
  if (uVar3 != 0) {
    return (*((byte *)GEN_TOP((uVar2 + 0x9f))) <= uVar3) - 1 & 0x2c3;
  }
  return 0x2ca;
}

/* ref: Client::Game::Item::NumericInputCallback::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3f280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa3f280u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * pvVar4;
  int * piVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (0 < param_3) {
    uVar3 = *param_2 & 0xf;
    if ((uVar3 == 0) || (uVar1 = param_2[1], (int)uVar1 < 1)) {
      if ((uVar3 != 0) && (((param_2[1] != 0xffffffff && (uVar3 != 0)) && (param_2[1] != 0))))
      goto LAB_00a3f352;
      puVar2 = *(undefined4 * PTR32 *)(this + 4);
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        F_00a3ced0(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,*puVar2,(uint)*(ushort *)(puVar2 + 1),1);
      }
    }
    else {
      iVar6 = *(int *)(this + 4);
      if (iVar6 != 0) {
        *((uint *)GEN_TOP((iVar6 + 0xc))) = uVar1;
        if (((uVar1 == 0) && (*((undefined4 *)GEN_TOP((iVar6 + 0xc))) = 0, *((char *)GEN_TOP((iVar6 + 6))) == '\0')) &&
           (*((int *)GEN_TOP((iVar6 + 8))) != 1)) {
          *((undefined4 *)GEN_TOP((iVar6 + 8))) = 0;
        }
        piVar5 = *(int * PTR32 *)(this + 4);
        if (*((char *)GEN_TOP(((int)piVar5 + 6))) == '\0') {
          uVar3 = 9999;
        }
        else {
          uVar3 = (uint)*((ushort *)GEN_TOP(((int)piVar5 + 10)));
        }
        iVar6 = (int)(short)piVar5[2];
        pvVar4 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar3)));
        pvVar4 = ((undefined *)GEN_TOP(F_00a37da0(pvVar4 GEN_EDX_ARG,iVar6)));
        uVar3 = F_0046e5e0(pvVar4 GEN_EDX_ARG);
        if ((uVar3 < 0x1e8481) && (*piVar5 == 0x7d5)) {
          if ((*param_2 & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = param_2[1];
          }
          F_00a38d80(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*(ushort *)(piVar5 + 1),uVar3);
        }
      }
    }
  }
  piVar5 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar7 = 0x1b;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x48))))(piVar5 GEN_EDX_ARG);
  pvVar4 = ((undefined *)GEN_TOP(F_00763050(uVar3 GEN_EDX_ARG,uVar7)));
  F_00777710(pvVar4 GEN_EDX_ARG);
LAB_00a3f352: ;
  *(undefined4 *)(this + 4) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_00a3f3a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3f3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa3f3a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  
  pvVar2 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,param_1)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    return 3;
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00a37da0(pvVar2 GEN_EDX_ARG,(int)(short)param_2)));
  if ((*((char *)GEN_TOP(((int)pvVar2 + 6))) == '\0') && (*((int *)GEN_TOP(((int)pvVar2 + 8))) == 0)) {
    return 4;
  }
  uVar3 = F_00a37c50(pvVar2 GEN_EDX_ARG);
  if (uVar3 != 0) {
    return 0x13;
  }
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x6f);
  if (bVar1 == 0) {
    F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x6f);
    return 0xe;
  }
  F_00a3d640(this GEN_EDX_ARG,param_1,param_2);
  F_00a3a720();
  return 0;
}

/* ref: FUN_00a3f440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3f440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3f440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (param_1 != 1000) {
    return 0xf;
  }
  uVar1 = F_00a3c7b0(this GEN_EDX_FWD,0,0);
  if (uVar1 == 0) {
    return 0x10;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 1000;
  if (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0))) {
    F_00aa8290(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00a3f4a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a3f4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(short * param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xa3f4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(short * param_3 = (short *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  short * psVar1;
  byte bVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  psVar1 = param_3;
  if ((*param_3 < 100) && (iVar8 = param_1, param_1 <= param_2)) {
    while( true ) {
      piVar3 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,iVar8)));
      iVar6 = 0;
      if (piVar3 == ((int *)GEN_TOP(0x0))) break;
      iVar4 = piVar3[3];
      if (0 < iVar4) {
        param_3 = ((short *)GEN_TOP(0x0));
        do {
          if (*piVar3 == 0) {
            return;
          }
          if (iVar6 < 0) {
            return;
          }
          if (iVar4 <= iVar6) {
            return;
          }
          iVar4 = (int)param_3 + *piVar3;
          if (*((char *)GEN_TOP((iVar4 + 6))) != '\0') {
            iVar7 = (int)*((short *)GEN_TOP((iVar4 + 8)));
            piVar5 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((iVar4 + 10))))));
            if (((*piVar5 == 0) || (iVar7 < 0)) || (piVar5[3] <= iVar7)) {
              iVar4 = 0;
            }
            else {
              iVar4 = iVar7 * 0x40 + *piVar5;
            }
          }
          if (iVar4 == 0) {
            return;
          }
          bVar2 = F_00a3cac0(iVar4,param_5);
          if (bVar2 != 0) {
            *((int *)GEN_TOP((param_4 + *psVar1 * 4))) = iVar4;
            *psVar1 = *psVar1 + 1;
            if (99 < *psVar1) {
              return;
            }
          }
          iVar4 = piVar3[3];
          param_3 = ((short *)GEN_TOP(((int)param_3 + 0x40)));
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar4);
      }
      iVar8 = iVar8 + 1;
      if (param_2 < iVar8) {
        return;
      }
    }
  }
  return;
}

/* ref: FUN_00a3f5b0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00a3f5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa3f5b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  uVar1 = F_00b9f960(&REFG(undefined, 0x14b0f2c) GEN_EDX_FWD);
  if (*((int *)GEN_TOP((uVar1 + 4 + (short)param_2 * 0x74))) - 0x1e8481U < 0x489) {
    F_00a3f4a0(this GEN_EDX_ARG,0x7d4,0x7d4,&(*(undefined * PTR32 *)(gen_frame + 0x0)),param_1,param_2);
    return (ushort)(*(undefined * PTR32 *)(gen_frame + 0x0));
  }
  F_00a3f4a0(this GEN_EDX_ARG,0xdac,0xdac,&(*(undefined * PTR32 *)(gen_frame + 0x0)),param_1,param_2);
  F_00a3f4a0(this GEN_EDX_ARG,0xc80,0xc89,&(*(undefined * PTR32 *)(gen_frame + 0x0)),param_1,param_2);
  F_00a3f4a0(this GEN_EDX_ARG,0xce4,0xce4,&(*(undefined * PTR32 *)(gen_frame + 0x0)),param_1,param_2);
  F_00a3f4a0(this GEN_EDX_ARG,0,3,&(*(undefined * PTR32 *)(gen_frame + 0x0)),param_1,param_2);
  return (ushort)(*(undefined * PTR32 *)(gen_frame + 0x0));
}

/* ref: FUN_00a3f670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3f670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa3f670u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  ushort uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined4 uVar7;
  
  iVar1 = *param_1;
  if ((iVar1 == 1000) || (iVar1 == 11000)) {
    uVar3 = F_00a3a750(iVar1 - 1000,(int)(short)param_1[1]);
    if (uVar3 != 0) {
      F_00a7d290(uVar3,0,0,0,0,REFG(float, 0x10916ec));
      return 0xf;
    }
  }
  uVar3 = F_0046e5e0(param_1 GEN_EDX_ARG);
  if (uVar3 - 0x1e8481 < 0x489) goto LAB_00a3f7b2;
  piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar3 = F_0046e5e0(param_1 GEN_EDX_ARG);
  uVar3 = F_00ab24a0(uVar3);
  if (uVar3 != 0) {
    uVar5 = F_00906df0(param_1 GEN_EDX_ARG);
    if (uVar5 != 0) {
      if ((*((int *)GEN_TOP(((int)this + 0x334))) < 3) && (param_2 != 0x7d2)) {
LAB_00a3f7b2: ;
        uVar3 = F_00a37c50(param_1 GEN_EDX_ARG);
        if (uVar3 != 0) {
          return 0x13;
        }
        F_00a3ced0(this GEN_EDX_ARG,param_2,param_3,0);
        uVar3 = F_00a3cd20(this GEN_EDX_ARG,param_1,param_2,param_3,(undefined1)param_4);
        return uVar3;
      }
      if (*((char *)GEN_TOP((uVar3 + 0xbf))) == '\0') {
        uVar2 = F_0071d210(param_1 GEN_EDX_ARG);
        if (uVar2 == 0) {
          if (*((int *)GEN_TOP((uVar3 + 0x74))) != 0) {
            uVar2 = F_00906d60(param_1 GEN_EDX_ARG);
            if (uVar2 < 30000) {
              uVar7 = 0x29;
              pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
              F_0046a630(pvVar6 GEN_EDX_ARG,uVar7);
              return 0x1d;
            }
          }
          goto LAB_00a3f7b2;
        }
      }
      uVar7 = 0x1f;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
      F_0046a630(pvVar6 GEN_EDX_ARG,uVar7);
      return 0x1c;
    }
  }
  return 6;
}

/* ref: FUN_00a3f800 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a3f800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa3f800u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  
  this_00 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,param_1)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_00a3c8c0(0,param_3);
    return bVar1;
  }
  uVar2 = F_00a37da0(this_00 GEN_EDX_ARG,(int)(short)param_2);
  bVar1 = F_00a3c8c0(uVar2,param_3);
  return bVar1;
}

/* ref: FUN_00a3f840 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a3f840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa3f840u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,param_1)));
  if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    pvVar1 = ((undefined *)GEN_TOP(F_00a37da0(pvVar1 GEN_EDX_ARG,(int)(short)param_2)));
  }
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = param_3;
    if (param_3 == 0) {
      uVar2 = F_0046e5e0(pvVar1 GEN_EDX_ARG);
      uVar2 = F_00ab24a0(uVar2);
      if (uVar2 == 0) {
        return 0;
      }
    }
    if (*((char *)GEN_TOP((uVar2 + 0xbd))) == '\0') {
      return *((char *)GEN_TOP((uVar2 + 0xae))) != '\0';
    }
  }
  return 0;
}

/* ref: FUN_00a3f8a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3f8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa3f8a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_FWD,0x6b);
  if (bVar1 == 0) {
    F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x6b);
    F_00a3d7c0(this GEN_EDX_ARG,param_1,param_2);
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar5 = 0x22;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x48))))(piVar2 GEN_EDX_ARG);
    pvVar4 = ((undefined *)GEN_TOP(F_00763050(uVar3 GEN_EDX_ARG,uVar5)));
    F_008e9cb0(pvVar4 GEN_EDX_ARG);
    uVar5 = 0x23;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x48))))(piVar2 GEN_EDX_ARG);
    pvVar4 = ((undefined *)GEN_TOP(F_00763050(uVar3 GEN_EDX_ARG,uVar5)));
    F_008edf60(pvVar4 GEN_EDX_ARG);
    return 9;
  }
  if (REFG(int, 0x1379694) != 0) {
    uVar3 = F_00aa02d0(REFG(int, 0x1379694) GEN_EDX_ARG,0xa2,0);
    if ((char)uVar3 != '\0') {
      F_00a3d7c0(this GEN_EDX_ARG,param_1,param_2);
      piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        uVar5 = 0x1a0;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
        F_0046a630(pvVar4 GEN_EDX_ARG,uVar5);
      }
      return 9;
    }
  }
  if (((((param_1 == 1000) || (param_1 == 11000)) || (param_1 == 0xdac)) ||
      ((param_1 - 0xc80U < 10 || (param_1 == 0xce4)))) ||
     ((param_1 == 0xd48 || ((-1 < param_1 && (param_1 < 4)))))) {
    pvVar4 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,param_1)));
    if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
      uVar3 = F_00a37da0(pvVar4 GEN_EDX_ARG,(int)(short)param_2);
      if ((*((char *)GEN_TOP((uVar3 + 6))) == '\0') && (*((int *)GEN_TOP((uVar3 + 8))) == 0)) {
        return 4;
      }
      *((undefined4 *)GEN_TOP(((int)this + 0x2490))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x2494))) = 0;
      F_00a39570(this GEN_EDX_ARG,param_1,param_2);
      return 0;
    }
  }
  else {
    F_00a3d7c0(this GEN_EDX_ARG,param_1,param_2);
    F_00a3a050();
  }
  return 3;
}

/* ref: FUN_00a3fa30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3fa30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa3fa30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x28))) == 1000) {
    uVar1 = F_00a3c7b0(this GEN_EDX_FWD,0,0);
    if ((uVar1 != 0) && (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)))) {
      F_00aa8290(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
    }
  }
  F_00a52870(param_1,*((undefined4 *)GEN_TOP(((int)this + 0x360))));
  uVar1 = *((int *)GEN_TOP(((int)this + 0x360))) + 1;
  *((uint *)GEN_TOP(((int)this + 0x360))) = uVar1 % 0xfffffff | 0x10000000;
  return uVar1 / 0xfffffff;
}

/* ref: FUN_00a3faa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a3faa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa3faa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  undefined * pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_c;
  
  iVar8 = 0;
  iVar6 = 0;
  do {
    uVar2 = *(uint *)this;
    if (*((char *)GEN_TOP((iVar6 + 0x10 + uVar2))) != '\0') {
      if ((((*((int *)GEN_TOP(((int)this + 0x28))) == 1000) &&
           (pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,1000))), pvVar1 != ((undefined *)GEN_TOP(0x0)))) &&
          (pvVar1 = ((undefined *)GEN_TOP(F_00a37da0(pvVar1 GEN_EDX_ARG,0))), pvVar1 != ((undefined *)GEN_TOP(0x0)))) &&
         ((uVar2 = F_0046e5e0(pvVar1 GEN_EDX_ARG), uVar2 != 0 && (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)))))) {
        F_00aa8290(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
      }
      F_00a52870(iVar8,*((undefined4 *)GEN_TOP(((int)this + 0x360))));
      uVar3 = *((int *)GEN_TOP(((int)this + 0x360))) + 1;
      uVar2 = uVar3 / 0xfffffff;
      *((uint *)GEN_TOP(((int)this + 0x360))) = uVar3 % 0xfffffff | 0x10000000;
    }
    iVar6 = iVar6 + 0x20;
    iVar8 = iVar8 + 1;
  } while (iVar6 < 0x80);
  if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x10))) != '\0') {
    if (((*((int *)GEN_TOP(((int)this + 0x28))) == 1000) &&
        (pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,1000))), pvVar1 != ((undefined *)GEN_TOP(0x0)))) &&
       ((pvVar1 = ((undefined *)GEN_TOP(F_00a37da0(pvVar1 GEN_EDX_ARG,0))), pvVar1 != ((undefined *)GEN_TOP(0x0)) &&
        ((uVar2 = F_0046e5e0(pvVar1 GEN_EDX_ARG), uVar2 != 0 && (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)))))))) {
      F_00aa8290(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
    }
    F_00a52870(1000,*((undefined4 *)GEN_TOP(((int)this + 0x360))));
    uVar3 = *((int *)GEN_TOP(((int)this + 0x360))) + 1;
    uVar2 = uVar3 / 0xfffffff;
    *((uint *)GEN_TOP(((int)this + 0x360))) = uVar3 % 0xfffffff | 0x10000000;
  }
  iVar6 = 0;
  iVar8 = 0;
  do {
    if (*((char *)GEN_TOP((iVar8 + 0x10 + *((int *)GEN_TOP(((int)this + 8)))))) != '\0') {
      if ((((*((int *)GEN_TOP(((int)this + 0x28))) == 1000) &&
           (piVar4 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,1000))), piVar4 != ((int *)GEN_TOP(0x0)))) &&
          (pvVar1 = ((undefined *)GEN_TOP(*piVar4)), pvVar1 != ((undefined *)GEN_TOP(0x0)))) && (0 < piVar4[3])) {
        if (*((char *)GEN_TOP(((int)pvVar1 + 6))) != '\0') {
          iVar7 = (int)*((short *)GEN_TOP(((int)pvVar1 + 8)));
          piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar1 + 10))))));
          if (((*piVar4 == 0) || (iVar7 < 0)) || (piVar4[3] <= iVar7)) {
            pvVar1 = ((undefined *)GEN_TOP(0x0));
          }
          else {
            pvVar1 = ((undefined *)GEN_TOP((*piVar4 + iVar7 * 0x40)));
          }
        }
        if (((pvVar1 != ((undefined *)GEN_TOP(0x0))) && (uVar2 = F_0046e5e0(pvVar1 GEN_EDX_ARG), uVar2 != 0)) &&
           (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)))) {
          F_00aa8290(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
        }
      }
      F_00a52870(iVar6 + 2000,*((undefined4 *)GEN_TOP(((int)this + 0x360))));
      uVar3 = *((int *)GEN_TOP(((int)this + 0x360))) + 1;
      uVar2 = uVar3 / 0xfffffff;
      *((uint *)GEN_TOP(((int)this + 0x360))) = uVar3 % 0xfffffff | 0x10000000;
    }
    iVar8 = iVar8 + 0x20;
    iVar6 = iVar6 + 1;
  } while (iVar8 < 0x160);
  iVar6 = 0;
  local_c = 0;
  do {
    if (*((char *)GEN_TOP((iVar6 + 0x10 + *((int *)GEN_TOP(((int)this + 0xc)))))) != '\0') {
      if ((((*((int *)GEN_TOP(((int)this + 0x28))) == 1000) &&
           (piVar4 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,1000))), piVar4 != ((int *)GEN_TOP(0x0)))) &&
          (pvVar1 = ((undefined *)GEN_TOP(*piVar4)), pvVar1 != ((undefined *)GEN_TOP(0x0)))) && (0 < piVar4[3])) {
        if (*((char *)GEN_TOP(((int)pvVar1 + 6))) != '\0') {
          iVar8 = (int)*((short *)GEN_TOP(((int)pvVar1 + 8)));
          piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar1 + 10))))));
          if (((*piVar4 == 0) || (iVar8 < 0)) || (piVar4[3] <= iVar8)) {
            pvVar1 = ((undefined *)GEN_TOP(0x0));
          }
          else {
            pvVar1 = ((undefined *)GEN_TOP((iVar8 * 0x40 + *piVar4)));
          }
        }
        if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
          if (*((char *)GEN_TOP(((int)pvVar1 + 6))) == '\0') {
            uVar2 = *((uint *)GEN_TOP(((int)pvVar1 + 8)));
            if ((*((byte *)GEN_TOP(((int)pvVar1 + 0x14))) & 1) != 0) {
              uVar2 = uVar2 + 1000000;
            }
          }
          else {
            piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar1 + 10))))));
            if (piVar4 == ((int *)GEN_TOP(0x0))) {
              uVar2 = F_0046e5e0(((undefined *)GEN_TOP(0x0)) GEN_EDX_ARG);
            }
            else {
              iVar8 = (int)*((short *)GEN_TOP(((int)pvVar1 + 8)));
              if (((*piVar4 == 0) || (iVar8 < 0)) || (piVar4[3] <= iVar8)) {
LAB_00a3fe50: ;
                pvVar5 = pvVar1;
              }
              else {
                pvVar5 = ((undefined *)GEN_TOP((iVar8 * 0x40 + *piVar4)));
                if (*((char *)GEN_TOP(((int)pvVar5 + 6))) != '\0') {
                  iVar8 = (int)*((short *)GEN_TOP(((int)pvVar5 + 8)));
                  piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar5 + 10))))));
                  if (((*piVar4 == 0) || (iVar8 < 0)) || (piVar4[3] <= iVar8)) {
                    pvVar5 = ((undefined *)GEN_TOP(0x0));
                  }
                  else {
                    pvVar5 = ((undefined *)GEN_TOP((iVar8 * 0x40 + *piVar4)));
                  }
                }
                if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto LAB_00a3fe50;
              }
              uVar2 = F_0046e5e0(pvVar5 GEN_EDX_ARG);
            }
          }
          if ((uVar2 != 0) && (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)))) {
            F_00aa8290(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
          }
        }
      }
      F_00a52870(local_c + 10000,*((undefined4 *)GEN_TOP(((int)this + 0x360))));
      uVar3 = *((int *)GEN_TOP(((int)this + 0x360))) + 1;
      uVar2 = uVar3 / 0xfffffff;
      *((uint *)GEN_TOP(((int)this + 0x360))) = uVar3 % 0xfffffff | 0x10000000;
    }
    local_c = local_c + 1;
    iVar6 = iVar6 + 0x20;
  } while (iVar6 < 0xe0);
  if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x10))) != '\0') {
    if (((*((int *)GEN_TOP(((int)this + 0x28))) == 1000) &&
        (piVar4 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,1000))), piVar4 != ((int *)GEN_TOP(0x0)))) &&
       ((pvVar1 = ((undefined *)GEN_TOP(*piVar4)), pvVar1 != ((undefined *)GEN_TOP(0x0)) && (0 < piVar4[3])))) {
      if (*((char *)GEN_TOP(((int)pvVar1 + 6))) != '\0') {
        iVar6 = (int)*((short *)GEN_TOP(((int)pvVar1 + 8)));
        piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar1 + 10))))));
        if (((*piVar4 == 0) || (iVar6 < 0)) || (piVar4[3] <= iVar6)) {
          pvVar1 = ((undefined *)GEN_TOP(0x0));
        }
        else {
          pvVar1 = ((undefined *)GEN_TOP((iVar6 * 0x40 + *piVar4)));
        }
      }
      if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
        if (*((char *)GEN_TOP(((int)pvVar1 + 6))) == '\0') {
          uVar2 = *((uint *)GEN_TOP(((int)pvVar1 + 8)));
          if ((*((byte *)GEN_TOP(((int)pvVar1 + 0x14))) & 1) != 0) {
            uVar2 = uVar2 + 1000000;
          }
        }
        else {
          piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar1 + 10))))));
          if (piVar4 == ((int *)GEN_TOP(0x0))) {
            uVar2 = F_0046e5e0(((undefined *)GEN_TOP(0x0)) GEN_EDX_ARG);
          }
          else {
            iVar6 = (int)*((short *)GEN_TOP(((int)pvVar1 + 8)));
            if (((*piVar4 == 0) || (iVar6 < 0)) || (piVar4[3] <= iVar6)) {
LAB_00a3fff0: ;
              pvVar5 = pvVar1;
            }
            else {
              pvVar5 = ((undefined *)GEN_TOP((iVar6 * 0x40 + *piVar4)));
              if (*((char *)GEN_TOP(((int)pvVar5 + 6))) != '\0') {
                iVar6 = (int)*((short *)GEN_TOP(((int)pvVar5 + 8)));
                piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar5 + 10))))));
                if (((*piVar4 == 0) || (iVar6 < 0)) || (piVar4[3] <= iVar6)) {
                  pvVar5 = ((undefined *)GEN_TOP(0x0));
                }
                else {
                  pvVar5 = ((undefined *)GEN_TOP((iVar6 * 0x40 + *piVar4)));
                }
              }
              if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto LAB_00a3fff0;
            }
            uVar2 = F_0046e5e0(pvVar5 GEN_EDX_ARG);
          }
        }
        if ((uVar2 != 0) && (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)))) {
          F_00aa8290(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
        }
      }
    }
    F_00a52870(11000,*((undefined4 *)GEN_TOP(((int)this + 0x360))));
    uVar3 = *((int *)GEN_TOP(((int)this + 0x360))) + 1;
    uVar2 = uVar3 / 0xfffffff;
    *((uint *)GEN_TOP(((int)this + 0x360))) = uVar3 % 0xfffffff | 0x10000000;
  }
  iVar6 = 0;
  local_c = 0;
  do {
    if (*((char *)GEN_TOP((iVar6 + 0x10 + *((int *)GEN_TOP(((int)this + 0x14)))))) != '\0') {
      if ((((*((int *)GEN_TOP(((int)this + 0x28))) == 1000) &&
           (piVar4 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,1000))), piVar4 != ((int *)GEN_TOP(0x0)))) &&
          (pvVar1 = ((undefined *)GEN_TOP(*piVar4)), pvVar1 != ((undefined *)GEN_TOP(0x0)))) && (0 < piVar4[3])) {
        if (*((char *)GEN_TOP(((int)pvVar1 + 6))) != '\0') {
          iVar8 = (int)*((short *)GEN_TOP(((int)pvVar1 + 8)));
          piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar1 + 10))))));
          if (((*piVar4 == 0) || (iVar8 < 0)) || (piVar4[3] <= iVar8)) {
            pvVar1 = ((undefined *)GEN_TOP(0x0));
          }
          else {
            pvVar1 = ((undefined *)GEN_TOP((iVar8 * 0x40 + *piVar4)));
          }
        }
        if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
          if (*((char *)GEN_TOP(((int)pvVar1 + 6))) == '\0') {
            uVar2 = *((uint *)GEN_TOP(((int)pvVar1 + 8)));
            if ((*((byte *)GEN_TOP(((int)pvVar1 + 0x14))) & 1) != 0) {
              uVar2 = uVar2 + 1000000;
            }
          }
          else {
            piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar1 + 10))))));
            if (piVar4 == ((int *)GEN_TOP(0x0))) {
              uVar2 = F_0046e5e0(((undefined *)GEN_TOP(0x0)) GEN_EDX_ARG);
            }
            else {
              iVar8 = (int)*((short *)GEN_TOP(((int)pvVar1 + 8)));
              if (((*piVar4 == 0) || (iVar8 < 0)) || (piVar4[3] <= iVar8)) {
LAB_00a40180: ;
                pvVar5 = pvVar1;
              }
              else {
                pvVar5 = ((undefined *)GEN_TOP((iVar8 * 0x40 + *piVar4)));
                if (*((char *)GEN_TOP(((int)pvVar5 + 6))) != '\0') {
                  iVar8 = (int)*((short *)GEN_TOP(((int)pvVar5 + 8)));
                  piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar5 + 10))))));
                  if (((*piVar4 == 0) || (iVar8 < 0)) || (piVar4[3] <= iVar8)) {
                    pvVar5 = ((undefined *)GEN_TOP(0x0));
                  }
                  else {
                    pvVar5 = ((undefined *)GEN_TOP((iVar8 * 0x40 + *piVar4)));
                  }
                }
                if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto LAB_00a40180;
              }
              uVar2 = F_0046e5e0(pvVar5 GEN_EDX_ARG);
            }
          }
          if ((uVar2 != 0) && (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)))) {
            F_00aa8290(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
          }
        }
      }
      F_00a52870(local_c + 12000,*((undefined4 *)GEN_TOP(((int)this + 0x360))));
      uVar3 = *((int *)GEN_TOP(((int)this + 0x360))) + 1;
      uVar2 = uVar3 / 0xfffffff;
      *((uint *)GEN_TOP(((int)this + 0x360))) = uVar3 % 0xfffffff | 0x10000000;
    }
    local_c = local_c + 1;
    iVar6 = iVar6 + 0x20;
  } while (iVar6 < 0x60);
  if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x10))) == '\0') goto LAB_00a40377;
  if (((*((int *)GEN_TOP(((int)this + 0x28))) == 1000) &&
      (piVar4 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,1000))), piVar4 != ((int *)GEN_TOP(0x0)))) &&
     ((pvVar1 = ((undefined *)GEN_TOP(*piVar4)), pvVar1 != ((undefined *)GEN_TOP(0x0)) && (0 < piVar4[3])))) {
    if (*((char *)GEN_TOP(((int)pvVar1 + 6))) != '\0') {
      iVar6 = (int)*((short *)GEN_TOP(((int)pvVar1 + 8)));
      piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar1 + 10))))));
      if (((*piVar4 == 0) || (iVar6 < 0)) || (piVar4[3] <= iVar6)) {
        pvVar1 = ((undefined *)GEN_TOP(0x0));
      }
      else {
        pvVar1 = ((undefined *)GEN_TOP((iVar6 * 0x40 + *piVar4)));
      }
    }
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      if (*((char *)GEN_TOP(((int)pvVar1 + 6))) == '\0') {
        uVar2 = *((uint *)GEN_TOP(((int)pvVar1 + 8)));
        if ((*((byte *)GEN_TOP(((int)pvVar1 + 0x14))) & 1) != 0) {
          uVar2 = uVar2 + 1000000;
        }
      }
      else {
        piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar1 + 10))))));
        if (piVar4 == ((int *)GEN_TOP(0x0))) {
          uVar2 = F_0046e5e0(((undefined *)GEN_TOP(0x0)) GEN_EDX_ARG);
        }
        else {
          iVar6 = (int)*((short *)GEN_TOP(((int)pvVar1 + 8)));
          if (((*piVar4 == 0) || (iVar6 < 0)) || (piVar4[3] <= iVar6)) {
LAB_00a4031d: ;
            pvVar5 = pvVar1;
          }
          else {
            pvVar5 = ((undefined *)GEN_TOP((iVar6 * 0x40 + *piVar4)));
            if (*((char *)GEN_TOP(((int)pvVar5 + 6))) != '\0') {
              iVar6 = (int)*((short *)GEN_TOP(((int)pvVar5 + 8)));
              piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar5 + 10))))));
              if (((*piVar4 == 0) || (iVar6 < 0)) || (piVar4[3] <= iVar6)) {
                pvVar5 = ((undefined *)GEN_TOP(0x0));
              }
              else {
                pvVar5 = ((undefined *)GEN_TOP((iVar6 * 0x40 + *piVar4)));
              }
            }
            if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto LAB_00a4031d;
          }
          uVar2 = F_0046e5e0(pvVar5 GEN_EDX_ARG);
        }
      }
      if ((uVar2 != 0) && (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)))) {
        F_00aa8290(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
      }
    }
  }
  F_00a52870(0xdac,*((undefined4 *)GEN_TOP(((int)this + 0x360))));
  uVar3 = *((int *)GEN_TOP(((int)this + 0x360))) + 1;
  uVar2 = uVar3 / 0xfffffff;
  *((uint *)GEN_TOP(((int)this + 0x360))) = uVar3 % 0xfffffff | 0x10000000;
LAB_00a40377: ;
  iVar6 = 0;
  local_c = 0;
  do {
    if (*((char *)GEN_TOP((iVar6 + 0x10 + *((int *)GEN_TOP(((int)this + 0x1c)))))) != '\0') {
      if ((((*((int *)GEN_TOP(((int)this + 0x28))) == 1000) &&
           (piVar4 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,1000))), piVar4 != ((int *)GEN_TOP(0x0)))) &&
          (pvVar1 = ((undefined *)GEN_TOP(*piVar4)), pvVar1 != ((undefined *)GEN_TOP(0x0)))) && (0 < piVar4[3])) {
        if (*((char *)GEN_TOP(((int)pvVar1 + 6))) != '\0') {
          iVar8 = (int)*((short *)GEN_TOP(((int)pvVar1 + 8)));
          piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar1 + 10))))));
          if (((*piVar4 == 0) || (iVar8 < 0)) || (piVar4[3] <= iVar8)) {
            pvVar1 = ((undefined *)GEN_TOP(0x0));
          }
          else {
            pvVar1 = ((undefined *)GEN_TOP((iVar8 * 0x40 + *piVar4)));
          }
        }
        if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
          if (*((char *)GEN_TOP(((int)pvVar1 + 6))) == '\0') {
            uVar2 = *((uint *)GEN_TOP(((int)pvVar1 + 8)));
            if ((*((byte *)GEN_TOP(((int)pvVar1 + 0x14))) & 1) != 0) {
              uVar2 = uVar2 + 1000000;
            }
          }
          else {
            piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar1 + 10))))));
            if (piVar4 == ((int *)GEN_TOP(0x0))) {
              uVar2 = F_0046e5e0(((undefined *)GEN_TOP(0x0)) GEN_EDX_ARG);
            }
            else {
              iVar8 = (int)*((short *)GEN_TOP(((int)pvVar1 + 8)));
              if (((*piVar4 == 0) || (iVar8 < 0)) || (piVar4[3] <= iVar8)) {
LAB_00a404b0: ;
                pvVar5 = pvVar1;
              }
              else {
                pvVar5 = ((undefined *)GEN_TOP((iVar8 * 0x40 + *piVar4)));
                if (*((char *)GEN_TOP(((int)pvVar5 + 6))) != '\0') {
                  iVar8 = (int)*((short *)GEN_TOP(((int)pvVar5 + 8)));
                  piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar5 + 10))))));
                  if (((*piVar4 == 0) || (iVar8 < 0)) || (piVar4[3] <= iVar8)) {
                    pvVar5 = ((undefined *)GEN_TOP(0x0));
                  }
                  else {
                    pvVar5 = ((undefined *)GEN_TOP((iVar8 * 0x40 + *piVar4)));
                  }
                }
                if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto LAB_00a404b0;
              }
              uVar2 = F_0046e5e0(pvVar5 GEN_EDX_ARG);
            }
          }
          if ((uVar2 != 0) && (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)))) {
            F_00aa8290(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
          }
        }
      }
      F_00a52870(local_c + 0xc80,*((undefined4 *)GEN_TOP(((int)this + 0x360))));
      uVar3 = *((int *)GEN_TOP(((int)this + 0x360))) + 1;
      uVar2 = uVar3 / 0xfffffff;
      *((uint *)GEN_TOP(((int)this + 0x360))) = uVar3 % 0xfffffff | 0x10000000;
    }
    local_c = local_c + 1;
    iVar6 = iVar6 + 0x20;
  } while (iVar6 < 0x180);
  iVar6 = 0;
  local_c = 0;
  do {
    if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + 0x10 + iVar6))) != '\0') {
      if (((*((int *)GEN_TOP(((int)this + 0x28))) == 1000) &&
          (piVar4 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,1000))), piVar4 != ((int *)GEN_TOP(0x0)))) &&
         ((pvVar1 = ((undefined *)GEN_TOP(*piVar4)), pvVar1 != ((undefined *)GEN_TOP(0x0)) && (0 < piVar4[3])))) {
        if (*((char *)GEN_TOP(((int)pvVar1 + 6))) != '\0') {
          iVar8 = (int)*((short *)GEN_TOP(((int)pvVar1 + 8)));
          piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar1 + 10))))));
          if (((*piVar4 == 0) || (iVar8 < 0)) || (piVar4[3] <= iVar8)) {
            pvVar1 = ((undefined *)GEN_TOP(0x0));
          }
          else {
            pvVar1 = ((undefined *)GEN_TOP((iVar8 * 0x40 + *piVar4)));
          }
        }
        if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
          if (*((char *)GEN_TOP(((int)pvVar1 + 6))) == '\0') {
            uVar2 = *((uint *)GEN_TOP(((int)pvVar1 + 8)));
            if ((*((byte *)GEN_TOP(((int)pvVar1 + 0x14))) & 1) != 0) {
              uVar2 = uVar2 + 1000000;
            }
          }
          else {
            piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar1 + 10))))));
            if (piVar4 == ((int *)GEN_TOP(0x0))) {
              uVar2 = F_0046e5e0(((undefined *)GEN_TOP(0x0)) GEN_EDX_ARG);
            }
            else {
              iVar8 = (int)*((short *)GEN_TOP(((int)pvVar1 + 8)));
              if (((*piVar4 == 0) || (iVar8 < 0)) || (piVar4[3] <= iVar8)) {
LAB_00a40660: ;
                pvVar5 = pvVar1;
              }
              else {
                pvVar5 = ((undefined *)GEN_TOP((iVar8 * 0x40 + *piVar4)));
                if (*((char *)GEN_TOP(((int)pvVar5 + 6))) != '\0') {
                  iVar8 = (int)*((short *)GEN_TOP(((int)pvVar5 + 8)));
                  piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar5 + 10))))));
                  if (((*piVar4 == 0) || (iVar8 < 0)) || (piVar4[3] <= iVar8)) {
                    pvVar5 = ((undefined *)GEN_TOP(0x0));
                  }
                  else {
                    pvVar5 = ((undefined *)GEN_TOP((iVar8 * 0x40 + *piVar4)));
                  }
                }
                if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto LAB_00a40660;
              }
              uVar2 = F_0046e5e0(pvVar5 GEN_EDX_ARG);
            }
          }
          if ((uVar2 != 0) && (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)))) {
            F_00aa8290(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
          }
        }
      }
      F_00a52870(local_c + 20000,*((undefined4 *)GEN_TOP(((int)this + 0x360))));
      uVar3 = *((int *)GEN_TOP(((int)this + 0x360))) + 1;
      uVar2 = uVar3 / 0xfffffff;
      *((uint *)GEN_TOP(((int)this + 0x360))) = uVar3 % 0xfffffff | 0x10000000;
    }
    local_c = local_c + 1;
    iVar6 = iVar6 + 0x20;
  } while (iVar6 < 0xa0);
  iVar6 = 0;
  local_c = 0;
  do {
    if (*((char *)GEN_TOP((iVar6 + 0x10 + *((int *)GEN_TOP(((int)this + 0x24)))))) != '\0') {
      if ((((*((int *)GEN_TOP(((int)this + 0x28))) == 1000) &&
           (piVar4 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,1000))), piVar4 != ((int *)GEN_TOP(0x0)))) &&
          (pvVar1 = ((undefined *)GEN_TOP(*piVar4)), pvVar1 != ((undefined *)GEN_TOP(0x0)))) && (0 < piVar4[3])) {
        if (*((char *)GEN_TOP(((int)pvVar1 + 6))) != '\0') {
          iVar8 = (int)*((short *)GEN_TOP(((int)pvVar1 + 8)));
          piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar1 + 10))))));
          if (((*piVar4 == 0) || (iVar8 < 0)) || (piVar4[3] <= iVar8)) {
            pvVar1 = ((undefined *)GEN_TOP(0x0));
          }
          else {
            pvVar1 = ((undefined *)GEN_TOP((iVar8 * 0x40 + *piVar4)));
          }
        }
        if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
          if (*((char *)GEN_TOP(((int)pvVar1 + 6))) == '\0') {
            uVar2 = *((uint *)GEN_TOP(((int)pvVar1 + 8)));
            if ((*((byte *)GEN_TOP(((int)pvVar1 + 0x14))) & 1) != 0) {
              uVar2 = uVar2 + 1000000;
            }
          }
          else {
            piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar1 + 10))))));
            if (piVar4 == ((int *)GEN_TOP(0x0))) {
              uVar2 = F_0046e5e0(((undefined *)GEN_TOP(0x0)) GEN_EDX_ARG);
            }
            else {
              iVar8 = (int)*((short *)GEN_TOP(((int)pvVar1 + 8)));
              if (((*piVar4 == 0) || (iVar8 < 0)) || (piVar4[3] <= iVar8)) {
LAB_00a40810: ;
                pvVar5 = pvVar1;
              }
              else {
                pvVar5 = ((undefined *)GEN_TOP((iVar8 * 0x40 + *piVar4)));
                if (*((char *)GEN_TOP(((int)pvVar5 + 6))) != '\0') {
                  iVar8 = (int)*((short *)GEN_TOP(((int)pvVar5 + 8)));
                  piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar5 + 10))))));
                  if (((*piVar4 == 0) || (iVar8 < 0)) || (piVar4[3] <= iVar8)) {
                    pvVar5 = ((undefined *)GEN_TOP(0x0));
                  }
                  else {
                    pvVar5 = ((undefined *)GEN_TOP((iVar8 * 0x40 + *piVar4)));
                  }
                }
                if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto LAB_00a40810;
              }
              uVar2 = F_0046e5e0(pvVar5 GEN_EDX_ARG);
            }
          }
          if ((uVar2 != 0) && (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)))) {
            F_00aa8290(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
          }
        }
      }
      F_00a52870(local_c + 22000,*((undefined4 *)GEN_TOP(((int)this + 0x360))));
      uVar3 = *((int *)GEN_TOP(((int)this + 0x360))) + 1;
      uVar2 = uVar3 / 0xfffffff;
      *((uint *)GEN_TOP(((int)this + 0x360))) = uVar3 % 0xfffffff | 0x10000000;
    }
    local_c = local_c + 1;
    iVar6 = iVar6 + 0x20;
    if (0x3f < iVar6) {
      return uVar2;
    }
  } while( true );
}

/* ref: FUN_00a40890 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a40890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa40890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x18)));
  if (*((char *)GEN_TOP((uVar2 + 0x10))) != '\0') {
    if ((((*((int *)GEN_TOP(((int)this + 0x28))) == 1000) &&
         (pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,1000))), pvVar1 != ((undefined *)GEN_TOP(0x0)))) &&
        (pvVar1 = ((undefined *)GEN_TOP(F_00a37da0(pvVar1 GEN_EDX_ARG,0))), pvVar1 != ((undefined *)GEN_TOP(0x0)))) &&
       ((uVar2 = F_0046e5e0(pvVar1 GEN_EDX_ARG), uVar2 != 0 && (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)))))) {
      F_00aa8290(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
    }
    F_00a52870(0xdac,*((undefined4 *)GEN_TOP(((int)this + 0x360))));
    uVar3 = *((int *)GEN_TOP(((int)this + 0x360))) + 1;
    uVar2 = uVar3 / 0xfffffff;
    *((uint *)GEN_TOP(((int)this + 0x360))) = uVar3 % 0xfffffff | 0x10000000;
  }
  iVar4 = 0;
  iVar5 = 0;
  do {
    if (*((char *)GEN_TOP((iVar5 + 0x10 + *((int *)GEN_TOP(((int)this + 0x1c)))))) != '\0') {
      if (((*((int *)GEN_TOP(((int)this + 0x28))) == 1000) &&
          (pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,1000))), pvVar1 != ((undefined *)GEN_TOP(0x0)))) &&
         ((pvVar1 = ((undefined *)GEN_TOP(F_00a37da0(pvVar1 GEN_EDX_ARG,0))), pvVar1 != ((undefined *)GEN_TOP(0x0)) &&
          ((uVar2 = F_0046e5e0(pvVar1 GEN_EDX_ARG), uVar2 != 0 && (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)))))))) {
        F_00aa8290(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
      }
      F_00a52870(iVar4 + 0xc80,*((undefined4 *)GEN_TOP(((int)this + 0x360))));
      uVar3 = *((int *)GEN_TOP(((int)this + 0x360))) + 1;
      uVar2 = uVar3 / 0xfffffff;
      *((uint *)GEN_TOP(((int)this + 0x360))) = uVar3 % 0xfffffff | 0x10000000;
    }
    iVar5 = iVar5 + 0x20;
    iVar4 = iVar4 + 1;
  } while (iVar5 < 0x180);
  return uVar2;
}

/* ref: FUN_00a40a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a40a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa40a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  int iVar1;
  undefined * this;
  uint uVar2;
  
  iVar1 = (*(int *)&gen_args[0]);
  if ((*(int *)&gen_args[0]) - 2U < 0x12) {
    this = ((undefined *)GEN_TOP(F_00a36f30(param_1 GEN_EDX_FWD,0x7d1)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_00a37da0(this GEN_EDX_ARG,(*(int *)&gen_args[0]) - 2);
      return uVar2;
    }
    return 0;
  }
  (*(int *)&gen_args[0]) = 0;
  do {
    uVar2 = F_00a3dc60(param_1 GEN_EDX_ARG,(*(int *)&gen_args[0]),iVar1,&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[1]),0xffffffff,0xffffffff);
    if (uVar2 != 0) {
      return uVar2;
    }
    (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) + 1;
  } while ((*(int *)&gen_args[0]) < 4);
  if ((char)(*(int *)&gen_args[3]) != '\0') {
    (*(int *)&gen_args[3]) = 1000;
    do {
      uVar2 = F_00a3dc60(param_1 GEN_EDX_ARG,(*(int *)&gen_args[3]),iVar1,&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[1]),0xffffffff,0xffffffff);
      if (uVar2 != 0) {
        return uVar2;
      }
      (*(int *)&gen_args[3]) = (*(int *)&gen_args[3]) + 1;
    } while ((*(int *)&gen_args[3]) < 0x3e9);
  }
  if ((*(char *)&gen_args[4]) != '\0') {
    (*(int *)&gen_args[3]) = 0xdac;
    do {
      uVar2 = F_00a3dc60(param_1 GEN_EDX_ARG,(*(int *)&gen_args[3]),iVar1,&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[1]),0xffffffff,0xffffffff);
      if (uVar2 != 0) {
        return uVar2;
      }
      (*(int *)&gen_args[3]) = (*(int *)&gen_args[3]) + 1;
    } while ((*(int *)&gen_args[3]) < 0xdad);
    (*(int *)&gen_args[3]) = 0xc80;
    do {
      uVar2 = F_00a3dc60(param_1 GEN_EDX_ARG,(*(int *)&gen_args[3]),iVar1,&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[1]),0xffffffff,0xffffffff);
      if (uVar2 != 0) {
        return uVar2;
      }
      (*(int *)&gen_args[3]) = (*(int *)&gen_args[3]) + 1;
    } while ((*(int *)&gen_args[3]) < 0xc8a);
    uVar2 = F_00a3dc60(param_1 GEN_EDX_ARG,0xce4,iVar1,&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[1]),0xffffffff,0xffffffff);
    if (uVar2 != 0) {
      return uVar2;
    }
    uVar2 = F_00a3dc60(param_1 GEN_EDX_ARG,0xd48,iVar1,&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[1]),0xffffffff,0xffffffff);
    if (uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00a40b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a40b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa40b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar5 = param_1;
  uVar1 = F_00ab24a0(param_1);
  if ((uVar1 == 0) || (param_1 == 0)) {
    return 6;
  }
  if (*((char *)GEN_TOP((uVar1 + 0xbe))) != '\0') {
    iVar6 = 10000;
    do {
      uVar8 = 0;
      iVar7 = param_1;
      pvVar2 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,iVar6)));
      uVar1 = F_00a3a8f0(pvVar2 GEN_EDX_ARG,iVar7,uVar8);
      if (uVar1 != 0) {
        return 0x1b;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x2717);
    iVar6 = 11000;
    do {
      uVar8 = 0;
      iVar7 = param_1;
      pvVar2 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,iVar6)));
      uVar1 = F_00a3a8f0(pvVar2 GEN_EDX_ARG,iVar7,uVar8);
      if (uVar1 != 0) {
        return 0x1b;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x2af9);
    pvVar2 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x2ee2)));
    uVar1 = F_00a3a8f0(pvVar2 GEN_EDX_ARG,param_1,uVar1);
    if (uVar1 != 0) {
      return 0x1b;
    }
  }
  param_1 = 0;
  iVar6 = 10000;
  do {
    uVar1 = F_00a3de00(this GEN_EDX_ARG,iVar5,iVar6,(undefined1)param_3);
    param_1 = param_1 + uVar1;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x2717);
  if ((iVar5 - 2U < 0x12) && (uVar1 = F_00ab24a0(iVar5), uVar1 != 0)) {
    iVar6 = *((int *)GEN_TOP((uVar1 + 0x28)));
    pvVar2 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x2ee1)));
    if ((pvVar2 != ((undefined *)GEN_TOP(0x0))) && (uVar1 = F_00a37da0(pvVar2 GEN_EDX_ARG,iVar5 - 2), uVar1 != 0)) {
      if (*((char *)GEN_TOP((uVar1 + 6))) == '\0') {
        return -(uint)(param_1 + (iVar6 - *((int *)GEN_TOP((uVar1 + 0xc)))) < param_2) & 0x18;
      }
      iVar5 = (int)*((short *)GEN_TOP((uVar1 + 8)));
      pvVar2 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((uVar1 + 10))))));
      pvVar2 = ((undefined *)GEN_TOP(F_00a37da0(pvVar2 GEN_EDX_ARG,iVar5)));
      uVar4 = *((uint *)GEN_TOP((uVar1 + 0xc)));
      uVar3 = F_00a3a8a0(pvVar2 GEN_EDX_ARG);
      if (uVar3 < uVar4) {
        uVar4 = F_00a3a8a0(pvVar2 GEN_EDX_ARG);
        *((uint *)GEN_TOP((uVar1 + 0xc))) = uVar4;
      }
      return -(uint)(param_1 + (iVar6 - uVar4) < param_2) & 0x18;
    }
  }
  return -(uint)(param_1 < param_2) & 0x18;
}

/* ref: FUN_00a40d10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a40d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa40d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  char cVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint local_8;
  
  uVar2 = F_00ab24a0(param_1);
  if ((uVar2 == 0) || (param_1 == 0)) {
    return 6;
  }
  cVar1 = *((char *)GEN_TOP((uVar2 + 0xbe)));
  if (cVar1 != '\0') {
    iVar8 = 0;
    do {
      uVar9 = 0;
      iVar7 = param_1;
      pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,iVar8)));
      uVar4 = F_00a3a8f0(pvVar3 GEN_EDX_ARG,iVar7,uVar9);
      if (uVar4 != 0) {
        return 0x1b;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 4);
    iVar8 = 1000;
    do {
      uVar9 = 0;
      iVar7 = param_1;
      pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,iVar8)));
      uVar4 = F_00a3a8f0(pvVar3 GEN_EDX_ARG,iVar7,uVar9);
      if (uVar4 != 0) {
        return 0x1b;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x3e9);
  }
  iVar8 = 0;
  local_8 = 0;
  if (param_1 - 0x17U < 4) {
    uVar2 = F_00a3d8b0(this GEN_EDX_ARG,param_1,0);
    return -(uint)(uVar2 < param_2) & 0x18;
  }
  do {
    uVar4 = F_00a3de00(this GEN_EDX_ARG,param_1,iVar8,(undefined1)param_3);
    local_8 = local_8 + uVar4;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  if (0x11 < param_1 - 2U) goto LAB_00a40e70;
  uVar4 = F_00ab24a0(param_1);
  if (uVar4 == 0) {
LAB_00a40e6b: ;
    iVar8 = 0;
  }
  else {
    iVar8 = *((int *)GEN_TOP((uVar4 + 0x28)));
    pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d1)));
    if ((pvVar3 == ((undefined *)GEN_TOP(0x0))) || (uVar4 = F_00a37da0(pvVar3 GEN_EDX_ARG,param_1 - 2), uVar4 == 0))
    goto LAB_00a40e6b;
    if (*((char *)GEN_TOP((uVar4 + 6))) == '\0') {
      iVar8 = iVar8 - *((int *)GEN_TOP((uVar4 + 0xc)));
    }
    else {
      iVar7 = (int)*((short *)GEN_TOP((uVar4 + 8)));
      pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((uVar4 + 10))))));
      pvVar3 = ((undefined *)GEN_TOP(F_00a37da0(pvVar3 GEN_EDX_ARG,iVar7)));
      uVar6 = *((uint *)GEN_TOP((uVar4 + 0xc)));
      uVar5 = F_00a3a8a0(pvVar3 GEN_EDX_ARG);
      if (uVar5 < uVar6) {
        uVar6 = F_00a3a8a0(pvVar3 GEN_EDX_ARG);
        *((uint *)GEN_TOP((uVar4 + 0xc))) = uVar6;
      }
      iVar8 = iVar8 - uVar6;
    }
  }
  local_8 = local_8 + iVar8;
LAB_00a40e70: ;
  uVar2 = F_00ab25a0((uint)*((byte *)GEN_TOP((uVar2 + 0xa6))));
  uVar4 = 0;
  do {
    if (*((char *)GEN_TOP((uVar2 + 4 + uVar4))) == '\x01') {
      if ((byte)uVar4 != 0xe) {
        if ((byte)uVar4 < 0xe) {
          switch((unsigned int)(uintptr_t)(uVar4 & 0xff)) {
          case 0: ;
            iVar8 = 0xdac;
            break;
          default: ;
            iVar8 = (uVar4 & 0xff) + 0xc7f;
            break;
          case 0xb: ;
          case 0xc: ;
            iVar8 = 0xce4;
            break;
          case 0xd: ;
            iVar8 = 0xd48;
          }
        }
        else {
          iVar8 = 9999;
        }
        uVar2 = F_00a3de00(this GEN_EDX_ARG,param_1,iVar8,(undefined1)param_3);
        local_8 = local_8 + uVar2;
        if (cVar1 != '\0') {
          uVar9 = 0;
          pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,iVar8)));
          uVar2 = F_00a3a8f0(pvVar3 GEN_EDX_ARG,param_1,uVar9);
          if (uVar2 != 0) {
            return 0x1b;
          }
        }
      }
      break;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0xe);
  return -(uint)(local_8 < param_2) & 0x18;
}

/* ref: FUN_00a40f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a40f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa40f50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  iVar4 = 0;
  local_8 = 0;
  do {
    uVar1 = F_00a3de00(this GEN_EDX_FWD,param_1,iVar4,(undefined1)param_2);
    local_8 = local_8 + uVar1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  uVar1 = F_00ab24a0(param_1);
  if (uVar1 != 0) {
    uVar1 = F_00ab25a0((uint)*((byte *)GEN_TOP((uVar1 + 0xa6))));
    uVar3 = 0;
    do {
      if (*((char *)GEN_TOP((uVar1 + 4 + uVar3))) == '\x01') {
        if ((byte)uVar3 != 0xe) {
          if ((byte)uVar3 < 0xe) {
            switch((unsigned int)(uintptr_t)(uVar3 & 0xff)) {
            case 0: ;
              iVar4 = 0xdac;
              break;
            default: ;
              iVar4 = (uVar3 & 0xff) + 0xc7f;
              break;
            case 0xb: ;
            case 0xc: ;
              iVar4 = 0xce4;
              break;
            case 0xd: ;
              iVar4 = 0xd48;
            }
          }
          else {
            iVar4 = 9999;
          }
          uVar1 = F_00a3de00(this GEN_EDX_ARG,param_1,iVar4,(undefined1)param_2);
          local_8 = local_8 + uVar1;
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 0xe);
  }
  if (0x11 < param_1 - 2U) {
    return local_8;
  }
  uVar1 = F_00ab24a0(param_1);
  if (uVar1 != 0) {
    iVar4 = *((int *)GEN_TOP((uVar1 + 0x28)));
    pvVar2 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d1)));
    if ((pvVar2 != ((undefined *)GEN_TOP(0x0))) &&
       (pvVar2 = ((undefined *)GEN_TOP(F_00a37da0(pvVar2 GEN_EDX_ARG,param_1 - 2))), pvVar2 != ((undefined *)GEN_TOP(0x0)))) {
      uVar1 = F_00a3a8a0(pvVar2 GEN_EDX_ARG);
      return local_8 + (iVar4 - uVar1);
    }
  }
  return local_8;
}

/* ref: FUN_00a41080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a41080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa41080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  uVar1 = (*(uint *)&gen_args[0]);
  if ((*(uint *)&gen_args[0]) - 1000000 < 1000000) {
    (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)) = 1;
    uVar1 = (*(uint *)&gen_args[0]) - 1000000;
  }
  if (uVar1 - 0x1e8481 < 0x489) {
    uVar3 = F_00a3ded0(param_1 GEN_EDX_FWD,uVar1,0x7d4,(undefined1)(*(undefined4 *)&gen_args[1]));
  }
  if (uVar1 - 2 < 0x12) {
    uVar1 = F_00a3ded0(param_1 GEN_EDX_ARG,uVar1,0x7d1,(undefined1)(*(undefined4 *)&gen_args[1]));
    return uVar1 + uVar3;
  }
  (*(uint *)&gen_args[0]) = 0;
  do {
    uVar2 = F_00a3ded0(param_1 GEN_EDX_ARG,uVar1,(*(uint *)&gen_args[0]),(undefined1)(*(undefined4 *)&gen_args[1]));
    uVar3 = uVar3 + uVar2;
    (*(uint *)&gen_args[0]) = (*(uint *)&gen_args[0]) + 1;
  } while ((int)(*(uint *)&gen_args[0]) < 4);
  if ((char)(*(int *)&gen_args[2]) != '\0') {
    uVar2 = F_00a3ded0(param_1 GEN_EDX_ARG,uVar1,1000,(undefined1)(*(undefined4 *)&gen_args[1]));
    uVar3 = uVar3 + uVar2;
  }
  if ((*(char *)&gen_args[3]) != '\0') {
    uVar2 = F_00a3ded0(param_1 GEN_EDX_ARG,uVar1,0xdac,(undefined1)(*(undefined4 *)&gen_args[1]));
    iVar4 = uVar3 + uVar2;
    (*(int *)&gen_args[2]) = 0xc80;
    do {
      uVar3 = F_00a3ded0(param_1 GEN_EDX_ARG,uVar1,(*(int *)&gen_args[2]),(undefined1)(*(undefined4 *)&gen_args[1]));
      iVar4 = iVar4 + uVar3;
      (*(int *)&gen_args[2]) = (*(int *)&gen_args[2]) + 1;
    } while ((*(int *)&gen_args[2]) < 0xc8a);
    uVar3 = F_00a3ded0(param_1 GEN_EDX_ARG,uVar1,0xce4,(undefined1)(*(undefined4 *)&gen_args[1]));
    uVar1 = F_00a3ded0(param_1 GEN_EDX_ARG,uVar1,0xd48,(undefined1)(*(undefined4 *)&gen_args[1]));
    return uVar1 + iVar4 + uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a411a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a411a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa411a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  
  pvVar1 = param_2;
  uVar3 = 0;
  *((undefined4 *)GEN_TOP(((int)param_2 + 0x44))) = 0;
  uVar2 = F_00906df0(param_2 GEN_EDX_FWD);
  if (uVar2 - 0x1e8481 < 0x489) {
    uVar6 = 0;
    uVar5 = 0x7d4;
    uVar2 = F_00906df0(param_2 GEN_EDX_ARG);
    uVar3 = F_00a3ded0(param_1 GEN_EDX_ARG,uVar2,uVar5,uVar6);
  }
  uVar2 = F_00906df0(param_2 GEN_EDX_ARG);
  if (uVar2 - 2 < 0x12) {
    uVar6 = 0;
    uVar5 = 0x7d1;
    uVar2 = F_00906df0(param_2 GEN_EDX_ARG);
    uVar2 = F_00a3ded0(param_1 GEN_EDX_ARG,uVar2,uVar5,uVar6);
    return uVar2 + uVar3;
  }
  param_2 = ((undefined *)GEN_TOP(0x0));
  do {
    uVar2 = F_00a3e020(param_1 GEN_EDX_ARG,pvVar1,param_2);
    uVar3 = uVar3 + uVar2;
    param_2 = ((undefined *)GEN_TOP(((int)param_2 + 1)));
  } while ((int)param_2 < 4);
  if ((char)param_3 != '\0') {
    uVar2 = F_00a3e020(param_1 GEN_EDX_ARG,pvVar1,1000);
    uVar3 = uVar3 + uVar2;
  }
  if (param_4 != '\0') {
    uVar2 = F_00a3e020(param_1 GEN_EDX_ARG,pvVar1,0xdac);
    iVar4 = uVar3 + uVar2;
    param_3 = 0xc80;
    do {
      uVar2 = F_00a3e020(param_1 GEN_EDX_ARG,pvVar1,param_3);
      iVar4 = iVar4 + uVar2;
      param_3 = param_3 + 1;
    } while (param_3 < 0xc8a);
    uVar2 = F_00a3e020(param_1 GEN_EDX_ARG,pvVar1,0xce4);
    uVar3 = F_00a3e020(param_1 GEN_EDX_ARG,pvVar1,0xd48);
    return uVar3 + iVar4 + uVar2;
  }
  return uVar3;
}

/* ref: FUN_00a412b0 */
GEN_OWN GEN_FRAME uint F_00a412b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa412b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  double dVar2;
  ushort uVar3;
  uint uVar4;
  float10 fVar5;
  uint local_c;
  ushort uStack_8;
  
  if (param_1 != 0) {
    uVar4 = F_0046e5e0(((undefined *)GEN_TOP(param_1)) GEN_EDX_ARG);
    uVar4 = F_00a377f0(uVar4);
    if (uVar4 != 0) {
      uVar3 = F_00906d60(((undefined *)GEN_TOP(param_1)) GEN_EDX_ARG);
      fVar5 = (float10)(int)uVar4;
      if ((int)uVar4 < 0) {
        fVar5 = GEN_X87(fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      dVar2 = (GEN_X87MATH(((double)((float)GEN_TOF((fVar5 * ((float10)(int)(30000 - (uint)uVar3) * (float10)*(double *)&REFG(undefined, 0x10e4ae8)))))),0xe));
      uStack_8 = gen_x87_cw | 0xc00;
      gen_set_x87_cw((unsigned short)uStack_8);
      local_c = (uint)(longlong)TRUNC((float10)(float)dVar2);
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      return local_c;
    }
  }
  return 0;
}

/* ref: FUN_00a41350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a41350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa41350u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 * puVar3;
  int iVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_FWD,0x61);
  if (bVar1 == 0) {
    uVar2 = F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x61);
    return uVar2;
  }
  iVar4 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  if (param_3 - 2U < 0x12) {
    this_00 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d1)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      puVar3 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      puVar3 = ((undefined4 *)GEN_TOP(F_00a37da0(this_00 GEN_EDX_ARG,param_3 - 2)));
    }
    if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
      return 0;
    }
  }
  else {
    while (puVar3 = ((undefined4 *)GEN_TOP(F_00a3dc60(this GEN_EDX_ARG,iVar4,param_3,&(*(undefined * PTR32 *)(gen_frame + 0x0)),0,0xffffffff,0xffffffff))),
          puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
      iVar4 = iVar4 + 1;
      if (3 < iVar4) {
        return 0;
      }
    }
  }
  uVar2 = F_00a51200(0x21,param_1,(int)(short)param_2,*puVar3,(int)*(short *)(puVar3 + 1));
  return uVar2;
}

/* ref: FUN_00a41400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a41400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa41400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  
  ((int *)(gen_frame + 0x10))[5] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  uVar2 = F_00ab24a0(param_1);
  if ((uVar2 != 0) && (param_1 != 0)) {
    iVar5 = *((int *)GEN_TOP((uVar2 + 0x78)));
    (*(int *)(gen_frame + 0x0)) = iVar5 - 0x15da;
    ((int *)(gen_frame + 0x10))[0] = 0;
    ((int *)(gen_frame + 0x10))[1] = 0;
    ((int *)(gen_frame + 0x10))[2] = 0;
    ((int *)(gen_frame + 0x10))[3] = 0;
    ((int *)(gen_frame + 0x10))[4] = 0;
    if ((*(int *)(gen_frame + 0x0)) < 5) {
      (*(uint *)(gen_frame + 0x4)) = iVar5 - 1000000;
      do {
        uVar6 = 0;
        uVar2 = (*(uint *)(gen_frame + 0x4)) + 1000000;
        bVar1 = (*(uint *)(gen_frame + 0x4)) < 1000000;
        if (bVar1) {
          uVar2 = (*(uint *)(gen_frame + 0x4));
        }
        if (uVar2 - 0x1e8481 < 0x489) {
          uVar6 = F_00a3ded0(this GEN_EDX_ARG,uVar2,0x7d4,bVar1);
        }
        if (uVar2 - 2 < 0x12) {
          uVar7 = 0x7d1;
        }
        else {
          (*(int *)(gen_frame + 0x8)) = 0;
          do {
            uVar3 = F_00a3ded0(this GEN_EDX_ARG,uVar2,(*(int *)(gen_frame + 0x8)),bVar1);
            uVar6 = uVar6 + uVar3;
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < 4);
          uVar3 = F_00a3ded0(this GEN_EDX_ARG,uVar2,1000,bVar1);
          uVar4 = F_00a3ded0(this GEN_EDX_ARG,uVar2,0xdac,bVar1);
          iVar5 = uVar6 + uVar3 + uVar4;
          (*(int *)(gen_frame + 0x8)) = 0xc80;
          do {
            uVar6 = F_00a3ded0(this GEN_EDX_ARG,uVar2,(*(int *)(gen_frame + 0x8)),bVar1);
            iVar5 = iVar5 + uVar6;
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < 0xc8a);
          uVar6 = F_00a3ded0(this GEN_EDX_ARG,uVar2,0xce4,bVar1);
          uVar6 = iVar5 + uVar6;
          uVar7 = 0xd48;
        }
        uVar2 = F_00a3ded0(this GEN_EDX_ARG,uVar2,uVar7,bVar1);
        (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
        ((int *)(gen_frame + 0x10))[(int)((*(int *)(gen_frame + 0x0)))] = uVar6 + uVar2;
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      } while ((*(int *)(gen_frame + 0x0)) < 5);
    }
    iVar5 = 0;
    do {
      if (((int *)(gen_frame + 0x10))[(int)(iVar5)] != 0) {
        return iVar5 + 0x15da;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 5);
  }
  return 0;
}

/* ref: FUN_00a415a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a415a0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa415a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  undefined * this;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  
  ((int *)(gen_frame + 0x14))[5] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x0)) = (uint)param_2;
  iVar7 = (*(uint *)(gen_frame + 0x0)) + 0x15df;
  ((int *)(gen_frame + 0x14))[0] = 0;
  ((int *)(gen_frame + 0x14))[1] = 0;
  ((int *)(gen_frame + 0x14))[2] = 0;
  ((int *)(gen_frame + 0x14))[3] = 0;
  ((int *)(gen_frame + 0x14))[4] = 0;
  if ((*(uint *)(gen_frame + 0x0)) < 5) {
    (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x0)) - 0xf2c61;
    do {
      uVar8 = 0;
      uVar4 = (*(uint *)(gen_frame + 0x8)) + 1000000;
      bVar1 = (*(uint *)(gen_frame + 0x8)) < 1000000;
      if (bVar1) {
        uVar4 = (*(uint *)(gen_frame + 0x8));
      }
      if (uVar4 - 0x1e8481 < 0x489) {
        uVar8 = F_00a3ded0(param_1 GEN_EDX_FWD,uVar4,0x7d4,bVar1);
      }
      if (uVar4 - 2 < 0x12) {
        uVar9 = 0x7d1;
      }
      else {
        (*(int *)(gen_frame + 0xc)) = 0;
        do {
          uVar2 = F_00a3ded0(param_1 GEN_EDX_ARG,uVar4,(*(int *)(gen_frame + 0xc)),bVar1);
          uVar8 = uVar8 + uVar2;
          (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
        } while ((*(int *)(gen_frame + 0xc)) < 4);
        uVar2 = F_00a3ded0(param_1 GEN_EDX_ARG,uVar4,1000,bVar1);
        uVar3 = F_00a3ded0(param_1 GEN_EDX_ARG,uVar4,0xdac,bVar1);
        iVar5 = uVar8 + uVar2 + uVar3;
        (*(int *)(gen_frame + 0xc)) = 0xc80;
        do {
          uVar8 = F_00a3ded0(param_1 GEN_EDX_ARG,uVar4,(*(int *)(gen_frame + 0xc)),bVar1);
          iVar5 = iVar5 + uVar8;
          (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
        } while ((*(int *)(gen_frame + 0xc)) < 0xc8a);
        uVar8 = F_00a3ded0(param_1 GEN_EDX_ARG,uVar4,0xce4,bVar1);
        uVar8 = iVar5 + uVar8;
        uVar9 = 0xd48;
      }
      uVar4 = F_00a3ded0(param_1 GEN_EDX_ARG,uVar4,uVar9,bVar1);
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
      ((int *)(gen_frame + 0x14))[(int)((*(uint *)(gen_frame + 0x0)))] = uVar8 + uVar4;
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
    } while ((int)(*(uint *)(gen_frame + 0x0)) < 5);
  }
  iVar5 = 0;
  do {
    if (((int *)(gen_frame + 0x14))[(int)(iVar5)] != 0) {
      return iVar5 + 0x15df;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  if (param_3 != '\0') {
    piVar6 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar9 = 0x4b3;
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x28))))(piVar6 GEN_EDX_ARG)));
    F_0046a6b0(this GEN_EDX_ARG,uVar9,iVar7);
  }
  return 0;
}

/* ref: FUN_00a41750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a41750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa41750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_FWD,0x3e);
  if (bVar1 == 0) {
    F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x3e);
  }
  else if ((short)param_1 == 0) {
    if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x10))) == '\0') {
      F_00a3fa30(this GEN_EDX_ARG,1000);
      *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 1000;
      F_00a52930(*((undefined4 *)GEN_TOP(((int)this + 0x28))));
      return 0;
    }
    uVar2 = F_00a3f440(this GEN_EDX_ARG,1000);
    F_00a52930(*((undefined4 *)GEN_TOP(((int)this + 0x28))));
    return uVar2;
  }
  return 0xf;
}

/* ref: FUN_00a417f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a417f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa417f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a41750(this GEN_EDX_FWD,param_1 - 1000);
  return uVar1;
}

/* ref: FUN_00a41810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a41810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa41810u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,param_1)));
  uVar2 = 0;
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = ((undefined *)GEN_TOP(F_00a37da0(pvVar1 GEN_EDX_ARG,(int)(short)param_2)));
    uVar2 = 0;
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      uVar4 = (uint)(*((byte *)GEN_TOP(((int)pvVar1 + 0x14))) & 1);
      uVar5 = param_3;
      uVar2 = F_0046e5e0(pvVar1 GEN_EDX_ARG);
      uVar2 = F_00a40b70(this GEN_EDX_ARG,uVar2,uVar5,uVar4);
      if (uVar2 == 0) {
        uVar2 = F_00a38960(this GEN_EDX_ARG,param_1,param_2,param_3);
        return uVar2;
      }
      if (uVar2 == 0x1b) {
        piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        uVar5 = 0x4d9;
      }
      else {
        if (uVar2 != 0x18) {
          return uVar2;
        }
        piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        uVar5 = 0x4d8;
      }
      pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG)));
      uVar2 = F_0046a630(pvVar1 GEN_EDX_ARG,uVar5);
    }
  }
  return uVar2;
}

/* ref: FUN_00a418c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a418c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa418c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,param_1)));
  uVar2 = 0;
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = ((undefined *)GEN_TOP(F_00a37da0(pvVar1 GEN_EDX_ARG,(int)(short)param_2)));
    uVar2 = 0;
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      uVar4 = (uint)(*((byte *)GEN_TOP(((int)pvVar1 + 0x14))) & 1);
      uVar5 = param_3;
      uVar2 = F_0046e5e0(pvVar1 GEN_EDX_ARG);
      uVar2 = F_00a40d10(this GEN_EDX_ARG,uVar2,uVar5,uVar4);
      if (uVar2 == 0) {
        uVar2 = F_00a38a00(this GEN_EDX_ARG,param_1,param_2,param_3);
        return uVar2;
      }
      if (uVar2 == 0x1b) {
        piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        uVar5 = 0x4d9;
      }
      else {
        if (uVar2 != 0x18) {
          return uVar2;
        }
        piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        uVar5 = 0x4d8;
      }
      pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG)));
      uVar2 = F_0046a630(pvVar1 GEN_EDX_ARG,uVar5);
    }
  }
  return uVar2;
}

/* ref: FUN_00a41970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a41970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa41970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined2 uVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 * this_00;
  uint uVar5;
  undefined4 uVar6;
  
  if (((param_1 < 20000) || (0x55f1 < param_1)) && (*((char *)GEN_TOP(((int)this + 0x3088))) != '\0')) {
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    uVar6 = 0x745;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
    uVar4 = F_0046a630(pvVar3 GEN_EDX_ARG,uVar6);
    return uVar4;
  }
  pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,param_1)));
  uVar4 = 0;
  if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
    this_00 = ((undefined4 *)GEN_TOP(F_00a37da0(pvVar3 GEN_EDX_ARG,(int)(short)param_2)));
    uVar4 = 0;
    if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
      if ((*((char *)GEN_TOP(((int)this + 0x3086))) != '\0') && (*((char *)GEN_TOP(((int)this + 0x3087))) != '\0')) {
        uVar5 = (uint)(*(byte *)(this_00 + 5) & 1);
        uVar6 = param_3;
        uVar4 = F_0046e5e0(this_00 GEN_EDX_ARG);
        uVar4 = F_00a40d10(this GEN_EDX_ARG,uVar4,uVar6,uVar5);
        if (uVar4 == 0) {
          uVar4 = F_00a38aa0(this GEN_EDX_ARG,param_1,param_2,param_3);
          return uVar4;
        }
        if (uVar4 == 0x1b) {
          piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
          uVar6 = 0x4d9;
        }
        else {
          if (uVar4 != 0x18) {
            return uVar4;
          }
          piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
          uVar6 = 0x4d8;
        }
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
        uVar4 = F_0046a630(pvVar3 GEN_EDX_ARG,uVar6);
        return uVar4;
      }
      F_00a51200(0x29,*this_00,0,0,0);
      *((undefined4 *)GEN_TOP(((int)this + 0x308c))) = 3;
      uVar4 = F_00a3bd60(((undefined *)GEN_TOP(((int)this + 0x3000))) GEN_EDX_ARG,this_00);
      *((undefined4 *)GEN_TOP(((int)this + 0x3000))) = *this_00;
      uVar1 = *(undefined2 *)(this_00 + 1);
      *((undefined2 *)GEN_TOP(((int)this + 0x3004))) = uVar1;
      uVar4 = CONCAT31((int3)(CONCAT22((short)(uVar4 >> 0x10),uVar1) >> 8),1);
      *((undefined4 *)GEN_TOP(((int)this + 0x3040))) = 9999;
      *((undefined2 *)GEN_TOP(((int)this + 0x3044))) = 0xffff;
      *((undefined4 *)GEN_TOP(((int)this + 0x3080))) = param_3;
      *((gen_code32 *)GEN_TOP(((int)this + 0x3084))) = ((code *)REFP(0x1000100));
      *((undefined1 *)GEN_TOP(((int)this + 0x3088))) = 1;
    }
  }
  return uVar4;
}

/* ref: FUN_00a41af0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a41af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa41af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0xc)));
  uVar2 = F_00a36f30(this GEN_EDX_FWD,iVar1);
  if (*((char *)GEN_TOP((uVar2 + 0x10))) == '\0') {
    F_00a3fa30((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,iVar1);
  }
  if (iVar1 == 1000) {
    uVar2 = F_00a3c7b0(this GEN_EDX_ARG,0,0);
    if (uVar2 != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 1000;
      if (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0))) {
        F_00aa8290(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
      }
    }
  }
  iVar4 = 0x80;
  puVar3 = ((undefined1 *)GEN_TOP(((int)this + 0x39e)));
  do {
    if (*(int *)(puVar3 - 0x2a) == iVar1) {
      *puVar3 = 1;
    }
    if (*(int *)(puVar3 - 0x16) == iVar1) {
      puVar3[1] = 1;
    }
    puVar3 = puVar3 + 0x3c;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_00a41b70 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a41b70(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa41b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL_GS(0x54, 12, 4);
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  undefined * this;
  uint uVar8;
  undefined4 uVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50));
  uVar8 = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  if (param_2 == ((int *)GEN_TOP(0x0))) {
    return 4;
  }
  (*(uint *)(gen_frame + 0x14)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x18)),0,0x34);
  do {
    if ((byte)uVar8 < 0xe) {
      switch((unsigned int)(uintptr_t)(uVar8 & 0xff)) {
      case 0: ;
        iVar3 = 0xdac;
        break;
      default: ;
        iVar3 = (uVar8 & 0xff) + 0xc7f;
        break;
      case 0xb: ;
      case 0xc: ;
        iVar3 = 0xce4;
        break;
      case 0xd: ;
        iVar3 = 0xd48;
      }
    }
    else {
      iVar3 = 9999;
    }
    uVar4 = F_00a37350(param_1 GEN_EDX_ARG,iVar3);
    *(uint *)(((undefined1 *)(gen_frame + 0x18)) + uVar8 * 4 - 4) = uVar4;
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0xe);
  (*(int *)(gen_frame + 0x0)) = 0;
  piVar7 = param_2;
  if ((ushort)param_3 != 0) {
    do {
      iVar3 = *piVar7;
      uVar8 = piVar7[1];
      iVar1 = piVar7[2];
      if (((iVar3 != 1) && (uVar4 = F_00a3d8b0(param_1 GEN_EDX_ARG,iVar3,iVar1), uVar4 < uVar8)) &&
         (0x11 < iVar3 - 2U)) {
        if (iVar3 - 0x17U < 4) {
          return 0x18;
        }
        uVar5 = F_00ab24a0(iVar3);
        if (uVar5 == 0) {
          return 6;
        }
        if ((*((char *)GEN_TOP((uVar5 + 0xbd))) == '\0') ||
           (uVar6 = F_00a41080(param_1 GEN_EDX_ARG,iVar3,iVar1,1,1), uVar6 == 0)) {
          if ((*((char *)GEN_TOP((uVar5 + 0xbe))) != '\0') &&
             (uVar6 = F_00a41080(param_1 GEN_EDX_ARG,iVar3,iVar1,1,1), uVar6 != 0)) {
            if (param_4 != '\0') {
              piVar7 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
              uVar9 = 0x6a2;
              this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x28))))(piVar7 GEN_EDX_ARG)));
              F_0046a6b0(this GEN_EDX_ARG,uVar9,iVar3);
            }
            return 0x1b;
          }
          bVar2 = F_00a36920(uVar5);
          if (bVar2 == 0xe) {
            uVar8 = uVar8 - uVar4;
            uVar4 = F_00ab24a0(iVar3);
            if (((uVar4 != 0) && (iVar3 != 0)) &&
               (uVar5 = uVar8 / *((uint *)GEN_TOP((uVar4 + 0x28))), uVar4 = uVar8 % *((uint *)GEN_TOP((uVar4 + 0x28))),
               uVar8 = uVar5, uVar4 != 0)) {
              uVar8 = uVar5 + 1;
            }
          }
          else {
            uVar4 = *(uint *)(((undefined1 *)(gen_frame + 0x18)) + (uint)bVar2 * 4 - 4);
            if (uVar4 < uVar8) {
              uVar8 = uVar8 - uVar4;
              *(int *)(((undefined1 *)(gen_frame + 0x18)) + (uint)bVar2 * 4 - 4) = 0;
            }
            else {
              *(uint *)(((undefined1 *)(gen_frame + 0x18)) + (uint)bVar2 * 4 - 4) = uVar4 - uVar8;
              uVar8 = 0;
            }
          }
          (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + uVar8;
        }
      }
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      piVar7 = piVar7 + 3;
    } while ((*(int *)(gen_frame + 0x0)) < (int)(uint)(ushort)param_3);
  }
  uVar8 = F_00a3a180(param_1 GEN_EDX_ARG);
  return -(uint)(uVar8 < (*(uint *)(gen_frame + 0x8))) & 0x18;
}

/* ref: FUN_00a41df0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a41df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa41df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  undefined * pvVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  piVar2 = ((int *)GEN_TOP(F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_FWD,param_1)));
  piVar4 = REFG(int * PTR32, 0x1379694);
  (*(int * PTR32 *)(gen_frame + 0x18)) = REFG(int * PTR32, 0x1379694);
  if (((piVar2 == ((int *)GEN_TOP(0x0))) || (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG), uVar3 != 1)) ||
     (piVar2 == piVar4)) {
    return 2;
  }
  piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  F_004816e0(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  F_00c49908((int)this + 0x33c,0x20,uVar3);
  if (1 < piVar2[0xbae]) {
    uVar8 = 0;
    uVar7 = 0x1e;
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
    F_0046ac40(pvVar5 GEN_EDX_ARG,uVar7,uVar8,piVar2);
    F_00492c50(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
    return 0x13;
  }
  switch((unsigned int)(uintptr_t)((char)piVar2[0x62])) {
  case '\x02': ;
    uVar7 = 0x192;
    break;
  default: ;
    bVar1 = F_00a36640(this GEN_EDX_ARG);
    if (bVar1 == 0) {
      bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x15);
      if (bVar1 != 0) {
        fVar6 = F_00a601f0((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,piVar2);
        if ((float10)*(float *)&REFG(undefined, 0x10e4a84) < (float10)fVar6) {
          uVar7 = 0x51e;
        }
        else {
          if (*((char *)GEN_TOP(((int)piVar2 + 0x18a))) != '\f') {
            F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x15,1);
            F_00a38bd0(this GEN_EDX_ARG,param_1);
            *((undefined4 *)GEN_TOP(((int)this + 0x334))) = 3;
            *((undefined4 *)GEN_TOP(((int)this + 0x338))) = 2;
            uVar8 = 0;
            uVar7 = 0x20;
            pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
            F_0046ac40(pvVar5 GEN_EDX_ARG,uVar7,uVar8,piVar2);
            piVar2 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d5)));
            if ((*piVar2 == 0) || (piVar2[3] < 6)) {
              pvVar5 = ((undefined *)GEN_TOP(0x0));
            }
            else {
              pvVar5 = ((undefined *)GEN_TOP((*piVar2 + 0x140)));
            }
            F_00a3be70(pvVar5 GEN_EDX_ARG,2000,0);
            *((undefined4 *)GEN_TOP(((int)pvVar5 + 0xc))) = 0;
            if ((*((char *)GEN_TOP(((int)pvVar5 + 6))) == '\0') && (*((int *)GEN_TOP(((int)pvVar5 + 8))) != 1)) {
              *((undefined4 *)GEN_TOP(((int)pvVar5 + 8))) = 0;
            }
            uVar7 = 0x1b;
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
            piVar4 = ((int *)GEN_TOP(F_00763050(uVar3 GEN_EDX_ARG,uVar7)));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG);
            F_00493180(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            return 0;
          }
          uVar7 = 0x30;
        }
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
        F_0046a630(pvVar5 GEN_EDX_ARG,uVar7);
        F_00493180(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        return 2;
      }
      F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x15);
    }
    else {
      uVar8 = 0;
      uVar7 = 0x1e;
      piVar2 = (*(int * PTR32 *)(gen_frame + 0x18));
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
      F_0046ac40(pvVar5 GEN_EDX_ARG,uVar7,uVar8,piVar2);
    }
    goto LAB_00a41ed8;
  case '\x05': ;
  case '\a': ;
    uVar7 = 0x195;
    break;
  case '\x06': ;
    uVar7 = 0x196;
  }
  pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
  F_0046a630(pvVar5 GEN_EDX_ARG,uVar7);
LAB_00a41ed8: ;
  F_00493180(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0x13;
}

/* ref: FUN_00a42060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a42060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa42060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_SUSPECT(0xa42060u, "this_00");
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x44, 12, 4);
  byte bVar1;
  int * piVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  undefined * this_00;
  uint * puVar6;
  int iVar7;
  undefined4 * puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
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
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((param_2 + 4))))) {
  case 1: ;
    F_00c49908((int)this + 0x33c,0x20,param_2 + 6);
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    bVar1 = F_00a36640(this GEN_EDX_ARG);
    if (bVar1 == 0) {
      uVar13 = 4;
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x44))))(piVar2 GEN_EDX_ARG);
      pvVar3 = ((undefined *)GEN_TOP(F_00435440(uVar5 GEN_EDX_ARG,uVar13)));
      bVar1 = F_0044e420(pvVar3 GEN_EDX_ARG,(int)this + 0x33c);
      if (bVar1 == 0) {
        piVar4 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d5)));
        if ((*piVar4 == 0) || (piVar4[3] < 6)) {
          (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP(0x0));
        }
        else {
          (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP((*piVar4 + 0x140)));
        }
        F_00a3be70((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,2000,0);
        (*(int * PTR32 *)(gen_frame + 0x18))[3] = 0;
        if ((*((char *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x18)) + 6))) == '\0') && ((*(int * PTR32 *)(gen_frame + 0x18))[2] != 1)) {
          (*(int * PTR32 *)(gen_frame + 0x18))[2] = 0;
        }
        uVar5 = F_00a64490(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(int)this + 0x33c,0);
        uVar10 = 0;
        uVar13 = 0x22;
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
        F_0046ac40(pvVar3 GEN_EDX_ARG,uVar13,uVar10,uVar5);
        uVar13 = 0x1b;
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x48))))(piVar2 GEN_EDX_ARG);
        piVar2 = ((int *)GEN_TOP(F_00763050(uVar5 GEN_EDX_ARG,uVar13)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
        *((undefined4 *)GEN_TOP(((int)this + 0x334))) = 3;
        *((undefined4 *)GEN_TOP(((int)this + 0x338))) = 3;
        F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x15,1);
      }
      else {
        F_00a390b0(this GEN_EDX_ARG);
      }
    }
    else {
      F_00a3b110(this_00 GEN_EDX_ARG);
    }
    break;
  case 2: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x334))) = 3;
    *((undefined4 *)GEN_TOP(((int)this + 0x338))) = 3;
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar13 = 0x1b;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x48))))(piVar2 GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(F_00763050(uVar5 GEN_EDX_ARG,uVar13)));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG);
    if ((char)uVar5 == '\0') {
      F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x15,1);
      piVar4 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d5)));
      if ((*piVar4 == 0) || (piVar4[3] < 6)) {
        pvVar3 = ((undefined *)GEN_TOP(0x0));
      }
      else {
        pvVar3 = ((undefined *)GEN_TOP((*piVar4 + 0x140)));
      }
      F_00a3be70(pvVar3 GEN_EDX_ARG,2000,0);
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0xc))) = 0;
      if ((*((char *)GEN_TOP(((int)pvVar3 + 6))) == '\0') && (*((int *)GEN_TOP(((int)pvVar3 + 8))) != 1)) {
        *((undefined4 *)GEN_TOP(((int)pvVar3 + 8))) = 0;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
    }
    break;
  case 3: ;
    piVar2 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d5)));
    if ((*piVar2 == 0) || (piVar2[3] < 6)) {
      pvVar3 = ((undefined *)GEN_TOP(0x0));
    }
    else {
      pvVar3 = ((undefined *)GEN_TOP((*piVar2 + 0x140)));
    }
    F_00a3be70(pvVar3 GEN_EDX_ARG,2000,0);
    *((undefined4 *)GEN_TOP(((int)pvVar3 + 0xc))) = 0;
    if ((*((char *)GEN_TOP(((int)pvVar3 + 6))) == '\0') && (*((int *)GEN_TOP(((int)pvVar3 + 8))) != 1)) {
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 8))) = 0;
    }
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar13 = 0x1b;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x48))))(piVar2 GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00763050(uVar5 GEN_EDX_ARG,uVar13)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x334))) = 3;
    *((undefined4 *)GEN_TOP(((int)this + 0x338))) = 3;
    uVar13 = 0x23;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
    F_0046a630(pvVar3 GEN_EDX_ARG,uVar13);
    REFG(int, 0x13342c0) = -1;
    break;
  case 4: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x338))) = 4;
    break;
  case 5: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x334))) = 5;
    *((undefined4 *)GEN_TOP(((int)this + 0x338))) = 5;
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar11 = 0;
    uVar10 = 0;
    uVar13 = 0x18f4f;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG)));
    uVar5 = F_0043bd00(pvVar3 GEN_EDX_ARG,uVar13,uVar10,uVar11);
    (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP(uVar5));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,6);
    uVar11 = 0;
    (*(uint *)(gen_frame + 0x20)) = (uint)(*(int * PTR32 *)(gen_frame + 0x18));
    uVar10 = 0;
    uVar13 = 0x18f50;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG)));
    uVar5 = F_0043bd00(pvVar3 GEN_EDX_ARG,uVar13,uVar10,uVar11);
    (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP(uVar5));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG,6);
    uVar11 = 0;
    (*(uint *)(gen_frame + 0x28)) = (uint)(*(int * PTR32 *)(gen_frame + 0x18));
    uVar10 = 0;
    uVar13 = 0x18f51;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG)));
    piVar4 = ((int *)GEN_TOP(F_0043bd00(pvVar3 GEN_EDX_ARG,uVar13,uVar10,uVar11)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x2c)) GEN_EDX_ARG,6);
    uVar12 = 4;
    uVar9 = 0;
    uVar11 = 0;
    iVar7 = (int)this + 0x2168;
    puVar8 = &(*(undefined4 *)(gen_frame + 0x1c));
    (*(int * PTR32 *)(gen_frame + 0x30)) = (*(int * PTR32 *)(gen_frame + 0x18));
    uVar10 = 4;
    uVar13 = 9;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG)));
    REFG(undefined4, 0x13342bc) = F_008668b0(pvVar3 GEN_EDX_ARG,uVar13,uVar10,puVar8,iVar7,uVar11,uVar9,uVar12);
    break;
  case 6: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x338))) = 6;
    break;
  case 7: ;
    pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d5)));
    F_00a36310(pvVar3 GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar13 = 0x1b;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x48))))(piVar2 GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00763050(uVar5 GEN_EDX_ARG,uVar13)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x334))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x338))) = 0;
    piVar4 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d5)));
    if ((*piVar4 == 0) || (piVar4[3] < 6)) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar4 + 0x140;
    }
    *((undefined1 *)GEN_TOP((iVar7 + 6))) = 0;
    *((undefined4 *)GEN_TOP((iVar7 + 0xc))) = 0;
    if (*((int *)GEN_TOP((iVar7 + 8))) != 1) {
      *((undefined4 *)GEN_TOP((iVar7 + 8))) = 0;
    }
    uVar13 = 0x24;
    goto LAB_00a42482;
  case 8: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x334))) = 3;
    *((undefined4 *)GEN_TOP(((int)this + 0x338))) = 3;
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar13 = 0x25;
    goto LAB_00a425a4;
  case 9: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x334))) = 3;
    *((undefined4 *)GEN_TOP(((int)this + 0x338))) = 3;
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar13 = 0x27;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
    F_0046a630(pvVar3 GEN_EDX_ARG,uVar13);
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,REFG(undefined4, 0x13342bc),0);
    *((undefined1 *)GEN_TOP(((int)this + 0x35c))) = 0;
    break;
  case 10: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x334))) = 3;
    *((undefined4 *)GEN_TOP(((int)this + 0x338))) = 3;
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar5 = F_00a64490(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(int)this + 0x33c,0);
    uVar10 = 0;
    uVar13 = 0x28;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
    F_0046ac40(pvVar3 GEN_EDX_ARG,uVar13,uVar10,uVar5);
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG)));
    goto LAB_00a425bf;
  case 0xb: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x334))) = 3;
    *((undefined4 *)GEN_TOP(((int)this + 0x338))) = 3;
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar13 = 0x2e;
    goto LAB_00a425a4;
  case 0xc: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x334))) = 3;
    *((undefined4 *)GEN_TOP(((int)this + 0x338))) = 3;
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar5 = F_00a64490(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(int)this + 0x33c,0);
    uVar10 = 0;
    uVar13 = 0x2f;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
    F_0046ac40(pvVar3 GEN_EDX_ARG,uVar13,uVar10,uVar5);
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG)));
    goto LAB_00a425bf;
  case 0xd: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x334))) = 3;
    *((undefined4 *)GEN_TOP(((int)this + 0x338))) = 3;
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar13 = 0x2a;
LAB_00a425a4: ;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
    F_0046a630(pvVar3 GEN_EDX_ARG,uVar13);
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG)));
    goto LAB_00a425bf;
  case 0xe: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x334))) = 3;
    *((undefined4 *)GEN_TOP(((int)this + 0x338))) = 3;
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar5 = F_00a64490(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(int)this + 0x33c,0);
    uVar10 = 0;
    uVar13 = 0x2b;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
    F_0046ac40(pvVar3 GEN_EDX_ARG,uVar13,uVar10,uVar5);
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG)));
LAB_00a425bf: ;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,REFG(undefined4, 0x13342bc),0);
    *((undefined1 *)GEN_TOP(((int)this + 0x35c))) = 0;
    break;
  case 0xf: ;
    uVar5 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 0x28))));
    if (uVar5 != 0) {
      *((uint *)GEN_TOP((uVar5 + 0x2eb8))) = (uint)*((byte *)GEN_TOP((param_2 + 5)));
    }
    if (REFG(int, 0x1379690) == *((int *)GEN_TOP((param_2 + 0x28)))) {
      *((uint *)GEN_TOP(((int)this + 0x334))) = (uint)*((byte *)GEN_TOP((param_2 + 5)));
    }
    break;
  case 0x10: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x334))) = 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x338))) = 1;
    piVar2 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d5)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar2;
    if (piVar2 == ((int *)GEN_TOP(0x0))) {
      F_00493180(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      puVar6 = &(*(uint *)(gen_frame + 0x3c));
      iVar7 = 3;
      do {
        puVar6 = puVar6 - 2;
        uVar5 = F_005a2670(puVar6 GEN_EDX_ARG);
        iVar7 = iVar7 - 1;
      } while (-1 < iVar7);
      return uVar5;
    }
    F_00a36310(piVar2 GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar13 = 0x1b;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x48))))(piVar2 GEN_EDX_ARG);
    pvVar3 = ((undefined *)GEN_TOP(F_00763050(uVar5 GEN_EDX_ARG,uVar13)));
    F_007776f0(pvVar3 GEN_EDX_ARG);
    if ((*(*(int * PTR32 *)(gen_frame + 0x18)) == 0) || ((*(int * PTR32 *)(gen_frame + 0x18))[3] < 6)) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(*(int * PTR32 *)(gen_frame + 0x18)) + 0x140;
    }
    *((undefined1 *)GEN_TOP((iVar7 + 6))) = 0;
    *((undefined4 *)GEN_TOP((iVar7 + 0xc))) = 0;
    if (*((int *)GEN_TOP((iVar7 + 8))) != 1) {
      *((undefined4 *)GEN_TOP((iVar7 + 8))) = 0;
    }
    uVar13 = 0x26;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
    F_0046a630(pvVar3 GEN_EDX_ARG,uVar13);
    F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x15,0);
    REFG(undefined4, 0x13342bc) = 0xffffffff;
    REFG(int, 0x13342c0) = -1;
    *((undefined2 *)GEN_TOP(((int)this + 0x35c))) = 0x100;
    break;
  case 0x11: ;
    pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d5)));
    F_00a36310(pvVar3 GEN_EDX_ARG);
    break;
  case 0x12: ;
    pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d5)));
    F_00a36310(pvVar3 GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar13 = 0x1b;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x48))))(piVar2 GEN_EDX_ARG);
    piVar4 = ((int *)GEN_TOP(F_00763050(uVar5 GEN_EDX_ARG,uVar13)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x334))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x338))) = 0;
    piVar4 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d5)));
    if ((*piVar4 == 0) || (piVar4[3] < 6)) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar4 + 0x140;
    }
    *((undefined1 *)GEN_TOP((iVar7 + 6))) = 0;
    *((undefined4 *)GEN_TOP((iVar7 + 0xc))) = 0;
    if (*((int *)GEN_TOP((iVar7 + 8))) != 1) {
      *((undefined4 *)GEN_TOP((iVar7 + 8))) = 0;
    }
    uVar13 = 0x36;
LAB_00a42482: ;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
    F_0046a630(pvVar3 GEN_EDX_ARG,uVar13);
    if (REFG(int, 0x13342c0) != -1) {
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x54))))(piVar4 GEN_EDX_ARG,REFG(int, 0x13342c0),0);
      REFG(int, 0x13342c0) = -1;
    }
    if (REFG(undefined4, 0x13342bc) != 0xffffffff) {
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,REFG(undefined4, 0x13342bc),0);
      REFG(undefined4, 0x13342bc) = 0xffffffff;
    }
    F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x15,0);
    *((undefined2 *)GEN_TOP(((int)this + 0x35c))) = 0x100;
  }
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG);
  *((byte *)GEN_TOP((uVar5 + 0x230bf))) = *((byte *)GEN_TOP((uVar5 + 0x230bf))) | 1;
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
  puVar6 = &(*(uint *)(gen_frame + 0x3c));
  iVar7 = 3;
  do {
    puVar6 = puVar6 - 2;
    uVar5 = F_005a2670(puVar6 GEN_EDX_ARG);
    iVar7 = iVar7 - 1;
  } while (-1 < iVar7);
  return uVar5;
}

/* ref: FUN_00a42940 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_00a42940(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa42940u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x8c, 4, 4);
  int * piVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  undefined4 uVar8;
  int * PTR32 * ppiVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x84)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x88));
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))(piVar1 GEN_EDX_ARG);
  if ((char)param_2 == '\0') goto LAB_00a42c83;
  (*(char *)(gen_frame + 0x23)) = '\0';
  (*(char *)(gen_frame + 0x22)) = '\0';
  pcVar3 = ((char *)GEN_TOP((param_3 + 3)));
  iVar7 = 7;
  do {
    if (pcVar3[-3] != '\0') {
      (*(char *)(gen_frame + 0x23)) = '\x01';
    }
    if (pcVar3[-1] != '\0') {
      (*(char *)(gen_frame + 0x22)) = '\x01';
    }
    if (*pcVar3 != '\0') {
      (*(char *)(gen_frame + 0x23)) = '\x01';
    }
    if (pcVar3[2] != '\0') {
      (*(char *)(gen_frame + 0x22)) = '\x01';
    }
    pcVar3 = pcVar3 + 6;
    iVar7 = iVar7 - 1;
  } while (iVar7 != 0);
  uVar4 = F_0043b3e0(uVar2 GEN_EDX_ARG,param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG,uVar4 + 4,REFG(undefined4, 0x108cc50));
  (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(0x0));
  piVar1 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar1;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x8));
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x78)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x7c)) = ((int *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x80)) = -1;
  F_00490f90(&(*(int *)(gen_frame + 0x78)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x24)));
  if ((*(uint *)(gen_frame + 0x10)) <= (*(int *)(gen_frame + 0x18)) + 1U) {
    F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,1);
  }
  uVar4 = (*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x10)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x10));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + uVar4 * 4))) == 0) {
    uVar5 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + uVar4 * 4))) = uVar5;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + uVar4 * 4)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *piVar1 = 0;
    piVar1[1] = 0;
    *(undefined1 *)(piVar1 + 2) = 0xff;
    if (((*(char *)(gen_frame + 0x80)) != -1) && (piVar1 != &(*(int *)(gen_frame + 0x78)))) {
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
      (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)(gen_frame + 0x7c));
      if ((*(char *)(gen_frame + 0x80)) == '\0') {
        F_004919b0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      else if ((*(char *)(gen_frame + 0x80)) == '\x01') {
        F_00491a60(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
  }
  (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
  if ((((*(int * PTR32 *)(gen_frame + 0x7c)) != ((int *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x80)) != '\0')) && ((*(char *)(gen_frame + 0x80)) == '\x01')) {
    pvVar6 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x7c))));
    *((int *)GEN_TOP(((int)pvVar6 + 0x54))) = *((int *)GEN_TOP(((int)pvVar6 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar6 + 0x54))) < 1) {
      F_0042c880(pvVar6 GEN_EDX_ARG);
      F_00406ad0(pvVar6);
    }
  }
  (*(int *)(gen_frame + 0x78)) = 0;
  (*(int *)(gen_frame + 0x78)) = param_1 + 1;
  (*(int * PTR32 *)(gen_frame + 0x7c)) = &(*(int *)(gen_frame + 0x78));
  (*(char *)(gen_frame + 0x80)) = '\0';
  if ((*(uint *)(gen_frame + 0x10)) <= (*(int *)(gen_frame + 0x18)) + 1U) {
    F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,1);
  }
  uVar4 = (*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x10)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0x10));
  }
  if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + uVar4 * 4))) == 0) {
    uVar5 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + uVar4 * 4))) = uVar5;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + uVar4 * 4)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *piVar1 = 0;
    piVar1[1] = 0;
    *(undefined1 *)(piVar1 + 2) = 0xff;
    if (((*(char *)(gen_frame + 0x80)) != -1) && (piVar1 != &(*(int *)(gen_frame + 0x78)))) {
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
      (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)(gen_frame + 0x7c));
      if ((*(char *)(gen_frame + 0x80)) == '\0') {
        F_004919b0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      else if ((*(char *)(gen_frame + 0x80)) == '\x01') {
        F_00491a60(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
  }
  (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
  if ((((*(int * PTR32 *)(gen_frame + 0x7c)) != ((int *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x80)) != '\0')) && ((*(char *)(gen_frame + 0x80)) == '\x01')) {
    pvVar6 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x7c))));
    *((int *)GEN_TOP(((int)pvVar6 + 0x54))) = *((int *)GEN_TOP(((int)pvVar6 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar6 + 0x54))) < 1) {
      F_0042c880(pvVar6 GEN_EDX_ARG);
      F_00406ad0(pvVar6);
    }
  }
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  iVar7 = *piVar1;
  if ((*(char *)(gen_frame + 0x23)) == '\0') {
    if ((*(char *)(gen_frame + 0x22)) == '\0') {
      if (param_1 != 100) {
        uVar8 = 0x2f3;
        goto LAB_00a42c49;
      }
      uVar8 = 0x2f6;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar7 + 0x28))))(piVar1)));
      F_0046a630(pvVar6 GEN_EDX_ARG,uVar8);
    }
    else if (param_1 == 100) {
      uVar8 = 0x76e;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar7 + 0x28))))(piVar1)));
      F_0046a630(pvVar6 GEN_EDX_ARG,uVar8);
    }
    else {
      uVar8 = 0x76d;
LAB_00a42c49: ;
      ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x8));
      pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar7 + 0x28))))(piVar1)));
      F_0046aa70(pvVar6 GEN_EDX_ARG,uVar8,ppiVar9);
    }
  }
  else {
    if (param_1 != 100) {
      uVar8 = 0x2f9;
      goto LAB_00a42c49;
    }
    uVar8 = 0x2fc;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar7 + 0x28))))(piVar1)));
    F_0046a630(pvVar6 GEN_EDX_ARG,uVar8);
  }
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(0x0));
  F_0042c880(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
LAB_00a42c83: ;
  uVar2 = F_0044c0d0(uVar2 GEN_EDX_ARG,param_1,(char)param_2,(undefined1)param_4,param_3);
  return uVar2;
}

/* ref: FUN_00a42cb0 */
GEN_OWN_GS GEN_FRAME byte GEN_STDCALL F_00a42cb0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa42cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined1 * puVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  uVar2 = F_0046e5e0(param_1 GEN_EDX_ARG);
  if (uVar2 - 0x1e8481 < 0x489) {
    return 0;
  }
  uVar2 = F_0046e5e0(param_1 GEN_EDX_ARG);
  if (uVar2 == 1) {
    return 0;
  }
  uVar2 = F_0046e5e0(param_1 GEN_EDX_ARG);
  uVar2 = F_00ab24a0(uVar2);
  if (uVar2 == 0) {
    return 0;
  }
  uVar3 = F_00906df0(param_1 GEN_EDX_ARG);
  if (uVar3 == 0) {
    return 0;
  }
  F_004816e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_0046e5e0(param_1 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(uint *)(gen_frame + 0x18)) = uVar3;
  (*(uint * PTR32 *)(gen_frame + 0x1c)) = &(*(uint *)(gen_frame + 0x18));
  (*(undefined1 *)(gen_frame + 0x20)) = 0;
  F_00493b50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x18)));
  F_004917c0(&(*(uint *)(gen_frame + 0x18)) GEN_EDX_ARG);
  if (*((uint *)GEN_TOP((uVar2 + 0x74))) == (uint)*((byte *)GEN_TOP((REFG(int, 0x1379694) + 0x1688)))) {
    if ((int)(uint)*((byte *)GEN_TOP((REFG(int, 0x1379694) + 0x1689))) < (int)(*((byte *)GEN_TOP((uVar2 + 0x9f))) - 10)) {
      if (param_2 != '\0') {
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        uVar6 = 0x56e;
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
        F_0046a630(pvVar5 GEN_EDX_ARG,uVar6);
      }
      goto LAB_00a42e78;
    }
    uVar1 = F_00906d60(param_1 GEN_EDX_ARG);
    if (uVar1 < 30000) {
      F_00493180(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return 1;
    }
    if (param_2 == '\0') goto LAB_00a42e78;
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar6 = 0x572;
  }
  else {
    F_00492c50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar3 = F_0046e5e0(param_1 GEN_EDX_ARG);
    (*(uint * PTR32 *)(gen_frame + 0x1c)) = &(*(uint *)(gen_frame + 0x18));
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(uint *)(gen_frame + 0x18)) = uVar3;
    (*(undefined1 *)(gen_frame + 0x20)) = 0;
    F_00493b50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x18)));
    F_004917c0(&(*(uint *)(gen_frame + 0x18)) GEN_EDX_ARG);
    uVar2 = *((uint *)GEN_TOP((uVar2 + 0x74)));
    (*(uint * PTR32 *)(gen_frame + 0x1c)) = &(*(uint *)(gen_frame + 0x18));
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(uint *)(gen_frame + 0x18)) = uVar2;
    (*(undefined1 *)(gen_frame + 0x20)) = 0;
    F_00493bc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x18)));
    F_004917c0(&(*(uint *)(gen_frame + 0x18)) GEN_EDX_ARG);
    if (param_2 == '\0') goto LAB_00a42e78;
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar6 = 0x56d;
  }
  puVar7 = ((undefined1 *)(gen_frame + 0x0));
  pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
  F_0046aa70(pvVar5 GEN_EDX_ARG,uVar6,puVar7);
LAB_00a42e78: ;
  F_00493180(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00a42ea0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a42ea0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa42ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  GEN_FRAME_DECL_GS(0x30, 0, 4);
  byte bVar1;
  ushort uVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined1 * puVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = param_3;
  if ((param_4 & 4) != 0) {
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    uVar6 = 0x21;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG);
    pvVar5 = ((undefined *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar6)));
    F_008d5350(pvVar5 GEN_EDX_ARG);
    if ((param_4 & 1) == 0) {
      uVar2 = F_00906d60(param_2 GEN_EDX_ARG);
      if (uVar2 == 0) {
        uVar2 = F_00906d60((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG);
        if (uVar2 != 0) {
          bVar1 = F_00a3e6a0(param_2,0);
          if (bVar1 != 0) {
            F_004816e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            uVar4 = F_0046e5e0(param_2 GEN_EDX_ARG);
            (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
            (*(uint *)(gen_frame + 0x1c)) = 0;
            (*(uint *)(gen_frame + 0x1c)) = uVar4;
            (*(undefined1 *)(gen_frame + 0x24)) = 0;
            F_00493b50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x1c)));
            F_004917c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG);
            piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
            uVar6 = 0x575;
LAB_00a42ffc: ;
            puVar7 = ((undefined1 *)(gen_frame + 0x0));
            pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG)));
            F_0046aa70(pvVar5 GEN_EDX_ARG,uVar6,puVar7);
            F_00493180(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          }
        }
      }
      else {
        bVar1 = (byte)(((uint)*((ushort *)GEN_TOP(((int)param_2 + 0x12))) * 100) / 30000);
        if (((bVar1 == 0) && (*((ushort *)GEN_TOP(((int)param_2 + 0x12))) != 0)) || (bVar1 < 0xb)) {
          bVar1 = F_00a36000((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG);
          if (10 < bVar1) {
            bVar1 = F_00a3e6a0(param_2,0);
            if (bVar1 != 0) {
              F_004816e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
              uVar4 = F_0046e5e0(param_2 GEN_EDX_ARG);
              (*(uint *)(gen_frame + 0x1c)) = 0;
              (*(uint *)(gen_frame + 0x1c)) = uVar4;
              (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
              (*(undefined1 *)(gen_frame + 0x24)) = 0;
              F_00493b50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x1c)));
              F_004917c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG);
              piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
              uVar6 = 0x576;
              goto LAB_00a42ffc;
            }
          }
        }
        else {
          bVar1 = F_00a36000(param_2 GEN_EDX_ARG);
          if (bVar1 < 0x1f) {
            bVar1 = F_00a36000((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG);
            if (0x1e < bVar1) {
              bVar1 = F_00a3e6a0(param_2,0);
              if (bVar1 != 0) {
                F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x1f,0,0);
              }
            }
          }
        }
      }
    }
  }
  if ((param_4 & 8) != 0) {
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar6 = 0x22;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG);
    pvVar5 = ((undefined *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar6)));
    F_008e9cb0(pvVar5 GEN_EDX_ARG);
    uVar6 = 0x23;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG);
    pvVar5 = ((undefined *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar6)));
    F_008edf60(pvVar5 GEN_EDX_ARG);
    if ((param_4 & 1) == 0) {
      uVar4 = F_0046e5e0(param_2 GEN_EDX_ARG);
      uVar4 = F_00ab24a0(uVar4);
      if (uVar4 != 0) {
        uVar2 = F_0071d210(param_2 GEN_EDX_ARG);
        if (uVar2 < 10000) {
          uVar2 = F_0071d210(param_2 GEN_EDX_ARG);
          if (uVar2 == 0) goto LAB_00a431da;
          uVar2 = F_0071d210((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG);
          if (((uVar2 != 0) || (*((char *)GEN_TOP((uVar4 + 0xa6))) == '\0')) ||
             (*((char *)GEN_TOP((uVar4 + 0xbf))) != '\0')) goto LAB_00a431da;
          F_004816e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          uVar4 = F_0046e5e0(param_2 GEN_EDX_ARG);
          (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
          (*(uint *)(gen_frame + 0x1c)) = 0;
          (*(uint *)(gen_frame + 0x1c)) = uVar4;
          (*(undefined1 *)(gen_frame + 0x24)) = 0;
          F_00493b50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x1c)));
          F_004917c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG);
          piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
          puVar7 = ((undefined1 *)(gen_frame + 0x0));
          uVar6 = 0x2e7;
          pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG)));
          F_0046aa70(pvVar5 GEN_EDX_ARG,uVar6,puVar7);
          F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x3e,0,0);
        }
        else {
          uVar2 = F_0071d210((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG);
          if ((9999 < uVar2) || (*((char *)GEN_TOP((uVar4 + 0xa6))) == '\0')) goto LAB_00a431da;
          F_004816e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          uVar4 = F_0046e5e0(param_2 GEN_EDX_ARG);
          (*(uint *)(gen_frame + 0x1c)) = 0;
          (*(uint *)(gen_frame + 0x1c)) = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
          (*(undefined1 *)(gen_frame + 0x24)) = 0;
          F_00493b50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x1c)));
          F_004917c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG);
          piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
          puVar7 = ((undefined1 *)(gen_frame + 0x0));
          uVar6 = 0x2e8;
          pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG)));
          F_0046aa70(pvVar5 GEN_EDX_ARG,uVar6,puVar7);
        }
        F_00493180(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
  }
LAB_00a431da: ;
  if (((param_4 & 0x10) != 0) && ((*((byte *)GEN_TOP(((int)param_2 + 0x14))) & 1) != 0)) {
    F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x3c,0,0);
  }
  if ((param_4 & 0x40) != 0) {
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar6 = 0x22;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG);
    pvVar5 = ((undefined *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar6)));
    F_008e9cb0(pvVar5 GEN_EDX_ARG);
    uVar6 = 0x23;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG);
    pvVar5 = ((undefined *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar6)));
    F_008edf60(pvVar5 GEN_EDX_ARG);
  }
  uVar4 = F_00a70960(&REFG(undefined, 0x14ab790) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00a43260 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a43260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa43260u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL(0xce4, 12);
  undefined2 * puVar1;
  undefined2 * puVar2;
  byte bVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined2 * this_00;
  uint uVar6;
  int * piVar7;
  int iVar8;
  int * PTR32 * ppiVar9;
  undefined4 * puVar10;
  int iVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  (*(uint *)(gen_frame + 0xcd0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcd4);
  (*(int *)(gen_frame + 0x10)) = param_2;
  if (param_3 == 0) {
    uVar4 = 6;
  }
  else {
    *((int *)GEN_TOP(((int)this + 0x2458))) = param_1;
    *((undefined1 *)GEN_TOP(((int)this + 0x245c))) = 1;
    F_00c48350(((undefined *)GEN_TOP(((int)this + 0x245d))),0,0x2a);
    (*(uint *)(gen_frame + 0xc)) = 0;
    iVar8 = param_2;
    do {
      puVar1 = ((undefined2 *)GEN_TOP(((int)((int * PTR32 *)(gen_frame + 0xcb4)) + (*(uint *)(gen_frame + 0xc)) * 2)));
      *puVar1 = 9999;
      puVar2 = ((undefined2 *)GEN_TOP(((int)((undefined4 *)(gen_frame + 0xc98)) + (*(uint *)(gen_frame + 0xc)) * 2)));
      *puVar2 = 0xffff;
      uVar4 = *((uint *)GEN_TOP((iVar8 + (*(uint *)(gen_frame + 0xc)) * 8)));
      uVar6 = (*(uint *)(gen_frame + 0xc));
      if (uVar4 != 0) {
        if ((byte)(*(uint *)(gen_frame + 0xc)) < 0xe) {
          switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0xc)) & 0xff)) {
          case 0: ;
            (*(uint *)(gen_frame + 0x8)) = 0xdac;
            break;
          default: ;
            (*(uint *)(gen_frame + 0x8)) = ((*(uint *)(gen_frame + 0xc)) & 0xff) + 0xc7f;
            break;
          case 0xb: ;
          case 0xc: ;
            (*(uint *)(gen_frame + 0x8)) = 0xce4;
            break;
          case 0xd: ;
            (*(uint *)(gen_frame + 0x8)) = 0xd48;
          }
        }
        else {
          (*(uint *)(gen_frame + 0x8)) = 9999;
        }
        pvVar5 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,1000)));
        if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
          (*(undefined2 * PTR32 *)(gen_frame + 0x0)) = ((undefined2 *)GEN_TOP(0x0));
LAB_00a433ba: ;
          if ((*(uint *)(gen_frame + 0xc)) == 0xb) {
            this_00 = ((undefined2 *)GEN_TOP(F_00a3a150(this GEN_EDX_ARG,1000,0xc)));
            if (((this_00 != ((undefined2 *)GEN_TOP(0x0))) &&
                ((uVar6 = F_0046e5e0(this_00 GEN_EDX_ARG), uVar6 == *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 0x58))) &&
                 (bVar3 = F_0046e590(this_00 GEN_EDX_ARG), bVar3 == *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 0x5c))))))) &&
               ((uVar6 = F_0046e5e0(this_00 GEN_EDX_ARG), uVar6 != *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 0x60))) ||
                (bVar3 = F_0046e590(this_00 GEN_EDX_ARG), bVar3 != *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 100)))))))
            goto LAB_00a43510;
          }
          else if ((*(uint *)(gen_frame + 0xc)) == 0xc) {
            this_00 = ((undefined2 *)GEN_TOP(F_00a3a150(this GEN_EDX_ARG,1000,0xb)));
            if (((this_00 != ((undefined2 *)GEN_TOP(0x0))) &&
                (uVar6 = F_0046e5e0(this_00 GEN_EDX_ARG), uVar6 == *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 0x60))))) &&
               ((bVar3 = F_0046e590(this_00 GEN_EDX_ARG), bVar3 == *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 100))) &&
                ((uVar6 = F_0046e5e0(this_00 GEN_EDX_ARG), uVar6 != *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 0x58))) ||
                 (bVar3 = F_0046e590(this_00 GEN_EDX_ARG), bVar3 != *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 0x5c)))))))))
            goto LAB_00a43510;
            goto LAB_00a43527;
          }
          goto LAB_00a4342d;
        }
        this_00 = ((undefined2 *)GEN_TOP(F_00a37da0(pvVar5 GEN_EDX_ARG,(*(uint *)(gen_frame + 0xc)))));
        (*(undefined2 * PTR32 *)(gen_frame + 0x0)) = this_00;
        if (((this_00 == ((undefined2 *)GEN_TOP(0x0))) || (uVar6 = F_0046e5e0(this_00 GEN_EDX_ARG), uVar6 != uVar4)) ||
           (bVar3 = F_0046e590(this_00 GEN_EDX_ARG), bVar3 != *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 4 + (*(uint *)(gen_frame + 0xc)) * 8)))))
        goto LAB_00a433ba;
LAB_00a43510: ;
        iVar11 = (*(int *)(gen_frame + 0x10));
        if (this_00 == ((undefined2 *)GEN_TOP(0x0))) {
          if ((*(uint *)(gen_frame + 0xc)) == 0xc) {
LAB_00a43527: ;
            if ((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 0x60))) != *((int *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 0x58)))) ||
               ((*(uint *)(gen_frame + 0x8)) != (*(uint *)(gen_frame + 0xcc8)) >> 0x10)) goto LAB_00a4342d;
            uVar6 = (uint)(*(ushort *)(gen_frame + 0xcae));
          }
          else {
LAB_00a4342d: ;
            uVar6 = 0xffffffff;
          }
          iVar8 = (*(int *)(gen_frame + 0x10));
          bVar3 = *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 4 + (*(uint *)(gen_frame + 0xc)) * 8)));
          (*(undefined4 *)(gen_frame + 0x4)) = 0;
          this_00 = ((undefined2 *)GEN_TOP(F_00a3dc60(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x8)),uVar4,&(*(undefined4 *)(gen_frame + 0x4)),0,(uint)bVar3,uVar6)));
          iVar11 = (*(int *)(gen_frame + 0x10));
          if (this_00 == ((undefined2 *)GEN_TOP(0x0))) {
            if (((*(undefined2 * PTR32 *)(gen_frame + 0x0)) == ((undefined2 *)GEN_TOP(0x0))) ||
               (uVar4 = F_0046e5e0((*(undefined2 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG), uVar4 != *((uint *)GEN_TOP((iVar8 + (*(uint *)(gen_frame + 0xc)) * 8))))) {
              if ((*(uint *)(gen_frame + 0xc)) == 0xb) {
                this_00 = ((undefined2 *)GEN_TOP(F_00a3a150(this GEN_EDX_ARG,1000,0xc)));
                iVar8 = (*(int *)(gen_frame + 0x10));
                if (((this_00 != ((undefined2 *)GEN_TOP(0x0))) &&
                    (uVar4 = F_0046e5e0(this_00 GEN_EDX_ARG), iVar8 = (*(int *)(gen_frame + 0x10)),
                    uVar4 == *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 0x58))))) &&
                   (uVar4 = F_0046e5e0(this_00 GEN_EDX_ARG), iVar8 = (*(int *)(gen_frame + 0x10)),
                   uVar4 != *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 0x60))))) {
                  *((undefined1 *)GEN_TOP(((int)this + 0x2480))) = 1;
                  goto LAB_00a435f4;
                }
              }
              else if ((*(uint *)(gen_frame + 0xc)) == 0xc) {
                this_00 = ((undefined2 *)GEN_TOP(F_00a3a150(this GEN_EDX_ARG,1000,0xb)));
                if (((this_00 != ((undefined2 *)GEN_TOP(0x0))) &&
                    (uVar4 = F_0046e5e0(this_00 GEN_EDX_ARG), uVar4 == *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 0x60))))) &&
                   (uVar4 = F_0046e5e0(this_00 GEN_EDX_ARG), uVar4 != *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 0x58))))) {
                  *((undefined1 *)GEN_TOP(((int)this + 0x2483))) = 1;
                  goto LAB_00a435f4;
                }
                goto LAB_00a43605;
              }
              goto LAB_00a43637;
            }
            *((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0xc)) * 3 + 0x245f + (int)this))) = 1;
            this_00 = (*(undefined2 * PTR32 *)(gen_frame + 0x0));
LAB_00a435f4: ;
            iVar11 = (*(int *)(gen_frame + 0x10));
            if (this_00 != ((undefined2 *)GEN_TOP(0x0))) goto LAB_00a437fc;
            iVar8 = (*(int *)(gen_frame + 0x10));
            if ((*(uint *)(gen_frame + 0xc)) == 0xc) {
LAB_00a43605: ;
              iVar8 = (*(int *)(gen_frame + 0x10));
              if ((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 0x60))) != *((int *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 0x58)))) ||
                 ((*(uint *)(gen_frame + 0x8)) != (*(uint *)(gen_frame + 0xcc8)) >> 0x10)) goto LAB_00a43637;
              uVar4 = (uint)(*(ushort *)(gen_frame + 0xcae));
            }
            else {
LAB_00a43637: ;
              uVar4 = 0xffffffff;
            }
            uVar14 = *((undefined4 *)GEN_TOP((iVar8 + (*(uint *)(gen_frame + 0xc)) * 8)));
            (*(undefined4 *)(gen_frame + 0x4)) = 0;
            this_00 = ((undefined2 *)GEN_TOP(F_00a3dc60(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x8)),uVar14,&(*(undefined4 *)(gen_frame + 0x4)),0,0xffffffff,uVar4)));
            if (this_00 == ((undefined2 *)GEN_TOP(0x0))) {
              *((undefined1 *)GEN_TOP(((int)this + (*(uint *)(gen_frame + 0xc)) * 3 + 0x245d))) = 1;
              uVar6 = (*(uint *)(gen_frame + 0xc));
              if ((*(uint *)(gen_frame + 0xc)) == 0) {
                *((undefined1 *)GEN_TOP(((int)this + 0x245c))) = 0;
                F_00a42940(param_1,0,(int)this + 0x245d,1);
                piVar7 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
                uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x34))))(piVar7 GEN_EDX_ARG);
                uVar4 = F_0043b3e0(uVar4 GEN_EDX_ARG,param_1);
                F_0042cc20(((undefined1 *)(gen_frame + 0xc34)) GEN_EDX_ARG,uVar4 + 4,REFG(undefined4, 0x108cc50));
                ((int * PTR32 *)(gen_frame + 0xcb4))[1] = ((int *)GEN_TOP(0x0));
                piVar7 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
                ((int * PTR32 *)(gen_frame + 0xcb4))[1] = piVar7;
                if (piVar7 != ((int *)GEN_TOP(0x0))) {
                  *piVar7 = 0;
                  piVar7[1] = 0;
                }
                *piVar7 = (int)(((int * PTR32 *)(gen_frame + 0xcb4)) + 1);
                ((int * PTR32 *)(gen_frame + 0xcb4))[2] = ((int *)GEN_TOP(0x0));
                ((int * PTR32 *)(gen_frame + 0xcb4))[3] = ((int *)GEN_TOP(0x0));
                ((int * PTR32 *)(gen_frame + 0xcb4))[4] = ((int *)GEN_TOP(0x0));
                (*(uint *)(gen_frame + 0xcc8)) = 0;
                (*(int *)(gen_frame + 0xc8c)) = 0;
                (*(int * PTR32 *)(gen_frame + 0xc90)) = ((undefined4 *)GEN_TOP(0x0));
                (*(char *)(gen_frame + 0xc94)) = -1;
                F_00490f90(&(*(int *)(gen_frame + 0xc8c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc34)));
                F_00493bc0(((int * PTR32 *)(gen_frame + 0xcb4)) + 1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0xc8c)));
                if ((((*(int * PTR32 *)(gen_frame + 0xc90)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0xc94)) != '\0')) && ((*(char *)(gen_frame + 0xc94)) == '\x01'))
                {
                  pvVar5 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xc90))));
                  *((int *)GEN_TOP(((int)pvVar5 + 0x54))) = *((int *)GEN_TOP(((int)pvVar5 + 0x54))) - 1;
                  if (*((int *)GEN_TOP(((int)pvVar5 + 0x54))) < 1) {
                    F_0042c880(pvVar5 GEN_EDX_ARG);
                    F_00406ad0(pvVar5);
                  }
                }
                (*(int *)(gen_frame + 0xc8c)) = 0;
                (*(int *)(gen_frame + 0xc8c)) = param_1 + 1;
                (*(char *)(gen_frame + 0xc94)) = '\0';
                (*(int * PTR32 *)(gen_frame + 0xc90)) = &(*(int *)(gen_frame + 0xc8c));
                F_00493b50(((int * PTR32 *)(gen_frame + 0xcb4)) + 1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0xc8c)));
                if ((((*(int * PTR32 *)(gen_frame + 0xc90)) != ((int *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0xc94)) != '\0')) && ((*(char *)(gen_frame + 0xc94)) == '\x01')) {
                  pvVar5 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xc90))));
                  *((int *)GEN_TOP(((int)pvVar5 + 0x54))) = *((int *)GEN_TOP(((int)pvVar5 + 0x54))) - 1;
                  if (*((int *)GEN_TOP(((int)pvVar5 + 0x54))) < 1) {
                    F_0042c880(pvVar5 GEN_EDX_ARG);
                    F_00406ad0(pvVar5);
                  }
                }
                piVar7 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
                if (param_1 == 100) {
                  uVar14 = 0x2fb;
                  pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x28))))(piVar7 GEN_EDX_ARG)));
                  F_0046a630(pvVar5 GEN_EDX_ARG,uVar14);
                }
                else {
                  ppiVar9 = ((int * PTR32 *)(gen_frame + 0xcb4)) + 1;
                  uVar14 = 0x2f8;
                  pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x28))))(piVar7 GEN_EDX_ARG)));
                  F_0046aa70(pvVar5 GEN_EDX_ARG,uVar14,ppiVar9);
                }
                F_00492c50(((int * PTR32 *)(gen_frame + 0xcb4)) + 1 GEN_EDX_ARG);
                F_00429760(((int * PTR32 *)(gen_frame + 0xcb4))[1],8,0x2c4);
                ((int * PTR32 *)(gen_frame + 0xcb4))[1] = ((int *)GEN_TOP(0x0));
                F_0042c880(((undefined1 *)(gen_frame + 0xc34)) GEN_EDX_ARG);
                return 4;
              }
              goto LAB_00a4381b;
            }
            *((undefined1 *)GEN_TOP(((*(uint *)(gen_frame + 0xc)) * 3 + 0x245f + (int)this))) = 1;
            iVar11 = iVar8;
          }
        }
LAB_00a437fc: ;
        *puVar1 = *this_00;
        *puVar2 = this_00[2];
        uVar6 = (*(uint *)(gen_frame + 0xc));
        iVar8 = iVar11;
      }
LAB_00a4381b: ;
      (*(uint *)(gen_frame + 0xc)) = uVar6 + 1;
    } while ((int)(uVar6 + 1) < 0xe);
    uVar4 = F_00a36f30(this GEN_EDX_ARG,1000);
    *((undefined1 *)GEN_TOP((uVar4 + 0x10))) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0x1af;
    (*(undefined4 *)(gen_frame + 0x18)) = 0x50;
    (*(int *)(gen_frame + 0x2c)) = param_1;
    ppiVar9 = ((int * PTR32 *)(gen_frame + 0xcb4));
    puVar12 = ((undefined4 *)(gen_frame + 0x30));
    for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 - 1) {
      *puVar12 = *ppiVar9;
      ppiVar9 = ppiVar9 + 1;
      puVar12 = puVar12 + 1;
    }
    uVar15 = 0;
    uVar14 = 0;
    puVar12 = &(*(undefined4 *)(gen_frame + 0x14));
    puVar10 = ((undefined4 *)(gen_frame + 0xc98));
    puVar13 = ((undefined4 *)(gen_frame + 0x4c));
    for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 - 1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    pvVar5 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    F_00974e00(pvVar5 GEN_EDX_ARG,puVar12,uVar14,uVar15);
    uVar4 = 0;
  }
  return uVar4;
}

/* ref: FUN_00a43920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a43920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa43920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x6c, 4, 4);
  byte bVar1;
  int * piVar2;
  undefined * pvVar3;
  uint * puVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  undefined4 * puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int * piVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 * PTR32 * ppuVar15;
  
  ((uint *)(gen_frame + 0x50))[5] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x68);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  ((uint *)(gen_frame + 0x50))[0] = 0;
  ((uint *)(gen_frame + 0x50))[1] = 0;
  ((uint *)(gen_frame + 0x50))[2] = 0;
  ((uint *)(gen_frame + 0x50))[3] = 0;
  ((uint *)(gen_frame + 0x50))[4] = 0;
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  uVar14 = 0x570;
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
  F_0046a630(pvVar3 GEN_EDX_ARG,uVar14);
  (*(int *)(gen_frame + 0x30)) = 0;
  do {
    iVar10 = (*(int *)(gen_frame + 0x30));
    puVar4 = ((uint *)GEN_TOP(F_00a36f30((*(undefined * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x30)))));
    (*(uint * PTR32 *)(gen_frame + 0x4)) = puVar4;
    if (puVar4 == ((uint *)GEN_TOP(0x0))) {
      return 0;
    }
    (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(puVar4[3]));
    (*(int *)(gen_frame + 0x10)) = 0;
    if (0 < (int)puVar4[3]) {
      (*(uint * PTR32 *)(gen_frame + 0x34)) = ((uint *)GEN_TOP(0x0));
      do {
        uVar6 = *(*(uint * PTR32 *)(gen_frame + 0x4));
        if (uVar6 == 0) {
          return 0;
        }
        if ((*(int *)(gen_frame + 0x10)) < 0) {
          return uVar6;
        }
        if ((int)(*(uint * PTR32 *)(gen_frame + 0x4))[3] <= (*(int *)(gen_frame + 0x10))) {
          return uVar6;
        }
        piVar5 = ((int *)GEN_TOP((uVar6 + (int)(*(uint * PTR32 *)(gen_frame + 0x34)))));
        piVar12 = piVar5;
        if (*((char *)GEN_TOP(((int)piVar5 + 6))) != '\0') {
          iVar10 = (int)(short)piVar5[2];
          piVar5 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)piVar5 + 10))))));
          if (((*piVar5 == 0) || (iVar10 < 0)) || (piVar5[3] <= iVar10)) {
            piVar12 = ((int *)GEN_TOP(0x0));
          }
          else {
            piVar12 = ((int *)GEN_TOP((iVar10 * 0x40 + *piVar5)));
          }
        }
        if (piVar12 == ((int *)GEN_TOP(0x0))) {
          return (uint)piVar5;
        }
        uVar6 = F_0046e5e0(piVar12 GEN_EDX_ARG);
        uVar6 = F_00ab24a0(uVar6);
        if (((*((char *)GEN_TOP(((int)piVar12 + 6))) != '\0') || (piVar12[2] != 0)) && (uVar6 != 0)) {
          iVar10 = 0;
          do {
            bVar1 = F_00a42cb0(piVar12,0);
            if ((bVar1 != 0) && (*((int *)GEN_TOP((uVar6 + 0x78))) == iVar10 + 0x15da)) {
              ((uint *)(gen_frame + 0x50))[(int)(iVar10)] = ((uint *)(gen_frame + 0x50))[(int)(iVar10)] + 1;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < 5);
        }
        (*(uint * PTR32 *)(gen_frame + 0x34)) = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x34)) + 0x40)));
        iVar7 = (*(int *)(gen_frame + 0x10)) + 1;
        (*(int *)(gen_frame + 0x10)) = iVar7;
        iVar10 = (*(int *)(gen_frame + 0x30));
      } while (iVar7 < (int)(*(int * PTR32 *)(gen_frame + 0xc)));
    }
    (*(int *)(gen_frame + 0x30)) = iVar10 + 1;
    if (3 < iVar10 + 1) {
      puVar4 = ((uint *)(gen_frame + 0x50));
      (*(int *)(gen_frame + 0x30)) = 0x15da;
      (*(uint * PTR32 *)(gen_frame + 0x34)) = puVar4;
      (*(undefined * PTR32 *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x5));
      do {
        iVar10 = (*(int *)(gen_frame + 0x30));
        uVar6 = *(*(uint * PTR32 *)(gen_frame + 0x34));
        if ((uVar6 != 0) && (puVar4 = ((uint *)GEN_TOP(F_00ab24a0((*(int *)(gen_frame + 0x30))))), puVar4 != ((uint *)GEN_TOP(0x0)))) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = ((undefined4 *)GEN_TOP(0x0));
          puVar8 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar8;
          if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
            *puVar8 = 0;
            puVar8[1] = 0;
          }
          *puVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x14));
          (*(char *)(gen_frame + 0x40)) = '\0';
          (*(int *)(gen_frame + 0x38)) = 0;
          (*(int *)(gen_frame + 0x18)) = 0;
          (*(uint *)(gen_frame + 0x1c)) = 0;
          (*(int *)(gen_frame + 0x20)) = 0;
          (*(int *)(gen_frame + 0x24)) = 0;
          (*(int *)(gen_frame + 0x38)) = iVar10;
          (*(int * PTR32 *)(gen_frame + 0x3c)) = &(*(int *)(gen_frame + 0x38));
          F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
          uVar11 = (*(int *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x1c)) <= uVar11) {
            uVar11 = uVar11 - (*(uint *)(gen_frame + 0x1c));
          }
          if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + uVar11 * 4))) == 0) {
            uVar9 = F_004296a0(0xc,0,0x2c4);
            *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + uVar11 * 4))) = uVar9;
          }
          piVar12 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + uVar11 * 4)));
          if (piVar12 != ((int *)GEN_TOP(0x0))) {
            *piVar12 = 0;
            piVar12[1] = 0;
            *(undefined1 *)(piVar12 + 2) = 0xff;
            if (((*(char *)(gen_frame + 0x40)) != -1) && (piVar12 != &(*(int *)(gen_frame + 0x38)))) {
              (*(int * PTR32 *)(gen_frame + 0x8)) = piVar12;
              (*(int * PTR32 *)(gen_frame + 0xc)) = (*(int * PTR32 *)(gen_frame + 0x3c));
              if ((*(char *)(gen_frame + 0x40)) == '\0') {
                F_004919b0(&(*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
              }
              else if ((*(char *)(gen_frame + 0x40)) == '\x01') {
                F_00491a60(&(*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
              }
            }
          }
          (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
          if ((*(int * PTR32 *)(gen_frame + 0x3c)) != ((int *)GEN_TOP(0x0))) {
            if (((*(char *)(gen_frame + 0x40)) != '\0') && ((*(char *)(gen_frame + 0x40)) == '\x01')) {
              pvVar3 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x3c))));
              *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
              if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
                F_0042c880(pvVar3 GEN_EDX_ARG);
                F_00406ad0(pvVar3);
              }
            }
            (*(int * PTR32 *)(gen_frame + 0x3c)) = ((int *)GEN_TOP(0x0));
            (*(char *)(gen_frame + 0x40)) = -1;
          }
          (*(uint *)(gen_frame + 0x44)) = 0;
          (*(uint *)(gen_frame + 0x44)) = uVar6;
          (*(uint * PTR32 *)(gen_frame + 0x48)) = &(*(uint *)(gen_frame + 0x44));
          (*(char *)(gen_frame + 0x4c)) = '\0';
          if ((*(uint *)(gen_frame + 0x1c)) <= (*(int *)(gen_frame + 0x24)) + 1U) {
            F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
          }
          uVar6 = (*(int *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x1c)) <= uVar6) {
            uVar6 = uVar6 - (*(uint *)(gen_frame + 0x1c));
          }
          if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + uVar6 * 4))) == 0) {
            uVar11 = F_004296a0(0xc,0,0x2c4);
            *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + uVar6 * 4))) = uVar11;
          }
          puVar4 = *((uint * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + uVar6 * 4)));
          if (puVar4 != ((uint *)GEN_TOP(0x0))) {
            *puVar4 = 0;
            puVar4[1] = 0;
            *(undefined1 *)(puVar4 + 2) = 0xff;
            if (((*(char *)(gen_frame + 0x4c)) != -1) && (puVar4 != &(*(uint *)(gen_frame + 0x44)))) {
              (*(uint * PTR32 *)(gen_frame + 0x0)) = puVar4;
              (*(uint * PTR32 *)(gen_frame + 0x4)) = (*(uint * PTR32 *)(gen_frame + 0x48));
              if ((*(char *)(gen_frame + 0x4c)) == '\0') {
                F_004919b0(&(*(uint * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
              }
              else if ((*(char *)(gen_frame + 0x4c)) == '\x01') {
                F_00491a60(&(*(uint * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
              }
            }
          }
          (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
          if ((*(uint * PTR32 *)(gen_frame + 0x48)) != ((uint *)GEN_TOP(0x0))) {
            if (((*(char *)(gen_frame + 0x4c)) != '\0') && ((*(char *)(gen_frame + 0x4c)) == '\x01')) {
              pvVar3 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x48))));
              *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
              if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
                F_0042c880(pvVar3 GEN_EDX_ARG);
                F_00406ad0(pvVar3);
              }
            }
            (*(uint * PTR32 *)(gen_frame + 0x48)) = ((uint *)GEN_TOP(0x0));
            (*(char *)(gen_frame + 0x4c)) = -1;
          }
          ppuVar15 = &(*(undefined4 * PTR32 *)(gen_frame + 0x14));
          uVar14 = 0x571;
          pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
          F_0046aa70(pvVar3 GEN_EDX_ARG,uVar14,ppuVar15);
          F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
          uVar13 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x14)),8,0x2c4);
          puVar4 = ((uint *)GEN_TOP((uint)uVar13));
          iVar10 = (*(int *)(gen_frame + 0x30));
        }
        (*(uint * PTR32 *)(gen_frame + 0x34)) = (*(uint * PTR32 *)(gen_frame + 0x34)) + 1;
        iVar7 = (int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) - 1;
        (*(undefined * PTR32 *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(iVar7));
        (*(int *)(gen_frame + 0x30)) = iVar10 + 1;
      } while (iVar7 != 0);
      return (uint)puVar4;
    }
  } while( true );
}

/* ref: FUN_00a43cd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a43cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa43cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x68, 8, 4);
  byte bVar1;
  int * piVar2;
  undefined * pvVar3;
  uint * puVar4;
  int * piVar5;
  uint uVar6;
  int * piVar7;
  undefined4 * puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 * PTR32 * ppuVar14;
  
  ((int *)(gen_frame + 0x4c))[5] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64);
  (*(int * PTR32 *)(gen_frame + 0x4)) = this;
  ((int *)(gen_frame + 0x4c))[0] = 0;
  ((int *)(gen_frame + 0x4c))[1] = 0;
  ((int *)(gen_frame + 0x4c))[2] = 0;
  ((int *)(gen_frame + 0x4c))[3] = 0;
  ((int *)(gen_frame + 0x4c))[4] = 0;
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  uVar13 = 0x570;
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
  F_0046a630(pvVar3 GEN_EDX_ARG,uVar13);
  puVar4 = ((uint *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,param_1)));
  (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar4;
  piVar7 = ((int *)GEN_TOP(0x0));
  if (puVar4 != ((uint *)GEN_TOP(0x0))) {
    (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(puVar4[3]));
    (*(int *)(gen_frame + 0x2c)) = 0;
    if (0 < (int)puVar4[3]) {
      (*(int * PTR32 *)(gen_frame + 0x30)) = ((int *)GEN_TOP(0x0));
      do {
        uVar6 = *(*(uint * PTR32 *)(gen_frame + 0x10));
        if (uVar6 == 0) {
          return 0;
        }
        if ((*(int *)(gen_frame + 0x2c)) < 0) {
          return uVar6;
        }
        if ((int)(*(uint * PTR32 *)(gen_frame + 0x10))[3] <= (*(int *)(gen_frame + 0x2c))) {
          return uVar6;
        }
        piVar5 = ((int *)GEN_TOP((uVar6 + (int)(*(int * PTR32 *)(gen_frame + 0x30)))));
        piVar7 = piVar5;
        if (*((char *)GEN_TOP(((int)piVar5 + 6))) != '\0') {
          iVar10 = (int)(short)piVar5[2];
          piVar5 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)piVar5 + 10))))));
          if (((*piVar5 == 0) || (iVar10 < 0)) || (piVar5[3] <= iVar10)) {
            piVar7 = ((int *)GEN_TOP(0x0));
          }
          else {
            piVar7 = ((int *)GEN_TOP((iVar10 * 0x40 + *piVar5)));
          }
        }
        if (piVar7 == ((int *)GEN_TOP(0x0))) {
          return (uint)piVar5;
        }
        uVar6 = F_0046e5e0(piVar7 GEN_EDX_ARG);
        uVar6 = F_00ab24a0(uVar6);
        if (((*((char *)GEN_TOP(((int)piVar7 + 6))) != '\0') || (piVar7[2] != 0)) && (uVar6 != 0)) {
          iVar10 = 0;
          do {
            bVar1 = F_00a42cb0(piVar7,0);
            if ((bVar1 != 0) && (*((int *)GEN_TOP((uVar6 + 0x78))) == iVar10 + 0x15da)) {
              ((int *)(gen_frame + 0x4c))[(int)(iVar10)] = ((int *)(gen_frame + 0x4c))[(int)(iVar10)] + 1;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < 5);
        }
        (*(int * PTR32 *)(gen_frame + 0x30)) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x30)) + 0x40)));
        iVar10 = (*(int *)(gen_frame + 0x2c)) + 1;
        (*(int *)(gen_frame + 0x2c)) = iVar10;
      } while (iVar10 < (int)(*(int * PTR32 *)(gen_frame + 0xc)));
    }
    piVar7 = ((int *)(gen_frame + 0x4c));
    (*(int *)(gen_frame + 0x2c)) = 0x15da;
    (*(int * PTR32 *)(gen_frame + 0x30)) = piVar7;
    (*(uint * PTR32 *)(gen_frame + 0x10)) = ((uint *)GEN_TOP(0x5));
    do {
      iVar11 = (*(int *)(gen_frame + 0x2c));
      iVar10 = *(*(int * PTR32 *)(gen_frame + 0x30));
      if ((iVar10 != 0) && (piVar7 = ((int *)GEN_TOP(F_00ab24a0((*(int *)(gen_frame + 0x2c))))), piVar7 != ((int *)GEN_TOP(0x0)))) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = ((undefined4 *)GEN_TOP(0x0));
        puVar8 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar8;
        if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
          *puVar8 = 0;
          puVar8[1] = 0;
        }
        *puVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x14));
        (*(char *)(gen_frame + 0x3c)) = '\0';
        (*(int *)(gen_frame + 0x34)) = 0;
        (*(int *)(gen_frame + 0x18)) = 0;
        (*(uint *)(gen_frame + 0x1c)) = 0;
        (*(int *)(gen_frame + 0x20)) = 0;
        (*(int *)(gen_frame + 0x24)) = 0;
        (*(int *)(gen_frame + 0x34)) = iVar11;
        (*(int * PTR32 *)(gen_frame + 0x38)) = &(*(int *)(gen_frame + 0x34));
        F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
        uVar6 = (*(int *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0x20));
        if ((*(uint *)(gen_frame + 0x1c)) <= uVar6) {
          uVar6 = uVar6 - (*(uint *)(gen_frame + 0x1c));
        }
        if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + uVar6 * 4))) == 0) {
          uVar9 = F_004296a0(0xc,0,0x2c4);
          *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + uVar6 * 4))) = uVar9;
        }
        piVar7 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + uVar6 * 4)));
        if (piVar7 != ((int *)GEN_TOP(0x0))) {
          *piVar7 = 0;
          piVar7[1] = 0;
          *(undefined1 *)(piVar7 + 2) = 0xff;
          if (((*(char *)(gen_frame + 0x3c)) != -1) && (piVar7 != &(*(int *)(gen_frame + 0x34)))) {
            (*(int * PTR32 *)(gen_frame + 0x8)) = piVar7;
            (*(int * PTR32 *)(gen_frame + 0xc)) = (*(int * PTR32 *)(gen_frame + 0x38));
            if ((*(char *)(gen_frame + 0x3c)) == '\0') {
              F_004919b0(&(*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
            }
            else if ((*(char *)(gen_frame + 0x3c)) == '\x01') {
              F_00491a60(&(*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
            }
          }
        }
        (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
        if ((*(int * PTR32 *)(gen_frame + 0x38)) != ((int *)GEN_TOP(0x0))) {
          if (((*(char *)(gen_frame + 0x3c)) != '\0') && ((*(char *)(gen_frame + 0x3c)) == '\x01')) {
            pvVar3 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x38))));
            *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
            if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
              F_0042c880(pvVar3 GEN_EDX_ARG);
              F_00406ad0(pvVar3);
            }
          }
          (*(int * PTR32 *)(gen_frame + 0x38)) = ((int *)GEN_TOP(0x0));
          (*(char *)(gen_frame + 0x3c)) = -1;
        }
        (*(int *)(gen_frame + 0x40)) = 0;
        (*(int *)(gen_frame + 0x40)) = iVar10;
        (*(int * PTR32 *)(gen_frame + 0x44)) = &(*(int *)(gen_frame + 0x40));
        (*(char *)(gen_frame + 0x48)) = '\0';
        if ((*(uint *)(gen_frame + 0x1c)) <= (*(int *)(gen_frame + 0x24)) + 1U) {
          F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
        }
        uVar6 = (*(int *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0x20));
        if ((*(uint *)(gen_frame + 0x1c)) <= uVar6) {
          uVar6 = uVar6 - (*(uint *)(gen_frame + 0x1c));
        }
        if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + uVar6 * 4))) == 0) {
          uVar9 = F_004296a0(0xc,0,0x2c4);
          *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + uVar6 * 4))) = uVar9;
        }
        piVar7 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + uVar6 * 4)));
        if (piVar7 != ((int *)GEN_TOP(0x0))) {
          *piVar7 = 0;
          piVar7[1] = 0;
          *(undefined1 *)(piVar7 + 2) = 0xff;
          if (((*(char *)(gen_frame + 0x48)) != -1) && (piVar7 != &(*(int *)(gen_frame + 0x40)))) {
            (*(int * PTR32 *)(gen_frame + 0x0)) = piVar7;
            (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)(gen_frame + 0x44));
            if ((*(char *)(gen_frame + 0x48)) == '\0') {
              F_004919b0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            }
            else if ((*(char *)(gen_frame + 0x48)) == '\x01') {
              F_00491a60(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            }
          }
        }
        (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
        if ((*(int * PTR32 *)(gen_frame + 0x44)) != ((int *)GEN_TOP(0x0))) {
          if (((*(char *)(gen_frame + 0x48)) != '\0') && ((*(char *)(gen_frame + 0x48)) == '\x01')) {
            pvVar3 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x44))));
            *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
            if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
              F_0042c880(pvVar3 GEN_EDX_ARG);
              F_00406ad0(pvVar3);
            }
          }
          (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)GEN_TOP(0x0));
          (*(char *)(gen_frame + 0x48)) = -1;
        }
        ppuVar14 = &(*(undefined4 * PTR32 *)(gen_frame + 0x14));
        uVar13 = 0x571;
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
        F_0046aa70(pvVar3 GEN_EDX_ARG,uVar13,ppuVar14);
        F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
        uVar12 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x14)),8,0x2c4);
        piVar7 = ((int *)GEN_TOP((uint)uVar12));
        iVar11 = (*(int *)(gen_frame + 0x2c));
      }
      (*(int * PTR32 *)(gen_frame + 0x30)) = (*(int * PTR32 *)(gen_frame + 0x30)) + 1;
      iVar10 = (int)(*(uint * PTR32 *)(gen_frame + 0x10)) - 1;
      (*(uint * PTR32 *)(gen_frame + 0x10)) = ((uint *)GEN_TOP(iVar10));
      (*(int *)(gen_frame + 0x2c)) = iVar11 + 1;
    } while (iVar10 != 0);
  }
  return (uint)piVar7;
}

/* ref: FUN_00a44070 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a44070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa44070u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0x5798, 8, 4);
  int * piVar1;
  uint uVar2;
  byte bVar3;
  int * piVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint * puVar8;
  
  ((uint *)(gen_frame + 0x5768))[10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5794);
  (*(undefined * PTR32 *)(gen_frame + 0x5760)) = this;
  (*(int * PTR32 *)(gen_frame + 0x5764)) = (int *)(&REFG(undefined, 0x10e42c8) + param_3 * 0x10);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5748)) = param_1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x574c)) = param_2;
  ((uint *)(gen_frame + 0x5768))[5] = 0;
  ((uint *)(gen_frame + 0x5768))[6] = 0;
  ((uint *)(gen_frame + 0x5768))[7] = 0;
  ((uint *)(gen_frame + 0x5768))[8] = 0;
  ((uint *)(gen_frame + 0x5768))[9] = 0;
  ((uint *)(gen_frame + 0x5768))[0] = 0;
  ((uint *)(gen_frame + 0x5768))[1] = 0;
  ((uint *)(gen_frame + 0x5768))[2] = 0;
  ((uint *)(gen_frame + 0x5768))[3] = 0;
  ((uint *)(gen_frame + 0x5768))[4] = 0;
  *param_2 = 0;
  (*(int *)(gen_frame + 0x5758)) = 0;
  do {
    iVar7 = *(*(int * PTR32 *)(gen_frame + 0x5764));
    if (iVar7 != 9999) {
      (*(uint *)(gen_frame + 0x5738)) = iVar7;
      (*(undefined * PTR32 *)(gen_frame + 0x5734)) = ((undefined *)GEN_TOP(0xa440f6));
      piVar4 = ((int *)GEN_TOP(F_00a36f30((*(undefined * PTR32 *)(gen_frame + 0x5760)) GEN_EDX_FWD,iVar7)));
      (*(int * PTR32 *)(gen_frame + 0x5754)) = piVar4;
      if (piVar4 == ((int *)GEN_TOP(0x0))) {
        (*(undefined4 *)(gen_frame + 0x5744)) = 0xa44237;
        return 0;
      }
      iVar7 = 0;
      (*(int *)(gen_frame + 0x5750)) = piVar4[3];
      if (0 < piVar4[3]) {
        (*(int *)(gen_frame + 0x575c)) = 0;
        do {
          if (((*(*(int * PTR32 *)(gen_frame + 0x5754)) != 0) && (-1 < iVar7)) && (iVar7 < (*(int * PTR32 *)(gen_frame + 0x5754))[3])) {
            this_00 = ((undefined *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x5754)) + (*(int *)(gen_frame + 0x575c)))));
            if (*((char *)GEN_TOP(((int)this_00 + 6))) != '\0') {
              iVar6 = (int)*((short *)GEN_TOP(((int)this_00 + 8)));
              (*(uint *)(gen_frame + 0x5738)) = (uint)*((ushort *)GEN_TOP(((int)this_00 + 10)));
              (*(undefined * PTR32 *)(gen_frame + 0x5734)) = ((undefined *)GEN_TOP(0xa4414d));
              piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this_00 + 10))))));
              if (((*piVar4 == 0) || (iVar6 < 0)) || (piVar4[3] <= iVar6)) {
                this_00 = ((undefined *)GEN_TOP(0x0));
              }
              else {
                this_00 = ((undefined *)GEN_TOP((iVar6 * 0x40 + *piVar4)));
              }
            }
            if ((this_00 != ((undefined *)GEN_TOP(0x0))) &&
               ((*((char *)GEN_TOP(((int)this_00 + 6))) != '\0' || (*((int *)GEN_TOP(((int)this_00 + 8))) != 0)))) {
              (*(uint *)(gen_frame + 0x5738)) = 0;
              (*(undefined * PTR32 *)(gen_frame + 0x5734)) = this_00;
              (*(undefined4 *)(gen_frame + 0x5730)) = 0xa4417d;
              bVar3 = F_00a42cb0(this_00,0);
              if (bVar3 != 0) {
                (*(uint *)(gen_frame + 0x5738)) = 0xa44188;
                uVar5 = F_0046e5e0(this_00 GEN_EDX_ARG);
                (*(uint *)(gen_frame + 0x5738)) = uVar5;
                (*(undefined * PTR32 *)(gen_frame + 0x5734)) = ((undefined *)GEN_TOP(0xa4418e));
                uVar5 = F_00ab24a0(uVar5);
                if (uVar5 != 0) {
                  ((int *)(gen_frame + 0x0))[(int)(*((int *)GEN_TOP((uVar5 + 0x78))))] = ((int *)(gen_frame + 0x0))[(int)(*((int *)GEN_TOP((uVar5 + 0x78))))] + 1;
                }
              }
            }
          }
          (*(int *)(gen_frame + 0x575c)) = (*(int *)(gen_frame + 0x575c)) + 0x40;
          iVar7 = iVar7 + 1;
        } while (iVar7 < (*(int *)(gen_frame + 0x5750)));
      }
    }
    iVar7 = (*(int *)(gen_frame + 0x5758)) + 1;
    (*(int * PTR32 *)(gen_frame + 0x5764)) = (*(int * PTR32 *)(gen_frame + 0x5764)) + 1;
    (*(int *)(gen_frame + 0x5758)) = iVar7;
  } while (iVar7 < 4);
  iVar7 = 0;
  do {
    (*(uint *)(gen_frame + 0x5738)) = 1;
    (*(undefined * PTR32 *)(gen_frame + 0x5734)) = ((undefined *)GEN_TOP(0x1));
    (*(undefined4 *)(gen_frame + 0x5730)) = 0;
    (*(int *)(gen_frame + 0x572c)) = iVar7 + 0x15da;
    (*(undefined4 *)(gen_frame + 0x5728)) = 0xa441e4;
    uVar5 = F_00a41080((*(undefined * PTR32 *)(gen_frame + 0x5760)) GEN_EDX_ARG,iVar7 + 0x15da,0,1,1);
    ((uint *)(gen_frame + 0x5768))[(int)(iVar7 + 5)] = uVar5;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 5);
  (*(int * PTR32 *)(gen_frame + 0x5764)) = ((int *)GEN_TOP(0x0));
  puVar8 = ((uint *)(gen_frame + 0x5768));
  piVar4 = (*(int * PTR32 *)(gen_frame + 0x5764));
LAB_00a44203: ;
  do {
    uVar5 = *puVar8;
    if (uVar5 != 0) {
      uVar2 = ((uint *)(gen_frame + 0x5768))[(int)((int)piVar4 + 5)];
      piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x5748)) + (int)piVar4;
      if (uVar2 < uVar5) {
        *piVar1 = *piVar1 + uVar2;
        *puVar8 = uVar5 - uVar2;
        ((uint *)(gen_frame + 0x5768))[(int)((int)piVar4 + 5)] = 0;
        *(*(undefined1 * PTR32 *)(gen_frame + 0x574c)) = 1;
      }
      else {
        *piVar1 = *piVar1 + uVar5;
        ((uint *)(gen_frame + 0x5768))[(int)((int)piVar4 + 5)] = uVar2 - uVar5;
        *puVar8 = 0;
      }
      piVar4 = ((int *)GEN_TOP(((int)piVar4 + 1)));
      if ((int)piVar4 < 5) goto LAB_00a44203;
    }
    iVar7 = (int)(*(int * PTR32 *)(gen_frame + 0x5764)) + 1;
    puVar8 = puVar8 + 1;
    (*(int * PTR32 *)(gen_frame + 0x5764)) = ((int *)GEN_TOP(iVar7));
    piVar4 = (*(int * PTR32 *)(gen_frame + 0x5764));
    if (4 < iVar7) {
      iVar7 = 0;
      do {
        if (((uint *)(gen_frame + 0x5768))[(int)(iVar7)] != 0) {
          (*(undefined4 *)(gen_frame + 0x5744)) = 0xa44237;
          return 0;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 5);
      (*(undefined4 *)(gen_frame + 0x5744)) = 0xa4428b;
      return 1;
    }
  } while( true );
}

/* ref: FUN_00a442a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a442a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined1 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa442a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x5798, 8, 4);
  uint uVar1;
  byte bVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint * puVar8;
  
  ((uint *)(gen_frame + 0x5768))[10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5794);
  (*(undefined * PTR32 *)(gen_frame + 0x5764)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5750)) = param_2;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5754)) = param_3;
  if ((param_1 != 1000) && (param_1 != 11000)) {
    (*(undefined4 *)(gen_frame + 0x574c)) = 0xa442e6;
    return 0;
  }
  (*(uint *)(gen_frame + 0x5740)) = param_1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  ((uint *)(gen_frame + 0x5768))[5] = 0;
  ((uint *)(gen_frame + 0x5768))[6] = 0;
  ((uint *)(gen_frame + 0x5768))[7] = 0;
  ((uint *)(gen_frame + 0x5768))[8] = 0;
  ((uint *)(gen_frame + 0x5768))[9] = 0;
  ((uint *)(gen_frame + 0x5768))[0] = 0;
  ((uint *)(gen_frame + 0x5768))[1] = 0;
  ((uint *)(gen_frame + 0x5768))[2] = 0;
  ((uint *)(gen_frame + 0x5768))[3] = 0;
  ((uint *)(gen_frame + 0x5768))[4] = 0;
  *param_3 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x573c)) = ((undefined *)GEN_TOP(0xa44327));
  piVar3 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,param_1)));
  (*(int * PTR32 *)(gen_frame + 0x5758)) = piVar3;
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    iVar7 = 0;
    (*(int *)(gen_frame + 0x575c)) = piVar3[3];
    if (0 < piVar3[3]) {
      (*(int *)(gen_frame + 0x5760)) = 0;
      do {
        if (((*(*(int * PTR32 *)(gen_frame + 0x5758)) != 0) && (-1 < iVar7)) && (iVar7 < (*(int * PTR32 *)(gen_frame + 0x5758))[3])) {
          pvVar4 = ((undefined *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x5758)) + (*(int *)(gen_frame + 0x5760)))));
          if (*((char *)GEN_TOP(((int)pvVar4 + 6))) != '\0') {
            iVar6 = (int)*((short *)GEN_TOP(((int)pvVar4 + 8)));
            (*(uint *)(gen_frame + 0x5740)) = (uint)*((ushort *)GEN_TOP(((int)pvVar4 + 10)));
            (*(undefined * PTR32 *)(gen_frame + 0x573c)) = ((undefined *)GEN_TOP(0xa44385));
            piVar3 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar4 + 10))))));
            if (((*piVar3 == 0) || (iVar6 < 0)) || (piVar3[3] <= iVar6)) {
              pvVar4 = ((undefined *)GEN_TOP(0x0));
            }
            else {
              pvVar4 = ((undefined *)GEN_TOP((iVar6 * 0x40 + *piVar3)));
            }
          }
          if ((pvVar4 != ((undefined *)GEN_TOP(0x0))) &&
             ((*((char *)GEN_TOP(((int)pvVar4 + 6))) != '\0' || (*((int *)GEN_TOP(((int)pvVar4 + 8))) != 0)))) {
            (*(uint *)(gen_frame + 0x5740)) = 0;
            (*(undefined * PTR32 *)(gen_frame + 0x573c)) = pvVar4;
            (*(undefined4 *)(gen_frame + 0x5738)) = 0xa443b5;
            bVar2 = F_00a42cb0(pvVar4,0);
            if (bVar2 != 0) {
              (*(uint *)(gen_frame + 0x5740)) = 0xa443c0;
              uVar5 = F_0046e5e0(pvVar4 GEN_EDX_ARG);
              (*(uint *)(gen_frame + 0x5740)) = uVar5;
              (*(undefined * PTR32 *)(gen_frame + 0x573c)) = ((undefined *)GEN_TOP(0xa443c6));
              uVar5 = F_00ab24a0(uVar5);
              if (uVar5 != 0) {
                ((int *)(gen_frame + 0x0))[(int)(*((int *)GEN_TOP((uVar5 + 0x78))))] = ((int *)(gen_frame + 0x0))[(int)(*((int *)GEN_TOP((uVar5 + 0x78))))] + 1;
              }
            }
          }
        }
        (*(int *)(gen_frame + 0x5760)) = (*(int *)(gen_frame + 0x5760)) + 0x40;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (*(int *)(gen_frame + 0x575c)));
    }
    iVar7 = 0;
    do {
      (*(uint *)(gen_frame + 0x5740)) = 1;
      (*(undefined * PTR32 *)(gen_frame + 0x573c)) = ((undefined *)GEN_TOP(0x1));
      (*(undefined4 *)(gen_frame + 0x5738)) = 0;
      (*(int *)(gen_frame + 0x5734)) = iVar7 + 0x15da;
      (*(undefined4 *)(gen_frame + 0x5730)) = 0xa44404;
      uVar5 = F_00a41080((*(undefined * PTR32 *)(gen_frame + 0x5764)) GEN_EDX_ARG,iVar7 + 0x15da,0,1,1);
      ((uint *)(gen_frame + 0x5768))[(int)(iVar7 + 5)] = uVar5;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 5);
    (*(undefined * PTR32 *)(gen_frame + 0x5764)) = ((undefined *)GEN_TOP(0x0));
    puVar8 = ((uint *)(gen_frame + 0x5768));
    pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x5764));
LAB_00a44423: ;
    do {
      uVar5 = *puVar8;
      if (uVar5 != 0) {
        uVar1 = ((uint *)(gen_frame + 0x5768))[(int)((int)pvVar4 + 5)];
        piVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x5750)) + (int)pvVar4;
        if (uVar1 < uVar5) {
          *piVar3 = *piVar3 + uVar1;
          *puVar8 = uVar5 - uVar1;
          ((uint *)(gen_frame + 0x5768))[(int)((int)pvVar4 + 5)] = 0;
          *(*(undefined1 * PTR32 *)(gen_frame + 0x5754)) = 1;
        }
        else {
          *piVar3 = *piVar3 + uVar5;
          ((uint *)(gen_frame + 0x5768))[(int)((int)pvVar4 + 5)] = uVar1 - uVar5;
          *puVar8 = 0;
        }
        pvVar4 = ((undefined *)GEN_TOP(((int)pvVar4 + 1)));
        if ((int)pvVar4 < 5) goto LAB_00a44423;
      }
      iVar7 = (int)(*(undefined * PTR32 *)(gen_frame + 0x5764)) + 1;
      puVar8 = puVar8 + 1;
      (*(undefined * PTR32 *)(gen_frame + 0x5764)) = ((undefined *)GEN_TOP(iVar7));
      pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x5764));
    } while (iVar7 < 5);
    iVar7 = 0;
    while (((uint *)(gen_frame + 0x5768))[(int)(iVar7)] == 0) {
      iVar7 = iVar7 + 1;
      if (4 < iVar7) {
        (*(undefined4 *)(gen_frame + 0x574c)) = 0xa44490;
        return 1;
      }
    }
  }
  (*(undefined4 *)(gen_frame + 0x574c)) = 0xa444a5;
  return 0;
}

/* ref: FUN_00a444b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a444b0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa444b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00a3eb60(param_2,param_3);
  if (param_4 != '\0') {
    uVar1 = uVar1 | 1;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a42ea0(param_1 GEN_EDX_ARG,param_2,param_3,(char)uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a444f0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a444f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa444f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,param_1)));
  if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
    return 3;
  }
  pvVar1 = ((undefined *)GEN_TOP(F_00a37da0(pvVar1 GEN_EDX_ARG,(int)(short)(ushort)param_2)));
  if ((*((char *)GEN_TOP(((int)pvVar1 + 6))) == '\0') && (*((int *)GEN_TOP(((int)pvVar1 + 8))) == 0)) {
    return 4;
  }
  uVar2 = F_00a37c50(pvVar1 GEN_EDX_ARG);
  if (uVar2 != 0) {
    return 0x13;
  }
  F_0071d1a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00a3bd60(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,pvVar1);
  uVar2 = F_00a3a8a0(pvVar1 GEN_EDX_ARG);
  if (uVar2 != 0) {
    uVar2 = F_00a3a8a0(pvVar1 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)pvVar1 + 0xc))) = uVar2 - 1;
    if (((uVar2 - 1 == 0) &&
        (*((undefined4 *)GEN_TOP(((int)pvVar1 + 0xc))) = 0, *((char *)GEN_TOP(((int)pvVar1 + 6))) == '\0')) &&
       (*((int *)GEN_TOP(((int)pvVar1 + 8))) != 1)) {
      *((undefined4 *)GEN_TOP(((int)pvVar1 + 8))) = 0;
    }
  }
  uVar2 = F_00a3eb60(pvVar1,((undefined1 *)(gen_frame + 0x0)));
  if (uVar2 != 0) {
    F_00a42ea0(this GEN_EDX_ARG,pvVar1,((undefined1 *)(gen_frame + 0x0)),(char)uVar2);
  }
  F_00a39450(this GEN_EDX_ARG,param_1,(uint)(ushort)param_2);
  piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG);
  *((byte *)GEN_TOP((uVar2 + 0x230bf))) = *((byte *)GEN_TOP((uVar2 + 0x230bf))) | 1;
  F_006d0fd0();
  F_00701020();
  return 0;
}

/* ref: FUN_00a44630 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a44630(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa44630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL_GS(0x208, 8, 4);
  short sVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined * pvVar7;
  int * piVar8;
  int * piVar9;
  undefined * pvVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x200)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x204));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 92)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 72)) = param_2;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 68)) = param_3;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 88)) = REFG(void * PTR32, 0x1379694);
  uVar4 = F_0046e5e0(param_2 GEN_EDX_FWD);
  uVar4 = F_00ab24a0(uVar4);
  ((byte *)(gen_frame + 0x0))[0x3c] = (char)uVar4;
  ((byte *)(gen_frame + 0x0))[0x3d] = (char)(uVar4 >> 8);
  ((byte *)(gen_frame + 0x0))[0x3e] = (char)(uVar4 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0x3f] = (char)(uVar4 >> 0x18);
  if ((uVar4 == 0) || (uVar5 = F_00906df0(param_2 GEN_EDX_ARG), uVar5 == 0)) {
    return 6;
  }
  ((byte *)(gen_frame + 0x0))[0x53] = *((byte *)GEN_TOP((uVar4 + 0xa6)));
  ((byte *)(gen_frame + 0x0))[0] = 0;
  ((byte *)(gen_frame + 0x0))[1] = 0;
  ((byte *)(gen_frame + 0x0))[2] = 0;
  ((byte *)(gen_frame + 0x0))[3] = 0;
  F_00c48350(((byte *)(gen_frame + 0x0)) + 4,0,0x34);
  uVar5 = (uint)*(ushort *)(param_3 + 1);
  (*(ushort *)(gen_frame + 0x1e4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1e6)) = 0;
  (*(undefined4 *)(gen_frame + 0x1ea)) = 0;
  (*(undefined4 *)(gen_frame + 0x1ee)) = 0;
  (*(undefined4 *)(gen_frame + 0x1f2)) = 0;
  (*(undefined4 *)(gen_frame + 0x1f6)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fa)) = 0;
  (*(undefined2 *)(gen_frame + 0x1fe)) = 0;
  ((byte *)(gen_frame + 0x0))[99] = 0;
  ((byte *)(gen_frame + 0x0))[0x38] = (char)uVar5;
  ((byte *)(gen_frame + 0x0))[0x39] = (char)(uVar5 >> 8);
  ((byte *)(gen_frame + 0x0))[0x3a] = (char)(uVar5 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0x3b] = (char)(uVar5 >> 0x18);
  if (*param_2 - 10000U < 7) {
    ((byte *)(gen_frame + 0x0))[0x60] = 1;
  }
  else {
    ((byte *)(gen_frame + 0x0))[0x60] = *param_2 - 12000U < 3;
  }
  ((byte *)(gen_frame + 0x0))[0x61] = 0;
  ((byte *)(gen_frame + 0x0))[0x62] = 0;
  uVar5 = F_00a36f30(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 92)))) GEN_EDX_ARG,*param_3);
  ((byte *)(gen_frame + 0x0))[0x40] = (char)uVar5;
  ((byte *)(gen_frame + 0x0))[0x41] = (char)(uVar5 >> 8);
  ((byte *)(gen_frame + 0x0))[0x42] = (char)(uVar5 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0x43] = (char)(uVar5 >> 0x18);
  if (uVar5 == 0) {
    return 3;
  }
  bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x3e);
  if (bVar3 == 0) {
    uVar13 = 0;
    uVar12 = 0;
    if (*param_3 != *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 92)) + 0x28)))) {
      fVar15 = REFG(float, 0x10916ec);
      uVar4 = F_0046e5e0(param_2 GEN_EDX_ARG);
      F_00a7d290(0x2b9,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 88)),uVar4,uVar12,uVar13,fVar15);
      return 0xb;
    }
    fVar15 = REFG(float, 0x10916ec);
    uVar4 = F_0046e5e0(param_2 GEN_EDX_ARG);
    F_00a7d290(0x2c4,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 88)),uVar4,uVar12,uVar13,fVar15);
    return 0xb;
  }
  ((byte *)(gen_frame + 0x0))[0x54] = 0;
  ((byte *)(gen_frame + 0x0))[0x55] = 0;
  ((byte *)(gen_frame + 0x0))[0x56] = 0;
  ((byte *)(gen_frame + 0x0))[0x57] = 0;
  uVar5 = F_00a37da0(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64)))) GEN_EDX_ARG,0xd);
  ((byte *)(gen_frame + 0x0))[0x4c] = (char)uVar5;
  ((byte *)(gen_frame + 0x0))[0x4d] = (char)(uVar5 >> 8);
  ((byte *)(gen_frame + 0x0))[0x4e] = (char)(uVar5 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0x4f] = (char)(uVar5 >> 0x18);
  if ((uVar5 != 0) && (uVar5 = F_0071d3a0(uVar5 GEN_EDX_ARG), (char)uVar5 == '\0')) {
    ((byte *)(gen_frame + 0x0))[0x61] = 1;
  }
  if ((short)param_3[1] == 0) {
    uVar5 = (uint)*((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 88)) + 0x1688)));
    if (uVar5 != *((byte *)GEN_TOP((uVar4 + 0xa8)))) {
      uVar6 = F_00ab21a0(uVar5);
      if (*((char *)GEN_TOP((uVar6 + 0x3e))) != *((char *)GEN_TOP((uVar4 + 0xa8)))) {
        ((byte *)(gen_frame + 0x0))[99] = 1;
      }
      if ((((byte *)(gen_frame + 0x0))[0x61] != 0) && (bVar3 = F_00a36890(uVar4), bVar3 != 0)) {
        ((byte *)(gen_frame + 0x0))[99] = 1;
      }
      bVar3 = F_00a368f0(uVar4,uVar5);
      if (bVar3 == 0) {
        ((byte *)(gen_frame + 0x0))[99] = 1;
      }
    }
    if ((((byte *)(gen_frame + 0x0))[0x61] == 0) || (((byte *)(gen_frame + 0x0))[99] != 0)) {
      uVar5 = F_00ab21a0((uint)*((byte *)GEN_TOP((uVar4 + 0xa8))));
      if (*((char *)GEN_TOP((uVar5 + 0x45))) != '\0') {
        ((byte *)(gen_frame + 0x0))[0x62] = 1;
        uVar4 = F_00a3dac0(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 92)))) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP((uVar4 + 0xa8))));
        ((byte *)(gen_frame + 0x0))[0x54] = (char)uVar4;
        ((byte *)(gen_frame + 0x0))[0x55] = (char)(uVar4 >> 8);
        ((byte *)(gen_frame + 0x0))[0x56] = (char)(uVar4 >> 0x10);
        ((byte *)(gen_frame + 0x0))[0x57] = (char)(uVar4 >> 0x18);
        if ((uVar4 == 0) || (uVar4 = F_0071d3a0(uVar4 GEN_EDX_ARG), (char)uVar4 != '\0')) {
          piVar8 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
          uVar12 = 0x2b6;
          pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x28))))(piVar8 GEN_EDX_ARG)));
          F_0046a630(pvVar7 GEN_EDX_ARG,uVar12);
          return 4;
        }
      }
    }
    else {
      ((byte *)(gen_frame + 0x0))[0x62] = 1;
      ((byte *)(gen_frame + 0x0))[0x54] = ((byte *)(gen_frame + 0x0))[0x4c];
      ((byte *)(gen_frame + 0x0))[0x55] = ((byte *)(gen_frame + 0x0))[0x4d];
      ((byte *)(gen_frame + 0x0))[0x56] = ((byte *)(gen_frame + 0x0))[0x4e];
      ((byte *)(gen_frame + 0x0))[0x57] = ((byte *)(gen_frame + 0x0))[0x4f];
    }
  }
  if ((short)param_3[1] == 0xd) {
    ((byte *)(gen_frame + 0x0))[99] = 1;
    ((byte *)(gen_frame + 0x0))[0x62] = 1;
    ((byte *)(gen_frame + 0x0))[0x54] = ((byte *)(gen_frame + 0x0))[0x48];
    ((byte *)(gen_frame + 0x0))[0x55] = ((byte *)(gen_frame + 0x0))[0x49];
    ((byte *)(gen_frame + 0x0))[0x56] = ((byte *)(gen_frame + 0x0))[0x4a];
    ((byte *)(gen_frame + 0x0))[0x57] = ((byte *)(gen_frame + 0x0))[0x4b];
  }
  iVar11 = 0;
  piVar8 = param_3;
  do {
    pvVar7 = ((undefined *)GEN_TOP(F_00a37da0(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64)))) GEN_EDX_ARG,iVar11)));
    if (pvVar7 == ((undefined *)GEN_TOP(0x0))) {
      return 4;
    }
    if ((*((char *)GEN_TOP(((int)pvVar7 + 6))) != '\0') || (*((int *)GEN_TOP(((int)pvVar7 + 8))) != 0)) {
      uVar4 = F_00ab25a0((uint)((byte *)(gen_frame + 0x0))[0x53]);
      if ((*((char *)GEN_TOP((uVar4 + 4 + iVar11))) == -1) ||
         (((iVar11 == (short)(*(undefined2 *)((char *)((byte *)(gen_frame + 0x0)) + 56)) &&
           (bVar3 = F_00a36750(*((undefined4 *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 72))))), bVar3 == 0)) &&
          (((byte *)(gen_frame + 0x0))[0x60] == 0)))) {
        *(undefined * PTR32 *)(((byte *)(gen_frame + 0x0)) + iVar11 * 4) = pvVar7;
        uVar4 = F_00a36960((char)iVar11);
        (&(*(ushort *)(gen_frame + 0x1e4)))[iVar11] = (ushort)uVar4;
      }
      else if (iVar11 == 0xd) {
        if (((byte *)(gen_frame + 0x0))[99] == 0) {
LAB_00a44a93: ;
          uVar4 = F_00a36f00(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 92)))) GEN_EDX_ARG,iVar11);
          if (uVar4 == 0) {
            return 6;
          }
          uVar5 = F_00906df0(pvVar7 GEN_EDX_ARG);
          if (uVar5 == 0) {
            return 6;
          }
          sVar1 = *((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 68)) + 4)));
          uVar4 = F_00ab25a0((uint)*((byte *)GEN_TOP((uVar4 + 0xa6))));
          piVar8 = ((int *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 68))));
          if (*((char *)GEN_TOP((uVar4 + 4 + (int)sVar1))) == -1) {
LAB_00a44ade: ;
            *(undefined * PTR32 *)(((byte *)(gen_frame + 0x0)) + iVar11 * 4) = pvVar7;
            uVar4 = F_00a36960((char)iVar11);
            (&(*(ushort *)(gen_frame + 0x1e4)))[iVar11] = (ushort)uVar4;
            piVar8 = ((int *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 68))));
          }
        }
        else {
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52)) = pvVar7;
          uVar4 = F_00a36960(0xd);
          (*(undefined2 *)(gen_frame + 0x1fe)) = (short)uVar4;
        }
      }
      else if (((byte *)(gen_frame + 0x0))[99] == 0) {
        if (iVar11 != 0) goto LAB_00a44a93;
      }
      else if (iVar11 != 0) {
        uVar4 = F_00a36f00(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 92)))) GEN_EDX_ARG,iVar11);
        if (uVar4 == 0) {
          return 6;
        }
        uVar5 = F_00906df0(pvVar7 GEN_EDX_ARG);
        if (uVar5 == 0) {
          return 6;
        }
        uVar5 = F_00ab21d0((uint)*((byte *)GEN_TOP((uVar4 + 0xac))));
        if ((*((char *)GEN_TOP((*((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 60)) + 0xa8))) + 4 + uVar5))) == '\0') ||
           (uVar5 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 60)) + 0xa8))),0),
           piVar8 = ((int *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 68)))), (ushort)uVar5 < (ushort)*((byte *)GEN_TOP((uVar4 + 0x9f)))))
        goto LAB_00a44ade;
      }
      uVar4 = 1;
      if (((iVar11 == 0xc) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48)) != 0)) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)) != 0)) {
        uVar4 = 2;
      }
      if ((*(int *)(((byte *)(gen_frame + 0x0)) + iVar11 * 4) != 0) &&
         (uVar5 = F_00a37350(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 92)))) GEN_EDX_ARG,(uint)(&(*(ushort *)(gen_frame + 0x1e4)))[iVar11]), uVar5 < uVar4)) {
        piVar8 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        if (((byte *)(gen_frame + 0x0))[99] == 0) {
          uVar12 = 0x2c5;
          pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x28))))(piVar8 GEN_EDX_ARG)));
          F_0046a630(pvVar7 GEN_EDX_ARG,uVar12);
          return 0x18;
        }
        uVar12 = 0x2d2;
        pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x28))))(piVar8 GEN_EDX_ARG)));
        F_0046a630(pvVar7 GEN_EDX_ARG,uVar12);
        return 0x18;
      }
    }
    iVar11 = iVar11 + 1;
    if (0xd < iVar11) {
      iVar2 = piVar8[1];
      iVar11 = *piVar8;
      uVar4 = F_0046e5e0(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 72)))) GEN_EDX_ARG);
      uVar4 = F_00a3ef50(iVar11 - 1000,(int)(short)iVar2,uVar4);
      if (uVar4 == 0) {
        piVar9 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x34))))(piVar9 GEN_EDX_ARG)));
        F_0044c070(pvVar7 GEN_EDX_ARG);
        F_0071d1a0(((undefined1 *)(gen_frame + 0x164)) GEN_EDX_ARG);
        F_0071d1a0(((undefined1 *)(gen_frame + 0x1a4)) GEN_EDX_ARG);
        F_0071d1a0(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
        F_0071d1a0(((undefined1 *)(gen_frame + 0xa4)) GEN_EDX_ARG);
        piVar9 = ((int *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 72))));
        F_00a3bd60(((undefined1 *)(gen_frame + 0x164)) GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 72)));
        F_00a3bd60(((undefined1 *)(gen_frame + 0x1a4)) GEN_EDX_ARG,piVar8);
        if ((((byte *)(gen_frame + 0x0))[99] != 0) && (((byte *)(gen_frame + 0x0))[0x62] != 0)) {
          F_00a3bd60(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 76)));
          F_00a3bd60(((undefined1 *)(gen_frame + 0xa4)) GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 84)));
        }
        ((byte *)(gen_frame + 0x0))[0x40] = 0;
        ((byte *)(gen_frame + 0x0))[0x41] = 0;
        ((byte *)(gen_frame + 0x0))[0x42] = 0;
        ((byte *)(gen_frame + 0x0))[0x43] = 0;
        do {
          uVar12 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 92));
          pvVar7 = *((undefined * PTR32 *)GEN_TOP((((byte *)(gen_frame + 0x0)) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64)) * 4)));
          iVar11 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64));
          if ((pvVar7 != ((undefined *)GEN_TOP(0x0))) &&
             ((*((char *)GEN_TOP(((int)pvVar7 + 6))) != '\0' || (*((int *)GEN_TOP(((int)pvVar7 + 8))) != 0)))) {
            uVar13 = 0;
            pvVar10 = ((undefined *)GEN_TOP(F_00a36f30(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 92)))) GEN_EDX_ARG,(uint)(&(*(ushort *)(gen_frame + 0x1e4)))[(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64))])))
            ;
            pvVar10 = ((undefined *)GEN_TOP(F_00a36440(pvVar10 GEN_EDX_ARG,uVar13)));
            F_0071d1a0(((undefined1 *)(gen_frame + 0xe4)) GEN_EDX_ARG);
            F_0071d1a0(((undefined1 *)(gen_frame + 0x124)) GEN_EDX_ARG);
            F_00a3bd60(((undefined1 *)(gen_frame + 0xe4)) GEN_EDX_ARG,pvVar7);
            F_00a3bd60(((undefined1 *)(gen_frame + 0x124)) GEN_EDX_ARG,pvVar10);
            F_00a3bd60(pvVar10 GEN_EDX_ARG,pvVar7);
            F_00a35f30(pvVar7 GEN_EDX_ARG);
            uVar4 = F_00a3eb60(pvVar7,((undefined1 *)(gen_frame + 0xe4)));
            if (uVar4 != 0) {
              F_00a42ea0(uVar12 GEN_EDX_ARG,pvVar7,((undefined1 *)(gen_frame + 0xe4)),(char)uVar4);
            }
            uVar4 = F_00a3eb60(pvVar10,((undefined1 *)(gen_frame + 0x124)));
            if (uVar4 != 0) {
              F_00a42ea0(uVar12 GEN_EDX_ARG,pvVar10,((undefined1 *)(gen_frame + 0x124)),(char)uVar4);
            }
            uVar14 = 0;
            uVar13 = 0;
            fVar15 = REFG(float, 0x10916ec);
            uVar4 = F_0046e5e0(((undefined1 *)(gen_frame + 0xe4)) GEN_EDX_ARG);
            F_00a7d290((uint)(*((int *)GEN_TOP((uVar12 + 0x28))) == *((int *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 68))))) * 2 + 699,
                         (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 88)),uVar4,uVar13,uVar14,fVar15);
            iVar11 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64));
            piVar9 = ((int *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 72))));
            piVar8 = ((int *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 68))));
          }
          uVar12 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 84));
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64)) = iVar11 + 1;
        } while (iVar11 + 1 < 0xe);
        pvVar7 = ((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 92))));
        if (((((byte *)(gen_frame + 0x0))[99] != 0) && (((byte *)(gen_frame + 0x0))[0x62] != 0)) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 76)) != (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 84)))) {
          F_00a3bd60(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 76)))) GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 84)));
          F_00a35f30(((undefined *)GEN_TOP(uVar12)) GEN_EDX_ARG);
          pvVar7 = ((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 92))));
          uVar4 = F_00a3eb60((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 76)),((undefined1 *)(gen_frame + 0x64)));
          if (uVar4 != 0) {
            F_00a42ea0(pvVar7 GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 76)),((undefined1 *)(gen_frame + 0x64)),(char)uVar4);
          }
          uVar4 = F_00a3eb60((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 84)),((undefined1 *)(gen_frame + 0xa4)));
          if (uVar4 != 0) {
            F_00a42ea0(pvVar7 GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 84)),((undefined1 *)(gen_frame + 0xa4)),(char)uVar4);
          }
        }
        if ((short)piVar8[1] != 0xd) {
          iVar11 = *piVar9;
          if (((iVar11 == 0xdac) || (iVar11 - 0xc80U < 10)) ||
             ((iVar11 == 0xce4 || ((iVar11 == 0xd48 || (((byte *)(gen_frame + 0x0))[0x60] != 0)))))) {
            F_0071d1a0(((undefined1 *)(gen_frame + 0x124)) GEN_EDX_ARG);
            F_00a3bd60(((undefined1 *)(gen_frame + 0x124)) GEN_EDX_ARG,piVar8);
            F_00a3bd60(piVar8 GEN_EDX_ARG,piVar9);
            F_00a3bd60(piVar9 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x124)));
            uVar4 = F_00a3eb60(piVar9,((undefined1 *)(gen_frame + 0x164)));
            if ((uVar4 | 1) != 0) {
              F_00a42ea0(pvVar7 GEN_EDX_ARG,piVar9,((undefined1 *)(gen_frame + 0x164)),(char)(uVar4 | 1));
            }
            uVar4 = F_00a3eb60(piVar8,((undefined1 *)(gen_frame + 0x1a4)));
            uVar4 = uVar4 | 1;
          }
          else {
            F_00a3bd60(piVar8 GEN_EDX_ARG,piVar9);
            F_00a35f30(piVar9 GEN_EDX_ARG);
            uVar4 = F_00a3eb60(piVar9,((undefined1 *)(gen_frame + 0x164)));
            if (uVar4 != 0) {
              F_00a42ea0(pvVar7 GEN_EDX_ARG,piVar9,((undefined1 *)(gen_frame + 0x164)),(char)uVar4);
            }
            uVar4 = F_00a3eb60(piVar8,((undefined1 *)(gen_frame + 0x1a4)));
          }
          if (uVar4 != 0) {
            F_00a42ea0(pvVar7 GEN_EDX_ARG,piVar8,((undefined1 *)(gen_frame + 0x1a4)),(char)uVar4);
          }
        }
        if (param_4 != '\0') {
          uVar4 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x1a4)) GEN_EDX_ARG);
          uVar5 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x164)) GEN_EDX_ARG);
          F_00a39130(pvVar7 GEN_EDX_ARG,*piVar9,(uint)*(ushort *)(piVar9 + 1),*piVar8,
                       (uint)*(ushort *)(piVar8 + 1),uVar5,uVar4);
        }
        if (((byte *)(gen_frame + 0x0))[99] != 0) {
          F_00aa01d0(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG,0xfa,0);
          piVar9 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
          uVar12 = 0x21;
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x48))))(piVar9 GEN_EDX_ARG);
          piVar9 = ((int *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar12)));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xc))))(piVar9 GEN_EDX_ARG);
        }
        uVar13 = 0;
        uVar12 = 0;
        fVar15 = REFG(float, 0x10916ec);
        uVar4 = F_0046e5e0(piVar8 GEN_EDX_ARG);
        F_00a7d290((uint)(*((int *)GEN_TOP(((int)pvVar7 + 0x28))) == *piVar8) * 2 + 0x2ba,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 88)),
                     uVar4,uVar12,uVar13,fVar15);
        *((undefined4 *)GEN_TOP(((int)pvVar7 + 0x2ff8))) = 0;
        return 0;
      }
      if (uVar4 == 0x2ad) {
        uVar4 = F_00a36f00(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 92)))) GEN_EDX_ARG,0);
        uVar12 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 60));
        uVar5 = F_00ab21a0((uint)*((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 60)) + 0xa8))));
        if ((uVar4 != 0) && (uVar5 != 0)) {
          F_00a76e30(0x2ad,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 88)),(uint)*((byte *)GEN_TOP((uVar4 + 0xa8))),
                       (uint)*((byte *)GEN_TOP((uVar12 + 0xa8))),(uint)*((byte *)GEN_TOP((uVar5 + 0x3e))),REFG(float, 0x10916ec));
          return 0xb;
        }
      }
      else if (uVar4 == 0x2ae) {
        uVar4 = F_00a36f00(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 92)))) GEN_EDX_ARG,0xd);
        uVar12 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 60));
        uVar5 = F_00ab21a0((uint)*((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 60)) + 0xa8))));
        if ((uVar4 != 0) && (uVar5 != 0)) {
          F_00a76e30(0x2ae,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 88)),(uint)*((byte *)GEN_TOP((uVar4 + 0xa8))),
                       (uint)*((byte *)GEN_TOP((uVar12 + 0xa8))),(uint)*((byte *)GEN_TOP((uVar5 + 0x3e))),REFG(float, 0x10916ec));
          return 0xb;
        }
      }
      else {
        uVar13 = 0;
        uVar12 = 0;
        fVar15 = REFG(float, 0x10916ec);
        uVar5 = F_0046e5e0(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 72)))) GEN_EDX_ARG);
        F_00a7d290(uVar4,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 88)),uVar5,uVar12,uVar13,fVar15);
      }
      return 0xb;
    }
  } while( true );
}

/* ref: FUN_00a45170 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a45170(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa45170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL_GS(0x180, 0, 4);
  byte * pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  int * piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x178)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x17c));
  (*(undefined * PTR32 *)(gen_frame + 0x58)) = param_1;
  (*(undefined4 *)(gen_frame + 0x44)) = REFG(undefined4, 0x1379694);
  (*(int * PTR32 *)(gen_frame + 0x38)) = param_3;
  uVar3 = F_0046e5e0(param_2 GEN_EDX_FWD);
  uVar3 = F_00ab24a0(uVar3);
  (*(uint *)(gen_frame + 0x48)) = uVar3;
  if ((uVar3 == 0) || (uVar4 = F_00906df0(param_2 GEN_EDX_ARG), uVar4 == 0)) {
    return 6;
  }
  (*(byte *)(gen_frame + 0x43)) = *((byte *)GEN_TOP((uVar3 + 0xa6)));
  ((uint *)(gen_frame + 0x0))[0] = 0;
  F_00c48350(((uint *)(gen_frame + 0x0)) + 1,0,0x34);
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x38));
  iVar7 = *(*(int * PTR32 *)(gen_frame + 0x38));
  ((ushort *)(gen_frame + 0x15c))[0] = 0;
  ((ushort *)(gen_frame + 0x15c))[1] = 0;
  ((ushort *)(gen_frame + 0x15c))[2] = 0;
  ((ushort *)(gen_frame + 0x15c))[3] = 0;
  ((ushort *)(gen_frame + 0x15c))[4] = 0;
  ((ushort *)(gen_frame + 0x15c))[5] = 0;
  ((ushort *)(gen_frame + 0x15c))[6] = 0;
  ((ushort *)(gen_frame + 0x15c))[7] = 0;
  ((ushort *)(gen_frame + 0x15c))[8] = 0;
  ((ushort *)(gen_frame + 0x15c))[9] = 0;
  ((ushort *)(gen_frame + 0x15c))[10] = 0;
  ((ushort *)(gen_frame + 0x15c))[0xb] = 0;
  ((ushort *)(gen_frame + 0x15c))[0xc] = 0;
  ((ushort *)(gen_frame + 0x15c))[0xd] = 0;
  (*(char *)(gen_frame + 0x53)) = '\0';
  pvVar5 = ((undefined *)GEN_TOP(F_00a36f30((*(undefined * PTR32 *)(gen_frame + 0x58)) GEN_EDX_ARG,iVar7)));
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = pvVar5;
  bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x3e);
  if (bVar2 == 0) {
    uVar9 = 0;
    uVar8 = 0;
    if (*piVar6 == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x28)))) {
      fVar10 = REFG(float, 0x10916ec);
      uVar3 = F_0046e5e0(param_2 GEN_EDX_ARG);
      F_00a7d290(0x2c4,(*(undefined4 *)(gen_frame + 0x44)),uVar3,uVar8,uVar9,fVar10);
      return 10;
    }
    fVar10 = REFG(float, 0x10916ec);
    uVar3 = F_0046e5e0(param_2 GEN_EDX_ARG);
    F_00a7d290(0x2b9,(*(undefined4 *)(gen_frame + 0x44)),uVar3,uVar8,uVar9,fVar10);
    return 10;
  }
  if ((short)piVar6[1] == 0xd) {
    (*(char *)(gen_frame + 0x53)) = '\x01';
  }
  iVar7 = 0;
  do {
    pvVar5 = ((undefined *)GEN_TOP(F_00a37da0((*(undefined * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,iVar7)));
    (*(undefined * PTR32 *)(gen_frame + 0x4c)) = pvVar5;
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
      return 4;
    }
    if ((*((char *)GEN_TOP(((int)pvVar5 + 6))) != '\0') || (*((int *)GEN_TOP(((int)pvVar5 + 8))) != 0)) {
      uVar3 = F_00ab25a0((uint)(*(byte *)(gen_frame + 0x43)));
      if (*((char *)GEN_TOP((uVar3 + 4 + iVar7))) == -1) {
LAB_00a45417: ;
        ((uint *)(gen_frame + 0x0))[(int)(iVar7)] = (uint)(*(undefined * PTR32 *)(gen_frame + 0x4c));
LAB_00a45424: ;
        uVar3 = F_00a36960((char)iVar7);
        ((ushort *)(gen_frame + 0x15c))[(int)(iVar7)] = (ushort)uVar3;
      }
      else if ((*(char *)(gen_frame + 0x53)) == '\0') {
        if (iVar7 != 0) {
          uVar3 = F_00a36f00((*(undefined * PTR32 *)(gen_frame + 0x58)) GEN_EDX_ARG,iVar7);
          (*(uint *)(gen_frame + 0x54)) = uVar3;
          if (uVar3 == 0) {
            return 6;
          }
          uVar3 = F_00906df0((*(undefined * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG);
          if (uVar3 == 0) {
            return 6;
          }
          pbVar1 = ((byte *)GEN_TOP(((*(uint *)(gen_frame + 0x54)) + 0xa6)));
          (*(uint *)(gen_frame + 0x54)) = (uint)*(ushort *)((*(int * PTR32 *)(gen_frame + 0x38)) + 1);
          uVar3 = F_00ab25a0((uint)*pbVar1);
          if (*((char *)GEN_TOP((uVar3 + 4 + (int)(short)(*(uint *)(gen_frame + 0x54))))) == -1) goto LAB_00a45417;
        }
      }
      else if (iVar7 != 0) {
        uVar3 = F_00a36f00((*(undefined * PTR32 *)(gen_frame + 0x58)) GEN_EDX_ARG,iVar7);
        (*(uint *)(gen_frame + 0x54)) = uVar3;
        if (uVar3 == 0) {
          return 6;
        }
        uVar3 = F_00906df0((*(undefined * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG);
        if (uVar3 == 0) {
          return 6;
        }
        uVar3 = F_00ab21d0((uint)*((byte *)GEN_TOP(((*(uint *)(gen_frame + 0x54)) + 0xac))));
        if ((*((char *)GEN_TOP((*((byte *)GEN_TOP(((*(uint *)(gen_frame + 0x48)) + 0xa8))) + 4 + uVar3))) == '\0') ||
           (uVar3 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((*(uint *)(gen_frame + 0x48)) + 0xa8))),0),
           (ushort)uVar3 < (ushort)*((byte *)GEN_TOP(((*(uint *)(gen_frame + 0x54)) + 0x9f))))) {
          ((uint *)(gen_frame + 0x0))[(int)(iVar7)] = (uint)(*(undefined * PTR32 *)(gen_frame + 0x4c));
          goto LAB_00a45424;
        }
      }
      (*(uint *)(gen_frame + 0x54)) = 1;
      if (((iVar7 == 0xc) && (((uint *)(gen_frame + 0x0))[0xc] != 0)) && (((uint *)(gen_frame + 0x0))[0xb] != 0)) {
        (*(uint *)(gen_frame + 0x54)) = 2;
      }
      if ((((uint *)(gen_frame + 0x0))[(int)(iVar7)] != 0) &&
         (uVar3 = F_00a37350((*(undefined * PTR32 *)(gen_frame + 0x58)) GEN_EDX_ARG,(uint)((ushort *)(gen_frame + 0x15c))[(int)(iVar7)]), uVar3 < (*(uint *)(gen_frame + 0x54)))) {
        piVar6 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        uVar8 = 0x2c5;
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x28))))(piVar6 GEN_EDX_ARG)));
        F_0046a630(pvVar5 GEN_EDX_ARG,uVar8);
        return 0x18;
      }
    }
    iVar7 = iVar7 + 1;
    if (0xd < iVar7) {
      iVar7 = (*(int * PTR32 *)(gen_frame + 0x38))[1];
      (*(undefined * PTR32 *)(gen_frame + 0x3c)) = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x38))));
      uVar3 = F_0046e5e0(param_2 GEN_EDX_ARG);
      uVar4 = F_00a3ef50((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) - 1000,(int)(short)iVar7,uVar3);
      uVar3 = (*(uint *)(gen_frame + 0x48));
      if (uVar4 == 0) {
        piVar6 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x34))))(piVar6 GEN_EDX_ARG)));
        F_0044c070(pvVar5 GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x54)) = 0;
        do {
          uVar3 = ((uint *)(gen_frame + 0x0))[(int)((*(uint *)(gen_frame + 0x54)))];
          uVar4 = (*(uint *)(gen_frame + 0x54));
          if ((uVar3 != 0) && ((*((char *)GEN_TOP((uVar3 + 6))) != '\0' || (*((int *)GEN_TOP((uVar3 + 8))) != 0)))) {
            uVar8 = 0;
            pvVar5 = ((undefined *)GEN_TOP(F_00a36f30((*(undefined * PTR32 *)(gen_frame + 0x58)) GEN_EDX_ARG,(uint)((ushort *)(gen_frame + 0x15c))[(int)((*(uint *)(gen_frame + 0x54)))])));
            pvVar5 = ((undefined *)GEN_TOP(F_00a36440(pvVar5 GEN_EDX_ARG,uVar8)));
            (*(undefined * PTR32 *)(gen_frame + 0x4c)) = pvVar5;
            (*(undefined4 *)(gen_frame + 0xdc)) = 9999;
            (*(undefined4 *)(gen_frame + 0x5c)) = 9999;
            (*(undefined2 *)(gen_frame + 0xe0)) = 0;
            (*(undefined1 *)(gen_frame + 0xe2)) = 0;
            (*(undefined4 *)(gen_frame + 0xe4)) = 0;
            (*(undefined4 *)(gen_frame + 0xe8)) = 0;
            (*(undefined4 *)(gen_frame + 0xf4)) = 0;
            (*(undefined4 *)(gen_frame + 0xf8)) = 0;
            (*(undefined1 *)(gen_frame + 0xf0)) = 0;
            (*(undefined4 *)(gen_frame + 0xec)) = 0x75300000;
            (*(undefined4 *)(gen_frame + 0x10c)) = 0;
            (*(undefined4 *)(gen_frame + 0x118)) = 0;
            (*(undefined4 *)(gen_frame + 0xfc)) = 0;
            (*(undefined4 *)(gen_frame + 0x100)) = 0;
            (*(undefined2 *)(gen_frame + 0x104)) = 0;
            (*(undefined4 *)(gen_frame + 0x106)) = 0;
            (*(undefined2 *)(gen_frame + 0x10a)) = 0;
            (*(undefined4 *)(gen_frame + 0x110)) = 0;
            (*(undefined1 *)(gen_frame + 0x114)) = 0;
            (*(undefined2 *)(gen_frame + 0x60)) = 0;
            (*(undefined1 *)(gen_frame + 0x62)) = 0;
            (*(undefined4 *)(gen_frame + 0x64)) = 0;
            (*(undefined4 *)(gen_frame + 0x68)) = 0;
            (*(undefined4 *)(gen_frame + 0x74)) = 0;
            (*(undefined4 *)(gen_frame + 0x78)) = 0;
            (*(undefined1 *)(gen_frame + 0x70)) = 0;
            (*(undefined4 *)(gen_frame + 0x6c)) = 0x75300000;
            (*(undefined4 *)(gen_frame + 0x8c)) = 0;
            (*(undefined4 *)(gen_frame + 0x98)) = 0;
            (*(undefined4 *)(gen_frame + 0x7c)) = 0;
            (*(undefined4 *)(gen_frame + 0x80)) = 0;
            (*(undefined2 *)(gen_frame + 0x84)) = 0;
            (*(undefined4 *)(gen_frame + 0x86)) = 0;
            (*(undefined2 *)(gen_frame + 0x8a)) = 0;
            (*(undefined4 *)(gen_frame + 0x90)) = 0;
            (*(undefined1 *)(gen_frame + 0x94)) = 0;
            F_00a3bd60(&(*(undefined4 *)(gen_frame + 0xdc)) GEN_EDX_ARG,uVar3);
            F_00a3bd60(&(*(undefined4 *)(gen_frame + 0x5c)) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x4c)));
            F_00a3bd60((*(undefined * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,uVar3);
            *((undefined4 *)GEN_TOP((uVar3 + 8))) = 0;
            *((undefined4 *)GEN_TOP((uVar3 + 0xc))) = 0;
            *((undefined4 *)GEN_TOP((uVar3 + 0x18))) = 0;
            *((undefined4 *)GEN_TOP((uVar3 + 0x1c))) = 0;
            *((undefined1 *)GEN_TOP((uVar3 + 0x14))) = 0;
            *((undefined4 *)GEN_TOP((uVar3 + 0x10))) = 0x75300000;
            *((undefined1 *)GEN_TOP((uVar3 + 0x2f))) = 0;
            *((undefined4 *)GEN_TOP((uVar3 + 0x30))) = 0;
            *((undefined1 *)GEN_TOP((uVar3 + 6))) = 0;
            *((undefined4 *)GEN_TOP((uVar3 + 0x3c))) = 0;
            *((undefined4 *)GEN_TOP((uVar3 + 0x20))) = 0;
            *((undefined4 *)GEN_TOP((uVar3 + 0x24))) = 0;
            *((undefined2 *)GEN_TOP((uVar3 + 0x28))) = 0;
            *((undefined4 *)GEN_TOP((uVar3 + 0x2a))) = 0;
            *((undefined1 *)GEN_TOP((uVar3 + 0x2e))) = 0;
            *((undefined4 *)GEN_TOP((uVar3 + 0x34))) = 0;
            *((undefined1 *)GEN_TOP((uVar3 + 0x38))) = 0;
            uVar4 = F_00a3eb60(uVar3,&(*(undefined4 *)(gen_frame + 0xdc)));
            pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x58));
            if (uVar4 != 0) {
              F_00a42ea0((*(undefined * PTR32 *)(gen_frame + 0x58)) GEN_EDX_ARG,uVar3,&(*(undefined4 *)(gen_frame + 0xdc)),(char)uVar4);
            }
            uVar3 = F_00a3eb60((*(undefined * PTR32 *)(gen_frame + 0x4c)),&(*(undefined4 *)(gen_frame + 0x5c)));
            if (uVar3 != 0) {
              F_00a42ea0(pvVar5 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x4c)),&(*(undefined4 *)(gen_frame + 0x5c)),(char)uVar3);
            }
            uVar9 = 0;
            uVar8 = 0;
            fVar10 = REFG(float, 0x10916ec);
            uVar3 = F_0046e5e0(&(*(undefined4 *)(gen_frame + 0xdc)) GEN_EDX_ARG);
            F_00a7d290((uint)(*((int *)GEN_TOP(((int)pvVar5 + 0x28))) == *(*(int * PTR32 *)(gen_frame + 0x38))) * 2 + 699,(*(undefined4 *)(gen_frame + 0x44)),
                         uVar3,uVar8,uVar9,fVar10);
            uVar4 = (*(uint *)(gen_frame + 0x54));
          }
          (*(uint *)(gen_frame + 0x54)) = uVar4 + 1;
        } while ((int)(uVar4 + 1) < 0xe);
        (*(undefined2 *)(gen_frame + 0x120)) = 0;
        (*(undefined4 *)(gen_frame + 0x11c)) = 9999;
        (*(char *)(gen_frame + 0x122)) = '\0';
        (*(uint *)(gen_frame + 0x124)) = 0;
        (*(uint *)(gen_frame + 0x128)) = 0;
        (*(undefined4 *)(gen_frame + 0x134)) = 0;
        (*(undefined4 *)(gen_frame + 0x138)) = 0;
        (*(undefined1 *)(gen_frame + 0x130)) = 0;
        (*(undefined4 *)(gen_frame + 0x12c)) = 0x75300000;
        (*(undefined4 *)(gen_frame + 0x14c)) = 0;
        (*(undefined4 *)(gen_frame + 0x158)) = 0;
        (*(undefined4 *)(gen_frame + 0x13c)) = 0;
        (*(undefined4 *)(gen_frame + 0x140)) = 0;
        (*(undefined2 *)(gen_frame + 0x144)) = 0;
        (*(undefined4 *)(gen_frame + 0x146)) = 0;
        (*(undefined2 *)(gen_frame + 0x14a)) = 0;
        (*(undefined4 *)(gen_frame + 0x150)) = 0;
        (*(undefined1 *)(gen_frame + 0x154)) = 0;
        (*(undefined4 *)(gen_frame + 0x9c)) = 9999;
        (*(undefined2 *)(gen_frame + 0xa0)) = 0;
        (*(undefined1 *)(gen_frame + 0xa2)) = 0;
        (*(undefined4 *)(gen_frame + 0xa4)) = 0;
        (*(undefined4 *)(gen_frame + 0xa8)) = 0;
        (*(undefined4 *)(gen_frame + 0xb4)) = 0;
        (*(undefined4 *)(gen_frame + 0xb8)) = 0;
        (*(undefined1 *)(gen_frame + 0xb0)) = 0;
        (*(undefined4 *)(gen_frame + 0xac)) = 0x75300000;
        (*(undefined4 *)(gen_frame + 0xcc)) = 0;
        (*(undefined4 *)(gen_frame + 0xd8)) = 0;
        (*(undefined4 *)(gen_frame + 0xbc)) = 0;
        (*(undefined4 *)(gen_frame + 0xc0)) = 0;
        (*(undefined2 *)(gen_frame + 0xc4)) = 0;
        (*(undefined4 *)(gen_frame + 0xc6)) = 0;
        (*(undefined2 *)(gen_frame + 0xca)) = 0;
        (*(undefined4 *)(gen_frame + 0xd0)) = 0;
        (*(undefined1 *)(gen_frame + 0xd4)) = 0;
        F_00a3bd60(&(*(undefined4 *)(gen_frame + 0x11c)) GEN_EDX_ARG,param_2);
        piVar6 = (*(int * PTR32 *)(gen_frame + 0x38));
        F_00a3bd60(&(*(undefined4 *)(gen_frame + 0x9c)) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x38)));
        F_00a3bd60(piVar6 GEN_EDX_ARG,param_2);
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        *(undefined1 *)(param_2 + 5) = 0;
        param_2[4] = 0x75300000;
        *((undefined1 *)GEN_TOP(((int)param_2 + 0x2f))) = 0;
        param_2[0xc] = 0;
        *((undefined1 *)GEN_TOP(((int)param_2 + 6))) = 0;
        param_2[0xf] = 0;
        param_2[8] = 0;
        param_2[9] = 0;
        *(undefined2 *)(param_2 + 10) = 0;
        *((undefined4 *)GEN_TOP(((int)param_2 + 0x2a))) = 0;
        *((undefined1 *)GEN_TOP(((int)param_2 + 0x2e))) = 0;
        param_2[0xd] = 0;
        *(undefined1 *)(param_2 + 0xe) = 0;
        if (param_4 != '\0') {
          uVar3 = (*(uint *)(gen_frame + 0x128));
          if ((*(char *)(gen_frame + 0x122)) != '\0') {
            iVar7 = (int)(short)(*(uint *)(gen_frame + 0x124));
            pvVar5 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x124)) >> 0x10)));
            pvVar5 = ((undefined *)GEN_TOP(F_00a37da0(pvVar5 GEN_EDX_ARG,iVar7)));
            (*(undefined * PTR32 *)(gen_frame + 0x3c)) = pvVar5;
            (*(uint *)(gen_frame + 0x48)) = (*(uint *)(gen_frame + 0x128));
            uVar4 = F_00a3a8a0(pvVar5 GEN_EDX_ARG);
            uVar3 = (*(uint *)(gen_frame + 0x48));
            if (uVar4 < (*(uint *)(gen_frame + 0x48))) {
              uVar3 = F_00a3a8a0((*(undefined * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
              (*(uint *)(gen_frame + 0x48)) = uVar3;
              (*(uint *)(gen_frame + 0x128)) = uVar3;
              uVar3 = (*(uint *)(gen_frame + 0x48));
            }
          }
          F_00a38890((*(undefined * PTR32 *)(gen_frame + 0x58)) GEN_EDX_ARG,*param_2,(uint)*(ushort *)(param_2 + 1),*piVar6,
                       (uint)*(ushort *)(piVar6 + 1),uVar3);
        }
        uVar9 = 0;
        uVar8 = 0;
        fVar10 = REFG(float, 0x10916ec);
        uVar3 = F_0046e5e0(piVar6 GEN_EDX_ARG);
        F_00a7d290((uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x28))) == *piVar6) * 2 + 0x2ba,(*(undefined4 *)(gen_frame + 0x44)),uVar3,
                     uVar8,uVar9,fVar10);
        uVar3 = F_00a3eb60(param_2,&(*(undefined4 *)(gen_frame + 0x11c)));
        pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x58));
        if (uVar3 != 0) {
          F_00a42ea0((*(undefined * PTR32 *)(gen_frame + 0x58)) GEN_EDX_ARG,param_2,&(*(undefined4 *)(gen_frame + 0x11c)),(char)uVar3);
        }
        uVar3 = F_00a3eb60(piVar6,&(*(undefined4 *)(gen_frame + 0x9c)));
        if (uVar3 != 0) {
          F_00a42ea0(pvVar5 GEN_EDX_ARG,piVar6,&(*(undefined4 *)(gen_frame + 0x9c)),(char)uVar3);
        }
        *((undefined4 *)GEN_TOP(((int)pvVar5 + 0x2ff8))) = 0;
        return 0;
      }
      if (uVar4 == 0x2ad) {
        if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x2ff8))) & 1) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x2498;
        }
        uVar4 = F_00ab21a0((uint)*((byte *)GEN_TOP(((*(uint *)(gen_frame + 0x48)) + 0xa8))));
        if ((iVar7 != 0) && (uVar4 != 0)) {
          F_00a76e30(0x2ad,(*(undefined4 *)(gen_frame + 0x44)),(uint)*((byte *)GEN_TOP((iVar7 + 0xa8))),(uint)*((byte *)GEN_TOP((uVar3 + 0xa8))),
                       (uint)*((byte *)GEN_TOP((uVar4 + 0x3e))),REFG(float, 0x10916ec));
          return 10;
        }
      }
      else if (uVar4 == 0x2ae) {
        if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x2ff8))) & 0x2000) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x2f28;
        }
        uVar4 = F_00ab21a0((uint)*((byte *)GEN_TOP(((*(uint *)(gen_frame + 0x48)) + 0xa8))));
        if ((iVar7 != 0) && (uVar4 != 0)) {
          F_00a76e30(0x2ae,(*(undefined4 *)(gen_frame + 0x44)),(uint)*((byte *)GEN_TOP((iVar7 + 0xa8))),(uint)*((byte *)GEN_TOP((uVar3 + 0xa8))),
                       (uint)*((byte *)GEN_TOP((uVar4 + 0x3e))),REFG(float, 0x10916ec));
          return 10;
        }
      }
      else {
        uVar9 = 0;
        uVar8 = 0;
        fVar10 = REFG(float, 0x10916ec);
        uVar3 = F_0046e5e0(param_2 GEN_EDX_ARG);
        F_00a7d290(uVar4,(*(undefined4 *)(gen_frame + 0x44)),uVar3,uVar8,uVar9,fVar10);
      }
      return 10;
    }
  } while( true );
}

/* ref: FUN_00a45b30 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a45b30(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa45b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL_GS(0x17c, 4, 4);
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x174)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x178));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 76)) = REFG(undefined4, 0x1379694);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 84)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 68)) = param_3;
  uVar2 = F_0046e5e0(param_2 GEN_EDX_FWD);
  uVar2 = F_00ab24a0(uVar2);
  ((byte *)(gen_frame + 0x0))[0x3c] = (char)uVar2;
  ((byte *)(gen_frame + 0x0))[0x3d] = (char)(uVar2 >> 8);
  ((byte *)(gen_frame + 0x0))[0x3e] = (char)(uVar2 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0x3f] = (char)(uVar2 >> 0x18);
  if ((uVar2 == 0) || (uVar2 = F_00906df0(param_2 GEN_EDX_ARG), uVar2 == 0)) {
    return 6;
  }
  ((byte *)(gen_frame + 0x0))[0] = 0;
  ((byte *)(gen_frame + 0x0))[1] = 0;
  ((byte *)(gen_frame + 0x0))[2] = 0;
  ((byte *)(gen_frame + 0x0))[3] = 0;
  F_00c48350(((byte *)(gen_frame + 0x0)) + 4,0,0x34);
  iVar7 = *param_2;
  ((ushort *)(gen_frame + 0x158))[0] = 0;
  ((ushort *)(gen_frame + 0x158))[1] = 0;
  ((ushort *)(gen_frame + 0x158))[2] = 0;
  ((ushort *)(gen_frame + 0x158))[3] = 0;
  ((ushort *)(gen_frame + 0x158))[4] = 0;
  ((ushort *)(gen_frame + 0x158))[5] = 0;
  ((ushort *)(gen_frame + 0x158))[6] = 0;
  ((ushort *)(gen_frame + 0x158))[7] = 0;
  ((ushort *)(gen_frame + 0x158))[8] = 0;
  ((ushort *)(gen_frame + 0x158))[9] = 0;
  ((ushort *)(gen_frame + 0x158))[10] = 0;
  ((ushort *)(gen_frame + 0x158))[0xb] = 0;
  ((ushort *)(gen_frame + 0x158))[0xc] = 0;
  ((ushort *)(gen_frame + 0x158))[0xd] = 0;
  uVar2 = F_00a36f30(param_1 GEN_EDX_ARG,iVar7);
  ((byte *)(gen_frame + 0x0))[0x38] = (char)uVar2;
  ((byte *)(gen_frame + 0x0))[0x39] = (char)(uVar2 >> 8);
  ((byte *)(gen_frame + 0x0))[0x3a] = (char)(uVar2 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0x3b] = (char)(uVar2 >> 0x18);
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x3e);
  if (bVar1 == 0) {
    uVar9 = 0;
    uVar8 = 0;
    if (*param_2 == *((int *)GEN_TOP(((int)param_1 + 0x28)))) {
      fVar11 = REFG(float, 0x10916ec);
      uVar2 = F_0046e5e0(param_2 GEN_EDX_ARG);
      F_00a7d290(0x2c4,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 76)),uVar2,uVar8,uVar9,fVar11);
      return 10;
    }
    fVar11 = REFG(float, 0x10916ec);
    uVar2 = F_0046e5e0(param_2 GEN_EDX_ARG);
    F_00a7d290(0x2b9,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 76)),uVar2,uVar8,uVar9,fVar11);
    return 10;
  }
  if ((short)param_2[1] == 0xd) {
    iVar7 = 0;
    do {
      uVar2 = F_00a37da0(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56)))) GEN_EDX_ARG,iVar7);
      ((byte *)(gen_frame + 0x0))[0x50] = (char)uVar2;
      ((byte *)(gen_frame + 0x0))[0x51] = (char)(uVar2 >> 8);
      ((byte *)(gen_frame + 0x0))[0x52] = (char)(uVar2 >> 0x10);
      ((byte *)(gen_frame + 0x0))[0x53] = (char)(uVar2 >> 0x18);
      if (uVar2 == 0) {
        return 4;
      }
      if ((*((char *)GEN_TOP((uVar2 + 6))) != '\0') || (*((int *)GEN_TOP((uVar2 + 8))) != 0)) {
        if (iVar7 != 0) {
          uVar2 = F_00a36f00(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 84)))) GEN_EDX_ARG,iVar7);
          ((byte *)(gen_frame + 0x0))[0x48] = (char)uVar2;
          ((byte *)(gen_frame + 0x0))[0x49] = (char)(uVar2 >> 8);
          ((byte *)(gen_frame + 0x0))[0x4a] = (char)(uVar2 >> 0x10);
          ((byte *)(gen_frame + 0x0))[0x4b] = (char)(uVar2 >> 0x18);
          if (uVar2 == 0) {
            return 6;
          }
          uVar2 = F_00906df0(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 80)))) GEN_EDX_ARG);
          if (uVar2 == 0) {
            return 6;
          }
          uVar2 = F_00ab21d0((uint)*((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 72)) + 0xac))));
          ((byte *)(gen_frame + 0x0))[0x40] = (char)uVar2;
          ((byte *)(gen_frame + 0x0))[0x41] = (char)(uVar2 >> 8);
          ((byte *)(gen_frame + 0x0))[0x42] = (char)(uVar2 >> 0x10);
          ((byte *)(gen_frame + 0x0))[0x43] = (char)(uVar2 >> 0x18);
          uVar2 = F_00ab21a0((uint)*((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 60)) + 0xa8))));
          if ((*((char *)GEN_TOP((*((byte *)GEN_TOP((uVar2 + 0x3e))) + 4 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64))))) == '\0') ||
             (uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP((uVar2 + 0x3e))),0),
             (ushort)uVar2 < (ushort)*((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 72)) + 0x9f))))) {
            *(undefined4 *)(((byte *)(gen_frame + 0x0)) + iVar7 * 4) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 80));
            uVar2 = F_00a36960((char)iVar7);
            ((ushort *)(gen_frame + 0x158))[(int)(iVar7)] = (ushort)uVar2;
          }
        }
        ((byte *)(gen_frame + 0x0))[0x50] = 1;
        ((byte *)(gen_frame + 0x0))[0x51] = 0;
        ((byte *)(gen_frame + 0x0))[0x52] = 0;
        ((byte *)(gen_frame + 0x0))[0x53] = 0;
        if (((iVar7 == 0xc) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48)) != 0)) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)) != 0)) {
          ((byte *)(gen_frame + 0x0))[0x50] = 2;
          ((byte *)(gen_frame + 0x0))[0x51] = 0;
          ((byte *)(gen_frame + 0x0))[0x52] = 0;
          ((byte *)(gen_frame + 0x0))[0x53] = 0;
        }
        if ((*(int *)(((byte *)(gen_frame + 0x0)) + iVar7 * 4) != 0) &&
           (uVar2 = F_00a37350(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 84)))) GEN_EDX_ARG,(uint)((ushort *)(gen_frame + 0x158))[(int)(iVar7)]),
           uVar2 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 80)))) {
          piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
          uVar8 = 0x2c5;
          pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG)));
          F_0046a630(pvVar4 GEN_EDX_ARG,uVar8);
          return 0x18;
        }
      }
      iVar7 = iVar7 + 1;
      param_1 = ((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 84))));
    } while (iVar7 < 0xe);
  }
  uVar2 = F_00a3a750(*param_2 - 1000,(int)(short)param_2[1]);
  uVar9 = 0;
  uVar8 = 0;
  if (uVar2 != 0) {
    F_00a7d290(uVar2,0,0,0,0,REFG(float, 0x10916ec));
    return 10;
  }
  fVar11 = REFG(float, 0x10916ec);
  uVar2 = F_0046e5e0(param_2 GEN_EDX_ARG);
  F_00a7d290((uint)(*((int *)GEN_TOP(((int)param_1 + 0x28))) == *param_2) * 2 + 699,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 76)),uVar2,
               uVar8,uVar9,fVar11);
  piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x34))))(piVar3 GEN_EDX_ARG)));
  F_0044c070(pvVar4 GEN_EDX_ARG);
  ((byte *)(gen_frame + 0x0))[0x50] = 0;
  ((byte *)(gen_frame + 0x0))[0x51] = 0;
  ((byte *)(gen_frame + 0x0))[0x52] = 0;
  ((byte *)(gen_frame + 0x0))[0x53] = 0;
  do {
    iVar7 = *((int *)GEN_TOP((((byte *)(gen_frame + 0x0)) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 80)) * 4)));
    iVar5 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 80));
    if ((iVar7 != 0) && ((*((char *)GEN_TOP((iVar7 + 6))) != '\0' || (*((int *)GEN_TOP((iVar7 + 8))) != 0)))) {
      uVar8 = 0;
      pvVar4 = ((undefined *)GEN_TOP(F_00a36f30(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 84)))) GEN_EDX_ARG,(uint)((ushort *)(gen_frame + 0x158))[(int)((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 80)))])));
      uVar2 = F_00a36440(pvVar4 GEN_EDX_ARG,uVar8);
      ((byte *)(gen_frame + 0x0))[0x48] = (char)uVar2;
      ((byte *)(gen_frame + 0x0))[0x49] = (char)(uVar2 >> 8);
      ((byte *)(gen_frame + 0x0))[0x4a] = (char)(uVar2 >> 0x10);
      ((byte *)(gen_frame + 0x0))[0x4b] = (char)(uVar2 >> 0x18);
      F_0071d1a0(((undefined1 *)(gen_frame + 0x98)) GEN_EDX_ARG);
      F_0071d1a0(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG);
      F_00a3bd60(((undefined1 *)(gen_frame + 0x98)) GEN_EDX_ARG,iVar7);
      F_00a3bd60(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 72)));
      F_00a3bd60(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 72)))) GEN_EDX_ARG,iVar7);
      *((undefined4 *)GEN_TOP((iVar7 + 8))) = 0;
      *((undefined4 *)GEN_TOP((iVar7 + 0xc))) = 0;
      *((undefined4 *)GEN_TOP((iVar7 + 0x18))) = 0;
      *((undefined4 *)GEN_TOP((iVar7 + 0x1c))) = 0;
      *((undefined1 *)GEN_TOP((iVar7 + 0x14))) = 0;
      *((undefined4 *)GEN_TOP((iVar7 + 0x10))) = 0x75300000;
      *((undefined1 *)GEN_TOP((iVar7 + 0x2f))) = 0;
      *((undefined4 *)GEN_TOP((iVar7 + 0x30))) = 0;
      *((undefined1 *)GEN_TOP((iVar7 + 6))) = 0;
      *((undefined4 *)GEN_TOP((iVar7 + 0x3c))) = 0;
      *((undefined4 *)GEN_TOP((iVar7 + 0x20))) = 0;
      *((undefined4 *)GEN_TOP((iVar7 + 0x24))) = 0;
      *((undefined2 *)GEN_TOP((iVar7 + 0x28))) = 0;
      *((undefined4 *)GEN_TOP((iVar7 + 0x2a))) = 0;
      *((undefined1 *)GEN_TOP((iVar7 + 0x2e))) = 0;
      *((undefined4 *)GEN_TOP((iVar7 + 0x34))) = 0;
      *((undefined1 *)GEN_TOP((iVar7 + 0x38))) = 0;
      uVar2 = F_00a3eb60(iVar7,((undefined1 *)(gen_frame + 0x98)));
      uVar8 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 84));
      if (uVar2 != 0) {
        F_00a42ea0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 84)) GEN_EDX_ARG,iVar7,((undefined1 *)(gen_frame + 0x98)),(char)uVar2);
      }
      uVar2 = F_00a3eb60((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 72)),((undefined1 *)(gen_frame + 0x58)));
      if (uVar2 != 0) {
        F_00a42ea0(uVar8 GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 72)),((undefined1 *)(gen_frame + 0x58)),(char)uVar2);
      }
      uVar10 = 0;
      uVar9 = 0;
      fVar11 = REFG(float, 0x10916ec);
      uVar2 = F_0046e5e0(((undefined1 *)(gen_frame + 0x98)) GEN_EDX_ARG);
      F_00a7d290((uint)(*((int *)GEN_TOP((uVar8 + 0x28))) == *param_2) * 2 + 699,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 76)),uVar2,uVar9,
                   uVar10,fVar11);
      iVar5 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 80));
    }
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 80)) = iVar5 + 1;
  } while (iVar5 + 1 < 0xe);
  (*(undefined4 *)(gen_frame + 0x118)) = 9999;
  (*(undefined4 *)(gen_frame + 0xd8)) = 9999;
  (*(undefined2 *)(gen_frame + 0x11c)) = 0;
  (*(char *)(gen_frame + 0x11e)) = '\0';
  (*(uint *)(gen_frame + 0x120)) = 0;
  (*(uint *)(gen_frame + 0x124)) = 0;
  (*(undefined4 *)(gen_frame + 0x130)) = 0;
  (*(undefined4 *)(gen_frame + 0x134)) = 0;
  (*(undefined1 *)(gen_frame + 0x12c)) = 0;
  (*(undefined4 *)(gen_frame + 0x128)) = 0x75300000;
  (*(undefined4 *)(gen_frame + 0x148)) = 0;
  (*(undefined4 *)(gen_frame + 0x154)) = 0;
  (*(undefined4 *)(gen_frame + 0x138)) = 0;
  (*(undefined4 *)(gen_frame + 0x13c)) = 0;
  (*(undefined2 *)(gen_frame + 0x140)) = 0;
  (*(undefined4 *)(gen_frame + 0x142)) = 0;
  (*(undefined2 *)(gen_frame + 0x146)) = 0;
  (*(undefined4 *)(gen_frame + 0x14c)) = 0;
  (*(undefined1 *)(gen_frame + 0x150)) = 0;
  (*(undefined2 *)(gen_frame + 0xdc)) = 0;
  (*(undefined1 *)(gen_frame + 0xde)) = 0;
  (*(undefined4 *)(gen_frame + 0xe0)) = 0;
  (*(undefined4 *)(gen_frame + 0xe4)) = 0;
  (*(undefined4 *)(gen_frame + 0xf0)) = 0;
  (*(undefined4 *)(gen_frame + 0xf4)) = 0;
  (*(undefined1 *)(gen_frame + 0xec)) = 0;
  (*(undefined4 *)(gen_frame + 0xe8)) = 0x75300000;
  (*(undefined4 *)(gen_frame + 0x108)) = 0;
  (*(undefined4 *)(gen_frame + 0x114)) = 0;
  (*(undefined4 *)(gen_frame + 0xf8)) = 0;
  (*(undefined4 *)(gen_frame + 0xfc)) = 0;
  (*(undefined2 *)(gen_frame + 0x100)) = 0;
  (*(undefined4 *)(gen_frame + 0x102)) = 0;
  (*(undefined2 *)(gen_frame + 0x106)) = 0;
  (*(undefined4 *)(gen_frame + 0x10c)) = 0;
  (*(undefined1 *)(gen_frame + 0x110)) = 0;
  F_00a3bd60(&(*(undefined4 *)(gen_frame + 0x118)) GEN_EDX_ARG,param_2);
  uVar8 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 68));
  F_00a3bd60(&(*(undefined4 *)(gen_frame + 0xd8)) GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 68)));
  F_00a3bd60(((undefined *)GEN_TOP(uVar8)) GEN_EDX_ARG,param_2);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[4] = 0x75300000;
  *((undefined1 *)GEN_TOP(((int)param_2 + 0x2f))) = 0;
  param_2[0xc] = 0;
  *((undefined1 *)GEN_TOP(((int)param_2 + 6))) = 0;
  param_2[0xf] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined2 *)(param_2 + 10) = 0;
  *((undefined4 *)GEN_TOP(((int)param_2 + 0x2a))) = 0;
  *((undefined1 *)GEN_TOP(((int)param_2 + 0x2e))) = 0;
  param_2[0xd] = 0;
  *(undefined1 *)(param_2 + 0xe) = 0;
  if (param_4 != '\0') {
    uVar2 = (*(uint *)(gen_frame + 0x124));
    if ((*(char *)(gen_frame + 0x11e)) != '\0') {
      iVar7 = (int)(short)(*(uint *)(gen_frame + 0x120));
      pvVar4 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x120)) >> 0x10)));
      pvVar4 = ((undefined *)GEN_TOP(F_00a37da0(pvVar4 GEN_EDX_ARG,iVar7)));
      ((byte *)(gen_frame + 0x0))[0x4c] = (undefined1)(*(uint *)(gen_frame + 0x124));
      ((byte *)(gen_frame + 0x0))[0x4d] = (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x124)) + 1));
      ((byte *)(gen_frame + 0x0))[0x4e] = (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x124)) + 2));
      ((byte *)(gen_frame + 0x0))[0x4f] = (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x124)) + 3));
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 68)) = pvVar4;
      uVar6 = F_00a3a8a0(pvVar4 GEN_EDX_ARG);
      uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 76));
      if (uVar6 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 76))) {
        uVar2 = F_00a3a8a0(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 68)))) GEN_EDX_ARG);
        ((byte *)(gen_frame + 0x0))[0x4c] = (char)uVar2;
        ((byte *)(gen_frame + 0x0))[0x4d] = (char)(uVar2 >> 8);
        ((byte *)(gen_frame + 0x0))[0x4e] = (char)(uVar2 >> 0x10);
        ((byte *)(gen_frame + 0x0))[0x4f] = (char)(uVar2 >> 0x18);
        (*(uint *)(gen_frame + 0x124)) = uVar2;
        uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 76));
      }
    }
    F_00a38890(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 84)))) GEN_EDX_ARG,*param_2,(uint)*(ushort *)(param_2 + 1),*((undefined4 *)GEN_TOP(uVar8))
                 ,(uint)*((ushort *)GEN_TOP((uVar8 + 4))),uVar2);
  }
  uVar2 = F_00a3eb60(param_2,&(*(undefined4 *)(gen_frame + 0x118)));
  uVar9 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 84));
  if (uVar2 != 0) {
    F_00a42ea0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 84)) GEN_EDX_ARG,param_2,&(*(undefined4 *)(gen_frame + 0x118)),(char)uVar2);
  }
  uVar2 = F_00a3eb60(uVar8,&(*(undefined4 *)(gen_frame + 0xd8)));
  if (uVar2 != 0) {
    F_00a42ea0(uVar9 GEN_EDX_ARG,uVar8,&(*(undefined4 *)(gen_frame + 0xd8)),(char)uVar2);
  }
  *((undefined4 *)GEN_TOP((uVar9 + 0x2ff8))) = 0;
  return 0;
}

/* ref: FUN_00a46200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a46200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa46200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar1 = F_00ab24a0(*param_2);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a36f30(this GEN_EDX_ARG,1000);
    if (*((char *)GEN_TOP((uVar2 + 0x10))) != '\0') {
      uVar2 = F_00a43260(this GEN_EDX_ARG,param_1,param_2,uVar1);
      return uVar2;
    }
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x23e1))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x23e4))) = param_1;
  puVar4 = param_2;
  puVar5 = ((undefined4 *)GEN_TOP(((int)this + 0x23e8)));
  for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return uVar2;
}

/* ref: FUN_00a46270 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a46270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa46270u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined * pvVar5;
  undefined4 * this_00;
  undefined4 * this_01;
  uint uVar6;
  int * piVar7;
  undefined4 uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  if ((param_1 - 10000U < 7) || (param_1 - 12000U < 3)) {
    bVar4 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_FWD,0x74);
    if (bVar4 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x74);
      return 0xd;
    }
  }
  else {
    bVar4 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x6e);
    if (bVar4 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x6e);
      return 0xd;
    }
  }
  if ((((param_1 == 0xdac) || (param_1 - 0xc80U < 10)) || (param_1 == 0xce4)) || (param_1 == 0xd48))
  {
    return 0xd;
  }
  pvVar5 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,param_1)));
  if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
    return 3;
  }
  this_00 = ((undefined4 *)GEN_TOP(F_00a37da0(pvVar5 GEN_EDX_ARG,(int)(short)param_2)));
  if ((this_00 != ((undefined4 *)GEN_TOP(0x0))) && ((*((char *)GEN_TOP(((int)this_00 + 6))) != '\0' || (this_00[2] != 0)))
     ) {
    bVar4 = F_00a366f0(param_1);
    if (bVar4 == 0) {
      uVar6 = F_0046e5e0(this_00 GEN_EDX_ARG);
      this_01 = ((undefined4 *)GEN_TOP(F_00a371d0(this GEN_EDX_ARG,uVar6)));
    }
    else {
      this_01 = ((undefined4 *)GEN_TOP(F_00a372b0(this GEN_EDX_ARG)));
    }
    if (this_01 != ((undefined4 *)GEN_TOP(0x0))) {
      uVar6 = F_0046e5e0(this_00 GEN_EDX_ARG);
      if (uVar6 - 2 < 0x12) {
        piVar7 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        uVar8 = 0x2d1;
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x28))))(piVar7 GEN_EDX_ARG)));
        F_0046a630(pvVar5 GEN_EDX_ARG,uVar8);
        return 0xd;
      }
      uVar6 = F_00a37c50(this_00 GEN_EDX_ARG);
      if ((uVar6 == 0) && (uVar6 = F_00a37c50(this_01 GEN_EDX_ARG), uVar6 == 0)) {
        uVar6 = F_00a3a8a0(this_00 GEN_EDX_ARG);
        if ((param_3 < uVar6) && (param_3 != 0)) {
          uVar6 = F_0071d3a0(this_01 GEN_EDX_ARG);
          if ((char)uVar6 == '\0') {
            return 0xd;
          }
          F_0071d1a0(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
          F_0071d1a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          F_00a3bd60(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,this_00);
          F_00a3bd60(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,this_01);
          F_00a3bd60(this_01 GEN_EDX_ARG,this_00);
          F_00a35f80(this_01 GEN_EDX_ARG,param_3);
          uVar6 = F_00a3a8a0(this_00 GEN_EDX_ARG);
          F_00a35f80(this_00 GEN_EDX_ARG,uVar6 - param_3);
          uVar1 = *(ushort *)(this_01 + 1);
          uVar2 = *(ushort *)(this_00 + 1);
          uVar8 = *this_01;
          uVar3 = *this_00;
          uVar6 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
          F_00a392d0(this GEN_EDX_ARG,uVar3,(uint)uVar2,uVar8,(uint)uVar1,param_3,uVar6);
          uVar6 = F_00a3eb60(this_00,((undefined1 *)(gen_frame + 0x40)));
          if (uVar6 != 0) {
            F_00a42ea0(this GEN_EDX_ARG,this_00,((undefined1 *)(gen_frame + 0x40)),(char)uVar6);
          }
          uVar6 = F_00a3eb60(this_01,((undefined1 *)(gen_frame + 0x0)));
          if (uVar6 != 0) {
            F_00a42ea0(this GEN_EDX_ARG,this_01,((undefined1 *)(gen_frame + 0x0)),(char)uVar6);
          }
          F_00a3a720();
          return 0;
        }
        piVar7 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        uVar8 = 0x2d1;
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x28))))(piVar7 GEN_EDX_ARG)));
        F_0046a630(pvVar5 GEN_EDX_ARG,uVar8);
        return 7;
      }
      piVar7 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar8 = 0x2d1;
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x28))))(piVar7 GEN_EDX_ARG)));
      F_0046a630(pvVar5 GEN_EDX_ARG,uVar8);
      return 0x13;
    }
  }
  piVar7 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar8 = 0x2d1;
  pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x28))))(piVar7 GEN_EDX_ARG)));
  F_0046a630(pvVar5 GEN_EDX_ARG,uVar8);
  return 4;
}

/* ref: FUN_00a465f0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a465f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa465f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  uVar6 = F_00a37c50(param_1 GEN_EDX_FWD);
  if (uVar6 == 0) {
    uVar6 = F_00a37c50(param_2 GEN_EDX_ARG);
    if (uVar6 == 0) {
      uVar6 = F_00a3a8a0(param_1 GEN_EDX_ARG);
      if ((uVar6 < param_3) || (param_3 == 0)) {
        return 7;
      }
      if ((*((char *)GEN_TOP(((int)param_2 + 6))) == '\0') && (param_2[2] == 0)) {
        bVar5 = F_00a366d0(*param_2);
        if (bVar5 == 0) {
          uVar6 = F_00a3a8a0(param_1 GEN_EDX_ARG);
          if (param_3 == uVar6) {
            uVar1 = *(ushort *)(param_2 + 1);
            uVar2 = *(ushort *)(param_1 + 1);
            uVar3 = *param_2;
            uVar4 = *param_1;
            uVar6 = F_00a3a8a0(param_1 GEN_EDX_ARG);
            F_00a38890(this GEN_EDX_ARG,uVar4,(uint)uVar2,uVar3,(uint)uVar1,uVar6);
LAB_00a4674b: ;
            F_0071d1a0(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
            F_0071d1a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            F_00a3bd60(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,param_1);
            F_00a3bd60(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2);
            F_00a3bd60(param_2 GEN_EDX_ARG,param_1);
            F_00a35f80(param_2 GEN_EDX_ARG,param_3);
            uVar6 = F_00a3a8a0(param_1 GEN_EDX_ARG);
            F_00a35f80(param_1 GEN_EDX_ARG,uVar6 - param_3);
            uVar6 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
            if (param_3 == uVar6) {
              F_00a35f30(param_1 GEN_EDX_ARG);
            }
            uVar6 = F_00a3eb60(param_1,((undefined1 *)(gen_frame + 0x40)));
            if (uVar6 != 0) {
              F_00a42ea0(this GEN_EDX_ARG,param_1,((undefined1 *)(gen_frame + 0x40)),(char)uVar6);
            }
            uVar6 = F_00a3eb60(param_2,((undefined1 *)(gen_frame + 0x0)));
            if (uVar6 != 0) {
              F_00a42ea0(this GEN_EDX_ARG,param_2,((undefined1 *)(gen_frame + 0x0)),(char)uVar6);
            }
            F_00a3a720();
            return 0;
          }
          uVar3 = *param_1;
          bVar5 = F_00a36750(uVar3);
          if (bVar5 == 0) {
            uVar4 = *param_2;
            bVar5 = F_00a36750(uVar4);
            if (bVar5 == 0) {
              uVar1 = *(ushort *)(param_1 + 1);
              uVar2 = *(ushort *)(param_2 + 1);
              uVar6 = F_00a3a8a0(param_1 GEN_EDX_ARG);
              F_00a392d0(this GEN_EDX_ARG,uVar3,(uint)uVar1,uVar4,(uint)uVar2,param_3,uVar6);
              goto LAB_00a4674b;
            }
          }
        }
      }
      return 0xd;
    }
  }
  return 0x13;
}

/* ref: FUN_00a46840 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a46840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa46840u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  if ((((param_1 != ((undefined4 *)GEN_TOP(0x0))) && (param_2 != ((undefined4 *)GEN_TOP(0x0)))) &&
      ((*((char *)GEN_TOP(((int)param_1 + 6))) != '\0' || (param_1[2] != 0)))) &&
     ((*((char *)GEN_TOP(((int)param_2 + 6))) != '\0' || (param_2[2] != 0)))) {
    uVar4 = F_0046e5e0(param_1 GEN_EDX_FWD);
    uVar5 = F_0046e5e0(param_2 GEN_EDX_ARG);
    if (uVar5 == uVar4) {
      bVar3 = F_00a36750(*param_1);
      if (bVar3 == 0) {
        bVar3 = F_00a36750(*param_2);
        if (bVar3 == 0) {
          F_0071d1a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          F_0071d1a0(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
          F_00a3bd60(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
          F_00a3bd60(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,param_2);
          uVar4 = F_0046e5e0(param_2 GEN_EDX_ARG);
          uVar4 = F_00ab24a0(uVar4);
          if (uVar4 != 0) {
            uVar5 = F_00906df0(param_2 GEN_EDX_ARG);
            if (uVar5 != 0) {
              uVar5 = F_00a3a8a0(param_2 GEN_EDX_ARG);
              uVar5 = uVar5 + param_3;
              uVar4 = *((uint *)GEN_TOP((uVar4 + 0x28)));
              if (uVar4 < uVar5) {
                F_00a35f80(param_2 GEN_EDX_ARG,uVar4);
                F_00a35f80(param_1 GEN_EDX_ARG,uVar5 - uVar4);
                uVar4 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
                uVar5 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
                uVar2 = *(ushort *)(param_2 + 1);
                uVar7 = *param_2;
                uVar1 = *(ushort *)(param_1 + 1);
                uVar6 = *param_1;
              }
              else {
                F_00a35f80(param_2 GEN_EDX_ARG,uVar5);
                uVar4 = F_00a3a8a0(param_1 GEN_EDX_ARG);
                F_00a35f80(param_1 GEN_EDX_ARG,uVar4 - param_3);
                uVar4 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
                uVar5 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
                uVar7 = *param_2;
                uVar1 = *(ushort *)(param_1 + 1);
                uVar2 = *(ushort *)(param_2 + 1);
                uVar6 = *param_1;
              }
              F_00a39390(this GEN_EDX_ARG,uVar6,(uint)uVar1,uVar7,(uint)uVar2,param_3,uVar5,uVar4);
              uVar4 = F_00a3eb60(param_1,((undefined1 *)(gen_frame + 0x0)));
              if (uVar4 != 0) {
                F_00a42ea0(this GEN_EDX_ARG,param_1,((undefined1 *)(gen_frame + 0x0)),(char)uVar4);
              }
              uVar4 = F_00a3eb60(param_2,((undefined1 *)(gen_frame + 0x40)));
              if (uVar4 != 0) {
                F_00a42ea0(this GEN_EDX_ARG,param_2,((undefined1 *)(gen_frame + 0x40)),(char)uVar4);
              }
              F_00a3a720();
              return 0;
            }
          }
          return 6;
        }
      }
    }
    return 0xc;
  }
  return 4;
}

/* ref: FUN_00a46a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a46a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa46a80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  uVar6 = param_1[2];
  if (param_1[2] == param_2[2]) {
    uVar1 = param_1[3];
    iVar7 = 0;
    uVar6 = uVar1;
    if (0 < (int)uVar1) {
      local_8 = 0;
      do {
        if (((*param_1 == 0) || (iVar7 < 0)) || (param_1[3] <= iVar7)) {
          iVar2 = 0;
        }
        else {
          iVar2 = *param_1 + local_8;
          if (*((char *)GEN_TOP((iVar2 + 6))) != '\0') {
            iVar3 = (int)*((short *)GEN_TOP((iVar2 + 8)));
            piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,(uint)*((ushort *)GEN_TOP((iVar2 + 10))))));
            if (((*piVar4 == 0) || (iVar3 < 0)) || (piVar4[3] <= iVar3)) {
              iVar2 = 0;
            }
            else {
              iVar2 = iVar3 * 0x40 + *piVar4;
            }
          }
        }
        if (((*param_2 == 0) || (iVar7 < 0)) || (param_2[3] <= iVar7)) {
LAB_00a46b4d: ;
          iVar3 = 0;
        }
        else {
          iVar3 = *param_2 + local_8;
          if (*((char *)GEN_TOP((iVar3 + 6))) != '\0') {
            iVar8 = (int)*((short *)GEN_TOP((iVar3 + 8)));
            piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((iVar3 + 10))))));
            if (((*piVar4 == 0) || (iVar8 < 0)) || (piVar4[3] <= iVar8)) goto LAB_00a46b4d;
            iVar3 = iVar8 * 0x40 + *piVar4;
          }
        }
        uVar5 = F_00a3eb60(iVar2,iVar3);
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = F_00a42ea0(this GEN_EDX_ARG,iVar2,iVar3,(char)uVar5);
        }
        local_8 = local_8 + 0x40;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar1);
    }
  }
  return uVar6;
}

/* ref: FUN_00a46b80 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a46b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa46b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined * this_00;
  undefined4 * puVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
  uVar4 = F_00a36f30(this GEN_EDX_FWD,uVar1);
  if (*((char *)GEN_TOP((uVar4 + 0x10))) == '\0') {
    uVar4 = F_00a3fa30((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,uVar1);
    return uVar4;
  }
  this_00 = ((undefined *)GEN_TOP(F_00a36f30((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,uVar1)));
  uVar4 = 0;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    puVar5 = ((undefined4 *)GEN_TOP(F_00a37da0(this_00 GEN_EDX_ARG,(int)*((short *)GEN_TOP((param_1 + 0x24))))));
    uVar4 = 0;
    if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
      F_0071d1a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      F_00a3bd60(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar5);
      iVar2 = *((int *)GEN_TOP((param_1 + 0x2c)));
      puVar5[2] = iVar2;
      iVar3 = *((int *)GEN_TOP((param_1 + 0x28)));
      puVar5[3] = iVar3;
      if (((iVar3 == 0) && (puVar5[3] = 0, *((char *)GEN_TOP(((int)puVar5 + 6))) == '\0')) && (iVar2 != 1)) {
        puVar5[2] = 0;
      }
      uVar4 = F_00a3eb60(puVar5,((undefined1 *)(gen_frame + 0x0)));
      if (uVar4 != 0) {
        F_00a42ea0(this GEN_EDX_ARG,puVar5,((undefined1 *)(gen_frame + 0x0)),(char)uVar4);
      }
      uVar4 = F_00a376a0(this GEN_EDX_ARG,*puVar5,(uint)*(ushort *)(puVar5 + 1));
    }
  }
  return uVar4;
}

/* ref: FUN_00a46c50 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a46c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa46c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  undefined4 uVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  uVar2 = F_00a36f30(this GEN_EDX_FWD,uVar1);
  if (*((char *)GEN_TOP((uVar2 + 0x10))) == '\0') {
    uVar2 = F_00a3fa30((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,uVar1);
    return uVar2;
  }
  this_00 = ((undefined *)GEN_TOP(F_00a36f30((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,uVar1)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    puVar3 = ((undefined4 *)GEN_TOP(F_00a37da0(this_00 GEN_EDX_ARG,(int)*((short *)GEN_TOP((param_1 + 0x10))))));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      F_0071d1a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      F_00a3bd60(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3);
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(undefined1 *)(puVar3 + 5) = 0;
      puVar3[4] = 0x75300000;
      *((undefined1 *)GEN_TOP(((int)puVar3 + 0x2f))) = 0;
      puVar3[0xc] = 0;
      *((undefined1 *)GEN_TOP(((int)puVar3 + 6))) = 0;
      puVar3[0xf] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      *(undefined2 *)(puVar3 + 10) = 0;
      *((undefined4 *)GEN_TOP(((int)puVar3 + 0x2a))) = 0;
      *((undefined1 *)GEN_TOP(((int)puVar3 + 0x2e))) = 0;
      puVar3[0xd] = 0;
      *(undefined1 *)(puVar3 + 0xe) = 0;
      uVar2 = F_00a3eb60(puVar3,((undefined1 *)(gen_frame + 0x0)));
      if (uVar2 != 0) {
        F_00a42ea0(this GEN_EDX_ARG,puVar3,((undefined1 *)(gen_frame + 0x0)),(char)uVar2);
      }
      F_00a376a0(this GEN_EDX_ARG,*puVar3,(uint)*(ushort *)(puVar3 + 1));
    }
  }
  uVar2 = *((uint *)GEN_TOP((param_1 + 0xc)));
  if ((uVar2 == 1000) || (uVar2 == 11000)) {
    *((undefined4 *)GEN_TOP(((int)this + 0x2ff8))) = 0;
  }
  return uVar2;
}

/* ref: FUN_00a46d60 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a46d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa46d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined * this_00;
  undefined4 * puVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  uVar4 = F_00a36f30(this GEN_EDX_FWD,uVar1);
  if (*((char *)GEN_TOP((uVar4 + 0x10))) == '\0') {
    uVar4 = F_00a3fa30((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,uVar1);
    return uVar4;
  }
  this_00 = ((undefined *)GEN_TOP(F_00a36f30((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,uVar1)));
  uVar4 = 0;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    puVar5 = ((undefined4 *)GEN_TOP(F_00a37da0(this_00 GEN_EDX_ARG,(int)*((short *)GEN_TOP((param_1 + 0x10))))));
    uVar4 = 0;
    if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
      F_0071d1a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      F_00a3bd60(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar5);
      iVar2 = *((int *)GEN_TOP((param_1 + 0x18)));
      puVar5[2] = iVar2;
      iVar3 = *((int *)GEN_TOP((param_1 + 0x14)));
      puVar5[3] = iVar3;
      if (((iVar3 == 0) && (puVar5[3] = 0, *((char *)GEN_TOP(((int)puVar5 + 6))) == '\0')) && (iVar2 != 1)) {
        puVar5[2] = 0;
      }
      uVar4 = F_00a3eb60(puVar5,((undefined1 *)(gen_frame + 0x0)));
      if (uVar4 != 0) {
        F_00a42ea0(this GEN_EDX_ARG,puVar5,((undefined1 *)(gen_frame + 0x0)),(char)uVar4);
      }
      uVar4 = F_00a376a0(this GEN_EDX_ARG,*puVar5,(uint)*(ushort *)(puVar5 + 1));
    }
  }
  if ((*((int *)GEN_TOP((param_1 + 0xc))) == 1000) || (*((int *)GEN_TOP((param_1 + 0xc))) == 11000)) {
    *((undefined4 *)GEN_TOP(((int)this + 0x2ff8))) = 0;
  }
  return uVar4;
}

/* ref: FUN_00a46e50 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00a46e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa46e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x658, 8, 4);
  byte bVar1;
  undefined1 * puVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  int * piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  undefined4 * puVar13;
  undefined4 * puVar14;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x650)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x654));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  if (REFG(int, 0x1379694) != 0) {
    iVar8 = 0x59;
    puVar2 = ((undefined1 *)(gen_frame + 0x68));
    do {
      *(undefined4 *)(puVar2 - 8) = 0;
      *(undefined4 *)(puVar2 - 4) = 0;
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      puVar2 = puVar2 + 0x10;
      iVar8 = iVar8 - 1;
    } while (-1 < iVar8);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    piVar3 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,0x7d4)));
    (*(int * PTR32 *)(gen_frame + 0xc)) = piVar3;
    uVar4 = F_00a3aba0(piVar3 GEN_EDX_ARG);
    bVar1 = F_006e4d80();
    if (bVar1 != 0) {
      (*(uint *)(gen_frame + 0x1c)) = 0;
      uVar10 = 0;
      do {
        uVar5 = (*(uint *)(gen_frame + 0x1c)) & 0xffff;
        puVar14 = &(*(undefined4 *)(gen_frame + 0x10));
        puVar13 = &(*(undefined4 *)(gen_frame + 0x0));
        piVar3 = ((int *)(gen_frame + 0x60)) + uVar5 * 0xc;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        uVar12 = (*(uint *)(gen_frame + 0x1c));
        pvVar6 = ((undefined *)GEN_TOP(F_006b8c00()));
        bVar1 = F_006e3280(pvVar6 GEN_EDX_ARG,uVar12,piVar3,puVar13,puVar14);
        if (bVar1 == 0) {
          return 0;
        }
        piVar3 = (int *)(((undefined1 *)(gen_frame + 0x68)) + uVar5 * 0x30 - 4);
        (*(uint *)(gen_frame + 0x14)) = uVar10;
        (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3;
        (*(int *)(gen_frame + 0x8)) = 3;
        do {
          (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3;
          if ((*(*(int * PTR32 *)(gen_frame + 0xc)) == 0) || ((*(int * PTR32 *)(gen_frame + 0xc))[3] <= (int)((*(uint *)(gen_frame + 0x14)) & 0xffff))) {
LAB_00a46f9a: ;
            iVar8 = 0;
          }
          else {
            iVar8 = ((*(uint *)(gen_frame + 0x14)) & 0xffff) * 0x40 + *(*(int * PTR32 *)(gen_frame + 0xc));
            if (*((char *)GEN_TOP((iVar8 + 6))) != '\0') {
              iVar9 = (int)*((short *)GEN_TOP((iVar8 + 8)));
              piVar7 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((iVar8 + 10))))));
              if (((*piVar7 == 0) || (iVar9 < 0)) || (piVar7[3] <= iVar9)) goto LAB_00a46f9a;
              iVar8 = iVar9 * 0x40 + *piVar7;
            }
          }
          (*(undefined4 *)(gen_frame + 0x20)) = 9999;
          (*(undefined2 *)(gen_frame + 0x24)) = 0;
          (*(undefined1 *)(gen_frame + 0x26)) = 0;
          (*(undefined4 *)(gen_frame + 0x28)) = 0;
          (*(undefined4 *)(gen_frame + 0x2c)) = 0;
          (*(undefined4 *)(gen_frame + 0x38)) = 0;
          (*(undefined4 *)(gen_frame + 0x3c)) = 0;
          (*(undefined1 *)(gen_frame + 0x34)) = 0;
          (*(undefined4 *)(gen_frame + 0x30)) = 0x75300000;
          (*(undefined4 *)(gen_frame + 0x50)) = 0;
          (*(undefined4 *)(gen_frame + 0x5c)) = 0;
          (*(undefined4 *)(gen_frame + 0x40)) = 0;
          (*(undefined4 *)(gen_frame + 0x44)) = 0;
          (*(undefined2 *)(gen_frame + 0x48)) = 0;
          (*(undefined4 *)(gen_frame + 0x4a)) = 0;
          (*(undefined2 *)(gen_frame + 0x4e)) = 0;
          (*(undefined4 *)(gen_frame + 0x54)) = 0;
          (*(undefined1 *)(gen_frame + 0x58)) = 0;
          F_00a3bd60(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,iVar8);
          pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x4));
          uVar10 = piVar3[-1];
          *((uint *)GEN_TOP((iVar8 + 8))) = uVar10;
          if ((*((char *)GEN_TOP((iVar8 + 6))) == '\0') && ((uVar10 < 0x1e8481 || (0x1e8909 < uVar10)))) {
            if (uVar10 < 1000000) {
              *((byte *)GEN_TOP((iVar8 + 0x14))) = *((byte *)GEN_TOP((iVar8 + 0x14))) & 0xfe;
            }
            else {
              *((byte *)GEN_TOP((iVar8 + 0x14))) = *((byte *)GEN_TOP((iVar8 + 0x14))) | 1;
              *((uint *)GEN_TOP((iVar8 + 8))) = uVar10 - 1000000;
            }
          }
          iVar9 = *piVar3;
          *((int *)GEN_TOP((iVar8 + 0xc))) = iVar9;
          if (((iVar9 == 0) && (*((undefined4 *)GEN_TOP((iVar8 + 0xc))) = 0, *((char *)GEN_TOP((iVar8 + 6))) == '\0')) &&
             (*((int *)GEN_TOP((iVar8 + 8))) != 1)) {
            *((undefined4 *)GEN_TOP((iVar8 + 8))) = 0;
          }
          *((undefined4 *)GEN_TOP((iVar8 + 0x3c))) = (*(undefined4 *)(gen_frame + 0x0));
          uVar10 = F_00a3eb60(iVar8,&(*(undefined4 *)(gen_frame + 0x20)));
          if (uVar10 != 0) {
            F_00a42ea0(pvVar6 GEN_EDX_ARG,iVar8,&(*(undefined4 *)(gen_frame + 0x20)),(char)uVar10);
          }
          piVar3 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
          uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG);
          *((byte *)GEN_TOP((uVar10 + 0x230bf))) = *((byte *)GEN_TOP((uVar10 + 0x230bf))) | 1;
          F_006d0fd0();
          F_00701020();
          piVar3 = (*(int * PTR32 *)(gen_frame + 0x18)) + 4;
          (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3;
          uVar10 = (*(uint *)(gen_frame + 0x14)) + 1;
          (*(uint *)(gen_frame + 0x14)) = uVar10;
          uVar12 = (*(uint *)(gen_frame + 0x14));
          iVar8 = (*(int *)(gen_frame + 0x8)) - 1;
          (*(int *)(gen_frame + 0x8)) = iVar8;
        } while (iVar8 != 0);
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) + 1;
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = (ushort)uVar10;
        bVar11 = (ushort)(*(uint *)(gen_frame + 0x14)) < 0x5a;
        uVar10 = uVar10 & 0xffff;
        (*(uint *)(gen_frame + 0x14)) = uVar12;
      } while (bVar11);
      puVar13 = &(*(undefined4 *)(gen_frame + 0x10));
      puVar14 = &(*(undefined4 *)(gen_frame + 0x600));
      (*(undefined4 *)(gen_frame + 0x600)) = 0;
      (*(int *)(gen_frame + 0x604)) = 0;
      (*(undefined1 *)(gen_frame + 0x608)) = 0;
      (*(undefined4 *)(gen_frame + 0x60c)) = 0;
      (*(undefined4 *)(gen_frame + 0x610)) = 0;
      (*(undefined4 *)(gen_frame + 0x614)) = 0;
      (*(undefined1 *)(gen_frame + 0x618)) = 0;
      (*(undefined4 *)(gen_frame + 0x61c)) = 0;
      (*(undefined4 *)(gen_frame + 0x620)) = 0;
      (*(undefined4 *)(gen_frame + 0x624)) = 0;
      (*(undefined1 *)(gen_frame + 0x628)) = 0;
      (*(undefined4 *)(gen_frame + 0x62c)) = 0;
      (*(undefined4 *)(gen_frame + 0x630)) = 0;
      (*(undefined4 *)(gen_frame + 0x634)) = 0;
      (*(undefined1 *)(gen_frame + 0x638)) = 0;
      (*(undefined4 *)(gen_frame + 0x63c)) = 0;
      (*(undefined4 *)(gen_frame + 0x640)) = 0;
      (*(undefined4 *)(gen_frame + 0x644)) = 0;
      (*(undefined1 *)(gen_frame + 0x648)) = 0;
      (*(undefined4 *)(gen_frame + 0x64c)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      pvVar6 = ((undefined *)GEN_TOP(F_006b8c00()));
      bVar1 = F_006d70a0(pvVar6 GEN_EDX_ARG,puVar14,puVar13);
      if (bVar1 == 0) {
        return 0;
      }
      piVar3 = &(*(int *)(gen_frame + 0x604));
      (*(uint *)(gen_frame + 0x1c)) = 0;
      (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3;
      do {
        uVar10 = (*(uint *)(gen_frame + 0x1c)) + 0x5a & 0xffff;
        (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3;
        if ((*(*(int * PTR32 *)(gen_frame + 0xc)) == 0) || ((*(int * PTR32 *)(gen_frame + 0xc))[3] <= (int)uVar10)) {
LAB_00a471df: ;
          iVar8 = 0;
        }
        else {
          iVar8 = uVar10 * 0x40 + *(*(int * PTR32 *)(gen_frame + 0xc));
          if (*((char *)GEN_TOP((iVar8 + 6))) != '\0') {
            iVar9 = (int)*((short *)GEN_TOP((iVar8 + 8)));
            piVar7 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((iVar8 + 10))))));
            if (((*piVar7 == 0) || (iVar9 < 0)) || (piVar7[3] <= iVar9)) goto LAB_00a471df;
            iVar8 = iVar9 * 0x40 + *piVar7;
          }
        }
        (*(undefined2 *)(gen_frame + 0x24)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 9999;
        (*(undefined1 *)(gen_frame + 0x26)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        (*(undefined4 *)(gen_frame + 0x38)) = 0;
        (*(undefined4 *)(gen_frame + 0x3c)) = 0;
        (*(undefined1 *)(gen_frame + 0x34)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0x75300000;
        (*(undefined4 *)(gen_frame + 0x50)) = 0;
        (*(undefined4 *)(gen_frame + 0x5c)) = 0;
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(undefined4 *)(gen_frame + 0x44)) = 0;
        (*(undefined2 *)(gen_frame + 0x48)) = 0;
        (*(undefined4 *)(gen_frame + 0x4a)) = 0;
        (*(undefined2 *)(gen_frame + 0x4e)) = 0;
        (*(undefined4 *)(gen_frame + 0x54)) = 0;
        (*(undefined1 *)(gen_frame + 0x58)) = 0;
        F_00a3bd60(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,iVar8);
        pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x4));
        uVar10 = piVar3[-1];
        *((uint *)GEN_TOP((iVar8 + 8))) = uVar10;
        if ((*((char *)GEN_TOP((iVar8 + 6))) == '\0') && ((uVar10 < 0x1e8481 || (0x1e8909 < uVar10)))) {
          if (uVar10 < 1000000) {
            *((byte *)GEN_TOP((iVar8 + 0x14))) = *((byte *)GEN_TOP((iVar8 + 0x14))) & 0xfe;
          }
          else {
            *((byte *)GEN_TOP((iVar8 + 0x14))) = *((byte *)GEN_TOP((iVar8 + 0x14))) | 1;
            *((uint *)GEN_TOP((iVar8 + 8))) = uVar10 - 1000000;
          }
        }
        iVar9 = *piVar3;
        *((int *)GEN_TOP((iVar8 + 0xc))) = iVar9;
        if (((iVar9 == 0) && (*((undefined4 *)GEN_TOP((iVar8 + 0xc))) = 0, *((char *)GEN_TOP((iVar8 + 6))) == '\0')) &&
           (*((int *)GEN_TOP((iVar8 + 8))) != 1)) {
          *((undefined4 *)GEN_TOP((iVar8 + 8))) = 0;
        }
        *((int *)GEN_TOP((iVar8 + 0x3c))) = piVar3[2];
        uVar10 = F_00a3eb60(iVar8,&(*(undefined4 *)(gen_frame + 0x20)));
        if (uVar10 != 0) {
          F_00a42ea0(pvVar6 GEN_EDX_ARG,iVar8,&(*(undefined4 *)(gen_frame + 0x20)),(char)uVar10);
        }
        piVar3 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
        uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG);
        *((byte *)GEN_TOP((uVar10 + 0x230bf))) = *((byte *)GEN_TOP((uVar10 + 0x230bf))) | 1;
        F_006d0fd0();
        F_00701020();
        piVar3 = (*(int * PTR32 *)(gen_frame + 0x18)) + 4;
        (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3;
        iVar8 = (*(uint *)(gen_frame + 0x1c)) + 1;
        (*(uint *)(gen_frame + 0x1c)) = iVar8;
        if (4 < (ushort)iVar8) {
          uVar10 = F_00a3aba0((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
          if (uVar4 < uVar10) {
            F_004ea820(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8))) GEN_EDX_ARG,0x12);
          }
          return 1;
        }
      } while( true );
    }
  }
  return 0;
}

/* ref: FUN_00a47360 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a47360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa47360u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  uVar1 = *param_2;
  if ((((uVar1 != 0xdac) && (9 < uVar1 - 0xc80)) && (uVar1 != 0xce4)) && (uVar1 != 0xd48)) {
LAB_00a47441: ;
    if ((uVar1 == 1000) || (uVar1 == 11000)) {
      uVar1 = F_00a45170(this GEN_EDX_FWD,param_1,param_2,(char)param_3);
      return uVar1;
    }
    if ((*param_1 != 1000) && (*param_1 != 11000)) {
      F_0071d1a0(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
      F_0071d1a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      F_00a3bd60(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,param_1);
      F_00a3bd60(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2);
      F_00a3bd60(param_2 GEN_EDX_ARG,param_1);
      F_00a35f30(param_1 GEN_EDX_ARG);
      if ((char)param_3 != '\0') {
        uVar1 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
        F_00a38890(this GEN_EDX_ARG,*param_1,(uint)*(ushort *)(param_1 + 1),*param_2,(uint)(ushort)param_2[1],
                     uVar1);
      }
      uVar1 = F_00a3eb60(param_1,((undefined1 *)(gen_frame + 0x40)));
      if (uVar1 != 0) {
        F_00a42ea0(this GEN_EDX_ARG,param_1,((undefined1 *)(gen_frame + 0x40)),(char)uVar1);
      }
      uVar1 = F_00a3eb60(param_2,((undefined1 *)(gen_frame + 0x0)));
      if (uVar1 != 0) {
        F_00a42ea0(this GEN_EDX_ARG,param_2,((undefined1 *)(gen_frame + 0x0)),(char)uVar1);
      }
      return 0;
    }
    uVar1 = F_00a45b30(this GEN_EDX_ARG,param_1,param_2,(char)param_3);
    return uVar1;
  }
  uVar1 = F_00906df0(param_1 GEN_EDX_ARG);
  uVar1 = F_00ab24a0(uVar1);
  if (uVar1 != 0) {
    uVar1 = F_00ab25a0((uint)*((byte *)GEN_TOP((uVar1 + 0xa6))));
    iVar4 = 0;
    do {
      if (*((char *)GEN_TOP((uVar1 + 4 + iVar4))) == '\x01') {
        if ((char)iVar4 != '\x0e') {
          uVar1 = *param_2;
          uVar3 = F_00a36960((char)iVar4);
          if (uVar3 == uVar1) goto LAB_00a47441;
          piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
          uVar5 = 0x313;
          goto LAB_00a473f8;
        }
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xe);
  }
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar5 = 0x312;
LAB_00a473f8: ;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG)));
  F_0046a630(this_00 GEN_EDX_ARG,uVar5);
  return 10;
}

/* ref: FUN_00a47560 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a47560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa47560u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0xc8, 8, 4);
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  uint uVar4;
  undefined4 uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc4));
  uVar2 = *param_1;
  if ((int)uVar2 < 20000) {
LAB_00a475b0: ;
    uVar4 = *param_2;
    if ((19999 < (int)uVar4) && ((int)uVar4 < 0x55f2)) {
LAB_00a475c0: ;
      F_00a51200(0x2a,uVar2,uVar4,0,0);
      return 10;
    }
  }
  else {
    if (((int)uVar2 < 0x55f2) && ((uVar4 = *param_2, (int)uVar4 < 20000 || (0x55f1 < (int)uVar4))))
    goto LAB_00a475c0;
    if (((int)uVar2 < 20000) || (0x55f1 < (int)uVar2)) goto LAB_00a475b0;
  }
  uVar4 = *param_2;
  if ((uVar4 == 1000) || (uVar4 == 11000)) {
    uVar2 = F_00a44630(this GEN_EDX_ARG,param_1,param_2,(char)param_3);
    return uVar2;
  }
  if ((uVar2 == 1000) || (uVar2 == 11000)) {
    uVar2 = F_00a44630(this GEN_EDX_ARG,param_2,param_1,(char)param_3);
    return uVar2;
  }
  if ((uVar4 == 0xdac) || (((uVar4 - 0xc80 < 10 || (uVar4 == 0xce4)) || (uVar4 == 0xd48)))) {
    uVar2 = F_00906df0(param_1 GEN_EDX_ARG);
    uVar2 = F_00ab24a0(uVar2);
    bVar1 = F_00a36920(uVar2);
    if (bVar1 != 0xe) {
      uVar2 = F_00a36960(bVar1);
      if (uVar2 == *param_2) goto LAB_00a476ed;
LAB_00a476db: ;
      piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar5 = 0x313;
      goto LAB_00a476a0;
    }
  }
  else {
LAB_00a476ed: ;
    bVar1 = F_00a36750(*param_1);
    if (bVar1 == 0) {
LAB_00a47733: ;
      F_0071d1a0(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG);
      F_0071d1a0(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
      F_00a3bd60(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG,param_1);
      F_00a3bd60(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,param_2);
      F_0071d1a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      F_00a3bd60(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2);
      F_00a3bd60(param_2 GEN_EDX_ARG,param_1);
      F_00a3bd60(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      if ((char)param_3 != '\0') {
        uVar2 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
        uVar4 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG);
        F_00a39130(this GEN_EDX_ARG,*param_1,(uint)(ushort)param_1[1],*param_2,(uint)(ushort)param_2[1],uVar4,
                     uVar2);
      }
      uVar2 = F_00a3eb60(param_1,((undefined1 *)(gen_frame + 0x80)));
      if ((uVar2 | 1) != 0) {
        F_00a42ea0(this GEN_EDX_ARG,param_1,((undefined1 *)(gen_frame + 0x80)),(char)(uVar2 | 1));
      }
      uVar2 = F_00a3eb60(param_2,((undefined1 *)(gen_frame + 0x40)));
      if ((uVar2 | 1) != 0) {
        F_00a42ea0(this GEN_EDX_ARG,param_2,((undefined1 *)(gen_frame + 0x40)),(char)(uVar2 | 1));
      }
      return 0;
    }
    uVar2 = F_00906df0(param_2 GEN_EDX_ARG);
    uVar2 = F_00ab24a0(uVar2);
    bVar1 = F_00a36920(uVar2);
    if (bVar1 != 0xe) {
      uVar2 = F_00a36960(bVar1);
      if (uVar2 == *param_1) goto LAB_00a47733;
      goto LAB_00a476db;
    }
  }
  piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar5 = 0x312;
LAB_00a476a0: ;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG)));
  F_0046a630(this_00 GEN_EDX_ARG,uVar5);
  return 10;
}

/* ref: FUN_00a47820 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a47820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa47820u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  undefined4 uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  if ((((param_1 == ((undefined4 *)GEN_TOP(0x0))) || (param_2 == ((undefined4 *)GEN_TOP(0x0)))) ||
      ((*((char *)GEN_TOP(((int)param_1 + 6))) == '\0' && (param_1[2] == 0)))) ||
     ((*((char *)GEN_TOP(((int)param_2 + 6))) == '\0' && (param_2[2] == 0)))) {
    return 4;
  }
  uVar2 = F_0046e5e0(param_1 GEN_EDX_FWD);
  uVar3 = F_0046e5e0(param_2 GEN_EDX_ARG);
  if (uVar3 == uVar2) {
    F_0071d1a0(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
    F_0071d1a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00a3bd60(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,param_1);
    F_00a3bd60(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2);
    uVar2 = F_0046e5e0(param_2 GEN_EDX_ARG);
    uVar2 = F_00ab24a0(uVar2);
    if ((uVar2 == 0) || (uVar3 = F_00906df0(param_2 GEN_EDX_ARG), uVar3 == 0)) {
      return 6;
    }
    uVar3 = F_00a3a8a0(param_1 GEN_EDX_ARG);
    uVar4 = F_00a3a8a0(param_2 GEN_EDX_ARG);
    uVar3 = uVar3 + uVar4;
    uVar2 = *((uint *)GEN_TOP((uVar2 + 0x28)));
    uVar4 = F_00a3a8a0(param_1 GEN_EDX_ARG);
    if ((uVar4 == uVar2) || (uVar4 = F_00a3a8a0(param_2 GEN_EDX_ARG), uVar4 == uVar2)) {
      uVar2 = F_00906df0(param_1 GEN_EDX_ARG);
      if ((0x11 < uVar2 - 2) && (uVar2 = F_00906df0(param_2 GEN_EDX_ARG), 0x11 < uVar2 - 2)) {
        uVar2 = F_00a47560(this GEN_EDX_ARG,param_1,param_2,param_3);
        return uVar2;
      }
    }
    else {
      bVar1 = F_00a36750(*param_1);
      if (bVar1 != 0) {
        return 0xc;
      }
      bVar1 = F_00a36750(*param_2);
      if (bVar1 != 0) {
        return 0xc;
      }
      if (uVar3 <= uVar2) {
        F_00a35f80(param_2 GEN_EDX_ARG,uVar3);
        F_00a35f30(param_1 GEN_EDX_ARG);
        if ((char)param_3 != '\0') {
          uVar2 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          uVar3 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
          F_00a39200(this GEN_EDX_ARG,*param_1,(uint)*(ushort *)(param_1 + 1),*param_2,
                       (uint)*(ushort *)(param_2 + 1),uVar3,uVar2);
        }
LAB_00a47a10: ;
        uVar2 = F_00a3eb60(param_1,((undefined1 *)(gen_frame + 0x40)));
        if (uVar2 != 0) {
          F_00a42ea0(this GEN_EDX_ARG,param_1,((undefined1 *)(gen_frame + 0x40)),(char)uVar2);
        }
        uVar2 = F_00a3eb60(param_2,((undefined1 *)(gen_frame + 0x0)));
        if (uVar2 != 0) {
          F_00a42ea0(this GEN_EDX_ARG,param_2,((undefined1 *)(gen_frame + 0x0)),(char)uVar2);
        }
        F_00a3a720();
        return 0;
      }
      uVar4 = F_00906df0(param_1 GEN_EDX_ARG);
      if (0x11 < uVar4 - 2) {
        F_00a35f80(param_2 GEN_EDX_ARG,uVar2);
        F_00a35f80(param_1 GEN_EDX_ARG,uVar3 - uVar2);
        if ((char)param_3 != '\0') {
          uVar2 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          uVar3 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
          F_00a39200(this GEN_EDX_ARG,*param_1,(uint)*(ushort *)(param_1 + 1),*param_2,
                       (uint)*(ushort *)(param_2 + 1),uVar3,uVar2);
        }
        goto LAB_00a47a10;
      }
    }
    piVar5 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar6 = 0x4d8;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x28))))(piVar5 GEN_EDX_ARG)));
    F_0046a630(this_00 GEN_EDX_ARG,uVar6);
  }
  return 0xc;
}

/* ref: FUN_00a47b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a47b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa47b20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  for (iVar1 = param_1; iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x54)))) {
    if (*((int *)GEN_TOP((iVar1 + 8))) == 0x1b2) {
      switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((iVar1 + 0x14))))) {
      case 5: ;
        F_00a46b80(this GEN_EDX_FWD,iVar1 + 0x10);
        break;
      case 6: ;
        F_00a46d60(this GEN_EDX_ARG,iVar1 + 0x10);
        break;
      case 7: ;
        F_00a46c50(this GEN_EDX_ARG,iVar1 + 0x10);
        break;
      case 0x14: ;
        F_00a41af0(this GEN_EDX_ARG,iVar1 + 0x10);
        break;
      case 0x28: ;
        F_00a3ced0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 0x1c))),(uint)*((ushort *)GEN_TOP((iVar1 + 0x20))),0);
        F_00a376a0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 0x1c))),(uint)*((ushort *)GEN_TOP((iVar1 + 0x20))));
      }
    }
  }
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG);
  *((byte *)GEN_TOP((uVar3 + 0x230bf))) = *((byte *)GEN_TOP((uVar3 + 0x230bf))) | 1;
  F_006d0fd0();
  uVar3 = F_00701020();
  return uVar3;
}

/* ref: FUN_00a47c20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a47c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa47c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  undefined * pvVar5;
  undefined4 * puVar6;
  int iVar7;
  undefined * pvVar8;
  ushort uVar9;
  undefined4 * puVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 * local_c;
  int local_8;
  
  if ((*((char *)GEN_TOP(((int)this + 0x35f))) != '\0') && (bVar1 = F_00a46e50(this GEN_EDX_FWD), bVar1 != 0)) {
    *((undefined1 *)GEN_TOP(((int)this + 0x35f))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x334))) < 2) goto LAB_00a47d07;
  uVar2 = F_00a64490(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(int)this + 0x33c,0);
  pvVar8 = REFG(void * PTR32, 0x1379694);
  if (REFG(void * PTR32, 0x1379694) == ((undefined *)GEN_TOP(0x0))) {
LAB_00a47cec: ;
    if (uVar2 != 0) goto LAB_00a47d07;
  }
  else if (uVar2 != 0) {
    if ((*((char *)GEN_TOP(((int)this + 0x35d))) != '\0') && (uVar3 = F_00a9fbf0(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG), (char)uVar3 != '\0')) {
      piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar12 = 0x2c;
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
      F_0046a630(pvVar5 GEN_EDX_ARG,uVar12);
      *((undefined1 *)GEN_TOP(((int)this + 0x35d))) = 0;
    }
    fVar11 = F_00a601f0(pvVar8 GEN_EDX_ARG,uVar2);
    if (((*(double *)&REFG(undefined, 0x10df038) < (double)fVar11) || (bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x15), bVar1 == 0)) && (*((char *)GEN_TOP(((int)this + 0x35e))) == '\0')) {
      *((undefined1 *)GEN_TOP(((int)this + 0x35e))) = 1;
      F_00a38f30(this GEN_EDX_ARG);
    }
    goto LAB_00a47cec;
  }
  if (*((char *)GEN_TOP(((int)this + 0x35e))) == '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 0x35e))) = 1;
    F_00a38f30(this GEN_EDX_ARG);
  }
LAB_00a47d07: ;
  if (*((char *)GEN_TOP(((int)this + 0x23e1))) != '\0') {
    uVar2 = F_00ab24a0(*((undefined4 *)GEN_TOP(((int)this + 0x23e8))));
    if ((uVar2 != 0) && (uVar3 = F_00a36f30(this GEN_EDX_ARG,1000), *((char *)GEN_TOP((uVar3 + 0x10))) != '\0')) {
      F_00a43260((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x23e4))),(int)this + 0x23e8,uVar2);
      *((undefined4 *)GEN_TOP(((int)this + 0x23e4))) = 0;
      *((undefined1 *)GEN_TOP(((int)this + 0x23e1))) = 0;
    }
  }
  local_c = ((undefined4 *)GEN_TOP(((int)this + 0x2498)));
  local_8 = 0;
  do {
    uVar9 = *((short *)GEN_TOP(((int)this + 0x28))) - 1000;
    uVar2 = uVar9 + 1000;
    if (uVar9 == 10000) {
      uVar2 = 11000;
LAB_00a47dae: ;
      piVar4 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,uVar2)));
      if (piVar4 == ((int *)GEN_TOP(0x0))) goto LAB_00a47eb2;
      iVar7 = (int)(short)local_8;
      if (((*piVar4 == 0) || (iVar7 < 0)) || (piVar4[3] <= iVar7)) goto LAB_00a47eb2;
      pvVar8 = ((undefined *)GEN_TOP((iVar7 * 0x40 + *piVar4)));
      if (*((char *)GEN_TOP(((int)pvVar8 + 6))) != '\0') {
        iVar7 = (int)*((short *)GEN_TOP(((int)pvVar8 + 8)));
        piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar8 + 10))))));
        if (((*piVar4 == 0) || (iVar7 < 0)) || (piVar4[3] <= iVar7)) {
          pvVar8 = ((undefined *)GEN_TOP(0x0));
        }
        else {
          pvVar8 = ((undefined *)GEN_TOP((iVar7 * 0x40 + *piVar4)));
        }
      }
      if (pvVar8 == ((undefined *)GEN_TOP(0x0))) goto LAB_00a47eb2;
      if (*((char *)GEN_TOP(((int)pvVar8 + 6))) == '\0') {
        pvVar5 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar8 + 8)));
        if ((*((byte *)GEN_TOP(((int)pvVar8 + 0x14))) & 1) != 0) {
          pvVar5 = ((undefined *)GEN_TOP(((int)pvVar5 + 1000000)));
        }
      }
      else {
        piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar8 + 10))))));
        if (piVar4 == ((int *)GEN_TOP(0x0))) {
          pvVar5 = ((undefined *)GEN_TOP(F_0046e5e0(((undefined *)GEN_TOP(0x0)) GEN_EDX_ARG)));
        }
        else {
          iVar7 = (int)*((short *)GEN_TOP(((int)pvVar8 + 8)));
          if (((*piVar4 == 0) || (iVar7 < 0)) || (piVar4[3] <= iVar7)) {
LAB_00a47e97: ;
            pvVar5 = pvVar8;
          }
          else {
            pvVar5 = ((undefined *)GEN_TOP((iVar7 * 0x40 + *piVar4)));
            if (*((char *)GEN_TOP(((int)pvVar5 + 6))) != '\0') {
              iVar7 = (int)*((short *)GEN_TOP(((int)pvVar5 + 8)));
              piVar4 = ((int *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)pvVar5 + 10))))));
              if (((*piVar4 == 0) || (iVar7 < 0)) || (piVar4[3] <= iVar7)) {
                pvVar5 = ((undefined *)GEN_TOP(0x0));
              }
              else {
                pvVar5 = ((undefined *)GEN_TOP((iVar7 * 0x40 + *piVar4)));
              }
            }
            if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto LAB_00a47e97;
          }
          pvVar5 = ((undefined *)GEN_TOP(F_0046e5e0(pvVar5 GEN_EDX_ARG)));
        }
      }
      if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto LAB_00a47eb2;
      uVar2 = 1 << GEN_SHC((byte)local_8, (unsigned int)(uintptr_t)local_8);
      if ((*((uint *)GEN_TOP(((int)this + 0x2ff8))) & uVar2) == 0) {
        puVar6 = ((undefined4 *)GEN_TOP(F_00ab24a0(pvVar5)));
        pvVar5 = ((undefined *)GEN_TOP(0x0));
        if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
          puVar10 = local_c;
          for (iVar7 = 0x34; iVar7 != 0; iVar7 = iVar7 - 1) {
            *puVar10 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
          }
          *((uint *)GEN_TOP(((int)this + 0x2ff8))) = *((uint *)GEN_TOP(((int)this + 0x2ff8))) | uVar2;
          pvVar5 = this;
        }
      }
    }
    else {
      if ((999 < uVar2) && ((uVar2 < 0x3e9 || (uVar2 == 11000)))) goto LAB_00a47dae;
LAB_00a47eb2: ;
      pvVar5 = ((undefined *)GEN_TOP(~(1 << GEN_SHC((byte)local_8, (unsigned int)(uintptr_t)local_8))));
      *((uint *)GEN_TOP(((int)this + 0x2ff8))) = *((uint *)GEN_TOP(((int)this + 0x2ff8))) & (uint)pvVar5;
    }
    local_c = local_c + 0x34;
    local_8 = local_8 + 1;
    if (0xd < local_8) {
      if ((*((char *)GEN_TOP(((int)this + 0x311e))) != '\0') && (pvVar5 = ((undefined *)GEN_TOP(F_00ab1160(((float *)GEN_TOP(((int)this + 0x3120))),1))), *((float *)GEN_TOP(((int)this + 0x3120))) <= 0.0)) {
        *((undefined1 *)GEN_TOP(((int)this + 0x311e))) = 0;
      }
      if ((*((char *)GEN_TOP(((int)this + 0x3124))) != '\0') && (pvVar5 = ((undefined *)GEN_TOP(F_00ab1160(((float *)GEN_TOP(((int)this + 0x3128))),1))), *((float *)GEN_TOP(((int)this + 0x3128))) <= 0.0)) {
        *((undefined1 *)GEN_TOP(((int)this + 0x3124))) = 0;
      }
      return (uint)pvVar5;
    }
  } while( true );
}

/* ref: FUN_00a47f70 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a47f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xa47f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_GS(0x74, 12, 4);
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined * pvVar4;
  undefined * pvVar5;
  int * this_00;
  int iVar6;
  int * piVar7;
  uint uVar8;
  uint uVar9;
  undefined4 * this_01;
  undefined * pvVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70));
  (*(uint *)(gen_frame + 0x8)) = param_2 & 0xffff;
  (*(int *)(gen_frame + 0x18)) = param_1;
  (*(int *)(gen_frame + 0x1c)) = param_3;
  (*(uint *)(gen_frame + 0x10)) = param_4 & 0xffff;
  (*(uint *)(gen_frame + 0x14)) = 0;
  pvVar4 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,param_1)));
  pvVar5 = ((undefined *)GEN_TOP(F_00a36f30((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,param_3)));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = pvVar5;
  if ((pvVar4 == ((undefined *)GEN_TOP(0x0))) || (pvVar5 == ((undefined *)GEN_TOP(0x0)))) {
    return 3;
  }
  (*(int *)(gen_frame + 0x0)) = (int)(short)(*(uint *)(gen_frame + 0x8));
  this_00 = ((int *)GEN_TOP(F_00a37da0(pvVar4 GEN_EDX_ARG,(int)(short)(*(uint *)(gen_frame + 0x8)))));
  iVar6 = (int)(short)(*(uint *)(gen_frame + 0x10));
  piVar7 = ((int *)GEN_TOP(F_00a37da0((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,iVar6)));
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar7;
  if (this_00 == ((int *)GEN_TOP(0x0))) {
    return 4;
  }
  if ((*((char *)GEN_TOP(((int)this_00 + 6))) == '\0') && (this_00[2] == 0)) {
    return 4;
  }
  uVar8 = F_0046e5e0(this_00 GEN_EDX_ARG);
  iVar12 = (*(int *)(gen_frame + 0x1c));
  if ((((uVar8 - 2 < 0x12) && ((*(int *)(gen_frame + 0x1c)) != 0x2ee2)) && ((*(int *)(gen_frame + 0x1c)) != 0x7d5)) && ((*(int *)(gen_frame + 0x1c)) != 0x7d2)) {
    bVar1 = F_00a366f0((*(int *)(gen_frame + 0x1c)));
    if (bVar1 == 0) {
      if (iVar12 - 20000U < 0x7d2) {
        uVar13 = 0x55f1;
      }
      else {
        uVar13 = 0x7d1;
      }
    }
    else {
      uVar13 = 0x2ee1;
    }
    pvVar4 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,uVar13)));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = pvVar4;
    if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
      return 3;
    }
    uVar8 = F_0046e5e0(this_00 GEN_EDX_ARG);
    piVar7 = ((int *)GEN_TOP(F_00a37da0((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar8 - 2)));
    (*(int * PTR32 *)(gen_frame + 0xc)) = piVar7;
  }
  if (piVar7 == ((int *)GEN_TOP(0x0))) {
    return 4;
  }
  if ((char)param_5 != '\0') {
    if (*((char *)GEN_TOP(((int)this + 0x3088))) != '\0') {
      piVar7 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar13 = 0x745;
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x28))))(piVar7 GEN_EDX_ARG)));
      F_0046a630(pvVar4 GEN_EDX_ARG,uVar13);
      return 6;
    }
    iVar12 = *this_00;
    if ((((19999 < iVar12) && (iVar12 < 0x55f2)) || ((19999 < *piVar7 && (*piVar7 < 0x55f2)))) && ((*((char *)GEN_TOP(((int)this + 0x3086))) == '\0' || (*((char *)GEN_TOP(((int)this + 0x3087))) == '\0')))) {
      F_00a51200(0x29,iVar12,*piVar7,0,0);
      *((undefined4 *)GEN_TOP(((int)this + 0x308c))) = 1;
      F_00a3bd60(((undefined *)GEN_TOP(((int)this + 0x3000))) GEN_EDX_ARG,this_00);
      *((int *)GEN_TOP(((int)this + 0x3000))) = *this_00;
      *((short *)GEN_TOP(((int)this + 0x3004))) = (short)this_00[1];
      F_00a3bd60(((undefined *)GEN_TOP(((int)this + 0x3040))) GEN_EDX_ARG,piVar7);
      *((int *)GEN_TOP(((int)this + 0x3040))) = *piVar7;
      *((short *)GEN_TOP(((int)this + 0x3044))) = (short)piVar7[1];
      *((undefined4 *)GEN_TOP(((int)this + 0x3080))) = 0;
      if ((*this_00 < 20000) || (0x55f1 < *this_00)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      *((undefined1 *)GEN_TOP(((int)this + 0x3084))) = uVar2;
      if ((*piVar7 < 20000) || (0x55f1 < *piVar7)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      *((undefined1 *)GEN_TOP(((int)this + 0x3085))) = uVar2;
      if ((*this_00 < 20000) || (0x55f1 < *this_00)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      *((undefined1 *)GEN_TOP(((int)this + 0x3086))) = uVar2;
      if ((*piVar7 < 20000) || (0x55f1 < *piVar7)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      *((undefined1 *)GEN_TOP(((int)this + 0x3087))) = uVar2;
      *((undefined1 *)GEN_TOP(((int)this + 0x3088))) = 1;
      if ((((19999 < *this_00) && (*this_00 < 0x55f2)) && (19999 < *piVar7)) && (*piVar7 < 0x55f2)) {
        F_00a47f70(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x8)),(*(int *)(gen_frame + 0x1c)),(*(uint *)(gen_frame + 0x10)),0);
      }
      return 6;
    }
  }
  if ((((*(int *)(gen_frame + 0x18)) == 0x7d2) && ((*(int *)(gen_frame + 0x1c)) == 0x7d2)) && ((uVar8 = F_00a37c50(this_00 GEN_EDX_ARG), uVar8 != 0 && (uVar8 = F_00a37c50(piVar7 GEN_EDX_ARG), uVar8 != 0)))) {
    uVar8 = F_00a3d1c0(this GEN_EDX_ARG,0x7d2,(*(uint *)(gen_frame + 0x8)),0x7d2,(*(uint *)(gen_frame + 0x10)),1);
    return uVar8;
  }
  if ((this_00 == piVar7) && (uVar8 = F_00a37c50(this_00 GEN_EDX_ARG), uVar8 == 0)) {
    return 10;
  }
  iVar12 = (*(int *)(gen_frame + 0x18));
  bVar1 = F_00a36720((*(int *)(gen_frame + 0x18)));
  (*(byte *)(gen_frame + 0x20)) = bVar1;
  if ((bVar1 != 0) || (bVar3 = F_00a36720((*(int *)(gen_frame + 0x1c))), bVar3 != 0)) {
    if (3 < *((int *)GEN_TOP(((int)this + 0x334)))) {
      return 0x13;
    }
    bVar3 = F_00a366d0(iVar12);
    if ((bVar3 != 0) && (uVar8 = F_00a3a750((*(int *)(gen_frame + 0x18)) - 1000,(*(int *)(gen_frame + 0x0))), bVar1 = (*(byte *)(gen_frame + 0x20)), uVar8 != 0)) {
      F_00a7d290(uVar8,0,0,0,0,REFG(float, 0x10916ec));
      return 0xf;
    }
    iVar12 = (*(int *)(gen_frame + 0x1c));
    if (bVar1 == 0) {
      bVar1 = F_00a36720((*(int *)(gen_frame + 0x1c)));
      if (bVar1 == 0) goto LAB_00a48a83;
      if (((*((int *)GEN_TOP(((int)this + 0x334))) < 3) && (iVar12 != 0x7d2)) && (iVar12 != 0x7d7)) {
        uVar8 = F_00b9f960(&REFG(undefined, 0x14b0f2c) GEN_EDX_ARG);
        bVar1 = (byte)(*(uint *)(gen_frame + 0x10));
        (*(int *)(gen_frame + 0x0)) = *((int *)GEN_TOP((uVar8 + 8 + iVar6 * 0x74)));
        F_0071d3c0(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
        bVar3 = F_00a3bef0(this_00 GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0x20)) = bVar3;
        F_00a3bd60(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG,this_00);
        (*(byte *)(gen_frame + 0x64)) = (*(byte *)(gen_frame + 0x20));
        (*(undefined1 *)(gen_frame + 0x65)) = 0;
        (*(undefined4 *)(gen_frame + 0x68)) = 0;
        bVar3 = F_00a3cac0(this_00,(*(uint *)(gen_frame + 0x10)));
        if (bVar3 == 0) {
          bVar1 = F_00b9fb30(&REFG(undefined, 0x14b0f2c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x24)),&(*(int *)(gen_frame + 0x0)));
        }
        if (bVar1 == 5) {
          return 10;
        }
        (*(uint *)(gen_frame + 0x10)) = (uint)bVar1;
        this_01 = ((undefined4 *)GEN_TOP(F_00a363c0((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,(int)(short)(ushort)bVar1)));
        uVar8 = F_0071d3a0(this_01 GEN_EDX_ARG);
        if (((char)uVar8 == '\0') && (uVar8 = F_00a3ced0(this GEN_EDX_ARG,*this_01,(uint)*(ushort *)(this_01 + 1),1), uVar8 != 0)) {
          return uVar8;
        }
        uVar8 = F_00a3cd20(this GEN_EDX_ARG,this_00,(*(int *)(gen_frame + 0x1c)),(*(uint *)(gen_frame + 0x10)),1);
        (*(uint *)(gen_frame + 0x14)) = uVar8;
        F_00a35f80(this_01 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)));
        if (uVar8 != 0) {
          return uVar8;
        }
        goto LAB_00a48a83;
      }
      uVar8 = F_0071d3a0(piVar7 GEN_EDX_ARG);
      if ((char)uVar8 == '\0') {
        uVar8 = F_00a3f670(this GEN_EDX_ARG,this_00,(*(int *)(gen_frame + 0x1c)),(*(uint *)(gen_frame + 0x10)),1);
        (*(uint *)(gen_frame + 0x14)) = uVar8;
        if (uVar8 != 0) {
          return uVar8;
        }
      }
      else {
        uVar8 = F_00a3cd20(this GEN_EDX_ARG,this_00,(*(int *)(gen_frame + 0x1c)),(*(uint *)(gen_frame + 0x10)),1);
        (*(uint *)(gen_frame + 0x14)) = uVar8;
        if (uVar8 != 0) {
          return uVar8;
        }
      }
      uVar8 = F_00a3a8a0(this_00 GEN_EDX_ARG);
      iVar12 = (*(int *)(gen_frame + 0x1c));
      if (uVar8 < 2) goto LAB_00a48a83;
      piVar7 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      if (iVar12 == 0x7d2) {
        uVar13 = 0x34;
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x48))))(piVar7 GEN_EDX_ARG);
        pvVar5 = ((undefined *)GEN_TOP(F_00763050(uVar8 GEN_EDX_ARG,uVar13)));
        uVar13 = 6;
        iVar12 = iVar6;
        pvVar4 = pvVar5;
        pvVar10 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d2)));
        pvVar10 = ((undefined *)GEN_TOP(F_00a37da0(pvVar10 GEN_EDX_ARG,iVar12)));
        uVar8 = F_00a3a8a0(pvVar10 GEN_EDX_ARG);
        pvVar10 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d2)));
        pvVar10 = ((undefined *)GEN_TOP(F_00a37da0(pvVar10 GEN_EDX_ARG,iVar6)));
        uVar9 = F_00a3a8a0(pvVar10 GEN_EDX_ARG);
        F_0087b4f0(pvVar5 GEN_EDX_ARG,1,uVar9,uVar8,pvVar4,uVar13);
        goto LAB_00a48a83;
      }
      uVar13 = 0x1b;
      uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x48))))(piVar7 GEN_EDX_ARG);
      pvVar4 = ((undefined *)GEN_TOP(F_00763050(uVar8 GEN_EDX_ARG,uVar13)));
      pvVar5 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,iVar12)));
      pvVar5 = ((undefined *)GEN_TOP(F_00a363c0(pvVar5 GEN_EDX_ARG,iVar6)));
LAB_00a48911: ;
      iVar6 = (int)this + 0x216c;
      uVar13 = 0;
      *((undefined * PTR32 *)GEN_TOP(((int)this + 0x2170))) = pvVar5;
      pvVar5 = ((undefined *)GEN_TOP(F_00a3a860(pvVar5 GEN_EDX_ARG)));
      uVar8 = F_00a3a8a0(pvVar5 GEN_EDX_ARG);
      pvVar5 = ((undefined *)GEN_TOP(F_00a3a860(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2170))) GEN_EDX_ARG)));
      uVar9 = F_00a3a8a0(pvVar5 GEN_EDX_ARG);
      F_008730d0(pvVar4 GEN_EDX_ARG,1,uVar9,uVar8,iVar6,uVar13);
    }
    else {
      bVar3 = F_00a36720((*(int *)(gen_frame + 0x1c)));
      if (bVar3 == 0) {
        if ((*this_00 == iVar12) && ((short)this_00[1] == (short)(*(uint *)(gen_frame + 0x10)))) {
          uVar8 = F_00a3ced0(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x8)),1);
        }
        else {
          uVar8 = F_0071d3a0(piVar7 GEN_EDX_ARG);
          if (((char)uVar8 == '\0') && (2 < *((int *)GEN_TOP(((int)this + 0x334))))) {
            uVar8 = F_00a3f670(this GEN_EDX_ARG,piVar7,(*(int *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x8)),1);
            (*(uint *)(gen_frame + 0x14)) = uVar8;
            if (uVar8 != 0) {
              return uVar8;
            }
            uVar8 = F_00a3a8a0(piVar7 GEN_EDX_ARG);
            if (uVar8 < 2) goto LAB_00a48a83;
            piVar7 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
            uVar13 = 0x1b;
            uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x48))))(piVar7 GEN_EDX_ARG);
            pvVar4 = ((undefined *)GEN_TOP(F_00763050(uVar8 GEN_EDX_ARG,uVar13)));
            iVar6 = (*(int *)(gen_frame + 0x0));
            pvVar5 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x18)))));
            pvVar5 = ((undefined *)GEN_TOP(F_00a363c0(pvVar5 GEN_EDX_ARG,iVar6)));
            goto LAB_00a48911;
          }
          uVar8 = F_00a3ced0(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x8)),1);
        }
      }
      else {
        if ((bVar1 == 0) || (bVar1 = F_00a36720((*(int *)(gen_frame + 0x1c))), bVar1 == 0)) goto LAB_00a48a83;
        uVar8 = F_0071d3a0(piVar7 GEN_EDX_ARG);
        if ((char)uVar8 == '\0') {
          uVar8 = F_00a3d1c0(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x8)),(*(int *)(gen_frame + 0x1c)),(*(uint *)(gen_frame + 0x10)),1);
        }
        else {
          if ((*((int *)GEN_TOP(((int)this + 0x334))) < 3) && ((*(int *)(gen_frame + 0x1c)) != 0x7d2)) goto LAB_00a48a83;
          uVar8 = F_00a3cff0(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x8)),(*(int *)(gen_frame + 0x1c)),(*(uint *)(gen_frame + 0x10)),1);
        }
      }
      (*(uint *)(gen_frame + 0x14)) = uVar8;
    }
    goto LAB_00a48a83;
  }
  if (iVar12 == 0x7d4) {
    return 10;
  }
  if ((*(int *)(gen_frame + 0x1c)) == 0x7d4) {
    return 10;
  }
  uVar8 = F_00a37c50(this_00 GEN_EDX_ARG);
  iVar12 = (*(int *)(gen_frame + 0x18));
  if (uVar8 != 0) {
    return 0x13;
  }
  bVar1 = F_00a366f0((*(int *)(gen_frame + 0x18)));
  (*(byte *)(gen_frame + 0x20)) = bVar1;
  if ((bVar1 == 0) && (bVar1 = F_00a366f0((*(int *)(gen_frame + 0x1c))), bVar1 == 0)) {
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x6e);
    if (bVar1 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x6e);
      return 10;
    }
  }
  else {
    if ((iVar12 == 0x2ee2) || ((*(int *)(gen_frame + 0x1c)) == 0x2ee2)) {
      bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x75);
      if (bVar1 == 0) {
        F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x75);
        return 10;
      }
      if (*((char *)GEN_TOP(((int)this + 0x23e0))) != '\0') {
        return 10;
      }
    }
    else {
      bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x74);
      if (bVar1 == 0) {
        F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x74);
        return 10;
      }
    }
    bVar1 = (*(byte *)(gen_frame + 0x20));
    if ((*(byte *)(gen_frame + 0x20)) != 0) {
      bVar3 = F_00a366f0((*(int *)(gen_frame + 0x1c)));
      if (bVar3 == 0) {
        uVar8 = F_0071d3a0(piVar7 GEN_EDX_ARG);
        if ((char)uVar8 == '\0') {
          uVar8 = F_00906df0(piVar7 GEN_EDX_ARG);
          uVar9 = F_00906df0(this_00 GEN_EDX_ARG);
          piVar7 = (*(int * PTR32 *)(gen_frame + 0xc));
          if (uVar9 != uVar8) goto LAB_00a4842b;
        }
        else {
LAB_00a4842b: ;
          uVar11 = (uint)(*(byte *)(this_00 + 5) & 1);
          uVar8 = F_00a3a8a0(this_00 GEN_EDX_ARG);
          uVar9 = F_00906df0(this_00 GEN_EDX_ARG);
          uVar8 = F_00a40d10(this GEN_EDX_ARG,uVar9,uVar8,uVar11);
          if (uVar8 == 0x1b) goto LAB_00a484a3;
        }
        uVar8 = F_0071d3a0(piVar7 GEN_EDX_ARG);
        if ((char)uVar8 == '\0') {
          uVar8 = F_00906df0(piVar7 GEN_EDX_ARG);
          uVar9 = F_00906df0(this_00 GEN_EDX_ARG);
          piVar7 = (*(int * PTR32 *)(gen_frame + 0xc));
          if (uVar9 != uVar8) {
            uVar11 = (uint)(*(byte *)((*(int * PTR32 *)(gen_frame + 0xc)) + 5) & 1);
            uVar8 = F_00a3a8a0((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
            uVar9 = F_00906df0(piVar7 GEN_EDX_ARG);
            uVar8 = F_00a40b70(this GEN_EDX_ARG,uVar9,uVar8,uVar11);
            if (uVar8 == 0x1b) goto LAB_00a484a3;
          }
        }
        goto LAB_00a485c1;
      }
      if (bVar1 != 0) goto LAB_00a485c1;
    }
    bVar1 = F_00a366f0((*(int *)(gen_frame + 0x1c)));
    if (bVar1 != 0) {
      uVar8 = F_0071d3a0(piVar7 GEN_EDX_ARG);
      if ((char)uVar8 == '\0') {
        uVar8 = F_00906df0(piVar7 GEN_EDX_ARG);
        uVar9 = F_00906df0(this_00 GEN_EDX_ARG);
        piVar7 = (*(int * PTR32 *)(gen_frame + 0xc));
        if (uVar9 != uVar8) goto LAB_00a48519;
      }
      else {
LAB_00a48519: ;
        uVar11 = (uint)(*(byte *)(this_00 + 5) & 1);
        uVar8 = F_00a3a8a0(this_00 GEN_EDX_ARG);
        uVar9 = F_00906df0(this_00 GEN_EDX_ARG);
        uVar8 = F_00a40b70(this GEN_EDX_ARG,uVar9,uVar8,uVar11);
        if (uVar8 == 0x1b) {
LAB_00a484a3: ;
          piVar7 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
          uVar13 = 0x4d9;
          pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x28))))(piVar7 GEN_EDX_ARG)));
          F_0046a630(pvVar4 GEN_EDX_ARG,uVar13);
          return 0x1b;
        }
      }
      uVar8 = F_0071d3a0(piVar7 GEN_EDX_ARG);
      if ((char)uVar8 == '\0') {
        uVar8 = F_00906df0(piVar7 GEN_EDX_ARG);
        uVar9 = F_00906df0(this_00 GEN_EDX_ARG);
        piVar7 = (*(int * PTR32 *)(gen_frame + 0xc));
        if (uVar9 != uVar8) {
          uVar11 = (uint)(*(byte *)((*(int * PTR32 *)(gen_frame + 0xc)) + 5) & 1);
          uVar8 = F_00a3a8a0((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
          uVar9 = F_00906df0(piVar7 GEN_EDX_ARG);
          uVar8 = F_00a40d10(this GEN_EDX_ARG,uVar9,uVar8,uVar11);
          if (uVar8 == 0x1b) {
            piVar7 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
            uVar13 = 0x4d9;
            pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x28))))(piVar7 GEN_EDX_ARG)));
            F_0046a630(pvVar4 GEN_EDX_ARG,uVar13);
            return 0x1b;
          }
        }
      }
    }
  }
LAB_00a485c1: ;
  uVar8 = F_0071d3a0(piVar7 GEN_EDX_ARG);
  if ((char)uVar8 == '\0') {
    uVar8 = F_00a37c50(piVar7 GEN_EDX_ARG);
    if (uVar8 != 0) {
      return 0x13;
    }
    uVar8 = F_0046e5e0(piVar7 GEN_EDX_ARG);
    uVar9 = F_0046e5e0(this_00 GEN_EDX_ARG);
    if ((uVar8 == uVar9) && (((*(byte *)((*(int * PTR32 *)(gen_frame + 0xc)) + 5) ^ *(byte *)(this_00 + 5)) & 1) == 0)) {
      uVar8 = F_00a47820(this GEN_EDX_ARG,this_00,(*(int * PTR32 *)(gen_frame + 0xc)),param_5);
    }
    else {
      uVar8 = F_00a47560(this GEN_EDX_ARG,this_00,(*(int * PTR32 *)(gen_frame + 0xc)),param_5);
    }
  }
  else {
    uVar8 = F_00a47360(this GEN_EDX_ARG,this_00,piVar7,param_5);
  }
  (*(uint *)(gen_frame + 0x14)) = uVar8;
  bVar1 = F_006d5e90((*(int *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x1c)),iVar6);
  if (bVar1 == 0) {
    F_006d5e90((*(int *)(gen_frame + 0x1c)),iVar6,(*(int *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x0)));
  }
LAB_00a48a83: ;
  if (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0))) {
    F_00aa8290(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
  }
  F_00a3a720();
  return (*(uint *)(gen_frame + 0x14));
}

/* ref: FUN_00a48ae0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a48ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa48ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * this_00;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  this_00 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,0x7d5)));
  iVar2 = this_00[3];
  uVar3 = 0;
  if (0 < iVar2) {
    uVar1 = 0;
    do {
      if ((*this_00 == 0) || (iVar2 <= (int)uVar1)) {
        iVar2 = 0;
      }
      else {
        iVar2 = uVar1 * 0x40 + *this_00;
      }
      if (*((char *)GEN_TOP((iVar2 + 6))) == '\0') {
        if (*((int *)GEN_TOP((iVar2 + 8))) != 0) {
          uVar1 = 9999;
          goto LAB_00a48b33;
        }
      }
      else {
        uVar1 = (uint)*((ushort *)GEN_TOP((iVar2 + 10)));
LAB_00a48b33: ;
        F_00a47f70(this GEN_EDX_ARG,0x7d5,uVar3,uVar1,(uint)*((ushort *)GEN_TOP((iVar2 + 8))),1);
      }
      iVar2 = this_00[3];
      uVar3 = uVar3 + 1;
      uVar1 = uVar3 & 0xffff;
    } while ((int)uVar1 < iVar2);
  }
  F_00a36310(this_00 GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00a48b60 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a48b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa48b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x58, 8, 4);
  short sVar1;
  byte bVar2;
  int iVar3;
  int * piVar4;
  undefined * pvVar5;
  int * piVar6;
  uint uVar7;
  char * pcVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int * PTR32 * ppiVar13;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x50)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x54));
  (*(int * PTR32 *)(gen_frame + 0x1c)) = param_1;
  iVar3 = 0;
  pcVar8 = ((char *)GEN_TOP(((int)this + 0x364)));
  do {
    if ((*(int *)(pcVar8 + 4) == *param_1) && (*pcVar8 == '\0')) {
      iVar3 = (int)this + iVar3 * 0x3c + 0x364;
      goto LAB_00a48b9c;
    }
    iVar3 = iVar3 + 1;
    pcVar8 = pcVar8 + 0x3c;
  } while (iVar3 < 0x80);
  iVar3 = 0;
LAB_00a48b9c: ;
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
  piVar4 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar4;
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    *piVar4 = 0;
    piVar4[1] = 0;
  }
  *piVar4 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  if (iVar3 == 0) {
    F_00a3faa0(this GEN_EDX_ARG);
    goto LAB_00a492fd;
  }
  if ((*((int *)GEN_TOP((iVar3 + 8))) == 0x19) && (*((int *)GEN_TOP((iVar3 + 0x34))) == 7)) {
    *((undefined1 *)GEN_TOP(((int)this + 0x35e))) = 0;
  }
  piVar4 = param_1;
  if (*((int *)GEN_TOP((iVar3 + 8))) == 0x1e) {
    F_00a3d7c0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 0x10))),(uint)*((ushort *)GEN_TOP((iVar3 + 0x14))));
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar12 = 0x22;
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
    pvVar5 = ((undefined *)GEN_TOP(F_00763050(uVar7 GEN_EDX_ARG,uVar12)));
    F_008e9cb0(pvVar5 GEN_EDX_ARG);
    uVar12 = 0x23;
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
    pvVar5 = ((undefined *)GEN_TOP(F_00763050(uVar7 GEN_EDX_ARG,uVar12)));
    F_008edf60(pvVar5 GEN_EDX_ARG);
    piVar4 = (*(int * PTR32 *)(gen_frame + 0x1c));
  }
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)piVar4 + 5))))) {
  case 0: ;
    iVar9 = *((int *)GEN_TOP((iVar3 + 8)));
    if (iVar9 == 7) {
      uVar7 = F_00ab24a0(*((undefined4 *)GEN_TOP((iVar3 + 0x1c))));
      if (uVar7 != 0) {
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        uVar12 = *((undefined4 *)GEN_TOP((iVar3 + 0x1c)));
        (*(undefined4 *)(gen_frame + 0x44)) = 0;
        (*(undefined4 *)(gen_frame + 0x44)) = uVar12;
        (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = &(*(undefined4 *)(gen_frame + 0x44));
        (*(undefined1 *)(gen_frame + 0x4c)) = 0;
        F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x44)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x44)) GEN_EDX_ARG);
        uVar12 = *((undefined4 *)GEN_TOP((iVar3 + 0x18)));
        (*(undefined4 *)(gen_frame + 0x38)) = 0;
        (*(undefined4 *)(gen_frame + 0x38)) = uVar12;
        (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = &(*(undefined4 *)(gen_frame + 0x38));
        (*(undefined1 *)(gen_frame + 0x40)) = 0;
        F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x38)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x38)) GEN_EDX_ARG);
        ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0x0));
        uVar12 = 0x2d0;
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
        F_0046aa70(pvVar5 GEN_EDX_ARG,uVar12,ppiVar13);
      }
    }
    else if ((iVar9 == 0x16) || (iVar9 == 0x17)) {
      iVar9 = (int)*((short *)GEN_TOP((iVar3 + 0x14)));
      pvVar5 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 0x10))))));
      pvVar5 = ((undefined *)GEN_TOP(F_00a37da0(pvVar5 GEN_EDX_ARG,iVar9)));
      if ((pvVar5 != ((undefined *)GEN_TOP(0x0))) &&
         ((uVar7 = F_00a3a8a0(pvVar5 GEN_EDX_ARG), uVar7 == *((uint *)GEN_TOP((iVar3 + 0x18))) &&
          (F_00a35f30(pvVar5 GEN_EDX_ARG), *((int *)GEN_TOP((iVar3 + 0x10))) == 0x2ee2)))) {
        sVar1 = *((short *)GEN_TOP((iVar3 + 0x14)));
        *((undefined4 *)GEN_TOP(((int)this + sVar1 * 8 + 0x2340))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + sVar1 * 8 + 0x2344))) = 0;
        piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x1c))))(piVar4 GEN_EDX_ARG);
        *((byte *)GEN_TOP((uVar7 + 0x230bf))) = *((byte *)GEN_TOP((uVar7 + 0x230bf))) | 4;
      }
    }
    else if ((iVar9 == 0xe) || (iVar9 == 0xf)) {
      F_00a3d7c0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 0x10))),(uint)*((ushort *)GEN_TOP((iVar3 + 0x14))));
      F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17,0);
    }
    else if ((((iVar9 == 0x13) || (iVar9 == 0x11)) || (iVar9 == 0x12)) || (iVar9 == 0x10)) {
      F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17,0);
    }
    break;
  case 2: ;
    if ((*((int *)GEN_TOP((iVar3 + 8))) == 0x19) && (*((int *)GEN_TOP((iVar3 + 0x34))) != 7)) {
      pvVar5 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d5)));
      F_00a36310(pvVar5 GEN_EDX_ARG);
      piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar12 = 0x1b;
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
      piVar6 = ((int *)GEN_TOP(F_00763050(uVar7 GEN_EDX_ARG,uVar12)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)this + 0x334))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x338))) = 0;
      uVar7 = F_00a64490(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(int)this + 0x33c,1);
      if (uVar7 != 0) {
        uVar11 = 0;
        uVar12 = 0x1e;
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
        F_0046ac40(pvVar5 GEN_EDX_ARG,uVar12,uVar11,uVar7);
      }
      piVar4 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d5)));
      if ((*piVar4 == 0) || (piVar4[3] < 6)) {
        iVar9 = 0;
      }
      else {
        iVar9 = *piVar4 + 0x140;
      }
      *((undefined1 *)GEN_TOP((iVar9 + 6))) = 0;
      *((undefined4 *)GEN_TOP((iVar9 + 0xc))) = 0;
      if (*((int *)GEN_TOP((iVar9 + 8))) != 1) {
        *((undefined4 *)GEN_TOP((iVar9 + 8))) = 0;
      }
      F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x15,0);
    }
  default: ;
    F_00a3faa0(this GEN_EDX_ARG);
    F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17,0);
    if (*((int *)GEN_TOP((iVar3 + 8))) == 0xe) {
      F_00a3d7c0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 0x10))),(uint)*((ushort *)GEN_TOP((iVar3 + 0x14))));
    }
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar12 = 0x21;
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
    pvVar5 = ((undefined *)GEN_TOP(F_00763050(uVar7 GEN_EDX_ARG,uVar12)));
    F_008d5350(pvVar5 GEN_EDX_ARG);
    break;
  case 8: ;
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    iVar9 = *((int *)GEN_TOP((iVar3 + 8)));
    if (((iVar9 == 0xf) || (iVar9 == 0x11)) || (iVar9 == 0x13)) {
      iVar9 = (*(int * PTR32 *)(gen_frame + 0x1c))[2];
      (*(int *)(gen_frame + 0x20)) = 0;
      (*(int *)(gen_frame + 0x20)) = iVar9;
      (*(int * PTR32 *)(gen_frame + 0x24)) = &(*(int *)(gen_frame + 0x20));
      (*(undefined1 *)(gen_frame + 0x28)) = 0;
      F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x20)));
      F_004917c0(&(*(int *)(gen_frame + 0x20)) GEN_EDX_ARG);
      uVar12 = 0x56b;
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
      F_0046a630(pvVar5 GEN_EDX_ARG,uVar12);
      ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0x0));
      uVar12 = 0x574;
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
      F_0046aa70(pvVar5 GEN_EDX_ARG,uVar12,ppiVar13);
      F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17,0);
      if (*((int *)GEN_TOP((iVar3 + 8))) == 0xf) goto LAB_00a48f80;
LAB_00a48f90: ;
      F_00a3a020();
    }
    break;
  case 0x15: ;
    F_00a47f70(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 0x10))),(uint)*((ushort *)GEN_TOP((iVar3 + 0x14))),
                 *((undefined4 *)GEN_TOP((iVar3 + 0x24))),(uint)*((ushort *)GEN_TOP((iVar3 + 0x28))),0);
    break;
  case 0x16: ;
    if (*((int *)GEN_TOP(((int)this + 0x338))) < 3) {
      pvVar5 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d5)));
      F_00a36310(pvVar5 GEN_EDX_ARG);
      piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar12 = 0x1b;
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
      piVar6 = ((int *)GEN_TOP(F_00763050(uVar7 GEN_EDX_ARG,uVar12)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)this + 0x334))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x338))) = 0;
      uVar7 = F_00a64490(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(int)this + 0x33c,1);
      if (uVar7 != 0) {
        uVar11 = 0;
        uVar12 = 0x1e;
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
        F_0046ac40(pvVar5 GEN_EDX_ARG,uVar12,uVar11,uVar7);
      }
      piVar4 = ((int *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,0x7d5)));
      if ((*piVar4 == 0) || (piVar4[3] < 6)) {
        iVar9 = 0;
      }
      else {
        iVar9 = *piVar4 + 0x140;
      }
      *((undefined1 *)GEN_TOP((iVar9 + 6))) = 0;
      *((undefined4 *)GEN_TOP((iVar9 + 0xc))) = 0;
      if (*((int *)GEN_TOP((iVar9 + 8))) != 1) {
        *((undefined4 *)GEN_TOP((iVar9 + 8))) = 0;
      }
      F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x15,0);
    }
    break;
  case 0x22: ;
  case 0x23: ;
  case 0x24: ;
  case 0x25: ;
  case 0x26: ;
    piVar6 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    iVar9 = *((byte *)GEN_TOP(((int)piVar4 + 5))) + 0x15b8;
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar6;
    uVar7 = F_00ab24a0(iVar9);
    if (uVar7 != 0) {
      (*(int *)(gen_frame + 0x2c)) = 0;
      (*(int *)(gen_frame + 0x2c)) = iVar9;
      (*(int * PTR32 *)(gen_frame + 0x30)) = &(*(int *)(gen_frame + 0x2c));
      (*(undefined1 *)(gen_frame + 0x34)) = 0;
      F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x2c)));
      F_004917c0(&(*(int *)(gen_frame + 0x2c)) GEN_EDX_ARG);
    }
    if (*((int *)GEN_TOP((iVar3 + 8))) == 0x12) {
      F_00a43920(this GEN_EDX_ARG);
    }
    else if (*((int *)GEN_TOP((iVar3 + 8))) == 0x10) {
      F_00a43cd0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 0x10))));
    }
    else if (uVar7 == 0) {
      uVar12 = 0x570;
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG)));
      F_0046a630(pvVar5 GEN_EDX_ARG,uVar12);
    }
    else {
      ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0x0));
      uVar12 = 0x56f;
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG)));
      F_0046aa70(pvVar5 GEN_EDX_ARG,uVar12,ppiVar13);
    }
    if (*((int *)GEN_TOP((iVar3 + 8))) == 0xe) {
      F_00a3d7c0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 0x10))),(uint)*((ushort *)GEN_TOP((iVar3 + 0x14))));
    }
    F_00a3a020();
    F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17,0);
    break;
  case 0x28: ;
  case 0x29: ;
    iVar9 = *((int *)GEN_TOP((iVar3 + 8)));
    if (((iVar9 == 0xe) || (iVar9 == 0x12)) || (iVar9 == 0x10)) {
      piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar12 = 0x578;
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG)));
      F_0046a630(pvVar5 GEN_EDX_ARG,uVar12);
      F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17,0);
LAB_00a48f80: ;
      F_00a3d7c0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 0x10))),(uint)*((ushort *)GEN_TOP((iVar3 + 0x14))));
      goto LAB_00a48f90;
    }
  }
  if ((*((char *)GEN_TOP((iVar3 + 0x3a))) != '\0') || (*((char *)GEN_TOP((iVar3 + 0x3b))) != '\0')) {
    if (((*((int *)GEN_TOP((iVar3 + 0x10))) == 1000) ||
        ((*((int *)GEN_TOP((iVar3 + 0x10))) == 11000 || (*((int *)GEN_TOP((iVar3 + 0x24))) == 1000)))) ||
       (*((int *)GEN_TOP((iVar3 + 0x24))) == 11000)) {
      F_00a40890(this GEN_EDX_ARG);
    }
    if ((*((char *)GEN_TOP((iVar3 + 0x3a))) != '\0') && (*((int *)GEN_TOP((iVar3 + 0x10))) != 9999)) {
      F_00a3fa30(this GEN_EDX_ARG,*((int *)GEN_TOP((iVar3 + 0x10))));
    }
    if ((*((char *)GEN_TOP((iVar3 + 0x3b))) != '\0') && (*((int *)GEN_TOP((iVar3 + 0x24))) != 9999)) {
      F_00a3fa30(this GEN_EDX_ARG,*((int *)GEN_TOP((iVar3 + 0x24))));
    }
  }
  if (*((char *)GEN_TOP((iVar3 + 0x38))) != '\0') {
    if ((*((int *)GEN_TOP((iVar3 + 0x10))) == 1000) || (*((int *)GEN_TOP((iVar3 + 0x10))) == 11000)) {
      uVar7 = F_00a36960(*((undefined1 *)GEN_TOP((iVar3 + 0x14))));
      bVar2 = F_00a36750(uVar7);
      if (bVar2 != 0) {
        F_00a3fa30(this GEN_EDX_ARG,uVar7);
      }
    }
    if (*((int *)GEN_TOP((iVar3 + 0x10))) != 9999) {
      F_00a51200(0x37,*((int *)GEN_TOP((iVar3 + 0x10))),(int)*((short *)GEN_TOP((iVar3 + 0x14))),0,0);
    }
  }
  if ((*((char *)GEN_TOP((iVar3 + 0x39))) != '\0') &&
     ((iVar9 = *((int *)GEN_TOP((iVar3 + 0x24))), *((int *)GEN_TOP((iVar3 + 0x10))) != iVar9 ||
      (*((short *)GEN_TOP((iVar3 + 0x14))) != *((short *)GEN_TOP((iVar3 + 0x28))))))) {
    if ((iVar9 == 1000) || (iVar9 == 11000)) {
      uVar7 = F_00a36960(*((undefined1 *)GEN_TOP((iVar3 + 0x28))));
      bVar2 = F_00a36750(uVar7);
      if (bVar2 != 0) {
        F_00a3fa30(this GEN_EDX_ARG,uVar7);
      }
    }
    if (*((int *)GEN_TOP((iVar3 + 0x24))) != 9999) {
      F_00a51200(0x37,*((int *)GEN_TOP((iVar3 + 0x24))),(int)*((short *)GEN_TOP((iVar3 + 0x28))),0,0);
    }
  }
  F_00a37520(this GEN_EDX_ARG,*(*(int * PTR32 *)(gen_frame + 0x1c)));
LAB_00a492fd: ;
  piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x1c))))(piVar4 GEN_EDX_ARG);
  *((byte *)GEN_TOP((uVar7 + 0x230bf))) = *((byte *)GEN_TOP((uVar7 + 0x230bf))) | 1;
  F_006d0fd0();
  F_00701020();
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar10 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar10;
}

/* ref: FUN_00a493a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a493a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xa493a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  int iVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined * pvVar7;
  undefined * this_00;
  int * piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int * local_c;
  
  if (((((param_1 == 0x7d5) || (param_1 == 0x7d2)) || (param_1 == 0x7d7)) || ((param_3 == 0x7d5 || (param_3 == 0x7d2)))) || (param_3 == 0x7d7)) {
    uVar9 = F_00a47f70(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,1);
    return uVar9;
  }
  bVar2 = false;
  bVar3 = false;
  if (((6 < param_1 - 10000U) && (2 < param_1 - 12000U)) && ((6 < param_3 - 10000U && (2 < param_3 - 12000U)))) {
    bVar4 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x6e);
    if (bVar4 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x6e);
      return 10;
    }
    goto LAB_00a494ff;
  }
  if ((param_1 == 0x2ee2) || (param_3 == 0x2ee2)) {
    bVar4 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x75);
    if (bVar4 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x75);
      return 10;
    }
    if (*((char *)GEN_TOP(((int)this + 0x23e0))) != '\0') {
      return 10;
    }
  }
  else {
    bVar4 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x74);
    if (bVar4 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x74);
      return 10;
    }
  }
  bVar4 = F_00a366f0(param_1);
  if (bVar4 != 0) {
    bVar5 = F_00a366f0(param_3);
    if (bVar5 == 0) {
      bVar2 = true;
      goto LAB_00a494ff;
    }
    if (bVar4 != 0) goto LAB_00a494ff;
  }
  bVar4 = F_00a366f0(param_3);
  if (bVar4 != 0) {
    bVar3 = true;
  }
LAB_00a494ff: ;
  pvVar7 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,param_1)));
  this_00 = ((undefined *)GEN_TOP(F_00a36f30((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG,param_3)));
  if ((pvVar7 == ((undefined *)GEN_TOP(0x0))) || (this_00 == ((undefined *)GEN_TOP(0x0)))) {
    return 3;
  }
  piVar8 = ((int *)GEN_TOP(F_00a37da0(pvVar7 GEN_EDX_ARG,(int)(short)param_2)));
  local_c = ((int *)GEN_TOP(F_00a37da0(this_00 GEN_EDX_ARG,(int)(short)param_4)));
  uVar9 = F_0046e5e0(piVar8 GEN_EDX_ARG);
  if ((uVar9 - 2 < 0x12) && (param_3 != 0x2ee2)) {
    bVar4 = F_00a366f0(param_3);
    if (bVar4 == 0) {
      if (param_3 - 20000U < 0x7d2) {
        uVar12 = 0x55f1;
      }
      else {
        uVar12 = 0x7d1;
      }
    }
    else {
      uVar12 = 0x2ee1;
    }
    pvVar7 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,uVar12)));
    if (pvVar7 == ((undefined *)GEN_TOP(0x0))) {
      return 3;
    }
    uVar9 = F_0046e5e0(piVar8 GEN_EDX_ARG);
    local_c = ((int *)GEN_TOP(F_00a37da0(pvVar7 GEN_EDX_ARG,uVar9 - 2)));
  }
  if (((piVar8 == ((int *)GEN_TOP(0x0))) || (local_c == ((int *)GEN_TOP(0x0)))) || (uVar9 = F_0071d3a0(piVar8 GEN_EDX_ARG), (char)uVar9 != '\0')) {
    return 4;
  }
  if (*((char *)GEN_TOP(((int)this + 0x3088))) != '\0') {
    piVar8 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar12 = 0x745;
    pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x28))))(piVar8 GEN_EDX_ARG)));
    F_0046a630(pvVar7 GEN_EDX_ARG,uVar12);
    return 6;
  }
  iVar1 = *piVar8;
  if ((((19999 < iVar1) && (iVar1 < 0x55f2)) || ((19999 < *local_c && (*local_c < 0x55f2)))) && ((*((char *)GEN_TOP(((int)this + 0x3086))) == '\0' || (*((char *)GEN_TOP(((int)this + 0x3087))) == '\0')))) {
    F_00a51200(0x29,iVar1,*local_c,0,0);
    *((undefined4 *)GEN_TOP(((int)this + 0x308c))) = 2;
    F_00a3bd60(((undefined *)GEN_TOP(((int)this + 0x3000))) GEN_EDX_ARG,piVar8);
    *((int *)GEN_TOP(((int)this + 0x3000))) = *piVar8;
    *((short *)GEN_TOP(((int)this + 0x3004))) = (short)piVar8[1];
    F_00a3bd60(((undefined *)GEN_TOP(((int)this + 0x3040))) GEN_EDX_ARG,local_c);
    *((int *)GEN_TOP(((int)this + 0x3040))) = *local_c;
    *((short *)GEN_TOP(((int)this + 0x3044))) = (short)local_c[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x3080))) = param_5;
    if ((*piVar8 < 20000) || (0x55f1 < *piVar8)) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x3084))) = uVar6;
    if ((*local_c < 20000) || (0x55f1 < *local_c)) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x3085))) = uVar6;
    if ((*piVar8 < 20000) || (0x55f1 < *piVar8)) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x3086))) = uVar6;
    if ((*local_c < 20000) || (0x55f1 < *local_c)) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x3087))) = uVar6;
    *((undefined1 *)GEN_TOP(((int)this + 0x3088))) = 1;
    return 6;
  }
  if (bVar2) {
    uVar11 = (uint)(*(byte *)(piVar8 + 5) & 1);
    uVar9 = F_00a3a8a0(piVar8 GEN_EDX_ARG);
    uVar10 = F_00906df0(piVar8 GEN_EDX_ARG);
    uVar9 = F_00a40d10(this GEN_EDX_ARG,uVar10,uVar9,uVar11);
    if (uVar9 == 0x1b) {
      piVar8 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar12 = 0x4d9;
      pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x28))))(piVar8 GEN_EDX_ARG)));
      F_0046a630(pvVar7 GEN_EDX_ARG,uVar12);
      return 0x1b;
    }
  }
  else if (bVar3) {
    uVar11 = (uint)(*(byte *)(piVar8 + 5) & 1);
    uVar9 = F_00a3a8a0(piVar8 GEN_EDX_ARG);
    uVar10 = F_00906df0(piVar8 GEN_EDX_ARG);
    uVar9 = F_00a40b70(this GEN_EDX_ARG,uVar10,uVar9,uVar11);
    if (uVar9 == 0x1b) {
      piVar8 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar12 = 0x4d9;
      pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x28))))(piVar8 GEN_EDX_ARG)));
      F_0046a630(pvVar7 GEN_EDX_ARG,uVar12);
      return 0x1b;
    }
  }
  if ((param_1 != 0x7d4) && (param_3 != 0x7d4)) {
    uVar9 = F_00a37c50(piVar8 GEN_EDX_ARG);
    if (uVar9 != 0) {
      return 0x13;
    }
    uVar9 = F_0071d3a0(local_c GEN_EDX_ARG);
    if ((char)uVar9 == '\0') {
      uVar9 = F_00a37c50(local_c GEN_EDX_ARG);
      if (uVar9 != 0) {
        return 0x13;
      }
      uVar9 = F_0046e5e0(local_c GEN_EDX_ARG);
      uVar10 = F_0046e5e0(piVar8 GEN_EDX_ARG);
      if ((uVar9 == uVar10) && (((*(byte *)(local_c + 5) ^ *(byte *)(piVar8 + 5)) & 1) == 0)) {
        uVar9 = F_00a46840(this GEN_EDX_ARG,piVar8,local_c,param_5);
      }
      else {
        uVar9 = F_00a47560(this GEN_EDX_ARG,piVar8,local_c,1);
      }
    }
    else {
      uVar9 = F_00a465f0(this GEN_EDX_ARG,piVar8,local_c,param_5);
    }
    bVar4 = F_006d5e90(param_1,(int)(short)param_2,param_3,(int)(short)param_4);
    if (bVar4 == 0) {
      F_006d5e90(param_3,(int)(short)param_4,param_1,(int)(short)param_2);
    }
    if (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0))) {
      F_00aa8290(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
    }
    F_00a3a720();
    return uVar9;
  }
  return 10;
}

/* ref: FUN_00a49910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a49910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa49910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((param_2 + 4))))) {
  case 1: ;
    F_00a3b700(this GEN_EDX_FWD);
    break;
  case 2: ;
    F_00a3fa30(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x28))));
    break;
  case 3: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *((undefined4 *)GEN_TOP((param_2 + 8)));
    break;
  case 6: ;
    F_004ea820(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8))) GEN_EDX_ARG,0x12);
    break;
  case 7: ;
    uVar2 = F_00a48b60(this GEN_EDX_ARG,param_2);
    return uVar2;
  }
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG);
  *((byte *)GEN_TOP((uVar2 + 0x230bf))) = *((byte *)GEN_TOP((uVar2 + 0x230bf))) | 1;
  return uVar2;
}

/* ref: FUN_00a499a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a499a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa499a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  undefined4 uVar8;
  undefined * local_10;
  undefined * local_c;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x3000)));
  pvVar4 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x3000))))));
  if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
    local_c = ((undefined *)GEN_TOP(0x0));
  }
  else {
    local_c = ((undefined *)GEN_TOP(F_00a37da0(pvVar4 GEN_EDX_ARG,(int)*((short *)GEN_TOP(((int)this + 0x3004))))));
  }
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x3040)));
  pvVar4 = ((undefined *)GEN_TOP(F_00a36f30(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x3040))))));
  if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
    local_10 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    local_10 = ((undefined *)GEN_TOP(F_00a37da0(pvVar4 GEN_EDX_ARG,(int)*((short *)GEN_TOP(((int)this + 0x3044))))));
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0x308c)));
  uVar5 = F_00a3eb60(local_c,puVar1);
  if (iVar3 == 3) {
    uVar6 = 0;
  }
  else {
    uVar6 = F_00a3eb60(local_10,puVar2);
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x3088))) = 0;
  if ((uVar5 == 0) && (uVar6 == 0)) {
    uVar5 = F_00a37c50(local_c GEN_EDX_ARG);
    if ((uVar5 == 0) && ((local_10 == ((undefined *)GEN_TOP(0x0)) || (uVar5 = F_00a37c50(local_10 GEN_EDX_ARG), uVar5 == 0))))
    {
      iVar3 = *((int *)GEN_TOP(((int)this + 0x308c)));
      if (iVar3 == 3) {
        F_00a41970(this GEN_EDX_ARG,*puVar1,(uint)*((ushort *)GEN_TOP(((int)this + 0x3004))),
                     *((undefined4 *)GEN_TOP(((int)this + 0x3080))));
      }
      else if (iVar3 == 2) {
        F_00a493a0(this GEN_EDX_ARG,*puVar1,(uint)*((ushort *)GEN_TOP(((int)this + 0x3004))),*puVar2,
                     (uint)*((ushort *)GEN_TOP(((int)this + 0x3044))),*((undefined4 *)GEN_TOP(((int)this + 0x3080))));
      }
      else if (iVar3 == 1) {
        F_00a47f70(this GEN_EDX_ARG,*puVar1,(uint)*((ushort *)GEN_TOP(((int)this + 0x3004))),*puVar2,
                     (uint)*((ushort *)GEN_TOP(((int)this + 0x3044))),1);
      }
      else if (iVar3 == 4) {
        F_00a3c360(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x3080))));
      }
      else if (iVar3 == 5) {
        F_00a3c570(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x3080))));
      }
      goto LAB_00a49b7e;
    }
    piVar7 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar8 = 0x745;
  }
  else {
    uVar5 = F_0046e5e0(local_c GEN_EDX_ARG);
    if (uVar5 == 1) {
      piVar7 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar8 = 0x752;
    }
    else {
      piVar7 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar8 = 0x751;
    }
  }
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x28))))(piVar7 GEN_EDX_ARG)));
  F_0046a630(pvVar4 GEN_EDX_ARG,uVar8);
  F_00a51200(0x2a,*puVar1,*puVar2,0,0);
LAB_00a49b7e: ;
  *((undefined4 *)GEN_TOP(((int)this + 0x308c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3084))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3008))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x300c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3018))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x301c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x3014))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3010))) = 0x75300000;
  *((undefined1 *)GEN_TOP(((int)this + 0x302f))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3030))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x3006))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x303c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3020))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3024))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x3028))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x302a))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x302e))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3034))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x3038))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3048))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x304c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3058))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x305c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x3054))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3050))) = 0x75300000;
  *((undefined1 *)GEN_TOP(((int)this + 0x306f))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3070))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x3046))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x307c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3060))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3064))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x3068))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x306a))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x306e))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3074))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x3078))) = 0;
  return 0;
}

/* ref: FUN_00a49c10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a49c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa49c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  undefined1 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  int iVar8;
  undefined4 * puVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  (*(int *)(gen_frame + 0x28)) = 9999;
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = ((undefined4 *)GEN_TOP(0x0));
  iVar6 = param_1;
  if (param_1 == 0) {
    return 0;
  }
  while (iVar8 = param_1, *((int *)GEN_TOP((iVar6 + 8))) != 0x1b0) {
    iVar6 = *((int *)GEN_TOP((iVar6 + 0x54)));
    if (iVar6 == 0) goto LAB_00a49d00;
  }
  iVar1 = *((int *)GEN_TOP((iVar6 + 0x18)));
  (*(int *)(gen_frame + 0x28)) = iVar1;
  if (iVar1 == 0x7d9) {
    uVar4 = *((uint *)GEN_TOP((iVar6 + 0x10)));
    if (uVar4 < *((uint *)GEN_TOP(((int)this + 0x330)))) {
      return uVar4;
    }
    *((uint *)GEN_TOP(((int)this + 0x330))) = -(uint)(uVar4 != 0xffffffff) & uVar4;
    puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x1bc)));
    iVar6 = 6;
    do {
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      *((undefined1 *)GEN_TOP(((int)puVar2 + 0x23))) = 0;
      puVar2[9] = 0;
      *((undefined1 *)GEN_TOP(((int)puVar2 - 6))) = 0;
      puVar2[0xc] = 0;
      *((undefined2 *)GEN_TOP(((int)puVar2 + 6))) = 30000;
      *(undefined2 *)(puVar2 + 1) = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      *(undefined2 *)(puVar2 + 7) = 0;
      *((undefined4 *)GEN_TOP(((int)puVar2 + 0x1e))) = 0;
      *((undefined1 *)GEN_TOP(((int)puVar2 + 0x22))) = 0;
      puVar2[10] = 0;
      *(undefined1 *)(puVar2 + 0xb) = 0;
      puVar2 = puVar2 + 0x10;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(F_00a36f30(this GEN_EDX_FWD,iVar1)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar2;
    if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar7 = puVar2;
    puVar9 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    F_00a36310(puVar2 GEN_EDX_ARG);
    this = (*(undefined * PTR32 *)(gen_frame + 0x20));
  }
LAB_00a49d00: ;
  do {
    iVar6 = *((int *)GEN_TOP((iVar8 + 8)));
    if (iVar6 == 0x1af) {
      if ((*(int *)(gen_frame + 0x28)) == 0x7d9) {
        F_00a36aa0(this GEN_EDX_ARG,iVar8 + 0x10);
      }
      else {
        F_00a4e7a0(param_2,iVar8 + 0x10);
      }
    }
    else if (iVar6 == 0x1b3) {
      if ((*(int *)(gen_frame + 0x28)) == 0x7d9) {
        F_00a36c00(this GEN_EDX_ARG,iVar8 + 0x10);
      }
      else {
        F_00a4e870(param_2,iVar8 + 0x10);
      }
    }
    else if (iVar6 == 0x1b7) {
      F_00a4e8d0(param_2,iVar8 + 0x10);
    }
    iVar8 = *((int *)GEN_TOP((iVar8 + 0x54)));
  } while (iVar8 != 0);
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x24)) != ((undefined4 *)GEN_TOP(0x0))) {
    F_00a46a80(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x24)),((undefined4 *)(gen_frame + 0x0)));
  }
  if ((*(int *)(gen_frame + 0x28)) == 0x2ee2) {
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG);
    *((byte *)GEN_TOP((uVar4 + 0x230bf))) = *((byte *)GEN_TOP((uVar4 + 0x230bf))) | 4;
  }
  if ((*(int *)(gen_frame + 0x28)) == *((int *)GEN_TOP(((int)this + 0x28)))) {
    F_00a3f440(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x28)));
  }
  uVar4 = F_00a36f30(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x28)));
  *((undefined1 *)GEN_TOP((uVar4 + 0x10))) = 1;
  if (((*(int *)(gen_frame + 0x28)) == 1000) || ((*(int *)(gen_frame + 0x28)) == 11000)) {
    *((undefined4 *)GEN_TOP(((int)this + 0x2ff8))) = 0;
  }
  puVar5 = ((undefined1 *)GEN_TOP(((int)this + 0x39e)));
  iVar6 = 0x80;
  do {
    if (*(int *)(puVar5 - 0x2a) == (*(int *)(gen_frame + 0x28))) {
      *puVar5 = 1;
    }
    if (*(int *)(puVar5 - 0x16) == (*(int *)(gen_frame + 0x28))) {
      puVar5[1] = 1;
    }
    puVar5 = puVar5 + 0x3c;
    iVar6 = iVar6 - 1;
  } while (iVar6 != 0);
  if ((*((char *)GEN_TOP(((int)this + 0x3084))) != '\0') && (*((int *)GEN_TOP(((int)this + 0x3000))) == (*(int *)(gen_frame + 0x28)))) {
    *((undefined1 *)GEN_TOP(((int)this + 0x3086))) = 1;
  }
  if ((*((char *)GEN_TOP(((int)this + 0x3085))) != '\0') && (*((int *)GEN_TOP(((int)this + 0x3040))) == (*(int *)(gen_frame + 0x28)))) {
    *((undefined1 *)GEN_TOP(((int)this + 0x3087))) = 1;
  }
  if ((*((char *)GEN_TOP(((int)this + 0x3086))) != '\0') && (*((char *)GEN_TOP(((int)this + 0x3087))) != '\0')) {
    F_00a499a0(this GEN_EDX_ARG);
  }
  piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG);
  *((byte *)GEN_TOP((uVar4 + 0x230bf))) = *((byte *)GEN_TOP((uVar4 + 0x230bf))) | 1;
  F_006d0fd0();
  uVar4 = F_00701020();
  return uVar4;
}

/* ref: FUN_00a49e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a49e90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa49e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x2eb8))) = param_2;
  return param_2;
}

/* ref: FUN_00a49ea0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a49ea0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa49ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 6))) = param_2;
  return param_2;
}

/* ref: FUN_00a49ef0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a49ef0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa49ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return param_2;
}

/* ref: FUN_00a4a080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4a080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa4a080u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  *((undefined2 *)GEN_TOP(((int)this + 0x18))) = (undefined2)param_1;
  *(undefined4 *)this = 0x1a5;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x28;
  *((undefined2 *)GEN_TOP(((int)this + 0x1a))) = (undefined2)param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = *param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_3[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_3[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_3[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_3[4];
  return (uint)this;
}

/* ref: FUN_00a4a0d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4a0d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa4a0d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined1 *)(in_ecx + 6) = param_2;
  *in_ecx = 0x1a6;
  in_ecx[1] = 0x30;
  puVar2 = param_3;
  puVar3 = ((undefined4 *)GEN_TOP(((int)in_ecx + 0x19)));
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  return (uint)in_ecx;
}

/* ref: FUN_00a4a100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4a100(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa4a100u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  in_ecx[6] = param_2;
  *in_ecx = 0x1af;
  in_ecx[1] = 0x50;
  puVar2 = param_3;
  puVar3 = in_ecx + 7;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_4;
  puVar3 = in_ecx + 0xe;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: FUN_00a4a140 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a4a140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4a140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x10000;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  F_00c49908((int)this + 0x14,0x20,((char *)REFP(0x10e4ab4)));
  return (uint)this;
}

/* ref: Client::Game::Item::AskToTradeCallback::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4a170(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4a170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Item::ConfirmationCallback::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4a1a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4a1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Item::NumericInputCallback::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4a1d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4a1d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a4a200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4a200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4a200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 * puVar1;
  undefined4 * puVar2;
  undefined2 * puVar3;
  int iVar4;
  int local_8;
  
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x30)));
  iVar4 = 5;
  do {
    *(undefined2 *)(puVar2 + 1) = 0;
    *puVar2 = 9999;
    *((undefined1 *)GEN_TOP(((int)puVar2 + 6))) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    *((undefined1 *)GEN_TOP(((int)puVar2 + 0x2f))) = 0;
    puVar2[0xc] = 0;
    puVar2[0xf] = 0;
    *((undefined2 *)GEN_TOP(((int)puVar2 + 0x12))) = 30000;
    *(undefined2 *)(puVar2 + 4) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    *(undefined2 *)(puVar2 + 10) = 0;
    *((undefined4 *)GEN_TOP(((int)puVar2 + 0x2a))) = 0;
    *((undefined1 *)GEN_TOP(((int)puVar2 + 0x2e))) = 0;
    puVar2[0xd] = 0;
    *(undefined1 *)(puVar2 + 0xe) = 0;
    puVar2 = puVar2 + 0x10;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x1b0)));
  iVar4 = 5;
  do {
    *(undefined2 *)(puVar2 + 1) = 0;
    *puVar2 = 9999;
    *((undefined1 *)GEN_TOP(((int)puVar2 + 6))) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    *((undefined1 *)GEN_TOP(((int)puVar2 + 0x2f))) = 0;
    puVar2[0xc] = 0;
    puVar2[0xf] = 0;
    *((undefined2 *)GEN_TOP(((int)puVar2 + 0x12))) = 30000;
    *(undefined2 *)(puVar2 + 4) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    *(undefined2 *)(puVar2 + 10) = 0;
    *((undefined4 *)GEN_TOP(((int)puVar2 + 0x2a))) = 0;
    *((undefined1 *)GEN_TOP(((int)puVar2 + 0x2e))) = 0;
    puVar2[0xd] = 0;
    *(undefined1 *)(puVar2 + 0xe) = 0;
    puVar2 = puVar2 + 0x10;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  puVar1 = ((undefined1 *)GEN_TOP(((int)this + 0x364)));
  iVar4 = 0x7f;
  do {
    *(undefined4 *)(puVar1 + 0x10) = 9999;
    *(undefined4 *)(puVar1 + 0x24) = 9999;
    *puVar1 = 1;
    *(undefined4 *)(puVar1 + 4) = 0x10000000;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 0x14) = 0xffff;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0;
    *(undefined2 *)(puVar1 + 0x28) = 0xffff;
    *(undefined4 *)(puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 0x30) = 0;
    *(undefined4 *)(puVar1 + 0x34) = 0;
    *(undefined4 *)(puVar1 + 0x38) = 0;
    puVar1 = puVar1 + 0x3c;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2164))) = (*(undefined * PTR32 (*)[2])REFP(0x10e4ac4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2168))) = (*(undefined * PTR32 (*)[2])REFP(0x10e4ad0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x216c))) = (*(undefined * PTR32 (*)[2])REFP(0x10e4adc));
  *((undefined4 *)GEN_TOP(((int)this + 0x2170))) = 0;
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x2178)));
  local_8 = 7;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0x10000;
    puVar2[4] = 0;
    F_00c49908(puVar2 + 5,0x20,((char *)REFP(0x10e4ab4)));
    puVar2 = puVar2 + 0xe;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x23e8)));
  iVar4 = 0xd;
  do {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  puVar3 = ((undefined2 *)GEN_TOP(((int)this + 0x245d)));
  iVar4 = 0xd;
  do {
    *puVar3 = 0;
    *(undefined1 *)(puVar3 + 1) = 0;
    puVar3 = ((undefined2 *)GEN_TOP(((int)puVar3 + 3)));
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  *((undefined1 *)GEN_TOP(((int)this + 0x3006))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3008))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x300c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3018))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x301c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x3014))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3010))) = 0x75300000;
  *((undefined1 *)GEN_TOP(((int)this + 0x302f))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3030))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x303c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3000))) = 9999;
  *((undefined2 *)GEN_TOP(((int)this + 0x3004))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3020))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3024))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x3028))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x302a))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x302e))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3034))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x3038))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3040))) = 9999;
  *((undefined1 *)GEN_TOP(((int)this + 0x3046))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3048))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x304c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3058))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x305c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x3054))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3050))) = 0x75300000;
  *((undefined1 *)GEN_TOP(((int)this + 0x306f))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3070))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x307c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x3044))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3060))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3064))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x3068))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x306a))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x306e))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3074))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x3078))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3090))) = 9999;
  *((undefined2 *)GEN_TOP(((int)this + 0x3094))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x3096))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3098))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x309c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30ac))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x30a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30a0))) = 0x75300000;
  *((undefined1 *)GEN_TOP(((int)this + 0x30bf))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30c0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30cc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30b4))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x30b8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30ba))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x30be))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30c4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x30c8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30d0))) = 9999;
  *((undefined1 *)GEN_TOP(((int)this + 0x30d6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30d8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30e8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30ec))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x30e4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30e0))) = 0x75300000;
  *((undefined1 *)GEN_TOP(((int)this + 0x30ff))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x310c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x30d4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30f4))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x30f8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30fa))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x30fe))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3104))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x3108))) = 0;
  return (uint)this;
}

/* ref: FUN_00a4a5a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a4a5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4a5a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ushort uVar1;
  short sVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * pvVar5;
  
  while (pvVar5 = this, *((char *)GEN_TOP(((int)pvVar5 + 6))) != '\0') {
    uVar1 = *((ushort *)GEN_TOP(((int)pvVar5 + 10)));
    pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,(uint)uVar1)));
    if (pvVar3 == ((undefined *)GEN_TOP(0x0))) break;
    sVar2 = *((short *)GEN_TOP(((int)pvVar5 + 8)));
    uVar4 = F_00a37da0(pvVar3 GEN_EDX_ARG,(int)sVar2);
    if ((uVar4 == 0) && (pvVar5 == ((undefined *)GEN_TOP(0x0)))) break;
    pvVar3 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)uVar1)));
    if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
      this = ((undefined *)GEN_TOP(0x0));
    }
    else {
      this = ((undefined *)GEN_TOP(F_00a37da0(pvVar3 GEN_EDX_ARG,(int)sVar2)));
      if (this == ((undefined *)GEN_TOP(0x0))) {
        this = pvVar5;
      }
    }
  }
  return *((uint *)GEN_TOP(((int)pvVar5 + 0x30)));
}

/* ref: FUN_00a4a720 */
GEN_OWN GEN_FRAME float10 F_00a4a720(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xa4a720u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: Global::SetCondition */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4a760(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa4a760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  if (((int)param_2 < 0x2e) && (*((undefined1 *)GEN_TOP((param_2 + param_1))) = param_3, param_2 == 0x29)) {
    *((undefined4 *)GEN_TOP((param_1 + 0x30))) = 0;
  }
  return param_2;
}

/* ref: FUN_00a4a790 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a4a790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa4a790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char * pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = ((char *)GEN_TOP(F_00ab2170(param_1)));
  if (param_1 == 0x30) {
    if ((REFG(int, 0x1379694) != 0) && (uVar2 = F_00aa0210(REFG(int, 0x1379694) GEN_EDX_ARG,0,0), uVar2 == 0x4d)) {
      return 0;
    }
    if (REFG(char, 0x14a73b0) != '\0') {
      return 0;
    }
    if ((GEN_ISNAN(REFG(float, 0x14a73b4)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
        ((GEN_ISNAN(REFG(float, 0x14a73b4)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ||
        REFG(uint, 0x14a73b4) == *(float *)&REFG(undefined, 0x1088114))) {
      return 0;
    }
  }
  iVar3 = 0;
  iVar4 = (int)this - (int)pcVar1;
  while ((pcVar1[iVar4] != '\x01' || (*pcVar1 != '\0'))) {
    iVar3 = iVar3 + 1;
    pcVar1 = pcVar1 + 1;
    if (0x2d < iVar3) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00a4a810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4a810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa4a810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char * pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = ((char *)GEN_TOP(F_00ab2170(param_1)));
  iVar3 = 0;
  iVar4 = (int)this - (int)pcVar1;
  while ((pcVar1[iVar4] != '\x01' || (*pcVar1 != '\0'))) {
    iVar3 = iVar3 + 1;
    pcVar1 = pcVar1 + 1;
    if (0x2d < iVar3) {
      return (uint)pcVar1;
    }
  }
  uVar2 = F_00a7d290(iVar3 + 400,0,0,0,0,REFG(float, 0x10916ec));
  return uVar2;
}

/* ref: FUN_00a4a870 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a4a870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa4a870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(bool *)this = param_1 == 0;
  *((bool *)GEN_TOP(((int)this + 1))) = param_1 == 1;
  *((bool *)GEN_TOP(((int)this + 2))) = param_1 == 2;
  *((bool *)GEN_TOP(((int)this + 3))) = param_1 == 3;
  *((bool *)GEN_TOP(((int)this + 4))) = param_1 == 4;
  *((bool *)GEN_TOP(((int)this + 5))) = param_1 == 5;
  *((bool *)GEN_TOP(((int)this + 6))) = param_1 == 6;
  *((bool *)GEN_TOP(((int)this + 7))) = param_1 == 7;
  *((bool *)GEN_TOP(((int)this + 8))) = param_1 == 8;
  return param_1 == 8;
}

/* ref: FUN_00a4a910 */
GEN_OWN GEN_NOFRAME uint F_00a4a910(void)
{
  GEN_ENTER(0xa4a910u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
  if (uVar1 == 0) {
    return 0;
  }
  return (uint)*((ushort *)GEN_TOP((uVar1 + 0x1c)));
}

/* ref: FUN_00a4a930 */
GEN_OWN GEN_NOFRAME uint F_00a4a930(void)
{
  GEN_ENTER(0xa4a930u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
  if (uVar1 == 0) {
    return 0;
  }
  return (uint)*((ushort *)GEN_TOP((uVar1 + 0x20)));
}

/* ref: FUN_00a4a950 */
GEN_OWN GEN_NOFRAME byte F_00a4a950(void)
{
  GEN_ENTER(0xa4a950u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
  if (uVar1 == 0) {
    return 0;
  }
  return *((char *)GEN_TOP((uVar1 + 0x2a))) == '\x05';
}

/* ref: FUN_00a4a9e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a4a9e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4a9e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  *(undefined1 *)(in_ecx + 2) = 0;
  in_ecx[3] = 0;
  *(undefined1 *)(in_ecx + 4) = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *(undefined4 *)&REFG(undefined, 0x14a7390) = 0;
  *(undefined1 *)(in_ecx + 7) = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  return 0;
}

/* ref: FUN_00a4aa10 */
GEN_OWN GEN_NOFRAME uint F_00a4aa10(void)
{
  GEN_ENTER(0xa4aa10u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(&REFG(undefined, 0x14a7360),0,0x2e);
  return (uint)pvVar1;
}

/* ref: FUN_00a4aa30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a4aa30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4aa30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *in_ecx = 0;
  in_ecx[1] = 0;
  *(undefined1 *)(in_ecx + 2) = 0;
  in_ecx[3] = 0;
  *(undefined1 *)(in_ecx + 4) = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  uVar1 = F_00ae8400();
  return uVar1;
}

/* ref: FUN_00a4aa50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a4aa50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4aa50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  *(undefined1 *)(in_ecx + 2) = 0;
  in_ecx[3] = 0;
  *(undefined1 *)(in_ecx + 4) = 0;
  return 0;
}

/* ref: FUN_00a4aa70 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a4aa70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4aa70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  float fVar1;
  
  if (*((char *)GEN_TOP((in_ecx + 0x29))) != '\0') {
    fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))) + (float10)*((float *)GEN_TOP((in_ecx + 0x30))))))
    ;
    *((float *)GEN_TOP((in_ecx + 0x30))) = fVar1;
    if ((float10)REFG(float, 0x1087ef8) <= (float10)fVar1) {
      *((undefined1 *)GEN_TOP((in_ecx + 0x29))) = 0;
      *((undefined4 *)GEN_TOP((in_ecx + 0x30))) = 0;
    }
  }
  return;
}

/* ref: FUN_00a4aab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4aab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa4aab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint in_EAX = 0;
  uint * puVar1;
  int * piVar2;
  int iVar3;
  
  if ((REFG(int, 0x1379c70) == 2) && ((*(int *)this != param_1 || (*((int *)GEN_TOP(((int)this + 4))) != param_2)))) {
    iVar3 = param_2;
    if ((param_2 != 0) || (iVar3 = param_1, param_1 != 0)) {
      puVar1 = ((uint *)GEN_TOP(F_00ab2750(iVar3)));
      in_EAX = 0;
      if (puVar1 != ((uint *)GEN_TOP(0x0))) {
        piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xe4))))(piVar2 GEN_EDX_ARG,(*puVar1 & 0xffffff) + (int)puVar1,5,1,1);
      }
    }
    *(int *)this = param_1;
    *((int *)GEN_TOP(((int)this + 4))) = param_2;
  }
  return in_EAX;
}

/* ref: FUN_00a4ab30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a4ab30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4ab30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    puVar1 = ((uint *)GEN_TOP(F_00ab2750(*((int *)GEN_TOP(((int)this + 4))))));
    if (puVar1 != ((uint *)GEN_TOP(0x0))) goto LAB_00a4ab49;
  }
  if (*(int *)this != 0) {
    puVar1 = ((uint *)GEN_TOP(F_00ab2750(*(int *)this)));
    if (puVar1 != ((uint *)GEN_TOP(0x0))) {
LAB_00a4ab49: ;
      return (*puVar1 & 0xffffff) + (int)puVar1;
    }
  }
  return 0x10e4b70;
}

/* ref: FUN_00a4ab70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a4ab70(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa4ab70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x54, 12, 4);
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  
  (*(undefined4 *)(gen_frame + 0x44)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x48)) = param_1[1];
  (*(undefined4 *)(gen_frame + 0x4c)) = param_1[2];
  uVar5 = 0;
  uVar3 = 0;
  bVar1 = F_00551a90(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25e0))) GEN_EDX_ARG,((byte *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x44)),8);
  if ((bVar1 != 0) && (uVar4 = 0, (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64)) != 0)) {
    do {
      uVar2 = F_005f32a0(0x2b,*(undefined4 *)(((byte *)(gen_frame + 0x0)) + uVar4 * 4));
      if ((uVar2 != 0) &&
         (((*((byte *)GEN_TOP((uVar2 + 0x95))) & 2) != 0 && (uVar5 < *((ushort *)GEN_TOP((uVar2 + 0x70))))))) {
        uVar3 = uVar4;
        uVar5 = *((ushort *)GEN_TOP((uVar2 + 0x70)));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64)));
    if (uVar5 != 0) {
      uVar3 = F_005f32a0(0x2b,*(undefined4 *)(((byte *)(gen_frame + 0x0)) + uVar3 * 4));
      if (uVar3 != 0) {
        return *((uint *)GEN_TOP((uVar3 + 0x80)));
      }
    }
  }
  return 0;
}

/* ref: FUN_00a4ac30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4ac30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4ac30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  int * piVar5;
  undefined3 extraout_var = 0;
  uint uVar6;
  uint uVar7;
  undefined * this_00;
  int iVar8;
  uint uVar9;
  ushort uVar10;
  undefined4 uVar11;
  uint local_30;
  uint local_28;
  uint local_20;
  uint local_18;
  undefined1 local_6;
  char local_5;
  
  piVar5 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  uVar9 = 0;
  local_5 = '\0';
  local_6 = 0;
  uVar7 = REFG(undefined4, 0x1379694);
  if ((REFG(undefined4, 0x1379694) != 0) && ((*((byte *)GEN_TOP((REFG(undefined4, 0x1379694) + 0x8e))) & 0x40) == 0)) {
    local_30 = 0;
    uVar10 = 0;
    local_18 = 0;
    uVar1 = 0;
    local_20 = 0;
    uVar2 = 0;
    local_28 = 0;
    uVar3 = 0;
    F_00ab6810();
    F_00aaee00(0);
    bVar4 = F_00aaf830(&REFG(undefined1, 0x14b5220) GEN_EDX_ARG);
    uVar7 = CONCAT31(extraout_var,bVar4);
    if (bVar4 == 1) {
      uVar6 = F_00aaf840(&REFG(undefined1, 0x14b5220) GEN_EDX_ARG);
      if (*((int *)GEN_TOP((uVar6 + 0x40))) != 0) {
        do {
          iVar8 = *((int *)GEN_TOP((uVar6 + uVar9 * 4)));
          if (((*((byte *)GEN_TOP((iVar8 + 0x44))) & 8) != 0) && (uVar7 = F_005f32a0(0x2b,iVar8), uVar7 != 0)
             ) {
            bVar4 = *((byte *)GEN_TOP((uVar7 + 0x95)));
            if ((char)bVar4 < '\0') {
              local_5 = '\x01';
            }
            if ((*((byte *)GEN_TOP((uVar7 + 0x96))) & 1) != 0) {
              local_6 = 1;
            }
            if (((bVar4 & 2) != 0) && (uVar10 < *((ushort *)GEN_TOP((uVar7 + 0x70))))) {
              local_30 = uVar9;
              uVar10 = *((ushort *)GEN_TOP((uVar7 + 0x70)));
            }
            if (((bVar4 & 4) != 0) && (uVar1 < *((ushort *)GEN_TOP((uVar7 + 0x70))))) {
              local_18 = uVar9;
              uVar1 = *((ushort *)GEN_TOP((uVar7 + 0x70)));
            }
            if (((bVar4 & 8) != 0) && (uVar2 < *((ushort *)GEN_TOP((uVar7 + 0x70))))) {
              local_20 = uVar9;
              uVar2 = *((ushort *)GEN_TOP((uVar7 + 0x70)));
            }
            if (((bVar4 & 0x10) != 0) && (uVar3 < *((ushort *)GEN_TOP((uVar7 + 0x70))))) {
              local_28 = uVar9;
              uVar3 = *((ushort *)GEN_TOP((uVar7 + 0x70)));
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *((uint *)GEN_TOP((uVar6 + 0x40))));
      }
      if (*((char *)GEN_TOP(((int)this + 8))) != local_5) {
        F_00a7d290((local_5 == '\0') + 0x2dc,0,0,0,0,REFG(float, 0x10916ec));
      }
      *((char *)GEN_TOP(((int)this + 8))) = local_5;
      *((undefined1 *)GEN_TOP(((int)this + 0x10))) = local_6;
      iVar8 = *((int *)GEN_TOP(((int)this + 0xc)));
      if ((uVar10 != 0) &&
         (uVar7 = F_005f32a0(0x2b,*((undefined4 *)GEN_TOP((uVar6 + local_30 * 4)))), uVar7 != 0)) {
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((uVar7 + 0x80)));
      }
      if ((*((int *)GEN_TOP(((int)this + 0xc))) != iVar8) && (piVar5 != ((int *)GEN_TOP(0x0)))) {
        uVar11 = 0x1f;
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x48))))(piVar5 GEN_EDX_ARG);
        this_00 = ((undefined *)GEN_TOP(F_00763050(uVar7 GEN_EDX_ARG,uVar11)));
        if (this_00 != ((undefined *)GEN_TOP(0x0))) {
          iVar8 = *(int *)&REFG(undefined2, 0x1379c78);
          if (*(int *)&REFG(undefined2, 0x1379c78) == 0) {
            iVar8 = REFG(int, 0x1379c88);
          }
          F_008decc0(this_00 GEN_EDX_ARG,iVar8,*((undefined4 *)GEN_TOP(((int)this + 0xc))));
        }
      }
      uVar7 = 0;
      if (uVar1 == 0) {
        if ((REFG(int, 0x1379c70) == 2) && ((REFG(int, 0x14a73a8) != 0 || (REFG(int, 0x14a73ac) != 0)))) {
          REFG(int, 0x14a73a8) = 0;
          REFG(int, 0x14a73ac) = 0;
        }
      }
      else {
        uVar7 = F_005f32a0(0x2b,*((undefined4 *)GEN_TOP((uVar6 + local_18 * 4))));
        uVar7 = F_00a4aab0(&REFG(int, 0x14a73a8) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar7 + 0x84))),
                             *((undefined4 *)GEN_TOP((uVar7 + 0x88))));
      }
      if (uVar2 != 0) {
        uVar7 = F_005f32a0(0x2b,*((undefined4 *)GEN_TOP((uVar6 + local_20 * 4))));
        iVar8 = *((int *)GEN_TOP(((int)this + 0xc)));
        if (iVar8 == 0) {
          iVar8 = REFG(int, 0x1379c90);
        }
        uVar7 = F_00ab54c0(&REFG(undefined, 0x14b5268) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar7 + 0x14))),
                             (uint)*((byte *)GEN_TOP((uVar7 + 0x94))),iVar8);
      }
      if (uVar3 != 0) {
        uVar9 = F_005f32a0(0x2b,*((undefined4 *)GEN_TOP((uVar6 + local_28 * 4))));
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = 0;
          if (*((int *)GEN_TOP((uVar9 + 0x8c))) != 0) {
            F_00ab6780(*((int *)GEN_TOP((uVar9 + 0x8c))));
            uVar7 = F_00aaee00(*((byte *)GEN_TOP((uVar9 + 0x95))) >> 5 & 1);
            return uVar7;
          }
        }
      }
    }
    else {
      if ((REFG(int, 0x1379c70) == 2) && ((REFG(int, 0x14a73a8) != 0 || (REFG(int, 0x14a73ac) != 0)))) {
        REFG(int, 0x14a73a8) = 0;
        REFG(int, 0x14a73ac) = 0;
      }
      *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 0;
    }
  }
  return uVar7;
}

/* ref: FUN_00a4af10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4af10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4af10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  uint uVar2;
  
  uVar2 = F_00a4ac30(this GEN_EDX_FWD);
  if ((REFG(char, 0x14a7389) != '\0') &&
     (*(float *)&REFG(undefined, 0x14a7390) =
           ((float)GEN_TOF(((float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))) + (float10)*(float *)&REFG(undefined, 0x14a7390)))),
     (float10)REFG(float, 0x1087ef8) <= (float10)*(float *)&REFG(undefined, 0x14a7390))) {
    REFG(char, 0x14a7389) = '\0';
    *(float *)&REFG(undefined, 0x14a7390) = 0.0;
  }
  if (0.0 < *((float *)GEN_TOP(((int)this + 0x20)))) {
    fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x20))) -
                   (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))))));
    *((float *)GEN_TOP(((int)this + 0x20))) = fVar1;
    if ((float10)fVar1 < (float10)0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00a4afe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4afe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa4afe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  uVar1 = param_1 + 0x1fU >> 5;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5270));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  *((int *)GEN_TOP(((int)this + 0x10))) = param_2;
  if (param_2 == 0) {
    uVar1 = F_00406bb0(uVar1 * 4,0,0);
    *((uint *)GEN_TOP(((int)this + 0xc))) = *((uint *)GEN_TOP(((int)this + 0xc))) | 0x80000000;
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
  }
  F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))),0,*((int *)GEN_TOP(((int)this + 0xc))) * 4);
  return (uint)this;
}

/* ref: FUN_00a4b060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4b060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa4b060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  longlong lVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5270));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((uint *)GEN_TOP(((int)this + 0xc))) = *((uint *)GEN_TOP((param_1 + 0xc))) | 0x80000000;
  lVar1 = (ulonglong)(*((uint *)GEN_TOP((param_1 + 0xc))) & 0x7fffffff) * 4;
  uVar2 = F_00406bb0(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,0);
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
  F_00c46aa0(uVar2,*((undefined4 *)GEN_TOP((param_1 + 0x10))),*((int *)GEN_TOP(((int)this + 0xc))) * 4)
  ;
  return (uint)this;
}

/* ref: FUN_00a4b0d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4b0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa4b0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  longlong lVar1;
  uint uVar2;
  
  if (param_1 != this) {
    if ((*((uint *)GEN_TOP(((int)this + 0xc))) & 0x80000000) == 0x80000000) {
      F_00406b30(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP(((int)param_1 + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP(((int)param_1 + 8)));
    *((uint *)GEN_TOP(((int)this + 0xc))) = *((uint *)GEN_TOP(((int)param_1 + 0xc))) | 0x80000000;
    lVar1 = (ulonglong)(*((uint *)GEN_TOP(((int)param_1 + 0xc))) & 0x7fffffff) * 4;
    uVar2 = F_00406bb0(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,0);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    F_00c46aa0(uVar2,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))),*((int *)GEN_TOP(((int)this + 0xc))) * 4);
  }
  return (uint)this;
}

/* ref: FUN_00a4b160 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a4b160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4b160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc))) & 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5270));
  if (uVar1 == 0x80000000) {
    uVar2 = F_00406b30(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: FUN_00a4b180 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a4b180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa4b180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*((uint *)GEN_TOP(((int)this + 0xc))) & 0x7fffffff) != 0) {
    do {
      puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + uVar2 * 4)));
      *puVar1 = *puVar1 | *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + uVar2 * 4)));
      uVar2 = uVar2 + 1;
    } while (uVar2 < (*((uint *)GEN_TOP(((int)this + 0xc))) & 0x7fffffff));
  }
  return 0;
}

/* ref: FUN_00a4b1c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a4b1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa4b1c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*((uint *)GEN_TOP(((int)this + 0xc))) & 0x7fffffff) != 0) {
    do {
      puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + uVar2 * 4)));
      *puVar1 = *puVar1 & *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + uVar2 * 4)));
      uVar2 = uVar2 + 1;
    } while (uVar2 < (*((uint *)GEN_TOP(((int)this + 0xc))) & 0x7fffffff));
  }
  return 0;
}

/* ref: FUN_00a4b200 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a4b200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa4b200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*((uint *)GEN_TOP(((int)this + 0xc))) & 0x7fffffff) != 0) {
    do {
      puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + uVar2 * 4)));
      *puVar1 = *puVar1 ^ *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + uVar2 * 4)));
      uVar2 = uVar2 + 1;
    } while (uVar2 < (*((uint *)GEN_TOP(((int)this + 0xc))) & 0x7fffffff));
  }
  return 0;
}

/* ref: FUN_00a4b240 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a4b240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa4b240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if (param_1 < *((uint *)GEN_TOP(((int)this + 4)))) {
    return 0;
  }
  uVar2 = (param_1 >> 5) + 1;
  uVar1 = F_00406bb0(uVar2 * 4,0,0);
  F_00c46aa0(uVar1,*((undefined4 *)GEN_TOP(((int)this + 0x10))),*((int *)GEN_TOP(((int)this + 0xc))) * 4);
  F_00c48350(((undefined *)GEN_TOP((uVar1 + *((uint *)GEN_TOP(((int)this + 0xc))) * 4))),0,
          (uVar2 - (*((uint *)GEN_TOP(((int)this + 0xc))) & 0x7fffffff)) * 4);
  if ((*((uint *)GEN_TOP(((int)this + 0xc))) & 0x80000000) == 0x80000000) {
    F_00406b30(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
  }
  else {
    *((uint *)GEN_TOP(((int)this + 0xc))) = *((uint *)GEN_TOP(((int)this + 0xc))) | 0x80000000;
  }
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
  *((uint *)GEN_TOP(((int)this + 0xc))) =
       *((uint *)GEN_TOP(((int)this + 0xc))) ^ (*((uint *)GEN_TOP(((int)this + 0xc))) ^ uVar2) & 0x7fffffff;
  *((uint *)GEN_TOP(((int)this + 4))) = param_1;
  return 1;
}

/* ref: FUN_00a4b300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4b300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa4b300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  undefined * _Dst;
  
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  uVar1 = param_1 + 0x1fU >> 5;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5270));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  _Dst = ((undefined *)GEN_TOP(F_00406bb0(uVar1 * 4,0,0)));
  *((uint *)GEN_TOP(((int)this + 0xc))) = *((uint *)GEN_TOP(((int)this + 0xc))) | 0x80000000;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) = _Dst;
  F_00c48350(_Dst,0,*((int *)GEN_TOP(((int)this + 0xc))) * 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5278));
  return (uint)this;
}

/* ref: FUN_00a4b380 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a4b380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4b380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc))) & 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5270));
  if (uVar1 == 0x80000000) {
    uVar2 = F_00406b30(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: FUN_00a4b3a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4b3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4b3a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *((uint *)GEN_TOP(((int)this + 0xc))) & 0x7fffffff;
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + uVar3 * 4)));
      if (uVar2 != 0xffffffff) {
        uVar5 = 0;
        do {
          if ((uVar2 & 1 << GEN_SHC((byte)uVar5, (unsigned int)(uintptr_t)uVar5)) == 0) {
            puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + uVar3 * 4)));
            *puVar1 = *puVar1 | 1 << GEN_SHC((byte)uVar5, (unsigned int)(uintptr_t)uVar5);
            *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
            return uVar3 * 0x20 + uVar5;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0x20);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return *((uint *)GEN_TOP(((int)this + 4)));
}

/* ref: FUN_00a4b410 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a4b410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa4b410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (param_1 >> 5) * 4)));
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  if ((*puVar1 & uVar2) != 0) {
    return 0;
  }
  *puVar1 = *puVar1 | uVar2;
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
  return 1;
}

/* ref: FUN_00a4b450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4b450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa4b450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (param_1 >> 5) * 4)));
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  return (uint)this;
}

/* ref: FUN_00a4b480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4b480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa4b480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  uVar2 = 0;
  if (uVar1 != 0) {
    iVar3 = 0;
    do {
      iVar4 = iVar3;
      if (((*((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (uVar2 >> 5) * 4))) & 1 << ((byte)uVar2 & 0x1f)) !=
           0) && (iVar4 = iVar3 + 1, iVar3 == param_1)) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar4;
    } while (uVar2 < uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a4b4c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4b4c0(GEN_P(uint * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa4b4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  uint uVar1;
  
  uVar1 = param_2;
  if (param_6 == '\0') {
    uVar1 = F_00406bb0(param_3 + 1,0,0);
  }
  *param_1 = uVar1;
  param_1[1] = param_5;
  param_1[2] = param_3;
  param_1[3] = uVar1;
  param_1[4] = 0;
  *(char *)(param_1 + 5) = param_6;
  if (param_6 != '\0') {
    param_1[6] = param_4;
    return (uint)param_1;
  }
  F_00c46aa0(uVar1,param_2,param_3);
  *((undefined1 *)GEN_TOP((param_3 + *param_1))) = 0;
  param_1[6] = param_4;
  return (uint)param_1;
}

/* ref: FUN_00a4b620 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4b620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa4b620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  int iVar1;
  char * pcVar2;
  char * pcVar3;
  char cVar4;
  
  pcVar2 = *((char * PTR32 *)GEN_TOP(((int)this + 0xc)));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
  pcVar3 = pcVar2;
  if (iVar1 == 0) {
    cVar4 = *pcVar2;
    while( true ) {
      if (((cVar4 == '\t') || (cVar4 = *pcVar3, cVar4 == ',')) || (cVar4 == '\0'))
      goto LAB_00a4b6b2;
      if ((cVar4 == '\n') && (pcVar3[-1] == '\r')) break;
      pcVar3 = pcVar3 + 1;
      cVar4 = *pcVar3;
    }
    pcVar3[-1] = '\0';
  }
  else if (iVar1 == 1) {
    cVar4 = *pcVar2;
    if (cVar4 == '\r') {
LAB_00a4b680: ;
      if (*pcVar3 != '\r') goto LAB_00a4b6b5;
    }
    else {
      do {
        if (((cVar4 == '\t') || (cVar4 == ',')) || (cVar4 == '\0')) goto LAB_00a4b680;
        cVar4 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
      } while (cVar4 != '\r');
    }
  }
  else {
    if (iVar1 != 2) goto LAB_00a4b6b5;
    cVar4 = *pcVar2;
    if (cVar4 == '\n') {
LAB_00a4b659: ;
      if (*pcVar3 != '\n') goto LAB_00a4b6b5;
    }
    else {
      do {
        if (((cVar4 == '\t') || (cVar4 == ',')) || (cVar4 == '\0')) goto LAB_00a4b659;
        cVar4 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
      } while (cVar4 != '\n');
    }
  }
LAB_00a4b6b2: ;
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
LAB_00a4b6b5: ;
  *pcVar3 = '\0';
  *((char * PTR32 *)GEN_TOP(((int)this + 0xc))) = pcVar3 + 1;
  if ((*pcVar2 == '\0') && (pcVar2 = param_1, param_1 == ((char *)GEN_TOP(0x0)))) {
    pcVar2 = *((char * PTR32 *)GEN_TOP(((int)this + 4)));
  }
  return (uint)pcVar2;
}

/* ref: FUN_00a4b6e0 */
GEN_OWN GEN_FRAME uint F_00a4b6e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa4b6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (param_1 >> 0x17 & 0xff) - 0x70;
  if (0x1f < uVar1) {
    uVar1 = 0x1f;
  }
  return param_1 >> 0x10 & 0x8000 | param_1 >> 0xd & 0x3ff | (uVar1 & 0x1f) << 10;
}

/* ref: FUN_00a4b730 */
GEN_OWN GEN_FRAME float10 F_00a4b730(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa4b730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  if ((ushort)param_1 == 0) {
    return (float10)0;
  }
  return ((float10)GEN_TOD(gen_bits2f(((param_1 & 0x8000) * 8 | param_1 & 0x3ff) << 0xd |
                             (((ushort)param_1 >> 10 & 0x1f) + 0x70) * 0x800000)));
}

/* ref: FUN_00a4b780 */
GEN_OWN GEN_FRAME uint F_00a4b780(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa4b780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x133453c) << 0xb ^ REFG(undefined4, 0x133453c);
  REFG(undefined4, 0x133453c) = REFG(undefined4, 0x1334540);
  REFG(undefined4, 0x1334540) = REFG(undefined4, 0x1334544);
  uVar1 = (REFG(undefined4, 0x1334548) >> 0xb ^ uVar1) >> 8 ^ REFG(undefined4, 0x1334548) ^ uVar1;
  REFG(undefined4, 0x1334544) = REFG(undefined4, 0x1334548);
  REFG(undefined4, 0x1334548) = uVar1;
  return uVar1 % param_1;
}

/* ref: FUN_00a4b7d0 */
GEN_OWN GEN_FRAME float F_00a4b7d0(void)
{
  GEN_ENTER(0xa4b7d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x1334548);
  uVar2 = REFG(undefined4, 0x133453c) << 0xb ^ REFG(undefined4, 0x133453c);
  REFG(undefined4, 0x133453c) = REFG(undefined4, 0x1334540);
  REFG(undefined4, 0x1334540) = REFG(undefined4, 0x1334544);
  uVar2 = (REFG(undefined4, 0x1334548) >> 0xb ^ uVar2) >> 8 ^ REFG(undefined4, 0x1334548) ^ uVar2;
  REFG(undefined4, 0x1334548) = uVar2;
  REFG(undefined4, 0x1334544) = uVar1;
  return GEN_X87(((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(uVar2 >> 9 | 0x3f800000))) - (float10)REFG(double, 0x1088130)))));
}

/* ref: FUN_00a4b840 */
GEN_OWN GEN_NOFRAME uint F_00a4b840(void)
{
  GEN_ENTER(0xa4b840u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x133453c) << 0xb ^ REFG(undefined4, 0x133453c);
  REFG(undefined4, 0x133453c) = REFG(undefined4, 0x1334540);
  REFG(undefined4, 0x1334540) = REFG(undefined4, 0x1334544);
  uVar1 = (REFG(undefined4, 0x1334548) >> 0xb ^ uVar1) >> 8 ^ REFG(undefined4, 0x1334548) ^ uVar1;
  REFG(undefined4, 0x1334544) = REFG(undefined4, 0x1334548);
  REFG(undefined4, 0x1334548) = uVar1;
  return uVar1;
}

/* ref: FUN_00a4b890 */
GEN_OWN GEN_FRAME ushort F_00a4b890(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4b890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = REFG(undefined4, 0x1334548);
  uVar2 = REFG(undefined4, 0x133453c) << 0xb ^ REFG(undefined4, 0x133453c);
  REFG(undefined4, 0x133453c) = REFG(undefined4, 0x1334540);
  REFG(undefined4, 0x1334540) = REFG(undefined4, 0x1334544);
  uVar2 = (REFG(undefined4, 0x1334548) >> 0xb ^ uVar2) >> 8 ^ REFG(undefined4, 0x1334548) ^ uVar2;
  REFG(undefined4, 0x1334548) = uVar2;
  iVar3 = ((int)(short)param_2 - (int)(short)param_1) * (uVar2 & 0xffff);
  REFG(undefined4, 0x1334544) = uVar1;
  return (short)(iVar3 + (iVar3 >> 0x1f & 0xffffU) >> 0x10) + (short)param_1;
}

/* ref: FUN_00a4b900 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a4b900(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4b900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10e5288));
  return;
}

/* ref: FUN_00a4b910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4b910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa4b910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint local_8;
  
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    uVar6 = param_1 + 0xf & 0xfffffff0;
    do {
      puVar1 = ((uint *)GEN_TOP(((int)this + 8)));
      uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), 0);
      uVar5 = uVar2 + uVar6;
      param_1 = uVar2;
      if (*((uint *)GEN_TOP(((int)this + 0x10))) <= uVar5) {
        param_1 = 0;
        uVar5 = uVar6;
      }
      uVar3 = _InterlockedCompareExchange((volatile long *)(puVar1), (long)(uVar5), (long)(uVar2));
    } while (uVar3 != uVar2);
    return *((int *)GEN_TOP(((int)this + 4))) + param_1;
  }
  uVar6 = param_1 + 0x1f & 0xfffffff0;
  do {
    do {
      puVar1 = ((uint *)GEN_TOP(((int)this + 0xc)));
      uVar5 = _InterlockedExchangeAdd((volatile long *)(puVar1), 0);
      if (uVar5 < uVar6) {
        return 0;
      }
      puVar1 = ((uint *)GEN_TOP(((int)this + 8)));
      uVar5 = _InterlockedExchangeAdd((volatile long *)(puVar1), 0);
      uVar2 = uVar5 + uVar6;
      local_8 = uVar5;
      if (*((uint *)GEN_TOP(((int)this + 0x10))) <= uVar5 + uVar6) {
        local_8 = 0;
        uVar2 = uVar6;
      }
      uVar3 = _InterlockedCompareExchange((volatile long *)(puVar1), (long)(uVar2), (long)(uVar5));
    } while (uVar3 != uVar5);
    LOCK();
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) - uVar6;
    UNLOCK();
    piVar4 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + local_8)));
  } while (piVar4 == ((int *)GEN_TOP(0x0)));
  *piVar4 = param_1;
  return (uint)(piVar4 + 4);
}

/* ref: FUN_00a4b9d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4b9d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4b9d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = param_2;
  if ((param_2 != 0) && (*((int *)GEN_TOP((in_ecx + 0x14))) == 0)) {
    puVar2 = ((uint *)GEN_TOP((in_ecx + 0xc)));
    uVar1 = _InterlockedExchangeAdd((volatile long *)(puVar2), (long)(*((int *)GEN_TOP((param_2 - 0x10)))));
  }
  return uVar1;
}

/* ref: FUN_00a4b9f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4b9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa4b9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5288));
  _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 8))))), (long)(0));
  _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 0xc))))), (long)(param_2));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  return (uint)this;
}

/* ref: FUN_00a4ba30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4ba30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa4ba30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = param_3;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10e5298));
  param_1[6] = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a4ba60 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00a4ba60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa4ba60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x448, 8, 4);
  int * this_00;
  uint uVar1;
  gen_size32 _Size;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x440)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x444));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x70)));
  this_00 = ((int *)GEN_TOP(((int)this + 0x70)));
  (*(uint *)(gen_frame + 0x38)) = param_1;
  if (iVar4 != *((int *)GEN_TOP(((int)this + 0x74)))) {
    F_00c46e20(iVar4,*((int *)GEN_TOP(((int)this + 0x74))),0);
    *((int *)GEN_TOP(((int)this + 0x74))) = iVar4;
  }
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = F_004cd3d0(&(*(uint *)(gen_frame + 0x0)),((char *)REFP(0x10e5238)),0x38);
  if (uVar1 != 0) {
    return 0;
  }
  (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x38));
  (*(undefined4 *)(gen_frame + 0x4)) = param_2;
  (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = ((undefined1 *)(gen_frame + 0x40));
  (*(int *)(gen_frame + 0x10)) = 0x400;
  (*(byte *)(gen_frame + 0x3f)) = 0;
  uVar1 = F_004cd510(&(*(uint *)(gen_frame + 0x0)),0);
  while (uVar1 != 1) {
    if (uVar1 != 0) goto LAB_00a4bc29;
    if ((*(int *)(gen_frame + 0x10)) == 0) {
      iVar3 = *((int *)GEN_TOP(((int)this + 0x74)));
      iVar4 = *this_00;
      uVar2 = iVar3 - iVar4;
      uVar1 = uVar2 + 0x400;
      (*(uint *)(gen_frame + 0x38)) = uVar2;
      if (uVar1 < uVar2) {
        iVar4 = iVar4 + uVar1;
        if (iVar4 != iVar3) {
          F_00c46e20(iVar4,iVar3,0);
          *((int *)GEN_TOP(((int)this + 0x74))) = iVar4;
        }
      }
      else if (uVar2 < uVar1) {
        F_00482530(this_00 GEN_EDX_ARG,(iVar4 - iVar3) + uVar1);
        _Size = (uVar1 - (int)*((undefined * PTR32 *)GEN_TOP(((int)this + 0x74)))) + *this_00;
        if (_Size != 0) {
          F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x74))),0,_Size);
        }
        *((uint *)GEN_TOP(((int)this + 0x74))) = *this_00 + uVar1;
      }
      F_00c46aa0(*this_00 + (*(uint *)(gen_frame + 0x38)),((undefined1 *)(gen_frame + 0x40)),0x400);
      (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = ((undefined1 *)(gen_frame + 0x40));
      (*(int *)(gen_frame + 0x10)) = 0x400;
    }
    uVar1 = F_004cd510(&(*(uint *)(gen_frame + 0x0)),0);
  }
  iVar4 = 0x400 - (*(int *)(gen_frame + 0x10));
  if (0 < iVar4) {
    iVar3 = *((int *)GEN_TOP(((int)this + 0x74))) - *this_00;
    F_00484510(this_00 GEN_EDX_ARG,iVar3 + iVar4);
    F_00c46aa0(*this_00 + iVar3,((undefined1 *)(gen_frame + 0x40)),iVar4);
  }
  (*(byte *)(gen_frame + 0x3f)) = 1;
LAB_00a4bc29: ;
  F_004ce970(&(*(uint *)(gen_frame + 0x0)));
  return (*(byte *)(gen_frame + 0x3f));
}

/* ref: FUN_00a4bc50 */
GEN_OWN_GS GEN_FRAME uint F_00a4bc50(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xa4bc50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  GEN_FRAME_DECL_GS(0x408, 8, 4);
  char cVar1;
  int iVar2;
  int iVar3;
  char * pcVar4;
  ulonglong uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x400)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x404));
  F_00c475c9(((char *)(gen_frame + 0x0)),0x400,param_2,((undefined *)&gen_args[2]));
  pcVar4 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar2 = param_1[1];
  iVar3 = *param_1;
  F_00484510(param_1 GEN_EDX_ARG,((int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1)) + (iVar2 - iVar3));
  uVar5 = F_00c46aa0(*param_1 + (iVar2 - iVar3),((char *)(gen_frame + 0x0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x0)) + 1));
  return (uint)uVar5;
}

/* ref: FUN_00a4bce0 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00a4bce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4bce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x62, 14, 4);
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x5a)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5e));
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x6)) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0xc))) + 8,REFG(undefined4, 0x108cc50));
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x6)) GEN_EDX_ARG);
  iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 4)));
  if (*((char *)GEN_TOP(((int)this + 0x15))) != '\0') {
    (*(undefined1 *)(gen_frame + 0x1)) = (undefined1)((uint)iVar3 >> 0x18);
    (*(undefined1 *)(gen_frame + 0x0)) = (undefined1)((uint)iVar3 >> 0x10);
    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x2)) + 0)) = CONCAT11((*(undefined1 *)(gen_frame + 0x0)),(*(undefined1 *)(gen_frame + 0x1)));
    gen_piece_set(&(*(int *)(gen_frame + 0x2)), 0, 3, (unsigned long long)(CONCAT12((char)((uint)iVar3 >> 8),(undefined2)(*(int *)(gen_frame + 0x2)))));
    (*(int *)(gen_frame + 0x2)) = CONCAT13((char)iVar3,(undefined3)(*(int *)(gen_frame + 0x2)));
    iVar3 = (*(int *)(gen_frame + 0x2));
  }
  uVar2 = *((int *)GEN_TOP(((int)this + 0xc))) + 8 + iVar3;
  if (uVar2 < *((uint *)GEN_TOP(((int)this + 8)))) {
    *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + 1;
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
  }
  uVar4 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 4)));
  if (*((char *)GEN_TOP(((int)this + 0x15))) != '\0') {
    (*(undefined1 *)(gen_frame + 0x1)) = (undefined1)((uint)uVar4 >> 0x18);
    (*(undefined1 *)(gen_frame + 0x0)) = (undefined1)((uint)uVar4 >> 0x10);
    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x2)) + 0)) = CONCAT11((*(undefined1 *)(gen_frame + 0x0)),(*(undefined1 *)(gen_frame + 0x1)));
    gen_piece_set(&(*(int *)(gen_frame + 0x2)), 0, 3, (unsigned long long)(CONCAT12((char)((uint)uVar4 >> 8),(undefined2)(*(int *)(gen_frame + 0x2)))));
    (*(int *)(gen_frame + 0x2)) = CONCAT13((char)uVar4,(undefined3)(*(int *)(gen_frame + 0x2)));
    uVar4 = (*(int *)(gen_frame + 0x2));
  }
  bVar1 = F_00a4ba60(this GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0xc))) + 8,uVar4);
  return bVar1;
}

/* ref: FUN_00a4bda0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4bda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa4bda0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  *((int *)GEN_TOP(((int)this + 8))) = param_1 + param_2;
  *((int *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined1 *)GEN_TOP(((int)this + 0x15))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e52a0));
  F_0042b630((int)this + 0x1c GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  F_00a4bce0(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00a4be10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a4be10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4be10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined1 uStack_a;
  undefined1 uStack_9;
  int local_8;
  
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 4)));
  if (*((char *)GEN_TOP(((int)this + 0x15))) != '\0') {
    uStack_9 = (undefined1)((uint)iVar2 >> 0x18);
    uStack_a = (undefined1)((uint)iVar2 >> 0x10);
    local_8 = CONCAT13((char)iVar2,CONCAT12((char)((uint)iVar2 >> 8),CONCAT11(uStack_a,uStack_9)));
    iVar2 = local_8;
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 0xc))) + 8 + iVar2;
  if (uVar1 < *((uint *)GEN_TOP(((int)this + 8)))) {
    *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + 1;
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
    if (-1 < *((int *)GEN_TOP(((int)this + 0x18)))) {
      F_00a4bce0(this GEN_EDX_FWD);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00a4be70 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00a4be70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa4be70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x460, 0, 4);
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  undefined * pvVar6;
  char * pcVar7;
  undefined * puVar8;
  undefined * puVar9;
  char * _Dst;
  int iVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x458)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x45c));
  iVar10 = *((int *)GEN_TOP(((int)this + 4)));
  (*(char * PTR32 *)(gen_frame + 0x50)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  (*(undefined4 *)(gen_frame + 0x38)) = param_2;
  if (iVar10 != *((int *)GEN_TOP(((int)this + 8)))) {
    F_00c46e20(iVar10,*((int *)GEN_TOP(((int)this + 8))),0);
    *((int *)GEN_TOP(((int)this + 8))) = iVar10;
  }
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  puVar9 = ((undefined *)GEN_TOP(0x0));
  _Dst = ((char *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = ((undefined *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x40)) = ((char *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar3 = F_004cb5f0(&(*(undefined4 *)(gen_frame + 0x0)),uVar2,((char *)REFP(0x10e5250)),0x38);
  if (uVar3 != 0) {
    return 0;
  }
  pcVar4 = (*(char * PTR32 *)(gen_frame + 0x50));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00a4c600(this GEN_EDX_ARG,REFG(undefined * PTR32, 0x1334534),(*(char * PTR32 *)(gen_frame + 0x50)),pcVar4 + (1 - (int)((*(char * PTR32 *)(gen_frame + 0x50)) + 1)));
  (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)(gen_frame + 0x38));
  (*(undefined4 *)(gen_frame + 0x4)) = param_3;
  (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = ((undefined1 *)(gen_frame + 0x58));
  (*(int *)(gen_frame + 0x10)) = 0x400;
  (*(byte *)(gen_frame + 0x57)) = 0;
  uVar3 = F_004c9b60(&(*(undefined4 *)(gen_frame + 0x0)),4);
  while (uVar3 != 1) {
    if (uVar3 != 0) goto LAB_00a4c0fc;
    if ((*(int *)(gen_frame + 0x10)) == 0) {
      pcVar7 = _Dst - (int)puVar9;
      pcVar4 = pcVar7 + 0x400;
      (*(char * PTR32 *)(gen_frame + 0x50)) = pcVar7;
      if (pcVar4 < pcVar7) {
        pcVar4 = pcVar4 + (int)puVar9;
        if (pcVar4 != _Dst) {
          F_00c46e20(pcVar4,_Dst,0);
LAB_00a4c03b: ;
          (*(char * PTR32 *)(gen_frame + 0x40)) = pcVar4;
          _Dst = pcVar4;
        }
      }
      else if (pcVar7 < pcVar4) {
        if (((char *)GEN_TOP((-1 - (int)(pcVar4 + ((int)puVar9 - (int)_Dst))))) < pcVar7) {
                    
          F_00c4579a(((char *)REFP(0x108497c)));
        }
        pcVar7 = pcVar7 + (int)(pcVar4 + ((int)puVar9 - (int)_Dst));
        pcVar5 = ((char *)GEN_TOP(((*(int *)(gen_frame + 0x44)) - (int)puVar9)));
        if (pcVar5 < pcVar7) {
          if (((char *)GEN_TOP((-1 - ((uint)((int)(uintptr_t)pcVar5) >> 1)))) < pcVar5) {
            pcVar5 = ((char *)GEN_TOP(0x0));
          }
          else {
            pcVar5 = pcVar5 + ((uint)((int)(uintptr_t)pcVar5) >> 1);
          }
          if (pcVar5 < pcVar7) {
            pcVar5 = pcVar7;
          }
          F_00481c90(&(*(undefined * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,pcVar5);
          puVar9 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
          _Dst = (*(char * PTR32 *)(gen_frame + 0x40));
        }
        if (pcVar4 + ((int)puVar9 - (int)_Dst) != ((char *)GEN_TOP(0x0))) {
          F_00c48350(_Dst,0,(gen_size32)(pcVar4 + ((int)puVar9 - (int)_Dst)));
        }
        pcVar4 = pcVar4 + (int)puVar9;
        goto LAB_00a4c03b;
      }
      F_00c46aa0((*(char * PTR32 *)(gen_frame + 0x50)) + (int)puVar9,((undefined1 *)(gen_frame + 0x58)),0x400);
      (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = ((undefined1 *)(gen_frame + 0x58));
      (*(int *)(gen_frame + 0x10)) = 0x400;
      this = (*(undefined * PTR32 *)(gen_frame + 0x4c));
    }
    uVar3 = F_004c9b60(&(*(undefined4 *)(gen_frame + 0x0)),4);
  }
  pvVar6 = ((undefined *)GEN_TOP((0x400 - (*(int *)(gen_frame + 0x10)))));
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = pvVar6;
  if (0 < (int)pvVar6) {
    iVar10 = (int)_Dst - (int)puVar9;
    F_00484510(&(*(undefined * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(int)pvVar6 + iVar10);
    puVar9 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
    F_00c46aa0((*(undefined * PTR32 *)(gen_frame + 0x3c)) + iVar10,((undefined1 *)(gen_frame + 0x58)),(*(undefined * PTR32 *)(gen_frame + 0x4c)));
    puVar8 = &REFG(undefined, 0x10e522d);
    if ((int)(*(char * PTR32 *)(gen_frame + 0x40)) - (int)puVar9 != 0) {
      puVar8 = puVar9;
    }
    F_00a4c6a0(this GEN_EDX_ARG,REFG(undefined * PTR32, 0x1334538),puVar8,(int)(*(char * PTR32 *)(gen_frame + 0x40)) - (int)puVar9);
  }
  (*(byte *)(gen_frame + 0x57)) = 1;
LAB_00a4c0fc: ;
  F_004ca370(&(*(undefined4 *)(gen_frame + 0x0)));
  if (puVar9 != ((undefined *)GEN_TOP(0x0))) {
    F_00406ad0(puVar9);
  }
  return (*(byte *)(gen_frame + 0x57));
}

/* ref: FUN_00a4c140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4c140(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa4c140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  param_1[1] = param_2;
  param_1[3] = param_2;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10e5280));
  param_1[2] = param_3 + param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x15))) = param_4;
  param_1[6] = 0;
  return (uint)param_1;
}

/* ref: ChunkRead_II_Data_System_Client::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4c190(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4c190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10e5280));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a4c1c0 */
GEN_OWN GEN_FRAME uint F_00a4c1c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa4c1c0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  uint local_8;
  
  local_8 = CONCAT13((char)(*(undefined4 *)&gen_args[0]),
                     CONCAT12((char)((uint)(*(undefined4 *)&gen_args[0]) >> 8),CONCAT11((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[0]) + 2)),(*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[0]) + 3)))));
  return local_8;
}

/* ref: FUN_00a4c1e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4c1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa4c1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = _InterlockedExchangeAdd((volatile long *)(((int *)this)), (long)(param_1));
  return iVar1 + param_1;
}

/* ref: Client::System::Data::Bit::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4c260(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4c260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10e5270));
  if ((param_1[3] & 0x80000000) == 0x80000000) {
    F_00406b30(param_1[4]);
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Data::Unique::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4c2a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4c2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10e5270));
  if ((param_1[3] & 0x80000000) == 0x80000000) {
    F_00406b30(param_1[4]);
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a4c2e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4c2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4c2e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined1 uStack_a;
  undefined1 uStack_9;
  uint local_8;
  
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 4)));
  if (*((char *)GEN_TOP(((int)this + 0x15))) != '\0') {
    uStack_9 = (undefined1)(uVar1 >> 0x18);
    uStack_a = (undefined1)(uVar1 >> 0x10);
    local_8 = CONCAT13((char)uVar1,CONCAT12((char)(uVar1 >> 8),CONCAT11(uStack_a,uStack_9)));
    uVar1 = local_8;
  }
  return uVar1;
}

/* ref: Client::System::Data::DmaBuffer::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4c350(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4c350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10e5288));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a4c380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4c380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4c380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  undefined1 uStack_a;
  undefined1 uStack_9;
  int local_8;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 4)));
  if (*((char *)GEN_TOP(((int)this + 0x15))) != '\0') {
    uStack_9 = (undefined1)((uint)iVar1 >> 0x18);
    uStack_a = (undefined1)((uint)iVar1 >> 0x10);
    local_8 = CONCAT13((char)iVar1,CONCAT12((char)((uint)iVar1 >> 8),CONCAT11(uStack_a,uStack_9)));
    iVar1 = local_8;
  }
  uVar2 = *((int *)GEN_TOP(((int)this + 0xc))) + 8 + iVar1;
  if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar2) {
    return 0xffffffff;
  }
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
  uVar2 = *((int *)GEN_TOP(((int)this + 0x18))) + 1;
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar2;
  return uVar2;
}

/* ref: FUN_00a4c3d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4c3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa4c3d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  if ((char)param_2 != '\0') {
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  }
  if (param_1 != 0) {
    do {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 4)));
      if (*((char *)GEN_TOP(((int)this + 0x15))) != '\0') {
        uStack_5 = (undefined1)((uint)iVar2 >> 0x18);
        uStack_6 = (undefined1)((uint)iVar2 >> 0x10);
        param_2 = CONCAT13((char)iVar2,
                           CONCAT12((char)((uint)iVar2 >> 8),CONCAT11(uStack_6,uStack_5)));
        iVar2 = param_2;
      }
      uVar1 = *((int *)GEN_TOP(((int)this + 0xc))) + 8 + iVar2;
      if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar1) {
        return 0xffffffff;
      }
      *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + 1;
      *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
      if (*((int *)GEN_TOP(((int)this + 0x18))) < 0) {
        return 0xffffffff;
      }
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  return *((uint *)GEN_TOP(((int)this + 0x18)));
}

/* ref: FUN_00a4c460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4c460(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa4c460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_3 != 0) {
    F_00481c90(param_1 + 1 GEN_EDX_FWD,param_3);
  }
  *(undefined1 *)(param_1 + 5) = param_2;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10e5290));
  return (uint)param_1;
}

/* ref: FUN_00a4c4a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a4c4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4c4a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5290));
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = F_00406ad0(*((int *)GEN_TOP(((int)this + 4))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return uVar1;
}

/* ref: ChunkWrite_II_Data_System_Client::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4c4d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4c4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10e5290));
  if (param_1[1] != 0) {
    F_00406ad0(param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a4c520 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a4c520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4c520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5290));
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = F_00406ad0(*((int *)GEN_TOP(((int)this + 4))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return uVar1;
}

/* ref: Client::System::Data::PackWrite::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4c550(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4c550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10e5290));
  if (param_1[1] != 0) {
    F_00406ad0(param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a4c5a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4c5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa4c5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint * this_00;
  uint uVar1;
  int iVar2;
  undefined4 local_8;
  
  this_00 = ((uint *)GEN_TOP(((int)this + 4)));
  iVar2 = *((int *)GEN_TOP(((int)this + 8))) - *this_00;
  if (*((char *)GEN_TOP(((int)this + 0x14))) != '\0') {
    local_8 = CONCAT22(CONCAT11((char)(*(undefined4 *)&gen_args[0]),(char)((uint)(*(undefined4 *)&gen_args[0]) >> 8)),
                       CONCAT11((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[0]) + 2)),(*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[0]) + 3))));
    uVar1 = F_00484510(this_00 GEN_EDX_FWD,iVar2 + 4);
    *((undefined4 *)GEN_TOP((*this_00 + iVar2))) = local_8;
    return uVar1;
  }
  F_00484510(this_00 GEN_EDX_ARG,iVar2 + 4);
  uVar1 = *this_00;
  *((undefined4 *)GEN_TOP((uVar1 + iVar2))) = (*(undefined4 *)&gen_args[0]);
  return uVar1;
}

/* ref: FUN_00a4c600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4c600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa4c600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  int * this_00;
  int iVar1;
  ulonglong uVar2;
  
  this_00 = ((int *)GEN_TOP(((int)this + 4)));
  iVar1 = *((int *)GEN_TOP(((int)this + 8))) - *this_00;
  F_00484510(this_00 GEN_EDX_FWD,iVar1 + 4);
  *((undefined4 *)GEN_TOP((*this_00 + iVar1))) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar1 = *((int *)GEN_TOP(((int)this + 8))) - *this_00;
  if (*((char *)GEN_TOP(((int)this + 0x14))) == '\0') {
    F_00484510(this_00 GEN_EDX_ARG,iVar1 + 4);
    *((int *)GEN_TOP((*this_00 + iVar1))) = (*(int *)&gen_args[2]);
  }
  else {
    (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(CONCAT13((char)(*(int *)&gen_args[2]),
                       CONCAT12((char)((uint)(*(int *)&gen_args[2]) >> 8),CONCAT11((*(undefined1 *)((char *)&(*(int *)&gen_args[2]) + 2)),(*(undefined1 *)((char *)&(*(int *)&gen_args[2]) + 3)))))));
    F_00484510(this_00 GEN_EDX_ARG,iVar1 + 4);
    *((undefined4 * PTR32 *)GEN_TOP((*this_00 + iVar1))) = (*(undefined4 * PTR32 *)&gen_args[0]);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8))) - *this_00;
  F_00484510(this_00 GEN_EDX_ARG,iVar1 + (*(int *)&gen_args[2]));
  uVar2 = F_00c46aa0(*this_00 + iVar1,(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[2]));
  return (uint)uVar2;
}

/* ref: FUN_00a4c6a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4c6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa4c6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  int * this_00;
  int iVar1;
  ulonglong uVar2;
  
  this_00 = ((int *)GEN_TOP(((int)this + 4)));
  iVar1 = *((int *)GEN_TOP(((int)this + 8))) - *this_00;
  F_00484510(this_00 GEN_EDX_FWD,iVar1 + 4);
  *((undefined4 *)GEN_TOP((*this_00 + iVar1))) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar1 = *((int *)GEN_TOP(((int)this + 8))) - *this_00;
  if (*((char *)GEN_TOP(((int)this + 0x14))) == '\0') {
    F_00484510(this_00 GEN_EDX_ARG,iVar1 + 4);
    *((int *)GEN_TOP((*this_00 + iVar1))) = (*(int *)&gen_args[2]);
  }
  else {
    (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(CONCAT13((char)(*(int *)&gen_args[2]),
                       CONCAT12((char)((uint)(*(int *)&gen_args[2]) >> 8),CONCAT11((*(undefined1 *)((char *)&(*(int *)&gen_args[2]) + 2)),(*(undefined1 *)((char *)&(*(int *)&gen_args[2]) + 3)))))));
    F_00484510(this_00 GEN_EDX_ARG,iVar1 + 4);
    *((undefined4 * PTR32 *)GEN_TOP((*this_00 + iVar1))) = (*(undefined4 * PTR32 *)&gen_args[0]);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8))) - *this_00;
  F_00484510(this_00 GEN_EDX_ARG,iVar1 + (*(int *)&gen_args[2]));
  uVar2 = F_00c46aa0(*this_00 + iVar1,(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[2]));
  return (uint)uVar2;
}

/* ref: FUN_00a4c740 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a4c740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4c740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e52a0));
  if (*((int *)GEN_TOP(((int)this + 0x70))) != 0) {
    F_00406ad0(*((int *)GEN_TOP(((int)this + 0x70))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5280));
  return (uint)uVar1;
}

/* ref: Client::System::Data::PackRead::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4c780(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4c780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10e52a0));
  if (param_1[0x1c] != 0) {
    F_00406ad0(param_1[0x1c]);
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  F_0042c880(param_1 + 7 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10e5280));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a4c7e0 */
GEN_OWN GEN_FRAME uint F_00a4c7e0(GEN_P(short * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa4c7e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  short sVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint local_c;
  char local_6;
  char local_5;
  
  local_c = 0;
  iVar9 = 1;
  iVar6 = param_3;
  if (param_3 == 0) {
    if (*param_1 == 0x30) {
      sVar1 = param_1[1];
      if ((sVar1 == 0x78) || (sVar1 == 0x58)) {
        iVar6 = 0x10;
      }
      else if ((sVar1 == 0x62) || (sVar1 == 0x42)) {
        iVar6 = 2;
      }
      else {
        iVar6 = 8;
      }
    }
    else {
      iVar6 = 10;
    }
  }
  uVar4 = iVar6 + 0x2f;
  uVar3 = uVar4 & 0xff;
  local_5 = '\0';
  local_6 = '\0';
  if (10 < iVar6) {
    local_5 = (char)iVar6 + 'V';
    uVar4 = 0x39;
    local_6 = (char)iVar6 + '6';
    uVar3 = 0x39;
  }
  iVar7 = param_2 - 1;
  if (iVar7 < 0) {
    return 0;
  }
  do {
    uVar2 = param_1[iVar7];
    uVar5 = (uint)uVar2;
    if ((uVar2 < 0x30) || ((int)(char)uVar4 < (int)uVar5)) {
      if (iVar6 < 0xb) {
LAB_00a4c8d8: ;
        if (uVar5 != 0x2d) {
          return local_c;
        }
        return -local_c;
      }
      if ((uVar2 < 0x61) || ((int)local_5 < (int)uVar5)) {
        if ((uVar2 < 0x41) || ((int)local_6 < (int)uVar5)) goto LAB_00a4c8d8;
        iVar8 = uVar5 - 0x37;
      }
      else {
        iVar8 = uVar5 - 0x57;
      }
    }
    else {
      iVar8 = uVar5 - 0x30;
    }
    iVar8 = iVar8 * iVar9;
    iVar9 = iVar9 * iVar6;
    local_c = local_c + iVar8;
    iVar7 = iVar7 - 1;
    uVar4 = uVar3;
    if (iVar7 < 0) {
      return local_c;
    }
  } while( true );
}

/* ref: FUN_00a4c8f0 */
GEN_OWN_GS GEN_FRAME uint F_00a4c8f0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(char * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa4c8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(char * param_5 = (char *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0x138, 8, 4);
  undefined * puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  char * pcVar7;
  char * pcVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x130)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x134));
  if (param_3 != (param_3 / 10) * 10) {
    if (param_4 != 5) {
      F_00c472af(((char *)(gen_frame + 0xa0)),0x80,((char *)REFP(0x10e5338)),param_2);
      goto LAB_00a4cd50;
    }
    if (*param_5 != '\0') {
      puVar2 = ((undefined *)GEN_TOP(((int)((int)(uintptr_t)param_2) / param_3)));
      iVar4 = (int)(((float10)((int)((int)(uintptr_t)param_2) % param_3) * (float10)REFG(double, 0x10944b8)) / (float10)param_3);
      pcVar7 = ((char *)REFP(0x10e5330));
override_prt_a4cd48_be99d3cb: ;
      F_00c472af(((char *)(gen_frame + 0xa0)),0x80,pcVar7,puVar2,param_5,iVar4);
      goto LAB_00a4cd50;
    }
    pcVar7 = ((char *)GEN_TOP((int)((float10)(int)((int)(uintptr_t)param_2) / (float10)param_3)));
    pcVar8 = "%d";
    goto LAB_00a4ccfc;
  }
  switch((unsigned int)(uintptr_t)(param_4)) {
  case 1: ;
    pcVar7 = param_2;
    if ((int)param_2 < 0) {
      pcVar7 = ((char *)GEN_TOP(-(int)param_2));
    }
    iVar4 = 0;
    if (0 < (int)pcVar7) {
      do {
        if (7 < iVar4) break;
        pcVar8 = ((char *)GEN_TOP(((int)((int)(uintptr_t)pcVar7) / 1000)));
        ((short *)(gen_frame + 0x11c))[(int)(iVar4 + 2)] = (short)pcVar7 + (short)pcVar8 * -1000;
        iVar4 = iVar4 + 1;
        pcVar7 = pcVar8;
      } while (0 < (int)pcVar8);
      if (iVar4 != 0) {
        puVar2 = &REFG(undefined, 0x10e52ac);
        if ((int)param_2 >= 0) {
          puVar2 = &REFG(undefined, 0x10e52aa);
        }
        F_00c472af(((char *)(gen_frame + 0xa0)),0x80,&REFG(undefined, 0x10e52b0),puVar2,(int)((short *)(gen_frame + 0x11c))[(int)(iVar4 + 1)]);
        for (iVar4 = iVar4 - 2; -1 < iVar4; iVar4 = iVar4 - 1) {
          F_00c472af(((undefined1 *)(gen_frame + 0x80)),0x20,((char *)REFP(0x10e52b8)),param_5,(int)((short *)(gen_frame + 0x11c))[(int)(iVar4 + 2)]);
          F_00c473c8(((char *)(gen_frame + 0xa0)),0x80,((undefined1 *)(gen_frame + 0x80)));
        }
        goto LAB_00a4cd50;
      }
    }
    pcVar7 = "0";
    break;
  case 2: ;
    bVar5 = (int)param_2 < 0;
    pcVar7 = param_2;
    if (bVar5) {
      pcVar7 = ((char *)GEN_TOP(-(int)param_2));
    }
    for (iVar4 = 0; (0 < (int)pcVar7 && (iVar4 < 8)); iVar4 = iVar4 + 1) {
      uVar3 = (uint)pcVar7 & 0x800003ff;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffc00) + 1;
      }
      ((short *)(gen_frame + 0x11c))[(int)(iVar4 + 2)] = (short)uVar3;
      pcVar7 = ((char *)GEN_TOP(((int)(pcVar7 + ((int)((int)(uintptr_t)pcVar7) >> 0x1f & 0x3ff)) >> 10)));
    }
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        puVar2 = &REFG(undefined, 0x10e52c4);
        if (!bVar5) {
          puVar2 = &REFG(undefined, 0x10e52ab);
        }
        F_00c472af(((char *)(gen_frame + 0xa0)),0x80,&REFG(undefined, 0x10e52c8),puVar2,(int)((short *)(gen_frame + 0x11c))[2]);
      }
      else {
        puVar2 = &REFG(undefined, 0x10e52d0);
        if (!bVar5) {
          puVar2 = &REFG(undefined, 0x10e52ae);
        }
        F_00c472af(((char *)(gen_frame + 0xa0)),0x80,((char *)REFP(0x10e52d4)),puVar2,(int)((short *)(gen_frame + 0x11c))[(int)(iVar4 + 1)],
                   (((short *)(gen_frame + 0x11c))[(int)(iVar4)] + 0x33) / 0x66,(int)(char)(&REFG(undefined, 0x10e538e))[(int)(iVar4)]);
      }
      goto LAB_00a4cd50;
    }
    pcVar7 = "0";
    break;
  case 3: ;
    F_00c472af(((char *)(gen_frame + 0xa0)),0x80,&REFG(undefined, 0x10e52e0),(int)((int)(uintptr_t)param_2) % 100);
    goto LAB_00a4cd50;
  case 4: ;
    bVar5 = (int)param_2 < 0;
    pcVar7 = param_2;
    if (bVar5) {
      pcVar7 = ((char *)GEN_TOP(-(int)param_2));
    }
    iVar4 = 0;
    if (0 < (int)pcVar7) {
      do {
        if (7 < iVar4) break;
        pcVar8 = ((char *)GEN_TOP(((int)((int)(uintptr_t)pcVar7) / 0x3c)));
        ((short *)(gen_frame + 0x11c))[(int)(iVar4 + 2)] = (short)pcVar7 + (short)pcVar8 * -0x3c;
        iVar4 = iVar4 + 1;
        pcVar7 = pcVar8;
      } while (0 < (int)pcVar8);
      if (iVar4 != 0) {
        if (iVar4 != 1) {
          puVar2 = &REFG(undefined, 0x10e5300);
          if (!bVar5) {
            puVar2 = &REFG(undefined, 0x10e52b5);
          }
          F_00c472af(((char *)(gen_frame + 0xa0)),0x80,&REFG(undefined, 0x10e5304),puVar2,(int)((short *)(gen_frame + 0x11c))[(int)(iVar4 + 1)]);
          for (iVar4 = iVar4 - 2; -1 < iVar4; iVar4 = iVar4 - 1) {
            F_00c472af(((undefined1 *)(gen_frame + 0x80)),0x20,((char *)REFP(0x10e530c)),param_5,(int)((short *)(gen_frame + 0x11c))[(int)(iVar4 + 2)]);
            F_00c473c8(((char *)(gen_frame + 0xa0)),0x80,((undefined1 *)(gen_frame + 0x80)));
          }
          goto LAB_00a4cd50;
        }
        puVar2 = &REFG(undefined, 0x10e52f0);
        if (!bVar5) {
          puVar2 = &REFG(undefined, 0x10e52af);
        }
        iVar4 = (int)((short *)(gen_frame + 0x11c))[2];
        pcVar7 = ((char *)REFP(0x10e52f4));
        goto override_prt_a4cd48_be99d3cb;
      }
    }
    pcVar8 = ((char *)REFP(0x10e52e8));
    pcVar7 = param_5;
    goto LAB_00a4ccfc;
  case 5: ;
    if (*param_5 == '\0') {
      F_00c472af(((char *)(gen_frame + 0xa0)),0x80,&REFG(undefined, 0x10e5314),(int)((int)(uintptr_t)param_2) / param_3);
    }
    else {
      fVar6 = ((float10)GEN_TOD(GEN_X87MATH((float10)param_3,3)));
      F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x80,((char *)REFP(0x10e5318)),(int)fVar6);
      F_00c472af(((char *)(gen_frame + 0xa0)),0x80,((undefined1 *)(gen_frame + 0x0)),(int)((int)(uintptr_t)param_2) / param_3,param_5,(int)((int)(uintptr_t)param_2) % param_3);
    }
    goto LAB_00a4cd50;
  default: ;
    pcVar8 = "%d";
    pcVar7 = param_2;
LAB_00a4ccfc: ;
    F_00c472af(((char *)(gen_frame + 0xa0)),0x80,pcVar8,pcVar7);
    goto LAB_00a4cd50;
  }
  F_00c472af(((char *)(gen_frame + 0xa0)),0x80,pcVar7);
LAB_00a4cd50: ;
  F_0042cc20(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0xa0)),REFG(undefined4, 0x108cc50));
  return (uint)param_1;
}

/* ref: FUN_00a4cda0 */
GEN_OWN_GS GEN_FRAME byte F_00a4cda0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4cda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_GS(0x24, 12, 4);
  ushort uVar1;
  short sVar2;
  uint uVar3;
  short * psVar4;
  int iVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20));
  uVar3 = F_0042a970(param_1 GEN_EDX_ARG);
  if (uVar3 == 0) {
    return 0;
  }
  (*(uint *)(gen_frame + 0x14)) = 7;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)((char *)&(*(short * PTR32 *)(gen_frame + 0x0)) + 0)) = 0;
  (*(short * PTR32 *)(gen_frame + 0x0)) = ((short *)GEN_TOP(((uint)(*(undefined2 *)((char *)&(*(short * PTR32 *)(gen_frame + 0x0)) + 2)) << 0x10)));
  F_0042eae0(param_1 GEN_EDX_ARG,&(*(short * PTR32 *)(gen_frame + 0x0)));
  iVar5 = (*(int *)(gen_frame + 0x10)) - 1;
  uVar3 = 0;
  if (-1 < iVar5) {
    do {
      psVar4 = (*(short * PTR32 *)(gen_frame + 0x0));
      if ((*(uint *)(gen_frame + 0x14)) < 8) {
        psVar4 = (short *)&(*(short * PTR32 *)(gen_frame + 0x0));
      }
      uVar1 = psVar4[iVar5];
      if ((ushort)(uVar1 - 0x30) < 10) {
        if (uVar3 < 10) {
          uVar3 = 10;
        }
      }
      else if ((((uVar1 < 0x61) || (0x66 < uVar1)) && ((uVar1 < 0x41 || (0x46 < uVar1)))) &&
              ((uVar1 != 0x78 && (uVar1 != 0x58)))) {
        if (uVar1 != 0x2d) {
          if (uVar3 != 0) {
            F_00403330(&(*(short * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            return param_2;
          }
          F_00403330(&(*(short * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          return 0;
        }
      }
      else if (uVar3 < 0x10) {
        uVar3 = 0x10;
      }
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
    if (uVar3 == 0x10) {
      if ((*(int *)(gen_frame + 0x10)) < 2) {
        if (7 < (*(uint *)(gen_frame + 0x14))) {
          F_00429760((*(short * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x14)) * 2 + 2,0x3d);
          return 0;
        }
      }
      else {
        psVar4 = (*(short * PTR32 *)(gen_frame + 0x0));
        if ((*(uint *)(gen_frame + 0x14)) < 8) {
          psVar4 = (short *)&(*(short * PTR32 *)(gen_frame + 0x0));
        }
        sVar2 = psVar4[1];
        psVar4 = (*(short * PTR32 *)(gen_frame + 0x0));
        if ((*(uint *)(gen_frame + 0x14)) < 8) {
          psVar4 = (short *)&(*(short * PTR32 *)(gen_frame + 0x0));
        }
        if ((*psVar4 == 0x30) &&
           ((((sVar2 == 0x78 || (sVar2 == 0x58)) || (sVar2 == 0x62)) || (sVar2 == 0x42))))
        goto LAB_00a4cf36;
        if (7 < (*(uint *)(gen_frame + 0x14))) {
          F_00429760((*(short * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x14)) * 2 + 2,0x3d);
        }
      }
      return 0;
    }
  }
LAB_00a4cf36: ;
  if (7 < (*(uint *)(gen_frame + 0x14))) {
    F_00429760((*(short * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x14)) * 2 + 2,0x3d);
  }
  return 1;
}

/* ref: FUN_00a4cf70 */
GEN_OWN_GS GEN_FRAME uint F_00a4cf70(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4cf70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x24, 12, 4);
  undefined4 * PTR32 * ppuVar1;
  uint uVar2;
  undefined4 * PTR32 * PTR32 * pppuVar3;
  uint uVar4;
  
  ppuVar1 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  GEN_COOKIE((*(uint *)(gen_frame + 0x1c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20));
  (*(uint *)(gen_frame + 0x14)) = 7;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 *)GEN_TOP(((uint)ppuVar1 & 0xffff0000)));
  F_0042eae0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x0)));
  uVar2 = (*(uint *)(gen_frame + 0x14));
  ppuVar1 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  pppuVar3 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((*(uint *)(gen_frame + 0x14)) < 8) {
    pppuVar3 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x0));
  }
  uVar4 = F_00a4c7e0(pppuVar3,(*(undefined4 *)(gen_frame + 0x10)),param_2);
  if (7 < uVar2) {
    F_00429760(ppuVar1,uVar2 * 2 + 2,0x3d);
  }
  return uVar4;
}

/* ref: FUN_00a4cff0 */
GEN_OWN_GS GEN_FRAME uint F_00a4cff0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa4cff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_FRAME_DECL_GS(0xb0, 0, 4);
  char cVar1;
  byte bVar2;
  undefined4 * PTR32 * PTR32 * pppuVar3;
  char * pcVar4;
  int iVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar7;
  uint uVar8;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  
  pppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  GEN_COOKIE((*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac));
  if (param_3 != 0) {
    uVar8 = 0;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(int *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar3 & 0xffffff00)));
    if (param_3 != 0) {
      do {
        F_00c472af(((char *)(gen_frame + 0x28)),0x80,
                   ((char *)REFP(0x10e5340)),
                   (uint)*((byte *)GEN_TOP((param_2 + uVar8))),(uint)*((byte *)GEN_TOP((param_2 + 1 + uVar8))),
                   (uint)*((byte *)GEN_TOP((param_2 + 2 + uVar8))),(uint)*((byte *)GEN_TOP((param_2 + 3 + uVar8))),
                   (uint)*((byte *)GEN_TOP((param_2 + 4 + uVar8))),(uint)*((byte *)GEN_TOP((param_2 + 5 + uVar8))),
                   (uint)*((byte *)GEN_TOP((param_2 + 6 + uVar8))),(uint)*((byte *)GEN_TOP((param_2 + 7 + uVar8))),
                   (uint)*((byte *)GEN_TOP((param_2 + 8 + uVar8))),(uint)*((byte *)GEN_TOP((param_2 + 9 + uVar8))),
                   (uint)*((byte *)GEN_TOP((param_2 + 10 + uVar8))),(uint)*((byte *)GEN_TOP((param_2 + 0xb + uVar8))),
                   (uint)*((byte *)GEN_TOP((param_2 + 0xc + uVar8))),(uint)*((byte *)GEN_TOP((param_2 + 0xd + uVar8))),
                   (uint)*((byte *)GEN_TOP((param_2 + 0xe + uVar8))),(uint)*((byte *)GEN_TOP((param_2 + 0xf + uVar8))));
        pcVar4 = ((char *)(gen_frame + 0x28));
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        F_00a4dd10(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)(gen_frame + 0x28)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x28)) + 1));
        (*(uint *)(gen_frame + 0x8)) = 0;
        do {
          bVar2 = *((byte *)GEN_TOP((param_2 + uVar8 + (*(uint *)(gen_frame + 0x8)))));
          if ((bVar2 < 0x20) || (0x7f < bVar2)) {
            ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
            if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
              ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
            }
            iVar5 = (int)ppppuVar6 + (*(int *)(gen_frame + 0x1c));
            ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
            if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
              ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
            }
            if (iVar5 != 0) {
              iVar5 = iVar5 - (int)ppppuVar6;
            }
            F_00a4da60(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,iVar5,1,0x2e);
          }
          else {
            (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),bVar2);
            ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
            if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
              ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
            }
            ppppuVar7 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
            if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
              ppppuVar7 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
            }
            if ((int)ppppuVar6 + (*(int *)(gen_frame + 0x1c)) == 0) {
              F_00a4da60(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,0,1,(*(undefined4 *)(gen_frame + 0x0)));
            }
            else {
              F_00a4da60(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,((int)ppppuVar6 + (*(int *)(gen_frame + 0x1c))) - (int)ppppuVar7,1,(*(undefined4 *)(gen_frame + 0x0)));
            }
          }
          (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
        } while ((*(uint *)(gen_frame + 0x8)) < 0x10);
        ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
          ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
        }
        iVar5 = (int)ppppuVar6 + (*(int *)(gen_frame + 0x1c));
        ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
          ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
        }
        if (iVar5 != 0) {
          iVar5 = iVar5 - (int)ppppuVar6;
        }
        F_00a4da60(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,iVar5,1,10);
        uVar8 = uVar8 + 0x10;
      } while (uVar8 < param_3);
    }
    uVar8 = uVar8 - param_3;
    iVar5 = (uVar8 >> 2) + uVar8 * 2;
    F_00a4dbb0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,((*(int *)(gen_frame + 0x1c)) - iVar5) - 0x14,iVar5,iVar5,0x20);
    F_00a4d820(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,((*(int *)(gen_frame + 0x1c)) - uVar8) - 1,0xffffffff);
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    iVar5 = (int)ppppuVar6 + (*(int *)(gen_frame + 0x1c));
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    if (iVar5 != 0) {
      iVar5 = iVar5 - (int)ppppuVar6;
    }
    F_00a4da60(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,iVar5,1,10);
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    F_0042cc20(param_1 GEN_EDX_ARG,ppppuVar6,REFG(undefined4, 0x108cc50));
    if (0xf < (*(uint *)(gen_frame + 0x20))) {
      F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x34);
    }
    return (uint)param_1;
  }
  F_0042cc20(param_1 GEN_EDX_ARG,&REFG(undefined, 0x10e52b6),REFG(undefined4, 0x108cc50));
  return (uint)param_1;
}

/* ref: FUN_00a4d300 */
GEN_OWN GEN_FRAME uint F_00a4d300(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4d300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0042a970(param_2 GEN_EDX_ARG);
  uVar2 = F_0042a990(param_2 GEN_EDX_ARG);
  F_00a4cff0(param_1,uVar2,uVar1);
  return param_1;
}

/* ref: FUN_00a4d330 */
GEN_OWN_GS GEN_FRAME uint F_00a4d330(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa4d330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_FRAME_DECL_GS(0x34, 12, 4);
  char cVar1;
  undefined4 * PTR32 * PTR32 * pppuVar2;
  char * pcVar3;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar4;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  pppuVar2 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  GEN_COOKIE((*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30));
  uVar7 = 0;
  (*(uint *)(gen_frame + 0x14)) = 0xf;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar2 & 0xffffff00)));
  if (param_3 != 0) {
    do {
      F_00c472af(((char *)(gen_frame + 0x1c)),0x10,&REFG(undefined, 0x10e5388),(uint)*((byte *)GEN_TOP((param_2 + uVar7))));
      pcVar3 = ((char *)(gen_frame + 0x1c));
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      F_00a4dd10(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x1c)),(int)pcVar3 - (int)(((char *)(gen_frame + 0x1c)) + 1));
      if ((uVar7 & 0xf) == 7) {
        ppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
        if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
          ppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
        }
        ppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
        if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
          ppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
        }
        if ((int)ppppuVar4 + (*(int *)(gen_frame + 0x10)) == 0) {
          uVar8 = 0x20;
          iVar6 = 0;
        }
        else {
          iVar6 = ((int)ppppuVar4 + (*(int *)(gen_frame + 0x10))) - (int)ppppuVar5;
          uVar8 = 0x20;
        }
LAB_00a4d3f6: ;
        F_00a4da60(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,iVar6,1,uVar8);
      }
      else if ((uVar7 & 0xf) == 0xf) {
        ppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
        if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
          ppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
        }
        iVar6 = (int)ppppuVar4 + (*(int *)(gen_frame + 0x10));
        ppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
        if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
          ppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
        }
        if (iVar6 != 0) {
          iVar6 = iVar6 - (int)ppppuVar4;
        }
        uVar8 = 10;
        goto LAB_00a4d3f6;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_3);
    ppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if (0xf < (*(uint *)(gen_frame + 0x14))) goto LAB_00a4d419;
  }
  ppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
LAB_00a4d419: ;
  iVar6 = (int)ppppuVar4 + (*(int *)(gen_frame + 0x10));
  ppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
    ppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
  }
  if (iVar6 != 0) {
    iVar6 = iVar6 - (int)ppppuVar4;
  }
  F_00a4da60(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,iVar6,1,10);
  ppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
    ppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
  }
  F_0042cc20(param_1 GEN_EDX_ARG,ppppuVar4,REFG(undefined4, 0x108cc50));
  if (0xf < (*(uint *)(gen_frame + 0x14))) {
    F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0],(*(uint *)(gen_frame + 0x14)) + 1,0x34);
  }
  return (uint)param_1;
}

/* ref: FUN_00a4d480 */
GEN_OWN GEN_FRAME uint F_00a4d480(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4d480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0042a970(param_2 GEN_EDX_ARG);
  uVar2 = F_0042a990(param_2 GEN_EDX_ARG);
  F_00a4d330(param_1,uVar2,uVar1);
  return param_1;
}

/* ref: FUN_00a4d520 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a4d520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa4d520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined * pvVar1;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = this;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar1 = *(undefined * PTR32 *)this;
    }
    if (pvVar1 <= param_1) {
      pvVar1 = this;
      if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
        pvVar1 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (int)pvVar1)))) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00a4d570 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a4d570(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4d570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x34);
  return (uint)uVar1;
}

/* ref: FUN_00a4d5a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a4d5a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4d5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x34);
  return uVar1;
}

/* ref: FUN_00a4d5d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4d5d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4d5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a4d600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4d600(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(gen_size32 param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa4d600u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(gen_size32 param_3 = (gen_size32)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  undefined * pvVar1;
  
  if (param_3 == 1) {
    if (0xf < (uint)param_1[5]) {
      param_1 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((byte *)GEN_TOP(((int)param_1 + param_2))) = param_4;
    return (uint)param_4;
  }
  if (0xf < (uint)param_1[5]) {
    param_1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  pvVar1 = F_00c48350(((undefined *)GEN_TOP(((int)param_1 + param_2))),(int)(char)param_4,param_3);
  return (uint)pvVar1;
}

/* ref: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos_00a4d640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4d640(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4d640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  in_ecx[4] = param_2;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = ((undefined4 *)GEN_TOP(*in_ecx));
  }
  *((undefined1 *)GEN_TOP(((int)in_ecx + param_2))) = 0;
  return param_2;
}

/* ref: FUN_00a4d660 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a4d660(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa4d660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 uVar1;
  
  if ((param_2 != '\0') && (0xf < (uint)param_1[5])) {
    uVar1 = *param_1;
    if (param_3 != 0) {
      F_00c46aa0(param_1,uVar1,param_3);
    }
    F_00429760(uVar1,param_1[5] + 1,0x34);
  }
  param_1[4] = param_3;
  param_1[5] = 0xf;
  *((undefined1 *)GEN_TOP((param_3 + (int)param_1))) = 0;
  return;
}

/* ref: FUN_00a4d6e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4d6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa4d6e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1 | 0xf;
  uVar5 = param_1;
  if (uVar4 != 0xffffffff) {
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
    uVar2 = uVar1 >> 1;
    uVar5 = uVar4;
    if ((uVar4 / 3 < uVar2) && (uVar5 = uVar2 + uVar1, -uVar2 - 2 < uVar1)) {
      uVar5 = 0xfffffffe;
    }
  }
  uVar4 = F_004296a0(uVar5 + 1,0,0x34);
  if (param_2 != 0) {
    pvVar3 = this;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(uVar4,pvVar3,param_2);
  }
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    F_00429760(*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 0x14))) + 1,0x34);
  }
  *(undefined1 *)this = 0;
  *(uint *)this = uVar4;
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar5;
  *((int *)GEN_TOP(((int)this + 0x10))) = param_2;
  if (uVar5 < 0x10) {
    *((undefined1 *)GEN_TOP(((int)this + param_2))) = 0;
    return uVar4;
  }
  *((undefined1 *)GEN_TOP((uVar4 + param_2))) = 0;
  return uVar4;
}

/* ref: FUN_00a4d7a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4d7a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa4d7a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a4d7b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4d7b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4d7b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  return *in_ecx - *param_2;
}

/* ref: FUN_00a4d7c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4d7c0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4d7c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a4d7f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a4d7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4d7f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 + 1,0x34);
    uVar1 = (uint)uVar2;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  return uVar1;
}

/* ref: FUN_00a4d820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4d820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa4d820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  uint uVar5;
  
  if (*((uint *)GEN_TOP(((int)this + 0x10))) < param_1) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x10))) - param_1;
  uVar5 = param_2;
  if (uVar2 < param_2) {
    uVar5 = uVar2;
  }
  if (uVar5 != 0) {
    pvVar4 = this;
    pvVar1 = this;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar4 = *(undefined * PTR32 *)this;
      pvVar1 = *(undefined * PTR32 *)this;
    }
    F_00c46e20((int)pvVar4 + param_1,(int)pvVar1 + uVar5 + param_1,uVar2 - uVar5)
    ;
    iVar3 = *((int *)GEN_TOP(((int)this + 0x10))) - uVar5;
    *((int *)GEN_TOP(((int)this + 0x10))) = iVar3;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      *((undefined1 *)GEN_TOP((*(int *)this + iVar3))) = 0;
      return (uint)this;
    }
    *((undefined1 *)GEN_TOP(((int)this + iVar3))) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a4d8b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4d8b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa4d8b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_2 == 0xffffffff) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  uVar1 = param_1[5];
  if (uVar1 < param_2) {
    F_00a4d6e0(param_1 GEN_EDX_ARG,param_2,param_1[4]);
    return (uint)(param_2 != 0);
  }
  if ((param_3 != '\0') && (param_2 < 0x10)) {
    uVar3 = param_1[4];
    if (param_2 < uVar3) {
      uVar3 = param_2;
    }
    if (0xf < uVar1) {
      uVar2 = *param_1;
      if (uVar3 != 0) {
        F_00c46aa0(param_1,uVar2,uVar3);
      }
      F_00429760(uVar2,param_1[5] + 1,0x34);
    }
    param_1[4] = uVar3;
    param_1[5] = 0xf;
    *((undefined1 *)GEN_TOP((uVar3 + (int)param_1))) = 0;
    return (uint)(param_2 != 0);
  }
  if (param_2 == 0) {
    param_1[4] = 0;
    if (0xf < uVar1) {
      param_1 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *(undefined1 *)param_1 = 0;
  }
  return (uint)(param_2 != 0);
}

/* ref: FUN_00a4d970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4d970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa4d970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  uVar2 = param_1[4] - param_2;
  uVar5 = param_3;
  if (uVar2 < param_3) {
    uVar5 = uVar2;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (-iVar1 - 1U <= uVar5) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (uVar5 != 0) {
    uVar2 = iVar1 + uVar5;
    if (uVar2 == 0xffffffff) {
                    
      F_00c4579a(((char *)REFP(0x10802b0)));
    }
    if (*((uint *)GEN_TOP(((int)this + 0x14))) < uVar2) {
      F_00a4d6e0(this GEN_EDX_ARG,uVar2,iVar1);
      if (uVar2 == 0) {
        return (uint)this;
      }
    }
    else if (uVar2 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
      if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
        **(undefined1 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined1 *)this = 0;
      return (uint)this;
    }
    puVar4 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar4 = ((undefined4 *)GEN_TOP(*param_1));
    }
    pvVar3 = this;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(*((int *)GEN_TOP(((int)this + 0x10))) + (int)pvVar3,(int)puVar4 + param_2,uVar5);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      *((undefined1 *)GEN_TOP((*(int *)this + uVar2))) = 0;
      return (uint)this;
    }
    *((undefined1 *)GEN_TOP(((int)this + uVar2))) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a4da60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4da60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa4da60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x10)));
  if (uVar2 < param_1) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  if (-uVar2 - 1 <= param_2) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (param_2 != 0) {
    uVar1 = uVar2 + param_2;
    if (uVar1 == 0xffffffff) {
                    
      F_00c4579a(((char *)REFP(0x10802b0)));
    }
    if (*((uint *)GEN_TOP(((int)this + 0x14))) < uVar1) {
      F_00a4d6e0(this GEN_EDX_ARG,uVar1,uVar2);
      if (uVar1 == 0) {
        return (uint)this;
      }
    }
    else if (uVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
      if (*((uint *)GEN_TOP(((int)this + 0x14))) < 0x10) {
        *(undefined1 *)this = 0;
        return (uint)this;
      }
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    pvVar4 = this;
    pvVar3 = this;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar4 = *(undefined * PTR32 *)this;
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46e20((int)pvVar4 + param_2 + param_1,(int)pvVar3 + param_1,
               *((int *)GEN_TOP(((int)this + 0x10))) - param_1);
    F_00a4d600(this GEN_EDX_ARG,param_1,param_2,(undefined1)param_3);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      *((undefined1 *)GEN_TOP((*(int *)this + uVar1))) = 0;
      return (uint)this;
    }
    *((undefined1 *)GEN_TOP(((int)this + uVar1))) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a4db60 */
GEN_OWN GEN_FRAME uint F_00a4db60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4db60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 == 0) {
    return 0;
  }
  return param_1 - param_2;
}

/* ref: FUN_00a4db80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4db80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa4db80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a4db90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4db90(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa4db90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *param_2 = *in_ecx + param_3;
  return (uint)param_2;
}

/* ref: FUN_00a4dbb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4dbb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa4dbb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined * pvVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  undefined * local_8;
  
  uVar5 = *((uint *)GEN_TOP(((int)this + 0x10)));
  if (uVar5 < param_1) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  uVar2 = uVar5 - param_1;
  uVar4 = param_2;
  if (uVar2 < param_2) {
    uVar4 = uVar2;
  }
  if (-param_3 - 1 <= uVar5 - uVar4) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (param_3 < uVar4) {
    pvVar3 = this;
    pvVar1 = this;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar3 = *(undefined * PTR32 *)this;
      pvVar1 = *(undefined * PTR32 *)this;
    }
    F_00c46e20((int)pvVar3 + param_3 + param_1,(int)pvVar1 + uVar4 + param_1,uVar2 - uVar4);
  }
  if ((param_3 != 0) || (uVar4 != 0)) {
    uVar5 = (*((int *)GEN_TOP(((int)this + 0x10))) - uVar4) + param_3;
    if (uVar5 == 0xffffffff) {
                    
      F_00c4579a(((char *)REFP(0x10802b0)));
    }
    if (*((uint *)GEN_TOP(((int)this + 0x14))) < uVar5) {
      F_00a4d6e0(this GEN_EDX_ARG,uVar5,*((int *)GEN_TOP(((int)this + 0x10))));
      if (uVar5 == 0) {
        return (uint)this;
      }
    }
    else if (uVar5 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
      if (*((uint *)GEN_TOP(((int)this + 0x14))) < 0x10) {
        *(undefined1 *)this = 0;
        return (uint)this;
      }
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    if (uVar4 < param_3) {
      pvVar1 = this;
      local_8 = this;
      if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
        local_8 = *(undefined * PTR32 *)this;
        pvVar1 = *(undefined * PTR32 *)this;
      }
      F_00c46e20((int)local_8 + param_3 + param_1,(int)pvVar1 + uVar4 + param_1,uVar2 - uVar4);
    }
    F_00a4d600(this GEN_EDX_ARG,param_1,param_3,(undefined1)param_4);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar5;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      *((undefined1 *)GEN_TOP((*(int *)this + uVar5))) = 0;
      return (uint)this;
    }
    *((undefined1 *)GEN_TOP(((int)this + uVar5))) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a4dd10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4dd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa4dd10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
    pvVar3 = this;
    if (0xf < uVar2) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    if (pvVar3 <= param_1) {
      pvVar3 = this;
      if (0xf < uVar2) {
        pvVar3 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (int)pvVar3)))) {
        if (0xf < uVar2) {
          uVar2 = F_00a4d970(this GEN_EDX_FWD,this,(int)param_1 - *(int *)this,param_2);
          return uVar2;
        }
        uVar2 = F_00a4d970(this GEN_EDX_ARG,this,(int)param_1 - (int)this,param_2);
        return uVar2;
      }
    }
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (-iVar1 - 1U <= param_2) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (param_2 != 0) {
    uVar2 = iVar1 + param_2;
    if (uVar2 == 0xffffffff) {
                    
      F_00c4579a(((char *)REFP(0x10802b0)));
    }
    if (*((uint *)GEN_TOP(((int)this + 0x14))) < uVar2) {
      F_00a4d6e0(this GEN_EDX_ARG,uVar2,iVar1);
      if (uVar2 == 0) {
        return (uint)this;
      }
    }
    else if (uVar2 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
      if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
        **(undefined1 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined1 *)this = 0;
      return (uint)this;
    }
    pvVar3 = this;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(*((int *)GEN_TOP(((int)this + 0x10))) + (int)pvVar3,param_1,param_2);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      *((undefined1 *)GEN_TOP((*(int *)this + uVar2))) = 0;
      return (uint)this;
    }
    *((undefined1 *)GEN_TOP(((int)this + uVar2))) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a4de30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4de30(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4de30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  if (0xf < (uint)in_ecx[5]) {
    *param_2 = in_ecx[4] + *in_ecx;
    return (uint)param_2;
  }
  *param_2 = in_ecx[4] + (int)in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a4de60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4de60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4de60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = ((undefined4 *)GEN_TOP(*in_ecx));
  }
  *param_2 = in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a4de80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4de80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa4de80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00a4dd10(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00a4deb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4deb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa4deb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * pvVar1;
  int iVar2;
  
  pvVar1 = this;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    pvVar1 = *(undefined * PTR32 *)this;
  }
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_2 - (int)pvVar1;
  }
  F_00a4da60(this GEN_EDX_FWD,iVar2,1,param_3);
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    this = *(undefined * PTR32 *)this;
  }
  *param_1 = (int)this + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00a4df00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4df00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa4df00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  pvVar3 = this;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    pvVar3 = *(undefined * PTR32 *)this;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10))) + (int)pvVar3;
  pvVar3 = this;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    pvVar3 = *(undefined * PTR32 *)this;
  }
  if (iVar1 != 0) {
    uVar2 = F_00a4da60(this GEN_EDX_FWD,iVar1 - (int)pvVar3,1,param_1);
    return uVar2;
  }
  uVar2 = F_00a4da60(this GEN_EDX_ARG,0,1,param_1);
  return uVar2;
}

/* ref: FUN_00a4df50 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a4df50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4df50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x8a))) = param_2;
  return param_2;
}

/* ref: FUN_00a4df60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4df60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4df60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x80))) = param_2;
  return param_2;
}

/* ref: FUN_00a4df70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4df70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4df70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x84))) = param_2;
  return param_2;
}

/* ref: FUN_00a4df80 */
GEN_OWN GEN_FRAME ulonglong GEN_THISCALL F_00a4df80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa4df80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return CONCAT44(*((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0xfc))),
                  *((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0xf8))));
}

/* ref: FUN_00a4dfa0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a4dfa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4dfa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  byte bVar1;
  
  bVar1 = (*((byte *)GEN_TOP((in_ecx + 0x90))) ^ param_2) & 1;
  *((byte *)GEN_TOP((in_ecx + 0x90))) = *((byte *)GEN_TOP((in_ecx + 0x90))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a4e020 */
GEN_OWN GEN_FRAME float10 F_00a4e020(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xa4e020u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00a4e040 */
GEN_OWN GEN_FRAME uint F_00a4e040(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa4e040u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_006b8c00()));
  uVar1 = F_006e2b90(this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00a4e070 */
GEN_OWN GEN_FRAME uint F_00a4e070(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa4e070u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_006b8c00()));
  uVar1 = F_006e2be0(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00a4e0a0 */
GEN_OWN GEN_FRAME uint F_00a4e0a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa4e0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_006b8c00()));
  uVar1 = F_006e2c50(this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Global::OnEventStart */
GEN_OWN GEN_FRAME uint F_00a4e0d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa4e0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_006b8c00()));
  uVar1 = F_006f0be0(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: Global::OnEventFinish */
GEN_OWN GEN_FRAME uint F_00a4e100(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa4e100u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_006b8c00();
  uVar1 = F_006fd010(uVar1 GEN_EDX_ARG,param_1,(undefined1)param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00a4e130 */
GEN_OWN GEN_FRAME uint F_00a4e130(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa4e130u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_006b8c00()));
  uVar1 = F_006e2cb0(this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00a4e160 */
GEN_OWN GEN_FRAME uint F_00a4e160(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8))
{
  GEN_ENTER(0xa4e160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = F_006b8c00();
  uVar1 = F_006e2d00(uVar1 GEN_EDX_ARG,param_1,param_2,param_3,(undefined1)param_4,param_5,param_6,param_7,
                       param_8,param_9);
  return uVar1;
}

/* ref: FUN_00a4e1a0 */
GEN_OWN GEN_FRAME uint F_00a4e1a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa4e1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_006b8c00()));
  uVar1 = F_006d9dd0(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00a4e1d0 */
GEN_OWN GEN_FRAME uint F_00a4e1d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa4e1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_006b8c00()));
  uVar1 = F_00703700(this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00a4e200 */
GEN_OWN GEN_FRAME uint F_00a4e200(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa4e200u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_006b8c00()));
  uVar1 = F_006e2fa0(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00a4e230 */
GEN_OWN GEN_FRAME uint F_00a4e230(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa4e230u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00a83530(&REFG(undefined, 0x14b1258) GEN_EDX_ARG,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00a4e250 */
GEN_OWN GEN_FRAME uint F_00a4e250(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4e250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  F_006b8c00();
  uVar1 = F_006b8d00(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a4e270 */
GEN_OWN GEN_FRAME uint F_00a4e270(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4e270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  F_006b8c00();
  uVar1 = F_006b8d20(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a4e290 */
GEN_OWN GEN_FRAME uint F_00a4e290(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa4e290u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  F_006b8c00();
  uVar1 = F_006b8d40(param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00a4e2c0 */
GEN_OWN GEN_FRAME uint F_00a4e2c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4e2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  F_006b8c00();
  uVar1 = F_006b8d70(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a4e2e0 */
GEN_OWN GEN_FRAME uint F_00a4e2e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa4e2e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  F_006b8c00();
  uVar1 = F_006b8d90(param_1);
  return uVar1;
}

/* ref: FUN_00a4e300 */
GEN_OWN GEN_FRAME uint F_00a4e300(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa4e300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  F_006b8c00();
  uVar1 = F_006b8db0(param_1);
  return uVar1;
}

/* ref: FUN_00a4e320 */
GEN_OWN GEN_FRAME uint F_00a4e320(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa4e320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  F_006b8c00();
  uVar1 = F_006b8dd0(param_1);
  return uVar1;
}

/* ref: FUN_00a4e340 */
GEN_OWN_GS GEN_FRAME uint F_00a4e340(GEN_P(int * in_ecx, unsigned int gen_a0), GEN_P(int * in_esi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa4e340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x124, 12, 4);
  uint uVar1;
  undefined * this;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined4 uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x11c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x120));
  if (in_ecx == ((int *)GEN_TOP(0x0))) {
    F_00c472af(((char *)(gen_frame + 0xa8)),0x72,((char *)REFP(0x10e5af0)));
  }
  else {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*in_ecx + 0xc))))(param_3);
    F_00c472af(((char *)(gen_frame + 0xa8)),0x72,((char *)REFP(0x10e5adc)),uVar1);
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((char *)(gen_frame + 0xa8)),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x10e5397),REFG(undefined4, 0x108cc50));
  uVar6 = 0;
  puVar5 = ((undefined1 *)(gen_frame + 0x54));
  puVar4 = ((undefined1 *)(gen_frame + 0x0));
  uVar3 = 1;
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0x28))))(in_esi GEN_EDX_ARG)));
  F_00459b00(this GEN_EDX_ARG,uVar3,puVar4,puVar5,uVar6);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_00a4e400 */
GEN_OWN GEN_FRAME uint F_00a4e400(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4e400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a64000(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(uint)*param_2,*(undefined4 *)(param_2 + 4));
  return uVar1;
}

/* ref: FUN_00a4e420 */
GEN_OWN GEN_FRAME unsigned int F_00a4e420(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4e420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  F_00a63f80(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,(uint)*param_2);
  return;
}

/* ref: FUN_00a4e440 */
GEN_OWN GEN_FRAME uint F_00a4e440(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4e440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  char cVar1;
  undefined * pvVar2;
  uint uVar3;
  
  pvVar2 = ((undefined *)GEN_TOP(F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1)));
  uVar3 = 0;
  if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
    cVar1 = *((char *)GEN_TOP(((int)pvVar2 + 0x166c)));
    *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x166c))) = param_2[2];
    *((undefined2 *)GEN_TOP(((int)pvVar2 + 0x1670))) = *(undefined2 *)(param_2 + 3);
    uVar3 = F_00aa1cc0(pvVar2 GEN_EDX_ARG,*param_2,param_2[1]);
    if ((cVar1 == '\0') && (REFG(void * PTR32, 0x1379694) == pvVar2)) {
      pvVar2 = ((undefined *)GEN_TOP(F_006b8c00()));
      uVar3 = F_006df000(pvVar2 GEN_EDX_ARG);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00a4e4b0 */
GEN_OWN GEN_FRAME uint F_00a4e4b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4e4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined * this;
  
  piVar1 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0xd4))))(REFG(int * PTR32, 0x1379694) GEN_EDX_ARG);
    in_EAX = 0;
    if (uVar2 != 0) {
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xd4))))(piVar1 GEN_EDX_ARG)));
      in_EAX = F_00b7ba00(this GEN_EDX_ARG,param_2);
    }
  }
  return in_EAX;
}

/* ref: FUN_00a4e4f0 */
GEN_OWN GEN_FRAME uint F_00a4e4f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4e4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ab1510(&REFG(undefined4, 0x14bcc80) GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a4e510 */
GEN_OWN GEN_FRAME uint F_00a4e510(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4e510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ac9b30(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a4e520 */
GEN_OWN GEN_NOFRAME uint F_00a4e520(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4e520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x4c8, 8);
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  (*(uint *)(gen_frame + 0x4b4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4b8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_2 + 0xe);
  uVar1 = *(undefined4 *)(param_2 + 8);
  (*(undefined2 *)(gen_frame + 0x8)) = *param_2;
  (*(undefined1 *)(gen_frame + 0xa)) = *(undefined1 *)(param_2 + 1);
  (*(undefined1 *)(gen_frame + 0xb)) = *((undefined1 *)GEN_TOP(((int)param_2 + 3)));
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_2 + 2);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + 6);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_2 + 4);
  (*(undefined4 *)(gen_frame + 0x0)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
  (*(undefined1 *)(gen_frame + 0x1e)) = 1;
  puVar5 = (undefined4 *)(param_2 + 0x12);
  puVar6 = ((undefined4 *)(gen_frame + 0x24));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  (*(undefined4 *)(gen_frame + 0x428)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x42c)) = *(undefined4 *)(param_2 + 0xe);
  (*(undefined4 *)(gen_frame + 0x4a8)) = 0;
  (*(undefined2 *)(gen_frame + 0x4ac)) = 0;
  (*(undefined2 *)(gen_frame + 0x1c)) = param_2[10];
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(param_2 + 0x10);
  uVar3 = F_00ac9b30(param_1,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_00a4e610 */
GEN_OWN_GS GEN_FRAME uint F_00a4e610(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4e610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  pvVar2 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((param_2 + 8))))));
  if ((pvVar2 != ((undefined *)GEN_TOP(0x0))) &&
     (pvVar2 = ((undefined *)GEN_TOP(F_00a37da0(pvVar2 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((param_2 + 10)))))), pvVar2 != ((undefined *)GEN_TOP(0x0))))
  {
    (*(undefined4 *)(gen_frame + 0x0)) = 9999;
    (*(undefined2 *)(gen_frame + 0x4)) = 0;
    (*(undefined1 *)(gen_frame + 0x6)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0x75300000;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined2 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2a)) = 0;
    (*(undefined2 *)(gen_frame + 0x2e)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined1 *)(gen_frame + 0x38)) = 0;
    F_00a3bd60(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,pvVar2);
    F_00a35f30(pvVar2 GEN_EDX_ARG);
    F_00a35ee0(pvVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 0x10))),1);
    F_00a35f80(pvVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 0xc))));
    *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x18))) = *((undefined4 *)GEN_TOP((param_2 + 0x18)));
    *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x1c))) = *((undefined4 *)GEN_TOP((param_2 + 0x1c)));
    *((undefined1 *)GEN_TOP(((int)pvVar2 + 0x14))) = *((undefined1 *)GEN_TOP((param_2 + 0x20)));
    *((undefined2 *)GEN_TOP(((int)pvVar2 + 0x12))) = *((undefined2 *)GEN_TOP((param_2 + 0x22)));
    *((undefined2 *)GEN_TOP(((int)pvVar2 + 0x10))) = *((undefined2 *)GEN_TOP((param_2 + 0x24)));
    *((undefined1 *)GEN_TOP(((int)pvVar2 + 0x2f))) = *((undefined1 *)GEN_TOP((param_2 + 0x26)));
    *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x30))) = *((undefined4 *)GEN_TOP((param_2 + 0x28)));
    *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x20))) = *((undefined4 *)GEN_TOP((param_2 + 0x2c)));
    *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x24))) = *((undefined4 *)GEN_TOP((param_2 + 0x30)));
    *((undefined2 *)GEN_TOP(((int)pvVar2 + 0x28))) = *((undefined2 *)GEN_TOP((param_2 + 0x34)));
    *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x2a))) = *((undefined4 *)GEN_TOP((param_2 + 0x36)));
    *((undefined1 *)GEN_TOP(((int)pvVar2 + 0x2e))) = *((undefined1 *)GEN_TOP((param_2 + 0x3a)));
    *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x34))) = *((undefined4 *)GEN_TOP((param_2 + 0x3b)));
    *((undefined1 *)GEN_TOP(((int)pvVar2 + 0x38))) = *((undefined1 *)GEN_TOP((param_2 + 0x3f)));
    uVar3 = F_00a3eb60(pvVar2,&(*(undefined4 *)(gen_frame + 0x0)));
    if (uVar3 != 0) {
      F_00a42ea0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,pvVar2,&(*(undefined4 *)(gen_frame + 0x0)),(char)uVar3);
    }
    F_00a376a0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((param_2 + 8))),(uint)*((ushort *)GEN_TOP((param_2 + 10))));
    F_00ab24a0(*((undefined4 *)GEN_TOP((param_2 + 0x10))));
  }
  F_00a3a720();
  bVar1 = F_00a366d0((uint)*((ushort *)GEN_TOP((param_2 + 8))));
  if (bVar1 != 0) {
    *(undefined4 *)&REFG(undefined, 0x14a7228) = 0;
  }
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a4e7a0 */
GEN_OWN GEN_FRAME uint F_00a4e7a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4e7a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((param_2 + 8))))));
  uVar2 = 0;
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = ((undefined *)GEN_TOP(F_00a37da0(pvVar1 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((param_2 + 10))))));
    uVar2 = 0;
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      F_00a35f30(pvVar1 GEN_EDX_ARG);
      F_00a35ee0(pvVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 0x10))),1);
      F_00a35f80(pvVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 0xc))));
      *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x18))) = *((undefined4 *)GEN_TOP((param_2 + 0x18)));
      *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x1c))) = *((undefined4 *)GEN_TOP((param_2 + 0x1c)));
      *((undefined1 *)GEN_TOP(((int)pvVar1 + 0x14))) = *((undefined1 *)GEN_TOP((param_2 + 0x20)));
      *((undefined2 *)GEN_TOP(((int)pvVar1 + 0x12))) = *((undefined2 *)GEN_TOP((param_2 + 0x22)));
      *((undefined2 *)GEN_TOP(((int)pvVar1 + 0x10))) = *((undefined2 *)GEN_TOP((param_2 + 0x24)));
      *((undefined1 *)GEN_TOP(((int)pvVar1 + 0x2f))) = *((undefined1 *)GEN_TOP((param_2 + 0x26)));
      *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x30))) = *((undefined4 *)GEN_TOP((param_2 + 0x28)));
      *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x20))) = *((undefined4 *)GEN_TOP((param_2 + 0x2c)));
      *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x24))) = *((undefined4 *)GEN_TOP((param_2 + 0x30)));
      *((undefined2 *)GEN_TOP(((int)pvVar1 + 0x28))) = *((undefined2 *)GEN_TOP((param_2 + 0x34)));
      *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2a))) = *((undefined4 *)GEN_TOP((param_2 + 0x36)));
      *((undefined1 *)GEN_TOP(((int)pvVar1 + 0x2e))) = *((undefined1 *)GEN_TOP((param_2 + 0x3a)));
      *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x34))) = *((undefined4 *)GEN_TOP((param_2 + 0x3b)));
      *((undefined1 *)GEN_TOP(((int)pvVar1 + 0x38))) = *((undefined1 *)GEN_TOP((param_2 + 0x3f)));
      uVar2 = F_00ab24a0(*((undefined4 *)GEN_TOP((param_2 + 0x10))));
    }
  }
  return uVar2;
}

/* ref: FUN_00a4e870 */
GEN_OWN GEN_FRAME uint F_00a4e870(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4e870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((param_2 + 4))))));
  uVar2 = 0;
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = ((undefined *)GEN_TOP(F_00a37da0(pvVar1 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((param_2 + 6))))));
    uVar2 = 0;
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      F_00a35f30(pvVar1 GEN_EDX_ARG);
      F_00a35ee0(pvVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 0x10))),1);
      F_00a35f80(pvVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 8))));
      uVar2 = F_00ab24a0(*((undefined4 *)GEN_TOP((param_2 + 0x10))));
    }
  }
  return uVar2;
}

/* ref: FUN_00a4e8d0 */
GEN_OWN GEN_FRAME uint F_00a4e8d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4e8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * pvVar1;
  undefined * this;
  uint uVar2;
  int iVar3;
  undefined4 * this_00;
  undefined * this_01;
  
  pvVar1 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((param_2 + 4))))));
  this = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((param_2 + 0xc))))));
  this_01 = ((undefined *)GEN_TOP(0x0));
  this_00 = ((undefined4 *)GEN_TOP(0x0));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    this_01 = ((undefined *)GEN_TOP(F_00a37da0(pvVar1 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((param_2 + 6))))));
  }
  if (this != ((undefined *)GEN_TOP(0x0))) {
    this_00 = ((undefined4 *)GEN_TOP(F_00a37da0(this GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((param_2 + 0xe))))));
  }
  if ((this_01 != ((undefined *)GEN_TOP(0x0))) && (this_00 != ((undefined4 *)GEN_TOP(0x0)))) {
    F_00a35f30(this_01 GEN_EDX_ARG);
    F_00a35f80(this_01 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 8))));
    *((undefined1 *)GEN_TOP(((int)this_01 + 6))) = 1;
    F_00a3be70(this_01 GEN_EDX_ARG,*this_00,(uint)*(ushort *)(this_00 + 1));
    if (*((char *)GEN_TOP(((int)this_00 + 6))) != '\0') {
      pvVar1 = ((undefined *)GEN_TOP(F_00a3a860(this_00 GEN_EDX_ARG)));
      uVar2 = F_0046e5e0(pvVar1 GEN_EDX_ARG);
      uVar2 = F_00ab24a0(uVar2);
      return uVar2;
    }
    iVar3 = this_00[2];
    if ((*(byte *)(this_00 + 5) & 1) != 0) {
      iVar3 = iVar3 + 1000000;
    }
    this_00 = ((undefined4 *)GEN_TOP(F_00ab24a0(iVar3)));
  }
  return (uint)this_00;
}

/* ref: FUN_00a4e9a0 */
GEN_OWN GEN_FRAME uint F_00a4e9a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4e9a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ab56a0(&REFG(undefined4, 0x14bcc80) GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00a4e9c0 */
GEN_OWN GEN_FRAME uint F_00a4e9c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4e9c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  byte * pbVar3;
  undefined4 * puVar4;
  
  uVar1 = (uint)*param_2;
  iVar2 = 0;
  REFG(undefined4, 0x14aa744) = uVar1;
  if (*param_2 != 0) {
    pbVar3 = param_2 + 4;
    puVar4 = &REFG(undefined4, 0x14a9e88);
    do {
      puVar4[-1] = *(undefined4 *)pbVar3;
      *puVar4 = *(undefined4 *)(pbVar3 + 4);
      uVar1 = F_00aadfc0(&REFG(undefined, 0x14b5ef0) GEN_EDX_ARG,*(undefined4 *)pbVar3);
      F_00c49908(puVar4 - 0x11,0x40,uVar1);
      uVar1 = (uint)*param_2;
      iVar2 = iVar2 + 1;
      pbVar3 = pbVar3 + 8;
      puVar4 = puVar4 + 0x12;
    } while (iVar2 < (int)uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a4ea20 */
GEN_OWN GEN_FRAME uint F_00a4ea20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4ea20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  uint * puVar3;
  uint * puVar4;
  
  uVar1 = (uint)*param_2;
  iVar2 = 0;
  REFG(undefined4, 0x14ab04c) = uVar1;
  if (*param_2 != 0) {
    puVar3 = (uint *)(param_2 + 4);
    puVar4 = &REFG(undefined4, 0x14aa790);
    do {
      puVar4[-1] = *puVar3;
      *puVar4 = (uint)(byte)puVar3[1];
      uVar1 = F_00aadfc0(&REFG(undefined, 0x14b5ef0) GEN_EDX_ARG,*puVar3);
      F_00c49908(puVar4 - 0x11,0x40,uVar1);
      uVar1 = (uint)*param_2;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 0x12;
    } while (iVar2 < (int)uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a4ea80 */
GEN_OWN GEN_NOFRAME uint F_00a4ea80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4ea80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  int * this;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  F_00ae3900(&REFG(undefined, 0x14c0878) GEN_EDX_ARG,*param_2,0,0,(uint)*((byte *)GEN_TOP(((int)param_2 + 0xe))));
  this = ((int *)GEN_TOP(F_00ae1300(&REFG(undefined, 0x14c0878) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)param_2 + 0xe))))));
  uVar2 = 0;
  if (this != ((int *)GEN_TOP(0x0))) {
    F_00a5f570(this GEN_EDX_ARG,*((undefined1 *)GEN_TOP(((int)param_2 + 0x12))));
    this[0x79] = (uint)*(byte *)(param_2 + 4);
    *((undefined1 *)GEN_TOP(((int)this + 0x1e2))) = *((undefined1 *)GEN_TOP(((int)param_2 + 0x13)));
    this[0x61] = param_2[5];
    F_00ae2700(this GEN_EDX_ARG,GEN_ARGF(gen_bits2f(param_2[6])));
    this[99] = param_2[7];
    F_00a5f530(this GEN_EDX_ARG,param_2[8]);
    this[0x7b] = (uint)*(byte *)(param_2 + 9);
    if (*((char *)GEN_TOP(((int)param_2 + 0xf))) != '\0') {
      F_00ae1700(this GEN_EDX_ARG);
      this[0x74] = (uint)*((byte *)GEN_TOP(((int)param_2 + 0x11)));
      (*(float *)(gen_frame + 0x1c)) = 0.0;
      if (*((char *)GEN_TOP(((int)param_2 + 0x11))) != '\0') {
        (*(int * PTR32 *)(gen_frame + 0x18)) = param_2 + 0xb;
        do {
          piVar1 = ((int *)GEN_TOP(F_00ae1540(this GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c))))));
          *piVar1 = *(*(int * PTR32 *)(gen_frame + 0x18));
          (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x18)) + 1;
          uVar2 = (int)gen_fl2bits((*(float *)(gen_frame + 0x1c))) + 1;
          (*(float *)(gen_frame + 0x1c)) = gen_bits2f(uVar2);
        } while (uVar2 < *((byte *)GEN_TOP(((int)param_2 + 0x11))));
      }
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00a5feb0(this GEN_EDX_ARG)));
    (*(undefined4 *)(gen_frame + 0x0)) = *puVar3;
    (*(undefined4 *)(gen_frame + 0x4)) = puVar3[1];
    (*(undefined4 *)(gen_frame + 0x8)) = puVar3[2];
    F_00af2610(&(*(undefined4 *)(gen_frame + 0x0)),*(float *)&REFG(undefined, 0x10e5c58),GEN_ARGF(gen_bits2f(this[0x30])),&(*(undefined4 *)(gen_frame + 0x4)),REFG(float, 0x1090708),0,0
                 ,0,0,0,0,0,3,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x3c))))(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP((uint)*(ushort *)(param_2 + 3)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP((uint)*((ushort *)GEN_TOP(((int)param_2 + 0x2a)))));
    fVar4 = (float10)*(double *)&REFG(undefined, 0x10928e8);
    (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF((((float10)*(ushort *)(param_2 + 3) *
                       (((float10)*(float *)&REFG(undefined, 0x1334840) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                       (float10)REFG(double, 0x109cab0))) * fVar4 - (float10)*(double *)&REFG(undefined, 0x1080228))));
    fVar5 = (float10)*(double *)&REFG(undefined, 0x10a3960);
    fVar6 = (float10)*(double *)&REFG(undefined, 0x10912a8);
    (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)*((ushort *)GEN_TOP(((int)param_2 + 0x2a))) * fVar5) * fVar4 - fVar6))))));
    (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP((uint)*(ushort *)(param_2 + 10)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)*(ushort *)(param_2 + 10) * fVar5) * fVar4 - fVar6))))));
    (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP((uint)*((ushort *)GEN_TOP(((int)param_2 + 0x26)))));
    (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)*((ushort *)GEN_TOP(((int)param_2 + 0x26))) * fVar5) * fVar4 - fVar6))))));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x40))))(this GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x48))))(this GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c))));
    F_00a5f450(this GEN_EDX_ARG,param_2[1]);
    F_00a5f430(this GEN_EDX_ARG,param_2[2]);
    this[0x20] = *param_2;
    uVar2 = F_00ae1930(this GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: Global::OnDeleteObject */
GEN_OWN GEN_FRAME uint F_00a4ecc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4ecc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ae1300(&REFG(undefined, 0x14c0878) GEN_EDX_ARG,(uint)*param_2);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00ae24a0(&REFG(undefined, 0x14c0878) GEN_EDX_ARG,(uint)*param_2);
  }
  return uVar2;
}

/* ref: FUN_00a4ecf0 */
GEN_OWN GEN_FRAME uint F_00a4ecf0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4ecf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = 0;
  uVar1 = F_00aafcd0();
  if (uVar1 != 0) {
    do {
      uVar1 = F_00ab2290(uVar2);
      if (*((char *)GEN_TOP((uVar1 + 0x25))) != -1) {
        F_00a68530(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,uVar2,*((undefined4 *)GEN_TOP((param_2 + *((char *)GEN_TOP((uVar1 + 0x25))) * 4))));
      }
      uVar2 = uVar2 + 1;
      uVar1 = F_00aafcd0();
    } while (uVar2 < uVar1);
  }
  uVar1 = 0;
  puVar3 = ((undefined4 *)GEN_TOP((param_2 + 0xa0)));
  do {
    uVar1 = uVar1 + 1;
    F_00a684f0(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,uVar1,*puVar3);
    puVar3 = puVar3 + 1;
  } while (uVar1 < 6);
  return uVar1;
}

/* ref: FUN_00a4ed60 */
GEN_OWN GEN_FRAME uint F_00a4ed60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4ed60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this;
  uint uVar2;
  
  uVar2 = (uint)(REFG(undefined1, 0x14ab0d4) != *param_2);
  uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)*param_2,0);
  if (((short)uVar1 != *(short *)(param_2 + 2)) ||
     (uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)*param_2,1), (short)uVar1 != *(short *)(param_2 + 4))
     ) {
    uVar2 = uVar2 | 2;
  }
  F_00a7e4e0(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)*param_2);
  F_00a7e510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)*param_2,(uint)*(ushort *)(param_2 + 2));
  F_00a7e5a0(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)*(ushort *)(param_2 + 4));
  F_00a68400(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)*param_2,*(undefined4 *)(param_2 + 8));
  *(undefined4 *)&REFG(undefined, 0x14ab2c4) = *(undefined4 *)(param_2 + 0xc);
  if ((uVar2 & 2) != 0) {
    F_00a6e6a0(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG);
  }
  this = ((undefined *)GEN_TOP(F_006b8c00()));
  uVar1 = F_006de4e0(this GEN_EDX_ARG,uVar2);
  return uVar1;
}

/* ref: FUN_00a4ee20 */
GEN_OWN GEN_FRAME uint F_00a4ee20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4ee20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint in_EAX = 0;
  int * piVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ushort * puVar12;
  int iVar13;
  float fVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  int local_1c;
  uint local_c;
  uint local_8;
  
  if (REFG(int, 0x1379c70) != 3) {
    piVar5 = ((int *)GEN_TOP(F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1)));
    uVar2 = 0;
    uVar1 = 0;
    uVar4 = 0;
    uVar3 = 0;
    local_c = 0;
    local_8 = 0;
    uVar6 = F_00ab21a0((uint)*((byte *)GEN_TOP(((int)param_2 + 9))));
    if (*((int *)GEN_TOP((uVar6 + 0x10))) == 0x20) {
      uVar3 = *(undefined2 *)(param_2 + 4);
      uVar4 = *(undefined2 *)(param_2 + 6);
    }
    else if (*((int *)GEN_TOP((uVar6 + 0x10))) == 0x21) {
      uVar1 = *(undefined2 *)(param_2 + 4);
      uVar2 = *(undefined2 *)(param_2 + 6);
    }
    else {
      local_8 = (uint)*(ushort *)(param_2 + 4);
      local_c = (uint)*(ushort *)(param_2 + 6);
    }
    if (piVar5 != ((int *)GEN_TOP(0x0))) {
      piVar7 = ((int *)GEN_TOP(F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1)));
      if (piVar7 != ((int *)GEN_TOP(0x0))) {
        uVar16 = *(undefined1 *)(param_2 + 2);
        uVar15 = *param_2;
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xdc))))(piVar7 GEN_EDX_ARG);
        uVar6 = F_00ac3bb0(uVar6 GEN_EDX_ARG,uVar15,uVar16);
        if (uVar6 != 0) {
          if (*((int *)GEN_TOP((uVar6 + 0x14))) == param_1) {
            *((undefined1 *)GEN_TOP((uVar6 + 0x18))) = 1;
          }
          if (*((int *)GEN_TOP((uVar6 + 0x3c))) == param_1) {
            *((undefined1 *)GEN_TOP((uVar6 + 0x40))) = 1;
          }
        }
      }
      *(undefined1 *)(piVar5 + 0x5a2) = *((undefined1 *)GEN_TOP(((int)param_2 + 9)));
      piVar5[0x5a4] = param_2[3];
      piVar5[0x5a5] = param_2[5];
      piVar5[0x5a6] = local_8;
      *((undefined2 *)GEN_TOP(((int)piVar5 + 0x16a2))) = uVar3;
      piVar5[0x5a7] = local_c;
      *(undefined2 *)(piVar5 + 0x5a9) = uVar4;
      *((undefined2 *)GEN_TOP(((int)piVar5 + 0x16a6))) = uVar1;
      *(undefined2 *)(piVar5 + 0x5aa) = uVar2;
      *(undefined2 *)(piVar5 + 0x5a8) = *((undefined2 *)GEN_TOP(((int)param_2 + 0x12)));
      local_1c = 0;
      if (*((char *)GEN_TOP(((int)param_2 + 0x1a))) != '\0') {
        puVar12 = (ushort *)(param_2 + 8);
        do {
          uVar15 = *(undefined4 *)(puVar12 + 4);
          uVar6 = (uint)*puVar12;
          uVar10 = (uint)puVar12[-1];
          fVar14 = *(float *)(puVar12 + 2);
          uVar11 = (uint)(byte)puVar12[-2];
          uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xd4))))(piVar5 GEN_EDX_ARG);
          if (uVar8 != 0) {
            uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xd4))))(piVar5 GEN_EDX_ARG);
            F_00b7b840(uVar8 GEN_EDX_ARG,uVar11,uVar10,fVar14,uVar6,uVar15);
          }
          local_1c = local_1c + 1;
          puVar12 = puVar12 + 8;
        } while (local_1c < (int)(uint)*((byte *)GEN_TOP(((int)param_2 + 0x1a))));
      }
    }
    uVar6 = F_00ae0810(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,param_1);
    if (uVar6 != 0) {
      *((undefined1 *)GEN_TOP((uVar6 + 0x51))) = *((undefined1 *)GEN_TOP(((int)param_2 + 9)));
      *((undefined4 *)GEN_TOP((uVar6 + 0x58))) = param_2[3];
      *((undefined4 *)GEN_TOP((uVar6 + 0x5c))) = param_2[5];
      *((undefined2 *)GEN_TOP((uVar6 + 0x60))) = (undefined2)local_8;
      *((undefined2 *)GEN_TOP((uVar6 + 0x62))) = (undefined2)local_c;
      iVar13 = 0;
      *((undefined2 *)GEN_TOP((uVar6 + 100))) = *((undefined2 *)GEN_TOP(((int)param_2 + 0x12)));
      if (*((char *)GEN_TOP(((int)param_2 + 0x1a))) != '\0') {
        puVar12 = (ushort *)(param_2 + 8);
        do {
          F_00b7b840(uVar6 + 0x6c GEN_EDX_ARG,(uint)(byte)puVar12[-2],(uint)puVar12[-1],
                       *(float *)(puVar12 + 2),(uint)*puVar12,*(undefined4 *)(puVar12 + 4));
          iVar13 = iVar13 + 1;
          puVar12 = puVar12 + 8;
        } while (iVar13 < (int)(uint)*((byte *)GEN_TOP(((int)param_2 + 0x1a))));
      }
    }
    in_EAX = F_00ae0880(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,param_1);
    if (in_EAX != 0) {
      *((undefined4 *)GEN_TOP((in_EAX + 0x20c))) = param_2[3];
      iVar13 = 0;
      *((undefined4 *)GEN_TOP((in_EAX + 0x210))) = param_2[5];
      if (*((char *)GEN_TOP(((int)param_2 + 0x1a))) != '\0') {
        iVar9 = in_EAX + 0x214;
        puVar12 = (ushort *)(param_2 + 8);
        do {
          in_EAX = F_00b7b840(iVar9 GEN_EDX_ARG,(uint)(byte)puVar12[-2],(uint)puVar12[-1],
                                *(float *)(puVar12 + 2),(uint)*puVar12,*(undefined4 *)(puVar12 + 4))
          ;
          iVar13 = iVar13 + 1;
          puVar12 = puVar12 + 8;
        } while (iVar13 < (int)(uint)*((byte *)GEN_TOP(((int)param_2 + 0x1a))));
      }
    }
    if (param_1 == REFG(int, 0x14ab5bc)) {
      REFG(undefined4, 0x14ab5c0) = param_2[3];
      in_EAX = param_2[5];
      iVar13 = 0;
      REFG(undefined4, 0x14ab5c4) = in_EAX;
      if (*((char *)GEN_TOP(((int)param_2 + 0x1a))) != '\0') {
        puVar12 = (ushort *)(param_2 + 8);
        do {
          in_EAX = F_00b7b840(&REFG(undefined, 0x14ab5c8) GEN_EDX_ARG,(uint)(byte)puVar12[-2],(uint)puVar12[-1],
                                *(float *)(puVar12 + 2),(uint)*puVar12,*(undefined4 *)(puVar12 + 4))
          ;
          iVar13 = iVar13 + 1;
          puVar12 = puVar12 + 8;
        } while (iVar13 < (int)(uint)*((byte *)GEN_TOP(((int)param_2 + 0x1a))));
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00a4f110 */
GEN_OWN GEN_FRAME uint F_00a4f110(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4f110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1);
  if (uVar1 != 0) {
    *((undefined1 *)GEN_TOP((uVar1 + 0x196))) = *param_2;
    *((undefined4 *)GEN_TOP((uVar1 + 0x198))) = *(undefined4 *)(param_2 + 8);
    *((undefined4 *)GEN_TOP((uVar1 + 0x19c))) = *(undefined4 *)(param_2 + 0xc);
  }
  return uVar1;
}

/* ref: Global::OnConditions */
GEN_OWN GEN_FRAME uint F_00a4f150(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4f150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  char cVar1;
  undefined * this;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  this = ((undefined *)GEN_TOP(F_006b8c00()));
  uVar2 = F_006d9ec0(this GEN_EDX_ARG);
  cVar1 = (char)uVar2;
  uVar4 = 9;
  bVar3 = 2;
  do {
    if (uVar4 == 0xf) {
      if (cVar1 == '\0') {
LAB_00a4f187: ;
        uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,uVar4,(*((byte *)GEN_TOP(((uVar4 >> 3) + param_2))) & bVar3) != 0);
      }
    }
    else if ((uVar4 != 0x20) && (uVar4 != 0x29)) goto LAB_00a4f187;
    uVar4 = uVar4 + 1;
    bVar3 = bVar3 << 1 | (char)bVar3 < '\0';
    if (0x2d < (int)uVar4) {
      return uVar2;
    }
  } while( true );
}

/* ref: FUN_00a4f1b0 */
GEN_OWN GEN_FRAME uint F_00a4f1b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4f1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1)));
  uVar1 = 0;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00aa9680(this GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00a4f1e0 */
GEN_OWN GEN_FRAME uint F_00a4f1e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4f1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = F_00ac2fe0(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,iVar2,GEN_ARGF(*((float *)GEN_TOP((param_2 + iVar2 * 4)))),GEN_ARGF(*((float *)GEN_TOP((param_2 + 0x140 + iVar2 * 4)))));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x50);
  return uVar1;
}

/* ref: FUN_00a4f220 */
GEN_OWN GEN_FRAME uint F_00a4f220(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(ushort * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4f220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a1;)
  ushort uVar1;
  undefined * this;
  uint uVar2;
  ushort * puVar3;
  
  this = ((undefined *)GEN_TOP(F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,*(undefined4 *)(param_2 + 8))));
  uVar2 = 0;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    puVar3 = param_2 + 0x1a;
    do {
      uVar1 = *puVar3;
      puVar3 = ((ushort *)GEN_TOP(((int)puVar3 + 1)));
    } while ((char)uVar1 != '\0');
    uVar2 = F_00aa5d80(this GEN_EDX_ARG,(int)puVar3 - ((int)param_2 + 0x35),(uint)*param_2);
  }
  return uVar2;
}

/* ref: FUN_00a4f260 */
GEN_OWN GEN_FRAME uint F_00a4f260(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4f260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a42060(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a4f280 */
GEN_OWN GEN_FRAME uint F_00a4f280(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4f280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a49910(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a4f2a0 */
GEN_OWN GEN_FRAME uint F_00a4f2a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4f2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a63700(&REFG(undefined, 0x14a9728) GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a4f2c0 */
GEN_OWN GEN_FRAME uint F_00a4f2c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4f2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ae19a0((undefined4)gen_fl2bits(param_2[4]));
  uVar2 = 0;
  if (uVar1 != 0) {
    F_00ae1740(uVar1 GEN_EDX_ARG,*param_2,(undefined4)gen_fl2bits(param_2[1]),param_2[2]);
    uVar2 = F_00ab96d0((undefined4)gen_fl2bits(param_2[5]));
  }
  return uVar2;
}

/* ref: FUN_00a4f310 */
GEN_OWN GEN_FRAME uint F_00a4f310(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4f310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ae3af0(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00a4f330 */
GEN_OWN GEN_FRAME uint F_00a4f330(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4f330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  
  puVar2 = param_2;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_2 + 2))) {
  case 0: ;
    uVar1 = F_00ae2e60(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_ARG,*param_2,param_2[1],1,
                         *((undefined1 *)GEN_TOP(((int)param_2 + 9))));
    return uVar1;
  case 1: ;
    uVar1 = F_00ae2e60(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_ARG,*param_2,param_2[1],2,
                         *((undefined1 *)GEN_TOP(((int)param_2 + 9))));
    return uVar1;
  case 3: ;
    uVar1 = F_00ae2e60(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_ARG,*param_2,param_2[1],4,
                         *((undefined1 *)GEN_TOP(((int)param_2 + 9))));
    return uVar1;
  case 4: ;
    uVar1 = F_00ab9000(0x4d7);
    return uVar1;
  case 5: ;
    uVar1 = F_00ab9000(0x4d8);
    return uVar1;
  case 7: ;
    uVar1 = F_00ab9000(0x4d9);
    return uVar1;
  case 8: ;
    uVar1 = F_00ab9000(0x4e4);
    return uVar1;
  case 9: ;
    uVar1 = F_00ab9000(0x4dc);
    return uVar1;
  case 10: ;
    uVar1 = F_00ab9000(0x4db);
    return uVar1;
  case 0xb: ;
    uVar1 = F_00ab9000(0x4da);
    return uVar1;
  case 0x10: ;
    uVar1 = F_00ab9000(0x4e3);
    return uVar1;
  case 0x12: ;
    puVar2 = ((undefined4 *)GEN_TOP(F_00ab9000(0x4e5)));
  }
  return (uint)puVar2;
}

/* ref: FUN_00a4f470 */
GEN_OWN_GS GEN_FRAME uint F_00a4f470(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4f470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint in_ecx;
  ulonglong uVar1;
  int iVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x10e5471),REFG(undefined4, 0x108cc50));
  in_ecx = F_00ae19a0(*param_2);
  if (in_ecx == 0) goto switchD_00a4f4bc_default;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_2 + 1))) {
  case 0: ;
    F_00ab9000(0x4e1);
    break;
  case 1: ;
    F_00ab9000(0x4de);
    break;
  case 2: ;
    F_00ab97e0(param_2[2]);
    break;
  case 3: ;
    iVar2 = param_2[2] + 400;
    goto LAB_00a4f549;
  case 4: ;
    if (param_2[2] == 0x18) {
      iVar2 = 0x4d8;
    }
    else {
      if (param_2[2] != 0x1b) break;
      iVar2 = 0x4d9;
    }
LAB_00a4f549: ;
    F_00a7d290(iVar2,0,0,0,0,REFG(float, 0x10916ec));
    break;
  default: ;
    goto switchD_00a4f4bc_default;
  }
  *((undefined4 *)GEN_TOP((in_ecx + 0x184))) = param_2[3];
  F_00ae2700(in_ecx GEN_EDX_ARG,GEN_ARGF(gen_bits2f(param_2[4])));
  *((undefined4 *)GEN_TOP((in_ecx + 0x18c))) = param_2[5];
switchD_00a4f4bc_default: ;
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a4f5a0 */
GEN_OWN GEN_FRAME uint F_00a4f5a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4f5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ab9cf0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a4f5b0 */
GEN_OWN GEN_FRAME uint F_00a4f5b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4f5b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ae2a20(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_ARG,*param_2,param_2[1]);
  return uVar1;
}

/* ref: FUN_00a4f5d0 */
GEN_OWN GEN_FRAME uint F_00a4f5d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4f5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ae1a20(param_2);
  return uVar1;
}

/* ref: FUN_00a4f5f0 */
GEN_OWN GEN_FRAME uint F_00a4f5f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa4f5f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint in_ecx;
  
  in_ecx = F_00ae19a0(param_1);
  if (in_ecx != 0) {
    F_00ae1910(in_ecx GEN_EDX_ARG);
    return in_ecx;
  }
  return 0;
}

/* ref: FUN_00a4f610 */
GEN_OWN GEN_FRAME uint F_00a4f610(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4f610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  ushort uVar1;
  uint uVar2;
  undefined2 extraout_var = 0;
  uint uVar3;
  
  uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar1 = F_00b76c70(uVar2 + 0x1340 GEN_EDX_ARG,param_2);
    uVar3 = CONCAT22(extraout_var,uVar1);
  }
  return uVar3;
}

/* ref: FUN_00a4f640 */
GEN_OWN GEN_FRAME uint F_00a4f640(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa4f640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b7c0a0(&REFG(undefined, 0x133e5c0) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: Global::OnDiscoveryReply */
GEN_OWN GEN_FRAME uint F_00a4f660(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4f660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ab91b0(&REFG(undefined, 0x14b5268) GEN_EDX_ARG,(uint)*param_2,*(undefined4 *)(param_2 + 4));
  return uVar1;
}

/* ref: FUN_00a4f680 */
GEN_OWN GEN_FRAME uint F_00a4f680(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4f680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1);
  if ((uVar1 != 0) && (uVar1 == REFG(undefined4, 0x1379694))) {
    uVar1 = F_00a6a9c0(&REFG(undefined, 0x14b29c0) GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00a4f6b0 */
GEN_OWN GEN_NOFRAME uint F_00a4f6b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4f6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort * puVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  iVar7 = 0;
  puVar8 = ((ushort *)GEN_TOP((param_2 + 4)));
  do {
    uVar1 = puVar8[-1];
    fVar9 = (float10)*(double *)&REFG(undefined, 0x10a3960);
    fVar10 = (float10)*(double *)&REFG(undefined, 0x10928e8);
    uVar2 = *puVar8;
    fVar11 = (float10)*(double *)&REFG(undefined, 0x10912a8);
    uVar3 = puVar8[1];
    uVar5 = F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,iVar7);
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar4 = puVar8[-2];
      uVar6 = F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,iVar7);
      *((bool *)GEN_TOP((uVar6 + 0x1e0))) = (char)uVar4 != '\0';
      uVar6 = F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,iVar7);
      *((float *)GEN_TOP((uVar6 + 0x1f0))) = ((float)GEN_TOF((((float10)uVar1 * fVar9) * fVar10 - fVar11)));
      *((float *)GEN_TOP((uVar6 + 500))) = ((float)GEN_TOF((((float10)uVar2 * fVar9) * fVar10 - fVar11)));
      *((float *)GEN_TOP((uVar6 + 0x1f8))) = ((float)GEN_TOF((((float10)uVar3 * fVar9) * fVar10 - fVar11)));
    }
    iVar7 = iVar7 + 1;
    puVar8 = puVar8 + 4;
  } while (iVar7 < 8);
  return uVar6;
}

/* ref: FUN_00a4f7a0 */
GEN_OWN GEN_FRAME uint F_00a4f7a0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa4f7a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0053c0b0(&REFG(undefined, 0x1305d00) GEN_EDX_ARG,*param_1,param_1[1]);
  return uVar1;
}

/* ref: FUN_00a4f7c0 */
GEN_OWN GEN_FRAME uint F_00a4f7c0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa4f7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_1 + 1);
  uVar2 = *param_1;
  uVar3 = F_00b070f0();
  uVar3 = F_00b07230(((undefined *)GEN_TOP((uVar3 + 0x10))) GEN_EDX_ARG,uVar2,(uint)uVar1);
  return uVar3;
}

/* ref: FUN_00a4f7f0 */
GEN_OWN GEN_FRAME uint F_00a4f7f0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa4f7f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,*param_1)));
  uVar1 = 0;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00aa1760(this GEN_EDX_ARG,(uint)*(byte *)(param_1 + 1));
  }
  return uVar1;
}

/* ref: FUN_00a4f820 */
GEN_OWN GEN_FRAME uint F_00a4f820(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa4f820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ae3500(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00a4f840 */
GEN_OWN GEN_FRAME uint F_00a4f840(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa4f840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00a6af20(&REFG(undefined, 0x14ab440) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00a4f860 */
GEN_OWN GEN_FRAME uint F_00a4f860(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa4f860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00a6b070(&REFG(undefined, 0x14ab464) GEN_EDX_ARG,param_1,param_1 + 0x100);
  return uVar1;
}

/* ref: FUN_00a4f880 */
GEN_OWN GEN_FRAME uint F_00a4f880(GEN_P(char * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa4f880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  char * pcVar1;
  
  pcVar1 = param_1;
  if (*param_1 == '\0') {
    pcVar1 = ((char *)GEN_TOP(F_00a7ed80(&REFG(undefined, 0x14ab584) GEN_EDX_ARG,param_1 + 1)));
  }
  return (uint)pcVar1;
}

/* ref: FUN_00a4f8a0 */
GEN_OWN GEN_NOFRAME uint F_00a4f8a0(GEN_P(undefined1 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa4f8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x30, 0);
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  uVar3 = *(ushort *)(param_1 + 4);
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(ushort *)(param_1 + 2));
  uVar4 = *(ushort *)(param_1 + 6);
  fVar8 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)uVar3);
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  fVar9 = (float10)*(double *)&REFG(undefined, 0x10928e8);
  uVar5 = *(ushort *)(param_1 + 8);
  fVar10 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF((((float10)*(ushort *)(param_1 + 2) * fVar8) * fVar9 - fVar10)));
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)uVar4);
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF((((float10)uVar3 * fVar8) * fVar9 - fVar10)));
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(ushort *)(param_1 + 10));
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF((((float10)uVar4 * fVar8) * fVar9 - fVar10)));
  fVar1 = ((float)GEN_TOF(((float10)*(ushort *)(param_1 + 10) / (float10)*(double *)&REFG(undefined, 0x1088118))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)uVar5);
  fVar2 = ((float)GEN_TOF((((float10)uVar5 *
                  (((float10)*(double *)&REFG(undefined, 0x1088118) * (float10)*(float *)&REFG(undefined, 0x1334840)) /
                  (float10)REFG(double, 0x109cab0))) * fVar9 - (float10)*(double *)&REFG(undefined, 0x1080228))));
  (*(float *)(gen_frame + 0x1c)) = fVar2;
  F_00ac3a00(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,*param_1,&(*(float *)(gen_frame + 0x0)),fVar2,fVar1,uVar6);
  uVar7 = F_00a6fbc0(&REFG(undefined, 0x14ab740) GEN_EDX_ARG,1,1);
  return uVar7;
}

/* ref: FUN_00a4f990 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a4f990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4f990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5cb4));
  F_00c48350(((undefined *)GEN_TOP(((int)this + 8))),0,0x48);
  return (uint)this;
}

/* ref: FUN_00a4fa10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4fa10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa4fa10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  int local_8;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00406bb0(0x44c8,0,0)));
  if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    puVar3 = puVar1 + 2;
    *puVar1 = 200;
    local_8 = 199;
    puVar1 = puVar3;
    do {
      *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10e5cb4));
      puVar1[0x14] = 0;
      puVar1[0x15] = 0;
      F_00c48350(puVar1 + 2,0,0x48);
      puVar1 = puVar1 + 0x16;
      local_8 = local_8 - 1;
    } while (-1 < local_8);
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  iVar2 = 0x58;
  do {
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x54 + iVar2))) = *((int *)GEN_TOP(((int)this + 4))) + 0x58 + iVar2;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x50 + iVar2))) = *((int *)GEN_TOP(((int)this + 4))) - 0x58 + iVar2;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0xac + iVar2))) = *((int *)GEN_TOP(((int)this + 4))) + 0xb0 + iVar2;
    iVar4 = *((int *)GEN_TOP(((int)this + 4))) + iVar2;
    *((int *)GEN_TOP((iVar4 + 0xa8))) = iVar4;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x104 + iVar2))) = *((int *)GEN_TOP(((int)this + 4))) + 0x108 + iVar2;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x100 + iVar2))) = *((int *)GEN_TOP(((int)this + 4))) + 0x58 + iVar2;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15c + iVar2))) = *((int *)GEN_TOP(((int)this + 4))) + 0x160 + iVar2;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x158 + iVar2))) = *((int *)GEN_TOP(((int)this + 4))) + 0xb0 + iVar2;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x1b4 + iVar2))) = *((int *)GEN_TOP(((int)this + 4))) + 0x1b8 + iVar2;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x1b0 + iVar2))) = *((int *)GEN_TOP(((int)this + 4))) + 0x108 + iVar2;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x20c + iVar2))) = *((int *)GEN_TOP(((int)this + 4))) + 0x210 + iVar2;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x208 + iVar2))) = *((int *)GEN_TOP(((int)this + 4))) + 0x160 + iVar2;
    iVar2 = iVar2 + 0x210;
  } while (iVar2 < 0x4468);
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 8))) = iVar2;
  *((int *)GEN_TOP((iVar2 + 0x54))) = iVar2 + 0x58;
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 0xc))) = iVar2 + 0x4468;
  *((int *)GEN_TOP((iVar2 + 0x44b8))) = iVar2 + 0x4410;
  puVar1 = ((undefined4 *)GEN_TOP(F_00406bb0(0x1e4,0,0)));
  if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *puVar1 = 10;
    puVar3 = puVar1 + 1;
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0xffffffff;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0xffffffff;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xd] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0xffffffff;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0xffffffff;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x19] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0xffffffff;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0xffffffff;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x25] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0xffffffff;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0xffffffff;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x31] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0xffffffff;
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0xffffffff;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3d] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0xffffffff;
    puVar1[0x42] = 0;
    puVar1[0x43] = 0;
    puVar1[0x44] = 0;
    puVar1[0x45] = 0xffffffff;
    puVar1[0x46] = 0;
    puVar1[0x47] = 0;
    puVar1[0x49] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x4b] = 0;
    puVar1[0x4c] = 0;
    puVar1[0x4d] = 0xffffffff;
    puVar1[0x4e] = 0;
    puVar1[0x4f] = 0;
    puVar1[0x50] = 0;
    puVar1[0x51] = 0xffffffff;
    puVar1[0x52] = 0;
    puVar1[0x53] = 0;
    puVar1[0x55] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x57] = 0;
    puVar1[0x58] = 0;
    puVar1[0x59] = 0xffffffff;
    puVar1[0x5a] = 0;
    puVar1[0x5b] = 0;
    puVar1[0x5c] = 0;
    puVar1[0x5d] = 0xffffffff;
    puVar1[0x5e] = 0;
    puVar1[0x5f] = 0;
    puVar1[0x61] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[99] = 0;
    puVar1[100] = 0;
    puVar1[0x65] = 0xffffffff;
    puVar1[0x66] = 0;
    puVar1[0x67] = 0;
    puVar1[0x68] = 0;
    puVar1[0x69] = 0xffffffff;
    puVar1[0x6a] = 0;
    puVar1[0x6b] = 0;
    puVar1[0x6d] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x6f] = 0;
    puVar1[0x70] = 0;
    puVar1[0x71] = 0xffffffff;
    puVar1[0x72] = 0;
    puVar1[0x73] = 0;
    puVar1[0x74] = 0;
    puVar1[0x75] = 0xffffffff;
    puVar1[0x76] = 0;
    puVar1[0x77] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))) = puVar3;
  puVar3[0x16] = puVar3 + 0x18;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x54))) = *((int *)GEN_TOP(((int)this + 0x10)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x88))) = *((int *)GEN_TOP(((int)this + 0x10))) + 0x90;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x84))) = *((int *)GEN_TOP(((int)this + 0x10))) + 0x30;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xb8))) = *((int *)GEN_TOP(((int)this + 0x10))) + 0xc0;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xb4))) = *((int *)GEN_TOP(((int)this + 0x10))) + 0x60;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xe8))) = *((int *)GEN_TOP(((int)this + 0x10))) + 0xf0;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xe4))) = *((int *)GEN_TOP(((int)this + 0x10))) + 0x90;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x118))) = *((int *)GEN_TOP(((int)this + 0x10))) + 0x120;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x114))) = *((int *)GEN_TOP(((int)this + 0x10))) + 0xc0;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x148))) = *((int *)GEN_TOP(((int)this + 0x10))) + 0x150;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x144))) = *((int *)GEN_TOP(((int)this + 0x10))) + 0xf0;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x178))) = *((int *)GEN_TOP(((int)this + 0x10))) + 0x180;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x174))) = *((int *)GEN_TOP(((int)this + 0x10))) + 0x120;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1a8))) = *((int *)GEN_TOP(((int)this + 0x10))) + 0x1b0;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x1a4))) = *((int *)GEN_TOP(((int)this + 0x10))) + 0x150;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((int *)GEN_TOP(((int)this + 0x14))) = iVar2;
  *((int *)GEN_TOP((iVar2 + 0x28))) = iVar2 + 0x30;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((int *)GEN_TOP(((int)this + 0x18))) = iVar2 + 0x1b0;
  *((uint *)GEN_TOP((iVar2 + 0x1d4))) = iVar2 + 0x180U;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  return iVar2 + 0x180U;
}

/* ref: FUN_00a4fea0 */
GEN_OWN GEN_NOFRAME unsigned int F_00a4fea0(void)
{
  GEN_ENTER(0xa4fea0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00a4feb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4feb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa4feb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x1c)));
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    if (*((int *)GEN_TOP((uVar1 + 0x10))) == param_2) break;
    uVar1 = *((uint *)GEN_TOP((uVar1 + 0x28)));
  }
  return uVar1;
}

/* ref: FUN_00a4fee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a4fee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa4fee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != 0) {
    uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
    if (uVar1 != 0) {
      iVar2 = *((int *)GEN_TOP((uVar1 + 0x54)));
      *((int *)GEN_TOP(((int)this + 8))) = iVar2;
      if (iVar2 != 0) {
        *((undefined4 *)GEN_TOP((iVar2 + 0x50))) = 0;
      }
      iVar2 = *((int *)GEN_TOP((param_1 + 0x18)));
      *((undefined4 *)GEN_TOP((uVar1 + 0x54))) = 0;
      if (iVar2 == 0) {
        *((undefined4 *)GEN_TOP((uVar1 + 0x50))) = 0;
        *((uint *)GEN_TOP((param_1 + 0x14))) = uVar1;
      }
      else {
        *((int *)GEN_TOP((uVar1 + 0x50))) = iVar2;
        *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x18))) + 0x54))) = uVar1;
      }
      *((uint *)GEN_TOP((param_1 + 0x18))) = uVar1;
      puVar3 = param_2;
      puVar4 = ((undefined4 *)GEN_TOP((uVar1 + 8)));
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *((int *)GEN_TOP((param_1 + 0x1c))) = *((int *)GEN_TOP((param_1 + 0x1c))) + 1;
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00a4ff40 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a4ff40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa4ff40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_2 == *((int *)GEN_TOP((param_1 + 0x14)))) {
      iVar1 = *((int *)GEN_TOP((param_2 + 0x54)));
      *((int *)GEN_TOP((param_1 + 0x14))) = iVar1;
      if (iVar1 != 0) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x50))) = 0;
      }
    }
    if (param_2 == *((int *)GEN_TOP((param_1 + 0x18)))) {
      iVar1 = *((int *)GEN_TOP((param_2 + 0x50)));
      *((int *)GEN_TOP((param_1 + 0x18))) = iVar1;
      if (iVar1 != 0) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x54))) = 0;
      }
    }
    if (*((int *)GEN_TOP((param_2 + 0x50))) != 0) {
      *((undefined4 *)GEN_TOP((param_2 + 0x50))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x50))) + 0x50)));
    }
    if (*((int *)GEN_TOP((param_2 + 0x54))) != 0) {
      *((undefined4 *)GEN_TOP((param_2 + 0x54))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x54))) + 0x54)));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
    *((undefined4 *)GEN_TOP((param_2 + 0x54))) = 0;
    if (iVar1 != 0) {
      *((int *)GEN_TOP((param_2 + 0x50))) = iVar1;
      *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x54))) = param_2;
      *((int *)GEN_TOP(((int)this + 0xc))) = param_2;
      *((int *)GEN_TOP((param_1 + 0x1c))) = *((int *)GEN_TOP((param_1 + 0x1c))) - 1;
      return;
    }
    *((undefined4 *)GEN_TOP((param_2 + 0x50))) = 0;
    *((int *)GEN_TOP(((int)this + 8))) = param_2;
    *((int *)GEN_TOP(((int)this + 0xc))) = param_2;
    *((int *)GEN_TOP((param_1 + 0x1c))) = *((int *)GEN_TOP((param_1 + 0x1c))) - 1;
  }
  return;
}

/* ref: FUN_00a4ffd0 */
GEN_OWN GEN_NOFRAME uint F_00a4ffd0(void)
{
  GEN_ENTER(0xa4ffd0u, 0u, 0u, 0u, 0u);
  return 0x14a7470;
}

/* ref: FUN_00a4ffe0 */
GEN_OWN GEN_NOFRAME byte F_00a4ffe0(void)
{
  GEN_ENTER(0xa4ffe0u, 0u, 0u, 0u, 0u);
  undefined2 * puVar1;
  int iVar2;
  
  puVar1 = &REFG(undefined2, 0x14a8828);
  iVar2 = 0x1e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 8;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  puVar1 = &REFG(undefined2, 0x14a8af8);
  iVar2 = 0x10;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 8;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  REFG(undefined1, 0x14a73d2) = 0;
  REFG(undefined1, 0x14a73d9) = 0;
  REFG(undefined1, 0x14a73d3) = 0;
  REFG(undefined1, 0x14a73d8) = 0;
  REFG(undefined1, 0x14a73da) = 0;
  return 0;
}

/* ref: FUN_00a50030 */
GEN_OWN GEN_NOFRAME unsigned int F_00a50030(void)
{
  GEN_ENTER(0xa50030u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00a50040 */
GEN_OWN GEN_FRAME uint F_00a50040(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(ushort * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa50040u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  GEN_FRAME_DECL(0x18, 8);
  ushort uVar1;
  uint uVar2;
  undefined * this;
  uint uVar3;
  int iVar4;
  undefined * puVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14);
  uVar3 = param_1 & 0xffff;
  if (0x1d < uVar3) {
    return REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14);
  }
  iVar4 = uVar3 * 0x10;
  puVar5 = &REFG(undefined, 0x14a8824) + iVar4;
  F_00f00b60(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar5);
  uVar1 = *param_2;
  uVar2 = (uint)uVar1;
  if ((*(ushort *)(gen_frame + 0x4)) == 0) {
    if (uVar1 == 0) goto LAB_00a50142;
  }
  else if (((*(ushort *)(gen_frame + 0x4)) != uVar1) && (uVar1 != 0)) goto LAB_00a50142;
  (&REFG(undefined2, 0x14a8828))[(int)(uVar3 * 8)] = uVar1;
  (&REFG(undefined1, 0x14a882a))[(int)(iVar4)] = (char)param_2[1];
  (&REFG(undefined1, 0x14a882b))[(int)(iVar4)] = *((undefined1 *)GEN_TOP(((int)param_2 + 3)));
  (&REFG(undefined1, 0x14a882c))[(int)(iVar4)] = (char)param_2[2];
  (&REFG(undefined1, 0x14a882d))[(int)(iVar4)] = *((undefined1 *)GEN_TOP(((int)param_2 + 5)));
  (&REFG(undefined1, 0x14a882e))[(int)(iVar4)] = (char)param_2[3];
  (&REFG(undefined1, 0x14a882f))[(int)(iVar4)] = *((undefined1 *)GEN_TOP(((int)param_2 + 7)));
  (&REFG(undefined1, 0x14a8830))[(int)(iVar4)] = (char)param_2[4];
  puVar6 = ((undefined1 *)(gen_frame + 0x0));
  (&REFG(undefined1, 0x14a8831))[(int)(iVar4)] = *((undefined1 *)GEN_TOP(((int)param_2 + 9)));
  this = ((undefined *)GEN_TOP(F_006b8c00()));
  uVar2 = F_00703900(this GEN_EDX_ARG,puVar5,puVar6,uVar3);
  if ((*(ushort *)(gen_frame + 0x4)) == 0) {
    *(int *)&REFG(undefined, 0x14a73d4) = *(int *)&REFG(undefined, 0x14a73d4) + 1;
  }
  else if (*param_2 == 0) {
    *(int *)&REFG(undefined, 0x14a73d4) = *(int *)&REFG(undefined, 0x14a73d4) - 1;
  }
  if (param_3 != '\0') {
    REFG(undefined4, 0x14a458f) = 1;
  }
  if (param_5 != '\0') {
    REFG(undefined4, 0x14b0ee0) = 1;
  }
  if (param_4 != '\0') {
    *(undefined4 *)&REFG(undefined, 0x14afd2c) = 1;
    *(ushort *)&REFG(undefined, 0x14afd34) = *param_2;
    uVar2 = (uint)*(ushort *)&REFG(undefined, 0x14afd34);
    *(undefined4 *)&REFG(undefined, 0x14afd30) = 1;
  }
LAB_00a50142: ;
  F_00ef87b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Global::OnQuestCompleteFlags */
GEN_OWN GEN_FRAME uint F_00a50160(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa50160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint in_EAX = 0;
  undefined * this;
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 == 200) {
    uVar2 = F_00c46aa0(&REFG(undefined, 0x14a875a),param_1,200);
    in_EAX = (uint)uVar2;
    if (REFG(char, 0x14a73d3) == '\0') {
      REFG(char, 0x14a73d3) = 1;
      this = ((undefined *)GEN_TOP(F_006b8c00()));
      uVar1 = F_006e5e50(this GEN_EDX_ARG);
      return uVar1;
    }
  }
  return in_EAX;
}

/* ref: FUN_00a501b0 */
GEN_OWN GEN_FRAME uint F_00a501b0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa501b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * this;
  byte bVar2;
  
  uVar1 = (param_1 & 0xffff) >> 3;
  if (uVar1 < 200) {
    bVar2 = (byte)(0x80 >> ((byte)param_1 & 7));
    if ((char)param_2 == '\0') {
      bVar2 = (&REFG(undefined, 0x14a875a))[(int)(uVar1)] & ~bVar2;
    }
    else {
      bVar2 = (&REFG(undefined, 0x14a875a))[(int)(uVar1)] | bVar2;
    }
    (&REFG(undefined, 0x14a875a))[(int)(uVar1)] = bVar2;
    this = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar1 = F_006e5ea0(this GEN_EDX_ARG,param_1,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00a50210 */
GEN_OWN GEN_FRAME uint F_00a50210(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa50210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint in_EAX = 0;
  ulonglong uVar1;
  
  if (param_2 == 0x28) {
    uVar1 = F_00c46aa0(&REFG(undefined, 0x14a8a04),param_1,0x28);
    in_EAX = (uint)uVar1;
    if (REFG(char, 0x14a73d8) == '\0') {
      REFG(char, 0x14a73d8) = '\x01';
    }
  }
  return in_EAX;
}

/* ref: FUN_00a50240 */
GEN_OWN GEN_FRAME uint F_00a50240(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(ushort * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa50240u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  ushort uVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined * this;
  uint uVar3;
  int iVar4;
  undefined * puVar5;
  undefined1 * puVar6;
  
  if (0xf < (ushort)param_1) {
    return in_EAX;
  }
  uVar3 = param_1 & 0xffff;
  iVar4 = uVar3 * 0x10;
  puVar5 = &REFG(undefined, 0x14a8af4) + iVar4;
  F_00e781d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar5);
  uVar1 = *param_2;
  uVar2 = (uint)uVar1;
  if ((*(ushort *)(gen_frame + 0x4)) == 0) {
    if (uVar1 == 0) {
      F_00e6ced0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return 0;
    }
  }
  else if (((*(ushort *)(gen_frame + 0x4)) != uVar1) && (uVar1 != 0)) goto LAB_00a5031d;
  (&REFG(undefined2, 0x14a8af8))[(int)(uVar3 * 8)] = uVar1;
  (&REFG(undefined1, 0x14a8afa))[(int)(iVar4)] = (char)param_2[1];
  (&REFG(undefined2, 0x14a8afc))[(int)(uVar3 * 8)] = param_2[2];
  (&REFG(undefined2, 0x14a8afe))[(int)(uVar3 * 8)] = param_2[3];
  puVar6 = ((undefined1 *)(gen_frame + 0x0));
  (&REFG(undefined1, 0x14a8b00))[(int)(iVar4)] = (char)param_2[4];
  this = ((undefined *)GEN_TOP(F_006b8c00()));
  F_0070e450(this GEN_EDX_ARG,puVar5,puVar6,param_1);
  uVar2 = 1;
  if ((*(ushort *)(gen_frame + 0x4)) == 0) {
    *(int *)&REFG(undefined, 0x14a73dc) = *(int *)&REFG(undefined, 0x14a73dc) + 1;
  }
  else if (*param_2 == 0) {
    *(int *)&REFG(undefined, 0x14a73dc) = *(int *)&REFG(undefined, 0x14a73dc) - 1;
  }
  if (param_4 != '\0') {
    REFG(undefined4, 0x14b0ee0) = 1;
  }
  if (param_3 != '\0') {
    *(undefined4 *)&REFG(undefined, 0x14afd2c) = 2;
    *(ushort *)&REFG(undefined, 0x14afd34) = *param_2;
    uVar2 = (uint)*(ushort *)&REFG(undefined, 0x14afd34);
    *(undefined4 *)&REFG(undefined, 0x14afd30) = 2;
  }
LAB_00a5031d: ;
  F_00e6ced0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00a50330 */
GEN_OWN GEN_FRAME uint F_00a50330(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa50330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint in_EAX = 0;
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 == 200) {
    uVar2 = F_00c46aa0(&REFG(undefined, 0x14a8a2c),param_1,200);
    in_EAX = (uint)uVar2;
    if (REFG(char, 0x14a73da) == '\0') {
      REFG(char, 0x14a73da) = 1;
      uVar1 = F_006b8c00();
      return uVar1;
    }
  }
  return in_EAX;
}

/* ref: FUN_00a50380 */
GEN_OWN GEN_FRAME uint F_00a50380(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa50380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  byte bVar2;
  
  uVar1 = (param_1 & 0xffff) >> 3;
  if (uVar1 < 200) {
    bVar2 = (byte)(0x80 >> ((byte)param_1 & 7));
    if (param_2 == '\0') {
      bVar2 = (&REFG(undefined, 0x14a8a2c))[(int)(uVar1)] & ~bVar2;
    }
    else {
      bVar2 = (&REFG(undefined, 0x14a8a2c))[(int)(uVar1)] | bVar2;
    }
    (&REFG(undefined, 0x14a8a2c))[(int)(uVar1)] = bVar2;
    uVar1 = F_006b8c00();
    F_006b8cf0(param_1);
  }
  return uVar1;
}

/* ref: FUN_00a503e0 */
GEN_OWN GEN_FRAME uint F_00a503e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(undefined4 * param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7), GEN_P(undefined2 * param_9, unsigned int gen_a8), GEN_P(int param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xa503e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  GEN_PIN(undefined2 * param_9 = (undefined2 *)(uintptr_t)gen_a8;)
  GEN_PIN(int param_10 = (int)gen_a9;)
  undefined2 * in_EAX = 0;
  
  if ((((param_2 == 0x1c) && (param_4 == 0x12)) && (param_6 == 10)) &&
     ((param_8 == 6 && (param_10 == 2)))) {
    F_00c46aa0(&REFG(undefined, 0x14a94f8),param_1,0x1c);
    *(undefined4 *)&REFG(undefined, 0x14a9514) = *param_3;
    *(undefined4 *)&REFG(undefined, 0x14a9518) = param_3[1];
    *(undefined4 *)&REFG(undefined, 0x14a951c) = param_3[2];
    *(undefined4 *)&REFG(undefined, 0x14a9520) = param_3[3];
    *(undefined2 *)&REFG(undefined, 0x14a9524) = *(undefined2 *)(param_3 + 4);
    *(undefined4 *)&REFG(undefined, 0x14a9526) = *param_5;
    *(undefined4 *)&REFG(undefined, 0x14a952a) = param_5[1];
    *(undefined2 *)&REFG(undefined, 0x14a952e) = *(undefined2 *)(param_5 + 2);
    *(undefined4 *)&REFG(undefined, 0x14a9530) = *param_7;
    *(undefined2 *)&REFG(undefined, 0x14a9534) = *(undefined2 *)(param_7 + 1);
    *(undefined2 *)&REFG(undefined, 0x14a9536) = *param_9;
    in_EAX = param_9;
  }
  return (uint)in_EAX;
}

/* ref: FUN_00a504a0 */
GEN_OWN GEN_FRAME uint F_00a504a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(undefined4 * param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7), GEN_P(undefined2 * param_9, unsigned int gen_a8), GEN_P(int param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xa504a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  GEN_PIN(undefined2 * param_9 = (undefined2 *)(uintptr_t)gen_a8;)
  GEN_PIN(int param_10 = (int)gen_a9;)
  undefined2 * in_EAX = 0;
  
  if ((((param_2 == 0x1c) && (param_4 == 0x12)) && (param_6 == 10)) &&
     ((param_8 == 6 && (param_10 == 2)))) {
    F_00c46aa0(&REFG(undefined, 0x14a9538),param_1,0x1c);
    *(undefined4 *)&REFG(undefined, 0x14a9554) = *param_3;
    *(undefined4 *)&REFG(undefined, 0x14a9558) = param_3[1];
    *(undefined4 *)&REFG(undefined, 0x14a955c) = param_3[2];
    *(undefined4 *)&REFG(undefined, 0x14a9560) = param_3[3];
    *(undefined2 *)&REFG(undefined, 0x14a9564) = *(undefined2 *)(param_3 + 4);
    *(undefined4 *)&REFG(undefined, 0x14a9566) = *param_5;
    *(undefined4 *)&REFG(undefined, 0x14a956a) = param_5[1];
    *(undefined2 *)&REFG(undefined, 0x14a956e) = *(undefined2 *)(param_5 + 2);
    *(undefined4 *)&REFG(undefined, 0x14a9570) = *param_7;
    *(undefined2 *)&REFG(undefined, 0x14a9574) = *(undefined2 *)(param_7 + 1);
    *(undefined2 *)&REFG(undefined, 0x14a9576) = *param_9;
    in_EAX = param_9;
  }
  return (uint)in_EAX;
}

/* ref: FUN_00a50560 */
GEN_OWN GEN_FRAME uint F_00a50560(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa50560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined * this;
  undefined1 * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    puVar1 = &REFG(undefined1, 0x14a8d05);
    do {
      puVar1[-1] = *((undefined1 *)GEN_TOP((param_1 + uVar2 * 2)));
      *puVar1 = *((undefined1 *)GEN_TOP((param_1 + 1 + uVar2 * 2)));
      F_00a705f0(&REFG(undefined, 0x14ac288) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP((param_1 + uVar2 * 2))),
                   (uint)*((byte *)GEN_TOP((param_1 + 1 + uVar2 * 2))),1,0);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 8;
    } while (uVar2 < param_2);
  }
  this = ((undefined *)GEN_TOP(F_006b8c00()));
  uVar2 = F_0070e6a0(this GEN_EDX_ARG);
  REFG(undefined4, 0x14b0ee0) = 1;
  *(undefined4 *)&REFG(undefined, 0x14afd2c) = 1;
  return uVar2;
}

/* ref: FUN_00a505f0 */
GEN_OWN GEN_NOFRAME byte F_00a505f0(void)
{
  GEN_ENTER(0xa505f0u, 0u, 0u, 0u, 0u);
  return REFG(undefined1, 0x14a73d2);
}

/* ref: FUN_00a50610 */
GEN_OWN GEN_NOFRAME byte F_00a50610(void)
{
  GEN_ENTER(0xa50610u, 0u, 0u, 0u, 0u);
  return REFG(undefined1, 0x14a73d3);
}

/* ref: FUN_00a50620 */
GEN_OWN GEN_NOFRAME byte F_00a50620(void)
{
  GEN_ENTER(0xa50620u, 0u, 0u, 0u, 0u);
  return REFG(undefined1, 0x14a73d8);
}

/* ref: Global::SendEventSceneResult */
GEN_OWN GEN_NOFRAME uint F_00a50640(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined * PTR32 * param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa50640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined * PTR32 * param_4 = (undefined * PTR32 *)(uintptr_t)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_FRAME_DECL(0xc38, 8);
  undefined * puVar1;
  undefined * puVar2;
  undefined * puVar3;
  undefined4 * puVar4;
  undefined * this;
  undefined3 extraout_var = 0;
  byte bVar5;
  int iVar6;
  undefined * PTR32 * ppuVar7;
  uint uVar8;
  undefined * PTR32 * ppuVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  uVar8 = (uint)(ushort)param_2;
  if (param_4 == ((undefined * PTR32 *)GEN_TOP(0x0))) {
    bVar5 = 0;
    ppuVar7 = &REFG(undefined * PTR32, 0x10e5ccc);
  }
  else {
    ppuVar7 = param_4;
    bVar5 = param_5;
    if (2 < param_5) {
      if (param_5 < 5) {
        (*(undefined4 *)(gen_frame + 0x18)) = param_1;
        (*(byte *)(gen_frame + 0x1f)) = param_5;
        puVar1 = param_4[1];
        uVar11 = 0;
        (*(undefined1 *)(gen_frame + 0x1e)) = (undefined1)param_3;
        puVar2 = param_4[2];
        ((undefined * PTR32 *)(gen_frame + 0x20))[0] = *param_4;
        puVar3 = param_4[3];
        ((undefined * PTR32 *)(gen_frame + 0x20))[1] = puVar1;
        uVar10 = 0;
        puVar4 = &(*(undefined4 *)(gen_frame + 0x0));
        (*(undefined4 *)(gen_frame + 0x0)) = 0x1d8;
        (*(undefined4 *)(gen_frame + 0x4)) = 0x28;
        (*(ushort *)(gen_frame + 0x1c)) = (ushort)param_2;
        ((undefined * PTR32 *)(gen_frame + 0x20))[2] = puVar2;
        ((undefined * PTR32 *)(gen_frame + 0x20))[3] = puVar3;
      }
      else if (param_5 < 9) {
        (*(ushort *)(gen_frame + 0x1c)) = (ushort)param_2;
        (*(byte *)(gen_frame + 0x1f)) = param_5;
        (*(undefined4 *)(gen_frame + 0x18)) = param_1;
        uVar11 = 0;
        (*(undefined4 *)(gen_frame + 0x0)) = 0x1d9;
        (*(undefined4 *)(gen_frame + 0x4)) = 0x38;
        (*(undefined1 *)(gen_frame + 0x1e)) = (undefined1)param_3;
        ppuVar7 = param_4;
        ppuVar9 = ((undefined * PTR32 *)(gen_frame + 0x20));
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 - 1) {
          *ppuVar9 = *ppuVar7;
          ppuVar7 = ppuVar7 + 1;
          ppuVar9 = ppuVar9 + 1;
        }
        uVar10 = 0;
        puVar4 = &(*(undefined4 *)(gen_frame + 0x0));
      }
      else if (param_5 < 0x11) {
        uVar11 = 0;
        uVar10 = 0;
        puVar4 = ((undefined4 *)GEN_TOP(F_00a5d9c0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar8,(undefined1)param_3,param_5,param_4)));
      }
      else if (param_5 < 0x21) {
        uVar11 = 0;
        uVar10 = 0;
        puVar4 = ((undefined4 *)GEN_TOP(F_00a5da10(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar8,(undefined1)param_3,param_5,param_4)));
      }
      else if (param_5 < 0x41) {
        uVar11 = 0;
        uVar10 = 0;
        puVar4 = ((undefined4 *)GEN_TOP(F_00a5da60(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar8,(undefined1)param_3,param_5,param_4)));
      }
      else if (param_5 < 0x81) {
        uVar11 = 0;
        uVar10 = 0;
        puVar4 = ((undefined4 *)GEN_TOP(F_00a5dab0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar8,(undefined1)param_3,param_5,param_4)));
      }
      else {
        uVar11 = 0;
        uVar10 = 0;
        puVar4 = ((undefined4 *)GEN_TOP(F_00a5db00(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar8,(undefined1)param_3,param_5,param_4)));
      }
      goto LAB_00a5084c;
    }
  }
  puVar1 = ppuVar7[1];
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  (*(byte *)(gen_frame + 0x1f)) = bVar5;
  puVar2 = *ppuVar7;
  uVar11 = 0;
  (*(undefined1 *)(gen_frame + 0x1e)) = (undefined1)param_3;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1d7;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x20;
  (*(ushort *)(gen_frame + 0x1c)) = (ushort)param_2;
  ((undefined * PTR32 *)(gen_frame + 0x20))[0] = puVar2;
  ((undefined * PTR32 *)(gen_frame + 0x20))[1] = puVar1;
  uVar10 = 0;
  puVar4 = &(*(undefined4 *)(gen_frame + 0x0));
LAB_00a5084c: ;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar5 = F_00974e00(this GEN_EDX_ARG,puVar4,uVar10,uVar11);
  return CONCAT31(extraout_var,bVar5);
}

/* ref: FUN_00a50880 */
GEN_OWN GEN_NOFRAME uint F_00a50880(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa50880u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_FRAME_DECL(0xc38, 8);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * this;
  undefined3 extraout_var = 0;
  byte bVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  uVar7 = (uint)(ushort)param_2;
  if (param_4 == ((undefined4 *)GEN_TOP(0x0))) {
    bVar3 = 0;
    puVar5 = &REFG(undefined4, 0x10e5cd0);
  }
  else {
    puVar5 = param_4;
    bVar3 = param_5;
    if (2 < param_5) {
      if (param_5 < 5) {
        (*(undefined4 *)(gen_frame + 0x18)) = param_1;
        (*(byte *)(gen_frame + 0x1f)) = param_5;
        uVar9 = param_4[1];
        uVar10 = 0;
        (*(undefined1 *)(gen_frame + 0x1e)) = param_3;
        uVar1 = param_4[2];
        ((undefined4 *)(gen_frame + 0x20))[0] = *param_4;
        uVar2 = param_4[3];
        ((undefined4 *)(gen_frame + 0x20))[1] = uVar9;
        uVar9 = 0;
        puVar5 = &(*(undefined4 *)(gen_frame + 0x0));
        (*(undefined4 *)(gen_frame + 0x0)) = 0x1e1;
        (*(undefined4 *)(gen_frame + 0x4)) = 0x28;
        (*(ushort *)(gen_frame + 0x1c)) = (ushort)param_2;
        ((undefined4 *)(gen_frame + 0x20))[2] = uVar1;
        ((undefined4 *)(gen_frame + 0x20))[3] = uVar2;
      }
      else if (param_5 < 9) {
        uVar10 = 0;
        (*(ushort *)(gen_frame + 0x1c)) = (ushort)param_2;
        (*(undefined1 *)(gen_frame + 0x1e)) = param_3;
        (*(byte *)(gen_frame + 0x1f)) = param_5;
        uVar9 = 0;
        puVar5 = &(*(undefined4 *)(gen_frame + 0x0));
        (*(undefined4 *)(gen_frame + 0x0)) = 0x1e2;
        (*(undefined4 *)(gen_frame + 0x4)) = 0x38;
        (*(undefined4 *)(gen_frame + 0x18)) = param_1;
        puVar6 = param_4;
        puVar8 = ((undefined4 *)(gen_frame + 0x20));
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      else if (param_5 < 0x11) {
        uVar10 = 0;
        uVar9 = 0;
        puVar5 = ((undefined4 *)GEN_TOP(F_00a5dc30(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar7,param_3,param_5,param_4)));
      }
      else if (param_5 < 0x21) {
        uVar10 = 0;
        uVar9 = 0;
        puVar5 = ((undefined4 *)GEN_TOP(F_00a5dc80(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar7,param_3,param_5,param_4)));
      }
      else if (param_5 < 0x41) {
        uVar10 = 0;
        uVar9 = 0;
        puVar5 = ((undefined4 *)GEN_TOP(F_00a5dcd0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar7,param_3,param_5,param_4)));
      }
      else if (param_5 < 0x81) {
        uVar10 = 0;
        uVar9 = 0;
        puVar5 = ((undefined4 *)GEN_TOP(F_00a5dd20(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar7,param_3,param_5,param_4)));
      }
      else {
        uVar10 = 0;
        uVar9 = 0;
        puVar5 = ((undefined4 *)GEN_TOP(F_00a5dd70(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar7,param_3,param_5,param_4)));
      }
      goto LAB_00a50a9d;
    }
  }
  uVar10 = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  uVar1 = *puVar5;
  (*(undefined1 *)(gen_frame + 0x1e)) = param_3;
  (*(byte *)(gen_frame + 0x1f)) = bVar3;
  uVar2 = puVar5[1];
  uVar9 = 0;
  puVar5 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1e0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x20;
  (*(ushort *)(gen_frame + 0x1c)) = (ushort)param_2;
  ((undefined4 *)(gen_frame + 0x20))[0] = uVar1;
  ((undefined4 *)(gen_frame + 0x20))[1] = uVar2;
LAB_00a50a9d: ;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar3 = F_00974e00(this GEN_EDX_ARG,puVar5,uVar9,uVar10);
  return CONCAT31(extraout_var,bVar3);
}

/* ref: FUN_00a50ad0 */
GEN_OWN GEN_NOFRAME uint F_00a50ad0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(char * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa50ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(char * param_4 = (char *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0xc38, 8);
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  char * pcVar5;
  undefined * this;
  undefined3 extraout_var = 0;
  int iVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(uint *)(gen_frame + 0xc24)) = uVar4;
  if (param_4 != ((char *)GEN_TOP(0x0))) {
    pcVar5 = param_4;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + (1 - (int)(param_4 + 1));
    if (pcVar5 < ((char *)GEN_TOP(0x9))) {
      (*(undefined4 *)(gen_frame + 0x18)) = param_1;
      uVar8 = *(undefined4 *)param_4;
      (*(undefined2 *)(gen_frame + 0x1c)) = (undefined2)param_2;
      uVar9 = *(undefined4 *)(param_4 + 4);
      (*(undefined4 *)(gen_frame + 0x0)) = 0x1eb;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x20;
      (*(undefined1 *)(gen_frame + 0x1e)) = param_3;
      ((undefined4 *)(gen_frame + 0x1f))[0] = uVar8;
      ((undefined4 *)(gen_frame + 0x1f))[1] = uVar9;
    }
    else if (pcVar5 < ((char *)GEN_TOP(0x11))) {
      (*(undefined4 *)(gen_frame + 0x18)) = param_1;
      (*(undefined2 *)(gen_frame + 0x1c)) = (undefined2)param_2;
      uVar8 = *(undefined4 *)(param_4 + 4);
      (*(undefined1 *)(gen_frame + 0x1e)) = param_3;
      uVar9 = *(undefined4 *)(param_4 + 8);
      ((undefined4 *)(gen_frame + 0x1f))[0] = *(undefined4 *)param_4;
      uVar2 = *(undefined4 *)(param_4 + 0xc);
      ((undefined4 *)(gen_frame + 0x1f))[1] = uVar8;
      (*(undefined4 *)(gen_frame + 0x0)) = 0x1ec;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x28;
      ((undefined4 *)(gen_frame + 0x1f))[2] = uVar9;
      ((undefined4 *)(gen_frame + 0x1f))[3] = uVar2;
    }
    else {
      if (((char *)GEN_TOP(0x20)) < pcVar5) {
        return (uint)pcVar5;
      }
      (*(undefined1 *)(gen_frame + 0x1e)) = param_3;
      (*(undefined4 *)(gen_frame + 0x0)) = 0x1ed;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x38;
      (*(undefined4 *)(gen_frame + 0x18)) = param_1;
      (*(undefined2 *)(gen_frame + 0x1c)) = (undefined2)param_2;
      pcVar5 = param_4;
      puVar7 = ((undefined4 *)(gen_frame + 0x1f));
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 - 1) {
        *puVar7 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        puVar7 = puVar7 + 1;
      }
    }
    puVar7 = &(*(undefined4 *)(gen_frame + 0x0));
    (*(undefined1 *)(gen_frame + 0x1e)) = param_3;
    (*(undefined2 *)(gen_frame + 0x1c)) = (undefined2)param_2;
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    uVar9 = 0;
    uVar8 = 0;
    this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    bVar3 = F_00974e00(this GEN_EDX_ARG,puVar7,uVar8,uVar9);
    uVar4 = CONCAT31(extraout_var,bVar3);
  }
  return uVar4;
}

/* ref: FUN_00a50c40 */
GEN_OWN GEN_NOFRAME uint F_00a50c40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(char * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa50c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(char * param_6 = (char *)(uintptr_t)gen_a5;)
  GEN_FRAME_DECL(0xc38, 8);
  char cVar1;
  byte bVar2;
  char * pcVar3;
  undefined * this;
  undefined3 extraout_var = 0;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pcVar3 = ((char *)GEN_TOP((REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28))));
  (*(char * PTR32 *)(gen_frame + 0xc24)) = pcVar3;
  if (param_6 != ((char *)GEN_TOP(0x0))) {
    pcVar3 = param_6;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = pcVar3 + (1 - (int)(param_6 + 1));
    if (pcVar3 < ((char *)GEN_TOP(0x21))) {
      (*(undefined2 *)(gen_frame + 0x1c)) = (undefined2)param_2;
      (*(undefined4 *)(gen_frame + 0x18)) = param_1;
      (*(undefined4 *)(gen_frame + 0x24)) = param_5;
      uVar8 = 0;
      (*(undefined1 *)(gen_frame + 0x1e)) = param_3;
      (*(undefined4 *)(gen_frame + 0x0)) = 0x1ee;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
      (*(undefined4 *)(gen_frame + 0x20)) = param_4;
      uVar7 = 0;
      puVar6 = &(*(undefined4 *)(gen_frame + 0x0));
      pcVar3 = param_6;
      puVar5 = ((undefined4 *)(gen_frame + 0x28));
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 - 1) {
        *puVar5 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        puVar5 = puVar5 + 1;
      }
      this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      bVar2 = F_00974e00(this GEN_EDX_ARG,puVar6,uVar7,uVar8);
      pcVar3 = ((char *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
    }
  }
  return (uint)pcVar3;
}

/* ref: Global::OnEventPlay */
GEN_OWN GEN_FRAME uint F_00a50d10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xa50d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  uint uVar1;
  undefined * this;
  
  if (param_1 == -0x20000000) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,param_1,param_2);
  }
  this = ((undefined *)GEN_TOP(F_006b8c00()));
  uVar1 = F_006fcf60(this GEN_EDX_ARG,uVar1,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00a50d60 */
GEN_OWN_GS GEN_FRAME uint F_00a50d60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa50d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_FRAME_DECL_GS(0x178, 8, 4);
  int * in_esi;
  uint uVar1;
  undefined * this;
  uint uVar2;
  byte * pbVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 * puVar6;
  undefined1 * puVar7;
  undefined4 uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x170)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x174));
  in_esi = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1);
  uVar1 = F_00a4e340(uVar1,in_esi,param_1);
  uVar2 = 0;
  if (param_5 != 0) {
    pbVar3 = ((byte *)GEN_TOP((param_4 + 3)));
    do {
      ((undefined1 *)(gen_frame + 0x140))[0] = 0;
      uVar1 = 0;
      do {
        F_00c472af(((undefined1 *)(gen_frame + 0x168)),5,&REFG(undefined, 0x10e5b08),(uint)pbVar3[uVar1 + 1]);
        F_00c473c8(((undefined1 *)(gen_frame + 0x140)),0x28,((undefined1 *)(gen_frame + 0x168)));
        uVar1 = uVar1 + 1;
      } while (uVar1 < 6);
      F_00c472af(((undefined1 *)(gen_frame + 0xa8)),0x96,((char *)REFP(0x10e5b10)),uVar2,
                 (uint)*(ushort *)(pbVar3 - 3),(uint)pbVar3[-1],(uint)*pbVar3,((undefined1 *)(gen_frame + 0x140)));
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa8)),REFG(undefined4, 0x108cc50));
      F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,&REFG(undefined, 0x10e539a),REFG(undefined4, 0x108cc50));
      uVar8 = 0;
      puVar7 = ((undefined1 *)(gen_frame + 0x0));
      puVar6 = ((undefined1 *)(gen_frame + 0x54));
      uVar5 = 1;
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0x28))))(in_esi GEN_EDX_ARG)));
      F_00459b00(this GEN_EDX_ARG,uVar5,puVar6,puVar7,uVar8);
      F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
      uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar1 = (uint)uVar4;
      uVar2 = uVar2 + 1;
      pbVar3 = pbVar3 + 10;
    } while (uVar2 < param_5);
  }
  return uVar1;
}

/* ref: FUN_00a50eb0 */
GEN_OWN_GS GEN_FRAME uint F_00a50eb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa50eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x148, 8, 4);
  int * in_esi;
  uint in_ecx;
  undefined * this;
  ulonglong uVar1;
  undefined4 uVar2;
  undefined1 * puVar3;
  char * pcVar4;
  undefined1 * puVar5;
  undefined4 uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x140)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x144));
  in_esi = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  in_ecx = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1);
  F_00a4e340(in_ecx,in_esi,param_1);
  if ((param_4 == 0) && (param_3 != '\0')) {
    pcVar4 = ((char *)REFP(0x10e5b44));
  }
  else {
    if (-1 < param_5) {
      F_00c472af(((undefined1 *)(gen_frame + 0xa8)),0x96,((char *)REFP(0x10e5b64)),param_2 & 0xffff,(uint)param_4);
      goto LAB_00a50f57;
    }
    pcVar4 = ((char *)REFP(0x10e5b7c));
  }
  F_00c472af(((undefined1 *)(gen_frame + 0xa8)),0x96,pcVar4,param_2 & 0xffff);
LAB_00a50f57: ;
  F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa8)),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x10e539b),REFG(undefined4, 0x108cc50));
  uVar6 = 0;
  puVar5 = ((undefined1 *)(gen_frame + 0x54));
  puVar3 = ((undefined1 *)(gen_frame + 0x0));
  uVar2 = 1;
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0x28))))(in_esi GEN_EDX_ARG)));
  F_00459b00(this GEN_EDX_ARG,uVar2,puVar3,puVar5,uVar6);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a50fd0 */
GEN_OWN_GS GEN_FRAME uint F_00a50fd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa50fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_FRAME_DECL_GS(0x148, 8, 4);
  int * in_esi;
  uint uVar1;
  undefined * this;
  uint uVar2;
  ushort * puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 * puVar6;
  undefined1 * puVar7;
  undefined4 uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x140)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x144));
  in_esi = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1);
  uVar1 = F_00a4e340(uVar1,in_esi,param_1);
  uVar2 = 0;
  if (param_5 != 0) {
    puVar3 = ((ushort *)GEN_TOP((param_4 + 6)));
    do {
      F_00c472af(((undefined1 *)(gen_frame + 0xa8)),0x96,((char *)REFP(0x10e5b9c)),uVar2,
                 (uint)puVar3[-3],(uint)(byte)puVar3[-2],(uint)puVar3[-1],(uint)*puVar3,
                 (uint)(byte)puVar3[1]);
      F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa8)),REFG(undefined4, 0x108cc50));
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x10e5452),REFG(undefined4, 0x108cc50));
      uVar8 = 0;
      puVar7 = ((undefined1 *)(gen_frame + 0x54));
      puVar6 = ((undefined1 *)(gen_frame + 0x0));
      uVar5 = 1;
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0x28))))(in_esi GEN_EDX_ARG)));
      F_00459b00(this GEN_EDX_ARG,uVar5,puVar6,puVar7,uVar8);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
      uVar1 = (uint)uVar4;
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 5;
    } while (uVar2 < param_5);
  }
  return uVar1;
}

/* ref: FUN_00a510e0 */
GEN_OWN_GS GEN_FRAME uint F_00a510e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa510e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x148, 8, 4);
  int * in_esi;
  uint in_ecx;
  undefined * this;
  ulonglong uVar1;
  undefined4 uVar2;
  undefined1 * puVar3;
  char * pcVar4;
  undefined1 * puVar5;
  undefined4 uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x140)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x144));
  in_esi = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  in_ecx = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1);
  F_00a4e340(in_ecx,in_esi,param_1);
  if ((param_4 == 0) && (param_3 != '\0')) {
    pcVar4 = ((char *)REFP(0x10e5bd8));
  }
  else {
    if (-1 < param_5) {
      F_00c472af(((undefined1 *)(gen_frame + 0xa8)),0x96,((char *)REFP(0x10e5bf4)),param_2 & 0xffff,(uint)param_4);
      goto LAB_00a51187;
    }
    pcVar4 = ((char *)REFP(0x10e5c0c));
  }
  F_00c472af(((undefined1 *)(gen_frame + 0xa8)),0x96,pcVar4,param_2 & 0xffff);
LAB_00a51187: ;
  F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa8)),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x10e5453),REFG(undefined4, 0x108cc50));
  uVar6 = 0;
  puVar5 = ((undefined1 *)(gen_frame + 0x54));
  puVar3 = ((undefined1 *)(gen_frame + 0x0));
  uVar2 = 1;
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0x28))))(in_esi GEN_EDX_ARG)));
  F_00459b00(this GEN_EDX_ARG,uVar2,puVar3,puVar5,uVar6);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: Global::SendClientTrigger */
GEN_OWN GEN_NOFRAME uint F_00a51200(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa51200u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  (*(undefined4 *)(gen_frame + 0x24)) = param_4;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = param_3;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x28)) = param_5;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x191;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x30;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a512b0 */
GEN_OWN GEN_NOFRAME uint F_00a512b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xa512b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x1c)) = param_4;
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = param_7;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x20)) = param_5;
  (*(undefined4 *)(gen_frame + 0x24)) = param_6;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x191;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x30;
  (*(undefined4 *)(gen_frame + 0x30)) = param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = param_3;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51360 */
GEN_OWN GEN_NOFRAME uint F_00a51360(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa51360u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL(0xc38, 8);
  undefined4 uVar1;
  byte bVar2;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  (*(undefined4 *)(gen_frame + 0x24)) = param_5;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
  uVar5 = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x20)) = param_4;
  uVar4 = 0;
  puVar3 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x28)) = param_6;
  (*(undefined4 *)(gen_frame + 0x30)) = param_2[1];
  uVar1 = param_2[2];
  (*(undefined4 *)(gen_frame + 0x0)) = 0x195;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x30;
  (*(undefined4 *)(gen_frame + 0x34)) = uVar1;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar2 = F_00974e00(this GEN_EDX_ARG,puVar3,uVar4,uVar5);
  return CONCAT31(extraout_var,bVar2);
}

/* ref: FUN_00a51420 */
GEN_OWN GEN_NOFRAME uint F_00a51420(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xa51420u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x1c)) = param_4;
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = param_7;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x20)) = param_5;
  (*(undefined4 *)(gen_frame + 0x24)) = param_6;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x197;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x30;
  (*(undefined4 *)(gen_frame + 0x30)) = param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = param_3;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a514d0 */
GEN_OWN GEN_NOFRAME uint F_00a514d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xa514d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  (*(undefined4 *)(gen_frame + 0x28)) = param_6;
  uVar7 = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = param_4;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x198;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x48;
  (*(undefined4 *)(gen_frame + 0x24)) = param_5;
  uVar6 = 0;
  puVar5 = &(*(undefined4 *)(gen_frame + 0x0));
  puVar3 = param_2;
  puVar4 = ((undefined4 *)(gen_frame + 0x2c));
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar5,uVar6,uVar7);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51580 */
GEN_OWN GEN_NOFRAME uint F_00a51580(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa51580u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  (*(undefined4 *)(gen_frame + 0x18)) = param_6;
  (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_5;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = param_3;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined2 *)(gen_frame + 0x3c)) = (undefined2)param_4;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 8;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51650 */
GEN_OWN GEN_NOFRAME uint F_00a51650(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa51650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_4;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)param_2;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x2c)) = param_3;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0x16;
  (*(undefined2 *)(gen_frame + 0x3c)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51720 */
GEN_OWN GEN_NOFRAME uint F_00a51720(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa51720u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_4;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)param_2;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x2c)) = param_3;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0x17;
  (*(undefined2 *)(gen_frame + 0x3c)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a517f0 */
GEN_OWN GEN_NOFRAME uint F_00a517f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa517f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_4;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)param_2;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x2c)) = param_3;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0x2b;
  (*(undefined2 *)(gen_frame + 0x3c)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a518c0 */
GEN_OWN GEN_NOFRAME uint F_00a518c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa518c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)param_2;
  (*(undefined2 *)(gen_frame + 0x3c)) = (undefined2)param_2;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = param_4;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0xe;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = param_3;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = param_1;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = param_3;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51990 */
GEN_OWN GEN_NOFRAME uint F_00a51990(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa51990u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)param_2;
  (*(undefined2 *)(gen_frame + 0x3c)) = (undefined2)param_2;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x18)) = param_4;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = param_3;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = param_1;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = param_3;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51a60 */
GEN_OWN GEN_NOFRAME uint F_00a51a60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa51a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_2;
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  (*(undefined4 *)(gen_frame + 0x38)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined2 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0x10;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51b20 */
GEN_OWN GEN_NOFRAME uint F_00a51b20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa51b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_2;
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  (*(undefined4 *)(gen_frame + 0x38)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined2 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51be0 */
GEN_OWN GEN_NOFRAME uint F_00a51be0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa51be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  (*(undefined4 *)(gen_frame + 0x24)) = param_2;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined2 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0x12;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51ca0 */
GEN_OWN GEN_NOFRAME uint F_00a51ca0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa51ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  (*(undefined4 *)(gen_frame + 0x24)) = param_2;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined2 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0x13;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51d60 */
GEN_OWN GEN_NOFRAME uint F_00a51d60(void)
{
  GEN_ENTER(0xa51d60u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  uVar4 = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x262;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
  (*(undefined2 *)(gen_frame + 0x18)) = REFG(undefined2, 0x14b4eb8);
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51de0 */
GEN_OWN GEN_NOFRAME uint F_00a51de0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined1 * param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xa51de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined1 * param_8 = (undefined1 *)(uintptr_t)gen_a7;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined1 *)(gen_frame + 0x18)) = *param_8;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_4;
  (*(undefined1 *)(gen_frame + 0x19)) = param_3;
  (*(undefined4 *)(gen_frame + 0x20)) = param_5;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x26)) = (undefined2)param_7;
  (*(undefined2 *)(gen_frame + 0x24)) = (undefined2)param_6;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x28)) = param_1;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x196;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x28;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_2;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51ea0 */
GEN_OWN GEN_NOFRAME uint F_00a51ea0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined1 * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xa51ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined1 * param_7 = (undefined1 *)(uintptr_t)gen_a6;)
  GEN_FRAME_DECL(0xc38, 8);
  undefined4 uVar1;
  byte bVar2;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
  (*(undefined1 *)(gen_frame + 0x18)) = *param_7;
  (*(undefined2 *)(gen_frame + 0x26)) = (undefined2)param_6;
  uVar5 = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = param_4;
  (*(undefined4 *)(gen_frame + 0x28)) = *param_1;
  uVar4 = 0;
  puVar3 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined1 *)(gen_frame + 0x19)) = param_2;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1[1];
  uVar1 = param_1[2];
  (*(undefined4 *)(gen_frame + 0x0)) = 0x199;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x30;
  (*(undefined2 *)(gen_frame + 0x24)) = (undefined2)param_5;
  (*(undefined4 *)(gen_frame + 0x30)) = uVar1;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar2 = F_00974e00(this GEN_EDX_ARG,puVar3,uVar4,uVar5);
  return CONCAT31(extraout_var,bVar2);
}

/* ref: FUN_00a51f70 */
GEN_OWN GEN_NOFRAME uint F_00a51f70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xa51f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_7;
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_5;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = param_3;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined2 *)(gen_frame + 0x3c)) = (undefined2)param_4;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 9;
  (*(undefined4 *)(gen_frame + 0x40)) = param_6;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52040 */
GEN_OWN GEN_NOFRAME uint F_00a52040(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xa52040u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_7;
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_5;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = param_3;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined2 *)(gen_frame + 0x3c)) = (undefined2)param_4;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined4 *)(gen_frame + 0x40)) = param_6;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52110 */
GEN_OWN GEN_NOFRAME uint F_00a52110(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xa52110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x18)) = param_7;
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_6;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = param_3;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined2 *)(gen_frame + 0x3c)) = (undefined2)param_4;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 10;
  (*(undefined4 *)(gen_frame + 0x40)) = param_5;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a521e0 */
GEN_OWN GEN_NOFRAME uint F_00a521e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xa521e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_6;
  (*(undefined4 *)(gen_frame + 0x18)) = param_8;
  (*(undefined4 *)(gen_frame + 0x38)) = param_3;
  (*(undefined2 *)(gen_frame + 0x3c)) = (undefined2)param_4;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = param_5;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x44)) = param_7;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0xb;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a522b0 */
GEN_OWN GEN_NOFRAME uint F_00a522b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa522b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  uVar4 = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x1b3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x20;
  (*(undefined4 *)(gen_frame + 0x18)) = param_2;
  (*(undefined1 *)(gen_frame + 0x1c)) = 1;
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00974e00(this GEN_EDX_ARG,puVar2,uVar3,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

