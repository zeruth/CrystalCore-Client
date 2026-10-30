#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_0041fce0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0041fce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x41fce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  F_00423610(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_FWD);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: Common::Configuration::CommandLineParser::vf1 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0041fd00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x41fd00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  undefined1 CVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined * pCVar5;
  uint uVar6;
  undefined * pCVar7;
  undefined * pvVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  uVar10 = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,&REFG(undefined, 0x1088158),REFG(undefined4, 0x108cc50));
  this_00 = this + 0xc;
  uVar3 = F_0042e520(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0);
  bVar11 = uVar3 != REFG(undefined4, 0x108cc50);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (bVar11) {
    do {
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x108815c),REFG(undefined4, 0x108cc50));
      uVar3 = F_0042e520(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar10);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1088160),REFG(undefined4, 0x108cc50));
      uVar10 = F_0042c8b0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar3);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar4 = F_0042d2f0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar3,3);
      pCVar5 = ((undefined *)GEN_TOP(F_0042a990(uVar4 GEN_EDX_ARG)));
      pCVar7 = this + 0x70;
      do {
        CVar1 = *(undefined1 *)pCVar7;
        bVar11 = (byte)CVar1 < (byte)*pCVar5;
        if (CVar1 != *pCVar5) {
LAB_0041fdf0: ;
          iVar9 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_0041fdf5;
        }
        if (CVar1 == (undefined1)0x0) break;
        CVar1 = pCVar7[1];
        bVar11 = (byte)CVar1 < (byte)pCVar5[1];
        if (CVar1 != pCVar5[1]) goto LAB_0041fdf0;
        pCVar7 = pCVar7 + 2;
        pCVar5 = pCVar5 + 2;
      } while (CVar1 != (undefined1)0x0);
      iVar9 = 0;
LAB_0041fdf5: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      if (iVar9 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1088164),REFG(undefined4, 0x108cc50));
        uVar3 = F_0042c8b0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar3);
        F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1088168),REFG(undefined4, 0x108cc50));
        uVar4 = F_0042c8b0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar3 + 1);
        F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        uVar6 = F_0042d2f0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar3 + 1,(uVar4 - uVar3) - 1);
        uVar3 = *(uint *)(this + 100);
        pCVar7 = this + 0x60;
        if ((uVar6 < uVar3) && (uVar2 = *(uint *)pCVar7, uVar2 <= uVar6)) {
          if (uVar3 == *(uint *)(this + 0x68)) {
            F_00423880(pCVar7 GEN_EDX_ARG,1);
          }
          pvVar8 = *(undefined * PTR32 *)(this + 100);
          if (pvVar8 != ((undefined *)GEN_TOP(0x0))) {
            uVar6 = ((int)(uVar6 - uVar2) / 0x54) * 0x54 + *(uint *)pCVar7;
LAB_0041fec8: ;
            F_0042cbc0(pvVar8 GEN_EDX_ARG,uVar6);
          }
        }
        else {
          if (uVar3 == *(uint *)(this + 0x68)) {
            F_00423880(pCVar7 GEN_EDX_ARG,1);
          }
          pvVar8 = *(undefined * PTR32 *)(this + 100);
          if (pvVar8 != ((undefined *)GEN_TOP(0x0))) goto LAB_0041fec8;
        }
        *(int *)(this + 100) = *(int *)(this + 100) + 0x54;
        F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x108816c),REFG(undefined4, 0x108cc50));
        uVar3 = F_0042e520(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar4);
        F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1088170),REFG(undefined4, 0x108cc50));
        uVar4 = F_0042c8b0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar3);
        F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        uVar4 = F_0042d2f0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar3,uVar4 - uVar3);
        uVar3 = *(uint *)(this + 100);
        if ((uVar4 < uVar3) && (uVar6 = *(uint *)pCVar7, uVar6 <= uVar4)) {
          if (uVar3 == *(uint *)(this + 0x68)) {
            F_00423880(pCVar7 GEN_EDX_ARG,1);
          }
          pvVar8 = *(undefined * PTR32 *)(this + 100);
          if (pvVar8 != ((undefined *)GEN_TOP(0x0))) {
            uVar4 = ((int)(uVar4 - uVar6) / 0x54) * 0x54 + *(uint *)pCVar7;
LAB_0041ff97: ;
            F_0042cbc0(pvVar8 GEN_EDX_ARG,uVar4);
          }
        }
        else {
          if (uVar3 == *(uint *)(this + 0x68)) {
            F_00423880(pCVar7 GEN_EDX_ARG,1);
          }
          pvVar8 = *(undefined * PTR32 *)(this + 100);
          if (pvVar8 != ((undefined *)GEN_TOP(0x0))) goto LAB_0041ff97;
        }
        *(int *)(this + 100) = *(int *)(this + 100) + 0x54;
        F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1088158),REFG(undefined4, 0x108cc50));
      uVar3 = F_0042e520(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar10);
      bVar11 = uVar3 != REFG(undefined4, 0x108cc50);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    } while (bVar11);
  }
  uVar3 = (*(int *)(this + 100) - *(int *)(this + 0x60)) * 0x30c30c31;
  *(int *)(this + 8) = (*(int *)(this + 100) - *(int *)(this + 0x60)) / 0x54;
  if (**(char * PTR32 *)this_00 != '\0') {
    uVar3 = F_0042aca0(this_00 GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_00420030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00420030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x420030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  F_00423790(((undefined4 *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,*param_2);
  return (uint)this;
}

/* ref: Common::Configuration::Utf8StringParser::vf1 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00420070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x420070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined * this_01;
  undefined * this_02;
  uint uVar3;
  bool bVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  uVar3 = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,&REFG(undefined, 0x108b1c0),REFG(undefined4, 0x108cc50));
  this_00 = this + 0xc;
  uVar2 = F_0042e520(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0);
  bVar4 = uVar2 != REFG(undefined4, 0x108cc50);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (bVar4) {
    do {
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x108b1c8),REFG(undefined4, 0x108cc50));
      uVar2 = F_0042e520(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar3);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar3 = F_0042bb20(this_00 GEN_EDX_ARG,uVar2);
      if (uVar3 == 0x3c) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x108b1d0),REFG(undefined4, 0x108cc50));
        uVar3 = F_0042c8b0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar2);
        uVar3 = uVar3 + 1;
      }
      else {
        uVar3 = F_0042bb20(this_00 GEN_EDX_ARG,uVar2);
        if (uVar3 == 0x22) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x108b1d4),REFG(undefined4, 0x108cc50));
          uVar3 = F_0042c8b0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar2);
          uVar3 = uVar3 + 1;
        }
        else {
          F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x108b1d8),REFG(undefined4, 0x108cc50));
          uVar3 = F_0042c8b0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar2);
        }
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      if (uVar3 == REFG(undefined4, 0x108cc50)) {
        uVar3 = F_0042a970(this_00 GEN_EDX_ARG);
      }
      uVar2 = F_0042d2f0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar2,uVar3 - uVar2);
      this_01 = this + 0x60;
      if ((uVar2 < *(uint *)(this + 100)) && (uVar1 = *(uint *)this_01, uVar1 <= uVar2)) {
        if (*(int *)(this + 100) == *(int *)(this + 0x68)) {
          F_00423880(this_01 GEN_EDX_ARG,1);
        }
        this_02 = *(undefined * PTR32 *)(this + 100);
        if (this_02 != ((undefined *)GEN_TOP(0x0))) {
          uVar2 = ((int)(uVar2 - uVar1) / 0x54) * 0x54 + *(int *)(this + 0x60);
LAB_00420205: ;
          F_0042cbc0(this_02 GEN_EDX_ARG,uVar2);
        }
      }
      else {
        if (*(uint *)(this + 100) == *(uint *)(this + 0x68)) {
          F_00423880(this_01 GEN_EDX_ARG,1);
        }
        this_02 = *(undefined * PTR32 *)(this + 100);
        if (this_02 != ((undefined *)GEN_TOP(0x0))) goto LAB_00420205;
      }
      *(int *)(this + 100) = *(int *)(this + 100) + 0x54;
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x108b1c0),REFG(undefined4, 0x108cc50));
      uVar2 = F_0042e520(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar3);
      bVar4 = uVar2 != REFG(undefined4, 0x108cc50);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    } while (bVar4);
  }
  uVar3 = (*(int *)(this + 100) - *(int *)(this + 0x60)) / 0x54;
  *(uint *)(this + 8) = uVar3;
  if (**(char * PTR32 *)this_00 != '\0') {
    uVar3 = F_0042aca0(this_00 GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_004202a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004202a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4202a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  F_00423790(((undefined4 *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,*param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108b2a4));
  return (uint)this;
}

/* ref: FUN_004202f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004202f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4202f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  F_00423790(((undefined4 *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,*param_3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108b2b0));
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00420340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00420340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x420340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * this_00;
  int * piVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if ((*((int *)GEN_TOP(((int)this + 8))) != 7) && (*((int *)GEN_TOP(((int)this + 8))) != 7)) {
    this_00 = ((undefined *)GEN_TOP(F_00406b90(0x70,0,0)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      piVar1 = ((int *)GEN_TOP(0x0));
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x64));
      piVar1 = ((int *)GEN_TOP(F_00420030(this_00 GEN_EDX_ARG,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x0)))));
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
    F_004152c0(this GEN_EDX_ARG,piVar1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar1)))(piVar1 GEN_EDX_ARG,1);
  }
  return *((uint *)GEN_TOP(((int)this + 8)));
}

/* ref: FUN_004203b0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004203b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4203b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x64, 12, 4);
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60));
  if ((*((int *)GEN_TOP(((int)this + 8))) != 7) && (*((int *)GEN_TOP(((int)this + 8))) != 7)) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
    (*(int *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD,param_1,&(*(int *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x0)));
    *((uint *)GEN_TOP(((int)this + 8))) = uVar3;
    if (*((int *)GEN_TOP(((int)this + 8))) != 3) {
      if ((*(int *)(gen_frame + 0x4)) != 0) {
        F_00406b30((*(int *)(gen_frame + 0x4)));
      }
      return *((uint *)GEN_TOP(((int)this + 8)));
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x4)),REFG(undefined4, 0x108cc50));
    bVar2 = F_0042b5a0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    if (bVar2 == 0) {
      if ((*(int *)(gen_frame + 0x4)) != 0) {
        F_00406b30((*(int *)(gen_frame + 0x4)));
        (*(int *)(gen_frame + 0x4)) = 0;
      }
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 2;
      uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
    }
    else {
      if ((*(int *)(gen_frame + 0x4)) != 0) {
        F_00406b30((*(int *)(gen_frame + 0x4)));
        (*(int *)(gen_frame + 0x4)) = 0;
      }
      uVar3 = F_00420340(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    return uVar3;
  }
  return *((uint *)GEN_TOP(((int)this + 8)));
}

/* ref: FUN_004204c0 */
GEN_OWN_GS GEN_FRAME byte GEN_STDCALL F_004204c0(GEN_P(ulong * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4204c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ulong * param_1 = (ulong *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x78, 8, 4);
  int iVar1;
  char * pcVar2;
  ulong uVar3;
  ulonglong uVar4;
  char * PTR32 * ppcVar5;
  int iVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x70)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x74));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  F_0042cbc0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,param_2);
  ((int *)(gen_frame + 0x60))[0] = 0;
  ((int *)(gen_frame + 0x60))[1] = 0;
  ((int *)(gen_frame + 0x60))[2] = 0;
  F_00423790(((int *)(gen_frame + 0x60)) GEN_EDX_ARG,100);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x108b2a4));
  F_0041fb20((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if ((*(int *)(gen_frame + 0x8)) != 4) {
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
    F_00423610(((int *)(gen_frame + 0x60)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    return 0;
  }
  iVar1 = (*(int *)(gen_frame + 0x4)) * 0x54;
  iVar6 = 0x10;
  (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
  ppcVar5 = ((char * PTR32 *)GEN_TOP(0x0));
  pcVar2 = ((char *)GEN_TOP(F_0042a990(iVar1 + ((int *)(gen_frame + 0x60))[0] GEN_EDX_ARG)));
  uVar3 = F_00c4abb6(pcVar2,ppcVar5,iVar6);
  *param_1 = uVar3;
  iVar1 = (*(int *)(gen_frame + 0x4)) * 0x54;
  iVar6 = 0x10;
  (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
  ppcVar5 = ((char * PTR32 *)GEN_TOP(0x0));
  pcVar2 = ((char *)GEN_TOP(F_0042a990(iVar1 + ((int *)(gen_frame + 0x60))[0] GEN_EDX_ARG)));
  uVar3 = F_00c4abb6(pcVar2,ppcVar5,iVar6);
  *(short *)(param_1 + 1) = (short)uVar3;
  iVar1 = (*(int *)(gen_frame + 0x4)) * 0x54;
  iVar6 = 0x10;
  (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
  ppcVar5 = ((char * PTR32 *)GEN_TOP(0x0));
  pcVar2 = ((char *)GEN_TOP(F_0042a990(iVar1 + ((int *)(gen_frame + 0x60))[0] GEN_EDX_ARG)));
  uVar3 = F_00c4abb6(pcVar2,ppcVar5,iVar6);
  *((short *)GEN_TOP(((int)param_1 + 6))) = (short)uVar3;
  iVar1 = (*(int *)(gen_frame + 0x4)) * 0x54;
  iVar6 = 0x10;
  (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
  ppcVar5 = ((char * PTR32 *)GEN_TOP(0x0));
  pcVar2 = ((char *)GEN_TOP(F_0042a990(iVar1 + ((int *)(gen_frame + 0x60))[0] GEN_EDX_ARG)));
  uVar4 = F_00c4b01d(pcVar2,ppcVar5,iVar6);
  *((char *)GEN_TOP(((int)param_1 + 0xe))) = (char)(uVar4 >> 8);
  *((char *)GEN_TOP(((int)param_1 + 0xd))) = (char)(uVar4 >> 0x10);
  *((char *)GEN_TOP(((int)param_1 + 0xf))) = (char)uVar4;
  *(char *)(param_1 + 3) = (char)(uVar4 >> 0x18);
  *((char *)GEN_TOP(((int)param_1 + 0xb))) = (char)(uVar4 >> 0x20);
  *((char *)GEN_TOP(((int)param_1 + 10))) = (char)(uVar4 >> 0x28);
  *((char *)GEN_TOP(((int)param_1 + 9))) = (char)(uVar4 >> 0x30);
  *(char *)(param_1 + 2) = (char)(uVar4 >> 0x38);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  F_00423610(((int *)(gen_frame + 0x60)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00420650 */
GEN_OWN_GS GEN_FRAME uint F_00420650(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x420650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x168, 8, 4);
  byte bVar1;
  wchar_t * _Src;
  uint uVar2;
  uint uVar3;
  undefined * this;
  undefined * _Dst;
  int * piVar4;
  ulonglong uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x160)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x164));
  _Src = ((wchar_t *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x0)) = uVar2;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG);
  (*(char *)(gen_frame + 0x7)) = (char)uVar3;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG);
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_ARG)));
  if ((*(char *)(gen_frame + 0x7)) != '\0') {
    _Dst = ((undefined *)GEN_TOP(F_00406bb0(uVar2 + 1,0,0)));
    F_00c48350(_Dst,0,uVar2 + 1);
    F_00c46aa0(_Dst,(*(uint *)(gen_frame + 0x0)),uVar2);
    F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,_Dst,REFG(undefined4, 0x108cc50));
    bVar1 = F_0042b5a0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    if (bVar1 != 0) {
      piVar4 = ((int *)GEN_TOP(F_00406b90(0x70,0,0)));
      if (piVar4 == ((int *)GEN_TOP(0x0))) {
        piVar4 = ((int *)GEN_TOP(0x0));
      }
      else {
        piVar4[1] = 0;
        piVar4[2] = 0;
        *piVar4 = (int)(*(undefined * PTR32 (*)[2])REFP(0x108b298));
        F_0042cbc0(piVar4 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
        piVar4[0x18] = 0;
        piVar4[0x19] = 0;
        piVar4[0x1a] = 0;
        F_00423790(piVar4 + 0x18 GEN_EDX_ARG,100);
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
      F_004152c0(this GEN_EDX_ARG,piVar4);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar4)))(piVar4 GEN_EDX_ARG,1);
      if (_Dst != ((undefined *)GEN_TOP(0x0))) {
        F_00406ad0(_Dst);
      }
      if ((*(uint *)(gen_frame + 0x0)) != 0) {
        F_00406ad0((*(uint *)(gen_frame + 0x0)));
      }
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 3;
      if (*((gen_code32 *)GEN_TOP(((int)this + 0x18))) != ((code *)GEN_TOP(0x0))) {
        ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x18))))(*((undefined4 *)GEN_TOP(((int)this + 0x1c))));
      }
    }
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    return (uint)uVar5;
  }
  F_00c4b3d6(&(*(uint *)(gen_frame + 0x0)),((char *)(gen_frame + 0x5c)),0x104,_Src,0x208);
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 4;
  uVar2 = 0;
  if (*((gen_code32 *)GEN_TOP(((int)this + 0x18))) != ((code *)GEN_TOP(0x0))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x18))))(*((undefined4 *)GEN_TOP(((int)this + 0x1c))));
  }
  return uVar2;
}

/* ref: FUN_00420820 */
GEN_OWN_GS GEN_FRAME byte F_00420820(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x420820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x70, 0, 4);
  char * pcVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c));
  (*(gen_size32 *)(gen_frame + 0x10)) = 0;
  F_00c4b61e(&(*(gen_size32 *)(gen_frame + 0x10)),((char *)GEN_TOP(0x0)),0,param_1);
  if ((*(gen_size32 *)(gen_frame + 0x10)) != 0) {
    (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)GEN_TOP(0x0));
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(int *)(gen_frame + 0x8)) = 0;
    F_00423bd0(&(*(char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(gen_size32 *)(gen_frame + 0x10)) + 1);
    pcVar1 = (*(char * PTR32 *)(gen_frame + 0x0));
    F_00c4b61e(&(*(gen_size32 *)(gen_frame + 0x10)),(*(char * PTR32 *)(gen_frame + 0x0)),(*(gen_size32 *)(gen_frame + 0x10)),param_1);
    uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,pcVar1,REFG(undefined4, 0x108cc50));
    F_0042ccf0(param_2 GEN_EDX_ARG,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    if (pcVar1 != ((char *)GEN_TOP(0x0))) {
      F_00429760(pcVar1,(*(int *)(gen_frame + 0x8)) - (int)pcVar1,0x12d);
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_004208e0 */
GEN_OWN GEN_FRAME byte F_004208e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4208e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00420820(((char *)REFP(0x108b058)),param_1);
  return bVar1;
}

/* ref: Global::GetMyDocumentsPath */
GEN_OWN_GS GEN_FRAME byte F_00420900(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x420900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x234, 12, 4);
  uint uVar1;
  HRESULT HVar2;
  bool bVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x22c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x230));
  bVar3 = false;
  uVar1 = F_0042a970(param_1 GEN_EDX_ARG);
  if (uVar1 == 0) {
    HVar2 = gen_imp_SHGetMalloc(&(*(undefined * PTR32 *)(gen_frame + 0x4)));
    if (-1 < HVar2) {
      HVar2 = gen_imp_SHGetSpecialFolderLocation((HWND)0x0,5,&(*(GEN_LPANY *)(gen_frame + 0x0)));
      bVar3 = -1 < HVar2;
      if (bVar3) {
        (*(WCHAR *)(gen_frame + 0x24)) = L'\0';
        F_00c48350(((undefined1 *)(gen_frame + 0x26)),0,0x206);
        gen_imp_SHGetPathFromIDListW((*(GEN_LPANY *)(gen_frame + 0x0)),&(*(WCHAR *)(gen_frame + 0x24)));
        ((code *)((*(gen_code32 *)GEN_TOP((((char *)(*(undefined * PTR32 *)((char *)((*(undefined * PTR32 *)(gen_frame + 0x4))))) + 20))))))((*(undefined * PTR32 *)(gen_frame + 0x4)),(*(GEN_LPANY *)(gen_frame + 0x0)));
        F_004036d0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(WCHAR *)(gen_frame + 0x24)));
        F_0042cf30(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
        F_004ff160(param_1);
        F_00403330(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      }
      ((code *)((*(gen_code32 *)GEN_TOP((((char *)(*(undefined * PTR32 *)((char *)((*(undefined * PTR32 *)(gen_frame + 0x4))))) + 8))))))((*(undefined * PTR32 *)(gen_frame + 0x4)));
    }
  }
  return bVar3;
}

/* ref: FUN_004209f0 */
GEN_OWN GEN_FRAME byte F_004209f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4209f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00420820(&REFG(undefined, 0x108b068),param_1);
  return bVar1;
}

/* ref: FUN_00420a10 */
GEN_OWN_GS GEN_FRAME uint F_00420a10(void)
{
  GEN_ENTER(0x420a10u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_GS(0x1cc, 4, 4);
  byte bVar1;
  uint uVar2;
  LPCWSTR lpRootPathName;
  BOOL BVar3;
  int iVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1c4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c8));
  F_0042b630(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  bVar1 = F_00420900(((undefined1 *)(gen_frame + 0x54)));
  if (bVar1 != 0) {
    uVar2 = F_0042b790(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    if (2 < uVar2) {
      uVar2 = F_0042d2f0(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0,3);
      F_0042ccf0(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar2);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      (*(uint *)(gen_frame + 0xbc)) = 7;
      (*(undefined4 *)(gen_frame + 0xb8)) = 0;
      (*(undefined2 *)((char *)&(*(LPCWSTR *)(gen_frame + 0xa8)) + 0)) = L'\0';
      (*(LPCWSTR *)(gen_frame + 0xa8)) = (LPCWSTR)((uint)(*(undefined2 *)((char *)&(*(LPCWSTR *)(gen_frame + 0xa8)) + 2)) << 0x10);
      F_0042eae0(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,&(*(LPCWSTR *)(gen_frame + 0xa8)));
      lpRootPathName = (*(LPCWSTR *)(gen_frame + 0xa8));
      if ((*(uint *)(gen_frame + 0xbc)) < 8) {
        lpRootPathName = (LPCWSTR)&(*(LPCWSTR *)(gen_frame + 0xa8));
      }
      BVar3 = gen_imp_GetVolumeInformationW(lpRootPathName,(LPWSTR)0x0,0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                         ((WCHAR *)(gen_frame + 0xc4)),0x80);
      if (BVar3 != 0) {
        iVar4 = gen_imp_lstrcmpW((*(undefined * PTR32 (*)[2])REFP(0x108b070)),((WCHAR *)(gen_frame + 0xc4)));
        if (iVar4 == 0) {
          F_00403330(&(*(LPCWSTR *)(gen_frame + 0xa8)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
          return 1;
        }
        iVar4 = gen_imp_lstrcmpW((*(undefined * PTR32 (*)[1])REFP(0x108b07c)),((WCHAR *)(gen_frame + 0xc4)));
        if (iVar4 == 0) {
LAB_00420b44: ;
          F_00403330(&(*(LPCWSTR *)(gen_frame + 0xa8)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
          return 0xc;
        }
        iVar4 = gen_imp_lstrcmpW((*(undefined * PTR32 (*)[1])REFP(0x108b084)),((WCHAR *)(gen_frame + 0xc4)));
        if (iVar4 == 0) goto LAB_00420b44;
        iVar4 = gen_imp_lstrcmpW((*(undefined * PTR32 (*)[1])REFP(0x108b090)),((WCHAR *)(gen_frame + 0xc4)));
        if (iVar4 == 0) goto LAB_00420b44;
        iVar4 = gen_imp_lstrcmpW((*(undefined * PTR32 (*)[1])REFP(0x108b09c)),((WCHAR *)(gen_frame + 0xc4)));
        if (iVar4 == 0) goto LAB_00420b44;
        iVar4 = gen_imp_lstrcmpW((*(undefined * PTR32 (*)[2])REFP(0x108b0a8)),((WCHAR *)(gen_frame + 0xc4)));
        if (iVar4 == 0) {
          F_00403330(&(*(LPCWSTR *)(gen_frame + 0xa8)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
          return 6;
        }
        iVar4 = gen_imp_lstrcmpW((*(undefined * PTR32 (*)[1])REFP(0x108b0b4)),((WCHAR *)(gen_frame + 0xc4)));
        if (iVar4 == 0) {
          F_00403330(&(*(LPCWSTR *)(gen_frame + 0xa8)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
          return 5;
        }
        iVar4 = gen_imp_lstrcmpW((*(undefined * PTR32 (*)[2])REFP(0x108b0bc)),((WCHAR *)(gen_frame + 0xc4)));
        if (iVar4 == 0) {
          F_00403330(&(*(LPCWSTR *)(gen_frame + 0xa8)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
          return 0xd;
        }
      }
      if (7 < (*(uint *)(gen_frame + 0xbc))) {
        F_00429760((*(LPCWSTR *)(gen_frame + 0xa8)),(*(uint *)(gen_frame + 0xbc)) * 2 + 2,0x3d);
      }
    }
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  return 0xffffffff;
}

/* ref: FUN_00420ca0 */
GEN_OWN_GS GEN_FRAME byte F_00420ca0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x420ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  byte bVar1;
  undefined * PTR32 * ppuVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042aca0(param_1 GEN_EDX_ARG);
  bVar1 = F_00420900(param_1);
  if (bVar1 == 0) {
    return 0;
  }
  F_0042e370(param_1 GEN_EDX_ARG,((char *)REFP(0x108b12c)));
  F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  ppuVar2 = (*(undefined * PTR32 (*)[2])REFP(0x108b0c8));
  if (param_2 == '\0') {
    ppuVar2 = (*(undefined * PTR32 (*)[2])REFP(0x108b108));
  }
  F_0042cef0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,ppuVar2);
  F_0042e360(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00420d30 */
GEN_OWN_GS GEN_FRAME byte F_00420d30(GEN_P(wchar_t * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x420d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x2b8, 8, 4);
  byte bVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x2b0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2b4));
  F_0042b630(((undefined1 *)(gen_frame + 0x25c)) GEN_EDX_ARG);
  bVar1 = F_00420ca0(((undefined1 *)(gen_frame + 0x25c)),(undefined1)param_2);
  if (bVar1 != 0) {
    F_0042a3a0(((wchar_t *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x25c)),1);
    if (((wchar_t *)(gen_frame + 0x0)) != param_1) {
      F_00c4a8e0(param_1,0x104,((wchar_t *)(gen_frame + 0x0)));
    }
    F_00429fa0();
    F_0042e170(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[2])REFP(0x108b138)));
    F_0042a1b0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x208)));
    F_0042c880(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x25c)) GEN_EDX_ARG);
    return 1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x25c)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00420e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00420e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x420e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  if ((*((int *)GEN_TOP(((int)this + 8))) != 7) && (*((int *)GEN_TOP(((int)this + 8))) != 7)) {
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_2;
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_3;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x14))) + 0xc))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,param_1,((code *)REFP(0x420650)));
    *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  }
  return *((uint *)GEN_TOP(((int)this + 8)));
}

