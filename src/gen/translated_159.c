#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00cc5d00 */
GEN_FRAME uint F_00cc5d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc5d00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc53a0(param_1,0,param_2);
  return uVar1;
}

/* ref: FUN_00cc5d20 */
GEN_FRAME uint F_00cc5d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc5d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00cc5dc0 */
GEN_FRAME unsigned int F_00cc5dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc5dc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint * this;
  int iVar6;
  int iVar7;
  
  ((int *)(gen_frame + 0x14))[9] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(int *)(gen_frame + 0xc)) = param_1;
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
  }
  if (REFG(char, 0x15d7798) == '\0') {
    uVar3 = *(uint *)(param_1 + 4);
  }
  else {
    uVar3 = REFG(undefined4, 0x15d860c);
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
      uVar3 = REFG(undefined4, 0x15d860c);
    }
  }
  REFG(undefined4, 0x15d862c) = uVar3;
  uVar4 = -(uint)((int)((ulonglong)uVar3 * 0x278 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 0x278);
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  puVar2 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,-(uint)(0xfffffffb < uVar4) | uVar4 + 4,
                              "CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (puVar2 == (uint *)0x0) {
    REFG(uint * PTR32, 0x15d8630) = (uint *)0x0;
    iVar6 = param_1;
    puVar1 = REFG(uint * PTR32, 0x15d8630);
  }
  else {
    *puVar2 = uVar3;
    this = puVar2 + 1;
    iVar6 = (*(int *)(gen_frame + 0xc));
    while (uVar3 = uVar3 - 1, puVar1 = puVar2 + 1, (*(int *)(gen_frame + 0xc)) = iVar6, -1 < (int)uVar3) {
      F_00cd7250(this GEN_EDX_ARG);
      this = this + 0x9e;
      iVar6 = (*(int *)(gen_frame + 0xc));
    }
  }
  REFG(uint * PTR32, 0x15d8630) = puVar1;
  uVar3 = *(uint *)(iVar6 + 0x40) & ((int)*(uint *)(iVar6 + 0x40) < 0) - 1;
  if (*(char *)(iVar6 + 0x1bf) == '\0') {
    uVar3 = 0;
  }
  else {
    (*(uint *)(gen_frame + 0x8)) = uVar3;
    puVar2 = &REFG(undefined4, 0x15d862c);
    if ((int)uVar3 <= (int)REFG(undefined4, 0x15d862c)) {
      puVar2 = &(*(uint *)(gen_frame + 0x8));
    }
    uVar3 = *puVar2;
  }
  iVar6 = 0;
  if (0 < (int)REFG(undefined4, 0x15d862c)) {
    iVar7 = 0;
    do {
      F_00cd61f0(((undefined *)GEN_TOP((iVar7 + (int)REFG(uint * PTR32, 0x15d8630)))) GEN_EDX_ARG,iVar6,*(undefined4 *)((*(int *)(gen_frame + 0xc)) + 0x10),
                   (uint)(iVar6 < (int)uVar3));
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x278;
    } while (iVar6 < (int)REFG(undefined4, 0x15d862c));
  }
  F_00d2fdb0(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0x188);
  iVar6 = 0x398;
  ((int *)(gen_frame + 0x14))[1] = 0x420;
  ((int *)(gen_frame + 0x14))[3] = 0x420;
  ((int *)(gen_frame + 0x14))[5] = 0x3a8;
  ((int *)(gen_frame + 0x14))[6] = 0x3a8;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x398;
  ((int *)(gen_frame + 0x14))[0] = 0x398;
  ((int *)(gen_frame + 0x14))[2] = 0x430;
  ((int *)(gen_frame + 0x14))[4] = 0x398;
  ((int *)(gen_frame + 0x14))[7] = 0x398;
  ((int *)(gen_frame + 0x14))[8] = 0;
  iVar7 = 0x398;
  iVar5 = 1;
  do {
    if (iVar7 < iVar6) {
      iVar7 = iVar6;
    }
    iVar6 = ((int *)(gen_frame + 0x14))[(int)(iVar5)];
    iVar5 = iVar5 + 1;
  } while (iVar6 != 0);
  (*(char * PTR32 *)(gen_frame + 0x4)) = "CDev.Engine.Sd.SoundDriver";
  (*(uint *)(gen_frame + 0x8)) = 0x10;
  F_00cc6930(&REFG(undefined4, 0x15d8668) GEN_EDX_ARG,iVar7,REFG(undefined4, 0x15d862c),&(*(char * PTR32 *)(gen_frame + 0x4)),0x10,1);
  F_00c47745(((int *)(gen_frame + 0x14))[9] ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00cc5fc0 */
GEN_FRAME uint F_00cc5fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc5fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  undefined4 uVar1;
  undefined4 * puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int * piVar7;
  uint uVar8;
  int iVar9;
  
  piVar7 = (int *)0x0;
  REFG(char, 0x15d8698) = REFG(char, 0x15d867c);
  if (REFG(char, 0x15d867c) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
  }
  puVar2 = REFG(undefined4 * PTR32, 0x15d866c);
  if (REFG(undefined4 * PTR32, 0x15d866c) == (undefined4 *)0x0) {
    if (REFG(char, 0x15d8698) == '\0') {
      return 0;
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
    return 0;
  }
  uVar1 = *REFG(undefined4 * PTR32, 0x15d866c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = REFG(undefined4 * PTR32, 0x15d866c);
  REFG(undefined4 * PTR32, 0x15d866c) = (undefined4 *)uVar1;
  if (REFG(char, 0x15d8698) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
  }
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  uVar4 = (uint)((int)puVar2 - *(int *)&REFG(undefined, 0x15d8670)) / REFG(undefined4, 0x15d8674);
  uVar5 = F_00cc1d90();
  uVar4 = uVar5 << 9 | uVar4;
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
  if (uVar5 == 3) {
    (*(uint *)(gen_frame + 0x84)) = 0;
    (*(uint *)(gen_frame + 0x88)) = 0;
    (*(uint *)(gen_frame + 0x8c)) = 0;
    (*(uint *)(gen_frame + 0x90)) = 0;
    F_00cde2f0(&(*(undefined1 *)(gen_frame + 0x97)) GEN_EDX_ARG);
    bVar3 = F_00cc2aa0(4,&(*(uint *)(gen_frame + 0x84)),0);
    if (bVar3 == 0) {
      F_00cc6810(&REFG(undefined4, 0x15d8668) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x98)));
      return 0;
    }
    piVar7 = (int *)F_00cded50((*(undefined4 * PTR32 *)(gen_frame + 0x98)) GEN_EDX_ARG,uVar4,param_1,&(*(uint *)(gen_frame + 0x84)),4,param_3,&(*(undefined1 *)(gen_frame + 0x97)),param_4);
    goto LAB_00cc60c8;
  }
  if ((*(byte *)(param_1 + 0x12) & 8) != 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x88))(param_1 GEN_EDX_ARG);
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc5d20));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("!\"[sd][Driver][WIN][PS3][X360][VITA] streaming only can use with Stream EX!!\""
                    ,"","SoundContainer.cpp",0x161,
                    "SQEX::CDev::Engine::Sd::Driver::SoundContainer::AddSound");
    goto LAB_00cc60c8;
  }
  uVar5 = *param_2;
  (*(uint *)(gen_frame + 0x88)) = param_2[1];
  uVar8 = param_2[3];
  (*(uint *)(gen_frame + 0x8c)) = param_2[2];
  (*(uint *)(gen_frame + 0x84)) = uVar5;
  (*(uint *)(gen_frame + 0x90)) = uVar8;
  cVar6 = (char)(uVar5 >> 0x18);
  if (cVar6 == -0x80) {
LAB_00cc61ff: ;
    F_00cc6810(&REFG(undefined4, 0x15d8668) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x98)));
    return 0;
  }
  uVar8 = 1;
  if (((1 < (byte)uVar5) && (cVar6 != '\x02')) && (cVar6 != '\x05')) {
    uVar8 = uVar5 & 0xff;
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x8)),0,0x7c);
  bVar3 = F_00cc2aa0(uVar8,&(*(int *)(gen_frame + 0x4)),0);
  if (bVar3 == 0) goto LAB_00cc61ff;
  switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x84)) >> 0x18)) {
  case 1: ;
  case 0xf: ;
    piVar7 = (int *)F_00cd38f0((*(undefined4 * PTR32 *)(gen_frame + 0x98)) GEN_EDX_ARG,uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x4)),uVar8,1,param_3,param_4);
    break;
  case 2: ;
  case 0xc: ;
    piVar7 = (int *)F_00cdd250((*(undefined4 * PTR32 *)(gen_frame + 0x98)) GEN_EDX_ARG,uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x4)),uVar8,param_3,param_4);
    break;
  case 3: ;
    piVar7 = (int *)F_00cde150((*(undefined4 * PTR32 *)(gen_frame + 0x98)) GEN_EDX_ARG,uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x4)),uVar8,1,param_3,param_4);
    break;
  case 4: ;
    piVar7 = (int *)F_00cdcb70((*(undefined4 * PTR32 *)(gen_frame + 0x98)) GEN_EDX_ARG,uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x4)),uVar8,param_3,param_4);
    break;
  case 5: ;
  case 0xd: ;
    piVar7 = (int *)F_00cdc690((*(undefined4 * PTR32 *)(gen_frame + 0x98)) GEN_EDX_ARG,uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x4)),uVar8,param_3,param_4);
    break;
  case 6: ;
    piVar7 = (int *)F_00cdda70((*(undefined4 * PTR32 *)(gen_frame + 0x98)) GEN_EDX_ARG,uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x4)),uVar8,param_3,param_4);
    break;
  case 7: ;
    piVar7 = (int *)F_00cddc70((*(undefined4 * PTR32 *)(gen_frame + 0x98)) GEN_EDX_ARG,uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x4)),uVar8,param_3,param_4);
    break;
  default: ;
    goto LAB_00cc6384;
  case 0xb: ;
    piVar7 = (int *)F_00cd38f0((*(undefined4 * PTR32 *)(gen_frame + 0x98)) GEN_EDX_ARG,uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x4)),uVar8,1,param_3,param_4);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x1a4))(piVar7 GEN_EDX_ARG);
    break;
  case 0xe: ;
    piVar7 = (int *)F_00cdc550((*(undefined4 * PTR32 *)(gen_frame + 0x98)) GEN_EDX_ARG,uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x4)),uVar8,param_3,param_4);
    break;
  case 0x10: ;
LAB_00cc6384: ;
    F_00cc6810(&REFG(undefined4, 0x15d8668) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x98)));
    iVar9 = 0;
    if (uVar8 != 0) {
      do {
        if (*(int *)(((undefined1 *)(gen_frame + 0x8)) + iVar9 * 4 - 4) != 0) {
          F_00cd8630(*(int *)(((undefined1 *)(gen_frame + 0x8)) + iVar9 * 4 - 4) GEN_EDX_ARG);
          *(undefined4 *)(((undefined1 *)(gen_frame + 0x8)) + iVar9 * 4 - 4) = 0;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar8);
    }
    return 0;
  }
LAB_00cc60c8: ;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  F_00d2fe00(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar7);
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  if (piVar7 != (int *)0x0) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x1a8))(piVar7 GEN_EDX_ARG);
    if ((char)uVar4 == '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x10))(piVar7 GEN_EDX_ARG,0);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x58))(piVar7 GEN_EDX_ARG,*(undefined4 *)&REFG(undefined, 0x134c6f4));
    *(undefined1 *)((int)piVar7 + 0x1c5) = (undefined1)param_5;
  }
  return (uint)piVar7;
}

/* ref: FUN_00cc6400 */
GEN_FRAME uint F_00cc6400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6400u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = (int *)*param_2;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_1 + 0xc0))((int *)*param_1 GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc0))(piVar1 GEN_EDX_ARG);
  return (uVar2 & 0xff) - (uVar3 & 0xff);
}

/* ref: FUN_00cc6440 */
GEN_FRAME uint F_00cc6440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6440u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint _NumOfElements;
  
  if ((param_1 != (undefined *)0x0) && ((*(int *)&gen_a1) != 0)) {
    _NumOfElements = F_00cc5520(param_1,(*(int *)&gen_a1));
    if (_NumOfElements == 0) {
      return 0;
    }
    F_00c4f040(param_1,_NumOfElements,4,((code *)REFP(0xcc6400)));
    return _NumOfElements;
  }
  return 0;
}

/* ref: FUN_00cc6490 */
GEN_FRAME uint F_00cc6490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6490u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00cc64a0 */
GEN_FRAME uint F_00cc64a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc64a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,param_1,*param_2,0,0,param_2[1]);
  return uVar1;
}

/* ref: FUN_00cc64f0 */
GEN_FRAME uint F_00cc64f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc64f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00cc6510 */
GEN_NOFRAME uint GEN_THISCALL F_00cc6510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc6510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_InitializeCriticalSection(this);
  *(undefined1 *)((int)this + 0x18) = 1;
  return (uint)this;
}

/* ref: FUN_00cc6530 */
GEN_FRAME byte GEN_THISCALL F_00cc6530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x18) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00cc6560 */
GEN_FRAME uint GEN_THISCALL F_00cc6560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0xc) * param_2 + *(int *)(in_ecx + 8);
}

/* ref: FUN_00cc6580 */
GEN_FRAME uint GEN_THISCALL F_00cc6580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(param_1 - *(int *)((int)this + 8)) / *(uint *)((int)this + 0xc);
}

/* ref: FUN_00cc65d0 */
GEN_FRAME uint GEN_THISCALL F_00cc65d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc65d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (4 < param_1 - 1U) {
    return 0;
  }
  if (param_1 == 1) {
    return (int)this + 0x10;
  }
  return (int)this + param_1 * 0x18 - 8;
}

/* ref: FUN_00cc6660 */
GEN_FRAME uint GEN_THISCALL F_00cc6660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(in_ecx + 0x12) + param_2;
  if ((int)uVar1 < 0) {
    *(undefined1 *)(in_ecx + 0x12) = 0;
    return 0;
  }
  if (0xff < (int)uVar1) {
    uVar1 = 0xff;
  }
  *(char *)(in_ecx + 0x12) = (char)uVar1;
  return uVar1;
}

/* ref: FUN_00cc66a0 */
GEN_FRAME byte GEN_THISCALL F_00cc66a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc66a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return param_1 == *(int *)((int)this + 0x134);
}

/* ref: FUN_00cc66c0 */
GEN_FRAME byte GEN_THISCALL F_00cc66c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc66c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1c5) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00cc6740 */
GEN_NOFRAME uint GEN_THISCALL F_00cc6740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc6740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  *(undefined1 *)((int)this + 0x30) = 1;
  return (uint)this;
}

/* ref: FUN_00cc6770 */
GEN_NOFRAME uint GEN_THISCALL F_00cc6770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc6770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint extraout_EAX = 0;
  
  *(char *)((int)this + 0x30) = *(char *)((int)this + 0x14);
  if (*(char *)((int)this + 0x14) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  }
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
    *(undefined4 *)this = 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  if (*(char *)((int)this + 0x30) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00cc67c0 */
GEN_NOFRAME uint GEN_THISCALL F_00cc67c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc67c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 * puVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  *(char *)((int)this + 0x30) = *(char *)((int)this + 0x14);
  if (*(char *)((int)this + 0x14) != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 == (undefined4 *)0x0) {
    if (*(char *)((int)this + 0x30) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  *(undefined4 *)((int)this + 4) = *puVar1;
  if (*(char *)((int)this + 0x30) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (uint)puVar1;
}

/* ref: FUN_00cc6810 */
GEN_FRAME uint GEN_THISCALL F_00cc6810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint in_EAX = 0;
  uint extraout_EAX = 0;
  
  if (param_1 != (uint *)0x0) {
    *(char *)((int)this + 0x30) = *(char *)((int)this + 0x14);
    if (*(char *)((int)this + 0x14) != '\0') {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
    }
    in_EAX = *(uint *)((int)this + 4);
    *param_1 = in_EAX;
    *(uint * PTR32 *)((int)this + 4) = param_1;
    if (*(char *)((int)this + 0x30) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
      in_EAX = extraout_EAX;
    }
  }
  return in_EAX;
}

/* ref: FUN_00cc6850 */
GEN_FRAME uint GEN_THISCALL F_00cc6850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  undefined * in_ecx;
  
  if ((param_1 & 2) == 0) {
    F_00cd6180(this GEN_EDX_FWD);
    if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
      F_00406810(this);
    }
  }
  else {
    piVar1 = (int *)((int)this - 4);
    iVar2 = *piVar1;
    in_ecx = (undefined *)(iVar2 * 0x278 + (int)this);
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      in_ecx = (undefined *)((int)in_ecx - 0x278);
      F_00cd6180(in_ecx GEN_EDX_ARG);
    }
    this = piVar1;
    if (((param_1 & 1) != 0) && (piVar1 != (int *)0x0)) {
      F_00406810(piVar1);
      return (uint)piVar1;
    }
  }
  return (uint)this;
}

/* ref: FUN_00cc68e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cc68e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc68e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  *(char *)((int)this + 0x30) = *(char *)((int)this + 0x14);
  if (*(char *)((int)this + 0x14) != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)this != 0) {
    F_00406810(*(int *)this);
    *(undefined4 *)this = 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  if (*(char *)((int)this + 0x30) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (uint)(gen_imp_DeleteCriticalSection(lpCriticalSection));
}

/* ref: FUN_00cc6930 */
GEN_FRAME uint GEN_THISCALL F_00cc6930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcc6930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  int iVar2;
  int * piVar3;
  LPCRITICAL_SECTION extraout_EAX = 0;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  *(char *)((int)this + 0x14) = (char)param_5;
  *(char *)((int)this + 0x30) = (char)param_5;
  if ((char)param_5 != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  uVar4 = param_4;
  if (param_4 < 4) {
    uVar4 = 4;
  }
  uVar1 = param_1;
  if (param_1 < 4) {
    uVar1 = 4;
  }
  *(int *)((int)this + 0x10) = param_2;
  iVar2 = (((uVar1 - 1) + uVar4) / uVar4) * uVar4;
  *(int *)((int)this + 0xc) = iVar2;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,iVar2 * param_2 - 1 + uVar4,*param_3,0,0,param_3[1]);
  *(uint *)this = uVar1;
  if (uVar1 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc5d20));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x112a624),&REFG(undefined1, 0x107fc63),
                    "d:\\ffxiv\\trunk\\prog\\externals\\cdev_sd\\sd\\cdev\\engine\\sd\\driver\\../SdUnitHeap.h"
                    ,0x4d,"SQEX::CDev::Engine::Sd::SdUnitHeap::CreateUnitHeap");
  }
  iVar2 = 0;
  piVar3 = ((int *)GEN_TOP((((*(int *)this - 1 + uVar4) / uVar4) * uVar4)));
  *(int * PTR32 *)((int)this + 8) = piVar3;
  *(int * PTR32 *)((int)this + 4) = piVar3;
  if (0 < param_2) {
    do {
      if (iVar2 < param_2 - 1) {
        *piVar3 = (int)piVar3 + (*(uint *)((int)this + 0xc) & 0xfffffffc);
      }
      else {
        *piVar3 = 0;
      }
      iVar2 = iVar2 + 1;
      piVar3 = ((int *)GEN_TOP(((int)piVar3 + (*(uint *)((int)this + 0xc) & 0xfffffffc))));
    } while (iVar2 < param_2);
  }
  if (*(char *)((int)this + 0x30) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    lpCriticalSection = extraout_EAX;
  }
  return (uint)lpCriticalSection;
}

/* ref: FUN_00cc6a70 */
GEN_FRAME uint GEN_THISCALL F_00cc6a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6a70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x112a6c4));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cc6a90 */
GEN_NOFRAME uint GEN_THISCALL F_00cc6a90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc6a90u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x112a6c4));
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cc6aa0 */
GEN_FRAME uint GEN_THISCALL F_00cc6aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112a6c4));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00cc6ac0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cc6ac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc6ac0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x112a6c4));
  return;
}

/* ref: FUN_00cc6ad0 */
GEN_FRAME uint GEN_THISCALL F_00cc6ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD,param_1);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cc6b10 */
GEN_FRAME unsigned int GEN_THISCALL F_00cc6b10(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcc6b10u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  if (*(int *)(param_1 + 4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0xc))))
              (*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3,param_4);
  }
  return;
}

/* ref: FUN_00cc6b40 */
GEN_NOFRAME uint GEN_THISCALL F_00cc6b40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc6b40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::EffectController::vf0 */
GEN_FRAME uint GEN_THISCALL F_00cc6b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112a6c4));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cc6b80 */
GEN_FRAME unsigned int F_00cc6b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6b80u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cc6ba0 */
GEN_NOFRAME uint F_00cc6ba0(void)
{
  GEN_ENTER(0xcc6ba0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(undefined4, 0x15d86c0) = REFG(undefined4, 0x15d86c0) + 1;
  if (0xfffff < (int)REFG(undefined4, 0x15d86c0)) {
    REFG(int, 0x15d86c4) = REFG(int, 0x15d86c4) + 1;
    REFG(undefined4, 0x15d86c0) = 1;
  }
  if (REFG(int, 0x15d86c4) == 0) {
    return REFG(undefined4, 0x15d86c0);
  }
  do {
    uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,0);
    while( true ) {
      if (uVar1 == 0) {
        return REFG(undefined4, 0x15d86c0);
      }
      if ((*(uint *)(uVar1 + 0x14) & 0xfffff) == REFG(undefined4, 0x15d86c0)) break;
      uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar1);
    }
    REFG(undefined4, 0x15d86c0) = REFG(undefined4, 0x15d86c0) + 1;
    if (0xfffff < (int)REFG(undefined4, 0x15d86c0)) {
      REFG(int, 0x15d86c4) = REFG(int, 0x15d86c4) + 1;
      REFG(undefined4, 0x15d86c0) = 1;
    }
  } while( true );
}

/* ref: FUN_00cc6c30 */
GEN_FRAME uint F_00cc6c30(unsigned int gen_a0)
{
  GEN_ENTER(0xcc6c30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = (param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c);
  bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar2);
  if ((bVar1 != 0) && (*(uint *)(uVar2 + 0x14) == param_1)) {
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00cc6c80 */
GEN_FRAME uint F_00cc6c80(unsigned int gen_a0)
{
  GEN_ENTER(0xcc6c80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00d2ff90(&REFG(undefined4, 0x15d8770) + (param_1 / 1000 & 0x8000003f) * 4 GEN_EDX_ARG,0);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if ((piVar1[4] == param_1 / 1000) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG,param_1 % 1000), uVar2 != 0)) break;
    piVar1 = (int *)F_00d2ff90(&REFG(undefined4, 0x15d8770) + (param_1 / 1000 & 0x8000003f) * 4 GEN_EDX_ARG,piVar1);
  }
  return (uint)piVar1;
}

/* ref: FUN_00cc6d00 */
GEN_FRAME uint F_00cc6d00(void)
{
  GEN_ENTER(0xcc6d00u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  ((uint *)(gen_frame + 0x8))[4] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = 100;
  uVar2 = 200;
  ((uint *)(gen_frame + 0x8))[0] = 200;
  ((uint *)(gen_frame + 0x8))[1] = 0xb4;
  ((uint *)(gen_frame + 0x8))[2] = 0xfc;
  ((uint *)(gen_frame + 0x8))[3] = 0;
  iVar3 = 1;
  do {
    if ((int)uVar1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    uVar2 = ((uint *)(gen_frame + 0x8))[(int)(iVar3)];
    iVar3 = iVar3 + 1;
  } while (uVar2 != 0);
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00cc6d60 */
GEN_NOFRAME uint F_00cc6d60(void)
{
  GEN_ENTER(0xcc6d60u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  if (REFG(int, 0x15d8704) != 0) {
    F_00406810(REFG(int, 0x15d8704));
    REFG(int, 0x15d8704) = 0;
  }
  REFG(undefined4, 0x15d8708) = 0;
  if (REFG(char, 0x15d8734) != '\0') {
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d871c));
  }
  REFG(char, 0x15d8ba0) = REFG(char, 0x15d8b81);
  if (REFG(char, 0x15d8b81) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8b88));
  }
  uVar1 = 0;
  if (REFG(int, 0x15d8b84) != 0) {
    uVar1 = F_00406810(REFG(int, 0x15d8b84));
    REFG(int, 0x15d8b84) = 0;
  }
  if (REFG(char, 0x15d8ba0) != '\0') {
    uVar1 = gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8b88));
  }
  return uVar1;
}

/* ref: FUN_00cc6e00 */
GEN_FRAME uint F_00cc6e00(unsigned int gen_a0)
{
  GEN_ENTER(0xcc6e00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    uVar2 = (param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c);
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar2);
    if ((bVar1 != 0) && (*(uint *)(uVar2 + 0x14) == param_1)) goto LAB_00cc6e46;
  }
  uVar2 = 0;
LAB_00cc6e46: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc6e60 */
GEN_FRAME uint F_00cc6e60(unsigned int gen_a0)
{
  GEN_ENTER(0xcc6e60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  REFG(char, 0x15d876c) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  uVar1 = F_00cc6c80(param_1);
  if (REFG(char, 0x15d876c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  }
  return uVar1;
}

/* ref: FUN_00cc6ea0 */
GEN_FRAME byte F_00cc6ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc6ea0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d876c) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  piVar1 = (int *)F_00d2ff90(&REFG(undefined4, 0x15d8770) + (param_1 / 1000 & 0x8000003f) * 4 GEN_EDX_ARG,0);
  do {
    if (piVar1 == (int *)0x0) {
      if (REFG(char, 0x15d876c) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
      }
      return 0;
    }
    if (piVar1[4] == param_1 / 1000) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_ARG,param_1);
      *param_3 = uVar2;
      if (-1 < (int)uVar2) {
        *param_2 = piVar1[5];
        if (REFG(char, 0x15d876c) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
        }
        return 1;
      }
    }
    piVar1 = (int *)F_00d2ff90(&REFG(undefined4, 0x15d8770) + (param_1 / 1000 & 0x8000003f) * 4 GEN_EDX_ARG,piVar1);
  } while( true );
}

/* ref: FUN_00cc6f60 */
GEN_FRAME uint F_00cc6f60(unsigned int gen_a0)
{
  GEN_ENTER(0xcc6f60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d876c) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  piVar1 = (int *)F_00d2ff90(&REFG(undefined4, 0x15d8770) + (param_1 / 1000 & 0x8000003f) * 4 GEN_EDX_ARG,0);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      if (REFG(char, 0x15d876c) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
      }
      return 0;
    }
    if ((piVar1[4] == param_1 / 1000) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG,param_1 % 1000), uVar2 != 0)) break;
    piVar1 = (int *)F_00d2ff90(&REFG(undefined4, 0x15d8770) + (param_1 / 1000 & 0x8000003f) * 4 GEN_EDX_ARG,piVar1);
  }
  uVar2 = piVar1[5];
  if (REFG(char, 0x15d876c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  }
  return uVar2;
}

/* ref: FUN_00cc7020 */
GEN_FRAME uint F_00cc7020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc7020u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * this;
  uint uVar1;
  int * piVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  this = REFG(undefined4 * PTR32, 0x15d8708);
  if (REFG(undefined4 * PTR32, 0x15d8708) == (undefined4 *)0x0) {
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d871c));
    }
  }
  else {
    REFG(undefined4 * PTR32, 0x15d8708) = ((undefined4 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8708)));
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d871c));
    }
    if (this != (undefined4 *)0x0) {
      if ((*param_1 == 0x42444553) && ((uint)param_1[2] < 4)) {
        uVar1 = F_00cc6ba0();
        uVar1 = (uint)((int)this - *(int *)&REFG(undefined, 0x15d870c)) / REFG(undefined4, 0x15d8710) << 0x14 | uVar1 & 0xfffff;
        if (param_1[1] == 0x46435353) {
          if ((char)param_2 == '\0') {
            piVar2 = (int *)F_00ce0700(this GEN_EDX_ARG,param_1,uVar1);
          }
          else {
            piVar2 = (int *)F_00cdf400(this GEN_EDX_ARG,param_1,uVar1);
          }
          F_00d2fe00(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar2);
          ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
          REFG(int, 0x15d86b8) = REFG(int, 0x15d86b8) + 1;
          if (REFG(char, 0x15d8750) != '\0') {
            gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
          }
          return uVar1;
        }
      }
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
      }
      return 0;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc7150 */
GEN_FRAME uint F_00cc7150(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7150u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG);
  if ((uVar1 != 0) && (uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG), uVar1 != 0)) {
    for (uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,0); uVar2 != 0;
        uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar2)) {
      if (((*(byte *)(uVar2 + 0x48) & 0x40) != 0) && (*(int * PTR32 *)(uVar2 + 8) == param_1)) {
        uVar1 = *(uint *)(uVar2 + 0x14);
        if (REFG(char, 0x15d8750) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
        }
        return uVar1;
      }
    }
    uVar2 = F_00cc7020(uVar1,0);
    if (uVar2 != 0) {
      uVar1 = F_00cc6e00(uVar2);
      F_00ce11d0(uVar1 GEN_EDX_ARG,param_1);
    }
  }
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG);
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7220 */
GEN_FRAME uint F_00cc7220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc7220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 * this;
  uint uVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  this = REFG(undefined4 * PTR32, 0x15d8708);
  if (REFG(undefined4 * PTR32, 0x15d8708) == (undefined4 *)0x0) {
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d871c));
    }
  }
  else {
    REFG(undefined4 * PTR32, 0x15d8708) = ((undefined4 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8708)));
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(REFG(undefined4 * PTR32, 0x15d8708),&REFG(undefined, 0x15d871c));
    }
    if (this != (undefined4 *)0x0) {
      uVar1 = F_00cc6ba0();
      uVar2 = (uint)((int)this - *(int *)&REFG(undefined, 0x15d870c)) / REFG(undefined4, 0x15d8710) << 0x14 | uVar1 & 0xfffff;
      uVar1 = F_00ce1760(this GEN_EDX_ARG,uVar2,param_1,param_2,param_3,param_4,param_5);
      F_00d2fe00(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar1);
      REFG(int, 0x15d86b8) = REFG(int, 0x15d86b8) + 1;
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
      }
      return uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc7310 */
GEN_FRAME uint F_00cc7310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc7310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * this;
  uint uVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  this = REFG(undefined4 * PTR32, 0x15d8708);
  if (REFG(undefined4 * PTR32, 0x15d8708) == (undefined4 *)0x0) {
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d871c));
    }
  }
  else {
    REFG(undefined4 * PTR32, 0x15d8708) = ((undefined4 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8708)));
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(REFG(undefined4 * PTR32, 0x15d8708),&REFG(undefined, 0x15d871c));
    }
    if (this != (undefined4 *)0x0) {
      uVar1 = F_00cc6ba0();
      uVar2 = (uint)((int)this - *(int *)&REFG(undefined, 0x15d870c)) / REFG(undefined4, 0x15d8710) << 0x14 | uVar1 & 0xfffff;
      uVar1 = F_00ce2020(this GEN_EDX_ARG,uVar2,param_1,param_2,param_3);
      F_00d2fe00(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar1);
      REFG(int, 0x15d86b8) = REFG(int, 0x15d86b8) + 1;
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
      }
      return uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc73f0 */
GEN_FRAME uint F_00cc73f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc73f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * this;
  uint uVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  this = REFG(undefined4 * PTR32, 0x15d8708);
  if (REFG(undefined4 * PTR32, 0x15d8708) == (undefined4 *)0x0) {
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d871c));
    }
  }
  else {
    REFG(undefined4 * PTR32, 0x15d8708) = ((undefined4 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8708)));
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(REFG(undefined4 * PTR32, 0x15d8708),&REFG(undefined, 0x15d871c));
    }
    if (this != (undefined4 *)0x0) {
      uVar1 = F_00cc6ba0();
      uVar2 = (uint)((int)this - *(int *)&REFG(undefined, 0x15d870c)) / REFG(undefined4, 0x15d8710) << 0x14 | uVar1 & 0xfffff;
      uVar1 = F_00cdf510(this GEN_EDX_ARG,param_1,uVar2);
      F_00d2fe00(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar1);
      REFG(int, 0x15d86b8) = REFG(int, 0x15d86b8) + 1;
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
      }
      return uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc74d0 */
GEN_FRAME byte F_00cc74d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc74d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cc6e00(param_1);
  return uVar1 != 0;
}

/* ref: FUN_00cc74f0 */
GEN_NOFRAME uint F_00cc74f0(void)
{
  GEN_ENTER(0xcc74f0u, 0u, 0u, 0u, 0u);
  uint extraout_EAX = 0;
  int * this;
  uint uVar1;
  uint extraout_EAX_00 = 0;
  
  REFG(char, 0x15d8700) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
  uVar1 = extraout_EAX;
  if (REFG(int, 0x15d86e0) != 0) {
    this = (int *)F_00d2ff90(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,0);
    do {
      F_00ce1900(this GEN_EDX_ARG);
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*this + 0x88))(this GEN_EDX_ARG);
      if ((char)uVar1 == '\0') {
        this = (int *)F_00d2ff90(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,this);
      }
      else {
        this = (int *)F_00d2ff30(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,this);
      }
    } while (this != (int *)0x0);
    uVar1 = 0;
  }
  if (REFG(char, 0x15d8700) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
    uVar1 = extraout_EAX_00;
  }
  return uVar1;
}

