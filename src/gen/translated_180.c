#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00df2980 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdf2980u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x28))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00df29a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df29a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf29a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
    *((short *)GEN_TOP((uVar2 + 6))) = *((short *)GEN_TOP((uVar2 + 6))) + 1;
    *((int *)GEN_TOP((uVar2 + 8))) = *((int *)GEN_TOP((uVar2 + 8))) + 1;
  }
  puVar3 = *(undefined4 * PTR32 *)this;
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)puVar3 + 6))) = *((short *)GEN_TOP(((int)puVar3 + 6))) - 1;
    piVar1 = puVar3 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_FWD,1);
      uVar2 = *param_1;
      *(uint *)this = uVar2;
      return uVar2;
    }
    *(uint *)this = *param_1;
    return 0xffffffff;
  }
  *(uint *)this = *param_1;
  return uVar2;
}

/* ref: FUN_00df2a00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf2a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x5c))))(*(int * PTR32 *)this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 4))),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00df2a40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf2a40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x40))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df2a60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf2a60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x48))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df2a80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf2a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x54))))(*(int * PTR32 *)this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 4))),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00df2ad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf2ad0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x58))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df2b10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df2b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf2b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00e1bd60(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00df2b30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf2b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char * pcVar1;
  char cVar2;
  undefined * this_00;
  uint uVar3;
  char * pcVar4;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x78))) + 0x2c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD)));
  switch((unsigned int)(uintptr_t)(*param_1)) {
  case 0x62: ;
    uVar3 = F_00da0d20(param_1,&REFG(undefined, 0x114c8bc));
    if (uVar3 == 0) {
      return *((uint *)GEN_TOP(((int)this_00 + 0x14)));
    }
    break;
  case 0x69: ;
    uVar3 = F_00da0d20(param_1,(*(undefined * PTR32 (*)[1])REFP(0x112673c)));
    if (uVar3 == 0) {
      return *((uint *)GEN_TOP(((int)this_00 + 0x1c)));
    }
    break;
  case 0x72: ;
    uVar3 = F_00da0d20(param_1,&REFG(undefined, 0x114c8b4));
    if (uVar3 == 0) {
      return *((uint *)GEN_TOP(((int)this_00 + 0x18)));
    }
    uVar3 = F_00da0d20(param_1,(*(undefined * PTR32 (*)[1])REFP(0x114c8b0)));
    if (uVar3 == 0) {
      uVar3 = F_00e1a240(this_00 GEN_EDX_ARG,param_2);
      uVar3 = F_00e1a640(this_00 GEN_EDX_ARG,uVar3);
      return uVar3;
    }
    break;
  case 0x73: ;
    uVar3 = F_00da0d20(param_1,((char *)REFP(0x11393bc)));
    if (uVar3 == 0) {
      return *((uint *)GEN_TOP(((int)this_00 + 0x20)));
    }
    uVar3 = F_00da0d20(param_1,((char *)REFP(0x114c8a8)));
    if (uVar3 == 0) {
      uVar3 = F_00e1a240(this_00 GEN_EDX_ARG,param_2);
      return uVar3;
    }
    break;
  case 0x76: ;
    uVar3 = F_00da0d20(param_1,&REFG(undefined, 0x1126468));
    if (uVar3 == 0) {
      return *((uint *)GEN_TOP(((int)this_00 + 0x10)));
    }
    uVar3 = F_00da0d60(param_1,(*(undefined * PTR32 (*)[1])REFP(0x1147328)),3);
    if (uVar3 == 0) {
      cVar2 = param_1[3];
      pcVar1 = param_1 + 3;
      pcVar4 = pcVar1;
      if (cVar2 == '\0') {
LAB_00df2bb2: ;
        if (*pcVar4 != '\0') {
          return 0;
        }
      }
      else {
        do {
          if ((cVar2 < '0') || ('9' < cVar2)) goto LAB_00df2bb2;
          cVar2 = pcVar4[1];
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
      }
      uVar3 = F_00da0e80(pcVar1,0);
      uVar3 = F_00e1a6a0(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this_00 + 0x18))),uVar3);
      return uVar3;
    }
  }
  return 0;
}

/* ref: FUN_00df2ce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdf2ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  char * pcVar2;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  uVar1 = F_00e1c430(param_1 GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x0)));
  if (uVar1 == 0) {
    pcVar2 = ((char *)GEN_TOP(F_0105a5b0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[1]) + 3,((char *)REFP(0x114c8cc)))));
    if (*pcVar2 != '\0') {
      *(*(undefined1 * PTR32 *)&gen_args[0]) = 1;
      return (uint)(*(undefined1 * PTR32 *)&gen_args[0]);
    }
    pcVar2 = ((char *)GEN_TOP(F_0105a5b0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[1]) + 3,((char *)REFP(0x114c8c4)))));
    if (*pcVar2 != '\0') {
      *(*(undefined1 * PTR32 *)&gen_args[0]) = 0;
      return (uint)(*(undefined1 * PTR32 *)&gen_args[0]);
    }
  }
  *(*(undefined1 * PTR32 *)&gen_args[0]) = (*(undefined1 *)&gen_args[2]);
  return (uint)(*(undefined1 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00df2d60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df2d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf2d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x74)));
  while (uVar1 == 5) {
    uVar1 = F_00e1c9e0(this GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: FUN_00df2d80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf2d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: FUN_00df2da0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf2da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xc, 4);
  undefined * this_00;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  
  this_00 = ((undefined *)GEN_TOP(((int)this + 0xb4)));
  (*(uint *)(gen_frame + 0x0)) = F_00da3970(this_00 GEN_EDX_FWD);
  F_00da3e40(this_00 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x7)),(*(uint *)(gen_frame + 0x0)));
  if ((*(char *)(gen_frame + 0x7)) == '\0') {
    return 0;
  }
  do {
    piVar4 = ((int *)GEN_TOP(F_00da39b0(this_00 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)))));
    if (*piVar4 == 0) {
      return 1;
    }
    iVar5 = 0;
    if (0 < piVar4[2]) {
      do {
        puVar2 = ((undefined4 *)GEN_TOP(*piVar4));
        if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) + 1;
          puVar2[2] = puVar2[2] + 1;
        }
        puVar1 = ((undefined4 *)GEN_TOP((piVar4[1] + iVar5 * 8)));
        piVar3 = ((int *)GEN_TOP(*puVar1));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x60))))(piVar3 GEN_EDX_ARG,puVar1[1],puVar2);
        if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) - 1;
          piVar3 = puVar2 + 2;
          *piVar3 = *piVar3 - 1;
          if (*piVar3 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < piVar4[2]);
    }
    iVar5 = 0;
    if (0 < piVar4[5]) {
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((piVar4[4] + iVar5 * 8)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((piVar4[4] + iVar5 * 8 + 4))),*piVar4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < piVar4[5]);
    }
    (*(uint *)(gen_frame + 0x0)) = F_00da39f0(this_00 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)));
    F_00da3e40(this_00 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x7)),(*(uint *)(gen_frame + 0x0)));
  } while ((*(char *)(gen_frame + 0x7)) != '\0');
  return 0;
}

/* ref: FUN_00df2eb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdf2eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x94, 12, 4);
  int iVar1;
  int * piVar2;
  undefined1 * puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined * this_00;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  iVar7 = (*(int * PTR32 *)&gen_args[0])[1] - *(*(int * PTR32 *)&gen_args[0]);
  iVar1 = iVar7 + 1;
  (*(undefined * PTR32 *)(gen_frame + 0x8c)) = this;
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  if (0x80 < iVar1) {
    iVar4 = 0x100;
    if (0xff < iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar4,1);
  }
  (*(int *)(gen_frame + 0x4)) = iVar1;
  F_00da0e40((*(undefined1 * PTR32 *)(gen_frame + 0x0)),*piVar2,iVar7);
  puVar3 = (*(undefined1 * PTR32 *)(gen_frame + 0x0));
  (*(undefined1 * PTR32 *)(gen_frame + 0x0))[iVar7] = 0;
  this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8c)) + 0x98)));
  uVar5 = F_00da3ae0(this_00 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  F_00da3e40(this_00 GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[0]) + 3,uVar5);
  if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3)))) == '\0') {
    uVar6 = F_00da0f10(puVar3,&REFG(undefined * PTR32, 0x13516ac));
    F_00da3a20(this_00 GEN_EDX_ARG,uVar6,1);
  }
  else {
    uVar6 = F_00da3990(this_00 GEN_EDX_ARG,uVar5);
    F_00da39d0(this_00 GEN_EDX_ARG,uVar5,1);
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)
    ;
  }
  return uVar6;
}

/* ref: FUN_00df2fe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df2fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf2fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint * puVar1;
  uint uVar2;
  
  uVar2 = F_00e1c480(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = F_00df2eb0(this GEN_EDX_ARG,uVar2);
  if (*((uint *)GEN_TOP(((int)this + 0xac))) == (*((uint *)GEN_TOP(((int)this + 0xb0))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0xa8))),4);
  }
  puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa8))) + *((int *)GEN_TOP(((int)this + 0xac))) * 4)));
  *puVar1 = uVar2;
  *((int *)GEN_TOP(((int)this + 0xac))) = *((int *)GEN_TOP(((int)this + 0xac))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00df3040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df3040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf3040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  F_00df2d60(this GEN_EDX_FWD);
  uVar1 = F_00e1c480(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = F_00df2eb0(this GEN_EDX_ARG,uVar1);
  if ((0 < *((int *)GEN_TOP(((int)this + 0xac)))) &&
     (uVar1 == *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa8))) - 4 + *((int *)GEN_TOP(((int)this + 0xac))) * 4))))) {
    F_00e1c9e0(this GEN_EDX_ARG);
    *((int *)GEN_TOP(((int)this + 0xac))) = *((int *)GEN_TOP(((int)this + 0xac))) - 1;
    return 0;
  }
  return 1;
}

/* ref: FUN_00df30a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df30a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf30a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined * this_00;
  char * pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*((int *)GEN_TOP(((int)this + 0x74))) == 1) {
    iVar3 = (int)&(*(undefined4 *)&gen_args[0]) + 3;
    uVar4 = (*(undefined4 *)&gen_args[0]);
    this_00 = ((undefined *)GEN_TOP(F_00e1c480(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)))));
    pcVar1 = ((char *)GEN_TOP(F_0105a5b0(this_00 GEN_EDX_ARG,iVar3,uVar4)));
    if (*pcVar1 != '\0') {
      F_00df2fe0(this GEN_EDX_ARG);
      F_00e1c9e0(this GEN_EDX_ARG);
      uVar2 = F_00df2d60(this GEN_EDX_ARG);
      if (uVar2 == 4) {
        uVar4 = (*(undefined4 *)&gen_args[1]);
        uVar2 = F_00e1c4c0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        uVar2 = F_00e1c0f0(uVar2,uVar4);
        if (uVar2 != 0) {
          return uVar2;
        }
        F_00e1c9e0(this GEN_EDX_ARG);
        uVar2 = F_00df3040(this GEN_EDX_ARG);
        return uVar2;
      }
    }
  }
  return 1;
}

/* ref: FUN_00df3130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df3130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf3130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined * this_00;
  char * pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*((int *)GEN_TOP(((int)this + 0x74))) == 1) {
    iVar3 = (int)&(*(undefined4 *)&gen_args[0]) + 3;
    uVar4 = (*(undefined4 *)&gen_args[0]);
    this_00 = ((undefined *)GEN_TOP(F_00e1c480(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)))));
    pcVar1 = ((char *)GEN_TOP(F_0105a5b0(this_00 GEN_EDX_ARG,iVar3,uVar4)));
    if (*pcVar1 != '\0') {
      F_00df2fe0(this GEN_EDX_ARG);
      F_00e1c9e0(this GEN_EDX_ARG);
      uVar2 = F_00df2d60(this GEN_EDX_ARG);
      if (uVar2 == 4) {
        uVar4 = (*(undefined4 *)&gen_args[1]);
        uVar2 = F_00e1c4c0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        uVar2 = F_00e1c170(uVar2,uVar4);
        if (uVar2 != 0) {
          return uVar2;
        }
        F_00e1c9e0(this GEN_EDX_ARG);
        uVar2 = F_00df3040(this GEN_EDX_ARG);
        return uVar2;
      }
    }
  }
  return 1;
}

/* ref: FUN_00df31c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df31c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf31c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  int iVar2;
  int iVar3;
  
  F_00df2fe0(this GEN_EDX_FWD);
  F_00e1c9e0(this GEN_EDX_ARG);
  iVar3 = 0;
  iVar2 = param_1;
  if (0 < param_2) {
    do {
      uVar1 = F_00df2d60(this GEN_EDX_ARG);
      if (uVar1 != 4) {
        return 1;
      }
      F_00e1c4c0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      uVar1 = F_00e1c170((uint)((undefined1 *)(gen_frame + 0x0)),iVar2);
      if (uVar1 != 0) {
        return uVar1;
      }
      F_00e1c9e0(this GEN_EDX_ARG);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < param_2);
  }
  uVar1 = F_00df3040(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00df3240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df3240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf3240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_2)) + 0x14))))(((int *)GEN_TOP(*param_2)) GEN_EDX_FWD);
  iVar3 = 0;
  if (0 < (int)uVar1) {
    do {
      F_00df2d60(this GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)this + 0x74))) == 1) {
        uVar2 = F_00df30a0(this GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0x10)));
        if (uVar2 != 0) {
          return uVar2;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_2)) + 0x58))))(((int *)GEN_TOP(*param_2)) GEN_EDX_ARG,iVar3,(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)));
      }
      else {
        if (*((int *)GEN_TOP(((int)this + 0x74))) != 4) {
          return 1;
        }
        F_00e1c4c0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        uVar2 = F_00e1c0f0(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x8)));
        if (uVar2 != 0) {
          return uVar2;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_2)) + 0x58))))(((int *)GEN_TOP(*param_2)) GEN_EDX_ARG,iVar3,(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)));
        F_00e1c9e0(this GEN_EDX_ARG);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar1);
  }
  return 0;
}

/* ref: FUN_00df3300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df3300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf3300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  
  uVar2 = (*(uint *)&gen_args[1]);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(uint *)&gen_args[1]))) + 0x14))))(*((int * PTR32 *)GEN_TOP((*(uint *)&gen_args[1]))) GEN_EDX_FWD);
  iVar4 = 0;
  (*(uint *)(gen_frame + 0x8)) = uVar3;
  if (0 < (int)uVar3) {
    do {
      F_00df2d60(param_1 GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)param_1 + 0x74))) == 1) {
        uVar3 = F_00df3130(param_1 GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),&(*(uint *)&gen_args[1]));
        if (uVar3 != 0) {
          return uVar3;
        }
        piVar1 = *((int * PTR32 *)GEN_TOP(uVar2));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x40))))(piVar1 GEN_EDX_ARG,iVar4,(*(uint *)&gen_args[1]));
      }
      else {
        if (*((int *)GEN_TOP(((int)param_1 + 0x74))) != 4) {
          return 1;
        }
        puVar5 = &(*(undefined4 *)(gen_frame + 0xc));
        uVar3 = F_00e1c4c0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        uVar3 = F_00e1c170(uVar3,puVar5);
        if (uVar3 != 0) {
          return uVar3;
        }
        piVar1 = *((int * PTR32 *)GEN_TOP(uVar2));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x40))))(piVar1 GEN_EDX_ARG,iVar4,(*(undefined4 *)(gen_frame + 0xc)));
        F_00e1c9e0(param_1 GEN_EDX_ARG);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(*(uint *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: FUN_00df33c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df33c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf33c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP(0x0));
  uVar1 = F_00e1c430(this GEN_EDX_FWD,param_1,&(*(char * PTR32 *)(gen_frame + 0x0)));
  if (uVar1 == 0) {
    if (((1 < (int)(*(char * PTR32 *)(gen_frame + 0x4)) - (int)(*(char * PTR32 *)(gen_frame + 0x0))) && (*(*(char * PTR32 *)(gen_frame + 0x0)) == '\"')) &&
       (*((char *)GEN_TOP(((int)(*(char * PTR32 *)(gen_frame + 0x4)) - 1))) == '\"')) {
      (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP(((int)(*(char * PTR32 *)(gen_frame + 0x4)) - 1)));
      (*(char * PTR32 *)(gen_frame + 0x0)) = (*(char * PTR32 *)(gen_frame + 0x0)) + 1;
      uVar1 = F_00df2eb0(this GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x0)));
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00df3420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df3420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf3420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  LPVOID pvVar2;
  undefined4 * puVar3;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00da4190(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_FWD,param_1,0)));
  if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x1c)));
    puVar1 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0x80000000;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0x80000000;
      puVar1 = puVar3;
    }
    F_00da3a20(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG,param_1,puVar1);
  }
  return (uint)puVar1;
}

/* ref: FUN_00df3490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df3490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf3490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00df3420(this GEN_EDX_FWD,param_1)));
  if (*piVar1 != 0) {
    return 1;
  }
  *piVar1 = *param_2;
  return 0;
}

/* ref: FUN_00df34c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df34c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf34c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x38, 8);
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  char * pcVar6;
  uint uVar7;
  
  F_00df2fe0(this GEN_EDX_FWD);
  uVar3 = F_00df33c0(this GEN_EDX_ARG,&REFG(undefined, 0x1135940));
  if (uVar3 != 0) {
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    F_00e1c560(this GEN_EDX_ARG,((char *)REFP(0x114c8e4)),&(*(undefined4 *)(gen_frame + 0x2c)));
    uVar4 = F_00df33c0(this GEN_EDX_ARG,((char *)REFP(0x113b9d8)));
    (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0x2c));
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x78)));
    (*(uint *)(gen_frame + 0x8)) = uVar4;
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(uint *)(gen_frame + 0x14)) = 0x80000000;
    (*(uint *)(gen_frame + 0x0)) = uVar3;
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x2c))))(piVar2 GEN_EDX_ARG)));
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = pvVar5;
    F_00e1c9e0(this GEN_EDX_ARG);
    uVar3 = F_00df2d60(this GEN_EDX_ARG);
    if (uVar3 == 2) {
      while( true ) {
        pvVar5 = ((undefined *)GEN_TOP(F_00e1c480(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)))));
        pcVar6 = ((char *)GEN_TOP(F_0105a5b0(pvVar5 GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x33)),((char *)REFP(0x10913cc)))));
        if (*pcVar6 == '\0') break;
        uVar3 = F_00df33c0(this GEN_EDX_ARG,&REFG(undefined, 0x1135940));
        (*(uint *)(gen_frame + 0x20)) = uVar3;
        uVar3 = F_00df33c0(this GEN_EDX_ARG,&REFG(undefined, 0x1134e40));
        uVar4 = F_00df33c0(this GEN_EDX_ARG,((char *)REFP(0x113b404)));
        if (((*(uint *)(gen_frame + 0x20)) == 0) || (uVar3 == 0)) goto LAB_00df36a4;
        uVar3 = F_00df2b30(this GEN_EDX_ARG,uVar3,uVar4);
        if (uVar3 == 0) goto LAB_00df36a4;
        pcVar6 = ((char *)GEN_TOP(F_00df2ce0(this GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x32)),((char *)REFP(0x114c8dc)),0)));
        if (*pcVar6 != '\0') {
          uVar3 = F_00e1a670((*(undefined * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,uVar3);
        }
        (*(int *)(gen_frame + 0x28)) = 0;
        F_00e1c560(this GEN_EDX_ARG,((char *)REFP(0x113e778)),&(*(int *)(gen_frame + 0x28)));
        if (0 < (*(int *)(gen_frame + 0x28))) {
          uVar3 = F_00e1a6a0((*(undefined * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,uVar3,(*(int *)(gen_frame + 0x28)));
        }
        uVar7 = (*(uint *)(gen_frame + 0x10));
        if ((*(uint *)(gen_frame + 0x10)) == ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0xc)),0xc);
          uVar7 = (*(uint *)(gen_frame + 0x10));
        }
        (*(uint *)(gen_frame + 0x10)) = uVar7 + 1;
        puVar1 = ((uint *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + uVar7 * 0xc)));
        *puVar1 = (*(uint *)(gen_frame + 0x20));
        puVar1[1] = uVar3;
        puVar1[2] = 0;
        if (uVar4 != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x78))) + 0x24))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG,uVar4);
        }
        F_00e1c9e0(this GEN_EDX_ARG);
        uVar3 = F_00df2d60(this GEN_EDX_ARG);
        if (uVar3 != 2) break;
      }
    }
    uVar3 = F_00df3040(this GEN_EDX_ARG);
    if (uVar3 != 1) {
      F_00e1c9e0(this GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x78))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
      F_00df1580(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return 0;
    }
LAB_00df36a4: ;
    F_00df1580(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return 1;
}

/* ref: FUN_00df36c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df36c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf36c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x130, 0);
  char * pcVar1;
  uint uVar2;
  undefined1 * puVar3;
  
  *param_1 = 0;
  F_00e1c480(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x118)));
  pcVar1 = ((char *)GEN_TOP(F_0105a5b0(((undefined1 *)(gen_frame + 0x118)) GEN_EDX_ARG,&(*(char *)(gen_frame + 0x12b)),&REFG(undefined, 0x114c8d4))));
  if (*pcVar1 != '\0') {
    F_00e1c9e0(this GEN_EDX_ARG);
    return 0;
  }
  pcVar1 = ((char *)GEN_TOP(F_0105a5b0(((undefined1 *)(gen_frame + 0x118)) GEN_EDX_ARG,&(*(char *)(gen_frame + 0x12b)),((char *)REFP(0x11393bc)))));
  if (*pcVar1 == '\0') {
    return 1;
  }
  if (*((int *)GEN_TOP(((int)this + 0x74))) == 2) {
    F_00e1c9e0(this GEN_EDX_ARG);
    *param_1 = (uint)&REFG(undefined1, 0x107fc63);
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x74))) != 1) {
    return 1;
  }
  F_00df2fe0(this GEN_EDX_ARG);
  uVar2 = F_00e1c9e0(this GEN_EDX_ARG);
  if (uVar2 == 3) {
    *param_1 = (uint)&REFG(undefined1, 0x107fc63);
    uVar2 = F_00df3040(this GEN_EDX_ARG);
    return uVar2;
  }
  (*(undefined1 * PTR32 *)(gen_frame + 0x8c)) = ((undefined1 *)(gen_frame + 0x98));
  (*(undefined4 *)(gen_frame + 0x94)) = 0x80000080;
  (*(int *)(gen_frame + 0x90)) = 1;
  ((undefined1 *)(gen_frame + 0x98))[0] = 0;
  while ((uVar2 == 4 || (uVar2 == 5))) {
    F_00e1c4c0(this GEN_EDX_ARG,&(*(undefined1 * PTR32 *)(gen_frame + 0x120)));
    F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x120)),(int)(*(undefined1 * PTR32 *)(gen_frame + 0x124)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x120)));
    uVar2 = F_00e1c9e0(this GEN_EDX_ARG);
  }
  (*(undefined1 * PTR32 *)(gen_frame + 0x120)) = (*(undefined1 * PTR32 *)(gen_frame + 0x8c));
  (*(undefined1 * PTR32 *)(gen_frame + 0x124)) = (*(undefined1 * PTR32 *)(gen_frame + 0x8c)) + (*(int *)(gen_frame + 0x90)) - 1;
  pcVar1 = ((char *)GEN_TOP(F_00e1c210(&(*(char *)(gen_frame + 0x12b)),&(*(undefined1 * PTR32 *)(gen_frame + 0x120)))));
  if (*pcVar1 != '\0') {
    (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
    (*(undefined1 * PTR32 *)(gen_frame + 0x120)) = (*(undefined1 * PTR32 *)(gen_frame + 0x8c));
    (*(undefined4 *)(gen_frame + 0x8)) = 0x80000080;
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    ((undefined1 *)(gen_frame + 0xc))[0] = 0;
    (*(undefined1 * PTR32 *)(gen_frame + 0x124)) = (*(undefined1 * PTR32 *)(gen_frame + 0x8c)) + (*(int *)(gen_frame + 0x90)) - 1;
    F_00e1c240(&(*(undefined1 * PTR32 *)(gen_frame + 0x120)),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
    F_00da4cf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_ARG,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
    F_00d877b0(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  (*(undefined1 * PTR32 *)(gen_frame + 0x124)) = (*(undefined1 * PTR32 *)(gen_frame + 0x8c));
  uVar2 = F_00da3ae0(((undefined *)GEN_TOP(((int)this + 0x98))) GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x8c)));
  F_00da3e40((int)this + 0x98 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x12b)),uVar2);
  if ((*(char *)(gen_frame + 0x12b)) == '\0') {
    puVar3 = ((undefined1 *)GEN_TOP(F_00da0f10((*(undefined1 * PTR32 *)(gen_frame + 0x124)),&REFG(undefined * PTR32, 0x13516ac))));
    F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x98))) GEN_EDX_ARG,puVar3,1);
  }
  else {
    puVar3 = ((undefined1 *)GEN_TOP(F_00da3990((int)this + 0x98 GEN_EDX_ARG,uVar2)));
    (*(undefined1 * PTR32 *)(gen_frame + 0x124)) = puVar3;
    F_00da39d0(((undefined *)GEN_TOP(((int)this + 0x98))) GEN_EDX_ARG,uVar2,1);
    puVar3 = (*(undefined1 * PTR32 *)(gen_frame + 0x124));
  }
  *param_1 = (uint)puVar3;
  uVar2 = F_00df3040(this GEN_EDX_ARG);
  F_00d877b0(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00df3910 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df3910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf3910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x5c, 4, 4);
  code * pcVar1;
  int * piVar2;
  undefined * PTR32 * ppuVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  
  puVar6 = (*(undefined4 * PTR32 *)&gen_args[1]);
  piVar2 = ((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
  pcVar1 = *((gen_code32 *)GEN_TOP((*piVar2 + 4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = this;
  piVar2 = ((int *)GEN_TOP((*pcVar1)(piVar2)));
  iVar7 = (*(int *)&gen_args[0]);
  iVar8 = *piVar2;
  switch((unsigned int)(uintptr_t)(iVar8)) {
  case 2: ;
  case 4: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x114c8bc);
    if (iVar8 != 2) {
      ppuVar3 = (*(undefined * PTR32 (*)[1])REFP(0x112673c));
    }
    uVar4 = F_00df3240(this GEN_EDX_FWD,ppuVar3,puVar6);
    return uVar4;
  case 3: ;
    uVar4 = F_00df3300(this GEN_EDX_ARG,&REFG(undefined, 0x114c8b4),(uint)puVar6);
    return uVar4;
  case 5: ;
    iVar8 = 0;
    if (0 < (*(int *)&gen_args[0])) {
      do {
        F_00df2d60(this GEN_EDX_ARG);
        uVar4 = F_00df36c0(this GEN_EDX_ARG,&(*(int *)&gen_args[0]));
        if (uVar4 != 0) {
          return 1;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x38))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,iVar8,(*(int *)&gen_args[0]));
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar7);
      F_00df2d60(this GEN_EDX_ARG);
      return 0;
    }
    break;
  case 6: ;
    (*(int *)(gen_frame + 0x50)) = 0;
    if (0 < (*(int *)&gen_args[0])) {
      do {
        F_00df2d60(this GEN_EDX_ARG);
        puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x5c))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x50)))));
        (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = puVar6;
        if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) + 1;
          puVar6[2] = puVar6[2] + 1;
        }
        if (*((uint *)GEN_TOP(((int)this + 200))) == (*((uint *)GEN_TOP(((int)this + 0xcc))) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0xc4))),4);
        }
        puVar6 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc4))) + *((int *)GEN_TOP(((int)this + 200))) * 4)));
        if ((puVar6 != ((undefined4 *)GEN_TOP(0x0))) && (*puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x54)), (*(undefined4 * PTR32 *)(gen_frame + 0x54)) != ((undefined4 *)GEN_TOP(0x0)))) {
          *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x54)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x54)) + 6))) + 1;
          (*(undefined4 * PTR32 *)(gen_frame + 0x54))[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x54))[2] + 1;
        }
        *((int *)GEN_TOP(((int)this + 200))) = *((int *)GEN_TOP(((int)this + 200))) + 1;
        uVar4 = F_00df4100(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x54)));
        if (uVar4 != 0) {
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x54)) != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x54)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x54)) + 6))) - 1;
            piVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x54)) + 2;
            *piVar2 = *piVar2 - 1;
            if (*piVar2 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x54)))))((*(undefined4 * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,1);
            }
          }
          return uVar4;
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x54)) != ((undefined4 *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x54)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x54)) + 6))) - 1;
          piVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x54)) + 2;
          *piVar2 = *piVar2 - 1;
          if (*piVar2 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x54)))))((*(undefined4 * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,1);
          }
        }
        iVar8 = (*(int *)(gen_frame + 0x50)) + 1;
        (*(int *)(gen_frame + 0x50)) = iVar8;
        puVar6 = (*(undefined4 * PTR32 *)&gen_args[1]);
      } while (iVar8 < (*(int *)&gen_args[0]));
      F_00df2d60(this GEN_EDX_ARG);
      return 0;
    }
    break;
  case 7: ;
    iVar8 = 0;
    if (0 < (*(int *)&gen_args[0])) {
      do {
        (*(undefined4 *)(gen_frame + 0x4c)) = *(*(undefined4 * PTR32 *)&gen_args[1]);
        (*(int *)(gen_frame + 0x50)) = iVar8;
        F_00df5cf0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4c)));
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar7);
      F_00df2d60(this GEN_EDX_ARG);
      return 0;
    }
    break;
  default: ;
    return 1;
  case 9: ;
    if (((iVar8 == 9) && (*((int *)GEN_TOP(piVar2[1])) == 3)) &&
       ((iVar8 = piVar2[2], iVar8 == 4 || (((iVar8 == 8 || (iVar8 == 0xc)) || (iVar8 == 0x10)))))) {
      uVar4 = F_00e19c70(piVar2 GEN_EDX_ARG);
      (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
      (*(uint *)(gen_frame + 0x4)) = 0;
      (*(int *)(gen_frame + 0x8)) = -0x7ffffff0;
      if (0x10 < (int)uVar4) {
        uVar5 = 0x20;
        if (0x1f < (int)uVar4) {
          uVar5 = uVar4;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar5,4);
      }
      iVar8 = (*(int *)&gen_args[0]);
      iVar7 = 0;
      (*(uint *)(gen_frame + 0x4)) = uVar4;
      if (0 < (*(int *)&gen_args[0])) {
        do {
          F_00df2d60((*(undefined4 * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG);
          uVar5 = F_00df31c0((*(undefined4 * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar4);
          if (uVar5 != 0) {
            (*(uint *)(gen_frame + 0x4)) = 0;
            if ((*(int *)(gen_frame + 0x8)) < 0) {
              return 1;
            }
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 4);
            return 1;
          }
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x30))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,iVar7,(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar8);
      }
      (*(uint *)(gen_frame + 0x4)) = 0;
      this = (*(undefined4 * PTR32 *)(gen_frame + 0x54));
      if (-1 < (*(int *)(gen_frame + 0x8))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 4);
        this = (*(undefined4 * PTR32 *)(gen_frame + 0x54));
      }
    }
  }
  F_00df2d60(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00df3c50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df3c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf3c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x54, 12, 4);
  int * piVar1;
  int iVar2;
  undefined4 uVar3;
  code * pcVar4;
  uint uVar5;
  uint uVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined * this;
  int * piVar9;
  uint * puVar10;
  
  uVar6 = (*(uint *)&gen_args[0]);
  piVar9 = *((int * PTR32 *)GEN_TOP(((*(uint *)&gen_args[0]) + 8)));
  iVar2 = *piVar9;
  (*(int * PTR32 *)(gen_frame + 0x48)) = piVar9;
  if (iVar2 == 9) {
    uVar5 = F_00e19c70(piVar9 GEN_EDX_FWD);
    iVar2 = *piVar9;
    (*(uint *)(gen_frame + 0x4c)) = uVar5;
    if (((iVar2 == 9) && (*((int *)GEN_TOP(piVar9[1])) == 3)) &&
       ((iVar2 = piVar9[2], iVar2 == 4 || (((iVar2 == 8 || (iVar2 == 0xc)) || (iVar2 == 0x10)))))) {
      uVar6 = F_00df31c0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar5);
      if (uVar6 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) + 0x48))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1])[1],((undefined1 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x4c)));
        return 0;
      }
    }
    else {
      pcVar7 = ((char *)GEN_TOP(F_00e1c5d0(param_1 GEN_EDX_ARG,(int)&(*(uint *)&gen_args[0]) + 3,&REFG(undefined, 0x114c8f4))));
      if (*pcVar7 != '\0') {
        uVar5 = F_00e1c560(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114c8f4),&(*(uint *)(gen_frame + 0x4c)));
        if (uVar5 != 0) {
          return uVar5;
        }
        uVar5 = F_00e19c70(piVar9 GEN_EDX_ARG);
        if ((*(uint *)(gen_frame + 0x4c)) != uVar5) {
          return 1;
        }
      }
      piVar9 = ((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1])));
      if (piVar9 != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)piVar9 + 6))) = *((short *)GEN_TOP(((int)piVar9 + 6))) + 1;
        piVar9[2] = piVar9[2] + 1;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xc))))(piVar9 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x40)),*((undefined4 *)GEN_TOP(uVar6)));
      puVar8 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x40)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x44)))));
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) + 1;
        puVar8[2] = puVar8[2] + 1;
      }
      (*(uint *)&gen_args[0]) = (uint)puVar8;
      if (*((int *)GEN_TOP(((int)param_1 + 0x74))) == 1) {
        this = ((undefined *)GEN_TOP(F_00e1c480(param_1 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x40)))));
        pcVar7 = ((char *)GEN_TOP(F_0105a5b0(this GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[1]) + 3,((char *)REFP(0x114c8ec)))));
        if (*pcVar7 != '\0') {
          F_00df2fe0(param_1 GEN_EDX_ARG);
          F_00e1c9e0(param_1 GEN_EDX_ARG);
          puVar10 = &(*(uint *)&gen_args[0]);
          uVar6 = F_00e19c70((*(int * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG);
          (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(F_00df3910(param_1 GEN_EDX_ARG,uVar6,puVar10)));
          if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(0x0))) {
            (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(F_00df3040(param_1 GEN_EDX_ARG)));
          }
          if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) - 1;
            piVar1 = puVar8 + 2;
            *piVar1 = *piVar1 - 1;
            if (*piVar1 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar8)))(puVar8 GEN_EDX_ARG,1);
            }
          }
          *((short *)GEN_TOP(((int)piVar9 + 6))) = *((short *)GEN_TOP(((int)piVar9 + 6))) - 1;
          piVar1 = piVar9 + 2;
          *piVar1 = *piVar1 - 1;
          if (*piVar1 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar9)))(piVar9 GEN_EDX_ARG,1);
          }
          return (uint)(*(int * PTR32 *)&gen_args[1]);
        }
      }
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) - 1;
        piVar1 = puVar8 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar8)))(puVar8 GEN_EDX_ARG,1);
        }
      }
      *((short *)GEN_TOP(((int)piVar9 + 6))) = *((short *)GEN_TOP(((int)piVar9 + 6))) - 1;
      piVar1 = piVar9 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar9)))(piVar9 GEN_EDX_ARG,1);
      }
    }
  }
  else {
    if (iVar2 == 8) {
      uVar5 = F_00e1c560(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114c8f4),&(*(uint *)(gen_frame + 0x4c)));
      if (uVar5 != 0) {
        return uVar5;
      }
      (*(uint *)&gen_args[0]) = *(*(int * PTR32 *)&gen_args[1]);
      if (((int *)GEN_TOP((*(uint *)&gen_args[0]))) != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((*(uint *)&gen_args[0]) + 6))) = *((short *)GEN_TOP(((*(uint *)&gen_args[0]) + 6))) + 1;
        *((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 8))) + 1;
      }
      uVar3 = *((undefined4 *)GEN_TOP(uVar6));
      pcVar4 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(uint *)&gen_args[0]))) + 0xc)));
      (*pcVar4)((*(uint *)&gen_args[0]),&(*(int * PTR32 *)(gen_frame + 0x40)),uVar3);
      piVar9 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x78))) + 0x14))))
                                (*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x78))) GEN_EDX_ARG,&(*(uint *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0x44)),uVar6)));
      if (piVar9 != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)piVar9 + 6))) = *((short *)GEN_TOP(((int)piVar9 + 6))) + 1;
        piVar9[2] = piVar9[2] + 1;
      }
      pcVar4 = *((gen_code32 *)GEN_TOP((*piVar9 + 0x10)));
      (*(int * PTR32 *)&gen_args[1]) = piVar9;
      (*pcVar4)(piVar9,(*(uint *)(gen_frame + 0x4c)));
      F_00df2fe0(param_1 GEN_EDX_ARG);
      F_00e1c9e0(param_1 GEN_EDX_ARG);
      uVar6 = F_00df3910(param_1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4c)),&(*(int * PTR32 *)&gen_args[1]));
      if (uVar6 == 0) {
        uVar6 = F_00df3040(param_1 GEN_EDX_ARG);
        *((short *)GEN_TOP(((int)piVar9 + 6))) = *((short *)GEN_TOP(((int)piVar9 + 6))) - 1;
        piVar1 = piVar9 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar9)))(piVar9 GEN_EDX_ARG,1);
        }
        if ((*(uint *)&gen_args[0]) != 0) {
          *((short *)GEN_TOP(((*(uint *)&gen_args[0]) + 6))) = *((short *)GEN_TOP(((*(uint *)&gen_args[0]) + 6))) - 1;
          piVar9 = ((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 8)));
          *piVar9 = *piVar9 - 1;
          if (*piVar9 == 0) {
            (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(uint *)&gen_args[0]))))))((*(uint *)&gen_args[0]),1);
          }
        }
        return uVar6;
      }
      *((short *)GEN_TOP(((int)piVar9 + 6))) = *((short *)GEN_TOP(((int)piVar9 + 6))) - 1;
      piVar1 = piVar9 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar9)))(piVar9 GEN_EDX_ARG,1);
      }
      if ((*(uint *)&gen_args[0]) != 0) {
        *((short *)GEN_TOP(((*(uint *)&gen_args[0]) + 6))) = *((short *)GEN_TOP(((*(uint *)&gen_args[0]) + 6))) - 1;
        piVar9 = ((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 8)));
        *piVar9 = *piVar9 - 1;
        if (*piVar9 == 0) {
          (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(uint *)&gen_args[0]))))))((*(uint *)&gen_args[0]),1);
        }
      }
      return 1;
    }
    switch((unsigned int)(uintptr_t)(iVar2)) {
    case 2: ;
      uVar6 = F_00df30a0(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114c8bc),&(*(int * PTR32 *)(gen_frame + 0x40)));
      if (uVar6 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) + 0x40))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1])[1],(*(int * PTR32 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)));
        return 0;
      }
      return uVar6;
    case 3: ;
      uVar6 = F_00df3130(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114c8b4),&(*(uint *)&gen_args[0]));
      if (uVar6 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) + 0x50))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1])[1],(*(uint *)&gen_args[0]));
        return 0;
      }
      return uVar6;
    case 4: ;
      uVar6 = F_00df30a0(param_1 GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x112673c)),&(*(int * PTR32 *)(gen_frame + 0x40)));
      if (uVar6 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) + 0x40))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1])[1],(*(int * PTR32 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)));
        return 0;
      }
      return uVar6;
    case 5: ;
      uVar6 = F_00df36c0(param_1 GEN_EDX_ARG,&(*(uint *)&gen_args[0]));
      if (uVar6 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) + 0x54))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1])[1],(*(uint *)&gen_args[0]));
        return 0;
      }
      break;
    case 6: ;
      iVar2 = **((int * PTR32 *)GEN_TOP(((int)param_1 + 0x78)));
      uVar6 = F_00e19c80(piVar9 GEN_EDX_ARG);
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x24))))(*((undefined4 *)GEN_TOP(((int)param_1 + 0x78))),uVar6);
      if (uVar6 != 0) {
        (*(uint *)&gen_args[0]) = 0;
        uVar6 = F_00df4520(param_1 GEN_EDX_ARG,uVar6,&(*(uint *)&gen_args[0]));
        if (uVar6 != 0) {
          if ((*(uint *)&gen_args[0]) != 0) {
            *((short *)GEN_TOP(((*(uint *)&gen_args[0]) + 6))) = *((short *)GEN_TOP(((*(uint *)&gen_args[0]) + 6))) - 1;
            piVar9 = ((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 8)));
            *piVar9 = *piVar9 - 1;
            if (*piVar9 == 0) {
              (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(uint *)&gen_args[0]))))))((*(uint *)&gen_args[0]),1);
            }
          }
          return uVar6;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) + 0x5c))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1])[1],(*(uint *)&gen_args[0]));
        if ((*(uint *)&gen_args[0]) != 0) {
          *((short *)GEN_TOP(((*(uint *)&gen_args[0]) + 6))) = *((short *)GEN_TOP(((*(uint *)&gen_args[0]) + 6))) - 1;
          piVar9 = ((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 8)));
          *piVar9 = *piVar9 - 1;
          if (*piVar9 == 0) {
            (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(uint *)&gen_args[0]))))))((*(uint *)&gen_args[0]),1);
            return 0;
          }
          return 0;
        }
        return 0;
      }
      break;
    case 7: ;
      uVar6 = F_00df5e00(param_1 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]));
      return uVar6;
    }
  }
  return 1;
}

/* ref: FUN_00df4100 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf4100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  F_00df2fe0(this GEN_EDX_FWD);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 8))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG)));
  F_00e1c9e0(this GEN_EDX_ARG);
  uVar3 = F_00df2d60(this GEN_EDX_ARG);
  while( true ) {
    if (uVar3 != 1) {
      uVar3 = F_00df3040(this GEN_EDX_ARG);
      return (uint)(uVar3 != 0);
    }
    uVar3 = F_00df33c0(this GEN_EDX_ARG,&REFG(undefined, 0x1135940));
    if ((uVar3 == 0) || (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x2c))))(piVar2 GEN_EDX_ARG,uVar3), (int)uVar3 < 0))
    break;
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x28)));
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*pcVar1)(piVar2,uVar3,&(*(undefined4 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x0)));
    uVar3 = F_00df3c50(this GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x10)));
    if (uVar3 != 0) {
      return uVar3;
    }
    uVar3 = F_00df2d60(this GEN_EDX_ARG);
  }
  return 1;
}

/* ref: FUN_00df41d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df41d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf41d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  F_00e1c6b0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = param_2;
  piVar1 = ((int *)GEN_TOP(((int)this + 0x7c)));
  *piVar1 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0x80000000;
  piVar2 = ((int *)GEN_TOP(((int)this + 0x88)));
  uVar3 = param_1 >> 8;
  param_1 = uVar3 << 8;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0x80000000;
  *piVar2 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0x98))) GEN_EDX_ARG,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  param_1 = uVar3 << 8;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0x80000000;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0x80000000;
  if (*((uint *)GEN_TOP(((int)this + 0x80))) == (*((uint *)GEN_TOP(((int)this + 0x84))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
  }
  *((undefined4 *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)this + 0x80))) * 4))) = 0;
  *((int *)GEN_TOP(((int)this + 0x80))) = *((int *)GEN_TOP(((int)this + 0x80))) + 1;
  if (*((uint *)GEN_TOP(((int)this + 0x8c))) == (*((uint *)GEN_TOP(((int)this + 0x90))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar2,4);
  }
  *((undefined1 * PTR32 *)GEN_TOP((*piVar2 + *((int *)GEN_TOP(((int)this + 0x8c))) * 4))) = &REFG(undefined1, 0x107fc63);
  *((int *)GEN_TOP(((int)this + 0x8c))) = *((int *)GEN_TOP(((int)this + 0x8c))) + 1;
  if (*((uint *)GEN_TOP(((int)this + 0x8c))) == (*((uint *)GEN_TOP(((int)this + 0x90))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar2,4);
  }
  *((undefined4 *)GEN_TOP((*piVar2 + *((int *)GEN_TOP(((int)this + 0x8c))) * 4))) = 0;
  *((int *)GEN_TOP(((int)this + 0x8c))) = *((int *)GEN_TOP(((int)this + 0x8c))) + 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 2;
  (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)REFP(0x114c8fc));
  uVar3 = F_00da0e60(((char *)REFP(0x114c8fc)));
  (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x114c8fc)) + uVar3;
  uVar3 = F_00df2eb0(this GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x0)));
  *((uint *)GEN_TOP(((int)this + 0xd0))) = uVar3;
  return (uint)this;
}

/* ref: FUN_00df4340 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf4340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  code * pcVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  undefined * this_00;
  LPVOID pvVar10;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar9 = F_00da3970(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_FWD);
  F_00da3e40((int)this + 0xb4 GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3,uVar9);
  cVar8 = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3));
  while (cVar8 != '\0') {
    this_00 = ((undefined *)GEN_TOP(F_00da39b0((int)this + 0xb4 GEN_EDX_ARG,uVar9)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00df5c70(this_00 GEN_EDX_ARG);
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c))) + 8))))
                (*((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c))) GEN_EDX_ARG,this_00,0x1c);
    }
    uVar9 = F_00da39f0(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG,uVar9);
    F_00da3e40((int)this + 0xb4 GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3,uVar9);
    cVar8 = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3));
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 200)));
  iVar4 = *((int *)GEN_TOP(((int)this + 0xc4)));
  while (iVar3 = iVar3 - 1, -1 < iVar3) {
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP((iVar4 + iVar3 * 4)));
    if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
      sVar2 = *((short *)GEN_TOP(((int)puVar5 + 6)));
      *((short *)GEN_TOP(((int)puVar5 + 6))) = sVar2 - 1;
      piVar1 = puVar5 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        pcVar6 = *((gen_code32 *)GEN_TOP(*puVar5));
        (*pcVar6)(puVar5,1);
      }
    }
  }
  uVar9 = *((uint *)GEN_TOP(((int)this + 0xcc)));
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  if ((uVar9 & 0x80000000) == 0) {
    uVar7 = *((undefined4 *)GEN_TOP(((int)this + 0xc4)));
    pcVar6 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10)));
    (*pcVar6)(&REFG(undefined * PTR32, 0x13516ac),uVar7,uVar9 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0x80000000;
  F_00da3e20(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG);
  uVar9 = *((uint *)GEN_TOP(((int)this + 0xb0)));
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  if ((uVar9 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xa8))),uVar9 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0x80000000;
  F_00df5070(((undefined *)GEN_TOP(((int)this + 0x98))) GEN_EDX_ARG);
  F_00da3e20(((undefined *)GEN_TOP(((int)this + 0x98))) GEN_EDX_ARG);
  uVar9 = *((uint *)GEN_TOP(((int)this + 0x90)));
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  if ((uVar9 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x88))),uVar9 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0x80000000;
  uVar9 = *((uint *)GEN_TOP(((int)this + 0x84)));
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  if ((uVar9 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x7c))),uVar9 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0x80000000;
  uVar9 = F_00df5bb0(this GEN_EDX_ARG);
  return uVar9;
}

/* ref: FUN_00df4520 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf4520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  uVar4 = (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  if ((*(undefined4 * PTR32 *)&gen_args[0]) == ((undefined4 *)GEN_TOP(0x0))) {
    uVar4 = F_00df33c0(this GEN_EDX_FWD,&REFG(undefined, 0x1134e40));
    if (uVar4 != 0) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x78))) + 0x24))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG,uVar4);
      if (uVar4 != 0) goto LAB_00df455d;
    }
    return 1;
  }
LAB_00df455d: ;
  uVar5 = F_00df33c0(this GEN_EDX_ARG,&REFG(undefined, 0x11393c4));
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x78)));
  (*(uint *)(gen_frame + 0x0)) = uVar4;
  puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),0)));
  if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) + 1;
    puVar6[2] = puVar6[2] + 1;
  }
  (*(undefined4 * PTR32 *)&gen_args[0]) = puVar6;
  uVar4 = F_00df4100(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]));
  if (uVar4 == 0) {
    if (uVar5 != 0) {
      uVar4 = F_00df3490(this GEN_EDX_ARG,uVar5,&(*(undefined4 * PTR32 *)&gen_args[0]));
      if (uVar4 != 0) {
        if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) - 1;
          piVar2 = puVar6 + 2;
          *piVar2 = *piVar2 - 1;
          if (*piVar2 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
          }
        }
        return uVar4;
      }
    }
    piVar2 = (*(int * PTR32 *)&gen_args[1]);
    if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) + 1;
      puVar6[2] = puVar6[2] + 1;
    }
    puVar3 = ((undefined4 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1])));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar3 + 6))) = *((short *)GEN_TOP(((int)puVar3 + 6))) - 1;
      piVar1 = puVar3 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
      }
    }
    *piVar2 = (int)puVar6;
    if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) - 1;
      piVar2 = puVar6 + 2;
      *piVar2 = *piVar2 - 1;
      if (*piVar2 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
      }
    }
    uVar4 = 0;
  }
  else if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) - 1;
    piVar2 = puVar6 + 2;
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: FUN_00df4660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf4660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x218, 8);
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined * pvVar5;
  char * pcVar6;
  undefined4 * puVar7;
  
  F_00e1c9e0(this GEN_EDX_FWD);
  uVar4 = F_00df2d60(this GEN_EDX_ARG);
  if (uVar4 == 0) {
    F_00e1c9e0(this GEN_EDX_ARG);
  }
  uVar4 = F_00df2d60(this GEN_EDX_ARG);
  if (uVar4 != 1) {
    F_00da0a80(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG,((char *)REFP(0x114c950)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xfeed00aa,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114c92c)),0x46c);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG);
    return 1;
  }
  pvVar5 = ((undefined *)GEN_TOP(F_00e1c480(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x208)))));
  pcVar6 = ((char *)GEN_TOP(F_0105a5b0(pvVar5 GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x213)),((char *)REFP(0x114c920)))));
  if (*pcVar6 == '\0') {
    F_00da0a80(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG,((char *)REFP(0x114c904)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xfeed00aa,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114c92c)),0x472);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG);
    return 1;
  }
  puVar7 = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x200)) = 0;
  F_00e1c560(this GEN_EDX_ARG,((char *)REFP(0x114c8e4)),&(*(undefined4 *)(gen_frame + 0x200)));
  F_00df2fe0(this GEN_EDX_ARG);
  F_00e1c9e0(this GEN_EDX_ARG);
  uVar4 = F_00df2d60(this GEN_EDX_ARG);
  while (uVar4 == 1) {
    pvVar5 = ((undefined *)GEN_TOP(F_00e1c480(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x208)))));
    pcVar6 = ((char *)GEN_TOP(F_0105a5b0(pvVar5 GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x213)),((char *)REFP(0x113b404)))));
    if (*pcVar6 == '\0') break;
    F_00df34c0(this GEN_EDX_ARG);
    uVar4 = F_00df2d60(this GEN_EDX_ARG);
  }
  do {
    uVar4 = F_00df2d60(this GEN_EDX_ARG);
    if ((uVar4 != 1) && (uVar4 != 2)) {
      uVar4 = F_00df3040(this GEN_EDX_ARG);
      if ((uVar4 == 0) && (uVar4 = F_00df2d60(this GEN_EDX_ARG), uVar4 == 7)) {
        uVar4 = F_00df2da0(this GEN_EDX_ARG);
        if (uVar4 == 0) {
          if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) + 1;
            puVar7[2] = puVar7[2] + 1;
          }
          puVar3 = ((undefined4 *)GEN_TOP(*param_1));
          if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar3 + 6))) = *((short *)GEN_TOP(((int)puVar3 + 6))) - 1;
            piVar1 = puVar3 + 2;
            *piVar1 = *piVar1 - 1;
            if (*piVar1 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
            }
          }
          *param_1 = (int)puVar7;
          if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) - 1;
            piVar1 = puVar7 + 2;
            *piVar1 = *piVar1 - 1;
            if (*piVar1 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar7)))(puVar7 GEN_EDX_ARG,1);
            }
          }
          return 0;
        }
        if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) - 1;
          piVar1 = puVar7 + 2;
          *piVar1 = *piVar1 - 1;
          if (*piVar1 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar7)))(puVar7 GEN_EDX_ARG,1);
          }
        }
        return uVar4;
      }
      if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
        return 1;
      }
      *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) - 1;
      piVar1 = puVar7 + 2;
      *piVar1 = *piVar1 - 1;
      iVar2 = *piVar1;
      goto LAB_00df4917;
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x20c)) = ((undefined4 *)GEN_TOP(0x0));
    uVar4 = F_00df4520(this GEN_EDX_ARG,0,&(*(undefined4 * PTR32 *)(gen_frame + 0x20c)));
    puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x20c));
    if (uVar4 == 1) {
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x20c)) != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x20c)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x20c)) + 6))) - 1;
        piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x20c)) + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x20c)))))((*(undefined4 * PTR32 *)(gen_frame + 0x20c)) GEN_EDX_ARG,1);
        }
      }
      if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) - 1;
        piVar1 = puVar7 + 2;
        *piVar1 = *piVar1 - 1;
        iVar2 = *piVar1;
LAB_00df4917: ;
        if (iVar2 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar7)))(puVar7 GEN_EDX_ARG,1);
        }
      }
      return 1;
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x20c)) != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x20c)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x20c)) + 6))) + 1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x20c))[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x20c))[2] + 1;
    }
    if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) - 1;
      piVar1 = puVar7 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar7)))(puVar7 GEN_EDX_ARG,1);
      }
    }
    puVar7 = puVar3;
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar3 + 6))) = *((short *)GEN_TOP(((int)puVar3 + 6))) - 1;
      piVar1 = puVar3 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
      }
    }
  } while( true );
}

/* ref: hkXmlTagfileReader::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdf4940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0xd8, 8, 4);
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  F_00df41d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 * PTR32 *)&gen_args[2]));
  (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x0));
  uVar3 = F_00df4660(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]));
  if (uVar3 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 * PTR32 *)&gen_args[2]);
    if ((*(undefined4 * PTR32 *)&gen_args[2]) == ((undefined4 *)GEN_TOP(0x0))) goto LAB_00df49bc;
    *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[2]) + 6))) + 1;
    (*(undefined4 * PTR32 *)&gen_args[2])[2] = (*(undefined4 * PTR32 *)&gen_args[2])[2] + 1;
    *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[2]) + 6))) - 1;
    piVar1 = (*(undefined4 * PTR32 *)&gen_args[2]) + 2;
    *piVar1 = *piVar1 - 1;
    iVar2 = *piVar1;
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[0]) = 0;
    if ((*(undefined4 * PTR32 *)&gen_args[2]) == ((undefined4 *)GEN_TOP(0x0))) goto LAB_00df49bc;
    *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[2]) + 6))) - 1;
    piVar1 = (*(undefined4 * PTR32 *)&gen_args[2]) + 2;
    *piVar1 = *piVar1 - 1;
    iVar2 = *piVar1;
  }
  if (iVar2 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))))((*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG,1);
  }
LAB_00df49bc: ;
  F_00df4340(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00df49d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df49d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf49d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00df49f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df49f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf49f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df4a00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf4a00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df4a20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4a20(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf4a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00df4a30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf4a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00df4a40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4a40(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf4a40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00da3e40(in_ecx GEN_EDX_FWD,param_2,param_3);
  return param_2;
}

/* ref: FUN_00df4a60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf4a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da3ae0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00df4a70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4a70(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf4a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da3990(in_ecx GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00df4a80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf4a80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da39d0(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df4a90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4a90(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf4a90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00da3e40(in_ecx GEN_EDX_FWD,param_2,param_3);
  return param_2;
}

/* ref: FUN_00df4ac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf4ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00df4b20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4b20(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf4b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00df4b70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4b70(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf4b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00df4c00 */
GEN_LIB GEN_FRAME unsigned int F_00df4c00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf4c00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00df4c70 */
GEN_LIB GEN_FRAME unsigned int F_00df4c70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf4c70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00df4cb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdf4cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00df4ce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf4ce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00df4d00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf4d00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00df4d20 */
GEN_LIB GEN_FRAME uint F_00df4d20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf4d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00df4d30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf4d30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00df4d50 */
GEN_LIB GEN_FRAME uint F_00df4d50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf4d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00df4d60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf4d60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00df4d80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf4d80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00df4da0 */
GEN_LIB GEN_FRAME uint F_00df4da0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf4da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00df4df0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4df0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf4df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  int iVar1;
  
  if (((*in_ecx == 9) && (*((int *)GEN_TOP(in_ecx[1])) == 3)) &&
     ((iVar1 = in_ecx[2], iVar1 == 4 || (((iVar1 == 8 || (iVar1 == 0xc)) || (iVar1 == 0x10)))))) {
    *param_2 = 1;
    return (uint)param_2;
  }
  *param_2 = 0;
  return (uint)param_2;
}