/* ref: FUN_00420e40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00420e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x420e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108b2bc));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((uint *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  F_0042b630((int)this + 0x28 GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  uVar1 = F_004296a0(0xc,0,0x131);
  *((uint *)GEN_TOP(((int)this + 0x7c))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x7c))) + 4))) = *((int *)GEN_TOP(((int)this + 0x7c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  F_00423ef0(((undefined4 *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_ARG,10);
  uVar1 = -(uint)((int)((ulonglong)param_1 * 0x20 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x20)
  ;
  puVar2 = ((uint *)GEN_TOP(F_00406bb0(-(uint)(0xfffffffb < uVar1) | uVar1 + 4,0,0)));
  if (puVar2 == ((uint *)GEN_TOP(0x0))) {
    puVar3 = ((uint *)GEN_TOP(0x0));
  }
  else {
    iVar4 = param_1 - 1;
    *puVar2 = param_1;
    puVar3 = puVar2 + 1;
    if (-1 < iVar4) {
      puVar2 = puVar2 + 5;
      do {
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2 = puVar2 + 8;
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = puVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  return (uint)this;
}

/* ref: FUN_00420f20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00420f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x420f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * this_00;
  
  F_00422bf0(((undefined *)GEN_TOP(((int)this + 0x7c))) GEN_EDX_FWD,param_1 + 8);
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    this_00 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 8)));
    if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
      F_00423c40(this_00 GEN_EDX_ARG);
      F_00429760(*this_00,0x28,0x131);
      F_00406ad0(this_00);
    }
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
  }
  return param_1;
}

/* ref: FUN_00420f80 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00420f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x420f80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_GS(0xa0, 0, 4);
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  int * piVar5;
  byte * pbVar6;
  int iVar7;
  uint * puVar8;
  uint uVar9;
  uint uVar10;
  byte * pbVar11;
  bool bVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(int *)(gen_frame + 0x28)) = param_1;
  piVar5 = ((int *)GEN_TOP(F_00406b90(0x70,0,0)));
  if (piVar5 == ((int *)GEN_TOP(0x0))) {
    (*(int * PTR32 *)(gen_frame + 0x34)) = ((int *)GEN_TOP(0x0));
  }
  else {
    *piVar5 = (int)(*(undefined * PTR32 (*)[2])REFP(0x108b298));
    piVar5[1] = 0;
    piVar5[2] = 0;
    F_0042cbc0(piVar5 + 3 GEN_EDX_ARG,(int)this + 0x28);
    piVar5[0x18] = 0;
    piVar5[0x19] = 0;
    piVar5[0x1a] = 0;
    F_00423790(piVar5 + 0x18 GEN_EDX_ARG,100);
    (*(int * PTR32 *)(gen_frame + 0x34)) = piVar5;
  }
  piVar5 = (*(int * PTR32 *)(gen_frame + 0x34));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x34)) + 4))))((*(int * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG);
  (*(uint * PTR32 *)(gen_frame + 0x40)) = ((uint *)GEN_TOP(0x0));
  do {
    do {
      uVar10 = piVar5[1];
      if ((uint)piVar5[2] <= uVar10) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar5)))(piVar5 GEN_EDX_ARG,1);
        uVar13 = F_0042c880(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG);
        return (uint)uVar13;
      }
      piVar5[1] = uVar10 + 1;
      F_0042ccf0(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,uVar10 * 0x54 + piVar5[0x18]);
      (*(uint *)(gen_frame + 0x2c)) = 0;
    } while (param_2 == 0);
    (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x28)) + 0x10)));
    do {
      pbVar11 = ((byte *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-1]));
      pbVar6 = ((byte *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG)));
      do {
        bVar1 = *pbVar11;
        bVar12 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00421064: ;
          iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_0042106b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar11[1];
        bVar12 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00421064;
        pbVar11 = pbVar11 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_0042106b: ;
      if (iVar7 != 0) goto switchD_00421082_default;
      switch((unsigned int)(uintptr_t)(*(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))) {
      case 1: ;
        puVar8 = ((uint *)GEN_TOP(F_00406b90(0xc,0,0)));
        if (puVar8 == ((uint *)GEN_TOP(0x0))) {
          (*(uint * PTR32 *)(gen_frame + 0x40)) = ((uint *)GEN_TOP(0x0));
        }
        else {
          puVar8[1] = 0;
          uVar10 = F_004296a0(0x28,0,0x131);
          *puVar8 = uVar10;
          *((uint *)GEN_TOP(uVar10)) = uVar10;
          *((uint *)GEN_TOP((*puVar8 + 4))) = *puVar8;
          (*(uint * PTR32 *)(gen_frame + 0x40)) = puVar8;
        }
        (*(uint *)(gen_frame + 0x30)) = 0;
        (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x28));
        do {
          uVar9 = F_004146c0(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x38)));
          uVar10 = *(*(uint * PTR32 *)(gen_frame + 0x40));
          uVar2 = *((uint *)GEN_TOP((uVar10 + 4)));
          (*(uint *)(gen_frame + 0x20)) = uVar9;
          puVar8 = ((uint *)GEN_TOP(F_004296a0(0x28,0,0x131)));
          puVar8[1] = uVar2;
          *puVar8 = uVar10;
          if (puVar8 + 2 != ((uint *)GEN_TOP(0x0))) {
            F_004146c0(puVar8 + 2 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x20)));
          }
          pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x14));
          if ((*(uint * PTR32 *)(gen_frame + 0x40))[1] == 0xfffffffe) goto LAB_00421247;
          (*(uint * PTR32 *)(gen_frame + 0x40))[1] = (*(uint * PTR32 *)(gen_frame + 0x40))[1] + 1;
          *((uint * PTR32 *)GEN_TOP((uVar10 + 4))) = puVar8;
          *((uint * PTR32 *)GEN_TOP(puVar8[1])) = puVar8;
          if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) == 4) {
            if ((*(undefined * PTR32 *)(gen_frame + 0x14)) != ((undefined *)GEN_TOP(0x0))) {
              F_0042c880((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
              F_00406ad0(pvVar4);
              (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(0x0));
            }
            uVar14 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
            if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) != 0) {
              F_0042c880(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)))) GEN_EDX_ARG);
              F_00406ad0(uVar14);
              ((byte *)(gen_frame + 0x0))[0] = 0;
              ((byte *)(gen_frame + 0x0))[1] = 0;
              ((byte *)(gen_frame + 0x0))[2] = 0;
              ((byte *)(gen_frame + 0x0))[3] = 0;
            }
          }
          if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) != 0) {
            F_00406ad0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)));
            ((byte *)(gen_frame + 0x0))[0xc] = 0;
            ((byte *)(gen_frame + 0x0))[0xd] = 0;
            ((byte *)(gen_frame + 0x0))[0xe] = 0;
            ((byte *)(gen_frame + 0x0))[0xf] = 0;
          }
          pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x24));
          (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 0x20;
          uVar10 = (*(uint *)(gen_frame + 0x30)) + 1;
          (*(uint *)(gen_frame + 0x30)) = uVar10;
        } while (uVar10 < param_2);
        iVar7 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x7c)));
        iVar3 = *((int *)GEN_TOP((iVar7 + 4)));
        piVar5 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x131)));
        *piVar5 = iVar7;
        piVar5[1] = iVar3;
        if (piVar5 + 2 != ((int *)GEN_TOP(0x0))) {
          piVar5[2] = (int)(*(uint * PTR32 *)(gen_frame + 0x40));
        }
        iVar3 = *((int *)GEN_TOP(((int)pvVar4 + 0x80)));
        if (iVar3 == -2) {
LAB_00421247: ;
                    
          F_00c4579a(((char *)REFP(0x108b258)));
        }
        *((int *)GEN_TOP(((int)pvVar4 + 0x80))) = iVar3 + 1;
        *((int * PTR32 *)GEN_TOP((iVar7 + 4))) = piVar5;
        *((int * PTR32 *)GEN_TOP(piVar5[1])) = piVar5;
        piVar5 = (*(int * PTR32 *)(gen_frame + 0x34));
        goto switchD_00421082_default;
      case 2: ;
        uVar14 = 2;
        break;
      case 3: ;
        uVar14 = 3;
        break;
      case 4: ;
        uVar14 = 4;
        break;
      default: ;
        goto switchD_00421082_default;
      }
      F_0041f880((*(uint * PTR32 *)(gen_frame + 0x40)),uVar14,((undefined1 *)(gen_frame + 0x44)),piVar5);
switchD_00421082_default: ;
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 8;
      uVar10 = (*(uint *)(gen_frame + 0x2c)) + 1;
      (*(uint *)(gen_frame + 0x2c)) = uVar10;
    } while (uVar10 < param_2);
  } while( true );
}

/* ref: FUN_00421290 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00421290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x421290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x12c, 4, 4);
  byte bVar1;
  ulong uVar2;
  int iVar3;
  byte * pbVar4;
  float fVar5;
  ulong uVar6;
  char * _String;
  uint uVar7;
  ulong * puVar8;
  byte * pbVar9;
  int iVar10;
  bool bVar11;
  ulonglong uVar12;
  double dVar13;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x124)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x128));
  (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)GEN_TOP(0x4212b3));
  F_0042b630(((undefined1 *)(gen_frame + 0xd0)) GEN_EDX_FWD);
  do {
    do {
      uVar7 = *((uint *)GEN_TOP((param_1 + 4)));
      if (*((uint *)GEN_TOP((param_1 + 8))) <= uVar7) {
        (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)GEN_TOP(0x421515));
        uVar12 = F_0042c880(((undefined1 *)(gen_frame + 0xd0)) GEN_EDX_ARG);
        (*(undefined4 *)(gen_frame + 0x5c)) = 0x421522;
        return (uint)uVar12;
      }
      iVar3 = uVar7 * 0x54 + *((int *)GEN_TOP((param_1 + 0x60)));
      *((uint *)GEN_TOP((param_1 + 4))) = uVar7 + 1;
      (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)GEN_TOP(iVar3));
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)) = ((char * PTR32 *)GEN_TOP(0x4212d4));
      F_0042ccf0(((undefined1 *)(gen_frame + 0xd0)) GEN_EDX_ARG,iVar3);
      (*(byte * PTR32 *)(gen_frame + 0xcc)) = ((byte *)GEN_TOP(0x0));
    } while (*((int *)GEN_TOP(((int)this + 0xc))) == 0);
    (*(int *)(gen_frame + 0xc4)) = 0;
    do {
      pbVar9 = *((byte * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc4)) + 0xc + *((int *)GEN_TOP(((int)this + 0x10))))));
      (*(byte * PTR32 *)(gen_frame + 0xc8)) = pbVar9;
      if (pbVar9 != ((byte *)GEN_TOP(0x0))) {
        (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)GEN_TOP(0x421309));
        pbVar4 = ((byte *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0xd0)) GEN_EDX_ARG)));
        do {
          bVar1 = *pbVar4;
          bVar11 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_00421330: ;
            iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00421335;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar11 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_00421330;
          pbVar4 = pbVar4 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00421335: ;
        if (iVar3 == 0) {
          iVar10 = (int)((int)(uintptr_t)(*(byte * PTR32 *)(gen_frame + 0xcc))) * 0x20;
          iVar3 = *((int *)GEN_TOP(((int)this + 0x10))) + iVar10;
          switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x10 + iVar10))))) {
          case 2: ;
            (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)GEN_TOP(0x0));
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)) = ((char * PTR32 *)GEN_TOP(0x0));
            (*(byte * PTR32 *)(gen_frame + 0x48)) = ((byte *)GEN_TOP(*((undefined4 *)GEN_TOP((iVar3 + 0x14)))));
            (*(byte * PTR32 *)(gen_frame + 0x44)) = (*(byte * PTR32 *)(gen_frame + 0xc8));
            (*(byte * PTR32 *)(gen_frame + 0x40)) = ((byte *)GEN_TOP(0x421384));
            uVar7 = F_00414850(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,(*(byte * PTR32 *)(gen_frame + 0xc8)),*((undefined4 *)GEN_TOP((iVar3 + 0x14))),0,0);
            (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)GEN_TOP(uVar7));
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)) = ((char * PTR32 *)GEN_TOP(0x421390));
            F_004240e0(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_ARG,uVar7);
            (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)GEN_TOP(0x42139b));
            F_00415690(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
            iVar3 = *((int *)GEN_TOP((param_1 + 4)));
            (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)GEN_TOP(0x0));
            *((int *)GEN_TOP((param_1 + 4))) = iVar3 + 1;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)) = ((char * PTR32 *)GEN_TOP(0x0));
            (*(byte * PTR32 *)(gen_frame + 0x48)) = ((byte *)GEN_TOP(0x4213b5));
            pbVar9 = ((byte *)GEN_TOP(F_0042a990(iVar3 * 0x54 + *((int *)GEN_TOP((param_1 + 0x60))) GEN_EDX_ARG)));
            (*(byte * PTR32 *)(gen_frame + 0x48)) = pbVar9;
            (*(byte * PTR32 *)(gen_frame + 0x44)) = ((byte *)GEN_TOP(0x4213bb));
            uVar6 = F_00c4abb6((char *)pbVar9,(*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)),(int)(*(ulong * PTR32 *)(gen_frame + 0x50)));
            puVar8 = ((ulong *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar10)));
            uVar2 = puVar8[5];
            if ((uVar6 < puVar8[1]) || (puVar8[2] < uVar6)) {
              uVar6 = *puVar8;
            }
            puVar8[5] = uVar6;
            if ((((undefined *)GEN_TOP(puVar8[6])) != ((undefined *)GEN_TOP(0x0))) && (uVar2 != uVar6)) {
              (*(ulong * PTR32 *)(gen_frame + 0x50)) = puVar8;
              (*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)) = ((char * PTR32 *)GEN_TOP(0x4213ee));
              F_00414670(((undefined *)GEN_TOP(puVar8[6])) GEN_EDX_ARG,puVar8);
            }
            break;
          case 3: ;
            (*(undefined4 *)(gen_frame + 0xb8)) = 0;
            (*(undefined4 *)(gen_frame + 0xbc)) = 0;
            (*(undefined4 *)(gen_frame + 0xc0)) = *((undefined4 *)GEN_TOP((iVar3 + 0x14)));
            (*(undefined4 *)(gen_frame + 0xb0)) = 3;
            (*(undefined4 *)(gen_frame + 0xb4)) = *((undefined4 *)GEN_TOP((iVar3 + 0x14)));
            pbVar9 = (*(byte * PTR32 *)(gen_frame + 0xc8));
            do {
              bVar1 = *pbVar9;
              pbVar9 = pbVar9 + 1;
            } while (bVar1 != 0);
            (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)GEN_TOP(0x0));
            pbVar9 = pbVar9 + (1 - (int)((*(byte * PTR32 *)(gen_frame + 0xc8)) + 1));
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)) = ((char * PTR32 *)GEN_TOP(0x0));
            (*(byte * PTR32 *)(gen_frame + 0x48)) = pbVar9;
            (*(byte * PTR32 *)(gen_frame + 0xcc)) = pbVar9;
            (*(byte * PTR32 *)(gen_frame + 0x44)) = ((byte *)GEN_TOP(0x42142e));
            uVar7 = F_00406bb0(pbVar9,0,0);
            (*(byte * PTR32 *)(gen_frame + 0x44)) = (*(byte * PTR32 *)(gen_frame + 0xc8));
            (*(byte * PTR32 *)(gen_frame + 0x40)) = (*(byte * PTR32 *)(gen_frame + 0xcc));
            (*(uint *)(gen_frame + 0x3c)) = uVar7;
            (*(uint *)(gen_frame + 0xac)) = uVar7;
            (*(undefined4 *)(gen_frame + 0x38)) = 0x42143f;
            F_00c49908(uVar7,(*(byte * PTR32 *)(gen_frame + 0xcc)),(*(byte * PTR32 *)(gen_frame + 0xc8)));
            (*(undefined4 *)(gen_frame + 0xa0)) = (*(undefined4 *)(gen_frame + 0xc0));
            (*(ulong * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0xa0));
            (*(undefined4 *)(gen_frame + 0xa4)) = 0;
            (*(undefined4 *)(gen_frame + 0xa8)) = 0;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)) = ((char * PTR32 *)GEN_TOP(0x421471));
            F_004240e0(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xa0)));
            (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)GEN_TOP(0x42147c));
            F_00415690(&(*(undefined4 *)(gen_frame + 0xa0)) GEN_EDX_ARG);
            iVar3 = *((int *)GEN_TOP((param_1 + 4)));
            *((int *)GEN_TOP((param_1 + 4))) = iVar3 + 1;
            (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)GEN_TOP(0x421492));
            _String = ((char *)GEN_TOP(F_0042a990(iVar3 * 0x54 + *((int *)GEN_TOP((param_1 + 0x60))) GEN_EDX_ARG)));
            (*(ulong * PTR32 *)(gen_frame + 0x50)) = (ulong *)_String;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)) = ((char * PTR32 *)GEN_TOP(0x421498));
            dVar13 = F_00c4acaa(_String);
            fVar5 = (float)dVar13;
            (*(byte * PTR32 *)(gen_frame + 0xcc)) = ((byte *)(uintptr_t)gen_fl2bits((float)(fVar5)));
            (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)(uintptr_t)gen_fl2bits((float)(fVar5)));
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)) = ((char * PTR32 *)GEN_TOP(0x4214ab));
            F_00414ad0(*((int *)GEN_TOP(((int)this + 0x10))) + iVar10 GEN_EDX_ARG,fVar5);
            break;
          case 4: ;
            F_0042cbc0((gen_frame + 0x0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 0x14))));
            uVar7 = F_00414960(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG,(*(byte * PTR32 *)(gen_frame + 0xc8)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                                 (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),
                                 (*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),
                                 (*(byte * PTR32 *)(gen_frame + 0x40)),(*(byte * PTR32 *)(gen_frame + 0x44)),(*(byte * PTR32 *)(gen_frame + 0x48)),(*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)),(*(ulong * PTR32 *)(gen_frame + 0x50)));
            (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)GEN_TOP(uVar7));
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)) = ((char * PTR32 *)GEN_TOP(0x4214d9));
            F_004240e0(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_ARG,uVar7);
            (*(ulong * PTR32 *)(gen_frame + 0x50)) = ((ulong *)GEN_TOP(0x4214e4));
            F_00415690(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG);
            iVar3 = *((int *)GEN_TOP((param_1 + 4)));
            *((int *)GEN_TOP((param_1 + 4))) = iVar3 + 1;
            F_0042cbc0((gen_frame + 0x0) GEN_EDX_ARG,iVar3 * 0x54 + *((int *)GEN_TOP((param_1 + 0x60))));
            F_00414b60(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar10))) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),
                         (*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),
                         (*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),
                         (*(uint *)(gen_frame + 0x3c)),(*(byte * PTR32 *)(gen_frame + 0x40)),(*(byte * PTR32 *)(gen_frame + 0x44)),(*(byte * PTR32 *)(gen_frame + 0x48)),(*(char * PTR32 * PTR32 *)(gen_frame + 0x4c)),(*(ulong * PTR32 *)(gen_frame + 0x50)));
          }
          break;
        }
      }
      (*(int *)(gen_frame + 0xc4)) = (*(int *)(gen_frame + 0xc4)) + 0x20;
      fVar5 = gen_bits2f((int)(*(byte * PTR32 *)(gen_frame + 0xcc)) + 1);
      (*(byte * PTR32 *)(gen_frame + 0xcc)) = ((byte *)(uintptr_t)gen_fl2bits((float)(fVar5)));
    } while ((uint)gen_fl2bits(fVar5) < (uint)gen_fl2bits(*((float *)GEN_TOP(((int)this + 0xc)))));
  } while( true );
}

/* ref: Common::Configuration::SystemConfig::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00421540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x421540u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x18c, 4);
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x184)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x188);
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = ((undefined1 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x48)) = 0x13;
  (*(undefined4 *)(gen_frame + 0x94)) = 1;
  (*(undefined4 *)(gen_frame + 0x9c)) = 0;
  (*(undefined4 *)(gen_frame + 0xa0)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)GEN_TOP(0x421579));
  uVar3 = F_00406bb0(0x13,0,0);
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a6ac));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x13;
  (*(uint *)(gen_frame + 0x3c)) = uVar3;
  (*(uint *)(gen_frame + 0x90)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x42158c;
  F_00c49908(uVar3,0x13,((char *)REFP(0x108a6ac)));
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)GEN_TOP(0xffffffff));
  (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = ((undefined1 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a6c0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4215a3;
  F_00414850(((undefined1 *)(gen_frame + 0xa4)) GEN_EDX_ARG,((char *)REFP(0x108a6c0)),0,0,0xffffffff);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,L"{00000000-0000-0000-0000000000000000}");
  uVar3 = F_00414960(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,((char *)REFP(0x108a714)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(char * PTR32 *)(gen_frame + 0x44))
                       ,(*(undefined4 *)(gen_frame + 0x48)),(*(undefined1 * PTR32 *)(gen_frame + 0x4c)),(*(undefined * PTR32 *)(gen_frame + 0x50)));
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)GEN_TOP(uVar3));
  (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = ((undefined1 *)GEN_TOP(0x4215ce));
  F_004146c0(((undefined1 *)(gen_frame + 0xc4)) GEN_EDX_ARG,uVar3);
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)GEN_TOP(0x4215d9));
  F_00415690(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  F_0042e170((gen_frame + 0x0) GEN_EDX_ARG,L"{00000000-0000-0000-0000000000000000}");
  uVar3 = F_00414960(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,((char *)REFP(0x108a724)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),
                       (*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),
                       (*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(char * PTR32 *)(gen_frame + 0x44))
                       ,(*(undefined4 *)(gen_frame + 0x48)),(*(undefined1 * PTR32 *)(gen_frame + 0x4c)),(*(undefined * PTR32 *)(gen_frame + 0x50)));
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)GEN_TOP(uVar3));
  (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = ((undefined1 *)GEN_TOP(0x421604));
  F_004146c0(((undefined1 *)(gen_frame + 0xe4)) GEN_EDX_ARG,uVar3);
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)GEN_TOP(0x42160f));
  F_00415690(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)GEN_TOP(0x1));
  (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = ((undefined1 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a77c));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x421623;
  F_00414850(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG,((char *)REFP(0x108a77c)),0,0,1);
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = ((undefined1 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x48)) = 9;
  (*(undefined4 *)(gen_frame + 0x134)) = 3;
  (*(undefined4 *)(gen_frame + 0x138)) = 0;
  (*(undefined4 *)(gen_frame + 0x13c)) = 0;
  (*(undefined4 *)(gen_frame + 0x140)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)GEN_TOP(0x421641));
  uVar3 = F_00406bb0(9,0,0);
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a788));
  (*(undefined4 *)(gen_frame + 0x40)) = 9;
  (*(uint *)(gen_frame + 0x3c)) = uVar3;
  (*(uint *)(gen_frame + 0x130)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x421651;
  F_00c49908(uVar3,9,((char *)REFP(0x108a788)));
  (*(undefined4 *)(gen_frame + 0x124)) = 0;
  (*(undefined4 *)(gen_frame + 0x128)) = 0;
  (*(undefined4 *)(gen_frame + 0x12c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  F_0042cc20((gen_frame + 0x0) GEN_EDX_ARG,((char *)REFP(0x108a794)),REFG(undefined4, 0x108cc50));
  uVar3 = F_00414960(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,((char *)REFP(0x108a7c8)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),
                       (*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),
                       (*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(char * PTR32 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48))
                       ,(*(undefined1 * PTR32 *)(gen_frame + 0x4c)),(*(undefined * PTR32 *)(gen_frame + 0x50)));
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)GEN_TOP(uVar3));
  (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = ((undefined1 *)GEN_TOP(0x421699));
  F_004146c0(((undefined1 *)(gen_frame + 0x144)) GEN_EDX_ARG,uVar3);
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)GEN_TOP(0x4216a4));
  F_00415690(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)GEN_TOP(0x1));
  (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = ((undefined1 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x44)) = ((char *)REFP(0x108a7d0));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x4216b5;
  F_00414850(((undefined1 *)(gen_frame + 0x164)) GEN_EDX_ARG,((char *)REFP(0x108a7d0)),0,0,1);
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)GEN_TOP(0x8));
  (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = ((undefined1 *)(gen_frame + 0x84));
  (*(undefined4 *)(gen_frame + 0x48)) = 0x4216c5;
  F_00420f80(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x84)),8);
  (*(int *)(gen_frame + 0x80)) = 7;
  puVar4 = (undefined4 *)(((undefined *)GEN_TOP((gen_frame + 0x198))));
  do {
    puVar5 = puVar4 - 8;
    if (puVar4[-9] == 4) {
      pvVar1 = ((undefined *)GEN_TOP(*puVar5));
      if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
        (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)GEN_TOP(0x4216e8));
        F_0042c880(pvVar1 GEN_EDX_ARG);
        (*(undefined * PTR32 *)(gen_frame + 0x50)) = pvVar1;
        (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = ((undefined1 *)GEN_TOP(0x4216ee));
        F_00406ad0(pvVar1);
        *puVar5 = 0;
      }
      pvVar1 = ((undefined *)GEN_TOP(puVar4[-0xd]));
      if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
        (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)GEN_TOP(0x421701));
        F_0042c880(pvVar1 GEN_EDX_ARG);
        (*(undefined * PTR32 *)(gen_frame + 0x50)) = pvVar1;
        (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = ((undefined1 *)GEN_TOP(0x421707));
        F_00406ad0(pvVar1);
        puVar4[-0xd] = 0;
      }
    }
    iVar2 = puVar4[-10];
    uVar3 = 0;
    if (iVar2 != 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)GEN_TOP(iVar2));
      (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = ((undefined1 *)GEN_TOP(0x42171a));
      uVar3 = F_00406ad0(iVar2);
      puVar4[-10] = 0;
    }
    iVar2 = (*(int *)(gen_frame + 0x80)) - 1;
    (*(int *)(gen_frame + 0x80)) = iVar2;
    puVar4 = puVar5;
  } while (-1 < iVar2);
  (*(undefined4 *)(gen_frame + 0x5c)) = 0x421735;
  return uVar3;
}

/* ref: FUN_00421740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00421740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x421740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  ulonglong uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108b2bc));
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    F_00423360(*((int *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,3);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  if ((*((int *)GEN_TOP(((int)this + 0x80))) != 0) &&
     (piVar3 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x7c))))), piVar3 != *((int * PTR32 *)GEN_TOP(((int)this + 0x7c))))) {
    do {
      puVar1 = ((undefined4 *)GEN_TOP(piVar3[2]));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        F_00423c40(puVar1 GEN_EDX_ARG);
        F_00429760(*puVar1,0x28,0x131);
        F_00406ad0(puVar1);
        piVar3[2] = 0;
      }
      piVar3 = ((int *)GEN_TOP(*piVar3));
    } while (piVar3 != ((int *)GEN_TOP(*((int *)GEN_TOP(((int)this + 0x7c))))));
  }
  for (iVar2 = *((int *)GEN_TOP(((int)this + 4))); iVar2 != 0; iVar2 = *((int *)GEN_TOP((iVar2 + 4)))) {
    *((undefined4 *)GEN_TOP((iVar2 + 8))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x9c))) != 0) {
    F_00423ae0(*((int *)GEN_TOP(((int)this + 0x9c))),*((undefined4 *)GEN_TOP(((int)this + 0xa0))),(int)this + 0xa8,this)
    ;
    F_00429760(*((int *)GEN_TOP(((int)this + 0x9c))),
                 *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0x9c))) & 0xffffffe0,0x131);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  F_00423420(((undefined *)GEN_TOP(((int)this + 0x7c))) GEN_EDX_ARG);
  uVar4 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG);
  return (uint)uVar4;
}

/* ref: FUN_00421840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00421840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x421840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00406b90(0x74,0,0)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(0x0));
  }
  else {
    *piVar1 = (int)(*(undefined * PTR32 (*)[2])REFP(0x108b298));
    piVar1[1] = 0;
    piVar1[2] = 0;
    F_0042cbc0(piVar1 + 3 GEN_EDX_ARG,param_1);
    piVar1[0x18] = 0;
    piVar1[0x19] = 0;
    piVar1[0x1a] = 0;
    F_00423790(piVar1 + 0x18 GEN_EDX_ARG,100);
    *piVar1 = (int)(*(undefined * PTR32 (*)[2])REFP(0x108b2b0));
    piVar1[0x1c] = 0;
    piVar1[0x1c] = *param_2;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  F_00421290(this GEN_EDX_ARG,piVar1);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar1)))(piVar1 GEN_EDX_ARG,1);
  return uVar2;
}

/* ref: FUN_00421920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00421920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x421920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * this_00;
  int iVar1;
  undefined4 * this_01;
  int local_8;
  
  F_00420e40(this GEN_EDX_FWD,0x1c1);
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 0xb0)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108b2ec));
  *((undefined1 *)GEN_TOP(((int)this + 0xac))) = 0;
  F_00420e40(this_00 GEN_EDX_ARG,0x1c1);
  *this_00 = (*(undefined * PTR32 (*)[3])REFP(0x108b2cc));
  this_01 = ((undefined4 *)GEN_TOP(((int)this + 0x15c)));
  local_8 = 1;
  do {
    F_00420e40(this_01 GEN_EDX_ARG,0x1c1);
    *this_01 = (*(undefined * PTR32 (*)[3])REFP(0x108b2dc));
    this_01 = this_01 + 0x2b;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  *((undefined4 *)GEN_TOP(((int)this + 0x2b4))) = 1;
  F_00415b00(this_00 GEN_EDX_ARG);
  F_00419070(((undefined *)GEN_TOP(((int)this + 0x15c))) GEN_EDX_ARG,0);
  F_00419070(((undefined *)GEN_TOP(((int)this + 0x208))) GEN_EDX_ARG,1);
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x8c))) = this_00;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x148))) = this;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x2b4))) * 0xac + 0x15c + (int)this;
  *((int *)GEN_TOP(((int)this + 0x90))) = iVar1;
  *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x98))) = this;
  return (uint)this;
}

/* ref: FUN_004219f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004219f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4219f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 * this_00;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108b2ec));
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 0x2b4)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 0x2b;
    *this_00 = (*(undefined * PTR32 (*)[3])REFP(0x108b2dc));
    F_00421740(this_00 GEN_EDX_FWD);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = (*(undefined * PTR32 (*)[3])REFP(0x108b2cc));
  F_00421740(((undefined4 *)GEN_TOP(((int)this + 0xb0))) GEN_EDX_ARG);
  uVar1 = F_00421740(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00421a50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00421a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x421a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00420e40(this GEN_EDX_FWD,0x76);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108b2fc));
  return (uint)this;
}

/* ref: FUN_00421a70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00421a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x421a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108b2fc));
  uVar1 = F_00421740(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00421a80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00421a80(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x421a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00421a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00421a90(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x421a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00421ad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00421ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x421ad0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(uint *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return param_1;
}

/* ref: FUN_00421b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00421b00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x421b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x18))) = param_2;
  return param_2;
}

/* ref: FUN_00421b10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00421b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x421b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_2;
  *((uint *)GEN_TOP(((int)this + 0x28))) = param_3;
  return param_3;
}

/* ref: FUN_00421b30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00421b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x421b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x10))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  return param_1;
}

/* ref: FUN_00421b50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00421b50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x421b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x34))) = param_2;
  return param_2;
}

/* ref: FUN_00421b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00421b70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x421b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00421b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00421b80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x421b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00421b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00421b90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x421b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xc))) = param_2;
  return param_2;
}

/* ref: FUN_00421ba0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00421ba0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x421ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return param_2;
}

/* ref: FUN_00421bb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00421bb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x421bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x11))) = param_2;
  return param_2;
}

/* ref: FUN_00421bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00421bc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x421bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return param_2;
}

/* ref: FUN_00421bf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00421bf0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x421bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_004f9bb0(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00421c40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00421c40(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x421c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2;
}

/* ref: FUN_00421c70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00421c70(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x421c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00421cd0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00421cd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x421cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x54,param_2,0x132);
  return uVar1;
}

/* ref: FUN_00421cf0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00421cf0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x421cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x54,0x132);
  return (uint)uVar1;
}

/* ref: FUN_00421d10 */
GEN_OWN GEN_FRAME uint F_00421d10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x421d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00421d40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00421d40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x421d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0x131);
  return (uint)uVar1;
}