/* ref: FUN_00cc7570 */
GEN_FRAME uint F_00cc7570(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7570u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    this = ((undefined *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,this);
    if ((bVar1 != 0) && (*(uint *)((int)this + 0x14) == param_1)) {
      uVar2 = F_00ce11f0(this GEN_EDX_ARG);
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
      }
      return uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc7600 */
GEN_FRAME uint F_00cc7600(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7600u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  undefined * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar2 = extraout_EAX;
  if (param_1 != 0) {
    this = ((undefined *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,this);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (*(uint *)((int)this + 0x14) == param_1)) {
      uVar2 = F_00ce1230(this GEN_EDX_ARG);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc7670 */
GEN_FRAME uint F_00cc7670(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7670u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    this = ((undefined *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,this);
    if ((bVar1 != 0) && (*(uint *)((int)this + 0x14) == param_1)) {
      uVar2 = F_00ce1250(this GEN_EDX_ARG);
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
      }
      return uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc7700 */
GEN_FRAME uint F_00cc7700(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7700u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  undefined * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar2 = extraout_EAX;
  if (param_1 != 0) {
    this = ((undefined *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,this);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (*(uint *)((int)this + 0x14) == param_1)) {
      uVar2 = F_00ce1280(this GEN_EDX_ARG);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc7770 */
GEN_NOFRAME uint F_00cc7770(void)
{
  GEN_ENTER(0xcc7770u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,0);
  while( true ) {
    if (uVar1 == 0) {
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
      }
      return 0;
    }
    if ((*(byte *)(uVar1 + 0x48) & 1) != 0) break;
    uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar1);
  }
  uVar1 = *(uint *)(uVar1 + 0x14);
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar1;
}

/* ref: FUN_00cc77e0 */
GEN_NOFRAME uint F_00cc77e0(void)
{
  GEN_ENTER(0xcc77e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00cc7770();
  uVar1 = F_00cc6e00(uVar1);
  return uVar1;
}

/* ref: FUN_00cc77f0 */
GEN_FRAME uint F_00cc77f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc77f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,0);
  while( true ) {
    if (uVar1 == 0) {
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
      }
      return 0;
    }
    if (param_1 == *(int *)(uVar1 + 0x10)) break;
    uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar1);
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar1;
}

/* ref: FUN_00cc7870 */
GEN_FRAME uint F_00cc7870(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7870u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  uint extraout_EAX = 0;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
  if (uVar1 == 2) {
    REFG(char, 0x15d8700) = '\x01';
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
    uVar1 = F_00d2fe00(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,param_1);
    if (REFG(char, 0x15d8700) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
      uVar1 = extraout_EAX;
    }
  }
  return uVar1;
}

/* ref: FUN_00cc78c0 */
GEN_FRAME uint F_00cc78c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc78c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d8700) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
  uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,0);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if (*(int *)(uVar1 + 0x14) == param_1) {
        uVar2 = F_00d2ff30(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,uVar1);
        goto LAB_00cc790c;
      }
      uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,uVar1);
    } while (uVar1 != 0);
    uVar2 = 0;
  }
LAB_00cc790c: ;
  if (REFG(char, 0x15d8700) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc7930 */
GEN_FRAME uint F_00cc7930(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7930u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x20))(piVar3 GEN_EDX_ARG);
      goto LAB_00cc7983;
    }
  }
  uVar2 = 0;
LAB_00cc7983: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc79a0 */
GEN_FRAME uint F_00cc79a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc79a0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar2 = extraout_EAX;
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x30))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc7a10 */
GEN_FRAME uint F_00cc7a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc7a10u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x60))(piVar3 GEN_EDX_ARG,param_2);
      goto LAB_00cc7a68;
    }
  }
  uVar2 = 0xffffffff;
LAB_00cc7a68: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7a90 */
GEN_FRAME uint F_00cc7a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc7a90u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 100))(piVar3 GEN_EDX_ARG,param_2);
      goto LAB_00cc7ae8;
    }
  }
  uVar2 = 0xffffffff;
LAB_00cc7ae8: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7b10 */
GEN_FRAME byte F_00cc7b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc7b10u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x68))(piVar3 GEN_EDX_ARG,param_2);
      bVar1 = (byte)uVar2;
      goto LAB_00cc7b68;
    }
  }
  bVar1 = 0;
LAB_00cc7b68: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return bVar1;
}

/* ref: FUN_00cc7b90 */
GEN_FRAME uint F_00cc7b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc7b90u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3 GEN_EDX_ARG,param_2);
      goto LAB_00cc7be7;
    }
  }
  uVar2 = 0;
LAB_00cc7be7: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7c10 */
GEN_FRAME uint F_00cc7c10(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7c10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  piVar1 = (int *)F_00cc6c80(param_1);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG,param_1);
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7c60 */
GEN_FRAME uint F_00cc7c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc7c60u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,param_2);
      goto LAB_00cc7cb7;
    }
  }
  uVar2 = 0;
LAB_00cc7cb7: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7ce0 */
GEN_FRAME uint F_00cc7ce0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7ce0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  piVar1 = (int *)F_00cc6c80(param_1);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG,param_1);
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7d30 */
GEN_FRAME byte F_00cc7d30(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7d30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x88))(piVar3 GEN_EDX_ARG);
      bVar1 = (byte)uVar2;
      goto LAB_00cc7d87;
    }
  }
  bVar1 = 0;
LAB_00cc7d87: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return bVar1;
}

/* ref: FUN_00cc7db0 */
GEN_FRAME byte F_00cc7db0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7db0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  undefined * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    this = ((undefined *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,this);
    if ((bVar1 != 0) && (*(uint *)((int)this + 0x14) == param_1)) {
      bVar1 = F_00ce12a0(this GEN_EDX_ARG);
      goto LAB_00cc7e02;
    }
  }
  bVar1 = 0;
LAB_00cc7e02: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return bVar1;
}

/* ref: FUN_00cc7e20 */
GEN_FRAME uint F_00cc7e20(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7e20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar2 = extraout_EAX;
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xa4))(piVar3 GEN_EDX_ARG);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc7e90 */
GEN_FRAME byte F_00cc7e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc7e90u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  int iVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    iVar2 = (param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c);
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,iVar2);
    if ((bVar1 != 0) && (*(uint *)(iVar2 + 0x14) == param_1)) {
      *(byte *)(iVar2 + 0x48) =
           *(byte *)(iVar2 + 0x48) ^ (*(byte *)(iVar2 + 0x48) ^ (byte)param_2) & 1;
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
      }
      return 1;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc7f20 */
GEN_FRAME uint F_00cc7f20(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7f20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  int * piVar4;
  
  REFG(char, 0x15d8750) = '\x01';
  uVar3 = gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar4 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar2 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar4);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (((bVar2 != 0) && (piVar4[5] == param_1)) &&
       (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG), uVar3 == 2)) {
      pcVar1 = *(gen_code32 *)(*piVar4 + 0x84);
      *(byte *)(piVar4 + 0x12) = *(byte *)(piVar4 + 0x12) & 0xfd;
      (*pcVar1)(piVar4);
      REFG(char, 0x15d8700) = '\x01';
      gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d86e8));
      uVar3 = F_00d2fe00(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,piVar4);
      if (REFG(char, 0x15d8700) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
        uVar3 = extraout_EAX;
      }
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar3 = extraout_EAX_00;
  }
  return uVar3;
}

/* ref: FUN_00cc7fd0 */
GEN_FRAME uint F_00cc7fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc7fd0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint extraout_EAX_00 = 0;
  int iVar3;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar2 = extraout_EAX;
  if (param_1 != 0) {
    iVar3 = (param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c);
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,iVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (*(uint *)(iVar3 + 0x14) == param_1)) {
      uVar2 = CONCAT31(extraout_var,(char)param_2 << 4 ^ *(byte *)(iVar3 + 0x48)) & 0xffffff10;
      *(byte *)(iVar3 + 0x48) = *(byte *)(iVar3 + 0x48) ^ (byte)uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc8040 */
GEN_FRAME uint F_00cc8040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc8040u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint extraout_EAX_00 = 0;
  int iVar3;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar2 = extraout_EAX;
  if (param_1 != 0) {
    iVar3 = (param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c);
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,iVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (*(uint *)(iVar3 + 0x14) == param_1)) {
      uVar2 = CONCAT31(extraout_var,(char)param_2 << 5 ^ *(byte *)(iVar3 + 0x48)) & 0xffffff20;
      *(byte *)(iVar3 + 0x48) = *(byte *)(iVar3 + 0x48) ^ (byte)uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc80b0 */
GEN_FRAME byte F_00cc80b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc80b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  int iVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    iVar2 = (param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c);
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,iVar2);
    if ((bVar1 != 0) && (*(uint *)(iVar2 + 0x14) == param_1)) {
      bVar1 = *(byte *)(iVar2 + 0x48) >> 5 & 1;
      goto LAB_00cc8102;
    }
  }
  bVar1 = 0;
LAB_00cc8102: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return bVar1;
}

/* ref: FUN_00cc8120 */
GEN_FRAME uint F_00cc8120(unsigned int gen_a0)
{
  GEN_ENTER(0xcc8120u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  uVar2 = gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x84))(piVar3 GEN_EDX_ARG);
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG);
      if (uVar2 == 2) {
        REFG(char, 0x15d8700) = '\x01';
        gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d86e8));
        uVar2 = F_00d2fe00(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,piVar3);
        if (REFG(char, 0x15d8700) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
          uVar2 = extraout_EAX;
        }
      }
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc81d0 */
GEN_FRAME byte F_00cc81d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc81d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  int iVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    iVar2 = (param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c);
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,iVar2);
    if ((bVar1 != 0) && (*(uint *)(iVar2 + 0x14) == param_1)) {
      bVar1 = *(byte *)(iVar2 + 0x48) >> 3 & 1;
      goto LAB_00cc8222;
    }
  }
  bVar1 = 0;
LAB_00cc8222: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return bVar1;
}

/* ref: FUN_00cc8240 */
GEN_FRAME byte F_00cc8240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc8240u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  int * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    this = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,this);
    if ((bVar1 != 0) && (this[5] == param_1)) {
      F_00ce11f0(this GEN_EDX_ARG);
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*this + 0x18))(this GEN_EDX_ARG,param_2);
      if (uVar2 != 0) {
        *param_3 = *(undefined4 *)(uVar2 + 0x34);
        F_00ce1230(this GEN_EDX_ARG);
        if (REFG(char, 0x15d8750) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
        }
        return 1;
      }
      F_00ce1230(this GEN_EDX_ARG);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc82f0 */
GEN_FRAME byte F_00cc82f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc82f0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  int * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    this = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,this);
    if ((bVar1 != 0) && (this[5] == param_1)) {
      F_00ce11f0(this GEN_EDX_ARG);
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*this + 0xc))(this GEN_EDX_ARG,param_2);
      if (uVar2 != 0) {
        *param_3 = (uint)*(byte *)(uVar2 + 2);
        F_00ce1230(this GEN_EDX_ARG);
        if (REFG(char, 0x15d8750) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
        }
        return 1;
      }
      F_00ce1230(this GEN_EDX_ARG);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc83a0 */
GEN_FRAME float F_00cc83a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc83a0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  int * this;
  float10 extraout_ST0;
  float local_8;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  local_8 = (float)(float10)0;
  if (param_1 != 0) {
    this = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,this);
    if ((bVar1 != 0) && (this[5] == param_1)) {
      F_00ce11f0(this GEN_EDX_ARG);
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*this + 0x1c))(this,param_2);
      local_8 = (float)extraout_ST0;
      F_00ce1230(this GEN_EDX_ARG);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return local_8;
}

/* ref: FUN_00cc8430 */
GEN_FRAME float10 F_00cc8430(unsigned int gen_a0)
{
  GEN_ENTER(0xcc8430u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  int * piVar2;
  float10 extraout_ST0;
  float10 fVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar2 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar2);
    if ((bVar1 != 0) && (piVar2[5] == param_1)) {
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2);
      fVar3 = extraout_ST0;
      goto LAB_00cc8488;
    }
  }
  fVar3 = (float10)REFG(float, 0x1090708);
LAB_00cc8488: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return (float10)(float)fVar3;
}

/* ref: FUN_00cc84b0 */
GEN_FRAME uint F_00cc84b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc84b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  for (uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,0); uVar2 != 0; uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar2))
  {
    bVar1 = *(byte *)(uVar2 + 0x48);
    if ((bVar1 & 8) != 0) {
      *(byte *)(uVar2 + 0x48) = ((char)param_1 << 4 ^ bVar1) & 0x10 ^ bVar1;
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc8520 */
GEN_FRAME uint F_00cc8520(unsigned int gen_a0)
{
  GEN_ENTER(0xcc8520u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d876c) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  uVar3 = *(uint *)(param_1 + 0x10);
  if (-1 < (int)uVar3) {
    uVar2 = uVar3 & 0x8000003f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
    }
    bVar1 = F_00d30050(&REFG(undefined4, 0x15d8770) + uVar2 * 4 GEN_EDX_ARG,param_1);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      uVar3 = F_00d2fe00(&REFG(undefined4, 0x15d8770) + uVar2 * 4 GEN_EDX_ARG,param_1);
    }
  }
  if (REFG(char, 0x15d876c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
    uVar3 = extraout_EAX;
  }
  return uVar3;
}

/* ref: FUN_00cc8590 */
GEN_FRAME uint F_00cc8590(unsigned int gen_a0)
{
  GEN_ENTER(0xcc8590u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d876c) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  uVar3 = *(uint *)(param_1 + 0x10);
  if (-1 < (int)uVar3) {
    uVar2 = uVar3 & 0x8000003f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
    }
    bVar1 = F_00d30050(&REFG(undefined4, 0x15d8770) + uVar2 * 4 GEN_EDX_ARG,param_1);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar3 = F_00d2ff30(&REFG(undefined4, 0x15d8770) + uVar2 * 4 GEN_EDX_ARG,param_1);
    }
  }
  if (REFG(char, 0x15d876c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
    uVar3 = extraout_EAX;
  }
  return uVar3;
}

/* ref: FUN_00cc8600 */
GEN_FRAME uint F_00cc8600(unsigned int gen_a0)
{
  GEN_ENTER(0xcc8600u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar4 = 0;
  piVar2 = (int *)F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,0);
  if (piVar2 != (int *)0x0) {
    uVar4 = 0;
    do {
      if ((((*(byte *)(piVar2 + 0x12) & 8) == 0) && (bVar1 = F_00cc2b60(piVar2), bVar1 != 0)) &&
         ((param_1 == 0 || (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2 GEN_EDX_ARG,0), param_1 == uVar3)))) {
        uVar4 = uVar4 + piVar2[7];
      }
      piVar2 = (int *)F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar2);
    } while (piVar2 != (int *)0x0);
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar4;
}

/* ref: FUN_00cc8690 */
GEN_FRAME uint F_00cc8690(unsigned int gen_a0)
{
  GEN_ENTER(0xcc8690u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar3 = 0;
  piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,0);
  if (piVar1 != (int *)0x0) {
    uVar3 = 0;
    do {
      if (((*(byte *)(piVar1 + 0x12) & 8) == 0) &&
         ((param_1 == 0 || (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1 GEN_EDX_ARG,0), param_1 == uVar2)))) {
        uVar3 = uVar3 + piVar1[7];
      }
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar1);
    } while (piVar1 != (int *)0x0);
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar3;
}

/* ref: FUN_00cc8710 */
GEN_FRAME uint F_00cc8710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc8710u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,0);
  if (piVar1 != (int *)0x0) {
    iVar3 = 0;
    do {
      if (((*(byte *)(piVar1 + 0x12) & 8) == 0) &&
         ((param_3 == 0 || (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1 GEN_EDX_ARG,0), param_3 == uVar2)))) {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 100))(piVar1 GEN_EDX_ARG,0);
        *(uint *)(param_1 + iVar3 * 4) = uVar2;
        iVar3 = iVar3 + 1;
        if (param_2 <= iVar3) break;
      }
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar1);
    } while (piVar1 != (int *)0x0);
  }
  uVar2 = REFG(undefined4, 0x15d86d0);
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc87b0 */
GEN_FRAME unsigned int F_00cc87b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc87b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  *param_1 = REFG(undefined4, 0x15d86d0);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 4) = 0;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc8800 */
GEN_FRAME byte F_00cc8800(unsigned int gen_a0)
{
  GEN_ENTER(0xcc8800u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  char cVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    return 0;
  }
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x20))(piVar2 GEN_EDX_ARG);
    if (*(int *)(param_1 + 0xc) < (int)uVar4) goto LAB_00cc886a;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  do {
    uVar4 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,*(undefined4 *)(param_1 + 8));
    *(uint *)(param_1 + 8) = uVar4;
    if (uVar4 == 0) break;
  } while ((*(byte *)(uVar4 + 0x48) & 8) != 0);
LAB_00cc886a: ;
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = iVar3 + 1;
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 100))(piVar2 GEN_EDX_ARG,iVar3);
    *(uint *)(param_1 + 4) = uVar4;
  }
  cVar1 = *(char *)(param_1 + 0x10);
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return cVar1 == '\0';
}

/* ref: FUN_00cc88c0 */
GEN_FRAME byte F_00cc88c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc88c0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  int * in_ecx;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    in_ecx = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,in_ecx);
    if ((bVar1 != 0) && (in_ecx[5] == param_1)) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 4))(in_ecx GEN_EDX_ARG);
      if ((uVar2 == 3) && (in_ecx[0x20] == 4)) {
        uVar2 = F_00ce1bf0(in_ecx GEN_EDX_ARG);
        *param_2 = uVar2;
        *param_3 = in_ecx[0x27];
        if (REFG(char, 0x15d8750) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
        }
        return 1;
      }
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc8970 */
GEN_FRAME uint F_00cc8970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc8970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * this;
  uint uVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  this = REFG(undefined4 * PTR32, 0x15d8708);
  if (REFG(undefined4 * PTR32, 0x15d8708) == (undefined4 *)0x0) {
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d871c));
    }
  }
  else {
    REFG(undefined4 * PTR32, 0x15d8708) = ((undefined4 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8708)));
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(REFG(undefined4 * PTR32, 0x15d8708),&REFG(undefined, 0x15d871c));
    }
    if (this != (undefined4 *)0x0) {
      uVar1 = F_00cc6ba0();
      uVar2 = (uint)((int)this - *(int *)&REFG(undefined, 0x15d870c)) / REFG(undefined4, 0x15d8710) << 0x14 | uVar1 & 0xfffff;
      uVar1 = F_00ce2110(this GEN_EDX_ARG,uVar2,
                           (*(undefined * PTR32 (*)[3])REFP(0x112a770)),param_1,param_2,param_3);
      F_00d2fe00(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar1);
      REFG(int, 0x15d86b8) = REFG(int, 0x15d86b8) + 1;
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
      }
      return uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc8a70 */
GEN_FRAME byte F_00cc8a70(unsigned int gen_a0)
{
  GEN_ENTER(0xcc8a70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  code * pcVar4;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
  if (piVar3[5] != param_1) {
    if (REFG(char, 0x15d8750) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    }
    return 0;
  }
  pcVar4 = (((code *)GEN_TOP(gen_imp_LeaveCriticalSection)));
  if ((*(byte *)(piVar3 + 0x12) & 8) != 0) {
    REFG(char, 0x15d8700) = '\x01';
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d86e8));
    for (uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,0); uVar2 != 0;
        uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,uVar2)) {
      if (*(uint *)(uVar2 + 0x14) == param_1) {
        F_00d2ff30(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,uVar2);
        break;
      }
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG);
    if (uVar2 == 3) {
      *(byte *)(piVar3 + 0x12) = *(byte *)(piVar3 + 0x12) & 0xdf;
    }
    bVar1 = F_00ce3950(param_1);
    pcVar4 = (((code *)GEN_TOP(gen_imp_LeaveCriticalSection)));
    if (bVar1 == 0) {
      if (REFG(char, 0x15d8700) != '\0') {
        gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d86e8));
      }
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
      }
      return 0;
    }
    if (REFG(char, 0x15d8700) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d86e8));
    }
  }
  F_00cc8590(piVar3);
  F_00d2ff30(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,piVar3);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x70))(piVar3 GEN_EDX_ARG);
  if (uVar2 != 0) {
    F_00ce30d0(&REFG(undefined, 0x15d8b70) GEN_EDX_ARG,uVar2);
  }
  ((GEN_TCODE *)*(gen_code32 *)*piVar3)(piVar3 GEN_EDX_ARG,0);
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  *piVar3 = (int)REFG(int * PTR32, 0x15d8708);
  REFG(int * PTR32, 0x15d8708) = piVar3;
  if (REFG(char, 0x15d8734) != '\0') {
    (*pcVar4)(&REFG(undefined, 0x15d871c));
  }
  REFG(int, 0x15d86b8) = REFG(int, 0x15d86b8) - 1;
  if (REFG(char, 0x15d8750) != '\0') {
    (*pcVar4)(&REFG(undefined, 0x15d8738));
  }
  return 1;
}

/* ref: FUN_00cc8bf0 */
GEN_FRAME uint F_00cc8bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc8bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00cc8c90 */
GEN_FRAME uint F_00cc8c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc8c90u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int * in_ecx;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = 0;
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG);
  if ((uVar1 != 0) && (uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG), uVar1 != 0)) {
    for (uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,0); uVar2 != 0;
        uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,uVar2)) {
      if (((*(byte *)(uVar2 + 0x48) & 0x40) != 0) && (*(int *)(uVar2 + 8) == param_2)) {
        uVar1 = *(uint *)(uVar2 + 0x14);
        if (REFG(char, 0x15d8750) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
        }
        return uVar1;
      }
    }
    uVar2 = F_00cc7020(uVar1,0);
    if (uVar2 != 0) {
      in_ecx = (int *)F_00cc6e00(uVar2);
      F_00ce11d0(in_ecx GEN_EDX_ARG,param_2);
      uVar4 = 1;
      uVar3 = 4;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 0x20))(in_ecx GEN_EDX_ARG);
      uVar1 = F_00ce3060(&REFG(undefined, 0x15d8b70) GEN_EDX_ARG,uVar1 * 0x94,uVar3,uVar4);
      if (uVar1 != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 0x6c))(in_ecx GEN_EDX_ARG,uVar1);
        goto LAB_00cc8d9f;
      }
      F_00cc8a70(uVar2);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG);
    if (REFG(char, 0x15d8750) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    }
    return 0;
  }
LAB_00cc8d9f: ;
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG);
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc8dd0 */
GEN_FRAME uint F_00cc8dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc8dd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 * in_ecx;
  
  ((int *)(gen_frame + 0x18))[4] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  REFG(undefined4, 0x15d86b8) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
  }
  if (REFG(char, 0x15d7798) == '\0') {
    iVar3 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar3 = REFG(int, 0x15d8610);
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
      iVar3 = REFG(int, 0x15d8610);
    }
  }
  REFG(int, 0x15d86bc) = iVar3;
  F_00d2fdb0(&REFG(undefined, 0x15d86c8) GEN_EDX_ARG,0x24);
  F_00d2fdb0(&REFG(undefined, 0x15d86d8) GEN_EDX_ARG,0x30);
  in_ecx = &REFG(undefined4, 0x15d8770);
  do {
    F_00d2fdb0(in_ecx GEN_EDX_ARG,0x3c);
    in_ecx = in_ecx + 4;
  } while ((int)in_ecx < 0x15d8b70);
  iVar4 = 100;
  iVar1 = 200;
  (*(undefined4 *)(gen_frame + 0x14)) = 100;
  ((int *)(gen_frame + 0x18))[0] = 200;
  ((int *)(gen_frame + 0x18))[1] = 0xb4;
  ((int *)(gen_frame + 0x18))[2] = 0xfc;
  ((int *)(gen_frame + 0x18))[3] = 0;
  iVar3 = 1;
  do {
    if (iVar4 < iVar1) {
      iVar4 = iVar1;
    }
    iVar1 = ((int *)(gen_frame + 0x18))[(int)(iVar3)];
    iVar3 = iVar3 + 1;
  } while (iVar1 != 0);
  (*(char * PTR32 *)(gen_frame + 0xc)) = "CDev.Engine.Sd.SoundDriver";
  (*(undefined4 *)(gen_frame + 0x10)) = 0x10;
  F_00cc6930(&REFG(undefined4, 0x15d8704) GEN_EDX_ARG,iVar4,REFG(int, 0x15d86bc),&(*(char * PTR32 *)(gen_frame + 0xc)),0x10,1);
  (*(char * PTR32 *)(gen_frame + 0xc)) = "CDev.Engine.Sd.SoundDriver";
  (*(undefined4 *)(gen_frame + 0x10)) = 0x10;
  uVar2 = F_00cc9280(&REFG(undefined, 0x15d8b70) GEN_EDX_ARG,REFG(int, 0x15d86bc) * 0x600,&(*(char * PTR32 *)(gen_frame + 0xc)),1,1);
  F_00c47745(((int *)(gen_frame + 0x18))[4] ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00cc8f10 */
GEN_NOFRAME uint GEN_THISCALL F_00cc8f10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc8f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  *(undefined1 *)((int)this + 0x30) = 1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00cc8f40 */
GEN_FRAME uint F_00cc8f40(unsigned int gen_a0)
{
  GEN_ENTER(0xcc8f40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = param_1 & 0x8000003f;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xffffffc0) + 1;
  }
  return uVar1;
}

/* ref: FUN_00cc8f80 */
GEN_FRAME byte GEN_THISCALL F_00cc8f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc8f80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x48) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x48) = *(byte *)(in_ecx + 0x48) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00cc8fb0 */
GEN_FRAME byte GEN_THISCALL F_00cc8fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc8fb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x14) == param_2;
}

/* ref: FUN_00cc9010 */
GEN_FRAME byte GEN_THISCALL F_00cc9010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 4 ^ *(byte *)(in_ecx + 0x48)) & 0x10;
  *(byte *)(in_ecx + 0x48) = *(byte *)(in_ecx + 0x48) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00cc9030 */
GEN_FRAME byte GEN_THISCALL F_00cc9030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9030u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 5 ^ *(byte *)(in_ecx + 0x48)) & 0x20;
  *(byte *)(in_ecx + 0x48) = *(byte *)(in_ecx + 0x48) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00cc9120 */
GEN_NOFRAME uint GEN_THISCALL F_00cc9120(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc9120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint extraout_EAX = 0;
  
  *(char *)((int)this + 0x30) = *(char *)((int)this + 0x11);
  if (*(char *)((int)this + 0x11) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  if (*(char *)((int)this + 0x30) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::StreamReaderAdapter::vf1 */
GEN_FRAME uint GEN_THISCALL F_00cc9170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  float10 fVar1;
  uint uVar2;
  float10 fVar3;
  longlong lVar4;
  
  fVar3 = (float10)(int)param_1[3] / (float10)(int)param_1[4];
  fVar1 = (float10)REFG(double, 0x1088108);
  if (fVar1 <= fVar3 && ((!GEN_ISNAN(fVar3) && !GEN_ISNAN(fVar1)) && fVar3 != fVar1)) {
    return 0;
  }
  lVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 4))))
                    (*(int * PTR32 *)(this + 4),*param_1,param_1[2],0,param_1[1],0);
  uVar2 = (uint)lVar4;
  if (lVar4 == -1) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::StreamReaderAdapter::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00cc91d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcc91d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0xc))))
                    (*(int * PTR32 *)(this + 4) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::StreamReaderAdapter::vf0 */
GEN_FRAME uint GEN_THISCALL F_00cc91e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc91e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109726c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cc9210 */
GEN_FRAME uint GEN_THISCALL F_00cc9210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x112a770));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00cc9230 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cc9230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc9230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  *(char *)((int)this + 0x30) = *(char *)((int)this + 0x11);
  if (*(char *)((int)this + 0x11) != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    F_00406810(*(int *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  if (*(char *)((int)this + 0x30) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (uint)(gen_imp_DeleteCriticalSection(lpCriticalSection));
}

/* ref: FUN_00cc9280 */
GEN_FRAME uint GEN_THISCALL F_00cc9280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc9280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,param_1,*param_2,0,0,param_2[1]);
  *(uint *)((int)this + 0x14) = uVar1;
  if (uVar1 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc8bf0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x112a624),&REFG(undefined1, 0x107fc63),
                    "d:\\ffxiv\\trunk\\prog\\externals\\cdev_sd\\sd\\cdev\\engine\\sd\\driver\\../SdHeap.h"
                    ,0x60,"SQEX::CDev::Engine::Sd::SdHeap::CreateSdHeap");
  }
  uVar1 = F_00ce3200(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0x14),param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00cc9320 */
GEN_FRAME unsigned int F_00cc9320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9320u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cc9340 */
GEN_NOFRAME byte GEN_THISCALL F_00cc9340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc9340u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(in_ecx + 0xc);
  while (iVar1 = iVar2, iVar1 != 0) {
    in_ecx = iVar1;
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  return (int)*(short *)(in_ecx + 8) <= *(int *)(in_ecx + 0xbc);
}

/* ref: FUN_00cc9360 */
GEN_NOFRAME uint GEN_THISCALL F_00cc9360(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc9360u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(in_ecx + 0xc);
  while (iVar1 = iVar2, iVar1 != 0) {
    in_ecx = iVar1;
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  return *(uint *)(in_ecx + 0xbc);
}

/* ref: FUN_00cc9380 */
GEN_NOFRAME byte GEN_STDCALL F_00cc9380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9380u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_00cc9390 */
GEN_FRAME byte GEN_THISCALL F_00cc9390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 == *(int *)(in_ecx + 4);
}

/* ref: FUN_00cc93a0 */
GEN_FRAME float GEN_THISCALL F_00cc93a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc93a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x10))))((int)this + 0x34);
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))))((int)this + 0x10);
  extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x58) + 0x10))))((int)this + 0x58);
  return ((float)GEN_TOF((extraout_ST0_01 *
                (float10)(double)(extraout_ST0_00 * (float10)(double)extraout_ST0))));
}

/* ref: FUN_00cc93f0 */
GEN_FRAME uint GEN_THISCALL F_00cc93f0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcc93f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint in_EAX = 0;
  
  F_00cccc10(in_ecx + 0x10 GEN_EDX_FWD,param_2);
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cc9410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00cc9420 */
GEN_FRAME unsigned int GEN_THISCALL F_00cc9420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9420u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(ushort *)(in_ecx + 10) = *(ushort *)(in_ecx + 10) | 1;
    return;
  }
  *(ushort *)(in_ecx + 10) = *(ushort *)(in_ecx + 10) & 0xfffe;
  return;
}

/* ref: FUN_00cc9450 */
GEN_NOFRAME uint GEN_THISCALL F_00cc9450(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc9450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = 0;
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    this = *(undefined * PTR32 *)((int)this + 0xc);
  }
  for (this_00 = (undefined *)F_00d2ff90((int)this + 0xb4 GEN_EDX_FWD,0); this_00 != (undefined *)0x0;
      this_00 = (undefined *)F_00d2ff90((int)this + 0xb4 GEN_EDX_ARG,this_00)) {
    bVar1 = F_00cbbe10(this_00 GEN_EDX_ARG);
    if (bVar1 == 0) {
      uVar2 = uVar2 + 1;
    }
  }
  return uVar2;
}

/* ref: FUN_00cc94a0 */
GEN_NOFRAME unsigned int F_00cc94a0(void)
{
  GEN_ENTER(0xcc94a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00cc94b0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cc94b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc94b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  undefined * this;
  uint uVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  if (*(int *)(param_1 + 0x7c) == 1) {
    if (param_3 != 0) {
      F_00cccd90(param_1 + 0x34 GEN_EDX_FWD,param_2,param_3);
      return;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      iVar1 = param_1;
    }
    F_00cccbd0(param_1 + 0x34 GEN_EDX_ARG,param_2);
    for (this = (undefined *)F_00d2ff90(iVar1 + 0xb4 GEN_EDX_ARG,0); this != (undefined *)0x0;
        this = (undefined *)F_00d2ff90(iVar1 + 0xb4 GEN_EDX_ARG,this)) {
      uVar2 = F_00cbcc20(this GEN_EDX_ARG);
      if (uVar2 == *(uint *)(param_1 + 4)) {
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x10))))(param_1 + 0x34);
        extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))))(param_1 + 0x10);
        extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x58) + 0x10))))(param_1 + 0x58);
        F_00cbc8c0(this GEN_EDX_ARG,((float)GEN_TOF((extraout_ST0_01 *
                                 (float10)(double)(extraout_ST0_00 * (float10)(double)extraout_ST0))))
                    );
      }
    }
  }
  return;
}