/* ref: FUN_00df4e30 */
GEN_LIB GEN_FRAME unsigned int F_00df4e30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf4e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00df4e60 */
GEN_LIB GEN_FRAME uint F_00df4e60(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf4e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00df4e80 */
GEN_LIB GEN_FRAME unsigned int F_00df4e80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf4e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return;
}

/* ref: FUN_00df4eb0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df4eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf4eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 8)))) {
    do {
      puVar1 = *(undefined4 * PTR32 *)this;
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar1 + 6))) = *((short *)GEN_TOP(((int)puVar1 + 6))) + 1;
        puVar1[2] = puVar1[2] + 1;
      }
      piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar3 * 8)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x60))))
                (piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar3 * 8 + 4))),puVar1);
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar1 + 6))) = *((short *)GEN_TOP(((int)puVar1 + 6))) - 1;
        piVar2 = puVar1 + 2;
        *piVar2 = *piVar2 - 1;
        if (*piVar2 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *((int *)GEN_TOP(((int)this + 8))));
  }
  iVar3 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x14)))) {
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar3 * 8)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))
                (piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar3 * 8 + 4))),
                 *(undefined4 *)this);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *((int *)GEN_TOP(((int)this + 0x14))));
  }
  return;
}

/* ref: FUN_00df4f40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf4f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00df4fe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df4fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf4fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (*(undefined4 *)&gen_args[0]);
  uVar2 = F_00da3ae0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  F_00da3e40(this GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3,uVar2);
  if ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[0]) + 3)) == '\0') {
    uVar2 = F_00da0f10(uVar1,&REFG(undefined * PTR32, 0x13516ac));
    F_00da3a20(this GEN_EDX_ARG,uVar2,(*(undefined4 *)&gen_args[1]));
    return uVar2;
  }
  uVar3 = F_00da3990(this GEN_EDX_ARG,uVar2);
  F_00da39d0(this GEN_EDX_ARG,uVar2,(*(undefined4 *)&gen_args[1]));
  return uVar3;
}

/* ref: FUN_00df5070 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df5070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf5070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar2 = F_00da3970(this GEN_EDX_FWD);
  F_00da3e40(this GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3,uVar2);
  cVar1 = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3));
  while (cVar1 != '\0') {
    uVar3 = F_00da3990(this GEN_EDX_ARG,uVar2);
    F_00da0f40(uVar3,&REFG(undefined * PTR32, 0x13516ac));
    uVar2 = F_00da39f0(this GEN_EDX_ARG,uVar2);
    F_00da3e40(this GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3,uVar2);
    cVar1 = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3));
  }
  F_00da3cd0(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00df50d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df50d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf50d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) - param_2;
  return param_2;
}

/* ref: FUN_00df50e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df50e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf50e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: FUN_00df5120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df5120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf5120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00df5160 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df5160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf5160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00df51a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df51a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdf51a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00df51c0 */
GEN_LIB GEN_FRAME unsigned int F_00df51c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf51c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00df51f0 */
GEN_LIB GEN_FRAME unsigned int F_00df51f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf51f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00df5220 */
GEN_LIB GEN_FRAME unsigned int F_00df5220(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf5220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = param_1;
  iVar3 = param_2;
  if (0 < param_2) {
    do {
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        iVar1 = *param_3;
        *piVar2 = iVar1;
        if (iVar1 != 0) {
          *((short *)GEN_TOP((iVar1 + 6))) = *((short *)GEN_TOP((iVar1 + 6))) + 1;
          *((int *)GEN_TOP((iVar1 + 8))) = *((int *)GEN_TOP((iVar1 + 8))) + 1;
        }
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00df52a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df52a0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf52a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  LPVOID pvVar3;
  
  puVar2 = ((undefined4 *)GEN_TOP(*param_1));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) - 1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD,1);
    }
  }
  if ((param_2 & 1) != 0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: FUN_00df52f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df52f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf52f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0xc);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: FUN_00df5330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df5330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf5330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00df5370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df5370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf5370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00df53b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df53b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf53b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00df5070(this GEN_EDX_FWD);
  uVar1 = F_00da3e20(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00df53c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df53c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf53c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00df5410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df5410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf5410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00df5460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df5460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf5460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  uVar3 = *(uint *)this;
  puVar1 = ((uint *)GEN_TOP((uVar3 + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((uint *)GEN_TOP(0x0))) {
    uVar2 = *param_2;
    *puVar1 = uVar2;
    uVar3 = 0;
    if (uVar2 != 0) {
      *((short *)GEN_TOP((uVar2 + 6))) = *((short *)GEN_TOP((uVar2 + 6))) + 1;
      *((int *)GEN_TOP((uVar2 + 8))) = *((int *)GEN_TOP((uVar2 + 8))) + 1;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
      return uVar2;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar3;
}

/* ref: FUN_00df54c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df54c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf54c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df5500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df5500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf5500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df5540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df5540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf5540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df5580 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df5580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf5580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df55c0 */
GEN_LIB GEN_FRAME unsigned int F_00df55c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf55c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = param_2;
  while (iVar3 = iVar3 - 1, -1 < iVar3) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + iVar3 * 4)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) - 1;
      piVar1 = puVar2 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
    }
  }
  return;
}