/* ref: FUN_00421d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00421d90(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x421d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00421df0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00421df0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x421df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 5,param_2,0x131);
  return uVar1;
}

/* ref: FUN_00421e10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00421e10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x421e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 5,0x131);
  return (uint)uVar1;
}

/* ref: FUN_00421e40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00421e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x421e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00421e60 */
GEN_OWN GEN_FRAME uint F_00421e60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x421e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00421e80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00421e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x421e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00421f10 */
GEN_OWN GEN_FRAME uint F_00421f10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x421f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00421f20 */
GEN_OWN GEN_FRAME uint F_00421f20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x421f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00421f50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00421f50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x421f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0x131);
  return uVar1;
}

/* ref: FUN_00421fb0 */
GEN_OWN GEN_FRAME uint F_00421fb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x421fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00421fc0 */
GEN_OWN GEN_FRAME uint F_00421fc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x421fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00421fe0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00421fe0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x421fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,0x131);
  return uVar1;
}

/* ref: FUN_00422010 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00422010(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x422010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,0x131);
  return (uint)uVar1;
}

/* ref: FUN_00422050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422050(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x422050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004220a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004220a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4220a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x12d);
  return (uint)uVar1;
}

/* ref: FUN_004220c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004220c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4220c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004220d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004220d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4220d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004220e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004220e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4220e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x12d);
  return uVar1;
}

/* ref: FUN_00422110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422110(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x422110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00422120 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422120(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x422120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00422150 */
GEN_OWN GEN_FRAME uint F_00422150(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x422150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00422160 */
GEN_OWN GEN_FRAME uint F_00422160(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x422160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00422170 */
GEN_OWN GEN_FRAME uint F_00422170(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x422170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00422180 */
GEN_OWN GEN_FRAME uint F_00422180(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x422180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00422190 */
GEN_OWN GEN_FRAME uint F_00422190(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x422190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004221c0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_004221c0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4221c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_004221e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004221e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4221e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00422230 */
GEN_OWN GEN_FRAME byte F_00422230(void)
{
  GEN_ENTER(0x422230u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00422240 */
GEN_OWN GEN_FRAME byte F_00422240(void)
{
  GEN_ENTER(0x422240u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00422250 */
GEN_OWN GEN_FRAME uint F_00422250(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x422250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00422290 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00422290(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x422290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_004222a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004222a0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4222a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_004222e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004222e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(wchar_t * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4222e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;)
  if (param_1 != this) {
    F_00c4a8e0(this,0x104,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00422310 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00422310(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x422310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_0042b660(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1370ee8));
  if (bVar1 != 0) {
    return 1;
  }
  bVar1 = F_0042b660(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1370f40));
  if (bVar1 != 0) {
    return 2;
  }
  bVar1 = F_0042b660(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1370f98));
  if (bVar1 != 0) {
    return 3;
  }
  bVar1 = F_0042b660(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1370ff0));
  return (-(uint)(bVar1 != 0) & 5) - 1;
}

/* ref: FUN_00422390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x422390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return param_1;
}

/* ref: FUN_004223c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004223c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4223c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: FUN_00422410 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00422410(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x422410u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  return;
}

/* ref: FUN_00422470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21)
{
  GEN_ENTER(0x422470u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  ulonglong uVar1;
  
  F_0042ccf0(this GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]));
  uVar1 = F_0042c880(&(*(undefined4 *)&gen_args[0]) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: Common::Configuration::ConfigFileOperationInterface::ConfigFileResourceInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422500(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x422500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x108b1ec));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Common::Configuration::ConfigFileOperationInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422530(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x422530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x108b20c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00422560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422560(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x422560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00422580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422580(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x422580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_004225a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004225a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4225a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x54 + *in_ecx;
}

/* ref: FUN_004225c0 */
GEN_OWN GEN_FRAME byte F_004225c0(void)
{
  GEN_ENTER(0x4225c0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_004225d0 */
GEN_OWN GEN_FRAME uint F_004225d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4225d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  F_00c46e20(param_3,param_1,param_2 - param_1);
  return (param_2 - param_1) + param_3;
}

/* ref: FUN_00422600 */
GEN_OWN GEN_FRAME uint F_00422600(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x422600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00422610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422610(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x422610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Configuration::ConfigFileResource::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00422640(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x422640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: Client::System::Configuration::ConfigFileResource::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00422650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x422650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: Client::System::Configuration::ConfigFileResource::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00422660(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x422660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: Client::System::Configuration::ConfigFileResource::vf4 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00422670(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x422670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: Client::System::Configuration::ConfigFileResource::vf5 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00422680(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x422680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x11)));
}

/* ref: Client::System::Configuration::ConfigFileResource::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00422690(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x422690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x14)));
}

/* ref: FUN_004226c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004226c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4226c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x108b20c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00422710 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00422710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x422710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00422740 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00422740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x422740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00422810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422810(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x422810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00422820 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00422820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x422820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00422880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x422880u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004228d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004228d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4228d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 5;
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

/* ref: FUN_00422900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422900(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x422900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00422920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422920(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x422920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00422940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x422940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)this;
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

/* ref: FUN_00422970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422970(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x422970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00422980 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422980(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x422980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004229a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004229a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4229a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_004229c0 */
GEN_OWN GEN_FRAME unsigned int F_004229c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4229c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_004229f0 */
GEN_OWN GEN_FRAME uint F_004229f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4229f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00422a20 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00422a20(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x422a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_004146c0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00422a40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x422a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_00422a70 */
GEN_OWN GEN_FRAME uint F_00422a70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x422a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00422a80 */
GEN_OWN GEN_FRAME uint F_00422a80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x422a80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00422ab0 */
GEN_OWN GEN_FRAME unsigned int F_00422ab0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x422ab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  undefined1 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00422ae0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00422ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x422ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  char * _Str;
  ulong uVar2;
  char * PTR32 * _EndPtr;
  int _Radix;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  _Radix = 0;
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  _EndPtr = ((char * PTR32 *)GEN_TOP(0x0));
  _Str = ((char *)GEN_TOP(F_0042a990(iVar1 * 0x54 + *((int *)GEN_TOP(((int)this + 0x60))) GEN_EDX_FWD)));
  uVar2 = F_00c4abb6(_Str,_EndPtr,_Radix);
  return uVar2;
}

/* ref: FUN_00422b10 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00422b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x422b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  char * _String;
  double dVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  _String = ((char *)GEN_TOP(F_0042a990(iVar1 * 0x54 + *((int *)GEN_TOP(((int)this + 0x60))) GEN_EDX_FWD)));
  dVar2 = F_00c4acaa(_String);
  return (float)dVar2;
}

/* ref: FUN_00422b50 */
GEN_OWN GEN_FRAME uint F_00422b50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x422b50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  F_00c46e20(param_3,param_1,param_2 - param_1);
  return (param_2 - param_1) + param_3;
}

/* ref: Client::System::Configuration::ConfigFileResource::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422b80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x422b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x108b1ec));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Configuration::ConfigFileOperation::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422bb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x422bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  REFG(undefined4, 0x1370c20) = 0;
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x108b20c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00422bf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x422bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int * piVar6;
  ulonglong uVar7;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  iVar2 = *param_1;
  puVar5 = ((undefined4 *)GEN_TOP(*puVar1));
  piVar6 = param_1;
  while (puVar5 != puVar1) {
    if (puVar5[2] == iVar2) {
      puVar3 = ((undefined4 *)GEN_TOP(puVar5[1]));
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
      *puVar3 = puVar4;
      puVar4[1] = puVar3;
      uVar7 = F_00429760(puVar5,0xc,0x131);
      piVar6 = ((int *)GEN_TOP((uint)uVar7));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
      puVar5 = puVar4;
    }
    else {
      puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
    }
  }
  return (uint)piVar6;
}

/* ref: FUN_00422c50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422c50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x422c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00422c60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422c60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x422c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00422ca0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00422ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x422ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00422d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422d20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x422d20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00422d80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422d80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x422d80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00422d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422d90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x422d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00422da0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422da0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x422da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00422db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422db0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x422db0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *param_2 = *in_ecx + param_3;
  return (uint)param_2;
}

/* ref: FUN_00422e10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00422e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x422e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_00422e40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00422e40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x422e40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0xc,0,0x131)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00422e80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00422e80(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x422e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00422ea0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00422ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x422ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00422ec0 */
GEN_OWN GEN_FRAME unsigned int F_00422ec0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x422ec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_004146c0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00422ee0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00422ee0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x422ee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x28,0,0x131)));
  puVar1[1] = param_2;
  *puVar1 = param_1;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    F_004146c0(puVar1 + 2 GEN_EDX_ARG,param_3);
  }
  return (uint)puVar1;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00422f20 */
GEN_OWN GEN_FRAME unsigned int F_00422f20(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x422f20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x54) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00422f50 */
GEN_OWN GEN_FRAME uint F_00422f50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x422f50u, gen_a0, gen_a1, gen_a2, 0u);
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
    }
    iVar1 = iVar1 + 0x54;
    this = ((undefined *)GEN_TOP(((int)this + 0x54)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00422f90 */
GEN_OWN GEN_FRAME unsigned int F_00422f90(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x422f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00422fb0 */
GEN_OWN GEN_FRAME unsigned int F_00422fb0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x422fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00423030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423030(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x423030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00423040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423040(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x423040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00423080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423080(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x423080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00423090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423090(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x423090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_004230a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004230a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4230a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x131)));
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar2[2] = *param_2;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00423150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x423150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = *((int *)GEN_TOP(((int)this + 4))) - param_3;
    F_00c46e20(param_2,param_3,iVar1);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004231a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004231a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4231a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1,0x12d);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_004231e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004231e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4231e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint * puVar2;
  int * piVar3;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0x28,0,0x131)));
  piVar3[1] = uVar1;
  *piVar3 = param_1;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    F_004146c0(piVar3 + 2 GEN_EDX_ARG,param_2);
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((uint *)GEN_TOP((param_1 + 4))) = (uint)piVar3;
  puVar2 = ((uint *)GEN_TOP(piVar3[1]));
  *puVar2 = (uint)piVar3;
  return (uint)puVar2;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00423260 */
GEN_OWN GEN_FRAME unsigned int F_00423260(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x423260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x54) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_004232a0 */
GEN_OWN GEN_FRAME uint F_004232a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4232a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x54)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_004232e0 */
GEN_OWN GEN_FRAME unsigned int F_004232e0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4232e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00423300 */
GEN_OWN GEN_FRAME unsigned int F_00423300(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x423300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00423330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423330(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x423330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00415690(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00423360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423360(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x423360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined * pvVar1;
  undefined4 * puVar2;
  int local_8;
  undefined4 * puVar3;
  
  if ((param_2 & 2) == 0) {
    F_00415690(param_1 GEN_EDX_FWD);
    if ((param_2 & 1) != 0) {
      F_00406ad0(param_1);
    }
    return (uint)param_1;
  }
  local_8 = *((int *)GEN_TOP(((int)param_1 - 4))) - 1;
  if (-1 < local_8) {
    puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 - 4))) * 0x20 + 0x14 + (int)param_1)));
    do {
      puVar3 = puVar2 - 8;
      if (puVar2[-9] == 4) {
        pvVar1 = ((undefined *)GEN_TOP(*puVar3));
        if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
          F_0042c880(pvVar1 GEN_EDX_ARG);
          F_00406ad0(pvVar1);
          *puVar3 = 0;
        }
        pvVar1 = ((undefined *)GEN_TOP(puVar2[-0xd]));
        if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
          F_0042c880(pvVar1 GEN_EDX_ARG);
          F_00406ad0(pvVar1);
          puVar2[-0xd] = 0;
        }
      }
      if (puVar2[-10] != 0) {
        F_00406ad0(puVar2[-10]);
        puVar2[-10] = 0;
      }
      local_8 = local_8 - 1;
      puVar2 = puVar3;
    } while (-1 < local_8);
  }
  if ((param_2 & 1) != 0) {
    F_00406b30((int)param_1 - 4U);
  }
  return (int)param_1 - 4U;
}

/* ref: FUN_00423420 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00423420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x423420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00429760(piVar2,0xc,0x131);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,0x131);
  return (uint)uVar3;
}

/* ref: FUN_00423470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x423470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = **(int * PTR32 *)this;
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x131)));
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar3[2] = *param_1;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_004234d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004234d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4234d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x131)));
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar3[2] = *param_1;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00423530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x423530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  iVar1 = *(int *)this;
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0x28,0,0x131)));
  piVar3[1] = iVar2;
  *piVar3 = iVar1;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    F_004146c0(piVar3 + 2 GEN_EDX_ARG,param_1);
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar4 = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return uVar4;
}

/* ref: FUN_004235a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004235a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4235a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1,0x12d);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_004235e0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_004235e0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4235e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0x54)))) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00423610 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00423610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x423610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x54)))) {
      F_0042c880(this_00 GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54) * 0x54,0x132);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_00423670 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00423670(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x423670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x54)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_004236b0 */
GEN_OWN GEN_FRAME unsigned int F_004236b0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4236b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004236d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004236d0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4236d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  
  puVar1 = param_3;
  if (param_1 != param_2) {
    do {
      if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return (uint)puVar1;
}

/* ref: FUN_00423700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423700(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x423700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00415690(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00423730 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00423730(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x423730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00415690(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00423790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x423790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x54,0,0x132);
    F_00423670(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x54)))) {
        F_0042c880(this_00 GEN_EDX_ARG);
      }
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54) * 0x54,0x132);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = (((int)pvVar1 - iVar2) / 0x54) * 0x54 + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x54 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00423880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x423880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x54;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00423790(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00423790(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00423910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x423910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  
  puVar5 = param_1;
  if (((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this))) < param_1) {
    puVar3 = ((undefined1 *)GEN_TOP(F_004296a0(param_1,0,0x12d)));
    puVar5 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar6 = puVar3;
    for (puVar4 = *(undefined1 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != ((undefined1 *)GEN_TOP(0x0))) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1,0x12d);
    }
    puVar5 = puVar3 + (int)param_1;
    *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1);
    *(undefined1 * PTR32 *)this = puVar3;
    *((undefined1 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
  }
  return (uint)puVar5;
}

/* ref: FUN_004239a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004239a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4239a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00415690(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004239c0 */
GEN_OWN GEN_FRAME uint F_004239c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4239c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00415690(param_2 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004239f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004239f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4239f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00423880(this GEN_EDX_FWD,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x54) * 0x54 + *(int *)this);
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x54;
      return;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00423880(this GEN_EDX_ARG,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x54;
  return;
}

/* ref: FUN_00423a70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x423a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)this;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)this;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00423910(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00423910(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00423ad0 */
GEN_OWN GEN_FRAME uint F_00423ad0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x423ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00415690(((undefined *)GEN_TOP((param_2 + 8))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00423ae0 */
GEN_OWN GEN_FRAME unsigned int F_00423ae0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x423ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    puVar3 = param_1 + 5;
    do {
      if (puVar3[-1] == 4) {
        pvVar2 = ((undefined *)GEN_TOP(*puVar3));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          F_0042c880(pvVar2 GEN_EDX_ARG);
          F_00406ad0(pvVar2);
          *puVar3 = 0;
        }
        pvVar2 = ((undefined *)GEN_TOP(puVar3[-5]));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          F_0042c880(pvVar2 GEN_EDX_ARG);
          F_00406ad0(pvVar2);
          puVar3[-5] = 0;
        }
      }
      if (puVar3[-2] != 0) {
        F_00406ad0(puVar3[-2]);
        puVar3[-2] = 0;
      }
      puVar1 = puVar3 + 3;
      puVar3 = puVar3 + 8;
    } while (puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00423b50 */
GEN_OWN GEN_FRAME uint F_00423b50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x423b50u, gen_a0, gen_a1, gen_a2, 0u);
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
      F_004146c0(this GEN_EDX_ARG,iVar1);
    }
    iVar1 = iVar1 + 0x20;
    this = ((undefined *)GEN_TOP(((int)this + 0x20)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: Common::Configuration::Utf8StringParser::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423b90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x423b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  F_00423610(param_1 + 0x18 GEN_EDX_FWD);
  F_0042c880(param_1 + 3 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00423bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x423bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 * puVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  uVar2 = *(uint *)this;
  if (param_1 < iVar3 - uVar2) {
    iVar1 = uVar2 + param_1;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *((int *)GEN_TOP(((int)this + 4))) = iVar1;
    }
  }
  else if (iVar3 - uVar2 < param_1) {
    F_00423a70(this GEN_EDX_ARG,(uVar2 - iVar3) + param_1);
    puVar4 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar3 = (*(int *)this - (int)puVar4) + param_1; iVar3 != 0; iVar3 = iVar3 - 1) {
      if (puVar4 != ((undefined1 *)GEN_TOP(0x0))) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    *((uint *)GEN_TOP(((int)this + 4))) = *(int *)this + param_1;
    return *(int *)this + param_1;
  }
  return uVar2;
}

/* ref: FUN_00423c40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x423c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  ulonglong uVar5;
  
  piVar1 = *(int * PTR32 *)this;
  piVar4 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  uVar3 = *(uint *)this;
  *((uint *)GEN_TOP((uVar3 + 4))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar4 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar4));
      if (piVar4[6] == 4) {
        pvVar2 = ((undefined *)GEN_TOP(piVar4[7]));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          F_0042c880(pvVar2 GEN_EDX_FWD);
          F_00406ad0(pvVar2);
          piVar4[7] = 0;
        }
        pvVar2 = ((undefined *)GEN_TOP(piVar4[2]));
        if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
          F_0042c880(pvVar2 GEN_EDX_ARG);
          F_00406ad0(pvVar2);
          piVar4[2] = 0;
        }
      }
      if (piVar4[5] != 0) {
        F_00406ad0(piVar4[5]);
        piVar4[5] = 0;
      }
      uVar5 = F_00429760(piVar4,0x28,0x131);
      uVar3 = (uint)uVar5;
      piVar4 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  return uVar3;
}

/* ref: FUN_00423ce0 */
GEN_OWN GEN_FRAME unsigned int F_00423ce0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x423ce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 in_ECX = 0;
  
  F_00423ae0(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_00423d00 */
GEN_OWN GEN_FRAME uint F_00423d00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x423d00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_004146c0(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x20)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: Common::Configuration::ArrayParser::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423d40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x423d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  F_00423610(param_1 + 0x18 GEN_EDX_FWD);
  F_0042c880(param_1 + 3 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Common::Configuration::CommandLineParser::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423d80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x423d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  F_00423610(param_1 + 0x18 GEN_EDX_FWD);
  F_0042c880(param_1 + 3 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00423dc0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00423dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x423dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00423ae0(param_1,param_2,(int)this + 0xc,param_2);
  return;
}

/* ref: FUN_00423de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x423de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00423ae0(*(int *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,*((int *)GEN_TOP(((int)this + 8))) - *(int *)this & 0xffffffe0,0x131);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00423e50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00423e50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x423e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_004146c0(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x20)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00423e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x423e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00423ae0(*(int *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,*((int *)GEN_TOP(((int)this + 8))) - *(int *)this & 0xffffffe0,0x131);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00423ef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x423ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 5) < param_1) {
    iVar3 = param_1 * 0x20;
    uVar4 = F_004296a0(iVar3,0,0x131);
    F_00423e50(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar4);
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    uVar5 = 0;
    if (iVar2 != 0) {
      F_00423ae0(iVar2,iVar1,(int)this + 0xc,iVar3);
      uVar6 = F_00429760(*(int *)this,*((int *)GEN_TOP(((int)this + 8))) - *(int *)this & 0xffffffe0,0x131);
      uVar5 = (uint)uVar6;
    }
    *((uint *)GEN_TOP(((int)this + 4))) = (iVar1 - iVar2 & 0xffffffe0U) + uVar4;
    *(uint *)this = uVar4;
    *((uint *)GEN_TOP(((int)this + 8))) = iVar3 + uVar4;
  }
  return uVar5;
}

/* ref: FUN_00423f90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00423f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x423f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00423c40(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,0x28,0x131);
  return (uint)uVar1;
}

/* ref: FUN_00423fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00423fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x423fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 5;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 5;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00423ef0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00423ef0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00424030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00424030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x424030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00423ae0(*(int *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,*((int *)GEN_TOP(((int)this + 8))) - *(int *)this & 0xffffffe0,0x131);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00424090 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00424090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x424090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00423c40(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,0x28,0x131);
  return (uint)uVar1;
}

/* ref: FUN_004240e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004240e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4240e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar2) && (uVar1 = *(uint *)this, uVar1 <= param_1)) {
    if (uVar2 == *((uint *)GEN_TOP(((int)this + 8)))) {
      uVar2 = F_00423fb0(this GEN_EDX_FWD,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_004146c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,(param_1 - uVar1 & 0xffffffe0) + *(int *)this);
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x20;
      return uVar2;
    }
  }
  else {
    if (uVar2 == *((uint *)GEN_TOP(((int)this + 8)))) {
      uVar2 = F_00423fb0(this GEN_EDX_ARG,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_004146c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x20;
  return uVar2;
}

/* ref: Common::Configuration::ConfigBase::vf2 */
GEN_OWN GEN_NOFRAME byte F_00424150(void)
{
  GEN_ENTER(0x424150u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00424160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00424160(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x424160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00423c40(param_1 GEN_EDX_FWD);
  F_00429760(*param_1,0x28,0x131);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Common::Configuration::ConfigBase::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004241a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4241a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00421740(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Common::Configuration::UIConfig::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004241d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4241d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x108b2cc));
  F_00421740(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Common::Configuration::UIControlConfig::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00424200(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x424200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x108b2dc));
  F_00421740(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Common::Configuration::SystemConfig::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00424230(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x424230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_004219f0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Common::Configuration::DevConfig::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00424260(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x424260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x108b2fc));
  F_00421740(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Input::Cursor::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004242a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21)
{
  GEN_ENTER(0x4242a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  ulonglong uVar1;
  
  uVar1 = F_0042c880(&(*(undefined4 *)&gen_args[0]) GEN_EDX_FWD);
  return (uint)uVar1;
}

/* ref: Client::System::Input::Cursor::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004242b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4242b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: Client::System::Input::Cursor::vf5 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004242c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4242c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 7))) = param_2;
  return param_2;
}

/* ref: Client::System::Input::Cursor::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004242d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4242d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_FWD,0);
  return uVar1;
}

/* ref: Client::System::Input::Cursor::vf7 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004242e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4242e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: Client::System::Input::Cursor::vf8 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004242f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4242f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 5))) = param_2;
  return param_2;
}

/* ref: Client::System::Input::Cursor::vf9 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00424300(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x424300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 5)));
}

/* ref: Client::System::Input::Cursor::vf10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00424310(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x424310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 6))) = param_2;
  return param_2;
}

/* ref: Client::System::Input::Cursor::vf11 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00424320(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x424320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 6)));
}

/* ref: Client::System::Input::Cursor::vf14 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00424330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x424330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  HMODULE hInst;
  LPCSTR name;
  HANDLE pvVar1;
  UINT type;
  int cx;
  int cy;
  UINT fuLoad;
  
  hInst = gen_imp_GetModuleHandleA((LPCSTR)0x0);
  fuLoad = 0x8050;
  cy = 0;
  cx = 0;
  type = 2;
  name = (LPCSTR)F_0042a990(param_2 GEN_EDX_ARG);
  pvVar1 = gen_imp_LoadImageA(hInst,name,type,cx,cy,fuLoad);
  *(HANDLE *)(this + param_1 * 4 + 0x50) = pvVar1;
  return 0;
}

/* ref: FUN_00424370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00424370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x424370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  *((uint *)GEN_TOP(((int)this + param_1 * 4 + 0xc))) = param_2;
  return param_2;
}

/* ref: FUN_00424390 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00424390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x424390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x108b34c));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x1000000;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x50)));
  iVar2 = 0x11;
  do {
    puVar1[-0x11] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return (uint)this;
}

/* ref: Client::System::Input::Cursor::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004243d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4243d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return (uint)(gen_imp_SetClassLongA(*((HWND *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x137104c) + 0x434))) + 8))),-0xc,0));
}

/* ref: Client::System::Input::Cursor::vf2 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004243f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4243f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined * this_00;
  int iVar1;
  HCURSOR hCursor;
  
  if (this[5] == (undefined1)0x0) {
    if (this[7] == (undefined1)0x0) {
      this_00 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x434)));
      gen_imp_GetCursorPos(&(*(tagPOINT *)(gen_frame + 0x0)));
      gen_imp_ScreenToClient(*((HWND *)GEN_TOP(((int)this_00 + 8))),&(*(tagPOINT *)(gen_frame + 0x0)));
      F_00429180(this_00 GEN_EDX_ARG,&(*(int *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x8)));
      if ((((-1 < (*(tagPOINT *)(gen_frame + 0x0)).x) && ((*(tagPOINT *)(gen_frame + 0x0)).x <= (*(int *)(gen_frame + 0xc)))) && (-1 < (*(tagPOINT *)(gen_frame + 0x0)).y)) &&
         ((*(tagPOINT *)(gen_frame + 0x0)).y <= (*(int *)(gen_frame + 0x8)))) goto LAB_0042444e;
    }
    else {
      iVar1 = *(int *)(this + 8);
      if (iVar1 == 0x11) {
        hCursor = gen_imp_LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
        return (uint)(gen_imp_SetCursor(hCursor));
      }
      if (this[4] != (undefined1)0x0) {
        return (uint)(gen_imp_SetCursor(*(HCURSOR *)(this + iVar1 * 4 + 0x50)));
      }
      gen_imp_SetCursor(*(HCURSOR *)(this + iVar1 * 4 + 0xc));
    }
    return 0;
  }
LAB_0042444e: ;
  return (uint)(gen_imp_SetCursor((HCURSOR)0x0));
}

/* ref: Client::System::Input::Cursor::vf13 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004244a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4244a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  LONG LVar2;
  LONG LVar3;
  int iVar4;
  int iVar5;
  
  if (REFG(int, 0x1370b90) != 0) {
    iVar5 = *((int *)GEN_TOP((REFG(int, 0x137104c) + 0x434)));
    iVar4 = *((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x90)));
    iVar1 = *((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x94)));
    gen_imp_GetCursorPos(&(*(tagPOINT *)(gen_frame + 0x0)));
    LVar3 = (*(tagPOINT *)(gen_frame + 0x0)).y;
    LVar2 = (*(tagPOINT *)(gen_frame + 0x0)).x;
    gen_imp_ScreenToClient(*((HWND *)GEN_TOP((iVar5 + 8))),&(*(tagPOINT *)(gen_frame + 0x0)));
    if ((((*(tagPOINT *)(gen_frame + 0x0)).x < iVar4) && (0 < (*(tagPOINT *)(gen_frame + 0x0)).y)) && ((*(tagPOINT *)(gen_frame + 0x0)).y < iVar1)) {
      iVar5 = param_1;
      if ((*(tagPOINT *)(gen_frame + 0x0)).x + param_1 < 1) {
        iVar5 = 1 - (*(tagPOINT *)(gen_frame + 0x0)).x;
      }
      if (iVar4 <= (*(tagPOINT *)(gen_frame + 0x0)).x + iVar5) {
        iVar5 = (iVar4 - (*(tagPOINT *)(gen_frame + 0x0)).x) - 1;
      }
      iVar4 = param_2;
      if ((*(tagPOINT *)(gen_frame + 0x0)).y + param_2 < 1) {
        iVar4 = 1 - (*(tagPOINT *)(gen_frame + 0x0)).y;
      }
      if (iVar1 <= (*(tagPOINT *)(gen_frame + 0x0)).y + iVar4) {
        iVar4 = (iVar1 - (*(tagPOINT *)(gen_frame + 0x0)).y) - 1;
      }
      gen_imp_SetCursorPos(LVar2 + iVar5,LVar3 + iVar4);
    }
  }
  return 0;
}

/* ref: Client::System::Input::CursorInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00424570(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x424570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x108b30c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Input::Cursor::vf12 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_004245a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4245a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 7)));
}

/* ref: Client::System::Input::Cursor::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004245b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4245b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x108b30c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004245f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004245f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4245f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xd4))) = param_2;
  return param_2;
}

/* ref: FUN_00424620 */
GEN_OWN GEN_FRAME float10 F_00424620(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x424620u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00424640 */
GEN_OWN GEN_FRAME uint F_00424640(GEN_P(char * in_eax, unsigned int gen_a0), GEN_P(char * in_ecx, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x424640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(char * in_eax = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * in_ecx = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  char * pcVar1;
  char cVar2;
  char * pcVar3;
  char cVar4;
  
  pcVar3 = F_00c46a10(in_eax,in_ecx);
  if (pcVar3 == ((char *)GEN_TOP(0x0))) {
    return 0;
  }
  pcVar1 = in_ecx + 1;
  do {
    cVar2 = *in_ecx;
    in_ecx = in_ecx + 1;
  } while (cVar2 != '\0');
  pcVar3 = pcVar3 + ((int)in_ecx - (int)pcVar1);
  cVar2 = *pcVar3;
  cVar4 = '\0';
  if (cVar2 != '\0') {
    do {
      cVar4 = cVar4 * '\n' + cVar2;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
      cVar4 = cVar4 - 0x30;
    } while (cVar2 != '\0');
    if (cVar4 < '\0') goto LAB_0042469f;
  }
  if (cVar4 <= param_4) {
    *param_3 = cVar4;
    return (int)cVar4;
  }
LAB_0042469f: ;
  *param_3 = -1;
  return 0xffffffff;
}

/* ref: FUN_004246b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004246b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4246b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined1 *)GEN_TOP(((int)this + 9))) = 1;
  uVar1 = F_0050ffd0(REFG(void * PTR32, 0x1375aec) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_004246e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004246e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4246e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  undefined4 uVar2;
  
  uVar2 = (uint)(param_2 != '\0') * 2 - 1;
  piVar1 = ((int *)GEN_TOP((param_1 + 0x126c)));
  *piVar1 = *piVar1 + uVar2;
  if (*piVar1 == 0) {
    gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
    *((DWORD *)GEN_TOP((param_1 + 0x1188))) = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart;
    *((LONG *)GEN_TOP((param_1 + 0x118c))) = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart;
    uVar2 = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart;
  }
  return uVar2;
}

/* ref: FUN_00424720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00424720(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x424720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x127c))) = param_2;
  return param_2;
}

/* ref: FUN_00424730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00424730(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x424730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x2640 + param_2 * 4)));
}

/* ref: FUN_00424750 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00424750(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x424750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x25e8)));
}

/* ref: FUN_00424760 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00424760(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x424760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x25ec)));
}

/* ref: FUN_00424770 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00424770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x424770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x25e8))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x25e8))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x25e8))) GEN_EDX_FWD);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_004247a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004247a0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4247a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  uint uVar2;
  
  if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x25e8))) != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_00433b70(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x25e8))) GEN_EDX_FWD);
    if (bVar1 != 0) {
      return 1;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x25e8))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x25e8))) GEN_EDX_ARG);
    bVar1 = F_00559490(uVar2 GEN_EDX_ARG);
    if ((bVar1 == 0) && (param_2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x25e8))) + 0x54))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x25e8))) GEN_EDX_ARG);
      bVar1 = F_0043f1b0(uVar2 GEN_EDX_ARG,(undefined1)param_3);
      return bVar1;
    }
  }
  return 0;
}

/* ref: FUN_00424810 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00424810(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x424810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((char *)GEN_TOP((in_ecx + 0x115c))) != '\0') {
    return *((uint *)GEN_TOP((in_ecx + 0x1158)));
  }
  return 0;
}

/* ref: FUN_00424830 */
GEN_OWN GEN_NOFRAME unsigned int F_00424830(void)
{
  GEN_ENTER(0x424830u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00424840 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00424840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x424840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25e8))) != ((undefined *)GEN_TOP(0x0))) {
    F_00433b40(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25e8))) GEN_EDX_FWD);
  }
  return;
}

/* ref: FUN_00424890 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00424890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x424890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_004248a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004248a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4248a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_004248b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004248b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4248b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  F_005d50e0(&REFG(undefined, 0x1379c6c) GEN_EDX_FWD);
  uVar1 = F_0054b830(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004248d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004248d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4248d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_005f5fa0(param_1);
  return;
}

/* ref: FUN_004248f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004248f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4248f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00516730();
  return;
}

/* ref: FUN_00424910 */
GEN_OWN GEN_NOFRAME uint F_00424910(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x424910u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  uint uVar1;
  uint in_EAX = 0;
  
  if (REFG(int, 0x1370c0c) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1370c0c) + 0x28))) + 0x54))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1370c0c) + 0x28))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,
                       param_6,param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00424920 */