/* ref: FUN_00cc9590 */
GEN_FRAME uint GEN_THISCALL F_00cc9590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  undefined * this_00;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  uVar2 = *(uint *)((int)this + 0x7c);
  if (0 < (int)uVar2) {
    uVar2 = uVar2 - 1;
    *(uint *)((int)this + 0x7c) = uVar2;
    if (uVar2 == 0) {
      if (param_1 != 0) {
        uVar2 = F_00cccd90((int)this + 0x34 GEN_EDX_FWD,(float)(float10)1,param_1);
        return uVar2;
      }
      pvVar1 = *(undefined * PTR32 *)((int)this + 0xc);
      if (pvVar1 == (undefined *)0x0) {
        pvVar1 = this;
      }
      F_00cccbd0((int)this + 0x34 GEN_EDX_ARG,(float)(float10)1);
      for (this_00 = (undefined *)F_00d2ff90((int)pvVar1 + 0xb4 GEN_EDX_ARG,0); this_00 != (undefined *)0x0;
          this_00 = (undefined *)F_00d2ff90((int)pvVar1 + 0xb4 GEN_EDX_ARG,this_00)) {
        uVar2 = F_00cbcc20(this_00 GEN_EDX_ARG);
        if (uVar2 == *(uint *)((int)this + 4)) {
          extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x10))))((int)this + 0x34);
          extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))))((int)this + 0x10);
          extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x58) + 0x10))))((int)this + 0x58);
          F_00cbc8c0(this_00 GEN_EDX_ARG,((float)GEN_TOF((extraout_ST0_01 *
                                      (float10)(double)(extraout_ST0_00 *
                                                       (float10)(double)extraout_ST0)))));
        }
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_00cc9670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9670u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  int in_ecx;
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined * this;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  *(undefined1 *)(param_1 + 0xdc) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
  in_ecx = *(int *)(param_1 + 0xc);
  iVar2 = in_ecx;
  if (in_ecx == 0) {
    iVar2 = param_1;
  }
  this = (undefined *)(iVar2 + 0xb4);
  uVar1 = *(uint *)(iVar2 + 0x90);
  if (in_ecx == 0) {
    uVar4 = *(uint *)(param_1 + 0xbc);
  }
  else {
    uVar4 = F_00cc9360(in_ecx GEN_EDX_ARG);
  }
  if (uVar1 == uVar4) {
    puVar5 = (undefined4 *)F_00d2ff90(this GEN_EDX_ARG,0);
    do {
      bVar3 = F_00cbbe20(puVar5 GEN_EDX_ARG);
      if ((bVar3 == 0) && (bVar3 = F_00cbbe10(puVar5 GEN_EDX_ARG), bVar3 == 0)) {
        puVar6 = (undefined4 *)F_00d2ff90(this GEN_EDX_ARG,puVar5);
      }
      else {
        F_00cbdbf0(puVar5 GEN_EDX_ARG,0);
        puVar6 = (undefined4 *)F_00d2ff30(this GEN_EDX_ARG,puVar5);
        if (puVar5 != (undefined4 *)0x0) {
          *(char *)(iVar2 + 0xb0) = *(char *)(iVar2 + 0x94);
          if (*(char *)(iVar2 + 0x94) != '\0') {
            gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x98));
          }
          *puVar5 = *(undefined4 *)(iVar2 + 0x84);
          *(undefined4 * PTR32 *)(iVar2 + 0x84) = puVar5;
          if (*(char *)(iVar2 + 0xb0) != '\0') {
            gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x98));
          }
        }
      }
      puVar5 = puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(iVar2 + 0x98);
  *(char *)(iVar2 + 0xb0) = *(char *)(iVar2 + 0x94);
  if (*(char *)(iVar2 + 0x94) != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  puVar5 = *(undefined4 * PTR32 *)(iVar2 + 0x84);
  if (puVar5 == (undefined4 *)0x0) {
    if (*(char *)(iVar2 + 0xb0) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
  }
  else {
    *(undefined4 *)(iVar2 + 0x84) = *puVar5;
    if (*(char *)(iVar2 + 0xb0) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    if (puVar5 != (undefined4 *)0x0) {
      F_00cbbdc0(puVar5 GEN_EDX_ARG,param_2);
      F_00d2fe00(this GEN_EDX_ARG,puVar5);
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x10))))(param_1 + 0x34);
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))))(param_1 + 0x10);
      extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x58) + 0x10))))(param_1 + 0x58);
      F_00cbc8c0(puVar5 GEN_EDX_ARG,((float)GEN_TOF((extraout_ST0_01 *
                                 (float10)(double)(extraout_ST0_00 * (float10)(double)extraout_ST0))))
                  );
    }
  }
  if (*(char *)(param_1 + 0xdc) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf1 */
GEN_FRAME unsigned int GEN_THISCALL F_00cc9800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pBVar1;
  byte bVar2;
  undefined4 * this_00;
  undefined4 * puVar3;
  uint uVar4;
  undefined * this_01;
  bool bVar5;
  bool bVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  this[0xdc] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0xc4));
  if (*(int *)(this + 0xbc) != 0) {
    this_00 = (undefined4 *)F_00d2ff90(this + 0xb4 GEN_EDX_ARG,0);
    do {
      bVar2 = F_00cbc040(this_00 GEN_EDX_ARG);
      if (bVar2 == 0) {
        puVar3 = (undefined4 *)F_00d2ff30(this + 0xb4 GEN_EDX_ARG,this_00);
        if (this_00 != (undefined4 *)0x0) {
          this[0xb0] = this[0x94];
          if (this[0x94] != (undefined1)0x0) {
            gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
          }
          *this_00 = *(undefined4 *)(this + 0x84);
          *(undefined4 * PTR32 *)(this + 0x84) = this_00;
          if (this[0xb0] != (undefined1)0x0) {
            gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
          }
        }
      }
      else {
        puVar3 = (undefined4 *)F_00d2ff90(this + 0xb4 GEN_EDX_ARG,this_00);
      }
      this_00 = puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0xc))))(this + 0x10 GEN_EDX_ARG);
  bVar5 = (char)uVar4 != '\0';
  if (bVar5) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 8))))(this + 0x10 GEN_EDX_ARG,param_1);
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x34) + 0xc))))(this + 0x34 GEN_EDX_ARG);
  bVar6 = (char)uVar4 != '\0';
  if (bVar6) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x34) + 8))))(this + 0x34 GEN_EDX_ARG,param_1);
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x58) + 0xc))))(this + 0x58 GEN_EDX_ARG);
  if ((char)uVar4 == '\0') {
    if (!bVar6 && !bVar5) goto LAB_00cc998b;
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x58) + 8))))(this + 0x58 GEN_EDX_ARG,param_1);
  }
  pBVar1 = *(undefined * PTR32 *)(this + 0xc);
  if (pBVar1 == (undefined *)0x0) {
    pBVar1 = this;
  }
  for (this_01 = (undefined *)F_00d2ff90(pBVar1 + 0xb4 GEN_EDX_ARG,0); this_01 != (undefined *)0x0;
      this_01 = (undefined *)F_00d2ff90(pBVar1 + 0xb4 GEN_EDX_ARG,this_01)) {
    uVar4 = F_00cbcc20(this_01 GEN_EDX_ARG);
    if (uVar4 == *(uint *)(this + 4)) {
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x34) + 0x10))))(this + 0x34);
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0x10))))(this + 0x10);
      extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x58) + 0x10))))(this + 0x58);
      F_00cbc8c0(this_01 GEN_EDX_ARG,((float)GEN_TOF((extraout_ST0_01 *
                                  (float10)(double)(extraout_ST0_00 * (float10)(double)extraout_ST0)
                                  ))));
    }
  }
LAB_00cc998b: ;
  if (this[0xdc] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0xc4));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf3 */
GEN_FRAME uint GEN_THISCALL F_00cc99b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc99b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this;
  LPCRITICAL_SECTION extraout_EAX = 0;
  LPCRITICAL_SECTION lpCriticalSection;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  if (param_3 != 0) {
    uVar2 = F_00cccd90(param_1 + 0x10 GEN_EDX_FWD,param_2,param_3);
    return uVar2;
  }
  F_00cccbd0(param_1 + 0x10 GEN_EDX_ARG,param_2);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc4);
  *(undefined1 *)(param_1 + 0xdc) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar1 = param_1;
  }
  for (this = (undefined *)F_00d2ff90(iVar1 + 0xb4 GEN_EDX_ARG,0); this != (undefined *)0x0;
      this = (undefined *)F_00d2ff90(iVar1 + 0xb4 GEN_EDX_ARG,this)) {
    uVar2 = F_00cbcc20(this GEN_EDX_ARG);
    if (uVar2 == *(uint *)(param_1 + 4)) {
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x10))))(param_1 + 0x34);
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))))(param_1 + 0x10);
      extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x58) + 0x10))))(param_1 + 0x58);
      F_00cbc8c0(this GEN_EDX_ARG,((float)GEN_TOF((extraout_ST0_01 *
                               (float10)(double)(extraout_ST0_00 * (float10)(double)extraout_ST0)))));
    }
  }
  if (*(char *)(param_1 + 0xdc) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    lpCriticalSection = extraout_EAX;
  }
  return (uint)lpCriticalSection;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00cc9aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pBVar1;
  undefined * this_00;
  uint uVar2;
  
  this[0xdc] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0xc4));
  pBVar1 = this;
  if (*(undefined * PTR32 *)(this + 0xc) != (undefined *)0x0) {
    pBVar1 = *(undefined * PTR32 *)(this + 0xc);
  }
  for (this_00 = (undefined *)F_00d2ff90(pBVar1 + 0xb4 GEN_EDX_ARG,0); this_00 != (undefined *)0x0;
      this_00 = (undefined *)F_00d2ff90(pBVar1 + 0xb4 GEN_EDX_ARG,this_00)) {
    uVar2 = F_00cbcc20(this_00 GEN_EDX_ARG);
    if (uVar2 == *(uint *)(this + 4)) {
      F_00cbdbf0(this_00 GEN_EDX_ARG,param_1);
    }
  }
  this[0xe4] = (undefined1)0x0;
  if (this[0xdc] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0xc4));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00cc9b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc9b30u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * pBVar1;
  undefined * this_00;
  uint uVar2;
  
  if (((*(undefined * PTR32 *)&gen_args[0])[0xe5] == (undefined1)0x0) || ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 0)) != (undefined1)0x0)) {
    (*(undefined * PTR32 *)&gen_args[0])[0xdc] = (undefined1)0x1;
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((*(undefined * PTR32 *)&gen_args[0]) + 0xc4));
    pBVar1 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
    if (pBVar1 == (undefined *)0x0) {
      pBVar1 = (*(undefined * PTR32 *)&gen_args[0]);
    }
    for (this_00 = (undefined *)F_00d2ff90(pBVar1 + 0xb4 GEN_EDX_ARG,0); this_00 != (undefined *)0x0;
        this_00 = (undefined *)F_00d2ff90(pBVar1 + 0xb4 GEN_EDX_ARG,this_00)) {
      uVar2 = F_00cbcc20(this_00 GEN_EDX_ARG);
      if (uVar2 == *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
        F_00cbc120(this_00 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
      }
    }
    (*(undefined * PTR32 *)&gen_args[0])[0xe4] = (undefined1)0x1;
    (*(undefined * PTR32 *)&gen_args[0])[0xe5] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 0));
    if ((*(undefined * PTR32 *)&gen_args[0])[0xdc] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((*(undefined * PTR32 *)&gen_args[0]) + 0xc4));
    }
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00cc9bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pBVar1;
  undefined * this_00;
  uint uVar2;
  
  this[0xdc] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0xc4));
  pBVar1 = this;
  if (*(undefined * PTR32 *)(this + 0xc) != (undefined *)0x0) {
    pBVar1 = *(undefined * PTR32 *)(this + 0xc);
  }
  for (this_00 = (undefined *)F_00d2ff90(pBVar1 + 0xb4 GEN_EDX_ARG,0); this_00 != (undefined *)0x0;
      this_00 = (undefined *)F_00d2ff90(pBVar1 + 0xb4 GEN_EDX_ARG,this_00)) {
    uVar2 = F_00cbcc20(this_00 GEN_EDX_ARG);
    if (uVar2 == *(uint *)(this + 4)) {
      F_00cbc1a0(this_00 GEN_EDX_ARG,param_1);
    }
  }
  *(undefined2 *)(this + 0xe4) = 0;
  if (this[0xdc] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0xc4));
  }
  return 0;
}

/* ref: FUN_00cc9c60 */
GEN_FRAME uint GEN_THISCALL F_00cc9c60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc9c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc4);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x10)) = lpCriticalSection;
  *(undefined1 *)((int)this + 0xdc) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)this + 0xc) == 0) {
    (*(int *)(gen_frame + 0x18)) = (int)this + 0xb4;
  }
  else {
    (*(int *)(gen_frame + 0x18)) = *(int *)((int)this + 0xc) + 0xb4;
  }
  ((uint *)(gen_frame + 0x0))[0] = 0;
  ((uint *)(gen_frame + 0x0))[1] = 0xffffffff;
  ((uint *)(gen_frame + 0x0))[2] = 0;
  ((uint *)(gen_frame + 0x0))[3] = 0xffffffff;
  (*(int *)(gen_frame + 0x14)) = 0;
  for (this_00 = (undefined *)F_00d2ff90((*(int *)(gen_frame + 0x18)) GEN_EDX_ARG,0); this_00 != (undefined *)0x0;
      this_00 = (undefined *)F_00d2ff90((*(int *)(gen_frame + 0x18)) GEN_EDX_ARG,this_00)) {
    bVar1 = F_00cbc040(this_00 GEN_EDX_ARG);
    if (bVar1 != 0) {
      uVar2 = F_00cbbe00(this_00 GEN_EDX_ARG);
      bVar1 = F_00cbc290(this_00 GEN_EDX_ARG);
      uVar3 = (uint)bVar1;
      if (uVar2 < ((uint *)(gen_frame + 0x0))[(int)(uVar3 * 2 + 1)]) {
        ((uint *)(gen_frame + 0x0))[(int)(uVar3 * 2 + 1)] = uVar2;
        uVar2 = F_00cbbff0(this_00 GEN_EDX_ARG);
        ((uint *)(gen_frame + 0x0))[(int)(uVar3 * 2)] = uVar2;
      }
      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + uVar3;
      lpCriticalSection = (*(LPCRITICAL_SECTION *)(gen_frame + 0x10));
    }
  }
  uVar2 = ((uint *)(gen_frame + 0x0))[(int)((uint)((*(int *)(gen_frame + 0x14)) != 0) * 2)];
  if (*(char *)&(*(undefined * PTR32 *)(((char *)(lpCriticalSection) + (1) * 24))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar2;
}

/* ref: FUN_00cc9d30 */
GEN_FRAME uint GEN_THISCALL F_00cc9d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x820];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  undefined1 * puVar6;
  uint * puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x818)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x81c);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc4);
  *(undefined1 *)((int)this + 0xdc) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  pvVar3 = *(undefined * PTR32 *)((int)this + 0xc);
  if (pvVar3 == (undefined *)0x0) {
    pvVar3 = this;
  }
  iVar8 = (int)pvVar3 + 0xb4;
  (*(byte *)(gen_frame + 0x17)) = 0xff;
  pvVar3 = (undefined *)F_00d2ff90(iVar8 GEN_EDX_ARG,0);
  bVar1 = (*(byte *)(gen_frame + 0x17));
  while (pvVar3 != (undefined *)0x0) {
    bVar2 = F_00cbbe20(pvVar3 GEN_EDX_ARG);
    (*(byte *)(gen_frame + 0x17)) = bVar1;
    if ((bVar2 == 0) && (bVar2 = F_00cbd740(pvVar3 GEN_EDX_ARG), bVar2 < bVar1)) {
      (*(byte *)(gen_frame + 0x17)) = bVar2;
    }
    pvVar3 = (undefined *)F_00d2ff90(iVar8 GEN_EDX_ARG,pvVar3);
    bVar1 = (*(byte *)(gen_frame + 0x17));
  }
  puVar6 = ((undefined1 *)(gen_frame + 0x18));
  iVar9 = 0x7f;
  do {
    F_00cbbd70(puVar6 GEN_EDX_ARG);
    puVar6 = puVar6 + 0x10;
    iVar9 = iVar9 - 1;
  } while (-1 < iVar9);
  uVar10 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  pvVar3 = (undefined *)F_00d2ff90(iVar8 GEN_EDX_ARG,0);
  if (pvVar3 != (undefined *)0x0) {
    puVar6 = ((undefined1 *)(gen_frame + 0x18));
    do {
      bVar2 = F_00cbbe20(pvVar3 GEN_EDX_ARG);
      if (bVar2 == 0) {
        (*(uint *)(gen_frame + 0xc)) = uVar10;
        if (0x7f < uVar10) break;
        bVar2 = F_00cbd740(pvVar3 GEN_EDX_ARG);
        if (bVar1 == bVar2) {
          F_00cbbdc0(puVar6 GEN_EDX_ARG,pvVar3);
          uVar10 = uVar10 + 1;
          puVar6 = puVar6 + 0x10;
          if ((char)param_1 == '\0') {
            uVar10 = F_00cbbff0(pvVar3 GEN_EDX_ARG);
            puVar7 = &(*(uint *)(gen_frame + 0x818));
            iVar8 = 0x7f;
            do {
              puVar7 = puVar7 - 4;
              F_00cbbdb0(puVar7 GEN_EDX_ARG);
              iVar8 = iVar8 - 1;
            } while (-1 < iVar8);
            if (*(char *)((int)this + 0xdc) != '\0') {
              gen_imp_LeaveCriticalSection(lpCriticalSection);
            }
            F_00c47745((*(uint *)(gen_frame + 0x818)) ^ (uint)(uint)(gen_frame + 0x81c) GEN_EDX_ARG);
            return uVar10;
          }
        }
      }
      pvVar3 = (undefined *)F_00d2ff90(iVar8 GEN_EDX_ARG,pvVar3);
      (*(uint *)(gen_frame + 0xc)) = uVar10;
    } while (pvVar3 != (undefined *)0x0);
  }
  uVar10 = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  if ((*(uint *)(gen_frame + 0xc)) != 0) {
    do {
      uVar4 = F_00cbbe00(((undefined1 *)(gen_frame + 0x18)) + uVar10 * 0x10 GEN_EDX_ARG);
      uVar5 = F_00cbbff0(((undefined1 *)(gen_frame + 0x18)) + uVar10 * 0x10 GEN_EDX_ARG);
      if ((uVar10 == 0) || (uVar4 < (*(uint *)(gen_frame + 0x10)))) {
        (*(uint *)(gen_frame + 0x8)) = uVar5;
        (*(uint *)(gen_frame + 0x10)) = uVar4;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (*(uint *)(gen_frame + 0xc)));
  }
  puVar7 = &(*(uint *)(gen_frame + 0x818));
  iVar8 = 0x7f;
  do {
    puVar7 = puVar7 - 4;
    F_00cbbdb0(puVar7 GEN_EDX_ARG);
    iVar8 = iVar8 - 1;
  } while (-1 < iVar8);
  if (*(char *)((int)this + 0xdc) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  F_00c47745((*(uint *)(gen_frame + 0x818)) ^ (uint)(uint)(gen_frame + 0x81c) GEN_EDX_ARG);
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_00cc9f30 */
GEN_NOFRAME uint GEN_THISCALL F_00cc9f30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc9f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  uint extraout_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112a8c4));
  if (*(int *)((int)this + 0xc) == 0) {
    *(char *)((int)this + 0xb0) = *(char *)((int)this + 0x94);
    if (*(char *)((int)this + 0x94) != '\0') {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
    }
    if (*(int *)((int)this + 0x80) != 0) {
      F_00406810(*(int *)((int)this + 0x80));
      *(undefined4 *)((int)this + 0x80) = 0;
    }
    *(undefined4 *)((int)this + 0x84) = 0;
    if (*(char *)((int)this + 0xb0) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
    }
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc4));
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x98);
  *(char *)((int)this + 0xb0) = *(char *)((int)this + 0x94);
  if (*(char *)((int)this + 0x94) != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)((int)this + 0x80) != 0) {
    F_00406810(*(int *)((int)this + 0x80));
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  *(undefined4 *)((int)this + 0x84) = 0;
  if (*(char *)((int)this + 0xb0) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  gen_imp_DeleteCriticalSection(lpCriticalSection);
  F_00cccb40((int)this + 0x58 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x34 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x10 GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00cca000 */
GEN_FRAME uint F_00cca000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcca000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00cca0a0 */
GEN_FRAME uint GEN_THISCALL F_00cca0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcca0a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112a8c4));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  F_00cccb10((int)this + 0x10 GEN_EDX_FWD,(float)(float10)1);
  F_00cccb10((int)this + 0x34 GEN_EDX_ARG,(float)(float10)1);
  F_00cccb10((int)this + 0x58 GEN_EDX_ARG,(float)(float10)1);
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined1 *)((int)this + 0x94) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  *(undefined1 *)((int)this + 0xb0) = 1;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc4));
  *(undefined1 *)((int)this + 0xdc) = 1;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined2 *)((int)this + 0xe4) = 0;
  *(undefined1 *)((int)this + 0xe6) = 0;
  iVar1 = (int)*param_2;
  if (iVar1 != 0) {
    if (iVar1 < 0) {
      uVar2 = F_00cbf660(-iVar1);
      *(uint *)((int)this + 0xc) = uVar2;
      if (uVar2 == 0) {
        if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
          REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcca000));
        }
        ((code *)REFG(gen_code32, 0x15d861c))("refBus_ != NULL","Not Find Referens Bus!!","Bus.cpp",0x3d,
                        "SQEX::CDev::Engine::Sd::Driver::Bus::Bus");
        return (uint)this;
      }
    }
    else {
      (*(char * PTR32 *)(gen_frame + 0x4)) = "CDev.Engine.Sd.SoundDriver";
      (*(undefined4 *)(gen_frame + 0x8)) = 0x10;
      F_00cc6930((undefined *)((int)this + 0x80) GEN_EDX_ARG,0x1c,iVar1 * 2,&(*(char * PTR32 *)(gen_frame + 0x4)),0x10,1);
      F_00d2fdb0((int)this + 0xb4 GEN_EDX_ARG,0x10);
    }
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf0 */
GEN_FRAME uint GEN_THISCALL F_00cca220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcca220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cc9f30(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cca300 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cca300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcca300u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 0;
  in_ecx[0x12] = 0;
  in_ecx[0x13] = 0;
  in_ecx[0x14] = 0;
  in_ecx[0x15] = 0;
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1b] = 0;
  in_ecx[0x1c] = 0;
  in_ecx[0x1d] = 0;
  in_ecx[0x1e] = 0;
  in_ecx[0x1f] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  in_ecx[0x23] = 0;
  in_ecx[0x24] = 0;
  in_ecx[0x25] = 0;
  in_ecx[0x26] = 0;
  in_ecx[0x27] = 0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  return 0;
}

/* ref: FUN_00cca3f0 */
GEN_FRAME uint GEN_THISCALL F_00cca3f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcca3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar1 = 0;
  iVar3 = param_2;
  if ((int)(uint)*(byte *)((int)this + 0x42) <= param_2) {
    iVar3 = 0;
    uVar1 = 0xffffffff;
  }
  puVar4 = (undefined4 *)(iVar3 * 0x7c + 0x44 + (int)this);
  puVar5 = param_1;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return uVar1;
}

/* ref: FUN_00cca420 */
GEN_FRAME uint GEN_THISCALL F_00cca420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcca420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  if ((int)(uint)*(byte *)((int)this + 1) <= param_2) {
    *param_1 = 0x10;
    return 0xffffffff;
  }
  *param_1 = *(undefined4 *)((int)this + param_2 * 4 + 2);
  return 0;
}

/* ref: FUN_00cca460 */
GEN_FRAME uint GEN_THISCALL F_00cca460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcca460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  uVar1 = 0;
  if (param_2 < (int)(uint)*(byte *)((int)this + 0x614)) {
    puVar3 = (undefined4 *)(param_2 * 0xa0 + 0x618 + (int)this);
  }
  else {
    F_00cca300(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD);
    uVar1 = 0xffffffff;
    puVar3 = ((undefined4 *)(gen_frame + 0x8));
  }
  puVar4 = param_1;
  for (iVar2 = 0x28; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00cca4d0 */
GEN_FRAME uint GEN_THISCALL F_00cca4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcca4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar1;
  uVar2 = 0;
  if ((param_2 < 0) || ((int)(uint)*(byte *)((int)this + 0xb18) <= param_2)) {
    uVar2 = 0xffffffff;
    (*(undefined2 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0xa)) = 0;
    (*(undefined2 *)(gen_frame + 0xe)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    puVar4 = (undefined4 *)&(*(undefined2 *)(gen_frame + 0x8));
  }
  else {
    puVar4 = (undefined4 *)(param_2 * 0x20 + 0xb1c + (int)this);
  }
  puVar5 = param_1;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_FWD);
  return uVar2;
}

/* ref: FUN_00cca550 */
GEN_FRAME uint GEN_THISCALL F_00cca550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcca550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int iVar1;
  uint local_18;
  
  if ((-1 < (*(int *)&gen_a2)) && ((*(int *)&gen_a2) < (int)(uint)*(byte *)((int)this + 0xd1c))) {
    iVar1 = (*(int *)&gen_a2) * 5 + 0x348;
    *param_1 = *(uint *)((int)this + iVar1 * 4);
    param_1[1] = *(uint *)((int)this + iVar1 * 4 + 4);
    param_1[2] = *(uint *)((int)this + iVar1 * 4 + 8);
    param_1[3] = *(uint *)((int)this + iVar1 * 4 + 0xc);
    param_1[4] = *(uint *)((int)this + iVar1 * 4 + 0x10);
    return 0;
  }
  local_18 = local_18 & 0xffffff00;
  *param_1 = local_18;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return 0xffffffff;
}

/* ref: FUN_00cca5c0 */
GEN_FRAME byte GEN_THISCALL F_00cca5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcca5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  
  ((undefined4 *)(gen_frame + 0xc))[0] = 0;
  ((undefined4 *)(gen_frame + 0xc))[1] = 0;
  ((undefined4 *)(gen_frame + 0xc))[2] = 0;
  ((undefined4 *)(gen_frame + 0xc))[3] = 0;
  ((char *)(gen_frame + 0x8))[0] = '\0';
  uVar1 = F_00cca550(this GEN_EDX_FWD,((char *)(gen_frame + 0x8)),param_1);
  if ((uVar1 == 0) && (iVar2 = 0, 0 < ((char *)(gen_frame + 0x8))[0])) {
    do {
      if (*(char *)((undefined4 *)(gen_frame + 0xc))[(int)(iVar2)] == '\x04') {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < ((char *)(gen_frame + 0x8))[0]);
  }
  return 0;
}

/* ref: FUN_00cca610 */
GEN_FRAME byte GEN_THISCALL F_00cca610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcca610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  int iVar3;
  char * pcVar4;
  
  ((int *)(gen_frame + 0x8))[0] = 0;
  ((int *)(gen_frame + 0x8))[1] = 0;
  ((int *)(gen_frame + 0x8))[2] = 0;
  ((int *)(gen_frame + 0x8))[3] = 0;
  ((char *)(gen_frame + 0x4))[0] = '\0';
  uVar2 = F_00cca550(this GEN_EDX_FWD,((char *)(gen_frame + 0x4)),param_1);
  if ((uVar2 == 0) && (iVar3 = 0, 0 < ((char *)(gen_frame + 0x4))[0])) {
    do {
      if (*(char *)((int *)(gen_frame + 0x8))[(int)(iVar3)] == '\x04') {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < ((char *)(gen_frame + 0x4))[0]);
  }
  ((int *)(gen_frame + 0x8))[4] = 0;
  if (*(char *)((int)this + 0xb18) != '\0') {
    pcVar4 = (char *)((int)this + 0xb1d);
    do {
      if ((pcVar4[-1] == param_1) && (iVar3 = 0, '\0' < *pcVar4)) {
        do {
          bVar1 = F_00cca610(this GEN_EDX_ARG,(int)pcVar4[iVar3 + 1]);
          if (bVar1 != 0) {
            return 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *pcVar4);
      }
      iVar3 = ((int *)(gen_frame + 0x8))[4] + 1;
      pcVar4 = pcVar4 + 0x20;
      ((int *)(gen_frame + 0x8))[4] = iVar3;
    } while (iVar3 < (int)(uint)*(byte *)((int)this + 0xb18));
  }
  return 0;
}

/* ref: FUN_00cca6d0 */
GEN_FRAME uint GEN_THISCALL F_00cca6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcca6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0xe78) = *(undefined4 *)(param_1 + 4);
  return 0;
}

/* ref: FUN_00cca6f0 */
GEN_FRAME uint GEN_THISCALL F_00cca6f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcca6f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  if (*(char *)((int)this + 0xd1c) != '\0') {
    piVar3 = (int *)((int)this + 0xd20);
    do {
      iVar4 = 0;
      piVar2 = piVar3;
      if ('\0' < (char)*piVar3) {
        do {
          iVar1 = piVar2[1];
          if (iVar1 != 0) {
            F_00406810(iVar1);
          }
          iVar4 = iVar4 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar4 < (char)*piVar3);
      }
      local_8 = local_8 + 1;
      piVar3 = piVar3 + 5;
    } while (local_8 < (int)(uint)*(byte *)((int)this + 0xd1c));
  }
  *(undefined2 *)this = 0;
  *(undefined1 *)((int)this + 0x42) = 0;
  *(undefined1 *)((int)this + 0x614) = 0;
  *(undefined1 *)((int)this + 0xb18) = 0;
  *(undefined1 *)((int)this + 0xd1c) = 0;
  *(undefined4 *)((int)this + 0xe74) = 0;
  *(undefined4 *)((int)this + 0xe78) = 0;
  return 0;
}

/* ref: FUN_00cca790 */
GEN_FRAME uint GEN_THISCALL F_00cca790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcca790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  char * pcVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  short * psVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  F_00cca6f0(this GEN_EDX_FWD);
  *(undefined1 *)((int)this + 1) = 0;
  *(undefined4 *)((int)this + 0xe7c) = 1;
  *(undefined4 *)((int)this + 2) = 4;
  *(char *)((int)this + 1) = *(char *)((int)this + 1) + '\x01';
  psVar5 = (short *)((int)this + 2);
  *((undefined4 *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 1) * 4 + 2))) = 0x10020;
  *(char *)((int)this + 1) = *(char *)((int)this + 1) + '\x01';
  *((undefined4 *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 1) * 4 + 2))) = 4;
  pcVar1 = (char *)((int)this + 1);
  *pcVar1 = *pcVar1 + '\x01';
  *(undefined4 *)((int)this + 0xe74) = 0;
  iVar2 = 0;
  if (*pcVar1 != '\0') {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + *psVar5;
      *(int *)((int)this + 0xe74) = iVar4;
      iVar2 = iVar2 + 1;
      psVar5 = psVar5 + 2;
    } while (iVar2 < (int)(uint)*(byte *)((int)this + 1));
  }
  ((undefined4 *)(gen_frame + 0x2c))[1] = 0;
  *(undefined1 *)((int)this + 0x42) = 0;
  ((undefined4 *)(gen_frame + 0x2c))[0] = 0;
  ((undefined4 *)(gen_frame + 0x2c))[2] = 0;
  ((undefined4 *)(gen_frame + 0x2c))[3] = 0;
  ((undefined4 *)(gen_frame + 0x2c))[5] = 0;
  ((undefined4 *)(gen_frame + 0x2c))[6] = 0;
  ((undefined4 *)(gen_frame + 0x2c))[4] = 0;
  puVar3 = ((undefined4 *)(gen_frame + 0x58));
  iVar2 = 4;
  do {
    *(undefined2 *)(puVar3 - 4) = 0;
    puVar3[-3] = 0;
    puVar3[-2] = 0;
    *(undefined2 *)((int)puVar3 - 0xe) = 0;
    *(undefined2 *)(puVar3 - 1) = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined2 *)((int)puVar3 - 2) = 0;
    puVar3 = puVar3 + 6;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  puVar6 = ((undefined4 *)(gen_frame + 0x2c));
  puVar7 = (undefined4 *)((int)this + 0x44);
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(char *)((int)this + 0x42) = *(char *)((int)this + 0x42) + '\x01';
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)) & 0xffffff00;
  *(undefined4 *)((int)this + 0xd20) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12));
  *(undefined4 *)((int)this + 0xd24) = 0;
  *(undefined4 *)((int)this + 0xd28) = 0;
  *(undefined4 *)((int)this + 0xd2c) = 0;
  *(undefined1 *)((int)this + 0x614) = 0;
  *(undefined1 *)((int)this + 0xb18) = 0;
  *(undefined1 *)((int)this + 0xd1c) = 1;
  *(undefined4 *)((int)this + 0xd30) = 0;
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return (uint)puVar3;
}