/* ref: FUN_00df5600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df5600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf5600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00df5650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df5650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf5650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00df56a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df56a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf56a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if (*((uint *)GEN_TOP(((int)this + 4))) == uVar3) {
    uVar3 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((uint *)GEN_TOP(0x0))) {
    uVar2 = *param_1;
    *puVar1 = uVar2;
    uVar3 = 0;
    if (uVar2 != 0) {
      *((short *)GEN_TOP((uVar2 + 6))) = *((short *)GEN_TOP((uVar2 + 6))) + 1;
      *((int *)GEN_TOP((uVar2 + 8))) = *((int *)GEN_TOP((uVar2 + 8))) + 1;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
      return uVar2;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar3;
}

/* ref: FUN_00df5700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df5700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf5700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  return (uint)this;
}

/* ref: FUN_00df5720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df5720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf5720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000010;
  return (uint)this;
}

/* ref: FUN_00df5740 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df5740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf5740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df5780 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df5780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf5780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df57c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df57c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf57c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df5800 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df5800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf5800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df5840 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df5840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf5840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df58c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df58c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf58c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 0x14))) == (*((uint *)GEN_TOP(((int)this + 0x18))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x10))),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + *((int *)GEN_TOP(((int)this + 0x14))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  *((int *)GEN_TOP(((int)this + 0x14))) = *((int *)GEN_TOP(((int)this + 0x14))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00df5910 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df5910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf5910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 8))) == (*((uint *)GEN_TOP(((int)this + 0xc))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 4))),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + *((int *)GEN_TOP(((int)this + 8))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00df5960 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df5960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf5960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df59a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df59a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf59a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df59e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df59e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf59e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df5a20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df5a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf5a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df5a60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df5a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf5a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df5aa0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df5aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf5aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df5ae0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df5ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf5ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df5b20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df5b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf5b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  iVar2 = *(int *)this;
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  while (iVar3 = iVar3 - 1, -1 < iVar3) {
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP((iVar2 + iVar3 * 4)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar4 + 6))) = *((short *)GEN_TOP(((int)puVar4 + 6))) - 1;
      piVar1 = puVar4 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_FWD,1);
      }
    }
  }
  uVar5 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar5 & 0x80000000) == 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar5 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar5;
}

/* ref: FUN_00df5bb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df5bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf5bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x70)));
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x68))),iVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0x80000000;
  F_00e1bd60(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30))) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x2c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  if (-1 < (int)uVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x24))),uVar2 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x80000000;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x18))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  uVar2 = F_00da3e20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: FUN_00df5c70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df5c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf5c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x10))),iVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 4))),uVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x80000000;
  return uVar2;
}

/* ref: FUN_00df5cf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df5cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf5cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x10, 0);
  undefined * pvVar1;
  char * pcVar2;
  uint uVar3;
  undefined1 * puVar4;
  undefined * PTR32 * ppuVar5;
  undefined * puVar6;
  
  F_00df2d60(this GEN_EDX_FWD);
  if (*((int *)GEN_TOP(((int)this + 0x74))) == 1) {
    ppuVar5 = (*(undefined * PTR32 (*)[1])REFP(0x114c8b0));
    puVar4 = &(*(undefined1 *)(gen_frame + 0xb));
    pvVar1 = ((undefined *)GEN_TOP(F_00e1c480(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
    pcVar2 = ((char *)GEN_TOP(F_0105a5b0(pvVar1 GEN_EDX_ARG,puVar4,ppuVar5)));
    if (*pcVar2 != '\0') {
      F_00df2fe0(this GEN_EDX_ARG);
      F_00e1c9e0(this GEN_EDX_ARG);
      uVar3 = F_00df2d60(this GEN_EDX_ARG);
      if (uVar3 == 4) {
        uVar3 = F_00e1c4c0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        uVar3 = F_00df2eb0(this GEN_EDX_ARG,uVar3);
        if (uVar3 == *((uint *)GEN_TOP(((int)this + 0xd0)))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x60))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1],0);
        }
        else {
          pvVar1 = ((undefined *)GEN_TOP(F_00df3420(this GEN_EDX_ARG,uVar3)));
          F_00df5910(pvVar1 GEN_EDX_ARG,*param_1,param_1[1]);
        }
        F_00e1c9e0(this GEN_EDX_ARG);
        F_00df2d60(this GEN_EDX_ARG);
        uVar3 = F_00df3040(this GEN_EDX_ARG);
        return uVar3;
      }
    }
  }
  else if (*((int *)GEN_TOP(((int)this + 0x74))) == 2) {
    puVar6 = &REFG(undefined, 0x114c8d4);
    puVar4 = &(*(undefined1 *)(gen_frame + 0xb));
    pvVar1 = ((undefined *)GEN_TOP(F_00e1c480(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
    pcVar2 = ((char *)GEN_TOP(F_0105a5b0(pvVar1 GEN_EDX_ARG,puVar4,puVar6)));
    if (*pcVar2 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x60))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1],0);
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00df5e00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df5e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf5e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x10, 0);
  undefined * pvVar1;
  char * pcVar2;
  uint uVar3;
  undefined1 * puVar4;
  undefined * PTR32 * ppuVar5;
  undefined * puVar6;
  
  F_00df2d60(this GEN_EDX_FWD);
  if (*((int *)GEN_TOP(((int)this + 0x74))) == 1) {
    ppuVar5 = (*(undefined * PTR32 (*)[1])REFP(0x114c8b0));
    puVar4 = &(*(undefined1 *)(gen_frame + 0xb));
    pvVar1 = ((undefined *)GEN_TOP(F_00e1c480(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
    pcVar2 = ((char *)GEN_TOP(F_0105a5b0(pvVar1 GEN_EDX_ARG,puVar4,ppuVar5)));
    if (*pcVar2 != '\0') {
      F_00df2fe0(this GEN_EDX_ARG);
      F_00e1c9e0(this GEN_EDX_ARG);
      uVar3 = F_00df2d60(this GEN_EDX_ARG);
      if (uVar3 == 4) {
        uVar3 = F_00e1c4c0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        uVar3 = F_00df2eb0(this GEN_EDX_ARG,uVar3);
        if (uVar3 == *((uint *)GEN_TOP(((int)this + 0xd0)))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x44))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1],0);
        }
        else {
          pvVar1 = ((undefined *)GEN_TOP(F_00df3420(this GEN_EDX_ARG,uVar3)));
          F_00df58c0(pvVar1 GEN_EDX_ARG,*param_1,param_1[1]);
        }
        F_00e1c9e0(this GEN_EDX_ARG);
        F_00df2d60(this GEN_EDX_ARG);
        uVar3 = F_00df3040(this GEN_EDX_ARG);
        return uVar3;
      }
    }
  }
  else if (*((int *)GEN_TOP(((int)this + 0x74))) == 2) {
    puVar6 = &REFG(undefined, 0x114c8d4);
    puVar4 = &(*(undefined1 *)(gen_frame + 0xb));
    pvVar1 = ((undefined *)GEN_TOP(F_00e1c480(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
    pcVar2 = ((char *)GEN_TOP(F_0105a5b0(pvVar1 GEN_EDX_ARG,puVar4,puVar6)));
    if (*pcVar2 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x44))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1],0);
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00df5f10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df5f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf5f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  iVar3 = *(int *)this;
  iVar4 = *((int *)GEN_TOP(((int)this + 4)));
  while (iVar4 = iVar4 - 1, -1 < iVar4) {
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP((iVar3 + iVar4 * 4)));
    if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
      sVar2 = *((short *)GEN_TOP(((int)puVar5 + 6)));
      *((short *)GEN_TOP(((int)puVar5 + 6))) = sVar2 - 1;
      piVar1 = puVar5 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_FWD,1);
      }
    }
  }
  uVar6 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar6 & 0x80000000) == 0) {
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar6 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar6;
}

/* ref: FUN_00df5f80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df5f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf5f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00df5cf0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00df5f90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df5f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf5f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00df5e00(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00df5fa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df5fa0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf5fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00df5c70(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return (uint)param_1;
}

/* ref: FUN_00df5fe0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df5fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf5fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  iVar3 = *(int *)this;
  iVar4 = *((int *)GEN_TOP(((int)this + 4)));
  while (iVar4 = iVar4 - 1, -1 < iVar4) {
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP((iVar3 + iVar4 * 4)));
    if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
      sVar2 = *((short *)GEN_TOP(((int)puVar5 + 6)));
      *((short *)GEN_TOP(((int)puVar5 + 6))) = sVar2 - 1;
      piVar1 = puVar5 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_FWD,1);
      }
    }
  }
  uVar6 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar6 & 0x80000000) == 0) {
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar6 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar6;
}

/* ref: hkDataWorldNative::vf24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdf6140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00e06280(this + 0x30,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: hkDataWorldNative::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df6170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: hkDataWorldNative::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df6180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdf6180u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return 0;
}

/* ref: FUN_00df6190 */
GEN_LIB GEN_FRAME uint F_00df6190(GEN_P(undefined4 * in_edi, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  LPVOID pvVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  char * pcVar7;
  char * pcVar8;
  
  if (in_edi[1] != 0) {
    iVar1 = *param_2;
    uVar2 = F_00d92610(in_edi[1] GEN_EDX_ARG);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x24))))(param_2,uVar2);
    if (uVar2 == 0) {
      F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
      pcVar8 = ((char *)REFP(0x114ccf4));
      uVar2 = F_00d92610(in_edi[1] GEN_EDX_ARG);
      uVar6 = *in_edi;
      pcVar7 = ((char *)REFP(0x114cce8));
      pvVar3 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114ccd4)))));
      pvVar3 = ((undefined *)GEN_TOP(F_00d9fde0(pvVar3 GEN_EDX_ARG,uVar6)));
      pvVar3 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar3 GEN_EDX_ARG,pcVar7)));
      pvVar3 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar3 GEN_EDX_ARG,uVar2)));
      F_00d9fe80(pvVar3 GEN_EDX_ARG,pcVar8);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0x1800473a,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114ccb0)),800);
      F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
      *in_edi = 0;
      in_edi[1] = 0;
    }
    else {
      in_edi[1] = *((undefined4 *)GEN_TOP((uVar2 + 0xc)));
    }
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) GEN_EDX_ARG,0x1c)));
  puVar5[1] = 0x1c;
  puVar5[2] = 0;
  *puVar5 = (*(undefined * PTR32 (*)[30])REFP(0x114caf4));
  F_0105a950(puVar5 + 3 GEN_EDX_ARG,in_edi);
  puVar5[5] = param_2;
  *(undefined1 *)(puVar5 + 6) = param_3;
  return (uint)puVar5;
}