GEN_OWN GEN_NOFRAME uint F_00424920(void)
{
  GEN_ENTER(0x424920u, 0u, 0u, 0u, 0u);
  char cVar1;
  char cVar2;
  int iVar3;
  char * _Str1;
  
  _Str1 = ((char *)REFP(0x12fa250));
  if (REFG(char, 0x1371070) == '\0') {
    iVar3 = F_00c4b813(((char *)REFP(0x12fa250)),((char *)REFP(0x108bd30)),0x10);
    if (iVar3 == 0) {
      _Str1 = ((char *)REFP(0x12fa250)) + 0x10;
    }
    iVar3 = F_00c4b813(_Str1,((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x108bd44)))),3);
    if (iVar3 == 0) {
      _Str1 = _Str1 + 3;
    }
    cVar1 = *_Str1;
    iVar3 = 0;
    for (; (((cVar1 != '*' && (*_Str1 != '_')) && (iVar3 != 0xfe)) && (*_Str1 != '\0'));
        _Str1 = _Str1 + 1) {
      cVar2 = *_Str1;
      cVar1 = _Str1[1];
      (&REFG(char, 0x1371070))[(int)(iVar3)] = cVar2;
      iVar3 = iVar3 + 1;
    }
    (&REFG(char, 0x1371070))[(int)(iVar3)] = 0;
  }
  return 0x1371070;
}

/* ref: FUN_004249a0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004249a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4249a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x268, 8, 4);
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  this_00 = REFG(void * PTR32, 0x1375ae8);
  GEN_COOKIE((*(uint *)(gen_frame + 0x260)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x264));
  if (REFG(char, 0x1371170) == '\0') {
    uVar2 = F_004302b0(this GEN_EDX_FWD);
    F_0042e170(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG,uVar2);
    F_0042a3a0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20c)),1);
    F_0042c880(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG);
    F_0042a2a0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((char *)REFP(0x108bd48)));
    bVar1 = F_004fc9e0(((undefined1 *)(gen_frame + 0x4)));
    if (bVar1 == 0) {
      F_00c49908(&REFG(char, 0x1371170),0x100,&REFG(undefined, 0x108bd58));
    }
    else {
      uVar3 = F_004fa430(((undefined1 *)(gen_frame + 0x4)));
      uVar2 = 0xff;
      if (uVar3 < 0x100) {
        uVar2 = uVar3;
      }
      if (uVar3 != 0) {
        F_004fd640(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x4)),&REFG(char, 0x1371170),uVar2,0,0,0);
        F_004fad40(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
    F_00429fa0();
  }
  return 0x1371170;
}

/* ref: FUN_00424aa0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00424aa0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x424aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_GS(0x20, 0, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c));
  uVar1 = F_00414500(*((undefined4 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_FWD,0x19);
  if ((*((int *)GEN_TOP((uVar1 + 0x14))) == 1) && (param_2 == '\0')) {
    gen_imp_GetClientRect(*((HWND *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x434))) + 8))),&(*(tagRECT *)(gen_frame + 0x8)));
    (*(LONG *)(gen_frame + 0x0)) = (*(tagRECT *)(gen_frame + 0x8)).left;
    (*(LONG *)(gen_frame + 0x4)) = (*(tagRECT *)(gen_frame + 0x8)).top;
    gen_imp_ClientToScreen(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x434))) + 8))),&(*(LONG *)(gen_frame + 0x0)));
    (*(tagRECT *)(gen_frame + 0x8)).left = (*(LONG *)(gen_frame + 0x0));
    (*(tagRECT *)(gen_frame + 0x8)).top = (*(LONG *)(gen_frame + 0x4));
    (*(LONG *)(gen_frame + 0x0)) = (*(tagRECT *)(gen_frame + 0x8)).right;
    (*(LONG *)(gen_frame + 0x4)) = (*(tagRECT *)(gen_frame + 0x8)).bottom;
    gen_imp_ClientToScreen(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x434))) + 8))),&(*(LONG *)(gen_frame + 0x0)));
    (*(tagRECT *)(gen_frame + 0x8)).right = (*(LONG *)(gen_frame + 0x0));
    (*(tagRECT *)(gen_frame + 0x8)).bottom = (*(LONG *)(gen_frame + 0x4));
    uVar1 = gen_imp_ClipCursor(&(*(tagRECT *)(gen_frame + 0x8)));
    return uVar1;
  }
  uVar1 = gen_imp_ClipCursor(((RECT *)GEN_TOP(0x0)));
  return uVar1;
}

/* ref: FUN_00424b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00424b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x424b80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  undefined4 * puVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  int iVar3;
  undefined4 uVar4;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x1280))) = param_1;
  iVar3 = 0x14;
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x2640)));
  do {
    *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x1280)));
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  uVar4 = 1;
  *((undefined4 * PTR32 *)GEN_TOP((REFG(int, 0x1375ae8) + 0xd4))) = ((undefined4 *)GEN_TOP(((int)this + 0x2640)));
  this_00 = ((undefined *)GEN_TOP(F_00414500(*((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,10)));
  bVar1 = F_00414a40(this_00 GEN_EDX_ARG,param_1,uVar4);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00424be0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00424be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x424be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  
  uVar2 = F_00414500(*((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,0x20);
  if (*((int *)GEN_TOP((uVar2 + 0x14))) == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 9))) = 1;
    F_0050ffd0(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG);
    return 1;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x25e8)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x80))))(piVar1 GEN_EDX_ARG,0);
    if ((char)uVar2 == '\x01') {
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x25e8))) + 0x1c))))
                                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x25e8))) GEN_EDX_ARG)));
      F_00820af0(this_00 GEN_EDX_ARG);
      return 1;
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 9))) = 1;
  F_0050ffd0(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00424c60 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00424c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x424c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x115c))) != '\0') {
    F_00974700(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1158))) GEN_EDX_FWD);
    return;
  }
  if (*((char *)GEN_TOP(((int)this + 0x115d))) != '\0') {
    F_006b8c00();
    if ((REFG(int, 0x1488344) != 0) && (3 < *((int *)GEN_TOP((REFG(int, 0x1488344) + 0x1e0))))) {
      bVar1 = F_00975170(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1158))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x10))),
                           *((undefined4 *)GEN_TOP(((int)this + 0x14))));
      if (bVar1 != 0) {
        *((undefined1 *)GEN_TOP(((int)this + 0x115c))) = 1;
        F_0049b870((int)*((char *)GEN_TOP(((int)this + 0x1c))));
      }
    }
  }
  return;
}

/* ref: FUN_00424cd0 */
GEN_OWN GEN_NOFRAME uint F_00424cd0(void)
{
  GEN_ENTER(0x424cd0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x1488338);
}