/* ref: FUN_00cca900 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cca900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcca900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0xe78) = 0x40;
  return;
}

/* ref: FUN_00cca910 */
GEN_FRAME uint GEN_THISCALL F_00cca910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcca910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  uint * puVar6;
  short * psVar7;
  undefined4 * puVar8;
  int iVar9;
  uint * puVar10;
  char * pcVar11;
  undefined4 * puVar12;
  uint * puVar13;
  undefined4 uVar14;
  char * PTR32 * ppcVar15;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(undefined * PTR32 *)(gen_frame + 0x60)) = this;
  (*(int * PTR32 *)(gen_frame + 0x3c)) = param_1;
  (*(uint *)(gen_frame + 0x84)) = param_1[3];
  if ((*param_1 != 0x46434453) || (param_1[1] != 0)) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_FWD);
    return 0xffffffff;
  }
  (*(int *)(gen_frame + 0x4c)) = 0;
  (*(uint *)(gen_frame + 0x44)) = param_1[2] & 0xffU;
  if ((param_1[2] & 0xffU) != 0) {
    do {
      iVar5 = (*(int * PTR32 *)(gen_frame + 0x3c))[(*(int *)(gen_frame + 0x4c)) * 4 + 4];
      puVar6 = ((uint *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x3c))[(*(int *)(gen_frame + 0x4c)) * 4 + 5] + (int)(*(int * PTR32 *)(gen_frame + 0x3c)))));
      (*(uint *)(gen_frame + 0x80)) = (*(int * PTR32 *)(gen_frame + 0x3c))[(*(int *)(gen_frame + 0x4c)) * 4 + 6];
      (*(uint *)(gen_frame + 0x84)) = (*(int * PTR32 *)(gen_frame + 0x3c))[(*(int *)(gen_frame + 0x4c)) * 4 + 7];
      (*(uint * PTR32 *)(gen_frame + 0x5c)) = puVar6;
      if (iVar5 == 0x20435445) {
        (*(uint *)(gen_frame + 0x7c)) = puVar6[1];
        (*(uint *)(gen_frame + 0x80)) = puVar6[2];
        (*(uint *)(gen_frame + 0x84)) = puVar6[3];
        *(uint *)((int)this + 0xe7c) = *puVar6 & 0xff;
      }
      else if (iVar5 == 0x20535542) {
        uVar2 = *puVar6;
        (*(uint *)(gen_frame + 0x7c)) = puVar6[1];
        (*(uint *)(gen_frame + 0x80)) = puVar6[2];
        (*(uint *)(gen_frame + 0x84)) = puVar6[3];
        *(undefined1 *)((int)this + 1) = 0;
        if ((byte)uVar2 != 0) {
          do {
            bVar1 = *(byte *)((int)this + 1);
            if (0xf < bVar1) break;
            *(uint *)((int)this + (uint)bVar1 * 4 + 2) = puVar6[bVar1 + 4];
            *(char *)((int)this + 1) = *(char *)((int)this + 1) + '\x01';
          } while (*(byte *)((int)this + 1) < (byte)uVar2);
        }
        iVar5 = 0;
        iVar9 = 0;
        *(undefined4 *)((int)this + 0xe74) = 0;
        if (*(char *)((int)this + 1) != '\0') {
          psVar7 = (short *)((int)this + 2);
          do {
            iVar5 = iVar5 + *psVar7;
            *(int *)((int)this + 0xe74) = iVar5;
            iVar9 = iVar9 + 1;
            psVar7 = psVar7 + 2;
          } while (iVar9 < (int)(uint)*(byte *)((int)this + 1));
        }
      }
      else if (iVar5 == 0x52545441) {
        uVar2 = *puVar6;
        (*(uint *)(gen_frame + 0x7c)) = puVar6[1];
        (*(uint *)(gen_frame + 0x80)) = puVar6[2];
        (*(uint *)(gen_frame + 0x84)) = puVar6[3];
        *(undefined1 *)((int)this + 0x42) = 1;
        if ((byte)uVar2 != 0) {
          do {
            bVar1 = *(byte *)((int)this + 0x42);
            if (0xb < bVar1) break;
            puVar10 = puVar6 + (uint)bVar1 * 0x1f - 0x1b;
            puVar13 = (uint *)((int)this + (uint)bVar1 * 0x7c + 0x44);
            for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 - 1) {
              *puVar13 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            }
            iVar5 = 4;
            do {
              iVar5 = iVar5 - 1;
            } while (iVar5 != 0);
            *(char *)((int)this + 0x42) = *(char *)((int)this + 0x42) + '\x01';
          } while (*(byte *)((int)this + 0x42) <= (byte)uVar2);
        }
      }
      else if (iVar5 == 0x5243414d) {
        uVar2 = *puVar6;
        *(undefined1 *)((int)this + 0x614) = 0;
        if ((byte)uVar2 != 0) {
          do {
            bVar1 = *(byte *)((int)this + 0x614);
            if (7 < bVar1) break;
            puVar10 = puVar6 + (uint)bVar1 * 0x28 + 4;
            puVar13 = (uint *)((int)this + (uint)bVar1 * 0xa0 + 0x618);
            for (iVar5 = 0x28; iVar5 != 0; iVar5 = iVar5 - 1) {
              *puVar13 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            }
            iVar5 = (uint)*(byte *)((int)this + 0x614) * 0xa0;
            iVar9 = 0;
            if ('\0' < *(char *)((int)this + iVar5 + 0x619)) {
              do {
                iVar9 = iVar9 + 1;
              } while (iVar9 < *(char *)((int)this + iVar5 + 0x619));
            }
            *(char *)((int)this + 0x614) = *(char *)((int)this + 0x614) + '\x01';
          } while (*(byte *)((int)this + 0x614) < (byte)uVar2);
        }
      }
      else if (iVar5 == 0x54554f52) {
        uVar2 = *puVar6;
        (*(uint *)(gen_frame + 0x7c)) = puVar6[1];
        (*(uint *)(gen_frame + 0x80)) = puVar6[2];
        (*(uint *)(gen_frame + 0x84)) = puVar6[3];
        *(undefined1 *)((int)this + 0xb18) = 0;
        if ((byte)uVar2 != 0) {
          do {
            puVar10 = puVar6 + (uint)*(byte *)((int)this + 0xb18) * 8 + 4;
            puVar13 = ((uint *)GEN_TOP(((uint)*(byte *)((int)this + 0xb18) * 0x20 + 0xb1c + (int)this)));
            for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 - 1) {
              *puVar13 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            }
            *(char *)((int)this + 0xb18) = *(char *)((int)this + 0xb18) + '\x01';
          } while (*(byte *)((int)this + 0xb18) < (byte)uVar2);
        }
        iVar5 = 0;
        if (*(char *)((int)this + 0xb18) != '\0') {
          do {
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)(uint)*(byte *)((int)this + 0xb18));
        }
      }
      else if (iVar5 == 0x54434645) {
        uVar2 = *puVar6;
        (*(int *)(gen_frame + 0x54)) = 0x10;
        *(undefined1 *)((int)this + 0xd1c) = 0;
        if ((byte)uVar2 != 0) {
          do {
            (*(undefined4 *)(gen_frame + 0x6c)) = *(undefined4 *)((*(int *)(gen_frame + 0x54)) + 8 + (int)puVar6);
            (*(undefined4 *)(gen_frame + 0x70)) = *(undefined4 *)((*(int *)(gen_frame + 0x54)) + 0xc + (int)puVar6);
            (*(int *)(gen_frame + 0x64)) = *(int *)((*(int *)(gen_frame + 0x54)) + (int)puVar6);
            uVar3 = *(uint *)((*(int *)(gen_frame + 0x54)) + 4 + (int)puVar6);
            pcVar11 = ((char *)GEN_TOP(((int)this + ((uint)*(byte *)((int)this + 0xd1c) * 5 + 0x348) * 4)));
            (*(uint *)(gen_frame + 0x68)) = uVar3;
            (*(char * PTR32 *)(gen_frame + 0x40)) = pcVar11;
            *pcVar11 = (char)uVar3;
            puVar8 = (undefined4 *)((int)puVar6 + (*(int *)(gen_frame + 0x54)) + 0x10);
            iVar5 = (*(int *)(gen_frame + 0x54));
            if ((char)uVar3 != '\0') {
              pcVar11 = pcVar11 + 4;
              (*(undefined1 * PTR32 *)(gen_frame + 0x58)) = (undefined1 *)((int)&(*(uint *)(gen_frame + 0x68)) + 1);
              (*(char * PTR32 *)(gen_frame + 0x48)) = pcVar11;
              (*(uint *)(gen_frame + 0x50)) = uVar3 & 0xff;
              do {
                (*(char * PTR32 *)(gen_frame + 0x48)) = pcVar11;
                puVar12 = puVar8;
                switch((unsigned int)(uintptr_t)(*(*(undefined1 * PTR32 *)(gen_frame + 0x58)))) {
                case 1: ;
                  (*(char * PTR32 *)(gen_frame + 0x34)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0x38)) = 0x10;
                  puVar4 = (undefined4 *)F_00cc1070(0x30,&(*(char * PTR32 *)(gen_frame + 0x34)));
                  *(undefined4 * PTR32 *)pcVar11 = puVar4;
                  iVar5 = 0xc;
                  puVar8 = puVar8 + 0xc;
                  goto code_r0x00ccad94;
                case 2: ;
                  ppcVar15 = &(*(char * PTR32 *)(gen_frame + 0x24));
                  (*(char * PTR32 *)(gen_frame + 0x24)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0x28)) = 0x10;
                  uVar14 = 0x20;
                  break;
                case 3: ;
                  (*(char * PTR32 *)(gen_frame + 0x14)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0x18)) = 0x10;
                  puVar4 = (undefined4 *)F_00cc1070(0x50,&(*(char * PTR32 *)(gen_frame + 0x14)));
                  *(undefined4 * PTR32 *)pcVar11 = puVar4;
                  iVar5 = 0x14;
                  puVar8 = puVar8 + 0x24;
                  goto code_r0x00ccad94;
                case 4: ;
                  ppcVar15 = &(*(char * PTR32 *)(gen_frame + 0xc));
                  (*(char * PTR32 *)(gen_frame + 0xc)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0x10)) = 0x10;
                  uVar14 = 0x20;
                  break;
                case 5: ;
                  ppcVar15 = &(*(char * PTR32 *)(gen_frame + 0x4));
                  (*(char * PTR32 *)(gen_frame + 0x4)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0x8)) = 0x10;
                  uVar14 = 0x20;
                  break;
                case 6: ;
                  (*(char * PTR32 *)(gen_frame + 0x1c)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0x20)) = 0x10;
                  puVar4 = (undefined4 *)F_00cc1070(0xa0,&(*(char * PTR32 *)(gen_frame + 0x1c)));
                  *(undefined4 * PTR32 *)pcVar11 = puVar4;
                  iVar5 = 0x28;
                  puVar8 = puVar8 + 0x28;
                  goto code_r0x00ccad94;
                case 7: ;
                  ppcVar15 = &(*(char * PTR32 *)(gen_frame + 0x2c));
                  (*(char * PTR32 *)(gen_frame + 0x2c)) = "CDev.Engine.Sd.SoundDriver";
                  (*(undefined4 *)(gen_frame + 0x30)) = 0x10;
                  uVar14 = 0x50;
                  break;
                default: ;
                  goto switchD_00ccac82_default;
                }
                puVar4 = (undefined4 *)F_00cc1070(uVar14,ppcVar15);
                *(undefined4 * PTR32 *)pcVar11 = puVar4;
                iVar5 = 8;
                puVar8 = puVar8 + 8;
code_r0x00ccad94: ;
                for (; this = (*(undefined * PTR32 *)(gen_frame + 0x60)), puVar6 = (*(uint * PTR32 *)(gen_frame + 0x5c)), iVar5 != 0; iVar5 = iVar5 - 1) {
                  *puVar4 = *puVar12;
                  puVar12 = puVar12 + 1;
                  puVar4 = puVar4 + 1;
                }
switchD_00ccac82_default: ;
                (*(undefined1 * PTR32 *)(gen_frame + 0x58)) = (*(undefined1 * PTR32 *)(gen_frame + 0x58)) + 1;
                pcVar11 = (*(char * PTR32 *)(gen_frame + 0x48)) + 4;
                uVar3 = (*(uint *)(gen_frame + 0x50)) - 1;
                (*(uint *)(gen_frame + 0x50)) = uVar3;
                (*(char * PTR32 *)(gen_frame + 0x48)) = pcVar11;
                iVar5 = (*(int *)(gen_frame + 0x54));
              } while (uVar3 != 0);
            }
            iVar9 = 4;
            do {
              iVar9 = iVar9 - 1;
            } while (iVar9 != 0);
            *(char *)((int)this + 0xd1c) = *(char *)((int)this + 0xd1c) + '\x01';
            (*(int *)(gen_frame + 0x54)) = iVar5 + 0x10 + (*(int *)(gen_frame + 0x64));
          } while (*(byte *)((int)this + 0xd1c) < (byte)uVar2);
        }
        iVar5 = 0;
        if (*(char *)((int)this + 0xd1c) != '\0') {
          bVar1 = *(byte *)((int)this + 0xd1c);
          do {
            (*(undefined4 *)(gen_frame + 0x78)) = 0;
            (*(uint *)(gen_frame + 0x7c)) = 0;
            (*(uint *)(gen_frame + 0x80)) = 0;
            (*(uint *)(gen_frame + 0x84)) = 0;
            ((char *)(gen_frame + 0x74))[0] = '\0';
            F_00cca550(this GEN_EDX_ARG,((char *)(gen_frame + 0x74)),iVar5);
            if ('\0' < ((char *)(gen_frame + 0x74))[0]) {
              iVar9 = 0;
              if (0 < ((char *)(gen_frame + 0x74))[0]) {
                do {
                  iVar9 = iVar9 + 1;
                } while (iVar9 < ((char *)(gen_frame + 0x74))[0]);
              }
            }
            iVar5 = iVar5 + 1;
            this = (*(undefined * PTR32 *)(gen_frame + 0x60));
          } while (iVar5 < (int)(uint)bVar1);
        }
      }
      iVar5 = (*(int *)(gen_frame + 0x4c)) + 1;
      (*(int *)(gen_frame + 0x4c)) = iVar5;
    } while (iVar5 < (int)(*(uint *)(gen_frame + 0x44)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00ccaea0 */
GEN_FRAME unsigned int GEN_THISCALL F_00ccaea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xccaea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  float10 extraout_ST0;
  int iVar6;
  int iVar7;
  
  (*(int *)(gen_frame + 0x0)) = 0;
  if (*(char *)((int)this + 0x614) != '\0') {
    pcVar4 = (char *)((int)this + 0x619);
    do {
      iVar5 = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
      if (*pcVar4 < '\x01') {
LAB_00ccaf2a: ;
        if (pcVar4[-1] == '\x01') {
          iVar5 = *param_1;
          extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(iVar5 + 0x110))(param_1,0);
          ((code *)*(gen_code32 *)(iVar5 + 0x38))
                    (param_1,(undefined4)
                             gen_fl2bits(((float)GEN_TOF((extraout_ST0 * (float10)*(float *)(pcVar4 + 0xf))))))
          ;
        }
      }
      else {
        do {
          piVar1 = (int *)(pcVar4 + iVar5 * 0x10 + 0x1f);
          if (*piVar1 == 1) {
            iVar7 = piVar1[1];
            iVar6 = piVar1[2];
            uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x118))(param_1 GEN_EDX_ARG);
            bVar2 = F_00ccb120(uVar3,iVar6,iVar7);
          }
          else {
            bVar2 = 1;
          }
          (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar2);
          if (iVar5 != 0) {
            bVar2 = F_00ccb1d0((*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),piVar1[3]);
          }
          iVar5 = iVar5 + 1;
          (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar2);
        } while (iVar5 < *pcVar4);
        if (bVar2 != 0) goto LAB_00ccaf2a;
      }
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      pcVar4 = pcVar4 + 0xa0;
    } while ((*(int *)(gen_frame + 0x0)) < (int)(uint)*(byte *)((int)this + 0x614));
  }
  return;
}

/* ref: FUN_00ccaf80 */
GEN_FRAME uint GEN_THISCALL F_00ccaf80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xccaf80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined2 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  int in_ecx;
  undefined1 * puVar5;
  int local_8;
  
  puVar2 = (undefined2 *)((int)this + 2);
  iVar4 = 0xf;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  puVar5 = (undefined1 *)((int)this + 0x44);
  local_8 = 0xb;
  puVar3 = (undefined4 *)((int)this + 0x58);
  do {
    *puVar5 = 0;
    *(undefined1 *)((int)puVar3 - 0x13) = 0;
    *(undefined4 *)((int)puVar3 - 0x12) = 0;
    *(undefined2 *)((int)puVar3 - 0xe) = 0;
    puVar3[-3] = 0;
    puVar3[-2] = 0;
    *(undefined2 *)(puVar3 - 1) = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined2 *)((int)puVar3 - 2) = 0;
    iVar4 = 4;
    puVar1 = puVar3;
    do {
      *(undefined2 *)(puVar1 + 2) = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *(undefined2 *)((int)puVar1 + 10) = 0;
      *(undefined2 *)(puVar1 + 5) = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *(undefined2 *)((int)puVar1 + 0x16) = 0;
      iVar4 = iVar4 - 1;
      puVar1 = puVar1 + 6;
    } while (iVar4 != 0);
    puVar5 = puVar5 + 0x7c;
    puVar3 = puVar3 + 0x1f;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  in_ecx = (int)this + 0x618;
  iVar4 = 7;
  do {
    F_00cca300(in_ecx GEN_EDX_FWD);
    in_ecx = in_ecx + 0xa0;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  puVar2 = (undefined2 *)((int)this + 0xb1c);
  iVar4 = 0xf;
  do {
    *puVar2 = 0;
    *(undefined1 *)((int)puVar2 + 7) = 0;
    *(undefined4 *)(puVar2 + 0xe) = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined1 *)(puVar2 + 3) = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)(puVar2 + 6) = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 10) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    puVar2 = puVar2 + 0x10;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  puVar5 = (undefined1 *)((int)this + 0xd20);
  iVar4 = 0x10;
  do {
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined4 *)(puVar5 + 8) = 0;
    *(undefined4 *)(puVar5 + 0xc) = 0;
    *(undefined4 *)(puVar5 + 0x10) = 0;
    puVar5 = puVar5 + 0x14;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  *(undefined1 *)this = 0;
  F_00cca790(this GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0xe78) = 0x40;
  return (uint)this;
}

/* ref: FUN_00ccb0b0 */
GEN_FRAME ushort F_00ccb0b0(unsigned int gen_a0)
{
  GEN_ENTER(0xccb0b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (ushort)param_1;
}

/* ref: FUN_00ccb0c0 */
GEN_FRAME ushort F_00ccb0c0(unsigned int gen_a0)
{
  GEN_ENTER(0xccb0c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (ushort)param_1;
}

/* ref: FUN_00ccb0d0 */
GEN_FRAME uint F_00ccb0d0(unsigned int gen_a0)
{
  GEN_ENTER(0xccb0d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ccb0e0 */
GEN_FRAME float10 F_00ccb0e0(float gen_a0)
{
  GEN_ENTER(0xccb0e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)param_1;
}

/* ref: FUN_00ccb0f0 */
GEN_FRAME uint F_00ccb0f0(unsigned int gen_a0)
{
  GEN_ENTER(0xccb0f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ccb100 */
GEN_FRAME byte F_00ccb100(unsigned int gen_a0)
{
  GEN_ENTER(0xccb100u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (byte)param_1;
}

/* ref: FUN_00ccb110 */
GEN_FRAME byte F_00ccb110(unsigned int gen_a0)
{
  GEN_ENTER(0xccb110u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (byte)param_1;
}

/* ref: FUN_00ccb120 */
GEN_FRAME byte F_00ccb120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccb120u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 1: ;
    return param_2 < param_1;
  case 2: ;
    return param_2 <= param_1;
  case 3: ;
    return param_1 < param_2;
  case 4: ;
    return param_1 <= param_2;
  case 5: ;
    return param_1 == param_2;
  case 6: ;
    return param_1 != param_2;
  case 7: ;
    if (param_1 == 0) {
      return 0;
    }
    break;
  case 8: ;
    if (param_1 != 0) {
      return 1;
    }
    break;
  default: ;
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ccb1d0 */
GEN_FRAME byte F_00ccb1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccb1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 1: ;
    return (byte)param_2 < (byte)param_1;
  case 2: ;
    return 1 - ((byte)param_1 < (byte)param_2);
  case 3: ;
    return (byte)param_1 < (byte)param_2;
  case 4: ;
    return 1 - ((byte)param_2 < (byte)param_1);
  case 5: ;
    return (byte)param_1 == (byte)param_2;
  case 6: ;
    return (byte)param_1 != (byte)param_2;
  case 7: ;
    if ((byte)param_1 == 0) {
      return 0;
    }
    break;
  case 8: ;
    if ((byte)param_1 != 0) {
      return 1;
    }
    break;
  default: ;
    return 0;
  }
  if ((byte)param_2 == 0) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ccb2c0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ccb2c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xccb2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined2 *)((int)this + 0x12) = 0;
  puVar1 = (undefined4 *)((int)this + 0x2c);
  iVar2 = 4;
  do {
    *(undefined2 *)(puVar1 - 4) = 0;
    puVar1[-3] = 0;
    puVar1[-2] = 0;
    *(undefined2 *)((int)puVar1 - 0xe) = 0;
    *(undefined2 *)(puVar1 - 1) = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined2 *)((int)puVar1 - 2) = 0;
    puVar1 = puVar1 + 6;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00ccb440 */
GEN_FRAME undefined4 GEN_THISCALL F_00ccb440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xccb440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = 4;
  do {
    this = (undefined *)((int)this + 4);
    iVar1 = iVar1 - 1;
  } while (iVar1 != 0);
  return *(undefined4 *)this;
}

/* ref: FUN_00ccb470 */
GEN_FRAME unsigned int F_00ccb470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccb470u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00ccb490 */
GEN_FRAME uint F_00ccb490(unsigned int gen_a0)
{
  GEN_ENTER(0xccb490u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d8ba8) = param_1;
  return param_1;
}

/* ref: FUN_00ccb4a0 */
GEN_FRAME uint F_00ccb4a0(unsigned int gen_a0)
{
  GEN_ENTER(0xccb4a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d8bac) = param_1;
  return param_1;
}

/* ref: FUN_00ccb4b0 */
GEN_FRAME uint F_00ccb4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccb4b0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != 0) {
    *(uint *)(REFG(int, 0x15d8bb8) + param_2 * 4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ccb4d0 */
GEN_FRAME uint F_00ccb4d0(unsigned int gen_a0)
{
  GEN_ENTER(0xccb4d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (REFG(undefined4, 0x15d8bc0) <= param_1) {
    return 0;
  }
  return *(uint *)(REFG(int, 0x15d8bb8) + param_1 * 4);
}

/* ref: FUN_00ccb4f0 */
GEN_NOFRAME uint F_00ccb4f0(void)
{
  GEN_ENTER(0xccb4f0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = 0;
  if (REFG(int * PTR32, 0x15d8bbc) != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8bbc) + 0x48))))(REFG(int * PTR32, 0x15d8bbc) GEN_EDX_ARG);
    REFG(int * PTR32, 0x15d8bbc) = (int *)0x0;
  }
  return uVar1;
}

/* ref: FUN_00ccb510 */
GEN_NOFRAME uint F_00ccb510(void)
{
  GEN_ENTER(0xccb510u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d8bbc);
}

/* ref: FUN_00ccb520 */
GEN_FRAME uint F_00ccb520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccb520u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    *(int *)(REFG(int, 0x15d8bc4) + REFG(undefined4, 0x15d8bcc) * 4) = param_1;
    uVar1 = REFG(undefined4, 0x15d8bcc);
    *(undefined4 *)(REFG(int, 0x15d8bc8) + REFG(undefined4, 0x15d8bcc) * 4) = param_2;
    REFG(undefined4, 0x15d8bcc) = REFG(undefined4, 0x15d8bcc) + 1;
  }
  return uVar1;
}

/* ref: FUN_00ccb560 */
GEN_FRAME uint F_00ccb560(unsigned int gen_a0)
{
  GEN_ENTER(0xccb560u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (REFG(undefined4, 0x15d8bcc) <= param_1) {
    return 0;
  }
  return *(uint *)(REFG(int, 0x15d8bc4) + param_1 * 4);
}

/* ref: FUN_00ccb580 */
GEN_FRAME uint F_00ccb580(unsigned int gen_a0)
{
  GEN_ENTER(0xccb580u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (REFG(undefined4, 0x15d8bcc) <= param_1) {
    return 0;
  }
  return *(uint *)(REFG(int, 0x15d8bc8) + param_1 * 4);
}

/* ref: FUN_00ccb5a0 */
GEN_FRAME uint F_00ccb5a0(void)
{
  GEN_ENTER(0xccb5a0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar1 = 0;
  if (REFG(int * PTR32, 0x15d8ba4) != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x38))))(REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccb5e0 */
GEN_FRAME byte F_00ccb5e0(void)
{
  GEN_ENTER(0xccb5e0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x11220];
  UINT UVar1;
  DWORD dwLen;
  
  (*(uint *)(gen_frame + 0x11218)) = 0xccb5ed;
  (*(uint *)(gen_frame + 0x11218)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  UVar1 = gen_imp_GetSystemDirectoryA(((CHAR *)(gen_frame + 0x11010)),0x104);
  if (UVar1 != 0) {
    (*(undefined1 *)(gen_frame + 0x11113)) = 0;
    gen_imp_lstrcpyA(((CHAR *)(gen_frame + 0x11114)),((CHAR *)(gen_frame + 0x11010)));
    gen_imp_lstrcatA(((CHAR *)(gen_frame + 0x11114)),"\\XAudio2_0.dll");
    dwLen = gen_imp_GetFileVersionInfoSizeA(((CHAR *)(gen_frame + 0x11114)),(LPDWORD)0x0);
    if ((dwLen != 0) && (dwLen < 0x1000)) {
      gen_imp_GetFileVersionInfoA(((CHAR *)(gen_frame + 0x11114)),0,dwLen,((undefined1 *)(gen_frame + 0x10010)));
      gen_imp_VerQueryValueA(((undefined1 *)(gen_frame + 0x10010)),"\\",&(*(LPVOID *)(gen_frame + 0x1000c)),&(*(uint *)(gen_frame + 0x10008)));
      if (*(int *)((int)(*(LPVOID *)(gen_frame + 0x1000c)) + 0x10) == 0x90016) {
        F_00c47745((*(uint *)(gen_frame + 0x11218)) ^ (uint)(uint)(gen_frame + 0x0) GEN_EDX_ARG);
        return 1;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x11218)) ^ (uint)(uint)(gen_frame + 0x0) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00ccb6c0 */
GEN_FRAME uint F_00ccb6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xccb6c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x600];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  
  (*(uint *)(gen_frame + 0x5f8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5fc);
  F_00c4720f(((char *)(gen_frame + 0x478)),"[XAudio]\n");
  pcVar2 = ((char *)(gen_frame + 0x478));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
  pcVar2 = (char *)(param_1 - 1);
  do {
    pcVar6 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = ((char *)(gen_frame + 0x478));
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x478)),"initialized = %d\n",(uint)REFG(undefined1, 0x15d8bd8));
  pcVar2 = ((char *)(gen_frame + 0x478));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
  pcVar2 = (char *)(param_1 - 1);
  do {
    pcVar6 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = ((char *)(gen_frame + 0x478));
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x478)),"soundOfSilence = %d\n",(uint)REFG(undefined1, 0x15d8bd9));
  pcVar2 = ((char *)(gen_frame + 0x478));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
  pcVar2 = (char *)(param_1 - 1);
  do {
    pcVar6 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = ((char *)(gen_frame + 0x478));
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x478)),"pXA2Engine = %p\n",REFG(int * PTR32, 0x15d8ba4));
  pcVar2 = ((char *)(gen_frame + 0x478));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
  pcVar2 = (char *)(param_1 - 1);
  do {
    pcVar6 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = ((char *)(gen_frame + 0x478));
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0xc))))(REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x8)));
  if (uVar3 == 0) {
    F_00c4720f(((char *)(gen_frame + 0x478)),"XA2DeviceCount = %d\n",(*(uint *)(gen_frame + 0x8)));
    pcVar2 = ((char *)(gen_frame + 0x478));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
    pcVar2 = (char *)(param_1 - 1);
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = ((char *)(gen_frame + 0x478));
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    uVar4 = 0;
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
    if ((*(uint *)(gen_frame + 0x8)) != 0) {
      do {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x10))))(REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,uVar4,((undefined1 *)(gen_frame + 0xc)));
        if (uVar3 == 0) {
          F_00c4720f(((char *)(gen_frame + 0x478)),"Device[%d] Id= %s Name= %s Role= %d Channel= %d Mask= 0x%x\n",uVar4,
                   ((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x20c)),(*(undefined4 *)(gen_frame + 0x40c)),(uint)(*(ushort *)(gen_frame + 0x412)),(*(undefined4 *)(gen_frame + 0x424)));
        }
        else {
          F_00c4720f(((char *)(gen_frame + 0x478)),"Device[%d]ERROR!\n",uVar4);
        }
        pcVar2 = ((char *)(gen_frame + 0x478));
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
        pcVar2 = (char *)(param_1 - 1);
        do {
          pcVar6 = pcVar2 + 1;
          pcVar2 = pcVar2 + 1;
        } while (*pcVar6 != '\0');
        pcVar6 = ((char *)(gen_frame + 0x478));
        for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar2 = pcVar2 + 4;
        }
        uVar4 = uVar4 + 1;
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar2 = pcVar2 + 1;
        }
      } while (uVar4 < (*(uint *)(gen_frame + 0x8)));
    }
    F_00c48350(&(*(undefined4 *)(gen_frame + 0x438)),0,0x40);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x38))))(REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x438)));
    F_00c4720f(((char *)(gen_frame + 0x478)),"SinceLastQuery = %d %d\n",(*(undefined4 *)(gen_frame + 0x438)),(*(undefined4 *)(gen_frame + 0x43c)),(*(undefined4 *)(gen_frame + 0x440)),(*(undefined4 *)(gen_frame + 0x444)));
    pcVar2 = ((char *)(gen_frame + 0x478));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
    pcVar2 = (char *)(param_1 - 1);
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = ((char *)(gen_frame + 0x478));
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
    F_00c4720f(((char *)(gen_frame + 0x478)),"Cycles Min= %d Max= %d\n",(*(undefined4 *)(gen_frame + 0x448)),(*(undefined4 *)(gen_frame + 0x44c)));
    pcVar2 = ((char *)(gen_frame + 0x478));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
    pcVar2 = (char *)(param_1 - 1);
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = ((char *)(gen_frame + 0x478));
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
    F_00c4720f(((char *)(gen_frame + 0x478)),"Mem= %x Latency= %d Glitch= %d\n",(*(undefined4 *)(gen_frame + 0x450)),(*(undefined4 *)(gen_frame + 0x454)),(*(undefined4 *)(gen_frame + 0x458)));
    pcVar2 = ((char *)(gen_frame + 0x478));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
    pcVar2 = (char *)(param_1 - 1);
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = ((char *)(gen_frame + 0x478));
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
    F_00c4720f(((char *)(gen_frame + 0x478)),"SourceVoice %d/%d SubMix= %d\n",(*(undefined4 *)(gen_frame + 0x45c)),(*(undefined4 *)(gen_frame + 0x460)),(*(undefined4 *)(gen_frame + 0x464)));
    pcVar2 = ((char *)(gen_frame + 0x478));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
    pcVar2 = (char *)(param_1 - 1);
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = ((char *)(gen_frame + 0x478));
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
    F_00c4720f(((char *)(gen_frame + 0x478)),"XApo Resampler= %d MatrixMix= %d\n",(*(undefined4 *)(gen_frame + 0x468)),(*(undefined4 *)(gen_frame + 0x46c)));
    pcVar2 = ((char *)(gen_frame + 0x478));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
    pcVar2 = (char *)(param_1 - 1);
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
  }
  else {
    F_00c4720f(((char *)(gen_frame + 0x478)),"XA2DeviceError = %x\n",uVar3);
    pcVar2 = ((char *)(gen_frame + 0x478));
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x478));
    pcVar2 = (char *)(param_1 - 1);
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
  }
  pcVar6 = ((char *)(gen_frame + 0x478));
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x5f8)) ^ (uint)(uint)(gen_frame + 0x5fc) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00ccbb70 */
GEN_FRAME unsigned int F_00ccbb70(void)
{
  GEN_ENTER(0xccbb70u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined * rclsid;
  HRESULT HVar2;
  
  if (REFG(char, 0x15d8bd8) != '\0') {
    if (REFG(int * PTR32, 0x15d8bbc) != (int *)0x0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8bbc) + 0x48))))(REFG(int * PTR32, 0x15d8bbc) GEN_EDX_ARG);
      REFG(int * PTR32, 0x15d8bbc) = (int *)0x0;
    }
    if (REFG(int * PTR32, 0x15d8ba4) != (int *)0x0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x30))))(REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 8))))(REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG);
      REFG(int * PTR32, 0x15d8ba4) = (int *)0x0;
    }
    puVar1 = REFG(undefined4 * PTR32, 0x15d8bb0);
    if (REFG(undefined4 * PTR32, 0x15d8bb0) != (undefined4 *)0x0) {
      *REFG(undefined4 * PTR32, 0x15d8bb0) = (*(undefined * PTR32 (*)[3])REFP(0x112ad94));
      F_00406810(puVar1);
      REFG(undefined4 * PTR32, 0x15d8bb0) = (undefined4 *)0x0;
    }
    rclsid = (undefined *)&REFG(undefined, 0x112ad80);
    if (((byte)REFG(undefined4, 0x15d8bb4) & 1) == 0) {
      rclsid = (undefined *)&REFG(undefined, 0x112ad70);
    }
    HVar2 = gen_imp_CoGetClassObject(rclsid,1,(LPVOID)0x0,(undefined *)&REFG(undefined, 0x1082394),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < HVar2) {
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,0);
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    }
    if (REFG(int, 0x15d8bb8) != 0) {
      F_00406810(REFG(int, 0x15d8bb8));
      REFG(int, 0x15d8bb8) = 0;
    }
    if (REFG(int, 0x15d8bc4) != 0) {
      F_00406810(REFG(int, 0x15d8bc4));
      REFG(int, 0x15d8bc4) = 0;
    }
    if (REFG(int, 0x15d8bc8) != 0) {
      F_00406810(REFG(int, 0x15d8bc8));
      REFG(int, 0x15d8bc8) = 0;
    }
    gen_imp_CoUninitialize();
    F_00ce45c0();
    REFG(char, 0x15d8bd8) = '\0';
  }
  return;
}