/* ref: hkDataArrayNative::vf24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df62a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf62a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10);
  if (*(int *)(this + 0x1c) != 0x19) {
    uVar1 = F_00dbaed0(*((undefined4 *)GEN_TOP((param_2 + 0x10))),*((undefined4 *)GEN_TOP((param_2 + 0xc))),uVar1,1);
  }
  return uVar1;
}

/* ref: FUN_00df62e0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df62e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf62e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  *((undefined * PTR32 *)GEN_TOP(((int)this + 8))) = param_1;
  return;
}

/* ref: FUN_00df6310 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df6310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  }
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) = param_1;
  return;
}

/* ref: FUN_00df6340 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = param_1;
  (*(undefined4 *)(gen_frame + 0x4)) = param_2;
  uVar1 = F_00df6190(&(*(undefined4 *)(gen_frame + 0x0)),this,0);
  return uVar1;
}

/* ref: hkDataWorldNative::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  LPVOID pvVar3;
  undefined4 * puVar4;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = F_00da4190(this + 0x14 GEN_EDX_FWD,param_1,0);
    if (uVar2 != 0) {
      return uVar2;
    }
    param_1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG,param_1);
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,0x14)));
  puVar4[1] = 0x14;
  puVar4[2] = 0;
  *puVar4 = (*(undefined * PTR32 (*)[13])REFP(0x114cab8));
  puVar4[3] = param_1;
  puVar4[4] = this;
  F_00da3a20(this + 0x14 GEN_EDX_ARG,iVar1,puVar4);
  return (uint)puVar4;
}

/* ref: hkDataWorldNative::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df63f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf63f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  LPVOID pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x1c)));
  puVar2[1] = 0x1c;
  puVar2[2] = 0;
  *puVar2 = (*(undefined * PTR32 (*)[30])REFP(0x114caf4));
  uVar3 = param_2[1];
  if (uVar3 == 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x14))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,*param_2);
  }
  F_0105a930(puVar2 + 3 GEN_EDX_ARG,*param_2,uVar3);
  puVar2[5] = this;
  *(undefined1 *)(puVar2 + 6) = 0;
  *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) + 1;
  puVar2[2] = puVar2[2] + 1;
  *param_1 = puVar2;
  return (uint)param_1;
}

/* ref: hkDataWorldNative::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: hkDataWorldNative::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  LPVOID pvVar1;
  undefined4 * puVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x1c)));
  puVar2[1] = 0x1c;
  puVar2[2] = 0;
  *puVar2 = (*(undefined * PTR32 (*)[30])REFP(0x114caf4));
  F_0105a950(puVar2 + 3 GEN_EDX_ARG,this + 0x24);
  puVar2[5] = this;
  *(undefined1 *)(puVar2 + 6) = 0;
  *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) + 1;
  puVar2[2] = puVar2[2] + 1;
  *param_1 = puVar2;
  return (uint)param_1;
}

/* ref: FUN_00df64e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df64e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf64e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int * piVar1;
  int iVar2;
  undefined4 uVar3;
  char * pcVar4;
  uint uVar5;
  
  uVar3 = (*(undefined4 *)&gen_args[0]);
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = (*(undefined4 *)&gen_args[0]);
  pcVar4 = ((char *)GEN_TOP(F_00d929e0((*(undefined4 *)&gen_args[1]) GEN_EDX_FWD,(int)&(*(undefined4 *)&gen_args[0]) + 3)));
  if (*pcVar4 == '\0') {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
    iVar2 = *piVar1;
    uVar5 = F_00d92610((*(undefined4 *)&gen_args[1]) GEN_EDX_ARG);
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x10))))(piVar1,uVar5);
  }
  else {
    uVar5 = F_00dbaea0(uVar3,*((undefined4 *)GEN_TOP(((int)this + 0xc))),*((undefined4 *)GEN_TOP(((int)this + 8))));
  }
  *((uint *)GEN_TOP(((int)this + 0x28))) = uVar5;
  if (uVar5 == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  }
  return uVar5;
}

/* ref: hkDataWorldNative::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  uint uVar2;
  LPVOID pvVar3;
  int * piVar4;
  undefined * this_00;
  
  piVar4 = *(int * PTR32 *)(this + 8);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 8))))(((int *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG,uVar1);
  uVar2 = F_00d929c0(uVar1 GEN_EDX_ARG);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,uVar2);
  (*(uint *)(gen_frame + 0x0)) = uVar2;
  (*(uint *)(gen_frame + 0x4)) = uVar1;
  if (uVar2 != 0) {
    uVar1 = F_00d929c0(uVar1 GEN_EDX_ARG);
    F_00da1030((*(uint *)(gen_frame + 0x0)),0,uVar1);
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 8))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x1c))))(piVar4 GEN_EDX_ARG,uVar1)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00dc25d0(this_00 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)),0);
    }
  }
  uVar1 = F_00df6190(&(*(uint *)(gen_frame + 0x0)),this,0);
  return uVar1;
}

/* ref: FUN_00df6600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6600(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  undefined * pvVar1;
  uint local_8;
  
  *((undefined2 *)GEN_TOP(((int)param_1 + 6))) = 1;
  *param_1 = (*(undefined * PTR32 (*)[25])REFP(0x114cd54));
  local_8 = (uint)param_1 & 0xffffff00;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  F_00da3de0(param_1 + 5 GEN_EDX_FWD,local_8);
  *(undefined1 *)(param_1 + 0xb) = param_2;
  F_00e1ae10(param_1 + 0xc GEN_EDX_ARG);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x80000000;
  param_1[10] = 0;
  param_1[9] = 0;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x14))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_ARG)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(pvVar1 GEN_EDX_ARG);
  }
  if (((undefined *)GEN_TOP(param_1[3])) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(param_1[3])) GEN_EDX_ARG);
  }
  param_1[3] = pvVar1;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_ARG)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(pvVar1 GEN_EDX_ARG);
  }
  if (((undefined *)GEN_TOP(param_1[2])) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(param_1[2])) GEN_EDX_ARG);
  }
  param_1[2] = pvVar1;
  pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_ARG)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(pvVar1 GEN_EDX_ARG);
  }
  if (((undefined *)GEN_TOP(param_1[4])) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(param_1[4])) GEN_EDX_ARG);
  }
  param_1[4] = pvVar1;
  return (uint)param_1;
}

/* ref: FUN_00df66f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df66f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf66f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 uVar1;
  code * pcVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x114cd54));
  uVar4 = F_00da3970(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD);
  F_00da3e40((int)this + 0x14 GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3,uVar4);
  cVar3 = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3));
  while (cVar3 != '\0') {
    puVar5 = ((undefined4 *)GEN_TOP(F_00da39b0((int)this + 0x14 GEN_EDX_ARG,uVar4)));
    if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,1);
    }
    uVar4 = F_00da39f0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,uVar4);
    F_00da3e40((int)this + 0x14 GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3,uVar4);
    cVar3 = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3));
  }
  uVar4 = *((uint *)GEN_TOP(((int)this + 0xc0)));
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  if (-1 < (int)uVar4) {
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xb8)));
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10)));
    (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),uVar1,uVar4 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0x80000000;
  F_00e1a370(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
  uVar4 = F_00da3e20(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) {
    uVar4 = F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    uVar4 = F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    uVar4 = F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar4;
}

/* ref: hkDataWorldNative::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df67e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf67e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  byte * pbVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    (*(int *)(gen_frame + 0x0)) = 0;
    (*(int *)(gen_frame + 0x4)) = 0;
    (*(int *)(gen_frame + 0x8)) = ((int)0x80000000);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0xc)) = 0;
    if (0 < (*(int *)(gen_frame + 0x4))) {
      do {
        iVar4 = (*(int *)(gen_frame + 0xc));
        pbVar2 = ((byte *)GEN_TOP(F_00d92c20(*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0xc)) * 4))) GEN_EDX_ARG)));
        if ((*pbVar2 & 1) == 0) {
          iVar4 = *(int *)this;
          uVar3 = F_00d92610(*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0xc)) * 4))) GEN_EDX_ARG);
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar4 + 0x24))))(this,uVar3);
          if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516a4),param_1,4);
          }
          *((uint *)GEN_TOP((*param_1 + param_1[1] * 4))) = uVar3;
          param_1[1] = param_1[1] + 1;
          iVar4 = (*(int *)(gen_frame + 0xc));
        }
        (*(int *)(gen_frame + 0xc)) = iVar4 + 1;
      } while (iVar4 + 1 < (*(int *)(gen_frame + 0x4)));
    }
    (*(int *)(gen_frame + 0x4)) = 0;
    if (-1 < (*(int *)(gen_frame + 0x8))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 4);
    }
  }
  return;
}

/* ref: FUN_00df68c0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00df68c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf68c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return (*(uint *)this & param_1) == param_1;
}

/* ref: FUN_00df68e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df68e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf68e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00df6900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df6910 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df6930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6930(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00df6940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00df6950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6950(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00da3e40(in_ecx GEN_EDX_FWD,param_2,param_3);
  return param_2;
}

/* ref: FUN_00df6970 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6970(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00df6990 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf6990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00df69b0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df69b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf69b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)this = param_1;
  return;
}

/* ref: FUN_00df6a00 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf6a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00df6a20 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df6a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)this = param_1;
  return;
}

/* ref: FUN_00df6a70 */
GEN_LIB GEN_FRAME uint F_00df6a70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf6a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00df6aa0 */
GEN_LIB GEN_FRAME uint F_00df6aa0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf6aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkDataRefCounted::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6ad0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00df6b10 */
GEN_LIB GEN_FRAME uint F_00df6b10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf6b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00df6b40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6b40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x114cab8));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  return (uint)this;
}