/* ref: FUN_00424ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00424ce0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x424ce0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  undefined * this;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  uVar1 = F_00414500(*((undefined4 *)GEN_TOP((param_1 + 0x14))) GEN_EDX_FWD,0x18);
  puVar3 = ((undefined4 *)GEN_TOP((param_1 + 0x438)));
  if (*((int *)GEN_TOP((uVar1 + 0x14))) == 1) {
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x25fc)));
    F_009760b0(this GEN_EDX_ARG,puVar3,param_1 + 0x5cc,param_1 + 0x5f8);
    F_00975c70(this GEN_EDX_ARG,param_1 + 0x2690,param_1 + 0x2694);
  }
  else {
    F_006b89d0(REFG(undefined4, 0x1488338) GEN_EDX_ARG,param_2,puVar3,((undefined4 *)GEN_TOP((param_1 + 0x5cc))),param_1 + 0x5f8);
    *((undefined4 *)GEN_TOP((param_1 + 0x2690))) = *((undefined4 *)GEN_TOP((param_1 + 0x5cc)));
    *((undefined4 *)GEN_TOP((param_1 + 0x2694))) = *((undefined4 *)GEN_TOP((param_1 + 0x5d0)));
  }
  if (*((int *)GEN_TOP((param_1 + 0x127c))) == 0) {
    *((undefined4 *)GEN_TOP((param_1 + 0x448))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x44c))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x450))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x454))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x458))) = 0;
    *puVar3 = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x43c))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x440))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x444))) = 0;
    puVar3 = ((undefined4 *)GEN_TOP((param_1 + 0x45c)));
    for (iVar2 = 0x5c; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00424df0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00424df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x424df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  __time64_t _Var6;
  ulonglong uVar7;
  
  _Var6 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *((int *)GEN_TOP(((int)this + 0x2698))) = (int)_Var6;
  uVar7 = F_00427d90();
  *((ulonglong *)GEN_TOP(((int)this + 0x26a0))) = uVar7;
  uVar7 = F_00427e30();
  *((ulonglong *)GEN_TOP(((int)this + 0x26a8))) = uVar7;
  F_00428dd0(*((undefined4 *)GEN_TOP(((int)this + 0x434))));
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
  uVar2 = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart;
  uVar1 = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart;
  DVar4 = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart - *(uint *)&REFG(undefined, 0x1371060);
  iVar5 = ((*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart - *(int *)&REFG(undefined, 0x1371064)) -
          (uint)((*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart < *(uint *)&REFG(undefined, 0x1371060));
  (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart = DVar4;
  (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart = iVar5;
  *(int *)&REFG(undefined, 0x1371064) = uVar2;
  *(uint *)&REFG(undefined, 0x1371060) = uVar1;
  *(double *)&REFG(undefined, 0x1371068) =
       (double)(longlong)CONCAT44(iVar5,DVar4) / (double)*(longlong *)&REFG(undefined, 0x1371058);
  uVar3 = F_00976890(this GEN_EDX_ARG);
  if ((*((char *)GEN_TOP(((int)this + 0x115c))) != '\0') && (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1158))) != ((undefined *)GEN_TOP(0x0)))) {
    uVar7 = F_009756b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1158))) GEN_EDX_ARG);
    uVar3 = F_00427ff0(((undefined *)GEN_TOP(((int)this + 0x1210))) GEN_EDX_ARG,(uint)uVar7 + *((uint *)GEN_TOP(((int)this + 0x1258))),
                         (int)(uVar7 >> 0x20) + *((int *)GEN_TOP(((int)this + 0x125c))) +
                         (uint)CARRY4((uint)uVar7,*((uint *)GEN_TOP(((int)this + 0x1258)))));
  }
  return uVar3;
}

/* ref: FUN_00424ec0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00424ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x424ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00424ce0(this GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x119c)))));
  return uVar1;
}

/* ref: FUN_00424ee0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00424ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x424ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1a0, 0, 4);
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c);
  (*(uint *)(gen_frame + 0x198)) = uVar4;
  if (*((int *)GEN_TOP(((int)this + 0x25e8))) != 0) {
    uVar4 = F_00414500(*((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,0x1b);
    iVar3 = *((int *)GEN_TOP((uVar4 + 0x14)));
    piVar1 = ((int *)GEN_TOP(((int)this + 0x1274)));
    iVar5 = (int)this + 0xc20;
    iVar6 = (int)this + 0xc4c;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),(bool)REFG(char, 0x13712b0) == (iVar2 != 0));
    uVar8 = *((undefined4 *)GEN_TOP(((int)this + 0x2694)));
    uVar7 = *((undefined4 *)GEN_TOP(((int)this + 0x2690)));
    if (iVar3 == 0) {
      uVar4 = F_00976f30(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      uVar9 = (*(undefined4 *)(gen_frame + 0x0));
    }
    else {
      uVar4 = (int)this + 0xa8c;
      uVar9 = (*(undefined4 *)(gen_frame + 0x0));
    }
    F_0046d850(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25e8))) GEN_EDX_ARG,uVar4,iVar5,iVar6,uVar7,uVar8,uVar9);
    iVar5 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    REFG(char, 0x13712b0) = iVar5 != 0;
    uVar4 = (uint)(byte)REFG(char, 0x13712b0);
  }
  return (byte)uVar4;
}

/* ref: FUN_00424fb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00424fb0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x424fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = ((undefined4 *)GEN_TOP((in_ecx + 0x5cc)));
  puVar3 = ((undefined4 *)GEN_TOP((in_ecx + 0xc20)));
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP((in_ecx + 0x5f8)));
  puVar3 = ((undefined4 *)GEN_TOP((in_ecx + 0xc4c)));
  for (iVar1 = 0x125; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (*((int *)GEN_TOP((in_ecx + 0x127c))) != 0) {
    puVar2 = ((undefined4 *)GEN_TOP((in_ecx + 0x438)));
    puVar3 = ((undefined4 *)GEN_TOP((in_ecx + 0xa8c)));
    for (iVar1 = 0x65; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return in_ecx;
}

/* ref: FUN_00425000 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00425000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x425000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00424c60(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00425010 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00425010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x425010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((int *)GEN_TOP(((int)this + 0x25f8))) != 0) {
    this = ((undefined *)GEN_TOP(F_004ea660(*((int *)GEN_TOP(((int)this + 0x25f8))) GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x1198)))))));
  }
  return (uint)this;
}

/* ref: FUN_00425030 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_00425030(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x425030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x13712a4);
  *((uint *)GEN_TOP((REFG(undefined4, 0x13712a4) + 0x30))) = *((uint *)GEN_TOP((REFG(undefined4, 0x13712a4) + 0x30))) & 0xfffffffb;
  return uVar1;
}

/* ref: FUN_00425040 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00425040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x425040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00414500(*((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,0x18);
  if (*((int *)GEN_TOP((uVar1 + 0x14))) == 1) {
    uVar1 = F_00975bf0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25fc))) GEN_EDX_ARG);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00425070 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00425070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x425070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  byte bVar2;
  uint uVar3;
  byte local_5;
  
  local_5 = 1;
  if ((*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25f4))) != ((undefined *)GEN_TOP(0x0))) &&
     (bVar2 = F_0049bf20(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25f4))) GEN_EDX_FWD), bVar2 == 0)) {
    local_5 = 0;
  }
  if ((*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25f8))) != ((undefined *)GEN_TOP(0x0))) &&
     (bVar2 = F_004e89d0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25f8))) GEN_EDX_ARG), bVar2 == 0)) {
    local_5 = 0;
  }
  if ((*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25fc))) != ((undefined *)GEN_TOP(0x0))) &&
     (bVar2 = F_00975d20(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25fc))) GEN_EDX_ARG), bVar2 == 0)) {
    local_5 = 0;
  }
  if ((*((int *)GEN_TOP(((int)this + 0x2618))) != 0) && (bVar2 = F_004298d0(), bVar2 == 0)) {
    local_5 = 0;
  }
  if ((REFG(void * PTR32, 0x1375b00) != ((undefined *)GEN_TOP(0x0))) && (uVar3 = F_0052ebd0(REFG(void * PTR32, 0x1375b00) GEN_EDX_ARG), (char)uVar3 == '\0')) {
    local_5 = 0;
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1158))) != ((undefined *)GEN_TOP(0x0))) {
    *((undefined2 *)GEN_TOP(((int)this + 0x115c))) = 0;
    F_00975570(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1158))) GEN_EDX_ARG);
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1158)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x1158))) = 0;
    }
  }
  F_005d5710(&REFG(undefined, 0x1379c6c) GEN_EDX_ARG);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25e8))) != ((undefined *)GEN_TOP(0x0))) {
    if (REFG(char, 0x13712b1) == '\0') {
      F_0043eb40(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25e8))) GEN_EDX_ARG);
      REFG(char, 0x13712b1) = '\x01';
    }
    bVar2 = F_00433b50(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25e8))) GEN_EDX_ARG);
    if (bVar2 == 0) {
      return 0;
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x25e8)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x25e8))) = 0;
    }
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25ec))) != ((undefined *)GEN_TOP(0x0))) {
    F_00431a60(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25ec))) GEN_EDX_ARG);
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x25ec)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x25ec))) = 0;
    }
  }
  bVar2 = F_005ee6d0();
  if (bVar2 == 0) {
    local_5 = 0;
  }
  if ((*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25e0))) != ((undefined *)GEN_TOP(0x0))) &&
     (bVar2 = F_00550fc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25e0))) GEN_EDX_ARG), bVar2 == 0)) {
    local_5 = 0;
  }
  if ((*((int *)GEN_TOP(((int)this + 0x25dc))) != 0) &&
     (bVar2 = F_009f00b0(*((int *)GEN_TOP(((int)this + 0x25dc))) GEN_EDX_ARG), bVar2 == 0)) {
    local_5 = 0;
  }
  if (REFG(void * PTR32, 0x13712a0) != ((undefined *)GEN_TOP(0x0))) {
    F_006a5f00(REFG(void * PTR32, 0x13712a0) GEN_EDX_ARG);
  }
  if (REFG(void * PTR32, 0x137129c) != ((undefined *)GEN_TOP(0x0))) {
    F_006a8a80(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG);
  }
  if (REFG(void * PTR32, 0x1371290) != ((undefined *)GEN_TOP(0x0))) {
    F_004af960(REFG(void * PTR32, 0x1371290) GEN_EDX_ARG);
  }
  F_009d6470();
  if (REFG(void * PTR32, 0x137128c) != ((undefined *)GEN_TOP(0x0))) {
    F_0067a420(REFG(void * PTR32, 0x137128c) GEN_EDX_ARG);
  }
  if (REFG(void * PTR32, 0x1371284) != ((undefined *)GEN_TOP(0x0))) {
    F_00620ec0(REFG(void * PTR32, 0x1371284) GEN_EDX_ARG);
  }
  if (REFG(void * PTR32, 0x137127c) != ((undefined *)GEN_TOP(0x0))) {
    F_0065d980(REFG(void * PTR32, 0x137127c) GEN_EDX_ARG);
  }
  if (REFG(int, 0x1371274) != 0) {
    F_004d2510(REFG(void * PTR32, 0x1370c18) GEN_EDX_ARG);
  }
  if (REFG(void * PTR32, 0x1370b90) != ((undefined *)GEN_TOP(0x0))) {
    F_004dac00(REFG(void * PTR32, 0x1370b90) GEN_EDX_ARG);
  }
  if ((REFG(void * PTR32, 0x1375aec) != ((undefined *)GEN_TOP(0x0))) && (bVar2 = F_00507370(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG), bVar2 == 0)) {
    local_5 = 0;
  }
  bVar2 = F_00976a60(this GEN_EDX_ARG);
  if (bVar2 == 0) {
    return 0;
  }
  return local_5;
}

/* ref: FUN_00425280 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00425280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x425280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  undefined4 * puVar2;
  uint uVar3;
  
  if ((REFG(int * PTR32, 0x1488338) != ((int *)GEN_TOP(0x0))) && (piVar1 = ((int *)GEN_TOP(*REFG(int * PTR32, 0x1488338))), piVar1 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_FWD);
  }
  F_0041f460(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,(int)this + 0x24);
  F_00976950(this GEN_EDX_ARG);
  F_005d5a90();
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x25e0)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00550f20(this_00 GEN_EDX_ARG);
    F_00406ad0(this_00);
    *((undefined4 *)GEN_TOP(((int)this + 0x25e0))) = 0;
  }
  if (REFG(void * PTR32, 0x1375b00) != ((undefined *)GEN_TOP(0x0))) {
    F_0052ec80(REFG(void * PTR32, 0x1375b00) GEN_EDX_ARG);
  }
  F_00a0a240();
  F_00a09ed0();
  F_00a09e00();
  F_00a083b0();
  F_00a064d0();
  F_00a061e0();
  F_00a05000();
  F_00a03d40();
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1158))) != ((undefined *)GEN_TOP(0x0))) {
    F_00975570(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1158))) GEN_EDX_ARG);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1158)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x1158))) = 0;
    }
  }
  F_00a019a0(((undefined *)GEN_TOP(((int)this + 0x2620))) GEN_EDX_ARG);
  F_00a01730(((undefined *)GEN_TOP(((int)this + 0x2600))) GEN_EDX_ARG);
  F_006b8b20();
  F_009bfac0();
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  }
  F_005321d0();
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x25e8)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x25e8))) = 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x25ec)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x25ec))) = 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x25d4)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x25d4))) = 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x25d8)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x25d8))) = 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x25dc)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x25dc))) = 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x25f4)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x25f4))) = 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x25f8)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x25f8))) = 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x25fc)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x25fc))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x2618))) != 0) {
    F_00406ad0(*((int *)GEN_TOP(((int)this + 0x2618))));
    *((undefined4 *)GEN_TOP(((int)this + 0x2618))) = 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x25d0)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x25d0))) = 0;
  }
  if (REFG(undefined4 * PTR32, 0x1371298) != ((undefined4 *)GEN_TOP(0x0))) {
    F_0068c0b0(REFG(undefined4 * PTR32, 0x1371298) GEN_EDX_ARG);
    if (REFG(undefined4 * PTR32, 0x1371298) != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1371298))))(REFG(undefined4 * PTR32, 0x1371298) GEN_EDX_ARG,1);
      REFG(undefined4 * PTR32, 0x1371298) = ((undefined4 *)GEN_TOP(0x0));
    }
  }
  if (REFG(int * PTR32, 0x1371294) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1371294) + 4))))(REFG(int * PTR32, 0x1371294) GEN_EDX_ARG);
    if (REFG(int * PTR32, 0x1371294) != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x1371294))))(REFG(int * PTR32, 0x1371294) GEN_EDX_ARG,1);
      REFG(int * PTR32, 0x1371294) = ((int *)GEN_TOP(0x0));
    }
  }
  F_00a00c60();
  if (*((int *)GEN_TOP(((int)this + 0x26c4))) != -1) {
    F_004dad60(REFG(undefined4 * PTR32, 0x1370b90) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x26c4))));
  }
  if (REFG(int * PTR32, 0x137129c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137129c) + 4))))(REFG(int * PTR32, 0x137129c) GEN_EDX_ARG);
    if (REFG(int * PTR32, 0x137129c) != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x137129c))))(REFG(int * PTR32, 0x137129c) GEN_EDX_ARG,1);
      REFG(int * PTR32, 0x137129c) = ((int *)GEN_TOP(0x0));
    }
  }
  if (REFG(undefined4 * PTR32, 0x1371290) != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1371290))))(REFG(undefined4 * PTR32, 0x1371290) GEN_EDX_ARG,1);
    REFG(undefined4 * PTR32, 0x1371290) = ((undefined4 *)GEN_TOP(0x0));
  }
  if (REFG(undefined4 * PTR32, 0x137128c) != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x137128c))))(REFG(undefined4 * PTR32, 0x137128c) GEN_EDX_ARG,1);
    REFG(undefined4 * PTR32, 0x137128c) = ((undefined4 *)GEN_TOP(0x0));
  }
  if (REFG(undefined4 * PTR32, 0x1371284) != ((undefined4 *)GEN_TOP(0x0))) {
    F_00620d30(REFG(undefined4 * PTR32, 0x1371284) GEN_EDX_ARG);
    if (REFG(undefined4 * PTR32, 0x1371284) != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1371284))))(REFG(undefined4 * PTR32, 0x1371284) GEN_EDX_ARG,1);
      REFG(undefined4 * PTR32, 0x1371284) = ((undefined4 *)GEN_TOP(0x0));
    }
  }
  if (REFG(undefined4 * PTR32, 0x1371280) != ((undefined4 *)GEN_TOP(0x0))) {
    F_00620f70();
    if (REFG(undefined4 * PTR32, 0x1371280) != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1371280))))(REFG(undefined4 * PTR32, 0x1371280) GEN_EDX_ARG,1);
      REFG(undefined4 * PTR32, 0x1371280) = ((undefined4 *)GEN_TOP(0x0));
    }
  }
  if (REFG(undefined4 * PTR32, 0x1371288) != ((undefined4 *)GEN_TOP(0x0))) {
    F_00620820(REFG(undefined4 * PTR32, 0x1371288) GEN_EDX_ARG);
    if (REFG(undefined4 * PTR32, 0x1371288) != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1371288))))(REFG(undefined4 * PTR32, 0x1371288) GEN_EDX_ARG,1);
      REFG(undefined4 * PTR32, 0x1371288) = ((undefined4 *)GEN_TOP(0x0));
    }
  }
  if (REFG(undefined4 * PTR32, 0x137127c) != ((undefined4 *)GEN_TOP(0x0))) {
    F_0064ca50(REFG(undefined4 * PTR32, 0x137127c) GEN_EDX_ARG);
    if (REFG(undefined4 * PTR32, 0x137127c) != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x137127c))))(REFG(undefined4 * PTR32, 0x137127c) GEN_EDX_ARG,1);
      REFG(undefined4 * PTR32, 0x137127c) = ((undefined4 *)GEN_TOP(0x0));
    }
  }
  if (REFG(int * PTR32, 0x13712a0) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x13712a0) + 4))))(REFG(int * PTR32, 0x13712a0) GEN_EDX_ARG);
    if (REFG(int * PTR32, 0x13712a0) != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x13712a0))))(REFG(int * PTR32, 0x13712a0) GEN_EDX_ARG,1);
      REFG(int * PTR32, 0x13712a0) = ((int *)GEN_TOP(0x0));
    }
  }
  if (REFG(undefined4 * PTR32, 0x1371278) != ((undefined4 *)GEN_TOP(0x0))) {
    F_0061e390();
    if (REFG(undefined4 * PTR32, 0x1371278) != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1371278))))(REFG(undefined4 * PTR32, 0x1371278) GEN_EDX_ARG,1);
      REFG(undefined4 * PTR32, 0x1371278) = ((undefined4 *)GEN_TOP(0x0));
    }
  }
  if (REFG(undefined4 * PTR32, 0x1371274) != ((undefined4 *)GEN_TOP(0x0))) {
    F_004d18a0(REFG(undefined4 * PTR32, 0x1371274) GEN_EDX_ARG);
    if (REFG(undefined4 * PTR32, 0x1371274) != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1371274))))(REFG(undefined4 * PTR32, 0x1371274) GEN_EDX_ARG,1);
      REFG(undefined4 * PTR32, 0x1371274) = ((undefined4 *)GEN_TOP(0x0));
    }
  }
  F_004dfaf0(REFG(undefined4 * PTR32, 0x1370b90) GEN_EDX_ARG);
  if (REFG(undefined4 * PTR32, 0x1370b90) != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1370b90))))(REFG(undefined4 * PTR32, 0x1370b90) GEN_EDX_ARG,1);
    REFG(undefined4 * PTR32, 0x1370b90) = ((undefined4 *)GEN_TOP(0x0));
  }
  F_005179a0();
  F_004a0ee0(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG);
  F_009f2930();
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x11ac)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x11ac))) = 0;
  }
  if (REFG(void * PTR32, 0x1375ae8) != ((undefined *)GEN_TOP(0x0))) {
    F_004fd960(REFG(void * PTR32, 0x1375ae8) GEN_EDX_ARG);
  }
  F_004cf620(REFG(void * PTR32, 0x1375a1c) GEN_EDX_ARG);
  F_00428dc0(*((undefined4 *)GEN_TOP(((int)this + 0x434))));
  F_009f1600(1);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1371270) + 4))))(REFG(int * PTR32, 0x1371270) GEN_EDX_ARG);
  if (REFG(int * PTR32, 0x1371270) != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x1371270))))(REFG(int * PTR32, 0x1371270) GEN_EDX_ARG,1);
    REFG(int * PTR32, 0x1371270) = ((int *)GEN_TOP(0x0));
  }
  *((undefined1 *)GEN_TOP(((int)this + 10))) = 1;
  return uVar3;
}

/* ref: FUN_004256e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004256e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4256e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  int iVar2;
  float10 fVar3;
  uint uVar4;
  float fVar5;
  float10 fVar6;
  float fVar7;
  __time64_t _Var8;
  ulonglong uVar9;
  
  *((int *)GEN_TOP(((int)this + 0x11a8))) = *((int *)GEN_TOP(((int)this + 0x11a8))) + 1;
  gen_imp_QueryPerformanceCounter(&(*(uint *)(gen_frame + 0x0)));
  uVar4 = (*(uint *)(gen_frame + 0x0)) - *((uint *)GEN_TOP(((int)this + 0x1188)));
  fVar5 = gen_bits2f(((int)gen_fl2bits((*(float *)(gen_frame + 0x4))) - *((int *)GEN_TOP(((int)this + 0x118c)))) -
                     (uint)((*(uint *)(gen_frame + 0x0)) < *((uint *)GEN_TOP(((int)this + 0x1188)))));
  (*(uint *)(gen_frame + 0x0)) = uVar4;
  (*(float *)(gen_frame + 0x4)) = fVar5;
  fVar7 = *((float *)GEN_TOP(((int)this + 0x11a0)));
  fVar5 = ((float)GEN_TOF(((float10)(longlong)CONCAT44((uint)gen_fl2bits(fVar5),uVar4) /
                 (float10)*((longlong *)GEN_TOP(((int)this + 0x1180))))));
  (*(float *)(gen_frame + 0x4)) = fVar5;
  *((float *)GEN_TOP(((int)this + 0x119c))) = fVar5;
  *((float *)GEN_TOP(((int)this + 0x1198))) = fVar5;
  if (0.0 < fVar7) {
    *((float *)GEN_TOP(((int)this + 0x1198))) = fVar7;
  }
  if (*((int *)GEN_TOP(((int)this + 0x126c))) != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x1198))) = 0;
  }
  fVar5 = *((float *)GEN_TOP(((int)this + 0x1270)));
  if (GEN_ISNAN(fVar5) == (GEN_ISNAN(fVar5) || fVar5 == 0.0)) {
    if (fVar5 < 0.0) {
      if (!(0.0 < fVar7)) {
        fVar7 = REFG(float, 0x108bee8);
      }
      *((float *)GEN_TOP(((int)this + 0x1198))) = fVar7;
    }
    else {
      *((float *)GEN_TOP(((int)this + 0x1198))) = fVar5;
    }
  }
  fVar7 = *((float *)GEN_TOP(((int)this + 0x11a4)));
  (*(float *)(gen_frame + 0x4)) = fVar7;
  if (GEN_ISNAN(fVar7) == (GEN_ISNAN(fVar7) || fVar7 == 0.0)) {
    *((float *)GEN_TOP(((int)this + 0x1198))) =
         ((float)GEN_TOF(((float10)fVar7 * (float10)*((float *)GEN_TOP(((int)this + 0x1198))))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1270))) = 0;
  gen_imp_QueryPerformanceCounter(&(*(uint *)(gen_frame + 0x0)));
  *((uint *)GEN_TOP(((int)this + 0x1188))) = (*(uint *)(gen_frame + 0x0));
  *((float *)GEN_TOP(((int)this + 0x118c))) = (*(float *)(gen_frame + 0x4));
  F_004d7150(REFG(void * PTR32, 0x1370b90) GEN_EDX_ARG);
  F_009bc6f0(GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x1198)))));
  F_004d25e0(REFG(void * PTR32, 0x1370c18) GEN_EDX_ARG);
  F_00427d90();
  _Var8 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *((int *)GEN_TOP(((int)this + 0x1160))) = (int)_Var8;
  uVar9 = F_00427d90();
  *((ulonglong *)GEN_TOP(((int)this + 0x1168))) = uVar9;
  uVar9 = F_00427e30();
  *((ulonglong *)GEN_TOP(((int)this + 0x1170))) = uVar9;
  (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP(((int)this + 0x1198)));
  F_0049fb40(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x4)));
  *(float *)&REFG(undefined, 0x13712b8) = (float)((float10)*(float *)&REFG(undefined, 0x13712b8) + (float10)REFG(double, 0x1088130));
  *(float *)&REFG(undefined, 0x13712b4) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x119c))) + (float10)*(float *)&REFG(undefined, 0x13712b4))));
  fVar6 = (float10)*(float *)&REFG(undefined, 0x13712b4);
  if ((float10)1 <= fVar6) {
    fVar3 = (float10)*(float *)&REFG(undefined, 0x13712b8);
    *(float *)&REFG(undefined, 0x13712b8) = 0.0;
    *(float *)&REFG(undefined, 0x13712b4) = 0.0;
    *((float *)GEN_TOP(((int)this + 0x1268))) = (float)(fVar3 / fVar6);
  }
  F_004d3630(REFG(void * PTR32, 0x1370c18) GEN_EDX_ARG);
  F_004d2f20(REFG(void * PTR32, 0x1370c18) GEN_EDX_ARG);
  if (*((int *)GEN_TOP(((int)this + 0x25f8))) != 0) {
    F_004e7600();
  }
  F_00621ab0();
  F_004df0a0(REFG(void * PTR32, 0x1370b90) GEN_EDX_ARG);
  if ((*((char *)GEN_TOP(((int)this + 8))) != '\0') &&
     (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG), (char)uVar4 != '\0')) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
    return 0;
  }
  piVar1 = ((int *)GEN_TOP(((int)this + 0x1274)));
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
  if ((iVar2 != 0) &&
     (uVar4 = F_00414500(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0x17), *((int *)GEN_TOP((uVar4 + 0x14))) == 1)) {
    F_004cee60(0x32);
  }
  return 1;
}

/* ref: FUN_00425940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00425940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x425940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x25f8))) != 0) {
    F_004e7680(*((int *)GEN_TOP(((int)this + 0x25f8))) GEN_EDX_FWD,param_1,100);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x25e8)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_ARG,param_1);
  }
  _InterlockedExchange((volatile long *)((((uint *)GEN_TOP(((int)this + 0x1274))))), (long)(param_1 & 0xff));
  uVar2 = 0;
  if (REFG(int, 0x1488338) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1488338) + 4))) + 0x18))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1488338) + 4))) GEN_EDX_ARG,(uint)((char)param_1 == '\0'));
  }
  return uVar2;
}

/* ref: FUN_004259a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004259a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4259a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0068c1a0(REFG(void * PTR32, 0x1371298) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_004259b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004259b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4259b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  undefined * this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x25e8))) != 0) {
    uVar2 = *((undefined4 *)GEN_TOP((REFG(int, 0x1370b90) + 0x94)));
    uVar1 = *((undefined4 *)GEN_TOP((REFG(int, 0x1370b90) + 0x90)));
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x25e8))) + 0x1c))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 0x25e8))) GEN_EDX_ARG)));
    F_005676e0(this_00 GEN_EDX_ARG,uVar1,uVar2);
    F_00469810(*((undefined4 *)GEN_TOP(((int)this + 0x25e8))) GEN_EDX_ARG,*param_1);
  }
  return;
}

/* ref: FUN_00425a00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00425a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x425a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  undefined * this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25d8))) != ((undefined *)GEN_TOP(0x0))) {
    F_0052fb90(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25d8))) GEN_EDX_FWD);
  }
  if (*((int *)GEN_TOP(((int)this + 0x25e8))) != 0) {
    uVar2 = *((undefined4 *)GEN_TOP((REFG(int, 0x1370b90) + 0x94)));
    uVar1 = *((undefined4 *)GEN_TOP((REFG(int, 0x1370b90) + 0x90)));
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x25e8))) + 0x1c))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 0x25e8))) GEN_EDX_ARG)));
    F_005676e0(this_00 GEN_EDX_ARG,uVar1,uVar2);
    F_00469810(*((undefined4 *)GEN_TOP(((int)this + 0x25e8))) GEN_EDX_ARG,*param_1);
  }
  if (*((int *)GEN_TOP(((int)this + 0x25f8))) != 0) {
    F_004ea660(*((int *)GEN_TOP(((int)this + 0x25f8))) GEN_EDX_ARG,*param_1);
  }
  if (*((int *)GEN_TOP(((int)this + 0x2618))) != 0) {
    F_004298e0();
  }
  return;
}

/* ref: FUN_00425a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00425a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x425a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  F_009bfe00();
  F_00621ac0();
  uVar1 = F_005d9120(param_1);
  if ((*((char *)GEN_TOP(((int)this + 9))) != '\0') && (*((char *)GEN_TOP(((int)this + 8))) == '\0')) {
    *((undefined1 *)GEN_TOP(((int)this + 8))) = 1;
  }
  return uVar1;
}

/* ref: FUN_00425ad0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00425ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x425ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1371294) + 0x10))))(REFG(int * PTR32, 0x1371294) GEN_EDX_FWD);
  F_009d9700();
  F_006abd20(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00425af0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00425af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x425af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1371294) + 0x14))))(REFG(int * PTR32, 0x1371294) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00425b00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00425b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x425b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00657f80(REFG(void * PTR32, 0x137127c) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00425b10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00425b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x425b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0065deb0(REFG(void * PTR32, 0x137127c) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00425b20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00425b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x425b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00658340(REFG(undefined4, 0x137127c) GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x1198)))),param_1);
  return;
}

/* ref: FUN_00425b40 */
GEN_OWN GEN_NOFRAME uint F_00425b40(void)
{
  GEN_ENTER(0x425b40u, 0u, 0u, 0u, 0u);
  char cVar1;
  undefined * this;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = REFG(undefined4, 0x132050c);
  iVar4 = 0;
  uVar3 = REFG(undefined4, 0x132050c);
  if (0 < (int)REFG(undefined4, 0x132050c)) {
    do {
      uVar3 = F_0062bc80(((undefined *)GEN_TOP((&REFG(undefined4, 0x137ba00))[(int)(iVar4 * 2)])) GEN_EDX_ARG);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  iVar4 = 0;
  if (0 < (int)uVar2) {
    do {
      this = ((undefined *)GEN_TOP((&REFG(undefined4, 0x137ba00))[(int)(iVar4 * 2)]));
      uVar3 = F_00a065a0();
      if (((char)uVar3 == '\0') || (*((char *)GEN_TOP(((int)this + 0xa8))) < '\x01')) {
        F_00623700(this GEN_EDX_ARG);
        uVar3 = F_0062bc80(this GEN_EDX_ARG);
        if (1 < *((ushort *)GEN_TOP(((int)this + 0x40)))) {
          cVar1 = *((char *)GEN_TOP(((int)this + 0x9c)));
          uVar3 = CONCAT31((int3)(uVar3 >> 8),cVar1);
          if (-1 < cVar1) {
            uVar3 = F_009f7500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG,(int)this + 0x10,(int)cVar1);
          }
        }
        if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) != ((undefined *)GEN_TOP(0x0))) {
          uVar3 = F_009f08d0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  iVar4 = 0;
  if (0 < (int)uVar2) {
    do {
      uVar3 = *((uint *)GEN_TOP(((&REFG(undefined4, 0x137ba00))[(int)(iVar4 * 2)] + 0x74)));
      if ((uVar3 != 0) && (*((int *)GEN_TOP((uVar3 + 200))) != 0)) {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x90))) + 4))))(uVar3 + 0x90,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  REFG(undefined4, 0x132050c) = 0xffffffff;
  return uVar3;
}