/* ref: FUN_00ccbc80 */
GEN_FRAME uint F_00ccbc80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xccbc80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00ccbd20 */
GEN_FRAME byte F_00ccbd20(unsigned int gen_a0)
{
  GEN_ENTER(0xccbd20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x840];
  int iVar1;
  HRESULT HVar2;
  uint uVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x838)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x83c);
  F_00ccb5e0();
  if (REFG(char, 0x15d8bd8) != '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x838)) ^ (uint)(uint)(gen_frame + 0x83c) GEN_EDX_ARG);
    return 1;
  }
  F_00ce45a0();
  gen_imp_CoInitializeEx((LPVOID)0x0,0);
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  if ((REFG(undefined4, 0x15d8bb4) & 1) == 0) {
LAB_00ccbda5: ;
    HVar2 = gen_imp_CoGetClassObject(&REFG(undefined, 0x112ad70),1,0,&REFG(undefined, 0x1082394),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (HVar2 < 0) goto LAB_00ccbdf8;
  }
  else {
    HVar2 = gen_imp_CoGetClassObject(&REFG(undefined, 0x112ad80),1,0,&REFG(undefined, 0x1082394),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (HVar2 < 0) {
      REFG(undefined4, 0x15d8bb4) = 0;
    }
    if ((REFG(undefined4, 0x15d8bb4) & 1) == 0) goto LAB_00ccbda5;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,1);
  ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  uVar3 = F_00ccc110(&REFG(int * PTR32, 0x15d8ba4),REFG(undefined4, 0x15d8bb4),*(undefined4 *)(param_1 + 0x54));
  if (uVar3 == 0) {
    (*(uint *)(gen_frame + 0x4)) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0xc))))(REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x4)));
    uVar4 = 0;
    uVar3 = 0xffffffff;
    if ((*(uint *)(gen_frame + 0x4)) != 0) {
      do {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x10))))(REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,uVar4,((undefined1 *)(gen_frame + 0xc)));
        if (((*(uint *)(gen_frame + 0x40c)) & 8) != 0) {
          REFG(undefined4, 0x134c7e4) = (uint)(*(ushort *)(gen_frame + 0x412));
          REFG(undefined4, 0x134c7e8) = (*(undefined4 *)(gen_frame + 0x414));
          *(undefined4 *)&REFG(undefined, 0x15d8bd4) = (*(undefined4 *)(gen_frame + 0x424));
          uVar3 = uVar4;
          break;
        }
        if ((*(uint *)(gen_frame + 0x40c)) != 0) {
          REFG(undefined4, 0x134c7e4) = (uint)(*(ushort *)(gen_frame + 0x412));
          REFG(undefined4, 0x134c7e8) = (*(undefined4 *)(gen_frame + 0x414));
          *(undefined4 *)&REFG(undefined, 0x15d8bd4) = (*(undefined4 *)(gen_frame + 0x424));
          uVar3 = uVar4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (*(uint *)(gen_frame + 0x4)));
      if (uVar3 != 0xffffffff) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x2c))))(REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG);
        uVar3 = *(uint *)(param_1 + 0x38);
        if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
          F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
        }
        if (REFG(char, 0x15d7798) != '\0') {
          if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
            F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
          }
          uVar3 = (uint)REFG(undefined1, 0x15d82b0);
        }
        if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
          REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
        }
        REFG(void * PTR32, 0x15d8bb8) = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,uVar3 * 4,"CDev.Engine.Sd.SoundDriver",0,0,
                                          0x10)));
        F_00c48350(REFG(void * PTR32, 0x15d8bb8),0,uVar3 * 4);
        iVar1 = *(int *)(param_1 + 0x3c);
        REFG(undefined4, 0x15d8bc0) = uVar3;
        if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
          REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
        }
        REFG(undefined4, 0x15d8bc8) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                 (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,iVar1 * 4,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
        iVar1 = *(int *)(param_1 + 0x3c);
        if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
          REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
        }
        REFG(undefined4, 0x15d8bc4) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                 (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,iVar1 * 4,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
        REFG(undefined4, 0x15d8bcc) = 0;
        *(undefined4 *)&REFG(undefined, 0x15d8bd0) = 0;
        *(undefined4 *)&REFG(undefined, 0x134c7f0) = *(undefined4 *)(param_1 + 0x58);
        REFG(char, 0x15d8bd8) = 1;
        F_00c47745((*(uint *)(gen_frame + 0x838)) ^ (uint)(uint)(gen_frame + 0x83c) GEN_EDX_ARG);
        return 1;
      }
    }
    (*(undefined1 *)(gen_frame + 0x836)) = 0;
    F_00c472ec(((char *)(gen_frame + 0x438)),0x400,0x3fe,"[sd][Driver][XA2] Error: Sound Device is not found.");
    F_00c473c8(((char *)(gen_frame + 0x438)),0x400,&REFG(undefined, 0x112aa90));
    F_00cbee70(((char *)(gen_frame + 0x438)),2);
    F_00c47745((*(uint *)(gen_frame + 0x838)) ^ (uint)(uint)(gen_frame + 0x83c) GEN_EDX_ARG);
    return 0;
  }
LAB_00ccbdf8: ;
  gen_imp_CoUninitialize();
  F_00c47745((*(uint *)(gen_frame + 0x838)) ^ (uint)(uint)(gen_frame + 0x83c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00ccc080 */
GEN_FRAME uint F_00ccc080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  
  if (REFG(undefined4, 0x15d8bbc) == 0) {
    iVar1 = REFG(int, 0x15d8bac);
    if (REFG(int, 0x15d8bac) == 0) {
      iVar1 = REFG(int, 0x15d8ba8);
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 *)(gen_frame + 0x10));
    (*(undefined4 *)(gen_frame + 0x10)) = 0x80;
    (*(int *)(gen_frame + 0x14)) = iVar1;
    (*(undefined4 *)(gen_frame + 0x8)) = 1;
    if (((REFG(int * PTR32, 0x15d8ba4) != (int *)0x0) && (iVar1 != 0)) &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x24))))
                          (REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,&REFG(undefined4, 0x15d8bbc),param_1,param_2 & 0xffff,0,0,&(*(undefined4 *)(gen_frame + 0x8)),0),
       (int)uVar2 < 0)) {
      F_00cc1d20(&(*(undefined1 *)(gen_frame + 0x1b)) GEN_EDX_ARG,"!\"[sd][Driver][XA2] Error: CreateSubmixVoice\"",&REFG(undefined, 0x112aa92),
                   "XA2\\AudioXA2.cpp",0x1ec,
                   "SQEX::CDev::Engine::Sd::Driver::XA2::AudioXA2::CreateDefaultSubmixVoice");
    }
  }
  return REFG(undefined4, 0x15d8bbc);
}

/* ref: FUN_00ccc110 */
GEN_FRAME uint F_00ccc110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccc110u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * piVar1;
  undefined * rclsid;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  rclsid = (undefined *)&REFG(undefined, 0x112ad80);
  if (((uint)(*(int * PTR32 *)&gen_args[1]) & 1) == 0) {
    rclsid = (undefined *)&REFG(undefined, 0x112ad70);
  }
  uVar2 = gen_imp_CoCreateInstance(rclsid,(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x112ad60),&(*(int * PTR32 *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x14))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,piVar1,(*(undefined4 *)&gen_args[2]));
    if (-1 < (int)uVar2) {
      *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
      return uVar2;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioXA2::EngineCallback::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ccc1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccc1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioXA2::EngineCallback::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ccc1e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xccc1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioXA2::EngineCallback::vf0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ccc1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xccc1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00ccc230 */
GEN_FRAME uint GEN_STDCALL F_00ccc230(unsigned int gen_a0)
{
  GEN_ENTER(0xccc230u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x18))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccc250 */
GEN_FRAME uint GEN_STDCALL F_00ccc250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc270 */
GEN_FRAME uint GEN_STDCALL F_00ccc270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc270u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc290 */
GEN_FRAME uint GEN_STDCALL F_00ccc290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccc290u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc2b0 */
GEN_FRAME uint GEN_STDCALL F_00ccc2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xccc2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xc))(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00ccc2e0 */
GEN_FRAME uint GEN_STDCALL F_00ccc2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xccc2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00ccc310 */
GEN_FRAME uint GEN_STDCALL F_00ccc310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccc310u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc330 */
GEN_FRAME uint GEN_STDCALL F_00ccc330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc330u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x1c))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc350 */
GEN_FRAME uint GEN_STDCALL F_00ccc350(unsigned int gen_a0)
{
  GEN_ENTER(0xccc350u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccc370 */
GEN_FRAME uint GEN_STDCALL F_00ccc370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc370u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc390 */
GEN_FRAME uint GEN_STDCALL F_00ccc390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc390u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc3b0 */
GEN_FRAME uint GEN_STDCALL F_00ccc3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccc3b0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xc))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc3d0 */
GEN_FRAME uint GEN_STDCALL F_00ccc3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xccc3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00ccc400 */
GEN_FRAME uint GEN_STDCALL F_00ccc400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xccc400u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00ccc430 */
GEN_FRAME uint GEN_STDCALL F_00ccc430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccc430u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x18))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc450 */
GEN_FRAME uint GEN_STDCALL F_00ccc450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc450u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x1c))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc470 */
GEN_FRAME uint GEN_STDCALL F_00ccc470(unsigned int gen_a0)
{
  GEN_ENTER(0xccc470u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccc490 */
GEN_FRAME uint GEN_STDCALL F_00ccc490(unsigned int gen_a0)
{
  GEN_ENTER(0xccc490u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccc4b0 */
GEN_FRAME uint GEN_STDCALL F_00ccc4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc4b0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc4d0 */
GEN_FRAME uint GEN_STDCALL F_00ccc4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc4d0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xc))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc4f0 */
GEN_FRAME uint GEN_STDCALL F_00ccc4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc4f0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc510 */
GEN_FRAME uint GEN_STDCALL F_00ccc510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc510u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc530 */
GEN_FRAME uint GEN_STDCALL F_00ccc530(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xccc530u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x18))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
  return uVar1;
}

/* ref: FUN_00ccc550 */
GEN_FRAME uint GEN_STDCALL F_00ccc550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xccc550u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x1c))(param_1 GEN_EDX_ARG,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00ccc570 */
GEN_FRAME uint GEN_STDCALL F_00ccc570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc570u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x20))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc590 */
GEN_FRAME uint GEN_STDCALL F_00ccc590(unsigned int gen_a0)
{
  GEN_ENTER(0xccc590u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccc5b0 */
GEN_FRAME uint GEN_STDCALL F_00ccc5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc5b0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc5d0 */
GEN_FRAME uint GEN_STDCALL F_00ccc5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc5d0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc5f0 */
GEN_FRAME uint GEN_STDCALL F_00ccc5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xccc5f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xc))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccc610 */
GEN_FRAME uint GEN_STDCALL F_00ccc610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xccc610u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00ccc630 */
GEN_FRAME uint GEN_STDCALL F_00ccc630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc630u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc650 */
GEN_FRAME uint GEN_STDCALL F_00ccc650(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xccc650u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x18))(param_1 GEN_EDX_ARG,param_2,(undefined4)gen_fl2bits(param_3));
  return uVar1;
}

/* ref: FUN_00ccc670 */
GEN_FRAME uint GEN_STDCALL F_00ccc670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccc670u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x1c))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc690 */
GEN_FRAME uint GEN_STDCALL F_00ccc690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc690u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x20))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc6b0 */
GEN_FRAME uint GEN_STDCALL F_00ccc6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc6b0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x24))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc6d0 */
GEN_FRAME uint GEN_STDCALL F_00ccc6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc6d0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x28))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc6f0 */
GEN_FRAME uint GEN_STDCALL F_00ccc6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xccc6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x2c))(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00ccc720 */
GEN_FRAME uint GEN_STDCALL F_00ccc720(unsigned int gen_a0)
{
  GEN_ENTER(0xccc720u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccc740 */
GEN_FRAME uint GEN_STDCALL F_00ccc740(unsigned int gen_a0)
{
  GEN_ENTER(0xccc740u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccc760 */
GEN_FRAME uint GEN_STDCALL F_00ccc760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc760u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xc))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc780 */
GEN_FRAME uint GEN_STDCALL F_00ccc780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccc780u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc7a0 */
GEN_FRAME uint GEN_STDCALL F_00ccc7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc7a0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc7c0 */
GEN_FRAME uint GEN_STDCALL F_00ccc7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc7c0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x18))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc7e0 */
GEN_FRAME uint GEN_STDCALL F_00ccc7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xccc7e0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x1c))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccc800 */
GEN_FRAME uint GEN_STDCALL F_00ccc800(unsigned int gen_a0)
{
  GEN_ENTER(0xccc800u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x20))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ccc820 */
GEN_FRAME uint GEN_STDCALL F_00ccc820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xccc820u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x24))(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00ccc850 */
GEN_FRAME uint GEN_STDCALL F_00ccc850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xccc850u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x28))(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00ccc880 */
GEN_FRAME uint GEN_STDCALL F_00ccc880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccc880u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x2c))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccc8a0 */
GEN_FRAME uint GEN_STDCALL F_00ccc8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xccc8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x30))
                    (param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00ccc8d0 */
GEN_FRAME uint GEN_STDCALL F_00ccc8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12)
{
  GEN_ENTER(0xccc8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  undefined4 param_13 = (undefined4)gen_a12;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x34))
                    (param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12,param_13);
  return uVar1;
}

/* ref: FUN_00ccc930 */
GEN_FRAME uint GEN_STDCALL F_00ccc930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16)
{
  GEN_ENTER(0xccc930u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  undefined4 param_13 = (undefined4)gen_a12;
  undefined4 param_14 = (undefined4)gen_a13;
  undefined4 param_15 = (undefined4)gen_a14;
  undefined4 param_16 = (undefined4)gen_a15;
  undefined4 param_17 = (undefined4)gen_a16;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x38))
                    (param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12,param_13,param_14,param_15,param_16,param_17);
  return uVar1;
}

/* ref: FUN_00ccc9a0 */
GEN_FRAME uint GEN_STDCALL F_00ccc9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc9a0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x3c))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc9c0 */
GEN_FRAME uint GEN_STDCALL F_00ccc9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc9c0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x40))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccc9e0 */
GEN_FRAME uint GEN_STDCALL F_00ccc9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccc9e0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x44))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccca00 */
GEN_FRAME uint GEN_STDCALL F_00ccca00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccca00u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x48))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccca20 */
GEN_FRAME uint GEN_STDCALL F_00ccca20(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xccca20u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x4c))(param_1 GEN_EDX_ARG,param_2,(undefined4)gen_fl2bits(param_3));
  return uVar1;
}

/* ref: FUN_00ccca40 */
GEN_FRAME uint GEN_STDCALL F_00ccca40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccca40u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x50))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ccca60 */
GEN_FRAME uint GEN_STDCALL F_00ccca60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccca60u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x54))(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00ccca80 */
GEN_FRAME uint GEN_STDCALL F_00ccca80(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xccca80u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x58))(param_1 GEN_EDX_ARG,param_2,(undefined4)gen_fl2bits(param_3));
  return uVar1;
}

/* ref: FUN_00cccaa0 */
GEN_FRAME uint GEN_STDCALL F_00cccaa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcccaa0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x5c))(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00cccac0 */
GEN_FRAME uint GEN_THISCALL F_00cccac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcccac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x112ad94));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cccaf0 */
GEN_FRAME uint F_00cccaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcccaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c473c8(param_1,0x400,param_2);
  return uVar1;
}

/* ref: FUN_00cccb10 */
GEN_FRAME uint GEN_THISCALL F_00cccb10(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcccb10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  in_ecx[1] = (undefined4)gen_fl2bits(param_2);
  in_ecx[2] = (undefined4)gen_fl2bits(param_2);
  *in_ecx = (*(undefined * PTR32 (*)[7])REFP(0x112adb0));
  in_ecx[4] = 0;
  in_ecx[3] = (undefined4)gen_fl2bits((float)(float10)0);
  in_ecx[5] = 0;
  in_ecx[6] = (undefined4)gen_fl2bits((float)(float10)0);
  in_ecx[8] = 0;
  in_ecx[7] = (undefined4)gen_fl2bits((float)(float10)1);
  return (uint)in_ecx;
}

/* ref: FUN_00cccb40 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cccb40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcccb40u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[7])REFP(0x112adb0));
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf1 */
GEN_FRAME uint GEN_THISCALL F_00cccb50(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcccb50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 4) = param_2;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(float *)(in_ecx + 8) = param_2;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  *(undefined4 *)(in_ecx + 0x20) = 0;
  *(float *)(in_ecx + 0xc) = (float)(float10)0;
  *(float *)(in_ecx + 0x18) = (float)(float10)0;
  *(float *)(in_ecx + 0x1c) = (float)(float10)1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_00cccb80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcccb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  if (this[0x20] != (undefined1)0x0) {
    this[0x20] = (undefined1)0x0;
  }
  if (this[0x22] != (undefined1)0x0) {
    this[0x22] = (undefined1)0x0;
  }
  if (0 < *(int *)(this + 0x10)) {
    iVar1 = *(int *)(this + 0x10) - param_1;
    *(int *)(this + 0x10) = iVar1;
    if (iVar1 < 1) {
      *(undefined4 *)(this + 0x10) = 0;
      *(undefined4 *)(this + 4) = *(undefined4 *)(this + 8);
      return 0;
    }
    *(float *)(this + 4) =
         ((float)GEN_TOF(((float10)*(float *)(this + 0xc) * (float10)param_1 + (float10)*(float *)(this + 4))))
    ;
  }
  return 0;
}

/* ref: FUN_00cccbd0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cccbd0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcccbd0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(float *)(in_ecx + 4) = param_2;
  *(float *)(in_ecx + 8) = param_2;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf3 */
GEN_NOFRAME byte GEN_THISCALL F_00cccbf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcccbf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((((0 < *(int *)(in_ecx + 0x10)) || (*(char *)(in_ecx + 0x20) != '\0')) ||
      (*(char *)(in_ecx + 0x22) != '\0')) && (*(char *)(in_ecx + 0x23) == '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cccc10 */
GEN_FRAME unsigned int GEN_THISCALL F_00cccc10(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcccc10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(undefined1 *)(in_ecx + 0x20) = 1;
  *(float *)(in_ecx + 0x1c) = param_2;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00cccc30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcccc30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float10 fVar1;
  
  *(int *)(this + 0x10) = *(int *)(this + 0x10) - param_1;
  if (*(int *)(this + 0x10) < 1) {
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 4) = *(undefined4 *)(this + 8);
    return 0;
  }
  fVar1 = (float10)param_1;
  if (param_1 < 0) {
    fVar1 = fVar1 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 4) =
       ((float)GEN_TOF((fVar1 * (float10)*(float *)(this + 0xc) + (float10)*(float *)(this + 4))));
  return 0;
}

/* ref: FUN_00cccc70 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cccc70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcccc70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x23) = 1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf6 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cccc80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcccc80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x23) = 0;
  return;
}

/* ref: FUN_00cccc90 */
GEN_FRAME float10 GEN_STDCALL F_00cccc90(float gen_a0)
{
  GEN_ENTER(0xcccc90u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = (float10)(float)((float10)1 - (float10)param_1 * (float10)param_1);
  return (float10)((float)GEN_TOF(((fVar1 * fVar1) * fVar1)));
}

/* ref: FUN_00ccccc0 */
GEN_FRAME float10 GEN_STDCALL F_00ccccc0(float gen_a0)
{
  GEN_ENTER(0xccccc0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = (float10)(float)((float10)1 - (float10)param_1 * (float10)param_1);
  return (float10)((float)GEN_TOF(((float10)1 - (float10)((float)GEN_TOF(((fVar1 * fVar1) * fVar1))))));
}

/* ref: FUN_00ccccf0 */
GEN_FRAME float10 GEN_STDCALL F_00ccccf0(float gen_a0)
{
  GEN_ENTER(0xccccf0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = (float10)(float)((float10)1 - (float10)param_1);
  fVar1 = (float10)(float)((float10)1 - fVar1 * fVar1);
  return (float10)((float)GEN_TOF(((fVar1 * fVar1) * fVar1)));
}

/* ref: FUN_00cccd20 */
GEN_FRAME float10 GEN_STDCALL F_00cccd20(float gen_a0)
{
  GEN_ENTER(0xcccd20u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)1;
  fVar2 = (float10)((float)GEN_TOF((fVar1 - (float10)(float)(fVar1 - (float10)param_1) *
                                   (float10)(float)(fVar1 - (float10)param_1))));
  return (float10)((float)GEN_TOF((fVar1 - (float10)((float)GEN_TOF(((fVar2 * fVar2) * fVar2))))));
}

/* ref: FUN_00cccd60 */
GEN_FRAME float10 GEN_STDCALL F_00cccd60(float gen_a0)
{
  GEN_ENTER(0xcccd60u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = (float10)(float)((float10)1 - (float10)param_1 * (float10)param_1);
  return (float10)((float)GEN_TOF(((fVar1 * fVar1) * fVar1)));
}

/* ref: FUN_00cccd90 */
GEN_FRAME uint GEN_THISCALL F_00cccd90(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcccd90u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  
  if (param_3 == 0) {
    *(float *)(param_1 + 4) = param_2;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(float *)(param_1 + 8) = param_2;
    return 0;
  }
  *(float *)(param_1 + 8) = param_2;
  uVar1 = param_3 & 0xfffffff;
  *(byte *)(param_1 + 0x21) = (byte)(param_3 >> 0x1c);
  *(uint *)(param_1 + 0x10) = uVar1;
  *(uint *)(param_1 + 0x14) = uVar1;
  *(float *)(param_1 + 0xc) =
       ((float)GEN_TOF((((float10)param_2 - (float10)*(float *)(param_1 + 4)) / (float10)uVar1)));
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 4);
  return uVar1;
}

/* ref: FUN_00cccde0 */
GEN_FRAME float GEN_THISCALL F_00cccde0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcccde0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (*(char *)((int)this + 0x21) != '\0') {
    iVar3 = *(int *)((int)this + 0x14);
    iVar4 = iVar3 - *(int *)((int)this + 0x10);
    fVar5 = (float10)iVar4;
    if (iVar4 < 0) {
      fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar6 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar1 = (float)(fVar5 / fVar6);
    fVar2 = ((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 8) -
                                       (float10)*(float *)((int)this + 0x18)))))));
    switch((unsigned int)(uintptr_t)(*(char *)((int)this + 0x21))) {
    case '\x01': ;
      fVar5 = F_00ccccc0(fVar1);
      return ((float)GEN_TOF((fVar5 * (float10)fVar2 + (float10)*(float *)((int)this + 0x18))));
    case '\x02': ;
      fVar5 = F_00cccd20(fVar1);
      return ((float)GEN_TOF((fVar5 * (float10)fVar2 + (float10)*(float *)((int)this + 8))));
    case '\x03': ;
      fVar5 = F_00ccccf0(fVar1);
      return ((float)GEN_TOF((fVar5 * (float10)fVar2 + (float10)*(float *)((int)this + 0x18))));
    case '\x04': ;
      fVar5 = (float10)(float)((float10)1 - (float10)fVar1 * (float10)fVar1);
      return ((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar5 * fVar5) * fVar5))) * (float10)fVar2 +
                    (float10)*(float *)((int)this + 8))));
    }
  }
  return *(float *)((int)this + 4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf4 */
GEN_FRAME float GEN_THISCALL F_00cccee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcccee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  
  fVar1 = F_00cccde0(this GEN_EDX_FWD);
  return ((float)GEN_TOF(((float10)fVar1 * (float10)*(float *)(((int)(uint)(this)) + 0x1c))));
}

/* ref: FUN_00cccf00 */
GEN_FRAME uint GEN_THISCALL F_00cccf00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcccf00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x112adb0));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cccf30 */
GEN_FRAME unsigned int F_00cccf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcccf30u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cccf50 */
GEN_NOFRAME uint GEN_THISCALL F_00cccf50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcccf50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float fVar1;
  
  fVar1 = *(float *)&REFG(undefined, 0x112addc);
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb10(in_ecx + 1 GEN_EDX_FWD,fVar1);
  F_00cccb10(in_ecx + 10 GEN_EDX_ARG,*(float *)&REFG(undefined, 0x112ade0));
  F_00cccb10(in_ecx + 0x13 GEN_EDX_ARG,(float)(float10)1);
  return (uint)in_ecx;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf3 */
GEN_FRAME uint GEN_THISCALL F_00cccfa0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcccfa0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  code * pcVar2;
  
  if (param_3 == 0) {
    pcVar2 = *(gen_code32 *)(*param_1 + 0x28);
  }
  else if (param_3 == 1) {
    pcVar2 = *(gen_code32 *)(*param_1 + 0x2c);
  }
  else {
    if (param_3 != 2) goto LAB_00cccfd6;
    pcVar2 = *(gen_code32 *)(*param_1 + 0x30);
  }
  (*pcVar2)(param_1,(undefined4)gen_fl2bits(param_2),param_4);
LAB_00cccfd6: ;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x24))(param_1 GEN_EDX_FWD);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf10 */
GEN_FRAME uint GEN_THISCALL F_00cccff0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcccff0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  float10 fVar1;
  uint uVar3;
  float10 fVar4;
  
  fVar1 = (float10)0;
  fVar4 = (float10)param_2;
  if (!(fVar1 <= fVar4) == (GEN_ISNAN(fVar4) || GEN_ISNAN(fVar1))) {
    fVar1 = (float10)1;
    if (!(fVar4 <= fVar1) != (GEN_ISNAN(fVar1) || GEN_ISNAN(fVar4))) {
      param_2 = (float)fVar1;
    }
  }
  else {
    param_2 = (float)fVar1;
  }
  fVar1 = ((float10)GEN_TOD(pow((float10)*(double *)&REFG(undefined, 0x1092098),
                               (float10)((float)GEN_TOF((((float10)1 - (float10)param_2) *
                                               (float10)*(double *)&REFG(undefined, 0x10ac278)))))));
  if (param_3 == 0) {
    F_00cccbd0(param_1 + 4 GEN_EDX_FWD,(float)((float10)(float)fVar1 * (float10)*(double *)&REFG(undefined, 0x112b0a0)));
    return 0;
  }
  uVar3 = F_00cccd90(param_1 + 4 GEN_EDX_ARG,
                       (float)((float10)(float)fVar1 * (float10)*(double *)&REFG(undefined, 0x112b0a0)),param_3);
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf11 */
GEN_FRAME uint GEN_THISCALL F_00ccd080(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccd080u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  float10 fVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar1 = (float10)0;
  fVar3 = (float10)param_2;
  if (!(fVar1 <= fVar3) != (GEN_ISNAN(fVar3) || GEN_ISNAN(fVar1))) {
    fVar3 = (float10)(float)fVar1;
  }
  if (param_3 == 0) {
    F_00cccbd0(param_1 + 0x28 GEN_EDX_FWD,(float)fVar3);
    return 0;
  }
  uVar2 = F_00cccd90(param_1 + 0x28 GEN_EDX_ARG,(float)fVar3,param_3);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf12 */
GEN_FRAME uint GEN_THISCALL F_00ccd0d0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccd0d0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if (param_3 != 0) {
    uVar1 = F_00cccd90(param_1 + 0x4c GEN_EDX_FWD,param_2,param_3);
    return uVar1;
  }
  F_00cccbd0(param_1 + 0x4c GEN_EDX_ARG,param_2);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf13 */
GEN_FRAME uint GEN_THISCALL F_00ccd100(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xccd100u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x28))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),0);
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x2c))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_3),0);
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x30))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_4),0);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x24))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf16 */
GEN_NOFRAME uint GEN_THISCALL F_00ccd150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xccd150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 4))))(this + 4 GEN_EDX_FWD,*(undefined4 *)&REFG(undefined, 0x112addc));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 4))))(this + 0x28 GEN_EDX_ARG,*(undefined4 *)&REFG(undefined, 0x112ade0));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x4c) + 4))))
                    (this + 0x4c GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)1));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf4 */
GEN_FRAME uint GEN_THISCALL F_00ccd190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xccd190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0xc))))(this + 4 GEN_EDX_FWD);
  bVar2 = (char)uVar1 != '\0';
  if (bVar2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 8))))(this + 4 GEN_EDX_ARG,param_1);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))))(this + 0x28 GEN_EDX_ARG);
  bVar3 = (char)uVar1 != '\0';
  if (bVar3) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 8))))(this + 0x28 GEN_EDX_ARG,param_1);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x4c) + 0xc))))(this + 0x4c GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x4c) + 8))))(this + 0x4c GEN_EDX_ARG,param_1);
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG);
    return uVar1;
  }
  if (bVar3 || bVar2) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00ccd3b0 */
GEN_FRAME uint F_00ccd3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xccd3b0u, gen_a0, 0u, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float10 fVar1;
  
  fVar1 = (float10)0;
  param_1[3] = (float)fVar1;
  param_1[4] = (float)fVar1;
  *param_1 = (float)(float10)1;
  param_1[1] = (float)fVar1;
  param_1[2] = (float)fVar1;
  return (uint)param_1;
}

/* ref: FUN_00ccd3e0 */
GEN_FRAME uint GEN_STDCALL F_00ccd3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xccd3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float10 fVar1;
  
  fVar1 = (float10)0;
  param_1[3] = (float)fVar1;
  param_1[4] = (float)fVar1;
  *param_1 = (float)(float10)1;
  param_1[1] = (float)fVar1;
  param_1[2] = (float)fVar1;
  return (uint)param_1;
}

/* ref: FUN_00ccd400 */
GEN_NOFRAME uint F_00ccd400(void)
{
  GEN_ENTER(0xccd400u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00ccd410 */
GEN_NOFRAME uint F_00ccd410(void)
{
  GEN_ENTER(0xccd410u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: FUN_00ccd420 */
GEN_NOFRAME uint F_00ccd420(void)
{
  GEN_ENTER(0xccd420u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: FUN_00ccd430 */
GEN_NOFRAME uint F_00ccd430(void)
{
  GEN_ENTER(0xccd430u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: FUN_00ccd440 */
GEN_NOFRAME uint F_00ccd440(void)
{
  GEN_ENTER(0xccd440u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: FUN_00ccd450 */
GEN_FRAME unsigned int GEN_THISCALL F_00ccd450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xccd450u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  F_00ccd220(param_2,param_3,param_4,param_5);
  return;
}

/* ref: FUN_00ccd480 */
GEN_NOFRAME uint F_00ccd480(void)
{
  GEN_ENTER(0xccd480u, 0u, 0u, 0u, 0u);
  return 6;
}

/* ref: FUN_00ccd490 */
GEN_FRAME unsigned int GEN_THISCALL F_00ccd490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xccd490u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  F_00ccd2f0(param_2,param_3,param_4,param_5);
  return;
}

/* ref: FUN_00ccd4c0 */
GEN_NOFRAME uint F_00ccd4c0(void)
{
  GEN_ENTER(0xccd4c0u, 0u, 0u, 0u, 0u);
  return 7;
}

/* ref: FUN_00ccd4d0 */
GEN_FRAME uint GEN_THISCALL F_00ccd4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xccd4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float10 fVar1;
  float fVar3;
  float10 fVar4;
  float local_8;
  
  fVar3 = *(float *)&REFG(undefined, 0x112addc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb10((int)this + 4 GEN_EDX_FWD,fVar3);
  F_00cccb10((int)this + 0x28 GEN_EDX_ARG,*(float *)&REFG(undefined, 0x112ade0));
  F_00cccb10((int)this + 0x4c GEN_EDX_ARG,(float)(float10)1);
  if (param_1 == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 4))))
              ((int)this + 4,(undefined4)gen_fl2bits(*(float *)&REFG(undefined, 0x112addc)));
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x28) + 4))))
              ((int)this + 0x28,(undefined4)gen_fl2bits(*(float *)&REFG(undefined, 0x112ade0)));
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x4c) + 4))))
              ((int)this + 0x4c,(undefined4)gen_fl2bits((float)(float10)1));
    return (uint)this;
  }
  local_8 = *(float *)(param_1 + 0x14);
  fVar1 = (float10)0;
  fVar4 = (float10)local_8;
  if (!(fVar1 <= fVar4) == (GEN_ISNAN(fVar4) || GEN_ISNAN(fVar1))) {
    fVar1 = (float10)1;
    if (!(fVar4 <= fVar1) != (GEN_ISNAN(fVar1) || GEN_ISNAN(fVar4))) {
      local_8 = (float)fVar1;
    }
  }
  else {
    local_8 = (float)fVar1;
  }
  fVar1 = ((float10)GEN_TOD(pow((float10)*(double *)&REFG(undefined, 0x1092098),
                               (float10)((float)GEN_TOF((((float10)1 - (float10)local_8) *
                                               (float10)*(double *)&REFG(undefined, 0x10ac278)))))));
  F_00cccbd0((int)this + 4 GEN_EDX_ARG,(float)((float10)(float)fVar1 * (float10)*(double *)&REFG(undefined, 0x112b0a0)));
  local_8 = *(float *)(param_1 + 0x18);
  fVar4 = (float10)0;
  fVar1 = (float10)local_8;
  if (fVar1 <= fVar4 && ((!GEN_ISNAN(fVar4) && !GEN_ISNAN(fVar1)) && fVar4 != fVar1)) {
    local_8 = (float)fVar4;
  }
  F_00cccbd0((int)this + 0x28 GEN_EDX_ARG,local_8);
  F_00cccbd0((int)this + 0x4c GEN_EDX_ARG,*(float *)(param_1 + 0x1c));
  return (uint)this;
}