/* ref: hkDataClassNative::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df6b70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf6b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: hkDataClassNative::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df6b80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf6b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d92610(*((undefined4 *)GEN_TOP((in_ecx + 0xc))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: hkDataClassNative::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df6b90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf6b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d92a10(*((undefined4 *)GEN_TOP((in_ecx + 0xc))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: hkDataClassNative::vf4 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df6ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf6ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00d92620(*(undefined4 *)(this + 0xc) GEN_EDX_FWD);
  if (uVar2 != 0) {
    iVar1 = **(int * PTR32 *)(this + 0x10);
    uVar2 = F_00d92610(uVar2 GEN_EDX_ARG);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x24))))(*(undefined4 *)(this + 0x10),uVar2);
    return uVar2;
  }
  return 0;
}

/* ref: hkDataClassNative::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6bd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = param_2;
  while( true ) {
    if (piVar3 == ((int *)GEN_TOP(0x0))) {
      *param_1 = 0;
      return (uint)param_1;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG);
    uVar1 = F_00da0d20(uVar2,uVar1);
    if (uVar1 == 0) break;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG)));
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkDataClassNative::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df6c30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf6c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d92850(*((undefined4 *)GEN_TOP((in_ecx + 0xc))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: hkDataClassNative::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d92970(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkDataClassNative::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df6c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf6c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d927e0(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD);
  return uVar1;
}

/* ref: hkDataClassNative::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d92920(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkDataClassNative::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6c90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00df6cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6cd0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00df6d10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6d10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdf6d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  *((undefined2 *)GEN_TOP(((int)param_1 + 6))) = 0;
  param_1[2] = 0;
  *param_1 = (*(undefined * PTR32 (*)[30])REFP(0x114caf4));
  F_0105a950(param_1 + 3 GEN_EDX_FWD,param_2);
  *(undefined1 *)(param_1 + 6) = param_4;
  param_1[5] = param_3;
  return (uint)param_1;
}

/* ref: FUN_00df6d50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6d50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00df6d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6d70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0105a6d0(param_1 GEN_EDX_FWD,this,param_2);
  return (uint)param_1;
}

/* ref: FUN_00df6d90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6d90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0105a6b0(param_1 GEN_EDX_FWD,*(undefined4 *)this,param_2);
  return (uint)param_1;
}

/* ref: FUN_00df6dd0 */
GEN_LIB GEN_NOFRAME uint F_00df6dd0(void)
{
  GEN_ENTER(0xdf6dd0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00df6de0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df6de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: FUN_00df6df0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df6df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: FUN_00df6e00 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6e00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00df6e10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df6e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: FUN_00df6e20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6e20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00df6e30 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00df6e40 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6e40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00df6e50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00df6e70 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00df6e80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df6e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: FUN_00df6e90 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6e90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00df6ea0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df6ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: FUN_00df6eb0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdf6eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: FUN_00df6ec0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df6ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: FUN_00df6ed0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00df6ee0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df6ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf6ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: FUN_00df6ef0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6ef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00df6f00 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6f00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00df6f10 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6f10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00df6f20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6f20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00df6f30 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6f30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00df6f40 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6f40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00df6f50 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6f50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00df6f60 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00df6f70 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6f70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00df6f80 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6f80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00df6f90 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6f90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00df6fa0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6fa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00df6fb0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df6fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf6fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: hkDataObjectNative::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df6fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint in_ecx;
  undefined4 * puVar1;
  char * pcVar2;
  
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  in_ecx = *(uint *)(this + 0x10);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *(undefined4 *)(this + 0xc);
  pcVar2 = ((char *)GEN_TOP(F_00d929e0(in_ecx GEN_EDX_FWD,(int)&(*(undefined4 * PTR32 *)&gen_args[0]) + 3)));
  puVar1[1] = (*pcVar2 != '\0') - 1 & in_ecx;
  return (uint)puVar1;
}

/* ref: hkDataObjectNative::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df7000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf7000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x10) != 0) {
    iVar1 = **(int * PTR32 *)(this + 0x14);
    uVar2 = F_00d92610(*(int *)(this + 0x10) GEN_EDX_FWD);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x24))))(*(undefined4 *)(this + 0x14),uVar2);
    return uVar2;
  }
  return 0;
}

/* ref: hkDataObjectNative::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf7030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  char * pcVar1;
  uint uVar2;
  
  F_0105a6d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,this + 0xc,(*(undefined4 *)&gen_args[1]));
  pcVar1 = ((char *)GEN_TOP(F_0105a720(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[1]) + 3)));
  if (*pcVar1 != '\0') {
    uVar2 = F_0105a8f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    *(*(undefined4 * PTR32 *)&gen_args[0]) = this;
    (*(undefined4 * PTR32 *)&gen_args[0])[1] = uVar2;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[1] = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: hkDataObjectNative::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdf7090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  char * pcVar1;
  
  F_0105a6d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,this + 0xc,(*(undefined4 *)&gen_args[0]));
  pcVar1 = ((char *)GEN_TOP(F_0105a720(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3)));
  return (uint)(*pcVar1 != '\0');
}

/* ref: hkDataObjectNative::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df70d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdf70d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  char * pcVar1;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),(*(undefined4 *)&gen_args[0]));
  pcVar1 = ((char *)GEN_TOP(F_0105a720(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3)));
  return (uint)(*pcVar1 != '\0');
}

/* ref: hkDataObjectNative::vf5 */
GEN_LIB GEN_NOFRAME uint F_00df7110(void)
{
  GEN_ENTER(0xdf7110u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkDataObjectNative::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d927e0(*(undefined * PTR32 *)(this + 0x10) GEN_EDX_FWD);
  return (uint)(param_1 < (int)uVar1);
}

/* ref: hkDataObjectNative::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return param_1 + 1;
}

/* ref: hkDataObjectNative::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf7150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00d92800(*(undefined * PTR32 *)(this + 0x10) GEN_EDX_FWD,param_2);
  *param_1 = this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: hkDataObjectNative::vf28 */
GEN_LIB GEN_NOFRAME unsigned int F_00df7180(void)
{
  GEN_ENTER(0xdf7180u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: hkDataObjectNative::vf24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf7190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00e1d060(this,param_1,param_2);
  return uVar1;
}

/* ref: hkDataObjectNative::vf22 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df71b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf71b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: hkDataObjectNative::vf27 */
GEN_LIB GEN_NOFRAME uint F_00df71c0(void)
{
  GEN_ENTER(0xdf71c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00df7200 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  int iVar4;
  
  uVar1 = *param_1;
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc)));
  iVar3 = uVar1 + param_1[1] * 4;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    do {
      uVar1 = F_00d92850(this_00 GEN_EDX_FWD);
      iVar3 = iVar3 + uVar1 * -4;
      iVar4 = 0;
      if (0 < (int)uVar1) {
        do {
          uVar2 = F_00d92800(this_00 GEN_EDX_ARG,iVar4);
          *((uint *)GEN_TOP((iVar3 + iVar4 * 4))) = uVar2;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar1);
      }
      this_00 = ((undefined *)GEN_TOP(F_00d92620(this_00 GEN_EDX_ARG)));
    } while (this_00 != ((undefined *)GEN_TOP(0x0)));
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00df7270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8), GEN_P(undefined4 param_9, unsigned int gen_a9))
{
  GEN_ENTER(0xdf7270u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a9;)
  uint uVar1;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_8;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_5;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114cc14));
  *((int * PTR32 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_6;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_7;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_9;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x60))))(param_1 GEN_EDX_FWD,param_5,param_6,param_7,param_8);
  *((uint *)GEN_TOP(((int)this + 0x28))) = uVar1;
  return (uint)this;
}

/* ref: hkDataArrayNative::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df72e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf72e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x28)));
}

/* ref: hkDataArrayNative::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df72f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf72f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: hkDataArrayNative::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbb4c0(*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x1c),
                       *(undefined4 *)(this + 0x24),param_1);
  *(uint *)(this + 0x10) = uVar1;
  return uVar1;
}

/* ref: hkDataArrayNative::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df7330(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf7330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 0x30))) != 0) {
    uVar1 = F_00dbb4b0(*((int *)GEN_TOP((in_ecx + 0x30))));
    return uVar1;
  }
  return *((uint *)GEN_TOP((in_ecx + 0x14)));
}

/* ref: hkDataArrayNative::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df7350(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf7350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  if ((*((int *)GEN_TOP((in_ecx + 0x1c))) == 9) || (uVar1 = 4, *((int *)GEN_TOP((in_ecx + 0x1c))) == 10)) {
    uVar1 = 8;
  }
  return uVar1;
}

/* ref: hkDataArrayNative::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df7370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf7370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x24) != 0) {
    iVar1 = **(int * PTR32 *)(this + 0xc);
    uVar2 = F_00d92610(*(int *)(this + 0x24) GEN_EDX_FWD);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x24))))(*(undefined4 *)(this + 0xc),uVar2);
    return uVar2;
  }
  return 0;
}

/* ref: hkDataArrayNative::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df73a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf73a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  param_1[1] = 1;
  *param_1 = *(undefined4 *)(this + 0x1c);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x1c))) {
  case 0xc: ;
  case 0xd: ;
    param_1[1] = 4;
    break;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
    param_1[1] = 0xc;
    break;
  case 0x11: ;
  case 0x12: ;
    param_1[1] = 0x10;
    break;
  default: ;
    goto switchD_00df73c9_caseD_13;
  case 0x18: ;
  case 0x1f: ;
    *param_1 = *(undefined4 *)(this + 0x20);
    param_1[1] = 1;
    goto switchD_00df73c9_caseD_13;
  }
  *param_1 = 0xb;
switchD_00df73c9_caseD_13: ;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  param_1[3] = uVar1;
  param_1[4] = *(undefined4 *)(this + 0x18);
  param_1[2] = *(undefined4 *)(this + 0x10);
  return 0;
}

/* ref: FUN_00df7450 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df7450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdf7450u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1;
  if (((param_1 == 4) && (iVar1 = *((int *)GEN_TOP(((int)this + 0x1c))), iVar3 = iVar1, iVar1 != 1)) &&
     (iVar3 = param_1, iVar1 == 2)) {
    iVar3 = iVar1;
  }
  if (iVar3 == *((int *)GEN_TOP(((int)this + 0x1c)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_3);
    uVar2 = F_00da5f30(iVar3);
    F_00da1010(*((undefined4 *)GEN_TOP(((int)this + 0x10))),param_2,*((short *)GEN_TOP((uVar2 + 8))) * param_3);
  }
  return;
}

/* ref: hkDataArrayNative::vf38 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df74b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf74b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 1) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_2);
    uVar1 = F_00da5f30(1);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*((short *)GEN_TOP((uVar1 + 8))) * param_2);
  }
  return;
}

/* ref: hkDataArrayNative::vf37 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df74f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf74f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_2);
    uVar1 = F_00da5f30(2);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*((short *)GEN_TOP((uVar1 + 8))) * param_2);
  }
  return;
}

/* ref: hkDataArrayNative::vf36 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df7530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf7530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 3) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_2);
    uVar1 = F_00da5f30(3);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*((short *)GEN_TOP((uVar1 + 8))) * param_2);
  }
  return;
}

/* ref: hkDataArrayNative::vf35 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf7570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 0x1c);
  uVar2 = uVar1;
  if ((uVar1 != 1) && (uVar2 = 4, uVar1 == 2)) {
    uVar2 = uVar1;
  }
  if (uVar2 == uVar1) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_2);
    uVar1 = F_00da5f30(uVar2);
    uVar1 = F_00da1010(*(undefined4 *)(this + 0x10),param_1,*((short *)GEN_TOP((uVar1 + 8))) * param_2);
  }
  return uVar1;
}

/* ref: hkDataArrayNative::vf34 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df75d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf75d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 5) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_2);
    uVar1 = F_00da5f30(5);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*((short *)GEN_TOP((uVar1 + 8))) * param_2);
  }
  return;
}

/* ref: hkDataArrayNative::vf33 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df7610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf7610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 6) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_2);
    uVar1 = F_00da5f30(6);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*((short *)GEN_TOP((uVar1 + 8))) * param_2);
  }
  return;
}

/* ref: hkDataArrayNative::vf32 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df7650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf7650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 7) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_2);
    uVar1 = F_00da5f30(7);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*((short *)GEN_TOP((uVar1 + 8))) * param_2);
  }
  return;
}

/* ref: hkDataArrayNative::vf31 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df7690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf7690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 8) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_2);
    uVar1 = F_00da5f30(8);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*((short *)GEN_TOP((uVar1 + 8))) * param_2);
  }
  return;
}

/* ref: hkDataArrayNative::vf30 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df76d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf76d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 9) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_2);
    uVar1 = F_00da5f30(9);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*((short *)GEN_TOP((uVar1 + 8))) * param_2);
  }
  return;
}

/* ref: hkDataArrayNative::vf29 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df7710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf7710u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 10) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_2);
    uVar1 = F_00da5f30(10);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*((short *)GEN_TOP((uVar1 + 8))) * param_2);
  }
  return;
}

/* ref: hkDataArrayNative::vf28 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df7750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf7750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 0xb) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_2);
    uVar1 = F_00da5f30(0xb);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*((short *)GEN_TOP((uVar1 + 8))) * param_2);
  }
  return;
}

/* ref: hkDataArrayNative::vf27 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df7790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf7790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 0x20) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_2);
    uVar1 = F_00da5f30(0x20);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*((short *)GEN_TOP((uVar1 + 8))) * param_2);
  }
  return;
}

/* ref: hkDataArrayNative::vf26 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df77d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf77d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: hkDataArrayNative::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbc000(*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x2c),
                       *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10),
                       *(int *)(this + 0xc) + 0xb8);
  return uVar1;
}

/* ref: hkDataArrayNative::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7840(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbb320(*((undefined4 *)GEN_TOP((in_ecx + 0x1c))),
                       *((int *)GEN_TOP((in_ecx + 0x18))) * param_2 + *((int *)GEN_TOP((in_ecx + 0x10))));
  return uVar1;
}

/* ref: hkDataArrayNative::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dba840(*(uint *)(this + 0x1c),
                       *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10));
  return uVar1;
}

/* ref: hkDataArrayNative::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dba980(*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x20),
                       *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10));
  return uVar1;
}

/* ref: hkDataArrayNative::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df78b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf78b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dba980(*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x20),
                       *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10));
  return uVar1;
}

/* ref: hkDataArrayNative::vf25 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df78e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf78e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  
  puVar4 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10))));
  if (*(int *)(this + 0x2c) != 0) {
    if (*(int *)(this + 0x1c) == 0x19) {
      uVar1 = F_00d929c0(*(undefined4 *)(this + 0x24) GEN_EDX_FWD);
    }
    else {
      uVar1 = F_00da5f30(*(int *)(this + 0x1c));
      uVar1 = (uint)*((short *)GEN_TOP((uVar1 + 8)));
    }
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))
                               (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x34)));
    *((undefined2 *)GEN_TOP(((int)pvVar3 + 4))) = 0x34;
    uVar1 = F_00df7270(pvVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0xc),puVar4,*(undefined4 *)(this + 0x2c),
                         uVar1,*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x20),
                         *(undefined4 *)(this + 0x24),0,0);
    return uVar1;
  }
  if (*(int *)(this + 0x1c) == 0x16) {
    uVar1 = F_00dbaf60(*(undefined4 *)(this + 0x20),0,*(undefined4 *)(this + 0x24),0);
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))
                               (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x34)));
    *((undefined2 *)GEN_TOP(((int)pvVar3 + 4))) = 0x34;
    uVar1 = F_00df7270(pvVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0xc),*puVar4,puVar4[1],uVar1,
                         *(undefined4 *)(this + 0x20),0,*(undefined4 *)(this + 0x24),0,0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00df79e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df79e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf79e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0x18))) * param_2 + *((int *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: hkDataArrayNative::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7a00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00df7a40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7a40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00df7a80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf7a80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x114caf4));
  uVar1 = param_1[1];
  if (uVar1 == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_2 + 0xc))) + 0x14))))(*((int * PTR32 *)GEN_TOP((param_2 + 0xc))) GEN_EDX_FWD,*param_1);
  }
  F_0105a930(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,*param_1,uVar1);
  *((int *)GEN_TOP(((int)this + 0x14))) = param_2;
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 0;
  return (uint)this;
}

/* ref: FUN_00df7ad0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df7ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf7ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x114caf4));
  if (*((char *)GEN_TOP(((int)this + 0x18))) != '\0') {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return;
}

/* ref: hkDataObjectNative::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(F_00d92800(*(undefined * PTR32 *)(this + 0x10) GEN_EDX_FWD,param_1)));
  return *puVar1;
}

/* ref: hkDataObjectNative::vf29 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD)));
  uVar1 = F_00df7200(this_00 GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: hkDataObjectNative::vf23 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf7b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  
  uVar4 = (*((ushort *)GEN_TOP((param_1 + 0x10))) & 0x200) != 0x200;
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  if (param_2 != 0) {
    uVar5 = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    uVar1 = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
    uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar2 = F_00dbaed0(uVar1,uVar5,uVar2,uVar4);
    return uVar2;
  }
  uVar3 = F_00da5fd0(param_1 GEN_EDX_ARG);
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar5 = 0;
    uVar3 = F_00da5fd0(param_1 GEN_EDX_ARG);
    uVar2 = F_00dbaed0(uVar3,uVar5,uVar2,uVar4);
  }
  return uVar2;
}

/* ref: hkDataObjectNative::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7bc0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[30])REFP(0x114caf4));
  if (*(char *)(param_1 + 6) != '\0') {
    F_00d91a80(((undefined *)GEN_TOP(param_1[3])) GEN_EDX_FWD);
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00df7c10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7c10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00df7c50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7c50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00df7cc0 */
GEN_LIB GEN_FRAME uint F_00df7cc0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf7cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00df7ce0 */
GEN_LIB GEN_FRAME uint F_00df7ce0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdf7ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  code * pcVar7;
  int * piVar8;
  char * pcVar9;
  
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x2c))))(param_2 GEN_EDX_ARG);
  *param_4 = *param_3;
  param_4[1] = param_1;
  if (((*(ushort *)(param_3 + 4) & 0x400) == 0x400) && ((char)param_2[0xb] == '\0')) {
    uVar4 = *((uint *)GEN_TOP((uVar4 + 0x10)));
    param_4[2] = uVar4;
    return uVar4;
  }
  uVar4 = F_00da5fd0(param_3 GEN_EDX_ARG);
  if (uVar4 != 0) {
    uVar5 = F_00da6010(param_3 GEN_EDX_ARG,REFG(undefined * PTR32, 0x1354738));
    if (uVar5 == 0) {
      pcVar9 = ((char *)REFP(0x114cd38));
      uVar5 = F_00d92610(uVar4 GEN_EDX_ARG);
      uVar5 = F_00da0d20(uVar5,pcVar9);
      if (uVar5 != 0) goto LAB_00df7d9d;
      piVar8 = ((int *)GEN_TOP(param_2[2]));
      pcVar7 = *((gen_code32 *)GEN_TOP((*piVar8 + 0x10)));
      pcVar9 = ((char *)REFP(0x114cd2c));
    }
    else {
      F_0105a6d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar5,((char *)REFP(0x1139630)));
      piVar8 = ((int *)GEN_TOP(param_2[2]));
      iVar3 = *piVar8;
      puVar6 = ((undefined4 *)GEN_TOP(F_0105a770(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0)));
      pcVar9 = ((char *)GEN_TOP(*puVar6));
      pcVar7 = *((gen_code32 *)GEN_TOP((iVar3 + 0x10)));
    }
    uVar4 = (*pcVar7)(piVar8,pcVar9);
  }
LAB_00df7d9d: ;
  bVar1 = *((byte *)GEN_TOP(((int)param_3 + 0xd)));
  bVar2 = *(byte *)(param_3 + 3);
  iVar3 = *param_2;
  uVar5 = F_00da5ff0(param_3 GEN_EDX_ARG);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x60))))(param_2,(uint)bVar2,(uint)bVar1,uVar4,uVar5);
  param_4[2] = uVar4;
  return uVar4;
}