/* ref: FUN_00425b50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00425b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x425b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00625920(*((undefined4 *)GEN_TOP(((int)this + 0x1198))),param_1);
  return;
}

/* ref: FUN_00425b70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00425b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x425b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00621a80();
  return uVar1;
}

/* ref: FUN_00425b80 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00425b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x425b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0xdc, 4, 4);
  byte bVar1;
  wchar_t * pwVar2;
  undefined * pvVar3;
  uint uVar4;
  wchar_t * _Src;
  undefined4 * puVar5;
  char * pcVar6;
  undefined4 * puVar7;
  int * piVar8;
  int iVar9;
  uint uVar10;
  __time64_t _Var11;
  ulonglong uVar12;
  undefined4 uVar13;
  tagRECT * lpRect;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd8));
  F_004302b0(this GEN_EDX_FWD);
  uVar4 = **((uint * PTR32 *)GEN_TOP(((int)this + 0x434)));
  puVar7 = ((undefined4 *)GEN_TOP((*((uint * PTR32 *)GEN_TOP(((int)this + 0x434))))[1]));
  uVar10 = 0;
  (*(LARGE_INTEGER *)(gen_frame + 0x24)).s.LowPart = uVar4;
  (*(LARGE_INTEGER *)(gen_frame + 0x24)).s.HighPart = (LONG)puVar7;
  if (uVar4 != 0) {
    do {
      F_00424640(*((undefined4 *)GEN_TOP(((*(LARGE_INTEGER *)(gen_frame + 0x24)).s.HighPart + uVar10 * 4))),((char *)REFP(0x108bad8)),
                   (int)this + 0x1c,4);
      F_00424640(*((undefined4 *)GEN_TOP(((*(LARGE_INTEGER *)(gen_frame + 0x24)).s.HighPart + uVar10 * 4))),((char *)REFP(0x108bae8)),(int)this + 0x1c,4)
      ;
      F_00424640(*((undefined4 *)GEN_TOP(((*(LARGE_INTEGER *)(gen_frame + 0x24)).s.HighPart + uVar10 * 4))),((char *)REFP(0x108baf4)),(int)this + 0x1d,
                   0x7f);
      F_00424640(*((undefined4 *)GEN_TOP(((*(LARGE_INTEGER *)(gen_frame + 0x24)).s.HighPart + uVar10 * 4))),((char *)REFP(0x108bb00)),(int)this + 0x1d,0x7f
                  );
      uVar10 = uVar10 + 1;
    } while (uVar10 != (*(LARGE_INTEGER *)(gen_frame + 0x24)).s.LowPart);
  }
  pwVar2 = ((wchar_t *)GEN_TOP(F_004302b0(this GEN_EDX_ARG)));
  F_00c4a8e0(((wchar_t *)GEN_TOP(((int)this + 0x22c))),0x104,pwVar2);
  F_004cef80();
  ((char * PTR32 *)(gen_frame + 0x0))[0] = ((char *)REFP(0x108bb08));
  pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0x210,0,0x80)));
  if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
    uVar4 = 0;
  }
  else {
    uVar4 = F_00a1a3d0(pvVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x434))),((char * PTR32 *)(gen_frame + 0x0)));
  }
  *((uint *)GEN_TOP(((int)this + 0x11ac))) = uVar4;
  pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0xd0,0,0)));
  if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
    REFG(void * PTR32, 0x1371270) = ((undefined *)GEN_TOP(0x0));
  }
  else {
    REFG(void * PTR32, 0x1371270) = ((undefined *)GEN_TOP(F_004f5b30(pvVar3 GEN_EDX_ARG)));
  }
  F_004f5b80(REFG(void * PTR32, 0x1371270) GEN_EDX_ARG);
  F_009fa070(1);
  F_004fb230();
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = REFG(void * PTR32, 0x1375ae8);
  F_004fa160(REFG(void * PTR32, 0x1375ae8) GEN_EDX_ARG);
  F_004f8010();
  F_00976840(this GEN_EDX_ARG);
  uVar4 = F_00406b90(4,0,0);
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = F_00415810(uVar4 GEN_EDX_ARG);
  }
  F_00413d20(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,uVar4);
  F_0041b370(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  F_0041d2a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG);
  _Src = ((wchar_t *)GEN_TOP(F_004308f0(this GEN_EDX_ARG)));
  pwVar2 = ((wchar_t *)GEN_TOP(((int)this + 0x24)));
  F_00c4a8e0(pwVar2,0x104,_Src);
  F_0042a2a0(pwVar2 GEN_EDX_ARG,&REFG(undefined, 0x108bb1c));
  F_0042e170(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[2])REFP(0x108bb20)));
  F_0042a1b0(pwVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x80)));
  F_0042c880(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG);
  uVar4 = F_004203b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,pwVar2);
  if (uVar4 == 1) {
    F_0041f460(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,pwVar2);
  }
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xac))) = 1;
  if (*((char *)GEN_TOP(((int)this + 0x1c))) < '\0') {
    uVar4 = F_00414500(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,4);
    *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = *((undefined1 *)GEN_TOP((uVar4 + 0x14)));
  }
  if (*((char *)GEN_TOP(((int)this + 0x1d))) < '\0') {
    uVar4 = F_00414500(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,5);
    *((undefined1 *)GEN_TOP(((int)this + 0x1d))) = *((undefined1 *)GEN_TOP((uVar4 + 0x14)));
  }
  F_00414000(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x1c)) = ((char *)GEN_TOP(0x0));
  F_0042b630(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
  uVar4 = 0;
  if ((*(LARGE_INTEGER *)(gen_frame + 0x24)).s.LowPart != 0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = ((undefined4 *)GEN_TOP((*(LARGE_INTEGER *)(gen_frame + 0x24)).s.HighPart));
    do {
      if (uVar4 != 0) {
        F_0042e370(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG,*(*(undefined4 * PTR32 *)(gen_frame + 0x20)));
        F_0042e370(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG,&REFG(undefined, 0x108bb34));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = (*(undefined4 * PTR32 *)(gen_frame + 0x20)) + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != (*(LARGE_INTEGER *)(gen_frame + 0x24)).s.LowPart);
    if (1 < uVar4) {
      F_00421840(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2c)),(*(undefined * PTR32 (*)[1])REFP(0x108bb38)));
      F_00421840(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2c)),(*(undefined * PTR32 (*)[1])REFP(0x108bb3c)));
    }
  }
  if (-1 < *((char *)GEN_TOP(((int)this + 0x1c)))) {
    iVar9 = (int)*((char *)GEN_TOP(((int)this + 0x1c)));
    uVar13 = 1;
    pvVar3 = ((undefined *)GEN_TOP(F_00414500(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,4)));
    F_00414a40(pvVar3 GEN_EDX_ARG,iVar9,uVar13);
  }
  uVar4 = F_00414500(*((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,0xc);
  F_00a1a080(*((undefined4 *)GEN_TOP((uVar4 + 0x14))));
  uVar4 = F_00414500(*((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,4);
  *((undefined4 *)GEN_TOP(((int)this + 0x1278))) = *((undefined4 *)GEN_TOP((uVar4 + 0x14)));
  uVar4 = F_00414500(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0x4c);
  *((undefined4 *)GEN_TOP(((int)this + 0x127c))) = *((undefined4 *)GEN_TOP((uVar4 + 0x14)));
  uVar4 = F_00414500(*((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,0xb);
  puVar7 = ((undefined4 *)GEN_TOP(((int)this + 0x2640)));
  F_00428940(puVar7,0x14,*((uint *)GEN_TOP((uVar4 + 0x14))));
  uVar4 = F_00414500(*((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,0x13);
  *((undefined4 *)GEN_TOP(((int)this + 0x1284))) = *((undefined4 *)GEN_TOP((uVar4 + 0x14)));
  uVar4 = F_00414500(*((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,10);
  iVar9 = *((int *)GEN_TOP((uVar4 + 0x14)));
  *((int *)GEN_TOP(((int)this + 0x1280))) = iVar9;
  if ((iVar9 == 1) || (iVar9 == 2)) {
    iVar9 = 0x14;
    puVar5 = puVar7;
    do {
      *puVar5 = *((undefined4 *)GEN_TOP(((int)this + 0x1280)));
      puVar5 = puVar5 + 1;
      iVar9 = iVar9 - 1;
    } while (iVar9 != 0);
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = puVar7;
  (*(int *)(gen_frame + 0x14)) = 0x14;
  do {
    F_004306f0(this GEN_EDX_ARG,*(*(undefined4 * PTR32 *)(gen_frame + 0x20)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = (*(undefined4 * PTR32 *)(gen_frame + 0x20)) + 1;
    iVar9 = (*(int *)(gen_frame + 0x14)) - 1;
    (*(int *)(gen_frame + 0x14)) = iVar9;
  } while (iVar9 != 0);
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0xd4))) = puVar7;
  uVar4 = 0;
  if ((*(LARGE_INTEGER *)(gen_frame + 0x24)).s.LowPart != 0) {
    do {
      pcVar6 = F_00c46a10(*((char * PTR32 *)GEN_TOP(((*(LARGE_INTEGER *)(gen_frame + 0x24)).s.HighPart + uVar4 * 4))),((char *)REFP(0x108bb40)));
      if (pcVar6 != ((char *)GEN_TOP(0x0))) {
        (*(char * PTR32 *)(gen_frame + 0x1c)) = ((char *)GEN_TOP((*((int *)GEN_TOP(((*(LARGE_INTEGER *)(gen_frame + 0x24)).s.HighPart + uVar4 * 4))) + 0xc)));
      }
      pcVar6 = F_00c46a10(*((char * PTR32 *)GEN_TOP(((*(LARGE_INTEGER *)(gen_frame + 0x24)).s.HighPart + uVar4 * 4))),((char *)REFP(0x108bb50)));
      if (pcVar6 != ((char *)GEN_TOP(0x0))) {
        (*(int *)(gen_frame + 0x10)) = *((int *)GEN_TOP(((*(LARGE_INTEGER *)(gen_frame + 0x24)).s.HighPart + uVar4 * 4))) + 4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != (*(LARGE_INTEGER *)(gen_frame + 0x24)).s.LowPart);
    if (((*(char * PTR32 *)(gen_frame + 0x1c)) != ((char *)GEN_TOP(0x0))) && (*(*(char * PTR32 *)(gen_frame + 0x1c)) != '\0')) {
      pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0x680,0,0)));
      if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
        uVar4 = 0;
      }
      else {
        uVar4 = F_0049bde0(pvVar3 GEN_EDX_ARG);
      }
      *((uint *)GEN_TOP(((int)this + 0x25f4))) = uVar4;
      F_0049ba40(0x80000000,0x80000000,0xffffffff,0xffffffff);
      uVar4 = F_00414500(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0x18);
      F_004292d0(*((undefined4 *)GEN_TOP(((int)this + 0x434))) GEN_EDX_ARG,*((int *)GEN_TOP((uVar4 + 0x14))) == 1,0);
      uVar4 = F_00414500(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0x19);
      if (*((int *)GEN_TOP((uVar4 + 0x14))) == 1) {
        uVar4 = F_00414500(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0x19);
        if (*((int *)GEN_TOP((uVar4 + 0x14))) == 1) {
          gen_imp_GetClientRect(*((HWND *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x434))) + 8))),&(*(tagRECT *)(gen_frame + 0xc4)));
          (*(LARGE_INTEGER *)(gen_frame + 0x24)).s.LowPart = (*(tagRECT *)(gen_frame + 0xc4)).left;
          (*(LARGE_INTEGER *)(gen_frame + 0x24)).s.HighPart = (*(tagRECT *)(gen_frame + 0xc4)).top;
          gen_imp_ClientToScreen(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x434))) + 8))),&(*(LARGE_INTEGER *)(gen_frame + 0x24)));
          (*(tagRECT *)(gen_frame + 0xc4)).left = (*(LARGE_INTEGER *)(gen_frame + 0x24)).s.LowPart;
          (*(tagRECT *)(gen_frame + 0xc4)).top = (*(LARGE_INTEGER *)(gen_frame + 0x24)).s.HighPart;
          (*(LARGE_INTEGER *)(gen_frame + 0x24)).s.LowPart = (*(tagRECT *)(gen_frame + 0xc4)).right;
          (*(LARGE_INTEGER *)(gen_frame + 0x24)).s.HighPart = (*(tagRECT *)(gen_frame + 0xc4)).bottom;
          gen_imp_ClientToScreen(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x434))) + 8))),&(*(LARGE_INTEGER *)(gen_frame + 0x24)));
          lpRect = &(*(tagRECT *)(gen_frame + 0xc4));
          (*(tagRECT *)(gen_frame + 0xc4)).right = (*(LARGE_INTEGER *)(gen_frame + 0x24)).s.LowPart;
          (*(tagRECT *)(gen_frame + 0xc4)).bottom = (*(LARGE_INTEGER *)(gen_frame + 0x24)).s.HighPart;
        }
        else {
          lpRect = ((RECT *)GEN_TOP(0x0));
        }
        gen_imp_ClipCursor(lpRect);
      }
      uVar13 = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1371270) + 8))) + 8))))
                                 (*((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1371270) + 8))) GEN_EDX_ARG,0x118,0x10)));
      if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
        REFG(void * PTR32, 0x1370b90) = ((undefined *)GEN_TOP(0x0));
      }
      else {
        REFG(void * PTR32, 0x1370b90) = ((undefined *)GEN_TOP(F_004de9d0(pvVar3 GEN_EDX_ARG)));
      }
      (*(undefined * PTR32 *)(gen_frame + 0xa4)) = &REFG(undefined, 0x1400000);
      (*(undefined4 *)(gen_frame + 0xa8)) = 0x10;
      (*(undefined1 *)(gen_frame + 0xac)) = 1;
      (*(undefined4 *)(gen_frame + 0xb0)) = 0x10000;
      (*(undefined1 *)(gen_frame + 0xb4)) = 0;
      uVar4 = F_00414500(uVar13 GEN_EDX_ARG,0xc);
      uVar4 = F_0042a990(*((undefined4 *)GEN_TOP((uVar4 + 0x14))) GEN_EDX_ARG);
      uVar4 = F_004e03e0(uVar4);
      (*(uint *)(gen_frame + 0xb8)) = uVar4;
      iVar9 = *((int *)GEN_TOP(((int)this + 0x434)));
      (*(undefined4 *)(gen_frame + 0xbc)) = *((undefined4 *)GEN_TOP((iVar9 + 8)));
      (*(undefined4 *)(gen_frame + 0xc0)) = *((undefined4 *)GEN_TOP((iVar9 + 0xc)));
      (*(tagRECT *)(gen_frame + 0xc4)).left = *((DWORD *)GEN_TOP((iVar9 + 0x10)));
      (*(tagRECT *)(gen_frame + 0xc4)).right = 0x438;
      (*(tagRECT *)(gen_frame + 0xc4)).top = 0x780;
      (*(tagRECT *)(gen_frame + 0xc4)).bottom = 0x3c;
      bVar1 = F_004dfd30(REFG(void * PTR32, 0x1370b90) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0xa4)));
      if (bVar1 == 0) {
        F_00429940(1,1,0x10000000,0xffffffff);
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 4;
      }
      else {
        uVar4 = F_004dad50(REFG(void * PTR32, 0x1370b90) GEN_EDX_ARG,((code *)REFP(0x424910)),0);
        *((uint *)GEN_TOP(((int)this + 0x26c4))) = uVar4;
        F_0049c1f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25f4))) GEN_EDX_ARG,3);
        uVar4 = F_0049bb60();
        F_0049c4c0(uVar4);
        F_00a0f430();
        pvVar3 = ((undefined *)GEN_TOP(F_006b8990()));
        (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
        (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP(((int)this + 0x434)));
        F_006b87f0(pvVar3 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
        bVar1 = F_006b8950(pvVar3 GEN_EDX_ARG,0);
        if (bVar1 == 0) {
          uVar4 = F_00406b90(0x10,0,0);
          if (uVar4 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = F_00975140(uVar4 GEN_EDX_ARG);
          }
          *((uint *)GEN_TOP(((int)this + 0x1158))) = uVar4;
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x424df0));
            puVar7[6] = ((char *)REFP(0x108bb58));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bb58));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0,puVar7);
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x424840));
            puVar7[6] = ((char *)REFP(0x108bb60));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bb60));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0x26,puVar7);
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x424ec0));
            puVar7[6] = ((char *)REFP(0x108bb6c));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bb6c));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0x27,puVar7);
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x424ee0));
            puVar7[6] = ((char *)REFP(0x108bb80));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bb80));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0xe,puVar7);
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x4259a0));
            puVar7[6] = ((char *)REFP(0x108bb90));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bb90));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0x11,puVar7);
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x4248b0));
            puVar7[6] = ((char *)REFP(0x108bba0));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bba0));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0x10,puVar7);
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425000));
            puVar7[6] = ((char *)REFP(0x108bbac));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bbac));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0xc,puVar7);
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x424fb0));
            puVar7[6] = ((char *)REFP(0x108bbbc));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bbbc));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,9,puVar7);
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425a00));
            puVar7[6] = ((char *)REFP(0x108bbd4));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bbd4));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0x21,puVar7);
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x424890));
            puVar7[6] = ((char *)REFP(0x108bbec));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bbec));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0x22,puVar7);
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x4248a0));
            puVar7[6] = ((char *)REFP(0x108bc04));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bc04));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0x23,puVar7);
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425a90));
            puVar7[6] = ((char *)REFP(0x108bc1c));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bc1c));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0x24,puVar7);
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425ad0));
            puVar7[6] = ((char *)REFP(0x108bc28));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bc28));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0x12,puVar7);
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425af0));
            puVar7[6] = ((char *)REFP(0x108bc3c));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bc3c));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0x18,puVar7);
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425b00));
            puVar7[6] = ((char *)REFP(0x108bc54));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bc54));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0x19,puVar7);
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425b10));
            puVar7[6] = ((char *)REFP(0x108bc6c));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bc6c));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0x1b,puVar7);
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425b20));
            puVar7[6] = ((char *)REFP(0x108bc84));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bc84));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0x13,puVar7);
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425b50));
            puVar7[6] = ((char *)REFP(0x108bc9c));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bc9c));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0x16,puVar7);
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425b70));
            puVar7[6] = ((char *)REFP(0x108bcb0));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bcb0));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0x14,puVar7);
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427cf0));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x425b40));
            puVar7[6] = ((char *)REFP(0x108bcd4));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bcd4));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0x15,puVar7);
          F_00517330();
          puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
          if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar7 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
            puVar7[2] = ((code *)REFP(0x427d00));
            puVar7[3] = this;
            puVar7[5] = 0;
            puVar7[4] = ((code *)REFP(0x4248f0));
            puVar7[6] = ((char *)REFP(0x108bce4));
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = ((char *)REFP(0x108bce4));
          }
          F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0x1f,puVar7);
          pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0x30,0,0)));
          if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
            REFG(void * PTR32, 0x1371278) = ((undefined *)GEN_TOP(0x0));
          }
          else {
            REFG(void * PTR32, 0x1371278) = ((undefined *)GEN_TOP(F_00621b80(pvVar3 GEN_EDX_ARG)));
          }
          F_00638350(REFG(void * PTR32, 0x1371278) GEN_EDX_ARG);
          F_00a03b80(((undefined *)GEN_TOP(((int)this + 0x2620))) GEN_EDX_ARG);
          F_0052eb40();
          F_0052eac0();
          pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0x94,0,0)));
          if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
            piVar8 = ((int *)GEN_TOP(0x0));
          }
          else {
            piVar8 = ((int *)GEN_TOP(F_00424390(pvVar3 GEN_EDX_ARG)));
          }
          *((int * PTR32 *)GEN_TOP(((int)this + 0x20))) = piVar8;
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 4))))(piVar8 GEN_EDX_ARG,(int)this + 0x5cc);
          F_004dc980(REFG(void * PTR32, 0x1370b90) GEN_EDX_ARG);
          uVar4 = F_00406b90(0x168,0,0);
          if (uVar4 == 0) {
            REFG(void * PTR32, 0x1371274) = ((undefined *)GEN_TOP(0x0));
          }
          else {
            REFG(void * PTR32, 0x1371274) = ((undefined *)GEN_TOP(F_004d0360(uVar4 GEN_EDX_ARG)));
          }
          (*(undefined4 *)(gen_frame + 0xc0)) = 0x80000;
          (*(tagRECT *)(gen_frame + 0xc4)).right = 0x80000;
          (*(undefined4 *)(gen_frame + 0xbc)) = 0x20000;
          (*(tagRECT *)(gen_frame + 0xc4)).left = 0x20000;
          (*(tagRECT *)(gen_frame + 0xc4)).top = 0x20000;
          (*(tagRECT *)(gen_frame + 0xc4)).bottom = 0x20000;
          F_004d27c0(REFG(void * PTR32, 0x1371274) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xbc)));
          F_004d0330(REFG(void * PTR32, 0x1370c18) GEN_EDX_ARG);
          pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0x1a8,0,0)));
          if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
            REFG(void * PTR32, 0x1371288) = ((undefined *)GEN_TOP(0x0));
          }
          else {
            REFG(void * PTR32, 0x1371288) = ((undefined *)GEN_TOP(F_00624510(pvVar3 GEN_EDX_ARG)));
          }
          F_00632420(REFG(void * PTR32, 0x1371288) GEN_EDX_ARG);
          pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0x11e50,0,0)));
          if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
            REFG(void * PTR32, 0x137127c) = ((undefined *)GEN_TOP(0x0));
          }
          else {
            REFG(void * PTR32, 0x137127c) = ((undefined *)GEN_TOP(F_00659530(pvVar3 GEN_EDX_ARG)));
          }
          F_00654dc0(REFG(void * PTR32, 0x137127c) GEN_EDX_ARG);
          F_00659830(REFG(void * PTR32, 0x137127c) GEN_EDX_ARG);
          pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0x8c0,0,0)));
          if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
            REFG(void * PTR32, 0x1371284) = ((undefined *)GEN_TOP(0x0));
          }
          else {
            REFG(void * PTR32, 0x1371284) = ((undefined *)GEN_TOP(F_0065c1b0(pvVar3 GEN_EDX_ARG)));
          }
          F_0065c790(REFG(void * PTR32, 0x1371284) GEN_EDX_ARG);
          F_00624650(REFG(void * PTR32, 0x1371284) GEN_EDX_ARG);
          pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0x158,0,0)));
          if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
            REFG(void * PTR32, 0x1371280) = ((undefined *)GEN_TOP(0x0));
          }
          else {
            REFG(void * PTR32, 0x1371280) = ((undefined *)GEN_TOP(F_0065af10(pvVar3 GEN_EDX_ARG)));
          }
          F_0064acd0(REFG(void * PTR32, 0x1371280) GEN_EDX_ARG);
          pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0x1740,0,0)));
          if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
            REFG(void * PTR32, 0x137128c) = ((undefined *)GEN_TOP(0x0));
          }
          else {
            REFG(void * PTR32, 0x137128c) = ((undefined *)GEN_TOP(F_0067a2b0(pvVar3 GEN_EDX_ARG)));
          }
          bVar1 = F_00684040(REFG(void * PTR32, 0x137128c) GEN_EDX_ARG);
          if (bVar1 != 0) {
            pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0xac0,0,0)));
            if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
              REFG(void * PTR32, 0x1371290) = ((undefined *)GEN_TOP(0x0));
            }
            else {
              REFG(void * PTR32, 0x1371290) = ((undefined *)GEN_TOP(F_004b1d90(pvVar3 GEN_EDX_ARG)));
            }
            bVar1 = F_004ba9e0(REFG(void * PTR32, 0x1371290) GEN_EDX_ARG);
            if (bVar1 != 0) {
              pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0xf4,0,0)));
              if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
                REFG(void * PTR32, 0x137129c) = ((undefined *)GEN_TOP(0x0));
              }
              else {
                REFG(void * PTR32, 0x137129c) = ((undefined *)GEN_TOP(F_006a8960(pvVar3 GEN_EDX_ARG)));
              }
              F_00691360(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG);
              F_006a9580(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG);
              F_004a0ef0(((undefined *)GEN_TOP(((int)this + 0x11b8))) GEN_EDX_ARG);
              uVar4 = F_00406b90(0x18,0,0);
              if (uVar4 == 0) {
                REFG(void * PTR32, 0x13712a0) = ((undefined *)GEN_TOP(0x0));
              }
              else {
                REFG(void * PTR32, 0x13712a0) = ((undefined *)GEN_TOP(F_0069bc80(uVar4 GEN_EDX_ARG)));
              }
              F_006904e0();
              F_006a7b20(REFG(void * PTR32, 0x13712a0) GEN_EDX_ARG);
              pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1371270) + 0x14))) + 8))))
                                         (*((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1371270) + 0x14))) GEN_EDX_ARG,0xf0,0x10)));
              if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
                REFG(void * PTR32, 0x1371294) = ((undefined *)GEN_TOP(0x0));
              }
              else {
                REFG(void * PTR32, 0x1371294) = ((undefined *)GEN_TOP(F_00690660(pvVar3 GEN_EDX_ARG)));
              }
              F_0069bd90(REFG(void * PTR32, 0x1371294) GEN_EDX_ARG);
              pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0x14,0,0)));
              if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
                uVar4 = 0;
              }
              else {
                uVar4 = F_00530850(pvVar3 GEN_EDX_ARG);
              }
              *((uint *)GEN_TOP(((int)this + 0x25d8))) = uVar4;
              uVar4 = F_004142d0(&(*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,(int)*((char *)GEN_TOP(((int)this + 0x1c))));
              bVar1 = F_00530250(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x25d8))) GEN_EDX_ARG,((char *)REFP(0x108bcf4)),uVar4);
              if (bVar1 == 0) {
                F_00429940(0,1,0xed,0xffffffff);
              }
              puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(8,0,0)));
              if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
                puVar7 = ((undefined4 *)GEN_TOP(0x0));
              }
              else {
                uVar13 = *((undefined4 *)GEN_TOP(((int)this + 0x25d8)));
                *puVar7 = (*(undefined * PTR32 (*)[5])REFP(0x108bea0));
                puVar7[1] = uVar13;
              }
              *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x25d4))) = puVar7;
              F_00a0a350();
              F_00a0a020();
              F_00a09e50();
              F_00a087e0();
              F_00a06720();
              F_00a06210();
              F_00a040c0();
              F_00a0c4b0();
              F_00a0b5f0();
              F_00a0b250();
              F_00a04f80();
              pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0x80,0,0)));
              if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
                REFG(undefined4, 0x1371298) = 0;
              }
              else {
                REFG(undefined4, 0x1371298) = F_0068c030(pvVar3 GEN_EDX_ARG);
              }
              F_00688790();
              F_00428db0(*((undefined4 *)GEN_TOP(((int)this + 0x434))));
              pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0x10,0,0)));
              if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
                uVar4 = 0;
              }
              else {
                uVar4 = F_009f03d0(pvVar3 GEN_EDX_ARG);
              }
              *((uint *)GEN_TOP(((int)this + 0x25dc))) = uVar4;
              F_005d55e0(&REFG(undefined, 0x1379c6c) GEN_EDX_ARG);
              pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0x1ac,0,0)));
              if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
                uVar4 = 0;
              }
              else {
                uVar4 = F_004eac70(pvVar3 GEN_EDX_ARG,1,0);
              }
              *((uint *)GEN_TOP(((int)this + 0x25f8))) = uVar4;
              uVar4 = F_00414500(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0x40);
              F_004e8640(GEN_ARGF(*((undefined4 *)GEN_TOP(((int)this + 0x25f8)))) GEN_EDX_ARG,*((int *)GEN_TOP((uVar4 + 0x14))) == 0,0);
              uVar4 = F_00414500(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0x41);
              F_004e7660(*((undefined4 *)GEN_TOP(((int)this + 0x25f8))) GEN_EDX_ARG,*((int *)GEN_TOP((uVar4 + 0x14))) == 0);
              F_004ea560();
              F_0049c510(0xffffffff,1);
              F_0049c5c0(5,0xffffffff,1);
              F_0049bc90();
              F_0049c720(0xffffffff,1);
              pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0xc0,0,0)));
              if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
                pvVar3 = ((undefined *)GEN_TOP(0x0));
              }
              else {
                pvVar3 = ((undefined *)GEN_TOP(F_00975a50(pvVar3 GEN_EDX_ARG)));
              }
              *((undefined * PTR32 *)GEN_TOP(((int)this + 0x25fc))) = pvVar3;
              F_00975bb0(pvVar3 GEN_EDX_ARG);
              (*(tagRECT *)(gen_frame + 0xc4)).right = 0;
              F_00a017d0(((undefined *)GEN_TOP(((int)this + 0x2600))) GEN_EDX_ARG,0x11,((code *)REFP(0x427ce0)),this,((code *)REFP(0x425040)),0);
              F_009d8540();
              uVar4 = F_00406b90(0x18,0,0);
              if (uVar4 == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = F_00429900(uVar4 GEN_EDX_ARG);
              }
              *((uint *)GEN_TOP(((int)this + 0x2618))) = uVar4;
              pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0x68,0,0)));
              if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
                uVar4 = 0;
              }
              else {
                uVar4 = F_00550e90(pvVar3 GEN_EDX_ARG);
              }
              *((uint *)GEN_TOP(((int)this + 0x25e0))) = uVar4;
              F_00553200(uVar4 GEN_EDX_ARG,0);
              F_005f5f70();
              puVar7 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
              if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
                puVar7 = ((undefined4 *)GEN_TOP(0x0));
              }
              else {
                *puVar7 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
                puVar7[2] = ((code *)REFP(0x427d00));
                puVar7[3] = this;
                puVar7[5] = 0;
                puVar7[4] = ((code *)REFP(0x4248d0));
                puVar7[6] = ((char *)REFP(0x108bd00));
                puVar7[7] = 0;
                puVar7[8] = 0;
                puVar7[9] = ((char *)REFP(0x108bd00));
              }
              F_004a0100(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0x1e,puVar7);
              F_00a00ed0();
              uVar4 = F_00414500(*((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,0x1a);
              iVar9 = *((int *)GEN_TOP((uVar4 + 0x14)));
              pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0x925c0,0,0)));
              if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
                pvVar3 = ((undefined *)GEN_TOP(0x0));
              }
              else {
                pvVar3 = ((undefined *)GEN_TOP(F_0046a100(pvVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x25d4))),
                                              *((undefined4 *)GEN_TOP(((int)this + 0x20))),
                                              *((undefined4 *)GEN_TOP(((int)this + 0x434))),(uint)(iVar9 != 0))))
                ;
              }
              *((undefined * PTR32 *)GEN_TOP(((int)this + 0x25e8))) = pvVar3;
              F_0045aff0(pvVar3 GEN_EDX_ARG);
              uVar4 = F_00406b90(0x68,0,0);
              if (uVar4 == 0) {
                pvVar3 = ((undefined *)GEN_TOP(0x0));
              }
              else {
                pvVar3 = ((undefined *)GEN_TOP(F_004319f0(uVar4 GEN_EDX_ARG)));
              }
              *((undefined * PTR32 *)GEN_TOP(((int)this + 0x25ec))) = pvVar3;
              F_00431a30(pvVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x25e8))),
                           *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x434))) + 8))));
              if (*(*(char * PTR32 *)(gen_frame + 0x1c)) == '\0') {
                F_0049b7d0(*((undefined4 *)GEN_TOP(((int)this + 0x25f4))) GEN_EDX_ARG,0,(float)(float10)1,REFG(undefined4, 0x1302e44),
                             REFG(undefined4, 0x1302e48),REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
              }
              else {
                iVar9 = *((int *)GEN_TOP(((int)this + 0x1260)));
                if (iVar9 == 0) {
                  iVar9 = (*(int *)(gen_frame + 0x10));
                }
                ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x25e8))) + 0x124))))
                          (*((int * PTR32 *)GEN_TOP(((int)this + 0x25e8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1158))),
                           (int)*((char *)GEN_TOP(((int)this + 0x1d))),(int)*((char *)GEN_TOP(((int)this + 0x1c))),
                           (*(char * PTR32 *)(gen_frame + 0x1c)),iVar9);
              }
              F_004ff560();
              _Var11 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
              *((int *)GEN_TOP(((int)this + 0x1160))) = (int)_Var11;
              uVar12 = F_00427d90();
              *((ulonglong *)GEN_TOP(((int)this + 0x1168))) = uVar12;
              uVar12 = F_00427e30();
              *((ulonglong *)GEN_TOP(((int)this + 0x1170))) = uVar12;
              gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x24)));
              *((DWORD *)GEN_TOP(((int)this + 0x1188))) = (*(LARGE_INTEGER *)(gen_frame + 0x24)).s.LowPart;
              *((LONG *)GEN_TOP(((int)this + 0x118c))) = (*(LARGE_INTEGER *)(gen_frame + 0x24)).s.HighPart;
              F_0042c880(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
              return 1;
            }
          }
        }
        else {
          *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 3;
        }
      }
      goto LAB_00426f99;
    }
  }
  F_00429940(4,1,0,0xffffffff);
LAB_00426f99: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00426fc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00426fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x426fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x108bf0c));
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1c))) = 0xffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  F_00429f90((int)this + 0x24 GEN_EDX_FWD);
  F_00429f90((int)this + 0x22c GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x434))) = param_1;
  F_00976f30(((undefined *)GEN_TOP(((int)this + 0x438))) GEN_EDX_ARG);
  F_00a1b190((int)this + 0x5cc GEN_EDX_ARG);
  F_00a1b0d0(((undefined *)GEN_TOP(((int)this + 0x5f8))) GEN_EDX_ARG);
  F_00976f30(((undefined *)GEN_TOP(((int)this + 0xa8c))) GEN_EDX_ARG);
  F_00a1b190((int)this + 0xc20 GEN_EDX_ARG);
  F_00a1b0d0(((undefined *)GEN_TOP(((int)this + 0xc4c))) GEN_EDX_ARG);
  F_004a0bd0(((undefined *)GEN_TOP(((int)this + 0x10e0))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x1158))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x115c))) = 0x100;
  F_00a1af40(((undefined *)GEN_TOP(((int)this + 0x1160))) GEN_EDX_ARG);
  gen_imp_timeGetDevCaps((GEN_LPANY)((code * PTR32 *)(gen_frame + 0x8)),8);
  *((gen_code32 *)GEN_TOP(((int)this + 0x1178))) = ((code * PTR32 *)(gen_frame + 0x8))[0];
  if (((code * PTR32 *)(gen_frame + 0x8))[0] != ((code *)GEN_TOP(0x0))) {
    gen_imp_timeBeginPeriod((UINT)((code * PTR32 *)(gen_frame + 0x8))[0]);
  }
  gen_imp_QueryPerformanceFrequency((LARGE_INTEGER *)((code * PTR32 *)(gen_frame + 0x8)));
  *((gen_code32 *)GEN_TOP(((int)this + 0x1180))) = ((code * PTR32 *)(gen_frame + 0x8))[0];
  *((gen_code32 *)GEN_TOP(((int)this + 0x1184))) = ((code * PTR32 *)(gen_frame + 0x8))[1];
  gen_imp_QueryPerformanceCounter((LARGE_INTEGER *)((code * PTR32 *)(gen_frame + 0x8)));
  *((undefined8 *)GEN_TOP(((int)this + 0x1190))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x118c))) = ((code * PTR32 *)(gen_frame + 0x8))[1];
  *((gen_code32 *)GEN_TOP(((int)this + 0x1188))) = ((code * PTR32 *)(gen_frame + 0x8))[0];
  *((undefined4 *)GEN_TOP(((int)this + 0x1198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x119c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x11a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x11a4))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x11a4))), REFG(float, 0x1087f04));
  *((undefined4 *)GEN_TOP(((int)this + 0x11a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x11ac))) = 0;
  F_00428c40(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG,0x28);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x108bf04)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1220))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1218))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x121c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1228))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x122c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1230))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1210))) = (*(undefined * PTR32 (*)[2])REFP(0x108bee0));
  *((undefined4 *)GEN_TOP(((int)this + 0x1238))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x123c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1240))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1248))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x124c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1250))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1258))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x125c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1260))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1264))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1268))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x126c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1270))) = 0;
  _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 0x1274))))), (long)(0));
  *((undefined4 *)GEN_TOP(((int)this + 0x1278))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x127c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1280))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1284))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x25d0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x25d4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x25d8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x25dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x25e0))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x25e4))) = 0x100;
  *((undefined1 *)GEN_TOP(((int)this + 0x25e6))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x25e8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x25ec))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x25f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x25f4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x25f8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x25fc))) = 0;
  F_00a01750((int)this + 0x2600 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x2618))) = 0;
  F_00a01840((int)this + 0x2620 GEN_EDX_ARG);
  F_00a1af40(((undefined *)GEN_TOP(((int)this + 0x2698))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x26b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x26b4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x26b8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x26bc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x26c4))) = 0xffffffff;
  *((undefined2 *)GEN_TOP(((int)this + 0x1eb8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1490))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x22c8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1cb0))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1698))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1288))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x20c0))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x24d0))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x18a0))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1aa8))) = 0;
  ((code * PTR32 *)(gen_frame + 0x8))[0] = ((code *)GEN_TOP(0x0));
  (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x427cc0));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  ((code * PTR32 *)(gen_frame + 0x8))[1] = ((code *)GEN_TOP(0x0));
  ((code * PTR32 *)(gen_frame + 0x8))[0] = ((code *)REFP(0x425010));
  REFG(void * PTR32, 0x137104c) = this;
  F_0049feb0(((undefined *)GEN_TOP(((int)this + 0x10e0))) GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x0)),this,1);
  *((undefined4 *)GEN_TOP(((int)this + 0x2690))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2694))) = 0;
  return (uint)this;
}

/* ref: FUN_00427320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00427320(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x427320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x108bea0));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: Component::Excel::ExcelModuleInterface::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00427370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x427370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052fba0(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Component::Excel::ExcelModuleInterface::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00427380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x427380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0x10))) + 0x38))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0x10))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8);
  return uVar1;
}

/* ref: Component::Excel::ExcelModuleInterface::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00427390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x427390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Component::Excel::ExcelModuleInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004273a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4273a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x108bea0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004273f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004273f0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4273f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  LOCK();
  uVar1 = *in_ecx;
  *in_ecx = param_2;
  UNLOCK();
  return uVar1;
}

/* ref: FUN_00427410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00427410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(wchar_t * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x427410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;)
  F_00c4a8e0(this,0x104,param_1);
  return (uint)this;
}

/* ref: FUN_00427450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00427450(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x427450u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00427490 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00427490(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x427490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  F_004a0020(in_ecx GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x108beb8));
  F_004a0020(in_ecx + 10 GEN_EDX_ARG);
  in_ecx[0x14] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_004274d0 */