/* ref: FUN_00ccd620 */
GEN_FRAME uint F_00ccd620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xccd620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00ccd6c0 */
GEN_FRAME unsigned int F_00ccd6c0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xccd6c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  double dVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  dVar2 = (double)param_2;
  if (!(*(double *)&REFG(undefined, 0x112b0a0) <= dVar2) ==
      ((GEN_ISNAN(dVar2) || GEN_ISNAN(*(double *)&REFG(undefined, 0x112b0a0))) || dVar2 == *(double *)&REFG(undefined, 0x112b0a0))) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xccd620));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("freq <= FILTER_MAX_FREQUENCY",&REFG(undefined, 0x112ade4),"FilterBase.cpp",0xc4,
                    "SQEX::CDev::Engine::Sd::Driver::FilterBase::CalculateLowPassCoefficients");
  }
  fVar6 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * (float10)REFG(double, 0x10920b8)))));
  fVar3 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * (float10)REFG(double, 0x10920b8)))));
  fVar4 = (float10)REFG(double, 0x1088108);
  fVar5 = (float10)((float)GEN_TOF((((float10)param_3 * fVar4) * (float10)(float)fVar3)));
  fVar3 = (float10)1;
  fVar6 = (float10)(float)fVar6;
  fVar7 = (float10)((float)GEN_TOF((fVar3 / (fVar5 + fVar3))));
  param_1[3] = ((float)GEN_TOF((fVar7 * (fVar6 + fVar6))));
  param_1[4] = ((float)GEN_TOF(((fVar5 - fVar3) * fVar7)));
  fVar1 = ((float)GEN_TOF(((fVar3 - fVar6) * fVar7)));
  param_1[1] = fVar1;
  fVar1 = (float)((float10)fVar1 * fVar4);
  *param_1 = fVar1;
  param_1[2] = fVar1;
  return 0;
}

/* ref: FUN_00ccd7a0 */
GEN_FRAME unsigned int F_00ccd7a0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xccd7a0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  double dVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  dVar2 = (double)param_2;
  if (!(*(double *)&REFG(undefined, 0x112b0a0) <= dVar2) ==
      ((GEN_ISNAN(dVar2) || GEN_ISNAN(*(double *)&REFG(undefined, 0x112b0a0))) || dVar2 == *(double *)&REFG(undefined, 0x112b0a0))) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xccd620));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("freq <= FILTER_MAX_FREQUENCY",&REFG(undefined, 0x112ade5),"FilterBase.cpp",0xe2,
                    "SQEX::CDev::Engine::Sd::Driver::FilterBase::CalculateHighPassCoefficients");
  }
  fVar5 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * (float10)REFG(double, 0x10920b8)))));
  fVar3 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * (float10)REFG(double, 0x10920b8)))));
  fVar4 = (float10)((float)GEN_TOF((((float10)param_3 * (float10)REFG(double, 0x1088108)) * (float10)(float)fVar3)));
  fVar3 = (float10)1;
  fVar5 = (float10)(float)fVar5;
  fVar6 = (float10)((float)GEN_TOF((fVar3 / (fVar4 + fVar3))));
  param_1[3] = ((float)GEN_TOF((fVar6 * (fVar5 + fVar5))));
  param_1[4] = ((float)GEN_TOF(((fVar4 - fVar3) * fVar6)));
  fVar1 = ((float)GEN_TOF(-((fVar5 + fVar3) * fVar6)));
  param_1[1] = fVar1;
  fVar1 = (float)((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x10968b0));
  *param_1 = fVar1;
  param_1[2] = fVar1;
  return 0;
}

/* ref: FUN_00ccd890 */
GEN_FRAME uint F_00ccd890(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xccd890u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  double dVar2;
  float10 fVar3;
  float10 fVar4;
  
  dVar2 = (double)param_2;
  if (!(*(double *)&REFG(undefined, 0x112b0a0) <= dVar2) ==
      ((GEN_ISNAN(dVar2) || GEN_ISNAN(*(double *)&REFG(undefined, 0x112b0a0))) || dVar2 == *(double *)&REFG(undefined, 0x112b0a0))) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xccd620));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("freq <= FILTER_MAX_FREQUENCY",&REFG(undefined, 0x112ade6),"FilterBase.cpp",0x100,
                    "SQEX::CDev::Engine::Sd::Driver::FilterBase::CalculateBandPassCoefficients");
  }
  fVar4 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * (float10)REFG(double, 0x10920b8)))));
  fVar1 = ((float)GEN_TOF((((float10)param_3 * (float10)REFG(double, 0x1088108)) * (float10)(float)fVar4)));
  fVar4 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * (float10)REFG(double, 0x10920b8)))));
  fVar3 = (float10)((float)GEN_TOF(((float10)1 / ((float10)fVar1 + (float10)1))));
  param_1[3] = ((float)GEN_TOF((fVar3 * ((float10)(float)fVar4 + (float10)(float)fVar4))));
  fVar4 = (float10)fVar1;
  param_1[4] = ((float)GEN_TOF(((fVar4 - (float10)REFG(double, 0x1088130)) * fVar3)));
  fVar1 = (float)(fVar4 * fVar3);
  *param_1 = fVar1;
  param_1[1] = (float)(float10)0;
  param_1[2] = ((float)GEN_TOF(-(float10)fVar1));
  return (uint)param_1;
}

/* ref: FUN_00ccd960 */
GEN_FRAME uint F_00ccd960(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xccd960u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float10 fVar5;
  
  dVar4 = (double)param_2;
  if (!(*(double *)&REFG(undefined, 0x112b0a0) <= dVar4) ==
      ((GEN_ISNAN(dVar4) || GEN_ISNAN(*(double *)&REFG(undefined, 0x112b0a0))) || dVar4 == *(double *)&REFG(undefined, 0x112b0a0))) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xccd620));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("freq <= FILTER_MAX_FREQUENCY",&REFG(undefined, 0x112ade7),"FilterBase.cpp",0x11e,
                    "SQEX::CDev::Engine::Sd::Driver::FilterBase::CalculateBandEliminateCoefficients"
                   );
  }
  fVar5 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * (float10)REFG(double, 0x10920b8)))));
  fVar1 = ((float)GEN_TOF((((float10)param_3 * (float10)REFG(double, 0x1088108)) * (float10)(float)fVar5)));
  fVar2 = ((float)GEN_TOF(((float10)1 / ((float10)fVar1 + (float10)1))));
  fVar5 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * (float10)REFG(double, 0x10920b8)))));
  fVar3 = ((float)GEN_TOF(((float10)fVar2 * ((float10)(float)fVar5 + (float10)(float)fVar5))));
  param_1[3] = fVar3;
  param_1[4] = ((float)GEN_TOF((((float10)fVar1 - (float10)REFG(double, 0x1088130)) * (float10)fVar2)));
  *param_1 = fVar2;
  param_1[1] = ((float)GEN_TOF(-(float10)fVar3));
  param_1[2] = fVar2;
  return (uint)param_1;
}

/* ref: FUN_00ccda30 */
GEN_FRAME unsigned int F_00ccda30(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xccda30u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  dVar4 = (double)param_2;
  if (!(*(double *)&REFG(undefined, 0x112b0a0) <= dVar4) ==
      ((GEN_ISNAN(dVar4) || GEN_ISNAN(*(double *)&REFG(undefined, 0x112b0a0))) || dVar4 == *(double *)&REFG(undefined, 0x112b0a0))) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xccd620));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("freq <= FILTER_MAX_FREQUENCY",&REFG(undefined, 0x112ae31),"FilterBase.cpp",0x15a,
                    "SQEX::CDev::Engine::Sd::Driver::FilterBase::CalculatePeakingCoefficients");
  }
  fVar7 = (float10)REFG(double, 0x10920b8);
  fVar5 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * fVar7))));
  fVar1 = ((float)GEN_TOF((((float10)param_3 * (float10)REFG(double, 0x1088108)) * (float10)(float)fVar5)));
  fVar6 = (float10)fVar1;
  fVar5 = (float10)1;
  fVar2 = ((float)GEN_TOF((fVar5 / (fVar6 + fVar5))));
  fVar3 = (float)((float10)param_4 * fVar6);
  *param_1 = ((float)GEN_TOF(((fVar5 + (float10)fVar3) * (float10)fVar2)));
  fVar5 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * fVar7))));
  fVar7 = (float10)fVar2;
  fVar2 = ((float)GEN_TOF((fVar7 * ((float10)(float)fVar5 * (float10)*(double *)&REFG(undefined, 0x10944c0)))));
  param_1[1] = fVar2;
  param_1[2] = ((float)GEN_TOF((fVar7 * ((float10)1 - (float10)fVar3))));
  param_1[3] = ((float)GEN_TOF(-(float10)fVar2));
  param_1[4] = ((float)GEN_TOF((((float10)fVar1 - (float10)1) * fVar7)));
  return 0;
}

/* ref: FUN_00ccdb20 */
GEN_FRAME unsigned int GEN_THISCALL F_00ccdb20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xccdb20u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  F_00ccd6c0(param_2,param_3,param_4);
  return;
}

/* ref: FUN_00ccdb50 */
GEN_FRAME unsigned int GEN_THISCALL F_00ccdb50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xccdb50u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  F_00ccd7a0(param_2,param_3,param_4);
  return;
}

/* ref: FUN_00ccdb80 */
GEN_FRAME uint GEN_THISCALL F_00ccdb80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xccdb80u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ccd890(param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00ccdbb0 */
GEN_FRAME uint GEN_THISCALL F_00ccdbb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xccdbb0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ccd960(param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00ccdbe0 */
GEN_FRAME unsigned int GEN_THISCALL F_00ccdbe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xccdbe0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  F_00ccda30(param_2,param_3,param_4,param_5);
  return;
}

/* ref: FUN_00ccdc20 */
GEN_FRAME float10 F_00ccdc20(float gen_a0)
{
  GEN_ENTER(0xccdc20u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = ((float10)GEN_TOD(fsin((float10)param_1)));
  return (float10)(float)fVar1;
}

/* ref: FUN_00ccdc40 */
GEN_FRAME float10 F_00ccdc40(float gen_a0)
{
  GEN_ENTER(0xccdc40u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = ((float10)GEN_TOD(fcos((float10)param_1)));
  return (float10)(float)fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioBounceXA2::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00ccdc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccdc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  code * pcVar1;
  
  if (-1 < param_2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 8))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
    *(undefined4 *)(this + 8) = param_1;
    pcVar1 = *(gen_code32 *)(*(int *)this + 4);
    *(int *)(this + 0xc) = param_2;
    (*pcVar1)(this,1);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioBounceXA2::vf1 */
GEN_FRAME unsigned int GEN_THISCALL F_00ccdcd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xccdcd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = *(int * PTR32 *)(this + 8);
    if ((char)param_1 != '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD,*(undefined4 *)(this + 0xc),0);
      return;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0xc),0);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioBounceXA2::vf2 */
GEN_FRAME byte GEN_THISCALL F_00ccdd00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xccdd00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)(this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (iVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))
              (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(this + 0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioBounceXA2::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_00ccdd40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xccdd40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00ccdd50 */
GEN_FRAME uint GEN_THISCALL F_00ccdd50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xccdd50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ce5770(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ccdd90 */
GEN_NOFRAME uint GEN_THISCALL F_00ccdd90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xccdd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112b0d4));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x50,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (this_00 == (undefined *)0x0) {
    *(undefined4 *)((int)this + 4) = 0;
    return (uint)this;
  }
  uVar1 = F_00ce53a0(this_00 GEN_EDX_ARG);
  *(uint *)((int)this + 4) = uVar1;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioBounceXA2::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ccde00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xccde00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioBounceXA2::vf4 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ccde10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xccde10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AudioBounceXA2::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ccde20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xccde20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112b0d4));
  if (*(int *)(this + 4) != 0) {
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StereoDownmixerXA2::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00ccde80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccde80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (-1 < param_2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 8))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
    *(undefined4 *)(this + 8) = param_1;
    *(int *)(this + 0xc) = param_2;
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StereoDownmixerXA2::vf1 */
GEN_FRAME unsigned int GEN_THISCALL F_00ccdeb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xccdeb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = *(int * PTR32 *)(this + 8);
    if ((char)param_1 != '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD,*(undefined4 *)(this + 0xc),0);
      return;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0xc),0);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StereoDownmixerXA2::vf2 */
GEN_FRAME byte GEN_THISCALL F_00ccdee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xccdee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)(this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (iVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))
              (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(this + 0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StereoDownmixerXA2::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_00ccdf20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xccdf20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00ccdf30 */
GEN_FRAME uint GEN_THISCALL F_00ccdf30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xccdf30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112b124));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x44,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (this_00 == (undefined *)0x0) {
    *(undefined4 *)((int)this + 4) = 0;
    return (uint)this;
  }
  uVar1 = F_00ce5930(this_00 GEN_EDX_ARG);
  *(uint *)((int)this + 4) = uVar1;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StereoDownmixerXA2::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ccdfb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xccdfb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StereoDownmixerXA2::vf4 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ccdfc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xccdfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StereoDownmixerXA2::vf7 */
GEN_NOFRAME byte GEN_THISCALL F_00ccdfd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xccdfd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x10) == 2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StereoDownmixerXA2::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_00ccdfe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xccdfe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StereoDownmixerXA2::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ccdff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xccdff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112b124));
  if (*(int *)(this + 4) != 0) {
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ProLogicIIzXA2::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00cce050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcce050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (-1 < param_2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 8))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
    *(undefined4 *)(this + 8) = param_1;
    *(int *)(this + 0xc) = param_2;
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ProLogicIIzXA2::vf1 */
GEN_FRAME unsigned int GEN_THISCALL F_00cce080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcce080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = *(int * PTR32 *)(this + 8);
    if ((char)param_1 != '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD,*(undefined4 *)(this + 0xc),0);
      return;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0xc),0);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ProLogicIIzXA2::vf2 */
GEN_FRAME byte GEN_THISCALL F_00cce0b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcce0b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)(this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (iVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))
              (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(this + 0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ProLogicIIzXA2::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_00cce0f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcce0f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00cce100 */
GEN_NOFRAME uint GEN_THISCALL F_00cce100(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcce100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112b174));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x50,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (this_00 == (undefined *)0x0) {
    *(undefined4 *)((int)this + 4) = 0;
    return (uint)this;
  }
  uVar1 = F_00ce5b90(this_00 GEN_EDX_ARG);
  *(uint *)((int)this + 4) = uVar1;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ProLogicIIzXA2::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cce170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcce170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ProLogicIIzXA2::vf4 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cce180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcce180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ProLogicIIzXA2::vf7 */
GEN_NOFRAME byte F_00cce190(void)
{
  GEN_ENTER(0xcce190u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ProLogicIIzXA2::vf8 */
GEN_NOFRAME uint F_00cce1a0(void)
{
  GEN_ENTER(0xcce1a0u, 0u, 0u, 0u, 0u);
  return 6;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ProLogicIIzXA2::vf0 */
GEN_FRAME uint GEN_THISCALL F_00cce1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcce1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112b174));
  if (*(int *)(this + 4) != 0) {
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cce1f0 */
GEN_FRAME unsigned int F_00cce1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcce1f0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf1 */
GEN_FRAME unsigned int GEN_THISCALL F_00cce210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcce210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  if (*(int *)(this + 0x40) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x40);
    if ((char)param_1 != '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD,0,0);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x40) + 0x30))))
                (*(int * PTR32 *)(this + 0x40) GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)0),0);
      return;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(this,piVar1,0,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x40) + 0x30))))
              (*(int * PTR32 *)(this + 0x40) GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)1),0);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf2 */
GEN_FRAME byte GEN_THISCALL F_00cce270(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcce270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)(this + 0x40);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
  if (iVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x40) + 0x14))))(*(int * PTR32 *)(this + 0x40) GEN_EDX_FWD,0,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf13 */
GEN_FRAME byte GEN_THISCALL F_00cce2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcce2a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 == *(int *)(in_ecx + 0x3c);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf19 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cce2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcce2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00cce2c0 */
GEN_FRAME uint GEN_THISCALL F_00cce2c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcce2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  float * pfVar9;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar3;
  if ((*(int *)((int)this + 0x44) != 0) && (*(int *)((int)this + 0x40) != 0)) {
    fVar5 = F_00ce61c0(this GEN_EDX_FWD);
    fVar5 = (float10)(float)fVar5;
    fVar6 = (float10)(float)((float10)1 - (float10)REFG(double, 0x1088108) * fVar5);
    fVar7 = (float10)(float)(fVar6 * fVar5);
    fVar5 = (float10)((float)GEN_TOF((fVar7 * ((float10)1 - fVar5))));
    fVar1 = (float)(fVar7 - fVar5);
    iVar4 = REFG(int, 0x15d8bac);
    if (REFG(int, 0x15d8bac) == 0) {
      iVar4 = REFG(int, 0x15d8ba8);
    }
    piVar2 = *(int * PTR32 *)((int)this + 0x40);
    if (*(int *)((int)this + 0x84) == 8) {
      (*(float *)(gen_frame + 0x8)) = fVar1;
      pfVar9 = &(*(float *)(gen_frame + 0x8));
      (*(float *)(gen_frame + 0xc)) = fVar1;
      fVar7 = (float10)0;
      uVar8 = 8;
      (*(float *)(gen_frame + 0x10)) = (float)fVar7;
      (*(float *)(gen_frame + 0x14)) = (float)fVar7;
      (*(float *)(gen_frame + 0x20)) = (float)fVar7;
      (*(float *)(gen_frame + 0x24)) = (float)fVar7;
      (*(float *)(gen_frame + 0x18)) = fVar1;
      (*(float *)(gen_frame + 0x1c)) = fVar1;
    }
    else {
      (*(float *)(gen_frame + 0x10)) = fVar1;
      pfVar9 = &(*(float *)(gen_frame + 0x10));
      (*(float *)(gen_frame + 0x14)) = fVar1;
      uVar8 = 6;
      (*(float *)(gen_frame + 0x18)) = (float)(float10)0;
      (*(float *)(gen_frame + 0x1c)) = (float)(float10)0;
      (*(float *)(gen_frame + 0x20)) = fVar1;
      (*(float *)(gen_frame + 0x24)) = fVar1;
    }
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x24));
    (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x24));
    (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x1c));
    (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x24));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x40))(piVar2 GEN_EDX_ARG,iVar4,1,uVar8,pfVar9,0);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x44) + 0x30))))
                      (*(int * PTR32 *)((int)this + 0x44) GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(fVar5 + fVar6)),0
                      );
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00cce3c0 */
GEN_FRAME uint GEN_THISCALL F_00cce3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcce3c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00cccbd0((int)this + 0x8c GEN_EDX_FWD,*param_1);
  F_00cccbd0((int)this + 0xb0 GEN_EDX_ARG,(float)(int)gen_fl2bits(param_1[1]));
  F_00cccbd0((int)this + 0xd4 GEN_EDX_ARG,param_1[4]);
  F_00cccbd0((int)this + 0xf8 GEN_EDX_ARG,param_1[5]);
  F_00cccbd0((int)this + 0x11c GEN_EDX_ARG,param_1[7]);
  F_00cccbd0((int)this + 0x140 GEN_EDX_ARG,param_1[9]);
  F_00cccbd0((int)this + 0x164 GEN_EDX_ARG,param_1[10]);
  F_00cccbd0((int)this + 0x188 GEN_EDX_ARG,param_1[0xb]);
  F_00cccd90((int)this + 0x8c GEN_EDX_ARG,*param_2,param_3);
  F_00cccd90((int)this + 0xb0 GEN_EDX_ARG,(float)(int)gen_fl2bits(param_2[1]),param_3);
  F_00cccd90((int)this + 0xd4 GEN_EDX_ARG,param_2[4],param_3);
  F_00cccd90((int)this + 0xf8 GEN_EDX_ARG,param_2[5],param_3);
  F_00cccd90((int)this + 0x11c GEN_EDX_ARG,param_2[7],param_3);
  F_00cccd90((int)this + 0x140 GEN_EDX_ARG,param_2[9],param_3);
  F_00cccd90((int)this + 0x164 GEN_EDX_ARG,param_2[10],param_3);
  uVar1 = F_00cccd90((int)this + 0x188 GEN_EDX_ARG,param_2[0xb],param_3);
  *(undefined4 *)((int)this + 0x88) = param_3;
  return uVar1;
}

/* ref: FUN_00cce510 */
GEN_FRAME uint GEN_THISCALL F_00cce510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcce510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  if (*(int *)((int)this + 0x40) != 0) {
    (*(float *)(gen_frame + 0x4)) = (float)(float10)0;
    F_00c48350(((undefined1 *)(gen_frame + 0x8)),0,0x30);
    F_00ccf2a0((int)this + 0x4c,(uint)&(*(float *)(gen_frame + 0x4)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0x18))))
              (*(int * PTR32 *)((int)this + 0x40) GEN_EDX_ARG,0,&(*(float *)(gen_frame + 0x4)),0x34,0);
  }
  uVar1 = F_00cce2c0(this GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf16 */
GEN_FRAME uint GEN_THISCALL F_00cce580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcce580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined * pRVar5;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  if (param_1 != 0) {
    uVar2 = F_00cce3c0(this GEN_EDX_FWD,this + 0x4c,&REFG(undefined4, 0x134ca60),param_1);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
    return uVar2;
  }
  *(undefined4 *)(this + 0x88) = 0;
  puVar4 = &REFG(undefined4, 0x134ca60);
  pRVar5 = this + 0x4c;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 - 1) {
    *(undefined4 *)pRVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    pRVar5 = pRVar5 + 4;
  }
  piVar1 = *(int * PTR32 *)(this + 0x40);
  if (piVar1 != (int *)0x0) {
    (*(float *)(gen_frame + 0x4)) = (float)(float10)0;
    F_00c48350(((undefined1 *)(gen_frame + 0x8)),0,0x30);
    F_00ccf2a0(this + 0x4c,(uint)&(*(float *)(gen_frame + 0x4)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG,0,&(*(float *)(gen_frame + 0x4)),0x34,0);
  }
  uVar2 = F_00cce2c0(this GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf17 */
GEN_FRAME uint GEN_THISCALL F_00cce630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcce630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined * pRVar5;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  if (param_1 != 0) {
    uVar2 = F_00cce3c0(this GEN_EDX_FWD,this + 0x4c,&REFG(undefined, 0x134c990) + *(int *)(this + 0x80) * 0x34,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
    return uVar2;
  }
  *(undefined4 *)(this + 0x88) = 0;
  puVar4 = (undefined4 *)(&REFG(undefined, 0x134c990) + *(int *)(this + 0x80) * 0x34);
  pRVar5 = this + 0x4c;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 - 1) {
    *(undefined4 *)pRVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    pRVar5 = pRVar5 + 4;
  }
  piVar1 = *(int * PTR32 *)(this + 0x40);
  if (piVar1 != (int *)0x0) {
    (*(float *)(gen_frame + 0x4)) = (float)(float10)0;
    F_00c48350(((undefined1 *)(gen_frame + 0x8)),0,0x30);
    F_00ccf2a0(this + 0x4c,(uint)&(*(float *)(gen_frame + 0x4)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG,0,&(*(float *)(gen_frame + 0x4)),0x34,0);
  }
  uVar2 = F_00cce2c0(this GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00cce6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcce6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte bVar1;
  int iVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  float10 extraout_ST0_06;
  
  if (param_1 != 0) {
    bVar1 = F_00ce61f0(this GEN_EDX_FWD,param_1);
    if (bVar1 != 0) {
      F_00cce2c0(this GEN_EDX_ARG);
    }
    if (*(int *)(this + 0x88) != 0) {
      iVar2 = *(int *)(this + 0x88) - param_1;
      *(int *)(this + 0x88) = iVar2;
      if (iVar2 < 0) {
        *(undefined4 *)(this + 0x88) = 0;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 8))))(this + 0x8c GEN_EDX_ARG,param_1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xb0) + 8))))(this + 0xb0 GEN_EDX_ARG,param_1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xd4) + 8))))(this + 0xd4 GEN_EDX_ARG,param_1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xf8) + 8))))(this + 0xf8 GEN_EDX_ARG,param_1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x11c) + 8))))(this + 0x11c GEN_EDX_ARG,param_1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x140) + 8))))(this + 0x140 GEN_EDX_ARG,param_1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x164) + 8))))(this + 0x164 GEN_EDX_ARG,param_1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x188) + 8))))(this + 0x188 GEN_EDX_ARG,param_1);
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 0x10))))(this + 0x8c);
      *(float *)(this + 0x4c) = (float)extraout_ST0;
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xb0) + 0x10))))(this + 0xb0);
      *(int *)(this + 0x50) = (int)extraout_ST0_00;
      extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xd4) + 0x10))))(this + 0xd4);
      *(float *)(this + 0x5c) = (float)extraout_ST0_01;
      extraout_ST0_02 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xf8) + 0x10))))(this + 0xf8);
      *(float *)(this + 0x60) = (float)extraout_ST0_02;
      extraout_ST0_03 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x11c) + 0x10))))(this + 0x11c);
      *(float *)(this + 0x68) = (float)extraout_ST0_03;
      extraout_ST0_04 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x140) + 0x10))))(this + 0x140);
      *(float *)(this + 0x70) = (float)extraout_ST0_04;
      extraout_ST0_05 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x164) + 0x10))))(this + 0x164);
      *(float *)(this + 0x74) = (float)extraout_ST0_05;
      extraout_ST0_06 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x188) + 0x10))))(this + 0x188);
      *(float *)(this + 0x78) = (float)extraout_ST0_06;
      F_00cce510(this GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: FUN_00cce880 */
GEN_FRAME uint F_00cce880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcce880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf18 */
GEN_FRAME uint GEN_THISCALL F_00cce920(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcce920u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  uint uVar5;
  float10 fVar6;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  fVar3 = (float10)0;
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 1: ;
    fVar6 = (float10)param_2;
    if (!((float10)REFG(float, 0x10abc60) <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN((float10)REFG(float, 0x10abc60)))) {
      if (fVar3 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar3)) && fVar6 != fVar3)) {
        param_2 = (float)fVar3;
      }
      *(int *)((int)param_1 + 0x50) = (int)param_2;
    }
    else {
      *(int *)((int)param_1 + 0x50) = (int)REFG(float, 0x10abc60);
    }
    break;
  case 2: ;
    fVar6 = (float10)param_2;
    if (!((float10)REFG(float, 0x10abc60) <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN((float10)REFG(float, 0x10abc60)))) {
      if (fVar3 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar3)) && fVar6 != fVar3)) {
        param_2 = (float)fVar3;
      }
      *(int *)((int)param_1 + 0x54) = (int)param_2;
    }
    else {
      *(int *)((int)param_1 + 0x54) = (int)REFG(float, 0x10abc60);
    }
    break;
  case 3: ;
    dVar4 = (double)param_2;
    if (!(REFG(double, 0x1094800) <= dVar4) == (GEN_ISNAN(dVar4) || GEN_ISNAN(REFG(double, 0x1094800)))) {
      if (!(dVar4 <= (double)REFG(float, 0x10a0d00)) == (GEN_ISNAN((double)REFG(float, 0x10a0d00)) || GEN_ISNAN(dVar4))) {
        *(float *)((int)param_1 + 0x5c) = param_2;
      }
      else {
        *(float *)((int)param_1 + 0x5c) = GEN_FLT_TO(*(float *)((int)param_1 + 0x5c), REFG(float, 0x10a0d00));
      }
    }
    else {
      *(float *)((int)param_1 + 0x5c) = GEN_FLT_TO(*(float *)((int)param_1 + 0x5c), REFG(float, 0x1094884));
    }
    break;
  case 4: ;
    dVar4 = (double)param_2;
    if (!(REFG(double, 0x1094800) <= dVar4) == (GEN_ISNAN(dVar4) || GEN_ISNAN(REFG(double, 0x1094800)))) {
      if (!(dVar4 <= (double)REFG(float, 0x10928e4)) == (GEN_ISNAN((double)REFG(float, 0x10928e4)) || GEN_ISNAN(dVar4))) {
        *(float *)((int)param_1 + 0x60) = param_2;
      }
      else {
        *(float *)((int)param_1 + 0x60) = GEN_FLT_TO(*(float *)((int)param_1 + 0x60), REFG(float, 0x10928e4));
      }
    }
    else {
      *(float *)((int)param_1 + 0x60) = GEN_FLT_TO(*(float *)((int)param_1 + 0x60), REFG(float, 0x1094884));
    }
    break;
  case 5: ;
    dVar4 = (double)param_2;
    if (!((double)REFG(float, 0x10abc60) <= dVar4) == (GEN_ISNAN(dVar4) || GEN_ISNAN((double)REFG(float, 0x10abc60)))) {
      if (*(double *)&REFG(undefined, 0x10912a8) <= dVar4 &&
          ((!GEN_ISNAN(dVar4) && !GEN_ISNAN(*(double *)&REFG(undefined, 0x10912a8))) && dVar4 != *(double *)&REFG(undefined, 0x10912a8))) {
        param_2 = REFG(float, 0x1094724);
      }
      *(int *)((int)param_1 + 100) = (int)param_2;
    }
    else {
      *(int *)((int)param_1 + 100) = (int)REFG(float, 0x10abc60);
    }
    break;
  case 6: ;
    fVar6 = (float10)param_2;
    if (!(fVar3 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar3))) {
      if (!(fVar6 <= (float10)REFG(float, 0x10abe50)) == (GEN_ISNAN((float10)REFG(float, 0x10abe50)) || GEN_ISNAN(fVar6))) {
        *(float *)((int)param_1 + 0x68) = param_2;
      }
      else {
        *(float *)((int)param_1 + 0x68) = GEN_FLT_TO(*(float *)((int)param_1 + 0x68), REFG(float, 0x10abe50));
      }
    }
    else {
      *(float *)((int)param_1 + 0x68) = (float)fVar3;
    }
    break;
  case 7: ;
    dVar4 = (double)param_2;
    if (!((double)REFG(float, 0x10abc60) <= dVar4) == (GEN_ISNAN(dVar4) || GEN_ISNAN((double)REFG(float, 0x10abc60)))) {
      if (*(double *)&REFG(undefined, 0x10a5500) <= dVar4 &&
          ((!GEN_ISNAN(dVar4) && !GEN_ISNAN(*(double *)&REFG(undefined, 0x10a5500))) && dVar4 != *(double *)&REFG(undefined, 0x10a5500))) {
        param_2 = REFG(float, 0x10946bc);
      }
      *(int *)((int)param_1 + 0x6c) = (int)param_2;
    }
    else {
      *(int *)((int)param_1 + 0x6c) = (int)REFG(float, 0x10abc60);
    }
    break;
  case 8: ;
    fVar6 = (float10)param_2;
    if (!(fVar3 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar3))) {
      fVar2 = (float10)REFG(double, 0x1094800);
      if (fVar2 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar2)) && fVar6 != fVar2)) {
        param_2 = REFG(float, 0x1094884);
      }
      *(float *)((int)param_1 + 0x70) = param_2;
    }
    else {
      *(float *)((int)param_1 + 0x70) = (float)fVar3;
    }
    break;
  case 9: ;
    fVar6 = (float10)param_2;
    if (!(fVar3 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar3))) {
      fVar2 = (float10)*(double *)&REFG(undefined, 0x1088118);
      if (fVar2 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar2)) && fVar6 != fVar2)) {
        param_2 = REFG(float, 0x10916ec);
      }
      *(float *)((int)param_1 + 0x74) = param_2;
    }
    else {
      *(float *)((int)param_1 + 0x74) = (float)fVar3;
    }
    break;
  case 10: ;
    fVar6 = (float10)param_2;
    if (!(fVar3 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar3))) {
      fVar2 = (float10)*(double *)&REFG(undefined, 0x1088118);
      if (fVar2 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar2)) && fVar6 != fVar2)) {
        param_2 = REFG(float, 0x10916ec);
      }
      *(float *)((int)param_1 + 0x78) = param_2;
    }
    else {
      *(float *)((int)param_1 + 0x78) = (float)fVar3;
    }
    break;
  case 0xb: ;
    fVar6 = (float10)param_2;
    if (!((float10)REFG(float, 0x10a0d00) <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN((float10)REFG(float, 0x10a0d00)))) {
      if (!(fVar6 <= (float10)REFG(float, 0x10ac04c)) != (GEN_ISNAN((float10)REFG(float, 0x10ac04c)) || GEN_ISNAN(fVar6))) {
        param_2 = REFG(float, 0x10ac04c);
      }
    }
    else {
      param_2 = REFG(float, 0x10a0d00);
    }
    *(float *)((int)param_1 + 0x7c) = param_2;
    break;
  case 0xc: ;
    fVar6 = (float10)param_2;
    if (!(fVar3 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar3))) {
      fVar2 = (float10)*(double *)&REFG(undefined, 0x1088118);
      if (fVar2 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar2)) && fVar6 != fVar2)) {
        param_2 = REFG(float, 0x10916ec);
      }
      *(float *)((int)param_1 + 0x4c) = param_2;
    }
    else {
      *(float *)((int)param_1 + 0x4c) = (float)fVar3;
    }
    break;
  case 0xd: ;
    fVar6 = (float10)param_2;
    if (!(fVar3 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar3))) {
      if (!(fVar6 <= (float10)REFG(float, 0x1094880)) == (GEN_ISNAN((float10)REFG(float, 0x1094880)) || GEN_ISNAN(fVar6))) {
        *(float *)((int)param_1 + 0x58) = param_2;
      }
      else {
        *(float *)((int)param_1 + 0x58) = GEN_FLT_TO(*(float *)((int)param_1 + 0x58), REFG(float, 0x1094880));
      }
    }
    else {
      *(float *)((int)param_1 + 0x58) = (float)fVar3;
    }
  }
  piVar1 = *(int * PTR32 *)((int)param_1 + 0x40);
  if (piVar1 != (int *)0x0) {
    (*(float *)(gen_frame + 0x4)) = (float)fVar3;
    F_00c48350(((undefined1 *)(gen_frame + 0x8)),0,0x30);
    F_00ccf2a0((int)param_1 + 0x4c,(uint)&(*(float *)(gen_frame + 0x4)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG,0,&(*(float *)(gen_frame + 0x4)),0x34,0);
  }
  uVar5 = F_00cce2c0(param_1 GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf15 */
GEN_FRAME uint GEN_THISCALL F_00cced60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcced60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * pRVar4;
  
  uVar2 = param_1 - 1;
  if (uVar2 < 4) {
    *(uint *)(this + 0x80) = uVar2;
    puVar3 = (undefined4 *)(&REFG(undefined, 0x134c990) + uVar2 * 0x34);
    pRVar4 = this + 0x4c;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 - 1) {
      *(undefined4 *)pRVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pRVar4 = pRVar4 + 4;
    }
    this = (undefined *)F_00cce510(this GEN_EDX_FWD);
  }
  return (uint)this;
}