/* ref: FUN_00df7de0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf7de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00df7ce0(this,*((undefined4 *)GEN_TOP(((int)this + 0x10))),param_1,param_2);
  return uVar1;
}

/* ref: hkDataClassNative::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf7e00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00d92860(*(undefined4 *)(this + 0xc) GEN_EDX_FWD,param_1);
  F_00df7ce0(this,*(undefined4 *)(this + 0x10),uVar1,param_2);
  uVar1 = F_00d92bc0(*(undefined4 *)(this + 0xc) GEN_EDX_ARG,param_1);
  *((uint *)GEN_TOP((param_2 + 0xc))) = uVar1;
  return uVar1;
}

/* ref: hkDataClassNative::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf7e40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00d92800(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  F_00df7ce0(this,*(undefined4 *)(this + 0x10),uVar1,param_2);
  uVar1 = F_00d92ae0(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_ARG,param_1);
  *((uint *)GEN_TOP((param_2 + 0xc))) = uVar1;
  return uVar1;
}

/* ref: hkDataClassNative::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint in_ecx;
  int * piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  in_ecx = *(uint *)(this + 0xc);
  iVar5 = param_1[1] * 0x10 + *param_1;
  piVar3 = param_1;
  if (in_ecx != 0) {
    do {
      uVar1 = F_00d92850(in_ecx GEN_EDX_FWD);
      iVar5 = iVar5 + uVar1 * -0x10;
      iVar4 = 0;
      iVar6 = iVar5;
      if (0 < (int)uVar1) {
        do {
          uVar2 = F_00d92860(in_ecx GEN_EDX_ARG,iVar4);
          F_00df7ce0(this,*(undefined4 *)(this + 0x10),uVar2,iVar6);
          uVar2 = F_00d92bc0(in_ecx GEN_EDX_ARG,iVar4);
          *((uint *)GEN_TOP((iVar6 + 0xc))) = uVar2;
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + 0x10;
        } while (iVar4 < (int)uVar1);
      }
      in_ecx = F_00d92620(in_ecx GEN_EDX_ARG);
    } while (in_ecx != 0);
    piVar3 = ((int *)GEN_TOP(0x0));
  }
  return (uint)piVar3;
}

/* ref: hkDataArrayNative::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df7f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf7f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00dbbf10(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(undefined4 *)(this + 0x30),
               *(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x24));
  return;
}

/* ref: hkDataArrayNative::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  if (param_1 != uVar1) {
    uVar1 = F_00dbbf50(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(undefined4 *)(this + 0x30),
                         *(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x24),param_1);
    *(uint *)(this + 0x10) = uVar1;
  }
  return uVar1;
}

/* ref: hkDataArrayNative::vf23 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = F_00dbb5f0(*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x24),
                       *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),
                       *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 8))),
                       *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10));
  (*(ulonglong *)(gen_frame + 0x0)) = uVar2;
  if (((int)uVar2 != 0) && ((int)(uVar2 >> 0x20) != 0)) {
    uVar1 = F_00df6190(&(*(ulonglong *)(gen_frame + 0x0)),*(undefined4 *)(this + 0xc),0);
    return uVar1;
  }
  return 0;
}

/* ref: hkDataArrayNative::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int * piVar7;
  uint uVar8;
  LPVOID pvVar9;
  undefined4 * puVar10;
  uint uVar11;
  
  uVar8 = F_00d928d0(*(undefined * PTR32 *)(this + 0x24) GEN_EDX_FWD,param_1);
  uVar3 = *((ushort *)GEN_TOP((uVar8 + 0x12)));
  bVar1 = *((byte *)GEN_TOP((uVar8 + 0xc)));
  iVar4 = *(int *)(this + 0x10);
  pvVar9 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar10 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar9 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar9 + 0x2c))) GEN_EDX_ARG,0x34)));
  *(undefined2 *)(puVar10 + 1) = 0x34;
  bVar2 = *((byte *)GEN_TOP((uVar8 + 0xd)));
  uVar11 = F_00da5ff0(uVar8 GEN_EDX_ARG);
  uVar8 = F_00da5fd0(uVar8 GEN_EDX_ARG);
  uVar5 = *(undefined4 *)(this + 0x18);
  uVar6 = *(undefined4 *)(this + 0x14);
  piVar7 = *(int * PTR32 *)(this + 0xc);
  *((undefined2 *)GEN_TOP(((int)puVar10 + 6))) = 0;
  puVar10[2] = 0;
  puVar10[5] = uVar6;
  puVar10[6] = uVar5;
  puVar10[4] = (uint)uVar3 + iVar4;
  puVar10[7] = (uint)bVar1;
  puVar10[8] = (uint)bVar2;
  *puVar10 = (*(undefined * PTR32 (*)[39])REFP(0x114cc14));
  puVar10[3] = piVar7;
  puVar10[9] = uVar8;
  puVar10[0xb] = uVar11;
  puVar10[0xc] = 0;
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x60))))(piVar7 GEN_EDX_ARG,(uint)bVar1,(uint)bVar2,uVar8,uVar11);
  puVar10[10] = uVar8;
  return (uint)puVar10;
}

/* ref: hkDataArrayNative::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df80b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf80b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbada0(*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x2c),param_2,
                       *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10),0xffffffff);
  return uVar1;
}

/* ref: hkDataArrayNative::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df80e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf80e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbaaf0(*(undefined4 *)(this + 0x1c),
                       *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10),param_2);
  return uVar1;
}

/* ref: hkDataArrayNative::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8110(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xdf8110u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dba870(*((undefined4 *)GEN_TOP((param_1 + 0x1c))),
                       *((int *)GEN_TOP((param_1 + 0x18))) * param_2 + *((int *)GEN_TOP((param_1 + 0x10))),
                       (uint)gen_fl2bits(param_3));
  return uVar1;
}

/* ref: hkDataArrayNative::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf8140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dba8a0(*(undefined4 *)(this + 0x1c),
                       *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10),param_2);
  return uVar1;
}

/* ref: hkDataArrayNative::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf8170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dba9c0(*(undefined4 *)(this + 0x1c),
                       *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10),param_2,
                       param_2 >> 0x1f);
  return uVar1;
}

/* ref: hkDataArrayNative::vf22 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df81a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdf81a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00dba9c0(*(undefined4 *)(this + 0x1c),
                       *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10),param_2,param_3);
  return uVar1;
}

/* ref: hkDataObjectNative::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df81d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf81d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  uint * puVar2;
  uint uVar3;
  undefined * this_00;
  ushort * puVar4;
  LPVOID pvVar5;
  undefined4 * puVar6;
  uint uVar7;
  uint uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  (*(uint * PTR32 *)(gen_frame + 0x8)) = ((uint *)GEN_TOP(0x0));
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((param_1 + 0xc))))) {
  case 1: ;
  case 2: ;
  case 3: ;
  case 4: ;
  case 5: ;
  case 6: ;
  case 7: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
  case 0x11: ;
  case 0x12: ;
  case 0x14: ;
  case 0x19: ;
  case 0x1e: ;
  case 0x20: ;
    uVar8 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x14)) = uVar8;
    uVar8 = F_0105a8f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar8 = F_00da5ff0(uVar8 GEN_EDX_ARG);
    uVar7 = (uint)*((byte *)GEN_TOP((param_1 + 0xc)));
    (*(uint *)(gen_frame + 0x10)) = uVar8;
    uVar8 = F_00da5fd0(param_1 GEN_EDX_ARG);
    if (uVar7 != 0x19) {
      uVar3 = F_00da5f30(uVar7);
      param_1 = (uint)*((short *)GEN_TOP((uVar3 + 8)));
      goto LAB_00df8339;
    }
    goto LAB_00df82cb;
  default: ;
    (*(uint *)(gen_frame + 0x14)) = 0;
    (*(uint *)(gen_frame + 0x10)) = 0;
    uVar8 = 0;
    break;
  case 0x16: ;
  case 0x1a: ;
    puVar2 = ((uint *)GEN_TOP(F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG)));
    uVar8 = *puVar2;
    uVar7 = puVar2[1];
    (*(uint * PTR32 *)(gen_frame + 0x8)) = puVar2;
    goto LAB_00df825f;
  case 0x1b: ;
    uVar8 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    (*(uint * PTR32 *)(gen_frame + 0x8)) = ((uint *)GEN_TOP((uVar8 + 4)));
    (*(uint *)(gen_frame + 0x14)) = *((uint *)GEN_TOP((uVar8 + 4)));
    (*(uint *)(gen_frame + 0x10)) = *((uint *)GEN_TOP((uVar8 + 8)));
    puVar2 = ((uint *)GEN_TOP(F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG)));
    uVar8 = *puVar2;
    if (uVar8 != 0) {
      param_1 = F_00d929c0(uVar8 GEN_EDX_ARG);
      uVar7 = 0x19;
      goto LAB_00df8339;
    }
    break;
  case 0x22: ;
    puVar4 = ((ushort *)GEN_TOP(F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG)));
    uVar7 = (uint)*puVar4;
    uVar8 = (uint)puVar4[1] + (int)puVar4;
LAB_00df825f: ;
    (*(uint *)(gen_frame + 0x14)) = uVar8;
    (*(uint *)(gen_frame + 0x10)) = uVar7;
    uVar8 = F_00da5fd0(param_1 GEN_EDX_ARG);
    uVar7 = (uint)*((byte *)GEN_TOP((param_1 + 0xd)));
    uVar3 = F_00da5f30(uVar7);
    param_1 = (uint)*((short *)GEN_TOP((uVar3 + 8)));
    if (uVar7 == 0) {
      pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x2c))) + 4))))
                                  (*((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x2c))) GEN_EDX_ARG,0x34)));
      *((undefined2 *)GEN_TOP(((int)this_00 + 4))) = 0x34;
      uVar8 = F_00df7270(this_00 GEN_EDX_ARG,*(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x14),0,0,0,0,0,0,0,0);
      return uVar8;
    }
    if (param_1 == 0xffffffff) {
LAB_00df82cb: ;
      param_1 = F_00d929c0(uVar8 GEN_EDX_ARG);
    }
    goto LAB_00df8339;
  }
  uVar7 = 0;
  param_1 = 0;
LAB_00df8339: ;
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x2c))) GEN_EDX_ARG,0x34)));
  *(undefined2 *)(puVar6 + 1) = 0x34;
  piVar1 = *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x14);
  puVar6[4] = (*(uint *)(gen_frame + 0x14));
  puVar6[5] = (*(uint *)(gen_frame + 0x10));
  puVar6[6] = param_1;
  *((undefined2 *)GEN_TOP(((int)puVar6 + 6))) = 0;
  puVar6[2] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  *puVar6 = (*(undefined * PTR32 (*)[39])REFP(0x114cc14));
  puVar6[3] = piVar1;
  puVar6[7] = uVar7;
  puVar6[9] = uVar8;
  puVar6[0xc] = (*(uint * PTR32 *)(gen_frame + 0x8));
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x60))))(piVar1 GEN_EDX_ARG,uVar7,0,uVar8,0);
  puVar6[10] = uVar8;
  return (uint)puVar6;
}

/* ref: hkDataObjectNative::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df83f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf83f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  uint uVar2;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *((byte *)GEN_TOP((param_1 + 0xc)));
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_00dbb320((uint)bVar1,uVar2);
  return uVar2;
}

/* ref: hkDataObjectNative::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf8430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *((byte *)GEN_TOP((param_1 + 0xd)));
  bVar2 = *((byte *)GEN_TOP((param_1 + 0xc)));
  uVar3 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_00dba980((uint)bVar2,(uint)bVar1,uVar3);
  return uVar3;
}

/* ref: hkDataObjectNative::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf8470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  uVar4 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x14) + 0xc)));
  uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x14) + 8)));
  (*(uint *)(gen_frame + 0x10)) = (uint)*((byte *)GEN_TOP((param_1 + 0xc)));
  uVar1 = F_0105a740(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_00da5fd0(param_1 GEN_EDX_ARG);
  uVar3 = F_00dbb5f0((*(uint *)(gen_frame + 0x10)),uVar2,uVar4,uVar5,uVar1);
  (*(ulonglong *)(gen_frame + 0x8)) = uVar3;
  if (((int)uVar3 != 0) && ((int)(uVar3 >> 0x20) != 0)) {
    uVar1 = F_00df6190(&(*(ulonglong *)(gen_frame + 0x8)),*(undefined4 *)(this + 0x14),0);
    return uVar1;
  }
  return 0;
}

/* ref: hkDataObjectNative::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf8500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *((byte *)GEN_TOP((param_1 + 0xc)));
  iVar4 = *(int *)(this + 0x14) + 0xb8;
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_00da5ff0(param_1 GEN_EDX_ARG);
  uVar2 = F_00dbc000((uint)bVar1,uVar3,uVar2,iVar4);
  return uVar2;
}

/* ref: hkDataObjectNative::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf8550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  uint uVar2;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *((byte *)GEN_TOP((param_1 + 0xc)));
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_00dba840((uint)bVar1,uVar2);
  return uVar2;
}

/* ref: hkDataObjectNative::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf8590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  uint uVar2;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *((byte *)GEN_TOP((param_1 + 0xc)));
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_00dbaaf0((uint)bVar1,uVar2,param_2);
  return uVar2;
}

/* ref: hkDataObjectNative::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df85d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xdf85d0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  uint uVar2;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_1 + 0xc))),param_2);
  bVar1 = *((byte *)GEN_TOP((param_2 + 0xc)));
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_00dba870((uint)bVar1,uVar2,(uint)gen_fl2bits(param_3));
  return uVar2;
}

/* ref: hkDataObjectNative::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8610(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf8610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_1 + 0xc))),param_2);
  bVar1 = *((byte *)GEN_TOP((param_2 + 0xc)));
  uVar3 = (int)(short)param_3 << 0x10;
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_00dba870((uint)bVar1,uVar2,uVar3);
  return uVar2;
}

/* ref: hkDataObjectNative::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdf8660u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *((byte *)GEN_TOP((param_1 + 0xc)));
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_00da5ff0(param_1 GEN_EDX_ARG);
  uVar2 = F_00dbada0((uint)bVar1,uVar3,param_2,uVar2,param_3);
  return uVar2;
}

/* ref: hkDataObjectNative::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df86b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdf86b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *((byte *)GEN_TOP((param_1 + 0xd)));
  bVar2 = *((byte *)GEN_TOP((param_1 + 0xc)));
  uVar3 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_00dbaaa0((uint)bVar2,(uint)bVar1,uVar3,param_2,param_3);
  return uVar3;
}

/* ref: hkDataObjectNative::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf8700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *((byte *)GEN_TOP((param_1 + 0xd)));
  bVar2 = *((byte *)GEN_TOP((param_1 + 0xc)));
  iVar4 = param_2 >> 0x1f;
  uVar3 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_00dbaaa0((uint)bVar2,(uint)bVar1,uVar3,param_2,iVar4);
  return uVar3;
}

/* ref: hkDataObjectNative::vf25 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf8750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00df7ce0(0,*(undefined4 *)(this + 0x14),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df8770 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf8770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: hkDataWorldNative::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df87b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf87b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x30;
}

/* ref: FUN_00df87c0 */
GEN_LIB GEN_FRAME uint F_00df87c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf87c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkDataWorldNative::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df87f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf87f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00df66f0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00df8860 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf8860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00df8880 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf8880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00dfbc00(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x114cdcc));
  F_00dfb5e0(this GEN_EDX_ARG,REFG(undefined * PTR32, 0x135485c));
  F_00dfb620(this GEN_EDX_ARG,&REFG(undefined, 0x15da330),REFG(undefined * PTR32, 0x13548cc));
  F_00dfb620(this GEN_EDX_ARG,&REFG(undefined, 0x15da2a0),REFG(undefined * PTR32, 0x13548cc));
  F_00dfb620(this GEN_EDX_ARG,&REFG(undefined, 0x15da300),REFG(undefined * PTR32, 0x13548cc));
  F_00dfb620(this GEN_EDX_ARG,&REFG(undefined, 0x15da2d0),REFG(undefined * PTR32, 0x13548cc));
  return (uint)this;
}