GEN_OWN GEN_FRAME ulonglong F_004274d0(void)
{
  GEN_ENTER(0x4274d0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  gen_imp_QueryPerformanceFrequency(&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
  return (ulonglong)(*(ULONGLONG *)&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
}

/* ref: FUN_004274f0 */
GEN_OWN GEN_FRAME ulonglong F_004274f0(void)
{
  GEN_ENTER(0x4274f0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
  return (ulonglong)(*(ULONGLONG *)&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
}

/* ref: FUN_00427510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00427510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x427510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  gen_imp_QueryPerformanceFrequency(&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
  *(DWORD *)this = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart;
  *((LONG *)GEN_TOP(((int)this + 4))) = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart;
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
  *((undefined8 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((DWORD *)GEN_TOP(((int)this + 8))) = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart;
  *((LONG *)GEN_TOP(((int)this + 0xc))) = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart;
  return (uint)this;
}

/* ref: FUN_00427560 */
GEN_OWN GEN_FRAME double GEN_THISCALL F_00427560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x427560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  DWORD DVar3;
  int iVar4;
  
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
  uVar2 = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart;
  uVar1 = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart;
  DVar3 = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart - *((uint *)GEN_TOP(((int)this + 8)));
  iVar4 = ((*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart - *((int *)GEN_TOP(((int)this + 0xc)))) -
          (uint)((*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart < *((uint *)GEN_TOP(((int)this + 8))));
  (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart = DVar3;
  (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart = iVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = uVar2;
  *((double *)GEN_TOP(((int)this + 0x10))) =
       (double)(longlong)CONCAT44(iVar4,DVar3) / (double)*(longlong *)this;
  return *((double *)GEN_TOP(((int)this + 0x10)));
}

/* ref: FUN_004275b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004275b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4275b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
  *((DWORD *)GEN_TOP(((int)this + 8))) = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart;
  *((LONG *)GEN_TOP(((int)this + 0xc))) = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart;
  return 0;
}

/* ref: FUN_004275e0 */
GEN_OWN GEN_FRAME double GEN_THISCALL F_004275e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4275e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  DWORD DVar1;
  int iVar2;
  
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
  DVar1 = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart - *((uint *)GEN_TOP(((int)this + 8)));
  iVar2 = ((*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart - *((int *)GEN_TOP(((int)this + 0xc)))) -
          (uint)((*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart < *((uint *)GEN_TOP(((int)this + 8))));
  (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart = DVar1;
  (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart = iVar2;
  return GEN_X87((double)(longlong)CONCAT44(iVar2,DVar1) / (double)*(longlong *)this);
}

/* ref: FUN_00427640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00427640(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x427640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 4 + param_2 * 4)));
}

/* ref: FUN_00427650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00427650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x427650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 4)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD,param_2,param_3);
  return uVar2;
}

/* ref: FUN_004276a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004276a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4276a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_004276c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004276c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4276c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_004276f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004276f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4276f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) != *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_00427720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00427720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x427720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00427740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00427740(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x427740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + param_2 * 4)));
}

/* ref: FUN_00427750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00427750(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x427750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = in_ecx;
  param_2[1] = 0;
  return (uint)param_2;
}

/* ref: FUN_00427770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00427770(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x427770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = in_ecx;
  param_2[1] = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_004277a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004277a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4277a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00550f20(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00427cb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00427cb0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x427cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00427cc0 */
GEN_OWN GEN_FRAME uint F_00427cc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x427cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00427ce0 */
GEN_OWN GEN_FRAME uint F_00427ce0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x427ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8);
  return uVar1;
}

/* ref: FUN_00427cf0 */
GEN_OWN GEN_FRAME uint F_00427cf0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x427cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8);
  return uVar1;
}

/* ref: FUN_00427d00 */
GEN_OWN GEN_FRAME uint F_00427d00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x427d00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_1,param_3);
  return uVar1;
}

/* ref: FUN_00427d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00427d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x427d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  gen_imp_timeGetDevCaps(&(*(undefined8 *)(gen_frame + 0x0)),8);
  *(undefined4 *)this = 0;
  if (param_1 == 1) {
    *(UINT *)this = (*(UINT *)((char *)&((*(undefined8 *)(gen_frame + 0x0)))));
  }
  else {
    if (param_1 != 2) {
      return (uint)this;
    }
    *(UINT *)this = (*(UINT *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4)));
  }
  if (*(UINT *)this != 0) {
    gen_imp_timeBeginPeriod(*(UINT *)this);
  }
  return (uint)this;
}

/* ref: FUN_00427d90 */
GEN_OWN GEN_FRAME ulonglong F_00427d90(void)
{
  GEN_ENTER(0x427d90u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  BVar1 = gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x20)));
  uVar2 = (*(LARGE_INTEGER *)(gen_frame + 0x20)).s.LowPart;
  uVar3 = (*(LARGE_INTEGER *)(gen_frame + 0x20)).s.HighPart;
  if (BVar1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  if ((*(uint *)&REFG(undefined, 0x1370c08) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1370c08) = *(uint *)&REFG(undefined, 0x1370c08) | 1;
    BVar1 = gen_imp_QueryPerformanceFrequency(&(*(LARGE_INTEGER *)(gen_frame + 0x18)));
    if (BVar1 == 0) {
      REFG(undefined4, 0x1370c00) = 0;
      REFG(undefined4, 0x1370c04) = 0;
    }
    else {
      REFG(undefined4, 0x1370c00) = (*(LARGE_INTEGER *)(gen_frame + 0x18)).s.LowPart;
      REFG(undefined4, 0x1370c04) = (*(LARGE_INTEGER *)(gen_frame + 0x18)).s.HighPart;
    }
  }
  (*(longlong *)(gen_frame + 0x0)) = CONCAT44(uVar3,uVar2);
  return (ulonglong)((*(longlong *)(gen_frame + 0x0)) * 1000) / CONCAT44(REFG(undefined4, 0x1370c04),REFG(undefined4, 0x1370c00));
}

/* ref: FUN_00427e30 */
GEN_OWN GEN_FRAME ulonglong F_00427e30(void)
{
  GEN_ENTER(0x427e30u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  BVar1 = gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x20)));
  uVar2 = (*(LARGE_INTEGER *)(gen_frame + 0x20)).s.LowPart;
  uVar3 = (*(LARGE_INTEGER *)(gen_frame + 0x20)).s.HighPart;
  if (BVar1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  if ((*(uint *)&REFG(undefined, 0x1370c08) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1370c08) = *(uint *)&REFG(undefined, 0x1370c08) | 1;
    BVar1 = gen_imp_QueryPerformanceFrequency(&(*(LARGE_INTEGER *)(gen_frame + 0x18)));
    if (BVar1 == 0) {
      REFG(undefined4, 0x1370c00) = 0;
      REFG(undefined4, 0x1370c04) = 0;
    }
    else {
      REFG(undefined4, 0x1370c00) = (*(LARGE_INTEGER *)(gen_frame + 0x18)).s.LowPart;
      REFG(undefined4, 0x1370c04) = (*(LARGE_INTEGER *)(gen_frame + 0x18)).s.HighPart;
    }
  }
  (*(longlong *)(gen_frame + 0x0)) = CONCAT44(uVar3,uVar2);
  return (ulonglong)((*(longlong *)(gen_frame + 0x0)) * 1000000) / CONCAT44(REFG(undefined4, 0x1370c04),REFG(undefined4, 0x1370c00));
}

/* ref: FUN_00427ed0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00427ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x427ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __time64_t _Var1;
  ulonglong uVar2;
  
  _Var1 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *(int *)this = (int)_Var1;
  uVar2 = F_00427d90();
  *((ulonglong *)GEN_TOP(((int)this + 8))) = uVar2;
  uVar2 = F_00427e30();
  *((ulonglong *)GEN_TOP(((int)this + 0x10))) = uVar2;
  return (uint)uVar2;
}

/* ref: FUN_00427f00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00427f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x427f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __time64_t _Var1;
  ulonglong uVar2;
  
  _Var1 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *(int *)this = (int)_Var1;
  uVar2 = F_00427d90();
  *((ulonglong *)GEN_TOP(((int)this + 8))) = uVar2;
  uVar2 = F_00427e30();
  *((ulonglong *)GEN_TOP(((int)this + 0x10))) = uVar2;
  return (uint)uVar2;
}

/* ref: FUN_00427f30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00427f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x427f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00427d90();
  return (int)uVar1 - *((int *)GEN_TOP(((int)this + 8)));
}

/* ref: FUN_00427f40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00427f40(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x427f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (uint)(CONCAT44((param_2 + (param_2 << 3 | param_1 >> 0x1d) +
                         (uint)CARRY4(param_1,param_1 * 8)) * 0x10 | param_1 * 9 >> 0x1c,
                         param_1 * 0x90) / 7);
}

/* ref: FUN_00427f80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00427f80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5))
{
  GEN_ENTER(0x427f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  int iVar1;
  
  iVar1 = param_5 + (param_4 + (param_3 + param_2 * 0x18) * 0x3c) * 0x3c;
  param_1[2] = iVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x108bed4));
  param_1[4] = (undefined4)gen_fl2bits(param_6);
  param_1[3] = iVar1 >> 0x1f;
  return (uint)param_1;
}

/* ref: FUN_00427ff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00427ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x427ff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  ulonglong uStack_20;
  
  uStack_20 = CONCAT44((param_2 + (param_2 << 3 | param_1 >> 0x1d) +
                       (uint)CARRY4(param_1,param_1 * 8)) * 0x10 | param_1 * 9 >> 0x1c,
                       param_1 * 0x90);
  *((ulonglong *)GEN_TOP(((int)this + 8))) = (uStack_20 / 7) / 1000;
  *((float *)GEN_TOP(((int)this + 0x10))) = ((float)GEN_TOF((-(float10)0 + ((float10)GEN_TOD(((uStack_20 / 7) % 1000))))));
  return 0;
}

/* ref: FUN_00428080 */
GEN_OWN GEN_FRAME ulonglong GEN_THISCALL F_00428080(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x428080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP((param_1 + 0x20))) == '\0') && (*((char *)GEN_TOP((param_1 + 0x21))) == '\0')) {
    uVar1 = *((uint *)GEN_TOP((param_1 + 0x18)));
    if (param_2 != '\0') {
      uVar2 = uVar1 + *((uint *)GEN_TOP((param_1 + 8)));
      return CONCAT44(*((int *)GEN_TOP((param_1 + 0x1c))) + *((int *)GEN_TOP((param_1 + 0xc))) +
                      (uint)CARRY4(uVar1,*((uint *)GEN_TOP((param_1 + 8)))) + (uint)(0xffff573f < uVar2),
                      uVar2 + 0xa8c0);
    }
    return CONCAT44(*((int *)GEN_TOP((param_1 + 0x1c))) + *((int *)GEN_TOP((param_1 + 0xc))) +
                    (uint)CARRY4(uVar1,*((uint *)GEN_TOP((param_1 + 8)))),uVar1 + *((uint *)GEN_TOP((param_1 + 8))));
  }
  return *((ulonglong *)GEN_TOP((param_1 + 0x18)));
}

/* ref: Common::Game::Time::GameTime::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004280d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4280d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x108bed4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00428100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00428100(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5))
{
  GEN_ENTER(0x428100u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  int iVar1;
  
  iVar1 = param_5 + (param_4 + (param_3 + param_2 * 0x18) * 0x3c) * 0x3c;
  param_1[2] = iVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[4] = (undefined4)gen_fl2bits(param_6);
  param_1[3] = iVar1 >> 0x1f;
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x108bee0));
  return (uint)param_1;
}

/* ref: Client::System::Timer::ClientTime::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00428180(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x428180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if ((*((char *)GEN_TOP((param_1 + 0x20))) == '\0') && (*((char *)GEN_TOP((param_1 + 0x21))) == '\0')) {
    if (param_2 == '\0') {
      uVar2 = *((int *)GEN_TOP((param_1 + 0x18))) + *((int *)GEN_TOP((param_1 + 8)));
    }
    else {
      uVar2 = *((int *)GEN_TOP((param_1 + 0x18))) + *((int *)GEN_TOP((param_1 + 8))) + 0xa8c0;
    }
  }
  else {
    uVar2 = *((uint *)GEN_TOP((param_1 + 0x18)));
  }
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x28)));
  if (uVar1 != 0 || *((int *)GEN_TOP((param_1 + 0x2c))) != 0) {
    if (*((char *)GEN_TOP((param_1 + 0x30))) != '\0') {
      return uVar1;
    }
    uVar2 = uVar2 + uVar1;
  }
  return uVar2;
}

/* ref: Client::System::Timer::ClientTime::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004281f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4281f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x108bed4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00428220 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00428220(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x428220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0xac))) = param_2;
  return param_2;
}

/* ref: FUN_00428280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00428280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x428280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_004282d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004282d0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x4282d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  F_0049b7d0(param_1 GEN_EDX_FWD,0,param_2,REFG(undefined4, 0x1302e44),REFG(undefined4, 0x1302e48),REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
  return;
}

/* ref: FUN_00428310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00428310(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x428310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xc))) = param_2;
  return param_2;
}

/* ref: FUN_00428510 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00428510(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x428510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x133);
  return (uint)uVar1;
}

/* ref: FUN_00428550 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00428550(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x428550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x133);
  return (uint)uVar1;
}

/* ref: FUN_00428590 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00428590(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x428590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x133);
  return (uint)uVar1;
}

/* ref: Component::Excel::ExcelModuleInterface::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00428600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x428600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x13712ac) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x13712ac) = *(uint *)&REFG(undefined, 0x13712ac) | 1;
    F_004142d0(&REFG(undefined, 0x13712a8) GEN_EDX_FWD,0xffffffff);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0x10))) + 0x18))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0x10))) GEN_EDX_ARG);
  *(int *)&REFG(undefined, 0x13712a8) = uVar1 - 1;
  return 0x13712a8;
}

/* ref: FUN_00428650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00428650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x428650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  _InterlockedExchange((volatile long *)(((undefined4 *)this)), (long)(param_1));
  return (uint)this;
}

/* ref: FUN_004286b0 */
GEN_OWN GEN_FRAME uint F_004286b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4286b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_004287a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004287a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4287a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x427cc0));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_004287c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004287c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4287c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x427ce0));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_004287f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004287f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4287f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x427d00));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00428810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00428810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x428810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x427cf0));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00428830 */
GEN_OWN GEN_FRAME uint F_00428830(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x428830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00428940 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00428940(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x428940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  uint uVar2;
  undefined * this;
  int * in_ecx;
  uint uVar3;
  char * _String;
  double dVar4;
  
  uVar2 = F_00406bb0(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 4),0,0);
  this = ((undefined *)GEN_TOP(F_00406b90(0x70,0,0)));
  if (this == ((undefined *)GEN_TOP(0x0))) {
    in_ecx = ((int *)GEN_TOP(0x0));
  }
  else {
    (*(undefined4 *)(gen_frame + 0x0)) = 100;
    in_ecx = ((int *)GEN_TOP(F_004202a0(this GEN_EDX_ARG,param_3,&(*(undefined4 *)(gen_frame + 0x0)))));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 4))))(in_ecx GEN_EDX_ARG);
  uVar3 = F_00413d10(in_ecx GEN_EDX_ARG);
  if (uVar3 != param_2) {
    F_00406ad0(uVar2);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*in_ecx)))(in_ecx GEN_EDX_ARG,1);
    return 0;
  }
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = in_ecx[1];
      in_ecx[1] = iVar1 + 1;
      _String = ((char *)GEN_TOP(F_0042a990(iVar1 * 0x54 + in_ecx[0x18] GEN_EDX_ARG)));
      dVar4 = F_00c4acaa(_String);
      *((int *)GEN_TOP((uVar2 + uVar3 * 4))) = (int)dVar4;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  F_00c46aa0(param_1,uVar2,param_2 * 4);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*in_ecx)))(in_ecx GEN_EDX_ARG,1);
  F_00406ad0(uVar2);
  return 1;
}

/* ref: FUN_00428a40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00428a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(char * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x428a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a3;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  *((gen_code32 *)GEN_TOP(((int)this + 8))) = ((code *)REFP(0x427d00));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((char * PTR32 *)GEN_TOP(((int)this + 0x18))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  if ((param_3 != ((char *)GEN_TOP(0x0))) && (*param_3 != '\0')) {
    *((char * PTR32 *)GEN_TOP(((int)this + 0x24))) = param_3;
    return (uint)this;
  }
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x24))) = this;
  return (uint)this;
}

/* ref: Client::System::Framework::Task::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00428a90(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x428a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_004a05c0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00428ac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00428ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(char * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x428ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a3;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  *((gen_code32 *)GEN_TOP(((int)this + 8))) = ((code *)REFP(0x427cf0));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((char * PTR32 *)GEN_TOP(((int)this + 0x18))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  if ((param_3 != ((char *)GEN_TOP(0x0))) && (*param_3 != '\0')) {
    *((char * PTR32 *)GEN_TOP(((int)this + 0x24))) = param_3;
    return (uint)this;
  }
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x24))) = this;
  return (uint)this;
}

/* ref: FUN_00428b10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00428b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x428b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x133);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00428b50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00428b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x428b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 - 1;
      *((int *)GEN_TOP(((int)this + 0x10))) = iVar2;
      if (iVar2 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      }
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  while (iVar2 != 0) {
    iVar2 = iVar2 - 1;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))),0x18,0x133);
    }
  }
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar4 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,0x133);
    uVar3 = (uint)uVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: FUN_00428bd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00428bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x428bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00428b50(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x133);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00428c00 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00428c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x428c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00428b50(((undefined *)GEN_TOP(((int)this + 0x2c))) GEN_EDX_FWD);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x2c))),8,0x133);
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  return (uint)(gen_imp_CloseHandle(*((HANDLE *)GEN_TOP(((int)this + 0x24)))));
}

/* ref: FUN_00428c40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00428c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x428c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint * puVar1;
  uint uVar2;
  uint * in_ecx;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x108bf00));
  F_004a1570(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  uVar2 = -(uint)((int)((ulonglong)param_1 * 0x58 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x58)
  ;
  puVar1 = ((uint *)GEN_TOP(F_00406bb0(-(uint)(0xfffffffb < uVar2) | uVar2 + 4,0,0)));
  if (puVar1 == ((uint *)GEN_TOP(0x0))) {
    puVar1 = ((uint *)GEN_TOP(0x0));
  }
  else {
    *puVar1 = param_1;
    puVar1 = puVar1 + 1;
    in_ecx = puVar1;
    uVar2 = param_1;
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      F_004a0020(in_ecx GEN_EDX_ARG);
      *in_ecx = (uint)(*(undefined * PTR32 (*)[3])REFP(0x108beb8));
      F_004a0020(in_ecx + 10 GEN_EDX_ARG);
      in_ecx[0x14] = 0;
      in_ecx = in_ecx + 0x16;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 0x50))) = puVar1;
  *((uint *)GEN_TOP(((int)this + 0x54))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  REFG(void * PTR32, 0x13728ac) = this;
  return (uint)this;
}

/* ref: Client::System::Framework::TaskManager::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00428ce0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x428ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_004a15f0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00428d10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00428d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x428d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x108bf0c));
  F_00a01890((int)this + 0x2620 GEN_EDX_FWD);
  F_00a017b0(((undefined *)GEN_TOP(((int)this + 0x2600))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1210))) = (*(undefined * PTR32 (*)[1])REFP(0x108bed4));
  F_004a15f0(((undefined *)GEN_TOP(((int)this + 0x11b0))) GEN_EDX_ARG);
  if (*((UINT *)GEN_TOP(((int)this + 0x1178))) != 0) {
    gen_imp_timeEndPeriod(*((UINT *)GEN_TOP(((int)this + 0x1178))));
  }
  uVar1 = F_004a0d10(((undefined *)GEN_TOP(((int)this + 0x10e0))) GEN_EDX_ARG);
  F_00429fa0();
  F_00429fa0();
  return uVar1;
}

/* ref: FUN_00428d80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00428d80(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x428d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00428d10(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00428db0 */
GEN_OWN GEN_NOFRAME unsigned int F_00428db0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x428db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return;
}

/* ref: FUN_00428dc0 */
GEN_OWN GEN_NOFRAME unsigned int F_00428dc0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x428dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return;
}

/* ref: FUN_00428dd0 */
GEN_OWN GEN_NOFRAME unsigned int F_00428dd0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x428dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return;
}