/* ref: FUN_00cceda0 */
GEN_FRAME uint GEN_THISCALL F_00cceda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcceda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x430];
  LPVOID * ppv;
  int * piVar1;
  undefined * rclsid;
  HRESULT HVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  bool bVar7;
  
  (*(uint *)(gen_frame + 0x428)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x42c);
  F_00ce62e0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x84) = param_3;
  ppv = (LPVOID *)((int)this + 0x48);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x112b60c));
  *(undefined4 *)((int)this + 0x3c) = param_1;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *ppv = (LPVOID)0x0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  F_00cccb10((int)this + 0x8c GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10((int)this + 0xb0 GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10((int)this + 0xd4 GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10((int)this + 0xf8 GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10((int)this + 0x11c GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10((int)this + 0x140 GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10((int)this + 0x164 GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10((int)this + 0x188 GEN_EDX_ARG,(float)(float10)0);
  bVar7 = ((byte)REFG(undefined4, 0x15d8bb4) & 1) != 0;
  (*(uint *)(gen_frame + 0x1c)) = (uint)bVar7;
  rclsid = (undefined *)&REFG(undefined, 0x112b590);
  if (!bVar7) {
    rclsid = (undefined *)&REFG(undefined, 0x112b580);
  }
  HVar2 = gen_imp_CoCreateInstance(rclsid,(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x112b570),ppv);
  if (HVar2 < 0) {
    if ((*(uint *)(gen_frame + 0x1c)) != 0) {
      (*(undefined1 *)(gen_frame + 0x427)) = 0;
      F_00c472ec(((char *)(gen_frame + 0x28)),0x400,0x3ff,
                   "[sd][Driver][XA2]Error: XAudio2CreateReverb debug mode. Error code 0x%08X. Retry no debug mode..."
                   ,HVar2);
      F_00cbee70(((char *)(gen_frame + 0x28)),2);
      HVar2 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x112b580),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x112b570),ppv);
      (*(undefined1 *)(gen_frame + 0x427)) = 0;
      if (HVar2 < 0) {
        F_00c472ec(((char *)(gen_frame + 0x28)),0x400,0x3ff,"failed\n");
      }
      else {
        F_00c472ec(((char *)(gen_frame + 0x28)),0x400,0x3ff,"success\n");
      }
      F_00cbee70(((char *)(gen_frame + 0x28)),2);
    }
    if (HVar2 < 0) {
      if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
        REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcce880));
      }
      ((code *)REFG(gen_code32, 0x15d861c))("SUCCEEDED(hr)","[sd][Driver][XA2]Error: XAudio2CreateReverb",
                      "XA2\\Effects\\ReverbXA2.cpp",0xbb,
                      "SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::ReverbXA2");
    }
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(LPVOID * PTR32 *)(gen_frame + 0x18)) = (LPVOID *)0x0;
  (*(LPVOID * PTR32 *)(gen_frame + 0x18)) = &(*(LPVOID *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0xc)) = 1;
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  (*(LPVOID *)(gen_frame + 0x8)) = *ppv;
  (*(undefined4 *)(gen_frame + 0x14)) = 1;
  iVar4 = REFG(int, 0x15d8bac);
  if (REFG(int, 0x15d8bac) == 0) {
    iVar4 = REFG(int, 0x15d8ba8);
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = iVar4;
  (*(undefined4 *)(gen_frame + 0x20)) = 1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = &(*(undefined4 *)(gen_frame + 0x0));
  if ((iVar4 != 0) &&
     (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x24))))
                        (REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,(int)this + 0x40,1,REFG(undefined4, 0x15d8be0),8,3,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x14))),
     (int)uVar3 < 0)) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcce880));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("!\"[sd][Driver][XA2] Error: CreateSubmixVoice\"",&REFG(undefined, 0x112b20d),
                    "XA2\\Effects\\ReverbXA2.cpp",0xd8,
                    "SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::ReverbXA2");
  }
  if ((*(int *)((int)this + 0x40) != 0) &&
     (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x24))))
                        (REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,(int)this + 0x44,param_3,REFG(undefined4, 0x15d8be0),8,2,&(*(undefined4 *)(gen_frame + 0x20)),0),
     (int)uVar3 < 0)) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcce880));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("!\"[sd][Driver][XA2] Error: CreateSubmixVoice\"",&REFG(undefined, 0x112b20e),
                    "XA2\\Effects\\ReverbXA2.cpp",0xe2,
                    "SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::ReverbXA2");
  }
  *(undefined4 *)((int)this + 0x80) = 2;
  puVar5 = &REFG(undefined4, 0x134c9f8);
  puVar6 = (undefined4 *)((int)this + 0x4c);
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  F_00cce510(this GEN_EDX_ARG);
  piVar1 = *(int * PTR32 *)((int)this + 0x40);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,0,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0x30))))
              (*(int * PTR32 *)((int)this + 0x40) GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)1),0);
  }
  F_00ccb520(*(undefined4 *)((int)this + 0x40),*(undefined4 *)((int)this + 0x44));
  F_00c47745((*(uint *)(gen_frame + 0x428)) ^ (uint)(uint)(gen_frame + 0x42c) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ccf160 */
GEN_NOFRAME uint GEN_THISCALL F_00ccf160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xccf160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x48);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x112b60c));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 0x48) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x44);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x40);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG,0,0);
    if ((int)uVar2 < 0) {
      if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
        REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcce880));
      }
      ((code *)REFG(gen_code32, 0x15d861c))("!\"[SD][DRIVER] pWetSubmix_ DisableEffect Error.\"",&REFG(undefined, 0x112b20f),
                      "XA2\\Effects\\ReverbXA2.cpp",0x107,
                      "SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::~ReverbXA2");
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0x48))))(*(int * PTR32 *)((int)this + 0x40) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  F_00cccb40((int)this + 0x188 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x164 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x140 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x11c GEN_EDX_ARG);
  F_00cccb40((int)this + 0xf8 GEN_EDX_ARG);
  F_00cccb40((int)this + 0xd4 GEN_EDX_ARG);
  F_00cccb40((int)this + 0xb0 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x8c GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x112b5b4));
  F_00cccb40((int)this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar2;
}

/* ref: FUN_00ccf270 */
GEN_FRAME unsigned int F_00ccf270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccf270u, gen_a0, gen_a1, 0u, 0u);
  LPVOID * param_1 = (LPVOID *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined * rclsid;
  
  rclsid = (undefined *)&REFG(undefined, 0x112b590);
  if ((param_2 & 1) == 0) {
    rclsid = (undefined *)&REFG(undefined, 0x112b580);
  }
  return (uint)(gen_imp_CoCreateInstance(rclsid,(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x112b570),param_1));
}

/* ref: FUN_00ccf2a0 */
GEN_FRAME byte F_00ccf2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccf2a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 local_c;
  
  uVar3 = (*(uint *)&gen_args[1]);
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[0]);
  *(undefined4 *)((*(uint *)&gen_args[1]) + 0x30) = GEN_FLT_TO(*(undefined4 *)((*(uint *)&gen_args[1]) + 0x30), REFG(float, 0x10916ec));
  *(undefined1 *)((*(uint *)&gen_args[1]) + 0x13) = 6;
  *(undefined4 *)((*(uint *)&gen_args[1]) + 9) = 0x1b060605;
  *(undefined1 *)((*(uint *)&gen_args[1]) + 0x11) = 4;
  *(undefined1 *)((*(uint *)&gen_args[1]) + 0xd) = 0x1b;
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1088118);
  *(float *)((*(uint *)&gen_args[1]) + 0x18) = ((float)GEN_TOF(((float10)(int)(*(undefined4 * PTR32 *)&gen_args[0])[1] / fVar6)));
  *(float *)((*(uint *)&gen_args[1]) + 0x1c) = ((float)GEN_TOF(((float10)(int)(*(undefined4 * PTR32 *)&gen_args[0])[2] / fVar6)));
  fVar7 = (float10)1;
  fVar6 = ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[5])));
  if (!(fVar6 <= fVar7) == ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6)) || fVar7 == fVar6)) {
    fVar6 = ((float10)GEN_TOD(GEN_X87MATH(((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[5]))),3)));
    iVar5 = (int)((double)(float)fVar6 * *(double *)&REFG(undefined, 0x1094788));
    if (iVar5 < -8) {
      iVar5 = -8;
    }
    *(undefined1 *)((*(uint *)&gen_args[1]) + 0x10) = 8;
    if (iVar5 < 0) {
      cVar4 = (char)iVar5 + '\b';
    }
    else {
      cVar4 = '\b';
    }
    *(char *)((*(uint *)&gen_args[1]) + 0x12) = cVar4;
    fVar6 = ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[4])));
  }
  else {
    fVar6 = ((float10)GEN_TOD(GEN_X87MATH(((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[5]))),3)));
    iVar5 = (int)((double)(float)fVar6 * *(double *)&REFG(undefined, 0x10944a0));
    if (iVar5 < -8) {
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x10) = 0;
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x12) = 8;
      fVar6 = ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[4]))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[5])));
    }
    else if (iVar5 < 0) {
      *(char *)((*(uint *)&gen_args[1]) + 0x10) = (char)iVar5 + '\b';
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x12) = 8;
      fVar6 = ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[4]))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[5])));
    }
    else {
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x10) = 8;
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x12) = 8;
      fVar6 = ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[4]))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[5])));
    }
  }
  *(float *)((*(uint *)&gen_args[1]) + 0x28) = (float)fVar6;
  fVar6 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[7]))) * fVar6))));
  if ((float10)*(float *)&REFG(undefined, 0x112b5ac) <= ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1]))))) {
    (*(uint *)&gen_args[1]) = *(uint *)&REFG(undefined, 0x112b5a8);
  }
  else if (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))) <= (float10)1) {
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)(float10)1);
  }
  local_c = (undefined4)(longlong)TRUNC(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))));
  *(undefined4 *)(uVar3 + 4) = local_c;
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(((float)GEN_TOF((fVar6 * ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[9])))))));
  fVar7 = (float10)*(float *)&REFG(undefined, 0x112b5a4);
  fVar6 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1]))));
  if (!(fVar6 <= fVar7) != ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6)) || fVar7 == fVar6)) {
    (*(uint *)&gen_args[1]) = *(uint *)&REFG(undefined, 0x112b5a0);
  }
  (*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 0)))) = (byte)(int)TRUNC(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))));
  *(byte *)(uVar3 + 8) = (byte)(*(undefined4 * PTR32 *)&gen_args[0]);
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1088118);
  *(float *)(uVar3 + 0x20) = (float)((float10)(int)puVar2[6] / fVar6);
  *(float *)(uVar3 + 0x24) = (float)((float10)(int)puVar2[8] / fVar6);
  (*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 0)))) =
       (byte)(int)TRUNC((((float10)GEN_TOD(gen_bits2f(puVar2[10]))) * (float10)*(double *)&REFG(undefined, 0x1094560)) /
                        fVar6);
  *(byte *)(uVar3 + 0xe) = (byte)(*(undefined4 * PTR32 *)&gen_args[0]);
  *(byte *)(uVar3 + 0xf) = (byte)(*(undefined4 * PTR32 *)&gen_args[0]);
  *(undefined4 *)(uVar3 + 0x2c) = puVar2[0xb];
  *(undefined4 *)(uVar3 + 0x14) = puVar2[0xc];
  *(undefined4 *)uVar3 = *puVar2;
  return (byte)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ccf490 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ccf490(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xccf490u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[21])REFP(0x112b5b4));
  F_00cccb40(in_ecx + 2 GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf14 */
GEN_NOFRAME uint F_00ccf4b0(void)
{
  GEN_ENTER(0xccf4b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf15 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ccf4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xccf4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf16 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ccf4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xccf4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf17 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ccf4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xccf4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf3 */
GEN_FRAME uint GEN_THISCALL F_00ccf4f0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xccf4f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x24))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),param_4);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ccf510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xccf510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x112b5b4));
  F_00cccb40(this + 8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_00ccf550(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xccf550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x3c);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf14 */
GEN_NOFRAME uint GEN_THISCALL F_00ccf560(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xccf560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ccf570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccf570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf6 */
GEN_NOFRAME uint F_00ccf580(void)
{
  GEN_ENTER(0xccf580u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ccf590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xccf590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ccf160(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ccf5c0 */
GEN_FRAME uint F_00ccf5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccf5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c51da0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ccf5d0 */
GEN_FRAME uint F_00ccf5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xccf5d0u, gen_a0, gen_a1, gen_a2, 0u);
  gen_size32 in_eax = (gen_size32)gen_a0;
  char * in_ecx = (char *)(uintptr_t)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c4c591(param_3,in_ecx,in_eax);
  return uVar1;
}

/* ref: FUN_00ccf5f0 */
GEN_FRAME unsigned int F_00ccf5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccf5f0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00ccf610 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ccf610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xccf610u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x112bb98));
  return;
}

/* ref: FUN_00ccf620 */
GEN_NOFRAME uint F_00ccf620(unsigned int gen_a0)
{
  GEN_ENTER(0xccf620u, gen_a0, 0u, 0u, 0u);
  char * in_eax = (char *)(uintptr_t)gen_a0;
  char cVar1;
  bool bVar2;
  
  cVar1 = *in_eax;
  bVar2 = cVar1 < '!';
  do {
    if (cVar1 == '\0') {
      return (uint)in_eax;
    }
    if (cVar1 < '!') {
      bVar2 = true;
    }
    else {
      if (bVar2) {
        return (uint)in_eax;
      }
      bVar2 = false;
    }
    cVar1 = in_eax[1];
    in_eax = in_eax + 1;
  } while( true );
}

/* ref: FUN_00ccf670 */
GEN_NOFRAME byte F_00ccf670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccf670u, gen_a0, gen_a1, 0u, 0u);
  char * in_eax = (char *)(uintptr_t)gen_a0;
  uint * in_esi = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *in_esi = 0;
  if ((in_eax != (char *)0x0) && (*in_eax != '\0')) {
    uVar1 = F_00c4c74c(in_eax);
    *in_esi = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00ccf690 */
GEN_NOFRAME byte F_00ccf690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccf690u, gen_a0, gen_a1, 0u, 0u);
  char * in_eax = (char *)(uintptr_t)gen_a0;
  float * in_esi = (float *)(uintptr_t)gen_a1;
  double dVar1;
  
  *in_esi = (float)(float10)0;
  if ((in_eax != (char *)0x0) && (*in_eax != '\0')) {
    dVar1 = F_00c4acaa(in_eax);
    *in_esi = (float)dVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00ccf6b0 */
GEN_FRAME byte GEN_THISCALL F_00ccf6b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xccf6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char * pcVar1;
  float * in_esi;
  char cVar2;
  float10 fVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined * pvVar9;
  int iVar10;
  undefined4 * puVar11;
  char * pcVar12;
  undefined4 * puVar13;
  float10 fVar14;
  
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = this;
  (*(int *)(gen_frame + 0x60)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x64)) = param_1;
  do {
    pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x68));
    cVar2 = *(*(char * PTR32 *)(gen_frame + 0x64));
    pcVar12 = (*(char * PTR32 *)(gen_frame + 0x64));
    if (cVar2 < '!') {
      while ((cVar2 != '\0' && (cVar2 < '!'))) {
        pcVar1 = pcVar12 + 1;
        pcVar12 = pcVar12 + 1;
        cVar2 = *pcVar1;
      }
    }
    iVar6 = F_00c4c591(pcVar12,"MAX_SOUND",9);
    if (iVar6 == 0) {
      cVar2 = *pcVar12;
      bVar8 = cVar2 < '!';
      while (cVar2 != '\0') {
        if (cVar2 < '!') {
          bVar4 = true;
        }
        else {
          bVar4 = false;
          if (bVar8) break;
        }
        pcVar1 = pcVar12 + 1;
        pcVar12 = pcVar12 + 1;
        bVar8 = bVar4;
        cVar2 = *pcVar1;
      }
      *(undefined4 *)((int)pvVar9 + 4) = 0;
      if (*pcVar12 == '\0') {
        return 0;
      }
      uVar7 = F_00c4c74c(pcVar12);
      *(uint *)((int)pvVar9 + 4) = uVar7;
    }
    else {
      iVar6 = F_00c4c591(pcVar12,"MAX_BUS",7);
      if (iVar6 == 0) {
        cVar2 = *pcVar12;
        bVar8 = cVar2 < '!';
        while (cVar2 != '\0') {
          if (cVar2 < '!') {
            bVar4 = true;
          }
          else {
            bVar4 = false;
            if (bVar8) break;
          }
          pcVar1 = pcVar12 + 1;
          pcVar12 = pcVar12 + 1;
          bVar8 = bVar4;
          cVar2 = *pcVar1;
        }
      }
      else {
        iVar6 = F_00c4c591(pcVar12,"MAX_REVERB",10);
        if (iVar6 == 0) {
          cVar2 = *pcVar12;
          bVar8 = cVar2 < '!';
          while (cVar2 != '\0') {
            if (cVar2 < '!') {
              bVar8 = true;
            }
            else {
              if (bVar8) break;
              bVar8 = false;
            }
            pcVar1 = pcVar12 + 1;
            pcVar12 = pcVar12 + 1;
            cVar2 = *pcVar1;
          }
          *(undefined4 *)((int)pvVar9 + 8) = 0;
          if (*pcVar12 == '\0') {
            return 0;
          }
          uVar7 = F_00c4c74c(pcVar12);
          *(uint *)((int)pvVar9 + 8) = uVar7;
        }
        else {
          iVar6 = F_00c4c591(pcVar12,"MAX_BANK",8);
          if (iVar6 == 0) {
            cVar2 = *pcVar12;
            bVar8 = cVar2 < '!';
            while (cVar2 != '\0') {
              if (cVar2 < '!') {
                bVar4 = true;
              }
              else {
                bVar4 = false;
                if (bVar8) break;
              }
              pcVar1 = pcVar12 + 1;
              pcVar12 = pcVar12 + 1;
              bVar8 = bVar4;
              cVar2 = *pcVar1;
            }
            *(undefined4 *)((int)pvVar9 + 0xc) = 0;
            if (*pcVar12 == '\0') {
              return 0;
            }
            uVar7 = F_00c4c74c(pcVar12);
            *(uint *)((int)pvVar9 + 0xc) = uVar7;
          }
          else {
            iVar6 = F_00c4c591(pcVar12,"MAX_LAY_SOUNDPAGE",0x11);
            if (iVar6 == 0) {
              pcVar12 = (char *)F_00ccf620(pcVar12);
              *(undefined4 *)((int)pvVar9 + 0x20) = 0;
              if (pcVar12 == (char *)0x0) {
                return 0;
              }
              if (*pcVar12 == '\0') {
                return 0;
              }
              uVar7 = F_00c4c74c(pcVar12);
              *(uint *)((int)pvVar9 + 0x20) = uVar7;
            }
            else {
              iVar6 = F_00c4c591(pcVar12,"MAX_LAY_SOUNDOBJECT",0x13);
              if (iVar6 == 0) {
                pcVar12 = (char *)F_00ccf620(pcVar12);
                *(undefined4 *)((int)pvVar9 + 0x24) = 0;
                if (pcVar12 == (char *)0x0) {
                  return 0;
                }
                if (*pcVar12 == '\0') {
                  return 0;
                }
                uVar7 = F_00c4c74c(pcVar12);
                *(uint *)((int)pvVar9 + 0x24) = uVar7;
              }
              else {
                iVar6 = F_00c4c591(pcVar12,"MAX_LAY_OBSTRUCTION",0x13);
                if (iVar6 == 0) {
                  uVar7 = F_00ccf620(pcVar12);
                  bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x28);
                }
                else {
                  iVar6 = F_00c4c591(pcVar12,"MAX_LAY_LISTENER",0x10);
                  if (iVar6 != 0) {
                    iVar6 = F_00c4c591(pcVar12,"VOLUME_CURVE",0xc);
                    if (iVar6 == 0) {
                      pcVar12 = (char *)F_00ccf620(pcVar12);
                      if (*pcVar12 == '\0') {
                        return 0;
                      }
                      iVar6 = F_00c4c591(pcVar12,"AUTO",4);
                      if (iVar6 == 0) {
                        *(undefined4 *)((int)pvVar9 + 0x30) = 0;
                      }
                      else {
                        iVar6 = F_00c4c591(pcVar12,"SQUARE",6);
                        if (iVar6 == 0) {
                          *(undefined4 *)((int)pvVar9 + 0x30) = 1;
                        }
                        else {
                          iVar6 = F_00c4c591(pcVar12,"WHITE",5);
                          if (iVar6 == 0) {
                            *(undefined4 *)((int)pvVar9 + 0x30) = 2;
                          }
                          else {
                            iVar6 = F_00c4c591(pcVar12,"WII_EMU",7);
                            if (iVar6 == 0) {
                              *(undefined4 *)((int)pvVar9 + 0x30) = 4;
                            }
                            else {
                              iVar6 = F_00c4c591(pcVar12,"ONLY_MUSIC_WHITE",0x10);
                              if (iVar6 == 0) {
                                *(undefined4 *)((int)pvVar9 + 0x30) = 5;
                              }
                              else {
                                iVar6 = F_00c4c591(pcVar12,((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x112b730)))),3);
                                if (iVar6 == 0) {
                                  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x30) = 3;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      iVar6 = F_00c4c591(pcVar12,"LISTENER_PAN_MODE",0x11);
                      if (iVar6 == 0) {
                        pcVar12 = (char *)F_00ccf620(pcVar12);
                        if (*pcVar12 == '\0') {
                          return 0;
                        }
                        iVar6 = F_00c4c591(pcVar12,"NORMAL",6);
                        if (iVar6 == 0) {
                          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x34) = 1;
                        }
                      }
                      else {
                        iVar6 = F_00c4c591(pcVar12,((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x112b750)))),3);
                        if (iVar6 == 0) {
                          (*(int *)(gen_frame + 0x5c)) = 0;
                          pcVar12 = (char *)F_00ccf620(pcVar12);
                          if (*pcVar12 == '\0') {
                            return 0;
                          }
                          uVar7 = F_00ccf620(pcVar12);
                          bVar5 = F_00ccf670(uVar7,((ushort *)(gen_frame + 0x58)));
                          if (bVar5 == 0) {
                            return 0;
                          }
                          uVar7 = F_00ccf620(uVar7);
                          F_00ccf670(uVar7,&(*(int *)(gen_frame + 0x5c)));
                          param_1 = (char *)(uint)((ushort *)(gen_frame + 0x58))[0];
                          if ((*(int *)(gen_frame + 0x5c)) == 3) {
                            param_1 = ((char *)GEN_TOP(CONCAT22(1,((ushort *)(gen_frame + 0x58))[0])));
                          }
                          iVar6 = (*(int *)(gen_frame + 0x60)) * 4;
                          (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                          *(char * PTR32 *)((int)pvVar9 + iVar6 + 0x94) = param_1;
                        }
                        else {
                          iVar6 = F_00c4c591(pcVar12,"UNUSE_STREAMING",0xf);
                          if (iVar6 == 0) {
                            *(undefined1 *)((int)pvVar9 + 0x1bc) = 1;
                          }
                          else {
                            iVar6 = F_00c4c591(pcVar12,"USE_BOUNCE",10);
                            if (iVar6 != 0) {
                              iVar6 = F_00c4c591(pcVar12,"MAX_STREAMS",0xb);
                              if (iVar6 == 0) {
                                uVar7 = F_00ccf620(pcVar12);
                                bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x40);
                              }
                              else {
                                iVar6 = F_00c4c591(pcVar12,"ENABLE_MAX_STREAMS_RESERVATION",0x1e);
                                if (iVar6 == 0) {
                                  *(undefined1 *)((int)pvVar9 + 0x1bf) = 1;
                                  goto LAB_00ccfee0;
                                }
                                iVar6 = F_00c4c591(pcVar12,"VSYNC_TIME_BASE",0xf);
                                if (iVar6 == 0) {
                                  uVar7 = F_00ccf620(pcVar12);
                                  bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x14);
                                }
                                else {
                                  iVar6 = F_00c4c591(pcVar12,"STREAM_READ_THREAD_PRIORITY",0x1b);
                                  if (iVar6 == 0) {
                                    uVar7 = F_00ccf620(pcVar12);
                                    bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x44);
                                  }
                                  else {
                                    iVar6 = F_00c4c591(pcVar12,"STREAM_READ_THREAD_PROCESSOR",0x1c);
                                    if (iVar6 == 0) {
                                      uVar7 = F_00ccf620(pcVar12);
                                      bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x48);
                                    }
                                    else {
                                      iVar6 = F_00c4c591(pcVar12,"TIMER_VSYNC_PROCESSOR",0x15);
                                      if (iVar6 == 0) {
                                        uVar7 = F_00ccf620(pcVar12);
                                        bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x4c);
                                      }
                                      else {
                                        iVar6 = F_00c4c591(pcVar12,"TIMER_MSEC_PROCESSOR",0x14);
                                        if (iVar6 == 0) {
                                          uVar7 = F_00ccf620(pcVar12);
                                          bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x50);
                                        }
                                        else {
                                          iVar6 = F_00c4c591(pcVar12,"XAUDIO2_PROCESSOR",0x11);
                                          if (iVar6 == 0) {
                                            uVar7 = F_00ccf620(pcVar12);
                                            bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x54);
                                          }
                                          else {
                                            iVar6 = F_00c4c591(pcVar12,"OUTPUT_CHANNELS",0xf);
                                            if (iVar6 == 0) {
                                              uVar7 = F_00ccf620(pcVar12);
                                              bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x60);
                                            }
                                            else {
                                              iVar6 = F_00c4c591(pcVar12,"MULTISTREAM_PRIORITY",0x14
                                                                );
                                              if (iVar6 != 0) {
                                                iVar6 = F_00c4c591(pcVar12,"ENABLE_SCD_PRIORITY",
                                                                   0x13);
                                                if (iVar6 == 0) {
                                                  *(undefined1 *)((int)pvVar9 + 0x1bd) = 1;
                                                }
                                                else {
                                                  iVar6 = F_00c4c591(pcVar12,
                                                  "XAUDIO2_MAX_VOICE_FREQUENCY_RATIO",0x21);
                                                  if (iVar6 == 0) {
                                                    uVar7 = F_00ccf620(pcVar12);
                                                    in_esi = (float *)((int)pvVar9 + 0x58);
                                                    bVar5 = F_00ccf690(uVar7,in_esi);
                                                    if (bVar5 == 0) {
                                                      return 0;
                                                    }
                                                    if (!((float10)*in_esi <= (float10)REFG(float, 0x10b2b38))
                                                        == (GEN_ISNAN((float10)REFG(float, 0x10b2b38)) ||
                                                           GEN_ISNAN((float10)*in_esi))) {
                                                      fVar14 = (float10)*(float *)&REFG(undefined, 0x112bb9c);
                                                      fVar3 = (float10)*in_esi;
                                                      if (fVar3 <= fVar14 &&
                                                          ((!GEN_ISNAN(fVar14) && !GEN_ISNAN(fVar3)) &&
                                                          fVar14 != fVar3)) {
                                                        *in_esi = *(float *)&REFG(undefined, 0x112bb9c);
                                                      }
                                                    }
                                                    else {
                                                      *in_esi = GEN_FLT_TO(*in_esi, REFG(float, 0x10b2b38));
                                                    }
                                                  }
                                                  else {
                                                    iVar6 = F_00c4c591(pcVar12,"STRINGENDO_SETTING",
                                                                       0x12);
                                                    if (iVar6 == 0) {
                                                      uVar7 = F_00ccf620(pcVar12);
                                                      bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 100);
                                                      if (bVar5 == 0) {
                                                        return 0;
                                                      }
                                                      uVar7 = F_00ccf620(uVar7);
                                                      bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x68)
                                                      ;
                                                      goto joined_r0x00ccfc2d;
                                                    }
                                                    iVar6 = F_00c4c591(pcVar12,"STRINGENDO_VOLUMES",
                                                                       0x12);
                                                    if (iVar6 == 0) {
                                                      iVar10 = (int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x6c;
                                                      iVar6 = 0;
                                                      do {
                                                        pcVar12 = (char *)F_00ccf620(pcVar12);
                                                        bVar5 = F_00ccf690(pcVar12,iVar10);
                                                        if (bVar5 == 0) break;
                                                        iVar6 = iVar6 + 1;
                                                        iVar10 = iVar10 + 4;
                                                      } while (iVar6 < 4);
                                                    }
                                                    else {
                                                      iVar6 = F_00c4c591(pcVar12,
                                                  "STRINGENDO_FADE_TIMES",0x15);
                                                  if (iVar6 == 0) {
                                                    iVar6 = 0;
                                                    iVar10 = (int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x7c;
                                                    do {
                                                      pcVar12 = (char *)F_00ccf620(pcVar12);
                                                      bVar5 = F_00ccf670(pcVar12,iVar10);
                                                      if (bVar5 == 0) break;
                                                      iVar6 = iVar6 + 1;
                                                      iVar10 = iVar10 + 4;
                                                    } while (iVar6 < 4);
                                                  }
                                                  else {
                                                    iVar6 = F_00c4c591(pcVar12,
                                                  "FFXIV_BG_LOWPASS_BUSSES",0x17);
                                                  if (iVar6 == 0) {
                                                    uVar7 = F_00ccf620(pcVar12);
                                                    bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x8c);
                                                    if (bVar5 == 0) {
LAB_00ccfe8f: ;
                                                      F_00c48350((undefined *)((int)&(*(undefined4 *)(gen_frame + 0x4)) + 1),0,0x53);
                                                      cVar2 = *(char *)((int)pvVar9 + 0x1bf);
                                                      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = 1;
                                                      puVar11 = &(*(undefined4 *)(gen_frame + 0x4));
                                                      puVar13 = (undefined4 *)((int)pvVar9 + 0x114);
                                                      for (iVar6 = 0x15; iVar6 != 0;
                                                          iVar6 = iVar6 - 1) {
                                                        *puVar13 = *puVar11;
                                                        puVar11 = puVar11 + 1;
                                                        puVar13 = puVar13 + 1;
                                                      }
                                                      *(int *)((int)pvVar9 + 0x38) = (*(int *)(gen_frame + 0x60));
                                                      *(undefined4 *)((int)pvVar9 + 0x3c) = 1;
                                                      if ((cVar2 != '\0') &&
                                                         (-1 < *(int *)((int)pvVar9 + 0x40))) {
                                                        *(int *)((int)pvVar9 + 4) =
                                                             *(int *)((int)pvVar9 + 4) +
                                                             *(int *)((int)pvVar9 + 0x40);
                                                      }
                                                      return 1;
                                                    }
                                                    uVar7 = F_00ccf620(uVar7);
                                                    bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x90);
                                                    if (bVar5 == 0) goto LAB_00ccfe8f;
                                                  }
                                                  else {
                                                    iVar6 = F_00c4c591(pcVar12,
                                                  "CAFE_ENABLE_TV_SURROUND",0x17);
                                                  if (iVar6 == 0) {
                                                    *(undefined1 *)((int)pvVar9 + 0x1c0) = 1;
                                                  }
                                                  else {
                                                    iVar6 = F_00c4c591(pcVar12,((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x112b8fc)))),3);
                                                  pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x68));
                                                  if (iVar6 == 0) goto LAB_00ccfe8f;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                                goto LAB_00ccfee0;
                                              }
                                              uVar7 = F_00ccf620(pcVar12);
                                              bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x5c);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto joined_r0x00ccfc2d;
                            }
                            *(undefined1 *)((int)pvVar9 + 0x1be) = 1;
                          }
                        }
                      }
                    }
                    goto LAB_00ccfee0;
                  }
                  uVar7 = F_00ccf620(pcVar12);
                  bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x2c);
                }
joined_r0x00ccfc2d: ;
                if (bVar5 == 0) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
LAB_00ccfee0: ;
    uVar7 = F_00c51da0((*(char * PTR32 *)(gen_frame + 0x64)),10);
    (*(char * PTR32 *)(gen_frame + 0x64)) = (char *)(uVar7 + 1);
  } while( true );
}

/* ref: FUN_00ccff00 */
GEN_FRAME uint GEN_THISCALL F_00ccff00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xccff00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float10 fVar1;
  byte bVar2;
  undefined2 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  *(undefined4 *)((int)this + 0x58) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x58), REFG(float, 0x10928e4));
  *(undefined4 *)((int)this + 0x10) = 0x10;
  *(undefined4 *)((int)this + 0x14) = 0x10;
  *(undefined4 *)((int)this + 0x28) = 0x10;
  *(undefined4 *)((int)this + 0x2c) = 8;
  *(undefined4 *)((int)this + 0x40) = 0xffffffff;
  *(undefined4 *)((int)this + 0x54) = 0xffffffff;
  *(undefined4 *)((int)this + 0x60) = 8;
  *(undefined4 *)((int)this + 100) = 0xffffffff;
  *(undefined4 *)((int)this + 0x8c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x90) = 0xffffffff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112bb98));
  *(undefined4 *)((int)this + 4) = 0x40;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 0xc) = 0x180;
  *(undefined4 *)((int)this + 0x18) = 0x3c;
  *(undefined4 *)((int)this + 0x1c) = 0x1e;
  *(undefined4 *)((int)this + 0x20) = 0x20;
  *(undefined4 *)((int)this + 0x24) = 0x80;
  *(undefined4 *)((int)this + 0x30) = 1;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  puVar3 = (undefined2 *)((int)this + 0x94);
  iVar4 = 0x1f;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  fVar1 = (float10)0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined1 *)((int)this + 0x1c0) = 0;
  *(float *)((int)this + 0x6c) = (float)fVar1;
  *(float *)((int)this + 0x70) = (float)fVar1;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(float *)((int)this + 0x74) = (float)fVar1;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(float *)((int)this + 0x78) = (float)fVar1;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  if ((param_1 != 0) && (bVar2 = F_00ccf6b0(this GEN_EDX_FWD,param_1), bVar2 != 0)) {
    return (uint)this;
  }
  F_00c48350((undefined *)((int)&(*(undefined4 *)(gen_frame + 0x8)) + 1),0,0x53);
  *(undefined4 *)((int)this + 0x94) = 4;
  *(undefined4 *)((int)this + 0x98) = 0x10020;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
  puVar5 = &(*(undefined4 *)(gen_frame + 0x8));
  puVar6 = (undefined4 *)((int)this + 0x114);
  for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)((int)this + 0x9c) = 4;
  *(undefined4 *)((int)this + 0x38) = 3;
  *(undefined4 *)((int)this + 0x3c) = 1;
  return (uint)this;
}