/* ref: FUN_00df8900 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df8900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf8900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x114cdcc));
  uVar1 = F_00dfb710(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00df8910 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00df8910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf8910u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int * piVar1;
  int iVar2;
  undefined4 in_ecx;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  
  in_ecx = (*(uint *)&gen_args[1]);
  uVar4 = F_00d93010((*(uint *)&gen_args[1]) GEN_EDX_ARG,0);
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  uVar5 = (*(uint *)(gen_frame + 0x8));
  if (*((char *)GEN_TOP(((*(int *)&gen_args[0]) + 0x4c))) != '\0') {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 3)) = (undefined1)(uVar4 >> 0x18);
    (*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 2)) = (undefined1)(uVar4 >> 0x10);
    (*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 1)) = (undefined1)(uVar4 >> 8);
    uVar3 = (*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 1));
    (*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 0)) = CONCAT11((*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 2)),(*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 3)));
    (*(uint *)&gen_args[1]) = CONCAT13((char)uVar4,CONCAT12(uVar3,(undefined2)(*(uint *)&gen_args[1])));
    uVar4 = (*(uint *)&gen_args[1]);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1c)));
  (*(uint *)(gen_frame + 0x0)) = uVar4;
  (*(undefined1 *)(gen_frame + 0x4)) = 9;
  (*(uint *)(gen_frame + 0x8)) = uVar5;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),5);
  uVar5 = F_00d92610(in_ecx GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1c))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1c))) GEN_EDX_ARG);
  F_00da3a20(((undefined *)GEN_TOP(((*(int *)&gen_args[0]) + 0x30))) GEN_EDX_ARG,uVar5,uVar4 - (*(int *)&gen_args[2]));
  iVar2 = **((int * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1c)));
  uVar4 = F_00da0e60(uVar5);
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x10))))(*((undefined4 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1c))),uVar5,uVar4 + 1);
  return uVar5;
}

/* ref: FUN_00df89b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df89b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf89b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  
  iVar5 = param_1;
  iVar6 = *((int *)GEN_TOP(((int)this + 0x68)));
  piVar7 = ((int *)GEN_TOP((param_1 + 4)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 0xc))) & 0x3fffffff;
  if ((int)uVar2 < iVar6) {
    iVar4 = uVar2 * 2;
    if (iVar4 <= iVar6) {
      iVar4 = iVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar7,iVar4,0x30);
  }
  piVar1 = ((int *)GEN_TOP((param_1 + 8)));
  param_1 = iVar6 - *piVar1;
  iVar4 = *piVar1 * 0x30 + *piVar7;
  if (0 < param_1) {
    do {
      if (iVar4 != 0) {
        F_00da1030(iVar4,0,4);
      }
      iVar4 = iVar4 + 0x30;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  *((int *)GEN_TOP((iVar5 + 8))) = iVar6;
  uVar2 = F_00df9bf0(piVar7);
  pvVar3 = ((undefined *)GEN_TOP(F_00da1030(*piVar7,0xffffffff,uVar2)));
  iVar6 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x68)))) {
    iVar5 = 0;
    do {
      F_00da0e40(*piVar7 + iVar5,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 100))) + iVar6 * 4))),0x13);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x30;
      pvVar3 = this;
    } while (iVar6 < *((int *)GEN_TOP(((int)this + 0x68))));
  }
  return (uint)pvVar3;
}

/* ref: FUN_00df8a70 */
GEN_LIB GEN_FRAME uint F_00df8a70(GEN_P(undefined4 * in_eax, unsigned int gen_a0), GEN_P(int * in_edi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdf8a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * in_edi = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x78, 8, 4);
  undefined4 uVar1;
  code * pcVar2;
  uint uVar3;
  
  F_00da1030(&(*(undefined4 *)(gen_frame + 0x0)),0xffffffff,0x40);
  uVar1 = *in_eax;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x57e0e057;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x10c0c010;
  ((undefined1 *)(gen_frame + 0x28))[0] = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  (*(undefined4 *)(gen_frame + 0xc)) = 9;
  F_00da1010(((undefined1 *)(gen_frame + 0x10)),in_eax + 1,4);
  (*(undefined4 *)(gen_frame + 0x14)) = param_4;
  F_00da1030(((undefined1 *)(gen_frame + 0x3c)),0xffffffff,4);
  if (in_eax[3] == 0) {
    F_00dfb200(((undefined1 *)(gen_frame + 0x28)),0x10);
  }
  else {
    F_00da0e40(((undefined1 *)(gen_frame + 0x28)),in_eax[3],0x10);
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*in_edi + 0xc)));
  (*(undefined4 *)(gen_frame + 0x48)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x60)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*pcVar2)(in_edi,param_3,&(*(undefined4 *)(gen_frame + 0x0)),&REFG(undefined, 0x15e3704),&(*(undefined4 *)(gen_frame + 0x40)));
  uVar3 = F_00e1d4f0(&(*(undefined4 *)(gen_frame + 0x40)) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00df8b50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf8b50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  int * piVar1;
  code * pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar4 = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = this;
  F_00da68d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_1 + 0x1c))),*((undefined1 *)GEN_TOP((param_1 + 0x4c))));
  (*(int *)(gen_frame + 0x60)) = 0;
  if (0 < *((int *)GEN_TOP((param_1 + 8)))) {
    (*(int *)(gen_frame + 0x6c)) = 0;
    (*(int *)(gen_frame + 0x68)) = 0;
    do {
      iVar9 = *((int *)GEN_TOP((iVar4 + 4))) + (*(int *)(gen_frame + 0x68));
      uVar7 = 0;
      piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x40))) + 0xc + (*(int *)(gen_frame + 0x6c)))));
      (*(int *)(gen_frame + 0x7c)) = 0;
      (*(uint *)(gen_frame + 0x80)) = 0;
      (*(int *)(gen_frame + 0x84)) = ((int)0x80000000);
      uVar5 = piVar1[1] * 3;
      (*(int *)(gen_frame + 0x5c)) = iVar9;
      if (0 < (int)uVar5) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x7c)),uVar5 & ((int)uVar5 < 0) - 1,4);
        uVar7 = (*(uint *)(gen_frame + 0x80));
      }
      iVar8 = uVar5 - uVar7;
      (*(int *)(gen_frame + 0x88)) = iVar8;
      puVar6 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x7c)) + uVar7 * 4)));
      if (0 < iVar8) {
        for (; iVar9 = (*(int *)(gen_frame + 0x5c)), iVar8 != 0; iVar8 = iVar8 - 1) {
          *puVar6 = 0xffffffff;
          puVar6 = puVar6 + 1;
        }
      }
      (*(uint *)(gen_frame + 0x80)) = uVar5;
      (*(int *)(gen_frame + 0x88)) = 0;
      if (0 < piVar1[1]) {
        (*(undefined * PTR32 *)(gen_frame + 0x54)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x14)));
        (*(int *)(gen_frame + 0x58)) = 0;
        param_1 = 0;
        do {
          uVar5 = F_00dbd970((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*piVar1 + 4 + param_1))),0xfffffffd);
          if ((-1 < (int)uVar5) && (-1 < *((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x10))) + uVar5 * 8))))) {
            *((int *)GEN_TOP(((*(int *)(gen_frame + 0x58)) + (*(int *)(gen_frame + 0x7c))))) = *((int *)GEN_TOP((*piVar1 + param_1))) - *((int *)GEN_TOP((iVar9 + 0x14)));
            *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x58)) + 4 + (*(int *)(gen_frame + 0x7c))))) =
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x10))) + uVar5 * 8)));
            *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x58)) + 8 + (*(int *)(gen_frame + 0x7c))))) =
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x10))) + 4 + uVar5 * 8)));
            (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 0xc;
            iVar9 = (*(int *)(gen_frame + 0x5c));
          }
          param_1 = param_1 + 0x10;
          iVar8 = (*(int *)(gen_frame + 0x88)) + 1;
          (*(int *)(gen_frame + 0x88)) = iVar8;
        } while (iVar8 < piVar1[1]);
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar4 + 0x1c))) + 0x1c))))
                (*((int * PTR32 *)GEN_TOP((iVar4 + 0x1c))) GEN_EDX_ARG,*((int *)GEN_TOP((iVar9 + 0x1c))) + *((int *)GEN_TOP((iVar9 + 0x14))),0);
      F_00da6db0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x7c)),(*(uint *)(gen_frame + 0x80)));
      (*(uint *)(gen_frame + 0x80)) = 0;
      if (-1 < (*(int *)(gen_frame + 0x84))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x7c)),(*(int *)(gen_frame + 0x84)) * 4);
      }
      iVar9 = *((int *)GEN_TOP((iVar4 + 4))) + (*(int *)(gen_frame + 0x68));
      piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x40))) + 0x18 + (*(int *)(gen_frame + 0x6c)))));
      (*(int *)(gen_frame + 0x7c)) = 0;
      (*(int *)(gen_frame + 0x70)) = 0;
      (*(uint *)(gen_frame + 0x74)) = 0;
      (*(int *)(gen_frame + 0x78)) = ((int)0x80000000);
      uVar5 = piVar1[1] * 3;
      (*(int *)(gen_frame + 0x84)) = 0x80000000;
      (*(int *)(gen_frame + 0x88)) = iVar9;
      if (0 < (int)uVar5) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x70)),((int)uVar5 < 0) - 1 & uVar5,4);
      }
      (*(uint *)(gen_frame + 0x74)) = uVar5;
      iVar8 = 0;
      if (0 < piVar1[1]) {
        iVar10 = 0;
        do {
          *((int *)GEN_TOP(((*(int *)(gen_frame + 0x70)) + iVar10))) = *((int *)GEN_TOP((*piVar1 + iVar8 * 8))) - *((int *)GEN_TOP(((*(int *)(gen_frame + 0x88)) + 0x14)));
          *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x70)) + 4 + iVar10))) = 0;
          uVar5 = F_00da4190(((undefined *)GEN_TOP((iVar4 + 0x30))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*piVar1 + 4 + iVar8 * 8))),
                               0xffffffff);
          *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x70)) + 8 + iVar10))) = uVar5;
          iVar8 = iVar8 + 1;
          iVar10 = iVar10 + 0xc;
          iVar9 = (*(int *)(gen_frame + 0x88));
        } while (iVar8 < piVar1[1]);
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar4 + 0x1c))) + 0x1c))))
                (*((int * PTR32 *)GEN_TOP((iVar4 + 0x1c))) GEN_EDX_ARG,*((int *)GEN_TOP((iVar9 + 0x20))) + *((int *)GEN_TOP((iVar9 + 0x14))),0);
      F_00da6db0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x70)),(*(uint *)(gen_frame + 0x74)));
      (*(uint *)(gen_frame + 0x74)) = 0;
      if (-1 < (*(int *)(gen_frame + 0x78))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x70)),(*(int *)(gen_frame + 0x78)) * 4);
      }
      (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) + 0x30;
      (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 0x34;
      iVar9 = (*(int *)(gen_frame + 0x60)) + 1;
      (*(int *)(gen_frame + 0x70)) = 0;
      (*(int *)(gen_frame + 0x78)) = 0x80000000;
      (*(int *)(gen_frame + 0x60)) = iVar9;
      this = (*(undefined * PTR32 *)(gen_frame + 0x64));
    } while (iVar9 < *((int *)GEN_TOP((iVar4 + 8))));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar4 + 0x1c))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((iVar4 + 0x1c))) GEN_EDX_ARG,param_2,0);
  param_1 = 0;
  if (0 < *((int *)GEN_TOP((iVar4 + 8)))) {
    iVar9 = 0;
    do {
      iVar8 = *((int *)GEN_TOP((iVar4 + 4)));
      (*(undefined4 *)(gen_frame + 0x18)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x24)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x30)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x3c)) = 0x80000000;
      pcVar2 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + 0xc)));
      uVar3 = *((undefined4 *)GEN_TOP((iVar4 + 0x1c)));
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*pcVar2)(iVar4 + 0x20,uVar3,iVar8 + iVar9,&REFG(undefined, 0x15e36d4),&(*(undefined4 *)(gen_frame + 0x10)));
      F_00e1d4f0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      param_1 = param_1 + 1;
      iVar9 = iVar9 + 0x30;
      this = (*(undefined * PTR32 *)(gen_frame + 0x64));
    } while (param_1 < *((int *)GEN_TOP((iVar4 + 8))));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar4 + 0x1c))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((iVar4 + 0x1c))) GEN_EDX_ARG,0x18,0);
  puVar6 = ((undefined4 *)GEN_TOP(F_00e1d7a0(iVar4 + 0x20 GEN_EDX_ARG)));
  F_00da68d0(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar4 + 0x1c))),
               (char)((uint)*puVar6 >> 8) != (*(undefined1 *)((char *)&REFG(undefined4, 0x135491c) + 1)));
  F_00da6c50(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x10))) + *((int *)GEN_TOP(((int)this + 0x8c))) * 8))));
  F_00da6c50(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x10))) + 4 + *((int *)GEN_TOP(((int)this + 0x8c))) * 8)))
              );
  uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + *((int *)GEN_TOP(((int)this + 0x90))) * 0x18)));
  F_00da6c50(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,0);
  uVar5 = F_00d92610(uVar3 GEN_EDX_ARG);
  uVar5 = F_00da4190(((undefined *)GEN_TOP((iVar4 + 0x30))) GEN_EDX_ARG,uVar5,0xffffffff);
  F_00da6c50(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,uVar5);
  F_00da6900(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG);
  uVar5 = F_00da6900(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_00df8f30 */
GEN_LIB GEN_FRAME uint F_00df8f30(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int * in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xdf8f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int * in_edi = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_edi + 0x20))))(in_edi GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x2c)) = uVar1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000020;
  if (0x20 < in_eax) {
    iVar2 = 0x40;
    if (0x3f < in_eax) {
      iVar2 = in_eax;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar2,1);
  }
  if (0 < in_eax - (*(int *)(gen_frame + 0x4))) {
    F_00c48350((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x4)),-1,in_eax - (*(int *)(gen_frame + 0x4)));
  }
  uVar3 = in_eax - 1U & (*(uint *)(gen_frame + 0x2c));
  (*(int *)(gen_frame + 0x4)) = in_eax;
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_edi + 0x10))))(in_edi GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),in_eax - uVar3);
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
  }
  return uVar1;
}

/* ref: FUN_00df8ff0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df8ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdf8ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x7c, 4, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  int * piVar7;
  undefined * pvVar8;
  int iVar9;
  int iVar10;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  iVar10 = (*(int * PTR32 *)&gen_args[0])[1];
  (*(undefined * PTR32 *)(gen_frame + 0x74)) = this;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[7])) + 0x20))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[7])) GEN_EDX_FWD);
  *((uint *)GEN_TOP((iVar10 + 0x14))) = uVar4;
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[0]) & 0xffffff00)));
  F_00da3de0(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]));
  ((undefined * PTR32 *)(gen_frame + 0x44))[0] = &REFG(undefined, 0x15da330);
  ((undefined * PTR32 *)(gen_frame + 0x44))[1] = &REFG(undefined, 0x15da2a0);
  ((undefined * PTR32 *)(gen_frame + 0x44))[2] = &REFG(undefined, 0x15da300);
  ((undefined * PTR32 *)(gen_frame + 0x44))[3] = &REFG(undefined, 0x15da2d0);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(0x0));
  do {
    uVar4 = F_00d92610(((undefined * PTR32 *)(gen_frame + 0x44))[(int)((int)(*(int * PTR32 *)&gen_args[0]))] GEN_EDX_ARG);
    F_00da3a20(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,uVar4,1);
    F_00df8910(piVar3,((undefined * PTR32 *)(gen_frame + 0x44))[(int)((int)(*(int * PTR32 *)&gen_args[0]))],*((undefined4 *)GEN_TOP((iVar10 + 0x14))));
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 1)));
  } while ((int)(*(int * PTR32 *)&gen_args[0]) < 4);
  (*(int *)(gen_frame + 0x64)) = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0xc)))) {
    (*(uint *)(gen_frame + 0x70)) = 0;
    do {
      uVar4 = F_00d92610(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + (*(uint *)(gen_frame + 0x70)) + 4))) GEN_EDX_ARG);
      uVar4 = F_00da3ae0(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,uVar4);
      F_00da3e40(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[0]) + 3,uVar4);
      if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3)))) == '\0') {
        uVar4 = F_00d92610(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + (*(uint *)(gen_frame + 0x70)) + 4))) GEN_EDX_ARG);
        F_00da3a20(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,uVar4,1);
        F_00df8910(piVar3,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4 + (*(uint *)(gen_frame + 0x70))))),
                     *((undefined4 *)GEN_TOP((iVar10 + 0x14))));
      }
      (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) + 0x18;
      iVar5 = (*(int *)(gen_frame + 0x64)) + 1;
      (*(int *)(gen_frame + 0x64)) = iVar5;
    } while (iVar5 < *((int *)GEN_TOP(((int)this + 0xc))));
  }
  F_00df8f30(0x10,piVar3[7]);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x20))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG);
  iVar5 = uVar4 - *((int *)GEN_TOP((iVar10 + 0x14)));
  *((int *)GEN_TOP((iVar10 + 0x18))) = iVar5;
  *((int *)GEN_TOP((iVar10 + 0x1c))) = iVar5;
  *((int *)GEN_TOP((iVar10 + 0x20))) = iVar5;
  *((int *)GEN_TOP((iVar10 + 0x24))) = iVar5;
  *((int *)GEN_TOP((iVar10 + 0x28))) = iVar5;
  *((int *)GEN_TOP((iVar10 + 0x2c))) = iVar5;
  F_00da3e20(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
  iVar10 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 0xc)));
  if ((int)(piVar3[6] & 0x3fffffffU) < iVar10) {
    iVar5 = (piVar3[6] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar10) {
      iVar5 = iVar10;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar3 + 4,iVar5,8);
  }
  iVar5 = 0;
  if (iVar10 != piVar3[5] && -1 < iVar10 - piVar3[5]) {
    do {
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar10 - piVar3[5]);
  }
  piVar3[5] = iVar10;
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(piVar3[2]));
  if ((int)(piVar3[0x12] & 0x3fffffffU) < (int)(*(int * PTR32 *)&gen_args[0])) {
    iVar10 = (piVar3[0x12] & 0x3fffffffU) * 2;
    iVar5 = (int)(*(int * PTR32 *)&gen_args[0]);
    if ((int)(*(int * PTR32 *)&gen_args[0]) < iVar10) {
      iVar5 = iVar10;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar3 + 0x10,iVar5,0x34);
  }
  iVar10 = (piVar3[0x11] - (int)(*(int * PTR32 *)&gen_args[0])) - 1;
  if (-1 < iVar10) {
    pvVar8 = ((undefined *)GEN_TOP((iVar10 * 0x34 + (int)(*(int * PTR32 *)&gen_args[0]) * 0x34 + piVar3[0x10])));
    do {
      F_00e1d4f0(pvVar8 GEN_EDX_ARG);
      pvVar8 = ((undefined *)GEN_TOP(((int)pvVar8 - 0x34)));
      iVar10 = iVar10 - 1;
    } while (-1 < iVar10);
  }
  iVar10 = (int)(*(int * PTR32 *)&gen_args[0]) - piVar3[0x11];
  if (0 < iVar10) {
    puVar6 = ((undefined4 *)GEN_TOP((piVar3[0x11] * 0x34 + piVar3[0x10] + 0x14)));
    do {
      if (puVar6 != ((undefined4 *)GEN_TOP(0x14))) {
        puVar6[-5] = 0;
        puVar6[-4] = 0;
        puVar6[-3] = 0x80000000;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x80000000;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0x80000000;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0x80000000;
        puVar6[7] = 0;
      }
      puVar6 = puVar6 + 0xd;
      iVar10 = iVar10 - 1;
    } while (iVar10 != 0);
  }
  piVar3[0x11] = (int)(*(int * PTR32 *)&gen_args[0]);
  uVar4 = F_00dfb4e0((*(undefined * PTR32 *)(gen_frame + 0x74)) GEN_EDX_ARG,REFG(undefined * PTR32, 0x13548cc));
  (*(uint *)(gen_frame + 0x58)) = uVar4;
  (*(uint *)(gen_frame + 0x70)) = 1;
  if (1 < piVar3[2]) {
    (*(int *)(gen_frame + 0x6c)) = 0x34;
    (*(int *)(gen_frame + 0x64)) = 0x30;
    do {
      iVar9 = piVar3[1] + (*(int *)(gen_frame + 0x64));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x20))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG);
      *((uint *)GEN_TOP((iVar9 + 0x14))) = uVar4;
      iVar5 = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x14)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x20)) = 0x80000000;
      (*(uint *)(gen_frame + 0x2c)) = 0x80000000;
      iVar10 = *piVar3;
      (*(int *)(gen_frame + 0x0)) = 0;
      (*(int *)(gen_frame + 0x4)) = 0;
      (*(int *)(gen_frame + 0xc)) = 0;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(int *)(gen_frame + 0x1c)) = 0;
      (*(int *)(gen_frame + 0x24)) = 0;
      (*(uint *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      if ((*((char *)GEN_TOP((iVar10 + 8))) == '\0') && ((*(uint *)(gen_frame + 0x70)) == (*(uint *)(gen_frame + 0x58)))) {
        if (0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 0xc)))) {
          iVar10 = 0;
          do {
            if (*((uint *)GEN_TOP((iVar10 + 0x10 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 8)))))) == (*(uint *)(gen_frame + 0x58))) {
              *((undefined4 *)GEN_TOP((piVar3[4] + iVar5 * 8))) = 0xffffffff;
              *((undefined4 *)GEN_TOP((piVar3[4] + 4 + iVar5 * 8))) = 0xffffffff;
            }
            iVar5 = iVar5 + 1;
            iVar10 = iVar10 + 0x18;
          } while (iVar5 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 0xc))));
        }
      }
      else {
        (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(0x0));
        if (0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 0xc)))) {
          (*(int *)(gen_frame + 0x68)) = 0;
          do {
            piVar7 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 8))) + (*(int *)(gen_frame + 0x68)))));
            (*(int * PTR32 *)(gen_frame + 0x5c)) = piVar7;
            if (piVar7[4] == (*(uint *)(gen_frame + 0x70))) {
              (*(uint *)(gen_frame + 0x60)) = piVar7[1];
              (*(undefined * PTR32 *)(gen_frame + 0x54)) = ((undefined *)GEN_TOP(*piVar7));
              iVar5 = (int)(*(int * PTR32 *)&gen_args[0]) * 8;
              *((uint *)GEN_TOP((iVar5 + piVar3[4]))) = (*(uint *)(gen_frame + 0x70));
              iVar10 = piVar3[4];
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x20))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG);
              *((uint *)GEN_TOP((iVar10 + iVar5 + 4))) = uVar4 - *((int *)GEN_TOP((iVar9 + 0x14)));
              if ((*(uint *)(gen_frame + 0x60)) == 0) {
                ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x10))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG,*(*(int * PTR32 *)(gen_frame + 0x5c)),(*(int * PTR32 *)(gen_frame + 0x5c))[5]);
              }
              else {
                ((code *)*((gen_code32 *)GEN_TOP((piVar3[8] + 0xc))))(piVar3 + 8,piVar3[7],(*(undefined * PTR32 *)(gen_frame + 0x54)),(*(uint *)(gen_frame + 0x60)),&(*(int *)(gen_frame + 0x0)));
              }
            }
            (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) + 0x18;
            (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 1)));
          } while ((int)(*(int * PTR32 *)&gen_args[0]) < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 0xc))));
        }
      }
      iVar10 = 0;
      if (0 < (*(int *)(gen_frame + 0x4))) {
        do {
          piVar7 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + iVar10 * 8)));
          *piVar7 = *piVar7 - *((int *)GEN_TOP((iVar9 + 0x14)));
          piVar7 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 4 + iVar10 * 8)));
          *piVar7 = *piVar7 - *((int *)GEN_TOP((iVar9 + 0x14)));
          iVar10 = iVar10 + 1;
        } while (iVar10 < (*(int *)(gen_frame + 0x4)));
      }
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((*(uint *)(gen_frame + 0x10)) - 1)));
      if (-1 < (int)(*(int * PTR32 *)&gen_args[0])) {
        (*(undefined * PTR32 *)(gen_frame + 0x54)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x20)));
        iVar10 = (int)(*(int * PTR32 *)&gen_args[0]) * 0x10;
        do {
          uVar4 = F_00dbd970((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 4 + iVar10))),0);
          (*(uint *)(gen_frame + 0x60)) = uVar4;
          if (uVar4 != 0) {
            (*(int * PTR32 *)(gen_frame + 0x5c)) = ((int *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + iVar10)));
            if ((*(uint *)(gen_frame + 0x28)) == ((*(uint *)(gen_frame + 0x2c)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x24)),8);
            }
            piVar7 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + (*(uint *)(gen_frame + 0x28)) * 8)));
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 1;
            *piVar7 = *(*(int * PTR32 *)(gen_frame + 0x5c)) - *((int *)GEN_TOP((iVar9 + 0x14)));
            piVar7[1] = (*(uint *)(gen_frame + 0x60));
            uVar4 = (*(uint *)(gen_frame + 0x10)) - 1;
            (*(uint *)(gen_frame + 0x10)) = uVar4;
            if (((int *)GEN_TOP(uVar4)) != (*(int * PTR32 *)&gen_args[0])) {
              puVar6 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + iVar10)));
              iVar5 = (uVar4 * 0x10 + (*(int *)(gen_frame + 0xc))) - (int)puVar6;
              (*(int * PTR32 *)(gen_frame + 0x5c)) = (int *)&REFG(undefined, 0x4);
              do {
                *puVar6 = *((undefined4 *)GEN_TOP((iVar5 + (int)puVar6)));
                puVar6 = puVar6 + 1;
                piVar7 = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x5c)) - 1)));
                (*(int * PTR32 *)(gen_frame + 0x5c)) = piVar7;
              } while (piVar7 != ((int *)GEN_TOP(0x0)));
            }
          }
          (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) - 1)));
          iVar10 = iVar10 - 0x10;
        } while (-1 < (int)(*(int * PTR32 *)&gen_args[0]));
      }
      F_00da68d0(((undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,piVar3[7],(char)piVar3[0x13]);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x20))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG);
      *((uint *)GEN_TOP((iVar9 + 0x18))) = uVar4 - *((int *)GEN_TOP((iVar9 + 0x14)));
      F_00da6970(((undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),4,(*(int *)(gen_frame + 0x4)) * 2);
      F_00df8f30(0x10,piVar3[7]);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x20))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG);
      *((uint *)GEN_TOP((iVar9 + 0x1c))) = uVar4 - *((int *)GEN_TOP((iVar9 + 0x14)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x1c))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x10)) * 0xc,1);
      F_00df99d0(((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x6c)) + 0xc + piVar3[0x10]))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0xc)));
      F_00df8f30(0x10,piVar3[7]);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x20))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG);
      *((uint *)GEN_TOP((iVar9 + 0x20))) = uVar4 - *((int *)GEN_TOP((iVar9 + 0x14)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x1c))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG,(*(int *)(gen_frame + 0x1c)) * 0xc,1);
      F_00df9a50(((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x6c)) + 0x18 + piVar3[0x10]))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
      F_00df8f30(0x10,piVar3[7]);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x20))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG);
      *((uint *)GEN_TOP((iVar9 + 0x24))) = uVar4 - *((int *)GEN_TOP((iVar9 + 0x14)));
      iVar10 = 0;
      if (-1 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x34)))) {
        piVar7 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x2c)));
        do {
          if (*piVar7 != -1) break;
          iVar10 = iVar10 + 1;
          piVar7 = piVar7 + 2;
        } while (iVar10 <= *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x34))));
      }
      (*(int *)(gen_frame + 0x68)) = iVar10;
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[0]) & 0xffffff)));
      pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x74));
      if (iVar10 <= *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x34)))) {
        do {
          uVar4 = F_00dbd970(((undefined *)GEN_TOP(((int)pvVar8 + 0x14))) GEN_EDX_ARG,
                               *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar8 + 0x2c))) + (*(int *)(gen_frame + 0x68)) * 8))),
                               0xffffffff);
          if ((-1 < (int)uVar4) &&
             (*((uint *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar8 + 8))) + 0x10 + uVar4 * 0x18))) == (*(uint *)(gen_frame + 0x70)))) {
            uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x2c))) + 4 + (*(int *)(gen_frame + 0x68)) * 8)));
            uVar2 = *((undefined4 *)GEN_TOP((piVar3[4] + 4 + uVar4 * 8)));
            (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(CONCAT13(1,GEN_PIECE(&(*(int * PTR32 *)&gen_args[0]), 0, 3))));
            F_00da6c50(((undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,uVar2);
            uVar4 = F_00da0e60(uVar1);
            F_00da6ae0(((undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,uVar1,uVar4 + 1);
            F_00df8f30(4,piVar3[7]);
            pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x74));
          }
          iVar10 = *((int *)GEN_TOP(((int)pvVar8 + 0x34)));
          iVar5 = (*(int *)(gen_frame + 0x68)) + 1;
          if (iVar5 <= iVar10) {
            piVar7 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar8 + 0x2c))) + iVar5 * 8)));
            do {
              if (*piVar7 != -1) break;
              iVar5 = iVar5 + 1;
              piVar7 = piVar7 + 2;
            } while (iVar5 <= iVar10);
          }
          (*(int *)(gen_frame + 0x68)) = iVar5;
        } while (iVar5 <= iVar10);
        if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3)))) != '\0') {
          F_00da6c50(((undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,0xffffffff);
          F_00df8f30(0x10,piVar3[7]);
        }
      }
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x20))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG);
      iVar10 = *((int *)GEN_TOP((iVar9 + 0x14)));
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(0x0));
      *((uint *)GEN_TOP((iVar9 + 0x28))) = uVar4 - iVar10;
      if (0 < (int)(*(uint *)(gen_frame + 0x28))) {
        do {
          iVar10 = (*(int *)(gen_frame + 0x24)) + (int)(*(int * PTR32 *)&gen_args[0]) * 8;
          F_00da6c50(((undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + (int)(*(int * PTR32 *)&gen_args[0]) * 8))));
          uVar4 = F_00da0e60(*((undefined4 *)GEN_TOP((iVar10 + 4))));
          F_00da6ae0(((undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar10 + 4))),uVar4 + 1);
          F_00df8f30(4,piVar3[7]);
          (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 1)));
        } while ((int)(*(int * PTR32 *)&gen_args[0]) < (int)(*(uint *)(gen_frame + 0x28)));
      }
      if ((*(uint *)(gen_frame + 0x28)) != 0) {
        F_00da6c50(((undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,0xffffffff);
        F_00df9ad0(((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x6c)) + 0x24 + piVar3[0x10]))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x24)));
        F_00df8f30(0x10,piVar3[7]);
      }
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x20))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG);
      *((uint *)GEN_TOP((iVar9 + 0x2c))) = uVar4 - *((int *)GEN_TOP((iVar9 + 0x14)));
      F_00da6900(((undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG);
      F_00e1d4f0(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG);
      (*(int *)(gen_frame + 0x64)) = (*(int *)(gen_frame + 0x64)) + 0x30;
      (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 0x34;
      uVar4 = (*(uint *)(gen_frame + 0x70)) + 1;
      (*(uint *)(gen_frame + 0x70)) = uVar4;
    } while ((int)uVar4 < piVar3[2]);
  }
  return 0;
}

/* ref: hkBinaryPackfileWriter::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf9700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x64, 12, 4);
  char cVar1;
  int * piVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar3 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x18))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(int)&(*(int * PTR32 *)&gen_args[0]) + 3)));
  uVar6 = (*(undefined4 *)&gen_args[1]);
  if (*pcVar3 == '\0') {
    return 1;
  }
  F_00dfafb0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
  (*(undefined2 *)(gen_frame + 0x56)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (*(undefined * PTR32 (*)[9])REFP(0x114cdfc));
  (*(int * PTR32 *)(gen_frame + 0x58)) = piVar2;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x20))))(piVar2 GEN_EDX_ARG);
  (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50));
  (*(uint *)(gen_frame + 0x5c)) = uVar4;
  F_00df89b0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_00df8a70(uVar6,((undefined1 *)(gen_frame + 0x20)),(*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x8)));
  uVar4 = (*(code *)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50))[8])(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)));
  uVar6 = 1;
  uVar5 = F_00df9bf0(((undefined1 *)(gen_frame + 0x4)));
  (*(code *)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50))[7])(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),uVar5,uVar6);
  F_00df8ff0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar5 = (*(code *)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50))[8])(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)));
  F_00df8b50(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar4);
  (*(code *)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50))[7])(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),uVar5,0);
  (*(code *)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50))[5])(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)));
  pcVar3 = ((char *)GEN_TOP((*(code *)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50))[3])(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(int)&(*(int * PTR32 *)&gen_args[0]) + 3)));
  cVar1 = *pcVar3;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  F_00dfb020(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)(cVar1 == '\0');
}

/* ref: FUN_00df9830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df9840 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf9840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd9c0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),&(*(undefined4 *)&gen_args[0]));
  if (uVar1 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[0]);
    return 0;
  }
  return 1;
}

/* ref: FUN_00df9870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df9880 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf9880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00df98a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df98a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf98a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df98b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df98b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf98b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00df98c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df98c0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf98c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0x18;
}

/* ref: FUN_00df98f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df98f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf98f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00df9940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9940(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00df99a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df99a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf99a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00df99b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df99b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf99b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00df99d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df99d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf99d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  *param_1 = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  param_1[1] = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00df9a30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9a30(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00df9a50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  *param_1 = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  param_1[1] = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00df9ab0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9ab0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00df9ad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  *param_1 = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  param_1[1] = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00df9b30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9b30(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x30 + *in_ecx;
}

/* ref: FUN_00df9ba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9ba0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00df9be0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9be0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x34 + *in_ecx;
}

/* ref: FUN_00df9bf0 */
GEN_LIB GEN_FRAME uint F_00df9bf0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf9bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *((int *)GEN_TOP((param_1 + 4))) * 0x30;
}