/* ref: FUN_00428de0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00428de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x428de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  if ((param_3 == 0) || (param_4 == 0)) {
    gen_imp_SetWindowPos(*((HWND *)GEN_TOP(((int)this + 8))),(HWND)0x0,param_1,param_2,0,0,5);
  }
  else {
    iVar1 = gen_imp_GetSystemMetrics(0x4c);
    iVar2 = gen_imp_GetSystemMetrics(0x4d);
    iVar3 = gen_imp_GetSystemMetrics(0x4e);
    iVar4 = gen_imp_GetSystemMetrics(0x4f);
    iVar5 = param_3;
    if (param_3 < *((int *)GEN_TOP(((int)this + 0x30)))) {
      iVar5 = *((int *)GEN_TOP(((int)this + 0x30)));
    }
    iVar7 = param_4;
    if (param_4 < *((int *)GEN_TOP(((int)this + 0x34)))) {
      iVar7 = *((int *)GEN_TOP(((int)this + 0x34)));
    }
    *((int *)GEN_TOP(((int)this + 0x14))) = param_1;
    (*(tagRECT *)(gen_frame + 0x0)).left = param_1;
    *((int *)GEN_TOP(((int)this + 0x18))) = param_2;
    (*(tagRECT *)(gen_frame + 0x0)).top = param_2;
    *((int *)GEN_TOP(((int)this + 0xc))) = iVar5;
    *((int *)GEN_TOP(((int)this + 0x10))) = iVar7;
    (*(tagRECT *)(gen_frame + 0x0)).right = param_1 + iVar5;
    (*(tagRECT *)(gen_frame + 0x0)).bottom = param_2 + iVar7;
    gen_imp_AdjustWindowRect(&(*(tagRECT *)(gen_frame + 0x0)),REFG(undefined4, 0x12fd1f8),0);
    if ((((iVar3 + iVar1 < (*(tagRECT *)(gen_frame + 0x0)).left) || ((*(tagRECT *)(gen_frame + 0x0)).right < iVar1)) ||
        (iVar4 + iVar2 < (*(tagRECT *)(gen_frame + 0x0)).top)) || ((*(tagRECT *)(gen_frame + 0x0)).bottom < iVar2)) {
      iVar3 = (*(tagRECT *)(gen_frame + 0x0)).right - (*(tagRECT *)(gen_frame + 0x0)).left;
      iVar2 = (*(tagRECT *)(gen_frame + 0x0)).bottom - (*(tagRECT *)(gen_frame + 0x0)).top;
      iVar5 = gen_imp_GetSystemMetrics(0);
      iVar5 = (iVar5 - iVar3) / 2;
      iVar1 = gen_imp_GetSystemMetrics(1);
      iVar1 = (iVar1 - iVar2) / 2;
      (*(tagRECT *)(gen_frame + 0x0)).top = iVar1;
      (*(tagRECT *)(gen_frame + 0x0)).left = iVar5;
      (*(tagRECT *)(gen_frame + 0x0)).right = iVar3 + iVar5;
      (*(tagRECT *)(gen_frame + 0x0)).bottom = iVar1 + iVar2;
    }
    gen_imp_SetWindowPos(*((HWND *)GEN_TOP(((int)this + 8))),(HWND)0x0,(*(tagRECT *)(gen_frame + 0x0)).left,(*(tagRECT *)(gen_frame + 0x0)).top,
                 (*(tagRECT *)(gen_frame + 0x0)).right - (*(tagRECT *)(gen_frame + 0x0)).left,(*(tagRECT *)(gen_frame + 0x0)).bottom - (*(tagRECT *)(gen_frame + 0x0)).top,4);
  }
  uVar6 = gen_imp_SetForegroundWindow(*((HWND *)GEN_TOP(((int)this + 8))));
  return uVar6;
}

/* ref: FUN_00428f30 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00428f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x428f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  uint uVar1;
  int iVar2;
  int iVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  iVar2 = param_3;
  if (param_3 < *((int *)GEN_TOP(((int)this + 0x30)))) {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x30)));
  }
  iVar3 = param_4;
  if (param_4 < *((int *)GEN_TOP(((int)this + 0x34)))) {
    iVar3 = *((int *)GEN_TOP(((int)this + 0x34)));
  }
  *((int *)GEN_TOP(((int)this + 0x18))) = param_2;
  *((int *)GEN_TOP(((int)this + 0xc))) = iVar2;
  *((int *)GEN_TOP(((int)this + 0x10))) = iVar3;
  *((int *)GEN_TOP(((int)this + 0x14))) = param_1;
  (*(tagRECT *)(gen_frame + 0x0)).left = param_1;
  (*(tagRECT *)(gen_frame + 0x0)).top = param_2;
  (*(tagRECT *)(gen_frame + 0x0)).right = iVar2;
  (*(tagRECT *)(gen_frame + 0x0)).bottom = iVar3;
  gen_imp_AdjustWindowRect(&(*(tagRECT *)(gen_frame + 0x0)),REFG(undefined4, 0x12fd1f8),0);
  (*(tagRECT *)(gen_frame + 0x10)).left = 0;
  (*(tagRECT *)(gen_frame + 0x10)).top = 0;
  (*(tagRECT *)(gen_frame + 0x10)).right = iVar2;
  (*(tagRECT *)(gen_frame + 0x10)).bottom = iVar3;
  gen_imp_AdjustWindowRect(&(*(tagRECT *)(gen_frame + 0x10)),REFG(undefined4, 0x12fd1f8),0);
  gen_imp_SetWindowPos(*((HWND *)GEN_TOP(((int)this + 8))),(HWND)0x0,(*(tagRECT *)(gen_frame + 0x0)).left,(*(tagRECT *)(gen_frame + 0x0)).top,
               (*(tagRECT *)(gen_frame + 0x10)).right - (*(tagRECT *)(gen_frame + 0x10)).left,(*(tagRECT *)(gen_frame + 0x10)).bottom - (*(tagRECT *)(gen_frame + 0x10)).top,4);
  uVar1 = gen_imp_SetForegroundWindow(*((HWND *)GEN_TOP(((int)this + 8))));
  return uVar1;
}

/* ref: FUN_00428ff0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00428ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x428ff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0x34, 12, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30));
  iVar1 = gen_imp_GetSystemMetrics(0x4c);
  iVar2 = gen_imp_GetSystemMetrics(0x4d);
  (*(int *)(gen_frame + 0x8)) = iVar2;
  gen_imp_GetSystemMetrics(0x4e);
  gen_imp_GetSystemMetrics(0x4f);
  iVar2 = param_1;
  if (param_1 < *((int *)GEN_TOP(((int)this + 0x30)))) {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x30)));
  }
  iVar4 = param_2;
  if (param_2 < *((int *)GEN_TOP(((int)this + 0x34)))) {
    iVar4 = *((int *)GEN_TOP(((int)this + 0x34)));
  }
  gen_imp_GetWindowRect(*((HWND *)GEN_TOP(((int)this + 8))),&(*(tagRECT *)(gen_frame + 0xc)));
  (*(tagPOINT *)(gen_frame + 0x0)).x = 0;
  (*(tagPOINT *)(gen_frame + 0x0)).y = 0;
  gen_imp_ClientToScreen(*((HWND *)GEN_TOP(((int)this + 8))),&(*(tagPOINT *)(gen_frame + 0x0)));
  (*(tagRECT *)(gen_frame + 0x1c)).top = (*(tagPOINT *)(gen_frame + 0x0)).y;
  (*(tagRECT *)(gen_frame + 0x1c)).bottom = (*(tagPOINT *)(gen_frame + 0x0)).y + iVar4;
  (*(tagRECT *)(gen_frame + 0x1c)).left = (*(tagPOINT *)(gen_frame + 0x0)).x;
  (*(tagRECT *)(gen_frame + 0x1c)).right = (*(tagPOINT *)(gen_frame + 0x0)).x + iVar2;
  gen_imp_AdjustWindowRect(&(*(tagRECT *)(gen_frame + 0x1c)),REFG(undefined4, 0x12fd1f8),0);
  if ((*(tagRECT *)(gen_frame + 0x1c)).right < iVar1) {
    (*(tagRECT *)(gen_frame + 0x1c)).left = (*(tagRECT *)(gen_frame + 0x1c)).left + ((*(tagRECT *)(gen_frame + 0xc)).right - (*(tagRECT *)(gen_frame + 0x1c)).right);
    (*(tagRECT *)(gen_frame + 0x1c)).right = (*(tagRECT *)(gen_frame + 0x1c)).right + ((*(tagRECT *)(gen_frame + 0xc)).right - (*(tagRECT *)(gen_frame + 0x1c)).right);
  }
  if ((*(tagRECT *)(gen_frame + 0x1c)).top < (*(int *)(gen_frame + 0x8))) {
    iVar1 = (*(tagRECT *)(gen_frame + 0xc)).top - (*(tagRECT *)(gen_frame + 0x1c)).top;
    (*(int *)(gen_frame + 0x8)) = iVar1;
    (*(tagRECT *)(gen_frame + 0x1c)).top = (*(tagRECT *)(gen_frame + 0x1c)).top + iVar1;
    (*(tagRECT *)(gen_frame + 0x1c)).bottom = (*(tagRECT *)(gen_frame + 0x1c)).bottom + iVar1;
  }
  *((int *)GEN_TOP(((int)this + 0xc))) = iVar2;
  *((int *)GEN_TOP(((int)this + 0x10))) = iVar4;
  uVar3 = gen_imp_SetWindowPos(*((HWND *)GEN_TOP(((int)this + 8))),(HWND)0x0,(*(tagRECT *)(gen_frame + 0x1c)).left,(*(tagRECT *)(gen_frame + 0x1c)).top,
                       (*(tagRECT *)(gen_frame + 0x1c)).right - (*(tagRECT *)(gen_frame + 0x1c)).left,(*(tagRECT *)(gen_frame + 0x1c)).bottom - (*(tagRECT *)(gen_frame + 0x1c)).top,4);
  return uVar3;
}

/* ref: FUN_004290f0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004290f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(LONG * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4290f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LONG * param_1 = (LONG *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  gen_imp_GetWindowRect(*((HWND *)GEN_TOP(((int)this + 8))),&(*(tagRECT *)(gen_frame + 0x0)));
  *param_1 = (*(tagRECT *)(gen_frame + 0x0)).left;
  *param_2 = (*(tagRECT *)(gen_frame + 0x0)).top;
  return (*(tagRECT *)(gen_frame + 0x0)).top;
}

/* ref: FUN_00429140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00429140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(LONG * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x429140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(LONG * param_2 = (LONG *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  HWND hWnd;
  
  hWnd = *((HWND *)GEN_TOP(((int)this + 8)));
  (*(tagPOINT *)(gen_frame + 0x0)).x = 0;
  (*(tagPOINT *)(gen_frame + 0x0)).y = 0;
  gen_imp_ClientToScreen(hWnd,&(*(tagPOINT *)(gen_frame + 0x0)));
  *param_1 = (*(tagPOINT *)(gen_frame + 0x0)).x;
  *param_2 = (*(tagPOINT *)(gen_frame + 0x0)).y;
  return (*(tagPOINT *)(gen_frame + 0x0)).x;
}

/* ref: FUN_00429180 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00429180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x429180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  gen_imp_GetClientRect(*((HWND *)GEN_TOP(((int)this + 8))),(LPRECT)((byte *)(gen_frame + 0x0)));
  *param_1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
  *param_2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
  return (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
}

/* ref: FUN_004291d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004291d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4291d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  return (uint)(gen_imp_SetWindowPos(*((HWND *)GEN_TOP(((int)this + 8))),(HWND)0x0,param_1,param_2,0,0,5));
}

/* ref: FUN_00429200 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00429200(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x429200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  if (param_2 != '\0') {
    gen_imp_GetWindowRect(*((HWND *)GEN_TOP((param_1 + 8))),&(*(tagRECT *)(gen_frame + 0x0)));
    *((LONG *)GEN_TOP((param_1 + 0x14))) = (*(tagRECT *)(gen_frame + 0x0)).left;
    *((LONG *)GEN_TOP((param_1 + 0x18))) = (*(tagRECT *)(gen_frame + 0x0)).top;
    gen_imp_SetWindowLongA(*((HWND *)GEN_TOP((param_1 + 8))),-0x10,((int)0x80000000));
    gen_imp_ShowWindow(*((HWND *)GEN_TOP((param_1 + 8))),3);
    uVar1 = gen_imp_SetWindowPos(*((HWND *)GEN_TOP((param_1 + 8))),(HWND)0xfffffffe,0,0,0,0,0x27);
    *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
    return uVar1;
  }
  gen_imp_SetWindowLongA(*((HWND *)GEN_TOP((param_1 + 8))),-0x10,REFG(undefined4, 0x12fd1f8));
  gen_imp_ShowWindow(*((HWND *)GEN_TOP((param_1 + 8))),9);
  uVar1 = gen_imp_SetWindowPos(*((HWND *)GEN_TOP((param_1 + 8))),(HWND)0xfffffffe,0,0,0,0,0x27);
  *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 0;
  return uVar1;
}

/* ref: FUN_004292d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004292d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4292d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  HWND hWnd;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar1;
  if (param_2 == '\0') {
    REFG(undefined4, 0x12fd1f8) = REFG(undefined4, 0x12fd1f8) & 0xfffbffff;
  }
  else {
    REFG(undefined4, 0x12fd1f8) = REFG(undefined4, 0x12fd1f8) | 0x40000;
  }
  if (param_3 == '\0') {
    hWnd = *((HWND *)GEN_TOP((param_1 + 8)));
    (*(tagPOINT *)(gen_frame + 0x0)).x = 0;
    (*(tagPOINT *)(gen_frame + 0x0)).y = 0;
    gen_imp_ClientToScreen(hWnd,&(*(tagPOINT *)(gen_frame + 0x0)));
    gen_imp_GetClientRect(*((undefined4 *)GEN_TOP((param_1 + 8))),&(*(tagRECT *)(gen_frame + 0x18)));
    (*(tagRECT *)(gen_frame + 0x18)).left = (*(tagPOINT *)(gen_frame + 0x0)).x;
    *((LONG *)GEN_TOP((param_1 + 0xc))) = (*(tagRECT *)(gen_frame + 0x18)).right;
    (*(tagRECT *)(gen_frame + 0x18)).top = (*(tagPOINT *)(gen_frame + 0x0)).y;
    *((LONG *)GEN_TOP((param_1 + 0x10))) = (*(tagRECT *)(gen_frame + 0x18)).bottom;
    gen_imp_AdjustWindowRect(&(*(tagRECT *)(gen_frame + 0x18)),REFG(undefined4, 0x12fd1f8),0);
    gen_imp_SetWindowLongA(*((HWND *)GEN_TOP((param_1 + 8))),-0x10,REFG(undefined4, 0x12fd1f8));
    gen_imp_ShowWindow(*((HWND *)GEN_TOP((param_1 + 8))),5);
    iVar2 = gen_imp_GetSystemMetrics(0x20);
    iVar3 = gen_imp_GetSystemMetrics(0x21);
    iVar4 = gen_imp_GetSystemMetrics(4);
    iVar2 = (*(tagRECT *)(gen_frame + 0x18)).right + iVar2;
    iVar3 = (*(tagRECT *)(gen_frame + 0x18)).bottom + iVar3 + iVar4;
    (*(tagRECT *)(gen_frame + 0x18)).bottom = iVar3;
    (*(tagRECT *)(gen_frame + 0x18)).right = iVar2;
    gen_imp_SetWindowPos(*((undefined4 *)GEN_TOP((param_1 + 8))),0xfffffffe,(*(tagRECT *)(gen_frame + 0x18)).left,(*(tagRECT *)(gen_frame + 0x18)).top,iVar2,iVar3,0x20
                );
    gen_imp_GetClientRect(*((undefined4 *)GEN_TOP((param_1 + 8))),&(*(int *)(gen_frame + 0x8)));
    uVar1 = gen_imp_SetWindowPos(*((undefined4 *)GEN_TOP((param_1 + 8))),0xfffffffe,(*(tagRECT *)(gen_frame + 0x18)).left,(*(tagRECT *)(gen_frame + 0x18)).top,
                         ((*((int *)GEN_TOP((param_1 + 0xc))) - (*(int *)(gen_frame + 0x8))) - (*(int *)(gen_frame + 0x10))) + (*(tagRECT *)(gen_frame + 0x18)).right,
                         ((*((int *)GEN_TOP((param_1 + 0x10))) - (*(int *)(gen_frame + 0xc))) - (*(int *)(gen_frame + 0x14))) + (*(tagRECT *)(gen_frame + 0x18)).bottom,0x20);
  }
  return uVar1;
}

/* ref: FUN_00429410 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00429410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(LPPOINT param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x429410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LPPOINT param_1 = (LPPOINT)gen_a1;)
  return (uint)(gen_imp_ClientToScreen(*((HWND *)GEN_TOP(((int)this + 8))),param_1));
}

/* ref: FUN_00429430 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00429430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(LPRECT param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x429430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LPRECT param_1 = (LPRECT)gen_a1;)
  return (uint)(gen_imp_GetClientRect(*((HWND *)GEN_TOP(((int)this + 8))),param_1));
}

/* ref: FUN_00429450 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00429450(GEN_P(LPRECT param_1, unsigned int gen_a0), GEN_P(DWORD param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x429450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPRECT param_1 = (LPRECT)gen_a0;)
  GEN_PIN(DWORD param_2 = (DWORD)gen_a1;)
  DWORD dwStyle;
  
  dwStyle = param_2;
  if (param_2 == 0xffffffff) {
    dwStyle = REFG(undefined4, 0x12fd1f8);
  }
  return (uint)(gen_imp_AdjustWindowRect(param_1,dwStyle,0));
}

/* ref: FUN_00429480 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00429480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(UINT param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x429480u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(UINT param_5 = (UINT)gen_a5;)
  return (uint)(gen_imp_SetWindowPos(*((HWND *)GEN_TOP(((int)this + 8))),(HWND)0xfffffffe,param_1,param_2,param_3,param_4,param_5));
}

/* ref: FUN_004294b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004294b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4294b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int dwNewLong;
  
  dwNewLong = param_1;
  if (param_1 == -1) {
    dwNewLong = REFG(undefined4, 0x12fd1f8);
  }
  return (uint)(gen_imp_SetWindowLongA(*((HWND *)GEN_TOP(((int)this + 8))),-0x10,dwNewLong));
}

/* ref: FUN_004294e0 */
GEN_OWN GEN_FRAME uint F_004294e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4294e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  int iVar1;
  
  iVar1 = 0;
  while ((param_1 < (uint)(&REFG(undefined4, 0x13712e4))[(int)(iVar1)] || ((uint)(&REFG(undefined4, 0x13712c0))[(int)(iVar1)] < param_1))) {
    iVar1 = iVar1 + 1;
    if (8 < iVar1) {
      return *((uint *)GEN_TOP((param_1 - 0x10)));
    }
  }
  return (&REFG(undefined4, 0x12fd200))[(int)(iVar1 * 2)];
}

/* ref: FUN_00429520 */
GEN_OWN GEN_FRAME uint F_00429520(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x429520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  while ((param_1 < (uint)(&REFG(undefined4, 0x13712e4))[(int)(uVar1)] || ((uint)(&REFG(undefined4, 0x13712c0))[(int)(uVar1)] < param_1))) {
    uVar1 = uVar1 + 1;
    if (8 < (int)uVar1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}

/* ref: FUN_00429550 */
GEN_OWN GEN_FRAME uint F_00429550(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x429550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00406bb0(param_1,0,0x10);
  return uVar1;
}

/* ref: FUN_00429570 */
GEN_OWN GEN_FRAME uint F_00429570(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x429570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00406b30(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00429580 */
GEN_OWN GEN_FRAME uint F_00429580(void)
{
  GEN_ENTER(0x429580u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  uint uVar2;
  undefined * this;
  int iVar3;
  int * piVar4;
  int iVar5;
  ulonglong uVar6;
  
  REFG(undefined4, 0x13712bc) = F_00406bb0(0x24,0,0);
  iVar3 = 0;
  piVar4 = &REFG(undefined4, 0x12fd204);
  do {
    iVar1 = piVar4[-1];
    iVar5 = *piVar4 * iVar1;
    if (0x80 < iVar1) {
      iVar1 = 0x80;
    }
    uVar2 = F_00406bb0(iVar5,0,iVar1);
    *((uint *)GEN_TOP(((int)&REFG(undefined4, 0x13712e4) + iVar3))) = uVar2;
    *((uint *)GEN_TOP(((int)&REFG(undefined4, 0x13712c0) + iVar3))) = uVar2 + iVar5;
    (*(uint *)(gen_frame + 0x0)) = uVar2;
    this = ((undefined *)GEN_TOP(F_00406b90(0x24,0,0)));
    if (this == ((undefined *)GEN_TOP(0x0))) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_004cf0c0(this GEN_EDX_ARG,4,*piVar4 + 1,0);
    }
    iVar1 = 0;
    *((uint *)GEN_TOP((iVar3 + REFG(undefined4, 0x13712bc)))) = uVar2;
    if (0 < *piVar4) {
      do {
        uVar6 = F_004cf180(*((undefined * PTR32 *)GEN_TOP((iVar3 + REFG(undefined4, 0x13712bc)))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
        uVar2 = (uint)uVar6;
        (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + piVar4[-1];
        iVar1 = iVar1 + 1;
      } while (iVar1 < *piVar4);
    }
    piVar4 = piVar4 + 2;
    iVar3 = iVar3 + 4;
  } while ((int)piVar4 < 0x12fd24c);
  return uVar2;
}

/* ref: FUN_00429640 */
GEN_OWN GEN_NOFRAME uint F_00429640(void)
{
  GEN_ENTER(0x429640u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((iVar3 + REFG(int, 0x13712bc))));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
    F_00406b30(*((undefined4 *)GEN_TOP(((int)&REFG(undefined4, 0x13712e4) + iVar3))));
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x24);
  uVar2 = F_00406ad0(REFG(int, 0x13712bc));
  return uVar2;
}

/* ref: FUN_00429680 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00429680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x429680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00429580();
  return (uint)this;
}

/* ref: FUN_004296a0 */
GEN_OWN GEN_FRAME uint F_004296a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4296a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * pvVar1;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  
  iVar4 = 0;
  while ((int)(&REFG(undefined4, 0x12fd200))[(int)(iVar4 * 2)] < param_1) {
    iVar4 = iVar4 + 1;
    if (8 < iVar4) {
      uVar2 = F_00406bb0(param_1,0,0x10);
      return uVar2;
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  puVar3 = ((uint *)GEN_TOP(F_004cf3c0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x13712bc) + iVar4 * 4))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)))));
  while (puVar3 == ((uint *)GEN_TOP(0x0))) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x13712bc) + iVar4 * 4)));
    uVar2 = F_004cf460(pvVar1 GEN_EDX_ARG);
    if ((int)uVar2 < 5) goto LAB_00429735;
    F_004cee80();
    puVar3 = ((uint *)GEN_TOP(F_004cf3c0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x13712bc) + iVar4 * 4))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)))));
  }
  uVar2 = *puVar3;
  pvVar1 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x13712bc) + iVar4 * 4)));
  F_004cf410(pvVar1 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)));
  if (uVar2 != 0) {
    return uVar2;
  }
LAB_00429735: ;
  uVar2 = F_00406bb0(param_1,0,0x10);
  return uVar2;
}

/* ref: FUN_00429760 */
GEN_OWN GEN_FRAME ulonglong F_00429760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x429760u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 in_EDX = 0;
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = CONCAT44(in_EDX,(*(uint *)&gen_args[0]));
  if ((*(uint *)&gen_args[0]) != 0) {
    iVar1 = 0;
    do {
      if (((uint)(&REFG(undefined4, 0x13712e4))[(int)(iVar1)] <= (*(uint *)&gen_args[0])) && ((*(uint *)&gen_args[0]) <= (uint)(&REFG(undefined4, 0x13712c0))[(int)(iVar1)])) {
        if (iVar1 != -1) {
          uVar2 = F_004cf180(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x13712bc) + iVar1 * 4))) GEN_EDX_ARG,&(*(uint *)&gen_args[0]));
          if ((char)uVar2 != '\0') {
            return uVar2;
          }
          do {
            F_004cee80();
            uVar2 = F_004cf180(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x13712bc) + iVar1 * 4))) GEN_EDX_ARG,&(*(uint *)&gen_args[0]));
          } while ((char)uVar2 == '\0');
          return uVar2;
        }
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 9);
    uVar2 = F_00406b30((*(uint *)&gen_args[0]));
  }
  return uVar2;
}

/* ref: FUN_004297d0 */
GEN_OWN GEN_FRAME uint F_004297d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4297d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,0,param_2);
  return uVar1;
}

/* ref: FUN_004297f0 */
GEN_OWN GEN_FRAME uint F_004297f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4297f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,0,param_2);
  return (uint)uVar1;
}

/* ref: FUN_00429810 */
GEN_OWN GEN_FRAME uint F_00429810(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x429810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = F_004296a0(param_2,0,param_3);
  iVar2 = 0;
  while ((param_1 < (uint)(&REFG(undefined4, 0x13712e4))[(int)(iVar2)] || ((uint)(&REFG(undefined4, 0x13712c0))[(int)(iVar2)] < param_1))) {
    iVar2 = iVar2 + 1;
    if (8 < iVar2) {
      uVar3 = *((uint *)GEN_TOP((param_1 - 0x10)));
LAB_0042984b: ;
      if (param_2 < uVar3) {
        uVar3 = param_2;
      }
      F_00c46e20(uVar1,param_1,uVar3);
      F_00429760(param_1,0,param_3);
      return uVar1;
    }
  }
  uVar3 = (&REFG(undefined4, 0x12fd200))[(int)(iVar2 * 2)];
  goto LAB_0042984b;
}

/* ref: FUN_004298a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004298a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4298a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x108cc30));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004298d0 */
GEN_OWN GEN_NOFRAME byte F_004298d0(void)
{
  GEN_ENTER(0x4298d0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_004298e0 */
GEN_OWN GEN_NOFRAME unsigned int F_004298e0(void)
{
  GEN_ENTER(0x4298e0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_004298f0 */
GEN_OWN GEN_NOFRAME byte F_004298f0(void)
{
  GEN_ENTER(0x4298f0u, 0u, 0u, 0u, 0u);
  return REFG(undefined1, 0x1371308);
}

/* ref: FUN_00429900 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00429900(GEN_P(undefined1 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x429900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00429940 */
GEN_OWN GEN_FRAME uint F_00429940(GEN_P(int param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x429940u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0x11408, 8, 4);
  byte bVar1;
  uint uVar2;
  HWND hWnd;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x11400)) = 0x42994d;
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  (*(uint *)(gen_frame + 0x11400)) = uVar2;
  if (REFG(char, 0x1371308) == '\0') {
    REFG(char, 0x1371308) = 1;
    iVar3 = param_4;
    if (param_4 < 0) {
      uVar2 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,4);
      iVar3 = *((int *)GEN_TOP((uVar2 + 0x14)));
    }
    F_00c472af(((undefined1 *)(gen_frame + 0x11000)),0x400,((char *)REFP(0x108c83c)),(&REFG(undefined * PTR32, 0x12fd298))[(int)(param_1 * 5 + iVar3)],param_3);
    gen_imp_MultiByteToWideChar(0xfde9,0,((undefined1 *)(gen_frame + 0x11000)),0xffffffff,((WCHAR *)(gen_frame + 0x10000)),0x800);
    gen_imp_MultiByteToWideChar(0xfde9,0,(&REFG(undefined * PTR32, 0x12fd284))[(int)(iVar3)],0xffffffff,((WCHAR *)(gen_frame + 0x10800)),0x800);
    iVar3 = REFG(int, 0x137104c);
    if (REFG(int, 0x137104c) != 0) {
      F_004246e0(REFG(int, 0x137104c) GEN_EDX_ARG,1);
    }
    bVar1 = F_00a1be10();
    if ((bVar1 == 0) || (iVar3 == 0)) {
      hWnd = (HWND)0x0;
    }
    else {
      hWnd = *((HWND *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0x434))) + 8)));
    }
    uVar2 = gen_imp_MessageBoxW(hWnd,((WCHAR *)(gen_frame + 0x10000)),((WCHAR *)(gen_frame + 0x10800)),0);
    if (param_2 != '\0') {
                    
      F_00c47c71(param_1);
    }
    if (iVar3 != 0) {
      uVar2 = F_004246e0(iVar3 GEN_EDX_ARG,0);
    }
    REFG(char, 0x1371308) = '\0';
  }
  return uVar2;
}

/* ref: FUN_00429a70 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00429a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x429a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0x168, 8, 4);
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 * puVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x160)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x164));
  if (*(char *)this == '\0') {
    *(undefined1 *)this = 1;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2[3];
    F_0042b630(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0xfc)),100,&REFG(undefined, 0x108bf20),param_1);
    bVar1 = F_0042b6f0(param_3 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x12fd328));
    if (bVar1 == 0) {
      uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xfc)),REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,uVar2);
    }
    else {
      puVar7 = ((undefined1 *)(gen_frame + 0x0));
      this_00 = ((undefined *)GEN_TOP(F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xfc)),REFG(undefined4, 0x108cc50))));
      uVar2 = F_0042cd30(this_00 GEN_EDX_ARG,puVar7,param_3);
      F_0042ccf0(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,uVar2);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    if ((param_4 != ((undefined *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)param_4 + 0x10))) != 0)) {
      F_0042e370(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,&REFG(undefined, 0x108bf24));
      uVar2 = *((uint *)GEN_TOP(((int)param_4 + 0x10)));
      F_00c472af(((undefined1 *)(gen_frame + 0xfc)),100,&REFG(undefined, 0x108bf28),uVar2);
      F_0042e370(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xfc)));
      if (0x14 < uVar2) {
        uVar2 = 0x14;
      }
      uVar5 = 0;
      if (uVar2 != 0) {
        do {
          if (uVar5 != 0) {
            F_0042e370(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,&REFG(undefined, 0x108bf2c));
          }
          uVar3 = F_00429f30(param_4 GEN_EDX_ARG);
          F_00c472af(((undefined1 *)(gen_frame + 0xfc)),100,&REFG(undefined, 0x108bf30),uVar3);
          F_0042e370(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xfc)));
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
      F_0042e370(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,&REFG(undefined, 0x108bf34));
    }
    puVar4 = ((undefined4 *)GEN_TOP(F_00406b90(4,0,0)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      F_0042a990(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
      *puVar4 = (*(undefined * PTR32 (*)[2])REFP(0x108cc30));
    }
    uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
    this = ((undefined *)GEN_TOP((uint)uVar6));
  }
  return (uint)this;
}

/* ref: FUN_00429c80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00429c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x429c80u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00429ca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00429ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x429ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 8,param_1);
  return uVar1;
}

/* ref: FUN_00429cf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00429cf0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x429cf0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00429d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00429d90(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x429d90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00429dd0 */
GEN_OWN GEN_NOFRAME uint F_00429dd0(void)
{
  GEN_ENTER(0x429dd0u, 0u, 0u, 0u, 0u);
  char * pcVar1;
  
  pcVar1 = *((char * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x2618)));
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
    pcVar1 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(pcVar1 + 8))(*(undefined4 *)(pcVar1 + 0xc),pcVar1 + 0x10,0)));
  }
  return (uint)pcVar1;
}

/* ref: FUN_00429e60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00429e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x429e60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_00429ea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00429ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x429ea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_00429ee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00429ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x429ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00429f30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00429f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x429f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  if (*(int * PTR32 *)this == ((int *)GEN_TOP(0x0))) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)this;
  }
  uVar2 = uVar1 >> 2;
  if (*((uint *)GEN_TOP((iVar3 + 8))) <= uVar2) {
    uVar2 = uVar2 - *((uint *)GEN_TOP((iVar3 + 8)));
  }
  uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + uVar2 * 4))) + (uVar1 & 3) * 4)));
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1 + 1;
    if ((uint)(*((int *)GEN_TOP(((int)this + 8))) * 4) <= uVar1 + 1) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
    *((int *)GEN_TOP(((int)this + 0x10))) = iVar3;
    if (iVar3 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00429f90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00429f90(GEN_P(undefined2 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x429f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00429fa0 */
GEN_OWN GEN_NOFRAME unsigned int F_00429fa0(void)
{
  GEN_ENTER(0x429fa0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00429fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00429fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x429fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  F_0042b630(param_1 GEN_EDX_FWD);
  F_0042cef0(param_1 GEN_EDX_ARG,this);
  return (uint)param_1;
}

/* ref: FUN_0042a020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0042a020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(wchar_t * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x42a020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;)
  short sVar1;
  wchar_t wVar2;
  short * psVar3;
  int iVar4;
  
  iVar4 = 0;
  psVar3 = this;
  if (*(short *)this != 0) {
    do {
      psVar3 = psVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (*psVar3 != 0);
    if ((0 < iVar4) &&
       ((sVar1 = *((short *)GEN_TOP(((int)this + iVar4 * 2 - 2))), sVar1 == 0x5c || (sVar1 == 0x2f)))) {
      *((undefined2 *)GEN_TOP(((int)this + iVar4 * 2 - 2))) = 0;
    }
  }
  wVar2 = *param_1;
  if (((wVar2 != L'\\') && (wVar2 != L'/')) && (wVar2 != L'.')) {
    F_00c4b8d3(this,0x104,L"/");
  }
  F_00c4b8d3(this,0x104,param_1);
  return (uint)this;
}

/* ref: FUN_0042a0a0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0042a0a0(GEN_P(wchar_t * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x42a0a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_GS(0x24, 12, 4);
  wchar_t * _Src;
  uint uVar1;
  ulonglong uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20));
  if (param_3 != '\0') {
    F_004ff2d0(param_2);
  }
  (*(uint *)(gen_frame + 0x14)) = 7;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)((char *)&(*(wchar_t * PTR32 *)(gen_frame + 0x0)) + 0)) = L'\0';
  (*(wchar_t * PTR32 *)(gen_frame + 0x0)) = ((wchar_t *)GEN_TOP(((uint)(*(undefined2 *)((char *)&(*(wchar_t * PTR32 *)(gen_frame + 0x0)) + 2)) << 0x10)));
  F_0042eae0(param_2 GEN_EDX_ARG,&(*(wchar_t * PTR32 *)(gen_frame + 0x0)));
  _Src = (*(wchar_t * PTR32 *)(gen_frame + 0x0));
  if ((*(uint *)(gen_frame + 0x14)) < 8) {
    _Src = (wchar_t *)&(*(wchar_t * PTR32 *)(gen_frame + 0x0));
  }
  F_00c4a8e0(param_1,0x104,_Src);
  uVar1 = (*(uint *)(gen_frame + 0x14));
  if (7 < (*(uint *)(gen_frame + 0x14))) {
    uVar2 = F_00429760((*(wchar_t * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x14)) * 2 + 2,0x3d);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: FUN_0042a130 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0042a130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x42a130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x24, 12, 4);
  wchar_t * PTR32 * ppwVar1;
  wchar_t * PTR32 * PTR32 * _Src;
  uint uVar2;
  ulonglong uVar3;
  
  ppwVar1 = ((wchar_t * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  GEN_COOKIE((*(uint *)(gen_frame + 0x1c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20));
  (*(uint *)(gen_frame + 0x14)) = 7;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)((char *)&((wchar_t * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
  ((wchar_t * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((wchar_t * PTR32 *)GEN_TOP(((uint)ppwVar1 & 0xffff0000)));
  F_0042eae0(param_1 GEN_EDX_FWD,((wchar_t * PTR32 * PTR32 *)(gen_frame + 0x0)));
  _Src = (wchar_t * PTR32 * PTR32 *)((wchar_t * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((*(uint *)(gen_frame + 0x14)) < 8) {
    _Src = ((wchar_t * PTR32 * PTR32 *)(gen_frame + 0x0));
  }
  F_00c4a8e0(this,0x104,(wchar_t *)_Src);
  uVar2 = (*(uint *)(gen_frame + 0x14));
  if (7 < (*(uint *)(gen_frame + 0x14))) {
    uVar3 = F_00429760(((wchar_t * PTR32 * PTR32 *)(gen_frame + 0x0))[0],(*(uint *)(gen_frame + 0x14)) * 2 + 2,0x3d);
    uVar2 = (uint)uVar3;
  }
  return uVar2;
}

