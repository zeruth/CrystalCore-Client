#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00ac5000 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00ac5000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xac5000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x108, 8, 4);
  undefined4 uVar1;
  undefined * this_00;
  uint uVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  
  this_00 = REFG(void * PTR32, 0x1379694);
  GEN_COOKIE((*(uint *)(gen_frame + 0x100)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x104));
  if ((!(0.0 < *((float *)GEN_TOP(((int)this + 8))))) && (!(REFG(float, 0x14ab588) <= 0.0))) {
    if (param_1 - 4U < 4) {
      uVar2 = F_00ab2c00(1);
      F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x100,((char *)REFP(0x10e9860)),
                 (*((uint *)GEN_TOP(((uVar2 - 0x10) + param_1 * 4))) & 0xffffff) + (uVar2 - 0x10) + param_1 * 4
                );
      uVar1 = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8)));
      pfVar3 = ((float *)GEN_TOP(F_00a5feb0(this_00 GEN_EDX_ARG)));
      uVar8 = 1;
      uVar7 = 0;
      uVar6 = 0;
      fVar5 = (float)(float10)1;
      uVar2 = F_00a5feb0(this_00 GEN_EDX_ARG);
      fVar4 = *((float *)GEN_TOP((uVar2 + 8)));
      uVar2 = F_00a5feb0(this_00 GEN_EDX_ARG);
      F_004e95a0(uVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(float)(float10)1,0,*pfVar3,GEN_ARGF(*((float *)GEN_TOP((uVar2 + 4)))),fVar4,fVar5,
                   uVar6,uVar7,uVar8);
    }
    F_00a51200(9,param_1,0,0,0);
    *((undefined4 *)GEN_TOP(((int)this + 0x7c4))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x7c4))), REFG(float, 0x1087f04));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 8))), REFG(float, 0x1088068));
    return 1;
  }
  return 0;
}

/* ref: FUN_00ac5140 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ac5140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xac5140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  undefined * this_00;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar1 = REFG(int, 0x1379694);
  if (((!GEN_ISNAN(*((float *)GEN_TOP(((int)this + 0xc)))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
       !(*((float *)GEN_TOP(((int)this + 0xc))) <= *(float *)&REFG(undefined, 0x1088114))) || (REFG(char, 0x14ab5ba) == '\0')) {
    return 0;
  }
  if (param_1 == 3) {
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 3;
    *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0xffffffff;
    *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0xb;
    return 1;
  }
  uVar4 = F_00ab2d50(param_1);
  iVar7 = param_2;
  if (((((uVar4 != 0) && (*((short *)GEN_TOP((uVar4 + 0xc))) != 0)) || (param_1 == 7)) || (param_1 == 8)) &&
     (iVar1 != 0)) {
    uVar8 = 0;
    if (*((ushort *)GEN_TOP((uVar4 + 0xc))) != 0) {
      uVar8 = F_00ab1ed0((uint)*((ushort *)GEN_TOP((uVar4 + 0xc))));
      if (uVar8 == 0) {
        return 0;
      }
      if (((((*((char *)GEN_TOP((uVar8 + 0x2e))) == '\x01') && (*((char *)GEN_TOP((uVar8 + 0x2f))) == '\0')) &&
           ((*((char *)GEN_TOP((uVar8 + 0x30))) == '\0' &&
            ((*((char *)GEN_TOP((uVar8 + 0x31))) == '\0' && (*((char *)GEN_TOP((uVar8 + 0x32))) == '\0')))))) &&
          (*((char *)GEN_TOP((uVar8 + 0x34))) == '\0')) &&
         ((*((char *)GEN_TOP((uVar8 + 0x37))) == '\0' && (*((char *)GEN_TOP((uVar8 + 0x35))) == '\0')))) {
        param_3 = 0;
        iVar7 = REFG(int, 0x14ab5bc);
      }
      if ((((((*((char *)GEN_TOP((uVar8 + 0x2e))) == '\0') && (*((char *)GEN_TOP((uVar8 + 0x2f))) == '\0')) &&
            (*((char *)GEN_TOP((uVar8 + 0x30))) == '\0')) &&
           ((*((char *)GEN_TOP((uVar8 + 0x31))) == '\0' && (*((char *)GEN_TOP((uVar8 + 0x32))) == '\0')))) &&
          (*((char *)GEN_TOP((uVar8 + 0x34))) == '\0')) &&
         ((*((char *)GEN_TOP((uVar8 + 0x37))) == '\0' && (*((char *)GEN_TOP((uVar8 + 0x35))) == '\x01')))) {
        param_3 = 0;
        iVar7 = REFG(int, 0x14ab5bc);
      }
    }
    piVar5 = ((int *)GEN_TOP(F_00475fa0(iVar7,param_3)));
    if (((uVar8 != 0) && (*((char *)GEN_TOP((uVar8 + 0x2e))) == '\x01')) &&
       (bVar2 = F_00ac1510((uint)*((ushort *)GEN_TOP((uVar4 + 0xc))),piVar5), iVar9 = REFG(int, 0x14ab5bc),
       bVar2 == 0)) {
      param_3 = 0;
      piVar5 = ((int *)GEN_TOP(F_00475fa0(REFG(int, 0x14ab5bc),0)));
      iVar7 = iVar9;
    }
    if ((piVar5 != ((int *)GEN_TOP(0x0))) &&
       (uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xb8))))(piVar5 GEN_EDX_ARG), (char)uVar6 != '\0')) {
      uVar6 = (uint)*(ushort *)(piVar5 + 0x3a);
      if (*(ushort *)(piVar5 + 0x3a) != 0) {
        iVar9 = iVar1;
        this_00 = ((undefined *)GEN_TOP(F_00b070f0()));
        bVar2 = F_00b088e0(this_00 GEN_EDX_ARG,uVar6,iVar9);
        if (bVar2 == 0) {
          F_00a7d290(0x876,0,0,0,0,REFG(float, 0x10916ec));
          return 0;
        }
      }
      uVar6 = F_00a62220(piVar5);
      if ((char)uVar6 != '\0') {
        sVar3 = (short)((uint)piVar5[0x39] >> 0x10);
        if ((((sVar3 == -0x7fff) || (sVar3 == -0x7ffe)) || (sVar3 == -0x7ff9)) &&
           (*((int *)GEN_TOP((iVar1 + 0xe4))) != piVar5[0x39])) {
          F_00a7d290(0x555,0,0,0,0,REFG(float, 0x10916ec));
          return 0;
        }
      }
    }
    if ((((uVar8 != 0) &&
         (((*((char *)GEN_TOP((uVar8 + 0x2e))) != '\x01' || (iVar7 != REFG(int, 0x14ab5bc))) || (param_3 != 0)))) &&
        (bVar2 = F_00ac1510((uint)*((ushort *)GEN_TOP((uVar4 + 0xc))),piVar5), bVar2 == 0)) ||
       (((param_1 == 7 || (param_1 == 8)) &&
        ((piVar5 == ((int *)GEN_TOP(0x0)) || (uVar4 = F_00a62220(piVar5), (char)uVar4 == '\0')))))) {
      F_00a7d290(0x233,0,0,0,0,REFG(float, 0x10916ec));
      return 0;
    }
  }
  F_00a512b0(0xb,iVar7,param_3,param_1,0,0,0);
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0xc))), REFG(float, 0x1088068));
  return 1;
}

/* ref: FUN_00ac5420 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00ac5420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xac5420u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 * puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    F_00a7eea0(&REFG(char, 0x14ab068) GEN_EDX_ARG,(uint)(REFG(char, 0x14ab068) == '\0'));
    break;
  case 2: ;
    if (REFG(undefined4 * PTR32, 0x1379694) != ((undefined4 *)GEN_TOP(0x0))) {
      F_00a9f630(REFG(undefined4 * PTR32, 0x1379694) GEN_EDX_ARG);
    }
    break;
  case 3: ;
    if (REFG(undefined4 * PTR32, 0x1379694) != ((undefined4 *)GEN_TOP(0x0))) {
      bVar4 = (byte)(REFG(undefined2, 0x14b29b6) / 10000);
      if (bVar4 < 4) {
        if (bVar4 == 0) {
          F_00a7d290(0x23c,0,0,0,0,REFG(float, 0x10916ec));
          return 0;
        }
      }
      else {
        bVar4 = 3;
      }
      uVar2 = F_00ab21a0((uint)*((byte *)GEN_TOP((REFG(undefined4 * PTR32, 0x1379694) + 0x5a2))));
      if (uVar2 == 0) {
        return 0;
      }
      uVar2 = (uint)*((ushort *)GEN_TOP((uVar2 + 0x36 + (uint)bVar4 * 2)));
      if (uVar2 == 0) {
        F_00a7d290(0x23e,0,0,0,0,REFG(float, 0x10916ec));
        return 0;
      }
      uVar8 = 0;
      uVar9 = 0;
      uVar5 = F_00533b60(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
      F_00ac83b0(this GEN_EDX_ARG,1,uVar2,(int)uVar5,(int)(uVar5 >> 0x20),uVar9,uVar8);
    }
    break;
  case 4: ;
    if (REFG(undefined4 * PTR32, 0x1379694) != ((undefined4 *)GEN_TOP(0x0))) {
      uVar8 = 0;
      uVar9 = 0;
      uVar6 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1379694))))(REFG(undefined4 * PTR32, 0x1379694));
      F_00ac83b0(this GEN_EDX_ARG,1,3,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar9,uVar8);
    }
    break;
  case 6: ;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar9 = 0x21;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
      uVar2 = F_00763050(uVar2 GEN_EDX_ARG,uVar9);
      F_007756d0(uVar2 GEN_EDX_ARG,1,0);
    }
    break;
  case 7: ;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar9 = 0x28;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
      piVar1 = ((int *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar9)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    }
    break;
  case 8: ;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x10e9878)),REFG(undefined4, 0x108cc50));
      puVar7 = ((undefined1 *)(gen_frame + 0x0));
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG)));
      F_00abefa0(pvVar3 GEN_EDX_ARG,puVar7,piVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    break;
  case 0xc: ;
    if ((REFG(undefined1, 0x14b4ec1) & 8) == 0) {
      return 0;
    }
    goto LAB_00ac5651;
  case 0xd: ;
    if ((REFG(undefined1, 0x14b4ec1) & 0x10) == 0) {
      return 0;
    }
LAB_00ac5651: ;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar9 = 0x23;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
      pvVar3 = ((undefined *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar9)));
      F_008eded0(pvVar3 GEN_EDX_ARG,(uint)(param_1 == 0xd));
    }
    break;
  case 0xe: ;
    if ((REFG(undefined1, 0x14b4ec1) & 0x20) == 0) {
      return 0;
    }
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar9 = 0x22;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
      pvVar3 = ((undefined *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar9)));
      F_008ede80(pvVar3 GEN_EDX_ARG);
    }
    break;
  case 0xf: ;
    if ((REFG(undefined1, 0x14b4ec1) & 0x40) == 0) {
      return 0;
    }
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar9 = 0x24;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
      pvVar3 = ((undefined *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar9)));
      F_008ecf80(pvVar3 GEN_EDX_ARG);
    }
    break;
  case 0x10: ;
    uVar9 = 0;
    goto LAB_00ac56ca;
  case 0x11: ;
    uVar9 = 1;
LAB_00ac56ca: ;
    F_00549d90(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,uVar9);
  }
  return 1;
}

/* ref: FUN_00ac5730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ac5730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xac5730u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  uint * puVar2;
  int * piVar3;
  uint uVar4;
  undefined2 * puVar5;
  undefined4 uVar6;
  
  puVar2 = ((uint *)GEN_TOP(F_00ab1fc0(param_1)));
  piVar1 = REFG(int * PTR32, 0x1379694);
  uVar4 = 0;
  if (puVar2 != ((uint *)GEN_TOP(0x0))) {
    uVar4 = 0;
    if (REFG(int * PTR32, 0x1379694) != ((int *)GEN_TOP(0x0))) {
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 2;
      *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_2;
      *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_3;
      *((float *)GEN_TOP(((int)this + 0x24))) = (float)(byte)puVar2[3];
      *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
      piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        uVar6 = 3;
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG);
        uVar4 = F_00763050(uVar4 GEN_EDX_ARG,uVar6);
        if (uVar4 != 0) {
          F_0086dce0(uVar4 GEN_EDX_ARG,(*puVar2 & 0xffffff) + (int)puVar2,(uint)(ushort)puVar2[1],GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x20)))),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x24)))),1,param_2,param_3);
        }
      }
      uVar6 = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
      puVar5 = ((undefined2 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xd8))))(piVar1 GEN_EDX_ARG)));
      *(undefined4 *)(puVar5 + 2) = param_1;
      *(undefined4 *)(puVar5 + 0x1a) = 0;
      *(undefined4 *)(puVar5 + 4) = 0;
      *puVar5 = 0x401;
      *(undefined4 *)(puVar5 + 0x1c) = uVar6;
      *(undefined4 *)(puVar5 + 8) = param_2;
      *(undefined4 *)(puVar5 + 10) = param_3;
      uVar4 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0xe,1);
    }
  }
  return uVar4;
}

/* ref: FUN_00ac5840 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ac5840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xac5840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  char * pcVar3;
  bool bVar4;
  
  piVar1 = REFG(int * PTR32, 0x1379694);
  if (((REFG(int * PTR32, 0x1379694) != ((int *)GEN_TOP(0x0))) &&
      (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0xd8))))(REFG(int * PTR32, 0x1379694) GEN_EDX_FWD), uVar2 != 0)) &&
     (pcVar3 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xd8))))(piVar1 GEN_EDX_ARG))), *pcVar3 != '\0')) {
    return 0;
  }
  bVar4 = GEN_ISNAN(*(float *)this) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  if ((bVar4 != (bVar4 || *(float *)this == *(float *)&REFG(undefined, 0x1088114))) &&
     ((uVar2 = F_00ac29c0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x5c))),*((undefined4 *)GEN_TOP(((int)this + 0x60)))
                           ), uVar2 == 0xffffffff ||
      (*((char *)GEN_TOP(((int)this + (uVar2 * 5 + 0x3c) * 4))) == '\0')))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ac58b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ac58b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xac58b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char cVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  pvVar3 = REFG(void * PTR32, 0x1379694);
  if (REFG(void * PTR32, 0x1379694) == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  if (param_1 == 1) {
    uVar4 = F_00ab1ed0(param_2);
    if (uVar4 == 0) {
      return 0;
    }
    bVar2 = F_00ac4a90(this GEN_EDX_ARG,1,param_2);
    if (bVar2 == 0) {
      return 0;
    }
    cVar1 = *((char *)GEN_TOP((uVar4 + 0x23)));
    if ((((((cVar1 != '\0') && (cVar1 != '\b')) && (cVar1 != '\t')) &&
         (((cVar1 != '\v' && (cVar1 != '\a')) &&
          ((cVar1 != '\x19' && ((cVar1 != '\x1a' && (cVar1 != '\x15')))))))) &&
        ((cVar1 != '\x16' && (((cVar1 != '\x17' && (cVar1 != '\x18')) && (cVar1 != '\x1c')))))) &&
       (uVar5 = F_00ac23f0(this GEN_EDX_ARG,param_2), uVar5 == 0)) {
      return 1;
    }
    if ((*((char *)GEN_TOP(((int)this + 0x7bc))) == '\0') &&
       (bVar2 = F_00ac1b30(param_2,*((undefined4 *)GEN_TOP(((int)this + 0x54)))), bVar2 != 0)) {
      return 1;
    }
    if ((*((byte *)GEN_TOP((uVar4 + 0x26))) != 0) &&
       (uVar5 = F_0071ce90(pvVar3 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP((uVar4 + 0x26)))), (char)uVar5 != '\0')) {
      return 1;
    }
    uVar4 = (uint)*((ushort *)GEN_TOP((uVar4 + 0x10)));
    if (((((uVar4 == 0x6b) || (uVar4 == 0x6c)) || (uVar4 == 0x6d)) || (uVar4 == 0x61)) &&
       (uVar4 = F_0071ce90(pvVar3 GEN_EDX_ARG,uVar4), (char)uVar4 != '\0')) {
      return 1;
    }
  }
  else if (param_1 == 9) {
    uVar6 = 0xa0001;
    pvVar3 = ((undefined *)GEN_TOP(F_006b8c00()));
    uVar4 = F_006e3240(pvVar3 GEN_EDX_ARG,uVar6);
    if (uVar4 != 0) {
      uVar4 = F_006bf0c0(uVar4 GEN_EDX_ARG,param_2);
      return uVar4 == 1;
    }
  }
  return 0;
}

/* ref: FUN_00ac59f0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ac59f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xac59f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x80))) != ((undefined *)GEN_TOP(0x0))) {
    F_009bc530(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_FWD,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x84))) != ((undefined *)GEN_TOP(0x0))) {
    F_009bc530(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  return;
}

/* ref: FUN_00ac5a30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ac5a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xac5a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = REFG(int, 0x1379694);
  uVar2 = F_005339c0(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD);
  uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,uVar2);
  if ((iVar1 != 0) && (uVar2 != 0)) {
    uVar3 = F_00ac37d0(this GEN_EDX_ARG,iVar1,uVar2);
    if (uVar3 != 0) {
      uVar2 = F_00ac38c0(iVar1,uVar3);
      return uVar2;
    }
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x90))) = 0;
    uVar3 = F_005339c0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    F_00a51200(0x61,uVar3,uVar5,uVar6,uVar7);
    fVar4 = F_00a5ffa0(iVar1,uVar2);
    uVar2 = F_00a9f850(iVar1 GEN_EDX_ARG,fVar4,0);
  }
  return uVar2;
}

/* ref: FUN_00ac5ac0 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_00ac5ac0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xac5ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x108, 8, 4);
  char cVar1;
  undefined4 uVar2;
  char * pcVar3;
  float * pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x100)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x104));
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar5 = 0;
  if (pcVar3 != param_2 + 1) {
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0xff,((char *)REFP(0x10e9880)),param_2);
    uVar2 = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8)));
    pfVar4 = ((float *)GEN_TOP(F_00a5feb0(param_1 GEN_EDX_ARG)));
    uVar10 = 1;
    uVar9 = 0;
    uVar8 = 0;
    fVar7 = (float)(float10)1;
    uVar5 = F_00a5feb0(param_1 GEN_EDX_ARG);
    fVar6 = *((float *)GEN_TOP((uVar5 + 8)));
    uVar5 = F_00a5feb0(param_1 GEN_EDX_ARG);
    uVar5 = F_004e95a0(uVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(float)(float10)1,0,*pfVar4,GEN_ARGF(*((float *)GEN_TOP((uVar5 + 4)))),fVar6,
                         fVar7,uVar8,uVar9,uVar10);
  }
  return uVar5;
}

/* ref: FUN_00ac5b80 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ac5b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(char * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xac5b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(char * param_4 = (char *)(uintptr_t)gen_a4;)
  short sVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_1 == ((undefined *)GEN_TOP(0x0))) {
    return;
  }
  if (param_2 == ((int *)GEN_TOP(0x0))) {
    return;
  }
  bVar2 = F_00aa19d0(param_1 GEN_EDX_FWD,param_3,1);
  if (bVar2 == 0) {
    return;
  }
  switch((unsigned int)(uintptr_t)(*param_4)) {
  case '\x02': ;
    F_00ac3c30(7,param_1,param_2);
    return;
  case '\x03': ;
  case '\x05': ;
  case '\a': ;
  case '\b': ;
    if (((param_3 == 0x10) || (param_3 == 0x18)) || (param_3 == 0x19)) {
      local_8 = 1;
    }
    uVar3 = F_00ab1ed0(param_3);
    if ((*((char *)GEN_TOP((uVar3 + 0x1c))) == '\x01') || (*((char *)GEN_TOP((uVar3 + 0x1c))) == '\x03')) {
      F_00aa2e00(param_1 GEN_EDX_ARG,0x10,0,param_2,1,local_8);
    }
    if (*param_4 == '\a') {
      iVar5 = 0x43;
      goto LAB_00ac5c80;
    }
    if (*param_4 == '\b') {
      iVar5 = 0x44;
      goto LAB_00ac5c80;
    }
    switch((unsigned int)(uintptr_t)(param_4[1])) {
    case '\x01': ;
      iVar5 = 0x10;
      break;
    case '\x02': ;
      iVar5 = 0x11;
      break;
    case '\x03': ;
      iVar5 = 0x12;
      break;
    case '\x04': ;
      iVar5 = 0x13;
      break;
    case '\x05': ;
    case '\x06': ;
      iVar5 = (byte)param_4[2] + 0x17;
      break;
    case '\a': ;
      iVar5 = 0x16;
      break;
    default: ;
      goto switchD_00ac5c51_default;
    }
LAB_00ac5c80: ;
    F_00ac3c30(iVar5,param_1,param_2);
switchD_00ac5c51_default: ;
    if ((param_4[6] & 1U) != 0) {
      F_00ac3c30(0x3e,param_1,param_2);
    }
    if ((param_4[6] & 2U) != 0) {
      F_00ac3c30(0x40,param_1,param_2);
    }
    if ((param_4[6] & 4U) != 0) {
      F_00ac3c30(0x41,param_1,param_2);
    }
    if ((param_4[6] & 8U) != 0) {
      F_00ac3c30(0x42,param_1,param_2);
    }
    if ((param_4[6] & 0x10U) != 0) {
      F_00ac3c30(5,param_1,param_2);
    }
    if ((param_4[6] & 0x20U) != 0) {
      F_00ac3c30(0x78,param_1,param_2);
    }
    if (*param_4 == '\x05') {
      if ((byte)(param_4[1] - 1U) < 4) {
        F_00ac3c30(0x25,param_1,param_2);
        return;
      }
      F_00ac3c30(0x26,param_1,param_2);
      return;
    }
    break;
  case '\x04': ;
  case '\x06': ;
    if (param_4[1] == '\0') {
      uVar6 = 0x1f;
    }
    else {
      uVar6 = 0x22;
    }
    F_00ac3c30(uVar6,param_1,param_2);
    if (*param_4 == '\x06') {
      F_00ac3c30(0x27,param_1,param_2);
      return;
    }
    break;
  case '\t': ;
    F_00ac3c30(5,param_1,param_2);
    return;
  case '\f': ;
    F_00ac3c30(0x17,param_1,param_2);
    return;
  case '\r': ;
    if (param_4[1] != '\0') {
      F_00ac3c30(0x23,param_1,param_2);
      return;
    }
    F_00ac3c30(0x20,param_1,param_2);
    return;
  case '\x0f': ;
    if (param_4[1] != '\0') {
      F_00ac3c30(0x24,param_1,param_2);
      return;
    }
    F_00ac3c30(0x21,param_1,param_2);
    return;
  case '\x11': ;
  case '\x12': ;
    uVar3 = F_00ab1ff0((int)*(short *)(param_4 + 4));
    F_00ac3c30((uint)*((byte *)GEN_TOP((uVar3 + 0x10))),param_1,param_2);
    return;
  case '\x13': ;
  case '\x14': ;
    iVar5 = (int)*(short *)(param_4 + 4);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0xd4))))(param_2 GEN_EDX_ARG)));
    F_00b7ad80(this_00 GEN_EDX_ARG,iVar5);
    return;
  case '\x16': ;
    F_00ac3c30(0x3d,param_1,param_2);
    return;
  case '\x1d': ;
    F_00ac3c30(8,param_1,param_2);
    return;
  case '\x1e': ;
    sVar1 = *(short *)(param_4 + 4);
    if ((0 < sVar1) && (sVar1 < 8)) {
      F_00ac3c30(sVar1 + 8,param_1,param_2);
      return;
    }
    break;
  case '$': ;
    uVar3 = F_00ab2840((int)*(short *)(param_4 + 4));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x98))))(param_2 GEN_EDX_ARG);
    if (((char)uVar4 != '\0') && (uVar3 != 0)) {
      if (param_4[1] == '\x01') {
        F_00ac5ac0(param_2,(*((uint *)GEN_TOP((uVar3 + 8))) & 0xffffff) + uVar3 + 8);
        return;
      }
      F_00ac5ac0(param_2,(*((uint *)GEN_TOP((uVar3 + 0xc))) & 0xffffff) + uVar3 + 0xc);
      return;
    }
    break;
  case '-': ;
    uVar3 = F_00ac3c30((int)*(short *)(param_4 + 4),param_1,param_2);
    if (uVar3 != 0) {
      F_00a9fe80(param_1 GEN_EDX_ARG,uVar3);
      return;
    }
    break;
  case '.': ;
    if (param_3 == 0x355) {
      F_00ac3c30(0x72,param_1,param_2);
    }
  }
  return;
}

/* ref: FUN_00ac5fd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ac5fd0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(byte * param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(char param_9, unsigned int gen_a8))
{
  GEN_ENTER(0xac5fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(byte * param_7 = (byte *)(uintptr_t)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(char param_9 = (char)gen_a8;)
  GEN_FRAME_DECL(0x70, 0);
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  undefined * this;
  undefined3 extraout_var = 0;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  undefined4 * puVar13;
  byte * pbVar14;
  
  ((uint *)(gen_frame + 0x3c))[8] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = param_2;
  (*(float *)(gen_frame + 0x2c)) = gen_bits2f(param_4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = REFG(undefined4 * PTR32, 0x1379694);
  if (param_3 == ((undefined4 *)GEN_TOP(0x0))) {
    return (uint)param_2;
  }
  uVar3 = F_00ab1ed0(param_4);
  (*(float *)(gen_frame + 0x24)) = gen_bits2f(uVar3);
  if (uVar3 == 0) {
    return 0;
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x38)) != ((undefined4 *)GEN_TOP(0x0))) {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x38)) == (*(undefined4 * PTR32 *)(gen_frame + 0x28))) {
      puVar13 = param_3;
      fVar11 = (*(float *)(gen_frame + 0x2c));
      pbVar14 = param_7;
      this = ((undefined *)GEN_TOP(F_006b8c00()));
      F_006f88c0(this GEN_EDX_ARG,puVar13,(undefined4)gen_fl2bits(fVar11),uVar3,pbVar14);
    }
    bVar2 = F_00a9f620(param_3 GEN_EDX_ARG);
    if ((bVar2 != 0) && (*((char *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x24))) + 0x3a))) == '\x01')) {
      F_0053f190(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x38)));
    }
  }
  (*(bool *)(gen_frame + 0x37)) = *((char *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x24))) + 0x1c))) == '\x01';
  F_00ae0810(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,param_3[0x1d]);
  F_00ac5b80((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x38)),param_3,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x2c))),param_7);
  bVar2 = *param_7;
  uVar3 = bVar2 - 1;
  if (0x2f < uVar3) {
    return uVar3;
  }
  uVar3 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xac69a0) + bVar2 + 3)));
  puVar13 = param_3;
  switch((unsigned int)(uintptr_t)(bVar2)) {
  case 1: ;
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x38)) == (*(undefined4 * PTR32 *)(gen_frame + 0x28))) {
      *(undefined4 *)&REFG(undefined, 0x14bd688) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14bd688), REFG(float, 0x10a509c));
    }
    if (param_3 == (*(undefined4 * PTR32 *)(gen_frame + 0x28))) {
      *(undefined4 *)&REFG(undefined, 0x14bd694) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14bd694), REFG(float, 0x10a509c));
    }
    uVar3 = 0;
    iVar5 = 0;
    uVar12 = (-(uint)((*(bool *)(gen_frame + 0x37)) != false) & 0xfffffff7) + 0x203;
    puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  case 2: ;
    uVar3 = 0;
    iVar5 = 0;
    if (param_9 == '\0') {
      uVar12 = 0x202;
      puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    }
    else {
      uVar12 = 0x276;
      puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    }
    break;
  case 3: ;
  case 5: ;
    bVar2 = param_7[6];
    (*(bool *)(gen_frame + 0x37)) = true;
    if (((bVar2 & 2) != 0) && (param_3[0x5a4] == (int)*(short *)(param_7 + 4))) {
      (*(bool *)(gen_frame + 0x37)) = false;
    }
    if ((bVar2 & 0x10) != 0) {
      (*(bool *)(gen_frame + 0x37)) = false;
    }
    if ((bVar2 & 4) != 0) {
      (*(bool *)(gen_frame + 0x37)) = false;
    }
    if (((bVar2 & 8) != 0) && (param_3[0x5a4] == (int)*(short *)(param_7 + 4))) {
      (*(bool *)(gen_frame + 0x37)) = false;
    }
    uVar3 = F_0071ce90(param_3 GEN_EDX_ARG,1);
    if ((((char)uVar3 != '\x01') && ((*(bool *)(gen_frame + 0x37)) != false)) && (param_3[0x5a5] != 0)) {
      F_00aa3ff0(param_3 GEN_EDX_ARG,(uint)(*(short *)(param_7 + 4) * 100) / (uint)param_3[0x5a5],(*(undefined4 * PTR32 *)(gen_frame + 0x38)));
    }
    if (param_9 == '\0') {
      if (*param_7 == 3) {
        iVar5 = (int)(char)param_7[3];
        iVar4 = (int)*(short *)(param_7 + 4);
        uVar7 = 0x1fe;
      }
      else {
        iVar5 = (int)(char)param_7[3];
        iVar4 = (int)*(short *)(param_7 + 4);
        uVar7 = 0x1ff;
      }
    }
    else if (*param_7 == 3) {
      iVar5 = (int)(char)param_7[3];
      iVar4 = (int)*(short *)(param_7 + 4);
      uVar7 = 0x1f8;
    }
    else {
      iVar5 = (int)(char)param_7[3];
      iVar4 = (int)*(short *)(param_7 + 4);
      uVar7 = 0x1f9;
    }
    F_00a7d4b0(uVar7,(*(undefined4 * PTR32 *)(gen_frame + 0x38)),param_3,param_5,param_6,iVar4,iVar5,0,0,REFG(float, 0x10916ec));
    bVar2 = F_00a9f620(param_3 GEN_EDX_ARG);
    if (bVar2 == 0) {
      return CONCAT31(extraout_var,bVar2);
    }
    uVar8 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x38)))))((*(undefined4 * PTR32 *)(gen_frame + 0x38)));
    uVar3 = F_00532a00(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    return uVar3;
  case 4: ;
  case 6: ;
    if (*(char *)(param_3 + 0x62) == '\x02') {
      return uVar3;
    }
    uVar3 = 0;
    if (param_7[1] == 0) {
      if (bVar2 == 4) {
        iVar5 = (int)*(short *)(param_7 + 4);
        uVar12 = 0x207;
        puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
      }
      else {
        iVar5 = (int)*(short *)(param_7 + 4);
        uVar12 = 0x208;
        puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
      }
    }
    else {
      iVar5 = (int)*(short *)(param_7 + 4);
      uVar12 = 0x20b;
      puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    }
    break;
  case 7: ;
    if (param_3 == (*(undefined4 * PTR32 *)(gen_frame + 0x28))) {
      *(undefined4 *)&REFG(undefined, 0x14bd68c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14bd68c), REFG(float, 0x10a509c));
    }
    F_00aa4270(param_3 GEN_EDX_ARG,0x4f,0,0);
    uVar3 = (uint)(char)param_7[3];
    iVar5 = (int)*(short *)(param_7 + 4);
    uVar12 = (-(uint)((*(bool *)(gen_frame + 0x37)) != false) & 0xfffffff7) + 0x205;
    puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  case 8: ;
    if (param_3 == (*(undefined4 * PTR32 *)(gen_frame + 0x28))) {
      *(undefined4 *)&REFG(undefined, 0x14bd690) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14bd690), REFG(float, 0x10a509c));
    }
    F_00aa4270(param_3 GEN_EDX_ARG,0x4e,0,0);
    uVar3 = (uint)(char)param_7[3];
    iVar5 = (int)*(short *)(param_7 + 4);
    uVar12 = (-(uint)((*(bool *)(gen_frame + 0x37)) != false) & 0xfffffff7) + 0x206;
    puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  case 9: ;
    if (*(short *)(param_7 + 4) == 0) {
      uVar3 = 0;
      iVar5 = 0;
      if (param_9 == '\0') {
        uVar12 = 0x253;
        puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
      }
      else {
        uVar12 = 0x252;
        puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
      }
    }
    else {
      uVar3 = (uint)param_7[1];
      iVar5 = (int)*(short *)(param_7 + 4);
      uVar12 = 0x25f;
      puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    }
    break;
  case 10: ;
    uVar3 = 0;
    iVar5 = 0;
    uVar12 = 0x263;
    puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  default: ;
    goto switchD_00ac60b6_caseD_b;
  case 0xc: ;
    iVar5 = (int)*(short *)(param_7 + 4);
    uVar3 = 0;
    uVar12 = 0x211;
    puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  case 0xd: ;
    uVar3 = 0;
    if (param_7[1] == 0) {
      iVar5 = (int)*(short *)(param_7 + 4);
      uVar12 = 0x209;
      puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    }
    else {
      iVar5 = (int)*(short *)(param_7 + 4);
      uVar12 = 0x20c;
      puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    }
    break;
  case 0xe: ;
    iVar5 = (int)*(short *)(param_7 + 4);
    uVar3 = 0;
    uVar12 = 0x212;
    puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  case 0xf: ;
    uVar3 = 0;
    if (param_7[1] == 0) {
      iVar5 = (int)*(short *)(param_7 + 4);
      uVar12 = 0x20a;
      puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    }
    else {
      iVar5 = (int)*(short *)(param_7 + 4);
      uVar12 = 0x20d;
      puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    }
    break;
  case 0x10: ;
    iVar5 = (int)*(short *)(param_7 + 4);
    uVar3 = 0;
    uVar12 = 0x277;
    puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  case 0x11: ;
  case 0x12: ;
    uVar3 = F_00ab1ff0((int)*(short *)(param_7 + 4));
    if (uVar3 == 0) {
      return 0;
    }
    uVar12 = (uint)*((ushort *)GEN_TOP((uVar3 + 10)));
    if (*((ushort *)GEN_TOP((uVar3 + 10))) == 0) {
      uVar12 = (*((char *)GEN_TOP((uVar3 + 0xf))) == '\x02') + 0x20e;
    }
    if (*param_7 == 0x11) {
      uVar3 = (uint)param_7[3];
      iVar5 = (int)*(short *)(param_7 + 4);
      puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    }
    else {
      uVar3 = (uint)param_7[3];
      iVar5 = (int)*(short *)(param_7 + 4);
    }
    break;
  case 0x13: ;
    uVar12 = F_00ab1ff0((int)*(short *)(param_7 + 4));
    if (uVar12 == 0) {
      return 0;
    }
    iVar5 = (int)*(short *)(param_7 + 4);
    uVar3 = 0;
    uVar12 = (*((char *)GEN_TOP((uVar12 + 0xf))) == '\x02') + 0x213;
    puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  case 0x14: ;
    uVar12 = F_00ab1ff0((int)*(short *)(param_7 + 4));
    if (uVar12 == 0) {
      return 0;
    }
    iVar5 = (int)*(short *)(param_7 + 4);
    uVar3 = 0;
    uVar12 = (*((char *)GEN_TOP((uVar12 + 0xf))) == '\x02') + 0x213;
    break;
  case 0x15: ;
    uVar3 = (uint)param_7[1];
    iVar5 = (int)*(short *)(param_7 + 4);
    uVar12 = 0x264;
    puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  case 0x19: ;
  case 0x1a: ;
    iVar5 = (int)*(short *)(param_7 + 4);
    uVar3 = 0;
    uVar12 = 0x218;
    puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  case 0x1c: ;
    if (param_3 != (*(undefined4 * PTR32 *)(gen_frame + 0x28))) {
      return uVar3;
    }
    uVar1 = *(ushort *)(param_7 + 4);
    uVar7 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094880)));
    if (uVar1 == 0) {
      uVar7 = 0;
    }
    *(undefined4 *)&REFG(undefined, 0x14bcf90) = uVar7;
    *(int *)&REFG(undefined, 0x14bcf94) = (int)(short)uVar1;
    return (uint)uVar1;
  case 0x21: ;
    uVar3 = F_00a5feb0((*(undefined4 * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
    uVar12 = F_00a5feb0(param_3 GEN_EDX_ARG);
    uVar3 = F_0046f4a0(((undefined1 *)(gen_frame + 0x10)),uVar12,uVar3);
    fVar10 = F_00aae900(uVar3);
    (*(float *)(gen_frame + 0x24)) = fVar10;
    iVar5 = (int)*(short *)(param_7 + 4);
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP(iVar5));
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP((uint)param_7[1]));
    fVar11 = (float)((float10)iVar5 / (float10)param_7[1]);
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar11)));
    uVar3 = F_00aa2400(param_3 GEN_EDX_ARG,fVar10,(float)iVar5,fVar11,0,0);
    return uVar3;
  case 0x22: ;
    uVar3 = F_00a5feb0(param_3 GEN_EDX_ARG);
    uVar12 = F_00a5feb0((*(undefined4 * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
    uVar3 = F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),uVar12,uVar3);
    fVar11 = F_00aae900(uVar3);
    (*(float *)(gen_frame + 0x24)) = fVar11;
    dVar9 = F_00a600a0(param_3,(*(undefined4 * PTR32 *)(gen_frame + 0x38)));
    (*(float *)(gen_frame + 0x2c)) = (float)dVar9;
    iVar5 = (int)*(short *)(param_7 + 4);
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP(iVar5));
    fVar6 = (float10)(float)dVar9;
    if ((float10)iVar5 < fVar6) {
      (*(float *)(gen_frame + 0x2c)) = (float)iVar5;
      fVar6 = (float10)iVar5;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP((uint)param_7[1]));
    fVar11 = (float)(fVar6 / (float10)param_7[1]);
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar11)));
    uVar3 = F_00aa2400(param_3 GEN_EDX_ARG,(*(float *)(gen_frame + 0x24)),(float)fVar6,fVar11,(uint)(param_7[2] != 0),0);
    return uVar3;
  case 0x29: ;
    ((uint *)(gen_frame + 0x3c))[0] = 0x11;
    ((uint *)(gen_frame + 0x3c))[1] = 7;
    ((uint *)(gen_frame + 0x3c))[2] = 0x12;
    ((uint *)(gen_frame + 0x3c))[3] = 0xf;
    ((uint *)(gen_frame + 0x3c))[4] = 9;
    ((uint *)(gen_frame + 0x3c))[5] = 0xe;
    ((uint *)(gen_frame + 0x3c))[6] = 0x16;
    ((uint *)(gen_frame + 0x3c))[7] = 0x3e;
    (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = ((undefined4 *)GEN_TOP(0x0));
    (*(float *)(gen_frame + 0x2c)) = 1.4013e-45;
    do {
      fVar11 = (*(float *)(gen_frame + 0x2c));
      if (((uint)gen_fl2bits((*(float *)(gen_frame + 0x2c))) & (int)*(short *)(param_7 + 4)) != 0) {
        uVar3 = F_00ab1ff0(((uint *)(gen_frame + 0x3c))[(int)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x28)))]);
        uVar12 = (uint)*((ushort *)GEN_TOP((uVar3 + 10)));
        if (*((ushort *)GEN_TOP((uVar3 + 10))) == 0) {
          uVar12 = (*((char *)GEN_TOP((uVar3 + 0xf))) == '\x02') + 0x20e;
        }
        F_00a7d4b0(uVar12,(*(undefined4 * PTR32 *)(gen_frame + 0x38)),param_3,param_5,param_6,((uint *)(gen_frame + 0x3c))[(int)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x28)))],0,0,0,
                     REFG(float, 0x10916ec));
        fVar11 = (*(float *)(gen_frame + 0x2c));
      }
      iVar5 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x28)) + 1;
      uVar3 = (int)gen_fl2bits(fVar11) << 1 | (uint)((int)gen_fl2bits(fVar11) < 0);
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = ((undefined4 *)GEN_TOP(iVar5));
      (*(float *)(gen_frame + 0x2c)) = gen_bits2f(uVar3);
    } while (iVar5 < 8);
    return uVar3;
  case 0x2a: ;
    uVar3 = F_00aa4270(param_3 GEN_EDX_ARG,0x4d,0,0);
    return uVar3;
  case 0x2f: ;
    iVar5 = (int)*(short *)(param_7 + 4);
    uVar3 = 0;
    uVar12 = 0x254;
    puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  case 0x30: ;
    iVar5 = (int)*(short *)(param_7 + 4);
    uVar3 = 0;
    uVar12 = 0x278;
    puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
  }
  uVar3 = F_00a7d4b0(uVar12,puVar13,param_3,param_5,param_6,iVar5,uVar3,0,0,REFG(float, 0x10916ec));
switchD_00ac60b6_caseD_b: ;
  return uVar3;
}

/* ref: FUN_00ac69e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ac69e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xac69e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int iVar6;
  undefined4 * puVar7;
  undefined * this_01;
  
  iVar6 = 0;
  piVar5 = this;
  while ((*piVar5 != param_1 || ((char)piVar5[2] != (char)param_2))) {
    iVar6 = iVar6 + 1;
    piVar5 = piVar5 + 0x19;
    if (0x1f < iVar6) {
      return (uint)piVar5;
    }
  }
  puVar7 = ((undefined4 *)GEN_TOP((iVar6 * 100 + (int)this)));
  if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar7[5] == -0x20000000) {
      this_00 = ((undefined *)GEN_TOP(0x0));
    }
    else {
      this_00 = ((undefined *)GEN_TOP(F_00a35490(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,puVar7[5])));
    }
    if (puVar7[0xf] == -0x20000000) {
      this_01 = ((undefined *)GEN_TOP(0x0));
    }
    else {
      this_01 = ((undefined *)GEN_TOP(F_00a35490(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,puVar7[0xf])));
    }
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      param_1 = 0;
    }
    else {
      param_1 = F_00a5f290(this_00 GEN_EDX_ARG);
    }
    if (this_01 == ((undefined *)GEN_TOP(0x0))) {
      uVar3 = 0;
    }
    else {
      uVar3 = F_00a5f290(this_01 GEN_EDX_ARG);
    }
    uVar4 = F_00ab1ed0((uint)*(ushort *)(puVar7 + 4));
    piVar5 = ((int *)GEN_TOP(0x0));
    if (uVar4 != 0) {
      cVar1 = *((char *)GEN_TOP((uVar4 + 0x1c)));
      iVar6 = 0;
      do {
        if ((cVar1 == '\x01') && (iVar6 == 0)) {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
        F_00ac5fd0(this GEN_EDX_ARG,param_1,uVar3,(uint)*(ushort *)(puVar7 + 4),
                     (uint)*((byte *)GEN_TOP(((int)puVar7 + 9))),puVar7[3],(int)puVar7 + iVar6 * 8 + 0x42,
                     (uint)*(byte *)(puVar7 + 0x10),uVar2);
        piVar5 = ((int *)GEN_TOP(F_00ac5fd0(this GEN_EDX_ARG,uVar3,param_1,(uint)*(ushort *)(puVar7 + 4),
                                     (uint)*((byte *)GEN_TOP(((int)puVar7 + 9))),puVar7[3],
                                     (int)puVar7 + iVar6 * 8 + 0x1a,(uint)*(byte *)(puVar7 + 6),0)));
        iVar6 = iVar6 + 1;
      } while (iVar6 < 4);
      puVar7[1] = 0;
      *puVar7 = 0;
      *(undefined1 *)(puVar7 + 2) = 0;
    }
  }
  return (uint)piVar5;
}

/* ref: FUN_00ac6b20 */
GEN_OWN GEN_FRAME uint F_00ac6b20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xac6b20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  uint in_EAX = 0;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  undefined1 * puVar6;
  int * piVar7;
  int * piVar8;
  undefined2 * puVar9;
  int iVar10;
  
  iVar1 = (int)param_2;
  iVar10 = 0;
  if ('\0' < *((char *)GEN_TOP(((int)param_2 + 0x1e)))) {
    piVar7 = ((int *)GEN_TOP(((int)param_2 + 0x428)));
    param_2 = ((undefined1 *)GEN_TOP(((int)param_2 + 0x4a)));
    do {
      if ((((*piVar7 != -0x20000000) &&
           (piVar2 = ((int *)GEN_TOP(F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,*piVar7,piVar7[1]))), piVar2 != ((int *)GEN_TOP(0x0)))) &&
          (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xb8))))(piVar2 GEN_EDX_ARG), (char)uVar3 != '\0')) &&
         (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xdc))))(piVar2 GEN_EDX_ARG), uVar3 != 0)) {
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xdc))))(piVar2 GEN_EDX_ARG)));
        iVar5 = 0;
        piVar8 = piVar4;
        do {
          if (*piVar8 == 0) goto LAB_00ac6bb4;
          iVar5 = iVar5 + 1;
          piVar8 = piVar8 + 0x19;
        } while (iVar5 < 0x20);
        iVar5 = 0;
LAB_00ac6bb4: ;
        piVar4 = piVar4 + iVar5 * 0x19;
        piVar4[1] = REFG(int, 0x1379c9c);
        piVar4[5] = param_1;
        *piVar4 = param_3;
        *(char *)(piVar4 + 2) = (char)iVar10;
        piVar4[0xf] = piVar2[0x1d];
        *(undefined1 *)(piVar4 + 6) = 0;
        *(undefined1 *)(piVar4 + 0x10) = 0;
        *(undefined2 *)(piVar4 + 4) = *((undefined2 *)GEN_TOP((iVar1 + 8)));
        *((undefined1 *)GEN_TOP(((int)piVar4 + 9))) = *((undefined1 *)GEN_TOP((iVar1 + 0xb)));
        piVar4[3] = *((int *)GEN_TOP((iVar1 + 0xc)));
        puVar9 = ((undefined2 *)GEN_TOP(((int)piVar4 + 0x46)));
        iVar5 = 4;
        puVar6 = param_2;
        do {
          *(undefined1 *)(puVar9 - 2) = puVar6[-6];
          *puVar9 = *(undefined2 *)(puVar6 - 2);
          *(undefined1 *)(puVar9 + 1) = *puVar6;
          *((undefined1 *)GEN_TOP(((int)puVar9 - 3))) = puVar6[-5];
          *(undefined1 *)(puVar9 - 1) = puVar6[-4];
          *((undefined1 *)GEN_TOP(((int)puVar9 - 1))) = puVar6[-3];
          *(undefined1 *)(puVar9 - 0x16) = puVar6[-0x26];
          puVar9[-0x14] = *(undefined2 *)(puVar6 - 0x22);
          *(undefined1 *)(puVar9 - 0x13) = puVar6[-0x20];
          *((undefined1 *)GEN_TOP(((int)puVar9 - 0x2b))) = puVar6[-0x25];
          *(undefined1 *)(puVar9 - 0x15) = puVar6[-0x24];
          *((undefined1 *)GEN_TOP(((int)puVar9 - 0x29))) = puVar6[-0x23];
          puVar6 = puVar6 + 8;
          puVar9 = puVar9 + 4;
          iVar5 = iVar5 - 1;
        } while (iVar5 != 0);
      }
      in_EAX = (uint)*((char *)GEN_TOP((iVar1 + 0x1e)));
      param_2 = param_2 + 0x40;
      iVar10 = iVar10 + 1;
      piVar7 = piVar7 + 2;
    } while (iVar10 < (int)in_EAX);
  }
  return in_EAX;
}

/* ref: FUN_00ac6c80 */
GEN_OWN GEN_FRAME uint F_00ac6c80(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xac6c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ushort uVar1;
  ushort uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  uVar1 = *((ushort *)GEN_TOP((param_2 + 0x4aa)));
  uVar2 = *((ushort *)GEN_TOP((param_2 + 0x4ac)));
  fVar3 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  fVar4 = (float10)*(double *)&REFG(undefined, 0x10928e8);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  *param_1 = ((float)GEN_TOF((((float10)*((ushort *)GEN_TOP((param_2 + 0x4a8))) * fVar3) * fVar4 - fVar5)));
  param_1[1] = ((float)GEN_TOF((((float10)uVar1 * fVar3) * fVar4 - fVar5)));
  param_1[2] = ((float)GEN_TOF((fVar4 * ((float10)uVar2 * fVar3) - fVar5)));
  return (uint)param_1;
}

/* ref: FUN_00ac6ce0 */
GEN_OWN GEN_NOFRAME unsigned int F_00ac6ce0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xac6ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 * puVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 * puVar8;
  float fVar9;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    iVar1 = REFG(int, 0x14bd000) + 1;
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    (*(int *)(gen_frame + 0x1c)) = iVar1;
    REFG(int, 0x14bd000) = iVar1 + 1;
    if (REFG(int, 0x14bd000) == 0) {
      REFG(int, 0x14bd000) = 1;
    }
    (*(float *)(gen_frame + 0x18)) = gen_bits2f(REFG(int, 0x14bd000));
    F_00ac6b20(param_1[0x1d],param_2,REFG(int, 0x14bd000));
    iVar2 = (int)*((char *)GEN_TOP(((int)param_2 + 0x1e)));
    uVar5 = (uint)*(ushort *)(param_2 + 2);
    uVar7 = param_2[3];
    puVar8 = param_2 + 0x10a;
    uVar6 = *((undefined1 *)GEN_TOP(((int)param_2 + 0xb)));
    iVar1 = (*(int *)(gen_frame + 0x1c));
    fVar9 = (*(float *)(gen_frame + 0x18));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xd8))))(param_1 GEN_EDX_ARG);
    F_00ac3e50(uVar3 GEN_EDX_ARG,uVar6,uVar7,uVar5,puVar8,iVar2,iVar1,(undefined4)gen_fl2bits(fVar9));
    F_00ac6c80(((undefined1 *)(gen_frame + 0x0)),param_2);
    (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*(ushort *)(param_2 + 7));
    (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((((float10)*(ushort *)(param_2 + 7) *
                       (((float10)*(float *)&REFG(undefined, 0x1336738) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                       (float10)REFG(double, 0x109cab0))) * (float10)*(double *)&REFG(undefined, 0x10928e8) -
                      (float10)*(double *)&REFG(undefined, 0x1080228))));
    puVar4 = ((undefined2 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xd8))))(param_1 GEN_EDX_ARG)));
    *(undefined4 *)(puVar4 + 4) = 0;
    *(undefined4 *)(puVar4 + 10) = 0;
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    *(undefined4 *)(puVar4 + 0x1c) = 0;
    *(undefined4 *)(puVar4 + 0x1a) = 0;
    *(undefined4 *)(puVar4 + 8) = 0xe0000000;
    F_00aa6ad0(param_1 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)param_2 + 0xb))),param_2[3],*param_2,param_2[1],((undefined1 *)(gen_frame + 0x0))
                 ,(*(float *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x1c)),(uint)*((byte *)GEN_TOP(((int)param_2 + 10))),0xe0000000);
  }
  return;
}

/* ref: FUN_00ac6e20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ac6e20(GEN_P(undefined2 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xac6e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)(in_ecx + 0x20) = 0;
  *(undefined1 *)(in_ecx + 0x22) = 0;
  *(undefined4 *)(in_ecx + 0x24) = 0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  *(undefined4 *)(in_ecx + 0x1a) = 0;
  *(undefined4 *)(in_ecx + 8) = 0xe0000000;
  *(undefined4 *)(in_ecx + 10) = 0;
  *in_ecx = 0;
  *(undefined4 *)(in_ecx + 2) = 0;
  *(undefined4 *)(in_ecx + 0x28) = 0;
  *(undefined4 *)(in_ecx + 0x26) = 0;
  in_ecx[0xa4] = 0;
  *(undefined4 *)(in_ecx + 0x2c) = 0xe0000000;
  *(undefined4 *)(in_ecx + 0x2e) = 0;
  puVar2 = (undefined4 *)(in_ecx + 0x2c);
  puVar3 = (undefined4 *)(in_ecx + 0x30);
  for (iVar1 = 0x3a; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_00ac6e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ac6e80(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xac6e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  char cVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort * puVar7;
  int iVar8;
  int * piVar9;
  undefined * pvVar10;
  ulonglong uVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  
  uVar4 = F_00ac1a20(param_2,param_3);
  iVar8 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) == 0) {
    return 0x243;
  }
  uVar5 = F_00ab1ed0(uVar4);
  if (uVar5 == 0) {
    return 0x243;
  }
  if ((((REFG(char, 0x1379c7c) == '\x02') || (REFG(char, 0x1379c7c) == '\x06')) && (0 < param_2)) && (param_2 < 3)) {
    return 0x251;
  }
  if ((uVar4 == 4) && (*((byte *)GEN_TOP((iVar8 + 0x2e08))) != 0)) {
    uVar6 = F_00ab2840((uint)*((byte *)GEN_TOP((iVar8 + 0x2e08))));
    if (uVar6 == 0) {
      return 0x243;
    }
    if (-1 < *((char *)GEN_TOP((uVar6 + 0xa0)))) {
      uVar13 = 0x34;
      goto LAB_00ac6f7f;
    }
  }
  bVar3 = *((byte *)GEN_TOP((uVar5 + 0x27)));
  if ((bVar3 != 0) && (((&REFG(undefined1, 0x14b4ec0))[(int)(bVar3 >> 3)] & (byte)(1 << (bVar3 & 7))) == 0)) {
    return 0x23d;
  }
  if ((*((char *)GEN_TOP((uVar5 + 0x3d))) != '\0') && (bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x30), bVar3 == 0)) {
    return 0x243;
  }
  if (param_2 == 5) {
    if (param_3 == 1) {
      uVar13 = 0x38;
LAB_00ac6f7f: ;
      bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,uVar13);
      return (-(uint)(bVar3 != 0) & 0xfffffdbd) + 0x243;
    }
    if (param_3 == 2) {
      uVar13 = 0x30;
      goto LAB_00ac6f7f;
    }
  }
  bVar3 = F_00ac2f20();
  if (bVar3 != 0) {
    if ((*((int *)GEN_TOP(((int)param_1 + 0x14))) != 1) && (*((int *)GEN_TOP(((int)param_1 + 0x14))) != 2)) {
      return 0x244;
    }
    return 0x250;
  }
  bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x39);
  if (bVar3 == 0) {
    return 0x243;
  }
  if ((param_2 == 2) && (bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x3a), bVar3 == 0)) {
    return 0x243;
  }
  if ((param_6 != '\0') && (bVar3 = F_00ac4bf0(param_1 GEN_EDX_ARG,param_2,param_3), bVar3 == 0)) {
    return 0x246;
  }
  bVar3 = F_00ac2900(uVar4);
  if (bVar3 == 0) {
    return 0x245;
  }
  if ((uVar4 == 5) || ((param_2 == 5 && (param_3 == 7)))) {
    if ((REFG(undefined1, 0x14b4ec0) & 0x10) == 0) {
      return 0x23d;
    }
    bVar3 = F_00ab1db0(*(undefined4 *)&REFG(undefined2, 0x1379c78));
    if (bVar3 == 0) {
      return 0x688;
    }
    bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x7e);
    if (bVar3 == 0) {
      return 0x243;
    }
  }
  if ((uVar4 == 6) || ((param_2 == 5 && (param_3 == 8)))) {
    if ((REFG(undefined1, 0x14b4ec0) & 2) == 0) {
      return 0x23d;
    }
    bVar3 = F_00ab1e10(*(undefined4 *)&REFG(undefined2, 0x1379c78));
    if (bVar3 == 0) {
      return 0x675;
    }
    bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x80);
    if (bVar3 == 0) {
      return 0x243;
    }
  }
  if (((uVar4 == 0xa5) || (uVar4 == 0xaa)) && (bVar3 = F_00ac36d0(), bVar3 == 0)) {
    return 0x531;
  }
  if ((*((char *)GEN_TOP((uVar5 + 0x23))) != '\x19') && (*((char *)GEN_TOP((iVar8 + 0x2e08))) != '\0')) {
    return 0x243;
  }
  if ((*((char *)GEN_TOP((iVar8 + 0x188))) == '\b') && (*((char *)GEN_TOP((uVar5 + 0x1c))) != '\v')) {
    return 0x243;
  }
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    bVar3 = F_00ac4a90(param_1 GEN_EDX_ARG,1,uVar4);
    if (bVar3 == 0) {
      bVar3 = F_00ac1ae0(uVar4,(uint)*((byte *)GEN_TOP((iVar8 + 0x1688))));
      return 0x23e - (bVar3 != 0);
    }
    cVar1 = *((char *)GEN_TOP((uVar5 + 0x1c)));
    if (cVar1 == '\x06') {
      if ((*((char *)GEN_TOP((uVar5 + 0x2b))) != '\x12') && (*((char *)GEN_TOP((iVar8 + 0x188))) != '\x06')) {
        return 0x248;
      }
    }
    else if (cVar1 == '\a') {
      if (*((char *)GEN_TOP((iVar8 + 0x188))) != '\x05') {
        return 0x24a;
      }
    }
    else if (cVar1 == '\t') {
      uVar5 = F_00ab21a0((uint)*((byte *)GEN_TOP((iVar8 + 0x1688))));
      if (uVar5 == 0) {
        return 0x23e;
      }
      iVar8 = 0;
      puVar7 = ((ushort *)GEN_TOP((uVar5 + 0x38)));
      while (*puVar7 != param_3) {
        iVar8 = iVar8 + 1;
        puVar7 = puVar7 + 1;
        if (2 < iVar8) {
          return 0x23e;
        }
      }
      if (iVar8 < 0) {
        return 0x23e;
      }
      uVar5 = REFG(undefined2, 0x14b29b6) / 10000;
      if (3 < (byte)uVar5) {
        uVar5 = 3;
      }
      if ((int)uVar5 < iVar8 + 1) {
        return 0x23c;
      }
    }
    else {
      if (*((char *)GEN_TOP((iVar8 + 0x188))) == '\x06') {
        return 0x249;
      }
      if (*((char *)GEN_TOP((iVar8 + 0x188))) == '\x05') {
        return 0x24b;
      }
    }
    uVar5 = F_00ac4c30(param_2,param_3);
    if (uVar5 != 0) {
      return uVar5;
    }
    uVar4 = F_00ac23f0(param_1 GEN_EDX_ARG,uVar4);
    if (uVar4 != 0) {
      return uVar4;
    }
    break;
  case 2: ;
    uVar4 = F_00ab24a0(param_3);
    if (uVar4 == 0) {
      return 0x243;
    }
    puVar7 = ((ushort *)GEN_TOP(F_00ab24e0((uint)*((ushort *)GEN_TOP((uVar4 + 0x90))))));
    if (puVar7 == ((ushort *)GEN_TOP(0x0))) {
      return 0x243;
    }
    if ((*((char *)GEN_TOP(((int)puVar7 + 0x27))) == '\0') && ((*((byte *)GEN_TOP((iVar8 + 0x2dd2))) & 2) != 0)) {
      return 0x23f;
    }
    if (((char)puVar7[0x14] == '\0') && (bVar3 = F_00a620a0(), bVar3 != 0)) {
      return 0x27f;
    }
    uVar4 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_3,0,1,1);
    if (uVar4 == 0) {
      return 0x247;
    }
    pvVar10 = ((undefined *)GEN_TOP(F_00a40a20(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_3,0,0,1,1)));
    if (pvVar10 == ((undefined *)GEN_TOP(0x0))) {
      return 0x247;
    }
    uVar4 = F_00a37c50(pvVar10 GEN_EDX_ARG);
    if (uVar4 != 0) {
      return 0x23c;
    }
    uVar4 = F_00ac23f0(param_1 GEN_EDX_ARG,(uint)*puVar7);
    if (uVar4 != 0) {
      return uVar4;
    }
    if (*puVar7 == 0x353) {
      if ((!GEN_ISNAN(REFG(float, 0x14ab588)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
          !(REFG(float, 0x14ab588) <= *(float *)&REFG(undefined, 0x1088114))) {
        return 0x532;
      }
      if ((REFG(undefined1, 0x14b4ec2) & 4) == 0) {
        return 0x23d;
      }
      bVar3 = F_00ac36a0();
      if (bVar3 == 0) {
        return 0x531;
      }
      if (7 < REFG(undefined1, 0x1338ad4)) {
        return 0x534;
      }
      if (*((char *)GEN_TOP((iVar8 + 0x2e08))) != '\0') {
        return 0x243;
      }
      if ((*((short *)GEN_TOP((iVar8 + 0xe6))) == -0x7ffe) || (*((short *)GEN_TOP((iVar8 + 0xe6))) == -0x7ff9)) {
        return 0x535;
      }
    }
    if ((*puVar7 == 0x3f5) && (bVar3 = F_00a6b2e0(&REFG(undefined, 0x14ab584) GEN_EDX_ARG,(uint)puVar7[1]), bVar3 == 1)) {
      return 0x53a;
    }
    uVar2 = *puVar7;
    if ((uVar2 == 0x355) && (bVar3 = F_009080e0(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,(uint)puVar7[1]), bVar3 == 1)) {
      return 0x260;
    }
    if ((uVar2 == 0x52a) && (bVar3 = F_00a68960(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)puVar7[1]), bVar3 == 1)) {
      return 0x283;
    }
    if (param_3 == 0x16f9) {
      uVar4 = F_00ab21a0((uint)*((byte *)GEN_TOP((iVar8 + 0x1688))));
      if (uVar4 == 0) {
        return 0x23e;
      }
      if (*((int *)GEN_TOP((uVar4 + 0x10))) == 0x20) {
        return 0x23e;
      }
      if (*((int *)GEN_TOP((uVar4 + 0x10))) == 0x21) {
        return 0x23e;
      }
      iVar8 = 0;
      while ((&REFG(undefined1, 0x14ab294))[(int)(iVar8)] == '\0') {
        iVar8 = iVar8 + 1;
        if (5 < iVar8) {
          return 0x243;
        }
      }
    }
    break;
  case 3: ;
    uVar4 = param_3;
    pvVar10 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x7d4)));
    bVar3 = F_00a3ab80(pvVar10 GEN_EDX_ARG,uVar4);
    if (bVar3 == 0) {
      return 0x247;
    }
    if ((param_4 != 0 || param_5 != 0) && (*((char *)GEN_TOP((uVar5 + 0x34))) == '\0')) {
      uVar4 = F_00475fa0(param_4,param_5);
      if (uVar4 == 0) {
        return 0x233;
      }
      pvVar10 = ((undefined *)GEN_TOP(F_006b8c00()));
      bVar3 = F_006e3330(pvVar10 GEN_EDX_ARG,uVar4,param_3);
      if (bVar3 == 0) {
        return 0x233;
      }
    }
    break;
  case 5: ;
    if (param_3 == 6) {
      uVar4 = F_00ab21a0((uint)*((byte *)GEN_TOP((iVar8 + 0x1688))));
      if (*((int *)GEN_TOP((uVar4 + 0x10))) != 0x21) {
        return 0x23e;
      }
      bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x17);
      if (bVar3 == 0) {
        return 0x243;
      }
    }
    else if ((param_3 == 0xc) || (param_3 == 0xd)) {
      bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,7);
      if (bVar3 == 0) {
        return 0x243;
      }
      piVar9 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar13 = 0x23;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x48))))(piVar9 GEN_EDX_ARG);
      piVar9 = ((int *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar13)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x10))))(piVar9 GEN_EDX_ARG);
      if ((char)uVar4 != '\0') {
        return 0x197;
      }
    }
    uVar4 = F_00ac4c30(param_2,param_3);
    if (uVar4 != 0) {
      return uVar4;
    }
    if (param_3 == 3) {
      uVar4 = REFG(undefined2, 0x14b29b6) / 10000;
      if ((byte)uVar4 < 4) {
        if ((byte)uVar4 == 0) {
          return 0x23c;
        }
      }
      else {
        uVar4 = 3;
      }
      uVar5 = F_00ab21a0((uint)*((byte *)GEN_TOP((iVar8 + 0x1688))));
      if (uVar5 == 0) {
        return 0x23e;
      }
      uVar4 = (uint)*((ushort *)GEN_TOP((uVar5 + 0x36 + uVar4 * 2)));
      if (uVar4 == 0) {
        return 0x23e;
      }
      uVar12 = 1;
      uVar11 = F_00533b60(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
      uVar4 = F_00ac6e80(param_1 GEN_EDX_ARG,1,uVar4,(int)uVar11,(int)(uVar11 >> 0x20),uVar12);
      if (uVar4 != 0) {
        return uVar4;
      }
    }
    break;
  case 6: ;
    if (param_3 == 5) {
      uVar12 = 0;
LAB_00ac76ff: ;
      bVar3 = F_00a6b380(&REFG(undefined, 0x14ab584) GEN_EDX_ARG,uVar12);
      if (bVar3 == 0) {
        return 0x52a;
      }
    }
    else {
      if (param_3 == 6) {
        uVar12 = 1;
        goto LAB_00ac76ff;
      }
      if (param_3 == 7) {
        uVar12 = 2;
        goto LAB_00ac76ff;
      }
    }
    if (REFG(float, 0x14ab588) <= 0.0) {
      return 0x536;
    }
    break;
  case 8: ;
    uVar4 = F_00ac2ca0(param_3);
    if (uVar4 != 0) {
      return uVar4;
    }
    break;
  case 9: ;
    uVar13 = 0xa0001;
    pvVar10 = ((undefined *)GEN_TOP(F_006b8c00()));
    pvVar10 = ((undefined *)GEN_TOP(F_006e3240(pvVar10 GEN_EDX_ARG,uVar13)));
    if (pvVar10 != ((undefined *)GEN_TOP(0x0))) {
      uVar4 = F_006d0480(pvVar10 GEN_EDX_ARG,param_3,iVar8);
      return uVar4;
    }
    break;
  case 0xb: ;
    if (REFG(char, 0x14ab5ba) == '\0') {
      return 0x27b;
    }
    uVar4 = F_00ab2d50(param_3);
    if ((uVar4 == 0) ||
       ((*((char *)GEN_TOP((uVar4 + 0xe))) != '\0' && (*((char *)GEN_TOP((uVar4 + 0xe))) != REFG(char, 0x14ab5ba))))) {
      return 0x27c;
    }
    uVar2 = *((ushort *)GEN_TOP((uVar4 + 0xc)));
    if ((uVar2 != 0) && (REFG(char, 0x14ab73c) == '\a')) {
      return 0x27e;
    }
    if (((4 < (int)param_3) && ((int)param_3 < 7)) && (REFG(undefined1, 0x14ab73d) == param_3)) {
      return 0x281;
    }
    if (uVar2 != 0) {
      uVar5 = F_00ab1ed0((uint)uVar2);
      if (uVar5 == 0) {
        return 0x243;
      }
      uVar6 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,0xffffffff,1);
      if ((ushort)uVar6 < (ushort)*((byte *)GEN_TOP((uVar5 + 0x1f)))) {
        return 0x23d;
      }
    }
    if (*((char *)GEN_TOP((uVar4 + 0x10))) == '\x01') {
      return 0x27d;
    }
    break;
  case 0xd: ;
    if ((REFG(undefined1, 0x14b4ec2) & 2) == 0) {
      return 0x28d;
    }
    bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,4);
    if (bVar3 == 0) {
      return 0x243;
    }
    uVar4 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
    if ((uVar4 != 0) && (*((char *)GEN_TOP((uVar4 + 0x2e))) == '\0')) {
      return 0x28e;
    }
    if ((!GEN_ISNAN(REFG(float, 0x14ab588)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
        (!(REFG(float, 0x14ab588) < *(float *)&REFG(undefined, 0x1088114)) && REFG(uint, 0x14ab588) != *(float *)&REFG(undefined, 0x1088114))) {
      return 0x243;
    }
    bVar3 = F_00a68960(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,param_3);
    if (bVar3 == 0) {
      return 0x243;
    }
  }
  return 0;
}

/* ref: FUN_00ac78f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ac78f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xac78f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  uint uVar2;
  
  if (param_1 == 1) {
    uVar2 = F_00ab1ed0(param_2);
    if (*((char *)GEN_TOP((uVar2 + 0x2b))) == '\0') {
      return 0;
    }
  }
  bVar1 = F_00ac4a90(this GEN_EDX_ARG,param_1,param_2);
  return bVar1 != 0;
}

/* ref: FUN_00ac7930 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ac7930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xac7930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00ac6e80(this GEN_EDX_FWD,param_1,param_2,0,0,0);
  return uVar1 == 0;
}

/* ref: FUN_00ac7950 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ac7950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xac7950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00a5feb0(param_1 GEN_EDX_FWD);
    F_00ac4ed0(uVar1);
  }
  return;
}

/* ref: FUN_00ac7970 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ac7970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xac7970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[6];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  GEN_FRAME_DECL(0x40, 0);
  char cVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  uint * puVar6;
  int * piVar7;
  undefined * pvVar8;
  uint uVar9;
  int * piVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 * puVar18;
  undefined1 * puVar19;
  undefined8 uVar17;
  
  piVar10 = REFG(int * PTR32, 0x1379694);
  (*(int * PTR32 *)(gen_frame + 0x1c)) = ((int *)GEN_TOP(0x0));
  if (REFG(int * PTR32, 0x1379694) == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar5 = F_00ac1a20((*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  (*(uint *)(gen_frame + 0x20)) = uVar5;
  if (uVar5 == 0) {
    return 0;
  }
  puVar6 = ((uint *)GEN_TOP(F_00ab1ed0(uVar5)));
  (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar6;
  if (puVar6 == ((uint *)GEN_TOP(0x0))) {
    return 0;
  }
  if ((char)puVar6[7] == '\x01') {
    F_00a7d290(0x243,0,0,0,0,REFG(float, 0x10916ec));
    return 0;
  }
  fVar11 = *(float *)this;
  if ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      (!(fVar11 < *(float *)&REFG(undefined, 0x1088114)) && fVar11 != *(float *)&REFG(undefined, 0x1088114))) {
    return 0;
  }
  if ((((((*((char *)GEN_TOP(((int)puVar6 + 0x2e))) == '\x01') && (*((char *)GEN_TOP(((int)puVar6 + 0x2f))) == '\0')) &&
        ((char)puVar6[0xc] == '\0')) &&
       ((*((char *)GEN_TOP(((int)puVar6 + 0x31))) == '\0' && (*((char *)GEN_TOP(((int)puVar6 + 0x32))) == '\0')))) &&
      ((char)puVar6[0xd] == '\0')) &&
     ((*((char *)GEN_TOP(((int)puVar6 + 0x37))) == '\0' && (*((char *)GEN_TOP(((int)puVar6 + 0x35))) == '\0')))) {
    *(ulonglong *)&(*(undefined4 *)&gen_args[2]) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar10)))(piVar10 GEN_EDX_ARG);
  }
  if ((((*((char *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x24)) + 0x2e))) == '\0') && (*((char *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x24)) + 0x2f))) == '\0')) &&
      ((char)(*(uint * PTR32 *)(gen_frame + 0x24))[0xc] == '\0')) &&
     ((*((char *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x24)) + 0x31))) == '\0' && (*((char *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x24)) + 0x32))) == '\0')))) {
    if ((char)(*(uint * PTR32 *)(gen_frame + 0x24))[0xd] == '\0') {
      if ((*((char *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x24)) + 0x37))) == '\0') && (*((char *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x24)) + 0x35))) == '\x01'))
      {
        *(ulonglong *)&(*(undefined4 *)&gen_args[2]) = (ulonglong)REFG(undefined4, 0x14ab5bc);
      }
      goto LAB_00ac7a8c;
    }
LAB_00ac7c48: ;
    F_00ac4ed0((*(undefined4 * PTR32 *)&gen_args[4]));
    (*(int * PTR32 *)(gen_frame + 0x28)) = piVar10;
    *(ulonglong *)&(*(undefined4 *)&gen_args[2]) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar10)))(piVar10 GEN_EDX_ARG);
    if (*(ulonglong *)&(*(undefined4 *)&gen_args[2]) == 0xe0000000) {
LAB_00ac7bd0: ;
      F_00a7d290(0x233,0,0,0,0,REFG(float, 0x10916ec));
      return 0;
    }
  }
  else {
LAB_00ac7a8c: ;
    if ((char)(*(uint * PTR32 *)(gen_frame + 0x24))[0xd] != '\0') goto LAB_00ac7c48;
    piVar7 = ((int *)GEN_TOP(F_00475fa0((*(undefined4 *)&gen_args[2]),(int)(*(ulonglong *)&(*(undefined4 *)&gen_args[2]) >> 0x20))));
    (*(int * PTR32 *)(gen_frame + 0x28)) = piVar7;
    if ((*((char *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x24)) + 0x2e))) == '\x01') &&
       (bVar2 = F_00ac1510((*(uint *)(gen_frame + 0x20)),piVar7), bVar2 == 0)) {
      *(ulonglong *)&(*(undefined4 *)&gen_args[2]) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar10)))(piVar10 GEN_EDX_ARG);
      piVar7 = ((int *)GEN_TOP(F_00475fa0((int)*(ulonglong *)&(*(undefined4 *)&gen_args[2]),(int)(*(ulonglong *)&(*(undefined4 *)&gen_args[2]) >> 0x20)
                                  )));
      (*(int * PTR32 *)(gen_frame + 0x28)) = piVar7;
    }
    if (((*(int * PTR32 *)(gen_frame + 0x28)) != ((int *)GEN_TOP(0x0))) &&
       (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 0xb8))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG), (char)uVar5 != '\0')) {
      uVar5 = (uint)*(ushort *)((*(int * PTR32 *)(gen_frame + 0x28)) + 0x3a);
      if (*(ushort *)((*(int * PTR32 *)(gen_frame + 0x28)) + 0x3a) != 0) {
        piVar7 = piVar10;
        pvVar8 = ((undefined *)GEN_TOP(F_00b070f0()));
        bVar2 = F_00b088e0(pvVar8 GEN_EDX_ARG,uVar5,piVar7);
        if (bVar2 == 0) {
          F_00a7d290(0x876,0,0,0,0,REFG(float, 0x10916ec));
          return 0;
        }
      }
      uVar5 = F_00a62220((*(int * PTR32 *)(gen_frame + 0x28)));
      if ((char)uVar5 != '\0') {
        sVar3 = (short)((uint)(*(int * PTR32 *)(gen_frame + 0x28))[0x39] >> 0x10);
        if ((((sVar3 == -0x7fff) || (sVar3 == -0x7ffe)) || (sVar3 == -0x7ff9)) &&
           (piVar10[0x39] != (*(int * PTR32 *)(gen_frame + 0x28))[0x39])) {
          F_00a7d290(0x555,0,0,0,0,REFG(float, 0x10916ec));
          return 0;
        }
      }
    }
    bVar2 = F_00ac1510((*(uint *)(gen_frame + 0x20)),(*(int * PTR32 *)(gen_frame + 0x28)));
    if (bVar2 == 0) goto LAB_00ac7bd0;
    if (piVar10 != (*(int * PTR32 *)(gen_frame + 0x28))) {
      F_00ac7950(this GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x28)));
    }
    uVar5 = F_00ac3ed0((*(uint *)(gen_frame + 0x20)),(*(int * PTR32 *)(gen_frame + 0x28)));
    if (uVar5 != 0) {
      F_00a7d290(uVar5,0,0,0,0,REFG(float, 0x10916ec));
      return 0;
    }
  }
  if ((((*(int *)&gen_args[0]) == 2) && ((*(int * PTR32 *)(gen_frame + 0x28)) != ((int *)GEN_TOP(0x0)))) &&
     (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 0xb8))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG), (char)uVar5 != '\0')) {
    uVar5 = F_00ab24a0((*(undefined4 *)&gen_args[1]));
    if (uVar5 == 0) {
      return 0;
    }
    uVar5 = F_00ab24e0((uint)*((ushort *)GEN_TOP((uVar5 + 0x90))));
    if ((*((byte *)GEN_TOP((uVar5 + 0x26))) != 0) &&
       (*((byte *)GEN_TOP((uVar5 + 0x26))) < *((byte *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 0x1689))))) {
      F_00a7d4b0(0x266,piVar10,0,2,(*(undefined4 *)&gen_args[1]),0,0,0,0,REFG(float, 0x10916ec));
      return 0;
    }
  }
  if (*((char *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x24)) + 0x3b))) == '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 0x7bc))) = 1;
    *((uint *)GEN_TOP(((int)this + 0x7c0))) = (uint)*((byte *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x24)) + 0x23)));
  }
  if ((char)(*(uint * PTR32 *)(gen_frame + 0x24))[0xd] == '\0') {
    F_00ac59f0(this GEN_EDX_ARG);
  }
  uVar5 = F_00ac2b80(this GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x14)) = uVar5;
  if (((*(int * PTR32 *)(gen_frame + 0x28)) != ((int *)GEN_TOP(0x0))) &&
     (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 0xb8))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG), (char)uVar5 != '\0')) {
    (*(int * PTR32 *)(gen_frame + 0x1c)) = (*(int * PTR32 *)(gen_frame + 0x28));
  }
  if (((ushort)(*(uint * PTR32 *)(gen_frame + 0x24))[6] != 0) &&
     (uVar5 = F_0071ce90(piVar10 GEN_EDX_ARG,(uint)(ushort)(*(uint * PTR32 *)(gen_frame + 0x24))[6]), (char)uVar5 != '\0')) {
    F_00a51200(7,(uint)(ushort)(*(uint * PTR32 *)(gen_frame + 0x24))[6],(*(uint *)(gen_frame + 0x20)),0,0);
    return 1;
  }
  uVar5 = F_00ac1640((*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),1);
  (*(float *)(gen_frame + 0x10)) = gen_bits2f(uVar5);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(int)uVar5 / (float10)*(double *)&REFG(undefined, 0x10912a8));
  F_00ac2f90(this GEN_EDX_ARG,(*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(float)(float10)0,
               (float)((float10)(int)uVar5 / (float10)*(double *)&REFG(undefined, 0x10912a8)));
  ((code *)*((gen_code32 *)GEN_TOP((REFG(int, 0x1375bc0) + 0x1c))))(&REFG(int, 0x1375bc0));
  if (((*(int * PTR32 *)(gen_frame + 0x1c)) == ((int *)GEN_TOP(0x0))) || ((*(int * PTR32 *)(gen_frame + 0x1c)) == piVar10)) {
    (*(int * PTR32 *)(gen_frame + 0x28)) = ((int *)GEN_TOP(piVar10[0x2c]));
  }
  else {
    puVar18 = &REFG(float, 0x1302c90);
    uVar5 = F_00a5feb0(piVar10 GEN_EDX_ARG);
    uVar9 = F_00a5feb0((*(int * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
    uVar5 = F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),uVar9,uVar5);
    fVar11 = F_00aae7a0(uVar5,puVar18);
    (*(int * PTR32 *)(gen_frame + 0x28)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar11)));
  }
  uVar5 = F_00ac44e0((*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),1,&(*(undefined1 *)(gen_frame + 0x2f)));
  (*(float *)(gen_frame + 0x10)) = gen_bits2f(uVar5);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(int)uVar5 / (float10)*(double *)&REFG(undefined, 0x10912a8));
  if ((char)(*(uint * PTR32 *)(gen_frame + 0x24))[0xd] == '\0') {
    puVar19 = &(*(undefined1 *)(gen_frame + 0x2f));
    uVar4 = F_0054f090(((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x28))))));
    uVar5 = (uint)uVar4;
    uVar4 = F_0054f090(GEN_ARGF(gen_bits2f(piVar10[0x2c])));
    F_00a51de0((*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(char)(*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(uint *)(gen_frame + 0x14)),(uint)uVar4,uVar5,puVar19);
  }
  else {
    puVar19 = &(*(undefined1 *)(gen_frame + 0x2f));
    uVar4 = F_0054f090(((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x28))))));
    uVar5 = (uint)uVar4;
    uVar4 = F_0054f090(GEN_ARGF(gen_bits2f(piVar10[0x2c])));
    F_00a51ea0((*(undefined4 * PTR32 *)&gen_args[4]),(char)(*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(uint *)(gen_frame + 0x14)),(uint)uVar4,uVar5,puVar19);
  }
  bVar2 = F_00a9f620(piVar10 GEN_EDX_ARG);
  uVar5 = (*(uint *)(gen_frame + 0x18));
  if (bVar2 != 0) {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x18)) = uVar5 & 0xffffff00;
    if (!(*(float *)&REFG(undefined, 0x1088114) < (*(float *)(gen_frame + 0x10)))) {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = 1;
      (*(uint *)(gen_frame + 0x18)) = CONCAT31((int3)(uVar5 >> 8),1);
    }
    cVar1 = (char)(*(uint * PTR32 *)(gen_frame + 0x24))[10];
    if (cVar1 == '\x01') {
      F_00a7ef20(&REFG(undefined1, 0x14ab058) GEN_EDX_ARG,1,1,(*(uint *)(gen_frame + 0x18)));
    }
    else if (cVar1 == '\x02') {
      F_00a7ef20(&REFG(undefined1, 0x14ab058) GEN_EDX_ARG,1,1,(*(uint *)(gen_frame + 0x18)));
      if ((((*(int * PTR32 *)(gen_frame + 0x1c)) != ((int *)GEN_TOP(0x0))) &&
          (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x1c)) + 0xb8))))((*(int * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG), (char)uVar5 != '\0')) &&
         (uVar5 = F_00a62220((*(int * PTR32 *)(gen_frame + 0x1c))), (char)uVar5 != '\0')) {
        (*(uint *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x1c))[0x1d];
        uVar5 = F_005339c0(&REFG(int, 0x1375bc0) GEN_EDX_ARG);
        if (uVar5 == (*(uint *)(gen_frame + 0x18))) {
          F_00a7ede0(&REFG(undefined1, 0x14ab068) GEN_EDX_ARG,1,1,0);
        }
      }
    }
    else if (cVar1 == '\x03') {
      F_00a7ef20(&REFG(undefined1, 0x14ab058) GEN_EDX_ARG,1,1,(*(uint *)(gen_frame + 0x18)));
      F_00a7ede0(&REFG(undefined1, 0x14ab068) GEN_EDX_ARG,0,1,0);
    }
    if ((char)(*(uint * PTR32 *)(gen_frame + 0x24))[10] != '\0') {
      F_00a6b900(&REFG(undefined1, 0x14ab058) GEN_EDX_ARG);
    }
  }
  if (!(0.0 < (*(float *)(gen_frame + 0x10)))) {
    uVar12 = *((undefined4 *)GEN_TOP(((int)this + 0xb8)));
    *(undefined4 *)this = GEN_FLT_TO(*(undefined4 *)this, REFG(float, 0x1088068));
    F_00aa6ad0(piVar10 GEN_EDX_ARG,(*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 * PTR32 *)&gen_args[4]),((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x28))))),(*(uint *)(gen_frame + 0x14)),0,uVar12);
    goto LAB_00ac832f;
  }
  *((int *)GEN_TOP(((int)this + 0x18))) = (*(int *)&gen_args[0]);
  *((uint *)GEN_TOP(((int)this + 0x14))) = (*(uint *)(gen_frame + 0x20));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = (*(undefined4 *)&gen_args[3]);
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = (*(undefined4 *)&gen_args[2]);
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = (*(undefined4 *)&gen_args[1]);
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = *(*(undefined4 * PTR32 *)&gen_args[4]);
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = (*(undefined4 * PTR32 *)&gen_args[4])[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = (*(undefined4 * PTR32 *)&gen_args[4])[2];
  uVar12 = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  uVar13 = *((undefined1 *)GEN_TOP(((int)this + 0x18)));
  uVar14 = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  *((int * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(int * PTR32 *)(gen_frame + 0x28));
  *((float *)GEN_TOP(((int)this + 0x24))) = (*(float *)(gen_frame + 0x10));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  fVar11 = (*(float *)(gen_frame + 0x10));
  uVar5 = (*(uint *)(gen_frame + 0x14));
  uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0xd8))))(piVar10 GEN_EDX_ARG);
  F_00ac3dd0(uVar9 GEN_EDX_ARG,uVar13,uVar14,fVar11,uVar16,uVar12,uVar5);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0xd8))))(piVar10 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP((uVar5 + 0x20))) = *((undefined4 *)GEN_TOP(((int)this + 0x30)));
  *((undefined4 *)GEN_TOP((uVar5 + 0x24))) = *((undefined4 *)GEN_TOP(((int)this + 0x34)));
  *((undefined4 *)GEN_TOP((uVar5 + 0x28))) = *((undefined4 *)GEN_TOP(((int)this + 0x38)));
  (*(float *)(gen_frame + 0x10)) = *((float *)GEN_TOP(((int)this + 0x40)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0xd8))))(piVar10 GEN_EDX_ARG);
  *((float *)GEN_TOP((uVar5 + 0x30))) = (*(float *)(gen_frame + 0x10));
  F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0xb,1);
  piVar7 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (piVar7 == ((int *)GEN_TOP(0x0))) goto switchD_00ac80da_caseD_4;
  uVar12 = 3;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x48))))(piVar7 GEN_EDX_ARG);
  fVar11 = gen_bits2f(F_00763050(uVar5 GEN_EDX_ARG,uVar12));
  (*(int * PTR32 *)(gen_frame + 0x28)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar11)));
  if (fVar11 == 0.0) goto switchD_00ac80da_caseD_4;
  switch((unsigned int)(uintptr_t)((*(int *)&gen_args[0]))) {
  case 1: ;
    fVar11 = *((float *)GEN_TOP(((int)this + 0x20)));
    uVar5 = (uint)(ushort)(*(uint * PTR32 *)(gen_frame + 0x24))[2];
    uVar17 = 0xe0000000;
    uVar12 = 0;
    uVar9 = (*(*(uint * PTR32 *)(gen_frame + 0x24)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x24));
    fVar15 = *((float *)GEN_TOP(((int)this + 0x24)));
    break;
  case 2: ;
    uVar5 = F_00ab24a0((*(undefined4 *)&gen_args[1]));
    fVar11 = *((float *)GEN_TOP(((int)this + 0x20)));
    uVar17 = 0xe0000000;
    uVar12 = 0;
    fVar15 = *((float *)GEN_TOP(((int)this + 0x24)));
    if (uVar5 == 0) {
      uVar5 = 0;
      goto LAB_00ac8155;
    }
    uVar5 = (uint)*((ushort *)GEN_TOP((uVar5 + 0x7c)));
    uVar9 = F_00463610(1,(*(undefined4 *)&gen_args[1]),0);
    break;
  case 3: ;
    uVar5 = F_00ab2510((*(undefined4 *)&gen_args[1]));
    fVar11 = *((float *)GEN_TOP(((int)this + 0x20)));
    uVar5 = (uint)*((ushort *)GEN_TOP((uVar5 + 0x1c)));
    fVar15 = *((float *)GEN_TOP(((int)this + 0x24)));
LAB_00ac8155: ;
    uVar17 = 0xe0000000;
    uVar12 = 0;
    uVar9 = F_00463610(1,(*(undefined4 *)&gen_args[1]),0);
    break;
  default: ;
    goto switchD_00ac80da_caseD_4;
  case 0xd: ;
    puVar6 = ((uint *)GEN_TOP(F_00ab2840((*(undefined4 *)&gen_args[1]))));
    if (puVar6 != ((uint *)GEN_TOP(0x0))) {
      fVar11 = *((float *)GEN_TOP(((int)this + 0x20)));
      uVar5 = (uint)*((ushort *)GEN_TOP(((int)puVar6 + 0x9a)));
      uVar17 = 0xe0000000;
      uVar12 = 0;
      uVar9 = (*puVar6 & 0xffffff) + (int)puVar6;
      fVar15 = *((float *)GEN_TOP(((int)this + 0x24)));
      break;
    }
    goto switchD_00ac80da_caseD_4;
  }
  F_0086dce0((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,uVar9,uVar5,fVar15,fVar11,uVar12,(int)uVar17,
               (int)((ulonglong)uVar17 >> 0x20));
switchD_00ac80da_caseD_4: ;
  if ((*(uint *)(gen_frame + 0x20)) != 4) {
    cVar1 = (char)(*(uint * PTR32 *)(gen_frame + 0x24))[7];
    if (cVar1 == '\x02') {
      uVar12 = 0x1f6;
    }
    else if (cVar1 == '\x05') {
      uVar12 = 0x1f7;
    }
    else {
      if (cVar1 == '\b') goto LAB_00ac8270;
      uVar12 = 0x1f5;
    }
    F_00a7d4b0(uVar12,piVar10,(*(int * PTR32 *)(gen_frame + 0x1c)),(*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),0,0,0,0,REFG(float, 0x10916ec));
  }
LAB_00ac8270: ;
  if ((4 < (int)(*(uint *)(gen_frame + 0x20))) && ((int)(*(uint *)(gen_frame + 0x20)) < 7)) {
    uVar5 = (*(uint *)&gen_args[5]);
    if ((*(uint *)(gen_frame + 0x20)) != 5) {
      uVar5 = (uint)REFG(undefined1, 0x14ab29e);
    }
    uVar5 = F_00ab2690(uVar5);
    if ((uVar5 != 0) && (uVar9 = F_00ab1c90((uint)*((ushort *)GEN_TOP((uVar5 + 0x28)))), uVar9 != 0)) {
      F_00aaf740(&REFG(undefined4, 0x14bcc80) GEN_EDX_ARG,2,(*((uint *)GEN_TOP((uVar9 + 4))) & 0xffffff) + uVar9 + 4,0x28,
                   *((undefined4 *)GEN_TOP((uVar5 + 0x10))),(uint)*((ushort *)GEN_TOP((uVar5 + 0x28))));
    }
  }
  if ((char)(*(uint * PTR32 *)(gen_frame + 0x24))[7] == '\v') {
    F_00ac3a60(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xb8))),(*(undefined4 * PTR32 *)&gen_args[4]),1);
  }
LAB_00ac832f: ;
  if ((byte)((byte)(*(uint * PTR32 *)(gen_frame + 0x24))[7] - 5) < 3) {
    uVar9 = (uint)(byte)(*(uint * PTR32 *)(gen_frame + 0x24))[7];
    uVar5 = (*(uint *)(gen_frame + 0x20));
    pvVar8 = ((undefined *)GEN_TOP(F_006b8c00()));
    bVar2 = F_006fced0(pvVar8 GEN_EDX_ARG,uVar5,uVar9);
    return bVar2;
  }
  if ((*(uint *)(gen_frame + 0x20)) == 1) {
    piVar10 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0x110))))(piVar10 GEN_EDX_ARG);
  }
  return 1;
}

/* ref: FUN_00ac83b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ac83b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xac83b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[6];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  double dVar6;
  float fVar7;
  
  this_00 = REFG(void * PTR32, 0x1379694);
  if ((((*(int *)&gen_args[5]) != 1) && (*((char *)GEN_TOP(((int)this + 0x58))) != '\0')) || (REFG(void * PTR32, 0x1379694) == ((undefined *)GEN_TOP(0x0)))) {
    return 0;
  }
  uVar1 = F_00ac1a20((*(undefined4 *)&gen_args[0]),(*(int *)&gen_args[1]));
  uVar2 = F_00ab1ed0(uVar1);
  if (uVar2 == 0) {
    return 0;
  }
  uVar3 = F_00ac6e80(this GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),1);
  if ((uVar1 == 4) && (*((byte *)GEN_TOP(((int)this_00 + 0x2e08))) != 0)) {
    uVar4 = F_00ab2840((uint)*((byte *)GEN_TOP(((int)this_00 + 0x2e08))));
    if (uVar4 == 0) {
      return 0;
    }
    if (-1 < *((char *)GEN_TOP((uVar4 + 0xa0)))) {
      F_00a51200(4,0,0,0,0);
      return 1;
    }
  }
  if ((((*(int *)&gen_args[5]) != 2) && (*((char *)GEN_TOP(((int)this + 0x58))) == '\0')) &&
     ((uVar1 != 5 &&
      ((((uVar3 == 0x246 || (uVar3 == 0x244)) ||
        ((!GEN_ISNAN(*(float *)this) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
         !(*(float *)this <= *(float *)&REFG(undefined, 0x1088114)))) &&
       ((*((char *)GEN_TOP((uVar2 + 0x1c))) == '\x03' || (*((char *)GEN_TOP((uVar2 + 0x1c))) == '\x02')))))))) {
    fVar7 = F_00ac3090(this GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(int *)&gen_args[1]));
    dVar6 = F_00ac3060(this GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(int *)&gen_args[1]));
    if ((float10)fVar7 - (float10)dVar6 <= (float10)REFG(double, 0x1088108)) {
      *((int *)GEN_TOP(((int)this + 0x60))) = (*(int *)&gen_args[1]);
      *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = (*(undefined4 *)&gen_args[0]);
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = (*(undefined4 *)&gen_args[3]);
      *((undefined1 *)GEN_TOP(((int)this + 0x58))) = 1;
      *((undefined4 *)GEN_TOP(((int)this + 0x68))) = (*(undefined4 *)&gen_args[2]);
      return 1;
    }
  }
  if (uVar3 != 0) {
    F_00a7d4b0(uVar3,this_00,0,(*(undefined4 *)&gen_args[0]),(*(int *)&gen_args[1]),0,0,0,0,REFG(float, 0x10916ec));
    return 0;
  }
  if (*((char *)GEN_TOP((uVar2 + 0x34))) == '\x01') {
    *((uint *)GEN_TOP(((int)this + 0x70))) = uVar1;
    *((undefined4 *)GEN_TOP(((int)this + 0x74))) = (*(undefined4 *)&gen_args[0]);
    *((int *)GEN_TOP(((int)this + 0x78))) = (*(int *)&gen_args[1]);
    if (*((char *)GEN_TOP((uVar2 + 0x1c))) != '\b') {
      return 0;
    }
    piVar5 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    if (piVar5 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x8c))))(piVar5 GEN_EDX_ARG);
    return 0;
  }
  F_00af2090();
  (*(undefined1 *)((char *)&(*(int *)&gen_args[5]) + 3)) = 1;
  switch((unsigned int)(uintptr_t)((*(undefined4 *)&gen_args[0]))) {
  case 1: ;
  case 2: ;
  case 3: ;
  case 0xd: ;
    if ((((*(int *)&gen_args[1]) == 0x121) || ((*(int *)&gen_args[1]) == 0x128)) ||
       (((*(int *)&gen_args[1]) == 299 || (((*(int *)&gen_args[1]) == 0x129 || ((*(int *)&gen_args[1]) == 0x120))))))
    goto switchD_00ac856f_caseD_a;
    (*(undefined1 *)((char *)&(*(int *)&gen_args[5]) + 3)) = F_00ac7970(this GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),&REFG(float, 0x1375ac0),(*(undefined4 *)&gen_args[4]));
    goto LAB_00ac85b8;
  case 5: ;
    F_00ac5420(this GEN_EDX_ARG,(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
    break;
  case 6: ;
    F_00ac5000(this GEN_EDX_ARG,(*(int *)&gen_args[1]));
    break;
  case 8: ;
    F_00ac2d50(this GEN_EDX_ARG,(*(int *)&gen_args[1]));
    break;
  case 9: ;
    (*(undefined1 *)((char *)&(*(int *)&gen_args[5]) + 3)) = F_00ac2c60((*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
    goto LAB_00ac85b8;
  case 10: ;
switchD_00ac856f_caseD_a: ;
    uVar1 = F_00ac2c80((*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
    (*(undefined1 *)((char *)&(*(int *)&gen_args[5]) + 3)) = (byte)uVar1;
LAB_00ac85b8: ;
    if ((*(undefined1 *)((char *)&(*(int *)&gen_args[5]) + 3)) == 0) {
      return 0;
    }
    break;
  case 0xb: ;
    F_00ac5140(this GEN_EDX_ARG,(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  }
  F_00aa0f60(this_00 GEN_EDX_ARG,1);
  return (*(undefined1 *)((char *)&(*(int *)&gen_args[5]) + 3));
}

/* ref: FUN_00ac8670 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ac8670(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xac8670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x6c))))(piVar1 GEN_EDX_ARG);
  if ((char)uVar2 == '\x01') {
    piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x70))))(piVar1 GEN_EDX_ARG);
    if ((char)uVar2 == '\0') {
      *param_1 = (uint)(*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x90))) * 0x32) / 100;
      *param_2 = (uint)(*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x94))) * 0x14) / 100;
      return (uint)param_2;
    }
  }
  uVar2 = F_0053b2c0();
  *param_1 = uVar2;
  uVar2 = F_0053b2e0();
  *param_2 = uVar2;
  return uVar2;
}

/* ref: FUN_00ac8710 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ac8710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xac8710u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0xe0, 0);
  int iVar1;
  undefined * pvVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint extraout_EAX = 0;
  float * pfVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  
  piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_FWD)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x6c))))(piVar4 GEN_EDX_ARG);
  if ((char)uVar5 == '\x01') {
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x70))))(piVar4 GEN_EDX_ARG);
    (*(char *)(gen_frame + 0xcf)) = '\x01';
    if ((char)uVar5 != '\0') goto LAB_00ac8764;
  }
  else {
LAB_00ac8764: ;
    (*(char *)(gen_frame + 0xcf)) = '\0';
  }
  piVar4 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
  if (((piVar4 != ((int *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0xcf)) == '\0')) &&
     (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x84))))(piVar4 GEN_EDX_ARG), (char)uVar5 == '\x01')) {
    *param_2 = 0;
    return uVar5;
  }
  uVar5 = REFG(undefined4, 0x1375bbc);
  if ((REFG(undefined4, 0x1375bbc) == 0xffffffff) || (iVar1 = (&REFG(undefined4, 0x1375b90))[(int)(REFG(undefined4, 0x1375bbc))], iVar1 == 0)) {
    *param_2 = 0;
    return uVar5;
  }
  F_00ac8670(&(*(float *)(gen_frame + 0xc8)),((float *)(gen_frame + 0xbc)));
  F_00690d40(((undefined *)GEN_TOP((iVar1 + 0x10))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc8))),
               (undefined4)gen_fl2bits(((float *)(gen_frame + 0xbc))[0]));
  (*(undefined4 *)(gen_frame + 0x88)) = (*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x8c)) = (*(undefined4 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x90)) = (*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x94)) = (*(undefined4 *)(gen_frame + 0x10));
  (*(undefined4 *)(gen_frame + 0x98)) = (*(undefined4 *)(gen_frame + 0x14));
  ((float *)(gen_frame + 0xbc))[1] = 2.29589e-41;
  (*(byte * PTR32 *)(gen_frame + 0xc4)) = ((byte *)GEN_TOP(0x4000));
  (*(undefined4 *)(gen_frame + 0x9c)) = (*(undefined4 *)(gen_frame + 0x18));
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  bVar3 = F_005518b0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25e0))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x88)),&(*(undefined4 *)(gen_frame + 0x94)),(unsigned int)gen_fl2bits((float)(REFG(float, 0x1090998))),
                       1,((float *)(gen_frame + 0xbc)) + 1);
  *param_2 = bVar3;
  if (bVar3 == 0) {
    return CONCAT31(extraout_var,bVar3);
  }
  *(undefined4 *)(param_2 + 0x10) = (*(undefined4 *)(gen_frame + 0x38));
  *(undefined4 *)(param_2 + 0x14) = (*(undefined4 *)(gen_frame + 0x3c));
  *(undefined4 *)(param_2 + 0x18) = (*(undefined4 *)(gen_frame + 0x40));
  param_2[1] = 0;
  F_00c9f380(&(*(undefined4 *)(gen_frame + 0x38)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x28)));
  bVar3 = F_00af0900((uint)((undefined1 *)(gen_frame + 0x20)));
  uVar5 = CONCAT31(extraout_var_00,bVar3);
  if (bVar3 == 0) {
    return uVar5;
  }
  if (param_1 == -1) {
    (*(float *)(gen_frame + 0xc8)) = REFG(float, 0x10947a4);
  }
  else {
    fVar10 = F_00ac1360(param_1);
    (*(float *)(gen_frame + 0xc8)) = fVar10;
    uVar5 = extraout_EAX;
  }
  (*(char *)(gen_frame + 0xcf)) = '\0';
  if (param_1 != -1) {
    uVar5 = F_00ab1ed0(param_1);
    if (uVar5 == 0) {
      return 0;
    }
    if (*((char *)GEN_TOP((uVar5 + 0x1c))) == '\v') {
      if (*((char *)GEN_TOP(((int)this + 0x90))) == '\0') {
        return uVar5;
      }
      (*(float *)(gen_frame + 0xa0)) = *((float *)GEN_TOP(((int)this + 0xa0)));
      (*(float *)(gen_frame + 0xa4)) = *((float *)GEN_TOP(((int)this + 0xa4)));
      (*(float *)(gen_frame + 0xa8)) = *((float *)GEN_TOP(((int)this + 0xa8)));
      fVar10 = *((float *)GEN_TOP(((int)this + 0xb4)));
      (*(char *)(gen_frame + 0xcf)) = '\x01';
      goto LAB_00ac8a01;
    }
  }
  pvVar2 = REFG(void * PTR32, 0x1379694);
  if (REFG(void * PTR32, 0x1379694) == ((undefined *)GEN_TOP(0x0))) {
    return uVar5;
  }
  pfVar6 = ((float *)GEN_TOP(F_00a5feb0(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG)));
  (*(float *)(gen_frame + 0xa0)) = *pfVar6;
  (*(float *)(gen_frame + 0xa4)) = pfVar6[1];
  (*(float *)(gen_frame + 0xa8)) = pfVar6[2];
  fVar10 = *((float *)GEN_TOP(((int)pvVar2 + 0xc0)));
LAB_00ac8a01: ;
  ((float *)(gen_frame + 0xbc))[0] = fVar10;
  (*(byte * PTR32 *)(gen_frame + 0xc4)) = param_2 + 0x10;
  uVar5 = F_00ac4240(&(*(float *)(gen_frame + 0xa0)),fVar10,(*(float *)(gen_frame + 0xc8)),param_2 + 0x10);
  if (uVar5 != 0) {
    return uVar5;
  }
  if ((*(char *)(gen_frame + 0xcf)) == '\x01') {
    uVar5 = F_00ab4310((uint)*((byte *)GEN_TOP(((int)this + 0x91))));
    if (uVar5 == 0) {
      return 0;
    }
    uVar7 = F_0046f4a0(&(*(float *)(gen_frame + 0xa0)),(*(byte * PTR32 *)(gen_frame + 0xc4)),(int)this + 0xa0);
    fVar8 = ((float10)GEN_TOD(atan2((float10)(*(float *)(gen_frame + 0xa0)),(float10)(*(float *)(gen_frame + 0xa8)))));
    (*(byte * PTR32 *)(gen_frame + 0xc4)) = ((byte *)(uintptr_t)gen_fl2bits((float)((float)fVar8)));
    fVar10 = ((float)GEN_TOF(((float10)(float)fVar8 - (float10)*((float *)GEN_TOP(((int)this + 0xb0))))));
    (*(byte * PTR32 *)(gen_frame + 0xc4)) = ((byte *)(uintptr_t)gen_fl2bits((float)(fVar10)));
    fVar10 = ((float)GEN_TOF(ABS((float10)fVar10)));
    (*(byte * PTR32 *)(gen_frame + 0xc4)) = ((byte *)(uintptr_t)gen_fl2bits((float)(fVar10)));
    (*(float *)(gen_frame + 0xc8)) = fVar10;
    fVar8 = (float10)fVar10;
    if ((float10)*(double *)&REFG(undefined, 0x1080228) <= fVar8) {
      (*(float *)(gen_frame + 0xc8)) = (float)((float10)REFG(double, 0x10920b8) - fVar8);
      fVar8 = GEN_X87((float10)(float)((float10)REFG(double, 0x10920b8) - fVar8));
    }
    fVar10 = ((float)GEN_TOF(((fVar8 * (float10)*(double *)&REFG(undefined, 0x1080220)) / (float10)*(double *)&REFG(undefined, 0x1080228)
                    )));
    (*(byte * PTR32 *)(gen_frame + 0xc4)) = ((byte *)(uintptr_t)gen_fl2bits((float)(fVar10)));
    fVar8 = (float10)fVar10;
    (*(byte * PTR32 *)(gen_frame + 0xc4)) = ((byte *)GEN_TOP((uint)*((ushort *)GEN_TOP((uVar5 + 2)))));
    fVar9 = GEN_X87((float10)*((ushort *)GEN_TOP((uVar5 + 2))) * (float10)REFG(double, 0x1088108));
    if ((!GEN_ISNAN(fVar8) && !GEN_ISNAN(fVar9)) && !(fVar8 <= fVar9)) {
      return uVar7;
    }
  }
  param_2[1] = 1;
  return (uint)param_2;
}

/* ref: FUN_00ac8af0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ac8af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xac8af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  char cVar1;
  undefined * this_00;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  
  iVar2 = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[0]) == 1) {
    if (REFG(void * PTR32, 0x1379694) == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar3 = F_00ac1a20(1,(*(int *)&gen_args[1]));
    uVar4 = F_00ab1ed0(uVar3);
    if (*((char *)GEN_TOP((uVar4 + 0x2b))) == -1) {
      return 0;
    }
    cVar1 = *((char *)GEN_TOP((uVar4 + 0x1c)));
    if (cVar1 == '\0') {
      return 0;
    }
    if (cVar1 == '\x01') {
      return 0;
    }
    if (cVar1 == '\x05') {
      return 0;
    }
    if (cVar1 == '\b') {
      return 0;
    }
    if (uVar3 == 4) {
      return 0;
    }
    if (uVar3 == 5) {
      return 0;
    }
    if (uVar3 == 6) {
      return 0;
    }
  }
  this_00 = REFG(void * PTR32, 0x1379694);
  if ((*((char *)GEN_TOP(((int)this + 0x58))) != '\0') || (REFG(void * PTR32, 0x1379694) == ((undefined *)GEN_TOP(0x0)))) {
    return 0;
  }
  uVar3 = F_00ac1a20((*(int *)&gen_args[0]),(*(int *)&gen_args[1]));
  uVar4 = F_00ab1ed0(uVar3);
  if (uVar4 == 0) {
    return 0;
  }
  uVar5 = F_00ac6e80(this GEN_EDX_ARG,(*(int *)&gen_args[0]),(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),1);
  if ((uVar3 == 4) && (*((byte *)GEN_TOP(((int)this_00 + 0x2e08))) != 0)) {
    uVar6 = F_00ab2840((uint)*((byte *)GEN_TOP(((int)this_00 + 0x2e08))));
    if (uVar6 == 0) {
      return 0;
    }
    if (-1 < *((char *)GEN_TOP((uVar6 + 0xa0)))) {
      F_00a51200(4,0,0,0,0);
      return 1;
    }
  }
  if (uVar5 != 0) {
    F_00a7d4b0(uVar5,this_00,0,(*(int *)&gen_args[0]),(*(int *)&gen_args[1]),0,0,0,0,REFG(float, 0x10916ec));
    return 0;
  }
  if (*((char *)GEN_TOP((uVar4 + 0x34))) == '\x01') {
    *((uint *)GEN_TOP(((int)this + 0x70))) = uVar3;
    *((int *)GEN_TOP(((int)this + 0x74))) = (*(int *)&gen_args[0]);
    *((int *)GEN_TOP(((int)this + 0x78))) = (*(int *)&gen_args[1]);
    if ((*((char *)GEN_TOP((uVar4 + 0x1c))) == '\b') &&
       (piVar7 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG))), piVar7 != ((int *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x8c))))(piVar7 GEN_EDX_ARG);
    }
    return 0;
  }
  F_00af2090();
  (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) = 1;
  switch((unsigned int)(uintptr_t)((*(int *)&gen_args[0]))) {
  case 1: ;
  case 2: ;
  case 3: ;
  case 0xd: ;
    if ((((iVar2 == 0x121) || (iVar2 == 0x128)) || (iVar2 == 299)) ||
       ((iVar2 == 0x129 || (iVar2 == 0x120)))) goto switchD_00ac8c99_caseD_a;
    (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) = F_00ac7970(this GEN_EDX_ARG,(*(int *)&gen_args[0]),iVar2,(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),&REFG(float, 0x1375ac0),0);
    goto LAB_00ac8cdd;
  case 5: ;
    F_00ac5420(this GEN_EDX_ARG,iVar2,(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
    break;
  case 6: ;
    F_00ac5000(this GEN_EDX_ARG,iVar2);
    break;
  case 8: ;
    F_00ac2d50(this GEN_EDX_ARG,iVar2);
    break;
  case 9: ;
    (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) = F_00ac2c60(iVar2,(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
    goto LAB_00ac8cdd;
  case 10: ;
switchD_00ac8c99_caseD_a: ;
    uVar3 = F_00ac2c80(iVar2,(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
    (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) = (byte)uVar3;
LAB_00ac8cdd: ;
    if ((*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) == 0) {
      return 0;
    }
    break;
  case 0xb: ;
    F_00ac5140(this GEN_EDX_ARG,iVar2,(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  }
  F_00aa0f60(this_00 GEN_EDX_ARG,1);
  return (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3));
}

/* ref: FUN_00ac8d80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ac8d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xac8d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x90, 0);
  byte bVar1;
  int * piVar2;
  uint uVar3;
  float * pfVar4;
  char * pcVar5;
  undefined * pvVar6;
  undefined3 extraout_var = 0;
  int iVar7;
  float10 fVar8;
  int * piVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  (*(int * PTR32 *)(gen_frame + 0x20)) = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  piVar2 = ((int *)GEN_TOP(F_00533bd0(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD)));
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x7c8))) = 0;
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xb8))))(piVar2 GEN_EDX_ARG);
    if (((char)uVar3 != '\0') && (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG), (char)uVar3 == '\x01')
       ) {
      piVar2 = ((int *)GEN_TOP(F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,piVar2[0xbb6])));
    }
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      pfVar4 = ((float *)GEN_TOP(F_00a5feb0((*(int * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG)));
      (*(float * PTR32 *)(gen_frame + 0x2c)) = pfVar4;
      pfVar4 = ((float *)GEN_TOP(F_00a5feb0(piVar2 GEN_EDX_ARG)));
      fVar14 = ((float)GEN_TOF(((float10)(float)((float10)*pfVar4 - (float10)*(*(float * PTR32 *)(gen_frame + 0x2c))) *
                       (float10)(float)((float10)*pfVar4 - (float10)*(*(float * PTR32 *)(gen_frame + 0x2c))) +
                      (float10)(float)((float10)pfVar4[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x2c))[2]) *
                      (float10)(float)((float10)pfVar4[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x2c))[2]))));
      (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
      fVar14 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar14))));
      (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
      fVar14 = ((float)GEN_TOF((((float10)fVar14 - ((float10)GEN_TOD(gen_bits2f(piVar2[0x30])))) -
                      ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)(gen_frame + 0x20))[0x30]))))));
      (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
      *((float *)GEN_TOP(((int)this + 0x7c8))) = fVar14;
      if ((float10)fVar14 < (float10)0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x7c8))) = 0;
      }
    }
  }
  piVar2 = (*(int * PTR32 *)(gen_frame + 0x20));
  fVar8 = (float10)0;
  pfVar4 = ((float *)GEN_TOP(((int)this + 0xf8)));
  iVar7 = 0x1b;
  do {
    if (*(char *)(pfVar4 - 2) != '\0') {
      fVar14 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))) + (float10)*pfVar4)));
      (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
      *pfVar4 = fVar14;
      if ((float10)pfVar4[1] <= (float10)fVar14) {
        *(undefined1 *)(pfVar4 - 2) = 0;
        *pfVar4 = 0.0;
        pfVar4[1] = 0.0;
      }
    }
    if (*(char *)(pfVar4 + 3) != '\0') {
      fVar14 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))) + (float10)pfVar4[5])));
      (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
      pfVar4[5] = fVar14;
      if ((float10)pfVar4[6] <= (float10)fVar14) {
        *(undefined1 *)(pfVar4 + 3) = 0;
        pfVar4[5] = 0.0;
        pfVar4[6] = 0.0;
      }
    }
    if (*(char *)(pfVar4 + 8) != '\0') {
      fVar14 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))) + (float10)pfVar4[10])));
      (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
      pfVar4[10] = fVar14;
      if ((float10)pfVar4[0xb] <= (float10)fVar14) {
        *(undefined1 *)(pfVar4 + 8) = 0;
        pfVar4[10] = 0.0;
        pfVar4[0xb] = 0.0;
      }
    }
    pfVar4 = pfVar4 + 0xf;
    iVar7 = iVar7 - 1;
  } while (iVar7 != 0);
  fVar14 = *((float *)GEN_TOP(((int)this + 8)));
  (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
  if (0.0 < fVar14) {
    fVar14 = ((float)GEN_TOF(((float10)fVar14 - (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))))));
    (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
    *((float *)GEN_TOP(((int)this + 8))) = fVar14;
    if ((float10)fVar14 < fVar8) {
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    }
  }
  fVar14 = *((float *)GEN_TOP(((int)this + 0x7c4)));
  (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
  if (0.0 < fVar14) {
    fVar14 = ((float)GEN_TOF(((float10)fVar14 - (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))))));
    (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
    *((float *)GEN_TOP(((int)this + 0x7c4))) = fVar14;
    if ((float10)fVar14 < fVar8) {
      *((undefined4 *)GEN_TOP(((int)this + 0x7c4))) = 0;
    }
  }
  fVar14 = *((float *)GEN_TOP(((int)this + 0x7cc)));
  (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
  if (0.0 < fVar14) {
    fVar14 = ((float)GEN_TOF(((float10)fVar14 - (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))))));
    (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
    *((float *)GEN_TOP(((int)this + 0x7cc))) = fVar14;
    if ((float10)fVar14 < fVar8) {
      *((undefined4 *)GEN_TOP(((int)this + 0x7cc))) = 0;
    }
  }
  fVar14 = *((float *)GEN_TOP(((int)this + 0xc)));
  (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
  if (0.0 < fVar14) {
    fVar14 = ((float)GEN_TOF(((float10)fVar14 - (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))))));
    (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
    *((float *)GEN_TOP(((int)this + 0xc))) = fVar14;
    if ((float10)fVar14 < fVar8) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
  }
  pfVar4 = ((float *)GEN_TOP(((int)this + 0x744)));
  iVar7 = 0x1d;
  do {
    fVar14 = *pfVar4;
    (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
    if (0.0 < fVar14) {
      fVar14 = ((float)GEN_TOF(((float10)fVar14 - (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))))));
      (*(float *)(gen_frame + 0x28)) = fVar14;
      *pfVar4 = fVar14;
      if ((float10)fVar14 <= fVar8) {
        *pfVar4 = 0.0;
      }
    }
    pfVar4 = pfVar4 + 1;
    iVar7 = iVar7 - 1;
  } while (iVar7 != 0);
  if (*((int *)GEN_TOP(((int)this + 0x54))) != 0) {
    fVar14 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x50))) -
                    (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))))));
    (*(float *)(gen_frame + 0x28)) = fVar14;
    *((float *)GEN_TOP(((int)this + 0x50))) = fVar14;
    if ((float10)fVar14 <= fVar8) {
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
    }
  }
  pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x20)) + 0xd8))))((*(int * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG)));
  if (*(int *)(pcVar5 + 0x40) == 0) {
LAB_00ac913f: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x7b8))) = 0;
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xd8))))(piVar2 GEN_EDX_ARG);
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((uVar3 != 0) && (pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xd8))))(piVar2 GEN_EDX_ARG))), *pcVar5 != '\0'))
    goto LAB_00ac913f;
    (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))))));
    if (REFG(float, 0x1087f04) < *((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198)))) {
      (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04))));
    }
    fVar14 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x7b8))) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x2c))))))));
    (*(float *)(gen_frame + 0x28)) = fVar14;
    *((float *)GEN_TOP(((int)this + 0x7b8))) = fVar14;
    if ((float10)REFG(float, 0x1094880) <= (float10)fVar14) {
      pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xd8))))(piVar2 GEN_EDX_ARG)));
      pcVar5[0x44] = '\0';
      pcVar5[0x48] = '\0';
      pcVar5[0x49] = '\0';
      pcVar5[0x4a] = '\0';
      pcVar5[0x4b] = '\0';
      pcVar5[0x40] = '\0';
      pcVar5[0x41] = '\0';
      pcVar5[0x42] = '\0';
      pcVar5[0x43] = '\0';
      goto LAB_00ac913f;
    }
  }
  if (*((char *)GEN_TOP(((int)this + 0x7c))) == '\x01') {
    *((undefined1 *)GEN_TOP(((int)this + 0x7c))) = 0;
  }
  (*(char *)(gen_frame + 0x27)) = '\0';
  if (*((int *)GEN_TOP(((int)this + 0x70))) == 0) goto LAB_00ac95dc;
  uVar3 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,5);
  if (((char)uVar3 == '\x01') || (uVar3 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x46), (char)uVar3 == '\x01'))
  {
    F_00ac8710(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x70))),&(*(char *)(gen_frame + 0x0)));
    (*(char *)(gen_frame + 0x27)) = '\x01';
    if (((*(char *)(gen_frame + 0x0)) == '\x01') && ((*(char *)(gen_frame + 0x1)) == '\x01')) {
      uVar3 = F_00ac6e80(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x74))),*((undefined4 *)GEN_TOP(((int)this + 0x78))),
                           0xe0000000,0,1);
      uVar15 = *((undefined4 *)GEN_TOP(((int)this + 0x78)));
      if (uVar3 == 0) {
        if (*((int *)GEN_TOP(((int)this + 0x74))) == 0xb) {
          F_00a51360(0xb,&(*(float *)(gen_frame + 0x10)),uVar15,0,0,0);
          F_00ac59f0(this GEN_EDX_ARG);
          *((undefined1 *)GEN_TOP(((int)this + 0x7c))) = 1;
        }
        else {
          bVar1 = F_00ac7970(this GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x74))),uVar15,0xe0000000,0,&(*(float *)(gen_frame + 0x10)),0);
          if (bVar1 == 1) {
            F_00ac59f0(this GEN_EDX_ARG);
            *((undefined1 *)GEN_TOP(((int)this + 0x7c))) = 1;
          }
        }
        goto LAB_00ac925e;
      }
      uVar10 = *((undefined4 *)GEN_TOP(((int)this + 0x74)));
      piVar9 = ((int *)GEN_TOP(0x0));
    }
    else {
      uVar15 = 0;
      uVar10 = 0;
      uVar3 = 0x233;
      piVar9 = piVar2;
    }
    F_00a7d4b0(uVar3,piVar2,piVar9,uVar10,uVar15,0,0,0,0,REFG(float, 0x10916ec));
  }
LAB_00ac925e: ;
  uVar3 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,6);
  if ((char)uVar3 == '\x01') {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x80))) != ((undefined *)GEN_TOP(0x0))) {
      F_009bc530(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x84))) != ((undefined *)GEN_TOP(0x0))) {
      F_009bc530(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x7c))) = 1;
  }
  pcVar5 = ((char *)GEN_TOP(F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x45)));
  if ((char)pcVar5 == '\x01') {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x80))) != ((undefined *)GEN_TOP(0x0))) {
      pcVar5 = ((char *)GEN_TOP(F_009bc530(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,1)));
      *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x84))) != ((undefined *)GEN_TOP(0x0))) {
      pcVar5 = ((char *)GEN_TOP(F_009bc530(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG,1)));
      *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x7c))) = 1;
  }
  if (*((int *)GEN_TOP(((int)this + 0x70))) != 0) {
    pcVar5 = ((char *)GEN_TOP(F_00ac6e80(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x74))),
                                  *((undefined4 *)GEN_TOP(((int)this + 0x78))),0xe0000000,0,1)));
    if (pcVar5 == ((char *)GEN_TOP(0x0))) {
      if ((*(char *)(gen_frame + 0x27)) == '\0') {
        pcVar5 = ((char *)GEN_TOP(F_00ac8710(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x70))),&(*(char *)(gen_frame + 0x0)))));
      }
      if ((*(char *)(gen_frame + 0x0)) == '\x01') {
        if (*((int *)GEN_TOP(((int)this + 0x80))) == 0) {
          if (*((int *)GEN_TOP(((int)this + 0x70))) == -1) {
            uVar3 = F_00ab44e0(0xd8,&(*(float *)(gen_frame + 0x10)),(float)(float10)1,0);
            *((uint *)GEN_TOP(((int)this + 0x80))) = uVar3;
          }
          else {
            uVar3 = F_00ab44e0(0xa5,&(*(float *)(gen_frame + 0x10)),(float)(float10)1,0);
            *((uint *)GEN_TOP(((int)this + 0x80))) = uVar3;
          }
        }
        if ((*((int *)GEN_TOP(((int)this + 0x84))) == 0) && (*((int *)GEN_TOP(((int)this + 0x70))) != -1)) {
          uVar3 = F_00ab44e0(0xa6,&(*(float *)(gen_frame + 0x10)),(float)(float10)1,0);
          *((uint *)GEN_TOP(((int)this + 0x84))) = uVar3;
        }
        iVar7 = *((int *)GEN_TOP(((int)this + 0x70)));
        ((float *)(gen_frame + 0x30))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x30))[0], REFG(float, 0x1087f04));
        ((float *)(gen_frame + 0x30))[1] = 0.0;
        ((float *)(gen_frame + 0x30))[2] = 0.0;
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1087f04);
        (*(undefined4 *)(gen_frame + 0x48)) = 0;
        (*(undefined4 *)(gen_frame + 0x50)) = 0;
        (*(undefined4 *)(gen_frame + 0x54)) = 0;
        (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1087f04);
        (*(float *)(gen_frame + 0x60)) = 0.0;
        (*(float *)(gen_frame + 0x64)) = 0.0;
        (*(float *)(gen_frame + 0x68)) = 0.0;
        if ((iVar7 != -1) && (uVar3 = F_00ab1ed0(iVar7), uVar3 != 0)) {
          (*(float *)(gen_frame + 0x28)) = gen_bits2f((uint)*((byte *)GEN_TOP((uVar3 + 0x20))));
          fVar14 = (float)*((byte *)GEN_TOP((uVar3 + 0x20)));
          (*(float *)(gen_frame + 0x28)) = fVar14;
          F_0065efa0(((float *)(gen_frame + 0x30)) GEN_EDX_ARG,fVar14,fVar14,fVar14);
        }
        pfVar4 = ((float *)GEN_TOP(F_00a5feb0((*(int * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG)));
        fVar8 = ((float10)GEN_TOD(atan2((float10)(float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)*pfVar4),
                                (float10)(float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)pfVar4[2]))))
        ;
        (*(float *)(gen_frame + 0x28)) = (float)fVar8;
        pcVar5 = ((char *)GEN_TOP(F_0065ed60(((float *)(gen_frame + 0x30)) GEN_EDX_ARG,(float)fVar8)));
        (*(float *)(gen_frame + 0x60)) = (float)((float10)(*(float *)(gen_frame + 0x60)) + (float10)(*(float *)(gen_frame + 0x10)));
        (*(float *)(gen_frame + 0x64)) = (float)((float10)(*(float *)(gen_frame + 0x14)) + (float10)(*(float *)(gen_frame + 0x64)));
        (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x18)) + (float10)(*(float *)(gen_frame + 0x68)));
        if (*((int *)GEN_TOP(((int)this + 0x80))) != 0) {
          pfVar4 = ((float *)(gen_frame + 0x30));
          pvVar6 = ((undefined *)GEN_TOP(F_00983160(*((int *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG)));
          F_009bc130(pvVar6 GEN_EDX_ARG,pfVar4);
          if ((*(char *)(gen_frame + 0x1)) == '\x01') {
            fVar8 = (float10)1;
          }
          else {
            fVar8 = (float10)0;
          }
          fVar14 = (float)fVar8;
          fVar13 = (float)fVar8;
          fVar12 = (float)fVar8;
          fVar11 = (float)fVar8;
          uVar3 = F_00983160(*((undefined4 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG);
          pcVar5 = ((char *)GEN_TOP(F_009bc3a0(uVar3 GEN_EDX_ARG,fVar11,fVar12,fVar13,fVar14)));
        }
        if (*((int *)GEN_TOP(((int)this + 0x84))) != 0) {
          pfVar4 = ((float *)(gen_frame + 0x30));
          pvVar6 = ((undefined *)GEN_TOP(F_00983160(*((int *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG)));
          F_009bc130(pvVar6 GEN_EDX_ARG,pfVar4);
          if ((*(char *)(gen_frame + 0x1)) == '\x01') {
            fVar8 = (float10)0;
            fVar14 = (float)fVar8;
            fVar13 = (float)fVar8;
            fVar12 = (float)fVar8;
            fVar11 = (float)fVar8;
            uVar3 = F_00983160(*((undefined4 *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG);
            pcVar5 = ((char *)GEN_TOP(F_009bc3a0(uVar3 GEN_EDX_ARG,fVar11,fVar12,fVar13,fVar14)));
          }
          else {
            fVar8 = (float10)1;
            fVar14 = (float)fVar8;
            fVar13 = (float)fVar8;
            fVar12 = (float)fVar8;
            fVar11 = (float)fVar8;
            uVar3 = F_00983160(*((undefined4 *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG);
            pcVar5 = ((char *)GEN_TOP(F_009bc3a0(uVar3 GEN_EDX_ARG,fVar11,fVar12,fVar13,fVar14)));
          }
        }
      }
      else {
        if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x80))) == ((undefined *)GEN_TOP(0x0))) {
          if (*((int *)GEN_TOP(((int)this + 0x84))) == 0) goto LAB_00ac95dc;
        }
        else {
          pcVar5 = ((char *)GEN_TOP(F_009bc530(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,1)));
          *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
        }
        if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x84))) != ((undefined *)GEN_TOP(0x0))) {
          pcVar5 = ((char *)GEN_TOP(F_009bc530(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG,1)));
          *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
        }
      }
    }
    else {
      if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x80))) != ((undefined *)GEN_TOP(0x0))) {
        pcVar5 = ((char *)GEN_TOP(F_009bc530(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,1)));
        *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
      }
      if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x84))) != ((undefined *)GEN_TOP(0x0))) {
        pcVar5 = ((char *)GEN_TOP(F_009bc530(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG,1)));
        *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
      }
      *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
    }
  }
LAB_00ac95dc: ;
  if (*((int *)GEN_TOP(((int)this + 0x14))) == 0) {
    fVar14 = *(float *)this;
    (*(float *)(gen_frame + 0x28)) = fVar14;
    if (0.0 < fVar14) {
      fVar14 = ((float)GEN_TOF(((float10)fVar14 - (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))))));
      (*(float *)(gen_frame + 0x28)) = fVar14;
      *(float *)this = fVar14;
      if ((float10)fVar14 < (float10)0) {
        *(undefined4 *)this = 0;
        return (uint)pcVar5;
      }
    }
    else {
      fVar14 = *((float *)GEN_TOP(((int)this + 4)));
      (*(float *)(gen_frame + 0x28)) = fVar14;
      if (0.0 < fVar14) {
        fVar14 = ((float)GEN_TOF(((float10)fVar14 - (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))))));
        (*(float *)(gen_frame + 0x28)) = fVar14;
        *((float *)GEN_TOP(((int)this + 4))) = fVar14;
        if ((float10)fVar14 < (float10)0) {
          *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
        }
      }
      if (*((char *)GEN_TOP(((int)this + 0x58))) == '\x01') {
        bVar1 = F_00ac5840(this GEN_EDX_ARG);
        pcVar5 = ((char *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
        if (bVar1 != 0) {
          F_00ac83b0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x5c))),*((undefined4 *)GEN_TOP(((int)this + 0x60))),
                       *((undefined4 *)GEN_TOP(((int)this + 0x68))),*((undefined4 *)GEN_TOP(((int)this + 0x6c))),0,1);
          pcVar5 = ((char *)GEN_TOP(0x0));
          *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
          *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
          *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
          *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
          *((undefined1 *)GEN_TOP(((int)this + 0x58))) = 0;
        }
      }
    }
  }
  else {
    fVar14 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))) +
                    (float10)*((float *)GEN_TOP(((int)this + 0x20))))));
    (*(float *)(gen_frame + 0x28)) = fVar14;
    *((float *)GEN_TOP(((int)this + 0x20))) = fVar14;
    fVar13 = *((float *)GEN_TOP(((int)this + 0x24)));
    (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar13)));
    if ((float10)fVar13 <= (float10)fVar14) {
      *((float *)GEN_TOP(((int)this + 0x20))) = fVar13;
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0xe0000000;
      *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
      piVar2 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
      uVar15 = 3;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x48))))(piVar2 GEN_EDX_ARG);
      pvVar6 = ((undefined *)GEN_TOP(F_00763050(uVar3 GEN_EDX_ARG,uVar15)));
      uVar3 = F_00770c20(pvVar6 GEN_EDX_ARG);
      return uVar3;
    }
  }
  return (uint)pcVar5;
}

/* ref: FUN_00ac9740 */
GEN_OWN_GS GEN_FRAME uint F_00ac9740(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xac9740u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x84, 12, 4);
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  int * piVar6;
  undefined * this;
  undefined4 uVar7;
  int iVar8;
  undefined1 * puVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80));
  (*(int *)(gen_frame + 0x18)) = param_1;
  uVar5 = 0;
  if (param_1 != 0) {
    uVar2 = F_00ac1a20(param_3,param_4);
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar3 = F_00ab1ed0(uVar2);
      uVar5 = 0;
      if (uVar3 != 0) {
        cVar1 = *((char *)GEN_TOP((uVar3 + 0x1c)));
        uVar5 = CONCAT31((int3)(uVar3 >> 8),cVar1);
        if (((cVar1 != '\x01') && (uVar2 != 0x2dd)) && (uVar2 != 0x2de)) {
          if ((param_3 == 2) || (param_3 == 3)) {
            uVar7 = 0x217;
          }
          else {
            if (param_3 == 0xd) {
              puVar4 = ((uint *)GEN_TOP(F_00ab2840(param_4)));
              if (puVar4 == ((uint *)GEN_TOP(0x0))) {
                return 0;
              }
              F_004816e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
              uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG,(*puVar4 & 0xffffff) + (int)puVar4,REFG(undefined4, 0x108cc50));
              F_004918c0(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG,uVar5);
              F_00493b50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x70)));
              F_004917c0(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
              F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
              piVar6 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
              puVar9 = ((undefined1 *)(gen_frame + 0x0));
              uVar7 = 0x286;
              iVar8 = (*(int *)(gen_frame + 0x18));
              this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x28))))(piVar6 GEN_EDX_ARG)));
              F_0046ab30(this GEN_EDX_ARG,uVar7,iVar8,puVar9);
              uVar5 = F_00493180(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
              return uVar5;
            }
            if (cVar1 == '\x02') {
              uVar7 = 0x216;
            }
            else {
              uVar7 = 0x215;
            }
          }
          uVar5 = F_00a7d4b0(uVar7,(*(int *)(gen_frame + 0x18)),0,param_3,param_4,0,0,0,0,REFG(float, 0x10916ec));
        }
      }
    }
  }
  return uVar5;
}

/* ref: FUN_00ac98d0 */
GEN_OWN GEN_FRAME uint F_00ac98d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xac98d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  int * piVar3;
  undefined * this;
  int iVar4;
  uint * puVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1);
  puVar5 = ((uint *)GEN_TOP((param_2 + 0x428)));
  if (*puVar5 == 0xe0000000) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,*puVar5,*((undefined4 *)GEN_TOP((param_2 + 0x42c))));
  }
  F_00ac9740(uVar1,uVar2,(uint)*((byte *)GEN_TOP((param_2 + 0xb))),*((undefined4 *)GEN_TOP((param_2 + 0xc))));
  uVar1 = F_00ac6b20(param_1,param_2,0xffffffff);
  iVar4 = 0;
  if ('\0' < *((char *)GEN_TOP((param_2 + 0x1e)))) {
    do {
      uVar1 = *puVar5;
      if (uVar1 != 0xe0000000) {
        piVar3 = ((int *)GEN_TOP(F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,uVar1,puVar5[1])));
        uVar1 = 0;
        if ((piVar3 != ((int *)GEN_TOP(0x0))) &&
           (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xb8))))(piVar3 GEN_EDX_ARG), (char)uVar1 != '\0')) {
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xdc))))(piVar3 GEN_EDX_ARG);
          uVar1 = 0;
          if (uVar2 != 0) {
            uVar6 = 0xffffffff;
            iVar7 = iVar4;
            this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xdc))))(piVar3 GEN_EDX_ARG)));
            uVar1 = F_00ac69e0(this GEN_EDX_ARG,uVar6,iVar7);
          }
        }
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar4 < *((char *)GEN_TOP((param_2 + 0x1e))));
  }
  return uVar1;
}

/* ref: FUN_00ac99b0 */
GEN_OWN GEN_FRAME unsigned int F_00ac99b0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xac99b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  undefined * this;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  int local_8;
  
  if (param_2 != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xd8))))(param_1 GEN_EDX_ARG);
    if (*((int *)GEN_TOP((uVar2 + 0x58))) == -0x20000000) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,*((int *)GEN_TOP((uVar2 + 0x58))),*((undefined4 *)GEN_TOP((uVar2 + 0x5c))));
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xd8))))(param_1 GEN_EDX_ARG);
    uVar1 = *((undefined4 *)GEN_TOP((uVar3 + 0x48)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xd8))))(param_1 GEN_EDX_ARG);
    F_00ac9740(param_1,uVar2,(uint)*((byte *)GEN_TOP((uVar3 + 0x44))),uVar1);
    local_8 = 0;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xd8))))(param_1 GEN_EDX_ARG);
    if (*((char *)GEN_TOP((uVar2 + 0x148))) != '\0') {
      iVar6 = 0x58;
      do {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xd8))))(param_1 GEN_EDX_ARG);
        if ((((*((int *)GEN_TOP((iVar6 + uVar2))) != -0x20000000) &&
             (piVar4 = ((int *)GEN_TOP(F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,*((int *)GEN_TOP((iVar6 + uVar2))),
                                           *((undefined4 *)GEN_TOP((iVar6 + 4 + uVar2)))))), piVar4 != ((int *)GEN_TOP(0x0))
             )) && (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xb8))))(piVar4 GEN_EDX_ARG), (char)uVar2 != '\0')) &&
           (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xdc))))(piVar4 GEN_EDX_ARG), uVar2 != 0)) {
          iVar8 = param_2;
          iVar9 = local_8;
          this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xdc))))(piVar4 GEN_EDX_ARG)));
          F_00ac69e0(this GEN_EDX_ARG,iVar8,iVar9);
        }
        local_8 = local_8 + 1;
        iVar6 = iVar6 + 8;
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xd8))))(param_1 GEN_EDX_ARG);
      } while (local_8 < (int)(uint)*((byte *)GEN_TOP((uVar2 + 0x148))));
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xd8))))(param_1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP((uVar2 + 0x50))) = 0;
    *((undefined4 *)GEN_TOP((uVar2 + 0x4c))) = 0;
    *((undefined2 *)GEN_TOP((uVar2 + 0x148))) = 0;
    *((undefined4 *)GEN_TOP((uVar2 + 0x58))) = 0xe0000000;
    *((undefined4 *)GEN_TOP((uVar2 + 0x5c))) = 0;
    puVar5 = ((undefined4 *)GEN_TOP((uVar2 + 0x58)));
    puVar7 = ((undefined4 *)GEN_TOP((uVar2 + 0x60)));
    for (iVar6 = 0x3a; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xd8))))(param_1 GEN_EDX_ARG);
    *((undefined1 *)GEN_TOP((uVar2 + 0x44))) = 0;
    *((undefined4 *)GEN_TOP((uVar2 + 0x48))) = 0;
    *((undefined4 *)GEN_TOP((uVar2 + 0x40))) = 0;
  }
  return;
}

/* ref: FUN_00ac9b30 */
GEN_OWN GEN_NOFRAME uint F_00ac9b30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xac9b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  byte bVar1;
  int * this;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined3 extraout_var_00 = 0;
  undefined2 * puVar5;
  int iVar6;
  float10 fVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined4 * puVar10;
  undefined4 uVar11;
  
  this = ((int *)GEN_TOP(F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1)));
  uVar3 = 0;
  if (this != ((int *)GEN_TOP(0x0))) {
    uVar2 = F_00ab1ed0((uint)*(ushort *)(param_2 + 2));
    (*(uint *)(gen_frame + 0x1c)) = uVar2;
    uVar3 = 0;
    if (uVar2 != 0) {
      bVar1 = F_00a9f620(this GEN_EDX_ARG);
      if ((bVar1 != 0) && (param_2[4] != 0)) {
        F_00ac2e20(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG);
      }
      if (*((char *)GEN_TOP(((*(uint *)(gen_frame + 0x1c)) + 0x1c))) == '\x01') {
        uVar3 = F_00aa0350(this GEN_EDX_ARG,1,0);
        if (2 < (int)uVar3) {
LAB_00ac9bbd: ;
          uVar3 = F_00ac98d0(param_1,param_2);
          return uVar3;
        }
        bVar1 = F_00906a70(this GEN_EDX_ARG);
        if (bVar1 != 0) goto LAB_00ac9bbd;
      }
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xd8))))(this GEN_EDX_ARG);
      if (*((int *)GEN_TOP((uVar3 + 0x4c))) != 0) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xd8))))(this GEN_EDX_ARG);
        F_00ac99b0(this,*((undefined4 *)GEN_TOP((uVar3 + 0x4c))));
      }
      bVar1 = F_00a9f620(this GEN_EDX_ARG);
      if ((bVar1 != 0) && (param_2[4] != 0)) {
        *(undefined4 *)&REFG(undefined, 0x14bcf40) = param_2[6];
      }
      bVar1 = F_00a9f620(this GEN_EDX_ARG);
      uVar3 = CONCAT31(extraout_var,bVar1);
      if (((bVar1 != 0) && (uVar3 = param_2[4], uVar3 != 0)) && (uVar3 <= REFG(undefined4, 0x14bd004))) {
        uVar3 = F_00ac98d0(param_1,param_2);
        return uVar3;
      }
      if ((char)this[0x62] != '\x02') {
        (*(uint *)(gen_frame + 0x1c)) = param_2[4];
        if (param_2[4] == 0) {
          bVar1 = F_00a9f620(this GEN_EDX_ARG);
          if (bVar1 != 0) {
            uVar3 = F_00ac2b80(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG);
            (*(uint *)(gen_frame + 0x1c)) = uVar3;
          }
        }
        F_00ac6b20(param_1,param_2,param_2[5]);
        uVar11 = param_2[5];
        iVar6 = (int)*((char *)GEN_TOP(((int)param_2 + 0x1e)));
        uVar2 = (uint)*(ushort *)(param_2 + 2);
        uVar9 = param_2[3];
        puVar10 = param_2 + 0x10a;
        uVar8 = *((undefined1 *)GEN_TOP(((int)param_2 + 0xb)));
        uVar3 = (*(uint *)(gen_frame + 0x1c));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xd8))))(this GEN_EDX_ARG);
        F_00ac3e50(uVar4 GEN_EDX_ARG,uVar8,uVar9,uVar2,puVar10,iVar6,uVar3,uVar11);
        bVar1 = F_00a9f620(this GEN_EDX_ARG);
        uVar3 = CONCAT31(extraout_var_00,bVar1);
        if ((bVar1 == 0) || (param_2[4] == 0)) {
          F_00ac6c80(((undefined1 *)(gen_frame + 0x0)),param_2);
          fVar7 = F_00a5c840((uint)*(ushort *)(param_2 + 7));
          (*(float *)(gen_frame + 0x18)) = (float)fVar7;
          puVar5 = ((undefined2 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xd8))))(this GEN_EDX_ARG)));
          *(undefined4 *)(puVar5 + 4) = 0;
          *(undefined4 *)(puVar5 + 10) = 0;
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 2) = 0;
          *(undefined4 *)(puVar5 + 0x1c) = 0;
          *(undefined4 *)(puVar5 + 0x1a) = 0;
          *(undefined4 *)(puVar5 + 8) = 0xe0000000;
          uVar3 = F_00aa6ad0(this GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)param_2 + 0xb))),param_2[3],*param_2,
                               param_2[1],((undefined1 *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x1c)),
                               (uint)*((byte *)GEN_TOP(((int)param_2 + 10))),param_2[8]);
        }
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00ac9dd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ac9dd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xac9dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x20))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x24))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x28))) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00ac9e00 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00ac9e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xac9e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042b630(param_1 GEN_EDX_FWD);
  F_0042e170(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,this);
  F_004feba0(param_1,((undefined1 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return param_1;
}

/* ref: FUN_00ac9e50 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00ac9e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xac9e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042b630(param_1 GEN_EDX_FWD);
  F_0042e170(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,this);
  F_004ff130(param_1,((undefined1 *)(gen_frame + 0x0)),param_2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return param_1;
}

/* ref: FUN_00ac9eb0 */
GEN_OWN GEN_FRAME float10 F_00ac9eb0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xac9eb0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00ac9ed0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ac9ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xac9ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  ulonglong uVar2;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x194)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  }
  F_0042c880(((undefined *)GEN_TOP(((int)this + 300))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xd8))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG);
  uVar2 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_00ac9f20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ac9f20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xac9f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    uVar1 = F_0042a990(in_ecx + 0x30 GEN_EDX_FWD);
    return uVar1;
  case 1: ;
    uVar1 = F_0042a990(in_ecx + 0x84 GEN_EDX_ARG);
    return uVar1;
  case 2: ;
    uVar1 = F_0042a990(in_ecx + 0xd8 GEN_EDX_ARG);
    return uVar1;
  case 3: ;
    uVar1 = F_0042a990(in_ecx + 300 GEN_EDX_ARG);
    return uVar1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ac9f90 */
GEN_OWN GEN_NOFRAME uint F_00ac9f90(void)
{
  GEN_ENTER(0xac9f90u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00accac0(0);
  return uVar1;
}

/* ref: FUN_00ac9fa0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ac9fa0(GEN_P(undefined1 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xac9fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;)
  *in_ecx = 1;
  return in_ecx[1] == '\0';
}

/* ref: FUN_00ac9fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ac9fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xac9fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (((*((char *)GEN_TOP(((int)this + 1))) == '\0') && (*((char *)GEN_TOP(((int)this + 2))) != '\0')) &&
     (*(char *)this == '\0')) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 1: ;
    case 2: ;
    case 3: ;
      F_00accbd0(param_2,1);
      *((undefined1 *)GEN_TOP(((int)this + 1))) = 1;
      return 0;
    case 4: ;
      F_00accbd0(param_2,10);
    }
    *((undefined1 *)GEN_TOP(((int)this + 1))) = 1;
    return 0;
  }
  return 1;
}

/* ref: FUN_00aca030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aca030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xaca030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (((*((char *)GEN_TOP(((int)this + 1))) == '\0') && (*((char *)GEN_TOP(((int)this + 2))) != '\0')) &&
     (*(char *)this == '\0')) {
    *((int *)GEN_TOP(((int)this + 4))) = param_1;
    if ((0 < param_1) && (param_1 < 5)) {
      F_00accb50(param_2);
    }
    *((undefined1 *)GEN_TOP(((int)this + 1))) = 1;
    return 0;
  }
  return 1;
}

/* ref: FUN_00aca080 */
GEN_OWN GEN_FRAME unsigned int F_00aca080(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaca080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != 0) {
    F_00c472af(param_2,param_3,((char *)REFP(0x10ea1b8)),*param_1,param_1[1]);
  }
  return;
}

/* ref: FUN_00aca0c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00aca0c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaca0c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,param_1);
  uVar1 = F_00acca30(REFG(int, 0x14be750),param_2,param_3);
  REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
  return uVar1;
}

/* ref: FUN_00aca130 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00aca130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaca130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  
  LOCK();
  uVar1 = REFG(undefined4, 0x14bee60);
  uVar1 = REFG(undefined4, 0x14bee60);
  uVar1 = REFG(undefined4, 0x14bee60);
  iVar2 = REFG(undefined4, 0x14bee60);
  REFG(undefined4, 0x14bee60) = uVar1;
  UNLOCK();
  if ((iVar2 == 0) && (*((int *)GEN_TOP(((int)this + 0x194))) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00aca150 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00aca150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaca150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x2c)));
}

/* ref: FUN_00aca160 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00aca160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaca160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  
  LOCK();
  uVar1 = REFG(undefined4, 0x14bee60);
  uVar1 = REFG(undefined4, 0x14bee60);
  uVar1 = REFG(undefined4, 0x14bee60);
  uVar2 = REFG(undefined4, 0x14bee60);
  REFG(undefined4, 0x14bee60) = uVar1;
  UNLOCK();
  *((undefined1 *)GEN_TOP(((int)this + 1))) = 0;
  return uVar2;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf6 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00aca170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaca170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  byte * pbVar6;
  byte * pbVar7;
  undefined4 * puVar8;
  uint local_1c;
  int local_14;
  int local_c;
  uint local_8;
  
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_FWD);
  if ((char)uVar3 != '\0') {
    local_14 = 0;
    local_c = 0;
    local_1c = 0;
    do {
      puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG,local_c)));
      local_8 = 0;
      pbVar6 = ((byte *)GEN_TOP(((int)puVar4 + 0x13)));
      do {
        cVar2 = (char)(pbVar6 + (-0x13 - (int)puVar4));
        pbVar7 = pbVar6 + 4;
        local_8 = local_8 ^ (uint)pbVar6[-2] <<
                            (cVar2 + (char)((uint)(pbVar6 + (-0x12 - (int)puVar4)) / 0x18) * -0x18 +
                             1U & 0x1f) ^
                            (uint)pbVar6[-1] <<
                            (cVar2 + (char)((uint)(pbVar6 + (-0x11 - (int)puVar4)) / 0x18) * -0x18 +
                             2U & 0x1f) ^
                            (uint)*pbVar6 <<
                            (cVar2 + (char)((uint)(pbVar6 + (-0x10 - (int)puVar4)) / 0x18) * -0x18 +
                             3U & 0x1f) ^
                            (uint)pbVar6[-3] <<
                            (cVar2 + (char)((uint)(pbVar6 + (-0x13 - (int)puVar4)) / 0x18) * -0x18 &
                            0x1fU);
        pbVar6 = pbVar7;
      } while (pbVar7 + (-0x13 - (int)puVar4) < ((byte *)GEN_TOP(0xc4)));
      local_14 = local_14 + local_8;
      local_c = local_c + 1;
      puVar4[2] = local_8;
      puVar4[0x4e] = 3;
      iVar1 = local_1c + 0x10;
      local_1c = local_1c + 0xd4;
      puVar8 = ((undefined4 *)GEN_TOP((iVar1 + *(int *)(this + 0x3208))));
      for (iVar5 = 0x35; iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
    } while (local_1c < 0x2120);
    puVar4 = *(undefined4 * PTR32 *)(this + 0x3208);
    *puVar4 = 0x2013ff14;
    puVar4[1] = 1;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *((int *)GEN_TOP((*(int *)(this + 0x3208) + 8))) = local_14;
    return 1;
  }
  return 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf7 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00aca320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaca320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(int *)(this + 0x3208) != 0) {
    F_00406ad0(*(int *)(this + 0x3208));
    *(undefined4 *)(this + 0x3208) = 0;
  }
  uVar1 = F_00406b90(0x2130,0,0);
  *(uint *)(this + 0x3208) = uVar1;
  return uVar1 != 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf8 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00aca360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xaca360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  undefined4 * this_00;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  byte * pbVar5;
  byte * pbVar6;
  undefined4 * puVar7;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  if (*(int *)(this + 0x3208) != 0) {
    local_14 = 0;
    local_8 = 0;
    local_10 = 0;
    do {
      this_00 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD,local_8)));
      puVar4 = ((undefined4 *)GEN_TOP((local_10 + 0x10 + *(int *)(this + 0x3208))));
      puVar7 = this_00;
      for (iVar3 = 0x35; iVar3 != 0; iVar3 = iVar3 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      this_00[0x4d] = 0;
      if (this_00[3] == 1) {
        this_00[0x4d] = 1;
        *(undefined1 *)(this_00 + 0x4f) = (undefined1)local_8;
        if (this_00[1] == 1) {
          uVar2 = F_00acc850(this_00 GEN_EDX_ARG);
          if (this_00[2] != uVar2) {
            this_00[0x4d] = 3;
          }
        }
        else {
          this_00[0x4d] = 2;
        }
        this_00[0x4e] = param_1;
      }
      local_c = 0;
      pbVar5 = ((byte *)GEN_TOP(((int)this_00 + 0x13)));
      do {
        cVar1 = (char)(pbVar5 + (-0x13 - (int)this_00));
        pbVar6 = pbVar5 + 4;
        local_c = local_c ^ (uint)pbVar5[-2] <<
                            (cVar1 + (char)((uint)(pbVar5 + (-0x12 - (int)this_00)) / 0x18) * -0x18
                             + 1U & 0x1f) ^
                            (uint)pbVar5[-1] <<
                            (cVar1 + (char)((uint)(pbVar5 + (-0x11 - (int)this_00)) / 0x18) * -0x18
                             + 2U & 0x1f) ^
                            (uint)*pbVar5 <<
                            (cVar1 + (char)((uint)(pbVar5 + (-0x10 - (int)this_00)) / 0x18) * -0x18
                             + 3U & 0x1f) ^
                            (uint)pbVar5[-3] <<
                            (cVar1 + (char)((uint)(pbVar5 + (-0x13 - (int)this_00)) / 0x18) * -0x18
                            & 0x1fU);
        pbVar5 = pbVar6;
      } while (pbVar6 + (-0x13 - (int)this_00) < ((byte *)GEN_TOP(0xc4)));
      local_14 = local_14 + local_c;
      local_8 = local_8 + 1;
      local_10 = local_10 + 0xd4;
    } while (local_10 < 0x2120);
    return *((int *)GEN_TOP((*(int *)(this + 0x3208) + 8))) == local_14;
  }
  return 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00aca530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaca530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x3208)));
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf10 */
GEN_OWN GEN_NOFRAME uint F_00aca540(void)
{
  GEN_ENTER(0xaca540u, 0u, 0u, 0u, 0u);
  return 0x2130;
}

/* ref: FUN_00aca550 */
GEN_OWN GEN_FRAME uint F_00aca550(GEN_P(undefined4 * in_esi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaca550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_004a0020(in_esi GEN_EDX_ARG);
  in_esi[10] = param_2;
  *in_esi = (*(undefined * PTR32 (*)[3])REFP(0x10ea2e8));
  return (uint)in_esi;
}

/* ref: FUN_00aca580 */
GEN_OWN GEN_FRAME unsigned int F_00aca580(GEN_P(undefined4 * in_eax, unsigned int gen_a0), GEN_P(undefined4 in_ecx, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaca580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_eax = in_ecx;
  in_eax[1] = param_3;
  in_eax[2] = 0;
  return 0;
}

/* ref: FUN_00aca5a0 */
GEN_OWN GEN_NOFRAME byte F_00aca5a0(GEN_P(int * in_ecx, unsigned int gen_a0), GEN_P(char * in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xaca5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char * in_edi = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((uint)in_ecx[2] < (uint)in_ecx[1]) {
    do {
      cVar1 = *((char *)GEN_TOP((*in_ecx + in_ecx[2])));
      if (cVar1 == '_') {
        in_ecx[2] = in_ecx[2] + 1;
        break;
      }
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        cVar1 = cVar1 + ' ';
      }
      if (((cVar1 < 'a') || ('z' < cVar1)) && (cVar1 != '-')) {
        return 0;
      }
      in_edi[iVar2] = cVar1;
      in_ecx[2] = in_ecx[2] + 1;
      iVar2 = iVar2 + 1;
    } while ((uint)in_ecx[2] < (uint)in_ecx[1]);
    if (iVar2 != 0) {
      *in_edi = *in_edi - 0x20;
      in_edi[iVar2] = '\0';
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aca620 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00aca620(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaca620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  uint uVar5;
  uint * puVar6;
  uint uVar7;
  bool bVar8;
  
  uVar5 = 0;
  bVar1 = *param_2;
  pbVar4 = param_2;
  while (bVar1 != 0) {
    pbVar4 = pbVar4 + 1;
    uVar5 = uVar5 * 2 ^ (uint)bVar1;
    bVar1 = *pbVar4;
  }
  uVar7 = 0;
  if (*param_1 != 0) {
    puVar6 = param_1 + 1;
    do {
      if (uVar5 == puVar6[1]) {
        pbVar4 = ((byte *)GEN_TOP(*puVar6));
        pbVar2 = param_2;
        do {
          bVar1 = *pbVar2;
          bVar8 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) {
LAB_00aca680: ;
            iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00aca685;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar8 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_00aca680;
          pbVar2 = pbVar2 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00aca685: ;
        if (iVar3 == 0) {
          return param_1[uVar7 * 3 + 3];
        }
      }
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 3;
    } while (uVar7 < *param_1);
  }
  return 0;
}

/* ref: FUN_00aca6c0 */
GEN_OWN GEN_FRAME unsigned int F_00aca6c0(GEN_P(undefined4 * in_eax, unsigned int gen_a0), GEN_P(undefined4 in_ecx, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaca6c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_eax = in_ecx;
  in_eax[1] = param_3;
  in_eax[2] = 0;
  return 0;
}

/* ref: FUN_00aca740 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00aca740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaca740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x9640))) = 0;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x9644)));
  iVar2 = 4;
  do {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar3)) + 0x10))))(((int *)GEN_TOP(*puVar3)) GEN_EDX_FWD);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar3)) + 0xc))))(((int *)GEN_TOP(*puVar3)) GEN_EDX_ARG);
    *((int *)GEN_TOP(((int)this + 0x9640))) = *((int *)GEN_TOP(((int)this + 0x9640))) + uVar1;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00aca790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aca790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xaca790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x9644)));
  uVar4 = 0;
  do {
    piVar1 = ((int *)GEN_TOP(*puVar3));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    if (param_1 < uVar2) {
      uVar2 = 0;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
      if (uVar4 != 0) {
        do {
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,uVar2);
          if (*((int *)GEN_TOP((uVar4 + 0x134))) == 1) {
            if (param_1 == 0) {
              return uVar4;
            }
            param_1 = param_1 - 1;
          }
          uVar2 = uVar2 + 1;
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
        } while (uVar2 < uVar4);
      }
      return 0;
    }
    param_1 = param_1 - uVar2;
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar4 < 4);
  return 0;
}

/* ref: FUN_00aca810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aca810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xaca810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x9654))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x9654))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00aca830 */
GEN_OWN GEN_FRAME uint F_00aca830(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xaca830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x40))))(piVar1 GEN_EDX_ARG,param_1);
      return uVar2;
    case 1: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG,param_1);
      return uVar2;
    case 2: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x30))))(piVar1 GEN_EDX_ARG,param_1);
      return uVar2;
    case 3: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_ARG);
      if (uVar2 != 0) {
        return uVar2 + 0x850;
      }
      break;
    case 4: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x58))))(piVar1 GEN_EDX_ARG,param_1);
      return uVar2;
    case 5: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))(piVar1 GEN_EDX_ARG,param_1);
      return uVar2;
    case 6: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x38))))(piVar1 GEN_EDX_ARG,param_1);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00aca8c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00aca8c0(GEN_P(undefined2 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaca8c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  *(undefined1 *)(in_ecx + 1) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 10) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0xe) = 0;
  *(undefined1 *)(in_ecx + 0x12) = 0;
  F_0042b630(in_ecx + 0x18 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x42 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x6c GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x96 GEN_EDX_ARG);
  *(undefined4 *)(in_ecx + 0xc0) = 0;
  *(undefined4 *)(in_ecx + 0xc2) = 0;
  *(undefined4 *)(in_ecx + 0xc4) = 0;
  *(undefined4 *)(in_ecx + 0xc6) = 0;
  *(undefined4 *)(in_ecx + 0xca) = 0;
  *(undefined4 *)(in_ecx + 10) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00aca930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aca930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaca930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 * puVar1;
  code * pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint in_EAX = 0;
  uint uVar6;
  int * piVar7;
  undefined * this_00;
  undefined4 uVar8;
  
  if (*((char *)GEN_TOP(((int)this + 2))) == '\0') {
    in_EAX = REFG(undefined4, 0x137104c);
    if (*((char *)GEN_TOP((REFG(undefined4, 0x137104c) + 8))) == '\0') {
      F_00ab0230(0x17d7,(int)this + 0x30);
      F_00ab0230(0x17d8,(int)this + 0x84);
      F_00ab0230(0x17d9,(int)this + 0xd8);
      F_00ab0230(0x17da,(int)this + 300);
      F_0042a990((int)this + 0xd8 GEN_EDX_ARG);
      F_0042a990((int)this + 0x84 GEN_EDX_ARG);
      in_EAX = F_0042a990((int)this + 0x30 GEN_EDX_ARG);
    }
    *((undefined1 *)GEN_TOP(((int)this + 2))) = 1;
  }
  uVar6 = REFG(undefined4, 0x14bee10);
  if (*((char *)GEN_TOP(((int)this + 1))) == '\0') {
    LOCK();
    uVar8 = REFG(undefined4, 0x14bee60);
    uVar8 = REFG(undefined4, 0x14bee60);
    uVar8 = REFG(undefined4, 0x14bee60);
    in_EAX = REFG(undefined4, 0x14bee60);
    REFG(undefined4, 0x14bee60) = uVar8;
    UNLOCK();
    if ((in_EAX == 0) && (*((int *)GEN_TOP(((int)this + 0x194))) == 0)) {
      bVar5 = false;
      uVar6 = 0;
      do {
        in_EAX = F_00aca830(uVar6);
        if ((in_EAX != 0) && (*((char *)GEN_TOP((in_EAX + 0x2d))) != '\0')) {
          *((undefined1 *)GEN_TOP((in_EAX + 0x2c))) = 1;
          bVar5 = true;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 7);
      if (bVar5) {
        piVar7 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        uVar8 = 0xc;
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x48))))(piVar7 GEN_EDX_ARG);
        this_00 = ((undefined *)GEN_TOP(F_00763050(uVar6 GEN_EDX_ARG,uVar8)));
        in_EAX = F_00822a70(this_00 GEN_EDX_ARG);
      }
    }
  }
  else if (*((int *)GEN_TOP(((int)this + 4))) == 5) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x194))) != ((undefined *)GEN_TOP(0x0))) {
      in_EAX = F_004cf020(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x194))) GEN_EDX_ARG);
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x194)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
        *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
    if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
      LOCK();
      uVar8 = REFG(undefined4, 0x14bee60);
      uVar8 = REFG(undefined4, 0x14bee60);
      uVar8 = REFG(undefined4, 0x14bee60);
      uVar3 = REFG(undefined4, 0x14bee60);
      REFG(undefined4, 0x14bee60) = uVar8;
      UNLOCK();
      uVar8 = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
      pcVar2 = *((gen_code32 *)GEN_TOP(((int)this + 0x10)));
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
      uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
      *((undefined1 *)GEN_TOP(((int)this + 1))) = 0;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = pcVar2;
      ((byte *)(gen_frame + 0x0))[4] = (byte)uVar8;
      ((byte *)(gen_frame + 0x0))[5] = SUB41(uVar8,1);
      ((byte *)(gen_frame + 0x0))[6] = SUB41(uVar8,2);
      ((byte *)(gen_frame + 0x0))[7] = SUB41(uVar8,3);
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
      uVar6 = (*pcVar2)(uVar8,((byte *)(gen_frame + 0x0)) + 8,this,uVar3);
      return uVar6;
    }
  }
  else {
    LOCK();
    uVar8 = REFG(undefined4, 0x14bee60);
    uVar8 = REFG(undefined4, 0x14bee60);
    uVar8 = REFG(undefined4, 0x14bee60);
    in_EAX = REFG(undefined4, 0x14bee60);
    REFG(undefined4, 0x14bee60) = uVar8;
    UNLOCK();
    if (in_EAX == 0) {
      if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
        *((undefined1 *)GEN_TOP(((int)this + 0x24))) = 1;
        in_EAX = 0;
      }
      else {
        in_EAX = *((int *)GEN_TOP(((int)this + 4))) - 1;
        if (in_EAX < 4) {
          *((uint *)GEN_TOP(((int)this + 0x2c))) = REFG(undefined4, 0x14bee10);
          in_EAX = uVar6;
        }
      }
      if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
        LOCK();
        uVar8 = REFG(undefined4, 0x14bee60);
        uVar8 = REFG(undefined4, 0x14bee60);
        uVar8 = REFG(undefined4, 0x14bee60);
        uVar3 = REFG(undefined4, 0x14bee60);
        REFG(undefined4, 0x14bee60) = uVar8;
        UNLOCK();
        uVar8 = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
        pcVar2 = *((gen_code32 *)GEN_TOP(((int)this + 0x10)));
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
        uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
        *((undefined1 *)GEN_TOP(((int)this + 1))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
        uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = pcVar2;
        ((byte *)(gen_frame + 0x0))[4] = (byte)uVar8;
        ((byte *)(gen_frame + 0x0))[5] = SUB41(uVar8,1);
        ((byte *)(gen_frame + 0x0))[6] = SUB41(uVar8,2);
        ((byte *)(gen_frame + 0x0))[7] = SUB41(uVar8,3);
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = uVar3;
        uVar6 = (*pcVar2)(uVar8,((byte *)(gen_frame + 0x0)) + 8,this,uVar4);
        return uVar6;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00acab30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acab30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xacab30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  if (((*((char *)GEN_TOP(((int)this + 1))) == '\0') && (*((char *)GEN_TOP(((int)this + 2))) != '\0')) &&
     (*(char *)this == '\0')) {
    *((undefined1 *)GEN_TOP(((int)this + 1))) = 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_4;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_4[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_4[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_4[3];
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_5;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acab80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acab80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xacab80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  if (((*((char *)GEN_TOP(((int)this + 1))) == '\0') && (*((char *)GEN_TOP(((int)this + 2))) != '\0')) &&
     (*(char *)this == '\0')) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_3;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_3[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_3[3];
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_4;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 5;
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 2;
    *((undefined1 *)GEN_TOP(((int)this + 1))) = 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acac40 */
GEN_OWN GEN_FRAME uint F_00acac40(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(byte * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xacac40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_3 = (byte *)(uintptr_t)gen_a2;)
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte * pbVar5;
  
  uVar3 = 0;
  *param_2 = 0;
  if (in_eax != 0) {
    do {
      bVar1 = param_3[uVar3];
      if (((bVar1 == 9) || (bVar1 == 10)) || (bVar1 == 0x2c)) {
        param_3[uVar3] = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < in_eax);
  }
  uVar3 = 0;
  pbVar5 = param_3;
  if (param_3 != ((byte *)GEN_TOP(0x0))) {
    while( true ) {
      param_2[*param_2 * 3 + 1] = (int)pbVar5;
      uVar4 = 0;
      bVar1 = *pbVar5;
      while (bVar1 != 0) {
        pbVar5 = pbVar5 + 1;
        uVar4 = uVar4 * 2 ^ (uint)bVar1;
        bVar1 = *pbVar5;
      }
      param_2[*param_2 * 3 + 2] = uVar4;
      if (in_eax <= uVar3) break;
      while (param_3[uVar3] != 0) {
        uVar3 = uVar3 + 1;
        if (in_eax <= uVar3) {
          return (uint)param_2;
        }
      }
      if (in_eax <= uVar3) {
        return (uint)param_2;
      }
      while (param_3[uVar3] == 0) {
        uVar3 = uVar3 + 1;
        if (in_eax <= uVar3) {
          return (uint)param_2;
        }
      }
      if (param_3 + uVar3 == ((byte *)GEN_TOP(0x0))) {
        return (uint)param_2;
      }
      if (in_eax <= uVar3) {
        return (uint)param_2;
      }
      while (param_3[uVar3] != 0) {
        uVar3 = uVar3 + 1;
        if (in_eax <= uVar3) {
          return (uint)param_2;
        }
      }
      if (in_eax <= uVar3) {
        return (uint)param_2;
      }
      while (param_3[uVar3] == 0) {
        uVar3 = uVar3 + 1;
        if (in_eax <= uVar3) {
          return (uint)param_2;
        }
      }
      if (param_3 + uVar3 == ((byte *)GEN_TOP(0x0))) {
        return (uint)param_2;
      }
      if (in_eax <= uVar3) {
        return (uint)param_2;
      }
      while (param_3[uVar3] != 0) {
        uVar3 = uVar3 + 1;
        if (in_eax <= uVar3) {
          return (uint)param_2;
        }
      }
      if (in_eax <= uVar3) {
        return (uint)param_2;
      }
      while (param_3[uVar3] == 0) {
        uVar3 = uVar3 + 1;
        if (in_eax <= uVar3) {
          return (uint)param_2;
        }
      }
      pbVar5 = param_3 + uVar3;
      if (pbVar5 == ((byte *)GEN_TOP(0x0))) {
        return (uint)param_2;
      }
      iVar2 = 0;
      bVar1 = *pbVar5;
      while (bVar1 != 0) {
        pbVar5 = pbVar5 + 1;
        iVar2 = (bVar1 - 0x30) + iVar2 * 10;
        bVar1 = *pbVar5;
      }
      param_2[*param_2 * 3 + 3] = iVar2;
      *param_2 = *param_2 + 1;
      for (; uVar3 < in_eax; uVar3 = uVar3 + 1) {
        if (param_3[uVar3] == 0) goto joined_r0x00acade3;
      }
LAB_00acadc3: ;
      pbVar5 = ((byte *)GEN_TOP(0x0));
LAB_00acadc5: ;
      if (*param_2 == 0x80) {
        return (uint)param_2;
      }
      if (pbVar5 == ((byte *)GEN_TOP(0x0))) {
        return (uint)param_2;
      }
    }
  }
  return (uint)param_2;
joined_r0x00acade3: ;
  if (in_eax <= uVar3) goto LAB_00acadc3;
  if (param_3[uVar3] != 0) {
    pbVar5 = param_3 + uVar3;
    goto LAB_00acadc5;
  }
  uVar3 = uVar3 + 1;
  goto joined_r0x00acade3;
}

/* ref: FUN_00acae00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acae00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xacae00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint in_EAX = 0;
  
  if (*((int *)GEN_TOP(((int)this + 0x966c))) != 0) {
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x9668))))
                       (*((undefined4 *)GEN_TOP(((int)this + 0x966c))),(int)this + 0x9670,param_1,
                        *((undefined4 *)GEN_TOP(((int)this + 0x9678))));
    *((undefined4 *)GEN_TOP(((int)this + 0x966c))) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00acaeb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acaeb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xacaeb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((char *)GEN_TOP(((int)this + 1))) != '\0') {
    F_00ace4a0();
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1[3];
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_2;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acaef0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acaef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(char * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xacaef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined * puVar1;
  uint uVar2;
  char * pcVar3;
  char * pcVar4;
  
  if (((*((char *)GEN_TOP(((int)this + 1))) != '\0') || (*((char *)GEN_TOP(((int)this + 2))) == '\0')) ||
     (*(char *)this != '\0')) {
    return 0;
  }
  *((char * PTR32 *)GEN_TOP(((int)this + 8))) = param_3;
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  if ((param_1 < 1) || (3 < param_1)) goto LAB_00acaff7;
  if (param_1 == 1) {
    pcVar4 = ((char *)REFP(0x10ea008));
LAB_00acaf7c: ;
    puVar1 = &REFG(undefined, 0x10e9947);
    pcVar3 = ((char *)REFP(0x10ea050));
  }
  else if (param_1 == 2) {
    pcVar4 = ((char *)REFP(0x10ea018));
    puVar1 = ((undefined *)GEN_TOP(F_00430520(5)));
    pcVar3 = ((char *)REFP(0x10ea040));
  }
  else if (param_1 == 3) {
    pcVar4 = ((char *)REFP(0x10ea02c));
    puVar1 = ((undefined *)GEN_TOP(F_00430520(7)));
    pcVar3 = ((char *)REFP(0x10ea040));
  }
  else {
    pcVar4 = param_3;
    if (param_1 == 1) goto LAB_00acaf7c;
    puVar1 = ((undefined *)GEN_TOP(F_00430520(param_3)));
    pcVar3 = ((char *)REFP(0x10ea040));
  }
  F_00c472af(&REFG(undefined, 0x14beec0),0x104,pcVar3,puVar1,pcVar4,param_2 + 1);
  uVar2 = F_00ac9fb0(this GEN_EDX_ARG,param_1,&REFG(undefined, 0x14beec0));
  if (uVar2 != 0) {
    return 0;
  }
  F_00aca0c0(((char *)REFP(0x10ea05c)),param_3,param_4);
  if (*((char *)GEN_TOP(((int)this + 1))) != '\0') {
    F_00ace4a0();
  }
LAB_00acaff7: ;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 1))) = 1;
  return 1;
}

/* ref: FUN_00acb020 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acb020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xacb020u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  byte bVar1;
  
  bVar1 = F_00acaef0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  if (bVar1 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_5;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_5[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_5[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_5[3];
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_6;
  }
  return bVar1;
}

/* ref: FUN_00acb070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acb070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xacb070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (((*((char *)GEN_TOP(((int)this + 1))) == '\0') && (*((char *)GEN_TOP(((int)this + 2))) != '\0')) &&
     (*(char *)this == '\0')) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    uVar1 = 1;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 1;
    *((undefined1 *)GEN_TOP(((int)this + 1))) = 1;
  }
  return uVar1;
}

/* ref: FUN_00acb0a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acb0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xacb0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  
  bVar1 = 0;
  if (((*((char *)GEN_TOP(((int)this + 1))) == '\0') && (*((char *)GEN_TOP(((int)this + 2))) != '\0')) &&
     (*(char *)this == '\0')) {
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    bVar1 = 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 1;
    *((undefined1 *)GEN_TOP(((int)this + 1))) = 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_2[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2[3];
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_3;
  }
  return bVar1;
}

/* ref: FUN_00acb110 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acb110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xacb110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((char *)GEN_TOP(((int)this + 1))) != '\0') {
    F_00ace360();
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1[3];
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_2;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acb150 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acb150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xacb150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  char * _Format;
  uint uVar1;
  
  if (((*((char *)GEN_TOP(((int)this + 1))) != '\0') || (*((char *)GEN_TOP(((int)this + 2))) == '\0')) ||
     (*(char *)this != '\0')) {
    return 0;
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  if (param_1 == 0) {
    F_00acd970(param_3,((char *)REFP(0x10ea068)),0x2000,1);
  }
  else if (param_1 == 1) {
    F_00c472af(&REFG(undefined, 0x14bf4e8),0x104,((char *)REFP(0x10ea074)),param_2 + 1);
    _Format = ((char *)GEN_TOP(F_0042a990((int)this + 0x30 GEN_EDX_ARG)));
    F_00c472af(&REFG(undefined, 0x14bf5ec),0x80,_Format);
    F_00c472af(&REFG(undefined, 0x14bf66c),0x80,((char *)REFP(0x10ea088)));
    F_00c472af(&REFG(undefined, 0x14bf6ec),0x400,"");
    F_00c472af(&REFG(undefined, 0x14bfaec),8,((char *)REFP(0x10ea094)),param_2 + 1);
    *(undefined4 *)&REFG(undefined, 0x14bfaf4) = 1;
    *(undefined4 *)&REFG(undefined, 0x14bfaf8) = 0;
    *(undefined4 *)&REFG(undefined, 0x14bfafc) = 0;
    *(undefined4 *)&REFG(undefined, 0x14bfb00) = 0;
    *(undefined4 *)&REFG(undefined, 0x14bfb08) = 0;
    uVar1 = F_00aca030(this GEN_EDX_ARG,1,&REFG(undefined, 0x14bf4e8));
    if (uVar1 != 0) {
      return 0;
    }
    F_00aca0c0(((char *)REFP(0x10ea09c)),param_3,param_4);
    if (*((char *)GEN_TOP(((int)this + 1))) != '\0') {
      F_00ace360();
      *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
      *((undefined1 *)GEN_TOP(((int)this + 1))) = 1;
      return 1;
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 1))) = 1;
  return 1;
}

/* ref: FUN_00acb290 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acb290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xacb290u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  byte bVar1;
  
  bVar1 = F_00acb150(this GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  if (bVar1 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_5;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_5[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_5[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_5[3];
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_6;
  }
  return bVar1;
}

/* ref: FUN_00acb2e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acb2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xacb2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (((*((char *)GEN_TOP(((int)this + 1))) == '\0') && (*((char *)GEN_TOP(((int)this + 2))) != '\0')) &&
     (*(char *)this == '\0')) {
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    F_00acd970(param_1,((char *)REFP(0x10ea068)),0x2000,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 1))) = 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acb340 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acb340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xacb340u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  if (((*((char *)GEN_TOP(((int)this + 1))) == '\0') && (*((char *)GEN_TOP(((int)this + 2))) != '\0')) &&
     (*(char *)this == '\0')) {
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    F_00acd970(param_1,((char *)REFP(0x10ea068)),0x2000,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 1))) = 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_2[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2[3];
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_3;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acb3c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acb3c0(GEN_P(char * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xacb3c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  undefined * this;
  char * pcVar1;
  
  this = ((undefined *)GEN_TOP(F_00406b90(0x14c,0,0)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    F_0042b630(this GEN_EDX_ARG);
    F_0042b630(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
    F_0042b630((int)this + 0xa8 GEN_EDX_ARG);
    F_00c472af(&REFG(undefined, 0x14bfb10),0x104,((char *)REFP(0x10ea1b8)),param_2,param_3);
    pcVar1 = ((char *)GEN_TOP(F_0042a990(param_1 + 300 GEN_EDX_ARG)));
    F_00c472af(&REFG(undefined, 0x14bfc14),0x80,pcVar1);
    pcVar1 = ((char *)GEN_TOP(F_0042a990(param_4 GEN_EDX_ARG)));
    F_00c472af(&REFG(undefined, 0x14bfc94),0x80,pcVar1);
    pcVar1 = ((char *)GEN_TOP(F_0042a990(param_5 GEN_EDX_ARG)));
    F_00c472af(&REFG(undefined, 0x14bfd14),0x400,pcVar1);
    F_00c472af(&REFG(undefined, 0x14c0114),8,((char *)REFP(0x10ea0a8)));
    *(undefined4 *)&REFG(undefined, 0x14c011c) = 10;
    *(undefined4 *)&REFG(undefined, 0x14c0120) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0124) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0128) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0130) = 0;
    if (((param_1[1] == '\0') && (param_1[2] != '\0')) && (*param_1 == '\0')) {
      param_1[4] = '\x04';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      F_00accb50(&REFG(undefined, 0x14bfb10));
      param_1[1] = '\x01';
      F_00ace5e0(this GEN_EDX_ARG,param_1);
      if (param_6 == '\0') {
        F_00aca0c0(((char *)REFP(0x10ea0ac)),*((undefined4 *)GEN_TOP(((int)this + 0xfc))),
                     *((undefined4 *)GEN_TOP(((int)this + 0x124))));
        F_00aca0c0(((char *)REFP(0x10ea0b8)),*((undefined4 *)GEN_TOP(((int)this + 0x100))),
                     *((undefined4 *)GEN_TOP(((int)this + 0x128))));
        F_00aca0c0(((char *)REFP(0x10ea0c8)),*((undefined4 *)GEN_TOP(((int)this + 0x104))),
                     *((undefined4 *)GEN_TOP(((int)this + 300))));
      }
      if (*((int *)GEN_TOP(((int)this + 0x130))) != 0) {
        F_00aca0c0(((char *)REFP(0x10ea0d8)),*((undefined4 *)GEN_TOP(((int)this + 0x108))),*((int *)GEN_TOP(((int)this + 0x130))));
      }
      if (*((int *)GEN_TOP(((int)this + 0x134))) != 0) {
        F_00aca0c0(((char *)REFP(0x10ea0e4)),*((undefined4 *)GEN_TOP(((int)this + 0x10c))),*((int *)GEN_TOP(((int)this + 0x134))));
      }
      if (*((int *)GEN_TOP(((int)this + 0x138))) != 0) {
        F_00aca0c0(((char *)REFP(0x10ea0f0)),*((undefined4 *)GEN_TOP(((int)this + 0x110))),*((int *)GEN_TOP(((int)this + 0x138))));
      }
      if (*((int *)GEN_TOP(((int)this + 0x13c))) != 0) {
        F_00aca0c0(((char *)REFP(0x10ea0fc)),*((undefined4 *)GEN_TOP(((int)this + 0x114))),*((int *)GEN_TOP(((int)this + 0x13c))));
      }
      if (*((int *)GEN_TOP(((int)this + 0x140))) != 0) {
        F_00aca0c0(((char *)REFP(0x10ea108)),*((undefined4 *)GEN_TOP(((int)this + 0x118))),*((int *)GEN_TOP(((int)this + 0x140))));
      }
      if (*((int *)GEN_TOP(((int)this + 0x144))) != 0) {
        F_00aca0c0(((char *)REFP(0x10ea114)),*((undefined4 *)GEN_TOP(((int)this + 0x11c))),*((int *)GEN_TOP(((int)this + 0x144))));
      }
      if (*((int *)GEN_TOP(((int)this + 0x148))) != 0) {
        F_00aca0c0(((char *)REFP(0x10ea120)),*((undefined4 *)GEN_TOP(((int)this + 0x120))),*((int *)GEN_TOP(((int)this + 0x148))));
      }
      if (param_1[1] != '\0') {
        F_00ace360();
      }
      param_1[1] = '\x01';
      param_1[4] = '\x04';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[0x28] = '\0';
      param_1[0x29] = '\0';
      param_1[0x2a] = '\0';
      param_1[0x2b] = '\0';
      return 1;
    }
    F_0042c880(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_ARG);
    F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
    F_0042c880(this GEN_EDX_ARG);
    F_00406ad0(this);
  }
  return 0;
}

/* ref: FUN_00acb660 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acb660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xacb660u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  byte bVar1;
  
  bVar1 = F_00acb3c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,(undefined1)param_7);
  if (bVar1 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x180))) = *param_5;
    *((undefined4 *)GEN_TOP(((int)this + 0x184))) = param_5[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x188))) = param_5[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = param_5[3];
    *((undefined4 *)GEN_TOP(((int)this + 400))) = param_6;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acb6d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acb6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacb6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x14c,0,0)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_0042b630(this_00 GEN_EDX_ARG);
    F_0042b630((int)this_00 + 0x54 GEN_EDX_ARG);
    F_0042b630((int)this_00 + 0xa8 GEN_EDX_ARG);
    F_00c472af(&REFG(undefined, 0x14c0138),0x104,((char *)REFP(0x10ea128)),(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
    *(undefined4 *)&REFG(undefined, 0x14c0744) = 10;
    if (((*((char *)GEN_TOP(((int)this + 1))) == '\0') && (*((char *)GEN_TOP(((int)this + 2))) != '\0')) &&
       (*(char *)this == '\0')) {
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 4;
      F_00accbd0(&REFG(undefined, 0x14c0138),10);
      *((undefined1 *)GEN_TOP(((int)this + 1))) = 1;
      F_00ace7a0(this_00 GEN_EDX_ARG,this);
      uVar1 = *((undefined4 *)GEN_TOP(((int)this_00 + 0xfc)));
      uVar2 = *((undefined4 *)GEN_TOP(((int)this_00 + 0x124)));
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,((char *)REFP(0x10ea13c)));
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *((undefined4 *)GEN_TOP(((int)this_00 + 0x100)));
      uVar2 = *((undefined4 *)GEN_TOP(((int)this_00 + 0x128)));
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,((char *)REFP(0x10ea148)));
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *((undefined4 *)GEN_TOP(((int)this_00 + 0x104)));
      uVar2 = *((undefined4 *)GEN_TOP(((int)this_00 + 300)));
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,((char *)REFP(0x10ea158)));
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *((undefined4 *)GEN_TOP(((int)this_00 + 0x108)));
      uVar2 = *((undefined4 *)GEN_TOP(((int)this_00 + 0x130)));
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,((char *)REFP(0x10ea168)));
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *((undefined4 *)GEN_TOP(((int)this_00 + 0x10c)));
      uVar2 = *((undefined4 *)GEN_TOP(((int)this_00 + 0x134)));
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,((char *)REFP(0x10ea174)));
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *((undefined4 *)GEN_TOP(((int)this_00 + 0x110)));
      uVar2 = *((undefined4 *)GEN_TOP(((int)this_00 + 0x138)));
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,((char *)REFP(0x10ea180)));
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *((undefined4 *)GEN_TOP(((int)this_00 + 0x114)));
      uVar2 = *((undefined4 *)GEN_TOP(((int)this_00 + 0x13c)));
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,((char *)REFP(0x10ea18c)));
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *((undefined4 *)GEN_TOP(((int)this_00 + 0x118)));
      uVar2 = *((undefined4 *)GEN_TOP(((int)this_00 + 0x140)));
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,((char *)REFP(0x10ea198)));
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *((undefined4 *)GEN_TOP(((int)this_00 + 0x11c)));
      uVar2 = *((undefined4 *)GEN_TOP(((int)this_00 + 0x144)));
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,((char *)REFP(0x10ea1a4)));
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *((undefined4 *)GEN_TOP(((int)this_00 + 0x120)));
      uVar2 = *((undefined4 *)GEN_TOP(((int)this_00 + 0x148)));
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,((char *)REFP(0x10ea1b0)));
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      F_00acdae0(&(*(undefined4 *)&gen_args[0]));
      if (*((char *)GEN_TOP(((int)this + 1))) != '\0') {
        F_00ace4a0();
      }
      *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 1;
      *((undefined1 *)GEN_TOP(((int)this + 1))) = 1;
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 4;
      return 1;
    }
    F_0042c880(((undefined *)GEN_TOP(((int)this_00 + 0xa8))) GEN_EDX_ARG);
    F_0042c880(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_ARG);
    F_0042c880(this_00 GEN_EDX_ARG);
    F_00406ad0(this_00);
  }
  return 0;
}

/* ref: FUN_00acbaa0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acbaa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xacbaa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  byte bVar1;
  
  bVar1 = F_00acb6d0(this GEN_EDX_FWD,param_1,param_2);
  if (bVar1 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x180))) = *param_3;
    *((undefined4 *)GEN_TOP(((int)this + 0x184))) = param_3[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x188))) = param_3[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = param_3[3];
    *((undefined4 *)GEN_TOP(((int)this + 400))) = param_4;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acbb00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acbb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xacbb00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_FRAME_DECL_TOP(0xdc, 4, 4);
  byte bVar1;
  int * this_00;
  int iVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0xd4)) = this;
  if (-1 < *((int *)GEN_TOP(((int)this + 0x9660)))) {
    this_00 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 8))))(param_3 GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x9660))))));
    this_00[0x4d] = (uint)(param_2 == 0);
    if (param_2 == 0) {
      if (*this_00 == 0x2013ff14) {
        if (this_00[1] != 1) {
          this_00[0x4d] = 2;
          goto LAB_00acbbec;
        }
        uVar3 = F_00acc850(this_00 GEN_EDX_ARG);
        if (this_00[2] != uVar3) {
          this_00[0x4d] = 3;
          goto LAB_00acbbec;
        }
      }
      else {
        piVar4 = this_00;
        piVar5 = ((int *)(gen_frame + 0x0));
        for (iVar2 = 0x31; iVar2 != 0; iVar2 = iVar2 - 1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
        piVar4 = ((int *)(gen_frame + 0x0));
        piVar5 = this_00 + 4;
        for (iVar2 = 0x31; iVar2 != 0; iVar2 = iVar2 - 1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
        *this_00 = 0x2013ff14;
        this_00[1] = 1;
        this_00[2] = 0;
        this_00[3] = 0;
        this = (*(undefined * PTR32 *)(gen_frame + 0xd4));
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0x10))))(param_3 GEN_EDX_ARG);
      *((int *)GEN_TOP(((int)this + 0x9640))) = *((int *)GEN_TOP(((int)this + 0x9640))) + 1;
      if (param_4 == 1) {
        iVar2 = 3;
      }
      else {
        iVar2 = (param_4 == 3) + 1;
      }
      this_00[0x4e] = iVar2;
    }
  }
LAB_00acbbec: ;
  *((int *)GEN_TOP(((int)this + 0x9660))) = *((int *)GEN_TOP(((int)this + 0x9660))) + 1;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x9660)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0x14))))(param_3 GEN_EDX_ARG);
  if (iVar2 < (int)uVar3) {
    (*(undefined4 *)(gen_frame + 0xcc)) = 0;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 8))))(param_3 GEN_EDX_ARG,iVar2);
    bVar1 = F_00acaef0(param_1 GEN_EDX_ARG,param_4,*((undefined4 *)GEN_TOP(((int)this + 0x9660))),uVar3,0xd4);
    if (bVar1 != 0) {
      *((gen_code32 *)GEN_TOP(((int)param_1 + 0x18))) = ((code *)REFP(0xacc2f0));
      *((gen_code32 *)GEN_TOP(((int)param_1 + 0x10))) = ((code *)REFP(0xacd180));
      *((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x14))) = this;
      *((undefined4 *)GEN_TOP(((int)param_1 + 0x1c))) = 0;
      *((undefined4 *)GEN_TOP(((int)param_1 + 0x20))) = 0;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00acbc70 */
GEN_OWN GEN_FRAME uint F_00acbc70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xacbc70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined4 * in_ecx;
  uint uVar1;
  
  in_ecx = ((undefined4 *)GEN_TOP(F_00406b90(0x30,0,0)));
  if (in_ecx == ((undefined4 *)GEN_TOP(0x0))) {
    in_ecx = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_004a0020(in_ecx GEN_EDX_ARG);
    *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10ea2e8));
    in_ecx[10] = param_1;
  }
  uVar1 = F_004a0100(((undefined *)GEN_TOP((REFG(int, 0x137104c) + 0x11b0))) GEN_EDX_ARG,0,in_ecx);
  return uVar1;
}

/* ref: FUN_00acbcc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00acbcc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xacbcc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  F_00acd3c0(this GEN_EDX_FWD);
  F_00acd3c0(((undefined *)GEN_TOP(((int)this + 0x320c))) GEN_EDX_ARG);
  F_00acd3c0(((undefined *)GEN_TOP(((int)this + 0x6418))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x9624))) =
       (*(undefined * PTR32 (*)[11])REFP(0x10d8290));
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x9628)));
  *puVar1 = 0;
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x137)));
  *puVar1 = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar1)) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x962c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9630))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9634))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9638))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9668))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x966c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9670))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9674))) = 0;
  *((int *)GEN_TOP(((int)this + 0x9648))) = (int)this + 0x6418;
  *((int *)GEN_TOP(((int)this + 0x964c))) = (int)this + 0x320c;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x9650))) = ((undefined4 *)GEN_TOP(((int)this + 0x9624)));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x9644))) = this;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x9654))) = this;
  return (uint)this;
}

/* ref: FUN_00acbd70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acbd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xacbd70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x111fc, 4, 4);
  int * piVar1;
  byte bVar2;
  uint uVar3;
  char * _Str1;
  int iVar4;
  uint uVar5;
  uint uVar6;
  wchar_t * pwVar7;
  wchar_t * pwVar8;
  bool bVar9;
  ulonglong uVar10;
  undefined * PTR32 * _Str2;
  
  (*(uint *)(gen_frame + 0x111f4)) = 0xacbd7d;
  (*(uint *)(gen_frame + 0x111f4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  (*(undefined * PTR32 *)(gen_frame + 0x10058)) = this;
  uVar3 = F_004308f0(REFG(void * PTR32, 0x137104c) GEN_EDX_FWD);
  F_0042e170(((undefined1 *)(gen_frame + 0x10e14)) GEN_EDX_ARG,uVar3);
  F_0042a3a0(((wchar_t *)(gen_frame + 0x10a78)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10e14)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x10e14)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0x10e14)) GEN_EDX_ARG);
  F_0042e170(((undefined1 *)(gen_frame + 0x10dc0)) GEN_EDX_ARG,((wchar_t *)(gen_frame + 0x10a78)));
  F_004fecf0(((undefined1 *)(gen_frame + 0x10e14)),((undefined1 *)(gen_frame + 0x10dc0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10dc0)) GEN_EDX_ARG);
  F_0042a3a0(((wchar_t *)(gen_frame + 0x10870)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10e14)),1);
  F_00c4a8e0(((wchar_t *)(gen_frame + 0x10a78)),0x104,((wchar_t *)(gen_frame + 0x10870)));
  F_00429fa0();
  F_0042c880(((undefined1 *)(gen_frame + 0x10e14)) GEN_EDX_ARG);
  F_0042a2a0(((wchar_t *)(gen_frame + 0x10a78)) GEN_EDX_ARG,((char *)REFP(0x10ea1cc)));
  F_004f88e0(((undefined1 *)(gen_frame + 0x10000)) GEN_EDX_ARG);
  uVar3 = F_004f9fa0(((undefined1 *)(gen_frame + 0x10000)) GEN_EDX_ARG,((wchar_t *)(gen_frame + 0x10a78)),&(*(undefined4 *)(gen_frame + 0x1005c)),&(*(char *)(gen_frame + 0x10063)));
  do {
    if (uVar3 != 1) {
      F_004f8eb0(((undefined1 *)(gen_frame + 0x10000)) GEN_EDX_ARG);
      uVar3 = F_004f9ed0(((undefined1 *)(gen_frame + 0x10000)) GEN_EDX_ARG);
      F_00429fa0();
      return uVar3;
    }
    if ((*(char *)(gen_frame + 0x10063)) == '\0') {
      F_0042e170(((undefined1 *)(gen_frame + 0x10e14)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1005c)));
      F_0042a3a0(((undefined1 *)(gen_frame + 0x10668)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10e14)),1);
      F_0042c880(((undefined1 *)(gen_frame + 0x10e14)) GEN_EDX_ARG);
      F_0042b630(((undefined1 *)(gen_frame + 0x10e14)) GEN_EDX_ARG);
      F_0042e170(((undefined1 *)(gen_frame + 0x10dc0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10668)));
      F_004feba0(((undefined1 *)(gen_frame + 0x10e14)),((undefined1 *)(gen_frame + 0x10dc0)));
      F_0042c880(((undefined1 *)(gen_frame + 0x10dc0)) GEN_EDX_ARG);
      _Str2 = (*(undefined * PTR32 (*)[1])REFP(0x10ea1ec));
      _Str1 = ((char *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0x10e14)) GEN_EDX_ARG)));
      iVar4 = F_00c4c468(_Str1,(char *)_Str2);
      F_0042c880(((undefined1 *)(gen_frame + 0x10e14)) GEN_EDX_ARG);
      if (iVar4 == 0) {
        (*(int *)(gen_frame + 0x10054)) = 0;
        F_0042b630(((undefined1 *)(gen_frame + 0x10e14)) GEN_EDX_ARG);
        F_0042e170(((undefined1 *)(gen_frame + 0x10dc0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10668)));
        F_004ff130(((undefined1 *)(gen_frame + 0x10e14)),((undefined1 *)(gen_frame + 0x10dc0)),0);
        F_0042c880(((undefined1 *)(gen_frame + 0x10dc0)) GEN_EDX_ARG);
        uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x10e14)) GEN_EDX_ARG);
        uVar5 = F_0042b790(((undefined1 *)(gen_frame + 0x10e14)) GEN_EDX_ARG);
        bVar9 = true;
        if (uVar5 == 8) {
          uVar6 = 0;
          do {
            if (!bVar9) goto LAB_00acbfd7;
            if (*((char *)GEN_TOP((uVar6 + uVar3))) != '0') {
              bVar9 = false;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < 7);
          if (bVar9) {
            if (7 < (byte)(*((char *)GEN_TOP((uVar3 + 7))) - 0x30U)) goto LAB_00acbfd5;
            (*(int *)(gen_frame + 0x10054)) = *((char *)GEN_TOP((uVar3 + 7))) - 0x30;
          }
        }
        else {
LAB_00acbfd5: ;
          bVar9 = false;
        }
LAB_00acbfd7: ;
        ((char *)(gen_frame + 0x11070))[0] = '\0';
        if (bVar9) {
LAB_00acc032: ;
          pwVar7 = ((wchar_t *)(gen_frame + 0x10a78));
          pwVar8 = ((wchar_t *)(gen_frame + 0x10870));
          for (iVar4 = 0x82; iVar4 != 0; iVar4 = iVar4 - 1) {
            *(undefined4 *)pwVar8 = *(undefined4 *)pwVar7;
            pwVar7 = pwVar7 + 2;
            pwVar8 = pwVar8 + 2;
          }
          F_0042a020(((wchar_t *)(gen_frame + 0x10870)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10668)));
          F_004f88e0(((undefined1 *)(gen_frame + 0x10020)) GEN_EDX_ARG);
          uVar3 = F_004f8900(((undefined1 *)(gen_frame + 0x10020)) GEN_EDX_ARG,((wchar_t *)(gen_frame + 0x10870)),0);
          if (uVar3 == 1) {
            uVar10 = F_004f7900(((undefined1 *)(gen_frame + 0x10020)) GEN_EDX_ARG);
            iVar4 = (int)uVar10;
            uVar3 = F_00406bb0(iVar4,0,0);
            (*(uint *)(gen_frame + 0x1004c)) = uVar3;
            uVar5 = F_004f77b0(((undefined1 *)(gen_frame + 0x10020)) GEN_EDX_ARG,uVar3,iVar4,0);
            if (uVar5 == 1) {
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10050)) = (*(undefined * PTR32 (*)[3])REFP(0x1090b70));
              uVar5 = F_00406bb0(iVar4 + 1,0,0);
              uVar3 = F_00407d50((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10050)) GEN_EDX_ARG,uVar3,iVar4,uVar5,iVar4);
              *((undefined1 *)GEN_TOP((uVar3 + uVar5))) = 0;
              F_00acac40(iVar4,((undefined1 *)(gen_frame + 0x10064)),uVar5);
              uVar3 = 0;
              do {
                F_00c472af(((undefined1 *)(gen_frame + 0x11174)),0x80,((char *)REFP(0x10ea2b8)),
                           *((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10ea304) + uVar3))));
                uVar6 = F_00aca620(((undefined1 *)(gen_frame + 0x10064)),((undefined1 *)(gen_frame + 0x11174)));
                piVar1 = ((int *)GEN_TOP(((int)&REFG(undefined4, 0x10ea300) + uVar3)));
                uVar3 = uVar3 + 8;
                ((uint *)(gen_frame + 0x10dcc))[(int)(*piVar1)] = uVar6;
              } while (uVar3 < 0x90);
              uVar3 = F_00aca620(((undefined1 *)(gen_frame + 0x10064)),((char *)REFP(0x10ea2cc)));
              (*(undefined4 *)(gen_frame + 0x10db4)) = 1;
              (*(undefined4 *)(gen_frame + 0x10db8)) = 0;
              (*(undefined1 *)(gen_frame + 0x10dbc)) = (undefined1)(*(int *)(gen_frame + 0x10054));
              (*(undefined1 *)(gen_frame + 0x10cb0)) = 0;
              (*(undefined4 *)(gen_frame + 0x10cac)) = 0;
              (*(undefined1 *)(gen_frame + 0x10caa)) = 0;
              bVar9 = ((char *)(gen_frame + 0x11070))[0] == '\0';
              if (bVar9) {
                ((undefined1 *)(gen_frame + 0x10d54))[0] = 0;
                ((undefined1 *)(gen_frame + 0x10d74))[0] = 0;
                ((undefined1 *)(gen_frame + 0x10d94))[0] = 0;
              }
              else {
                F_00c49908(((undefined1 *)(gen_frame + 0x10d54)),0x20,((char *)(gen_frame + 0x11070)));
                F_00c49908(((undefined1 *)(gen_frame + 0x10d74)),0x20,((undefined1 *)(gen_frame + 0x10e68)));
                F_00c49908(((undefined1 *)(gen_frame + 0x10d94)),0x20,((undefined1 *)(gen_frame + 0x10f6c)));
              }
              uVar3 = F_00b894b0(((undefined1 *)(gen_frame + 0x10c90)),uVar3,((uint *)(gen_frame + 0x10dcc)));
              if (uVar3 == 0) {
                if (bVar9) {
                  F_00acf400(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10058)) + 0x9624))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10c80)));
                }
                else {
                  F_00acf1f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10058)) + 0x9628))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10c80)));
                }
              }
              F_00406b30(uVar5);
              uVar3 = (*(uint *)(gen_frame + 0x1004c));
            }
            F_00406b30(uVar3);
            F_004f8b30(((undefined1 *)(gen_frame + 0x10020)) GEN_EDX_ARG);
          }
          F_004f9ed0(((undefined1 *)(gen_frame + 0x10020)) GEN_EDX_ARG);
          F_00429fa0();
        }
        else {
          (*(uint *)(gen_frame + 0x10044)) = uVar5;
          (*(uint *)(gen_frame + 0x10040)) = uVar3;
          (*(undefined4 *)(gen_frame + 0x10048)) = 0;
          bVar2 = F_00aca5a0(&(*(uint *)(gen_frame + 0x10040)),((char *)(gen_frame + 0x11070)));
          if (((bVar2 != 0) && (bVar2 = F_00aca5a0(((undefined4)(uint)(this)),((undefined1 *)(gen_frame + 0x10f6c))), bVar2 != 0)) &&
             (bVar2 = F_00aca5a0(((undefined4)(uint)(this)),((undefined1 *)(gen_frame + 0x10e68))), bVar2 != 0)) goto LAB_00acc032;
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x10e14)) GEN_EDX_ARG);
      }
      F_00429fa0();
    }
    uVar3 = F_004f8db0(((undefined1 *)(gen_frame + 0x10000)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1005c)),&(*(char *)(gen_frame + 0x10063)));
  } while( true );
}

/* ref: FUN_00acc2f0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00acc2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xacc2f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x258, 8, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined4 uVar5;
  int iVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x250)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x254));
  uVar5 = 0;
  if (param_1 == 0) {
    iVar6 = *((int *)GEN_TOP((REFG(int, 0x137104c) + 0x18)));
  }
  else {
    uVar5 = *((undefined4 *)GEN_TOP((param_1 + 0x2c)));
    LOCK();
    uVar1 = REFG(undefined4, 0x14bee60);
    uVar1 = REFG(undefined4, 0x14bee60);
    uVar1 = REFG(undefined4, 0x14bee60);
    uVar2 = REFG(undefined4, 0x14bee60);
    REFG(undefined4, 0x14bee60) = uVar1;
    UNLOCK();
    *((undefined1 *)GEN_TOP((param_1 + 1))) = 0;
    iVar6 = param_1;
  }
  if (*((char *)GEN_TOP(((int)this + 0x9658))) != '\0') {
    uVar4 = F_00aca740(this GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x9664))) = uVar5;
    if (*((int *)GEN_TOP(((int)this + 0x966c))) == 0) {
      return uVar4;
    }
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x9668))))
                      (*((undefined4 *)GEN_TOP(((int)this + 0x966c))),(int)this + 0x9670,iVar6,
                       *((undefined4 *)GEN_TOP(((int)this + 0x9678))));
    *((undefined4 *)GEN_TOP(((int)this + 0x966c))) = 0;
    return uVar4;
  }
  if (*((char *)GEN_TOP((REFG(int, 0x137104c) + 8))) != '\0') {
    uVar4 = F_00aca740(this GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x9664))) = 0;
    if (*((int *)GEN_TOP(((int)this + 0x966c))) == 0) {
      return uVar4;
    }
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x9668))))
                      (*((undefined4 *)GEN_TOP(((int)this + 0x966c))),(int)this + 0x9670,iVar6,
                       *((undefined4 *)GEN_TOP(((int)this + 0x9678))));
    *((undefined4 *)GEN_TOP(((int)this + 0x966c))) = 0;
    return uVar4;
  }
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x965c)));
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
  case 1: ;
    F_009546c0(((undefined *)GEN_TOP(((int)this + 0x9628))) GEN_EDX_ARG);
    F_004f9bb0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)GEN_TOP(0x0));
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(gen_code32 *)(gen_frame + 0x44)) = ((code *)REFP(0xacbc70));
    (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0xacd160));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0xacbd70));
    uVar4 = F_004fc7b0(REFG(void * PTR32, 0x1375ae8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),&(*(gen_code32 *)(gen_frame + 0x0)),5);
    *((undefined4 *)GEN_TOP(((int)this + 0x965c))) = 3;
    *((undefined4 *)GEN_TOP(((int)this + 0x9660))) = 0xffffffff;
    return uVar4;
  case 2: ;
    goto switchD_00acc3fe_caseD_2;
  case 3: ;
    bVar3 = F_00acbb00(this GEN_EDX_ARG,iVar6,uVar5,(int)this + 0x320c,2);
    if (bVar3 != 0) {
      return CONCAT31(extraout_var,bVar3);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x965c))) = 2;
    *((undefined4 *)GEN_TOP(((int)this + 0x9660))) = 0xffffffff;
switchD_00acc3fe_caseD_2: ;
    bVar3 = F_00acbb00(this GEN_EDX_ARG,iVar6,uVar5,(int)this + 0x6418,3);
    uVar4 = CONCAT31(extraout_var_00,bVar3);
    if (bVar3 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x965c))) = 4;
      *((undefined4 *)GEN_TOP(((int)this + 0x9660))) = 0xffffffff;
switchD_00acc3fe_caseD_4: ;
      bVar3 = F_00acbb00(this GEN_EDX_ARG,iVar6,uVar5,this,1);
      uVar4 = CONCAT31(extraout_var_01,bVar3);
      if (bVar3 == 0) {
        F_00aca740(this GEN_EDX_ARG);
        *((undefined4 *)GEN_TOP(((int)this + 0x9664))) = 0;
        uVar4 = F_00acae00(this GEN_EDX_ARG,iVar6);
      }
    }
switchD_00acc3fe_default: ;
    return uVar4;
  case 4: ;
    goto switchD_00acc3fe_caseD_4;
  default: ;
    goto switchD_00acc3fe_default;
  }
}

/* ref: FUN_00acc540 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00acc540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xacc540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  F_00acc2f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_FWD,0,0);
  uVar1 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  return uVar1;
}

/* ref: FUN_00acc5d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acc5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xacc5d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 uVar1;
  int iVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x966c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x9658))) = 0;
  LOCK();
  uVar1 = REFG(undefined4, 0x14bee60);
  uVar1 = REFG(undefined4, 0x14bee60);
  uVar1 = REFG(undefined4, 0x14bee60);
  iVar2 = REFG(undefined4, 0x14bee60);
  REFG(undefined4, 0x14bee60) = uVar1;
  UNLOCK();
  if ((iVar2 == 0) && (*((int *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x137104c) + 0x18))) + 0x194))) == 0)) {
    *((undefined4 *)GEN_TOP(((int)this + 0x9640))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x965c))) = 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x9660))) = 0xffffffff;
    *((undefined4 *)GEN_TOP(((int)this + 0x9664))) = 1;
    F_00acc2f0(this GEN_EDX_FWD,0,0);
    *((undefined4 *)GEN_TOP(((int)this + 0x9668))) = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 0x966c))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x9670))) = param_1[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x9674))) = param_1[3];
    *((undefined4 *)GEN_TOP(((int)this + 0x9678))) = param_2;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acc670 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acc670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xacc670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  byte bVar1;
  undefined4 * this_01;
  uint uVar2;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x9658))) = 1;
  this_01 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x9654))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x9654))) GEN_EDX_FWD,param_1)))
  ;
  this_01[0x4d] = 1;
  this_01[1] = 1;
  this_01[0x4e] = 3;
  *this_01 = 0x2013ff14;
  this_01[2] = 0;
  this_01[3] = 0;
  uVar2 = F_00acc850(this_01 GEN_EDX_ARG);
  this_01[2] = uVar2;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x9654))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x9654))) GEN_EDX_ARG);
  this_00 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x18)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x9654))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x9654))) GEN_EDX_ARG,param_1);
  bVar1 = F_00acb150(this_00 GEN_EDX_ARG,1,param_1,uVar2,0xd4);
  if (bVar1 != 0) {
    *((gen_code32 *)GEN_TOP(((int)this_00 + 0x18))) = ((code *)REFP(0xacc2f0));
    *((gen_code32 *)GEN_TOP(((int)this_00 + 0x10))) = ((code *)REFP(0xacd180));
    *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x14))) = this;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x1c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x20))) = 0;
  }
  return bVar1;
}

/* ref: FUN_00acc730 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acc730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xacc730u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  
  bVar1 = F_00acc670(this GEN_EDX_FWD,param_1);
  if (bVar1 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x9668))) = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 0x966c))) = param_2[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x9670))) = param_2[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x9674))) = param_2[3];
    *((undefined4 *)GEN_TOP(((int)this + 0x9678))) = param_3;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acc7c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00acc7c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xacc7c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte * pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = uVar4 / 0x18;
      cVar2 = (char)uVar4;
      pbVar1 = ((byte *)GEN_TOP((uVar4 + param_1)));
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 ^ (uint)*pbVar1 << (cVar2 + (char)uVar3 * -0x18 & 0x1fU);
    } while (uVar4 < param_2);
  }
  return uVar5;
}

/* ref: FUN_00acc810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acc810(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xacc810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00acc850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acc850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xacc850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  byte * pbVar2;
  byte * pbVar3;
  uint local_8;
  
  local_8 = 0;
  pbVar2 = ((byte *)GEN_TOP(((int)this + 0x13)));
  do {
    cVar1 = (char)(pbVar2 + (-0x13 - (int)this));
    pbVar3 = pbVar2 + 4;
    local_8 = local_8 ^ (uint)pbVar2[-2] <<
                        (cVar1 + (char)((uint)(pbVar2 + (-0x12 - (int)this)) / 0x18) * -0x18 + 1U &
                        0x1f) ^ (uint)pbVar2[-1] <<
                                (cVar1 + (char)((uint)(pbVar2 + (-0x11 - (int)this)) / 0x18) * -0x18
                                 + 2U & 0x1f) ^
                        (uint)*pbVar2 <<
                        (cVar1 + (char)((uint)(pbVar2 + (-0x10 - (int)this)) / 0x18) * -0x18 + 3U &
                        0x1f) ^ (uint)pbVar2[-3] <<
                                (cVar1 + (char)((uint)(pbVar2 + (-0x13 - (int)this)) / 0x18) * -0x18
                                & 0x1fU);
    pbVar2 = pbVar3;
  } while (pbVar3 + (-0x13 - (int)this) < ((byte *)GEN_TOP(0xc4)));
  return local_8;
}

/* ref: FUN_00acc960 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00acc960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xacc960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(((undefined *)GEN_TOP(((int)this + 0x10))),0,0xc4);
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x114))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x134))) = 0;
  *(undefined4 *)this = 0x2013ff14;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x13c))) = 0xff;
  return (uint)pvVar1;
}

/* ref: FUN_00acc9e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acc9e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xacc9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x34))) = param_2;
  return param_2;
}

/* ref: FUN_00acc9f0 */
GEN_OWN GEN_FRAME unsigned int F_00acc9f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xacc9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if ((&REFG(undefined1, 0x14bee00))[(int)(param_1)] != '\0') {
    if ((&REFG(undefined4, 0x14bedc0))[(int)(param_1)] != 0) {
      F_00406b30((&REFG(undefined4, 0x14bedc0))[(int)(param_1)]);
      (&REFG(undefined4, 0x14bedc0))[(int)(param_1)] = 0;
    }
    (&REFG(undefined1, 0x14bee00))[(int)(param_1)] = 0;
  }
  (&REFG(undefined4, 0x14bed80))[(int)(param_1)] = 0;
  return;
}

/* ref: FUN_00acca30 */
GEN_OWN GEN_FRAME uint F_00acca30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xacca30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  if ((&REFG(undefined1, 0x14bee00))[(int)(param_1)] != '\0') {
    if ((&REFG(undefined4, 0x14bedc0))[(int)(param_1)] != 0) {
      F_00406b30((&REFG(undefined4, 0x14bedc0))[(int)(param_1)]);
      (&REFG(undefined4, 0x14bedc0))[(int)(param_1)] = 0;
    }
    (&REFG(undefined1, 0x14bee00))[(int)(param_1)] = 0;
  }
  piVar1 = &REFG(undefined4, 0x14bed80) + param_1;
  *piVar1 = 0;
  (&REFG(undefined4, 0x14bedc0))[(int)(param_1)] = param_2;
  if (param_2 == 0) {
    uVar2 = 0;
    if (param_3 != 0) {
      uVar2 = F_00406bb0(param_3 + 0xb,0,0);
      (&REFG(undefined4, 0x14bedc0))[(int)(param_1)] = uVar2;
      *((undefined1 *)GEN_TOP((uVar2 + param_3))) = 0;
      (&REFG(undefined1, 0x14bee00))[(int)(param_1)] = 1;
    }
    *piVar1 = param_3;
    return uVar2;
  }
  *piVar1 = param_3;
  return param_2;
}

/* ref: FUN_00accac0 */
GEN_OWN GEN_NOFRAME uint F_00accac0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xaccac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  _InterlockedExchange((volatile long *)(&REFG(undefined4, 0x14bee60)), (long)(0));
  *(undefined4 *)&REFG(undefined1, 0x14bee00) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bee04) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bee08) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bee0c) = 0;
  REFG(undefined4, 0x14bedc0) = 0;
  REFG(undefined4, 0x14bedc4) = 0;
  REFG(undefined4, 0x14bedc8) = 0;
  REFG(undefined4, 0x14bedcc) = 0;
  REFG(undefined4, 0x14bedd0) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedd4) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedd8) = 0;
  *(undefined4 *)&REFG(undefined, 0x14beddc) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bede0) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bede4) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bede8) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedec) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedf0) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedf4) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedf8) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedfc) = 0;
  return 0;
}

/* ref: FUN_00accb50 */
GEN_OWN GEN_FRAME uint F_00accb50(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xaccb50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  LOCK();
  uVar1 = REFG(undefined4, 0x14bee60);
  uVar1 = REFG(undefined4, 0x14bee60);
  uVar1 = REFG(undefined4, 0x14bee60);
  iVar2 = REFG(undefined4, 0x14bee60);
  REFG(undefined4, 0x14bee60) = uVar1;
  UNLOCK();
  if (iVar2 != 0) {
    return 1;
  }
  uVar3 = 0;
  do {
    if ((&REFG(undefined1, 0x14bee00))[(int)(uVar3)] != '\0') {
      if ((&REFG(undefined4, 0x14bedc0))[(int)(uVar3)] != 0) {
        F_00406b30((&REFG(undefined4, 0x14bedc0))[(int)(uVar3)]);
        (&REFG(undefined4, 0x14bedc0))[(int)(uVar3)] = 0;
      }
      (&REFG(undefined1, 0x14bee00))[(int)(uVar3)] = 0;
    }
    (&REFG(undefined4, 0x14bed80))[(int)(uVar3)] = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  puVar4 = param_1;
  puVar5 = &REFG(undefined4, 0x14be758);
  for (iVar2 = 0x18a; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  REFG(undefined4, 0x14be750) = 0;
  return 0;
}

/* ref: FUN_00accbd0 */
GEN_OWN GEN_FRAME uint F_00accbd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaccbd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  LOCK();
  uVar1 = REFG(undefined4, 0x14bee60);
  uVar1 = REFG(undefined4, 0x14bee60);
  uVar1 = REFG(undefined4, 0x14bee60);
  iVar2 = REFG(undefined4, 0x14bee60);
  REFG(undefined4, 0x14bee60) = uVar1;
  UNLOCK();
  if (iVar2 != 0) {
    return 1;
  }
  uVar3 = 0;
  do {
    if ((&REFG(undefined1, 0x14bee00))[(int)(uVar3)] != '\0') {
      if ((&REFG(undefined4, 0x14bedc0))[(int)(uVar3)] != 0) {
        F_00406b30((&REFG(undefined4, 0x14bedc0))[(int)(uVar3)]);
        (&REFG(undefined4, 0x14bedc0))[(int)(uVar3)] = 0;
      }
      (&REFG(undefined1, 0x14bee00))[(int)(uVar3)] = 0;
    }
    (&REFG(undefined4, 0x14bed80))[(int)(uVar3)] = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  F_00c49908(&REFG(undefined4, 0x14be758),0x104,param_1);
  REFG(undefined4, 0x14bed64) = param_2;
  REFG(undefined4, 0x14be750) = 0;
  return 0;
}

/* ref: FUN_00accc50 */
GEN_OWN GEN_FRAME uint F_00accc50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaccc50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,param_1);
  uVar1 = F_00acca30(REFG(int, 0x14be750),param_2,param_3);
  REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
  return uVar1;
}

/* ref: FUN_00accca0 */
GEN_OWN GEN_FRAME uint F_00accca0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xaccca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (&REFG(undefined4, 0x14bedc0))[(int)(param_1)];
}

/* ref: FUN_00acccb0 */
GEN_OWN GEN_FRAME uint F_00acccb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xacccb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (&REFG(undefined4, 0x14bed80))[(int)(param_1)];
}

/* ref: FUN_00acccc0 */
GEN_OWN GEN_FRAME unsigned int F_00acccc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(char param_7, unsigned int gen_a6), GEN_P(char param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xacccc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(char param_7 = (char)gen_a6;)
  GEN_PIN(char param_8 = (char)gen_a7;)
  undefined4 uVar1;
  
  if (param_7 == '\0') {
    REFG(int, 0x14bee10) = (-(uint)(param_8 != '\0') & 0xfffffffd) + 6;
  }
  else {
    REFG(int, 0x14bee10) = 0;
  }
  uVar1 = _InterlockedExchange((volatile long *)(&REFG(undefined4, 0x14bee60)), (long)(0));
  return;
}

/* ref: FUN_00accd00 */
GEN_OWN GEN_NOFRAME uint F_00accd00(void)
{
  GEN_ENTER(0xaccd00u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = _InterlockedExchange((volatile long *)(&REFG(undefined4, 0x14bee60)), (long)(0));
  return uVar1;
}

/* ref: FUN_00accd20 */
GEN_OWN GEN_FRAME uint F_00accd20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xaccd20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (&REFG(undefined4, 0x14bee18))[(int)(param_1)];
}

/* ref: FUN_00accd80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00accd80(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaccd80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0xa8 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_00accda0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00accda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaccda0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00accdc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00accdc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xaccdc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  *((int *)GEN_TOP(((int)this + param_1 * 4 + 0x108))) = param_2[5];
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x10))))(param_2 GEN_EDX_FWD);
  *((uint *)GEN_TOP(((int)this + param_1 * 4 + 0x130))) = uVar1 + 0x20;
  return uVar1 + 0x20;
}

/* ref: FUN_00accdf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00accdf0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xaccdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  uint uVar1;
  
  uVar1 = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x108 + param_2 * 4))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x130 + param_2 * 4))) = 0;
  if (((char)param_3[0xb] != '\0') || (param_4 != '\0')) {
    F_00447240(param_3 GEN_EDX_FWD,param_2);
    *((int *)GEN_TOP((param_1 + 0x108 + param_2 * 4))) = param_3[5];
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0x10))))(param_3 GEN_EDX_ARG);
    uVar1 = uVar1 + 0x20;
    *((uint *)GEN_TOP((param_1 + 0x130 + param_2 * 4))) = uVar1;
  }
  if (*((char *)GEN_TOP(((int)param_3 + 0x2d))) != '\0') {
    *((undefined1 *)GEN_TOP(((int)param_3 + 0x2d))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00acce80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acce80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xacce80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x108 + param_2 * 4)));
}

/* ref: FUN_00acced0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acced0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xacced0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x130 + param_2 * 4)));
}

/* ref: FUN_00accef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00accef0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaccef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0xa8))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_ARG);
  F_0042c880(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00accf30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00accf30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaccf30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10ea2e8));
  F_004a05c0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00accf70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00accf70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xaccf70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  uVar1 = param_1[3];
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  return uVar1;
}

/* ref: FUN_00accf90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00accf90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xaccf90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 8,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00accfe0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00accfe0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaccfe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x140,param_2,0x137);
  return uVar1;
}

/* ref: FUN_00acd030 */
GEN_OWN GEN_FRAME uint F_00acd030(GEN_P(code * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xacd030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(code * param_1 = (code *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = (*param_1)(param_3);
  return uVar1;
}

/* ref: FUN_00acd060 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00acd060(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xacd060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x137);
  return uVar1;
}

/* ref: FUN_00acd090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acd090(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xacd090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 8))) = *((int *)GEN_TOP((in_ecx + 8))) - param_2;
  return in_ecx;
}

/* ref: FUN_00acd0b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00acd0b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xacd0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0x137);
  return uVar1;
}

/* ref: FUN_00acd100 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00acd100(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xacd100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00acd120 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00acd120(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xacd120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00acd140 */
GEN_OWN GEN_FRAME uint F_00acd140(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xacd140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00acd160 */
GEN_OWN GEN_FRAME uint F_00acd160(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xacd160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_1,param_3);
  return uVar1;
}

/* ref: FUN_00acd180 */
GEN_OWN GEN_FRAME uint F_00acd180(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xacd180u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00acd1a0 */
GEN_OWN GEN_FRAME uint F_00acd1a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xacd1a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00acd1b0 */
GEN_OWN GEN_FRAME uint F_00acd1b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xacd1b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00acd1c0 */
GEN_OWN GEN_FRAME byte F_00acd1c0(void)
{
  GEN_ENTER(0xacd1c0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00acd1f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acd1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xacd1f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  return (uint)this;
}

/* ref: FUN_00acd230 */
GEN_OWN GEN_FRAME uint F_00acd230(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xacd230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) + param_2;
  return param_1;
}

/* ref: FUN_00acd240 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acd240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xacd240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) == *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_00acd260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acd260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xacd260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_00acd280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acd280(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xacd280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) + param_2;
  return in_ecx;
}

/* ref: FUN_00acd290 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00acd290(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xacd290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00acd2d0 */
GEN_OWN GEN_FRAME uint F_00acd2d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xacd2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00acd2e0 */
GEN_OWN GEN_FRAME uint F_00acd2e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xacd2e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00acd2f0 */
GEN_OWN GEN_FRAME uint F_00acd2f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xacd2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00acd320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acd320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xacd320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[2];
  uVar1 = param_1[3];
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_2;
  return uVar1;
}

/* ref: FUN_00acd350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acd350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xacd350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x180))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x188))) = param_1[2];
  uVar1 = param_1[3];
  *((uint *)GEN_TOP(((int)this + 0x18c))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 400))) = param_2;
  return uVar1;
}

/* ref: FUN_00acd3c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acd3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xacd3c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x10c3ea0));
  *((undefined4 *)GEN_TOP(((int)this + 0x3208))) = 0;
  uVar1 = 0;
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 8)));
  do {
    F_00c48350(puVar2 + 3,0,0xc4);
    puVar2[-1] = 0x2013ff14;
    *puVar2 = 1;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined1 *)(puVar2 + 0x34) = 0;
    *(undefined1 *)(puVar2 + 0x3c) = 0;
    *(undefined1 *)(puVar2 + 0x44) = 0;
    puVar2[0x4c] = 0;
    *(undefined1 *)(puVar2 + 0x4e) = 0xff;
    *(char *)(puVar2 + 0x4e) = (char)uVar1;
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 0x50;
  } while (uVar1 < 0x28);
  *((undefined4 *)GEN_TOP(((int)this + 0x3204))) = 0;
  return (uint)this;
}

/* ref: FUN_00acd450 */
GEN_OWN GEN_NOFRAME uint F_00acd450(void)
{
  GEN_ENTER(0xacd450u, 0u, 0u, 0u, 0u);
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  LOCK();
  uVar1 = REFG(undefined4, 0x14bee60);
  uVar1 = REFG(undefined4, 0x14bee60);
  uVar1 = REFG(undefined4, 0x14bee60);
  iVar2 = REFG(undefined4, 0x14bee60);
  REFG(undefined4, 0x14bee60) = uVar1;
  UNLOCK();
  if (iVar2 == 0) {
    uVar3 = 0;
    do {
      if ((&REFG(undefined1, 0x14bee00))[(int)(uVar3)] != '\0') {
        if ((&REFG(undefined4, 0x14bedc0))[(int)(uVar3)] != 0) {
          F_00406b30((&REFG(undefined4, 0x14bedc0))[(int)(uVar3)]);
          (&REFG(undefined4, 0x14bedc0))[(int)(uVar3)] = 0;
        }
        (&REFG(undefined1, 0x14bee00))[(int)(uVar3)] = 0;
      }
      (&REFG(undefined4, 0x14bed80))[(int)(uVar3)] = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x10);
    return 0;
  }
  return 1;
}

/* ref: FUN_00acd4b0 */
GEN_OWN_GS GEN_FRAME uint F_00acd4b0(void)
{
  GEN_ENTER(0xacd4b0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_GS(0x494, 12, 4);
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x490));
  uVar1 = F_004308f0(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG);
  F_0042e170(((undefined1 *)(gen_frame + 0x438)) GEN_EDX_ARG,uVar1);
  F_0042a3a0(((undefined4 *)(gen_frame + 0x230)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x438)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x438)) GEN_EDX_ARG);
  F_0042a2a0(((undefined4 *)(gen_frame + 0x230)) GEN_EDX_ARG,&REFG(undefined4, 0x14be758));
  F_004f88e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar1 = F_004f7d10(((undefined4 *)(gen_frame + 0x230)),0);
  if (uVar1 != 1) {
    REFG(undefined4, 0x14bee10) = 6;
    if (REFG(undefined4, 0x14be750) != 0) {
      puVar4 = &REFG(undefined4, 0x14bee18);
      for (uVar1 = REFG(undefined4, 0x14be750); uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = 6;
        puVar4 = puVar4 + 1;
      }
    }
    uVar1 = F_004f9ed0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00429fa0();
    return uVar1;
  }
  uVar1 = 0;
  (*(char *)(gen_frame + 0x27)) = '\0';
  if (REFG(undefined4, 0x14be750) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x20)) = &REFG(undefined, 0x14bd710);
    do {
      puVar4 = ((undefined4 *)(gen_frame + 0x230));
      puVar5 = ((undefined4 *)(gen_frame + 0x28));
      for (iVar3 = 0x82; iVar3 != 0; iVar3 = iVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      F_0042a2a0(((undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x20)));
      uVar2 = F_004f8900(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x28)),1);
      if (uVar2 == 1) {
        (&REFG(undefined4, 0x14bee18))[(int)(uVar1)] = 0;
        uVar2 = F_004f7840(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(&REFG(undefined4, 0x14bedc0))[(int)(uVar1)],(&REFG(undefined4, 0x14bed80))[(int)(uVar1)],0);
        if (uVar2 != 1) {
          REFG(undefined4, 0x14bee10) = 6;
          (&REFG(undefined4, 0x14bee18))[(int)(uVar1)] = 6;
        }
        F_004f8b30(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      else {
        (*(char *)(gen_frame + 0x27)) = '\x01';
        REFG(undefined4, 0x14bee10) = 6;
        (&REFG(undefined4, 0x14bee18))[(int)(uVar1)] = 6;
      }
      F_00429fa0();
      (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x104;
      uVar1 = uVar1 + 1;
    } while (uVar1 < REFG(undefined4, 0x14be750));
    REFG(undefined4, 0x14bee10) = 6;
    if ((*(char *)(gen_frame + 0x27)) != '\0') goto LAB_00acd671;
  }
  REFG(undefined4, 0x14bee10) = 0;
LAB_00acd671: ;
  uVar1 = F_004f9ed0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429fa0();
  return uVar1;
}

/* ref: FUN_00acd6a0 */
GEN_OWN_GS GEN_FRAME uint F_00acd6a0(void)
{
  GEN_ENTER(0xacd6a0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_GS(0x494, 12, 4);
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  ulonglong uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x490));
  uVar2 = F_004308f0(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG);
  F_0042e170(((undefined1 *)(gen_frame + 0x438)) GEN_EDX_ARG,uVar2);
  F_0042a3a0(((undefined4 *)(gen_frame + 0x230)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x438)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x438)) GEN_EDX_ARG);
  F_0042a2a0(((undefined4 *)(gen_frame + 0x230)) GEN_EDX_ARG,&REFG(undefined4, 0x14be758));
  F_004f88e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = 0;
  (*(char *)(gen_frame + 0x27)) = '\0';
  (*(char *)(gen_frame + 0x26)) = '\0';
  if (REFG(undefined4, 0x14be750) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x20)) = &REFG(undefined, 0x14bd710);
    do {
      puVar5 = ((undefined4 *)(gen_frame + 0x230));
      puVar6 = ((undefined4 *)(gen_frame + 0x28));
      for (iVar4 = 0x82; iVar4 != 0; iVar4 = iVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      F_0042a2a0(((undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x20)));
      uVar3 = F_004f8900(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x28)),0);
      if (uVar3 == 1) {
        if ((&REFG(undefined4, 0x14bedc0))[(int)(uVar2)] == 0) {
          iVar4 = (&REFG(undefined4, 0x14bed80))[(int)(uVar2)];
          if (iVar4 == 0) {
            uVar7 = F_004f7900(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            iVar4 = (int)uVar7;
          }
          cVar1 = (&REFG(undefined1, 0x14bee00))[(int)(uVar2)];
          (&REFG(undefined4, 0x14bed80))[(int)(uVar2)] = iVar4;
          if (cVar1 != '\0') {
            if ((&REFG(undefined4, 0x14bedc0))[(int)(uVar2)] != 0) {
              F_00406b30((&REFG(undefined4, 0x14bedc0))[(int)(uVar2)]);
              (&REFG(undefined4, 0x14bedc0))[(int)(uVar2)] = 0;
            }
            (&REFG(undefined1, 0x14bee00))[(int)(uVar2)] = 0;
          }
          (&REFG(undefined4, 0x14bed80))[(int)(uVar2)] = 0;
          (&REFG(undefined4, 0x14bedc0))[(int)(uVar2)] = 0;
          if (iVar4 != 0) {
            uVar3 = F_00406bb0(iVar4 + 0xb,0,0);
            (&REFG(undefined4, 0x14bedc0))[(int)(uVar2)] = uVar3;
            *((undefined1 *)GEN_TOP((uVar3 + iVar4))) = 0;
            (&REFG(undefined1, 0x14bee00))[(int)(uVar2)] = 1;
          }
          (&REFG(undefined4, 0x14bed80))[(int)(uVar2)] = iVar4;
        }
        if ((&REFG(undefined4, 0x14bed80))[(int)(uVar2)] == 0) {
          uVar3 = 2;
        }
        else {
          uVar3 = F_004f77b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(&REFG(undefined4, 0x14bedc0))[(int)(uVar2)],(&REFG(undefined4, 0x14bed80))[(int)(uVar2)],0);
        }
        F_004f8b30(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        (&REFG(undefined4, 0x14bee18))[(int)(uVar2)] = 0;
        if (uVar3 != 1) {
          REFG(undefined4, 0x14bee10) = 4;
          (*(char *)(gen_frame + 0x27)) = '\x01';
          goto LAB_00acd851;
        }
      }
      else {
        REFG(undefined4, 0x14bee10) = 3;
        (*(char *)(gen_frame + 0x26)) = '\x01';
LAB_00acd851: ;
        (&REFG(undefined4, 0x14bee18))[(int)(uVar2)] = REFG(undefined4, 0x14bee10);
      }
      F_00429fa0();
      (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x104;
      uVar2 = uVar2 + 1;
    } while (uVar2 < REFG(undefined4, 0x14be750));
  }
  REFG(undefined4, 0x14bee10) = 0;
  if ((*(char *)(gen_frame + 0x27)) == '\0') {
    if ((*(char *)(gen_frame + 0x26)) != '\0') {
      REFG(undefined4, 0x14bee10) = 3;
    }
  }
  else {
    REFG(undefined4, 0x14bee10) = 4;
  }
  uVar2 = F_004f9ed0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00429fa0();
  return uVar2;
}

/* ref: FUN_00acd8e0 */
GEN_OWN_GS GEN_FRAME uint F_00acd8e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xacd8e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x248, 8, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x240)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x244));
  F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_004f84e0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  (*(undefined4 *)(gen_frame + 0x0)) = param_3;
  (*(undefined4 *)(gen_frame + 0x18)) = param_2;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(gen_code32 *)(gen_frame + 0x34)) = ((code *)REFP(0xacccc0));
  F_004fc510(REFG(void * PTR32, 0x1375ae8) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = _InterlockedExchange((volatile long *)(&REFG(undefined4, 0x14bee60)), (long)(1));
  return uVar1;
}

/* ref: FUN_00acd970 */
GEN_OWN GEN_FRAME uint F_00acd970(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xacd970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  LOCK();
  uVar1 = REFG(undefined4, 0x14bee60);
  uVar1 = REFG(undefined4, 0x14bee60);
  uVar1 = REFG(undefined4, 0x14bee60);
  iVar2 = REFG(undefined4, 0x14bee60);
  REFG(undefined4, 0x14bee60) = uVar1;
  UNLOCK();
  if (iVar2 == 0) {
    if ((*(uint *)&REFG(undefined, 0x14beebc) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14beebc) = *(uint *)&REFG(undefined, 0x14beebc) | 1;
      F_0042b630(&REFG(undefined, 0x14bee68) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c720)));
    }
    F_0041f130(param_1 GEN_EDX_ARG,&REFG(undefined, 0x14bee68));
    iVar2 = REFG(int, 0x137104c);
    uVar3 = F_0042a970(&REFG(undefined, 0x14bee68) GEN_EDX_ARG);
    iVar4 = uVar3 + 1;
    uVar3 = F_0042a990(&REFG(undefined, 0x14bee68) GEN_EDX_ARG);
    F_00acd8e0(iVar2 + 0x24,uVar3,iVar4);
    return 0;
  }
  return 1;
}

/* ref: FUN_00acd9f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00acd9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xacd9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  uVar3 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x40))))(piVar1 GEN_EDX_ARG)));
    F_0043c630(pvVar2 GEN_EDX_ARG);
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG)));
    F_0043c630(pvVar2 GEN_EDX_ARG);
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x30))))(piVar1 GEN_EDX_ARG)));
    F_0043c630(pvVar2 GEN_EDX_ARG);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_ARG);
    F_0043c630(((undefined *)GEN_TOP((uVar3 + 0x850))) GEN_EDX_ARG);
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x58))))(piVar1 GEN_EDX_ARG)));
    F_0043c630(pvVar2 GEN_EDX_ARG);
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))(piVar1 GEN_EDX_ARG)));
    F_0043c630(pvVar2 GEN_EDX_ARG);
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x38))))(piVar1 GEN_EDX_ARG)));
    uVar3 = F_0043c630(pvVar2 GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x130))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x134))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x110))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x114))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x13c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x118))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x140))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x11c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x144))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x120))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x148))) = 0;
  return uVar3;
}

/* ref: FUN_00acdae0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00acdae0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xacdae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar3 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x40))))(piVar1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG,*param_1,param_1[1]);
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG,*param_1,param_1[1]);
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x30))))(piVar1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG,*param_1,param_1[1]);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x850))) + 0x1c))))(((int *)GEN_TOP((uVar3 + 0x850))) GEN_EDX_ARG,*param_1,param_1[1]);
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x58))))(piVar1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG,*param_1,param_1[1]);
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))(piVar1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG,*param_1,param_1[1]);
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x38))))(piVar1 GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,*param_1,param_1[1]);
  }
  return uVar3;
}

/* ref: FUN_00acdbc0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00acdbc0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xacdbc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar3 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar4 = param_1;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x40))))(piVar1 GEN_EDX_ARG)));
    F_00447310(pvVar2 GEN_EDX_ARG,uVar4);
    uVar4 = param_1;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG)));
    F_00447310(pvVar2 GEN_EDX_ARG,uVar4);
    uVar4 = param_1;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x30))))(piVar1 GEN_EDX_ARG)));
    F_00447310(pvVar2 GEN_EDX_ARG,uVar4);
    uVar4 = param_1;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_ARG);
    F_00447310(((undefined *)GEN_TOP((uVar3 + 0x850))) GEN_EDX_ARG,uVar4);
    uVar4 = param_1;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x58))))(piVar1 GEN_EDX_ARG)));
    F_00447310(pvVar2 GEN_EDX_ARG,uVar4);
    uVar4 = param_1;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))(piVar1 GEN_EDX_ARG)));
    F_00447310(pvVar2 GEN_EDX_ARG,uVar4);
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x38))))(piVar1 GEN_EDX_ARG)));
    uVar3 = F_00447310(pvVar2 GEN_EDX_ARG,param_1);
  }
  return uVar3;
}

/* ref: FUN_00acdc60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acdc60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xacdc60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  F_00acd9f0(this GEN_EDX_FWD);
  LOCK();
  uVar1 = REFG(undefined4, 0x14bee60);
  uVar1 = REFG(undefined4, 0x14bee60);
  uVar1 = REFG(undefined4, 0x14bee60);
  uVar2 = REFG(undefined4, 0x14bee60);
  REFG(undefined4, 0x14bee60) = uVar1;
  UNLOCK();
  *((undefined1 *)GEN_TOP((param_1 + 1))) = 0;
  uVar3 = param_1;
  if (*((int *)GEN_TOP((param_1 + 0x184))) != 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((param_1 + 0x180))))
                      (*((undefined4 *)GEN_TOP((param_1 + 0x184))),param_1 + 0x188,param_1,
                       *((undefined4 *)GEN_TOP((param_1 + 400))));
  }
  if (this != ((undefined *)GEN_TOP(0x0))) {
    F_0042c880(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_ARG);
    F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
    F_0042c880(this GEN_EDX_ARG);
    uVar3 = F_00406ad0(this);
  }
  return uVar3;
}

/* ref: FUN_00acdce0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00acdce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xacdce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x6c, 4, 4);
  int iVar1;
  ushort * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined * pvVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 * puVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x68));
  iVar1 = *((int *)GEN_TOP((param_1 + 0x2c)));
  if (iVar1 == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = REFG(undefined4, 0x14bedc0);
    *((undefined4 *)GEN_TOP(((int)this + 0x100))) = REFG(undefined4, 0x14bedc4);
    *((undefined4 *)GEN_TOP(((int)this + 0x104))) = REFG(undefined4, 0x14bedc8);
    piVar6 = ((int *)GEN_TOP(((int)this + 0x108)));
    uVar9 = 0;
    do {
      if (*piVar6 != 0) {
        uVar7 = *((uint *)GEN_TOP(((int)&REFG(undefined4, 0x14bed8c) + uVar9)));
        if ((uint)piVar6[10] < *((uint *)GEN_TOP(((int)&REFG(undefined4, 0x14bed8c) + uVar9)))) {
          uVar7 = piVar6[10];
        }
        if ((*((int *)GEN_TOP(((int)&REFG(undefined4, 0x14bedcc) + uVar9))) != 0) && (uVar7 != 0)) {
          F_00c46aa0(*piVar6,*((int *)GEN_TOP(((int)&REFG(undefined4, 0x14bedcc) + uVar9))),uVar7);
        }
      }
      uVar9 = uVar9 + 4;
      piVar6 = piVar6 + 1;
    } while (uVar9 < 0x1c);
    iVar1 = *((int *)GEN_TOP((REFG(int, 0x137104c) + 0x10)));
    F_0042b630(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    F_0042e430(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xfc))));
    F_00420340(((undefined *)GEN_TOP((iVar1 + 0xb0))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    F_0042e430(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x100))));
    puVar10 = ((undefined1 *)(gen_frame + 0x8));
    pvVar5 = ((undefined *)GEN_TOP(F_00414010(iVar1 GEN_EDX_ARG,0)));
    F_00420340(pvVar5 GEN_EDX_ARG,puVar10);
    F_0042e430(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x104))));
    puVar10 = ((undefined1 *)(gen_frame + 0x8));
    pvVar5 = ((undefined *)GEN_TOP(F_00414010(iVar1 GEN_EDX_ARG,1)));
    F_00420340(pvVar5 GEN_EDX_ARG,puVar10);
    F_00acdbc0(1);
  }
  else {
    if ((iVar1 != 3) && (iVar1 != 4)) goto LAB_00ace080;
    piVar6 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x40))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = REFG(undefined4, 0x14bedc0);
    *((undefined4 *)GEN_TOP(((int)this + 0x100))) = REFG(undefined4, 0x14bedc4);
    *((undefined4 *)GEN_TOP(((int)this + 0x104))) = REFG(undefined4, 0x14bedc8);
    (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(((int)this + 0x108)));
    ((char *)(gen_frame + 0x5c))[0] = '\0';
    ((char *)(gen_frame + 0x5c))[1] = '\0';
    ((char *)(gen_frame + 0x5c))[2] = '\0';
    ((char *)(gen_frame + 0x5c))[3] = '\0';
    ((char *)(gen_frame + 0x5c))[4] = '\0';
    ((char *)(gen_frame + 0x5c))[5] = '\0';
    ((char *)(gen_frame + 0x5c))[6] = '\0';
    (*(uint *)(gen_frame + 0x0)) = 0;
    do {
      if (*(*(int * PTR32 *)(gen_frame + 0x4)) != 0) {
        puVar2 = ((ushort *)GEN_TOP((&REFG(undefined4, 0x14bedcc))[(int)((*(uint *)(gen_frame + 0x0)))]));
        iVar1 = (&REFG(undefined4, 0x14bed8c))[(int)((*(uint *)(gen_frame + 0x0)))];
        if (((((puVar2 != ((ushort *)GEN_TOP(0x0))) && (iVar1 != 0)) && ((&REFG(undefined4, 0x14bee24))[(int)((*(uint *)(gen_frame + 0x0)))] == 0)) &&
            ((uVar7 = (uint)*puVar2, uVar7 < 7 && ((*(uint *)(gen_frame + 0x0)) <= uVar7)))) &&
           (((char *)(gen_frame + 0x5c))[(int)(uVar7)] == '\0')) {
          F_00c46aa0(*((undefined4 *)GEN_TOP(((int)this + uVar7 * 4 + 0x108))),puVar2,iVar1)
          ;
          *((int *)GEN_TOP(((int)this + (uint)*puVar2 * 4 + 0x130))) = iVar1;
          ((char *)(gen_frame + 0x5c))[(int)(*puVar2)] = '\x01';
        }
      }
      (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)(gen_frame + 0x4)) + 1;
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
    } while ((*(uint *)(gen_frame + 0x0)) < 7);
    if (((char *)(gen_frame + 0x5c))[0] == '\0') {
      *((undefined4 *)GEN_TOP(((int)this + 0x130))) = 0;
    }
    if (((char *)(gen_frame + 0x5c))[1] == '\0') {
      *((undefined4 *)GEN_TOP(((int)this + 0x134))) = 0;
    }
    if (((char *)(gen_frame + 0x5c))[2] == '\0') {
      *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 0;
    }
    if (((char *)(gen_frame + 0x5c))[3] == '\0') {
      *((undefined4 *)GEN_TOP(((int)this + 0x13c))) = 0;
    }
    if (((char *)(gen_frame + 0x5c))[4] == '\0') {
      *((undefined4 *)GEN_TOP(((int)this + 0x140))) = 0;
    }
    if (((char *)(gen_frame + 0x5c))[5] == '\0') {
      *((undefined4 *)GEN_TOP(((int)this + 0x144))) = 0;
    }
    if (((char *)(gen_frame + 0x5c))[6] == '\0') {
      *((undefined4 *)GEN_TOP(((int)this + 0x148))) = 0;
    }
    iVar1 = *((int *)GEN_TOP((REFG(int, 0x137104c) + 0x10)));
    F_0042b630(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    if (*((int *)GEN_TOP(((int)this + 0xfc))) != 0) {
      F_0042e430(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0xfc))));
      F_00420340(((undefined *)GEN_TOP((iVar1 + 0xb0))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    }
    if (*((int *)GEN_TOP(((int)this + 0x100))) != 0) {
      F_0042e430(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x100))));
      puVar10 = ((undefined1 *)(gen_frame + 0x8));
      pvVar5 = ((undefined *)GEN_TOP(F_00414010(iVar1 GEN_EDX_ARG,0)));
      F_00420340(pvVar5 GEN_EDX_ARG,puVar10);
    }
    if (*((int *)GEN_TOP(((int)this + 0x104))) != 0) {
      F_0042e430(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x104))));
      puVar10 = ((undefined1 *)(gen_frame + 0x8));
      pvVar5 = ((undefined *)GEN_TOP(F_00414010(iVar1 GEN_EDX_ARG,1)));
      F_00420340(pvVar5 GEN_EDX_ARG,puVar10);
    }
    uVar7 = (uint)(*((int *)GEN_TOP(((int)this + 0x130))) != 0);
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x40))))(piVar6 GEN_EDX_ARG)));
    F_00447310(pvVar5 GEN_EDX_ARG,uVar7);
    uVar7 = (uint)(*((int *)GEN_TOP(((int)this + 0x134))) != 0);
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x2c))))(piVar6 GEN_EDX_ARG)));
    F_00447310(pvVar5 GEN_EDX_ARG,uVar7);
    uVar7 = (uint)(*((int *)GEN_TOP(((int)this + 0x138))) != 0);
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x30))))(piVar6 GEN_EDX_ARG)));
    F_00447310(pvVar5 GEN_EDX_ARG,uVar7);
    uVar8 = (uint)(*((int *)GEN_TOP(((int)this + 0x13c))) != 0);
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x50))))(piVar6 GEN_EDX_ARG);
    F_00447310(((undefined *)GEN_TOP((uVar7 + 0x850))) GEN_EDX_ARG,uVar8);
    uVar7 = (uint)(*((int *)GEN_TOP(((int)this + 0x140))) != 0);
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x58))))(piVar6 GEN_EDX_ARG)));
    F_00447310(pvVar5 GEN_EDX_ARG,uVar7);
    uVar7 = (uint)(*((int *)GEN_TOP(((int)this + 0x144))) != 0);
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x34))))(piVar6 GEN_EDX_ARG)));
    F_00447310(pvVar5 GEN_EDX_ARG,uVar7);
    uVar7 = (uint)(*((int *)GEN_TOP(((int)this + 0x148))) != 0);
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x38))))(piVar6 GEN_EDX_ARG)));
    F_00447310(pvVar5 GEN_EDX_ARG,uVar7);
    *((undefined1 *)GEN_TOP((uVar9 + 0x34))) = 1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
LAB_00ace080: ;
  F_00acd9f0(this GEN_EDX_ARG);
  LOCK();
  uVar3 = REFG(undefined4, 0x14bee60);
  uVar3 = REFG(undefined4, 0x14bee60);
  uVar3 = REFG(undefined4, 0x14bee60);
  uVar4 = REFG(undefined4, 0x14bee60);
  REFG(undefined4, 0x14bee60) = uVar3;
  UNLOCK();
  *((undefined1 *)GEN_TOP((param_1 + 1))) = 0;
  uVar9 = param_1;
  if (*((int *)GEN_TOP((param_1 + 0x184))) != 0) {
    uVar9 = ((code *)*((gen_code32 *)GEN_TOP((param_1 + 0x180))))
                      (*((undefined4 *)GEN_TOP((param_1 + 0x184))),param_1 + 0x188,param_1,
                       *((undefined4 *)GEN_TOP((param_1 + 400))));
  }
  if (this != ((undefined *)GEN_TOP(0x0))) {
    F_0042c880(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_ARG);
    F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
    F_0042c880(this GEN_EDX_ARG);
    uVar9 = F_00406ad0(this);
  }
  return uVar9;
}

/* ref: FUN_00ace100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ace100(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xace100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[1] = param_2;
  *in_ecx = ((code *)REFP(0xacd030));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00ace140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ace140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xace140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) - *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_00ace160 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ace160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xace160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) == *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_00ace190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ace190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xace190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xacd140));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00ace1b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ace1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xace1b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xacd160));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00ace1d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ace1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xace1d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xacd180));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00ace1f0 */
GEN_OWN GEN_FRAME unsigned int F_00ace1f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xace1f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00ace220 */
GEN_OWN GEN_FRAME unsigned int F_00ace220(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xace220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00ace240 */
GEN_OWN GEN_FRAME uint F_00ace240(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xace240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) + param_2;
  return param_1;
}

/* ref: FUN_00ace250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ace250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xace250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  return (uint)this;
}

/* ref: FUN_00ace270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ace270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xace270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) - *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_00ace290 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ace290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xace290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_00ace2b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ace2b0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xace2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) + param_2;
  return in_ecx;
}

/* ref: FUN_00ace2c0 */
GEN_OWN GEN_FRAME uint F_00ace2c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xace2c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00ace2e0 */
GEN_OWN GEN_FRAME uint F_00ace2e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xace2e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00ace320 */
GEN_OWN GEN_FRAME uint F_00ace320(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xace320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x144, 12, 4);
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  puVar3 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2;
  puVar3 = param_1;
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = ((undefined4 *)(gen_frame + 0x0));
  puVar3 = param_2;
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00ace360 */
GEN_OWN_GS GEN_FRAME uint F_00ace360(void)
{
  GEN_ENTER(0xace360u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_GS(0x4b4, 12, 4);
  undefined4 uVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x4ac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4b0));
  if (REFG(int, 0x14bed64) == 1) {
    uVar2 = F_004308f0(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG);
    F_0042e170(((undefined1 *)(gen_frame + 0x458)) GEN_EDX_ARG,uVar2);
    F_0042a3a0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x458)),1);
    F_0042c880(((undefined1 *)(gen_frame + 0x458)) GEN_EDX_ARG);
    F_0042a2a0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&REFG(undefined4, 0x14be758));
    F_0042a2a0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&REFG(undefined, 0x10ea2f4));
    F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x218)) GEN_EDX_ARG);
    F_004f84e0(&(*(undefined4 *)(gen_frame + 0x218)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
    (*(undefined4 *)(gen_frame + 0x230)) = REFG(undefined4, 0x14bedc0);
    (*(undefined4 *)(gen_frame + 0x218)) = REFG(undefined4, 0x14bed80);
    (*(undefined4 *)(gen_frame + 0x21c)) = 0;
    (*(gen_code32 *)(gen_frame + 0x24c)) = ((code *)REFP(0xacccc0));
    uVar2 = F_004fc510(REFG(void * PTR32, 0x1375ae8) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x218)));
    F_00429fa0();
  }
  else {
    F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x218)) GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(gen_code32 *)(gen_frame + 0x24c)) = ((code *)REFP(0xaccd00));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0xacd030));
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0xacd4b0));
    uVar2 = F_004fc7b0(REFG(void * PTR32, 0x1375ae8) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x218)),&(*(gen_code32 *)(gen_frame + 0x0)),5);
  }
  uVar1 = _InterlockedExchange((volatile long *)(&REFG(undefined4, 0x14bee60)), (long)(1));
  return uVar2;
}

/* ref: FUN_00ace4a0 */
GEN_OWN_GS GEN_FRAME uint F_00ace4a0(void)
{
  GEN_ENTER(0xace4a0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_GS(0x4b4, 12, 4);
  undefined4 uVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x4ac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4b0));
  if (REFG(int, 0x14bed64) == 1) {
    uVar2 = F_004308f0(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG);
    F_0042e170(((undefined1 *)(gen_frame + 0x458)) GEN_EDX_ARG,uVar2);
    F_0042a3a0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x458)),1);
    F_0042c880(((undefined1 *)(gen_frame + 0x458)) GEN_EDX_ARG);
    F_0042a2a0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&REFG(undefined4, 0x14be758));
    F_0042a2a0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&REFG(undefined, 0x10ea2f4));
    F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x218)) GEN_EDX_ARG);
    F_004f84e0(&(*(undefined4 *)(gen_frame + 0x218)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
    (*(undefined4 *)(gen_frame + 0x230)) = REFG(undefined4, 0x14bedc0);
    (*(undefined4 *)(gen_frame + 0x218)) = REFG(undefined4, 0x14bed80);
    (*(undefined4 *)(gen_frame + 0x21c)) = 0;
    (*(gen_code32 *)(gen_frame + 0x24c)) = ((code *)REFP(0xacccc0));
    uVar2 = F_004fc400(REFG(void * PTR32, 0x1375ae8) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x218)));
    F_00429fa0();
  }
  else {
    F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x218)) GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(gen_code32 *)(gen_frame + 0x24c)) = ((code *)REFP(0xaccd00));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0xacd030));
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0xacd6a0));
    uVar2 = F_004fc7b0(REFG(void * PTR32, 0x1375ae8) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x218)),&(*(gen_code32 *)(gen_frame + 0x0)),5);
  }
  uVar1 = _InterlockedExchange((volatile long *)(&REFG(undefined4, 0x14bee60)), (long)(1));
  return uVar2;
}

/* ref: FUN_00ace5e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ace5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xace5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int in_ecx;
  undefined * pvVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  in_ecx = *((int *)GEN_TOP((REFG(int, 0x137104c) + 0x10)));
  F_0041f130(((undefined *)GEN_TOP((in_ecx + 0xb0))) GEN_EDX_FWD,this);
  iVar5 = (int)this + 0x54;
  pvVar1 = ((undefined *)GEN_TOP(F_00414010(in_ecx GEN_EDX_ARG,0)));
  F_0041f130(pvVar1 GEN_EDX_ARG,iVar5);
  iVar5 = (int)this + 0xa8;
  pvVar1 = ((undefined *)GEN_TOP(F_00414010(in_ecx GEN_EDX_ARG,1)));
  F_0041f130(pvVar1 GEN_EDX_ARG,iVar5);
  uVar4 = 0;
  do {
    piVar2 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    if (piVar2 == ((int *)GEN_TOP(0x0))) {
switchD_00ace646_default: ;
      piVar2 = ((int *)GEN_TOP(0x0));
    }
    else {
      switch((unsigned int)(uintptr_t)(uVar4)) {
      case 0: ;
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x40))))(piVar2 GEN_EDX_ARG)));
        break;
      case 1: ;
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x2c))))(piVar2 GEN_EDX_ARG)));
        break;
      case 2: ;
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG)));
        break;
      case 3: ;
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x50))))(piVar2 GEN_EDX_ARG);
        if (uVar3 == 0) goto switchD_00ace646_default;
        piVar2 = ((int *)GEN_TOP((uVar3 + 0x850)));
        break;
      case 4: ;
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x58))))(piVar2 GEN_EDX_ARG)));
        break;
      case 5: ;
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x34))))(piVar2 GEN_EDX_ARG)));
        break;
      case 6: ;
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x38))))(piVar2 GEN_EDX_ARG)));
        break;
      default: ;
        goto switchD_00ace646_default;
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + uVar4 * 4 + 0x108))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + uVar4 * 4 + 0x130))) = 0;
    if ((char)piVar2[0xb] != '\0') {
      F_00447240(piVar2 GEN_EDX_ARG,uVar4);
      *((int *)GEN_TOP(((int)this + uVar4 * 4 + 0x108))) = piVar2[5];
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)this + uVar4 * 4 + 0x130))) = uVar3 + 0x20;
    }
    if (*((char *)GEN_TOP(((int)piVar2 + 0x2d))) != '\0') {
      *((undefined1 *)GEN_TOP(((int)piVar2 + 0x2d))) = 0;
    }
    uVar4 = uVar4 + 1;
    if (6 < uVar4) {
      uVar4 = F_0042a990(this GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)this + 0xfc))) = uVar4;
      uVar4 = F_0042a990((int)this + 0x54 GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)this + 0x100))) = uVar4;
      uVar4 = F_0042a990((int)this + 0xa8 GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)this + 0x104))) = uVar4;
      uVar4 = F_0042a970(this GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)this + 0x124))) = uVar4 + 1;
      uVar4 = F_0042a970((int)this + 0x54 GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)this + 0x128))) = uVar4 + 1;
      uVar4 = F_0042a970((int)this + 0xa8 GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)this + 300))) = uVar4 + 1;
      *((undefined * PTR32 *)GEN_TOP((param_1 + 0x14))) = this;
      *((gen_code32 *)GEN_TOP((param_1 + 0x10))) = ((code *)REFP(0xacd140));
      *((gen_code32 *)GEN_TOP((param_1 + 0x18))) = ((code *)REFP(0xacdc60));
      *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = 0;
      *((undefined4 *)GEN_TOP((param_1 + 0x20))) = 0;
      return param_1;
    }
  } while( true );
}

/* ref: FUN_00ace7a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ace7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xace7a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 300))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x128))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x124))) = 0;
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x40))))(piVar1 GEN_EDX_ARG)));
  F_0043c5e0(pvVar2 GEN_EDX_ARG);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x40))))(piVar1 GEN_EDX_ARG)));
  *((int *)GEN_TOP(((int)this + 0x108))) = piVar3[5];
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x130))) = uVar4 + 0x20;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG)));
  F_0043c5e0(pvVar2 GEN_EDX_ARG);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG)));
  *((int *)GEN_TOP(((int)this + 0x10c))) = piVar3[5];
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x134))) = uVar4 + 0x20;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x30))))(piVar1 GEN_EDX_ARG)));
  F_0043c5e0(pvVar2 GEN_EDX_ARG);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x30))))(piVar1 GEN_EDX_ARG)));
  *((int *)GEN_TOP(((int)this + 0x110))) = piVar3[5];
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x138))) = uVar4 + 0x20;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_ARG);
  F_0043c5e0(((undefined *)GEN_TOP((uVar4 + 0x850))) GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_ARG);
  if (uVar4 == 0) {
    piVar3 = ((int *)GEN_TOP(0x0));
  }
  else {
    piVar3 = ((int *)GEN_TOP((uVar4 + 0x850)));
  }
  *((int *)GEN_TOP(((int)this + 0x114))) = piVar3[5];
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x13c))) = uVar4 + 0x20;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x58))))(piVar1 GEN_EDX_ARG)));
  F_0043c5e0(pvVar2 GEN_EDX_ARG);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x58))))(piVar1 GEN_EDX_ARG)));
  *((int *)GEN_TOP(((int)this + 0x118))) = piVar3[5];
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x140))) = uVar4 + 0x20;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))(piVar1 GEN_EDX_ARG)));
  F_0043c5e0(pvVar2 GEN_EDX_ARG);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))(piVar1 GEN_EDX_ARG)));
  *((int *)GEN_TOP(((int)this + 0x11c))) = piVar3[5];
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x144))) = uVar4 + 0x20;
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x38))))(piVar1 GEN_EDX_ARG)));
  F_0043c5e0(pvVar2 GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x38))))(piVar1 GEN_EDX_ARG)));
  *((int *)GEN_TOP(((int)this + 0x120))) = piVar1[5];
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x148))) = uVar4 + 0x20;
  *((undefined * PTR32 *)GEN_TOP((param_1 + 0x14))) = this;
  *((gen_code32 *)GEN_TOP((param_1 + 0x10))) = ((code *)REFP(0xacd140));
  *((gen_code32 *)GEN_TOP((param_1 + 0x18))) = ((code *)REFP(0xacdce0));
  *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x20))) = 0;
  return param_1;
}

/* ref: FUN_00ace9c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ace9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xace9c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) != *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_00acea20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acea20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xacea20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  if (*(undefined4 * PTR32 *)this == ((undefined4 *)GEN_TOP(0x0))) {
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    *param_1 = 0;
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *param_1 = **(undefined4 * PTR32 *)this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00acea50 */
GEN_OWN GEN_FRAME uint F_00acea50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xacea50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int * param_7 = (int *)(uintptr_t)gen_a6;)
  *param_7 = *param_7 + (param_6 - param_3);
  return param_6 - param_3;
}

/* ref: FUN_00acea70 */
GEN_OWN GEN_FRAME unsigned int F_00acea70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xacea70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00aceaa0 */
GEN_OWN GEN_FRAME unsigned int F_00aceaa0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaceaa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00acead0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acead0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xacead0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *param_1 = *(undefined4 *)this;
  param_1[1] = iVar1 + param_2;
  return (uint)param_1;
}

/* ref: FUN_00aceaf0 */
GEN_OWN GEN_FRAME uint F_00aceaf0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xaceaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_FRAME_DECL_TOP(0x144, 12, 4);
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  uVar2 = param_4;
  if (*((uint *)GEN_TOP((param_3 + 8))) <= param_4) {
    uVar2 = param_4 - *((uint *)GEN_TOP((param_3 + 8)));
  }
  uVar3 = param_2;
  if (*((uint *)GEN_TOP((param_1 + 8))) <= param_2) {
    uVar3 = param_2 - *((uint *)GEN_TOP((param_1 + 8)));
  }
  puVar6 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + uVar3 * 4)));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_3 + 4))) + uVar2 * 4)));
  puVar5 = puVar6;
  puVar7 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar4 = 0x50; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar5 = puVar1;
  for (iVar4 = 0x50; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar6 = ((undefined4 *)(gen_frame + 0x0));
  puVar5 = puVar1;
  for (iVar4 = 0x50; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
  }
  return (uint)puVar1;
}

/* ref: FUN_00aceba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aceba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xaceba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00acebc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acebc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xacebc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar3 = ((int *)GEN_TOP(*puVar1));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 - param_2;
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*piVar3));
  }
  return (uint)param_1;
}

/* ref: FUN_00acec00 */
GEN_OWN GEN_FRAME uint F_00acec00(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xacec00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = 0;
    param_1[1] = param_4;
    return (uint)param_1;
  }
  *param_1 = *param_2;
  param_1[1] = param_4;
  return (uint)param_1;
}

/* ref: FUN_00acec30 */
GEN_OWN GEN_FRAME uint F_00acec30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xacec30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  return param_6 - param_3;
}

/* ref: FUN_00acec40 */
GEN_OWN GEN_FRAME unsigned int F_00acec40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xacec40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00acec70 */
GEN_OWN GEN_FRAME unsigned int F_00acec70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xacec70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00aceca0 */
GEN_OWN GEN_FRAME unsigned int F_00aceca0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xaceca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_FRAME_DECL_TOP(0x184, 12, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  
  iVar2 = param_4 - param_2;
  (*(int *)(gen_frame + 0x178)) = iVar2;
  (*(int *)(gen_frame + 0x17c)) = param_6 - param_2;
  iVar1 = (*(int *)(gen_frame + 0x17c));
  while (iVar2 != 0) {
    (*(int *)(gen_frame + 0x17c)) = iVar2;
    iVar2 = iVar1 % iVar2;
    iVar1 = (*(int *)(gen_frame + 0x17c));
  }
  (*(int *)(gen_frame + 0x17c)) = iVar1;
  if (iVar1 < (int)(param_6 - param_2)) {
    while (0 < (*(int *)(gen_frame + 0x17c))) {
      uVar3 = (*(int *)(gen_frame + 0x17c)) + param_2;
      uVar5 = (*(int *)(gen_frame + 0x178)) + uVar3;
      (*(uint *)(gen_frame + 0x15c)) = param_2;
      (*(uint *)(gen_frame + 0x15c)) = uVar3;
      (*(int *)(gen_frame + 0x170)) = param_1;
      if (uVar5 == param_6) {
        (*(int *)(gen_frame + 0x168)) = param_1;
        uVar5 = param_2;
      }
      else {
        (*(uint *)(gen_frame + 0x14c)) = uVar3;
        (*(int *)(gen_frame + 0x160)) = param_1;
        (*(uint *)(gen_frame + 0x164)) = uVar5;
        (*(int *)(gen_frame + 0x168)) = param_1;
      }
      do {
        uVar6 = uVar5;
        uVar5 = uVar6;
        if (*((uint *)GEN_TOP(((*(int *)(gen_frame + 0x168)) + 8))) <= uVar6) {
          uVar5 = uVar6 - *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x168)) + 8)));
        }
        if (*((uint *)GEN_TOP(((*(int *)(gen_frame + 0x170)) + 8))) <= uVar3) {
          uVar3 = uVar3 - *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x170)) + 8)));
        }
        puVar10 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x168)) + 4))) + uVar5 * 4)));
        puVar8 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x170)) + 4))) + uVar3 * 4)));
        puVar7 = puVar8;
        puVar9 = ((undefined4 *)(gen_frame + 0x0));
        for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar7 = puVar10;
        for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar8 = ((undefined4 *)(gen_frame + 0x0));
        for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        (*(int *)(gen_frame + 0x170)) = (*(int *)(gen_frame + 0x168));
        (*(uint *)(gen_frame + 0x174)) = uVar6;
        if ((*(int *)(gen_frame + 0x178)) < (int)(param_6 - uVar6)) {
          (*(uint *)(gen_frame + 0x14c)) = uVar6;
          (*(int *)(gen_frame + 0x150)) = (*(int *)(gen_frame + 0x168));
          (*(int *)(gen_frame + 0x154)) = uVar6 + (*(int *)(gen_frame + 0x178));
          piVar4 = &(*(int *)(gen_frame + 0x150));
        }
        else {
          (*(uint *)(gen_frame + 0x14c)) = param_2;
          (*(int *)(gen_frame + 0x140)) = param_1;
          (*(int *)(gen_frame + 0x144)) = (param_2 - (param_6 - uVar6)) + (*(int *)(gen_frame + 0x178));
          piVar4 = &(*(int *)(gen_frame + 0x140));
        }
        (*(int *)(gen_frame + 0x168)) = *piVar4;
        uVar5 = piVar4[1];
        uVar3 = uVar6;
      } while (piVar4[1] != (*(uint *)(gen_frame + 0x15c)));
      iVar2 = (*(int *)(gen_frame + 0x17c)) - 1;
      (*(int *)(gen_frame + 0x17c)) = iVar2;
    }
  }
  return 0;
}

/* ref: FUN_00acee10 */
GEN_OWN GEN_FRAME unsigned int F_00acee10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xacee10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00acee40 */
GEN_OWN GEN_FRAME unsigned int F_00acee40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xacee40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00acee70 */
GEN_OWN GEN_FRAME unsigned int F_00acee70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xacee70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  F_00aceca0(param_1,param_2,param_3,param_4,param_5,param_6,0,0);
  return;
}

/* ref: FUN_00aceef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aceef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xaceef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *((uint *)GEN_TOP(((int)this + 8)));
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a(((char *)REFP(0x1090ac0)));
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 0xc)));
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((uVar6 + param_1) * 4,0,0x137)));
  iVar5 = *((int *)GEN_TOP(((int)this + 8)));
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  puVar8 = puVar3 + uVar7;
  for (puVar4 = ((undefined4 *)GEN_TOP((iVar2 + uVar7 * 4))); puVar4 != ((undefined4 *)GEN_TOP((iVar2 + iVar5 * 4)));
      puVar4 = puVar4 + 1) {
    if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *((int *)GEN_TOP(((int)this + 4)));
    puVar8 = puVar3;
    for (puVar4 = ((undefined4 *)GEN_TOP((iVar5 + param_1 * 4))); uVar6 = param_1,
        puVar4 != ((undefined4 *)GEN_TOP((iVar5 + uVar7 * 4))); puVar4 = puVar4 + 1) {
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 - 1) {
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar9 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,0x137);
    uVar6 = (uint)uVar9;
  }
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + param_1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  return uVar6;
}

/* ref: FUN_00acf060 */
GEN_OWN GEN_FRAME uint F_00acf060(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(int param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xacf060u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(int param_10 = (int)gen_a9;)
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = param_4;
  if ((param_4 != param_7) && (param_7 != param_10)) {
    if ((param_8 == ((int *)GEN_TOP(0x0))) ||
       ((((int *)GEN_TOP(*param_8)) == ((int *)GEN_TOP(0x0)) ||
        (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_8)), puVar1 == ((undefined4 *)GEN_TOP(0x0)))))) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar1;
    }
    if (((param_5 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*param_5)) == ((int *)GEN_TOP(0x0)))) ||
       (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_5)), puVar1 == ((undefined4 *)GEN_TOP(0x0)))) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar1;
    }
    if (((param_2 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*param_2)) == ((int *)GEN_TOP(0x0)))) ||
       (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_2)), puVar1 == ((undefined4 *)GEN_TOP(0x0)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar1;
    }
    F_00aceca0(uVar2,param_4,uVar3,param_7,uVar4,param_10,0,0);
    iVar5 = param_4 + (param_10 - param_7);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar5;
  if ((param_2 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_2)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*param_2));
  }
  return (uint)param_1;
}

/* ref: FUN_00acf110 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00acf110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xacf110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x10d8290));
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 4)));
  *puVar1 = 0;
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x137)));
  *puVar1 = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar1)) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  return (uint)this;
}

/* ref: FUN_00acf160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acf160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xacf160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar1) {
    uVar1 = F_00aceef0(this GEN_EDX_FWD,1);
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar2 == 0) {
    iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  }
  uVar3 = iVar2 - 1;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4))) == 0) {
    uVar1 = F_004296a0(0x140,0,0x137);
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4))) = uVar1;
  }
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4)));
  if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar4 = param_1;
    for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar3;
    return uVar3;
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar3;
  return uVar1;
}

/* ref: FUN_00acf1f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acf1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xacf1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if (*((uint *)GEN_TOP(((int)this + 8))) <= *((int *)GEN_TOP(((int)this + 0x10))) + 1U) {
    F_00aceef0(this GEN_EDX_FWD,1);
  }
  uVar3 = *((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10)));
  if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar3) {
    uVar3 = uVar3 - *((uint *)GEN_TOP(((int)this + 8)));
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4))) == 0) {
    uVar1 = F_004296a0(0x140,0,0x137);
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4))) = uVar1;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP((uVar1 + uVar3 * 4)));
  if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar4 = param_1;
    for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  return uVar1;
}

/* ref: FUN_00acf260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acf260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xacf260u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar2 = param_4 - *((int *)GEN_TOP(((int)this + 0xc)));
  (*(uint *)(gen_frame + 0xc)) = uVar2;
  if (*((uint *)GEN_TOP(((int)this + 0x10))) >> 1 < uVar2) {
    F_00acf1f0(this GEN_EDX_FWD,param_5);
    iVar5 = *((int *)GEN_TOP(((int)this + 0x10))) + *((int *)GEN_TOP(((int)this + 0xc)));
    uVar10 = *(undefined4 *)this;
    piVar4 = ((int *)GEN_TOP(0x0));
    if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      piVar4 = ((int *)GEN_TOP(*puVar1));
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x10))) + *((int *)GEN_TOP(((int)this + 0xc))) - 1;
    uVar9 = 0;
    if ((piVar4 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar4)) != ((undefined4 *)GEN_TOP(0x0)))) {
      uVar9 = *((undefined4 *)GEN_TOP(*piVar4));
    }
    piVar4 = ((int *)GEN_TOP(0x0));
    if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      piVar4 = ((int *)GEN_TOP(*puVar1));
    }
    iVar6 = (*(uint *)(gen_frame + 0xc)) + *((int *)GEN_TOP(((int)this + 0xc)));
    uVar8 = 0;
    if ((piVar4 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar4)) != ((undefined4 *)GEN_TOP(0x0)))) {
      uVar8 = *((undefined4 *)GEN_TOP(*piVar4));
    }
  }
  else {
    F_00acf160(this GEN_EDX_ARG,param_5);
    piVar4 = ((int *)GEN_TOP(0x0));
    if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      piVar4 = ((int *)GEN_TOP(*puVar1));
    }
    piVar7 = ((int *)GEN_TOP(0x0));
    if ((piVar4 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar4)) != ((undefined4 *)GEN_TOP(0x0)))) {
      piVar7 = *((int * PTR32 *)GEN_TOP(*piVar4));
    }
    piVar4 = ((int *)GEN_TOP(0x0));
    if ((piVar7 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar7)) != ((undefined4 *)GEN_TOP(0x0)))) {
      piVar4 = *((int * PTR32 *)GEN_TOP(*piVar7));
    }
    iVar5 = *((int *)GEN_TOP(((int)this + 0xc))) + 1 + (*(uint *)(gen_frame + 0xc));
    uVar10 = 0;
    if ((piVar4 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar4)) != ((undefined4 *)GEN_TOP(0x0)))) {
      uVar10 = *((undefined4 *)GEN_TOP(*piVar4));
    }
    piVar4 = ((int *)GEN_TOP(0x0));
    if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      piVar4 = ((int *)GEN_TOP(*puVar1));
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
    uVar9 = 0;
    if ((piVar4 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar4)) != ((undefined4 *)GEN_TOP(0x0)))) {
      uVar9 = *((undefined4 *)GEN_TOP(*piVar4));
    }
    iVar6 = *((int *)GEN_TOP(((int)this + 0xc)));
    uVar8 = *(undefined4 *)this;
  }
  F_00acf060(((undefined1 *)(gen_frame + 0x0)),uVar8,0,iVar6,uVar9,0,iVar3,uVar10,0,iVar5);
  iVar5 = *((int *)GEN_TOP(((int)this + 0xc)));
  piVar4 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar4 = ((int *)GEN_TOP(*puVar1));
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0xc)) + iVar5;
  if ((piVar4 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar4)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*piVar4));
  }
  return (uint)param_1;
}

/* ref: FUN_00acf3f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acf3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xacf3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00acf1f0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00acf400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acf400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xacf400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  int * this_00;
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x10)));
  this_00 = ((int *)GEN_TOP(((int)this + 4)));
  piVar1 = ((int *)GEN_TOP(*this_00));
  uVar5 = *((int *)GEN_TOP(((int)this + 0x14))) + uVar2;
  (*(char *)(gen_frame + 0xf)) = '\x01';
  ((int * PTR32 *)(gen_frame + 0x0))[0] = piVar1;
  while( true ) {
    if (uVar2 == uVar5) {
      if (*((uint *)GEN_TOP(((int)this + 0xc))) <= *((int *)GEN_TOP(((int)this + 0x14))) + 1U) {
        F_00aceef0(this_00 GEN_EDX_FWD,1);
      }
      uVar5 = *((int *)GEN_TOP(((int)this + 0x10))) + *((int *)GEN_TOP(((int)this + 0x14)));
      uVar2 = *((uint *)GEN_TOP(((int)this + 0xc)));
      if (uVar2 <= uVar5) {
        uVar5 = uVar5 - uVar2;
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar5 * 4))) == 0) {
        uVar2 = F_004296a0(0x140,0,0x137);
        *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar5 * 4))) = uVar2;
      }
      puVar7 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar5 * 4)));
      if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar6 = param_1;
        for (iVar3 = 0x50; iVar3 != 0; iVar3 = iVar3 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      *((int *)GEN_TOP(((int)this + 0x14))) = *((int *)GEN_TOP(((int)this + 0x14))) + 1;
      return uVar2;
    }
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    uVar4 = uVar2;
    if (*((uint *)GEN_TOP((iVar3 + 8))) <= uVar2) {
      uVar4 = uVar2 - *((uint *)GEN_TOP((iVar3 + 8)));
    }
    if (*((char *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + uVar4 * 4))) + 0xf4))) != '\0') break;
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    uVar4 = uVar2;
    if (*((uint *)GEN_TOP((iVar3 + 8))) <= uVar2) {
      uVar4 = uVar2 - *((uint *)GEN_TOP((iVar3 + 8)));
    }
    if (*(char *)(param_1 + 0x4f) < *((char *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + uVar4 * 4))) + 0x13c))))
    goto LAB_00acf508;
    uVar2 = uVar2 + 1;
    (*(char *)(gen_frame + 0xf)) = '\0';
  }
  if ((*(char *)(gen_frame + 0xf)) != '\0') {
    uVar2 = F_00acf160(this_00 GEN_EDX_ARG,param_1);
    return uVar2;
  }
  uVar2 = uVar2 - 1;
LAB_00acf508: ;
  uVar8 = 0;
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar1)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar8 = *((undefined4 *)GEN_TOP(*piVar1));
  }
  uVar2 = F_00acf260(this_00 GEN_EDX_ARG,((int * PTR32 *)(gen_frame + 0x0)),uVar8,0,uVar2,param_1);
  return uVar2;
}

/* ref: FUN_00acf570 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_00acf570(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xacf570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return 0;
}

/* ref: FUN_00acf5c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00acf5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xacf5c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0042b790(((undefined *)GEN_TOP(((int)this + 0xcc))) GEN_EDX_FWD);
  return (uint)(uVar1 != 0);
}

/* ref: FUN_00acf5e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acf5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xacf5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (1 < param_1) {
    return 1;
  }
  if (*((int *)GEN_TOP(((int)this + param_1 * 4 + 8))) == 0) {
    return 0;
  }
  return *((int *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) == 1;
}

/* ref: FUN_00acf630 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00acf630(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xacf630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  char * pcVar1;
  uint uVar2;
  
  if (param_5 != 0) {
    pcVar1 = "https:";
    if (param_6 == '\0') {
      pcVar1 = "http:";
    }
    uVar2 = F_00c472af(param_1,param_2,((char *)REFP(0x10ea7b0)),
                       pcVar1,param_3,param_4,param_5);
    return uVar2;
  }
  pcVar1 = "https:";
  if (param_6 == '\0') {
    pcVar1 = "http:";
  }
  uVar2 = F_00c472af(param_1,param_2,((char *)REFP(0x10ea7fc)),pcVar1
                     ,param_3,param_4);
  return uVar2;
}

/* ref: FUN_00acf6a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00acf6a0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xacf6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0042d540(param_1 GEN_EDX_ARG,((char *)REFP(0x10ea834)));
  return uVar1;
}

/* ref: FUN_00acf6c0 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_00acf6c0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xacf6c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x40,&REFG(undefined, 0x10ea85c),param_2);
  F_0042d540(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_0042d540(param_1 GEN_EDX_ARG,param_3);
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x40,((char *)REFP(0x10ea864)),param_2);
  uVar1 = F_0042d540(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00acf740 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_00acf740(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xacf740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x40,&REFG(undefined, 0x10ea86c),param_2);
  F_0042d540(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x40,&REFG(undefined, 0x10ea874),param_3);
  F_0042d540(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x40,((char *)REFP(0x10ea878)),param_2);
  uVar1 = F_0042d540(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00acf7d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acf7d0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xacf7d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  *((uint *)GEN_TOP((param_1 + 200))) = *((uint *)GEN_TOP((param_1 + 200))) | 1 << GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2);
  if (param_3 == '\0') {
    *((uint *)GEN_TOP((param_1 + 200))) = 1 << GEN_SHC((byte)param_2 + 8, (byte)param_2 + 8) | *((uint *)GEN_TOP((param_1 + 200)));
  }
  return param_1;
}

/* ref: FUN_00acf810 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00acf810(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xacf810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  undefined4 * puVar1;
  
  if (param_2 < 2) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 8 + param_2 * 4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
      *((undefined4 *)GEN_TOP((param_1 + 8 + param_2 * 4))) = 0;
    }
    if (param_3 != '\0') {
      *((undefined4 *)GEN_TOP((param_1 + 0x10 + param_2 * 4))) = 0;
      *((undefined4 *)GEN_TOP((param_1 + 0x18 + param_2 * 4))) = 0;
      F_0042aca0(param_2 * 0x54 + 0x20 + param_1 GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: FUN_00acf860 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00acf860(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xacf860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  bool bVar6;
  
  uVar2 = F_00bc86e0(param_1 GEN_EDX_ARG,((char *)REFP(0x10ea880)));
  if (uVar2 == 0) {
    return 0xffffffff;
  }
  F_0042e430(param_2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar2 + 4))));
  pbVar3 = *((byte * PTR32 *)GEN_TOP((uVar2 + 4)));
  pbVar5 = &REFG(undefined1, 0x10ea88c);
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00acf8c0: ;
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00acf8c5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00acf8c0;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00acf8c5: ;
  if (iVar4 == 0) {
    return 0;
  }
  uVar2 = F_00bc86e0(param_1 GEN_EDX_ARG,((char *)REFP(0x10ea890)));
  if (uVar2 == 0) {
    return 0xffffffff;
  }
  F_0042e430(((undefined *)GEN_TOP(((int)param_2 + 0x54))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar2 + 4))));
  return 1;
}

/* ref: FUN_00acf910 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00acf910(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xacf910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  byte * pbVar4;
  bool bVar5;
  
  uVar2 = F_00bc86e0(param_1 GEN_EDX_ARG,((char *)REFP(0x10ea924)));
  if (uVar2 == 0) {
    return 0;
  }
  pbVar3 = *((byte * PTR32 *)GEN_TOP((uVar2 + 4)));
  pbVar4 = &REFG(undefined1, 0x10ea930);
  while( true ) {
    bVar1 = *pbVar3;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar3[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) break;
    pbVar3 = pbVar3 + 2;
    pbVar4 = pbVar4 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar5 == (uint)(bVar5 != 0);
}

/* ref: FUN_00acf980 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00acf980(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xacf980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  bool bVar7;
  
  uVar3 = F_00bc86e0(param_1 GEN_EDX_ARG,((char *)REFP(0x10eab48)));
  if (uVar3 == 0) {
    return 0;
  }
  do {
    for (puVar2 = *((undefined4 * PTR32 *)GEN_TOP((uVar3 + 8))); puVar2 != ((undefined4 *)GEN_TOP(0x0));
        puVar2 = ((undefined4 *)GEN_TOP(puVar2[3]))) {
      pbVar4 = ((byte *)GEN_TOP(*puVar2));
      pbVar6 = &REFG(undefined1, 0x10eab5c);
      do {
        bVar1 = *pbVar4;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00acf9d7: ;
          iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00acf9dc;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00acf9d7;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00acf9dc: ;
      if (iVar5 == 0) {
        F_0042e430(((undefined *)GEN_TOP((param_2 + 0xa8))) GEN_EDX_ARG,puVar2[1]);
      }
    }
    uVar3 = *((uint *)GEN_TOP((uVar3 + 0xc)));
    if (uVar3 == 0) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00acfa30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00acfa30(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xacfa30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  __time64_t _Var2;
  
  _Var2 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  uVar1 = F_0042d000(param_1,&REFG(undefined, 0x10eab80),(int)_Var2,(int)((ulonglong)_Var2 >> 0x20));
  return uVar1;
}

/* ref: FUN_00acfa60 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_00acfa60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacfa60u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  F_00c4f4ca(((byte *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[1]));
  *((byte *)GEN_TOP(((int)(*(short * PTR32 *)&gen_args[0]) + 3))) = ((byte *)(gen_frame + 0x0))[0xc];
  *((byte *)GEN_TOP(((*(short * PTR32 *)&gen_args[0]) + 1))) = ((byte *)(gen_frame + 0x0))[0x10] + 1;
  *((byte *)GEN_TOP(((*(short * PTR32 *)&gen_args[0]) + 3))) = ((byte *)(gen_frame + 0x0))[0];
  *(*(short * PTR32 *)&gen_args[0]) = (*(undefined2 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) + 0x76c;
  *((byte *)GEN_TOP(((*(short * PTR32 *)&gen_args[0]) + 2))) = ((byte *)(gen_frame + 0x0))[8];
  *((byte *)GEN_TOP(((int)(*(short * PTR32 *)&gen_args[0]) + 5))) = ((byte *)(gen_frame + 0x0))[4];
  return (uint)((byte *)(gen_frame + 0x0))[4];
}

/* ref: FUN_00acfad0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00acfad0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xacfad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * in_ecx_00;
  
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10eab8c));
  in_ecx_00 = in_ecx + 8;
  iVar1 = 1;
  do {
    F_0042b630(in_ecx_00 GEN_EDX_FWD);
    in_ecx_00 = in_ecx_00 + 0x15;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  F_0042b630(in_ecx + 0x33 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x48 GEN_EDX_ARG);
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  F_0042aca0(in_ecx + 0x33 GEN_EDX_ARG);
  F_0042aca0(in_ecx + 0x48 GEN_EDX_ARG);
  in_ecx[0x5d] = 0;
  in_ecx[0x5e] = 0;
  in_ecx[0x32] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00acfb50 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00acfb50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xacfb50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar3 = ((int *)GEN_TOP(((int)this + 8)));
  do {
    if (*piVar3 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar3)) + 0xc))))(((int *)GEN_TOP(*piVar3)) GEN_EDX_FWD);
      if ((char)uVar2 != '\0') {
        piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + uVar4 * 4 + 8)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG);
        return 0;
      }
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar4 < 2);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  F_0042aca0((int)this + 0x20 GEN_EDX_ARG);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  F_0042aca0((int)this + 0x74 GEN_EDX_ARG);
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG);
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  F_0042aca0((int)this + 0xcc GEN_EDX_ARG);
  F_0042aca0((int)this + 0x120 GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00acfc20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00acfc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xacfc20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined * this_00;
  byte * pbVar5;
  int iVar6;
  byte * pbVar7;
  uint uVar8;
  int * piVar9;
  bool bVar10;
  undefined * local_c;
  
  if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
    return 0;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  uVar8 = 0;
  piVar9 = ((int *)GEN_TOP(((int)this + 8)));
  local_c = ((undefined *)GEN_TOP(((int)this + 0x20)));
  do {
    piVar2 = ((int *)GEN_TOP(*piVar9));
    if ((piVar2 == ((int *)GEN_TOP(0x0))) || (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG), (char)uVar4 == '\0'))
    goto switchD_00acfc7f_default;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar9)) + 0x10))))(((int *)GEN_TOP(*piVar9)) GEN_EDX_ARG);
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar9)) + 0x18))))(((int *)GEN_TOP(*piVar9)) GEN_EDX_ARG);
      if (uVar4 / 100 != 2) goto switchD_00acfc7f_caseD_1;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar9)) + 0x14))))(((int *)GEN_TOP(*piVar9)) GEN_EDX_ARG)));
      uVar4 = F_00bc86e0(this_00 GEN_EDX_ARG,((char *)REFP(0x10ea390)));
      if (uVar4 == 0) {
        piVar9[4] = 4;
      }
      else {
        pbVar5 = *((byte * PTR32 *)GEN_TOP((uVar4 + 4)));
        pbVar7 = &REFG(undefined1, 0x10ea39c);
        do {
          bVar1 = *pbVar5;
          bVar10 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00acfcf0: ;
            iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_00acfcf5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar10 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00acfcf0;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00acfcf5: ;
        if (iVar6 == 0) {
          piVar9[4] = 2;
        }
        else {
          piVar9[4] = 3;
          uVar4 = F_00bc86e0(this_00 GEN_EDX_ARG,((char *)REFP(0x10ea3a0)));
          F_0042e430(local_c GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar4 + 4))));
        }
      }
      if (piVar9[2] == 1) {
        uVar4 = F_00bc86e0(this_00 GEN_EDX_ARG,((char *)REFP(0x10ea3b0)));
        if (uVar4 != 0) {
          F_0042e430(((undefined *)GEN_TOP(((int)this + 0xcc))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar4 + 4))));
        }
        uVar4 = F_00bc86e0(this_00 GEN_EDX_ARG,((char *)REFP(0x10ea3bc)));
        if (uVar4 != 0) {
          F_0042e430(((undefined *)GEN_TOP(((int)this + 0x120))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar4 + 4))));
        }
      }
      if (piVar9[2] == 2) {
        F_00acf910(this_00,0);
        F_00acf810(this GEN_EDX_ARG,uVar8,1);
      }
      goto switchD_00acfc7f_default;
    case 1: ;
    case 2: ;
switchD_00acfc7f_caseD_1: ;
      piVar9[4] = 4;
      break;
    case 3: ;
      piVar9[4] = 5;
      break;
    case 4: ;
      piVar9[4] = 6;
      break;
    default: ;
      goto switchD_00acfc7f_default;
    }
    if (((int)uVar8 < 2) && (puVar3 = ((undefined4 *)GEN_TOP(*piVar9)), puVar3 != ((undefined4 *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
      *piVar9 = 0;
    }
switchD_00acfc7f_default: ;
    local_c = ((undefined *)GEN_TOP(((int)local_c + 0x54)));
    uVar8 = uVar8 + 1;
    piVar9 = piVar9 + 1;
    if (1 < uVar8) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00acfdf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00acfdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xacfdf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  uint uVar2;
  char * pcVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if (REFG(int, 0x137104c) == 0) {
    uVar2 = F_00c49908((int)this + 0x174,8,"en-us");
    return uVar2;
  }
  cVar1 = *((char *)GEN_TOP((REFG(int, 0x137104c) + 0x1d)));
  uVar2 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,4);
  F_004142d0(&(*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar2 + 0x14))));
  switch((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0)))) {
  case 0x0: ;
    pcVar3 = ((char *)REFP(0x10ea630));
    break;
  case 0x1: ;
    if (cVar1 != '\x03') {
      uVar2 = F_00c49908((int)this + 0x174,8,"en-us");
      return uVar2;
    }
    uVar2 = F_00c49908((int)this + 0x174,8,((char *)REFP(0x10ea634)));
    return uVar2;
  case 0x2: ;
    pcVar3 = ((char *)REFP(0x10ea644));
    break;
  case 0x3: ;
    pcVar3 = ((char *)REFP(0x10ea648));
    break;
  case 0x4: ;
  case 0x5: ;
    pcVar3 = ((char *)REFP(0x10ea64c));
    break;
  default: ;
    pcVar3 = "en-us";
  }
  uVar2 = F_00c49908((int)this + 0x174,8,pcVar3);
  return uVar2;
}

/* ref: FUN_00acfed0 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00acfed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xacfed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0x118, 8, 4);
  undefined4 * puVar1;
  uint uVar2;
  undefined * PTR32 * ppuVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x110)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x114));
  if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
    return 0;
  }
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea658);
    break;
  case 2: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea674);
    break;
  case 3: ;
    F_00c472af(((undefined1 *)(gen_frame + 0x100)),0x10,"lang=%s",(int)this + 0x174);
    ppuVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10ea694));
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x100,((char *)REFP(0x10ea7b0)),((char *)REFP(0x10ea7a8)),
               &REFG(undefined, 0x10ea6a4),"get_init",((undefined1 *)(gen_frame + 0x100)));
    goto LAB_00ad00b5;
  case 4: ;
    F_00c472af(((undefined1 *)(gen_frame + 0x100)),0x10,"lang=%s",(int)this + 0x174);
    ppuVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10ea6b4));
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x100,((char *)REFP(0x10ea7b0)),((char *)REFP(0x10ea7a8)),
               ((char *)REFP(0x10ea6cc)),((char *)REFP(0x10ea6b8)),((undefined1 *)(gen_frame + 0x100)));
    goto LAB_00ad00b5;
  case 5: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea6d8);
    break;
  case 6: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea6f8);
    break;
  case 7: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea710);
    break;
  case 8: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea728);
    break;
  case 9: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea748);
    break;
  case 10: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea764);
    break;
  case 0xb: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea784);
    break;
  default: ;
    goto switchD_00acff24_default;
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x100,((char *)REFP(0x10ea7fc)),((char *)REFP(0x10ea7ec)));
LAB_00ad00b5: ;
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((uint *)GEN_TOP(((int)this + 200))) =
         *((uint *)GEN_TOP(((int)this + 200))) &
         ~(1 << GEN_SHC((byte)param_1 + 8, (byte)param_1 + 8)) & ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),ppuVar3,param_3,param_4);
  if (uVar2 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x10))) = param_2;
    *((uint *)GEN_TOP(((int)this + param_1 * 4 + 8))) = uVar2;
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) = 1;
    return 1;
  }
  *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x10))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) = 4;
switchD_00acff24_default: ;
  return 0;
}

/* ref: FUN_00ad0190 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ad0190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad0190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined * this_00;
  int iVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10eab8c));
  bVar1 = F_00acfb50(this GEN_EDX_FWD);
  while (bVar1 == 0) {
    F_00acfc20(this GEN_EDX_ARG);
    bVar1 = F_00acfb50(this GEN_EDX_ARG);
  }
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x120))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xcc))) GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(((int)this + 200)));
  iVar2 = 1;
  do {
    this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x54)));
    uVar3 = F_0042c880(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return (uint)uVar3;
}

/* ref: FUN_00ad01f0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ad01f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad01f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    return 1;
  }
  F_00acfdf0(this GEN_EDX_FWD);
  F_0042aca0((int)this + 0xcc GEN_EDX_ARG);
  F_0042aca0((int)this + 0x120 GEN_EDX_ARG);
  piVar1 = ((int *)GEN_TOP(F_00bc89d0()));
  *((int * PTR32 *)GEN_TOP(((int)this + 4))) = piVar1;
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  return (byte)uVar2;
}

/* ref: FUN_00ad0240 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00ad0240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad0240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x11c, 4, 4);
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x114)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x118));
  if ((param_1 < 2) &&
     ((*((int *)GEN_TOP(((int)this + param_1 * 4 + 8))) == 0 || (*((int *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) != 1)
      ))) {
    F_0042e1e0(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_FWD,0x100);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(0x0));
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(0x0));
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    if ((REFG(int, 0x137104c) != 0) && (*((int *)GEN_TOP((REFG(int, 0x137104c) + 0x25f4))) != 0)) {
      bVar1 = F_0049bd60(&(*(undefined4 *)(gen_frame + 0x0)));
      if ((bVar1 != 0) && ((*(undefined * PTR32 *)(gen_frame + 0x8)) != ((undefined *)GEN_TOP(0x0)))) {
        uVar2 = F_0042b790((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        if ((uVar2 != 0) && ((*(undefined * PTR32 *)(gen_frame + 0xc)) != ((undefined *)GEN_TOP(0x0)))) {
          uVar2 = F_0042b790((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
          if (uVar2 != 0) {
            F_0042b630(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
            F_0042b630(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG);
            F_0042d000(((undefined1 *)(gen_frame + 0x18)),&REFG(undefined, 0x10ea3c8),(*(undefined4 *)(gen_frame + 0x10)));
            F_0042d000(((undefined1 *)(gen_frame + 0x6c)),&REFG(undefined, 0x10ea3cc),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
            F_0042d540(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG,((char *)REFP(0x10ea834)));
            F_0042d540(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG,((char *)REFP(0x10ea3d4)));
            uVar2 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
            F_00acf6c0(((undefined1 *)(gen_frame + 0xc0)),((char *)REFP(0x10ea3e0)),uVar2);
            uVar2 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
            F_00acf6c0(((undefined1 *)(gen_frame + 0xc0)),((char *)REFP(0x10ea3ec)),uVar2);
            uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG);
            F_00acf6c0(((undefined1 *)(gen_frame + 0xc0)),((char *)REFP(0x10ea3f4)),uVar2);
            uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
            F_00acf6c0(((undefined1 *)(gen_frame + 0xc0)),((char *)REFP(0x10ea400)),uVar2);
            F_0042d540(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG,((char *)REFP(0x10ea40c)));
            F_0042c880(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG);
            F_0042c880(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
            uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG);
            uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG);
            bVar1 = F_00acfed0(this GEN_EDX_ARG,param_1,1,uVar3,uVar2);
            F_0042c880(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG);
            return bVar1;
          }
        }
      }
    }
    F_0042c880(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00ad0470 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00ad0470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad0470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if ((param_1 < 2) &&
     ((*((int *)GEN_TOP(((int)this + param_1 * 4 + 8))) == 0 || (*((int *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) != 1)
      ))) {
    uVar2 = F_0042b790(((undefined *)GEN_TOP(((int)this + 0xcc))) GEN_EDX_FWD);
    if (uVar2 == 0) {
      return 0;
    }
    F_0042e1e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0x40);
    F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x10ea834)));
    F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x10ea418)));
    uVar2 = F_0042a990((int)this + 0xcc GEN_EDX_ARG);
    F_00acf6c0(((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x10ea424)),uVar2);
    uVar2 = F_0042a990((int)this + 0x120 GEN_EDX_ARG);
    F_00acf6c0(((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x10ea430)),uVar2);
    F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x10ea43c)));
    F_0042aca0((int)this + 0xcc GEN_EDX_ARG);
    F_0042aca0((int)this + 0x120 GEN_EDX_ARG);
    uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    bVar1 = F_00acfed0(this GEN_EDX_ARG,param_1,2,uVar3,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00ad05a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad05a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad05a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if (((int)param_1 < 2) &&
     ((*((int *)GEN_TOP(((int)this + param_1 * 4 + 8))) == 0 || (*((int *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) != 1)
      ))) {
    bVar1 = F_00acfed0(this GEN_EDX_FWD,param_1,3,0,0);
    return CONCAT31(extraout_var,bVar1);
  }
  return param_1 & 0xffffff00;
}

/* ref: FUN_00ad05e0 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00ad05e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad05e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x9c, 4, 4);
  byte bVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x94)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x98));
  if ((param_1 < 2) &&
     ((*((int *)GEN_TOP(((int)this + param_1 * 4 + 8))) == 0 || (*((int *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) != 1)
      ))) {
    F_0042e1e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,0x40);
    F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x10ea834)));
    F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x10ea448)));
    F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x40,&REFG(undefined, 0x10ea85c),&REFG(undefined, 0x10ea454));
    F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
    F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)this + 0x174);
    F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x40,((char *)REFP(0x10ea864)),&REFG(undefined, 0x10ea454));
    F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
    F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x10ea45c)));
    bVar1 = F_00acfed0(this GEN_EDX_ARG,param_1,4,0,0);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00ad0700 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00ad0700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad0700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x19c, 4, 4);
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x194)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x198));
  if ((1 < param_1) ||
     ((*((int *)GEN_TOP(((int)this + param_1 * 4 + 8))) != 0 && (*((int *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) == 1)
      ))) {
    return 0;
  }
  F_0042e1e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,0x400);
  F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x10ea834)));
  F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x10ea468)));
  F_00c472af(((undefined1 *)(gen_frame + 0x154)),0x40,&REFG(undefined, 0x10ea85c),&REFG(undefined, 0x10ea474));
  F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x154)));
  F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)this + 0x174);
  F_00c472af(((undefined1 *)(gen_frame + 0x154)),0x40,((char *)REFP(0x10ea864)),&REFG(undefined, 0x10ea474));
  F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x154)));
  uVar2 = F_0042a990(param_2 GEN_EDX_ARG);
  F_00c472af(((undefined1 *)(gen_frame + 0x154)),0x40,&REFG(undefined, 0x10ea85c),((char *)REFP(0x10ea47c)));
  F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x154)));
  F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar2);
  F_00c472af(((undefined1 *)(gen_frame + 0x154)),0x40,((char *)REFP(0x10ea864)),((char *)REFP(0x10ea47c)));
  F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x154)));
  F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x10ea488)));
  uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,((char *)REFP(0x10ea7fc)),((char *)REFP(0x10ea7ec)),
               (*(undefined * PTR32 (*)[1])REFP(0x10ea70c)),((char *)REFP(0x10ea700)));
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 8)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((uint *)GEN_TOP(((int)this + 200))) =
           *((uint *)GEN_TOP(((int)this + 200))) &
           ~(1 << GEN_SHC((byte)param_1 + 8, (byte)param_1 + 8)) & ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1));
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea6f8),uVar3,uVar2);
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x10))) = 6;
    if (uVar2 != 0) {
      *((uint *)GEN_TOP(((int)this + param_1 * 4 + 8))) = uVar2;
      *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) = 1;
      bVar4 = 1;
      goto LAB_00ad0916;
    }
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) = 4;
  }
  bVar4 = 0;
LAB_00ad0916: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return bVar4;
}

/* ref: FUN_00ad0940 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00ad0940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad0940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x19c, 4, 4);
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x194)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x198));
  if ((1 < param_1) ||
     ((*((int *)GEN_TOP(((int)this + param_1 * 4 + 8))) != 0 && (*((int *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) == 1)
      ))) {
    return 0;
  }
  F_0042e1e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,0x40);
  F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x10ea834)));
  F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x10ea494)));
  F_00c472af(((undefined1 *)(gen_frame + 0x154)),0x40,&REFG(undefined, 0x10ea85c),&REFG(undefined, 0x10ea4a0));
  F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x154)));
  F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)this + 0x174);
  F_00c472af(((undefined1 *)(gen_frame + 0x154)),0x40,((char *)REFP(0x10ea864)),&REFG(undefined, 0x10ea4a0));
  F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x154)));
  F_00acf740(((undefined1 *)(gen_frame + 0x0)),(*(undefined * PTR32 (*)[1])REFP(0x10ea4a8)),param_2);
  F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x10ea4ac)));
  uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,((char *)REFP(0x10ea7fc)),((char *)REFP(0x10ea7ec)),
               (*(undefined * PTR32 (*)[1])REFP(0x10ea724)),((char *)REFP(0x10ea718)));
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 8)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((uint *)GEN_TOP(((int)this + 200))) =
           *((uint *)GEN_TOP(((int)this + 200))) &
           ~(1 << GEN_SHC((byte)param_1 + 8, (byte)param_1 + 8)) & ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1));
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea710),uVar3,uVar2);
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x10))) = 7;
    if (uVar2 != 0) {
      *((uint *)GEN_TOP(((int)this + param_1 * 4 + 8))) = uVar2;
      *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) = 1;
      bVar4 = 1;
      goto LAB_00ad0b03;
    }
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) = 4;
  }
  bVar4 = 0;
LAB_00ad0b03: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return bVar4;
}

/* ref: FUN_00ad0b30 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00ad0b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xad0b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x15c, 4, 4);
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x154)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x158));
  if ((1 < param_1) ||
     ((*((int *)GEN_TOP(((int)this + param_1 * 4 + 8))) != 0 && (*((int *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) == 1)
      ))) {
    return 0;
  }
  uVar2 = F_0042b790(((undefined *)GEN_TOP(((int)this + 0xcc))) GEN_EDX_FWD);
  if (uVar2 == 0) {
    return 0;
  }
  F_0042e1e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0x100);
  F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x10ea834)));
  F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x10ea4b8)));
  uVar2 = F_0042a990((int)this + 0xcc GEN_EDX_ARG);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x10ea4c4)),uVar2);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x10ea4d0),(int)this + 0x174);
  F_00acf740(((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x10ea4d8)),param_2);
  F_00acf740(((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x10ea4e8)),param_3);
  F_0042d540(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x10ea4f8)));
  uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,((char *)REFP(0x10ea7fc)),((char *)REFP(0x10ea7ec)),
               ((char *)REFP(0x10ea740)),((char *)REFP(0x10ea730)));
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 8)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((uint *)GEN_TOP(((int)this + 200))) =
           *((uint *)GEN_TOP(((int)this + 200))) &
           ~(1 << GEN_SHC((byte)param_1 + 8, (byte)param_1 + 8)) & ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1));
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea728),uVar3,uVar2);
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x10))) = 8;
    if (uVar2 != 0) {
      *((uint *)GEN_TOP(((int)this + param_1 * 4 + 8))) = uVar2;
      *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) = 1;
      bVar4 = 1;
      goto LAB_00ad0d0a;
    }
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) = 4;
  }
  bVar4 = 0;
LAB_00ad0d0a: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return bVar4;
}

/* ref: FUN_00ad0d30 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00ad0d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xad0d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x1b0, 0, 4);
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  __time64_t _Var5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ac));
  if ((1 < param_1) ||
     ((*((int *)GEN_TOP(((int)this + param_1 * 4 + 8))) != 0 && (*((int *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) == 1)
      ))) {
    return 0;
  }
  uVar2 = F_0042b790(((undefined *)GEN_TOP(((int)this + 0xcc))) GEN_EDX_FWD);
  if (uVar2 == 0) {
    return 0;
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  _Var5 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  F_0042d000(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x10eab80),(int)_Var5,(int)((ulonglong)_Var5 >> 0x20));
  F_0042e1e0(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,0x400);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((char *)REFP(0x10ea834)));
  F_0042d540(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((char *)REFP(0x10ea504)));
  uVar2 = F_0042a990((int)this + 0xcc GEN_EDX_ARG);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),((char *)REFP(0x10ea510)),uVar2);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea51c),(int)this + 0x174);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((char *)REFP(0x10ea524)));
  F_0042d540(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((char *)REFP(0x10ea52c)));
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),((char *)REFP(0x10ea534)),*param_2);
  uVar2 = F_0042a990(param_2 + 1 GEN_EDX_ARG);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),((char *)REFP(0x10ea540)),uVar2);
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),((char *)REFP(0x10ea548)),param_2[0x16]);
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),((char *)REFP(0x10ea558)),param_2[0x17]);
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),((char *)REFP(0x10ea568)),param_2[0x18]);
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),((char *)REFP(0x10ea570)),uVar2);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((char *)REFP(0x10ea57c)));
  uVar2 = F_0042a990(param_3 GEN_EDX_ARG);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea584),uVar2);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((char *)REFP(0x10ea58c)));
  F_0042d540(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((char *)REFP(0x10ea594)));
  uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0xa8)),0x100,((char *)REFP(0x10ea7fc)),((char *)REFP(0x10ea7ec)),
               ((char *)REFP(0x10ea75c)),((char *)REFP(0x10ea750)));
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 8)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((uint *)GEN_TOP(((int)this + 200))) =
           *((uint *)GEN_TOP(((int)this + 200))) &
           ~(1 << GEN_SHC((byte)param_1 + 8, (byte)param_1 + 8)) & ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1));
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa8)),&REFG(undefined, 0x10ea748),uVar3,uVar2);
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x10))) = 9;
    if (uVar2 != 0) {
      *((uint *)GEN_TOP(((int)this + param_1 * 4 + 8))) = uVar2;
      *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) = 1;
      bVar4 = 1;
      goto LAB_00ad0ff1;
    }
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) = 4;
  }
  bVar4 = 0;
LAB_00ad0ff1: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return bVar4;
}

/* ref: FUN_00ad1020 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00ad1020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xad1020u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x1b0, 0, 4);
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  __time64_t _Var5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ac));
  if ((1 < param_1) ||
     ((*((int *)GEN_TOP(((int)this + param_1 * 4 + 8))) != 0 && (*((int *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) == 1)
      ))) {
    return 0;
  }
  uVar2 = F_0042b790(((undefined *)GEN_TOP(((int)this + 0xcc))) GEN_EDX_FWD);
  if (uVar2 == 0) {
    return 0;
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  _Var5 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  F_0042d000(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x10eab80),(int)_Var5,(int)((ulonglong)_Var5 >> 0x20));
  F_0042e1e0(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,0x400);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((char *)REFP(0x10ea834)));
  F_0042d540(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((char *)REFP(0x10ea5a0)));
  uVar2 = F_0042a990((int)this + 0xcc GEN_EDX_ARG);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),((char *)REFP(0x10ea5ac)),uVar2);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea5b8),(int)this + 0x174);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((char *)REFP(0x10ea5c0)));
  F_0042d540(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((char *)REFP(0x10ea5c8)));
  uVar2 = F_0042a990(param_2 GEN_EDX_ARG);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),((char *)REFP(0x10ea5d0)),uVar2);
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),((char *)REFP(0x10ea5d8)),*((undefined4 *)GEN_TOP((param_2 + 0x54))));
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),((char *)REFP(0x10ea5e8)),*((undefined4 *)GEN_TOP((param_2 + 0x58))));
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),((char *)REFP(0x10ea5f8)),uVar2);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((char *)REFP(0x10ea604)));
  uVar2 = F_0042a990(param_3 GEN_EDX_ARG);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea60c),uVar2);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((char *)REFP(0x10ea614)));
  F_0042d540(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((char *)REFP(0x10ea61c)));
  uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0xa8)),0x100,((char *)REFP(0x10ea7fc)),((char *)REFP(0x10ea7ec)),
               ((char *)REFP(0x10ea798)),((char *)REFP(0x10ea78c)));
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 8)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((uint *)GEN_TOP(((int)this + 200))) =
           *((uint *)GEN_TOP(((int)this + 200))) &
           ~(1 << GEN_SHC((byte)param_1 + 8, (byte)param_1 + 8)) & ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1));
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa8)),&REFG(undefined, 0x10ea784),uVar3,uVar2);
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x10))) = 0xb;
    if (uVar2 != 0) {
      *((uint *)GEN_TOP(((int)this + param_1 * 4 + 8))) = uVar2;
      *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) = 1;
      bVar4 = 1;
      goto LAB_00ad12b3;
    }
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) = 4;
  }
  bVar4 = 0;
LAB_00ad12b3: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return bVar4;
}

/* ref: FUN_00ad12e0 */
GEN_OWN_GS GEN_FRAME byte GEN_STDCALL F_00ad12e0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad12e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x1f8, 8, 4);
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  byte * pbVar7;
  int iVar8;
  byte * pbVar9;
  char * pcVar10;
  byte * pbVar11;
  bool bVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1f0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1f4));
  uVar5 = F_00bc86e0(param_1 GEN_EDX_ARG,((char *)REFP(0x10eaa6c)));
  if (uVar5 == 0) {
    return 0;
  }
  iVar2 = *((int *)GEN_TOP((param_2 + 0xac)));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = ((undefined *)GEN_TOP((param_2 + 0xa8)));
  if (*((int *)GEN_TOP((param_2 + 0xa8))) != iVar2) {
    uVar6 = F_00ad41d0(iVar2,iVar2,*((int *)GEN_TOP((param_2 + 0xa8))),((undefined *)GEN_TOP((param_2 + 0xa8))));
    F_00485c80(uVar6,*((undefined4 *)GEN_TOP((param_2 + 0xac))),param_2 + 0xb4,(*(undefined * PTR32 *)(gen_frame + 0x10)));
    *((uint *)GEN_TOP((param_2 + 0xac))) = uVar6;
  }
  iVar2 = *((int *)GEN_TOP((uVar5 + 8)));
  do {
    if (iVar2 == 0) {
      return 1;
    }
    F_0042b630(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    F_0042b630(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG);
    F_0042b630(((undefined1 *)(gen_frame + 0xcc)) GEN_EDX_ARG);
    F_0042b630(((undefined1 *)(gen_frame + 0x120)) GEN_EDX_ARG);
    F_0042b630(((undefined1 *)(gen_frame + 0x174)) GEN_EDX_ARG);
    for (puVar3 = *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 8))); puVar3 != ((undefined4 *)GEN_TOP(0x0));
        puVar3 = ((undefined4 *)GEN_TOP(puVar3[3]))) {
      pbVar9 = ((byte *)GEN_TOP(*puVar3));
      pcVar10 = ((char *)REFP(0x10eaa78));
      pbVar7 = pbVar9;
      do {
        bVar1 = *pbVar7;
        bVar12 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) {
LAB_00ad13e0: ;
          iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_00ad13e5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar12 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_00ad13e0;
        pbVar7 = pbVar7 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
      iVar8 = 0;
LAB_00ad13e5: ;
      if (iVar8 == 0) {
        uVar4 = puVar3[1];
        F_0042e430(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar4);
      }
      else {
        pcVar10 = ((char *)REFP(0x10eaa80));
        pbVar7 = pbVar9;
        do {
          bVar1 = *pbVar7;
          bVar12 = bVar1 < (byte)*pcVar10;
          if (bVar1 != *pcVar10) {
LAB_00ad1424: ;
            iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_00ad1429;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar12 = bVar1 < (byte)pcVar10[1];
          if (bVar1 != pcVar10[1]) goto LAB_00ad1424;
          pbVar7 = pbVar7 + 2;
          pcVar10 = pcVar10 + 2;
        } while (bVar1 != 0);
        iVar8 = 0;
LAB_00ad1429: ;
        if (iVar8 == 0) {
          uVar4 = puVar3[1];
          F_0042e430(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG,uVar4);
        }
        else {
          pcVar10 = ((char *)REFP(0x10eaa88));
          pbVar7 = pbVar9;
          do {
            bVar1 = *pbVar7;
            bVar12 = bVar1 < (byte)*pcVar10;
            if (bVar1 != *pcVar10) {
LAB_00ad1468: ;
              iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_00ad146d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar12 = bVar1 < (byte)pcVar10[1];
            if (bVar1 != pcVar10[1]) goto LAB_00ad1468;
            pbVar7 = pbVar7 + 2;
            pcVar10 = pcVar10 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_00ad146d: ;
          if (iVar8 == 0) {
            uVar4 = puVar3[1];
            uVar5 = F_00c4c74c(uVar4);
            (*(uint *)(gen_frame + 0x0)) = uVar5;
            (*(int *)(gen_frame + 0x4)) = (int)uVar5 >> 0x1f;
            F_00c4f4ca(((undefined1 *)(gen_frame + 0x1cc)),&(*(uint *)(gen_frame + 0x0)));
            (*(char *)(gen_frame + 0xbe)) = (*(char *)(gen_frame + 0x1dc)) + '\x01';
            (*(undefined1 *)(gen_frame + 0xbf)) = (*(undefined1 *)(gen_frame + 0x1d8));
            (*(short *)(gen_frame + 0xbc)) = (short)(*(undefined4 *)(gen_frame + 0x1e0)) + 0x76c;
            (*(undefined1 *)(gen_frame + 0xc0)) = (*(undefined1 *)(gen_frame + 0x1d4));
            (*(undefined1 *)(gen_frame + 0xc1)) = (*(undefined1 *)(gen_frame + 0x1d0));
            (*(undefined1 *)(gen_frame + 0xc2)) = ((undefined1 *)(gen_frame + 0x1cc))[0];
          }
          else {
            pcVar10 = ((char *)REFP(0x10eaa94));
            pbVar7 = pbVar9;
            do {
              bVar1 = *pbVar7;
              bVar12 = bVar1 < (byte)*pcVar10;
              if (bVar1 != *pcVar10) {
LAB_00ad1510: ;
                iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_00ad1515;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar12 = bVar1 < (byte)pcVar10[1];
              if (bVar1 != pcVar10[1]) goto LAB_00ad1510;
              pbVar7 = pbVar7 + 2;
              pcVar10 = pcVar10 + 2;
            } while (bVar1 != 0);
            iVar8 = 0;
LAB_00ad1515: ;
            if (iVar8 == 0) {
              uVar4 = puVar3[1];
              uVar5 = F_00c4c74c(uVar4);
              (*(uint *)(gen_frame + 0x8)) = uVar5;
              (*(int *)(gen_frame + 0xc)) = (int)uVar5 >> 0x1f;
              F_00c4f4ca(((undefined1 *)(gen_frame + 0x1cc)),&(*(uint *)(gen_frame + 0x8)));
              (*(char *)(gen_frame + 0xc6)) = (*(char *)(gen_frame + 0x1dc)) + '\x01';
              (*(undefined1 *)(gen_frame + 0xc7)) = (*(undefined1 *)(gen_frame + 0x1d8));
              (*(short *)(gen_frame + 0xc4)) = (short)(*(undefined4 *)(gen_frame + 0x1e0)) + 0x76c;
              (*(undefined1 *)(gen_frame + 0xc8)) = (*(undefined1 *)(gen_frame + 0x1d4));
              (*(undefined1 *)(gen_frame + 0xc9)) = (*(undefined1 *)(gen_frame + 0x1d0));
              (*(undefined1 *)(gen_frame + 0xca)) = ((undefined1 *)(gen_frame + 0x1cc))[0];
            }
            else {
              pbVar11 = &REFG(undefined1, 0x10eaa9c);
              pbVar7 = pbVar9;
              do {
                bVar1 = *pbVar7;
                bVar12 = bVar1 < *pbVar11;
                if (bVar1 != *pbVar11) {
LAB_00ad15b1: ;
                  iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  goto LAB_00ad15b6;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar7[1];
                bVar12 = bVar1 < pbVar11[1];
                if (bVar1 != pbVar11[1]) goto LAB_00ad15b1;
                pbVar7 = pbVar7 + 2;
                pbVar11 = pbVar11 + 2;
              } while (bVar1 != 0);
              iVar8 = 0;
LAB_00ad15b6: ;
              if (iVar8 == 0) {
                uVar4 = puVar3[1];
                F_0042e430(((undefined1 *)(gen_frame + 0xcc)) GEN_EDX_ARG,uVar4);
              }
              else {
                pbVar11 = &REFG(undefined1, 0x10eaaa4);
                pbVar7 = pbVar9;
                do {
                  bVar1 = *pbVar7;
                  bVar12 = bVar1 < *pbVar11;
                  if (bVar1 != *pbVar11) {
LAB_00ad15f5: ;
                    iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                    goto LAB_00ad15fa;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar7[1];
                  bVar12 = bVar1 < pbVar11[1];
                  if (bVar1 != pbVar11[1]) goto LAB_00ad15f5;
                  pbVar7 = pbVar7 + 2;
                  pbVar11 = pbVar11 + 2;
                } while (bVar1 != 0);
                iVar8 = 0;
LAB_00ad15fa: ;
                if (iVar8 == 0) {
                  uVar4 = puVar3[1];
                  F_0042e430(((undefined1 *)(gen_frame + 0x174)) GEN_EDX_ARG,uVar4);
                }
                else {
                  pcVar10 = ((char *)REFP(0x10eaaac));
                  pbVar7 = pbVar9;
                  do {
                    bVar1 = *pbVar7;
                    bVar12 = bVar1 < (byte)*pcVar10;
                    if (bVar1 != *pcVar10) {
LAB_00ad1636: ;
                      iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                      goto LAB_00ad163b;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar7[1];
                    bVar12 = bVar1 < (byte)pcVar10[1];
                    if (bVar1 != pcVar10[1]) goto LAB_00ad1636;
                    pbVar7 = pbVar7 + 2;
                    pcVar10 = pcVar10 + 2;
                  } while (bVar1 != 0);
                  iVar8 = 0;
LAB_00ad163b: ;
                  if (iVar8 == 0) {
                    uVar4 = puVar3[1];
                    F_0042e430(((undefined1 *)(gen_frame + 0x120)) GEN_EDX_ARG,uVar4);
                  }
                  else {
                    pcVar10 = ((char *)REFP(0x10eaabc));
                    do {
                      bVar1 = *pbVar9;
                      bVar12 = bVar1 < (byte)*pcVar10;
                      if (bVar1 != *pcVar10) {
LAB_00ad1677: ;
                        iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                        goto LAB_00ad167c;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar9[1];
                      bVar12 = bVar1 < (byte)pcVar10[1];
                      if (bVar1 != pcVar10[1]) goto LAB_00ad1677;
                      pbVar9 = pbVar9 + 2;
                      pcVar10 = pcVar10 + 2;
                    } while (bVar1 != 0);
                    iVar8 = 0;
LAB_00ad167c: ;
                    if (iVar8 == 0) {
                      uVar4 = puVar3[1];
                      uVar5 = F_00c4c74c(uVar4);
                      (*(uint *)(gen_frame + 0x1c8)) = uVar5;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    F_00ad6270((*(undefined * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    iVar2 = *((int *)GEN_TOP((iVar2 + 0xc)));
    F_0042c880(((undefined1 *)(gen_frame + 0x174)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x120)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0xcc)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  } while( true );
}

/* ref: FUN_00ad1700 */
GEN_OWN_GS GEN_FRAME byte GEN_STDCALL F_00ad1700(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad1700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  byte * pbVar5;
  int iVar6;
  byte * pbVar7;
  char * pcVar8;
  undefined * PTR32 * ppuVar9;
  undefined * this;
  bool bVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  uVar4 = F_00bc86e0(param_1 GEN_EDX_ARG,((char *)REFP(0x10eaac4)));
  if (uVar4 == 0) {
    return 0;
  }
  iVar2 = *((int *)GEN_TOP((uVar4 + 8)));
  this = ((undefined *)GEN_TOP((param_2 + 0xa8)));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  F_00ad5370(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((param_2 + 0xa8))),*((undefined4 *)GEN_TOP((param_2 + 0xac))));
  do {
    if (iVar2 == 0) {
      return 1;
    }
    F_0042b630(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    for (puVar3 = *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 8))); puVar3 != ((undefined4 *)GEN_TOP(0x0));
        puVar3 = ((undefined4 *)GEN_TOP(puVar3[3]))) {
      pbVar7 = ((byte *)GEN_TOP(*puVar3));
      pcVar8 = ((char *)REFP(0x10eaad4));
      pbVar5 = pbVar7;
      do {
        bVar1 = *pbVar5;
        bVar10 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_00ad17b0: ;
          iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00ad17b5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar10 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_00ad17b0;
        pbVar5 = pbVar5 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_00ad17b5: ;
      if (iVar6 == 0) {
        F_0042e430(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,puVar3[1]);
      }
      else {
        ppuVar9 = (*(undefined * PTR32 (*)[1])REFP(0x10eaadc));
        do {
          bVar1 = *pbVar7;
          bVar10 = bVar1 < *(byte *)ppuVar9;
          if (bVar1 != *(byte *)ppuVar9) {
LAB_00ad17f0: ;
            iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_00ad17f5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar10 = bVar1 < *((byte *)GEN_TOP(((int)ppuVar9 + 1)));
          if (bVar1 != *((byte *)GEN_TOP(((int)ppuVar9 + 1)))) goto LAB_00ad17f0;
          pbVar7 = pbVar7 + 2;
          ppuVar9 = ((undefined * PTR32 *)GEN_TOP(((int)ppuVar9 + 2)));
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00ad17f5: ;
        if (iVar6 == 0) {
          uVar4 = F_00c4c74c(puVar3[1]);
          (*(uint *)(gen_frame + 0x5c)) = uVar4;
        }
      }
      this = (*(undefined * PTR32 *)(gen_frame + 0x4));
    }
    F_00ad6340(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    iVar2 = *((int *)GEN_TOP((iVar2 + 0xc)));
    F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  } while( true );
}

/* ref: FUN_00ad1850 */
GEN_OWN_GS GEN_FRAME byte GEN_STDCALL F_00ad1850(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad1850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x94, 12, 4);
  byte bVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined * this;
  uint uVar4;
  byte * pbVar5;
  int iVar6;
  int iVar7;
  byte * pbVar8;
  byte * pbVar9;
  char * pcVar10;
  undefined * PTR32 * ppuVar11;
  bool bVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  uVar4 = F_00bc86e0(param_1 GEN_EDX_ARG,((char *)REFP(0x10eaae0)));
  if (uVar4 == 0) {
    return 0;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = *((undefined4 * PTR32 *)GEN_TOP((uVar4 + 8)));
  this = param_1;
  do {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0xc)) == ((undefined4 *)GEN_TOP(0x0))) {
      uVar4 = F_00bc86e0(this GEN_EDX_ARG,((char *)REFP(0x10eab34)));
      if (uVar4 == 0) {
        return 0;
      }
      iVar6 = *((int *)GEN_TOP((uVar4 + 8)));
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP((param_2 + 0x164)));
      F_00ad5370(((undefined *)GEN_TOP((param_2 + 0x164))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),*((undefined4 *)GEN_TOP((param_2 + 0x164))),
                   *((undefined4 *)GEN_TOP((param_2 + 0x168))));
      do {
        if (iVar6 == 0) {
          return 1;
        }
        F_0042b630(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        for (puVar2 = *((undefined4 * PTR32 *)GEN_TOP((iVar6 + 8))); puVar2 != ((undefined4 *)GEN_TOP(0x0));
            puVar2 = ((undefined4 *)GEN_TOP(puVar2[3]))) {
          pbVar8 = ((byte *)GEN_TOP(*puVar2));
          pcVar10 = "title";
          pbVar5 = pbVar8;
          do {
            bVar1 = *pbVar5;
            bVar12 = bVar1 < (byte)*pcVar10;
            if (bVar1 != *pcVar10) {
LAB_00ad1bc0: ;
              iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_00ad1bc5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar12 = bVar1 < (byte)pcVar10[1];
            if (bVar1 != pcVar10[1]) goto LAB_00ad1bc0;
            pbVar5 = pbVar5 + 2;
            pcVar10 = pcVar10 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00ad1bc5: ;
          if (iVar7 == 0) {
            uVar3 = puVar2[1];
            F_0042e430(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar3);
          }
          else {
            ppuVar11 = (*(undefined * PTR32 (*)[1])REFP(0x10eab44));
            do {
              bVar1 = *pbVar8;
              bVar12 = bVar1 < *(byte *)ppuVar11;
              if (bVar1 != *(byte *)ppuVar11) {
LAB_00ad1c00: ;
                iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_00ad1c05;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar8[1];
              bVar12 = bVar1 < *((byte *)GEN_TOP(((int)ppuVar11 + 1)));
              if (bVar1 != *((byte *)GEN_TOP(((int)ppuVar11 + 1)))) goto LAB_00ad1c00;
              pbVar8 = pbVar8 + 2;
              ppuVar11 = ((undefined * PTR32 *)GEN_TOP(((int)ppuVar11 + 2)));
            } while (bVar1 != 0);
            iVar7 = 0;
LAB_00ad1c05: ;
            if (iVar7 == 0) {
              uVar3 = puVar2[1];
              uVar4 = F_00c4c74c(uVar3);
              (*(uint *)(gen_frame + 0x64)) = uVar4;
            }
          }
        }
        F_00ad6340((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
        iVar6 = *((int *)GEN_TOP((iVar6 + 0xc)));
        F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      } while( true );
    }
    pbVar8 = ((byte *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0xc))));
    pbVar9 = &REFG(undefined1, 0x10eaaec);
    pbVar5 = pbVar8;
    do {
      bVar1 = *pbVar5;
      bVar12 = bVar1 < *pbVar9;
      if (bVar1 != *pbVar9) {
LAB_00ad18d0: ;
        iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_00ad18d5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar12 = bVar1 < pbVar9[1];
      if (bVar1 != pbVar9[1]) goto LAB_00ad18d0;
      pbVar5 = pbVar5 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_00ad18d5: ;
    if (iVar6 == 0) {
      for (puVar2 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0xc))[2])); puVar2 != ((undefined4 *)GEN_TOP(0x0));
          puVar2 = ((undefined4 *)GEN_TOP(puVar2[3]))) {
        pbVar8 = ((byte *)GEN_TOP(*puVar2));
        pcVar10 = "title";
        pbVar5 = pbVar8;
        do {
          bVar1 = *pbVar5;
          bVar12 = bVar1 < (byte)*pcVar10;
          if (bVar1 != *pcVar10) {
LAB_00ad1920: ;
            iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_00ad1925;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar12 = bVar1 < (byte)pcVar10[1];
          if (bVar1 != pcVar10[1]) goto LAB_00ad1920;
          pbVar5 = pbVar5 + 2;
          pcVar10 = pcVar10 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00ad1925: ;
        if (iVar6 == 0) {
          uVar3 = puVar2[1];
          F_0042e430(((undefined *)GEN_TOP((param_2 + 0xa8))) GEN_EDX_ARG,uVar3);
        }
        else {
          ppuVar11 = (*(undefined * PTR32 (*)[1])REFP(0x10eaafc));
          pbVar5 = pbVar8;
          do {
            bVar1 = *pbVar5;
            bVar12 = bVar1 < *(byte *)ppuVar11;
            if (bVar1 != *(byte *)ppuVar11) {
LAB_00ad1964: ;
              iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_00ad1969;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar12 = bVar1 < *((byte *)GEN_TOP(((int)ppuVar11 + 1)));
            if (bVar1 != *((byte *)GEN_TOP(((int)ppuVar11 + 1)))) goto LAB_00ad1964;
            pbVar5 = pbVar5 + 2;
            ppuVar11 = ((undefined * PTR32 *)GEN_TOP(((int)ppuVar11 + 2)));
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_00ad1969: ;
          if (iVar6 == 0) {
            uVar3 = puVar2[1];
            uVar4 = F_00c4c74c(uVar3);
            *((uint *)GEN_TOP((param_2 + 0xfc))) = uVar4;
          }
          else {
            pcVar10 = ((char *)REFP(0x10eab00));
            pbVar5 = pbVar8;
            do {
              bVar1 = *pbVar5;
              bVar12 = bVar1 < (byte)*pcVar10;
              if (bVar1 != *pcVar10) {
LAB_00ad19b0: ;
                iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_00ad19b5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar12 = bVar1 < (byte)pcVar10[1];
              if (bVar1 != pcVar10[1]) goto LAB_00ad19b0;
              pbVar5 = pbVar5 + 2;
              pcVar10 = pcVar10 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_00ad19b5: ;
            if (iVar6 == 0) {
              uVar3 = puVar2[1];
              uVar4 = F_00c4c74c(uVar3);
              *((uint *)GEN_TOP((param_2 + 0x100))) = uVar4;
            }
            else {
              pcVar10 = ((char *)REFP(0x10eab10));
              pbVar5 = pbVar8;
              do {
                bVar1 = *pbVar5;
                bVar12 = bVar1 < (byte)*pcVar10;
                if (bVar1 != *pcVar10) {
LAB_00ad19f7: ;
                  iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  goto LAB_00ad19fc;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar5[1];
                bVar12 = bVar1 < (byte)pcVar10[1];
                if (bVar1 != pcVar10[1]) goto LAB_00ad19f7;
                pbVar5 = pbVar5 + 2;
                pcVar10 = pcVar10 + 2;
              } while (bVar1 != 0);
              iVar6 = 0;
LAB_00ad19fc: ;
              if (iVar6 == 0) {
                uVar3 = puVar2[1];
                uVar4 = F_00c4c74c(uVar3);
                *((uint *)GEN_TOP((param_2 + 0x104))) = uVar4;
              }
              else {
                pcVar10 = ((char *)REFP(0x10eab20));
                do {
                  bVar1 = *pbVar8;
                  bVar12 = bVar1 < (byte)*pcVar10;
                  if (bVar1 != *pcVar10) {
LAB_00ad1a40: ;
                    iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                    goto LAB_00ad1a45;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar8[1];
                  bVar12 = bVar1 < (byte)pcVar10[1];
                  if (bVar1 != pcVar10[1]) goto LAB_00ad1a40;
                  pbVar8 = pbVar8 + 2;
                  pcVar10 = pcVar10 + 2;
                } while (bVar1 != 0);
                iVar6 = 0;
LAB_00ad1a45: ;
                if (iVar6 == 0) {
                  uVar3 = puVar2[1];
                  uVar4 = F_00c4c74c(uVar3);
                  (*(uint *)(gen_frame + 0x0)) = uVar4;
                  (*(int *)(gen_frame + 0x4)) = (int)uVar4 >> 0x1f;
                  F_00c4f4ca(((undefined1 *)(gen_frame + 0x68)),&(*(uint *)(gen_frame + 0x0)));
                  *((char *)GEN_TOP((param_2 + 0x10a))) = (*(char *)(gen_frame + 0x78)) + '\x01';
                  *((undefined1 *)GEN_TOP((param_2 + 0x10b))) = (*(undefined1 *)(gen_frame + 0x74));
                  *((short *)GEN_TOP((param_2 + 0x108))) = (short)(*(undefined4 *)(gen_frame + 0x7c)) + 0x76c;
                  *((undefined1 *)GEN_TOP((param_2 + 0x10c))) = (*(undefined1 *)(gen_frame + 0x70));
                  *((undefined1 *)GEN_TOP((param_2 + 0x10d))) = (*(undefined1 *)(gen_frame + 0x6c));
                  *((undefined1 *)GEN_TOP((param_2 + 0x10e))) = ((undefined1 *)(gen_frame + 0x68))[0];
                }
              }
            }
          }
        }
      }
    }
    else {
      pbVar5 = &REFG(undefined1, 0x10eab2c);
      do {
        bVar1 = *pbVar8;
        bVar12 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00ad1af0: ;
          iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_00ad1af5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar12 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00ad1af0;
        pbVar8 = pbVar8 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_00ad1af5: ;
      if (iVar6 == 0) {
        uVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0xc))[1];
        F_0042e430(((undefined *)GEN_TOP((param_2 + 0x110))) GEN_EDX_ARG,uVar3);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0xc))[3]));
    this = (*(undefined * PTR32 *)(gen_frame + 0x8));
  } while( true );
}

/* ref: FUN_00ad1c60 */
GEN_OWN_GS GEN_FRAME byte GEN_STDCALL F_00ad1c60(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad1c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x64, 12, 4);
  byte bVar1;
  undefined4 * puVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  uint uVar5;
  byte * pbVar6;
  int iVar7;
  byte * pbVar8;
  uint * this;
  int iVar9;
  bool bVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60));
  uVar5 = F_00bc86e0(param_1 GEN_EDX_ARG,((char *)REFP(0x10eab64)));
  if (uVar5 == 0) {
    return 0;
  }
  iVar9 = *((int *)GEN_TOP((uVar5 + 8)));
  this = ((uint *)GEN_TOP((param_2 + 0xa8)));
  (*(int *)(gen_frame + 0x4)) = iVar9;
  F_00ad54e0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((param_2 + 0xa8))),*((undefined4 *)GEN_TOP((param_2 + 0xac))));
  iVar7 = iVar9;
  do {
    if (iVar7 == 0) {
      return 1;
    }
    F_0042b630(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    for (puVar2 = *((undefined4 * PTR32 *)GEN_TOP((iVar9 + 8))); puVar2 != ((undefined4 *)GEN_TOP(0x0));
        puVar2 = ((undefined4 *)GEN_TOP(puVar2[3]))) {
      pbVar6 = ((byte *)GEN_TOP(*puVar2));
      pbVar8 = &REFG(undefined1, 0x10eab78);
      do {
        bVar1 = *pbVar6;
        bVar10 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_00ad1d10: ;
          iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00ad1d15;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar10 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_00ad1d10;
        pbVar6 = pbVar6 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_00ad1d15: ;
      if (iVar7 == 0) {
        F_0042e430(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,puVar2[1]);
      }
    }
    puVar3 = *((undefined1 * PTR32 *)GEN_TOP((param_2 + 0xac)));
    if ((((undefined1 *)(gen_frame + 0x8)) < puVar3) && (puVar4 = ((undefined1 *)GEN_TOP(*this)), puVar4 <= ((undefined1 *)(gen_frame + 0x8)))) {
      if (puVar3 == *((undefined1 * PTR32 *)GEN_TOP((param_2 + 0xb0)))) {
        F_00ad5ee0(this GEN_EDX_ARG,1);
      }
      iVar9 = (*(int *)(gen_frame + 0x4));
      if (*((undefined * PTR32 *)GEN_TOP((param_2 + 0xac))) != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(*((undefined * PTR32 *)GEN_TOP((param_2 + 0xac))) GEN_EDX_ARG,
                     (((int)((undefined1 *)(gen_frame + 0x8)) - (int)puVar4) / 0x54) * 0x54 + *this);
        iVar9 = (*(int *)(gen_frame + 0x4));
      }
    }
    else {
      if (puVar3 == *((undefined1 * PTR32 *)GEN_TOP((param_2 + 0xb0)))) {
        F_00ad5ee0(this GEN_EDX_ARG,1);
      }
      if (*((undefined * PTR32 *)GEN_TOP((param_2 + 0xac))) != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(*((undefined * PTR32 *)GEN_TOP((param_2 + 0xac))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
      }
    }
    *((int *)GEN_TOP((param_2 + 0xac))) = *((int *)GEN_TOP((param_2 + 0xac))) + 0x54;
    iVar7 = *((int *)GEN_TOP((iVar9 + 0xc)));
    (*(int *)(gen_frame + 0x4)) = iVar7;
    F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    iVar9 = (*(int *)(gen_frame + 0x4));
  } while( true );
}

/* ref: FUN_00ad1dd0 */
GEN_OWN_GS GEN_FRAME byte GEN_STDCALL F_00ad1dd0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad1dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c0, 0, 4);
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  uint uVar6;
  byte * pbVar7;
  int iVar8;
  byte * pbVar9;
  char * pcVar10;
  byte * pbVar11;
  undefined * this;
  bool bVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x2b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2bc));
  uVar6 = F_00bc86e0(param_1 GEN_EDX_ARG,((char *)REFP(0x10ea8a0)));
  if (uVar6 != 0) {
    iVar2 = *((int *)GEN_TOP((uVar6 + 8)));
    iVar8 = *((int *)GEN_TOP((param_2 + 0xac)));
    this = ((undefined *)GEN_TOP((param_2 + 0xa8)));
    (*(int *)(gen_frame + 0xc)) = iVar2;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
    if (*((int *)GEN_TOP((param_2 + 0xa8))) != iVar8) {
      uVar6 = F_00ad4990(iVar8,iVar8,*((int *)GEN_TOP((param_2 + 0xa8))),this);
      F_00485ce0(uVar6,*((undefined4 *)GEN_TOP((param_2 + 0xac))),param_2 + 0xb4,(*(undefined * PTR32 *)(gen_frame + 0x8)));
      *((uint *)GEN_TOP((param_2 + 0xac))) = uVar6;
    }
    while (iVar2 != 0) {
      F_0042b630(((undefined1 *)(gen_frame + 0x12c)) GEN_EDX_ARG);
      F_0042b630(((undefined1 *)(gen_frame + 0x184)) GEN_EDX_ARG);
      F_0042b630(((undefined1 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
      F_0042b630(((undefined1 *)(gen_frame + 0x240)) GEN_EDX_ARG);
      for (puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))); puVar3 != ((undefined4 *)GEN_TOP(0x0));
          puVar3 = ((undefined4 *)GEN_TOP(puVar3[3]))) {
        pbVar9 = ((byte *)GEN_TOP(*puVar3));
        pcVar10 = "status";
        pbVar7 = pbVar9;
        do {
          bVar1 = *pbVar7;
          bVar12 = bVar1 < (byte)*pcVar10;
          if (bVar1 != *pcVar10) {
LAB_00ad1ed0: ;
            iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_00ad1ed5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar12 = bVar1 < (byte)pcVar10[1];
          if (bVar1 != pcVar10[1]) goto LAB_00ad1ed0;
          pbVar7 = pbVar7 + 2;
          pcVar10 = pcVar10 + 2;
        } while (bVar1 != 0);
        iVar8 = 0;
LAB_00ad1ed5: ;
        if (iVar8 == 0) {
          uVar4 = puVar3[1];
          uVar6 = F_00c4c74c(uVar4);
          (*(uint *)(gen_frame + 0x124)) = uVar6;
        }
        else {
          pbVar11 = &REFG(undefined1, 0x10ea8b0);
          pbVar7 = pbVar9;
          do {
            bVar1 = *pbVar7;
            bVar12 = bVar1 < *pbVar11;
            if (bVar1 != *pbVar11) {
LAB_00ad1f17: ;
              iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_00ad1f1c;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar12 = bVar1 < pbVar11[1];
            if (bVar1 != pbVar11[1]) goto LAB_00ad1f17;
            pbVar7 = pbVar7 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_00ad1f1c: ;
          if (iVar8 == 0) {
            uVar4 = puVar3[1];
            uVar6 = F_00c4c74c(uVar4);
            (*(uint *)(gen_frame + 0x128)) = uVar6;
          }
          else {
            pbVar11 = &REFG(undefined1, 0x10ea8b8);
            pbVar7 = pbVar9;
            do {
              bVar1 = *pbVar7;
              bVar12 = bVar1 < *pbVar11;
              if (bVar1 != *pbVar11) {
LAB_00ad1f60: ;
                iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_00ad1f65;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar12 = bVar1 < pbVar11[1];
              if (bVar1 != pbVar11[1]) goto LAB_00ad1f60;
              pbVar7 = pbVar7 + 2;
              pbVar11 = pbVar11 + 2;
            } while (bVar1 != 0);
            iVar8 = 0;
LAB_00ad1f65: ;
            if (iVar8 == 0) {
              F_0042b630(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
              F_0042b630(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG);
              F_0042b630(((undefined1 *)(gen_frame + 0xc4)) GEN_EDX_ARG);
              for (puVar5 = ((undefined4 *)GEN_TOP(puVar3[2])); puVar5 != ((undefined4 *)GEN_TOP(0x0));
                  puVar5 = ((undefined4 *)GEN_TOP(puVar5[3]))) {
                pbVar9 = ((byte *)GEN_TOP(*puVar5));
                pcVar10 = ((char *)REFP(0x10ea8c0));
                pbVar7 = pbVar9;
                do {
                  bVar1 = *pbVar7;
                  bVar12 = bVar1 < (byte)*pcVar10;
                  if (bVar1 != *pcVar10) {
LAB_00ad1fd0: ;
                    iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                    goto LAB_00ad1fd5;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar7[1];
                  bVar12 = bVar1 < (byte)pcVar10[1];
                  if (bVar1 != pcVar10[1]) goto LAB_00ad1fd0;
                  pbVar7 = pbVar7 + 2;
                  pcVar10 = pcVar10 + 2;
                } while (bVar1 != 0);
                iVar8 = 0;
LAB_00ad1fd5: ;
                if (iVar8 == 0) {
                  uVar4 = puVar5[1];
                  F_0042e430(((undefined1 *)(gen_frame + 0x12c)) GEN_EDX_ARG,uVar4);
                }
                else {
                  pcVar10 = ((char *)REFP(0x10ea8cc));
                  pbVar7 = pbVar9;
                  do {
                    bVar1 = *pbVar7;
                    bVar12 = bVar1 < (byte)*pcVar10;
                    if (bVar1 != *pcVar10) {
LAB_00ad2014: ;
                      iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                      goto LAB_00ad2019;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar7[1];
                    bVar12 = bVar1 < (byte)pcVar10[1];
                    if (bVar1 != pcVar10[1]) goto LAB_00ad2014;
                    pbVar7 = pbVar7 + 2;
                    pcVar10 = pcVar10 + 2;
                  } while (bVar1 != 0);
                  iVar8 = 0;
LAB_00ad2019: ;
                  if (iVar8 == 0) {
                    uVar4 = puVar5[1];
                    uVar6 = F_00c4c74c(uVar4);
                    (*(uint *)(gen_frame + 0x180)) = uVar6;
                  }
                  else {
                    pcVar10 = ((char *)REFP(0x10ea8d8));
                    pbVar7 = pbVar9;
                    do {
                      bVar1 = *pbVar7;
                      bVar12 = bVar1 < (byte)*pcVar10;
                      if (bVar1 != *pcVar10) {
LAB_00ad2060: ;
                        iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                        goto LAB_00ad2065;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar7[1];
                      bVar12 = bVar1 < (byte)pcVar10[1];
                      if (bVar1 != pcVar10[1]) goto LAB_00ad2060;
                      pbVar7 = pbVar7 + 2;
                      pcVar10 = pcVar10 + 2;
                    } while (bVar1 != 0);
                    iVar8 = 0;
LAB_00ad2065: ;
                    if (iVar8 == 0) {
                      uVar4 = puVar5[1];
                      F_0042e430(((undefined1 *)(gen_frame + 0x184)) GEN_EDX_ARG,uVar4);
                    }
                    else {
                      pcVar10 = ((char *)REFP(0x10ea8e0));
                      pbVar7 = pbVar9;
                      do {
                        bVar1 = *pbVar7;
                        bVar12 = bVar1 < (byte)*pcVar10;
                        if (bVar1 != *pcVar10) {
LAB_00ad20a4: ;
                          iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                          goto LAB_00ad20a9;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar7[1];
                        bVar12 = bVar1 < (byte)pcVar10[1];
                        if (bVar1 != pcVar10[1]) goto LAB_00ad20a4;
                        pbVar7 = pbVar7 + 2;
                        pcVar10 = pcVar10 + 2;
                      } while (bVar1 != 0);
                      iVar8 = 0;
LAB_00ad20a9: ;
                      if (iVar8 == 0) {
                        uVar4 = puVar5[1];
                        uVar6 = F_00c4c74c(uVar4);
                        (*(uint *)(gen_frame + 0x1d8)) = uVar6;
                      }
                      else {
                        pcVar10 = ((char *)REFP(0x10ea8f0));
                        pbVar7 = pbVar9;
                        do {
                          bVar1 = *pbVar7;
                          bVar12 = bVar1 < (byte)*pcVar10;
                          if (bVar1 != *pcVar10) {
LAB_00ad20f0: ;
                            iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                            goto LAB_00ad20f5;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar7[1];
                          bVar12 = bVar1 < (byte)pcVar10[1];
                          if (bVar1 != pcVar10[1]) goto LAB_00ad20f0;
                          pbVar7 = pbVar7 + 2;
                          pcVar10 = pcVar10 + 2;
                        } while (bVar1 != 0);
                        iVar8 = 0;
LAB_00ad20f5: ;
                        if (iVar8 == 0) {
                          uVar4 = puVar5[1];
                          uVar6 = F_00c4c74c(uVar4);
                          (*(uint *)(gen_frame + 0x1dc)) = uVar6;
                        }
                        else {
                          pbVar11 = &REFG(undefined1, 0x10ea900);
                          pbVar7 = pbVar9;
                          do {
                            bVar1 = *pbVar7;
                            bVar12 = bVar1 < *pbVar11;
                            if (bVar1 != *pbVar11) {
LAB_00ad2137: ;
                              iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                              goto LAB_00ad213c;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pbVar7[1];
                            bVar12 = bVar1 < pbVar11[1];
                            if (bVar1 != pbVar11[1]) goto LAB_00ad2137;
                            pbVar7 = pbVar7 + 2;
                            pbVar11 = pbVar11 + 2;
                          } while (bVar1 != 0);
                          iVar8 = 0;
LAB_00ad213c: ;
                          if (iVar8 == 0) {
                            uVar4 = puVar5[1];
                            F_0042e430(((undefined1 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,uVar4);
                          }
                          else {
                            pcVar10 = "status";
                            pbVar7 = pbVar9;
                            do {
                              bVar1 = *pbVar7;
                              bVar12 = bVar1 < (byte)*pcVar10;
                              if (bVar1 != *pcVar10) {
LAB_00ad2180: ;
                                iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                                goto LAB_00ad2185;
                              }
                              if (bVar1 == 0) break;
                              bVar1 = pbVar7[1];
                              bVar12 = bVar1 < (byte)pcVar10[1];
                              if (bVar1 != pcVar10[1]) goto LAB_00ad2180;
                              pbVar7 = pbVar7 + 2;
                              pcVar10 = pcVar10 + 2;
                            } while (bVar1 != 0);
                            iVar8 = 0;
LAB_00ad2185: ;
                            if (iVar8 == 0) {
                              uVar4 = puVar5[1];
                              uVar6 = F_00c4c74c(uVar4);
                              (*(uint *)(gen_frame + 0x234)) = uVar6;
                            }
                            else {
                              pcVar10 = ((char *)REFP(0x10ea910));
                              do {
                                bVar1 = *pbVar9;
                                bVar12 = bVar1 < (byte)*pcVar10;
                                if (bVar1 != *pcVar10) {
LAB_00ad21c7: ;
                                  iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                                  goto LAB_00ad21cc;
                                }
                                if (bVar1 == 0) break;
                                bVar1 = pbVar9[1];
                                bVar12 = bVar1 < (byte)pcVar10[1];
                                if (bVar1 != pcVar10[1]) goto LAB_00ad21c7;
                                pbVar9 = pbVar9 + 2;
                                pcVar10 = pcVar10 + 2;
                              } while (bVar1 != 0);
                              iVar8 = 0;
LAB_00ad21cc: ;
                              if (iVar8 == 0) {
                                uVar4 = puVar5[1];
                                uVar6 = F_00c4c74c(uVar4);
                                (*(int *)(gen_frame + 0x4)) = (int)uVar6 >> 0x1f;
                                (*(uint *)(gen_frame + 0x0)) = uVar6;
                                F_00c4f4ca(((undefined1 *)(gen_frame + 0x294)),&(*(uint *)(gen_frame + 0x0)));
                                (*(char *)(gen_frame + 0x23a)) = (*(char *)(gen_frame + 0x2a4)) + '\x01';
                                (*(undefined1 *)(gen_frame + 0x23b)) = (*(undefined1 *)(gen_frame + 0x2a0));
                                (*(short *)(gen_frame + 0x238)) = (short)(*(undefined4 *)(gen_frame + 0x2a8)) + 0x76c;
                                (*(undefined1 *)(gen_frame + 0x23c)) = (*(undefined1 *)(gen_frame + 0x29c));
                                (*(undefined1 *)(gen_frame + 0x23d)) = (*(undefined1 *)(gen_frame + 0x298));
                                (*(undefined1 *)(gen_frame + 0x23e)) = ((undefined1 *)(gen_frame + 0x294))[0];
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              F_0042c880(((undefined1 *)(gen_frame + 0xc4)) GEN_EDX_ARG);
              F_0042c880(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG);
              F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
              this = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            else {
              pbVar7 = &REFG(undefined1, 0x10ea91c);
              do {
                bVar1 = *pbVar9;
                bVar12 = bVar1 < *pbVar7;
                if (bVar1 != *pbVar7) {
LAB_00ad2290: ;
                  iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  goto LAB_00ad2295;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar9[1];
                bVar12 = bVar1 < pbVar7[1];
                if (bVar1 != pbVar7[1]) goto LAB_00ad2290;
                pbVar9 = pbVar9 + 2;
                pbVar7 = pbVar7 + 2;
              } while (bVar1 != 0);
              iVar8 = 0;
LAB_00ad2295: ;
              if (iVar8 == 0) {
                uVar4 = puVar3[1];
                F_0042e430(((undefined1 *)(gen_frame + 0x240)) GEN_EDX_ARG,uVar4);
              }
            }
          }
        }
      }
      F_00ad6660(this GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x124)));
      iVar2 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 0xc)));
      (*(int *)(gen_frame + 0xc)) = iVar2;
      F_0042c880(((undefined1 *)(gen_frame + 0x240)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x184)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x12c)) GEN_EDX_ARG);
    }
  }
  return 1;
}

/* ref: FUN_00ad2320 */
GEN_OWN_GS GEN_FRAME byte GEN_STDCALL F_00ad2320(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad2320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c8, 8, 4);
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  int iVar6;
  byte * pbVar7;
  char * pcVar8;
  uint * puVar9;
  undefined * PTR32 * ppuVar10;
  byte * pbVar11;
  undefined4 * puVar12;
  uint uVar13;
  uint * puVar14;
  undefined4 * puVar15;
  bool bVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x2c0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c4));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = param_1;
  (*(int *)(gen_frame + 0x18)) = param_2;
  uVar3 = F_00bc86e0(param_1 GEN_EDX_ARG,((char *)REFP(0x10ea934)));
  if (uVar3 == 0) {
    return 0;
  }
  puVar12 = *((undefined4 * PTR32 *)GEN_TOP((uVar3 + 8)));
  if (puVar12 != ((undefined4 *)GEN_TOP(0x0))) {
    pbVar4 = ((byte *)GEN_TOP(*puVar12));
    pbVar7 = &REFG(undefined1, 0x10ea940);
    do {
      bVar1 = *pbVar4;
      bVar16 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_00ad23a0: ;
        iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
        goto LAB_00ad23a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar16 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_00ad23a0;
      pbVar4 = pbVar4 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00ad23a5: ;
    if (iVar5 != 0) {
      return 0;
    }
    F_00ad5b00(((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + 0xa8))) GEN_EDX_ARG);
    do {
      F_0042b630(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
      F_0042b630(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
      F_0042b630(((undefined1 *)(gen_frame + 0xd8)) GEN_EDX_ARG);
      F_0042b630(((undefined1 *)(gen_frame + 0x12c)) GEN_EDX_ARG);
      F_0042b630(((undefined1 *)(gen_frame + 0x180)) GEN_EDX_ARG);
      for (puVar15 = ((undefined4 *)GEN_TOP(puVar12[2])); puVar15 != ((undefined4 *)GEN_TOP(0x0));
          puVar15 = ((undefined4 *)GEN_TOP(puVar15[3]))) {
        pbVar4 = ((byte *)GEN_TOP(*puVar15));
        pcVar8 = "title";
        pbVar7 = pbVar4;
        do {
          bVar1 = *pbVar7;
          bVar16 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_00ad2430: ;
            iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_00ad2435;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar16 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_00ad2430;
          pbVar7 = pbVar7 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00ad2435: ;
        if (iVar5 == 0) {
          uVar2 = puVar15[1];
          F_0042e430(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,uVar2);
        }
        else {
          pcVar8 = ((char *)REFP(0x10ea950));
          pbVar7 = pbVar4;
          do {
            bVar1 = *pbVar7;
            bVar16 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_00ad2474: ;
              iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_00ad2479;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar16 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_00ad2474;
            pbVar7 = pbVar7 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_00ad2479: ;
          if (iVar5 == 0) {
            uVar2 = puVar15[1];
            F_0042e430(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG,uVar2);
          }
          else {
            pcVar8 = ((char *)REFP(0x10ea958));
            pbVar7 = pbVar4;
            do {
              bVar1 = *pbVar7;
              bVar16 = bVar1 < (byte)*pcVar8;
              if (bVar1 != *pcVar8) {
LAB_00ad24b8: ;
                iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                goto LAB_00ad24bd;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar16 = bVar1 < (byte)pcVar8[1];
              if (bVar1 != pcVar8[1]) goto LAB_00ad24b8;
              pbVar7 = pbVar7 + 2;
              pcVar8 = pcVar8 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
LAB_00ad24bd: ;
            if (iVar5 == 0) {
              uVar2 = puVar15[1];
              uVar3 = F_00c4c74c(uVar2);
              (*(int *)(gen_frame + 0x4)) = (int)uVar3 >> 0x1f;
              (*(uint *)(gen_frame + 0x0)) = uVar3;
              F_00c4f4ca(((undefined1 *)(gen_frame + 0x29c)),&(*(uint *)(gen_frame + 0x0)));
              (*(char *)(gen_frame + 0xca)) = (*(char *)(gen_frame + 0x2ac)) + '\x01';
              (*(undefined1 *)(gen_frame + 0xcb)) = (*(undefined1 *)(gen_frame + 0x2a8));
              (*(short *)(gen_frame + 0xc8)) = (short)(*(undefined4 *)(gen_frame + 0x2b0)) + 0x76c;
              (*(undefined1 *)(gen_frame + 0xcc)) = (*(undefined1 *)(gen_frame + 0x2a4));
              (*(undefined1 *)(gen_frame + 0xcd)) = (*(undefined1 *)(gen_frame + 0x2a0));
              (*(undefined1 *)(gen_frame + 0xce)) = ((undefined1 *)(gen_frame + 0x29c))[0];
            }
            else {
              pcVar8 = ((char *)REFP(0x10ea964));
              pbVar7 = pbVar4;
              do {
                bVar1 = *pbVar7;
                bVar16 = bVar1 < (byte)*pcVar8;
                if (bVar1 != *pcVar8) {
LAB_00ad2558: ;
                  iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                  goto LAB_00ad255d;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar7[1];
                bVar16 = bVar1 < (byte)pcVar8[1];
                if (bVar1 != pcVar8[1]) goto LAB_00ad2558;
                pbVar7 = pbVar7 + 2;
                pcVar8 = pcVar8 + 2;
              } while (bVar1 != 0);
              iVar5 = 0;
LAB_00ad255d: ;
              if (iVar5 == 0) {
                uVar2 = puVar15[1];
                uVar3 = F_00c4c74c(uVar2);
                (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = ((undefined4 *)GEN_TOP(((int)uVar3 >> 0x1f)));
                (*(uint *)(gen_frame + 0x10)) = uVar3;
                F_00c4f4ca(((undefined1 *)(gen_frame + 0x29c)),&(*(uint *)(gen_frame + 0x10)));
                (*(char *)(gen_frame + 0xd2)) = (*(char *)(gen_frame + 0x2ac)) + '\x01';
                (*(undefined1 *)(gen_frame + 0xd3)) = (*(undefined1 *)(gen_frame + 0x2a8));
                (*(short *)(gen_frame + 0xd0)) = (short)(*(undefined4 *)(gen_frame + 0x2b0)) + 0x76c;
                (*(undefined1 *)(gen_frame + 0xd4)) = (*(undefined1 *)(gen_frame + 0x2a4));
                (*(undefined1 *)(gen_frame + 0xd5)) = (*(undefined1 *)(gen_frame + 0x2a0));
                (*(undefined1 *)(gen_frame + 0xd6)) = ((undefined1 *)(gen_frame + 0x29c))[0];
              }
              else {
                pbVar11 = &REFG(undefined1, 0x10ea96c);
                pbVar7 = pbVar4;
                do {
                  bVar1 = *pbVar7;
                  bVar16 = bVar1 < *pbVar11;
                  if (bVar1 != *pbVar11) {
LAB_00ad25f8: ;
                    iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                    goto LAB_00ad25fd;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar7[1];
                  bVar16 = bVar1 < pbVar11[1];
                  if (bVar1 != pbVar11[1]) goto LAB_00ad25f8;
                  pbVar7 = pbVar7 + 2;
                  pbVar11 = pbVar11 + 2;
                } while (bVar1 != 0);
                iVar5 = 0;
LAB_00ad25fd: ;
                if (iVar5 == 0) {
                  uVar2 = puVar15[1];
                  F_0042e430(((undefined1 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar2);
                }
                else {
                  pbVar11 = &REFG(undefined1, 0x10ea974);
                  pbVar7 = pbVar4;
                  do {
                    bVar1 = *pbVar7;
                    bVar16 = bVar1 < *pbVar11;
                    if (bVar1 != *pbVar11) {
LAB_00ad2640: ;
                      iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                      goto LAB_00ad2645;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar7[1];
                    bVar16 = bVar1 < pbVar11[1];
                    if (bVar1 != pbVar11[1]) goto LAB_00ad2640;
                    pbVar7 = pbVar7 + 2;
                    pbVar11 = pbVar11 + 2;
                  } while (bVar1 != 0);
                  iVar5 = 0;
LAB_00ad2645: ;
                  if (iVar5 == 0) {
                    uVar2 = puVar15[1];
                    F_0042e430(((undefined1 *)(gen_frame + 0x180)) GEN_EDX_ARG,uVar2);
                  }
                  else {
                    pcVar8 = ((char *)REFP(0x10ea97c));
                    pbVar7 = pbVar4;
                    do {
                      bVar1 = *pbVar7;
                      bVar16 = bVar1 < (byte)*pcVar8;
                      if (bVar1 != *pcVar8) {
LAB_00ad2684: ;
                        iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                        goto LAB_00ad2689;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar7[1];
                      bVar16 = bVar1 < (byte)pcVar8[1];
                      if (bVar1 != pcVar8[1]) goto LAB_00ad2684;
                      pbVar7 = pbVar7 + 2;
                      pcVar8 = pcVar8 + 2;
                    } while (bVar1 != 0);
                    iVar5 = 0;
LAB_00ad2689: ;
                    if (iVar5 == 0) {
                      uVar2 = puVar15[1];
                      F_0042e430(((undefined1 *)(gen_frame + 0x12c)) GEN_EDX_ARG,uVar2);
                    }
                    else {
                      pcVar8 = ((char *)REFP(0x10ea98c));
                      do {
                        bVar1 = *pbVar4;
                        bVar16 = bVar1 < (byte)*pcVar8;
                        if (bVar1 != *pcVar8) {
LAB_00ad26c5: ;
                          iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                          goto LAB_00ad26ca;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar4[1];
                        bVar16 = bVar1 < (byte)pcVar8[1];
                        if (bVar1 != pcVar8[1]) goto LAB_00ad26c5;
                        pbVar4 = pbVar4 + 2;
                        pcVar8 = pcVar8 + 2;
                      } while (bVar1 != 0);
                      iVar5 = 0;
LAB_00ad26ca: ;
                      if (iVar5 == 0) {
                        uVar2 = puVar15[1];
                        uVar3 = F_00c4c74c(uVar2);
                        (*(uint *)(gen_frame + 0x1d4)) = uVar3;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      F_00ad6270(((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + 0xa8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
      puVar12 = ((undefined4 *)GEN_TOP(puVar12[3]));
      F_0042c880(((undefined1 *)(gen_frame + 0x180)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x12c)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0xd8)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
    } while (puVar12 != ((undefined4 *)GEN_TOP(0x0)));
  }
  uVar3 = F_00bc86e0((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x10ea994)));
  if (uVar3 != 0) {
    puVar12 = *((undefined4 * PTR32 *)GEN_TOP((uVar3 + 8)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar12;
    if (puVar12 != ((undefined4 *)GEN_TOP(0x0))) {
      pbVar4 = ((byte *)GEN_TOP(*puVar12));
      pcVar8 = ((char *)REFP(0x10ea9ac));
      do {
        bVar1 = *pbVar4;
        bVar16 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_00ad2795: ;
          iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00ad279a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar16 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_00ad2795;
        pbVar4 = pbVar4 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00ad279a: ;
      if (iVar5 != 0) {
        return 0;
      }
      F_00ad6a20(((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + 0xb8))) GEN_EDX_ARG);
      do {
        F_0042b630(((undefined1 *)(gen_frame + 0x234)) GEN_EDX_ARG);
        (*(uint * PTR32 *)(gen_frame + 0x28c)) = ((uint *)GEN_TOP(0x0));
        (*(uint * PTR32 *)(gen_frame + 0x290)) = ((uint *)GEN_TOP(0x0));
        (*(uint * PTR32 *)(gen_frame + 0x294)) = ((uint *)GEN_TOP(0x0));
        puVar15 = ((undefined4 *)GEN_TOP(puVar12[2]));
        (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar15;
        while ((*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar15, puVar15 != ((undefined4 *)GEN_TOP(0x0))) {
          pbVar4 = ((byte *)GEN_TOP(*puVar15));
          pcVar8 = "label";
          do {
            bVar1 = *pbVar4;
            bVar16 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_00ad2807: ;
              iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_00ad280c;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar16 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_00ad2807;
            pbVar4 = pbVar4 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_00ad280c: ;
          if (iVar5 == 0) {
            uVar2 = puVar15[1];
            F_0042e430(((undefined1 *)(gen_frame + 0x234)) GEN_EDX_ARG,uVar2);
          }
          pbVar4 = ((byte *)GEN_TOP(*puVar15));
          pcVar8 = "mainCategoryId";
          do {
            bVar1 = *pbVar4;
            bVar16 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_00ad2846: ;
              iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_00ad284b;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar16 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_00ad2846;
            pbVar4 = pbVar4 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_00ad284b: ;
          if (iVar5 == 0) {
            uVar3 = F_00c4c74c(puVar15[1]);
            (*(uint *)(gen_frame + 0x288)) = uVar3;
          }
          pbVar4 = ((byte *)GEN_TOP(*puVar15));
          pcVar8 = ((char *)REFP(0x10ea9d4));
          do {
            bVar1 = *pbVar4;
            bVar16 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_00ad2885: ;
              iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_00ad288a;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar16 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_00ad2885;
            pbVar4 = pbVar4 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_00ad288a: ;
          if (iVar5 == 0) {
            F_0042b630(&(*(uint *)(gen_frame + 0x1dc)) GEN_EDX_ARG);
            iVar5 = puVar15[2];
            (*(int *)(gen_frame + 0x8)) = iVar5;
            F_00ad52a0(&(*(uint * PTR32 *)(gen_frame + 0x28c)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),(*(uint * PTR32 *)(gen_frame + 0x28c)),(*(uint * PTR32 *)(gen_frame + 0x290)));
            puVar14 = (*(uint * PTR32 *)(gen_frame + 0x28c));
            while (iVar5 != 0) {
              for (puVar12 = *((undefined4 * PTR32 *)GEN_TOP((iVar5 + 8))); puVar12 != ((undefined4 *)GEN_TOP(0x0));
                  puVar12 = ((undefined4 *)GEN_TOP(puVar12[3]))) {
                pbVar4 = ((byte *)GEN_TOP(*puVar12));
                pcVar8 = "label";
                pbVar7 = pbVar4;
                do {
                  bVar1 = *pbVar7;
                  bVar16 = bVar1 < (byte)*pcVar8;
                  if (bVar1 != *pcVar8) {
LAB_00ad2910: ;
                    iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                    goto LAB_00ad2915;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar7[1];
                  bVar16 = bVar1 < (byte)pcVar8[1];
                  if (bVar1 != pcVar8[1]) goto LAB_00ad2910;
                  pbVar7 = pbVar7 + 2;
                  pcVar8 = pcVar8 + 2;
                } while (bVar1 != 0);
                iVar5 = 0;
LAB_00ad2915: ;
                if (iVar5 == 0) {
                  uVar2 = puVar12[1];
                  F_0042e430(&(*(uint *)(gen_frame + 0x1dc)) GEN_EDX_ARG,uVar2);
                }
                else {
                  pcVar8 = "subCategoryId";
                  do {
                    bVar1 = *pbVar4;
                    bVar16 = bVar1 < (byte)*pcVar8;
                    if (bVar1 != *pcVar8) {
LAB_00ad2951: ;
                      iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                      goto LAB_00ad2956;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar4[1];
                    bVar16 = bVar1 < (byte)pcVar8[1];
                    if (bVar1 != pcVar8[1]) goto LAB_00ad2951;
                    pbVar4 = pbVar4 + 2;
                    pcVar8 = pcVar8 + 2;
                  } while (bVar1 != 0);
                  iVar5 = 0;
LAB_00ad2956: ;
                  if (iVar5 == 0) {
                    uVar2 = puVar12[1];
                    uVar3 = F_00c4c74c(uVar2);
                    (*(uint *)(gen_frame + 0x230)) = uVar3;
                  }
                }
                puVar14 = (*(uint * PTR32 *)(gen_frame + 0x28c));
              }
              if ((&(*(uint *)(gen_frame + 0x1dc)) < (*(uint * PTR32 *)(gen_frame + 0x290))) && (puVar14 <= &(*(uint *)(gen_frame + 0x1dc)))) {
                iVar5 = (int)&(*(uint *)(gen_frame + 0x1dc)) - (int)puVar14;
                if ((*(uint * PTR32 *)(gen_frame + 0x290)) == (*(uint * PTR32 *)(gen_frame + 0x294))) {
                  iVar6 = ((int)(*(uint * PTR32 *)(gen_frame + 0x290)) - (int)puVar14) / 0x58;
                  if (iVar6 == -1) {
LAB_00ad2b86: ;
                    
                    F_00c4579a(((char *)REFP(0x108497c)));
                  }
                  uVar3 = ((int)(*(uint * PTR32 *)(gen_frame + 0x294)) - (int)puVar14) / 0x58;
                  uVar13 = iVar6 + 1;
                  if (uVar3 < uVar13) {
                    if (-(uVar3 >> 1) - 1 < uVar3) {
                      uVar3 = 0;
                    }
                    else {
                      uVar3 = uVar3 + (uVar3 >> 1);
                    }
                    if (uVar3 < uVar13) {
                      uVar3 = uVar13;
                    }
                    F_00ad5560(&(*(uint * PTR32 *)(gen_frame + 0x28c)) GEN_EDX_ARG,uVar3);
                    puVar14 = (*(uint * PTR32 *)(gen_frame + 0x28c));
                  }
                }
                puVar9 = (*(uint * PTR32 *)(gen_frame + 0x290));
                if ((*(uint * PTR32 *)(gen_frame + 0x290)) != ((uint *)GEN_TOP(0x0))) {
                  F_0042cbc0((*(uint * PTR32 *)(gen_frame + 0x290)) GEN_EDX_ARG,puVar14 + (iVar5 / 0x58) * 0x16);
                  puVar9[0x15] = (puVar14 + (iVar5 / 0x58) * 0x16)[0x15];
                  puVar9 = (*(uint * PTR32 *)(gen_frame + 0x290));
                  puVar14 = (*(uint * PTR32 *)(gen_frame + 0x28c));
                }
              }
              else {
                if ((*(uint * PTR32 *)(gen_frame + 0x290)) == (*(uint * PTR32 *)(gen_frame + 0x294))) {
                  iVar5 = ((int)(*(uint * PTR32 *)(gen_frame + 0x290)) - (int)puVar14) / 0x58;
                  if (iVar5 == -1) goto LAB_00ad2b86;
                  uVar3 = ((int)(*(uint * PTR32 *)(gen_frame + 0x294)) - (int)puVar14) / 0x58;
                  uVar13 = iVar5 + 1;
                  if (uVar3 < uVar13) {
                    if (-(uVar3 >> 1) - 1 < uVar3) {
                      uVar3 = 0;
                    }
                    else {
                      uVar3 = uVar3 + (uVar3 >> 1);
                    }
                    if (uVar3 < uVar13) {
                      uVar3 = uVar13;
                    }
                    F_00ad5560(&(*(uint * PTR32 *)(gen_frame + 0x28c)) GEN_EDX_ARG,uVar3);
                    puVar14 = (*(uint * PTR32 *)(gen_frame + 0x28c));
                  }
                }
                puVar9 = (*(uint * PTR32 *)(gen_frame + 0x290));
                if ((*(uint * PTR32 *)(gen_frame + 0x290)) != ((uint *)GEN_TOP(0x0))) {
                  F_0042cbc0((*(uint * PTR32 *)(gen_frame + 0x290)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x1dc)));
                  puVar9[0x15] = (*(uint *)(gen_frame + 0x230));
                  puVar9 = (*(uint * PTR32 *)(gen_frame + 0x290));
                  puVar14 = (*(uint * PTR32 *)(gen_frame + 0x28c));
                }
              }
              (*(uint * PTR32 *)(gen_frame + 0x290)) = puVar9 + 0x16;
              iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0xc)));
              (*(int *)(gen_frame + 0x8)) = iVar5;
              puVar12 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
              puVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
            }
            F_0042c880(&(*(uint *)(gen_frame + 0x1dc)) GEN_EDX_ARG);
          }
          puVar15 = ((undefined4 *)GEN_TOP(puVar15[3]));
          (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar15;
        }
        F_00ad6af0(((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + 0xb8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x234)));
        puVar12 = ((undefined4 *)GEN_TOP(puVar12[3]));
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar12;
        F_0048a290(&(*(uint * PTR32 *)(gen_frame + 0x28c)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x234)) GEN_EDX_ARG);
      } while (puVar12 != ((undefined4 *)GEN_TOP(0x0)));
    }
    uVar3 = F_00bc86e0((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x10ea9fc)));
    iVar5 = (*(int *)(gen_frame + 0x18));
    if (uVar3 != 0) {
      puVar12 = *((undefined4 * PTR32 *)GEN_TOP((uVar3 + 8)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar12;
      if (puVar12 != ((undefined4 *)GEN_TOP(0x0))) {
        pbVar4 = ((byte *)GEN_TOP(*puVar12));
        pbVar7 = &REFG(undefined1, 0x10eaa10);
        do {
          bVar1 = *pbVar4;
          bVar16 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00ad2b90: ;
            iVar6 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_00ad2b95;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar16 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00ad2b90;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00ad2b95: ;
        if (iVar6 != 0) {
          return 0;
        }
        F_00ad53f0(((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + 200))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + 200))),
                     *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + 0xcc))));
        do {
          F_0042b630(&(*(uint *)(gen_frame + 0x1dc)) GEN_EDX_ARG);
          for (puVar12 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x1c))[2])); puVar12 != ((undefined4 *)GEN_TOP(0x0));
              puVar12 = ((undefined4 *)GEN_TOP(puVar12[3]))) {
            pbVar4 = ((byte *)GEN_TOP(*puVar12));
            pcVar8 = "title";
            pbVar7 = pbVar4;
            do {
              bVar1 = *pbVar7;
              bVar16 = bVar1 < (byte)*pcVar8;
              if (bVar1 != *pcVar8) {
LAB_00ad2c10: ;
                iVar6 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                goto LAB_00ad2c15;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar16 = bVar1 < (byte)pcVar8[1];
              if (bVar1 != pcVar8[1]) goto LAB_00ad2c10;
              pbVar7 = pbVar7 + 2;
              pcVar8 = pcVar8 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_00ad2c15: ;
            if (iVar6 == 0) {
              uVar2 = puVar12[1];
              F_0042e430(&(*(uint *)(gen_frame + 0x1dc)) GEN_EDX_ARG,uVar2);
            }
            else {
              ppuVar10 = (*(undefined * PTR32 (*)[1])REFP(0x10eaa20));
              do {
                bVar1 = *pbVar4;
                bVar16 = bVar1 < *(byte *)ppuVar10;
                if (bVar1 != *(byte *)ppuVar10) {
LAB_00ad2c51: ;
                  iVar6 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                  goto LAB_00ad2c56;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar16 = bVar1 < *((byte *)GEN_TOP(((int)ppuVar10 + 1)));
                if (bVar1 != *((byte *)GEN_TOP(((int)ppuVar10 + 1)))) goto LAB_00ad2c51;
                pbVar4 = pbVar4 + 2;
                ppuVar10 = ((undefined * PTR32 *)GEN_TOP(((int)ppuVar10 + 2)));
              } while (bVar1 != 0);
              iVar6 = 0;
LAB_00ad2c56: ;
              if (iVar6 == 0) {
                uVar2 = puVar12[1];
                uVar3 = F_00c4c74c(uVar2);
                (*(uint *)(gen_frame + 0x230)) = uVar3;
              }
            }
          }
          F_00ad63d0(((undefined *)GEN_TOP((iVar5 + 200))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x1dc)));
          puVar12 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x1c))[3]));
          (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar12;
          F_0042c880(&(*(uint *)(gen_frame + 0x1dc)) GEN_EDX_ARG);
        } while (puVar12 != ((undefined4 *)GEN_TOP(0x0)));
      }
      uVar3 = F_00bc86e0((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x10eaa24)));
      if (uVar3 != 0) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + 0xd8)));
        F_00ad5470(((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + 0xd8))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + 0xd8))),
                     *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + 0xdc))));
        puVar12 = *((undefined4 * PTR32 *)GEN_TOP((uVar3 + 8)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar12;
        if (puVar12 != ((undefined4 *)GEN_TOP(0x0))) {
          pbVar4 = ((byte *)GEN_TOP(*puVar12));
          pbVar7 = &REFG(undefined1, 0x10eaa34);
          do {
            bVar1 = *pbVar4;
            bVar16 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_00ad2d27: ;
              iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_00ad2d2c;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar16 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_00ad2d27;
            pbVar4 = pbVar4 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_00ad2d2c: ;
          if (iVar5 != 0) {
            return 0;
          }
          do {
            puVar12 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
            F_0042b630(((undefined1 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
            for (puVar12 = ((undefined4 *)GEN_TOP(puVar12[2])); puVar12 != ((undefined4 *)GEN_TOP(0x0));
                puVar12 = ((undefined4 *)GEN_TOP(puVar12[3]))) {
              pbVar4 = ((byte *)GEN_TOP(*puVar12));
              pbVar11 = &REFG(undefined1, 0x10eaa3c);
              pbVar7 = pbVar4;
              do {
                bVar1 = *pbVar7;
                bVar16 = bVar1 < *pbVar11;
                if (bVar1 != *pbVar11) {
LAB_00ad2da0: ;
                  iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                  goto LAB_00ad2da5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar7[1];
                bVar16 = bVar1 < pbVar11[1];
                if (bVar1 != pbVar11[1]) goto LAB_00ad2da0;
                pbVar7 = pbVar7 + 2;
                pbVar11 = pbVar11 + 2;
              } while (bVar1 != 0);
              iVar5 = 0;
LAB_00ad2da5: ;
              if (iVar5 == 0) {
                for (puVar15 = ((undefined4 *)GEN_TOP(puVar12[2])); puVar15 != ((undefined4 *)GEN_TOP(0x0));
                    puVar15 = ((undefined4 *)GEN_TOP(puVar15[3]))) {
                  pbVar4 = ((byte *)GEN_TOP(*puVar15));
                  pcVar8 = "mainCategoryId";
                  pbVar7 = pbVar4;
                  do {
                    bVar1 = *pbVar7;
                    bVar16 = bVar1 < (byte)*pcVar8;
                    if (bVar1 != *pcVar8) {
LAB_00ad2df0: ;
                      iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                      goto LAB_00ad2df5;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar7[1];
                    bVar16 = bVar1 < (byte)pcVar8[1];
                    if (bVar1 != pcVar8[1]) goto LAB_00ad2df0;
                    pbVar7 = pbVar7 + 2;
                    pcVar8 = pcVar8 + 2;
                  } while (bVar1 != 0);
                  iVar5 = 0;
LAB_00ad2df5: ;
                  if (iVar5 == 0) {
                    uVar2 = puVar15[1];
                    uVar3 = F_00c4c74c(uVar2);
                    (*(uint *)(gen_frame + 0x1d8)) = uVar3;
                  }
                  else {
                    pcVar8 = "subCategoryId";
                    do {
                      bVar1 = *pbVar4;
                      bVar16 = bVar1 < (byte)*pcVar8;
                      if (bVar1 != *pcVar8) {
LAB_00ad2e31: ;
                        iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                        goto LAB_00ad2e36;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar4[1];
                      bVar16 = bVar1 < (byte)pcVar8[1];
                      if (bVar1 != pcVar8[1]) goto LAB_00ad2e31;
                      pbVar4 = pbVar4 + 2;
                      pcVar8 = pcVar8 + 2;
                    } while (bVar1 != 0);
                    iVar5 = 0;
LAB_00ad2e36: ;
                    if (iVar5 == 0) {
                      uVar2 = puVar15[1];
                      uVar3 = F_00c4c74c(uVar2);
                      (*(uint *)(gen_frame + 0x1dc)) = uVar3;
                    }
                  }
                }
              }
              else {
                pbVar7 = &REFG(undefined1, 0x10eaa64);
                do {
                  bVar1 = *pbVar4;
                  bVar16 = bVar1 < *pbVar7;
                  if (bVar1 != *pbVar7) {
LAB_00ad2e80: ;
                    iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                    goto LAB_00ad2e85;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar4[1];
                  bVar16 = bVar1 < pbVar7[1];
                  if (bVar1 != pbVar7[1]) goto LAB_00ad2e80;
                  pbVar4 = pbVar4 + 2;
                  pbVar7 = pbVar7 + 2;
                } while (bVar1 != 0);
                iVar5 = 0;
LAB_00ad2e85: ;
                if (iVar5 == 0) {
                  uVar2 = puVar12[1];
                  F_0042e430(((undefined1 *)(gen_frame + 0x1e0)) GEN_EDX_ARG,uVar2);
                }
              }
            }
            F_00ad6460((*(undefined4 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x1d8)));
            puVar12 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x1c))[3]));
            (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar12;
            F_0042c880(((undefined1 *)(gen_frame + 0x1e0)) GEN_EDX_ARG);
          } while (puVar12 != ((undefined4 *)GEN_TOP(0x0)));
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00ad2ef0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ad2ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xad2ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  byte local_5;
  
  local_5 = 0;
  if ((1 < param_1) ||
     ((piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 8))), piVar1 != ((int *)GEN_TOP(0x0)) &&
      (*((int *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) == 1)))) {
    return 0;
  }
  if ((*((int *)GEN_TOP(((int)this + param_1 * 4 + 0x10))) == 0) || (piVar1 == ((int *)GEN_TOP(0x0)))) {
    return 1;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_FWD);
  if (*((char *)GEN_TOP((uVar2 + 0x220))) != '\0') {
    return 0;
  }
  uVar3 = F_00acf860(uVar2,param_2);
  if (0 < (int)uVar3) {
    F_00acf810(this GEN_EDX_ARG,param_1,1);
    return 1;
  }
  if ((int)uVar3 < 0) {
    F_00acf810(this GEN_EDX_ARG,param_1,1);
    return 0;
  }
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x10))))) {
  case 1: ;
    if (param_3 != 0x10c) {
      return 0;
    }
    local_5 = F_00ad1dd0(uVar2,param_2);
    break;
  default: ;
    goto switchD_00ad2fa2_caseD_2;
  case 3: ;
    if (param_3 != 0xe8) {
      return 0;
    }
    local_5 = F_00ad2320(uVar2,param_2);
    break;
  case 4: ;
    if (param_3 != 0xb8) {
      return 0;
    }
    local_5 = F_00ad12e0(uVar2,param_2);
    break;
  case 5: ;
    if (param_3 != 0xb8) {
      return 0;
    }
    return 0;
  case 6: ;
    if (param_3 != 0xb8) {
      return 0;
    }
    local_5 = F_00ad1700(uVar2,param_2);
    break;
  case 7: ;
    if (param_3 != 0x174) {
      return 0;
    }
    local_5 = F_00ad1850(uVar2,param_2);
    break;
  case 8: ;
    if (param_3 != 0xfc) {
      return 0;
    }
    local_5 = F_00acf980(uVar2,param_2);
    break;
  case 9: ;
  case 0xb: ;
    if (param_3 == 0xa8) {
      return 0;
    }
    return 0;
  case 10: ;
    if (param_3 != 0xb8) {
      return 0;
    }
    local_5 = F_00ad1c60(uVar2,param_2);
  }
  if (local_5 != 0) {
    F_00acf810(this GEN_EDX_ARG,param_1,1);
  }
switchD_00ad2fa2_caseD_2: ;
  return local_5;
}

/* ref: FUN_00ad30e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ad30e0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad30e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0xb8 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x10c GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x160 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_00ad3120 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ad3120(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad3120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00ad3130 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ad3130(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad3130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00ad3140 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ad3140(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad3140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00ad3150 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ad3150(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad3150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00ad3160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3160(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad3160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad31a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad31a0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad31a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad31d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad31d0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad31d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad3200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3200(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad3200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad3230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3230(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad3230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad3260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3260(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad3260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad3290 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3290(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad3290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad32c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad32c0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad32c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad34a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad34a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad34a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x1b8,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad34d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad34d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad34d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x68,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad3500 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad3500(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad3500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x170,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad3530 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad3530(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad3530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x58,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad3560 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad3560(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad3560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x58,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad3590 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad3590(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad3590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x5c,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad35c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad35c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad35c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x54,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad3660 */
GEN_OWN GEN_FRAME uint F_00ad3660(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3670 */
GEN_OWN GEN_FRAME uint F_00ad3670(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3680 */
GEN_OWN GEN_FRAME uint F_00ad3680(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3690 */
GEN_OWN GEN_FRAME uint F_00ad3690(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad36a0 */
GEN_OWN GEN_FRAME uint F_00ad36a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad36a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad36b0 */
GEN_OWN GEN_FRAME uint F_00ad36b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad36b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad36c0 */
GEN_OWN GEN_FRAME uint F_00ad36c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad36c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad36d0 */
GEN_OWN GEN_FRAME uint F_00ad36d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad36d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad36e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad36e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad36e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_1 + 0x54);
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = *((undefined4 *)GEN_TOP((param_1 + 0xa8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = *((undefined4 *)GEN_TOP((param_1 + 0xac)));
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = *((undefined4 *)GEN_TOP((param_1 + 0xb0)));
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = *((undefined4 *)GEN_TOP((param_1 + 0xb4)));
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0xb8))) GEN_EDX_ARG,param_1 + 0xb8);
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x10c))) GEN_EDX_ARG,param_1 + 0x10c);
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x160))) GEN_EDX_ARG,param_1 + 0x160);
  *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = *((undefined4 *)GEN_TOP((param_1 + 0x1b4)));
  return (uint)this;
}

/* ref: FUN_00ad3780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad3780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  return (uint)this;
}

/* ref: FUN_00ad37a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad37a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad37a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  return (uint)this;
}

/* ref: FUN_00ad37c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad37c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad37c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00ad37e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad37e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad37e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,param_1 + 0x58);
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = *((undefined4 *)GEN_TOP((param_1 + 0xac)));
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = *((undefined4 *)GEN_TOP((param_1 + 0xb0)));
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG,param_1 + 0xb4);
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = *((undefined4 *)GEN_TOP((param_1 + 0x108)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = *((undefined4 *)GEN_TOP((param_1 + 0x10c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x110))) = *((undefined4 *)GEN_TOP((param_1 + 0x110)));
  return (uint)this;
}

/* ref: FUN_00ad3860 */
GEN_OWN GEN_FRAME uint F_00ad3860(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3870 */
GEN_OWN GEN_FRAME uint F_00ad3870(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3880 */
GEN_OWN GEN_FRAME uint F_00ad3880(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3890 */
GEN_OWN GEN_FRAME uint F_00ad3890(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad38a0 */
GEN_OWN GEN_FRAME uint F_00ad38a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad38a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad38b0 */
GEN_OWN GEN_FRAME uint F_00ad38b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad38b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad38c0 */
GEN_OWN GEN_FRAME uint F_00ad38c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad38c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad38d0 */
GEN_OWN GEN_FRAME uint F_00ad38d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad38d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad38e0 */
GEN_OWN GEN_FRAME uint F_00ad38e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad38e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad38f0 */
GEN_OWN GEN_FRAME uint F_00ad38f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad38f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3900 */
GEN_OWN GEN_FRAME uint F_00ad3900(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3910 */
GEN_OWN GEN_FRAME uint F_00ad3910(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3920 */
GEN_OWN GEN_FRAME uint F_00ad3920(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3930 */
GEN_OWN GEN_FRAME uint F_00ad3930(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3940 */
GEN_OWN GEN_FRAME uint F_00ad3940(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad3950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042ccf0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  return (uint)this;
}

/* ref: FUN_00ad3970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad3970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042ccf0(this GEN_EDX_FWD,param_1);
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_1 + 0x54);
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = *((undefined4 *)GEN_TOP((param_1 + 0xa8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = *((undefined4 *)GEN_TOP((param_1 + 0xac)));
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = *((undefined4 *)GEN_TOP((param_1 + 0xb0)));
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = *((undefined4 *)GEN_TOP((param_1 + 0xb4)));
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0xb8))) GEN_EDX_ARG,param_1 + 0xb8);
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x10c))) GEN_EDX_ARG,param_1 + 0x10c);
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x160))) GEN_EDX_ARG,param_1 + 0x160);
  *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = *((undefined4 *)GEN_TOP((param_1 + 0x1b4)));
  return (uint)this;
}

/* ref: FUN_00ad3a10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad3a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042ccf0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  return (uint)this;
}

/* ref: FUN_00ad3a30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad3a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042ccf0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  return (uint)this;
}

/* ref: FUN_00ad3a50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad3a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00ad3a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad3a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_0042ccf0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00ad3aa0 */
GEN_OWN GEN_FRAME uint F_00ad3aa0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3ab0 */
GEN_OWN GEN_FRAME uint F_00ad3ab0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3ac0 */
GEN_OWN GEN_FRAME uint F_00ad3ac0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3ad0 */
GEN_OWN GEN_FRAME uint F_00ad3ad0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3ae0 */
GEN_OWN GEN_FRAME uint F_00ad3ae0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3af0 */
GEN_OWN GEN_FRAME uint F_00ad3af0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3b00 */
GEN_OWN GEN_FRAME uint F_00ad3b00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3b10 */
GEN_OWN GEN_FRAME uint F_00ad3b10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3ba0 */
GEN_OWN GEN_FRAME uint F_00ad3ba0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad3ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this GEN_EDX_ARG,iVar1);
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54)));
    iVar1 = iVar1 + 0x58;
    this = ((undefined *)GEN_TOP(((int)this + 0x58)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad3be0 */
GEN_OWN GEN_FRAME uint F_00ad3be0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3bf0 */
GEN_OWN GEN_FRAME uint F_00ad3bf0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3c00 */
GEN_OWN GEN_FRAME uint F_00ad3c00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3c10 */
GEN_OWN GEN_FRAME uint F_00ad3c10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3c20 */
GEN_OWN GEN_FRAME uint F_00ad3c20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3c30 */
GEN_OWN GEN_FRAME uint F_00ad3c30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3c40 */
GEN_OWN GEN_FRAME uint F_00ad3c40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3c50 */
GEN_OWN GEN_FRAME uint F_00ad3c50(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad3c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad3cc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad3cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58;
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

/* ref: FUN_00ad3d10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad3d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x1b8;
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

/* ref: FUN_00ad3d60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad3d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x68;
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

/* ref: FUN_00ad3db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad3db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x170;
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

/* ref: FUN_00ad3e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad3e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58;
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

/* ref: FUN_00ad3e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad3e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58;
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

/* ref: FUN_00ad3ea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad3ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x5c;
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

/* ref: FUN_00ad3ef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad3ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54;
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

/* ref: FUN_00ad3f30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3f30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad3f30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad3f40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ad3f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad3f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad3f60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3f60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad3f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad3f70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ad3f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad3f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad3f90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3f90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad3f90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad3fa0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ad3fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad3fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad3fc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3fc0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad3fc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad3fd0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ad3fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad3fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad3ff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad3ff0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad3ff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4000 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ad4000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad4000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad4020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4020(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4030 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ad4030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad4030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad4050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4050(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4060 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ad4060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad4060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad4080 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00ad4080(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00ad36e0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ad40a0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00ad40a0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad40a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x54))) = *((undefined4 *)GEN_TOP((param_2 + 0x54)));
  }
  return;
}

/* ref: FUN_00ad40d0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00ad40d0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad40d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x54))) = *((undefined4 *)GEN_TOP((param_2 + 0x54)));
  }
  return;
}

/* ref: FUN_00ad4100 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad4100(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    uVar1 = F_0042cbc0(param_1 + 2 GEN_EDX_ARG,param_2 + 2);
  }
  return uVar1;
}

/* ref: FUN_00ad4130 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00ad4130(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ad4150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad4150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  F_00ad37e0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1 + 2);
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x11c))) GEN_EDX_ARG,param_1 + 0x47);
  return (uint)this;
}

/* ref: FUN_00ad4190 */
GEN_OWN GEN_FRAME uint F_00ad4190(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this GEN_EDX_ARG,iVar1);
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54)));
    iVar1 = iVar1 + 0x58;
    this = ((undefined *)GEN_TOP(((int)this + 0x58)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad41d0 */
GEN_OWN GEN_FRAME uint F_00ad41d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xad41d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  undefined * this;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    puVar3 = ((undefined4 *)GEN_TOP(((int)param_3 + 0xa8)));
    this = param_3;
    puVar2 = param_1 + 0x2a;
    do {
      F_0042ccf0(this GEN_EDX_ARG,puVar2 - 0x2a);
      F_0042ccf0(puVar3 - 0x15 GEN_EDX_ARG,puVar2 - 0x15);
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3[3] = puVar2[3];
      F_0042ccf0(puVar3 + 4 GEN_EDX_ARG,puVar2 + 4);
      F_0042ccf0(puVar3 + 0x19 GEN_EDX_ARG,puVar2 + 0x19);
      F_0042ccf0(puVar3 + 0x2e GEN_EDX_ARG,puVar2 + 0x2e);
      puVar3[0x43] = puVar2[0x43];
      puVar1 = puVar2 + 0x44;
      this = ((undefined *)GEN_TOP(((int)this + 0x1b8)));
      puVar3 = puVar3 + 0x6e;
      puVar2 = puVar2 + 0x6e;
    } while (puVar1 != param_2);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_00ad4290 */
GEN_OWN GEN_FRAME uint F_00ad4290(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this GEN_EDX_ARG,iVar1);
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54)));
    iVar1 = iVar1 + 0x58;
    this = ((undefined *)GEN_TOP(((int)this + 0x58)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad42d0 */
GEN_OWN GEN_FRAME uint F_00ad42d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad42d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this GEN_EDX_ARG,iVar1);
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54)));
    iVar1 = iVar1 + 0x58;
    this = ((undefined *)GEN_TOP(((int)this + 0x58)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4310 */
GEN_OWN GEN_FRAME uint F_00ad4310(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xad4310u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_1;
  puVar2 = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    F_0042ccf0(puVar2 + 2 GEN_EDX_ARG,puVar1 + 2);
    puVar1 = puVar1 + 0x17;
    puVar2 = puVar2 + 0x17;
  } while (puVar1 != param_2);
  return (uint)puVar2;
}

/* ref: FUN_00ad4360 */
GEN_OWN GEN_FRAME uint F_00ad4360(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this GEN_EDX_ARG,iVar1);
    iVar1 = iVar1 + 0x54;
    this = ((undefined *)GEN_TOP(((int)this + 0x54)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad43a0 */
GEN_OWN GEN_FRAME uint F_00ad43a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad43a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1;
    do {
      F_0042ccf0(this GEN_EDX_ARG,iVar1);
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) =
           *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + 0x54 + (int)this)));
      iVar1 = iVar1 + 0x58;
      this = ((undefined *)GEN_TOP(((int)this + 0x58)));
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad43e0 */
GEN_OWN GEN_FRAME unsigned int F_00ad43e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad43e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = *((undefined4 *)GEN_TOP((param_3 + 0x54)));
  }
  return;
}

/* ref: FUN_00ad4410 */
GEN_OWN GEN_FRAME unsigned int F_00ad4410(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00ad36e0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00ad4430 */
GEN_OWN GEN_FRAME unsigned int F_00ad4430(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = *((undefined4 *)GEN_TOP((param_3 + 0x54)));
  }
  return;
}

/* ref: FUN_00ad4460 */
GEN_OWN GEN_FRAME unsigned int F_00ad4460(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = *((undefined4 *)GEN_TOP((param_3 + 0x54)));
  }
  return;
}

/* ref: FUN_00ad4490 */
GEN_OWN GEN_FRAME uint F_00ad4490(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    uVar1 = F_0042cbc0(param_2 + 2 GEN_EDX_ARG,param_3 + 2);
  }
  return uVar1;
}

/* ref: FUN_00ad44c0 */
GEN_OWN GEN_FRAME unsigned int F_00ad44c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad44c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00ad44f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad44f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad44f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4500(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4510 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ad4510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad4510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad4530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4530(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4540 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ad4540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad4540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad4560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4560(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4570 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ad4570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad4570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad4590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4590(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad45a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ad45a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad45a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad45c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad45c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad45c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad45d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ad45d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad45d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad45f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad45f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad45f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4600 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ad4600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad4600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad4620 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4620(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4630 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ad4630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad4630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad4650 */
GEN_OWN GEN_FRAME unsigned int F_00ad4650(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = *((undefined4 *)GEN_TOP((param_3 + 0x54)));
  }
  return;
}

/* ref: FUN_00ad4680 */
GEN_OWN GEN_FRAME unsigned int F_00ad4680(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00ad36e0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00ad46a0 */
GEN_OWN GEN_FRAME unsigned int F_00ad46a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad46a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00ad36e0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00ad46c0 */
GEN_OWN GEN_FRAME unsigned int F_00ad46c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad46c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = *((undefined4 *)GEN_TOP((param_3 + 0x54)));
  }
  return;
}

/* ref: FUN_00ad46f0 */
GEN_OWN GEN_FRAME unsigned int F_00ad46f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad46f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = *((undefined4 *)GEN_TOP((param_3 + 0x54)));
  }
  return;
}

/* ref: FUN_00ad4720 */
GEN_OWN GEN_FRAME unsigned int F_00ad4720(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = *((undefined4 *)GEN_TOP((param_3 + 0x54)));
  }
  return;
}

/* ref: FUN_00ad4750 */
GEN_OWN GEN_FRAME unsigned int F_00ad4750(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = *((undefined4 *)GEN_TOP((param_3 + 0x54)));
  }
  return;
}

/* ref: FUN_00ad4780 */
GEN_OWN GEN_FRAME uint F_00ad4780(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    uVar1 = F_0042cbc0(param_2 + 2 GEN_EDX_ARG,param_3 + 2);
  }
  return uVar1;
}

/* ref: FUN_00ad47b0 */
GEN_OWN GEN_FRAME uint F_00ad47b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad47b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    uVar1 = F_0042cbc0(param_2 + 2 GEN_EDX_ARG,param_3 + 2);
  }
  return uVar1;
}

/* ref: FUN_00ad47e0 */
GEN_OWN GEN_FRAME unsigned int F_00ad47e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad47e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00ad4800 */
GEN_OWN GEN_FRAME unsigned int F_00ad4800(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00ad4820 */
GEN_OWN GEN_FRAME uint F_00ad4820(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1;
    do {
      F_0042ccf0(this GEN_EDX_ARG,iVar1);
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) =
           *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + 0x54 + (int)this)));
      iVar1 = iVar1 + 0x58;
      this = ((undefined *)GEN_TOP(((int)this + 0x58)));
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4860 */
GEN_OWN GEN_FRAME uint F_00ad4860(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad41d0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad4880 */
GEN_OWN GEN_FRAME uint F_00ad4880(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1;
    do {
      F_0042ccf0(this GEN_EDX_ARG,iVar1);
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) =
           *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + 0x54 + (int)this)));
      iVar1 = iVar1 + 0x58;
      this = ((undefined *)GEN_TOP(((int)this + 0x58)));
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad48c0 */
GEN_OWN GEN_FRAME uint F_00ad48c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad48c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1;
    do {
      F_0042ccf0(this GEN_EDX_ARG,iVar1);
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) =
           *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + 0x54 + (int)this)));
      iVar1 = iVar1 + 0x58;
      this = ((undefined *)GEN_TOP(((int)this + 0x58)));
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4900 */
GEN_OWN GEN_FRAME uint F_00ad4900(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad4310(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad4920 */
GEN_OWN GEN_FRAME uint F_00ad4920(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x54) {
    F_0042ccf0(this GEN_EDX_ARG,iVar1);
    this = ((undefined *)GEN_TOP(((int)this + 0x54)));
  }
  return (uint)this;
}

/* ref: FUN_00ad4950 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00ad4950(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    F_00ad37e0(param_1 + 2 GEN_EDX_ARG,param_2 + 2);
    F_0042cbc0(param_1 + 0x47 GEN_EDX_ARG,param_2 + 0x47);
  }
  return;
}

/* ref: FUN_00ad4990 */
GEN_OWN GEN_FRAME uint F_00ad4990(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xad4990u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * this;
  
  if (param_1 != param_2) {
    this = param_3 + 0x18;
    puVar2 = param_3;
    iVar3 = param_1 + 0x60;
    do {
      *puVar2 = *((undefined4 *)GEN_TOP((iVar3 - 0x60)));
      this[-0x17] = *((undefined4 *)GEN_TOP((iVar3 - 0x5c)));
      F_0042ccf0(this - 0x16 GEN_EDX_ARG,iVar3 - 0x58);
      this[-1] = *((undefined4 *)GEN_TOP((iVar3 - 4)));
      F_0042ccf0(this GEN_EDX_ARG,iVar3);
      this[0x15] = *((undefined4 *)GEN_TOP((iVar3 + 0x54)));
      this[0x16] = *((undefined4 *)GEN_TOP((iVar3 + 0x58)));
      F_0042ccf0(this + 0x17 GEN_EDX_ARG,iVar3 + 0x5c);
      this[0x2c] = *((undefined4 *)GEN_TOP((iVar3 + 0xb0)));
      this[0x2d] = *((undefined4 *)GEN_TOP((iVar3 + 0xb4)));
      this[0x2e] = *((undefined4 *)GEN_TOP((iVar3 + 0xb8)));
      F_0042ccf0(this + 0x2f GEN_EDX_ARG,iVar3 + 0xbc);
      iVar1 = iVar3 + 0x110;
      puVar2 = puVar2 + 0x5c;
      this = this + 0x5c;
      iVar3 = iVar3 + 0x170;
    } while (iVar1 != param_2);
    return (uint)puVar2;
  }
  return (uint)param_3;
}

/* ref: FUN_00ad4a50 */
GEN_OWN GEN_FRAME unsigned int F_00ad4a50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4a50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    F_00ad37e0(param_2 + 2 GEN_EDX_ARG,param_3 + 2);
    F_0042cbc0(param_2 + 0x47 GEN_EDX_ARG,param_3 + 0x47);
  }
  return;
}

/* ref: FUN_00ad4a90 */
GEN_OWN GEN_FRAME uint F_00ad4a90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4a90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(this GEN_EDX_ARG,iVar1);
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54)));
    }
    iVar1 = iVar1 + 0x58;
    this = ((undefined *)GEN_TOP(((int)this + 0x58)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4ad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4ad0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00ad0190(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ad4b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4b00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4b10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4b10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ad4b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4b20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4b30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4b30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ad4b40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4b40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4b50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4b50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ad4b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4b60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4b70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ad4b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4b80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4b90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ad4ba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4ba0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4bb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4bb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ad4bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4bc0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4bd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ad4be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4be0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4bf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4bf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ad4c00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad4c00(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad4c10(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad4c20(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad4c30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