/* ref: FUN_00df9c30 */
GEN_LIB GEN_FRAME unsigned int F_00df9c30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00df9c70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9c70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00df9cc0 */
GEN_LIB GEN_FRAME unsigned int F_00df9cc0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 4;
  puVar1 = param_1;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00df9d50 */
GEN_LIB GEN_FRAME uint F_00df9d50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = param_2;
  iVar2 = param_1;
  uVar3 = param_2;
  if (0 < (int)param_2) {
    do {
      if (iVar2 != 0) {
        uVar1 = F_00da1030(iVar2,0,4);
      }
      iVar2 = iVar2 + 0x30;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar1;
}

/* ref: FUN_00df9da0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9da0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00df9dc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00df9de0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00df9e00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9e00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00df9e40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9e40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x30);
  return uVar1;
}

/* ref: FUN_00df9e80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00df9eb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x34);
  return uVar1;
}

/* ref: FUN_00df9ed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x114cdfc));
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = param_1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x20))))(param_1 GEN_EDX_FWD);
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  return (uint)this;
}

/* ref: hkSubStreamWriter::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0xc))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,param_1);
  return param_1;
}

/* ref: hkSubStreamWriter::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdf9f20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))
                    (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: hkSubStreamWriter::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df9f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdf9f30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))
                    (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: hkSubStreamWriter::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x18))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,param_1);
  return param_1;
}

/* ref: hkSubStreamWriter::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x1c))))
                      (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,*(int *)(this + 0xc) + param_1,0);
    return uVar1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x1c))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: hkSubStreamWriter::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df9fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf9fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x20))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD);
  return uVar1 - *(int *)(this + 0xc);
}

/* ref: FUN_00df9fd0 */
GEN_LIB GEN_FRAME unsigned int F_00df9fd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf9fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x34);
  }
  return;
}

/* ref: FUN_00dfa000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa000(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + param_2 * 8)));
}

/* ref: FUN_00dfa010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa010(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 4 + param_2 * 8)));
}

/* ref: FUN_00dfa020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa020(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: FUN_00dfa040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3ae0(this GEN_EDX_FWD,param_2);
  F_00da3e40(this GEN_EDX_ARG,param_1,uVar1);
  return param_1;
}

/* ref: FUN_00dfa160 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfa1b0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfa1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != param_1) {
    puVar1 = ((undefined4 *)GEN_TOP((param_1 * 0x10 + *(int *)this)));
    iVar2 = (*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0x10) - (int)puVar1;
    iVar3 = 4;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00dfa1f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa1f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x10);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: FUN_00dfa250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00dfa290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfa2d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfa310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfa350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfa390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfa3d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa3d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x30);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dfa410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfa450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,8);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dfa490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x34);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dfa4d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa4d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e1d4f0(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x34);
  }
  return (uint)param_1;
}

/* ref: FUN_00dfa510 */
GEN_LIB GEN_FRAME uint F_00dfa510(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfa510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkSubStreamWriter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa540(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00dfa580 */
GEN_LIB GEN_FRAME uint F_00dfa580(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfa580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkBinaryPackfileWriter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa5b0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa5b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00df8900(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00dfa610 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfa610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + iVar1 * 8)));
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: FUN_00dfa640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfa680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x10);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00dfa6c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa6c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00dfa6f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa6f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,0x30);
  }
  uVar2 = param_2 - *((int *)GEN_TOP(((int)this + 4)));
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) * 0x30 + *(int *)this;
  uVar1 = uVar2;
  if (0 < (int)uVar2) {
    do {
      if (iVar3 != 0) {
        uVar2 = F_00da1030(iVar3,0,4);
      }
      iVar3 = iVar3 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: FUN_00dfa770 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,8);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: FUN_00dfa7b0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfa7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfa7b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,4);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = *(int *)this;
  iVar4 = param_2 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + iVar3 * 4 + iVar5 * 4))) = *param_3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return 0;
}

/* ref: FUN_00dfa810 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfa850 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfa890 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfa8d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfa910 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfa950 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfa990 */
GEN_LIB GEN_FRAME unsigned int F_00dfa990(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = ((undefined *)GEN_TOP((iVar1 * 0x34 + param_1)));
    do {
      F_00e1d4f0(this GEN_EDX_ARG);
      this = ((undefined *)GEN_TOP(((int)this - 0x34)));
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_00dfa9c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x34 + uVar1)));
    do {
      uVar1 = F_00e1d4f0(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return uVar1;
}

/* ref: FUN_00dfa9f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa9f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfaa40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfaa40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfaa40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x30);
  }
  uVar2 = param_1 - *((int *)GEN_TOP(((int)this + 4)));
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) * 0x30 + *(int *)this;
  uVar1 = uVar2;
  if (0 < (int)uVar2) {
    do {
      if (iVar3 != 0) {
        uVar2 = F_00da1030(iVar3,0,4);
      }
      iVar3 = iVar3 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00dfaac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfaac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfaac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,8);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00dfab00 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfab00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfab00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = *(int *)this;
  iVar4 = param_1 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + iVar3 * 4 + iVar5 * 4))) = *param_2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return 0;
}

/* ref: FUN_00dfab60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfab60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfab60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfaba0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfaba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfaba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfabe0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfabe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfabe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfac20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfac20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfac20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfac60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfac60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfac60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfaca0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfaca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfaca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dface0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dface0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdface0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000020;
  return (uint)this;
}

/* ref: FUN_00dfad00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfad00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfad00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x34 + *(int *)this)));
    do {
      F_00e1d4f0(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x34);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfad60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfad60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfad60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  return (uint)this;
}

/* ref: FUN_00dfad90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfad90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfad90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfadd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfadd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfadd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x34 + *(int *)this)));
    do {
      F_00e1d4f0(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x34);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfae30 */
GEN_LIB GEN_FRAME unsigned int F_00dfae30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfae30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + 0x14)));
    iVar2 = param_2;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x14))) {
        puVar1[-5] = 0;
        puVar1[-4] = 0;
        puVar1[-3] = 0x80000000;
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0x80000000;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0x80000000;
        puVar1[7] = 0;
      }
      puVar1 = puVar1 + 0xd;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00dfae90 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfae90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfae90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,0x34);
  }
  iVar3 = (*((int *)GEN_TOP(((int)this + 4))) - param_2) - 1;
  if (-1 < iVar3) {
    this_00 = ((undefined *)GEN_TOP((iVar3 * 0x34 + param_2 * 0x34 + *(int *)this)));
    do {
      F_00e1d4f0(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  iVar3 = param_2 - *((int *)GEN_TOP(((int)this + 4)));
  if (0 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x34 + *(int *)this + 0x14)));
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x14))) {
        puVar2[-5] = 0;
        puVar2[-4] = 0;
        puVar2[-3] = 0x80000000;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0x80000000;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0x80000000;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0x80000000;
        puVar2[7] = 0;
      }
      puVar2 = puVar2 + 0xd;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return 0;
}

/* ref: FUN_00dfaf50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfaf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfaf50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x34 + *(int *)this)));
    do {
      F_00e1d4f0(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x34);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfafb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfafb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfafb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = param_1;
  *(uint *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  F_00e1da60(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_FWD,param_1 + 4,0,2);
  param_1 = param_1 & 0xffffff00;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0x80000000;
  *((bool *)GEN_TOP(((int)this + 0x4c))) = (*(undefined1 *)((char *)&REFG(undefined4, 0x135491c) + 1)) != *((char *)GEN_TOP((uVar1 + 5)));
  return (uint)this;
}

/* ref: FUN_00dfb020 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfb020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfb020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x44))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x34 + *((int *)GEN_TOP(((int)this + 0x40))))));
    do {
      F_00e1d4f0(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x48)));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x40))),(uVar1 & 0x3fffffff) * 0x34);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0x80000000;
  F_00da3e20(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
  F_00e1d740(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG);
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x10))),uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 4))),
                       (uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00dfb0f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfb0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfb0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x34);
  }
  iVar3 = (*((int *)GEN_TOP(((int)this + 4))) - param_1) - 1;
  if (-1 < iVar3) {
    this_00 = ((undefined *)GEN_TOP((iVar3 * 0x34 + param_1 * 0x34 + *(int *)this)));
    do {
      F_00e1d4f0(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  iVar3 = param_1 - *((int *)GEN_TOP(((int)this + 4)));
  if (0 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x34 + *(int *)this + 0x14)));
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x14))) {
        puVar2[-5] = 0;
        puVar2[-4] = 0;
        puVar2[-3] = 0x80000000;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0x80000000;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0x80000000;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0x80000000;
        puVar2[7] = 0;
      }
      puVar2 = puVar2 + 0xd;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return 0;
}

/* ref: FUN_00dfb1c0 */
GEN_LIB GEN_FRAME uint F_00dfb1c0(GEN_P(int * in_esi, unsigned int gen_a0), GEN_P(uint in_edi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdfb1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint in_edi = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x5, 11);
  char * pcVar1;
  uint uVar2;
  
  pcVar1 = ((char *)GEN_TOP(F_00d929e0(in_edi GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x0)))));
  if (*pcVar1 == '\0') {
    return in_edi;
  }
  if (in_esi != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0x14))))(in_esi GEN_EDX_ARG,param_3);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00dfb200 */
GEN_LIB GEN_FRAME uint F_00dfb200(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfb200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da0ce0(param_1,param_2,&REFG(undefined, 0x113bdcc),((char *)REFP(0x113cdcc)));
  return uVar1;
}

/* ref: hkPackfileWriter::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfb220u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)this;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x14))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_FWD,param_3);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0xc))))(this,param_1,param_2,uVar2);
  return uVar2;
}

/* ref: hkPackfileWriter::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfb250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this + 0x14 GEN_EDX_FWD,param_1,0xffffffff);
  if (-1 < (int)uVar1) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0x10 + uVar1 * 0x18))) = 0xfffffffe;
  }
  F_00dbd8b0(this + 0x14 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,0xfffffffe);
  uVar1 = F_00dbd8b0(this + 0x20 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: hkPackfileWriter::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfb2b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this + 0x2c GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfb2d0 */
GEN_LIB GEN_FRAME uint F_00dfb2d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdfb2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  undefined4 uVar1;
  uint uVar2;
  
  F_00e05630(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
  uVar1 = 0;
  if (param_4 == '\0') {
    uVar1 = 2;
  }
  F_00e1da60(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)),0,uVar1);
  F_0105aa30(((undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_00e1d840(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x10)),param_1,param_2,param_3);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x10))[0] = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  uVar2 = F_00e1d740(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00dfb330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfb330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  code * pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  char * pcVar6;
  
  pcVar6 = ((char *)REFP(0x113ba6c));
  uVar2 = F_00d92610(param_2 GEN_EDX_FWD);
  uVar2 = F_00da0d20(uVar2,pcVar6);
  if (uVar2 != 0) {
    pcVar6 = ((char *)REFP(0x113b968));
    uVar2 = F_00d92610(param_2 GEN_EDX_ARG);
    uVar2 = F_00da0d20(uVar2,pcVar6);
    if (uVar2 == 0) {
      uVar2 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG,*param_1,0);
      if (uVar2 != 0) {
        uVar3 = F_00dbd970(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,uVar2,0xffffffff);
        F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar3);
        F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar2);
        return 0;
      }
      F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG,*param_1,param_1);
    }
    return 1;
  }
  uVar2 = F_00d92610(param_1 GEN_EDX_ARG);
  uVar2 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG,uVar2,0);
  if (uVar2 != 0) {
    uVar3 = F_00d93010(uVar2 GEN_EDX_ARG,0);
    uVar4 = F_00d93010(param_1 GEN_EDX_ARG,0);
    if (uVar4 != uVar3) {
      F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
      pcVar6 = 
      ((char *)REFP(0x114ce80))
      ;
      uVar3 = F_00d92610(param_1 GEN_EDX_ARG);
      pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114ce58)))));
      pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar5 GEN_EDX_ARG,uVar3)));
      F_00d9fe80(pvVar5 GEN_EDX_ARG,pcVar6);
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                        (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,3,0x2518721c,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114ce38)),0xb8);
      if (uVar3 != 0) {
        pcVar1 = ((code *)GEN_TOP(swi(3)));
        uVar2 = (*pcVar1)();
        return uVar2;
      }
      F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
    }
    uVar3 = F_00dbd970(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,uVar2,0xffffffff);
    F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar3);
    F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar2);
    return 0;
  }
  uVar2 = F_00d92610(param_1 GEN_EDX_ARG);
  F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG,uVar2,param_1);
  return 1;
}

/* ref: FUN_00dfb4e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdfb4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[0]);
  uVar2 = F_00da3eb0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_FWD,(*(uint *)&gen_args[0]),&(*(uint *)&gen_args[0]));
  if (uVar2 == 0) {
    return (*(uint *)&gen_args[0]);
  }
  uVar2 = F_00da1210(uVar1);
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x68)));
  F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG,uVar2,uVar1);
  if (*((uint *)GEN_TOP(((int)this + 0x68))) == (*((uint *)GEN_TOP(((int)this + 0x6c))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 100))),4);
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 100))) + *((int *)GEN_TOP(((int)this + 0x68))) * 4))) = uVar2;
  *((int *)GEN_TOP(((int)this + 0x68))) = *((int *)GEN_TOP(((int)this + 0x68))) + 1;
  return uVar1;
}

/* ref: FUN_00dfb560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfb560u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint in_ecx;
  
  uVar1 = F_00dbd970(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_FWD,param_1,0xffffffff);
  if (uVar1 == 0xffffffff) {
    uVar1 = F_00d92610(param_2 GEN_EDX_ARG);
    uVar1 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_ARG,uVar1,0xffffffff);
    in_ecx = param_2;
    if (uVar1 == 0xffffffff) {
      while (in_ecx = F_00d92620(in_ecx GEN_EDX_ARG), in_ecx != 0) {
        uVar1 = F_00d92610(in_ecx GEN_EDX_ARG);
        uVar1 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_ARG,uVar1,0xffffffff);
        if (uVar1 != 0xffffffff) {
          return uVar1;
        }
      }
      uVar1 = F_00dfb4e0(this GEN_EDX_ARG,param_3);
    }
  }
  return uVar1;
}

/* ref: hkPackfileWriter::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfb5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dfb4e0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkPackfileWriter::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfb5f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dfb4e0(this GEN_EDX_FWD,param_2);
  uVar1 = F_00dbd8b0(this + 0x9c GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar1);
  return uVar1;
}

/* ref: hkPackfileWriter::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfb620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00dfb4e0(this GEN_EDX_FWD,param_2);
  uVar2 = F_00d92610(param_1 GEN_EDX_ARG);
  uVar1 = F_00da3a20(this + 0xa8 GEN_EDX_ARG,uVar2,uVar1);
  return uVar1;
}