/* ref: FUN_00cd0070 */
GEN_FRAME uint F_00cd0070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcd0070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00cd0110 */
GEN_FRAME uint GEN_THISCALL F_00cd0110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0110u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x94 + param_2 * 4;
}

/* ref: FUN_00cd0130 */
GEN_FRAME uint GEN_THISCALL F_00cd0130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (int)*(short *)(in_ecx + 0x94 + param_2 * 4);
}

/* ref: FUN_00cd0150 */
GEN_FRAME uint GEN_THISCALL F_00cd0150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0150u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(ushort *)(in_ecx + 0x96 + param_2 * 4) & 1;
}

/* ref: FUN_00cd0170 */
GEN_FRAME uint GEN_THISCALL F_00cd0170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0170u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x54 + 0x114 + in_ecx;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ConfigReader::vf0 */
GEN_FRAME uint GEN_THISCALL F_00cd0190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112bb98));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cd01c0 */
GEN_FRAME unsigned int F_00cd01c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd01c0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cd01e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cd01e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd01e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x112bd98));
  if (*(int *)((int)this + 4) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    piVar2 = (int *)F_00ccb510();
    if (piVar1 != piVar2) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
      *(undefined4 *)((int)this + 4) = 0;
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x112bd8c));
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::BusXA2::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cd0230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00cd0240 */
GEN_FRAME uint F_00cd0240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcd0240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00cd02e0 */
GEN_FRAME uint GEN_THISCALL F_00cd02e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd02e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int * piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(int *)(gen_frame + 0x44)) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x112bd98));
  *(undefined4 *)((int)this + 4) = 0;
  uVar4 = 0xffffffff;
  iVar3 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = this;
  (*(undefined4 *)(gen_frame + 0x3c)) = param_2;
  (*(int *)(gen_frame + 0x40)) = param_3;
  (*(undefined2 *)(gen_frame + 0x48)) = 0;
  ((char *)(gen_frame + 0x4a))[0x1a] = '\0';
  ((char *)(gen_frame + 0x4a))[0x1b] = '\0';
  ((char *)(gen_frame + 0x4a))[0x1c] = '\0';
  ((char *)(gen_frame + 0x4a))[0x1d] = '\0';
  ((char *)(gen_frame + 0x4a))[0] = '\0';
  ((char *)(gen_frame + 0x4a))[1] = '\0';
  ((char *)(gen_frame + 0x4a))[2] = '\0';
  ((char *)(gen_frame + 0x4a))[3] = '\0';
  ((char *)(gen_frame + 0x4a))[4] = '\0';
  ((char *)(gen_frame + 0x4a))[5] = '\0';
  ((char *)(gen_frame + 0x4a))[6] = '\0';
  ((char *)(gen_frame + 0x4a))[7] = '\0';
  ((char *)(gen_frame + 0x4a))[8] = '\0';
  ((char *)(gen_frame + 0x4a))[9] = '\0';
  ((char *)(gen_frame + 0x4a))[10] = '\0';
  ((char *)(gen_frame + 0x4a))[0xb] = '\0';
  ((char *)(gen_frame + 0x4a))[0xc] = '\0';
  ((char *)(gen_frame + 0x4a))[0xd] = '\0';
  ((char *)(gen_frame + 0x4a))[0xe] = '\0';
  ((char *)(gen_frame + 0x4a))[0xf] = '\0';
  ((char *)(gen_frame + 0x4a))[0x10] = '\0';
  ((char *)(gen_frame + 0x4a))[0x11] = '\0';
  ((char *)(gen_frame + 0x4a))[0x12] = '\0';
  ((char *)(gen_frame + 0x4a))[0x13] = '\0';
  ((char *)(gen_frame + 0x4a))[0x14] = '\0';
  ((char *)(gen_frame + 0x4a))[0x15] = '\0';
  ((char *)(gen_frame + 0x4a))[0x16] = '\0';
  ((char *)(gen_frame + 0x4a))[0x17] = '\0';
  ((char *)(gen_frame + 0x4a))[0x18] = '\0';
  ((char *)(gen_frame + 0x4a))[0x19] = '\0';
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_FWD);
  }
  if (REFG(char, 0x15d7798) != '\0') {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
    }
    uVar4 = F_00cca4d0(&REFG(char, 0x15d7798) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x44)) - 1);
    if (uVar4 == 0) {
      (*(int *)(gen_frame + 0x44)) = (int)(char)(*(undefined2 *)(gen_frame + 0x48));
    }
  }
  if ((*(int *)(gen_frame + 0x40)) != 0) {
    iVar3 = *(int *)((*(int *)(gen_frame + 0x40)) + (*(int *)(gen_frame + 0x44)) * 4);
  }
  if ((*(int *)(gen_frame + 0x44)) != 0) {
    (*(int *)(gen_frame + 0x40)) = REFG(int, 0x134c7ec);
    if (uVar4 == 0) {
      cVar2 = (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x48)) + 1));
      if ('\0' < (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x48)) + 1))) {
        iVar5 = 0;
        do {
          if (((char *)(gen_frame + 0x4a))[(int)(iVar5)] == '\0') {
            ((uint *)(gen_frame + 0x8))[(int)(iVar5)] = REFG(undefined4, 0x15d8bac);
            if (REFG(undefined4, 0x15d8bac) == 0) {
              ((uint *)(gen_frame + 0x8))[(int)(iVar5)] = REFG(undefined4, 0x15d8ba8);
            }
          }
          else {
            uVar4 = F_00ccb4d0(((char *)(gen_frame + 0x4a))[(int)(iVar5)] - 1);
            ((uint *)(gen_frame + 0x8))[(int)(iVar5)] = uVar4;
          }
          ((uint *)(gen_frame + 0xc8))[(int)(iVar5 * 2 + 1)] = ((uint *)(gen_frame + 0x8))[(int)(iVar5)];
          ((uint *)(gen_frame + 0xc8))[(int)(iVar5 * 2)] = 0;
          iVar5 = iVar5 + 1;
          cVar2 = (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x48)) + 1));
        } while (iVar5 < (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x48)) + 1)));
      }
      (*(int *)(gen_frame + 0x28)) = (int)cVar2;
      (*(uint * PTR32 *)(gen_frame + 0x2c)) = ((uint *)(gen_frame + 0xc8));
      (*(int *)(gen_frame + 0x30)) = 0;
      (*(char * PTR32 *)(gen_frame + 0x34)) = ((char *)(gen_frame + 0x4a)) + 0x1e;
      if (iVar3 != 0) {
        iVar5 = 0;
        puVar6 = ((undefined4 *)(gen_frame + 0x70));
        do {
          if (*(int *)(iVar3 + iVar5 * 4) == 0) break;
          piVar1 = *(int * PTR32 *)(iVar3 + iVar5 * 4);
          *puVar6 = (*(undefined4 *)(gen_frame + 0x3c));
          puVar6[-1] = 0;
          uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG);
          puVar6[-2] = uVar4;
          iVar5 = iVar5 + 1;
          puVar6 = puVar6 + 3;
        } while (iVar5 < 8);
        (*(int *)(gen_frame + 0x30)) = iVar5;
        this = (*(undefined * PTR32 *)(gen_frame + 0x38));
      }
      if ((REFG(int * PTR32, 0x15d8ba4) != (int *)0x0) &&
         (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x24))))
                            (REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,(int)this + 4,(*(undefined4 *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x40)),0,0xff - (*(int *)(gen_frame + 0x44)),
                             &(*(int *)(gen_frame + 0x28)),-(uint)((*(int *)(gen_frame + 0x30)) != 0) & (uint)&(*(int *)(gen_frame + 0x30))), (int)uVar4 < 0)) {
        if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
          REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd0240));
        }
        ((code *)REFG(gen_code32, 0x15d861c))("!\"[sd][Driver][XA2] Error: CreateSubmixVoice\"","","XA2\\BusXA2.cpp",0x89,
                        "SQEX::CDev::Engine::Sd::Driver::XA2::BusXA2::BusXA2");
      }
      if (iVar3 != 0) {
        iVar5 = 0;
        do {
          if (*(int *)(iVar3 + iVar5 * 4) == 0) break;
          piVar1 = *(int * PTR32 *)(iVar3 + iVar5 * 4);
          ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 4),iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar5 < 8);
      }
    }
    else if (iVar3 == 0) {
      uVar4 = F_00ccb510();
      *(uint *)((int)this + 4) = uVar4;
      if (uVar4 == 0) {
        uVar4 = F_00ccc080((*(undefined4 *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x40)));
        *(uint *)((int)this + 4) = uVar4;
      }
    }
    else {
      (*(int *)(gen_frame + 0x30)) = 0;
      (*(char * PTR32 *)(gen_frame + 0x34)) = ((char *)(gen_frame + 0x4a)) + 0x1e;
      iVar5 = 0;
      puVar6 = ((undefined4 *)(gen_frame + 0x70));
      do {
        if (*(int *)(iVar3 + iVar5 * 4) == 0) break;
        piVar1 = *(int * PTR32 *)(iVar3 + iVar5 * 4);
        *puVar6 = (*(undefined4 *)(gen_frame + 0x3c));
        puVar6[-1] = 0;
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG);
        puVar6[-2] = uVar4;
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 3;
      } while (iVar5 < 8);
      (*(int *)(gen_frame + 0x30)) = iVar5;
      if ((REFG(int * PTR32, 0x15d8ba4) != (int *)0x0) &&
         (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x24))))
                            (REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,(int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 4,(*(undefined4 *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x40)),0,0xff - (*(int *)(gen_frame + 0x44)),0,
                             -(uint)(iVar5 != 0) & (uint)&(*(int *)(gen_frame + 0x30))), (int)uVar4 < 0)) {
        if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
          REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd0240));
        }
        ((code *)REFG(gen_code32, 0x15d861c))("!\"[sd][Driver][XA2] Error: CreateSubmixVoice\"",&REFG(undefined, 0x112bc7b),
                        "XA2\\BusXA2.cpp",0xae,"SQEX::CDev::Engine::Sd::Driver::XA2::BusXA2::BusXA2"
                       );
      }
      iVar5 = 0;
      do {
        this = (*(undefined * PTR32 *)(gen_frame + 0x38));
        if (*(int *)(iVar3 + iVar5 * 4) == 0) break;
        piVar1 = *(int * PTR32 *)(iVar3 + iVar5 * 4);
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 4),iVar5);
        iVar5 = iVar5 + 1;
        this = (*(undefined * PTR32 *)(gen_frame + 0x38));
      } while (iVar5 < 8);
    }
    F_00ccb4b0(*(undefined4 *)((int)this + 4),(*(int *)(gen_frame + 0x44)) - 1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IDSPBus::vf0 */
GEN_FRAME uint GEN_THISCALL F_00cd0710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x112bd8c));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::BusXA2::vf0 */
GEN_FRAME uint GEN_THISCALL F_00cd0750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int * piVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x112bd98));
  if (*(int *)(this + 4) != 0) {
    piVar1 = *(int * PTR32 *)(this + 4);
    piVar2 = (int *)F_00ccb510();
    if (piVar1 != piVar2) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
      *(undefined4 *)(this + 4) = 0;
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x112bd8c));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cd07a0 */
GEN_FRAME uint GEN_THISCALL F_00cd07a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd07a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  if (param_2 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112be30);
    F_00ccd4d0((undefined *)((int)this + 0x14) GEN_EDX_FWD,param_1);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112bdec));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) - 4 + (int)this))) = *(int *)(*(int *)this + 4) - 0x14;
  *(undefined4 *)((int)this + 4) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x120,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (this_00 == (undefined *)0x0) {
    *(undefined4 *)((int)this + 0xc) = 0;
    return (uint)this;
  }
  uVar1 = F_00ce6310(this_00 GEN_EDX_ARG);
  *(uint *)((int)this + 0xc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00cd0850 */
GEN_FRAME uint GEN_THISCALL F_00cd0850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd0850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  if (param_3 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112be30);
    F_00cccf50((int)this + 0x14 GEN_EDX_FWD,param_2);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112bdec));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) - 4 + (int)this))) = *(int *)(*(int *)this + 4) - 0x14;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_1 != (undefined *)0x0) {
    piVar1 = (int *)F_00ce6310(param_1 GEN_EDX_ARG);
    *(int * PTR32 *)((int)this + 0xc) = piVar1;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
    return (uint)this;
  }
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x120,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (this_00 == (undefined *)0x0) {
    *(undefined4 *)((int)this + 0xc) = 0;
    return (uint)this;
  }
  uVar2 = F_00ce6310(this_00 GEN_EDX_ARG);
  *(uint *)((int)this + 0xc) = uVar2;
  return (uint)this;
}

/* ref: FUN_00cd0920 */
GEN_NOFRAME uint GEN_THISCALL F_00cd0920(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd0920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this - 0x14) + 4))) - 0x14 + (int)this))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112bdec));
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)this - 0x14) + 4)));
  *((uint *)GEN_TOP(((uVar1 - 0x18) + (int)this))) = uVar1 - 0x14;
  *(undefined4 *)((int)this - 0x10) = 0;
  return uVar1;
}

/* ref: FUN_00cd0950 */
GEN_FRAME unsigned int GEN_THISCALL F_00cd0950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  if (*(int *)((int)this - 0x10) != 0) {
    piVar1 = *(int * PTR32 *)((int)this - 0x10);
    if ((char)param_1 != '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD,*(undefined4 *)((int)this - 0xc),0);
      return;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this - 0xc),0);
  }
  return;
}

/* ref: FUN_00cd0980 */
GEN_FRAME byte GEN_THISCALL F_00cd0980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd0980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)((int)this - 0x10);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
  if (iVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this - 0x10) + 0x14))))
              (*(int * PTR32 *)((int)this - 0x10) GEN_EDX_ARG,*(undefined4 *)((int)this - 0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0;
}

/* ref: FUN_00cd09c0 */
GEN_FRAME uint GEN_THISCALL F_00cd09c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd09c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  uVar6 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(uint *)(gen_frame + 0x18)) = uVar6;
  if (*(int *)((int)this - 0x10) != 0) {
    iVar4 = *(int *)((int)this - 0x14);
    iVar5 = *((int *)GEN_TOP((*(int *)(iVar4 + 4) - 0x14 + (int)this)));
    piVar1 = ((int *)GEN_TOP((*(int *)(iVar4 + 4) + 0x38 + (int)this)));
    piVar2 = ((int *)GEN_TOP((*(int *)(iVar4 + 4) + 0x14 + (int)this)));
    piVar3 = ((int *)GEN_TOP((*(int *)(iVar4 + 4) - 0x10 + (int)this)));
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,(undefined4)gen_fl2bits((float)extraout_ST0));
    extraout_ST0_01 = ((gen_fcode *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,(undefined4)gen_fl2bits((float)extraout_ST0_00));
    ((code *)*(gen_code32 *)(iVar5 + 0x3c))
              (*((int *)GEN_TOP((*(int *)((int)this - 0x14) + 4))) - 0x14 + (int)this,((undefined1 *)(gen_frame + 0x4)),
               (undefined4)gen_fl2bits((float)extraout_ST0_01));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this - 0x10) + 0x18))))
                      (*(int * PTR32 *)((int)this - 0x10) GEN_EDX_ARG,*(undefined4 *)((int)this - 0xc),((undefined1 *)(gen_frame + 0x4)),0x14,
                       0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_00cd0a60 */
GEN_FRAME uint GEN_THISCALL F_00cd0a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd0a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (-1 < param_2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this - 8) + 8))))(*(int * PTR32 *)((int)this - 8) GEN_EDX_FWD);
    *(undefined4 *)((int)this - 0x10) = param_1;
    *(int *)((int)this - 0xc) = param_2;
    F_00ce6650(*(undefined4 *)((int)this - 8) GEN_EDX_ARG);
  }
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this - 0x14) + 4)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 - 0x14 + (int)this) + 0x24))))(iVar1 - 0x14 + (int)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00cd0ab0 */
GEN_NOFRAME uint GEN_THISCALL F_00cd0ab0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd0ab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx - 8);
}

/* ref: FUN_00cd0ac0 */
GEN_NOFRAME uint GEN_THISCALL F_00cd0ac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd0ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd09c0(((undefined *)GEN_TOP(((int)this - *(int *)((int)this - 4)))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00cd0ad0 */
GEN_NOFRAME uint GEN_THISCALL F_00cd0ad0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd0ad0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0ab0(in_ecx - *(int *)(in_ecx - 4) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00cd0ae0 */
GEN_NOFRAME byte GEN_THISCALL F_00cd0ae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd0ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00cd0980(((undefined *)GEN_TOP(((int)this - *(int *)((int)this - 4)))) GEN_EDX_FWD);
  return bVar1;
}

/* ref: FUN_00cd0af0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cd0af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00cd0950(((undefined *)GEN_TOP(((int)this - *(int *)((int)this - 4)))) GEN_EDX_FWD,param_1);
  return;
}

/* ref: FUN_00cd0b00 */
GEN_NOFRAME uint GEN_THISCALL F_00cd0b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd0b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cd0a60(((undefined *)GEN_TOP(((int)this - *(int *)((int)this - 4)))) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00cd0b10 */
GEN_NOFRAME uint GEN_THISCALL F_00cd0b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cd0b70(((undefined *)GEN_TOP(((int)this - *(int *)((int)this - 4)))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00cd0b20 */
GEN_NOFRAME uint GEN_THISCALL F_00cd0b20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd0b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + (int)this))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112bdec));
  uVar1 = *(uint *)(*(int *)this + 4);
  *((uint *)GEN_TOP(((uVar1 - 4) + (int)this))) = uVar1 - 0x14;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x60 GEN_EDX_FWD);
  F_00cccb40((int)this + 0x3c GEN_EDX_ARG);
  F_00cccb40((int)this + 0x18 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cd0b70 */
GEN_FRAME uint GEN_THISCALL F_00cd0b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = (int *)((int)this - 0x14);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this - 0x14) + 4))) + (int)piVar1))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112bdec));
  *((int *)GEN_TOP((*(int *)(*piVar1 + 4) - 4 + (int)piVar1))) = *(int *)(*piVar1 + 4) - 0x14;
  *(undefined4 *)((int)this - 0x10) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c GEN_EDX_FWD);
  F_00cccb40((int)this + 0x28 GEN_EDX_ARG);
  F_00cccb40((int)this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && (piVar1 != (int *)0x0)) {
    F_00406810(piVar1);
  }
  return (uint)piVar1;
}

/* ref: FUN_00cd0be0 */
GEN_FRAME unsigned int F_00cd0be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0be0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::MasterBusXA2::vf3 */
GEN_FRAME uint GEN_THISCALL F_00cd0c00(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd0c00u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  float fVar2;
  float10 extraout_ST0;
  
  if (param_3 != 0) {
    uVar1 = F_00cccd90(param_1 + 0x10 GEN_EDX_FWD,param_2,param_3);
    return uVar1;
  }
  if (*(int *)(param_1 + 0xf0) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xf0) + 0x30))))
              (*(int * PTR32 *)(param_1 + 0xf0) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),0);
  }
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))))(param_1 + 0x10); fVar2 = extraout_ST0;
  F_00cccbd0(param_1 + 0x10 GEN_EDX_ARG,(float)extraout_ST0);
  return (uint)gen_fl2bits(fVar2);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::MasterBusXA2::vf1 */
GEN_FRAME uint GEN_THISCALL F_00cd0c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcd0c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined1 MVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  float10 extraout_ST0;
  ulonglong uVar5;
  undefined * pMVar6;
  undefined * pMVar7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0xc))))(this + 0x10 GEN_EDX_FWD);
  if ((char)uVar4 != '\0') {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 8))))(this + 0x10 GEN_EDX_ARG,param_1);
    if (*(int *)(this + 0xf0) == 0) goto LAB_00cd0d29;
    iVar2 = **(int * PTR32 *)(this + 0xf0);
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0x10))))(this + 0x10,0);
    uVar4 = ((code *)*(gen_code32 *)(iVar2 + 0x30))
                      (*(undefined4 *)(this + 0xf0),(undefined4)gen_fl2bits((float)extraout_ST0));
  }
  if (*(int *)(this + 0xf0) != 0) {
    MVar1 = this[300];
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 0x128);
    piVar3 = *(int * PTR32 *)(this + 0xf0);
    pMVar6 = this + 0xf8;
    pMVar7 = this + 0x110;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = pMVar6;
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = pMVar7;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3 GEN_EDX_ARG,(int)(char)MVar1,&(*(undefined * PTR32 *)(gen_frame + 0xc)),0xc);
    uVar5 = F_00427d90();
    F_00cd1160(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,0x40001,(int)uVar5,(int)(uVar5 >> 0x20),pMVar6,pMVar7);
    uVar4 = F_00d2cf60(((undefined1 *)(gen_frame + 0x18)),0x50);
  }
LAB_00cd0d29: ;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00cd0d40 */
GEN_FRAME uint F_00cd0d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcd0d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00cd0de0 */
GEN_FRAME uint GEN_THISCALL F_00cd0de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd0de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  float10 fVar2;
  undefined * rclsid;
  HRESULT HVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00ce6810(this GEN_EDX_FWD,param_1);
  fVar2 = (float10)0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112c028));
  *(undefined1 *)((int)this + 300) = 0xff;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(float *)((int)this + 0x110) = (float)fVar2;
  *(float *)((int)this + 0xf8) = (float)fVar2;
  *(float *)((int)this + 0x114) = (float)fVar2;
  *(float *)((int)this + 0xfc) = (float)fVar2;
  *(float *)((int)this + 0x118) = (float)fVar2;
  *(float *)((int)this + 0x100) = (float)fVar2;
  *(float *)((int)this + 0x11c) = (float)fVar2;
  *(float *)((int)this + 0x104) = (float)fVar2;
  *(float *)((int)this + 0x120) = (float)fVar2;
  *(float *)((int)this + 0x108) = (float)fVar2;
  *(float *)((int)this + 0x124) = (float)fVar2;
  *(float *)((int)this + 0x10c) = (float)fVar2;
  piVar7 = REFG(int * PTR32, 0x15d8ba4);
  (*(int * PTR32 *)(gen_frame + 0xc)) = REFG(int * PTR32, 0x15d8ba4);
  if (REFG(int * PTR32, 0x15d8ba4) != (int *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)0x0;
    rclsid = (undefined *)&REFG(undefined, 0x112c014);
    if (((byte)REFG(undefined4, 0x15d8bb4) & 1) == 0) {
      rclsid = (undefined *)&REFG(undefined, 0x112c004);
    }
    HVar3 = gen_imp_CoCreateInstance(rclsid,(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x112b570),&(*(int * PTR32 *)(gen_frame + 0x14)));
    if (HVar3 < 0) {
      if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
        REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd0d40));
      }
      ((code *)REFG(gen_code32, 0x15d861c))("!\"[sd][Driver][XA2]Error: XAudio2CreateVolumeMeter\"","",
                      "XA2\\MasterBusXA2.cpp",0x4c,
                      "SQEX::CDev::Engine::Sd::Driver::XA2::MasterBusXA2::MasterBusXA2");
    }
    (*(uint * PTR32 *)(gen_frame + 0x8)) = ((uint *)(gen_frame + 0x18));
    iVar4 = 0;
    (*(uint *)(gen_frame + 0x10)) = param_2;
    (*(int *)(gen_frame + 0x4)) = 0;
    if (param_3 != 0) {
      uVar6 = 0;
      do {
        iVar4 = (*(int *)(gen_frame + 0x4));
        piVar7 = (*(int * PTR32 *)(gen_frame + 0xc));
        if (*(int *)(param_3 + uVar6 * 4) == 0) break;
        piVar7 = *(int * PTR32 *)(param_3 + uVar6 * 4);
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x20))(piVar7 GEN_EDX_ARG);
        if (uVar5 != 0xffffffff) {
          piVar7 = *(int * PTR32 *)(param_3 + uVar6 * 4);
          uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x20))(piVar7 GEN_EDX_ARG);
          (*(uint *)(gen_frame + 0x10)) = uVar5;
        }
        piVar7 = *(int * PTR32 *)(param_3 + uVar6 * 4);
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x18))(piVar7 GEN_EDX_ARG);
        iVar1 = (*(int *)(gen_frame + 0x4));
        ((uint *)(gen_frame + 0x18))[(int)((*(int *)(gen_frame + 0x4)) * 3)] = uVar5;
        piVar7 = *(int * PTR32 *)(param_3 + uVar6 * 4);
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x1c))(piVar7 GEN_EDX_ARG);
        ((uint *)(gen_frame + 0x18))[(int)(iVar1 * 3 + 1)] = uVar5 & 0xff;
        iVar4 = (*(int *)(gen_frame + 0x4)) + 1;
        uVar6 = uVar6 + 1;
        ((uint *)(gen_frame + 0x18))[(int)(iVar1 * 3 + 2)] = (*(uint *)(gen_frame + 0x10));
        (*(int *)(gen_frame + 0x4)) = iVar4;
        piVar7 = (*(int * PTR32 *)(gen_frame + 0xc));
      } while (uVar6 < 8);
    }
    ((uint *)(gen_frame + 0x18))[(int)(iVar4 * 3)] = (uint)(*(int * PTR32 *)(gen_frame + 0x14));
    *(uint *)((int)this + 0x128) = (*(uint *)(gen_frame + 0x10));
    ((uint *)(gen_frame + 0x18))[(int)(iVar4 * 3 + 1)] = 1;
    ((uint *)(gen_frame + 0x18))[(int)(iVar4 * 3 + 2)] = (*(uint *)(gen_frame + 0x10));
    *(char *)((int)this + 300) = (char)iVar4;
    iVar1 = *piVar7;
    (*(int *)(gen_frame + 0x4)) = iVar4 + 1;
    uVar6 = ((code *)*(gen_code32 *)(iVar1 + 0x28))(piVar7,(int)this + 0xf0,param_2,REFG(int, 0x134c7e8),0,0,&(*(int *)(gen_frame + 0x4)));
    if ((int)uVar6 < 0) {
      REFG(undefined1, 0x15d8bd9) = 1;
    }
    if (param_3 != 0) {
      uVar6 = 0;
      do {
        piVar7 = (*(int * PTR32 *)(gen_frame + 0xc));
        if (*(int *)(param_3 + uVar6 * 4) == 0) break;
        piVar7 = *(int * PTR32 *)(param_3 + uVar6 * 4);
        ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xf0),uVar6);
        uVar6 = uVar6 + 1;
        piVar7 = (*(int * PTR32 *)(gen_frame + 0xc));
      } while (uVar6 < 8);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 8))((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    F_00ccb490(*(undefined4 *)((int)this + 0xf0));
    if ((*(int *)((int)this + 0xf0) != 0) && (REFG(int, 0x134c7e8) != REFG(int, 0x134c7ec))) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x24))
                (piVar7 GEN_EDX_ARG,(undefined4 *)((int)this + 0xf4),param_2,REFG(int, 0x134c7ec),0,0xff,0,0);
      F_00ccb4a0(*(undefined4 *)((int)this + 0xf4));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00cd1060 */
GEN_NOFRAME uint GEN_THISCALL F_00cd1060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xf4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112c028));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 0xf4) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0xf0);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG,0,0);
    if ((int)uVar2 < 0) {
      if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
        REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd0d40));
      }
      ((code *)REFG(gen_code32, 0x15d861c))("!\"[SD][DRIVER] MasteringVoice DisableEffect Error.\"","",
                      "XA2\\MasterBusXA2.cpp",0xd9,
                      "SQEX::CDev::Engine::Sd::Driver::XA2::MasterBusXA2::~MasterBusXA2");
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0x48))))(*(int * PTR32 *)((int)this + 0xf0) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0xf0) = 0;
  }
  uVar2 = F_00ce6850(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00cd1100 */
GEN_FRAME unsigned int F_00cd1100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcd1100u, gen_a0, gen_a1, 0u, 0u);
  LPVOID * param_1 = (LPVOID *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined * rclsid;
  
  rclsid = (undefined *)&REFG(undefined, 0x112c014);
  if ((param_2 & 1) == 0) {
    rclsid = (undefined *)&REFG(undefined, 0x112c004);
  }
  return (uint)(gen_imp_CoCreateInstance(rclsid,(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x112b570),param_1));
}

/* ref: FUN_00cd1140 */
GEN_FRAME byte F_00cd1140(unsigned int gen_a0)
{
  GEN_ENTER(0xcd1140u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  REFG(undefined1, 0x15d8bd9) = (byte)param_1;
  return (byte)param_1;
}

