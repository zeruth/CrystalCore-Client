#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00d08470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d08470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd08470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 * puVar2;
  code * pcVar3;
  int * piVar4;
  undefined * pvVar5;
  uint * puVar6;
  uint uVar7;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  (*(int *)(gen_frame + 0x10)) = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[1]) == -1) {
    (*(int *)(gen_frame + 0x10)) = *((int *)GEN_TOP(((int)this + 0x14)));
    *((int *)GEN_TOP(((int)this + 0x14))) = *((int *)GEN_TOP(((int)this + 0x14))) + 1;
  }
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(((int)this + 0x40)));
  for (piVar4 = ((int *)GEN_TOP(F_00d2ff90(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,0))); piVar4 != ((int *)GEN_TOP(0x0));
      piVar4 = ((int *)GEN_TOP(F_00d2ff90((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,piVar4)))) {
    iVar1 = *piVar4;
    if (*((int *)GEN_TOP((iVar1 + 0x20))) == (*(int *)&gen_args[1])) {
      F_00d095a0(this GEN_EDX_ARG,iVar1);
      F_00d2ff30((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,piVar4);
      *((char *)GEN_TOP(((int)this + 0xa0))) = *((char *)GEN_TOP(((int)this + 0x84)));
      if (*((char *)GEN_TOP(((int)this + 0x84))) != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
      }
      *piVar4 = *((int *)GEN_TOP(((int)this + 0x74)));
      *((int * PTR32 *)GEN_TOP(((int)this + 0x74))) = piVar4;
      if (*((char *)GEN_TOP(((int)this + 0xa0))) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
      }
      break;
    }
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(((int)this + 0x50)));
  for (piVar4 = ((int *)GEN_TOP(F_00d2ff90(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG,0))); piVar4 != ((int *)GEN_TOP(0x0));
      piVar4 = ((int *)GEN_TOP(F_00d2ff90((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,piVar4)))) {
    puVar2 = ((undefined4 *)GEN_TOP(*piVar4));
    if (puVar2[8] == (*(int *)&gen_args[1])) {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        pcVar3 = *((gen_code32 *)GEN_TOP(*puVar2));
        (*pcVar3)(puVar2,1);
      }
      F_00d2ff30((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,piVar4);
      *((char *)GEN_TOP(((int)this + 0xa0))) = *((char *)GEN_TOP(((int)this + 0x84)));
      if (*((char *)GEN_TOP(((int)this + 0x84))) != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
      }
      *piVar4 = *((int *)GEN_TOP(((int)this + 0x74)));
      *((int * PTR32 *)GEN_TOP(((int)this + 0x74))) = piVar4;
      if (*((char *)GEN_TOP(((int)this + 0xa0))) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
      }
      break;
    }
  }
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(((int)this + 0x60)));
  for (piVar4 = ((int *)GEN_TOP(F_00d2ff90(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,0))); piVar4 != ((int *)GEN_TOP(0x0));
      piVar4 = ((int *)GEN_TOP(F_00d2ff90((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,piVar4)))) {
    puVar2 = ((undefined4 *)GEN_TOP(*piVar4));
    if (puVar2[8] == (*(int *)&gen_args[1])) {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        pcVar3 = *((gen_code32 *)GEN_TOP(*puVar2));
        (*pcVar3)(puVar2,1);
      }
      F_00d2ff30((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,piVar4);
      *((char *)GEN_TOP(((int)this + 0xa0))) = *((char *)GEN_TOP(((int)this + 0x84)));
      if (*((char *)GEN_TOP(((int)this + 0x84))) != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
      }
      *piVar4 = *((int *)GEN_TOP(((int)this + 0x74)));
      *((int * PTR32 *)GEN_TOP(((int)this + 0x74))) = piVar4;
      if (*((char *)GEN_TOP(((int)this + 0xa0))) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
      }
      break;
    }
  }
  switch((unsigned int)(uintptr_t)((*(undefined4 *)&gen_args[0]))) {
  case 1: ;
    (*(char * PTR32 *)&gen_args[2]) = "CDev.Engine.Sd.SoundLayout";
    (*(undefined4 *)&gen_args[3]) = 0x10;
    pvVar5 = ((undefined *)GEN_TOP(F_00cc1070(0x180,&(*(char * PTR32 *)&gen_args[2]))));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto switchD_00d08628_default;
    puVar6 = ((uint *)GEN_TOP(F_00cc67c0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG)));
    if (puVar6 != ((uint *)GEN_TOP(0x0))) {
      uVar7 = F_00d1b3b0(pvVar5 GEN_EDX_ARG,this,(*(int *)(gen_frame + 0x10)));
LAB_00d08678: ;
      *puVar6 = uVar7;
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0xc));
LAB_00d0867d: ;
      F_00d2fe00(pvVar5 GEN_EDX_ARG,puVar6);
      uVar7 = *puVar6;
      if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
      }
      return uVar7;
    }
    break;
  case 2: ;
    (*(char * PTR32 *)&gen_args[2]) = "CDev.Engine.Sd.SoundLayout";
    (*(undefined4 *)&gen_args[3]) = 0x10;
    pvVar5 = ((undefined *)GEN_TOP(F_00cc1070(0x170,&(*(char * PTR32 *)&gen_args[2]))));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto switchD_00d08628_default;
    puVar6 = ((uint *)GEN_TOP(F_00cc67c0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG)));
    if (puVar6 != ((uint *)GEN_TOP(0x0))) {
      uVar7 = F_00d1a780(pvVar5 GEN_EDX_ARG,this,(*(int *)(gen_frame + 0x10)));
      goto LAB_00d08678;
    }
    break;
  case 3: ;
    if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
      pvVar5 = ((undefined *)GEN_TOP(F_00cc67c0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG)));
    }
    else {
      (*(char * PTR32 *)(gen_frame + 0x0)) = "CDev.Engine.Sd.SoundLayout";
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(0x10));
      pvVar5 = ((undefined *)GEN_TOP(F_00cc1070(0x1c0,&(*(char * PTR32 *)(gen_frame + 0x0)))));
    }
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto switchD_00d08628_default;
    puVar6 = ((uint *)GEN_TOP(F_00cc67c0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG)));
    if (puVar6 != ((uint *)GEN_TOP(0x0))) {
      piVar4 = ((int *)GEN_TOP(F_00d18ac0(pvVar5 GEN_EDX_ARG,this,(*(int *)(gen_frame + 0x10)))));
      *puVar6 = (uint)piVar4;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x40))))(piVar4 GEN_EDX_ARG,(*(char * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0xc));
      goto LAB_00d0867d;
    }
    break;
  case 4: ;
    (*(char * PTR32 *)&gen_args[2]) = "CDev.Engine.Sd.SoundLayout";
    (*(undefined4 *)&gen_args[3]) = 0x10;
    pvVar5 = ((undefined *)GEN_TOP(F_00cc1070(0x1b0,&(*(char * PTR32 *)&gen_args[2]))));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto switchD_00d08628_default;
    puVar6 = ((uint *)GEN_TOP(F_00cc67c0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG)));
    if (puVar6 != ((uint *)GEN_TOP(0x0))) {
      uVar7 = F_00d167b0(pvVar5 GEN_EDX_ARG,this,(*(int *)(gen_frame + 0x10)));
      goto LAB_00d08678;
    }
    break;
  case 5: ;
    (*(char * PTR32 *)&gen_args[2]) = "CDev.Engine.Sd.SoundLayout";
    (*(undefined4 *)&gen_args[3]) = 0x10;
    pvVar5 = ((undefined *)GEN_TOP(F_00cc1070(0x1c0,&(*(char * PTR32 *)&gen_args[2]))));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto switchD_00d08628_default;
    puVar6 = ((uint *)GEN_TOP(F_00cc67c0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG)));
    if (puVar6 != ((uint *)GEN_TOP(0x0))) {
      uVar7 = F_00d147c0(pvVar5 GEN_EDX_ARG,this,(*(int *)(gen_frame + 0x10)));
      goto LAB_00d08678;
    }
    break;
  case 6: ;
    (*(char * PTR32 *)&gen_args[2]) = "CDev.Engine.Sd.SoundLayout";
    (*(undefined4 *)&gen_args[3]) = 0x10;
    pvVar5 = ((undefined *)GEN_TOP(F_00cc1070(0x4c0,&(*(char * PTR32 *)&gen_args[2]))));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto switchD_00d08628_default;
    puVar6 = ((uint *)GEN_TOP(F_00cc67c0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG)));
    if (puVar6 != ((uint *)GEN_TOP(0x0))) {
      uVar7 = F_00d12820(pvVar5 GEN_EDX_ARG,this,(*(int *)(gen_frame + 0x10)));
      goto LAB_00d08678;
    }
    break;
  case 7: ;
    (*(char * PTR32 *)&gen_args[2]) = "CDev.Engine.Sd.SoundLayout";
    (*(undefined4 *)&gen_args[3]) = 0x10;
    pvVar5 = ((undefined *)GEN_TOP(F_00cc1070(0x210,&(*(char * PTR32 *)&gen_args[2]))));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto switchD_00d08628_default;
    puVar6 = ((uint *)GEN_TOP(F_00cc67c0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG)));
    if (puVar6 != ((uint *)GEN_TOP(0x0))) {
      uVar7 = F_00d0fcb0(pvVar5 GEN_EDX_ARG,this,(*(int *)(gen_frame + 0x10)));
      goto LAB_00d08678;
    }
    break;
  case 8: ;
    (*(char * PTR32 *)&gen_args[2]) = "CDev.Engine.Sd.SoundLayout";
    (*(undefined4 *)&gen_args[3]) = 0x10;
    pvVar5 = ((undefined *)GEN_TOP(F_00cc1070(0x1f0,&(*(char * PTR32 *)&gen_args[2]))));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto switchD_00d08628_default;
    puVar6 = ((uint *)GEN_TOP(F_00cc67c0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG)));
    if (puVar6 != ((uint *)GEN_TOP(0x0))) {
      uVar7 = F_00d0da50(pvVar5 GEN_EDX_ARG,this,(*(int *)(gen_frame + 0x10)));
      *puVar6 = uVar7;
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x8));
      goto LAB_00d0867d;
    }
    break;
  case 9: ;
    (*(char * PTR32 *)&gen_args[2]) = "CDev.Engine.Sd.SoundLayout";
    (*(undefined4 *)&gen_args[3]) = 0x10;
    pvVar5 = ((undefined *)GEN_TOP(F_00cc1070(0x200,&(*(char * PTR32 *)&gen_args[2]))));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto switchD_00d08628_default;
    puVar6 = ((uint *)GEN_TOP(F_00cc67c0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG)));
    if (puVar6 != ((uint *)GEN_TOP(0x0))) {
      uVar7 = F_00d20560(pvVar5 GEN_EDX_ARG,this,(*(int *)(gen_frame + 0x10)));
      *puVar6 = uVar7;
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x8));
      goto LAB_00d0867d;
    }
    break;
  case 10: ;
    (*(char * PTR32 *)&gen_args[2]) = "CDev.Engine.Sd.SoundLayout";
    (*(undefined4 *)&gen_args[3]) = 0x10;
    pvVar5 = ((undefined *)GEN_TOP(F_00cc1070(0x2c0,&(*(char * PTR32 *)&gen_args[2]))));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto switchD_00d08628_default;
    puVar6 = ((uint *)GEN_TOP(F_00cc67c0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG)));
    if (puVar6 != ((uint *)GEN_TOP(0x0))) {
      uVar7 = F_00d2b740(pvVar5 GEN_EDX_ARG,this,(*(int *)(gen_frame + 0x10)));
      *puVar6 = uVar7;
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x8));
      goto LAB_00d0867d;
    }
    break;
  case 0xb: ;
    (*(char * PTR32 *)&gen_args[2]) = "CDev.Engine.Sd.SoundLayout";
    (*(undefined4 *)&gen_args[3]) = 0x10;
    pvVar5 = ((undefined *)GEN_TOP(F_00cc1070(0x590,&(*(char * PTR32 *)&gen_args[2]))));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto switchD_00d08628_default;
    puVar6 = ((uint *)GEN_TOP(F_00cc67c0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG)));
    if (puVar6 != ((uint *)GEN_TOP(0x0))) {
      uVar7 = F_00d292e0(pvVar5 GEN_EDX_ARG,this,(*(int *)(gen_frame + 0x10)));
      goto LAB_00d08678;
    }
    break;
  case 0xc: ;
    (*(char * PTR32 *)&gen_args[2]) = "CDev.Engine.Sd.SoundLayout";
    (*(undefined4 *)&gen_args[3]) = 0x10;
    pvVar5 = ((undefined *)GEN_TOP(F_00cc1070(0x1e0,&(*(char * PTR32 *)&gen_args[2]))));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto switchD_00d08628_default;
    puVar6 = ((uint *)GEN_TOP(F_00cc67c0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG)));
    if (puVar6 != ((uint *)GEN_TOP(0x0))) {
      uVar7 = F_00d26ab0(pvVar5 GEN_EDX_ARG,this,(*(int *)(gen_frame + 0x10)));
      *puVar6 = uVar7;
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x4));
      goto LAB_00d0867d;
    }
    break;
  case 0xd: ;
    (*(char * PTR32 *)&gen_args[2]) = "CDev.Engine.Sd.SoundLayout";
    (*(undefined4 *)&gen_args[3]) = 0x10;
    pvVar5 = ((undefined *)GEN_TOP(F_00cc1070(0x1c4,&(*(char * PTR32 *)&gen_args[2]))));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto switchD_00d08628_default;
    puVar6 = ((uint *)GEN_TOP(F_00cc67c0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG)));
    if (puVar6 != ((uint *)GEN_TOP(0x0))) {
      uVar7 = F_00d25290(pvVar5 GEN_EDX_ARG,this,(*(int *)(gen_frame + 0x10)));
      *puVar6 = uVar7;
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x4));
      goto LAB_00d0867d;
    }
    break;
  case 0xe: ;
    (*(char * PTR32 *)&gen_args[2]) = "CDev.Engine.Sd.SoundLayout";
    (*(undefined4 *)&gen_args[3]) = 0x10;
    pvVar5 = ((undefined *)GEN_TOP(F_00cc1070(0x590,&(*(char * PTR32 *)&gen_args[2]))));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto switchD_00d08628_default;
    puVar6 = ((uint *)GEN_TOP(F_00cc67c0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG)));
    if (puVar6 != ((uint *)GEN_TOP(0x0))) {
      uVar7 = F_00d0bb10(pvVar5 GEN_EDX_ARG,this,(*(int *)(gen_frame + 0x10)));
      *puVar6 = uVar7;
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x8));
      goto LAB_00d0867d;
    }
    break;
  default: ;
    goto switchD_00d08628_default;
  }
  F_00406810(pvVar5);
switchD_00d08628_default: ;
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_00d08b40 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d08b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xd08b40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_GS(0xa0, 0, 4);
  float10 fVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint extraout_EAX = 0;
  int iVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  undefined * this_00;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = param_2;
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  fVar1 = (float10)1;
  (*(float *)(gen_frame + 0x28)) = (float)fVar1;
  (*(float *)(gen_frame + 0x2c)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x20;
  (*(float *)(gen_frame + 0x30)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(float *)(gen_frame + 0x34)) = (float)fVar1;
  (*(uint *)(gen_frame + 0x1c)) = 4;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  F_006095e0(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG);
  F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),param_1);
  F_00cbe880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  puVar3 = ((undefined4 *)GEN_TOP(F_00cbe7a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)))));
  uVar6 = param_1;
  this_00 = this;
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar7 = &(*(undefined4 *)(gen_frame + 0x18));
    for (iVar5 = 0x20; uVar6 = (*(undefined4 *)(gen_frame + 0xc)), this_00 = (*(undefined * PTR32 *)(gen_frame + 0x10)), iVar5 != 0; iVar5 = iVar5 - 1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = (*(uint *)(gen_frame + 0x1c));
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = (byte)(*(uint *)(gen_frame + 0x1c)) | 0x20;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)) = (undefined2)(*(undefined4 *)(gen_frame + 0x14));
  (*(uint *)(gen_frame + 0x1c)) = CONCAT22((undefined2)(*(undefined4 *)(gen_frame + 0x14)),(short)uVar2) | 0x20;
  (*(undefined4 *)(gen_frame + 0x20)) = uVar6;
  (*(float *)(gen_frame + 0x70)) = (float)((float10)(*(float *)(gen_frame + 0x70)) / (float10)*(double *)&REFG(undefined, 0x109cac8));
  uVar4 = F_00d07c70(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)),param_3,1,param_4,param_5,param_6);
  F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    uVar4 = extraout_EAX;
  }
  return uVar4;
}

/* ref: FUN_00d08c80 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d08c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xd08c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  float10 fVar1;
  undefined4 uVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  fVar1 = (float10)1;
  (*(float *)(gen_frame + 0x10)) = (float)fVar1;
  (*(float *)(gen_frame + 0x14)) = (float)fVar1;
  (*(float *)(gen_frame + 0x18)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x20;
  (*(float *)(gen_frame + 0x1c)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 4;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_006095e0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = (*(uint *)(gen_frame + 0x4));
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 0)) = (byte)(*(uint *)(gen_frame + 0x4)) | 0x20;
  (*(undefined4 *)(gen_frame + 0x8)) = param_1;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 2)) = (undefined2)param_2;
  (*(uint *)(gen_frame + 0x4)) = CONCAT22((undefined2)param_2,(short)uVar2) | 0x20;
  F_00d07c70(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),param_3,1,param_4,param_5,param_6);
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar3 = F_00d05480(this GEN_EDX_ARG,param_3);
  if (uVar3 != 0) {
    *((uint *)GEN_TOP((uVar3 + 0xb0))) = *((uint *)GEN_TOP((uVar3 + 0xb0))) | 8;
  }
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    uVar3 = gen_imp_LeaveCriticalSection(lpCriticalSection);
    if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
      uVar3 = gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
  }
  return uVar3;
}

/* ref: FUN_00d08d60 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d08d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd08d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x9c, 4, 4);
  float10 fVar1;
  undefined4 uVar2;
  int * piVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint extraout_EAX = 0;
  int iVar6;
  undefined * this_00;
  undefined4 * puVar7;
  undefined4 uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x94)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x98));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  fVar1 = (float10)1;
  (*(float *)(gen_frame + 0x24)) = (float)fVar1;
  (*(float *)(gen_frame + 0x28)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x14)) = 0x20;
  (*(float *)(gen_frame + 0x2c)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(float *)(gen_frame + 0x30)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x18)) = 4;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_006095e0(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  piVar3 = ((int *)GEN_TOP(F_00d2ccd0()));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_1);
  F_00cbe880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  puVar4 = ((undefined4 *)GEN_TOP(F_00cbe7e0(param_1)));
  this_00 = this;
  uVar8 = param_1;
  if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar7 = &(*(undefined4 *)(gen_frame + 0x14));
    for (iVar6 = 0x20; this_00 = (*(undefined * PTR32 *)(gen_frame + 0x10)), uVar8 = (*(undefined4 *)(gen_frame + 0xc)), iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = (*(undefined4 *)(gen_frame + 0x18));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = (byte)(*(undefined4 *)(gen_frame + 0x18)) | 0x20;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 2)) = 0xffff;
  (*(undefined4 *)(gen_frame + 0x18)) = CONCAT22(0xffff,(ushort)uVar2 | 0x20);
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar8;
  uVar5 = F_00d07c70(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x14)),param_2,1,0,0,param_3);
  F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (*((char *)GEN_TOP(((int)this + 0xf0))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
    uVar5 = extraout_EAX;
  }
  return uVar5;
}

/* ref: FUN_00d08e80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d08e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd08e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x44, 12);
  int in_ecx;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  code * pcVar2;
  undefined4 * puVar3;
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x30)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  (*(uint *)(gen_frame + 0x10)) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xe4))))(piVar1 GEN_EDX_FWD);
  if ((char)(*(uint *)(gen_frame + 0x10)) != '\0') {
    F_00d07750(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    F_00d00af0(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),0x10);
    lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xd8);
    (*(LPCRITICAL_SECTION *)(gen_frame + 0xc)) = lpCriticalSection;
    *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
    gen_imp_EnterCriticalSection(lpCriticalSection);
    in_ecx = (int)this + 0x40;
    ((int *)(gen_frame + 0x0))[0] = (int)this + 0x50;
    ((int *)(gen_frame + 0x0))[1] = (int)this + 0x60;
    ((int *)(gen_frame + 0x0))[2] = 0;
    (*(uint *)(gen_frame + 0x10)) = 0;
    while (in_ecx != 0) {
      for (puVar3 = ((undefined4 *)GEN_TOP(F_00d2ff90(in_ecx GEN_EDX_ARG,0))); puVar3 != ((undefined4 *)GEN_TOP(0x0));
          puVar3 = ((undefined4 *)GEN_TOP(F_00d2ff90(in_ecx GEN_EDX_ARG,puVar3)))) {
        piVar1 = ((int *)GEN_TOP(*puVar3));
        pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 100)));
        (*pcVar2)(piVar1);
      }
      in_ecx = ((int *)(gen_frame + 0x0))[(int)((*(uint *)(gen_frame + 0x10)))];
      (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
      lpCriticalSection = (*(LPCRITICAL_SECTION *)(gen_frame + 0xc));
    }
    if (*(char *)&(*(undefined * PTR32 *)(((char *)(lpCriticalSection) + (1) * 24))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      (*(uint *)(gen_frame + 0x10)) = extraout_EAX;
    }
  }
  return (*(uint *)(gen_frame + 0x10));
}

/* ref: FUN_00d08f70 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d08f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd08f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  if (*param_1 != 3) {
    return 0;
  }
  F_00d07c70(this GEN_EDX_FWD,param_1 + 8,*(undefined4 *)(param_1 + 4),1,0,0,1);
  return 1;
}

/* ref: FUN_00d08fa0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d08fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd08fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1200c, 4, 4);
  char cVar1;
  byte bVar2;
  char * pcVar3;
  byte * pbVar4;
  uint uVar5;
  int iVar6;
  byte * pbVar7;
  byte * pbVar8;
  int * this_00;
  bool bVar9;
  
  (*(uint *)(gen_frame + 0x12004)) = 0xd08fad;
  (*(uint *)(gen_frame + 0x12004)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  this_00 = ((int *)GEN_TOP(0x0));
  (*(uint *)(gen_frame + 0x10000)) = 0;
  pcVar3 = F_00c5281f(((char *)(gen_frame + 0x10004)),0x2000,param_1);
  do {
    if (pcVar3 == ((char *)GEN_TOP(0x0))) {
      return 1;
    }
    pcVar3 = ((char *)(gen_frame + 0x10004));
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3[(int)(((char *)(gen_frame + 0x10004)) + (-1 - (int)(((char *)(gen_frame + 0x10004)) + 1)))] == '\n') {
      pcVar3[(int)(((char *)(gen_frame + 0x10004)) + (-1 - (int)(((char *)(gen_frame + 0x10004)) + 1)))] = '\0';
    }
    pcVar3 = ((char *)(gen_frame + 0x10004));
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3[(int)(((char *)(gen_frame + 0x10004)) + (-1 - (int)(((char *)(gen_frame + 0x10004)) + 1)))] == '\r') {
      pcVar3[(int)(((char *)(gen_frame + 0x10004)) + (-1 - (int)(((char *)(gen_frame + 0x10004)) + 1)))] = '\0';
    }
    if ((((char *)(gen_frame + 0x10004))[0] != '\0') && (((char *)(gen_frame + 0x10004))[0] != ';')) {
      pbVar4 = ((byte *)GEN_TOP(F_00d00d00(((char *)(gen_frame + 0x10004)),0)));
      if (pbVar4 == ((byte *)GEN_TOP(0x0))) {
        return 0;
      }
      pcVar3 = ((char *)REFP(0x11321a4));
      pbVar8 = pbVar4;
      do {
        bVar2 = *pcVar3;
        bVar9 = bVar2 < *pbVar8;
        if (bVar2 != *pbVar8) {
LAB_00d09090: ;
          iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00d09095;
        }
        if (bVar2 == 0) break;
        bVar2 = pcVar3[1];
        bVar9 = bVar2 < pbVar8[1];
        if (bVar2 != pbVar8[1]) goto LAB_00d09090;
        pcVar3 = pcVar3 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar2 != 0);
      iVar6 = 0;
LAB_00d09095: ;
      if (iVar6 == 0) {
        return 1;
      }
      pcVar3 = ((char *)REFP(0x11321b4));
      pbVar8 = pbVar4;
      do {
        bVar2 = *pcVar3;
        bVar9 = bVar2 < *pbVar8;
        if (bVar2 != *pbVar8) {
LAB_00d090c4: ;
          iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00d090c9;
        }
        if (bVar2 == 0) break;
        bVar2 = pcVar3[1];
        bVar9 = bVar2 < pbVar8[1];
        if (bVar2 != pbVar8[1]) goto LAB_00d090c4;
        pcVar3 = pcVar3 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar2 != 0);
      iVar6 = 0;
LAB_00d090c9: ;
      if (iVar6 == 0) {
        if (this_00 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 4))))(this_00 GEN_EDX_ARG);
          F_00d228c0(this_00 GEN_EDX_ARG);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 100))))(this_00 GEN_EDX_ARG);
        }
        this_00 = ((int *)GEN_TOP(0x0));
      }
      else {
        pcVar3 = ((char *)REFP(0x11321c8));
        pbVar8 = pbVar4;
        do {
          bVar2 = *pcVar3;
          bVar9 = bVar2 < *pbVar8;
          if (bVar2 != *pbVar8) {
LAB_00d09118: ;
            iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00d0911d;
          }
          if (bVar2 == 0) break;
          bVar2 = pcVar3[1];
          bVar9 = bVar2 < pbVar8[1];
          if (bVar2 != pbVar8[1]) goto LAB_00d09118;
          pcVar3 = pcVar3 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar2 != 0);
        iVar6 = 0;
LAB_00d0911d: ;
        if (iVar6 == 0) {
          uVar5 = F_00d00d00(0,0);
          if (uVar5 == 0) {
            return 0;
          }
          F_00c4c74c(uVar5);
        }
        else {
          pcVar3 = ((char *)REFP(0x11321dc));
          pbVar8 = pbVar4;
          do {
            bVar2 = *pcVar3;
            bVar9 = bVar2 < *pbVar8;
            if (bVar2 != *pbVar8) {
LAB_00d09168: ;
              iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_00d0916d;
            }
            if (bVar2 == 0) break;
            bVar2 = pcVar3[1];
            bVar9 = bVar2 < pbVar8[1];
            if (bVar2 != pbVar8[1]) goto LAB_00d09168;
            pcVar3 = pcVar3 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar2 != 0);
          iVar6 = 0;
LAB_00d0916d: ;
          if (iVar6 == 0) {
            uVar5 = F_00d00d00(0,0);
            if (uVar5 == 0) {
              return 0;
            }
            (*(uint *)(gen_frame + 0x10000)) = F_00c4c74c(uVar5);
          }
          else {
            pbVar7 = &REFG(undefined1, 0x11321e8);
            pbVar8 = pbVar4;
            do {
              bVar2 = *pbVar7;
              bVar9 = bVar2 < *pbVar8;
              if (bVar2 != *pbVar8) {
LAB_00d091c0: ;
                iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_00d091c5;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar7[1];
              bVar9 = bVar2 < pbVar8[1];
              if (bVar2 != pbVar8[1]) goto LAB_00d091c0;
              pbVar7 = pbVar7 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar2 != 0);
            iVar6 = 0;
LAB_00d091c5: ;
            if (iVar6 == 0) {
              uVar5 = F_00d00d00(0,0);
              if (uVar5 == 0) {
                return 0;
              }
              uVar5 = F_00c4c74c(uVar5);
              this_00 = ((int *)GEN_TOP(F_00d08470(this GEN_EDX_ARG,uVar5,(*(uint *)(gen_frame + 0x10000)),0,0)));
              bVar9 = this_00 == ((int *)GEN_TOP(0x0));
            }
            else {
              if (this_00 == ((int *)GEN_TOP(0x0))) goto LAB_00d0920f;
              uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x7c))))(this_00 GEN_EDX_ARG,pbVar4);
              bVar9 = (char)uVar5 == '\0';
            }
            if (bVar9) {
              return 0;
            }
          }
        }
      }
    }
LAB_00d0920f: ;
    pcVar3 = F_00c5281f(((char *)(gen_frame + 0x10004)),0x2000,param_1);
  } while( true );
}

/* ref: FUN_00d09260 */
GEN_LIB_GS GEN_FRAME uint F_00d09260(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd09260u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x1132210)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x11321f0)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00d09300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d09300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd09300u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1132230));
  *((int *)GEN_TOP(((int)this + 0x10))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x84))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
  *((undefined1 *)GEN_TOP(((int)this + 0xa0))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xb8))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xbc));
  *((undefined1 *)GEN_TOP(((int)this + 0xd4))) = 1;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xd8));
  *((undefined1 *)GEN_TOP(((int)this + 0xf0))) = 1;
  *((int *)GEN_TOP(((int)this + 0x38))) = param_3;
  *((int *)GEN_TOP(((int)this + 0x3c))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x18))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  (*(char * PTR32 *)(gen_frame + 0x0)) = "CDev.Engine.Sd.SoundLayout";
  (*(undefined4 *)(gen_frame + 0x4)) = 0x10;
  F_00cc6930(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG,0x10,param_3 + param_4,&(*(char * PTR32 *)(gen_frame + 0x0)),4,1);
  F_00d2fdb0((int)this + 0x40 GEN_EDX_ARG,4);
  F_00d2fdb0((int)this + 0x50 GEN_EDX_ARG,4);
  F_00d2fdb0((int)this + 0x60 GEN_EDX_ARG,4);
  if (param_2 == 0) {
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x38)));
    (*(char * PTR32 *)(gen_frame + 0x0)) = "CDev.Engine.Sd.SoundLayout";
    (*(undefined4 *)(gen_frame + 0x4)) = 0x10;
    F_00cc6930(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG,0x1c0,uVar1,&(*(char * PTR32 *)(gen_frame + 0x0)),0x10,1);
  }
  F_00d08e80(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00d09470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d09470(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd09470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00d094e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d094e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd094e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x38))) = param_2;
  *((undefined1 *)GEN_TOP((in_ecx + 0x34))) = 0;
  return param_2;
}

/* ref: FUN_00d09500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d09500(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd09500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  uVar1 = ((uint)param_2 * 8 ^ *((uint *)GEN_TOP((in_ecx + 0xb0)))) & 8;
  *((uint *)GEN_TOP((in_ecx + 0xb0))) = *((uint *)GEN_TOP((in_ecx + 0xb0))) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00d09530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d09530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd09530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xb8))) = param_2;
  return param_2;
}

/* ref: FUN_00d09540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d09540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd09540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a1;)
  uint uVar1;
  ushort * puVar2;
  
  *param_1 = *(ushort *)((int)(uintptr_t)this) << 8 | *(ushort *)((int)(uintptr_t)this) >> 8;
  param_1[1] = *((ushort *)GEN_TOP(((int)this + 2))) << 8 | *((ushort *)GEN_TOP(((int)this + 2))) >> 8;
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *(uint *)(param_1 + 2) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  puVar2 = param_1;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  return 0;
}

/* ref: FUN_00d095a0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d095a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd095a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_FWD,0);
    *((char *)GEN_TOP(((int)this + 0xd4))) = *((char *)GEN_TOP(((int)this + 0xb8)));
    if (*((char *)GEN_TOP(((int)this + 0xb8))) != '\0') {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xbc));
    }
    *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0xa8)));
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xa8))) = param_1;
    if (*((char *)GEN_TOP(((int)this + 0xd4))) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xbc));
    }
  }
  else if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,1);
    return;
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundPage::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d09610(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd09610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00d079f0(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf1 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d09690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd09690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined * pPVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined * pPVar22;
  float fVar23;
  float fVar28;
  float fVar29;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  volatile float fStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_14;
  undefined1 auVar26 [16];
  
  iVar20 = *(int *)(this + 0x128);
  *(undefined4 *)(this + 300) = *((undefined4 *)GEN_TOP((iVar20 + 0x20)));
  *(undefined4 *)(this + 0x130) = *((undefined4 *)GEN_TOP((iVar20 + 0x24)));
  *(undefined4 *)(this + 0x134) = *((undefined4 *)GEN_TOP((iVar20 + 0x28)));
  *(undefined4 *)(this + 0x138) = *((undefined4 *)GEN_TOP((iVar20 + 0x2c)));
  iVar20 = *(int *)(this + 0x128);
  *(undefined4 *)(this + 0x13c) = *((undefined4 *)GEN_TOP((iVar20 + 0x20)));
  *(undefined4 *)(this + 0x140) = *((undefined4 *)GEN_TOP((iVar20 + 0x24)));
  *(undefined4 *)(this + 0x144) = *((undefined4 *)GEN_TOP((iVar20 + 0x28)));
  *(undefined4 *)(this + 0x148) = *((undefined4 *)GEN_TOP((iVar20 + 0x2c)));
  iVar20 = *(int *)(this + 0x128);
  iVar21 = 1;
  if (1 < *((byte *)GEN_TOP((iVar20 + 0x229)))) {
    iVar19 = 0x30;
    do {
      uVar4 = *((undefined4 *)GEN_TOP((iVar20 + 8 + iVar19)));
      iVar21 = iVar21 + 1;
      (*(undefined4 *)((char *)&auVar24 + 4)) = uVar4;
      (*(undefined4 *)((char *)&auVar24 + 0)) = *((undefined4 *)GEN_TOP((iVar20 + iVar19)));
      (*(undefined4 *)((char *)&auVar24 + 8)) = uVar4;
      (*(undefined4 *)((char *)&auVar24 + 12)) = *((undefined4 *)GEN_TOP((iVar20 + 0xc + iVar19)));
      (*(undefined8 *)((char *)&auVar25 + 8)) = (*(undefined8 *)((char *)&auVar24 + 8));
      (*(undefined4 *)((char *)&auVar25 + 4)) = *((undefined4 *)GEN_TOP((iVar20 + 4 + iVar19)));
      (*(undefined4 *)((char *)&auVar25 + 0)) = *((undefined4 *)GEN_TOP((iVar20 + iVar19)));
      gen_minps(&(auVar25), &(auVar25), (this + 300));
      local_60 = (*(undefined4 *)((char *)&auVar25 + 0));
      uStack_5c = (*(undefined4 *)((char *)&auVar25 + 4));
      *(undefined4 *)(this + 300) = local_60;
      uStack_58 = (*(undefined4 *)((char *)&auVar25 + 8));
      *(undefined4 *)(this + 0x130) = uStack_5c;
      uStack_54 = (*(undefined4 *)((char *)&auVar25 + 12));
      *(undefined4 *)(this + 0x134) = uStack_58;
      *(undefined4 *)(this + 0x138) = uStack_54;
      iVar20 = *(int *)(this + 0x128);
      uVar4 = *((undefined4 *)GEN_TOP((iVar20 + 8 + iVar19)));
      puVar2 = ((undefined4 *)GEN_TOP((iVar20 + 0xc + iVar19)));
      puVar1 = ((undefined4 *)GEN_TOP((iVar20 + iVar19)));
      puVar3 = ((undefined4 *)GEN_TOP((iVar20 + 4 + iVar19)));
      iVar19 = iVar19 + 0x10;
      (*(undefined4 *)((char *)&auVar27 + 4)) = uVar4;
      (*(undefined4 *)((char *)&auVar27 + 0)) = *puVar1;
      (*(undefined4 *)((char *)&auVar27 + 8)) = uVar4;
      (*(undefined4 *)((char *)&auVar27 + 12)) = *puVar2;
      (*(undefined8 *)((char *)&auVar26 + 8)) = (*(undefined8 *)((char *)&auVar27 + 8));
      (*(undefined4 *)((char *)&auVar26 + 4)) = *puVar3;
      (*(undefined4 *)((char *)&auVar26 + 0)) = *puVar1;
      gen_maxps(&(auVar25), &(auVar26), (this + 0x13c));
      local_60 = (*(undefined4 *)((char *)&auVar25 + 0));
      uStack_5c = (*(undefined4 *)((char *)&auVar25 + 4));
      *(undefined4 *)(this + 0x13c) = local_60;
      uStack_58 = (*(undefined4 *)((char *)&auVar25 + 8));
      *(undefined4 *)(this + 0x140) = uStack_5c;
      uStack_54 = (*(undefined4 *)((char *)&auVar25 + 12));
      *(undefined4 *)(this + 0x144) = uStack_58;
      *(undefined4 *)(this + 0x148) = uStack_54;
      iVar20 = *(int *)(this + 0x128);
    } while (iVar21 < (int)(uint)*((byte *)GEN_TOP((iVar20 + 0x229))));
  }
  fVar17 = *(float *)&REFG(undefined, 0x11323e8);
  fVar16 = *(float *)&REFG(undefined, 0x11323e4);
  fVar15 = *(float *)&REFG(undefined, 0x11323e0);
  fVar14 = *(float *)&REFG(undefined, 0x11323d8);
  fVar13 = *(float *)&REFG(undefined, 0x11323d4);
  fVar12 = *(float *)&REFG(undefined, 0x11323d0);
  local_14 = 0;
  if (*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x229))) != 2 &&
      -1 < (int)(*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x229))) - 2)) {
    iVar20 = -300 - (int)this;
    pPVar18 = this + 0x14c;
    do {
      iVar21 = *(int *)(this + 0x128);
      iVar19 = (-0x11c - (int)this) + iVar21;
      fVar5 = *(float *)(pPVar18 + iVar19 + 8);
      fVar6 = *(float *)(pPVar18 + iVar19);
      fVar7 = *(float *)(pPVar18 + iVar19 + 4);
      fVar8 = *(float *)(pPVar18 + iVar21 + 4 + iVar20);
      fVar23 = *(float *)(pPVar18 + iVar21 + 8 + iVar20);
      fVar28 = *(float *)(pPVar18 + iVar21 + iVar20);
      iVar19 = (-0x10c - (int)this) + iVar21;
      fVar33 = *(float *)(pPVar18 + iVar19 + 0xc);
      pPVar22 = pPVar18 + iVar19;
      fVar34 = *(float *)(pPVar18 + iVar21 + 0xc + iVar20);
      fVar29 = *(float *)(pPVar18 + iVar21 + 8 + iVar20);
      fVar30 = *(float *)(pPVar18 + iVar21 + 4 + iVar20);
      fVar31 = *(float *)(pPVar18 + iVar21 + iVar20);
      fVar32 = *(float *)(pPVar22 + 8);
      fVar9 = *(float *)(pPVar22 + 4);
      fVar10 = *(float *)pPVar22;
      *(float *)pPVar18 = (fVar9 - fVar30) * (fVar5 - fVar23) - (fVar32 - fVar29) * (fVar7 - fVar8);
      *(float *)(pPVar18 + 4) =
           (fVar32 - fVar29) * (fVar6 - fVar28) - (fVar10 - fVar31) * (fVar5 - fVar23);
      *(float *)(pPVar18 + 8) =
           (fVar10 - fVar31) * (fVar7 - fVar8) - (fVar9 - fVar30) * (fVar6 - fVar28);
      *(float *)(pPVar18 + 0xc) = fVar33 - fVar34;
      fVar5 = *(float *)(pPVar18 + 8);
      fVar6 = *(float *)(pPVar18 + 0xc);
      fVar7 = *(float *)pPVar18;
      fVar8 = *(float *)(pPVar18 + 4);
      fVar23 = fVar7 * fVar7;
      fVar28 = gen_bits2f((uint)((ulonglong)*(undefined8 *)((int)(uintptr_t)pPVar18) >> 0x20)) * fVar8;
      fVar29 = ((unsigned int)gen_vbits((*(gen_v12 *)pPVar18), 12, 64, 4)) * fVar5;
      fVar30 = fVar6 * fVar6;
      fVar31 = (fVar29 + fVar23) + fVar28;
      fVar32 = (fVar23 + fVar28) + fVar29;
      fVar23 = (fVar28 + fVar29) + fVar23;
      fVar30 = (fVar30 + fVar30) + fVar30;
      (*(undefined4 *)((char *)&auVar11 + 4)) = (undefined4)gen_fl2bits(fVar32);
      (*(undefined4 *)((char *)&auVar11 + 0)) = (undefined4)gen_fl2bits(fVar31);
      (*(undefined4 *)((char *)&auVar11 + 8)) = (undefined4)gen_fl2bits(fVar23);
      (*(undefined4 *)((char *)&auVar11 + 12)) = (undefined4)gen_fl2bits(fVar30);
      gen_rsqrtps(&(auVar25), (&(unsigned int[4]){(unsigned int)((uint)gen_fl2bits(fVar33 - fVar34)), 0, 0, 0}), &(auVar11));
      fVar28 = (*(float *)((char *)&auVar25 + 0));
      fVar33 = (*(float *)((char *)&auVar25 + 4));
      fVar34 = (*(float *)((char *)&auVar25 + 8));
      fStack_64 = ((*(float *)((char *)&auVar25 + 12)) * fVar30) * (*(float *)((char *)&auVar25 + 12));
      *(uint *)pPVar18 =
           (uint)gen_fl2bits(((fVar12 - (fVar28 * fVar31) * fVar28) * (fVar15 * fVar28) + fVar28) *
                             fVar7) & -(uint)(0.0 < fVar31) |
           ~-(uint)(0.0 < fVar31) & (uint)gen_fl2bits(fVar7);
      *(uint *)(pPVar18 + 4) =
           (uint)gen_fl2bits(((fVar13 - (fVar33 * fVar32) * fVar33) * (fVar16 * fVar33) + fVar33) *
                             fVar8) & -(uint)(0.0 < fVar32) |
           ~-(uint)(0.0 < fVar32) & (uint)gen_fl2bits(fVar8);
      *(uint *)(pPVar18 + 8) =
           (uint)gen_fl2bits(((fVar14 - (fVar34 * fVar23) * fVar34) * (fVar17 * fVar34) + fVar34) *
                             fVar5) & -(uint)(0.0 < fVar23) |
           ~-(uint)(0.0 < fVar23) & (uint)gen_fl2bits(fVar5);
      *(float *)(pPVar18 + 0xc) = fVar6;
      local_14 = local_14 + 1;
      pPVar18 = pPVar18 + 0x10;
    } while (local_14 < (int)(*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x229))) - 2));
  }
  return 0;
}

/* ref: FUN_00d09b00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d09b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd09b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1132404));
  F_00cccb40((int)this + 0x32c GEN_EDX_FWD);
  uVar1 = F_00d23680(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d09b20(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xd09b20u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  F_00d211a0(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  F_00cccbd0(param_1 + 0x32c GEN_EDX_ARG,param_4);
  F_00cccd90(param_1 + 0x32c GEN_EDX_ARG,param_3,param_2);
  return REFG(undefined4, 0x11299e4);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d09b70(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd09b70u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cccd90(param_1 + 0x32c GEN_EDX_FWD,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d09b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd09b90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_14;
  
  F_00d213b0(this GEN_EDX_FWD,param_1,(undefined1)param_2);
  iVar4 = *(int *)(this + 0x128);
  local_14 = 0;
  if (*((char *)GEN_TOP((iVar4 + 0x229))) != '\0') {
    iVar6 = 0;
    do {
      fVar1 = param_1[3];
      local_14 = local_14 + 1;
      fVar2 = param_1[1];
      fVar3 = param_1[2];
      *((float *)GEN_TOP((iVar6 + 0x20 + iVar4))) = *((float *)GEN_TOP((iVar6 + 0x20 + iVar4))) + *param_1;
      *((float *)GEN_TOP((iVar6 + 0x24 + iVar4))) = *((float *)GEN_TOP((iVar6 + 0x24 + iVar4))) + fVar2;
      *((float *)GEN_TOP((iVar6 + 0x28 + iVar4))) = *((float *)GEN_TOP((iVar6 + 0x28 + iVar4))) + fVar3;
      *((float *)GEN_TOP((iVar6 + 0x2c + iVar4))) = *((float *)GEN_TOP((iVar6 + 0x2c + iVar4))) + fVar1;
      *((float *)GEN_TOP((iVar6 + 0x2c + *(int *)(this + 0x128)))) = (float)(float10)1;
      iVar4 = *(int *)(this + 0x128);
      iVar6 = iVar6 + 0x10;
    } while (local_14 < (int)(uint)*((byte *)GEN_TOP((iVar4 + 0x229))));
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG);
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf14 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d09c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd09c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_FWD,0x406);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
  if ((char)uVar1 == '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x32c) + 8))))(this + 0x32c GEN_EDX_ARG,param_1);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf15 */
GEN_LIB GEN_NOFRAME byte F_00d09cd0(void)
{
  GEN_ENTER(0xd09cd0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf21 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d09ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd09ce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  if (((((float10)*param_1 <= (float10)*(float *)(this + 0x13c)) &&
       ((float10)*(float *)(this + 300) <= (float10)*param_2)) &&
      ((float10)param_1[1] <= (float10)*(float *)(this + 0x140))) &&
     ((((float10)*(float *)(this + 0x130) <= (float10)param_2[1] &&
       ((float10)param_1[2] <= (float10)*(float *)(this + 0x144))) &&
      ((float10)*(float *)(this + 0x134) <= (float10)param_2[2])))) {
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d09d70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd09d70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x230) {
    return 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x128)));
  puVar3 = param_2;
  for (iVar1 = 0x8c; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x230;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf19 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d09db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd09db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d09dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd09dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d09dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd09dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  float fVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  iVar1 = *(int *)(this + 0x128);
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x32c) + 0x10))))(this + 0x32c);
  fVar2 = ((float)GEN_TOF(((float10)1 - extraout_ST0 * (float10)*((float *)GEN_TOP((iVar1 + 0x220))))));
  *param_1 = fVar2;
  if ((*((byte *)GEN_TOP((iVar1 + 0x228))) & 0x10) != 0) {
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x32c) + 0x10))))(this + 0x32c); fVar2 = extraout_ST0_00;
    *param_2 = ((float)GEN_TOF(((float10)1 -
                      extraout_ST0_00 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x224))))));
    return (uint)gen_fl2bits(fVar2);
  }
  *param_2 = fVar2;
  return (uint)param_2;
}

/* ref: FUN_00d09e50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d09e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd09e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  ushort uVar1;
  uint uVar2;
  float10 fVar3;
  
  if (param_1 == 0) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x22e)));
    fVar3 = (float10)1;
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x22c)));
    fVar3 = (float10)*(float *)&REFG(undefined, 0x1097254);
  }
  uVar2 = F_00cccd90((int)this + 0x32c GEN_EDX_FWD,(float)fVar3,(uint)uVar1 * 1000 >> 4);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d09ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd09ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x260, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x24c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x250);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x240);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf27 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d09f20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd09f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x128)));
  for (iVar1 = 0x8c; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d09f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd09f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  
  bVar5 = F_00d21f00((undefined *)this GEN_EDX_FWD,param_1);
  if (bVar5 != 0) {
    iVar6 = 0;
    if (*((char *)GEN_TOP((*(int *)(this + 0x128) + 0x229))) != '\0') {
      iVar7 = 0;
      do {
        iVar1 = *(int *)(this + 0x128);
        dVar2 = (double)*((float *)GEN_TOP((iVar7 + 0x28 + iVar1)));
        dVar3 = (double)*((float *)GEN_TOP((iVar7 + 0x24 + iVar1)));
        dVar4 = (double)*((float *)GEN_TOP((iVar7 + 0x20 + iVar1)));
        F_00c49386(param_1,((char *)REFP(0x11322ac)),iVar6,(int)(ulonglong)gen_d2bits(dVar4),
                 (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
                 (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
                 (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x10;
      } while (iVar6 < (int)(uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x229))));
    }
    F_00c49386(param_1,((char *)REFP(0x11322c8)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x220))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x220))))));
    F_00c49386(param_1,((char *)REFP(0x11322dc)),
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x224)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x224)))) >> 0x20
                  ));
    F_00c49386(param_1,((char *)REFP(0x11322ec)),*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x228))) & 0xf);
    F_00c49386(param_1,((char *)REFP(0x1132300)),*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x228))) >> 4 & 1);
    F_00c49386(param_1,((char *)REFP(0x1132314)),(uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x229))));
    F_00c49386(param_1,((char *)REFP(0x1132328)));
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf31 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d0a060(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd0a060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = ((char *)REFP(0x1132340));
  pbVar5 = ((byte *)GEN_TOP(param_2));
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d0a091: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d0a096;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d0a091;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d0a096: ;
  if (iVar3 == 0) {
    uVar4 = F_00d00d00(0,0);
    if (uVar4 != 0) {
      uVar4 = F_00c4c74c(uVar4);
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 2) * 0x10))) = (float)dVar7;
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24 + uVar4 * 0x10))) = (float)dVar7;
          pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
          if (pcVar2 != ((char *)GEN_TOP(0x0))) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 0x10))) = (float)dVar7;
            return 1;
          }
        }
      }
    }
  }
  else {
    pcVar2 = ((char *)REFP(0x113234c));
    pbVar5 = ((byte *)GEN_TOP(param_2));
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d0a166: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d0a16b;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d0a166;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d0a16b: ;
    if (iVar3 == 0) {
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x220))) = (float)dVar7;
        return 1;
      }
    }
    else {
      pcVar2 = ((char *)REFP(0x1132358));
      pbVar5 = ((byte *)GEN_TOP(param_2));
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00d0a1d0: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d0a1d5;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00d0a1d0;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d0a1d5: ;
      if (iVar3 == 0) {
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x224))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = ((char *)REFP(0x1132364));
        pbVar5 = ((byte *)GEN_TOP(param_2));
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d0a235: ;
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d0a23a;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d0a235;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d0a23a: ;
        if (iVar3 == 0) {
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x228)));
            *pbVar5 = *pbVar5 ^ ((char)uVar4 << 4 ^ *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x228)))) &
                                0x10;
            return 1;
          }
        }
        else {
          pcVar2 = ((char *)REFP(0x1132374));
          pbVar5 = ((byte *)GEN_TOP(param_2));
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d0a2a0: ;
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d0a2a5;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d0a2a0;
            pcVar2 = pcVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d0a2a5: ;
          if (iVar3 == 0) {
            uVar4 = F_00d00d00(0,0);
            if (uVar4 != 0) {
              uVar4 = F_00c4c74c(uVar4);
              pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x228)));
              *pbVar5 = *pbVar5 ^ (*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x228))) ^ (byte)uVar4) & 0xf
              ;
              return 1;
            }
          }
          else {
            pcVar2 = ((char *)REFP(0x1132384));
            pbVar5 = ((byte *)GEN_TOP(param_2));
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d0a310: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d0a315;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d0a310;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d0a315: ;
            if (iVar3 != 0) {
              bVar1 = F_00d22040(param_1 GEN_EDX_ARG,param_2);
              return bVar1;
            }
            uVar4 = F_00d00d00(0,0);
            if (uVar4 != 0) {
              uVar4 = F_00c4c74c(uVar4);
              *((char *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x229))) = (char)uVar4;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf22 */
GEN_LIB GEN_NOFRAME float GEN_THISCALL F_00d0a790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd0a790u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x80, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float10 fVar10;
  byte bVar11;
  int iVar12;
  undefined * pPVar13;
  float * pfVar14;
  int iVar15;
  undefined * pPVar16;
  float10 fVar17;
  float10 fVar18;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  *param_4 = 0;
  iVar12 = *(int *)(this + 0x128);
  (*(int *)(gen_frame + 0x0)) = 0;
  if (*((byte *)GEN_TOP((iVar12 + 0x229))) != 2 && -1 < (int)(*((byte *)GEN_TOP((iVar12 + 0x229))) - 2)) {
    fVar17 = (float10)*(float *)&REFG(undefined, 0x1097254);
    iVar15 = -0x134 - (int)this;
    pPVar16 = this + 0x154;
    do {
      fVar1 = param_1[3];
      fVar2 = param_1[2];
      fVar3 = param_1[1];
      fVar4 = param_2[3];
      fVar5 = param_2[2];
      fVar6 = param_2[1];
      fVar18 = GEN_X87(((float10)GEN_TOD(((fVar5 * *(float *)pPVar16 + *param_2 * *(float *)(pPVar16 - 8)) +
                        fVar6 * *(float *)(pPVar16 - 4)))));
      if ((GEN_ISNAN(fVar17) || GEN_ISNAN(fVar18)) == ((GEN_ISNAN(fVar17) || GEN_ISNAN(fVar18)) || fVar17 == fVar18)) {
        fVar9 = ((float)GEN_TOF((((float10)GEN_TOD((((*(float *)(pPVar16 + iVar12 + 8 + iVar15) - fVar2) *
                                   *(float *)pPVar16 +
                                  (*(float *)(pPVar16 + iVar12 + iVar15) - *param_1) *
                                  *(float *)(pPVar16 - 8)) +
                                 (*(float *)(pPVar16 + iVar12 + 4 + iVar15) - fVar3) *
                                 *(float *)(pPVar16 - 4)))) / fVar18)));
        fVar18 = (float10)fVar9;
        if ((!(fVar17 <= fVar18) == ((GEN_ISNAN(fVar18) || GEN_ISNAN(fVar17)) || fVar18 == fVar17)) &&
           (fVar10 = (float10)1,
           (GEN_ISNAN(fVar10) || GEN_ISNAN(fVar18)) || fVar10 < fVar18 == (fVar10 == fVar18))) {
          (*(int *)(gen_frame + 0x4)) = 3;
          *param_3 = fVar9 * *param_2 + *param_1;
          param_3[1] = fVar9 * fVar6 + fVar3;
          param_3[2] = fVar9 * fVar5 + fVar2;
          param_3[3] = fVar9 * fVar4 + fVar1;
          fVar1 = *param_3;
          fVar2 = param_3[1];
          fVar3 = param_3[2];
          fVar4 = param_3[3];
          pPVar13 = pPVar16 + *(int *)(this + 0x128) + iVar15;
          pfVar14 = ((float *)(gen_frame + 0x3c));
          do {
            fVar5 = *(float *)pPVar13;
            fVar6 = *(float *)(pPVar13 + 4);
            fVar7 = *(float *)(pPVar13 + 8);
            fVar8 = *(float *)(pPVar13 + 0xc);
            pPVar13 = pPVar13 + 0x10;
            (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) - 1;
            *pfVar14 = fVar5 - fVar1;
            pfVar14[1] = fVar6 - fVar2;
            pfVar14[2] = fVar7 - fVar3;
            pfVar14[3] = fVar8 - fVar4;
            pfVar14 = pfVar14 + 4;
          } while ((*(int *)(gen_frame + 0x4)) != 0);
          F_01052f50(((float *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0x2c)));
          bVar11 = F_010530d0(((float *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0x2c)));
          if (bVar11 != 0) {
            return fVar9;
          }
          fVar17 = (float10)*(float *)&REFG(undefined, 0x1097254);
        }
      }
      iVar12 = *(int *)(this + 0x128);
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      pPVar16 = pPVar16 + 0x10;
    } while ((*(int *)(gen_frame + 0x0)) < (int)(*((byte *)GEN_TOP((iVar12 + 0x229))) - 2));
  }
  return REFG(float, 0x1090708);
}

/* ref: FUN_00d0ab20 */
GEN_LIB GEN_NOFRAME float F_00d0ab20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd0ab20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x27c, 4);
  undefined4 * puVar1;
  undefined8 * puVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined4 uVar8;
  float * pfVar9;
  float * pfVar10;
  undefined4 * puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  float fVar20;
  float fVar21;
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  float fVar22;
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar18 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  
  (*(uint *)(gen_frame + 0x268)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x26c);
  uVar12 = (uint)*((byte *)GEN_TOP((param_1 + 0x229)));
  if (uVar12 != 0) {
    pfVar10 = ((float *)(gen_frame + 0x64));
    iVar14 = param_1 + 0x20;
    (*(uint *)(gen_frame + 0x14)) = uVar12;
    do {
      pfVar9 = ((float *)GEN_TOP(F_00c34320(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x3c)),iVar14)));
      fVar27 = pfVar9[1];
      *pfVar10 = *pfVar9;
      fVar21 = pfVar9[2];
      fVar20 = pfVar9[3];
      pfVar10[1] = fVar27;
      pfVar10[2] = fVar21;
      pfVar10[3] = fVar20;
      iVar14 = iVar14 + 0x10;
      pfVar10 = pfVar10 + 4;
      (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) - 1;
    } while ((*(uint *)(gen_frame + 0x14)) != 0);
    if (uVar12 != 0) {
      fVar27 = *param_3;
      fVar21 = param_3[1];
      fVar20 = param_3[2];
      fVar22 = param_3[3];
      pfVar10 = ((float *)(gen_frame + 0x64)) + 2;
      uVar13 = uVar12;
      do {
        fVar28 = pfVar10[-1];
        fVar3 = *pfVar10;
        fVar4 = pfVar10[1];
        uVar13 = uVar13 - 1;
        (*(float *)(gen_frame + 0x4c)) = pfVar10[-2] - fVar27;
        (*(float *)(gen_frame + 0x50)) = fVar28 - fVar21;
        (*(float *)(gen_frame + 0x54)) = fVar3 - fVar20;
        (*(float *)(gen_frame + 0x58)) = fVar4 - fVar22;
        pfVar10[-2] = pfVar10[-2] - fVar27;
        pfVar10[-1] = fVar28 - fVar21;
        *pfVar10 = fVar3 - fVar20;
        pfVar10[1] = fVar4 - fVar22;
        pfVar10 = pfVar10 + 4;
      } while (uVar13 != 0);
    }
  }
  (*(float *)(gen_frame + 0x2c)) = ((float *)(gen_frame + 0x64))[0];
  (*(float *)(gen_frame + 0x30)) = ((float *)(gen_frame + 0x64))[1];
  (*(float *)(gen_frame + 0x34)) = ((float *)(gen_frame + 0x64))[2];
  (*(float *)(gen_frame + 0x38)) = ((float *)(gen_frame + 0x64))[3];
  (*(float *)(gen_frame + 0x1c)) = ((float *)(gen_frame + 0x64))[0];
  (*(float *)(gen_frame + 0x20)) = ((float *)(gen_frame + 0x64))[1];
  (*(float *)(gen_frame + 0x24)) = ((float *)(gen_frame + 0x64))[2];
  (*(float *)(gen_frame + 0x28)) = ((float *)(gen_frame + 0x64))[3];
  if (1 < uVar12) {
    puVar11 = ((undefined4 *)(gen_frame + 0x7c));
    iVar14 = uVar12 - 1;
    do {
      puVar1 = puVar11 + 1;
      uVar5 = *puVar11;
      puVar2 = (undefined8 *)(puVar11 - 2);
      puVar11 = puVar11 + 4;
      iVar14 = iVar14 - 1;
      (*(undefined4 *)((char *)&auVar6 + 4)) = uVar5;
      (*(undefined4 *)((char *)&auVar6 + 0)) = uVar5;
      (*(undefined4 *)((char *)&auVar6 + 8)) = *puVar1;
      (*(undefined8 *)((char *)&auVar17 + 8)) = (*(undefined8 *)((char *)&auVar6 + 4));
      (*(undefined8 *)((char *)&auVar17 + 0)) = *puVar2;
      (*(undefined4 *)((char *)&auVar30 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x30)));
      (*(undefined4 *)((char *)&auVar30 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x2c)));
      (*(undefined4 *)((char *)&auVar7 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x34)));
      (*(undefined4 *)((char *)&auVar7 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x34)));
      (*(undefined4 *)((char *)&auVar7 + 8)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x38)));
      (*(undefined8 *)((char *)&auVar30 + 8)) = (*(undefined8 *)((char *)&auVar7 + 4));
      (*(undefined4 *)((char *)&auVar29 + 8)) = uVar5;
      (*(undefined8 *)((char *)&auVar29 + 0)) = *puVar2;
      (*(undefined4 *)((char *)&auVar29 + 12)) = *puVar1;
      gen_minps(&(auVar30), &(auVar29), &(auVar30));
      memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x3c))), &(auVar30), sizeof(auVar30) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x3c))) ? sizeof(auVar30) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x3c))));
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 0)) = (*(undefined4 *)((char *)&auVar30 + 0));
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 4)) = (*(undefined4 *)((char *)&auVar30 + 4));
      (*(float *)(gen_frame + 0x2c)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 0)));
      (*(float *)(gen_frame + 0x44)) = (*(float *)((char *)&auVar30 + 8));
      (*(float *)(gen_frame + 0x30)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 4)));
      (*(float *)(gen_frame + 0x48)) = (*(float *)((char *)&auVar30 + 12));
      fVar27 = (*(float *)(gen_frame + 0x48));
      (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x44));
      (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x48));
      (*(undefined4 *)((char *)&auVar24 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x24)));
      (*(undefined4 *)((char *)&auVar24 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c)));
      (*(undefined4 *)((char *)&auVar24 + 8)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x24)));
      (*(undefined4 *)((char *)&auVar24 + 12)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x28)));
      (*(undefined8 *)((char *)&auVar23 + 8)) = (*(undefined8 *)((char *)&auVar24 + 8));
      (*(undefined4 *)((char *)&auVar23 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x20)));
      (*(undefined4 *)((char *)&auVar23 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c)));
      gen_maxps(&(auVar17), &(auVar17), &(auVar23));
      memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x3c))), &(auVar17), sizeof(auVar17) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x3c))) ? sizeof(auVar17) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x3c))));
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 0)) = (*(undefined4 *)((char *)&auVar17 + 0));
      (*(float *)(gen_frame + 0x4c)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 0)));
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 0)));
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 4)) = (*(undefined4 *)((char *)&auVar17 + 4));
      (*(float *)(gen_frame + 0x50)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 4)));
      (*(float *)(gen_frame + 0x20)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 4)));
      (*(float *)(gen_frame + 0x44)) = (*(float *)((char *)&auVar17 + 8));
      (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0x44));
      (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x44));
      (*(float *)(gen_frame + 0x48)) = (*(float *)((char *)&auVar17 + 12));
      (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x48));
      (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x48));
    } while (iVar14 != 0);
  }
  (*(float *)((char *)&auVar26 + 0)) = (*(float *)(gen_frame + 0x1c)) - (*(float *)(gen_frame + 0x2c));
  fVar27 = (*(float *)(gen_frame + 0x20)) - (*(float *)(gen_frame + 0x30));
  (*(float *)((char *)&auVar26 + 8)) = (*(float *)(gen_frame + 0x24)) - (*(float *)(gen_frame + 0x34));
  (*(float *)((char *)&auVar26 + 12)) = (*(float *)(gen_frame + 0x28)) - (*(float *)(gen_frame + 0x38));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 0)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar26 + 0)));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 4)) = (undefined4)gen_fl2bits(fVar27);
  (*(float *)(gen_frame + 0x44)) = (*(float *)((char *)&auVar26 + 8));
  (*(float *)(gen_frame + 0x48)) = (*(float *)((char *)&auVar26 + 12));
  (*(float *)(gen_frame + 0x4c)) = (*(float *)((char *)&auVar26 + 0));
  (*(float *)((char *)&auVar19 + 0)) = (*(float *)(gen_frame + 0x1c)) + (*(float *)(gen_frame + 0x2c));
  fVar20 = (*(float *)(gen_frame + 0x20)) + (*(float *)(gen_frame + 0x30));
  (*(float *)((char *)&auVar19 + 8)) = (*(float *)(gen_frame + 0x24)) + (*(float *)(gen_frame + 0x34));
  (*(float *)((char *)&auVar19 + 12)) = (*(float *)(gen_frame + 0x28)) + (*(float *)(gen_frame + 0x38));
  (*(float *)(gen_frame + 0x50)) = fVar27;
  (*(float *)(gen_frame + 0x54)) = (*(float *)((char *)&auVar26 + 8));
  (*(float *)(gen_frame + 0x58)) = (*(float *)((char *)&auVar26 + 12));
  (*(undefined4 *)((char *)&auVar26 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar26 + 8)));
  (*(undefined8 *)((char *)&auVar25 + 8)) = (*(undefined8 *)((char *)&auVar26 + 8));
  (*(undefined8 *)((char *)&auVar25 + 0)) = ((undefined1 *)(gen_frame + 0x3c));
  gen_divps(&(auVar17), &(auVar25), &(*(gen_v16 *)&REFG(undefined, 0x11323f0)));
  memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x3c))), &(auVar17), sizeof(auVar17) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x3c))) ? sizeof(auVar17) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x3c))));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 0)) = (*(undefined4 *)((char *)&auVar17 + 0));
  uVar5 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 0));
  (*(float *)(gen_frame + 0x4c)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 0)));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 4)) = (*(undefined4 *)((char *)&auVar17 + 4));
  uVar8 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 4));
  (*(float *)(gen_frame + 0x50)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 4)));
  (*(float *)(gen_frame + 0x44)) = (*(float *)((char *)&auVar17 + 8));
  fVar27 = (*(float *)(gen_frame + 0x44));
  (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0x44));
  (*(float *)(gen_frame + 0x48)) = (*(float *)((char *)&auVar17 + 12));
  fVar21 = (*(float *)(gen_frame + 0x48));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 0)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar19 + 0)));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 4)) = (undefined4)gen_fl2bits(fVar20);
  (*(float *)(gen_frame + 0x44)) = (*(float *)((char *)&auVar19 + 8));
  (*(float *)(gen_frame + 0x48)) = (*(float *)((char *)&auVar19 + 12));
  (*(float *)(gen_frame + 0x58)) = fVar21;
  (*(float *)(gen_frame + 0x4c)) = (*(float *)((char *)&auVar19 + 0));
  (*(float *)(gen_frame + 0x50)) = fVar20;
  (*(float *)(gen_frame + 0x54)) = (*(float *)((char *)&auVar19 + 8));
  (*(float *)(gen_frame + 0x58)) = (*(float *)((char *)&auVar19 + 12));
  fVar28 = gen_bits2f(uVar8) * gen_bits2f(uVar8);
  fVar27 = fVar27 * fVar27;
  (*(float *)(gen_frame + 0x0)) = (fVar27 + fVar28) + fVar28;
  (*(float *)(gen_frame + 0x4)) = (fVar27 + fVar27) + fVar28;
  (*(float *)(gen_frame + 0x8)) = (fVar27 + fVar21 * fVar21) + fVar28;
  (*(undefined4 *)((char *)&auVar19 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar19 + 8)));
  (*(undefined8 *)((char *)&auVar18 + 8)) = (*(undefined8 *)((char *)&auVar19 + 8));
  (*(undefined8 *)((char *)&auVar18 + 0)) = ((undefined1 *)(gen_frame + 0x3c));
  gen_divps(&(auVar17), &(auVar18), &(*(gen_v16 *)&REFG(undefined, 0x11323f0)));
  memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x3c))), &(auVar17), sizeof(auVar17) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x3c))) ? sizeof(auVar17) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x3c))));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 0)) = (*(undefined4 *)((char *)&auVar17 + 0));
  (*(float *)(gen_frame + 0x4c)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 0)));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 4)) = (*(undefined4 *)((char *)&auVar17 + 4));
  (*(float *)(gen_frame + 0x50)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 4)));
  (*(float *)(gen_frame + 0x44)) = (*(float *)((char *)&auVar17 + 8));
  (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0x44));
  (*(float *)(gen_frame + 0x48)) = (*(float *)((char *)&auVar17 + 12));
  (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x48));
  fVar21 = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 4))) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 4)));
  fVar20 = (*(float *)(gen_frame + 0x44)) * (*(float *)(gen_frame + 0x44));
  fVar22 = GEN_X87(SQRT((fVar20 + gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 0))) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 0)))) + fVar21));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 0)) = (undefined4)gen_fl2bits(fVar22);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x3c)) + 4)) = (undefined4)gen_fl2bits((fVar20 + fVar21) + fVar21);
  (*(float *)(gen_frame + 0x44)) = (fVar20 + fVar20) + fVar21;
  (*(float *)(gen_frame + 0x48)) = (fVar20 + (*(float *)(gen_frame + 0x48)) * (*(float *)(gen_frame + 0x48))) + fVar21;
  fVar15 = (float10)fVar22;
  fVar16 = ((float10)GEN_TOD(GEN_X87(SQRT((fVar27 + gen_bits2f(uVar5) * gen_bits2f(uVar5)) + fVar28))));
  if (fVar15 <= fVar16 && ((!GEN_ISNAN(fVar16) && !GEN_ISNAN(fVar15)) && fVar16 != fVar15)) {
    return *(float *)&REFG(undefined, 0x1097254);
  }
  return GEN_X87((float)(fVar15 - fVar16));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf23 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d0b0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd0b0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL(0x25c, 4);
  byte bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  (*(uint *)(gen_frame + 0x248)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24c);
  iVar2 = *(int *)(this + 0x128);
  (*(byte *)(gen_frame + 0x43)) = (*((byte *)GEN_TOP((iVar2 + 0x228))) & 1) == 0;
  if ((bool)(*(byte *)(gen_frame + 0x43))) {
    F_01053470(iVar2 + 0x20,iVar2 + 0x30,param_1,((float *)(gen_frame + 0x44)));
  }
  if (((*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x228))) & 2) == 0) &&
     ((*(int *)(gen_frame + 0x38)) = (int)(*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x229))) - 1) / 2, 0 < (*(int *)(gen_frame + 0x38)))) {
    (*(float *)(gen_frame + 0x3c)) = 0.0;
    do {
      F_01053470((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 0x20 + *(int *)(this + 0x128),
                   (int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 0x40 + *(int *)(this + 0x128),param_1,
                   ((float *)(gen_frame + 0x44)) + (uint)(*(byte *)(gen_frame + 0x43)) * 4);
      (*(float *)(gen_frame + 0x3c)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 0x20);
      (*(byte *)(gen_frame + 0x43)) = (*(byte *)(gen_frame + 0x43)) + 1;
      (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) - 1;
    } while ((*(int *)(gen_frame + 0x38)) != 0);
  }
  iVar2 = *(int *)(this + 0x128);
  if ((*((byte *)GEN_TOP((iVar2 + 0x228))) & 4) == 0) {
    iVar2 = iVar2 + (uint)*((byte *)GEN_TOP((iVar2 + 0x229))) * 0x10;
    F_01053470(iVar2,iVar2 + 0x10,param_1,((float *)(gen_frame + 0x44)) + (uint)(*(byte *)(gen_frame + 0x43)) * 4);
    (*(byte *)(gen_frame + 0x43)) = (*(byte *)(gen_frame + 0x43)) + 1;
  }
  if (((*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x228))) & 8) == 0) &&
     ((*(int *)(gen_frame + 0x38)) = (int)(*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x229))) - 2) / 2, 0 < (*(int *)(gen_frame + 0x38)))) {
    (*(float *)(gen_frame + 0x3c)) = 0.0;
    do {
      F_01053470(*(int *)(this + 0x128) + (int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 0x30,
                   *(int *)(this + 0x128) + (int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 0x50,param_1,
                   ((float *)(gen_frame + 0x44)) + (uint)(*(byte *)(gen_frame + 0x43)) * 4);
      (*(float *)(gen_frame + 0x3c)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 0x20);
      (*(byte *)(gen_frame + 0x43)) = (*(byte *)(gen_frame + 0x43)) + 1;
      (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) - 1;
    } while ((*(int *)(gen_frame + 0x38)) != 0);
  }
  bVar1 = 0;
  if ((*(byte *)(gen_frame + 0x43)) != 0) {
    iVar2 = 0;
    (*(float *)(gen_frame + 0x3c)) = *(float *)&REFG(undefined, 0x1097254);
    if ((*(byte *)(gen_frame + 0x43)) != 0) {
      do {
        fVar3 = (((float *)(gen_frame + 0x44))[(int)(iVar2 * 4 + 1)] - param_1[1]) * (((float *)(gen_frame + 0x44))[(int)(iVar2 * 4 + 1)] - param_1[1]);
        fVar4 = (((float *)(gen_frame + 0x44))[(int)(iVar2 * 4 + 2)] - param_1[2]) * (((float *)(gen_frame + 0x44))[(int)(iVar2 * 4 + 2)] - param_1[2]);
        fVar5 = SQRT((fVar4 + (((float *)(gen_frame + 0x44))[(int)(iVar2 * 4)] - *param_1) * (((float *)(gen_frame + 0x44))[(int)(iVar2 * 4)] - *param_1))
                     + fVar3);
        (*(float *)(gen_frame + 0x0)) = (fVar4 + fVar3) + fVar3;
        (*(float *)(gen_frame + 0x4)) = (fVar4 + fVar4) + fVar3;
        (*(float *)(gen_frame + 0x8)) = (fVar4 + (((float *)(gen_frame + 0x44))[(int)(iVar2 * 4 + 3)] - param_1[3]) *
                              (((float *)(gen_frame + 0x44))[(int)(iVar2 * 4 + 3)] - param_1[3])) + fVar3;
        if (iVar2 == 0) {
          *param_2 = ((float *)(gen_frame + 0x44))[0];
          param_2[1] = ((float *)(gen_frame + 0x44))[1];
          param_2[2] = ((float *)(gen_frame + 0x44))[2];
          param_2[3] = ((float *)(gen_frame + 0x44))[3];
          (*(float *)(gen_frame + 0x3c)) = fVar5;
        }
        else if (!((float10)(*(float *)(gen_frame + 0x3c)) <= (float10)fVar5) !=
                 (GEN_ISNAN((float10)fVar5) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x3c))))) {
          *param_2 = ((float *)(gen_frame + 0x44))[(int)(iVar2 * 4)];
          param_2[1] = ((float *)(gen_frame + 0x44))[(int)(iVar2 * 4 + 1)];
          fVar3 = ((float *)(gen_frame + 0x44))[(int)(iVar2 * 4 + 3)];
          param_2[2] = ((float *)(gen_frame + 0x44))[(int)(iVar2 * 4 + 2)];
          param_2[3] = fVar3;
          (*(float *)(gen_frame + 0x3c)) = fVar5;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)(*(byte *)(gen_frame + 0x43)));
    }
    bVar1 = 1;
  }
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d0b3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd0b3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00d22da0(this GEN_EDX_FWD,param_1,0x230)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x8c; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x8c);
  }
  F_00d0c290(*(undefined4 *)(this + 0x128) GEN_EDX_ARG,(uint)puVar1);
  return (uint)(puVar1 + 0x8c);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf28 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d0b450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd0b450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x1c8, 8, 4);
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  ulonglong uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1c0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c4));
  uVar3 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x1c0;
    uVar6 = F_00427d90();
    iVar1 = *(int *)(this + 0x128);
    iVar5 = 0;
    (*(ulonglong *)(gen_frame + 0x8)) = uVar6;
    if (*((char *)GEN_TOP((iVar1 + 0x229))) != '\0') {
      puVar2 = ((undefined4 *)GEN_TOP((iVar1 + 0x24)));
      puVar4 = ((undefined4 *)(gen_frame + 0x3c));
      do {
        iVar5 = iVar5 + 1;
        puVar4[-1] = puVar2[-1];
        *puVar4 = *puVar2;
        puVar4[1] = puVar2[1];
        puVar2 = puVar2 + 4;
        puVar4 = puVar4 + 3;
      } while (iVar5 < (int)(uint)*((byte *)GEN_TOP((iVar1 + 0x229))));
    }
    (*(undefined1 *)(gen_frame + 0x1b8)) = *((undefined1 *)GEN_TOP((iVar1 + 0x229)));
    F_00d0bfe0(&(*(undefined2 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)));
    uVar3 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)),0x1c0);
  }
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf29 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d0b540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(HWND param_1, unsigned int gen_a1), GEN_P(HDC param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd0b540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(HWND param_1 = (HWND)gen_a1;)
  GEN_PIN(HDC param_2 = (HDC)gen_a2;)
  GEN_FRAME_DECL_GS(0x368, 8, 4);
  char cVar1;
  HGDIOBJ pvVar2;
  undefined * pHVar3;
  int * piVar4;
  uint uVar5;
  float * pfVar6;
  char * pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x360)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x364));
  (*(undefined * PTR32 *)(gen_frame + 0x74)) = this;
  pvVar2 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x54)) = pvVar2;
  pvVar2 = gen_imp_SelectObject(param_2,pvVar2);
  (*(HGDIOBJ *)(gen_frame + 0x60)) = pvVar2;
  pHVar3 = gen_imp_CreatePen(0,2,0x8000);
  (*(undefined * PTR32 *)(gen_frame + 0x5c)) = pHVar3;
  pvVar2 = gen_imp_SelectObject(param_2,pHVar3);
  (*(HGDIOBJ *)(gen_frame + 0x50)) = pvVar2;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0xd0)));
  iVar11 = (*(tagRECT *)(gen_frame + 0xd0)).right / 2;
  iVar10 = (*(tagRECT *)(gen_frame + 0xd0)).bottom / 2;
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x1c) + 0xc))) + 0x98))))
                            (*((int * PTR32 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x1c) + 0xc))) GEN_EDX_ARG)));
  (*(int * PTR32 *)(gen_frame + 0x68)) = piVar4;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x5c))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x80)));
  if ((char)uVar5 != '\0') {
    (*(float * PTR32 *)(gen_frame + 0x70)) = ((float *)(gen_frame + 0xe0));
    (*(float * PTR32 *)(gen_frame + 0x7c)) = ((float *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x128) + 0x20)));
    (*(int *)(gen_frame + 0x78)) = 0x20;
    do {
      pfVar6 = ((float *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x40)),(*(float * PTR32 *)(gen_frame + 0x7c)))));
      (*(float * PTR32 *)(gen_frame + 0x7c)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x7c)) + 0x10)));
      *(*(float * PTR32 *)(gen_frame + 0x70)) = *pfVar6;
      (*(float * PTR32 *)(gen_frame + 0x70))[1] = pfVar6[1];
      fVar12 = pfVar6[3];
      (*(float * PTR32 *)(gen_frame + 0x70))[2] = pfVar6[2];
      (*(float * PTR32 *)(gen_frame + 0x70))[3] = fVar12;
      iVar8 = (*(int *)(gen_frame + 0x78)) - 1;
      (*(int *)(gen_frame + 0x78)) = iVar8;
      (*(float * PTR32 *)(gen_frame + 0x70)) = (*(float * PTR32 *)(gen_frame + 0x70)) + 4;
    } while (iVar8 != 0);
    iVar8 = iVar10 - (int)((double)((float *)(gen_frame + 0xe0))[2] * *(double *)&REFG(double, 0x1132488));
    (*(float * PTR32 *)(gen_frame + 0x70)) = ((float *)GEN_TOP(iVar8));
    iVar9 = iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)((float *)(gen_frame + 0xe0))[0]);
    (*(int *)(gen_frame + 0x64)) = iVar9;
    gen_imp_MoveToEx(param_2,iVar9,iVar8,(LPPOINT)0x0);
    iVar8 = iVar10 - (int)((double)(*(float *)(gen_frame + 0xf8)) * *(double *)&REFG(double, 0x1132488));
    (*(int *)(gen_frame + 0x6c)) = iVar8;
    iVar9 = iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xf0)));
    (*(int *)(gen_frame + 0x58)) = iVar9;
    gen_imp_LineTo(param_2,iVar9,iVar8);
    (*(float * PTR32 *)(gen_frame + 0x7c)) = ((float *)GEN_TOP(((*((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x128) + 0x229))) + 1) / 2)));
    gen_imp_MoveToEx(param_2,(*(int *)(gen_frame + 0x64)),(int)(*(float * PTR32 *)(gen_frame + 0x70)),(LPPOINT)0x0);
    if (1 < (int)(*(float * PTR32 *)(gen_frame + 0x7c))) {
      iVar8 = (int)(*(float * PTR32 *)(gen_frame + 0x7c)) - 1;
      (*(float * PTR32 *)(gen_frame + 0x7c)) = ((float *)(gen_frame + 0x100));
      (*(int *)(gen_frame + 0x78)) = iVar8;
      do {
        gen_imp_LineTo(param_2,iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(*(float * PTR32 *)(gen_frame + 0x7c))),
               iVar10 - (int)((double)(*(float * PTR32 *)(gen_frame + 0x7c))[2] * *(double *)&REFG(double, 0x1132488)));
        (*(float * PTR32 *)(gen_frame + 0x7c)) = (*(float * PTR32 *)(gen_frame + 0x7c)) + 8;
        iVar8 = (*(int *)(gen_frame + 0x78)) - 1;
        (*(int *)(gen_frame + 0x78)) = iVar8;
      } while (iVar8 != 0);
    }
    uVar5 = (uint)*((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x128) + 0x229)));
    (*(int *)(gen_frame + 0x78)) = uVar5 * 0x10;
    gen_imp_MoveToEx(param_2,iVar11 - (int)(*(double *)&REFG(double, 0x1132488) *
                                   ((double)GEN_TOD(gen_bits2f((&(*(tagRECT *)(gen_frame + 0xd0)))[uVar5].left)))),
             iVar10 - (int)((double)((float *)(gen_frame + 0xe0))[(int)(uVar5 * 4 - 2)] * *(double *)&REFG(double, 0x1132488)),
             (LPPOINT)0x0);
    iVar8 = *((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x128) + 0x229))) - 2;
    (*(int *)(gen_frame + 0x78)) = iVar8 * 0x10;
    gen_imp_LineTo(param_2,iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)((float *)(gen_frame + 0xe0))[(int)(iVar8 * 4)]),
           iVar10 - (int)((double)((float *)(gen_frame + 0xe0))[(int)(iVar8 * 4 + 2)] * *(double *)&REFG(double, 0x1132488)));
    (*(float * PTR32 *)(gen_frame + 0x7c)) = ((float *)GEN_TOP((uint)(*((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x128) + 0x229))) >> 1)));
    gen_imp_MoveToEx(param_2,(*(int *)(gen_frame + 0x58)),(*(int *)(gen_frame + 0x6c)),(LPPOINT)0x0);
    if (1 < (int)(*(float * PTR32 *)(gen_frame + 0x7c))) {
      iVar8 = (int)(*(float * PTR32 *)(gen_frame + 0x7c)) - 1;
      (*(float * PTR32 *)(gen_frame + 0x7c)) = ((float *)(gen_frame + 0x110));
      (*(int *)(gen_frame + 0x6c)) = iVar8;
      do {
        gen_imp_LineTo(param_2,iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(*(float * PTR32 *)(gen_frame + 0x7c))),
               iVar10 - (int)((double)(*(float * PTR32 *)(gen_frame + 0x7c))[2] * *(double *)&REFG(double, 0x1132488)));
        (*(float * PTR32 *)(gen_frame + 0x7c)) = (*(float * PTR32 *)(gen_frame + 0x7c)) + 8;
        iVar8 = (*(int *)(gen_frame + 0x6c)) - 1;
        (*(int *)(gen_frame + 0x6c)) = iVar8;
      } while (iVar8 != 0);
    }
    F_004ec420(((undefined1 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x68)) + 0x30))))((*(int * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc0)));
    fVar12 = F_00d0ab20(*(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x128),((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0xc0)));
    (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar12)));
    F_00c472af(((char *)(gen_frame + 0x2e0)),0x80,((char *)REFP(0x11322a0)),(int)(ulonglong)gen_d2bits((double)fVar12),
               (int)((ulonglong)gen_d2bits((double)fVar12) >> 0x20));
    pcVar7 = ((char *)(gen_frame + 0x2e0));
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    gen_imp_TextOutA(param_2,(*(int *)(gen_frame + 0x64)),(int)(*(float * PTR32 *)(gen_frame + 0x70)),((char *)(gen_frame + 0x2e0)),(int)pcVar7 - (int)(((char *)(gen_frame + 0x2e0)) + 1));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x50)));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x60)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x5c)));
    uVar5 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x54)));
  }
  return uVar5;
}

/* ref: FUN_00d0b9e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d0b9e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd0b9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_FRAME_DECL(0x260, 0);
  int * this;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * pPVar4;
  
  (*(uint *)(gen_frame + 0x24c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x250);
  F_00d22580(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[33])REFP(0x1132404));
  F_00cccb10(param_1 + 0x32c GEN_EDX_ARG,(float)(float10)1);
  *(uint *)(param_1 + 0xb0) =
       *(uint *)(param_1 + 0xb0) ^ ((uint)param_5 << 4 ^ *(uint *)(param_1 + 0xb0)) & 0x10;
  if (param_5 == 0) {
    *(undefined4 * PTR32 *)(param_1 + 0x128) = param_2;
  }
  else {
    *(undefined * PTR32 *)(param_1 + 0x128) = param_1 + 0x360;
    puVar3 = param_2;
    pPVar4 = param_1 + 0x360;
    for (iVar2 = 0x8c; iVar2 != 0; iVar2 = iVar2 - 1) {
      *(undefined4 *)pPVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pPVar4 = pPVar4 + 4;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x128);
  F_00d09690(param_1 GEN_EDX_ARG);
  F_00d20fe0(param_1 GEN_EDX_ARG,~(*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 4))) >> 5) & 1);
  this = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xe4))))(this GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x68))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x240);
  }
  F_00d0b450(param_1 GEN_EDX_ARG,0x401);
  return (uint)param_1;
}

/* ref: FUN_00d0bb10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d0bb10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd0bb10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x260, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x24c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x250);
  F_00d22720(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1132404));
  F_00cccb10((int)this + 0x32c GEN_EDX_ARG,(float)(float10)1);
  *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) | 0x10;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x128))) = ((undefined *)GEN_TOP(((int)this + 0x360)));
  F_00d0c210(((undefined *)GEN_TOP(((int)this + 0x360))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP(((int)this + 0x128)));
  this_00 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x240);
  }
  F_00d0b450(this GEN_EDX_ARG,0x401);
  return (uint)this;
}

/* ref: FUN_00d0bbf0 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00d0bbf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd0bbf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((in_ecx + param_2 * 4)));
}

/* ref: FUN_00d0bdf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d0bdf0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd0bdf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = param_3[2];
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = in_ecx[3];
  fVar5 = in_ecx[1];
  fVar6 = in_ecx[2];
  fVar7 = *in_ecx;
  *param_2 = fVar5 * fVar1 - fVar6 * fVar3;
  param_2[1] = fVar6 * fVar2 - fVar7 * fVar1;
  param_2[2] = fVar7 * fVar3 - fVar5 * fVar2;
  param_2[3] = fVar4;
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf16 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d0beb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd0beb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf17 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d0bec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd0bec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf32 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d0bed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd0bed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d0bee0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd0bee0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_3)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),local_c);
  return uVar1;
}

/* ref: FUN_00d0bf30 */
GEN_LIB GEN_FRAME ushort F_00d0bf30(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd0bf30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return (ushort)param_1;
}

/* ref: FUN_00d0bf40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d0bf40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd0bf40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *param_1 = *(undefined2 *)this;
  param_1[1] = *((undefined2 *)GEN_TOP(((int)this + 2)));
  *(undefined4 *)(param_1 + 4) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined4 *)(param_1 + 6) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *(undefined4 *)(param_1 + 8) = 0;
  return (uint)param_1;
}

/* ref: FUN_00d0bf70 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d0bf70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd0bf70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *param_1 = *(undefined2 *)this;
  param_1[1] = *((undefined2 *)GEN_TOP(((int)this + 2)));
  *(undefined4 *)(param_1 + 4) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined4 *)(param_1 + 6) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  *(undefined4 *)(param_1 + 0xc) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *(undefined4 *)(param_1 + 0xe) = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  *(undefined4 *)(param_1 + 0x10) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  *(undefined4 *)(param_1 + 0x16) = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  *(undefined4 *)(param_1 + 0x14) = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  param_1[0x18] = *((undefined2 *)GEN_TOP(((int)this + 0x30)));
  param_1[0x19] = *((undefined2 *)GEN_TOP(((int)this + 0x32)));
  *(undefined1 *)(param_1 + 0x1a) = *((undefined1 *)GEN_TOP(((int)this + 0x34)));
  return 0;
}

/* ref: FUN_00d0bfe0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d0bfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd0bfe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *param_1 = *(undefined2 *)this;
  param_1[1] = *((undefined2 *)GEN_TOP(((int)this + 2)));
  *(undefined4 *)(param_1 + 4) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined4 *)(param_1 + 6) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  *(undefined4 *)(param_1 + 0xc) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *(undefined4 *)(param_1 + 0xe) = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  *(undefined4 *)(param_1 + 0x10) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  *(undefined4 *)(param_1 + 0x16) = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  *(undefined4 *)(param_1 + 0x14) = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  param_1[0x18] = *((undefined2 *)GEN_TOP(((int)this + 0x30)));
  param_1[0x19] = *((undefined2 *)GEN_TOP(((int)this + 0x32)));
  *(undefined1 *)(param_1 + 0x1a) = *((undefined1 *)GEN_TOP(((int)this + 0x34)));
  *(undefined1 *)(param_1 + 0xdc) = *((undefined1 *)GEN_TOP(((int)this + 0x1b8)));
  iVar1 = 0x20;
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x40)));
  do {
    *puVar2 = *((undefined4 *)GEN_TOP((((int)this - (int)param_1) + (int)puVar2)));
    iVar1 = iVar1 - 1;
    puVar2[1] = puVar3[-1];
    puVar2[2] = *puVar3;
    puVar2 = puVar2 + 3;
    puVar3 = puVar3 + 3;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00d0c080 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d0c080(GEN_P(ushort * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd0c080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  byte bVar2;
  uint * puVar3;
  int iVar4;
  
  *((ushort *)GEN_TOP(param_2)) = *param_1 << 8 | *param_1 >> 8;
  *((char *)GEN_TOP((param_2 + 2))) = (char)param_1[1];
  *((undefined1 *)GEN_TOP((param_2 + 3))) = *((undefined1 *)GEN_TOP(((int)param_1 + 3)));
  *((byte *)GEN_TOP((param_2 + 4))) = *((byte *)GEN_TOP((param_2 + 4))) ^ (*((byte *)GEN_TOP((param_2 + 4))) ^ (byte)param_1[2]) & 1;
  bVar2 = ((byte)param_1[2] ^ *((byte *)GEN_TOP((param_2 + 4)))) & 2 ^ *((byte *)GEN_TOP((param_2 + 4)));
  *((byte *)GEN_TOP((param_2 + 4))) = bVar2;
  bVar2 = ((byte)param_1[2] ^ bVar2) & 4 ^ bVar2;
  *((byte *)GEN_TOP((param_2 + 4))) = bVar2;
  bVar2 = ((byte)param_1[2] ^ bVar2) & 8 ^ bVar2;
  *((byte *)GEN_TOP((param_2 + 4))) = bVar2;
  bVar2 = ((byte)param_1[2] ^ bVar2) & 0x10 ^ bVar2;
  *((byte *)GEN_TOP((param_2 + 4))) = bVar2;
  bVar2 = ((byte)param_1[2] ^ bVar2) & 0x20 ^ bVar2;
  *((byte *)GEN_TOP((param_2 + 4))) = bVar2;
  bVar2 = ((byte)param_1[2] ^ bVar2) & 0x40 ^ bVar2;
  *((byte *)GEN_TOP((param_2 + 4))) = bVar2;
  *((byte *)GEN_TOP((param_2 + 4))) = ((byte)param_1[2] ^ bVar2) & 0x7f ^ (byte)param_1[2];
  *((byte *)GEN_TOP((param_2 + 0xc))) =
       *((byte *)GEN_TOP((param_2 + 0xc))) ^ (*((byte *)GEN_TOP((param_2 + 0xc))) ^ (byte)param_1[6]) & 1;
  bVar2 = ((byte)param_1[6] ^ *((byte *)GEN_TOP((param_2 + 0xc)))) & 2 ^ *((byte *)GEN_TOP((param_2 + 0xc)));
  *((byte *)GEN_TOP((param_2 + 0xc))) = bVar2;
  bVar2 = ((byte)param_1[6] ^ bVar2) & 4 ^ bVar2;
  *((byte *)GEN_TOP((param_2 + 0xc))) = bVar2;
  bVar2 = ((byte)param_1[6] ^ bVar2) & 8 ^ bVar2;
  *((byte *)GEN_TOP((param_2 + 0xc))) = bVar2;
  bVar2 = ((byte)param_1[6] ^ bVar2) & 0x10 ^ bVar2;
  *((byte *)GEN_TOP((param_2 + 0xc))) = bVar2;
  bVar2 = ((byte)param_1[6] ^ bVar2) & 0x20 ^ bVar2;
  *((byte *)GEN_TOP((param_2 + 0xc))) = bVar2;
  bVar2 = ((byte)param_1[6] ^ bVar2) & 0x40 ^ bVar2;
  *((byte *)GEN_TOP((param_2 + 0xc))) = bVar2;
  *((byte *)GEN_TOP((param_2 + 0xc))) = ((byte)param_1[6] ^ bVar2) & 0x7f ^ (byte)param_1[6];
  *((undefined1 *)GEN_TOP((param_2 + 5))) = *((undefined1 *)GEN_TOP(((int)param_1 + 5)));
  *((ushort *)GEN_TOP((param_2 + 6))) = param_1[3] << 8 | param_1[3] >> 8;
  uVar1 = *(uint *)(param_1 + 4);
  *((uint *)GEN_TOP((param_2 + 8))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((undefined1 *)GEN_TOP((param_2 + 0xd))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0xd)));
  *((ushort *)GEN_TOP((param_2 + 0xe))) = param_1[7] << 8 | param_1[7] >> 8;
  iVar4 = 4;
  puVar3 = ((uint *)GEN_TOP((param_2 + 0x10)));
  do {
    uVar1 = *((uint *)GEN_TOP((((int)param_1 - param_2) + (int)puVar3)));
    iVar4 = iVar4 - 1;
    *puVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar3 = puVar3 + 1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_00d0c210 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d0c210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd0c210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 fVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  fVar1 = (float10)1;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 3))) = 0x400;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 5))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((float *)GEN_TOP(((int)this + 0x10))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x14))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x18))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x1c))) = (float)fVar1;
  *((undefined2 *)GEN_TOP(((int)this + 0xe))) = 0;
  *(undefined2 *)this = 0x230;
  *((undefined1 *)GEN_TOP(((int)this + 0xd))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 2))) = 0xe;
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1097254);
  iVar4 = 0x20;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x28)));
  do {
    puVar3[-2] = uVar2;
    iVar4 = iVar4 - 1;
    puVar3[-1] = uVar2;
    *puVar3 = uVar2;
    puVar3[1] = uVar2;
    puVar3[1] = (undefined4)gen_fl2bits((float)fVar1);
    puVar3 = puVar3 + 4;
  } while (iVar4 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0x228))) = 0;
  *((float *)GEN_TOP(((int)this + 0x220))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x22c))) = 0;
  *((float *)GEN_TOP(((int)this + 0x224))) = (float)fVar1;
  return 0;
}

/* ref: FUN_00d0c290 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00d0c290(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd0c290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  ushort uVar2;
  uint * puVar3;
  uint * puVar4;
  int local_8;
  
  F_00d0c080(param_1 GEN_EDX_FWD,param_2);
  puVar4 = ((uint *)GEN_TOP((param_1 + 0x28)));
  local_8 = 0x20;
  puVar3 = ((uint *)GEN_TOP((param_2 + 0x20)));
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar3)));
    *puVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar4[-1];
    puVar3[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar4;
    puVar3[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar4[1];
    puVar3[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar4 = puVar4 + 4;
    local_8 = local_8 - 1;
    puVar3 = puVar3 + 4;
  } while (local_8 != 0);
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x220)));
  *((uint *)GEN_TOP((param_2 + 0x220))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x224)));
  *((uint *)GEN_TOP((param_2 + 0x224))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((byte *)GEN_TOP((param_2 + 0x228))) =
       *((byte *)GEN_TOP((param_2 + 0x228))) ^ (*((byte *)GEN_TOP((param_2 + 0x228))) ^ *((byte *)GEN_TOP((param_1 + 0x228)))) & 0xf;
  *((byte *)GEN_TOP((param_2 + 0x228))) = *((byte *)GEN_TOP((param_1 + 0x228))) & 0x10 | *((byte *)GEN_TOP((param_2 + 0x228))) & 0xf;
  *((undefined1 *)GEN_TOP((param_2 + 0x229))) = *((undefined1 *)GEN_TOP((param_1 + 0x229)));
  *((undefined2 *)GEN_TOP((param_2 + 0x22a))) = 0;
  *((ushort *)GEN_TOP((param_2 + 0x22c))) =
       *((ushort *)GEN_TOP((param_1 + 0x22c))) << 8 | *((ushort *)GEN_TOP((param_1 + 0x22c))) >> 8;
  uVar2 = *((ushort *)GEN_TOP((param_1 + 0x22e))) << 8 | *((ushort *)GEN_TOP((param_1 + 0x22e))) >> 8;
  *((ushort *)GEN_TOP((param_2 + 0x22e))) = uVar2;
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d0c3d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd0c3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[33])REFP(0x1132404));
  F_00cccb40(param_1 + 0xcb GEN_EDX_FWD);
  F_00d23680(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d0c460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd0c460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x40, 0);
  undefined * in_ecx;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 * puVar5;
  int iVar6;
  float fVar7;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar10 [16];
  
  iVar6 = *(int *)(this + 0x128);
  *(undefined4 *)(this + 300) = *((undefined4 *)GEN_TOP((iVar6 + 0x20)));
  *(undefined4 *)(this + 0x130) = *((undefined4 *)GEN_TOP((iVar6 + 0x24)));
  *(undefined4 *)(this + 0x134) = *((undefined4 *)GEN_TOP((iVar6 + 0x28)));
  *(undefined4 *)(this + 0x138) = *((undefined4 *)GEN_TOP((iVar6 + 0x2c)));
  iVar6 = *(int *)(this + 0x128);
  *(undefined4 *)(this + 0x13c) = *((undefined4 *)GEN_TOP((iVar6 + 0x20)));
  *(undefined4 *)(this + 0x140) = *((undefined4 *)GEN_TOP((iVar6 + 0x24)));
  *(undefined4 *)(this + 0x144) = *((undefined4 *)GEN_TOP((iVar6 + 0x28)));
  *(undefined4 *)(this + 0x148) = *((undefined4 *)GEN_TOP((iVar6 + 0x2c)));
  iVar6 = 0x30;
  do {
    iVar4 = *(int *)(this + 0x128);
    uVar3 = *((undefined4 *)GEN_TOP((iVar4 + 8 + iVar6)));
    (*(undefined4 *)((char *)&auVar8 + 4)) = uVar3;
    (*(undefined4 *)((char *)&auVar8 + 0)) = *((undefined4 *)GEN_TOP((iVar4 + iVar6)));
    (*(undefined4 *)((char *)&auVar8 + 8)) = uVar3;
    (*(undefined4 *)((char *)&auVar8 + 12)) = *((undefined4 *)GEN_TOP((iVar4 + 0xc + iVar6)));
    (*(undefined8 *)((char *)&auVar9 + 8)) = (*(undefined8 *)((char *)&auVar8 + 8));
    (*(undefined4 *)((char *)&auVar9 + 4)) = *((undefined4 *)GEN_TOP((iVar4 + 4 + iVar6)));
    (*(undefined4 *)((char *)&auVar9 + 0)) = *((undefined4 *)GEN_TOP((iVar4 + iVar6)));
    gen_minps(&(auVar9), &(auVar9), (this + 300));
    memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x0))), &(auVar9), sizeof(auVar9) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x0))) ? sizeof(auVar9) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x0))));
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)) = (*(undefined4 *)((char *)&auVar9 + 0));
    (*(float *)(gen_frame + 0x20)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)));
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)) = (*(undefined4 *)((char *)&auVar9 + 4));
    *(undefined4 *)(this + 300) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0));
    (*(float *)(gen_frame + 0x24)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)));
    (*(float *)(gen_frame + 0x8)) = (*(float *)((char *)&auVar9 + 8));
    *(undefined4 *)(this + 0x130) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4));
    (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x8));
    (*(float *)(gen_frame + 0xc)) = (*(float *)((char *)&auVar9 + 12));
    *(float *)(this + 0x134) = (*(float *)(gen_frame + 0x8));
    (*(float *)(gen_frame + 0x2c)) = (*(float *)(gen_frame + 0xc));
    *(float *)(this + 0x138) = (*(float *)(gen_frame + 0xc));
    iVar4 = *(int *)(this + 0x128);
    uVar3 = *((undefined4 *)GEN_TOP((iVar4 + 8 + iVar6)));
    puVar1 = ((undefined4 *)GEN_TOP((iVar4 + 0xc + iVar6)));
    puVar5 = ((undefined4 *)GEN_TOP((iVar4 + iVar6)));
    puVar2 = ((undefined4 *)GEN_TOP((iVar4 + 4 + iVar6)));
    iVar6 = iVar6 + 0x10;
    (*(undefined4 *)((char *)&auVar11 + 4)) = uVar3;
    (*(undefined4 *)((char *)&auVar11 + 0)) = *puVar5;
    (*(undefined4 *)((char *)&auVar11 + 8)) = uVar3;
    (*(undefined4 *)((char *)&auVar11 + 12)) = *puVar1;
    (*(undefined8 *)((char *)&auVar10 + 8)) = (*(undefined8 *)((char *)&auVar11 + 8));
    (*(undefined4 *)((char *)&auVar10 + 4)) = *puVar2;
    (*(undefined4 *)((char *)&auVar10 + 0)) = *puVar5;
    gen_maxps(&(auVar9), &(auVar10), (this + 0x13c));
    memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x0))), &(auVar9), sizeof(auVar9) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x0))) ? sizeof(auVar9) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x0))));
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)) = (*(undefined4 *)((char *)&auVar9 + 0));
    (*(float *)(gen_frame + 0x10)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)));
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)) = (*(undefined4 *)((char *)&auVar9 + 4));
    *(undefined4 *)(this + 0x13c) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0));
    (*(float *)(gen_frame + 0x14)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)));
    (*(float *)(gen_frame + 0x8)) = (*(float *)((char *)&auVar9 + 8));
    *(undefined4 *)(this + 0x140) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4));
    (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x8));
    (*(float *)(gen_frame + 0xc)) = (*(float *)((char *)&auVar9 + 12));
    *(float *)(this + 0x144) = (*(float *)(gen_frame + 0x8));
    (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0xc));
    *(float *)(this + 0x148) = (*(float *)(gen_frame + 0xc));
  } while (iVar6 < 0x60);
  iVar6 = *(int *)(this + 0x128);
  fVar18 = *((float *)GEN_TOP((iVar6 + 0x2c)));
  fVar17 = *((float *)GEN_TOP((iVar6 + 0x4c)));
  fVar15 = *((float *)GEN_TOP((iVar6 + 0x48)));
  fVar7 = *((float *)GEN_TOP((iVar6 + 0x30))) - *((float *)GEN_TOP((iVar6 + 0x20)));
  fVar12 = gen_bits2f((uint)((ulonglong)*((undefined8 *)GEN_TOP((iVar6 + 0x30))) >> 0x20)) -
           *((float *)GEN_TOP((iVar6 + 0x24)));
  fVar14 = *((float *)GEN_TOP((iVar6 + 0x38))) - *((float *)GEN_TOP((iVar6 + 0x28)));
  fVar16 = *((float *)GEN_TOP((iVar6 + 0x3c))) - *((float *)GEN_TOP((iVar6 + 0x2c)));
  fVar13 = *((float *)GEN_TOP((iVar6 + 0x44)));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)) = (undefined4)gen_fl2bits(fVar7);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)) = (undefined4)gen_fl2bits(fVar12);
  (*(float *)(gen_frame + 0x8)) = fVar14;
  (*(float *)(gen_frame + 0xc)) = fVar16;
  (*(float *)(gen_frame + 0x10)) = fVar7;
  (*(float *)(gen_frame + 0x14)) = fVar12;
  (*(float *)(gen_frame + 0x18)) = fVar14;
  (*(float *)(gen_frame + 0x1c)) = fVar16;
  fVar16 = *((float *)GEN_TOP((iVar6 + 0x40))) - *((float *)GEN_TOP((iVar6 + 0x20)));
  fVar13 = fVar13 - *((float *)GEN_TOP((iVar6 + 0x24)));
  fVar15 = fVar15 - *((float *)GEN_TOP((iVar6 + 0x28)));
  fVar17 = fVar17 - fVar18;
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)) = (undefined4)gen_fl2bits(fVar16);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)) = (undefined4)gen_fl2bits(fVar13);
  (*(float *)(gen_frame + 0x8)) = fVar15;
  (*(float *)(gen_frame + 0xc)) = fVar17;
  (*(float *)(gen_frame + 0x20)) = fVar16;
  (*(float *)(gen_frame + 0x24)) = fVar13;
  (*(float *)(gen_frame + 0x28)) = fVar15;
  (*(float *)(gen_frame + 0x2c)) = fVar17;
  fVar18 = fVar13 * fVar14 - fVar15 * fVar12;
  fVar15 = fVar15 * fVar7 - fVar16 * fVar14;
  fVar13 = fVar16 * fVar12 - fVar13 * fVar7;
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)) = (undefined4)gen_fl2bits(fVar18);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)) = (undefined4)gen_fl2bits(fVar15);
  (*(float *)(gen_frame + 0x8)) = fVar13;
  (*(float *)(gen_frame + 0x10)) = fVar18;
  (*(float *)(gen_frame + 0x14)) = fVar15;
  in_ecx = this + 0x14c;
  (*(float *)(gen_frame + 0x18)) = fVar13;
  (*(float *)(gen_frame + 0x1c)) = fVar17;
  *(float *)in_ecx = fVar18;
  *(float *)(this + 0x150) = fVar15;
  *(float *)(this + 0x154) = fVar13;
  *(float *)(this + 0x158) = fVar17;
  puVar5 = ((undefined4 *)GEN_TOP(F_00d034e0(in_ecx GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)))));
  *(undefined4 *)in_ecx = *puVar5;
  *(undefined4 *)(this + 0x150) = puVar5[1];
  *(undefined4 *)(this + 0x154) = puVar5[2];
  *(undefined4 *)(this + 0x158) = puVar5[3];
  return (uint)puVar5;
}

/* ref: FUN_00d0c790 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d0c790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd0c790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11325e4));
  F_00cccb40((int)this + 0x15c GEN_EDX_FWD);
  uVar1 = F_00d23680(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d0c7b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xd0c7b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  F_00d211a0(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  F_00cccbd0(param_1 + 0x15c GEN_EDX_ARG,param_4);
  F_00cccd90(param_1 + 0x15c GEN_EDX_ARG,param_3,param_2);
  return REFG(undefined4, 0x11299e4);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d0c800(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd0c800u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cccd90(param_1 + 0x15c GEN_EDX_FWD,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d0c820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd0c820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  F_00d213b0(this GEN_EDX_FWD,param_1,(undefined1)param_2);
  iVar11 = 0;
  do {
    iVar9 = *(int *)(this + 0x128);
    fVar4 = *((float *)GEN_TOP((iVar9 + 0x28 + iVar11)));
    fVar5 = *((float *)GEN_TOP((iVar9 + 0x2c + iVar11)));
    pfVar1 = ((float *)GEN_TOP((iVar9 + 0x20 + iVar11)));
    pfVar2 = ((float *)GEN_TOP((iVar9 + 0x24 + iVar11)));
    fVar6 = param_1[3];
    pfVar3 = ((float *)GEN_TOP((iVar9 + 0x20 + iVar11)));
    iVar11 = iVar11 + 0x10;
    fVar7 = param_1[1];
    fVar8 = param_1[2];
    *pfVar3 = *pfVar1 + *param_1;
    pfVar3[1] = *pfVar2 + fVar7;
    pfVar3[2] = fVar4 + fVar8;
    pfVar3[3] = fVar5 + fVar6;
    *((float *)GEN_TOP((*(int *)(this + 0x128) + 0x1c + iVar11))) = (float)(float10)1;
  } while (iVar11 < 0x40);
  uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG);
  return uVar10;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf14 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d0c900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd0c900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_FWD,0x406);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
  if ((char)uVar1 == '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x15c) + 8))))(this + 0x15c GEN_EDX_ARG,param_1);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf15 */
GEN_LIB GEN_NOFRAME byte F_00d0c940(void)
{
  GEN_ENTER(0xd0c940u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf21 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d0c950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd0c950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  if (((((float10)*param_1 <= (float10)*(float *)(this + 0x13c)) &&
       ((float10)*(float *)(this + 300) <= (float10)*param_2)) &&
      ((float10)param_1[1] <= (float10)*(float *)(this + 0x140))) &&
     ((((float10)*(float *)(this + 0x130) <= (float10)param_2[1] &&
       ((float10)param_1[2] <= (float10)*(float *)(this + 0x144))) &&
      ((float10)*(float *)(this + 0x134) <= (float10)param_2[2])))) {
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d0c9e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd0c9e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x70) {
    return 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x128)));
  puVar3 = param_2;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x70;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf19 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d0ca10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd0ca10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d0ca20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd0ca20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d0ca30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd0ca30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  float fVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  iVar1 = *(int *)(this + 0x128);
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x15c) + 0x10))))(this + 0x15c);
  fVar2 = ((float)GEN_TOF(((float10)1 - extraout_ST0 * (float10)*((float *)GEN_TOP((iVar1 + 0x60))))));
  *param_1 = fVar2;
  if ((*((byte *)GEN_TOP((iVar1 + 0x68))) & 0x10) != 0) {
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x15c) + 0x10))))(this + 0x15c); fVar2 = extraout_ST0_00;
    *param_2 = ((float)GEN_TOF(((float10)1 -
                      extraout_ST0_00 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 100))))));
    return (uint)gen_fl2bits(fVar2);
  }
  *param_2 = fVar2;
  return (uint)param_2;
}

/* ref: FUN_00d0cab0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d0cab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd0cab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  ushort uVar1;
  uint uVar2;
  float10 fVar3;
  
  if (param_1 == 0) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x6e)));
    fVar3 = (float10)1;
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x6c)));
    fVar3 = (float10)*(float *)&REFG(undefined, 0x1097254);
  }
  uVar2 = F_00cccd90((int)this + 0x15c GEN_EDX_FWD,(float)fVar3,(uint)uVar1 * 1000 >> 4);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d0caf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd0caf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xa0, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x80);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf27 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d0cb70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd0cb70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x128)));
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d0cb90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd0cb90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  
  bVar5 = F_00d21f00((undefined *)this GEN_EDX_FWD,param_1);
  if (bVar5 == 0) {
    return 0;
  }
  iVar7 = 0;
  iVar6 = 0;
  do {
    iVar1 = *(int *)(this + 0x128);
    dVar2 = (double)*((float *)GEN_TOP((iVar6 + 0x28 + iVar1)));
    dVar3 = (double)*((float *)GEN_TOP((iVar6 + 0x24 + iVar1)));
    dVar4 = (double)*((float *)GEN_TOP((iVar6 + 0x20 + iVar1)));
    F_00c49386(param_1,((char *)REFP(0x11324ac)),iVar7,(int)(ulonglong)gen_d2bits(dVar4),
             (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
             (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
             (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    iVar6 = iVar6 + 0x10;
    iVar7 = iVar7 + 1;
  } while (iVar6 < 0x40);
  F_00c49386(param_1,((char *)REFP(0x11324c8)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60))))));
  F_00c49386(param_1,((char *)REFP(0x11324dc)),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 100)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 100)))) >> 0x20));
  F_00c49386(param_1,((char *)REFP(0x11324ec)),*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x68))) & 0xf);
  F_00c49386(param_1,((char *)REFP(0x1132500)),*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x68))) >> 4 & 1);
  F_00c49386(param_1,((char *)REFP(0x1132514)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf31 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d0cc80(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd0cc80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = ((char *)REFP(0x113252c));
  pbVar5 = ((byte *)GEN_TOP(param_2));
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d0ccb1: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d0ccb6;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d0ccb1;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d0ccb6: ;
  if (iVar3 == 0) {
    uVar4 = F_00d00d00(0,0);
    if (uVar4 != 0) {
      uVar4 = F_00c4c74c(uVar4);
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 2) * 0x10))) = (float)dVar7;
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24 + uVar4 * 0x10))) = (float)dVar7;
          pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
          if (pcVar2 != ((char *)GEN_TOP(0x0))) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 0x10))) = (float)dVar7;
            return 1;
          }
        }
      }
    }
  }
  else {
    pcVar2 = ((char *)REFP(0x1132538));
    pbVar5 = ((byte *)GEN_TOP(param_2));
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d0cd86: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d0cd8b;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d0cd86;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d0cd8b: ;
    if (iVar3 == 0) {
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x60))) = (float)dVar7;
        return 1;
      }
    }
    else {
      pcVar2 = ((char *)REFP(0x1132544));
      pbVar5 = ((byte *)GEN_TOP(param_2));
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00d0cde8: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d0cded;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00d0cde8;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d0cded: ;
      if (iVar3 == 0) {
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 100))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = ((char *)REFP(0x1132550));
        pbVar5 = ((byte *)GEN_TOP(param_2));
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d0ce50: ;
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d0ce55;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d0ce50;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d0ce55: ;
        if (iVar3 == 0) {
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x68)));
            *pbVar5 = *pbVar5 ^ ((char)uVar4 << 4 ^ *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x68)))) &
                                0x10;
            return 1;
          }
        }
        else {
          pcVar2 = ((char *)REFP(0x1132560));
          pbVar5 = ((byte *)GEN_TOP(param_2));
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d0ceb4: ;
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d0ceb9;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d0ceb4;
            pcVar2 = pcVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d0ceb9: ;
          if (iVar3 != 0) {
            bVar1 = F_00d22040(param_1 GEN_EDX_ARG,param_2);
            return bVar1;
          }
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x68)));
            *pbVar5 = *pbVar5 ^ (*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x68))) ^ (byte)uVar4) & 0xf;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf22 */
GEN_LIB GEN_NOFRAME float GEN_THISCALL F_00d0cf00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd0cf00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x7c, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  float * pfVar8;
  float * pfVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  *param_4 = 0;
  fVar1 = param_1[3];
  fVar2 = param_1[2];
  fVar3 = *param_1;
  fVar4 = param_1[1];
  iVar10 = *(int *)(this + 0x128);
  fVar5 = *(float *)(this + 0x158);
  fVar19 = *(float *)(this + 0x154);
  fVar6 = *(float *)(this + 0x14c);
  fVar13 = *((float *)GEN_TOP((iVar10 + 0x20))) - fVar3;
  fVar14 = *((float *)GEN_TOP((iVar10 + 0x24))) - fVar4;
  fVar15 = *((float *)GEN_TOP((iVar10 + 0x28))) - fVar2;
  fVar16 = *((float *)GEN_TOP((iVar10 + 0x2c))) - fVar1;
  (*(float *)(gen_frame + 0xc)) = fVar13;
  (*(float *)(gen_frame + 0x10)) = fVar14;
  (*(float *)(gen_frame + 0x14)) = fVar15;
  (*(float *)(gen_frame + 0x18)) = fVar16;
  fVar21 = param_2[3];
  fVar20 = param_2[2];
  fVar14 = fVar14 * *(float *)(this + 0x150);
  fVar15 = fVar15 * fVar19;
  fVar17 = *param_2;
  (*(float *)(gen_frame + 0x0)) = (fVar15 + fVar14) + fVar14;
  (*(float *)(gen_frame + 0x4)) = (fVar15 + fVar15) + fVar14;
  (*(float *)(gen_frame + 0x8)) = (fVar15 + fVar16 * fVar5) + fVar14;
  fVar16 = param_2[1];
  fVar18 = *(float *)(this + 0x150) * fVar16;
  fVar19 = fVar19 * fVar20;
  fVar22 = (fVar19 + fVar6 * fVar17) + fVar18;
  (*(float *)(gen_frame + 0xc)) = fVar22;
  (*(float *)(gen_frame + 0x10)) = (fVar19 + fVar18) + fVar18;
  (*(float *)(gen_frame + 0x14)) = (fVar19 + fVar19) + fVar18;
  (*(float *)(gen_frame + 0x18)) = (fVar19 + fVar5 * fVar21) + fVar18;
  fVar11 = (float10)fVar22;
  fVar12 = (float10)*(float *)&REFG(undefined, 0x1097254);
  if ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar11)) == ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar11)) || fVar12 == fVar11)) {
    fVar5 = ((float)GEN_TOF((((float10)GEN_TOD(((fVar15 + fVar13 * fVar6) + fVar14))) / fVar11)));
    fVar11 = (float10)fVar5;
    if ((!(fVar12 <= fVar11) == ((GEN_ISNAN(fVar11) || GEN_ISNAN(fVar12)) || fVar11 == fVar12)) &&
       (fVar12 = (float10)1, (GEN_ISNAN(fVar12) || GEN_ISNAN(fVar11)) || fVar12 < fVar11 == (fVar12 == fVar11)))
    {
      fVar17 = fVar5 * fVar17;
      fVar16 = fVar5 * fVar16;
      fVar20 = fVar5 * fVar20;
      fVar21 = fVar5 * fVar21;
      (*(float *)(gen_frame + 0xc)) = fVar17;
      (*(float *)(gen_frame + 0x10)) = fVar16;
      (*(float *)(gen_frame + 0x14)) = fVar20;
      (*(float *)(gen_frame + 0x18)) = fVar21;
      fVar17 = fVar17 + fVar3;
      fVar16 = fVar16 + fVar4;
      fVar20 = fVar20 + fVar2;
      fVar21 = fVar21 + fVar1;
      (*(float *)(gen_frame + 0xc)) = fVar17;
      (*(float *)(gen_frame + 0x10)) = fVar16;
      (*(float *)(gen_frame + 0x14)) = fVar20;
      (*(float *)(gen_frame + 0x18)) = fVar21;
      *param_3 = fVar17;
      param_3[1] = fVar16;
      param_3[2] = fVar20;
      param_3[3] = fVar21;
      fVar1 = *param_3;
      fVar2 = param_3[1];
      fVar3 = param_3[2];
      fVar4 = param_3[3];
      pfVar8 = ((float *)GEN_TOP((*(int *)(this + 0x128) + 0x20)));
      iVar10 = 4;
      pfVar9 = ((float *)(gen_frame + 0x24));
      do {
        fVar19 = *pfVar8;
        fVar6 = pfVar8[1];
        fVar21 = pfVar8[2];
        fVar20 = pfVar8[3];
        pfVar8 = pfVar8 + 4;
        iVar10 = iVar10 - 1;
        (*(float *)(gen_frame + 0xc)) = fVar19 - fVar1;
        (*(float *)(gen_frame + 0x10)) = fVar6 - fVar2;
        (*(float *)(gen_frame + 0x14)) = fVar21 - fVar3;
        (*(float *)(gen_frame + 0x18)) = fVar20 - fVar4;
        *pfVar9 = fVar19 - fVar1;
        pfVar9[1] = fVar6 - fVar2;
        pfVar9[2] = fVar21 - fVar3;
        pfVar9[3] = fVar20 - fVar4;
        pfVar9 = pfVar9 + 4;
      } while (iVar10 != 0);
      F_01052f50(((float *)(gen_frame + 0x24)),&(*(float *)(gen_frame + 0xc)));
      bVar7 = F_01053270(((float *)(gen_frame + 0x24)),&(*(float *)(gen_frame + 0xc)));
      if (bVar7 != 0) {
        return fVar5;
      }
    }
  }
  return REFG(float, 0x1090708);
}

/* ref: FUN_00d0d1c0 */
GEN_LIB GEN_NOFRAME float F_00d0d1c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd0d1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0xb8, 8);
  undefined4 * puVar1;
  undefined8 * puVar2;
  float fVar3;
  undefined4 uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float * pfVar10;
  float * pfVar11;
  undefined4 * puVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  float fVar22;
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar17 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  
  (*(uint *)(gen_frame + 0xa4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa8);
  pfVar11 = ((float *)(gen_frame + 0x60));
  iVar13 = param_1 + 0x20;
  (*(int *)(gen_frame + 0x10)) = 4;
  do {
    pfVar10 = ((float *)GEN_TOP(F_00c34320(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x38)),iVar13)));
    fVar28 = pfVar10[1];
    *pfVar11 = *pfVar10;
    fVar20 = pfVar10[2];
    pfVar11[1] = fVar28;
    fVar28 = pfVar10[3];
    pfVar11[2] = fVar20;
    pfVar11[3] = fVar28;
    iVar13 = iVar13 + 0x10;
    pfVar11 = pfVar11 + 4;
    (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) - 1;
  } while ((*(int *)(gen_frame + 0x10)) != 0);
  fVar28 = *param_3;
  fVar20 = param_3[1];
  fVar21 = param_3[2];
  fVar22 = param_3[3];
  iVar13 = 4;
  pfVar11 = ((float *)(gen_frame + 0x60)) + 2;
  do {
    fVar19 = pfVar11[-1];
    fVar27 = *pfVar11;
    fVar3 = pfVar11[1];
    iVar13 = iVar13 - 1;
    (*(float *)(gen_frame + 0x50)) = pfVar11[-2] - fVar28;
    pfVar11[-2] = pfVar11[-2] - fVar28;
    (*(float *)(gen_frame + 0x54)) = fVar19 - fVar20;
    pfVar11[-1] = fVar19 - fVar20;
    (*(float *)(gen_frame + 0x58)) = fVar27 - fVar21;
    *pfVar11 = fVar27 - fVar21;
    (*(float *)(gen_frame + 0x5c)) = fVar3 - fVar22;
    pfVar11[1] = fVar3 - fVar22;
    pfVar11 = pfVar11 + 4;
  } while (iVar13 != 0);
  (*(float *)(gen_frame + 0x0)) = ((float *)(gen_frame + 0x60))[0];
  (*(float *)(gen_frame + 0x4)) = ((float *)(gen_frame + 0x60))[1];
  (*(float *)(gen_frame + 0x14)) = ((float *)(gen_frame + 0x60))[0];
  (*(float *)(gen_frame + 0x18)) = ((float *)(gen_frame + 0x60))[1];
  (*(float *)(gen_frame + 0x8)) = ((float *)(gen_frame + 0x60))[2];
  (*(float *)(gen_frame + 0xc)) = ((float *)(gen_frame + 0x60))[3];
  (*(float *)(gen_frame + 0x1c)) = ((float *)(gen_frame + 0x60))[2];
  (*(float *)(gen_frame + 0x20)) = ((float *)(gen_frame + 0x60))[3];
  puVar12 = ((undefined4 *)(gen_frame + 0x78));
  iVar13 = 3;
  do {
    puVar1 = puVar12 + 1;
    uVar4 = *puVar12;
    puVar2 = (undefined8 *)(puVar12 - 2);
    puVar12 = puVar12 + 4;
    iVar13 = iVar13 - 1;
    (*(undefined4 *)((char *)&auVar5 + 4)) = uVar4;
    (*(undefined4 *)((char *)&auVar5 + 0)) = uVar4;
    (*(undefined4 *)((char *)&auVar5 + 8)) = *puVar1;
    (*(undefined8 *)((char *)&auVar16 + 8)) = (*(undefined8 *)((char *)&auVar5 + 4));
    (*(undefined8 *)((char *)&auVar16 + 0)) = *puVar2;
    (*(undefined4 *)((char *)&auVar30 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x4)));
    (*(undefined4 *)((char *)&auVar30 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x0)));
    (*(undefined4 *)((char *)&auVar6 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x8)));
    (*(undefined4 *)((char *)&auVar6 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x8)));
    (*(undefined4 *)((char *)&auVar6 + 8)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
    (*(undefined8 *)((char *)&auVar30 + 8)) = (*(undefined8 *)((char *)&auVar6 + 4));
    (*(undefined4 *)((char *)&auVar29 + 8)) = uVar4;
    (*(undefined8 *)((char *)&auVar29 + 0)) = *puVar2;
    (*(undefined4 *)((char *)&auVar29 + 12)) = *puVar1;
    gen_minps(&(auVar30), &(auVar29), &(auVar30));
    memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x38))), &(auVar30), sizeof(auVar30) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x38))) ? sizeof(auVar30) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x38))));
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 0)) = (*(undefined4 *)((char *)&auVar30 + 0));
    uVar4 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 0));
    (*(float *)(gen_frame + 0x50)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 0)));
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 4)) = (*(undefined4 *)((char *)&auVar30 + 4));
    uVar8 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 4));
    (*(float *)(gen_frame + 0x0)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 0)));
    (*(float *)(gen_frame + 0x54)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 4)));
    (*(float *)(gen_frame + 0x40)) = (*(float *)((char *)&auVar30 + 8));
    fVar28 = (*(float *)(gen_frame + 0x40));
    (*(float *)(gen_frame + 0x4)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 4)));
    (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x40));
    (*(float *)(gen_frame + 0x44)) = (*(float *)((char *)&auVar30 + 12));
    fVar21 = (*(float *)(gen_frame + 0x44));
    (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x40));
    (*(float *)(gen_frame + 0x5c)) = (*(float *)(gen_frame + 0x44));
    (*(float *)(gen_frame + 0xc)) = (*(float *)(gen_frame + 0x44));
    (*(undefined4 *)((char *)&auVar24 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c)));
    (*(undefined4 *)((char *)&auVar24 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14)));
    (*(undefined4 *)((char *)&auVar24 + 8)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c)));
    (*(undefined4 *)((char *)&auVar24 + 12)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x20)));
    (*(undefined8 *)((char *)&auVar23 + 8)) = (*(undefined8 *)((char *)&auVar24 + 8));
    (*(undefined4 *)((char *)&auVar23 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x18)));
    (*(undefined4 *)((char *)&auVar23 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14)));
    gen_maxps(&(auVar16), &(auVar16), &(auVar23));
    memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x38))), &(auVar16), sizeof(auVar16) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x38))) ? sizeof(auVar16) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x38))));
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 0)) = (*(undefined4 *)((char *)&auVar16 + 0));
    uVar7 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 0));
    (*(float *)(gen_frame + 0x14)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 0)));
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 4)) = (*(undefined4 *)((char *)&auVar16 + 4));
    uVar9 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 4));
    (*(float *)(gen_frame + 0x18)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 4)));
    (*(float *)(gen_frame + 0x40)) = (*(float *)((char *)&auVar16 + 8));
    fVar20 = (*(float *)(gen_frame + 0x40));
    (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0x40));
    (*(float *)(gen_frame + 0x44)) = (*(float *)((char *)&auVar16 + 12));
    fVar22 = (*(float *)(gen_frame + 0x44));
    (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x44));
  } while (iVar13 != 0);
  (*(float *)((char *)&auVar26 + 0)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 0))) - gen_bits2f(uVar4);
  fVar27 = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 4))) - gen_bits2f(uVar8);
  (*(float *)((char *)&auVar26 + 8)) = (*(float *)(gen_frame + 0x40)) - fVar28;
  (*(float *)((char *)&auVar26 + 12)) = (*(float *)(gen_frame + 0x44)) - fVar21;
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 0)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar26 + 0)));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 4)) = (undefined4)gen_fl2bits(fVar27);
  (*(float *)(gen_frame + 0x40)) = (*(float *)((char *)&auVar26 + 8));
  (*(float *)(gen_frame + 0x44)) = (*(float *)((char *)&auVar26 + 12));
  (*(float *)(gen_frame + 0x50)) = (*(float *)((char *)&auVar26 + 0));
  (*(float *)((char *)&auVar18 + 0)) = gen_bits2f(uVar4) + gen_bits2f(uVar7);
  fVar19 = gen_bits2f(uVar8) + gen_bits2f(uVar9);
  (*(float *)((char *)&auVar18 + 8)) = fVar28 + fVar20;
  (*(float *)((char *)&auVar18 + 12)) = fVar21 + fVar22;
  (*(float *)(gen_frame + 0x54)) = fVar27;
  (*(float *)(gen_frame + 0x58)) = (*(float *)((char *)&auVar26 + 8));
  (*(float *)(gen_frame + 0x5c)) = (*(float *)((char *)&auVar26 + 12));
  (*(undefined4 *)((char *)&auVar26 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar26 + 8)));
  (*(undefined8 *)((char *)&auVar25 + 8)) = (*(undefined8 *)((char *)&auVar26 + 8));
  (*(undefined8 *)((char *)&auVar25 + 0)) = ((undefined1 *)(gen_frame + 0x38));
  gen_divps(&(auVar16), &(auVar25), &(*(gen_v16 *)&REFG(undefined, 0x11325d0)));
  memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x38))), &(auVar16), sizeof(auVar16) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x38))) ? sizeof(auVar16) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x38))));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 0)) = (*(undefined4 *)((char *)&auVar16 + 0));
  uVar4 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 0));
  (*(float *)(gen_frame + 0x50)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 0)));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 4)) = (*(undefined4 *)((char *)&auVar16 + 4));
  uVar7 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 4));
  (*(float *)(gen_frame + 0x54)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 4)));
  (*(float *)(gen_frame + 0x40)) = (*(float *)((char *)&auVar16 + 8));
  fVar28 = (*(float *)(gen_frame + 0x40));
  (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x40));
  (*(float *)(gen_frame + 0x44)) = (*(float *)((char *)&auVar16 + 12));
  fVar20 = (*(float *)(gen_frame + 0x44));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 0)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar18 + 0)));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 4)) = (undefined4)gen_fl2bits(fVar19);
  (*(float *)(gen_frame + 0x40)) = (*(float *)((char *)&auVar18 + 8));
  (*(float *)(gen_frame + 0x44)) = (*(float *)((char *)&auVar18 + 12));
  (*(float *)(gen_frame + 0x5c)) = fVar20;
  (*(float *)(gen_frame + 0x50)) = (*(float *)((char *)&auVar18 + 0));
  (*(float *)(gen_frame + 0x54)) = fVar19;
  (*(float *)(gen_frame + 0x58)) = (*(float *)((char *)&auVar18 + 8));
  (*(float *)(gen_frame + 0x5c)) = (*(float *)((char *)&auVar18 + 12));
  fVar19 = gen_bits2f(uVar7) * gen_bits2f(uVar7);
  fVar28 = fVar28 * fVar28;
  (*(float *)(gen_frame + 0x2c)) = (fVar28 + fVar19) + fVar19;
  (*(float *)(gen_frame + 0x30)) = (fVar28 + fVar28) + fVar19;
  (*(float *)(gen_frame + 0x34)) = (fVar28 + fVar20 * fVar20) + fVar19;
  (*(undefined4 *)((char *)&auVar18 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar18 + 8)));
  (*(undefined8 *)((char *)&auVar17 + 8)) = (*(undefined8 *)((char *)&auVar18 + 8));
  (*(undefined8 *)((char *)&auVar17 + 0)) = ((undefined1 *)(gen_frame + 0x38));
  gen_divps(&(auVar16), &(auVar17), &(*(gen_v16 *)&REFG(undefined, 0x11325d0)));
  memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x38))), &(auVar16), sizeof(auVar16) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x38))) ? sizeof(auVar16) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x38))));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 0)) = (*(undefined4 *)((char *)&auVar16 + 0));
  (*(float *)(gen_frame + 0x50)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 0)));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 4)) = (*(undefined4 *)((char *)&auVar16 + 4));
  (*(float *)(gen_frame + 0x54)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 4)));
  (*(float *)(gen_frame + 0x40)) = (*(float *)((char *)&auVar16 + 8));
  (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x40));
  (*(float *)(gen_frame + 0x44)) = (*(float *)((char *)&auVar16 + 12));
  (*(float *)(gen_frame + 0x5c)) = (*(float *)(gen_frame + 0x44));
  fVar20 = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 4))) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 4)));
  fVar21 = (*(float *)(gen_frame + 0x40)) * (*(float *)(gen_frame + 0x40));
  fVar22 = GEN_X87(SQRT((fVar21 + gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 0))) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 0)))) + fVar20));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 0)) = (undefined4)gen_fl2bits(fVar22);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x38)) + 4)) = (undefined4)gen_fl2bits((fVar21 + fVar20) + fVar20);
  (*(float *)(gen_frame + 0x40)) = (fVar21 + fVar21) + fVar20;
  (*(float *)(gen_frame + 0x44)) = (fVar21 + (*(float *)(gen_frame + 0x44)) * (*(float *)(gen_frame + 0x44))) + fVar20;
  fVar14 = (float10)fVar22;
  fVar15 = ((float10)GEN_TOD(GEN_X87(SQRT((fVar28 + gen_bits2f(uVar4) * gen_bits2f(uVar4)) + fVar19))));
  if (fVar14 <= fVar15 && ((!GEN_ISNAN(fVar15) && !GEN_ISNAN(fVar14)) && fVar15 != fVar14)) {
    return *(float *)&REFG(undefined, 0x1097254);
  }
  return GEN_X87((float)(fVar14 - fVar15));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf23 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d0d5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd0d5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL(0x9c, 4);
  byte bVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(byte *)(gen_frame + 0x1b)) = 0;
  (*(float *)(gen_frame + 0x80)) = 9.47771e-38;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x84)) + 0)) = 2;
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x84)) + 1)) = 0x303;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x84)) + 3)) = 0;
  (*(float *)(gen_frame + 0x84)) = 2.76585e-40;
  iVar3 = 0;
  (*(float *)(gen_frame + 0x14)) = 1.4013e-45;
  do {
    if (((*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x14)) + 0)) & *((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x68))) & 0xf) == 0) {
      F_01053470((*((byte *)GEN_TOP(((int)&(*(float *)(gen_frame + 0x80)) + iVar3 * 2))) + 2) * 0x10 + *(int *)(this + 0x128),
                   (*((byte *)GEN_TOP(((int)&(*(float *)(gen_frame + 0x80)) + iVar3 * 2 + 1))) + 2) * 0x10 + *(int *)(this + 0x128),
                   param_1,&(*(float *)(gen_frame + 0x1c)));
      uVar2 = (uint)(*(byte *)(gen_frame + 0x1b));
      ((float *)(gen_frame + 0x34))[(int)(uVar2 * 4)] = (*(float *)(gen_frame + 0x1c));
      ((float *)(gen_frame + 0x34))[(int)(uVar2 * 4 + 1)] = (*(float *)(gen_frame + 0x20));
      ((float *)(gen_frame + 0x34))[(int)(uVar2 * 4 + 2)] = (*(float *)(gen_frame + 0x24));
      (*(byte *)(gen_frame + 0x1b)) = (*(byte *)(gen_frame + 0x1b)) + 1;
      ((float *)(gen_frame + 0x34))[(int)(uVar2 * 4 + 3)] = (*(float *)(gen_frame + 0x28));
    }
    iVar3 = iVar3 + 1;
    (*(float *)(gen_frame + 0x14)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) << 1 | (uint)((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) < 0));
  } while (iVar3 < 4);
  bVar1 = 0;
  if ((*(byte *)(gen_frame + 0x1b)) != 0) {
    iVar3 = 0;
    (*(float *)(gen_frame + 0x14)) = *(float *)&REFG(undefined, 0x1097254);
    if ((*(byte *)(gen_frame + 0x1b)) != 0) {
      do {
        fVar4 = ((float *)(gen_frame + 0x34))[(int)(iVar3 * 4)] - *param_1;
        fVar5 = ((float *)(gen_frame + 0x34))[(int)(iVar3 * 4 + 1)] - param_1[1];
        fVar6 = ((float *)(gen_frame + 0x34))[(int)(iVar3 * 4 + 2)] - param_1[2];
        fVar7 = ((float *)(gen_frame + 0x34))[(int)(iVar3 * 4 + 3)] - param_1[3];
        (*(float *)(gen_frame + 0x1c)) = fVar4;
        (*(float *)(gen_frame + 0x20)) = fVar5;
        (*(float *)(gen_frame + 0x24)) = fVar6;
        (*(float *)(gen_frame + 0x28)) = fVar7;
        (*(float *)(gen_frame + 0x78)) = fVar4;
        (*(float *)(gen_frame + 0x7c)) = fVar5;
        (*(float *)(gen_frame + 0x80)) = fVar6;
        (*(float *)(gen_frame + 0x84)) = fVar7;
        fVar5 = fVar5 * fVar5;
        fVar6 = fVar6 * fVar6;
        fVar4 = SQRT((fVar6 + fVar4 * fVar4) + fVar5);
        (*(float *)(gen_frame + 0x0)) = (fVar6 + fVar5) + fVar5;
        (*(float *)(gen_frame + 0x4)) = (fVar6 + fVar6) + fVar5;
        (*(float *)(gen_frame + 0x8)) = (fVar6 + fVar7 * fVar7) + fVar5;
        if (iVar3 == 0) {
          *param_2 = ((float *)(gen_frame + 0x34))[0];
          param_2[1] = ((float *)(gen_frame + 0x34))[1];
          param_2[2] = ((float *)(gen_frame + 0x34))[2];
          param_2[3] = ((float *)(gen_frame + 0x34))[3];
          (*(float *)(gen_frame + 0x14)) = fVar4;
        }
        else if (!((float10)(*(float *)(gen_frame + 0x14)) <= (float10)fVar4) !=
                 (GEN_ISNAN((float10)fVar4) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x14))))) {
          *param_2 = ((float *)(gen_frame + 0x34))[(int)(iVar3 * 4)];
          param_2[1] = ((float *)(gen_frame + 0x34))[(int)(iVar3 * 4 + 1)];
          fVar5 = ((float *)(gen_frame + 0x34))[(int)(iVar3 * 4 + 3)];
          param_2[2] = ((float *)(gen_frame + 0x34))[(int)(iVar3 * 4 + 2)];
          param_2[3] = fVar5;
          (*(float *)(gen_frame + 0x14)) = fVar4;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)(*(byte *)(gen_frame + 0x1b)));
    }
    bVar1 = 1;
  }
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d0d7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd0d7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00d22da0(this GEN_EDX_FWD,param_1,0x70)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x1c);
  }
  F_00d0df40(*(undefined4 *)(this + 0x128) GEN_EDX_ARG,(uint)puVar1);
  return (uint)(puVar1 + 0x1c);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf28 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d0d850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd0d850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x70, 0, 4);
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c));
  uVar2 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x68;
    uVar3 = F_00427d90();
    iVar1 = *(int *)(this + 0x128);
    (*(ulonglong *)(gen_frame + 0x8)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x38)) = *((undefined4 *)GEN_TOP((iVar1 + 0x20)));
    (*(undefined4 *)(gen_frame + 0x3c)) = *((undefined4 *)GEN_TOP((iVar1 + 0x24)));
    (*(undefined4 *)(gen_frame + 0x40)) = *((undefined4 *)GEN_TOP((iVar1 + 0x28)));
    (*(undefined4 *)(gen_frame + 0x44)) = *((undefined4 *)GEN_TOP((iVar1 + 0x30)));
    (*(undefined4 *)(gen_frame + 0x48)) = *((undefined4 *)GEN_TOP((iVar1 + 0x34)));
    (*(undefined4 *)(gen_frame + 0x4c)) = *((undefined4 *)GEN_TOP((iVar1 + 0x38)));
    (*(undefined4 *)(gen_frame + 0x50)) = *((undefined4 *)GEN_TOP((iVar1 + 0x40)));
    (*(undefined4 *)(gen_frame + 0x54)) = *((undefined4 *)GEN_TOP((iVar1 + 0x44)));
    (*(undefined4 *)(gen_frame + 0x58)) = *((undefined4 *)GEN_TOP((iVar1 + 0x48)));
    (*(undefined4 *)(gen_frame + 0x5c)) = *((undefined4 *)GEN_TOP((iVar1 + 0x50)));
    (*(undefined4 *)(gen_frame + 0x60)) = *((undefined4 *)GEN_TOP((iVar1 + 0x54)));
    (*(undefined4 *)(gen_frame + 0x64)) = *((undefined4 *)GEN_TOP((iVar1 + 0x58)));
    F_00d0de90(&(*(undefined2 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)));
    uVar2 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)),0x68);
  }
  return uVar2;
}

/* ref: FUN_00d0d920 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d0d920(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd0d920u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_FRAME_DECL(0xa0, 0);
  int * this;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * pBVar4;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  F_00d22580(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[33])REFP(0x11325e4));
  F_00cccb10(param_1 + 0x15c GEN_EDX_ARG,(float)(float10)1);
  *(uint *)(param_1 + 0xb0) =
       *(uint *)(param_1 + 0xb0) ^ ((uint)param_5 << 4 ^ *(uint *)(param_1 + 0xb0)) & 0x10;
  if (param_5 == 0) {
    *(undefined4 * PTR32 *)(param_1 + 0x128) = param_2;
  }
  else {
    *(undefined * PTR32 *)(param_1 + 0x128) = param_1 + 0x180;
    puVar3 = param_2;
    pBVar4 = param_1 + 0x180;
    for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 - 1) {
      *(undefined4 *)pBVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pBVar4 = pBVar4 + 4;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x128);
  F_00d0c460(param_1 GEN_EDX_ARG);
  F_00d20fe0(param_1 GEN_EDX_ARG,~(*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 4))) >> 5) & 1);
  this = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xe4))))(this GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x68))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x80);
  }
  F_00d0d850(param_1 GEN_EDX_ARG,0x401);
  return (uint)param_1;
}

/* ref: FUN_00d0da50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d0da50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd0da50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xa0, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  F_00d22720(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11325e4));
  F_00cccb10((int)this + 0x15c GEN_EDX_ARG,(float)(float10)1);
  *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) | 0x10;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x128))) = ((undefined *)GEN_TOP(((int)this + 0x180)));
  F_00609710(((undefined *)GEN_TOP(((int)this + 0x180))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP(((int)this + 0x128)));
  this_00 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x80);
  }
  F_00d0d850(this GEN_EDX_ARG,0x401);
  return (uint)this;
}

/* ref: FUN_00d0db20 */
GEN_LIB GEN_FRAME double F_00d0db20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd0db20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  float fVar1;
  
  fVar1 = F_00d0d1c0(param_1,param_2,param_3);
  return (double)fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf29 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d0db30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(HWND param_1, unsigned int gen_a1), GEN_P(HDC param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd0db30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(HWND param_1 = (HWND)gen_a1;)
  GEN_PIN(HDC param_2 = (HDC)gen_a2;)
  GEN_FRAME_DECL_GS(0x15c, 4, 4);
  char cVar1;
  HGDIOBJ pvVar2;
  undefined * pHVar3;
  int * piVar4;
  uint uVar5;
  float * pfVar6;
  char * pcVar7;
  int iVar8;
  int x;
  int iVar9;
  int iVar10;
  float fVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x154)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x158));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  pvVar2 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x18)) = pvVar2;
  pvVar2 = gen_imp_SelectObject(param_2,pvVar2);
  (*(HGDIOBJ *)(gen_frame + 0x14)) = pvVar2;
  pHVar3 = gen_imp_CreatePen(0,2,0x8000);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = pHVar3;
  pvVar2 = gen_imp_SelectObject(param_2,pHVar3);
  (*(HGDIOBJ *)(gen_frame + 0x10)) = pvVar2;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x84)));
  iVar10 = (*(tagRECT *)(gen_frame + 0x84)).right / 2;
  iVar9 = (*(tagRECT *)(gen_frame + 0x84)).bottom / 2;
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x1c) + 0xc))) + 0x98))))
                            (*((int * PTR32 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x1c) + 0xc))) GEN_EDX_ARG)));
  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar4;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x5c))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x34)));
  if ((char)uVar5 != '\0') {
    (*(float * PTR32 *)(gen_frame + 0x30)) = ((float *)(gen_frame + 0x94));
    (*(int *)(gen_frame + 0x20)) = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x128) + 0x20;
    (*(int *)(gen_frame + 0x2c)) = 4;
    do {
      pfVar6 = ((float *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x20)))));
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 0x10;
      *(*(float * PTR32 *)(gen_frame + 0x30)) = *pfVar6;
      (*(float * PTR32 *)(gen_frame + 0x30))[1] = pfVar6[1];
      fVar11 = pfVar6[3];
      (*(float * PTR32 *)(gen_frame + 0x30))[2] = pfVar6[2];
      (*(float * PTR32 *)(gen_frame + 0x30))[3] = fVar11;
      iVar8 = (*(int *)(gen_frame + 0x2c)) - 1;
      (*(int *)(gen_frame + 0x2c)) = iVar8;
      (*(float * PTR32 *)(gen_frame + 0x30)) = (*(float * PTR32 *)(gen_frame + 0x30)) + 4;
    } while (iVar8 != 0);
    iVar8 = iVar9 - (int)((double)(*(float *)(gen_frame + 0x9c)) * *(double *)&REFG(double, 0x1132488));
    (*(int *)(gen_frame + 0x2c)) = iVar8;
    x = iVar10 - (int)(*(double *)&REFG(double, 0x1132488) * (double)((float *)(gen_frame + 0x94))[0]);
    (*(float * PTR32 *)(gen_frame + 0x30)) = ((float *)GEN_TOP(x));
    gen_imp_MoveToEx(param_2,x,iVar8,(LPPOINT)0x0);
    gen_imp_LineTo(param_2,iVar10 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xa4))),
           iVar9 - (int)((double)(*(float *)(gen_frame + 0xac)) * *(double *)&REFG(double, 0x1132488)));
    gen_imp_LineTo(param_2,iVar10 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xb4))),
           iVar9 - (int)((double)(*(float *)(gen_frame + 0xbc)) * *(double *)&REFG(double, 0x1132488)));
    gen_imp_LineTo(param_2,iVar10 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xc4))),
           iVar9 - (int)((double)(*(float *)(gen_frame + 0xcc)) * *(double *)&REFG(double, 0x1132488)));
    iVar9 = (*(int *)(gen_frame + 0x2c));
    gen_imp_LineTo(param_2,(*(float * PTR32 *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x2c)));
    F_004ec420(((float *)(gen_frame + 0x94)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x30))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x74)));
    fVar11 = F_00d0d1c0(*(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x128),((float *)(gen_frame + 0x94)),((undefined1 *)(gen_frame + 0x74)));
    (*(int * PTR32 *)(gen_frame + 0x28)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar11)));
    F_00c472af(((char *)(gen_frame + 0xd4)),0x80,((char *)REFP(0x11324a0)),(int)(ulonglong)gen_d2bits((double)fVar11),
               (int)((ulonglong)gen_d2bits((double)fVar11) >> 0x20));
    pcVar7 = ((char *)(gen_frame + 0xd4));
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    gen_imp_TextOutA(param_2,(int)(*(float * PTR32 *)(gen_frame + 0x30)),iVar9,((char *)(gen_frame + 0xd4)),(int)pcVar7 - (int)(((char *)(gen_frame + 0xd4)) + 1));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x10)));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x14)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x1c)));
    uVar5 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x18)));
  }
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d0de40(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd0de40u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_3)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),local_c);
  return uVar1;
}

/* ref: FUN_00d0de90 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d0de90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd0de90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *param_1 = *(undefined2 *)this;
  param_1[1] = *((undefined2 *)GEN_TOP(((int)this + 2)));
  *(undefined4 *)(param_1 + 4) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined4 *)(param_1 + 6) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  *(undefined4 *)(param_1 + 0xc) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *(undefined4 *)(param_1 + 0xe) = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  *(undefined4 *)(param_1 + 0x10) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  *(undefined4 *)(param_1 + 0x16) = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  *(undefined4 *)(param_1 + 0x14) = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  param_1[0x18] = *((undefined2 *)GEN_TOP(((int)this + 0x30)));
  param_1[0x19] = *((undefined2 *)GEN_TOP(((int)this + 0x32)));
  *(undefined1 *)(param_1 + 0x1a) = *((undefined1 *)GEN_TOP(((int)this + 0x34)));
  *(undefined4 *)(param_1 + 0x1c) = *((undefined4 *)GEN_TOP(((int)this + 0x38)));
  *(undefined4 *)(param_1 + 0x1e) = *((undefined4 *)GEN_TOP(((int)this + 0x3c)));
  *(undefined4 *)(param_1 + 0x20) = *((undefined4 *)GEN_TOP(((int)this + 0x40)));
  *(undefined4 *)(param_1 + 0x22) = *((undefined4 *)GEN_TOP(((int)this + 0x44)));
  *(undefined4 *)(param_1 + 0x24) = *((undefined4 *)GEN_TOP(((int)this + 0x48)));
  *(undefined4 *)(param_1 + 0x26) = *((undefined4 *)GEN_TOP(((int)this + 0x4c)));
  *(undefined4 *)(param_1 + 0x28) = *((undefined4 *)GEN_TOP(((int)this + 0x50)));
  *(undefined4 *)(param_1 + 0x2a) = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
  *(undefined4 *)(param_1 + 0x2c) = *((undefined4 *)GEN_TOP(((int)this + 0x58)));
  *(undefined4 *)(param_1 + 0x2e) = *((undefined4 *)GEN_TOP(((int)this + 0x5c)));
  *(undefined4 *)(param_1 + 0x30) = *((undefined4 *)GEN_TOP(((int)this + 0x60)));
  *(undefined4 *)(param_1 + 0x32) = *((undefined4 *)GEN_TOP(((int)this + 100)));
  return 0;
}

/* ref: FUN_00d0df40 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00d0df40(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd0df40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  ushort uVar2;
  uint * puVar3;
  uint * puVar4;
  int local_8;
  
  F_00d0c080(param_1 GEN_EDX_FWD,param_2);
  puVar4 = ((uint *)GEN_TOP((param_1 + 0x28)));
  local_8 = 4;
  puVar3 = ((uint *)GEN_TOP((param_2 + 0x20)));
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar3)));
    *puVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar4[-1];
    puVar3[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar4;
    puVar3[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar4[1];
    puVar3[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar4 = puVar4 + 4;
    local_8 = local_8 - 1;
    puVar3 = puVar3 + 4;
  } while (local_8 != 0);
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x60)));
  *((uint *)GEN_TOP((param_2 + 0x60))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 100)));
  *((uint *)GEN_TOP((param_2 + 100))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((byte *)GEN_TOP((param_2 + 0x68))) =
       *((byte *)GEN_TOP((param_2 + 0x68))) ^ (*((byte *)GEN_TOP((param_2 + 0x68))) ^ *((byte *)GEN_TOP((param_1 + 0x68)))) & 0xf;
  *((byte *)GEN_TOP((param_2 + 0x68))) = *((byte *)GEN_TOP((param_1 + 0x68))) & 0x10 | *((byte *)GEN_TOP((param_2 + 0x68))) & 0xf;
  *((undefined2 *)GEN_TOP((param_2 + 0x69))) = 0;
  *((undefined1 *)GEN_TOP((param_2 + 0x6b))) = 0;
  *((ushort *)GEN_TOP((param_2 + 0x6c))) = *((ushort *)GEN_TOP((param_1 + 0x6c))) << 8 | *((ushort *)GEN_TOP((param_1 + 0x6c))) >> 8;
  uVar2 = *((ushort *)GEN_TOP((param_1 + 0x6e))) << 8 | *((ushort *)GEN_TOP((param_1 + 0x6e))) >> 8;
  *((ushort *)GEN_TOP((param_2 + 0x6e))) = uVar2;
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d0e050(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd0e050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[33])REFP(0x11325e4));
  F_00cccb40(param_1 + 0x57 GEN_EDX_FWD);
  F_00d23680(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00d0e100 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d0e100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd0e100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = uVar2;
  *((float *)GEN_TOP(((int)this + 0x3c))) = (float)(float10)1;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d0e150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd0e150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  
  F_00d213b0(this GEN_EDX_FWD,param_1,(undefined1)param_2);
  iVar10 = 0;
  do {
    iVar9 = *(int *)(this + 0x128);
    fVar4 = *((float *)GEN_TOP((iVar9 + 0x28 + iVar10)));
    fVar5 = *((float *)GEN_TOP((iVar9 + 0x2c + iVar10)));
    pfVar1 = ((float *)GEN_TOP((iVar9 + 0x20 + iVar10)));
    pfVar2 = ((float *)GEN_TOP((iVar9 + 0x24 + iVar10)));
    fVar6 = param_1[3];
    pfVar3 = ((float *)GEN_TOP((iVar9 + 0x20 + iVar10)));
    iVar10 = iVar10 + 0x10;
    fVar7 = param_1[1];
    fVar8 = param_1[2];
    *pfVar3 = *pfVar1 + *param_1;
    pfVar3[1] = *pfVar2 + fVar7;
    pfVar3[2] = fVar4 + fVar8;
    pfVar3[3] = fVar5 + fVar6;
    *((float *)GEN_TOP((*(int *)(this + 0x128) + 0x1c + iVar10))) = (float)(float10)1;
  } while (iVar10 < 0x40);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d0e220(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd0e220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x80)));
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d0e240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd0e240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  float10 fVar1;
  
  fVar1 = F_00d22f40(this GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x80)))),
                       *((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) >> 2 & 1);
  *param_1 = ((float)GEN_TOF((fVar1 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x78))))));
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d0e280(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd0e280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0xa0) {
    return 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x128)));
  puVar3 = param_2;
  for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0xa0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf19 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d0e2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd0e2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x128);
  *param_1 = *((undefined4 *)GEN_TOP((iVar1 + 0x60)));
  *param_2 = *((undefined4 *)GEN_TOP((iVar1 + 100)));
  *param_3 = *((undefined4 *)GEN_TOP((iVar1 + 0x84)));
  *param_4 = *((undefined4 *)GEN_TOP((iVar1 + 0x80)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d0e300(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd0e300u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x128)));
  *((float *)GEN_TOP((uVar1 + 0x60))) = param_2;
  *((float *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x128))) + 100))) = param_3;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d0e320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd0e320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xd0, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0xbc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0xb0);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf27 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d0e3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd0e3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
  for (iVar2 = 0x28; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  bVar1 = F_00d228c0(this GEN_EDX_FWD);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf29 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d0e3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(HWND param_1, unsigned int gen_a1), GEN_P(HDC param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd0e3d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(HWND param_1 = (HWND)gen_a1;)
  GEN_PIN(HDC param_2 = (HDC)gen_a2;)
  GEN_FRAME_DECL_GS(0x9c, 4, 4);
  char cVar1;
  int iVar2;
  undefined * pHVar3;
  HGDIOBJ pvVar4;
  undefined * pHVar5;
  char * pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong color;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x94)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x98));
  (*(HWND *)(gen_frame + 0x24)) = param_1;
  F_00c48350(((undefined *)(gen_frame + 0x28)),0,0x3c);
  F_00c49908(((CHAR *)(((char *)((undefined *)(gen_frame + 0x28)) + 28))),0x20,&REFG(undefined, 0x1132680));
  (*(LONG *)((char *)((undefined *)(gen_frame + 0x28)))) = 0xd;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x28)) + 23))) = 0x80;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x28)) + 27))) = '\x01';
  pHVar3 = gen_imp_CreateFontIndirectA(((undefined *)(gen_frame + 0x28)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pHVar3;
  pvVar4 = gen_imp_SelectObject(param_2,pHVar3);
  (*(HGDIOBJ *)(gen_frame + 0x14)) = pvVar4;
  pvVar4 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x10)) = pvVar4;
  pvVar4 = gen_imp_SelectObject(param_2,pvVar4);
  (*(HGDIOBJ *)(gen_frame + 0x18)) = pvVar4;
  if (((byte)this[0xb0] & 1) == 0) {
    iVar9 = 1;
    color = 0x900000;
  }
  else {
    color = 0x80;
    iVar9 = 2;
  }
  pHVar5 = gen_imp_CreatePen(0,iVar9,color);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = pHVar5;
  pvVar4 = gen_imp_SelectObject(param_2,pHVar5);
  (*(HGDIOBJ *)(gen_frame + 0x1c)) = pvVar4;
  gen_imp_GetClientRect((*(HWND *)(gen_frame + 0x24)),&(*(tagRECT *)(gen_frame + 0x64)));
  iVar9 = (*(tagRECT *)(gen_frame + 0x64)).right / 2;
  (*(HWND *)(gen_frame + 0x24)) = (HWND)((*(tagRECT *)(gen_frame + 0x64)).bottom / 2);
  gen_imp_MoveToEx(param_2,iVar9 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 300)),
           (*(tagRECT *)(gen_frame + 0x64)).bottom / 2 - (int)((double)*(float *)(this + 0x134) * *(double *)&REFG(double, 0x1132488)),
           (LPPOINT)0x0);
  gen_imp_LineTo(param_2,iVar9 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x13c)),
         (int)(*(HWND *)(gen_frame + 0x24)) - (int)((double)*(float *)(this + 0x144) * *(double *)&REFG(double, 0x1132488)));
  gen_imp_LineTo(param_2,iVar9 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x14c)),
         (int)(*(HWND *)(gen_frame + 0x24)) - (int)((double)*(float *)(this + 0x154) * *(double *)&REFG(double, 0x1132488)));
  gen_imp_LineTo(param_2,iVar9 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x15c)),
         (int)(*(HWND *)(gen_frame + 0x24)) - (int)((double)*(float *)(this + 0x164) * *(double *)&REFG(double, 0x1132488)));
  gen_imp_LineTo(param_2,iVar9 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 300)),
         (int)(*(HWND *)(gen_frame + 0x24)) - (int)((double)*(float *)(this + 0x134) * *(double *)&REFG(double, 0x1132488)));
  if (((byte)this[0xb0] & 1) != 0) {
    iVar9 = iVar9 - (int)((double)*(float *)(this + 0x50) * *(double *)&REFG(double, 0x1132488));
    iVar8 = (int)(*(HWND *)(gen_frame + 0x24)) - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x58));
    (*(HWND *)(gen_frame + 0x24)) = (HWND)iVar8;
    iVar2 = (int)((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 100))) * *(double *)&REFG(undefined, 0x10947f0));
    gen_imp_Ellipse(param_2,iVar9 - iVar2,iVar8 - iVar2,iVar2 + iVar9,iVar2 + iVar8);
    iVar2 = (int)((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60))) * *(double *)&REFG(undefined, 0x10947f0));
    gen_imp_Ellipse(param_2,iVar9 - iVar2,(int)(*(HWND *)(gen_frame + 0x24)) - iVar2,iVar2 + iVar9,iVar2 + (int)(*(HWND *)(gen_frame + 0x24)));
    F_00c472af(((char *)(gen_frame + 0x74)),0x20,&REFG(undefined, 0x113268c),
               (int)(ulonglong)
                    gen_d2bits((double)*(float *)(this + 0x80) * *(double *)&REFG(undefined, 0x1088118)),
               (int)((ulonglong)
                     gen_d2bits((double)*(float *)(this + 0x80) * *(double *)&REFG(undefined, 0x1088118)) >> 0x20)
              );
    pcVar6 = ((char *)(gen_frame + 0x74));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    (*(int *)(gen_frame + 0xc)) = (int)pcVar6 - (int)(((char *)(gen_frame + 0x74)) + 1);
    gen_imp_GetTextExtentPoint32A(param_2,((char *)(gen_frame + 0x74)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x74)) + 1),&(*(undefined8 *)(gen_frame + 0x0)));
    gen_imp_TextOutA(param_2,iVar9 - (*(LONG *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) / 2,(int)(*(HWND *)(gen_frame + 0x24)) - (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) / 2,((char *)(gen_frame + 0x74)),(*(int *)(gen_frame + 0xc)));
    if (((byte)this[0xb0] & 1) != 0) {
      (*(HWND *)(gen_frame + 0x24)) = (HWND)((*(tagRECT *)(gen_frame + 0x64)).bottom / 2);
      gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x1c)));
      gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x20)));
      pHVar5 = gen_imp_CreatePen(0,1,0x900000);
      (*(undefined * PTR32 *)(gen_frame + 0x20)) = pHVar5;
      pvVar4 = gen_imp_SelectObject(param_2,pHVar5);
      (*(HGDIOBJ *)(gen_frame + 0x1c)) = pvVar4;
      gen_imp_MoveToEx(param_2,(*(tagRECT *)(gen_frame + 0x64)).right / 2 -
                       (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x60)),
               (int)(*(HWND *)(gen_frame + 0x24)) - (int)((double)*(float *)(this + 0x68) * *(double *)&REFG(double, 0x1132488)),
               (LPPOINT)0x0);
      gen_imp_LineTo(param_2,(*(tagRECT *)(gen_frame + 0x64)).right / 2,(int)(*(HWND *)(gen_frame + 0x24)));
    }
  }
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x14)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x1c)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x18)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x8)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x20)));
  uVar7 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x10)));
  return uVar7;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d0e7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd0e7a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined * _File;
  byte bVar5;
  int iVar6;
  
  _File = param_1;
  bVar5 = F_00d21f00((undefined *)this GEN_EDX_FWD,param_1);
  if (bVar5 == 0) {
    return 0;
  }
  iVar6 = 0;
  param_1 = ((undefined *)GEN_TOP(0x0));
  do {
    iVar1 = *(int *)(this + 0x128);
    dVar2 = (double)*((float *)GEN_TOP((iVar6 + 0x28 + iVar1)));
    dVar3 = (double)*((float *)GEN_TOP((iVar6 + 0x24 + iVar1)));
    dVar4 = (double)*((float *)GEN_TOP((iVar6 + 0x20 + iVar1)));
    F_00c49386(_File,((char *)REFP(0x1132694)),param_1,(int)(ulonglong)gen_d2bits(dVar4),
             (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
             (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
             (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1)));
    iVar6 = iVar6 + 0x10;
  } while (iVar6 < 0x40);
  F_00c49386(_File,((char *)REFP(0x11326b0)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60))))));
  F_00c49386(_File,((char *)REFP(0x11326c0)),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 100)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 100)))) >> 0x20));
  param_1 = ((undefined *)GEN_TOP(0x0));
  iVar6 = 0x68;
  do {
    F_00c49386(_File,((char *)REFP(0x11326d0)),param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))) >> 0x20
                  ));
    param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1)));
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x70);
  F_00c49386(_File,((char *)REFP(0x11326e4)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x70))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x70))))));
  F_00c49386(_File,((char *)REFP(0x11326f8)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x74))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x74))))));
  F_00c49386(_File,((char *)REFP(0x1132708)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x78))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x78))))));
  F_00c49386(_File,((char *)REFP(0x1132714)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x7c))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x7c))))));
  F_00c49386(_File,((char *)REFP(0x1132724)),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x80)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x80)))) >> 0x20));
  F_00c49386(_File,((char *)REFP(0x1132738)),*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x8d))) & 1);
  F_00c49386(_File,((char *)REFP(0x1132750)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf31 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d0e930(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd0e930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = ((char *)REFP(0x1132768));
  pbVar5 = ((byte *)GEN_TOP(param_2));
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d0e961: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d0e966;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d0e961;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d0e966: ;
  if (iVar3 == 0) {
    uVar4 = F_00d00d00(0,0);
    if (uVar4 != 0) {
      uVar4 = F_00c4c74c(uVar4);
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 2) * 0x10))) = (float)dVar7;
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24 + uVar4 * 0x10))) = (float)dVar7;
          pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
          if (pcVar2 != ((char *)GEN_TOP(0x0))) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 0x10))) = (float)dVar7;
            return 1;
          }
        }
      }
    }
  }
  else {
    pcVar2 = ((char *)REFP(0x1132774));
    pbVar5 = ((byte *)GEN_TOP(param_2));
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d0ea36: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d0ea3b;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d0ea36;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d0ea3b: ;
    if (iVar3 == 0) {
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x60))) = (float)dVar7;
        return 1;
      }
    }
    else {
      pcVar2 = ((char *)REFP(0x1132780));
      pbVar5 = ((byte *)GEN_TOP(param_2));
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00d0ea98: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d0ea9d;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00d0ea98;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d0ea9d: ;
      if (iVar3 == 0) {
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 100))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = ((char *)REFP(0x113278c));
        pbVar5 = ((byte *)GEN_TOP(param_2));
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d0eb00: ;
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d0eb05;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d0eb00;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d0eb05: ;
        if (iVar3 == 0) {
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
            if (pcVar2 != ((char *)GEN_TOP(0x0))) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x68 + uVar4 * 4))) = (float)dVar7;
              return 1;
            }
          }
        }
        else {
          pcVar2 = ((char *)REFP(0x1132794));
          pbVar5 = ((byte *)GEN_TOP(param_2));
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d0eb80: ;
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d0eb85;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d0eb80;
            pcVar2 = pcVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d0eb85: ;
          if (iVar3 == 0) {
            pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
            if (pcVar2 != ((char *)GEN_TOP(0x0))) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x70))) = (float)dVar7;
              return 1;
            }
          }
          else {
            pcVar2 = ((char *)REFP(0x11327a0));
            pbVar5 = ((byte *)GEN_TOP(param_2));
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d0ebe2: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d0ebe7;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d0ebe2;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d0ebe7: ;
            if (iVar3 == 0) {
              pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
              if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                dVar7 = F_00c4acaa(pcVar2);
                *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x74))) = (float)dVar7;
                return 1;
              }
            }
            else {
              pcVar2 = ((char *)REFP(0x11327a8));
              pbVar5 = ((byte *)GEN_TOP(param_2));
              do {
                bVar1 = *pcVar2;
                bVar6 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_00d0ec44: ;
                  iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                  goto LAB_00d0ec49;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar2[1];
                bVar6 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_00d0ec44;
                pcVar2 = pcVar2 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00d0ec49: ;
              if (iVar3 == 0) {
                pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                  dVar7 = F_00c4acaa(pcVar2);
                  *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x78))) = (float)dVar7;
                  return 1;
                }
              }
              else {
                pcVar2 = ((char *)REFP(0x11327b0));
                pbVar5 = ((byte *)GEN_TOP(param_2));
                do {
                  bVar1 = *pcVar2;
                  bVar6 = bVar1 < *pbVar5;
                  if (bVar1 != *pbVar5) {
LAB_00d0eca6: ;
                    iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                    goto LAB_00d0ecab;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pcVar2[1];
                  bVar6 = bVar1 < pbVar5[1];
                  if (bVar1 != pbVar5[1]) goto LAB_00d0eca6;
                  pcVar2 = pcVar2 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_00d0ecab: ;
                if (iVar3 == 0) {
                  pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                  if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                    dVar7 = F_00c4acaa(pcVar2);
                    *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x7c))) = (float)dVar7;
                    return 1;
                  }
                }
                else {
                  pcVar2 = ((char *)REFP(0x11327bc));
                  pbVar5 = ((byte *)GEN_TOP(param_2));
                  do {
                    bVar1 = *pcVar2;
                    bVar6 = bVar1 < *pbVar5;
                    if (bVar1 != *pbVar5) {
LAB_00d0ed08: ;
                      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                      goto LAB_00d0ed0d;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pcVar2[1];
                    bVar6 = bVar1 < pbVar5[1];
                    if (bVar1 != pbVar5[1]) goto LAB_00d0ed08;
                    pcVar2 = pcVar2 + 2;
                    pbVar5 = pbVar5 + 2;
                  } while (bVar1 != 0);
                  iVar3 = 0;
LAB_00d0ed0d: ;
                  if (iVar3 == 0) {
                    pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                    if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                      dVar7 = F_00c4acaa(pcVar2);
                      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x80))) = (float)dVar7;
                      return 1;
                    }
                  }
                  else {
                    pcVar2 = ((char *)REFP(0x11327c8));
                    pbVar5 = ((byte *)GEN_TOP(param_2));
                    do {
                      bVar1 = *pcVar2;
                      bVar6 = bVar1 < *pbVar5;
                      if (bVar1 != *pbVar5) {
LAB_00d0ed70: ;
                        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                        goto LAB_00d0ed75;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pcVar2[1];
                      bVar6 = bVar1 < pbVar5[1];
                      if (bVar1 != pbVar5[1]) goto LAB_00d0ed70;
                      pcVar2 = pcVar2 + 2;
                      pbVar5 = pbVar5 + 2;
                    } while (bVar1 != 0);
                    iVar3 = 0;
LAB_00d0ed75: ;
                    if (iVar3 == 0) {
                      uVar4 = F_00d00d00(0,0);
                      if (uVar4 != 0) {
                        uVar4 = F_00c4c74c(uVar4);
                        *((char *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x8c))) = (char)uVar4;
                        return 1;
                      }
                    }
                    else {
                      pcVar2 = ((char *)REFP(0x11327d8));
                      pbVar5 = ((byte *)GEN_TOP(param_2));
                      do {
                        bVar1 = *pcVar2;
                        bVar6 = bVar1 < *pbVar5;
                        if (bVar1 != *pbVar5) {
LAB_00d0edd0: ;
                          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                          goto LAB_00d0edd5;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pcVar2[1];
                        bVar6 = bVar1 < pbVar5[1];
                        if (bVar1 != pbVar5[1]) goto LAB_00d0edd0;
                        pcVar2 = pcVar2 + 2;
                        pbVar5 = pbVar5 + 2;
                      } while (bVar1 != 0);
                      iVar3 = 0;
LAB_00d0edd5: ;
                      if (iVar3 != 0) {
                        bVar1 = F_00d22040(param_1 GEN_EDX_ARG,param_2);
                        return bVar1;
                      }
                      uVar4 = F_00d00d00(0,0);
                      if (uVar4 != 0) {
                        uVar4 = F_00c4c74c(uVar4);
                        pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x8d)));
                        *pbVar5 = *pbVar5 ^ (*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x8d))) ^
                                            (byte)uVar4) & 1;
                        return 1;
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
  return 0;
}

/* ref: FUN_00d0ee30 */
GEN_LIB GEN_NOFRAME float F_00d0ee30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd0ee30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0xa0, 0);
  float * pfVar1;
  byte bVar2;
  float * pfVar3;
  float * pfVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  (*(undefined3 *)(gen_frame + 0x88)) = (undefined3)param_1;
  (*(undefined1 *)(gen_frame + 0x8b)) = (undefined1)((uint)param_1 >> 0x18);
  (*(float * PTR32 *)(gen_frame + 0x10)) = param_3;
  pfVar4 = ((float *)(gen_frame + 0x38));
  iVar6 = param_1 + 0x20;
  (*(float *)(gen_frame + 0x14)) = 5.60519e-45;
  do {
    pfVar3 = ((float *)GEN_TOP(F_00c34320(param_2 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),iVar6)));
    pfVar1 = (*(float * PTR32 *)(gen_frame + 0x10));
    *pfVar4 = *pfVar3;
    pfVar4[1] = pfVar3[1];
    pfVar4[2] = pfVar3[2];
    pfVar4[3] = pfVar3[3];
    iVar6 = iVar6 + 0x10;
    pfVar4 = pfVar4 + 4;
    fVar14 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) - 1);
    (*(float *)(gen_frame + 0x14)) = fVar14;
  } while (fVar14 != 0.0);
  iVar6 = CONCAT13((*(undefined1 *)(gen_frame + 0x8b)),(*(undefined3 *)(gen_frame + 0x88)));
  if ((*((byte *)GEN_TOP((iVar6 + 4))) & 4) == 0) {
    (*(float *)(gen_frame + 0x14)) = ((float *)(gen_frame + 0x38))[1];
    F_00d218f0((*(float * PTR32 *)(gen_frame + 0x10))[1],&(*(float *)(gen_frame + 0x14)),iVar6,iVar6 + 0x68);
    ((float *)(gen_frame + 0x38))[1] = (*(float *)(gen_frame + 0x14));
    ((float *)(gen_frame + 0x38))[5] = (*(float *)(gen_frame + 0x14));
    (*(float *)(gen_frame + 0x5c)) = (*(float *)(gen_frame + 0x14));
    (*(float *)(gen_frame + 0x6c)) = (*(float *)(gen_frame + 0x14));
  }
  fVar14 = *pfVar1;
  fVar9 = pfVar1[1];
  fVar10 = pfVar1[2];
  fVar12 = pfVar1[3];
  iVar5 = 4;
  pfVar4 = ((float *)(gen_frame + 0x38)) + 2;
  do {
    iVar5 = iVar5 - 1;
    fVar11 = pfVar4[-2] - fVar14;
    fVar13 = pfVar4[-1] - fVar9;
    fVar15 = *pfVar4 - fVar10;
    fVar16 = pfVar4[1] - fVar12;
    (*(float *)(gen_frame + 0x0)) = fVar11;
    (*(float *)(gen_frame + 0x4)) = fVar13;
    (*(float *)(gen_frame + 0x8)) = fVar15;
    (*(float *)(gen_frame + 0xc)) = fVar16;
    (*(float *)(gen_frame + 0x7c)) = fVar11;
    pfVar4[-2] = fVar11;
    (*(float *)(gen_frame + 0x80)) = fVar13;
    pfVar4[-1] = fVar13;
    ((byte *)(gen_frame + 0x84))[0] = (byte)(uint)gen_fl2bits(fVar15);
    ((byte *)(gen_frame + 0x84))[1] = (byte)((uint)gen_fl2bits(fVar15) >> 8);
    ((byte *)(gen_frame + 0x84))[2] = (byte)((uint)gen_fl2bits(fVar15) >> 0x10);
    ((byte *)(gen_frame + 0x84))[3] = (byte)((uint)gen_fl2bits(fVar15) >> 0x18);
    *pfVar4 = fVar15;
    (*(undefined3 *)(gen_frame + 0x88)) = (undefined3)(uint)gen_fl2bits(fVar16);
    (*(undefined1 *)(gen_frame + 0x8b)) = (undefined1)((uint)gen_fl2bits(fVar16) >> 0x18);
    pfVar4[1] = fVar16;
    pfVar4 = pfVar4 + 4;
  } while (iVar5 != 0);
  (*(float * PTR32 *)(gen_frame + 0x10)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)(float10)0)));
  F_01052f50(((float *)(gen_frame + 0x38)),&(*(float *)(gen_frame + 0x28)));
  bVar2 = F_01053270(((float *)(gen_frame + 0x38)),&(*(float *)(gen_frame + 0x28)));
  if (bVar2 == 1) {
    fVar12 = 0.0 - ((float *)(gen_frame + 0x38))[0];
    fVar14 = 0.0 - ((float *)(gen_frame + 0x38))[1];
    (*(float *)(gen_frame + 0x0)) = fVar12;
    (*(float *)(gen_frame + 0x4)) = fVar14;
    (*(float *)(gen_frame + 0x8)) = 0.0 - ((float *)(gen_frame + 0x38))[2];
    (*(float *)(gen_frame + 0xc)) = 0.0 - ((float *)(gen_frame + 0x38))[3];
    (*(float *)(gen_frame + 0x7c)) = fVar12;
    (*(float *)(gen_frame + 0x80)) = fVar14;
    fVar14 = (*(float *)(gen_frame + 0x2c)) * fVar14;
    fVar9 = (*(float *)(gen_frame + 0x30)) * (0.0 - ((float *)(gen_frame + 0x38))[2]);
    fVar10 = (*(float *)(gen_frame + 0x34)) * (0.0 - ((float *)(gen_frame + 0x38))[3]);
    fVar12 = ((fVar14 + (*(float *)(gen_frame + 0x28)) * fVar12) + fVar9) + fVar10;
    (*(float *)(gen_frame + 0x0)) = fVar12;
    (*(float *)(gen_frame + 0x4)) = ((fVar14 + fVar14) + fVar9) + fVar10;
    (*(float *)(gen_frame + 0x8)) = ((fVar14 + fVar9) + fVar9) + fVar10;
    (*(float *)(gen_frame + 0xc)) = ((fVar14 + fVar10) + fVar9) + fVar10;
    (*(float * PTR32 *)(gen_frame + 0x10)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)fVar12))))));
  }
  else {
    ((byte *)(gen_frame + 0x84))[0] = 0;
    ((byte *)(gen_frame + 0x84))[1] = 1;
    ((byte *)(gen_frame + 0x84))[2] = 1;
    (*((undefined4 *)GEN_TOP((gen_frame + 0x87)))) = 0x3030202;
    (*(undefined1 *)(gen_frame + 0x8b)) = 0;
    iVar5 = 0;
    do {
      fVar14 = F_010536a0(((float *)(gen_frame + 0x38)) + (uint)((byte *)(gen_frame + 0x84))[(int)(iVar5 * 2)] * 4,
                            ((float *)(gen_frame + 0x38)) + (uint)((byte *)(gen_frame + 0x84))[(int)(iVar5 * 2 + 1)] * 4,((undefined1 *)(gen_frame + 0x18)));
      (*(float *)(gen_frame + 0x14)) = fVar14;
      fVar7 = (float10)fVar14;
      fVar8 = (float10)*((float *)GEN_TOP((iVar6 + 100)));
      if (!(fVar7 <= fVar8) == ((GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7)) || fVar8 == fVar7)) goto LAB_00d0f10c;
      fVar14 = ((float)GEN_TOF((fVar7 - (float10)*((float *)GEN_TOP((iVar6 + 100))))));
      (*(float *)(gen_frame + 0x14)) = fVar14;
      fVar7 = (float10)fVar14;
      if (iVar5 == 0) {
        (*(float * PTR32 *)(gen_frame + 0x10)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
      }
      else {
        fVar8 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x10)))));
        if (fVar7 <= fVar8 && ((!GEN_ISNAN(fVar8) && !GEN_ISNAN(fVar7)) && fVar8 != fVar7)) {
          (*(float * PTR32 *)(gen_frame + 0x10)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
  }
  fVar7 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x10)))));
  fVar8 = (float10)*((float *)GEN_TOP((iVar6 + 100)));
  if (!(fVar7 <= fVar8) != ((GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7)) || fVar8 == fVar7)) {
    return GEN_X87(((float)GEN_TOF((fVar7 - (float10)*((float *)GEN_TOP((iVar6 + 100)))))));
  }
LAB_00d0f10c: ;
  return (float)(float10)0;
}

/* ref: FUN_00d0f130 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d0f130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd0f130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL(0x144, 12);
  float * pfVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code * pcVar6;
  undefined3 uVar7;
  byte bVar8;
  int * piVar9;
  uint uVar10;
  undefined4 * puVar11;
  undefined4 * puVar12;
  int iVar13;
  bool bVar14;
  float10 fVar15;
  float10 fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  (*(uint *)(gen_frame + 0x130)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x134);
  piVar9 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  (*(float * PTR32 *)(gen_frame + 0x8)) = param_1;
  piVar9 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x98))))(piVar9 GEN_EDX_FWD)));
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar9;
  uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x5c))))(piVar9 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  if ((char)uVar10 != '\0') {
    iVar13 = *((int *)GEN_TOP(((int)this + 0x128)));
    uVar3 = *((undefined4 *)GEN_TOP((iVar13 + 0x24)));
    (*(undefined4 *)(gen_frame + 0xdc)) = *((undefined4 *)GEN_TOP((iVar13 + 0x20)));
    (*(undefined4 *)(gen_frame + 0xe0)) = uVar3;
    (*(undefined4 *)(gen_frame + 0xe4)) = *((undefined4 *)GEN_TOP((iVar13 + 0x28)));
    (*(undefined4 *)(gen_frame + 0xe8)) = *((undefined4 *)GEN_TOP((iVar13 + 0x2c)));
    (*(undefined4 *)(gen_frame + 0xec)) = *((undefined4 *)GEN_TOP((iVar13 + 0x30)));
    (*(undefined4 *)(gen_frame + 0xf0)) = *((undefined4 *)GEN_TOP((iVar13 + 0x34)));
    (*(undefined4 *)(gen_frame + 0xf4)) = *((undefined4 *)GEN_TOP((iVar13 + 0x38)));
    (*(undefined4 *)(gen_frame + 0xf8)) = *((undefined4 *)GEN_TOP((iVar13 + 0x3c)));
    (*(undefined4 *)(gen_frame + 0xfc)) = *((undefined4 *)GEN_TOP((iVar13 + 0x40)));
    (*(undefined4 *)(gen_frame + 0x100)) = *((undefined4 *)GEN_TOP((iVar13 + 0x44)));
    (*(undefined4 *)(gen_frame + 0x104)) = *((undefined4 *)GEN_TOP((iVar13 + 0x48)));
    (*(undefined4 *)(gen_frame + 0x108)) = *((undefined4 *)GEN_TOP((iVar13 + 0x4c)));
    (*(undefined4 *)(gen_frame + 0x10c)) = *((undefined4 *)GEN_TOP((iVar13 + 0x50)));
    uVar4 = *((undefined4 *)GEN_TOP((iVar13 + 0x58)));
    (*(undefined4 *)(gen_frame + 0x110)) = *((undefined4 *)GEN_TOP((iVar13 + 0x54)));
    uVar5 = *((undefined4 *)GEN_TOP((iVar13 + 0x5c)));
    (*(undefined4 *)(gen_frame + 0x0)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x114)) = uVar4;
    (*(undefined4 *)(gen_frame + 0x118)) = uVar5;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x30))))(piVar9 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x94)));
    iVar13 = *((int *)GEN_TOP(((int)this + 0x128)));
    if ((*((byte *)GEN_TOP((iVar13 + 4))) & 4) == 0) {
      bVar8 = F_00d218f0((*(float *)(gen_frame + 0x98)),&(*(undefined4 *)(gen_frame + 0x0)),iVar13,iVar13 + 0x68);
      if (bVar8 != 1) {
        return 0;
      }
      (*(undefined4 *)(gen_frame + 0xe0)) = (*(undefined4 *)(gen_frame + 0x0));
      (*(undefined4 *)(gen_frame + 0xf0)) = (*(undefined4 *)(gen_frame + 0x0));
      (*(undefined4 *)(gen_frame + 0x100)) = (*(undefined4 *)(gen_frame + 0x0));
      (*(undefined4 *)(gen_frame + 0x110)) = (*(undefined4 *)(gen_frame + 0x0));
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined4 *)(gen_frame + 0xdc));
    puVar12 = ((undefined4 *)GEN_TOP(((int)this + 300)));
    (*(float *)(gen_frame + 0xc)) = 5.60519e-45;
    do {
      puVar11 = ((undefined4 *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0xb4)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)))));
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 4;
      *puVar12 = *puVar11;
      puVar12[1] = puVar11[1];
      puVar12[2] = puVar11[2];
      puVar12[3] = puVar11[3];
      puVar12 = puVar12 + 4;
      fVar19 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) - 1);
      (*(float *)(gen_frame + 0xc)) = fVar19;
    } while (fVar19 != 0.0);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1090708))));
    pfVar1 = ((float *)GEN_TOP(((int)this + 300)));
    F_01052f50(pfVar1,&(*(float *)(gen_frame + 0xa4)));
    bVar8 = F_01053270(pfVar1,&(*(float *)(gen_frame + 0xa4)));
    if (bVar8 == 1) {
      fVar18 = 0.0 - *pfVar1;
      fVar19 = 0.0 - *((float *)GEN_TOP(((int)this + 0x130)));
      fVar20 = 0.0 - *((float *)GEN_TOP(((int)this + 0x134)));
      fVar21 = 0.0 - *((float *)GEN_TOP(((int)this + 0x138)));
      (*(float *)(gen_frame + 0xb4)) = fVar18;
      (*(float *)(gen_frame + 0xb8)) = fVar19;
      (*(float *)(gen_frame + 0xbc)) = fVar20;
      (*(float *)(gen_frame + 0xc0)) = fVar21;
      (*(float *)(gen_frame + 0x120)) = fVar18;
      (*(float *)(gen_frame + 0x124)) = fVar19;
      fVar19 = fVar19 * (*(float *)(gen_frame + 0xa8));
      fVar20 = fVar20 * (*(float *)(gen_frame + 0xac));
      fVar21 = fVar21 * (*(float *)(gen_frame + 0xb0));
      fVar18 = ((fVar19 + fVar18 * (*(float *)(gen_frame + 0xa4))) + fVar20) + fVar21;
      (*(float *)(gen_frame + 0xb4)) = fVar18;
      (*(float *)(gen_frame + 0xb8)) = ((fVar19 + fVar19) + fVar20) + fVar21;
      (*(float *)(gen_frame + 0xbc)) = ((fVar19 + fVar20) + fVar20) + fVar21;
      (*(float *)(gen_frame + 0xc0)) = ((fVar19 + fVar21) + fVar20) + fVar21;
      fVar20 = gen_bits2f((uint)gen_fl2bits(fVar18) ^ REFG(uint, 0x10920d0));
      fVar19 = ((float)GEN_TOF(ABS((float10)fVar18)));
      (*(float *)(gen_frame + 0xc)) = fVar19;
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar19)));
      fVar21 = fVar20 * (*(float *)(gen_frame + 0xa4));
      fVar18 = fVar20 * (*(float *)(gen_frame + 0xa8));
      fVar17 = fVar20 * (*(float *)(gen_frame + 0xac));
      (*(float *)(gen_frame + 0xb4)) = fVar21;
      (*(float *)(gen_frame + 0xb8)) = fVar18;
      (*(float *)(gen_frame + 0xbc)) = fVar17;
      (*(float *)(gen_frame + 0xc0)) = fVar20 * (*(float *)(gen_frame + 0xb0));
      (*(float *)(gen_frame + 0x120)) = fVar21;
      *((float *)GEN_TOP(((int)this + 0x60))) = fVar21;
      (*(float *)(gen_frame + 0x124)) = fVar18;
      *((float *)GEN_TOP(((int)this + 100))) = fVar18;
      ((byte *)(gen_frame + 0x128))[0] = (byte)(uint)gen_fl2bits(fVar17);
      ((byte *)(gen_frame + 0x128))[1] = (byte)((uint)gen_fl2bits(fVar17) >> 8);
      ((byte *)(gen_frame + 0x128))[2] = (byte)((uint)gen_fl2bits(fVar17) >> 0x10);
      (*(uint *)(gen_frame + 0x12b)) = (uint)gen_fl2bits(fVar17) >> 0x18;
      *((float *)GEN_TOP(((int)this + 0x68))) = fVar17;
      *((float *)GEN_TOP(((int)this + 0x6c))) = (float)(float10)1;
      *((float *)GEN_TOP(((int)this + 0x94))) = (float)(float10)1;
      fVar15 = (float10)fVar19;
    }
    else {
      ((byte *)(gen_frame + 0x128))[0] = 0;
      ((byte *)(gen_frame + 0x128))[1] = 1;
      ((byte *)(gen_frame + 0x128))[2] = 1;
      (*(uint *)(gen_frame + 0x12b)) = 0x3030202;
      (*(undefined1 *)(gen_frame + 0x12f)) = 0;
      iVar13 = 0;
      do {
        fVar19 = F_010536a0((uint)((byte *)(gen_frame + 0x128))[(int)(iVar13 * 2)] * 0x10 + 300 + (int)this,
                              (int)this + (uint)((byte *)(gen_frame + 0x128))[(int)(iVar13 * 2 + 1)] * 0x10 + 300,&(*(undefined4 *)(gen_frame + 0xcc)));
        (*(float *)(gen_frame + 0xc)) = fVar19;
        fVar16 = (float10)0;
        fVar15 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x10)))));
        if (!(fVar16 <= fVar15) == ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar16)) || fVar15 == fVar16)) {
          if (!(fVar15 <= (float10)fVar19) != (GEN_ISNAN((float10)fVar19) || GEN_ISNAN(fVar15))) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar19)));
            fVar15 = (float10)fVar19;
            *((undefined4 *)GEN_TOP(((int)this + 0x60))) = (*(undefined4 *)(gen_frame + 0xcc));
            *((undefined4 *)GEN_TOP(((int)this + 100))) = (*(undefined4 *)(gen_frame + 0xd0));
            *((undefined4 *)GEN_TOP(((int)this + 0x68))) = (*(undefined4 *)(gen_frame + 0xd4));
            *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = (*(undefined4 *)(gen_frame + 0xd8));
          }
        }
        else {
          (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar19)));
          fVar15 = (float10)fVar19;
          *((undefined4 *)GEN_TOP(((int)this + 0x60))) = (*(undefined4 *)(gen_frame + 0xcc));
          *((undefined4 *)GEN_TOP(((int)this + 100))) = (*(undefined4 *)(gen_frame + 0xd0));
          *((undefined4 *)GEN_TOP(((int)this + 0x68))) = (*(undefined4 *)(gen_frame + 0xd4));
          *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = (*(undefined4 *)(gen_frame + 0xd8));
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < 4);
    }
    pfVar1 = (*(float * PTR32 *)(gen_frame + 0x8));
    fVar16 = (float10)0;
    if (!(fVar15 <= fVar16) || ((GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15)) || fVar16 == fVar15)) {
      iVar13 = *((int *)GEN_TOP(((int)this + 0x128)));
      fVar16 = (float10)*((float *)GEN_TOP((iVar13 + 100)));
      if (!(fVar15 <= fVar16) == ((GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15)) || fVar16 == fVar15)) {
        fVar16 = (float10)*((float *)GEN_TOP((iVar13 + 0x60)));
        if (!(fVar15 <= fVar16) || ((GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15)) || fVar16 == fVar15)) {
          fVar19 = ((float)GEN_TOF((fVar15 - (float10)*((float *)GEN_TOP((iVar13 + 0x60))))));
          *(*(float * PTR32 *)(gen_frame + 0x8)) = fVar19;
          fVar19 = ((float)GEN_TOF(((float10)1 -
                          (float10)((float)GEN_TOF(((float10)fVar19 /
                                          ((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 100))) -
                                          (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x60))))))))))
          ;
          gen_piece_set(&(*(uint *)(gen_frame + 0x12b)), 1, 3, (unsigned long long)((undefined3)(uint)gen_fl2bits(fVar19)));
          (*(undefined1 *)(gen_frame + 0x12f)) = (undefined1)((uint)gen_fl2bits(fVar19) >> 0x18);
          *(*(float * PTR32 *)(gen_frame + 0x8)) = fVar19;
          *(*(float * PTR32 *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)fVar19 *
                              (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x70))))));
          uVar7 = GEN_PIECE(&(*(uint *)(gen_frame + 0x12b)), 1, 3);
        }
        else {
          fVar19 = ((float)GEN_TOF(((float10)1 -
                          (float10)((float)GEN_TOF((fVar15 / (float10)*((float *)GEN_TOP((iVar13 + 0x60)))))))));
          gen_piece_set(&(*(uint *)(gen_frame + 0x12b)), 1, 3, (unsigned long long)((undefined3)(uint)gen_fl2bits(fVar19)));
          (*(undefined1 *)(gen_frame + 0x12f)) = (undefined1)((uint)gen_fl2bits(fVar19) >> 0x18);
          *(*(float * PTR32 *)(gen_frame + 0x8)) = fVar19;
          *(*(float * PTR32 *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)fVar19 *
                               ((float10)1 - (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x70)))
                               ) + (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x70))))));
          uVar7 = GEN_PIECE(&(*(uint *)(gen_frame + 0x12b)), 1, 3);
        }
        (*(uint *)(gen_frame + 0x12b)) = CONCAT31(uVar7,(undefined1)(*(uint *)(gen_frame + 0x12b)));
        *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *((undefined4 *)GEN_TOP(((int)this + 0x60)));
        *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP(((int)this + 100)));
        *((undefined4 *)GEN_TOP(((int)this + 0x58))) = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
        *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = *((undefined4 *)GEN_TOP(((int)this + 0x6c)));
        *((float *)GEN_TOP(((int)this + 0x80))) = *(*(float * PTR32 *)(gen_frame + 0x8));
        if ((*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x8d))) & 1) != 0) {
          return 1;
        }
        cVar2 = *((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x8c)));
        if (cVar2 == '\0') {
          puVar12 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x68))))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0xb4)),(int)this + 0x60)));
          (*(undefined4 *)(gen_frame + 0xcc)) = *puVar12;
          (*(undefined4 *)(gen_frame + 0xd0)) = puVar12[1];
          (*(undefined4 *)(gen_frame + 0xd4)) = puVar12[2];
          iVar13 = *((int *)GEN_TOP(((int)this + 0x128)));
          (*(undefined4 *)(gen_frame + 0xd8)) = puVar12[3];
          F_00d24070(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xcc)),pfVar1,(int)this + 0x8c,GEN_ARGF(*((float *)GEN_TOP((iVar13 + 100)))),GEN_ARGF(*((float *)GEN_TOP((iVar13 + 0x60)))),GEN_ARGF(*((float *)GEN_TOP((iVar13 + 0x70)))),GEN_ARGF(*((float *)GEN_TOP((iVar13 + 0x84)))));
          if ((*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0xc))) & 0x20) != 0) {
            *((undefined4 *)GEN_TOP(((int)this + 0x60))) = *((undefined4 *)GEN_TOP(((int)this + 300)));
            *((undefined4 *)GEN_TOP(((int)this + 100))) = *((undefined4 *)GEN_TOP(((int)this + 0x130)));
            *((undefined4 *)GEN_TOP(((int)this + 0x68))) = *((undefined4 *)GEN_TOP(((int)this + 0x134)));
            *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP(((int)this + 0x138)));
          }
        }
        else if ((byte)(cVar2 - 1U) < 2) {
          F_00d21d00(this GEN_EDX_ARG,(*(float * PTR32 *)(gen_frame + 0x8)),(int)this + 0x8c);
        }
        F_00d219d0(this GEN_EDX_ARG,(uint)pfVar1,(int)this + 0x8c,param_2);
        pcVar6 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x4)) + 100)));
        *pfVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x74))) * (float10)*pfVar1
                         )));
        uVar10 = (*pcVar6)((*(int * PTR32 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x14)));
        if ((char)uVar10 == '\x01') {
          puVar12 = ((undefined4 *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0xb4)),(int)this + 0x70)));
          (*(undefined4 *)(gen_frame + 0xcc)) = *puVar12;
          (*(undefined4 *)(gen_frame + 0xd0)) = puVar12[1];
          (*(undefined4 *)(gen_frame + 0xd4)) = puVar12[2];
          (*(undefined4 *)(gen_frame + 0xd8)) = puVar12[3];
          puVar12 = &(*(undefined4 *)(gen_frame + 0xcc));
        }
        else {
          puVar12 = ((undefined4 *)GEN_TOP(((int)this + 0x60)));
        }
        fVar16 = F_00d21d90(this GEN_EDX_ARG,(uint)puVar12,pfVar1,(int)this + 0x8c);
        *((float *)GEN_TOP(((int)this + 0x90))) = (float)fVar16;
        *((float *)GEN_TOP(((int)this + 0x80))) = *pfVar1;
        bVar14 = GEN_ISNAN((float10)0) || GEN_ISNAN((float10)*pfVar1);
        if (bVar14 == (bVar14 || (float10)0 == (float10)*pfVar1)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00d0f720 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d0f720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd0f720u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x84, 12, 4);
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int * piVar7;
  uint uVar8;
  undefined4 * puVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80));
  fVar10 = (float10)0;
  (*(float *)(gen_frame + 0x38)) = (float)fVar10;
  *param_3 = (float)fVar10;
  param_3[1] = (float)fVar10;
  param_3[3] = 0.0;
  param_3[2] = (float)fVar10;
  *param_1 = (float)fVar10;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x128)));
  (*(float * PTR32 *)(gen_frame + 0x20)) = param_1;
  cVar2 = *((char *)GEN_TOP((iVar3 + 0x8c)));
  if (cVar2 == '\0') {
    uVar8 = 0;
    if ((*((byte *)GEN_TOP(((int)this + 0xb0))) & 8) != 0) {
LAB_00d0f91a: ;
      *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 2;
      *((float *)GEN_TOP(((int)this + 0x80))) = (float)(float10)1;
      return uVar8;
    }
    if ((*((byte *)GEN_TOP((iVar3 + 4))) & 0x80) == 0) {
      param_3[2] = *((float *)GEN_TOP(((int)this + 0x98)));
      (*(float *)(gen_frame + 0x34)) = *((float *)GEN_TOP(((int)this + 0x60)));
      (*(float *)(gen_frame + 0x38)) = *((float *)GEN_TOP(((int)this + 0x68)));
      fVar11 = (float10)*((float *)GEN_TOP(((int)this + 0x60)));
      fVar12 = (float10)*((float *)GEN_TOP(((int)this + 0x68)));
      if (((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar11)) == ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar11)) || fVar10 == fVar11)) ||
         ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar10)) == ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar10)) || fVar12 == fVar10))) {
        fVar10 = ((float10)GEN_TOD(atan2(fVar11,-fVar12)));
        fVar1 = (float)fVar10;
        (*(float *)(gen_frame + 0x34)) = fVar1;
        (*(float *)(gen_frame + 0x38)) = fVar1;
        *((float *)GEN_TOP(((int)this + 0xa4))) = fVar1;
      }
      else {
        (*(float *)(gen_frame + 0x38)) = *((float *)GEN_TOP(((int)this + 0xa4)));
      }
      fVar10 = (float10)*((float *)GEN_TOP(((int)this + 0x94)));
LAB_00d0f9c3: ;
      *param_3 = (float)fVar10;
      goto LAB_00d0f9c5;
    }
    *((float *)GEN_TOP(((int)this + 0x94))) = (float)fVar10;
    if ((*((byte *)GEN_TOP((iVar3 + 0xc))) & 2) == 0) {
      (*(float *)(gen_frame + 0x38)) = *((float *)GEN_TOP((iVar3 + 0x88)));
      goto LAB_00d0f9c5;
    }
  }
  else {
    if (cVar2 == '\x01') {
      *((float *)GEN_TOP(((int)this + 0x60))) = (float)fVar10;
      *((float *)GEN_TOP(((int)this + 100))) = (float)fVar10;
      *((float *)GEN_TOP(((int)this + 0x68))) = (float)fVar10;
      *((float *)GEN_TOP(((int)this + 0x6c))) = (float)(float10)1;
      return 0;
    }
    if (cVar2 != '\x02') goto LAB_00d0f9c5;
    piVar7 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x98))))(piVar7 GEN_EDX_FWD)));
    fVar10 = ((float10)GEN_TOD(fcos((float10)*((float *)GEN_TOP(((int)this + 0xa0))))));
    (*(float *)(gen_frame + 0x38)) = (float)fVar10;
    (*(float *)(gen_frame + 0x10)) = (float)((float10)(float)fVar10 * (float10)*(double *)&REFG(undefined, 0x1088120));
    (*(float *)(gen_frame + 0x14)) = (float)(float10)0;
    fVar10 = ((float10)GEN_TOD(fsin((float10)*((float *)GEN_TOP(((int)this + 0xa0))))));
    (*(float *)(gen_frame + 0x38)) = (float)fVar10;
    (*(float *)(gen_frame + 0x18)) = (float)((float10)(float)fVar10 * (float10)*(double *)&REFG(undefined, 0x1088120));
    (*(float *)(gen_frame + 0x1c)) = (float)(float10)1;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x5c))))(piVar7 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x3c)));
    if ((char)uVar8 == '\0') {
      return uVar8;
    }
    fVar10 = (float10)0;
    (*(float *)(gen_frame + 0x24)) = (float)fVar10;
    (*(float *)(gen_frame + 0x28)) = (float)fVar10;
    (*(float *)(gen_frame + 0x2c)) = (float)fVar10;
    fVar1 = (float)(float10)1;
    (*(float *)(gen_frame + 0x30)) = fVar1;
    (*(float *)(gen_frame + 0x70)) = (float)fVar10;
    (*(float *)(gen_frame + 0x74)) = (float)fVar10;
    fVar1 = (float)(float10)1;
    (*(float *)(gen_frame + 0x30)) = fVar1;
    (*(float *)(gen_frame + 0x6c)) = (float)fVar10;
    (*(float *)(gen_frame + 0x78)) = fVar1;
    puVar9 = ((undefined4 *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)))));
    fVar10 = (float10)0;
    uVar4 = *puVar9;
    uVar5 = puVar9[1];
    uVar6 = puVar9[2];
    uVar8 = puVar9[3];
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = uVar4;
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = uVar5;
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = uVar6;
    *((uint *)GEN_TOP(((int)this + 0x5c))) = uVar8;
    *((undefined4 *)GEN_TOP(((int)this + 0x60))) = uVar4;
    *((undefined4 *)GEN_TOP(((int)this + 100))) = uVar5;
    *((undefined4 *)GEN_TOP(((int)this + 0x68))) = uVar6;
    *((uint *)GEN_TOP(((int)this + 0x6c))) = uVar8;
    *((float *)GEN_TOP(((int)this + 0x94))) = (float)fVar10;
    if ((*((byte *)GEN_TOP(((int)this + 0xb0))) & 8) != 0) goto LAB_00d0f91a;
    iVar3 = *((int *)GEN_TOP(((int)this + 0x128)));
    if ((*((byte *)GEN_TOP((iVar3 + 4))) & 0x80) == 0) {
      (*(float *)(gen_frame + 0x38)) = *((float *)GEN_TOP(((int)this + 0x60)));
      (*(float *)(gen_frame + 0x34)) = *((float *)GEN_TOP(((int)this + 0x68)));
      fVar11 = (float10)*((float *)GEN_TOP(((int)this + 0x60)));
      fVar12 = (float10)*((float *)GEN_TOP(((int)this + 0x68)));
      if (((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar11)) == ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar11)) || fVar10 == fVar11)) ||
         ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar12)) == ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar12)) || fVar10 == fVar12))) {
        fVar10 = ((float10)GEN_TOD(atan2(fVar11,-fVar12)));
        (*(float *)(gen_frame + 0x34)) = (float)fVar10;
        (*(float *)(gen_frame + 0x38)) = (float)fVar10;
        fVar10 = (float10)0;
      }
      else {
        (*(float *)(gen_frame + 0x38)) = *((float *)GEN_TOP(((int)this + 0xa4)));
      }
      goto LAB_00d0f9c3;
    }
    *((float *)GEN_TOP(((int)this + 0x94))) = (float)fVar10;
    if ((*((byte *)GEN_TOP((iVar3 + 0xc))) & 2) == 0) {
      (*(float *)(gen_frame + 0x38)) = *((float *)GEN_TOP((iVar3 + 0x88)));
      goto LAB_00d0f9c5;
    }
  }
  fVar10 = F_00d234c0(this GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0xa0)))));
  (*(float *)(gen_frame + 0x38)) = (float)fVar10;
LAB_00d0f9c5: ;
  *(*(float * PTR32 *)(gen_frame + 0x20)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x38)) + (float10)(*(float *)(gen_frame + 0x38))) / (float10)*(double *)&REFG(undefined, 0x1080228))));
  return (uint)(*(float * PTR32 *)(gen_frame + 0x20));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d0f9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd0f9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00d22da0(this GEN_EDX_FWD,param_1,0xa0)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x28; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x28);
  }
  F_00d105f0(*(undefined4 *)(this + 0x128) GEN_EDX_ARG,(uint)puVar1);
  return (uint)(puVar1 + 0x28);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf28 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d0fa50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd0fa50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x78, 8, 4);
  uint uVar1;
  ulonglong uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x70)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x74));
  uVar1 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x70;
    uVar2 = F_00427d90();
    (*(ulonglong *)(gen_frame + 0x8)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x6c)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 100)));
    (*(undefined4 *)(gen_frame + 0x68)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x60)));
    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(this + 300);
    (*(undefined4 *)(gen_frame + 0x3c)) = *(undefined4 *)(this + 0x130);
    (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(this + 0x134);
    (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(this + 0x13c);
    (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(this + 0x140);
    (*(undefined4 *)(gen_frame + 0x4c)) = *(undefined4 *)(this + 0x144);
    (*(undefined4 *)(gen_frame + 0x50)) = *(undefined4 *)(this + 0x14c);
    (*(undefined4 *)(gen_frame + 0x54)) = *(undefined4 *)(this + 0x150);
    (*(undefined4 *)(gen_frame + 0x58)) = *(undefined4 *)(this + 0x154);
    (*(undefined4 *)(gen_frame + 0x5c)) = *(undefined4 *)(this + 0x15c);
    (*(undefined4 *)(gen_frame + 0x60)) = *(undefined4 *)(this + 0x160);
    (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)(this + 0x164);
    F_00d10450(&(*(undefined2 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)));
    uVar1 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)),0x70);
  }
  return uVar1;
}

/* ref: FUN_00d0fb50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d0fb50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd0fb50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_FRAME_DECL(0xd0, 0);
  int * this;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * pSVar4;
  
  (*(uint *)(gen_frame + 0xbc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0);
  F_00d22580(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[33])REFP(0x113282c));
  *(uint *)(param_1 + 0xb0) =
       *(uint *)(param_1 + 0xb0) ^ ((uint)param_5 << 4 ^ *(uint *)(param_1 + 0xb0)) & 0x10;
  if (param_5 == 0) {
    *(undefined4 * PTR32 *)(param_1 + 0x128) = param_2;
  }
  else {
    *(undefined * PTR32 *)(param_1 + 0x128) = param_1 + 0x170;
    puVar3 = param_2;
    pSVar4 = param_1 + 0x170;
    for (iVar2 = 0x28; iVar2 != 0; iVar2 = iVar2 - 1) {
      *(undefined4 *)pSVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pSVar4 = pSVar4 + 4;
    }
    if (*((char *)GEN_TOP((*(int *)(param_1 + 0x128) + 3))) == '\0') {
      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x90))) = (float)(float10)0;
    }
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x128);
  if ((*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x8d))) & 1) == 0) {
    F_00d228c0(param_1 GEN_EDX_ARG);
  }
  *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x84))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x84))) *
              (float10)*(double *)&REFG(undefined, 0x109cac8))));
  *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0xc))) = *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0xc))) | 0x80;
  *(undefined4 *)(param_1 + 0xa0) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x88)));
  F_00d20fe0(param_1 GEN_EDX_ARG,~(*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 4))) >> 5) & 1);
  this = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xe4))))(this GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x68))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0xb0);
  }
  F_00d0fa50(param_1 GEN_EDX_ARG,0x401);
  return (uint)param_1;
}

/* ref: FUN_00d0fcb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d0fcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd0fcb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xd0, 0);
  byte * pbVar1;
  int iVar2;
  int * this_00;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0xbc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0);
  F_00d22720(this GEN_EDX_FWD,param_1,param_2);
  *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) | 0x10;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x113282c));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x128))) = ((undefined *)GEN_TOP(((int)this + 0x170)));
  F_00d10510(((undefined *)GEN_TOP(((int)this + 0x170))) GEN_EDX_ARG);
  iVar2 = *((int *)GEN_TOP(((int)this + 0x128)));
  *((int *)GEN_TOP(((int)this + 0x18))) = iVar2;
  *((float *)GEN_TOP((iVar2 + 0x84))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 0x84))) * (float10)*(double *)&REFG(undefined, 0x109cac8))));
  pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0xc)));
  *pbVar1 = *pbVar1 | 0x80;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x88)));
  this_00 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_ARG);
  if ((char)uVar3 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0xb0);
  }
  F_00d0fa50(this GEN_EDX_ARG,0x401);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf14 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d0fda0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd0fda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ushort uVar1;
  int * this;
  int iVar2;
  float10 fVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = param_1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x70))))(param_1 GEN_EDX_FWD,0x406);
  if (((byte)param_1[0xb0] & 4) != 0) {
    return 0;
  }
  bVar4 = F_00d217a0(param_1 GEN_EDX_ARG,param_2);
  if (bVar4 != 0) {
    if (((*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 4))) & 0x80) == 0) &&
       (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc))) + 0x10))))
                          (*((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc))) GEN_EDX_ARG), (char)uVar5 == '\0')) {
      fVar7 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x90)));
      fVar3 = (float10)0;
      bVar6 = GEN_ISNAN(fVar3) || GEN_ISNAN(fVar7);
      if (bVar6 == (bVar6 || fVar3 == fVar7)) {
        fVar9 = ((float)GEN_TOF((((float10)(int)param_2 *
                        (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x90)))) /
                        (float10)*(double *)&REFG(undefined, 0x10912a8) + (float10)*(float *)(param_1 + 0xa0))));
        fVar7 = (float10)fVar9;
        *(float *)(param_1 + 0xa0) = fVar9;
        fVar8 = (float10)REFG(double, 0x10920b8);
        if (!(fVar7 <= fVar8) == (GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7))) {
          if (fVar7 <= fVar3) {
            *(float *)(param_1 + 0xa0) = (float)(fVar7 + fVar8);
          }
        }
        else {
          *(float *)(param_1 + 0xa0) = (float)(fVar7 - fVar8);
        }
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(float10)0)));
    *(float *)(param_1 + 0x8c) = (float)(float10)1;
    F_00d21970(param_1 GEN_EDX_ARG);
    bVar4 = F_00d0f130(param_1 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),param_2);
    if (bVar4 == 0) {
      F_00d219b0(param_1 GEN_EDX_ARG);
      F_00d22c70(param_1 GEN_EDX_ARG,0);
      return 1;
    }
    if ((*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x8d))) & 1) == 0) {
      this = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
      iVar2 = *(int *)(param_1 + 0x128);
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x18))))(this GEN_EDX_ARG);
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 0x10 + (uVar5 & 0xff) * 4))) *
                       (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0)))))))))));
      uVar1 = *((ushort *)GEN_TOP((iVar2 + 0xe)));
      if (uVar1 != 0) {
        fVar9 = F_00d005d0(this GEN_EDX_ARG,(uint)uVar1);
        (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar9 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0)))))))));
      }
      iVar2 = *(int *)(param_1 + 0x128);
      *(undefined * PTR32 *)(param_1 + 0x80) = (*(undefined * PTR32 *)(gen_frame + 0x0));
      if ((*((byte *)GEN_TOP((iVar2 + 0xc))) & 8) != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x0)) = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x74)));
        *(undefined4 *)(param_1 + 0x80) = *((undefined4 *)GEN_TOP((iVar2 + 0x74)));
      }
      *(undefined * PTR32 *)(param_1 + 0x80) = (*(undefined * PTR32 *)(gen_frame + 0x0));
      if ((((byte)param_1[0xb0] & 0x40) != 0) || (bVar4 = F_00d228c0(param_1 GEN_EDX_ARG), bVar4 != 0)) {
        bVar4 = F_00d00ed0(this GEN_EDX_ARG,param_1,(uint)(byte)param_1[0x2d],*(undefined4 *)(param_1 + 0x30),
                             ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0))))));
        return bVar4;
      }
    }
    else {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc))) + 0x98))))
                        (*((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc))) GEN_EDX_ARG);
      F_00d1b9f0(uVar5 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x74)))),((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0))))));
    }
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00d0ff90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd0ff90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  undefined1 SVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  int * piVar8;
  float fVar9;
  float10 fVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  (*(char *)(gen_frame + 0x1f)) = '\0';
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar8;
  bVar5 = F_00d21830((undefined *)this GEN_EDX_FWD);
  if (bVar5 == 0) {
    piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x90))))(piVar8 GEN_EDX_ARG)));
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xfc))))(piVar6 GEN_EDX_ARG,*(undefined4 *)(this + 0x24));
    if ((char)uVar7 == '\0') goto LAB_00d1038d;
    F_00d2dd80(&(*(float *)(gen_frame + 0x34)),*(undefined4 *)(this + 0x24));
    if (((byte)this[0xb0] & 0x80) == 0) {
      bVar5 = F_00cbe970(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
    }
    else {
      bVar5 = F_00cbe940(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
    }
    if (bVar5 != 0) {
      fVar10 = (float10)0;
      uVar2 = *(undefined4 *)(this + 0x28);
      iVar3 = *piVar6;
      (*(float *)(gen_frame + 0x0)) = (float)fVar10;
      (*(float *)(gen_frame + 0x4)) = (float)fVar10;
      (*(float *)(gen_frame + 0x8)) = (float)fVar10;
      (*(float *)(gen_frame + 0xc)) = (float)(float10)1;
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x3c))))
                        (piVar6,((undefined1 *)(gen_frame + 0x20)),*(undefined4 *)(this + 0x24),uVar2,&(*(float *)(gen_frame + 0x0)),0,0,1);
      F_00cbbdc0(this + 8 GEN_EDX_ARG,uVar7);
      F_00cbbdb0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
      bVar5 = F_00cbc040(this + 8 GEN_EDX_ARG);
      if (bVar5 != 0) {
        iVar3 = *(int *)(this + 0x128);
        (*(char *)(gen_frame + 0x1f)) = '\x01';
        if (((*((byte *)GEN_TOP((iVar3 + 4))) & 0x80) != 0) && ((*((byte *)GEN_TOP((iVar3 + 0xc))) & 2) != 0)) {
          fVar10 = F_00d23370(this GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((iVar3 + 0x88)))));
          *(float *)(this + 0xa0) = (float)fVar10;
        }
        F_00d22bf0(this GEN_EDX_ARG,0x403);
        F_00cbe3b0(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
        goto LAB_00d100b9;
      }
    }
    F_00cbe3b0(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
  }
  else {
LAB_00d100b9: ;
    bVar5 = F_00cbc040(this + 8 GEN_EDX_ARG);
    if (bVar5 == 0) {
LAB_00d1038d: ;
      *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) | 4;
      return 0;
    }
    uVar7 = F_00d00230(piVar8 GEN_EDX_ARG);
    if (uVar7 == 1) {
      fVar10 = F_00d22df0(((undefined1 *)(gen_frame + 0x20)),this + 0x60,*(float *)(this + 0x80),*(float *)(this + 0x94));
      (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar10)));
      F_00cbc920(this + 8 GEN_EDX_ARG,(float)fVar10);
      F_00cbc4e0(this + 8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
    }
    else {
      fVar10 = (float10)0;
      (*(float *)(gen_frame + 0x30)) = (float)fVar10;
      (*(float *)(gen_frame + 0x34)) = (float)fVar10;
      (*(float *)(gen_frame + 0x38)) = (float)fVar10;
      (*(undefined4 *)(gen_frame + 0x3c)) = 0;
      F_00d0f720(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x18)),&(*(int * PTR32 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x30)));
      F_00cbc9e0(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0x18)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))),&(*(float *)(gen_frame + 0x30)));
      uVar7 = F_00d2e5a0();
      if ((uVar7 == 3) || (uVar7 == 5)) {
        fVar10 = F_00d2edb0(*(float *)(this + 0x80),0,2);
      }
      else {
        fVar10 = (float10)*(float *)(this + 0x80);
      }
      SVar1 = this[0x2c];
      (*(float *)(gen_frame + 0x18)) = (float)fVar10;
      if (((byte)SVar1 & 2) != 0) {
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x98))))(piVar8 GEN_EDX_ARG)));
        fVar9 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xd0))))(piVar8 GEN_EDX_ARG));
        iVar3 = *piVar8;
        (*(float *)(gen_frame + 0x14)) = fVar9;
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((iVar3 + 0x50))))(piVar8);
        fVar10 = F_00d2bc80((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))) GEN_EDX_ARG,(float)extraout_ST0);
        (*(float *)(gen_frame + 0x18)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x18)));
        piVar8 = (*(int * PTR32 *)(gen_frame + 0x10));
      }
      F_00cbc920(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0x18)));
    }
    if (((byte)this[0xb0] & 2) == 0) {
      fVar10 = F_00d22f40(this GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x80)))),
                            *((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) >> 2 & 1);
      fVar9 = ((float)GEN_TOF((fVar10 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x78))))));
      (*(float *)(gen_frame + 0x14)) = fVar9;
      F_00cbc980(this + 8 GEN_EDX_ARG,fVar9);
    }
    SVar1 = this[0x2c];
    (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xc4) * (float10)*(float *)(this + 0x8c))));
    if (((byte)SVar1 & 2) != 0) {
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x98))))(piVar8 GEN_EDX_ARG)));
      fVar9 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xd0))))(piVar8 GEN_EDX_ARG));
      (*(float *)(gen_frame + 0x14)) = fVar9;
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x50))))(piVar8);
      fVar10 = F_00d2bc60((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))) GEN_EDX_ARG,(float)extraout_ST0_00);
      (*(float *)(gen_frame + 0x18)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x18)));
    }
    F_00cbc710(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0x18)));
    if ((*(char *)(gen_frame + 0x1f)) != '\0') {
      dVar4 = GEN_X87(*(double *)&REFG(undefined, 0x1097260) * 0.0);
      fVar9 = *(float *)(this + 0xbc);
      (*(float *)(gen_frame + 0x14)) = gen_bits2f((int)dVar4);
      F_00cbddc0(this + 8 GEN_EDX_ARG,fVar9,(uint)&(*(float *)(gen_frame + 0x14)));
      fVar9 = *(float *)(this + 0xc0);
      (*(float *)(gen_frame + 0x14)) = gen_bits2f((int)dVar4);
      F_00cbdeb0(this + 8 GEN_EDX_ARG,fVar9,(uint)&(*(float *)(gen_frame + 0x14)));
      F_00cbc980(this + 8 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x78)))));
      F_00cbcd10(this + 8 GEN_EDX_ARG,*(float *)(this + 200),*(undefined4 *)(this + 0xcc));
      F_00cbce00(this + 8 GEN_EDX_ARG,(uint)(byte)this[0xe0]);
      if ((*(uint *)(this + 0xb0) & 0x400) != 0) {
        F_00cbcbc0(this + 8 GEN_EDX_ARG);
      }
      if ((*(uint *)(this + 0xb0) & 0x100) == 0) {
        F_00cbd990(this + 8 GEN_EDX_ARG,*(undefined4 *)(this + 0xdc),*(undefined4 *)(this + 0xb8));
      }
      else {
        F_00cbdfe0(this + 8 GEN_EDX_ARG,*(undefined4 *)(this + 0xd4),*(float *)(this + 0xbc),
                     *(float *)(this + 0xd0),gen_bits2f((unsigned int)(*(undefined4 *)(this + 0xdc))),
                     *(undefined4 *)(this + 0xb8));
      }
      *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) & 0xfffffeff;
      *(undefined4 *)(this + 0xdc) = 0;
      return 1;
    }
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf1 */
GEN_LIB GEN_NOFRAME unsigned int F_00d103b0(void)
{
  GEN_ENTER(0xd103b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d103c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd103c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *param_1 = (float)(float10)1;
  *param_2 = (float)(float10)1;
  return (uint)param_1;
}

/* ref: FUN_00d103e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d103e0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd103e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_3[1] * in_ecx[1];
  fVar2 = param_3[2] * in_ecx[2];
  fVar3 = param_3[3] * in_ecx[3];
  *param_2 = ((fVar1 + *param_3 * *in_ecx) + fVar2) + fVar3;
  param_2[1] = ((fVar1 + fVar1) + fVar2) + fVar3;
  param_2[2] = ((fVar1 + fVar2) + fVar2) + fVar3;
  param_2[3] = ((fVar1 + fVar3) + fVar2) + fVar3;
  return (uint)param_2;
}

/* ref: FUN_00d10450 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d10450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd10450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *param_1 = *(undefined2 *)this;
  param_1[1] = *((undefined2 *)GEN_TOP(((int)this + 2)));
  *(undefined4 *)(param_1 + 4) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined4 *)(param_1 + 6) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  *(undefined4 *)(param_1 + 0xc) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *(undefined4 *)(param_1 + 0xe) = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  *(undefined4 *)(param_1 + 0x10) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  *(undefined4 *)(param_1 + 0x16) = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  *(undefined4 *)(param_1 + 0x14) = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  param_1[0x18] = *((undefined2 *)GEN_TOP(((int)this + 0x30)));
  param_1[0x19] = *((undefined2 *)GEN_TOP(((int)this + 0x32)));
  *(undefined1 *)(param_1 + 0x1a) = *((undefined1 *)GEN_TOP(((int)this + 0x34)));
  *(undefined4 *)(param_1 + 0x1c) = *((undefined4 *)GEN_TOP(((int)this + 0x38)));
  *(undefined4 *)(param_1 + 0x1e) = *((undefined4 *)GEN_TOP(((int)this + 0x3c)));
  *(undefined4 *)(param_1 + 0x20) = *((undefined4 *)GEN_TOP(((int)this + 0x40)));
  *(undefined4 *)(param_1 + 0x22) = *((undefined4 *)GEN_TOP(((int)this + 0x44)));
  *(undefined4 *)(param_1 + 0x24) = *((undefined4 *)GEN_TOP(((int)this + 0x48)));
  *(undefined4 *)(param_1 + 0x26) = *((undefined4 *)GEN_TOP(((int)this + 0x4c)));
  *(undefined4 *)(param_1 + 0x28) = *((undefined4 *)GEN_TOP(((int)this + 0x50)));
  *(undefined4 *)(param_1 + 0x2a) = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
  *(undefined4 *)(param_1 + 0x2c) = *((undefined4 *)GEN_TOP(((int)this + 0x58)));
  *(undefined4 *)(param_1 + 0x2e) = *((undefined4 *)GEN_TOP(((int)this + 0x5c)));
  *(undefined4 *)(param_1 + 0x30) = *((undefined4 *)GEN_TOP(((int)this + 0x60)));
  *(undefined4 *)(param_1 + 0x32) = *((undefined4 *)GEN_TOP(((int)this + 100)));
  *(undefined4 *)(param_1 + 0x34) = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
  *(undefined4 *)(param_1 + 0x36) = *((undefined4 *)GEN_TOP(((int)this + 0x6c)));
  return 0;
}

/* ref: FUN_00d10510 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d10510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd10510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  fVar1 = (float10)1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 4;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((float *)GEN_TOP(((int)this + 0x10))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x14))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x18))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x1c))) = (float)fVar1;
  *((undefined1 *)GEN_TOP(((int)this + 0xd))) = 0;
  fVar2 = (float10)0;
  *((undefined2 *)GEN_TOP(((int)this + 0xe))) = 0;
  *(undefined1 * PTR32 *)this = REFP(0x010700a0);
  *((float *)GEN_TOP(((int)this + 0x20))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x24))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x28))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x2c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x2c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x30))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x34))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x38))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x3c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x3c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x40))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x44))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x48))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x4c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x4c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x50))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x54))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x58))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x5c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x5c))) = (float)fVar1;
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094880)));
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0d00)));
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = uVar3;
  *((float *)GEN_TOP(((int)this + 0x6c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x80))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x88))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x70))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x74))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x78))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x7c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x84))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x90))) = (float)fVar2;
  return 0;
}

/* ref: FUN_00d105f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d105f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd105f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  int local_8;
  
  F_00d0c080(param_1 GEN_EDX_FWD,param_2);
  puVar3 = ((uint *)GEN_TOP((param_1 + 0x28)));
  local_8 = 4;
  puVar2 = ((uint *)GEN_TOP((param_2 + 0x20)));
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar2)));
    *puVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[-1];
    puVar2[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar3;
    puVar2[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[1];
    puVar2[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar3 = puVar3 + 4;
    local_8 = local_8 - 1;
    puVar2 = puVar2 + 4;
  } while (local_8 != 0);
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x60)));
  *((uint *)GEN_TOP((param_2 + 0x60))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 100)));
  *((uint *)GEN_TOP((param_2 + 100))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x68)));
  *((uint *)GEN_TOP((param_2 + 0x68))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x6c)));
  *((uint *)GEN_TOP((param_2 + 0x6c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x70)));
  *((uint *)GEN_TOP((param_2 + 0x70))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x74)));
  *((uint *)GEN_TOP((param_2 + 0x74))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x78)));
  *((uint *)GEN_TOP((param_2 + 0x78))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x7c)));
  *((uint *)GEN_TOP((param_2 + 0x7c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x80)));
  *((uint *)GEN_TOP((param_2 + 0x80))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x84)));
  *((uint *)GEN_TOP((param_2 + 0x84))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x88)));
  *((uint *)GEN_TOP((param_2 + 0x88))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((undefined1 *)GEN_TOP((param_2 + 0x8c))) = *((undefined1 *)GEN_TOP((param_1 + 0x8c)));
  *((byte *)GEN_TOP((param_2 + 0x8d))) = *((byte *)GEN_TOP((param_1 + 0x8d))) & 1;
  *((undefined2 *)GEN_TOP((param_2 + 0x8e))) = 0;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x90)));
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((uint *)GEN_TOP((param_2 + 0x90))) = uVar1;
  *((undefined4 *)GEN_TOP((param_2 + 0x94))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 0x98))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 0x9c))) = 0;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d107c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd107c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[33])REFP(0x113282c));
  F_00d23680(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00d107f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d107f0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd107f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  if (!((float10)*in_ecx <= (float10)*param_2) != (GEN_ISNAN((float10)*param_2) || GEN_ISNAN((float10)*in_ecx)))
  {
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d10830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd10830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int local_14;
  
  F_00d213b0(this GEN_EDX_FWD,param_1,(undefined1)param_2);
  iVar4 = *(int *)(this + 0x128);
  local_14 = 0;
  if (*((char *)GEN_TOP((iVar4 + 0x144))) != '\0') {
    iVar5 = 0;
    do {
      fVar1 = param_1[3];
      local_14 = local_14 + 1;
      fVar2 = param_1[1];
      fVar3 = param_1[2];
      *((float *)GEN_TOP((iVar5 + 0x20 + iVar4))) = *((float *)GEN_TOP((iVar5 + 0x20 + iVar4))) + *param_1;
      *((float *)GEN_TOP((iVar5 + 0x24 + iVar4))) = *((float *)GEN_TOP((iVar5 + 0x24 + iVar4))) + fVar2;
      *((float *)GEN_TOP((iVar5 + 0x28 + iVar4))) = *((float *)GEN_TOP((iVar5 + 0x28 + iVar4))) + fVar3;
      *((float *)GEN_TOP((iVar5 + 0x2c + iVar4))) = *((float *)GEN_TOP((iVar5 + 0x2c + iVar4))) + fVar1;
      *((float *)GEN_TOP((iVar5 + 0x2c + *(int *)(this + 0x128)))) = (float)(float10)1;
      iVar4 = *(int *)(this + 0x128);
      iVar5 = iVar5 + 0x10;
    } while (local_14 < (int)(uint)*((byte *)GEN_TOP((iVar4 + 0x144))));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d10920(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd10920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x80)));
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d10940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd10940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  float10 fVar1;
  
  fVar1 = F_00d22f40(this GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x140)))),
                       *((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) >> 2 & 1);
  *param_1 = ((float)GEN_TOF((fVar1 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x138))))));
  return (uint)param_1;
}

/* ref: FUN_00d10980 */
GEN_LIB GEN_NOFRAME float F_00d10980(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd10980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x160, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  float * pfVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  (*(uint *)(gen_frame + 0x14c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x150);
  (*(undefined4 *)(gen_frame + 0x28)) = param_2;
  (*(int *)(gen_frame + 0x2c)) = param_1;
  (*(float * PTR32 *)(gen_frame + 0x30)) = param_3;
  if (gen_bits2f((uint)*((byte *)GEN_TOP((param_1 + 0x144)))) != 0.0) {
    pfVar5 = ((float *)(gen_frame + 0x48));
    iVar7 = param_1 + 0x20;
    (*(float *)(gen_frame + 0x34)) = gen_bits2f((uint)*((byte *)GEN_TOP((param_1 + 0x144))));
    do {
      pfVar4 = ((float *)GEN_TOP(F_00c34320((*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),iVar7)));
      *pfVar5 = *pfVar4;
      pfVar5[1] = pfVar4[1];
      pfVar5[2] = pfVar4[2];
      pfVar5[3] = pfVar4[3];
      iVar7 = iVar7 + 0x10;
      pfVar5 = pfVar5 + 4;
      fVar14 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x34))) - 1);
      (*(float *)(gen_frame + 0x34)) = fVar14;
    } while (fVar14 != 0.0);
  }
  pfVar5 = (*(float * PTR32 *)(gen_frame + 0x30));
  if ((*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + 4))) & 4) == 0) {
    (*(float *)(gen_frame + 0x34)) = ((float *)(gen_frame + 0x48))[1];
    F_00d218f0((*(float * PTR32 *)(gen_frame + 0x30))[1],&(*(float *)(gen_frame + 0x34)),(*(int *)(gen_frame + 0x2c)),(*(int *)(gen_frame + 0x2c)) + 0x128);
    pfVar5 = (*(float * PTR32 *)(gen_frame + 0x30));
    if (*((char *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + 0x144))) != '\0') {
      uVar6 = (uint)*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + 0x144)));
      pfVar4 = ((float *)(gen_frame + 0x48)) + 1;
      do {
        *pfVar4 = (*(float *)(gen_frame + 0x34));
        pfVar4 = pfVar4 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  uVar6 = (uint)*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + 0x144)));
  if (uVar6 != 0) {
    fVar14 = *pfVar5;
    fVar1 = pfVar5[1];
    fVar2 = pfVar5[2];
    fVar3 = pfVar5[3];
    pfVar5 = ((float *)(gen_frame + 0x48)) + 2;
    do {
      uVar6 = uVar6 - 1;
      fVar10 = pfVar5[-2] - fVar14;
      fVar11 = pfVar5[-1] - fVar1;
      fVar12 = *pfVar5 - fVar2;
      fVar13 = pfVar5[1] - fVar3;
      (*(float *)(gen_frame + 0x0)) = fVar10;
      (*(float *)(gen_frame + 0x4)) = fVar11;
      (*(float *)(gen_frame + 0x8)) = fVar12;
      (*(float *)(gen_frame + 0xc)) = fVar13;
      (*(float *)(gen_frame + 0x18)) = fVar10;
      pfVar5[-2] = fVar10;
      (*(float *)(gen_frame + 0x1c)) = fVar11;
      pfVar5[-1] = fVar11;
      (*(float *)(gen_frame + 0x20)) = fVar12;
      *pfVar5 = fVar12;
      (*(float *)(gen_frame + 0x24)) = fVar13;
      pfVar5[1] = fVar13;
      pfVar5 = pfVar5 + 4;
    } while (uVar6 != 0);
  }
  (*(float * PTR32 *)(gen_frame + 0x30)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)(float10)0)));
  iVar7 = 0;
  if (*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + 0x144))) != 1 && -1 < (int)(*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + 0x144))) - 1)) {
    do {
      fVar14 = F_010536a0(((float *)(gen_frame + 0x48)) + iVar7 * 4,((undefined1 *)(gen_frame + 0x58)) + iVar7 * 0x10,((undefined1 *)(gen_frame + 0x38)));
      (*(float *)(gen_frame + 0x34)) = fVar14;
      fVar8 = (float10)fVar14;
      fVar9 = (float10)*((float *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + 0x124)));
      if (!(fVar8 <= fVar9) == ((GEN_ISNAN(fVar9) || GEN_ISNAN(fVar8)) || fVar9 == fVar8)) {
        return (float)(float10)0;
      }
      fVar14 = ((float)GEN_TOF((fVar8 - (float10)*((float *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + 0x124))))));
      (*(float *)(gen_frame + 0x34)) = fVar14;
      fVar8 = (float10)fVar14;
      if (iVar7 == 0) {
        (*(float * PTR32 *)(gen_frame + 0x30)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
      }
      else {
        fVar9 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x30)))));
        if (fVar8 <= fVar9 && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar8)) && fVar9 != fVar8)) {
          (*(float * PTR32 *)(gen_frame + 0x30)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + 0x144))) - 1));
  }
  return ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x30)))));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d10c20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd10c20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x150) {
    return 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x128)));
  puVar3 = param_2;
  for (iVar1 = 0x54; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x150;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf19 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d10c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd10c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x128);
  *param_1 = *((undefined4 *)GEN_TOP((iVar1 + 0x120)));
  *param_2 = *((undefined4 *)GEN_TOP((iVar1 + 0x124)));
  *param_3 = *((undefined4 *)GEN_TOP((iVar1 + 0x148)));
  *param_4 = *((undefined4 *)GEN_TOP((iVar1 + 0x140)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d10ca0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd10ca0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x128)));
  *((float *)GEN_TOP((uVar1 + 0x120))) = param_2;
  *((float *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x128))) + 0x124))) = param_3;
  return uVar1;
}

/* ref: FUN_00d10cd0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d10cd0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd10cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_8;
  
  uVar2 = param_4;
  fVar3 = (float10)0;
  local_8 = (float)fVar3;
  *((float *)GEN_TOP(param_4)) = (float)fVar3;
  *((undefined4 *)GEN_TOP((param_4 + 0xc))) = 0;
  *((float *)GEN_TOP((param_4 + 4))) = (float)fVar3;
  *((float *)GEN_TOP((param_4 + 8))) = (float)fVar3;
  *((float *)GEN_TOP(param_2)) = (float)fVar3;
  *param_3 = (float)fVar3;
  if ((*((byte *)GEN_TOP((param_1 + 0xb0))) & 8) == 0) {
    iVar1 = *((int *)GEN_TOP((param_1 + 0x128)));
    if ((*((byte *)GEN_TOP((iVar1 + 4))) & 0x80) == 0) {
      *((undefined4 *)GEN_TOP((param_4 + 8))) = *((undefined4 *)GEN_TOP((param_1 + 0x98)));
      fVar5 = (float10)*((float *)GEN_TOP((param_1 + 0x60)));
      fVar4 = (float10)*((float *)GEN_TOP((param_1 + 0x68)));
      if (((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar5)) == ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar5)) || fVar3 == fVar5)) ||
         ((GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3)) == ((GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3)) || fVar4 == fVar3))) {
        fVar3 = ((float10)GEN_TOD(atan2(fVar5,-fVar4)));
        param_4 = (uint)gen_fl2bits((float)fVar3);
        *((uint *)GEN_TOP((param_1 + 0xa4))) = param_4;
      }
      else {
        param_4 = *((uint *)GEN_TOP((param_1 + 0xa4)));
      }
      fVar6 = (float10)*((float *)GEN_TOP((param_1 + 0x68)));
      fVar5 = (float10)*((float *)GEN_TOP((param_1 + 0x60)));
      fVar4 = (float10)*((float *)GEN_TOP((param_1 + 100)));
      fVar3 = (float10)0;
      fVar5 = (float10)((float)GEN_TOF(GEN_X87(SQRT((float10)(float)(fVar5 * fVar5 + fVar6 * fVar6)))));
      if (((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar4)) == ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar4)) || fVar3 == fVar4)) ||
         ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar3)) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar3)) || fVar5 == fVar3))) {
        fVar3 = ((float10)GEN_TOD(atan2(-fVar4,fVar5)));
        local_8 = (float)fVar3;
        *((float *)GEN_TOP((param_1 + 0xa8))) = local_8;
      }
      else {
        local_8 = *((float *)GEN_TOP((param_1 + 0xa8)));
      }
      *((undefined4 *)GEN_TOP(uVar2)) = *((undefined4 *)GEN_TOP((param_1 + 0x94)));
    }
    else {
      *((float *)GEN_TOP((param_1 + 0x94))) = (float)fVar3;
      if ((*((byte *)GEN_TOP((iVar1 + 0xc))) & 2) == 0) {
        param_4 = *((uint *)GEN_TOP((iVar1 + 0x14c)));
      }
      else {
        fVar3 = F_00d234c0(param_1 GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0xa0)))));
        param_4 = (uint)gen_fl2bits((float)fVar3);
      }
    }
    fVar3 = (float10)*(double *)&REFG(undefined, 0x1092098);
    fVar5 = (float10)*(double *)&REFG(undefined, 0x1080228);
    *((float *)GEN_TOP(param_2)) = ((float)GEN_TOF(((((float10)GEN_TOD(gen_bits2f(param_4))) * fVar3) / fVar5)));
    *param_3 = ((float)GEN_TOF(((fVar3 * (float10)local_8) / fVar5)));
    return 0;
  }
  *((byte *)GEN_TOP((param_4 + 0xc))) = *((byte *)GEN_TOP((param_4 + 0xc))) | 2;
  *((float *)GEN_TOP((param_1 + 0x80))) = (float)(float10)1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d10e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd10e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x180, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x16c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x170);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x160);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf27 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d10ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd10ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
  for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  bVar1 = F_00d228c0(this GEN_EDX_FWD);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf29 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d10f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(HWND param_1, unsigned int gen_a1), GEN_P(HDC param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd10f20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(HWND param_1 = (HWND)gen_a1;)
  GEN_PIN(HDC param_2 = (HDC)gen_a2;)
  GEN_FRAME_DECL_GS(0xb0, 0, 4);
  char cVar1;
  undefined * pHVar2;
  HGDIOBJ pvVar3;
  undefined * pHVar4;
  undefined * pPVar5;
  char * pcVar6;
  int iVar7;
  uint uVar8;
  undefined * pPVar9;
  code * pcVar10;
  int iVar11;
  int iVar12;
  ulong color;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac));
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = this;
  F_00c48350(((undefined *)(gen_frame + 0x3c)),0,0x3c);
  F_00c49908(((CHAR *)(((char *)((undefined *)(gen_frame + 0x3c)) + 28))),0x20,&REFG(undefined, 0x11328c4));
  (*(LONG *)((char *)((undefined *)(gen_frame + 0x3c)))) = 0xd;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x3c)) + 23))) = 0x80;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x3c)) + 27))) = '\x01';
  pHVar2 = gen_imp_CreateFontIndirectA(((undefined *)(gen_frame + 0x3c)));
  pcVar10 = (((code *)GEN_TOP(gen_imp_SelectObject)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = pHVar2;
  pvVar3 = gen_imp_SelectObject(param_2,pHVar2);
  (*(HGDIOBJ *)(gen_frame + 0x8)) = pvVar3;
  pvVar3 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0xc)) = pvVar3;
  pvVar3 = gen_imp_SelectObject(param_2,pvVar3);
  (*(HGDIOBJ *)(gen_frame + 0x14)) = pvVar3;
  if (((byte)(*(undefined * PTR32 *)(gen_frame + 0x38))[0xb0] & 1) == 0) {
    iVar11 = 1;
    color = 0x900000;
  }
  else {
    color = 0x80;
    iVar11 = 2;
  }
  pHVar4 = gen_imp_CreatePen(0,iVar11,color);
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = pHVar4;
  pvVar3 = gen_imp_SelectObject(param_2,pHVar4);
  (*(HGDIOBJ *)(gen_frame + 0x20)) = pvVar3;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x78)));
  (*(int *)(gen_frame + 0x24)) = (*(tagRECT *)(gen_frame + 0x78)).bottom / 2;
  iVar11 = (*(tagRECT *)(gen_frame + 0x78)).right / 2;
  (*(int *)(gen_frame + 0x10)) = iVar11;
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = ((undefined *)GEN_TOP(0x0));
  if (*((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x128) + 0x144))) != 1 &&
      -1 < (int)(*((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x128) + 0x144))) - 1)) {
    pPVar9 = (*(undefined * PTR32 *)(gen_frame + 0x38)) + 300;
    do {
      gen_imp_MoveToEx(param_2,iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)pPVar9),
               (*(int *)(gen_frame + 0x24)) - (int)((double)*(float *)(pPVar9 + 8) * *(double *)&REFG(double, 0x1132488)),
               (LPPOINT)0x0);
      gen_imp_LineTo(param_2,iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(pPVar9 + 0x10)),
             (*(int *)(gen_frame + 0x24)) - (int)((double)*(float *)(pPVar9 + 0x18) * *(double *)&REFG(double, 0x1132488)));
      pPVar5 = (*(undefined * PTR32 *)(gen_frame + 0x34)) + 1;
      pPVar9 = pPVar9 + 0x10;
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = pPVar5;
      pcVar10 = (((code *)GEN_TOP(gen_imp_SelectObject)));
    } while ((int)pPVar5 < (int)(*((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x128) + 0x144))) - 1));
  }
  (*(int *)(gen_frame + 0x2c)) = 0;
  if ((*(undefined * PTR32 *)(gen_frame + 0x38))[0x36c] != (undefined1)0x0) {
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = (*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x32c;
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x234;
    do {
      iVar11 = iVar11 - (int)((double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x28)) - 8) * *(double *)&REFG(double, 0x1132488));
      iVar12 = (*(int *)(gen_frame + 0x24)) - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x28)));
      iVar7 = (int)((double)*((float *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x128) + 0x124))) *
                   *(double *)&REFG(undefined, 0x10947f0));
      gen_imp_Ellipse(param_2,iVar11 - iVar7,iVar12 - iVar7,iVar7 + iVar11,iVar7 + iVar12);
      iVar7 = (int)((double)*((float *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x128) + 0x120))) *
                   *(double *)&REFG(undefined, 0x10947f0));
      gen_imp_Ellipse(param_2,iVar11 - iVar7,iVar12 - iVar7,iVar7 + iVar11,iVar7 + iVar12);
      F_00c472af(((char *)(gen_frame + 0x88)),0x20,&REFG(undefined, 0x11328d0),
                 (int)(ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x34)) * *(double *)&REFG(undefined, 0x1088118)),
                 (int)((ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x34)) * *(double *)&REFG(undefined, 0x1088118))
                      >> 0x20));
      pcVar6 = ((char *)(gen_frame + 0x88));
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      (*(int *)(gen_frame + 0x1c)) = (int)pcVar6 - (int)(((char *)(gen_frame + 0x88)) + 1);
      gen_imp_GetTextExtentPoint32A(param_2,((char *)(gen_frame + 0x88)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x88)) + 1),&(*(undefined8 *)(gen_frame + 0x0)));
      gen_imp_TextOutA(param_2,iVar11 - (*(LONG *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) / 2,iVar12 - (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) / 2,((char *)(gen_frame + 0x88)),(*(int *)(gen_frame + 0x1c)));
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = (*(undefined * PTR32 *)(gen_frame + 0x34)) + 4;
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x10;
      iVar7 = (*(int *)(gen_frame + 0x2c)) + 1;
      (*(int *)(gen_frame + 0x2c)) = iVar7;
      pcVar10 = (((code *)GEN_TOP(gen_imp_SelectObject)));
      iVar11 = (*(int *)(gen_frame + 0x10));
    } while (iVar7 < (int)(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x38))[0x36c]);
  }
  if (((byte)(*(undefined * PTR32 *)(gen_frame + 0x38))[0xb0] & 1) != 0) {
    (*(int *)(gen_frame + 0x2c)) = (*(tagRECT *)(gen_frame + 0x78)).bottom / 2;
    (*pcVar10)(param_2,(*(HGDIOBJ *)(gen_frame + 0x20)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x30)));
    pHVar4 = gen_imp_CreatePen(0,1,0x900000);
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = pHVar4;
    pvVar3 = (*pcVar10)(param_2,pHVar4);
    (*(HGDIOBJ *)(gen_frame + 0x20)) = pvVar3;
    gen_imp_MoveToEx(param_2,(*(tagRECT *)(gen_frame + 0x78)).right / 2 -
                     (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x60)),
             (*(int *)(gen_frame + 0x2c)) - (int)((double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x68) * *(double *)&REFG(double, 0x1132488)),
             (LPPOINT)0x0);
    gen_imp_LineTo(param_2,(*(tagRECT *)(gen_frame + 0x78)).right / 2,(*(int *)(gen_frame + 0x2c)));
  }
  (*pcVar10)(param_2,(*(HGDIOBJ *)(gen_frame + 0x8)));
  (*pcVar10)(param_2,(*(HGDIOBJ *)(gen_frame + 0x20)));
  (*pcVar10)(param_2,(*(HGDIOBJ *)(gen_frame + 0x14)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x18)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x30)));
  uVar8 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0xc)));
  return uVar8;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d11310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd11310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined * _File;
  byte bVar5;
  int iVar6;
  
  _File = param_1;
  bVar5 = F_00d21f00((undefined *)this GEN_EDX_FWD,param_1);
  if (bVar5 == 0) {
    return 0;
  }
  iVar6 = 0;
  param_1 = ((undefined *)GEN_TOP(0x0));
  if (*((char *)GEN_TOP((*(int *)(this + 0x128) + 0x144))) != '\0') {
    do {
      iVar1 = *(int *)(this + 0x128);
      dVar2 = (double)*((float *)GEN_TOP((iVar6 + 0x28 + iVar1)));
      dVar3 = (double)*((float *)GEN_TOP((iVar6 + 0x24 + iVar1)));
      dVar4 = (double)*((float *)GEN_TOP((iVar6 + 0x20 + iVar1)));
      F_00c49386(_File,((char *)REFP(0x11328d8)),param_1,(int)(ulonglong)gen_d2bits(dVar4),
               (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
               (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
               (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
      param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1)));
      iVar6 = iVar6 + 0x10;
    } while ((int)param_1 < (int)(uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x144))));
  }
  F_00c49386(_File,((char *)REFP(0x11328f4)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x120))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x120))))));
  F_00c49386(_File,((char *)REFP(0x1132904)),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x124)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x124)))) >> 0x20))
  ;
  param_1 = ((undefined *)GEN_TOP(0x0));
  iVar6 = 0x128;
  do {
    F_00c49386(_File,((char *)REFP(0x1132914)),param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar6 + *(int *)(this + 0x128))))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar6 + *(int *)(this + 0x128))))) >> 0x20
                  ));
    param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1)));
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x130);
  F_00c49386(_File,((char *)REFP(0x1132928)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x130))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x130))))));
  F_00c49386(_File,((char *)REFP(0x113293c)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x134))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x134))))));
  F_00c49386(_File,((char *)REFP(0x113294c)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x138))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x138))))));
  F_00c49386(_File,((char *)REFP(0x1132958)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x13c))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x13c))))));
  F_00c49386(_File,((char *)REFP(0x1132968)),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x140)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x140)))) >> 0x20))
  ;
  F_00c49386(_File,((char *)REFP(0x113297c)),(uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x144))));
  F_00c49386(_File,((char *)REFP(0x1132990)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf31 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d114d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd114d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = ((char *)REFP(0x11329a8));
  pbVar5 = ((byte *)GEN_TOP(param_2));
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d11501: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d11506;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d11501;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d11506: ;
  if (iVar3 == 0) {
    uVar4 = F_00d00d00(0,0);
    if (uVar4 != 0) {
      uVar4 = F_00c4c74c(uVar4);
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 2) * 0x10))) = (float)dVar7;
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24 + uVar4 * 0x10))) = (float)dVar7;
          pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
          if (pcVar2 != ((char *)GEN_TOP(0x0))) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 0x10))) = (float)dVar7;
            return 1;
          }
        }
      }
    }
  }
  else {
    pcVar2 = ((char *)REFP(0x11329b4));
    pbVar5 = ((byte *)GEN_TOP(param_2));
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d115d6: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d115db;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d115d6;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d115db: ;
    if (iVar3 == 0) {
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x120))) = (float)dVar7;
        return 1;
      }
    }
    else {
      pcVar2 = ((char *)REFP(0x11329c0));
      pbVar5 = ((byte *)GEN_TOP(param_2));
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00d11640: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d11645;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00d11640;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d11645: ;
      if (iVar3 == 0) {
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x124))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = ((char *)REFP(0x11329cc));
        pbVar5 = ((byte *)GEN_TOP(param_2));
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d116a5: ;
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d116aa;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d116a5;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d116aa: ;
        if (iVar3 == 0) {
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
            if (pcVar2 != ((char *)GEN_TOP(0x0))) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x128 + uVar4 * 4))) = (float)dVar7;
              return 1;
            }
          }
        }
        else {
          pcVar2 = ((char *)REFP(0x11329d4));
          pbVar5 = ((byte *)GEN_TOP(param_2));
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d11727: ;
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d1172c;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d11727;
            pcVar2 = pcVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d1172c: ;
          if (iVar3 == 0) {
            pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
            if (pcVar2 != ((char *)GEN_TOP(0x0))) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x130))) = (float)dVar7;
              return 1;
            }
          }
          else {
            pcVar2 = ((char *)REFP(0x11329e0));
            pbVar5 = ((byte *)GEN_TOP(param_2));
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d11790: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d11795;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d11790;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d11795: ;
            if (iVar3 == 0) {
              pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
              if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                dVar7 = F_00c4acaa(pcVar2);
                *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x134))) = (float)dVar7;
                return 1;
              }
            }
            else {
              pcVar2 = ((char *)REFP(0x11329e8));
              pbVar5 = ((byte *)GEN_TOP(param_2));
              do {
                bVar1 = *pcVar2;
                bVar6 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_00d117f5: ;
                  iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                  goto LAB_00d117fa;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar2[1];
                bVar6 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_00d117f5;
                pcVar2 = pcVar2 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00d117fa: ;
              if (iVar3 == 0) {
                pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                  dVar7 = F_00c4acaa(pcVar2);
                  *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x138))) = (float)dVar7;
                  return 1;
                }
              }
              else {
                pcVar2 = ((char *)REFP(0x11329f0));
                pbVar5 = ((byte *)GEN_TOP(param_2));
                do {
                  bVar1 = *pcVar2;
                  bVar6 = bVar1 < *pbVar5;
                  if (bVar1 != *pbVar5) {
LAB_00d11860: ;
                    iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                    goto LAB_00d11865;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pcVar2[1];
                  bVar6 = bVar1 < pbVar5[1];
                  if (bVar1 != pbVar5[1]) goto LAB_00d11860;
                  pcVar2 = pcVar2 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_00d11865: ;
                if (iVar3 == 0) {
                  pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                  if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                    dVar7 = F_00c4acaa(pcVar2);
                    *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x13c))) = (float)dVar7;
                    return 1;
                  }
                }
                else {
                  pcVar2 = ((char *)REFP(0x11329fc));
                  pbVar5 = ((byte *)GEN_TOP(param_2));
                  do {
                    bVar1 = *pcVar2;
                    bVar6 = bVar1 < *pbVar5;
                    if (bVar1 != *pbVar5) {
LAB_00d118c5: ;
                      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                      goto LAB_00d118ca;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pcVar2[1];
                    bVar6 = bVar1 < pbVar5[1];
                    if (bVar1 != pbVar5[1]) goto LAB_00d118c5;
                    pcVar2 = pcVar2 + 2;
                    pbVar5 = pbVar5 + 2;
                  } while (bVar1 != 0);
                  iVar3 = 0;
LAB_00d118ca: ;
                  if (iVar3 == 0) {
                    pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                    if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                      dVar7 = F_00c4acaa(pcVar2);
                      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x140))) = (float)dVar7;
                      return 1;
                    }
                  }
                  else {
                    pcVar2 = ((char *)REFP(0x1132a08));
                    pbVar5 = ((byte *)GEN_TOP(param_2));
                    do {
                      bVar1 = *pcVar2;
                      bVar6 = bVar1 < *pbVar5;
                      if (bVar1 != *pbVar5) {
LAB_00d11930: ;
                        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                        goto LAB_00d11935;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pcVar2[1];
                      bVar6 = bVar1 < pbVar5[1];
                      if (bVar1 != pbVar5[1]) goto LAB_00d11930;
                      pcVar2 = pcVar2 + 2;
                      pbVar5 = pbVar5 + 2;
                    } while (bVar1 != 0);
                    iVar3 = 0;
LAB_00d11935: ;
                    if (iVar3 != 0) {
                      bVar1 = F_00d22040(param_1 GEN_EDX_ARG,param_2);
                      return bVar1;
                    }
                    uVar4 = F_00d00d00(0,0);
                    if (uVar4 != 0) {
                      uVar4 = F_00c4c74c(uVar4);
                      *((char *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x144))) = (char)uVar4;
                      return 1;
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
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00d11980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd11980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  undefined1 PVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  int * piVar8;
  float fVar9;
  float10 fVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  (*(char *)(gen_frame + 0x1b)) = '\0';
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar8;
  bVar5 = F_00d21830((undefined *)this GEN_EDX_FWD);
  if (bVar5 == 0) {
    piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x90))))(piVar8 GEN_EDX_ARG)));
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xfc))))(piVar6 GEN_EDX_ARG,*(undefined4 *)(this + 0x24));
    if ((char)uVar7 == '\0') goto LAB_00d11d8e;
    F_00d2dd80(&(*(float *)(gen_frame + 0x34)),*(undefined4 *)(this + 0x24));
    if (((byte)this[0xb0] & 0x80) == 0) {
      bVar5 = F_00cbe970(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
    }
    else {
      bVar5 = F_00cbe940(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
    }
    if (bVar5 != 0) {
      fVar10 = (float10)0;
      uVar2 = *(undefined4 *)(this + 0x28);
      iVar3 = *piVar6;
      (*(float *)(gen_frame + 0x0)) = (float)fVar10;
      (*(float *)(gen_frame + 0x4)) = (float)fVar10;
      (*(float *)(gen_frame + 0x8)) = (float)fVar10;
      (*(float *)(gen_frame + 0xc)) = (float)(float10)1;
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x3c))))
                        (piVar6,((undefined1 *)(gen_frame + 0x20)),*(undefined4 *)(this + 0x24),uVar2,&(*(float *)(gen_frame + 0x0)),0,0,1);
      F_00cbbdc0(this + 8 GEN_EDX_ARG,uVar7);
      F_00cbbdb0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
      bVar5 = F_00cbc040(this + 8 GEN_EDX_ARG);
      if (bVar5 != 0) {
        iVar3 = *(int *)(this + 0x128);
        (*(char *)(gen_frame + 0x1b)) = '\x01';
        if (((*((byte *)GEN_TOP((iVar3 + 4))) & 0x80) != 0) && ((*((byte *)GEN_TOP((iVar3 + 0xc))) & 2) != 0)) {
          fVar10 = F_00d23370(this GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((iVar3 + 0x14c)))));
          *(float *)(this + 0xa0) = (float)fVar10;
        }
        F_00d22bf0(this GEN_EDX_ARG,0x403);
        F_00cbe3b0(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
        goto LAB_00d11aa9;
      }
    }
    F_00cbe3b0(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
  }
  else {
LAB_00d11aa9: ;
    bVar5 = F_00cbc040(this + 8 GEN_EDX_ARG);
    if (bVar5 == 0) {
LAB_00d11d8e: ;
      *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) | 4;
      return 0;
    }
    uVar7 = F_00d00230(piVar8 GEN_EDX_ARG);
    if (uVar7 == 1) {
      fVar10 = F_00d22df0(((undefined1 *)(gen_frame + 0x20)),this + 0x60,*(float *)(this + 0x80),*(float *)(this + 0x94));
      (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar10)));
      F_00cbc920(this + 8 GEN_EDX_ARG,(float)fVar10);
      F_00cbc4e0(this + 8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
    }
    else {
      fVar10 = (float10)0;
      (*(float *)(gen_frame + 0x30)) = (float)fVar10;
      (*(float *)(gen_frame + 0x34)) = (float)fVar10;
      (*(float *)(gen_frame + 0x38)) = (float)fVar10;
      (*(undefined4 *)(gen_frame + 0x3c)) = 0;
      F_00d10cd0(this GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x1c)),&(*(float *)(gen_frame + 0x14)),(uint)&(*(float *)(gen_frame + 0x30)));
      F_00cbc9e0(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0x1c)),(*(float *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x30)));
      uVar7 = F_00d2e5a0();
      if ((uVar7 == 3) || (uVar7 == 5)) {
        fVar10 = F_00d2edb0(*(float *)(this + 0x80),0,2);
      }
      else {
        fVar10 = (float10)*(float *)(this + 0x80);
      }
      PVar1 = this[0x2c];
      (*(float *)(gen_frame + 0x14)) = (float)fVar10;
      if (((byte)PVar1 & 2) != 0) {
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x98))))(piVar8 GEN_EDX_ARG)));
        fVar9 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xd0))))(piVar8 GEN_EDX_ARG));
        iVar3 = *piVar8;
        (*(float *)(gen_frame + 0x1c)) = fVar9;
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((iVar3 + 0x50))))(piVar8);
        fVar10 = F_00d2bc80((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c))) GEN_EDX_ARG,(float)extraout_ST0);
        (*(float *)(gen_frame + 0x14)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x14)));
        piVar8 = (*(int * PTR32 *)(gen_frame + 0x10));
      }
      F_00cbc920(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0x14)));
    }
    if ((this[0x36e] == this[0x36d]) && (((byte)this[0xb0] & 2) == 0)) {
      fVar10 = F_00d22f40(this GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x140)))),
                            *((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) >> 2 & 1);
      fVar9 = ((float)GEN_TOF((fVar10 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x138))))));
      (*(float *)(gen_frame + 0x1c)) = fVar9;
      F_00cbc980(this + 8 GEN_EDX_ARG,fVar9);
    }
    PVar1 = this[0x2c];
    (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xc4) * (float10)*(float *)(this + 0x8c))));
    if (((byte)PVar1 & 2) != 0) {
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x98))))(piVar8 GEN_EDX_ARG)));
      fVar9 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xd0))))(piVar8 GEN_EDX_ARG));
      iVar3 = *piVar8;
      (*(float *)(gen_frame + 0x1c)) = fVar9;
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((iVar3 + 0x50))))(piVar8);
      fVar10 = F_00d2bc60((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c))) GEN_EDX_ARG,(float)extraout_ST0_00);
      (*(float *)(gen_frame + 0x14)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x14)));
    }
    F_00cbc710(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0x14)));
    if ((*(char *)(gen_frame + 0x1b)) != '\0') {
      dVar4 = GEN_X87(*(double *)&REFG(undefined, 0x1097260) * 0.0);
      fVar9 = *(float *)(this + 0xbc);
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f((int)dVar4);
      F_00cbddc0(this + 8 GEN_EDX_ARG,fVar9,(uint)&(*(float *)(gen_frame + 0x1c)));
      fVar9 = *(float *)(this + 0xc0);
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f((int)dVar4);
      F_00cbdeb0(this + 8 GEN_EDX_ARG,fVar9,(uint)&(*(float *)(gen_frame + 0x1c)));
      F_00cbc980(this + 8 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x138)))));
      F_00cbcd10(this + 8 GEN_EDX_ARG,*(float *)(this + 200),*(undefined4 *)(this + 0xcc));
      F_00cbce00(this + 8 GEN_EDX_ARG,(uint)(byte)this[0xe0]);
      if ((*(uint *)(this + 0xb0) & 0x400) != 0) {
        F_00cbcbc0(this + 8 GEN_EDX_ARG);
      }
      if ((*(uint *)(this + 0xb0) & 0x100) == 0) {
        F_00cbd990(this + 8 GEN_EDX_ARG,*(undefined4 *)(this + 0xdc),*(undefined4 *)(this + 0xb8));
      }
      else {
        F_00cbdfe0(this + 8 GEN_EDX_ARG,*(undefined4 *)(this + 0xd4),*(float *)(this + 0xbc),
                     *(float *)(this + 0xd0),gen_bits2f((unsigned int)(*(undefined4 *)(this + 0xdc))),
                     *(undefined4 *)(this + 0xb8));
      }
      *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) & 0xfffffeff;
      *(undefined4 *)(this + 0xdc) = 0;
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_00d11db0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d11db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd11db0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL(0x1e0, 0);
  char cVar1;
  code * pcVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  undefined * PTR32 * ppvVar8;
  float * pfVar9;
  undefined * pvVar10;
  float * pfVar11;
  int iVar12;
  char * pcVar13;
  undefined4 * puVar14;
  int iVar15;
  bool bVar16;
  float10 fVar17;
  float10 fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  (*(uint *)(gen_frame + 0x1cc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1d0);
  piVar6 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x98)));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  piVar6 = ((int *)GEN_TOP((*pcVar2)(piVar6)));
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x5c))))(piVar6 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x10)));
  if ((char)uVar7 != '\0') {
    iVar15 = *((int *)GEN_TOP(((int)this + 0x128)));
    pcVar13 = ((char *)GEN_TOP((iVar15 + 0x144)));
    if (*((char *)GEN_TOP((iVar15 + 0x144))) != '\0') {
      puVar14 = ((undefined4 *)GEN_TOP((iVar15 + 0x20)));
      ppvVar8 = ((undefined * PTR32 *)(gen_frame + 0xc8));
      for (iVar12 = (uint)*((byte *)GEN_TOP((iVar15 + 0x144))) * 4; this = (*(undefined * PTR32 *)(gen_frame + 0xc)), iVar12 != 0;
          iVar12 = iVar12 - 1) {
        *ppvVar8 = ((undefined *)GEN_TOP(*puVar14));
        puVar14 = puVar14 + 1;
        ppvVar8 = ppvVar8 + 1;
      }
    }
    if ((*((byte *)GEN_TOP((iVar15 + 4))) & 4) == 0) {
      iVar15 = *piVar6;
      (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined * PTR32 *)(gen_frame + 0xc8))[1];
      ((code *)*((gen_code32 *)GEN_TOP((iVar15 + 0x30))))(piVar6,&(*(float *)(gen_frame + 0xa0)));
      bVar5 = F_00d218f0((*(float *)(gen_frame + 0xa4)),&(*(undefined * PTR32 *)(gen_frame + 0xc)),*((int *)GEN_TOP(((int)this + 0x128))),
                           *((int *)GEN_TOP(((int)this + 0x128))) + 0x128);
      if (bVar5 != 1) {
        return 0;
      }
      pcVar13 = ((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x144)));
      if (*pcVar13 != '\0') {
        uVar7 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x144)));
        ppvVar8 = ((undefined * PTR32 *)(gen_frame + 0xc8)) + 1;
        do {
          *ppvVar8 = (*(undefined * PTR32 *)(gen_frame + 0xc));
          ppvVar8 = ppvVar8 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    cVar1 = *pcVar13;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(0x0));
    if (cVar1 != '\0') {
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((undefined * PTR32 *)(gen_frame + 0xc8));
      pfVar11 = ((float *)GEN_TOP(((int)this + 300)));
      do {
        pfVar9 = ((float *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x50)),(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)))));
        fVar23 = *pfVar9;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 4;
        (*(float *)(gen_frame + 0xb8)) = fVar23;
        fVar3 = pfVar9[1];
        (*(float *)(gen_frame + 0xbc)) = fVar3;
        fVar4 = pfVar9[2];
        (*(float *)(gen_frame + 0xc0)) = fVar4;
        fVar19 = pfVar9[3];
        *pfVar11 = fVar23;
        pfVar11[1] = fVar3;
        pfVar11[2] = fVar4;
        pfVar11[3] = fVar19;
        (*(float *)(gen_frame + 0xc4)) = fVar19;
        bVar5 = *((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x144)));
        pvVar10 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 1)));
        pfVar11 = pfVar11 + 4;
        (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar10;
      } while ((int)pvVar10 < (int)(uint)bVar5);
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x36c))) = 0;
    uVar7 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x144)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((undefined * PTR32 *)GEN_TOP(0x0));
    if (uVar7 != 1 && -1 < (int)(uVar7 - 1)) {
      (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(((int)this + 300)));
      do {
        fVar23 = F_010536a0((*(undefined * PTR32 *)(gen_frame + 0xc)),(int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x10,&(*(float *)(gen_frame + 0xb8)));
        bVar5 = *((byte *)GEN_TOP(((int)this + 0x36c)));
        fVar17 = (float10)fVar23;
        *((float *)GEN_TOP(((int)this + (uint)bVar5 * 0x10 + 0x22c))) = (*(float *)(gen_frame + 0xb8));
        iVar15 = (uint)bVar5 * 0x10;
        *((float *)GEN_TOP(((int)this + iVar15 + 0x230))) = (*(float *)(gen_frame + 0xbc));
        *((float *)GEN_TOP(((int)this + iVar15 + 0x234))) = (*(float *)(gen_frame + 0xc0));
        *((float *)GEN_TOP(((int)this + iVar15 + 0x238))) = (*(float *)(gen_frame + 0xc4));
        iVar15 = *((int *)GEN_TOP(((int)this + 0x128)));
        fVar18 = (float10)*((float *)GEN_TOP((iVar15 + 0x124)));
        if (!(fVar17 <= fVar18) == ((GEN_ISNAN(fVar18) || GEN_ISNAN(fVar17)) || fVar18 == fVar17)) {
          fVar18 = (float10)*((float *)GEN_TOP((iVar15 + 0x120)));
          if (!(fVar17 <= fVar18) || ((GEN_ISNAN(fVar18) || GEN_ISNAN(fVar17)) || fVar18 == fVar17)) {
            fVar23 = ((float)GEN_TOF((fVar17 - (float10)*((float *)GEN_TOP((iVar15 + 0x120))))));
            *param_1 = fVar23;
            fVar23 = ((float)GEN_TOF(((float10)1 -
                            (float10)((float)GEN_TOF(((float10)fVar23 /
                                            ((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x124
                                                                ))) -
                                            (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x120)))
                                            )))))));
            *param_1 = fVar23;
            fVar17 = GEN_X87((float10)fVar23 * (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x130))));
          }
          else {
            fVar23 = ((float)GEN_TOF(((float10)1 -
                            (float10)((float)GEN_TOF((fVar17 / (float10)*((float *)GEN_TOP((iVar15 + 0x120)))))))));
            *param_1 = fVar23;
            fVar17 = GEN_X87((float10)fVar23 *
                     ((float10)1 - (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x130)))) +
                     (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x130))));
          }
          *param_1 = (float)fVar17;
          *((float *)GEN_TOP(((int)this + (uint)*((byte *)GEN_TOP(((int)this + 0x36c))) * 4 + 0x32c))) = *param_1;
          bVar5 = *((byte *)GEN_TOP(((int)this + 0x36c)));
          *((undefined1 *)GEN_TOP(((int)&(*(float *)(gen_frame + 0xa0)) + (uint)bVar5))) = (*(undefined1 *)((char *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 0));
          *((byte *)GEN_TOP(((int)this + 0x36c))) = bVar5 + 1;
        }
        bVar5 = *((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x144)));
        (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x10)));
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 1)));
      } while ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) < (int)(bVar5 - 1));
    }
    *((float *)GEN_TOP(((int)this + 0x80))) = (float)(float10)0;
    if (*((char *)GEN_TOP(((int)this + 0x36c))) != '\0') {
      iVar15 = 0;
      *((undefined1 *)GEN_TOP(((int)this + 0x36e))) = *((undefined1 *)GEN_TOP(((int)this + 0x36d)));
      if (*((char *)GEN_TOP(((int)this + 0x36c))) != '\0') {
        pfVar11 = ((float *)GEN_TOP(((int)this + 0x32c)));
        pfVar9 = ((float *)GEN_TOP(((int)this + 0x234)));
        do {
          fVar17 = (float10)*((float *)GEN_TOP(((int)this + 0x80)));
          fVar18 = (float10)*pfVar11;
          if (fVar17 <= fVar18 && ((!GEN_ISNAN(fVar18) && !GEN_ISNAN(fVar17)) && fVar18 != fVar17)) {
LAB_00d1223a: ;
            *((float *)GEN_TOP(((int)this + 0x80))) = *pfVar11;
            *((float *)GEN_TOP(((int)this + 0x50))) = pfVar9[-2];
            *((float *)GEN_TOP(((int)this + 0x54))) = pfVar9[-1];
            *((float *)GEN_TOP(((int)this + 0x58))) = *pfVar9;
            *((float *)GEN_TOP(((int)this + 0x5c))) = pfVar9[1];
            *((undefined1 *)GEN_TOP(((int)this + 0x36d))) = *((undefined1 *)GEN_TOP(((int)&(*(float *)(gen_frame + 0xa0)) + iVar15)));
          }
          else {
            bVar16 = GEN_ISNAN((float10)*pfVar11) || GEN_ISNAN((float10)*((float *)GEN_TOP(((int)this + 0x80))));
            if (bVar16 != (bVar16 || (float10)*pfVar11 == (float10)*((float *)GEN_TOP(((int)this + 0x80))))) {
              fVar23 = *((float *)GEN_TOP(((int)this + 0x5c)));
              fVar19 = pfVar9[-1] * pfVar9[-1];
              fVar20 = *pfVar9 * *pfVar9;
              fVar21 = pfVar9[1] * pfVar9[1];
              fVar3 = *((float *)GEN_TOP(((int)this + 0x58)));
              fVar4 = *((float *)GEN_TOP(((int)this + 0x50)));
              fVar22 = GEN_X87(SQRT(((fVar19 + pfVar9[-2] * pfVar9[-2]) + fVar20) + fVar21));
              (*(float *)(gen_frame + 0x50)) = fVar22;
              (*(float *)(gen_frame + 0x54)) = ((fVar19 + fVar19) + fVar20) + fVar21;
              (*(float *)(gen_frame + 0x58)) = ((fVar19 + fVar20) + fVar20) + fVar21;
              (*(float *)(gen_frame + 0x5c)) = ((fVar19 + fVar21) + fVar20) + fVar21;
              fVar17 = ((float10)GEN_TOD(GEN_X87(SQRT(((*((float *)GEN_TOP(((int)this + 0x54))) * *((float *)GEN_TOP(((int)this + 0x54))) +
                                      fVar4 * fVar4) + fVar3 * fVar3) + fVar23 * fVar23))));
              fVar18 = (float10)fVar22;
              if (!(fVar17 <= fVar18) != (GEN_ISNAN(fVar18) || GEN_ISNAN(fVar17))) goto LAB_00d1223a;
            }
          }
          iVar15 = iVar15 + 1;
          pfVar11 = pfVar11 + 1;
          pfVar9 = pfVar9 + 4;
        } while (iVar15 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x36c))));
      }
      *((undefined4 *)GEN_TOP(((int)this + 0x60))) = *((undefined4 *)GEN_TOP(((int)this + 0x50)));
      puVar14 = ((undefined4 *)GEN_TOP(((int)this + 0x60)));
      *((undefined4 *)GEN_TOP(((int)this + 100))) = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
      *((undefined4 *)GEN_TOP(((int)this + 0x68))) = *((undefined4 *)GEN_TOP(((int)this + 0x58)));
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP(((int)this + 0x5c)));
      *param_1 = *((float *)GEN_TOP(((int)this + 0x80)));
      pfVar11 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x68))))(piVar6 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x50)),puVar14)));
      (*(float *)(gen_frame + 0xb8)) = *pfVar11;
      (*(float *)(gen_frame + 0xbc)) = pfVar11[1];
      (*(float *)(gen_frame + 0xc0)) = pfVar11[2];
      iVar15 = *((int *)GEN_TOP(((int)this + 0x128)));
      (*(float *)(gen_frame + 0xc4)) = pfVar11[3];
      F_00d24070(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0xb8)),param_1,(int)this + 0x8c,GEN_ARGF(*((float *)GEN_TOP((iVar15 + 0x124)))),GEN_ARGF(*((float *)GEN_TOP((iVar15 + 0x120)))),GEN_ARGF(*((float *)GEN_TOP((iVar15 + 0x130)))),GEN_ARGF(*((float *)GEN_TOP((iVar15 + 0x148)))))
      ;
      F_00d219d0(this GEN_EDX_ARG,(uint)param_1,(int)this + 0x8c,param_2);
      *param_1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x134))) *
                        (float10)*param_1)));
      if ((*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0xc))) & 0x20) != 0) {
        *puVar14 = *((undefined4 *)GEN_TOP(((int)this + 300)));
        *((undefined4 *)GEN_TOP(((int)this + 100))) = *((undefined4 *)GEN_TOP(((int)this + 0x130)));
        *((undefined4 *)GEN_TOP(((int)this + 0x68))) = *((undefined4 *)GEN_TOP(((int)this + 0x134)));
        *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP(((int)this + 0x138)));
      }
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 100))))(piVar6 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x60)));
      if ((char)uVar7 == '\x01') {
        fVar23 = *((float *)GEN_TOP(((int)this + 0x7c)));
        fVar3 = *((float *)GEN_TOP(((int)this + 0x78)));
        fVar4 = *((float *)GEN_TOP(((int)this + 0x70)));
        fVar19 = *((float *)GEN_TOP(((int)this + 0x74)));
        fVar20 = (((*(float *)(gen_frame + 0x60)) * fVar4 + (*(float *)(gen_frame + 0x70)) * fVar19) + (*(float *)(gen_frame + 0x80)) * fVar3) + (*(float *)(gen_frame + 0x90)) * fVar23
        ;
        fVar21 = (((*(float *)(gen_frame + 0x64)) * fVar4 + (*(float *)(gen_frame + 0x74)) * fVar19) + (*(float *)(gen_frame + 0x84)) * fVar3) + (*(float *)(gen_frame + 0x94)) * fVar23
        ;
        fVar22 = (((*(float *)(gen_frame + 0x68)) * fVar4 + (*(float *)(gen_frame + 0x78)) * fVar19) + (*(float *)(gen_frame + 0x88)) * fVar3) + (*(float *)(gen_frame + 0x98)) * fVar23
        ;
        fVar23 = (((*(float *)(gen_frame + 0x6c)) * fVar4 + (*(float *)(gen_frame + 0x7c)) * fVar19) + (*(float *)(gen_frame + 0x8c)) * fVar3) + (*(float *)(gen_frame + 0x9c)) * fVar23
        ;
        (*(float *)(gen_frame + 0xa0)) = fVar20;
        (*(float *)(gen_frame + 0xa4)) = fVar21;
        (*(float *)(gen_frame + 0xa8)) = fVar22;
        (*(float *)(gen_frame + 0xac)) = fVar23;
        (*(float *)(gen_frame + 0xb8)) = fVar20;
        (*(float *)(gen_frame + 0xbc)) = fVar21;
        (*(float *)(gen_frame + 0xc4)) = fVar23;
        (*(float *)(gen_frame + 0xc0)) = fVar22;
        fVar17 = F_00d21d90(this GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0xb8)),param_1,(int)this + 0x8c);
      }
      else {
        fVar17 = F_00d21d90(this GEN_EDX_ARG,(uint)puVar14,param_1,(int)this + 0x8c);
      }
      *((float *)GEN_TOP(((int)this + 0x90))) = (float)fVar17;
      *((float *)GEN_TOP(((int)this + 0x80))) = *param_1;
      bVar16 = GEN_ISNAN((float10)0) || GEN_ISNAN((float10)*param_1);
      if (bVar16 == (bVar16 || (float10)0 == (float10)*param_1)) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d12570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd12570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00d22da0(this GEN_EDX_FWD,param_1,0x150)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x54; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x54);
  }
  F_00d12c50(*(undefined4 *)(this + 0x128) GEN_EDX_ARG,(uint)puVar1);
  return (uint)(puVar1 + 0x54);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf28 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d125d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd125d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x110, 0, 4);
  int iVar1;
  undefined * pPVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  ulonglong uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c));
  uVar3 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x108;
    uVar6 = F_00427d90();
    iVar1 = *(int *)(this + 0x128);
    (*(ulonglong *)(gen_frame + 0x8)) = uVar6;
    (*(undefined4 *)(gen_frame + 0xfc)) = *((undefined4 *)GEN_TOP((iVar1 + 0x124)));
    iVar5 = 0;
    (*(undefined4 *)(gen_frame + 0xf8)) = *((undefined4 *)GEN_TOP((iVar1 + 0x120)));
    (*(byte *)(gen_frame + 0x100)) = *((byte *)GEN_TOP((iVar1 + 0x144)));
    if (*((byte *)GEN_TOP((iVar1 + 0x144))) != 0) {
      pPVar2 = this + 0x130;
      puVar4 = ((undefined4 *)(gen_frame + 0x3c));
      do {
        iVar5 = iVar5 + 1;
        puVar4[-1] = *(undefined4 *)(pPVar2 - 4);
        *puVar4 = *(undefined4 *)pPVar2;
        puVar4[1] = *(undefined4 *)(pPVar2 + 4);
        pPVar2 = pPVar2 + 0x10;
        puVar4 = puVar4 + 3;
      } while (iVar5 < (int)(uint)(*(byte *)(gen_frame + 0x100)));
    }
    F_00d12ad0(&(*(undefined2 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)));
    uVar3 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)),0x108);
  }
  return uVar3;
}

/* ref: FUN_00d126c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d126c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd126c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_FRAME_DECL(0x180, 0);
  int * this;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * pPVar4;
  
  (*(uint *)(gen_frame + 0x16c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x170);
  F_00d22580(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[33])REFP(0x1132a54));
  *(uint *)(param_1 + 0xb0) =
       *(uint *)(param_1 + 0xb0) ^ ((uint)param_5 << 4 ^ *(uint *)(param_1 + 0xb0)) & 0x10;
  if (param_5 == 0) {
    *(undefined4 * PTR32 *)(param_1 + 0x128) = param_2;
  }
  else {
    *(undefined * PTR32 *)(param_1 + 0x128) = param_1 + 0x370;
    puVar3 = param_2;
    pPVar4 = param_1 + 0x370;
    for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 - 1) {
      *(undefined4 *)pPVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pPVar4 = pPVar4 + 4;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x128);
  F_00d228c0(param_1 GEN_EDX_ARG);
  *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x148))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x148))) *
              (float10)*(double *)&REFG(undefined, 0x109cac8))));
  *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0xc))) = *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0xc))) | 0x80;
  param_1[0x36c] = (undefined1)0x0;
  *(undefined2 *)(param_1 + 0x36d) = 0;
  if (0xf < *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x144)))) {
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x144))) = 0x10;
  }
  F_00d20fe0(param_1 GEN_EDX_ARG,~(*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 4))) >> 5) & 1);
  this = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xe4))))(this GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x68))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x160);
  }
  F_00d125d0(param_1 GEN_EDX_ARG,0x401);
  return (uint)param_1;
}

/* ref: FUN_00d12820 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d12820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd12820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x180, 0);
  byte * pbVar1;
  int iVar2;
  int * this_00;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x16c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x170);
  F_00d22720(this GEN_EDX_FWD,param_1,param_2);
  *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) | 0x10;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1132a54));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x128))) = ((undefined *)GEN_TOP(((int)this + 0x370)));
  F_00d12b90(((undefined *)GEN_TOP(((int)this + 0x370))) GEN_EDX_ARG);
  iVar2 = *((int *)GEN_TOP(((int)this + 0x128)));
  *((int *)GEN_TOP(((int)this + 0x18))) = iVar2;
  *((float *)GEN_TOP((iVar2 + 0x148))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 0x148))) * (float10)*(double *)&REFG(undefined, 0x109cac8))));
  pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0xc)));
  *pbVar1 = *pbVar1 | 0x80;
  *((undefined1 *)GEN_TOP(((int)this + 0x36c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x36d))) = 0;
  if (0xf < *((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x144)))) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x144))) = 0x10;
  }
  this_00 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_ARG);
  if ((char)uVar3 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x160);
  }
  F_00d125d0(this GEN_EDX_ARG,0x401);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf14 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d12920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd12920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ushort uVar1;
  int * this_00;
  int iVar2;
  byte bVar3;
  uint uVar4;
  float fVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_FWD,0x406);
  if (((byte)this[0xb0] & 4) != 0) {
    return 0;
  }
  bVar3 = F_00d217a0((undefined *)this GEN_EDX_ARG,param_1);
  if (bVar3 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(float10)0)));
    *(float *)(this + 0x8c) = (float)(float10)1;
    F_00d21970(this GEN_EDX_ARG);
    bVar3 = F_00d11db0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),param_1);
    if (bVar3 != 0) {
      this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
      iVar2 = *(int *)(this + 0x128);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x18))))(this_00 GEN_EDX_ARG);
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 0x10 + (uVar4 & 0xff) * 4))) *
                       (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0)))))))))));
      uVar1 = *((ushort *)GEN_TOP((iVar2 + 0xe)));
      if (uVar1 != 0) {
        fVar5 = F_00d005d0(this_00 GEN_EDX_ARG,(uint)uVar1);
        (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar5 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0)))))))));
      }
      iVar2 = *(int *)(this + 0x128);
      *(undefined * PTR32 *)(this + 0x80) = (*(undefined * PTR32 *)(gen_frame + 0x0));
      if ((*((byte *)GEN_TOP((iVar2 + 0xc))) & 8) != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x0)) = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x134)));
        *(undefined4 *)(this + 0x80) = *((undefined4 *)GEN_TOP((iVar2 + 0x134)));
      }
      if ((((byte)this[0xb0] & 0x40) == 0) && (bVar3 = F_00d228c0(this GEN_EDX_ARG), bVar3 == 0)) {
        return 1;
      }
      bVar3 = F_00d00ed0(this_00 GEN_EDX_ARG,this,(uint)(byte)this[0x2d],*(undefined4 *)(this + 0x30),
                           ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0))))));
      return bVar3;
    }
    F_00d219b0(this GEN_EDX_ARG);
    F_00d22c70(this GEN_EDX_ARG,0);
  }
  return 1;
}

/* ref: FUN_00d12a30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d12a30(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd12a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1] * in_ecx[1];
  fVar2 = in_ecx[2] * in_ecx[2];
  fVar3 = in_ecx[3] * in_ecx[3];
  *param_2 = ((fVar1 + *in_ecx * *in_ecx) + fVar2) + fVar3;
  param_2[1] = ((fVar1 + fVar1) + fVar2) + fVar3;
  param_2[2] = ((fVar1 + fVar2) + fVar2) + fVar3;
  param_2[3] = ((fVar1 + fVar3) + fVar2) + fVar3;
  return (uint)param_2;
}

/* ref: FUN_00d12a80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d12a80(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd12a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1] * in_ecx[1];
  fVar2 = in_ecx[2] * in_ecx[2];
  fVar3 = in_ecx[3] * in_ecx[3];
  *param_2 = SQRT(((fVar1 + *in_ecx * *in_ecx) + fVar2) + fVar3);
  param_2[1] = ((fVar1 + fVar1) + fVar2) + fVar3;
  param_2[2] = ((fVar1 + fVar2) + fVar2) + fVar3;
  param_2[3] = ((fVar1 + fVar3) + fVar2) + fVar3;
  return (uint)param_2;
}

/* ref: FUN_00d12ad0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d12ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd12ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *param_1 = *(undefined2 *)this;
  param_1[1] = *((undefined2 *)GEN_TOP(((int)this + 2)));
  *(undefined4 *)(param_1 + 4) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined4 *)(param_1 + 6) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  *(undefined4 *)(param_1 + 0xc) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *(undefined4 *)(param_1 + 0xe) = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  *(undefined4 *)(param_1 + 0x10) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  *(undefined4 *)(param_1 + 0x16) = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  *(undefined4 *)(param_1 + 0x14) = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  param_1[0x18] = *((undefined2 *)GEN_TOP(((int)this + 0x30)));
  param_1[0x19] = *((undefined2 *)GEN_TOP(((int)this + 0x32)));
  *(undefined1 *)(param_1 + 0x1a) = *((undefined1 *)GEN_TOP(((int)this + 0x34)));
  *(undefined4 *)(param_1 + 0x7c) = *((undefined4 *)GEN_TOP(((int)this + 0xf8)));
  *(undefined4 *)(param_1 + 0x7e) = *((undefined4 *)GEN_TOP(((int)this + 0xfc)));
  *(undefined1 *)(param_1 + 0x80) = *((undefined1 *)GEN_TOP(((int)this + 0x100)));
  iVar1 = 0x10;
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x40)));
  do {
    *puVar2 = *((undefined4 *)GEN_TOP((((int)this - (int)param_1) + (int)puVar2)));
    iVar1 = iVar1 - 1;
    puVar2[1] = puVar3[-1];
    puVar2[2] = *puVar3;
    puVar2 = puVar2 + 3;
    puVar3 = puVar3 + 3;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00d12b90 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d12b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd12b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  float * pfVar4;
  int iVar5;
  
  fVar1 = (float10)1;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 3))) = 0x400;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 5))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((float *)GEN_TOP(((int)this + 0x10))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x14))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x18))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x1c))) = (float)fVar1;
  *((undefined2 *)GEN_TOP(((int)this + 0xe))) = 0;
  fVar2 = (float10)0;
  *(undefined2 *)this = 0x150;
  *((undefined1 *)GEN_TOP(((int)this + 0xd))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 2))) = 6;
  iVar5 = 0x10;
  pfVar4 = ((float *)GEN_TOP(((int)this + 0x28)));
  do {
    pfVar4[-2] = (float)fVar2;
    iVar5 = iVar5 - 1;
    pfVar4[-1] = (float)fVar2;
    *pfVar4 = (float)fVar2;
    pfVar4[1] = (float)fVar2;
    pfVar4[1] = (float)fVar1;
    uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094880)));
    pfVar4 = pfVar4 + 4;
  } while (iVar5 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0x144))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x120))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x124))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x124))), REFG(float, 0x10a0d00));
  *((undefined4 *)GEN_TOP(((int)this + 0x128))) = uVar3;
  *((float *)GEN_TOP(((int)this + 300))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x140))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x130))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x134))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x138))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x13c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x148))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x14c))) = (float)fVar2;
  return 0;
}

/* ref: FUN_00d12c50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d12c50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd12c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  int local_8;
  
  F_00d0c080(param_1 GEN_EDX_FWD,param_2);
  puVar3 = ((uint *)GEN_TOP((param_1 + 0x28)));
  local_8 = 0x10;
  puVar2 = ((uint *)GEN_TOP((param_2 + 0x20)));
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar2)));
    *puVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[-1];
    puVar2[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar3;
    puVar2[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[1];
    puVar2[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar3 = puVar3 + 4;
    local_8 = local_8 - 1;
    puVar2 = puVar2 + 4;
  } while (local_8 != 0);
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x120)));
  *((uint *)GEN_TOP((param_2 + 0x120))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x124)));
  *((uint *)GEN_TOP((param_2 + 0x124))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x128)));
  *((uint *)GEN_TOP((param_2 + 0x128))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 300)));
  *((uint *)GEN_TOP((param_2 + 300))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x130)));
  *((uint *)GEN_TOP((param_2 + 0x130))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x134)));
  *((uint *)GEN_TOP((param_2 + 0x134))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x138)));
  *((uint *)GEN_TOP((param_2 + 0x138))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x13c)));
  *((uint *)GEN_TOP((param_2 + 0x13c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x140)));
  *((uint *)GEN_TOP((param_2 + 0x140))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((undefined1 *)GEN_TOP((param_2 + 0x144))) = *((undefined1 *)GEN_TOP((param_1 + 0x144)));
  *((undefined2 *)GEN_TOP((param_2 + 0x145))) = 0;
  *((undefined1 *)GEN_TOP((param_2 + 0x147))) = 0;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x148)));
  *((uint *)GEN_TOP((param_2 + 0x148))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x14c)));
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((uint *)GEN_TOP((param_2 + 0x14c))) = uVar1;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d12e10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd12e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[33])REFP(0x1132a54));
  F_00d23680(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d12e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd12e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  
  F_00d213b0(this GEN_EDX_FWD,param_1,(undefined1)param_2);
  iVar10 = 0;
  do {
    iVar9 = *(int *)(this + 0x128);
    fVar4 = *((float *)GEN_TOP((iVar9 + 0x28 + iVar10)));
    fVar5 = *((float *)GEN_TOP((iVar9 + 0x2c + iVar10)));
    pfVar1 = ((float *)GEN_TOP((iVar9 + 0x20 + iVar10)));
    pfVar2 = ((float *)GEN_TOP((iVar9 + 0x24 + iVar10)));
    fVar6 = param_1[3];
    pfVar3 = ((float *)GEN_TOP((iVar9 + 0x20 + iVar10)));
    iVar10 = iVar10 + 0x10;
    fVar7 = param_1[1];
    fVar8 = param_1[2];
    *pfVar3 = *pfVar1 + *param_1;
    pfVar3[1] = *pfVar2 + fVar7;
    pfVar3[2] = fVar4 + fVar8;
    pfVar3[3] = fVar5 + fVar6;
    *((float *)GEN_TOP((*(int *)(this + 0x128) + 0x1c + iVar10))) = (float)(float10)1;
  } while (iVar10 < 0x20);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d12f20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd12f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x80)));
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d12f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd12f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  float10 fVar1;
  
  fVar1 = F_00d22f40(this GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60)))),
                       *((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) >> 2 & 1);
  *param_1 = ((float)GEN_TOF((fVar1 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x58))))));
  return (uint)param_1;
}

/* ref: FUN_00d12f80 */
GEN_LIB GEN_NOFRAME float F_00d12f80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd12f80u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x70, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  undefined4 * puVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(float *)(gen_frame + 0x28)) = param_2;
  pfVar4 = ((float *)GEN_TOP(F_00c34320((undefined4)gen_fl2bits(param_2) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),param_1 + 0x20)));
  ((float *)(gen_frame + 0x3c))[0] = *pfVar4;
  ((float *)(gen_frame + 0x3c))[1] = pfVar4[1];
  ((float *)(gen_frame + 0x3c))[2] = pfVar4[2];
  ((float *)(gen_frame + 0x3c))[3] = pfVar4[3];
  puVar5 = ((undefined4 *)GEN_TOP(F_00c34320((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x28))) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),param_1 + 0x30)));
  ((float *)(gen_frame + 0x3c))[4] = gen_bits2f(*puVar5);
  ((float *)(gen_frame + 0x3c))[5] = gen_bits2f(puVar5[1]);
  ((float *)(gen_frame + 0x3c))[6] = gen_bits2f(puVar5[2]);
  (*(undefined4 *)(gen_frame + 0x58)) = puVar5[3];
  if ((*((byte *)GEN_TOP((param_1 + 4))) & 4) == 0) {
    (*(float *)(gen_frame + 0x28)) = ((float *)(gen_frame + 0x3c))[1];
    F_00d218f0(param_3[1],&(*(float *)(gen_frame + 0x28)),param_1,param_1 + 0x48);
    ((float *)(gen_frame + 0x3c))[1] = (*(float *)(gen_frame + 0x28));
    ((float *)(gen_frame + 0x3c))[5] = (*(float *)(gen_frame + 0x28));
  }
  fVar13 = *param_3;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  iVar6 = 2;
  pfVar4 = ((float *)(gen_frame + 0x3c)) + 2;
  do {
    iVar6 = iVar6 - 1;
    fVar9 = pfVar4[-2] - fVar13;
    fVar10 = pfVar4[-1] - fVar1;
    fVar11 = *pfVar4 - fVar2;
    fVar12 = pfVar4[1] - fVar3;
    (*(float *)(gen_frame + 0x0)) = fVar9;
    (*(float *)(gen_frame + 0x4)) = fVar10;
    (*(float *)(gen_frame + 0x8)) = fVar11;
    (*(float *)(gen_frame + 0xc)) = fVar12;
    (*(float *)(gen_frame + 0x18)) = fVar9;
    pfVar4[-2] = fVar9;
    (*(float *)(gen_frame + 0x1c)) = fVar10;
    pfVar4[-1] = fVar10;
    (*(float *)(gen_frame + 0x20)) = fVar11;
    *pfVar4 = fVar11;
    (*(float *)(gen_frame + 0x24)) = fVar12;
    pfVar4[1] = fVar12;
    pfVar4 = pfVar4 + 4;
  } while (iVar6 != 0);
  fVar13 = F_010536a0(((float *)(gen_frame + 0x3c)),((float *)(gen_frame + 0x3c)) + 4,((undefined1 *)(gen_frame + 0x2c)));
  (*(float *)(gen_frame + 0x28)) = fVar13;
  fVar7 = (float10)fVar13;
  fVar8 = (float10)*((float *)GEN_TOP((param_1 + 0x44)));
  if (!(fVar7 <= fVar8) != ((GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7)) || fVar8 == fVar7)) {
    fVar13 = ((float)GEN_TOF((fVar7 - (float10)*((float *)GEN_TOP((param_1 + 0x44))))));
    (*(float *)(gen_frame + 0x28)) = fVar13;
    return fVar13;
  }
  return (float)(float10)0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d13110(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd13110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x70) {
    return 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x128)));
  puVar3 = param_2;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x70;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf19 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d13140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd13140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x128);
  *param_1 = *((undefined4 *)GEN_TOP((iVar1 + 0x40)));
  *param_2 = *((undefined4 *)GEN_TOP((iVar1 + 0x44)));
  *param_3 = *((undefined4 *)GEN_TOP((iVar1 + 100)));
  *param_4 = *((undefined4 *)GEN_TOP((iVar1 + 0x60)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d13170(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd13170u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x128)));
  *((float *)GEN_TOP((uVar1 + 0x40))) = param_2;
  *((float *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x128))) + 0x44))) = param_3;
  return uVar1;
}

/* ref: FUN_00d13190 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00d13190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd13190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_GS(0xd0, 0, 4);
  int iVar1;
  code * pcVar2;
  undefined4 uVar3;
  byte bVar4;
  int * piVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc));
  piVar5 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x98))))(piVar5 GEN_EDX_FWD)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x5c))))(piVar5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  if ((char)uVar6 != '\0') {
    iVar1 = *((int *)GEN_TOP(((int)this + 0x128)));
    bVar4 = *((byte *)GEN_TOP((iVar1 + 4)));
    puVar8 = *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x24)));
    (*(undefined4 *)(gen_frame + 0xa8)) = *((undefined4 *)GEN_TOP((iVar1 + 0x20)));
    (*(undefined4 * PTR32 *)(gen_frame + 0xac)) = puVar8;
    (*(undefined4 *)(gen_frame + 0xb0)) = *((undefined4 *)GEN_TOP((iVar1 + 0x28)));
    (*(undefined4 *)(gen_frame + 0xb4)) = *((undefined4 *)GEN_TOP((iVar1 + 0x2c)));
    (*(undefined4 *)(gen_frame + 0xb8)) = *((undefined4 *)GEN_TOP((iVar1 + 0x30)));
    (*(undefined4 * PTR32 *)(gen_frame + 0xbc)) = *((undefined4 * PTR32 *)GEN_TOP((iVar1 + 0x34)));
    (*(undefined4 *)(gen_frame + 0xc0)) = *((undefined4 *)GEN_TOP((iVar1 + 0x38)));
    (*(undefined4 *)(gen_frame + 0xc4)) = *((undefined4 *)GEN_TOP((iVar1 + 0x3c)));
    if ((bVar4 & 4) == 0) {
      pcVar2 = *((gen_code32 *)GEN_TOP((*piVar5 + 0x30)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar8;
      (*pcVar2)(piVar5,((undefined1 *)(gen_frame + 0x88)));
      bVar4 = F_00d218f0((*(float *)(gen_frame + 0x8c)),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),*((int *)GEN_TOP(((int)this + 0x128))),
                           *((int *)GEN_TOP(((int)this + 0x128))) + 0x48);
      if (bVar4 != 1) {
        return 0;
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0xac)) = (*(undefined4 * PTR32 *)(gen_frame + 0x0));
      (*(undefined4 * PTR32 *)(gen_frame + 0xbc)) = (*(undefined4 * PTR32 *)(gen_frame + 0x0));
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = &(*(undefined4 *)(gen_frame + 0xa8));
    puVar8 = ((undefined4 *)GEN_TOP(((int)this + 300)));
    (*(float *)(gen_frame + 0x4)) = 2.8026e-45;
    do {
      puVar7 = ((undefined4 *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)),(*(undefined4 * PTR32 *)(gen_frame + 0x0)))));
      uVar3 = *puVar7;
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 4;
      *puVar8 = uVar3;
      puVar8[1] = puVar7[1];
      puVar8[2] = puVar7[2];
      puVar8[3] = puVar7[3];
      puVar8 = puVar8 + 4;
      iVar1 = (int)gen_fl2bits((*(float *)(gen_frame + 0x4))) - 1;
      (*(float *)(gen_frame + 0x4)) = gen_bits2f(iVar1);
    } while (iVar1 != 0);
    fVar12 = F_010536a0((int)this + 300,(int)this + 0x13c,&(*(undefined4 *)(gen_frame + 0x98)));
    (*(float *)(gen_frame + 0x4)) = fVar12;
    fVar10 = (float10)fVar12;
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = (*(undefined4 *)(gen_frame + 0x98));
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = (*(undefined4 *)(gen_frame + 0x9c));
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = (*(undefined4 *)(gen_frame + 0xa0));
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = (*(undefined4 *)(gen_frame + 0xa4));
    puVar8 = ((undefined4 *)GEN_TOP(((int)this + 0x60)));
    *puVar8 = (*(undefined4 *)(gen_frame + 0x98));
    *((undefined4 *)GEN_TOP(((int)this + 100))) = (*(undefined4 *)(gen_frame + 0x9c));
    *((undefined4 *)GEN_TOP(((int)this + 0x68))) = (*(undefined4 *)(gen_frame + 0xa0));
    *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = (*(undefined4 *)(gen_frame + 0xa4));
    iVar1 = *((int *)GEN_TOP(((int)this + 0x128)));
    fVar11 = (float10)*((float *)GEN_TOP((iVar1 + 0x44)));
    if (!(fVar10 <= fVar11) == ((GEN_ISNAN(fVar11) || GEN_ISNAN(fVar10)) || fVar11 == fVar10)) {
      fVar11 = (float10)*((float *)GEN_TOP((iVar1 + 0x40)));
      if (!(fVar10 <= fVar11) || ((GEN_ISNAN(fVar11) || GEN_ISNAN(fVar10)) || fVar11 == fVar10)) {
        fVar12 = ((float)GEN_TOF((fVar10 - (float10)*((float *)GEN_TOP((iVar1 + 0x40))))));
        (*(float *)(gen_frame + 0x4)) = fVar12;
        *param_1 = fVar12;
        fVar12 = ((float)GEN_TOF(((float10)fVar12 /
                        ((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x44))) -
                        (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x40)))))));
        (*(float *)(gen_frame + 0x4)) = fVar12;
        fVar12 = (float)((float10)1 - (float10)fVar12);
        (*(float *)(gen_frame + 0x4)) = fVar12;
        *param_1 = fVar12;
        fVar10 = GEN_X87((float10)fVar12 * (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x50))));
      }
      else {
        fVar12 = ((float)GEN_TOF((fVar10 / (float10)*((float *)GEN_TOP((iVar1 + 0x40))))));
        (*(float *)(gen_frame + 0x4)) = fVar12;
        fVar12 = (float)((float10)1 - (float10)fVar12);
        (*(float *)(gen_frame + 0x4)) = fVar12;
        *param_1 = fVar12;
        fVar10 = GEN_X87((float10)fVar12 *
                 ((float10)1 - (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x50)))) +
                 (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x50))));
      }
      *param_1 = (float)fVar10;
      puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x68))))(piVar5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)),&(*(undefined4 *)(gen_frame + 0x98)))));
      (*(undefined4 *)(gen_frame + 0x98)) = *puVar7;
      (*(undefined4 *)(gen_frame + 0x9c)) = puVar7[1];
      (*(undefined4 *)(gen_frame + 0xa0)) = puVar7[2];
      iVar1 = *((int *)GEN_TOP(((int)this + 0x128)));
      (*(undefined4 *)(gen_frame + 0xa4)) = puVar7[3];
      F_00d24070(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x98)),param_1,(int)this + 0x8c,GEN_ARGF(*((float *)GEN_TOP((iVar1 + 0x44)))),GEN_ARGF(*((float *)GEN_TOP((iVar1 + 0x40)))),GEN_ARGF(*((float *)GEN_TOP((iVar1 + 0x50)))),GEN_ARGF(*((float *)GEN_TOP((iVar1 + 100)))));
      F_00d219d0(this GEN_EDX_ARG,(uint)param_1,(int)this + 0x8c,param_2);
      *param_1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x54))) * (float10)*param_1
                        )));
      if ((*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0xc))) & 0x20) != 0) {
        *puVar8 = *((undefined4 *)GEN_TOP(((int)this + 300)));
        *((undefined4 *)GEN_TOP(((int)this + 100))) = *((undefined4 *)GEN_TOP(((int)this + 0x130)));
        *((undefined4 *)GEN_TOP(((int)this + 0x68))) = *((undefined4 *)GEN_TOP(((int)this + 0x134)));
        *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP(((int)this + 0x138)));
      }
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 100))))(piVar5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x48)));
      if ((char)uVar6 == '\x01') {
        puVar8 = ((undefined4 *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x48)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)),(int)this + 0x70)));
        (*(undefined4 *)(gen_frame + 0x98)) = *puVar8;
        (*(undefined4 *)(gen_frame + 0x9c)) = puVar8[1];
        (*(undefined4 *)(gen_frame + 0xa0)) = puVar8[2];
        (*(undefined4 *)(gen_frame + 0xa4)) = puVar8[3];
        puVar8 = &(*(undefined4 *)(gen_frame + 0x98));
      }
      fVar10 = F_00d21d90(this GEN_EDX_ARG,(uint)puVar8,param_1,(int)this + 0x8c);
      *((float *)GEN_TOP(((int)this + 0x90))) = (float)fVar10;
      *((float *)GEN_TOP(((int)this + 0x80))) = *param_1;
      bVar9 = GEN_ISNAN((float10)0) || GEN_ISNAN((float10)*param_1);
      if (bVar9 == (bVar9 || (float10)0 == (float10)*param_1)) {
        return 1;
      }
    }
    else {
      *((float *)GEN_TOP(((int)this + 0x80))) = (float)(float10)0;
    }
  }
  return 0;
}

/* ref: FUN_00d13510 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d13510(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd13510u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_8;
  
  uVar2 = param_4;
  fVar3 = (float10)0;
  local_8 = (float)fVar3;
  *((float *)GEN_TOP(param_4)) = (float)fVar3;
  *((undefined4 *)GEN_TOP((param_4 + 0xc))) = 0;
  *((float *)GEN_TOP((param_4 + 4))) = (float)fVar3;
  *((float *)GEN_TOP((param_4 + 8))) = (float)fVar3;
  *((float *)GEN_TOP(param_2)) = (float)fVar3;
  *param_3 = (float)fVar3;
  if ((*((byte *)GEN_TOP((param_1 + 0xb0))) & 8) == 0) {
    iVar1 = *((int *)GEN_TOP((param_1 + 0x128)));
    if ((*((byte *)GEN_TOP((iVar1 + 4))) & 0x80) == 0) {
      *((undefined4 *)GEN_TOP((param_4 + 8))) = *((undefined4 *)GEN_TOP((param_1 + 0x98)));
      fVar5 = (float10)*((float *)GEN_TOP((param_1 + 0x60)));
      fVar4 = (float10)*((float *)GEN_TOP((param_1 + 0x68)));
      if (((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar5)) == ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar5)) || fVar3 == fVar5)) ||
         ((GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3)) == ((GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3)) || fVar4 == fVar3))) {
        fVar3 = ((float10)GEN_TOD(atan2(fVar5,-fVar4)));
        param_4 = (uint)gen_fl2bits((float)fVar3);
        *((uint *)GEN_TOP((param_1 + 0xa4))) = param_4;
      }
      else {
        param_4 = *((uint *)GEN_TOP((param_1 + 0xa4)));
      }
      fVar6 = (float10)*((float *)GEN_TOP((param_1 + 0x68)));
      fVar5 = (float10)*((float *)GEN_TOP((param_1 + 0x60)));
      fVar4 = (float10)*((float *)GEN_TOP((param_1 + 100)));
      fVar3 = (float10)0;
      fVar5 = (float10)((float)GEN_TOF(GEN_X87(SQRT((float10)(float)(fVar5 * fVar5 + fVar6 * fVar6)))));
      if (((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar4)) == ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar4)) || fVar3 == fVar4)) ||
         ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar3)) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar3)) || fVar5 == fVar3))) {
        fVar3 = ((float10)GEN_TOD(atan2(-fVar4,fVar5)));
        local_8 = (float)fVar3;
        *((float *)GEN_TOP((param_1 + 0xa8))) = local_8;
      }
      else {
        local_8 = *((float *)GEN_TOP((param_1 + 0xa8)));
      }
      *((undefined4 *)GEN_TOP(uVar2)) = *((undefined4 *)GEN_TOP((param_1 + 0x94)));
    }
    else {
      *((float *)GEN_TOP((param_1 + 0x94))) = (float)fVar3;
      if ((*((byte *)GEN_TOP((iVar1 + 0xc))) & 2) == 0) {
        param_4 = *((uint *)GEN_TOP((iVar1 + 0x68)));
      }
      else {
        fVar3 = F_00d234c0(param_1 GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0xa0)))));
        param_4 = (uint)gen_fl2bits((float)fVar3);
      }
    }
    fVar3 = (float10)*(double *)&REFG(undefined, 0x1092098);
    fVar5 = (float10)*(double *)&REFG(undefined, 0x1080228);
    *((float *)GEN_TOP(param_2)) = ((float)GEN_TOF(((((float10)GEN_TOD(gen_bits2f(param_4))) * fVar3) / fVar5)));
    *param_3 = ((float)GEN_TOF(((fVar3 * (float10)local_8) / fVar5)));
    return 0;
  }
  *((byte *)GEN_TOP((param_4 + 0xc))) = *((byte *)GEN_TOP((param_4 + 0xc))) | 2;
  *((float *)GEN_TOP((param_1 + 0x80))) = (float)(float10)1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d136a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd136a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xa0, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x80);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf27 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d13720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd13720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
  for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  bVar1 = F_00d228c0(this GEN_EDX_FWD);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf29 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d13750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(HWND param_1, unsigned int gen_a1), GEN_P(HDC param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd13750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(HWND param_1 = (HWND)gen_a1;)
  GEN_PIN(HDC param_2 = (HDC)gen_a2;)
  GEN_FRAME_DECL_GS(0x98, 8, 4);
  char cVar1;
  int iVar2;
  HGDIOBJ pvVar3;
  undefined * pHVar4;
  undefined * h;
  char * pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong color;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x90)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x94));
  pvVar3 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x8)) = pvVar3;
  pvVar3 = gen_imp_SelectObject(param_2,pvVar3);
  (*(HGDIOBJ *)(gen_frame + 0xc)) = pvVar3;
  if (((byte)this[0xb0] & 1) == 0) {
    iVar8 = 1;
    color = 0x900000;
  }
  else {
    color = 0x80;
    iVar8 = 2;
  }
  pHVar4 = gen_imp_CreatePen(0,iVar8,color);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = pHVar4;
  pvVar3 = gen_imp_SelectObject(param_2,pHVar4);
  (*(HGDIOBJ *)(gen_frame + 0x10)) = pvVar3;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x60)));
  iVar7 = (*(tagRECT *)(gen_frame + 0x60)).right / 2;
  (*(int *)(gen_frame + 0x20)) = (*(tagRECT *)(gen_frame + 0x60)).bottom / 2;
  gen_imp_MoveToEx(param_2,iVar7 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 300)),
           (*(tagRECT *)(gen_frame + 0x60)).bottom / 2 - (int)((double)*(float *)(this + 0x134) * *(double *)&REFG(double, 0x1132488)),
           (LPPOINT)0x0);
  gen_imp_LineTo(param_2,iVar7 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x13c)),
         (*(int *)(gen_frame + 0x20)) - (int)((double)*(float *)(this + 0x144) * *(double *)&REFG(double, 0x1132488)));
  iVar7 = iVar7 + (int)((double)*(float *)(this + 0x50) * *(double *)&REFG(undefined, 0x10947f0));
  iVar8 = (*(int *)(gen_frame + 0x20)) + (int)((double)*(float *)(this + 0x58) * *(double *)&REFG(undefined, 0x10947f0));
  (*(int *)(gen_frame + 0x20)) = iVar8;
  iVar2 = (int)(*(double *)&REFG(undefined, 0x10947f0) * (double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44))));
  gen_imp_Ellipse(param_2,iVar7 - iVar2,iVar8 - iVar2,iVar2 + iVar7,iVar2 + iVar8);
  iVar8 = (int)((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))) * *(double *)&REFG(undefined, 0x10947f0));
  gen_imp_Ellipse(param_2,iVar7 - iVar8,(*(int *)(gen_frame + 0x20)) - iVar8,iVar8 + iVar7,iVar8 + (*(int *)(gen_frame + 0x20)));
  if (((byte)this[0xb0] & 1) != 0) {
    (*(HGDIOBJ *)(gen_frame + 0x14)) = (HGDIOBJ)((*(tagRECT *)(gen_frame + 0x60)).right / 2);
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP(((*(tagRECT *)(gen_frame + 0x60)).bottom / 2)));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x10)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x1c)));
    pHVar4 = gen_imp_CreatePen(0,1,0x900000);
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = pHVar4;
    pvVar3 = gen_imp_SelectObject(param_2,pHVar4);
    (*(HGDIOBJ *)(gen_frame + 0x10)) = pvVar3;
    gen_imp_MoveToEx(param_2,(int)(*(HGDIOBJ *)(gen_frame + 0x14)) -
                     (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x60)),
             (int)(*(undefined * PTR32 *)(gen_frame + 0x18)) - (int)((double)*(float *)(this + 0x68) * *(double *)&REFG(double, 0x1132488)),
             (LPPOINT)0x0);
    gen_imp_LineTo(param_2,(int)(*(HGDIOBJ *)(gen_frame + 0x14)),(int)(*(undefined * PTR32 *)(gen_frame + 0x18)));
  }
  F_00c48350(((undefined *)(gen_frame + 0x24)),0,0x3c);
  F_00c49908(((CHAR *)(((char *)((undefined *)(gen_frame + 0x24)) + 28))),0x20,&REFG(undefined, 0x1132aec));
  (*(LONG *)((char *)((undefined *)(gen_frame + 0x24)))) = 0xd;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x24)) + 23))) = 0x80;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x24)) + 27))) = '\x01';
  h = gen_imp_CreateFontIndirectA(((undefined *)(gen_frame + 0x24)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = h;
  pvVar3 = gen_imp_SelectObject(param_2,h);
  (*(HGDIOBJ *)(gen_frame + 0x14)) = pvVar3;
  if (((byte)this[0xb0] & 1) == 0) {
    F_00c472af(((char *)(gen_frame + 0x70)),0x20,&REFG(undefined, 0x1132b08),&REFG(undefined, 0x1132b00));
  }
  else {
    F_00c472af(((char *)(gen_frame + 0x70)),0x20,&REFG(undefined, 0x1132af8),
               (int)(ulonglong)
                    gen_d2bits((double)*(float *)(this + 0x80) * *(double *)&REFG(undefined, 0x1088118)),
               (int)((ulonglong)
                     gen_d2bits((double)*(float *)(this + 0x80) * *(double *)&REFG(undefined, 0x1088118)) >> 0x20)
              );
  }
  pcVar5 = ((char *)(gen_frame + 0x70));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  gen_imp_GetTextExtentPoint32A(param_2,((char *)(gen_frame + 0x70)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x70)) + 1),&(*(undefined8 *)(gen_frame + 0x0)));
  gen_imp_TextOutA(param_2,iVar7 - (*(LONG *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) / 2,(*(int *)(gen_frame + 0x20)) - (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) / 2,((char *)(gen_frame + 0x70)),
           (int)pcVar5 - (int)(((char *)(gen_frame + 0x70)) + 1));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x14)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x10)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0xc)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x18)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x1c)));
  uVar6 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x8)));
  return uVar6;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d13a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd13a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined * _File;
  byte bVar5;
  int iVar6;
  
  _File = param_1;
  bVar5 = F_00d21f00((undefined *)this GEN_EDX_FWD,param_1);
  if (bVar5 == 0) {
    return 0;
  }
  iVar6 = 0;
  param_1 = ((undefined *)GEN_TOP(0x0));
  do {
    iVar1 = *(int *)(this + 0x128);
    dVar2 = (double)*((float *)GEN_TOP((iVar6 + 0x28 + iVar1)));
    dVar3 = (double)*((float *)GEN_TOP((iVar6 + 0x24 + iVar1)));
    dVar4 = (double)*((float *)GEN_TOP((iVar6 + 0x20 + iVar1)));
    F_00c49386(_File,((char *)REFP(0x1132b0c)),param_1,(int)(ulonglong)gen_d2bits(dVar4),
             (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
             (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
             (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1)));
    iVar6 = iVar6 + 0x10;
  } while (iVar6 < 0x20);
  F_00c49386(_File,((char *)REFP(0x1132b28)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))))));
  F_00c49386(_File,((char *)REFP(0x1132b38)),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44)))) >> 0x20));
  param_1 = ((undefined *)GEN_TOP(0x0));
  iVar6 = 0x48;
  do {
    F_00c49386(_File,((char *)REFP(0x1132b48)),param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))) >> 0x20
                  ));
    param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1)));
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x50);
  F_00c49386(_File,((char *)REFP(0x1132b5c)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x50))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x50))))));
  F_00c49386(_File,((char *)REFP(0x1132b70)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x54))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x54))))));
  F_00c49386(_File,((char *)REFP(0x1132b80)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x58))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x58))))));
  F_00c49386(_File,((char *)REFP(0x1132b8c)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x5c))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x5c))))));
  F_00c49386(_File,((char *)REFP(0x1132b9c)),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60)))) >> 0x20));
  F_00c49386(_File,((char *)REFP(0x1132bb0)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf31 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d13c00(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd13c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = ((char *)REFP(0x1132bc8));
  pbVar5 = ((byte *)GEN_TOP(param_2));
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d13c31: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d13c36;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d13c31;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d13c36: ;
  if (iVar3 == 0) {
    uVar4 = F_00d00d00(0,0);
    if (uVar4 != 0) {
      uVar4 = F_00c4c74c(uVar4);
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 2) * 0x10))) = (float)dVar7;
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24 + uVar4 * 0x10))) = (float)dVar7;
          pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
          if (pcVar2 != ((char *)GEN_TOP(0x0))) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 0x10))) = (float)dVar7;
            return 1;
          }
        }
      }
    }
  }
  else {
    pcVar2 = ((char *)REFP(0x1132bd4));
    pbVar5 = ((byte *)GEN_TOP(param_2));
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d13d06: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d13d0b;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d13d06;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d13d0b: ;
    if (iVar3 == 0) {
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x40))) = (float)dVar7;
        return 1;
      }
    }
    else {
      pcVar2 = ((char *)REFP(0x1132be0));
      pbVar5 = ((byte *)GEN_TOP(param_2));
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00d13d68: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d13d6d;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00d13d68;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d13d6d: ;
      if (iVar3 == 0) {
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x44))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = ((char *)REFP(0x1132bec));
        pbVar5 = ((byte *)GEN_TOP(param_2));
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d13dd0: ;
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d13dd5;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d13dd0;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d13dd5: ;
        if (iVar3 == 0) {
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
            if (pcVar2 != ((char *)GEN_TOP(0x0))) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x48 + uVar4 * 4))) = (float)dVar7;
              return 1;
            }
          }
        }
        else {
          pcVar2 = ((char *)REFP(0x1132bf4));
          pbVar5 = ((byte *)GEN_TOP(param_2));
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d13e50: ;
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d13e55;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d13e50;
            pcVar2 = pcVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d13e55: ;
          if (iVar3 == 0) {
            pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
            if (pcVar2 != ((char *)GEN_TOP(0x0))) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x50))) = (float)dVar7;
              return 1;
            }
          }
          else {
            pcVar2 = ((char *)REFP(0x1132c00));
            pbVar5 = ((byte *)GEN_TOP(param_2));
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d13eb2: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d13eb7;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d13eb2;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d13eb7: ;
            if (iVar3 == 0) {
              pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
              if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                dVar7 = F_00c4acaa(pcVar2);
                *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x54))) = (float)dVar7;
                return 1;
              }
            }
            else {
              pcVar2 = ((char *)REFP(0x1132c08));
              pbVar5 = ((byte *)GEN_TOP(param_2));
              do {
                bVar1 = *pcVar2;
                bVar6 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_00d13f14: ;
                  iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                  goto LAB_00d13f19;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar2[1];
                bVar6 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_00d13f14;
                pcVar2 = pcVar2 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00d13f19: ;
              if (iVar3 == 0) {
                pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                  dVar7 = F_00c4acaa(pcVar2);
                  *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x58))) = (float)dVar7;
                  return 1;
                }
              }
              else {
                pcVar2 = ((char *)REFP(0x1132c10));
                pbVar5 = ((byte *)GEN_TOP(param_2));
                do {
                  bVar1 = *pcVar2;
                  bVar6 = bVar1 < *pbVar5;
                  if (bVar1 != *pbVar5) {
LAB_00d13f76: ;
                    iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                    goto LAB_00d13f7b;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pcVar2[1];
                  bVar6 = bVar1 < pbVar5[1];
                  if (bVar1 != pbVar5[1]) goto LAB_00d13f76;
                  pcVar2 = pcVar2 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_00d13f7b: ;
                if (iVar3 == 0) {
                  pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                  if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                    dVar7 = F_00c4acaa(pcVar2);
                    *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x5c))) = (float)dVar7;
                    return 1;
                  }
                }
                else {
                  pcVar2 = ((char *)REFP(0x1132c1c));
                  pbVar5 = ((byte *)GEN_TOP(param_2));
                  do {
                    bVar1 = *pcVar2;
                    bVar6 = bVar1 < *pbVar5;
                    if (bVar1 != *pbVar5) {
LAB_00d13fd8: ;
                      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                      goto LAB_00d13fdd;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pcVar2[1];
                    bVar6 = bVar1 < pbVar5[1];
                    if (bVar1 != pbVar5[1]) goto LAB_00d13fd8;
                    pcVar2 = pcVar2 + 2;
                    pbVar5 = pbVar5 + 2;
                  } while (bVar1 != 0);
                  iVar3 = 0;
LAB_00d13fdd: ;
                  if (iVar3 != 0) {
                    bVar1 = F_00d22040(param_1 GEN_EDX_ARG,param_2);
                    return bVar1;
                  }
                  pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                  if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                    dVar7 = F_00c4acaa(pcVar2);
                    *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x60))) = (float)dVar7;
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf14 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d14030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd14030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ushort uVar1;
  int * this_00;
  int iVar2;
  byte bVar3;
  uint uVar4;
  float fVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_FWD,0x406);
  if (((byte)this[0xb0] & 4) != 0) {
    return 0;
  }
  bVar3 = F_00d217a0((undefined *)this GEN_EDX_ARG,param_1);
  if (bVar3 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(float10)0)));
    *(float *)(this + 0x8c) = (float)(float10)1;
    F_00d21970(this GEN_EDX_ARG);
    bVar3 = F_00d13190(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),param_1);
    if (bVar3 != 0) {
      this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
      iVar2 = *(int *)(this + 0x128);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x18))))(this_00 GEN_EDX_ARG);
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 0x10 + (uVar4 & 0xff) * 4))) *
                       (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0)))))))))));
      uVar1 = *((ushort *)GEN_TOP((iVar2 + 0xe)));
      if (uVar1 != 0) {
        fVar5 = F_00d005d0(this_00 GEN_EDX_ARG,(uint)uVar1);
        (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar5 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0)))))))));
      }
      iVar2 = *(int *)(this + 0x128);
      *(undefined * PTR32 *)(this + 0x80) = (*(undefined * PTR32 *)(gen_frame + 0x0));
      if ((*((byte *)GEN_TOP((iVar2 + 0xc))) & 8) != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x0)) = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x54)));
        *(undefined4 *)(this + 0x80) = *((undefined4 *)GEN_TOP((iVar2 + 0x54)));
      }
      if ((((byte)this[0xb0] & 0x40) == 0) && (bVar3 = F_00d228c0(this GEN_EDX_ARG), bVar3 == 0)) {
        return 1;
      }
      bVar3 = F_00d00ed0(this_00 GEN_EDX_ARG,this,(uint)(byte)this[0x2d],*(undefined4 *)(this + 0x30),
                           ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0))))));
      return bVar3;
    }
    F_00d219b0(this GEN_EDX_ARG);
    F_00d22c70(this GEN_EDX_ARG,0);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00d14140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd14140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  undefined1 LVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  int * piVar8;
  float fVar9;
  float10 fVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  (*(char *)(gen_frame + 0x1b)) = '\0';
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar8;
  bVar5 = F_00d21830((undefined *)this GEN_EDX_FWD);
  if (bVar5 == 0) {
    piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x90))))(piVar8 GEN_EDX_ARG)));
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xfc))))(piVar6 GEN_EDX_ARG,*(undefined4 *)(this + 0x24));
    if ((char)uVar7 == '\0') goto LAB_00d14537;
    F_00d2dd80(&(*(float *)(gen_frame + 0x34)),*(undefined4 *)(this + 0x24));
    if (((byte)this[0xb0] & 0x80) == 0) {
      bVar5 = F_00cbe970(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
    }
    else {
      bVar5 = F_00cbe940(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
    }
    if (bVar5 != 0) {
      fVar10 = (float10)0;
      uVar2 = *(undefined4 *)(this + 0x28);
      iVar3 = *piVar6;
      (*(float *)(gen_frame + 0x0)) = (float)fVar10;
      (*(float *)(gen_frame + 0x4)) = (float)fVar10;
      (*(float *)(gen_frame + 0x8)) = (float)fVar10;
      (*(float *)(gen_frame + 0xc)) = (float)(float10)1;
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x3c))))
                        (piVar6,((undefined1 *)(gen_frame + 0x20)),*(undefined4 *)(this + 0x24),uVar2,&(*(float *)(gen_frame + 0x0)),0,0,1);
      F_00cbbdc0(this + 8 GEN_EDX_ARG,uVar7);
      F_00cbbdb0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
      bVar5 = F_00cbc040(this + 8 GEN_EDX_ARG);
      if (bVar5 != 0) {
        iVar3 = *(int *)(this + 0x128);
        (*(char *)(gen_frame + 0x1b)) = '\x01';
        if (((*((byte *)GEN_TOP((iVar3 + 4))) & 0x80) != 0) && ((*((byte *)GEN_TOP((iVar3 + 0xc))) & 2) != 0)) {
          fVar10 = F_00d23370(this GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((iVar3 + 0x68)))));
          *(float *)(this + 0xa0) = (float)fVar10;
        }
        F_00d22bf0(this GEN_EDX_ARG,0x403);
        F_00cbe3b0(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
        goto LAB_00d14266;
      }
    }
    F_00cbe3b0(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
  }
  else {
LAB_00d14266: ;
    bVar5 = F_00cbc040(this + 8 GEN_EDX_ARG);
    if (bVar5 == 0) {
LAB_00d14537: ;
      *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) | 4;
      return 0;
    }
    uVar7 = F_00d00230(piVar8 GEN_EDX_ARG);
    if (uVar7 == 1) {
      fVar10 = F_00d22df0(((undefined1 *)(gen_frame + 0x20)),this + 0x60,*(float *)(this + 0x80),*(float *)(this + 0x94));
      (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar10)));
      F_00cbc920(this + 8 GEN_EDX_ARG,(float)fVar10);
      F_00cbc4e0(this + 8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
    }
    else {
      fVar10 = (float10)0;
      (*(float *)(gen_frame + 0x30)) = (float)fVar10;
      (*(float *)(gen_frame + 0x34)) = (float)fVar10;
      (*(float *)(gen_frame + 0x38)) = (float)fVar10;
      (*(undefined4 *)(gen_frame + 0x3c)) = 0;
      F_00d13510(this GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x1c)),&(*(float *)(gen_frame + 0x14)),(uint)&(*(float *)(gen_frame + 0x30)));
      F_00cbc9e0(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0x1c)),(*(float *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x30)));
      uVar7 = F_00d2e5a0();
      if ((uVar7 == 3) || (uVar7 == 5)) {
        fVar10 = F_00d2edb0(*(float *)(this + 0x80),0,2);
      }
      else {
        fVar10 = (float10)*(float *)(this + 0x80);
      }
      LVar1 = this[0x2c];
      (*(float *)(gen_frame + 0x14)) = (float)fVar10;
      if (((byte)LVar1 & 2) != 0) {
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x98))))(piVar8 GEN_EDX_ARG)));
        fVar9 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xd0))))(piVar8 GEN_EDX_ARG));
        iVar3 = *piVar8;
        (*(float *)(gen_frame + 0x1c)) = fVar9;
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((iVar3 + 0x50))))(piVar8);
        fVar10 = F_00d2bc80((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c))) GEN_EDX_ARG,(float)extraout_ST0);
        (*(float *)(gen_frame + 0x14)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x14)));
        piVar8 = (*(int * PTR32 *)(gen_frame + 0x10));
      }
      F_00cbc920(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0x14)));
    }
    if (((byte)this[0xb0] & 2) == 0) {
      fVar10 = F_00d22f40(this GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60)))),
                            *((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) >> 2 & 1);
      fVar9 = ((float)GEN_TOF((fVar10 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x58))))));
      (*(float *)(gen_frame + 0x1c)) = fVar9;
      F_00cbc980(this + 8 GEN_EDX_ARG,fVar9);
    }
    LVar1 = this[0x2c];
    (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xc4) * (float10)*(float *)(this + 0x8c))));
    if (((byte)LVar1 & 2) != 0) {
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x98))))(piVar8 GEN_EDX_ARG)));
      fVar9 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xd0))))(piVar8 GEN_EDX_ARG));
      (*(float *)(gen_frame + 0x1c)) = fVar9;
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x50))))(piVar8);
      fVar10 = F_00d2bc60((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c))) GEN_EDX_ARG,(float)extraout_ST0_00);
      (*(float *)(gen_frame + 0x14)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x14)));
    }
    F_00cbc710(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0x14)));
    if ((*(char *)(gen_frame + 0x1b)) != '\0') {
      dVar4 = GEN_X87(*(double *)&REFG(undefined, 0x1097260) * 0.0);
      fVar9 = *(float *)(this + 0xbc);
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f((int)dVar4);
      F_00cbddc0(this + 8 GEN_EDX_ARG,fVar9,(uint)&(*(float *)(gen_frame + 0x1c)));
      fVar9 = *(float *)(this + 0xc0);
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f((int)dVar4);
      F_00cbdeb0(this + 8 GEN_EDX_ARG,fVar9,(uint)&(*(float *)(gen_frame + 0x1c)));
      F_00cbc980(this + 8 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x58)))));
      F_00cbcd10(this + 8 GEN_EDX_ARG,*(float *)(this + 200),*(undefined4 *)(this + 0xcc));
      F_00cbce00(this + 8 GEN_EDX_ARG,(uint)(byte)this[0xe0]);
      if ((*(uint *)(this + 0xb0) & 0x400) != 0) {
        F_00cbcbc0(this + 8 GEN_EDX_ARG);
      }
      if ((*(uint *)(this + 0xb0) & 0x100) == 0) {
        F_00cbd990(this + 8 GEN_EDX_ARG,*(undefined4 *)(this + 0xdc),*(undefined4 *)(this + 0xb8));
      }
      else {
        F_00cbdfe0(this + 8 GEN_EDX_ARG,*(undefined4 *)(this + 0xd4),*(float *)(this + 0xbc),
                     *(float *)(this + 0xd0),gen_bits2f((unsigned int)(*(undefined4 *)(this + 0xdc))),
                     *(undefined4 *)(this + 0xb8));
      }
      *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) & 0xfffffeff;
      *(undefined4 *)(this + 0xdc) = 0;
      return 1;
    }
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d14560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd14560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00d22da0(this GEN_EDX_FWD,param_1,0x70)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x1c);
  }
  F_00d149e0(*(undefined4 *)(this + 0x128) GEN_EDX_ARG,(uint)puVar1);
  return (uint)(puVar1 + 0x1c);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf28 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d145c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd145c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x60, 0, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c));
  uVar1 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x58;
    (*(ulonglong *)(gen_frame + 0x8)) = F_00427d90();
    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(this + 300);
    (*(undefined4 *)(gen_frame + 0x3c)) = *(undefined4 *)(this + 0x130);
    (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(this + 0x134);
    (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(this + 0x13c);
    (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(this + 0x140);
    (*(undefined4 *)(gen_frame + 0x4c)) = *(undefined4 *)(this + 0x144);
    (*(undefined4 *)(gen_frame + 0x50)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x40)));
    (*(undefined4 *)(gen_frame + 0x54)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x44)));
    F_00d148a0(&(*(undefined2 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)));
    uVar1 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)),0x58);
  }
  return uVar1;
}

/* ref: FUN_00d14690 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d14690(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd14690u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_FRAME_DECL(0xa0, 0);
  int * this;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * pLVar4;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  F_00d22580(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[33])REFP(0x1132c6c));
  *(uint *)(param_1 + 0xb0) =
       *(uint *)(param_1 + 0xb0) ^ ((uint)param_5 << 4 ^ *(uint *)(param_1 + 0xb0)) & 0x10;
  if (param_5 == 0) {
    *(undefined4 * PTR32 *)(param_1 + 0x128) = param_2;
  }
  else {
    *(undefined * PTR32 *)(param_1 + 0x128) = param_1 + 0x150;
    puVar3 = param_2;
    pLVar4 = param_1 + 0x150;
    for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 - 1) {
      *(undefined4 *)pLVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pLVar4 = pLVar4 + 4;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x128);
  F_00d228c0(param_1 GEN_EDX_ARG);
  *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 100))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 100))) *
              (float10)*(double *)&REFG(undefined, 0x109cac8))));
  *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0xc))) = *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0xc))) | 0x80;
  F_00d20fe0(param_1 GEN_EDX_ARG,~(*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 4))) >> 5) & 1);
  this = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xe4))))(this GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x68))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x80);
  }
  F_00d145c0(param_1 GEN_EDX_ARG,0x401);
  return (uint)param_1;
}

/* ref: FUN_00d147c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d147c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd147c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xa0, 0);
  byte * pbVar1;
  int iVar2;
  int * this_00;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  F_00d22720(this GEN_EDX_FWD,param_1,param_2);
  *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) | 0x10;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1132c6c));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x128))) = ((undefined *)GEN_TOP(((int)this + 0x150)));
  F_00d14940(((undefined *)GEN_TOP(((int)this + 0x150))) GEN_EDX_ARG);
  iVar2 = *((int *)GEN_TOP(((int)this + 0x128)));
  *((int *)GEN_TOP(((int)this + 0x18))) = iVar2;
  *((float *)GEN_TOP((iVar2 + 100))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 100))) * (float10)*(double *)&REFG(undefined, 0x109cac8))));
  pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0xc)));
  *pbVar1 = *pbVar1 | 0x80;
  this_00 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_ARG);
  if ((char)uVar3 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x80);
  }
  F_00d145c0(this GEN_EDX_ARG,0x401);
  return (uint)this;
}

/* ref: FUN_00d148a0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d148a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd148a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *param_1 = *(undefined2 *)this;
  param_1[1] = *((undefined2 *)GEN_TOP(((int)this + 2)));
  *(undefined4 *)(param_1 + 4) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined4 *)(param_1 + 6) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  *(undefined4 *)(param_1 + 0xc) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *(undefined4 *)(param_1 + 0xe) = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  *(undefined4 *)(param_1 + 0x10) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  *(undefined4 *)(param_1 + 0x16) = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  *(undefined4 *)(param_1 + 0x14) = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  param_1[0x18] = *((undefined2 *)GEN_TOP(((int)this + 0x30)));
  param_1[0x19] = *((undefined2 *)GEN_TOP(((int)this + 0x32)));
  *(undefined1 *)(param_1 + 0x1a) = *((undefined1 *)GEN_TOP(((int)this + 0x34)));
  *(undefined4 *)(param_1 + 0x1c) = *((undefined4 *)GEN_TOP(((int)this + 0x38)));
  *(undefined4 *)(param_1 + 0x1e) = *((undefined4 *)GEN_TOP(((int)this + 0x3c)));
  *(undefined4 *)(param_1 + 0x20) = *((undefined4 *)GEN_TOP(((int)this + 0x40)));
  *(undefined4 *)(param_1 + 0x22) = *((undefined4 *)GEN_TOP(((int)this + 0x44)));
  *(undefined4 *)(param_1 + 0x24) = *((undefined4 *)GEN_TOP(((int)this + 0x48)));
  *(undefined4 *)(param_1 + 0x26) = *((undefined4 *)GEN_TOP(((int)this + 0x4c)));
  *(undefined4 *)(param_1 + 0x28) = *((undefined4 *)GEN_TOP(((int)this + 0x50)));
  *(undefined4 *)(param_1 + 0x2a) = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
  return 0;
}

/* ref: FUN_00d14940 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d14940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd14940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  fVar1 = (float10)1;
  *((undefined2 *)GEN_TOP(((int)this + 3))) = 0x400;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 5))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((float *)GEN_TOP(((int)this + 0x10))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x14))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x18))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x1c))) = (float)fVar1;
  *((undefined2 *)GEN_TOP(((int)this + 0xe))) = 0;
  fVar2 = (float10)0;
  *((undefined1 *)GEN_TOP(((int)this + 0xd))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 2))) = 5;
  *(undefined2 *)this = 0x70;
  *((float *)GEN_TOP(((int)this + 0x20))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x24))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x28))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x2c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x2c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x30))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x34))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x38))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x3c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x3c))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094880)));
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x40))), REFG(float, 0x1094880));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x44))), REFG(float, 0x10a0d00));
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = uVar3;
  *((float *)GEN_TOP(((int)this + 0x4c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x60))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x68))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x50))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x54))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x58))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x5c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 100))) = (float)fVar1;
  return 0;
}

/* ref: FUN_00d149e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d149e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd149e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  int local_8;
  
  F_00d0c080(param_1 GEN_EDX_FWD,param_2);
  puVar3 = ((uint *)GEN_TOP((param_1 + 0x28)));
  local_8 = 2;
  puVar2 = ((uint *)GEN_TOP((param_2 + 0x20)));
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar2)));
    *puVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[-1];
    puVar2[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar3;
    puVar2[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[1];
    puVar2[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar3 = puVar3 + 4;
    local_8 = local_8 - 1;
    puVar2 = puVar2 + 4;
  } while (local_8 != 0);
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x40)));
  *((uint *)GEN_TOP((param_2 + 0x40))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x44)));
  *((uint *)GEN_TOP((param_2 + 0x44))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x48)));
  *((uint *)GEN_TOP((param_2 + 0x48))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x4c)));
  *((uint *)GEN_TOP((param_2 + 0x4c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x50)));
  *((uint *)GEN_TOP((param_2 + 0x50))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x54)));
  *((uint *)GEN_TOP((param_2 + 0x54))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x58)));
  *((uint *)GEN_TOP((param_2 + 0x58))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x5c)));
  *((uint *)GEN_TOP((param_2 + 0x5c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x60)));
  *((uint *)GEN_TOP((param_2 + 0x60))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 100)));
  *((uint *)GEN_TOP((param_2 + 100))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x68)));
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((undefined4 *)GEN_TOP((param_2 + 0x6c))) = 0;
  *((uint *)GEN_TOP((param_2 + 0x68))) = uVar1;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d14b50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd14b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[33])REFP(0x1132c6c));
  F_00d23680(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00d14ba0 */
GEN_LIB GEN_FRAME unsigned int F_00d14ba0(GEN_P(uint * in_ecx, unsigned int gen_a0), GEN_P(float in_xmm0, float gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd14ba0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(float in_xmm0 = (float)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined1 in_register_00001204 [12];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  if ((REFG(undefined4, 0x15d9340) & 1) == 0) {
    REFG(undefined4, 0x15d9340) = REFG(undefined4, 0x15d9340) | 1;
    *(uint *)&REFG(undefined, 0x15d9330) = *(uint *)&REFG(undefined, 0x1132ed0);
    REFG(uint, 0x015d9334) = *(uint *)&REFG(undefined, 0x1132ed4);
    REFG(uint, 0x015d9338) = *(uint *)&REFG(undefined, 0x1132ed8);
    REFG(uint, 0x015d933c) = *(uint *)&REFG(undefined, 0x1132edc);
  }
  if ((REFG(undefined4, 0x15d9340) & 2) == 0) {
    REFG(undefined4, 0x15d9340) = REFG(undefined4, 0x15d9340) | 2;
    *(uint *)&REFG(undefined, 0x15d9320) = *(uint *)&REFG(undefined, 0x1132ee0);
    REFG(uint, 0x015d9324) = *(uint *)&REFG(undefined, 0x1132ee4);
    REFG(uint, 0x015d9328) = *(uint *)&REFG(undefined, 0x1132ee8);
    REFG(uint, 0x015d932c) = *(uint *)&REFG(undefined, 0x1132eec);
  }
  if ((REFG(undefined4, 0x15d9340) & 4) == 0) {
    REFG(undefined4, 0x15d9340) = REFG(undefined4, 0x15d9340) | 4;
    *(uint *)&REFG(undefined, 0x15d9310) = *(uint *)&REFG(undefined, 0x1132ef0);
    REFG(uint, 0x015d9314) = *(uint *)&REFG(undefined, 0x1132ef4);
    REFG(uint, 0x015d9318) = *(uint *)&REFG(undefined, 0x1132ef8);
    REFG(uint, 0x015d931c) = *(uint *)&REFG(undefined, 0x1132efc);
  }
  uVar16 = (uint)(*(float *)&REFG(undefined, 0x1132fa4) * (*(float *)((char *)&in_register_00001204 + 0)));
  uVar19 = (uint)(*(float *)&REFG(undefined, 0x1132fa8) * (*(float *)((char *)&in_register_00001204 + 4)));
  uVar22 = (uint)(*(float *)&REFG(undefined, 0x1132fac) * (*(float *)((char *)&in_register_00001204 + 8)));
  uVar2 = (int)(*(float *)&REFG(undefined, 0x1132fa0) * in_xmm0) & *(uint *)&REFG(undefined, 0x15d9330);
  uVar5 = uVar16 & REFG(uint, 0x015d9334);
  uVar9 = uVar19 & REFG(uint, 0x015d9338);
  uVar25 = uVar22 & REFG(uint, 0x015d933c);
  fVar14 = (float)(int)(*(float *)&REFG(undefined, 0x1132fa0) * in_xmm0);
  fVar17 = (float)(int)uVar16;
  fVar20 = (float)(int)uVar19;
  fVar23 = (float)(int)uVar22;
  fVar14 = (in_xmm0 - *(float *)&REFG(undefined, 0x1132f90) * fVar14) - *(float *)&REFG(undefined, 0x1132f80) * fVar14;
  fVar10 = ((*(float *)((char *)&in_register_00001204 + 0)) - *(float *)&REFG(undefined, 0x1132f94) * fVar17) -
           *(float *)&REFG(undefined, 0x1132f84) * fVar17;
  fVar11 = ((*(float *)((char *)&in_register_00001204 + 4)) - *(float *)&REFG(undefined, 0x1132f98) * fVar20) -
           *(float *)&REFG(undefined, 0x1132f88) * fVar20;
  fVar12 = ((*(float *)((char *)&in_register_00001204 + 8)) - *(float *)&REFG(undefined, 0x1132f9c) * fVar23) -
           *(float *)&REFG(undefined, 0x1132f8c) * fVar23;
  fVar17 = fVar14 * fVar14;
  fVar20 = fVar10 * fVar10;
  fVar23 = fVar11 * fVar11;
  fVar13 = fVar12 * fVar12;
  fVar15 = ((*(float *)&REFG(undefined, 0x1132f70) * fVar17 + *(float *)&REFG(undefined, 0x1132f50)) * fVar17 +
           *(float *)&REFG(undefined, 0x1132f40)) * fVar17 + *(float *)&REFG(undefined, 0x1132f20);
  fVar18 = ((*(float *)&REFG(undefined, 0x1132f74) * fVar20 + *(float *)&REFG(undefined, 0x1132f54)) * fVar20 +
           *(float *)&REFG(undefined, 0x1132f44)) * fVar20 + *(float *)&REFG(undefined, 0x1132f24);
  fVar21 = ((*(float *)&REFG(undefined, 0x1132f78) * fVar23 + *(float *)&REFG(undefined, 0x1132f58)) * fVar23 +
           *(float *)&REFG(undefined, 0x1132f48)) * fVar23 + *(float *)&REFG(undefined, 0x1132f28);
  fVar24 = ((*(float *)&REFG(undefined, 0x1132f7c) * fVar13 + *(float *)&REFG(undefined, 0x1132f5c)) * fVar13 +
           *(float *)&REFG(undefined, 0x1132f4c)) * fVar13 + *(float *)&REFG(undefined, 0x1132f2c);
  fVar14 = ((*(float *)&REFG(undefined, 0x1132f60) * fVar17 + *(float *)&REFG(undefined, 0x1132f30)) * fVar17 +
           *(float *)&REFG(undefined, 0x1132f10)) * (fVar17 * fVar14) + fVar14;
  fVar10 = ((*(float *)&REFG(undefined, 0x1132f64) * fVar20 + *(float *)&REFG(undefined, 0x1132f34)) * fVar20 +
           *(float *)&REFG(undefined, 0x1132f14)) * (fVar20 * fVar10) + fVar10;
  fVar11 = ((*(float *)&REFG(undefined, 0x1132f68) * fVar23 + *(float *)&REFG(undefined, 0x1132f38)) * fVar23 +
           *(float *)&REFG(undefined, 0x1132f18)) * (fVar23 * fVar11) + fVar11;
  fVar12 = ((*(float *)&REFG(undefined, 0x1132f6c) * fVar13 + *(float *)&REFG(undefined, 0x1132f3c)) * fVar13 +
           *(float *)&REFG(undefined, 0x1132f1c)) * (fVar13 * fVar12) + fVar12;
  uVar16 = -(uint)((float)(int)(uVar2 & *(uint *)&REFG(undefined, 0x15d9320)) == *(float *)&REFG(undefined, 0x1132f00));
  uVar19 = -(uint)((float)(int)(uVar5 & REFG(uint, 0x015d9324)) == *(float *)&REFG(undefined, 0x1132f04));
  uVar22 = -(uint)((float)(int)(uVar9 & REFG(uint, 0x015d9328)) == *(float *)&REFG(undefined, 0x1132f08));
  uVar6 = -(uint)((float)(int)(uVar25 & REFG(uint, 0x015d932c)) == *(float *)&REFG(undefined, 0x1132f0c));
  fVar23 = gen_bits2f(uVar16 & (uint)gen_fl2bits(fVar14) | ~uVar16 & (uint)gen_fl2bits(fVar15));
  fVar13 = gen_bits2f(uVar19 & (uint)gen_fl2bits(fVar10) | ~uVar19 & (uint)gen_fl2bits(fVar18));
  fVar26 = gen_bits2f(uVar22 & (uint)gen_fl2bits(fVar11) | ~uVar22 & (uint)gen_fl2bits(fVar21));
  fVar27 = gen_bits2f(uVar6 & (uint)gen_fl2bits(fVar12) | ~uVar6 & (uint)gen_fl2bits(fVar24));
  uVar16 = -(uint)((float)(int)(*(uint *)&REFG(undefined, 0x15d9320) + uVar2 & *(uint *)&REFG(undefined, 0x15d9320)) ==
                  *(float *)&REFG(undefined, 0x1132f00));
  uVar6 = -(uint)((float)(int)(REFG(uint, 0x015d9324) + uVar5 & REFG(uint, 0x015d9324)) == *(float *)&REFG(undefined, 0x1132f04));
  uVar3 = -(uint)((float)(int)(REFG(uint, 0x015d9328) + uVar9 & REFG(uint, 0x015d9328)) == *(float *)&REFG(undefined, 0x1132f08));
  uVar7 = -(uint)((float)(int)(REFG(uint, 0x015d932c) + uVar25 & REFG(uint, 0x015d932c)) == *(float *)&REFG(undefined, 0x1132f0c));
  uVar19 = -(uint)((float)(int)(uVar2 & *(uint *)&REFG(undefined, 0x15d9310)) == *(float *)&REFG(undefined, 0x1132f00));
  uVar1 = -(uint)((float)(int)(uVar5 & REFG(uint, 0x015d9314)) == *(float *)&REFG(undefined, 0x1132f04));
  uVar4 = -(uint)((float)(int)(uVar9 & REFG(uint, 0x015d9318)) == *(float *)&REFG(undefined, 0x1132f08));
  uVar8 = -(uint)((float)(int)(uVar25 & REFG(uint, 0x015d931c)) == *(float *)&REFG(undefined, 0x1132f0c));
  uVar22 = -(uint)((float)(int)(*(uint *)&REFG(undefined, 0x15d9320) + uVar2 & *(uint *)&REFG(undefined, 0x15d9310)) ==
                  *(float *)&REFG(undefined, 0x1132f00));
  uVar2 = -(uint)((float)(int)(REFG(uint, 0x015d9324) + uVar5 & REFG(uint, 0x015d9314)) == *(float *)&REFG(undefined, 0x1132f04));
  uVar5 = -(uint)((float)(int)(REFG(uint, 0x015d9328) + uVar9 & REFG(uint, 0x015d9318)) == *(float *)&REFG(undefined, 0x1132f08));
  uVar9 = -(uint)((float)(int)(REFG(uint, 0x015d932c) + uVar25 & REFG(uint, 0x015d931c)) == *(float *)&REFG(undefined, 0x1132f0c));
  fVar28 = *(float *)&REFG(undefined, 0x1132f04) - fVar13;
  fVar29 = *(float *)&REFG(undefined, 0x1132f08) - fVar26;
  fVar30 = *(float *)&REFG(undefined, 0x1132f0c) - fVar27;
  fVar15 = gen_bits2f(uVar16 & (uint)gen_fl2bits(fVar14) | ~uVar16 & (uint)gen_fl2bits(fVar15));
  fVar18 = gen_bits2f(uVar6 & (uint)gen_fl2bits(fVar10) | ~uVar6 & (uint)gen_fl2bits(fVar18));
  fVar11 = gen_bits2f(uVar3 & (uint)gen_fl2bits(fVar11) | ~uVar3 & (uint)gen_fl2bits(fVar21));
  fVar12 = gen_bits2f(uVar7 & (uint)gen_fl2bits(fVar12) | ~uVar7 & (uint)gen_fl2bits(fVar24));
  fVar14 = *(float *)&REFG(undefined, 0x1132f00) - fVar15;
  fVar17 = *(float *)&REFG(undefined, 0x1132f04) - fVar18;
  fVar10 = *(float *)&REFG(undefined, 0x1132f08) - fVar11;
  fVar20 = *(float *)&REFG(undefined, 0x1132f0c) - fVar12;
  *param_3 = ~uVar19 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1132f00) - fVar23) |
             (uint)gen_fl2bits(fVar23) & uVar19;
  param_3[1] = ~uVar1 & (uint)gen_fl2bits(fVar28) | (uint)gen_fl2bits(fVar13) & uVar1;
  param_3[2] = ~uVar4 & (uint)gen_fl2bits(fVar29) | (uint)gen_fl2bits(fVar26) & uVar4;
  param_3[3] = ~uVar8 & (uint)gen_fl2bits(fVar30) | (uint)gen_fl2bits(fVar27) & uVar8;
  *in_ecx = ~uVar22 & (uint)gen_fl2bits(fVar14) | (uint)gen_fl2bits(fVar15) & uVar22;
  in_ecx[1] = ~uVar2 & (uint)gen_fl2bits(fVar17) | (uint)gen_fl2bits(fVar18) & uVar2;
  in_ecx[2] = ~uVar5 & (uint)gen_fl2bits(fVar10) | (uint)gen_fl2bits(fVar11) & uVar5;
  in_ecx[3] = ~uVar9 & (uint)gen_fl2bits(fVar20) | (uint)gen_fl2bits(fVar12) & uVar9;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d14d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd14d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  F_00d21390(this GEN_EDX_FWD,param_1);
  uVar1 = *(uint *)(this + 0x128);
  *((undefined4 *)GEN_TOP((uVar1 + 0x20))) = *param_1;
  *((undefined4 *)GEN_TOP((uVar1 + 0x24))) = param_1[1];
  *((undefined4 *)GEN_TOP((uVar1 + 0x28))) = param_1[2];
  *((undefined4 *)GEN_TOP((uVar1 + 0x2c))) = param_1[3];
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d14d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd14d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  F_00d213a0((undefined *)this GEN_EDX_FWD,param_1);
  uVar1 = *(uint *)(this + 0x128);
  *((undefined4 *)GEN_TOP((uVar1 + 0x20))) = *param_1;
  *((undefined4 *)GEN_TOP((uVar1 + 0x24))) = param_1[1];
  *((undefined4 *)GEN_TOP((uVar1 + 0x28))) = param_1[2];
  *((undefined4 *)GEN_TOP((uVar1 + 0x2c))) = param_1[3];
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d14db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd14db0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  
  F_00d213b0(this GEN_EDX_FWD,param_1,(undefined1)param_2);
  iVar4 = *(int *)(this + 0x128);
  fVar1 = param_1[3];
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  *((float *)GEN_TOP((iVar4 + 0x20))) = *((float *)GEN_TOP((iVar4 + 0x20))) + *param_1;
  *((float *)GEN_TOP((iVar4 + 0x24))) = *((float *)GEN_TOP((iVar4 + 0x24))) + fVar2;
  *((float *)GEN_TOP((iVar4 + 0x28))) = *((float *)GEN_TOP((iVar4 + 0x28))) + fVar3;
  *((float *)GEN_TOP((iVar4 + 0x2c))) = *((float *)GEN_TOP((iVar4 + 0x2c))) + fVar1;
  uVar5 = *(uint *)(this + 0x128);
  *((float *)GEN_TOP((uVar5 + 0x2c))) = (float)(float10)1;
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d14e70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd14e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x80)));
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d14e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd14e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  float10 fVar1;
  
  fVar1 = F_00d22f40(this GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x68)))),
                       *((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) >> 2 & 1);
  *param_1 = ((float)GEN_TOF((fVar1 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60))))));
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d14ed0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd14ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x80) {
    return 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x128)));
  puVar3 = param_2;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x80;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf19 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d14f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd14f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x128);
  *param_1 = *((undefined4 *)GEN_TOP((iVar1 + 0x48)));
  *param_2 = *((undefined4 *)GEN_TOP((iVar1 + 0x4c)));
  *param_3 = *((undefined4 *)GEN_TOP((iVar1 + 0x6c)));
  *param_4 = *((undefined4 *)GEN_TOP((iVar1 + 0x68)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d14f40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd14f40u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x128)));
  *((float *)GEN_TOP((uVar1 + 0x48))) = param_2;
  *((float *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x128))) + 0x4c))) = param_3;
  return uVar1;
}

/* ref: FUN_00d14f60 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d14f60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd14f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  int iVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  uVar3 = param_4;
  fVar2 = *(float *)&REFG(undefined, 0x110f9d0);
  fVar4 = (float10)*(float *)&REFG(undefined, 0x110f9d0);
  *((float *)GEN_TOP(param_4)) = *(float *)&REFG(undefined, 0x110f9d0);
  *((undefined4 *)GEN_TOP((param_4 + 0xc))) = 0;
  *((float *)GEN_TOP((param_4 + 4))) = fVar2;
  *((float *)GEN_TOP((param_4 + 8))) = fVar2;
  *((float *)GEN_TOP(param_2)) = fVar2;
  *param_3 = fVar2;
  if ((*((byte *)GEN_TOP((param_1 + 0xb0))) & 8) != 0) {
    *((byte *)GEN_TOP((param_4 + 0xc))) = *((byte *)GEN_TOP((param_4 + 0xc))) | 2;
    *((float *)GEN_TOP((param_1 + 0x80))) = (float)(float10)1;
    return 0;
  }
  iVar1 = *((int *)GEN_TOP((param_1 + 0x128)));
  if ((*((byte *)GEN_TOP((iVar1 + 4))) & 0x80) == 0) {
    *((undefined4 *)GEN_TOP((param_4 + 8))) = *((undefined4 *)GEN_TOP((param_1 + 0x98)));
    fVar5 = (float10)*((float *)GEN_TOP((param_1 + 0x60)));
    fVar6 = (float10)*((float *)GEN_TOP((param_1 + 0x68)));
    if (((GEN_ISNAN(fVar4) || GEN_ISNAN(fVar5)) == ((GEN_ISNAN(fVar4) || GEN_ISNAN(fVar5)) || fVar4 == fVar5)) ||
       ((GEN_ISNAN(fVar6) || GEN_ISNAN(fVar4)) == ((GEN_ISNAN(fVar6) || GEN_ISNAN(fVar4)) || fVar6 == fVar4))) {
      fVar4 = ((float10)GEN_TOD(atan2(fVar5,-fVar6)));
      param_4 = (uint)gen_fl2bits((float)fVar4);
      *((uint *)GEN_TOP((param_1 + 0xa4))) = param_4;
    }
    else {
      param_4 = *((uint *)GEN_TOP((param_1 + 0xa4)));
    }
    *((undefined4 *)GEN_TOP(uVar3)) = *((undefined4 *)GEN_TOP((param_1 + 0x94)));
    *((float *)GEN_TOP(param_2)) =
         ((float)GEN_TOF(((((float10)GEN_TOD(gen_bits2f(param_4))) + ((float10)GEN_TOD(gen_bits2f(param_4)))) /
                (float10)*(double *)&REFG(undefined, 0x1080228))));
    return 0;
  }
  *((float *)GEN_TOP((param_1 + 0x94))) = fVar2;
  if ((*((byte *)GEN_TOP((iVar1 + 0xc))) & 2) == 0) {
    *((float *)GEN_TOP(param_2)) =
         ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar1 + 0x70))) + (float10)*((float *)GEN_TOP((iVar1 + 0x70)))) /
                (float10)*(double *)&REFG(undefined, 0x1080228))));
    return 0;
  }
  fVar4 = F_00d234c0(param_1 GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0xa0)))));
  *((float *)GEN_TOP(param_2)) =
       ((float)GEN_TOF((((float10)(float)fVar4 + (float10)(float)fVar4) / (float10)*(double *)&REFG(undefined, 0x1080228))));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d15080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd15080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xb0, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf27 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d15100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd15100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  bVar1 = F_00d228c0(this GEN_EDX_FWD);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf29 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d15130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(HWND param_1, unsigned int gen_a1), GEN_P(HDC param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd15130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(HWND param_1 = (HWND)gen_a1;)
  GEN_PIN(HDC param_2 = (HDC)gen_a2;)
  GEN_FRAME_DECL(0x144, 12);
  float fVar1;
  float fVar2;
  char cVar3;
  HGDIOBJ pvVar4;
  undefined * pHVar5;
  int * piVar6;
  uint uVar7;
  float * pfVar8;
  undefined * h;
  char * pcVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  ulong color;
  
  (*(uint *)(gen_frame + 0x130)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x134);
  (*(HWND *)(gen_frame + 0x7c)) = param_1;
  pvVar4 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0xc)) = pvVar4;
  pvVar4 = gen_imp_SelectObject(param_2,pvVar4);
  (*(HGDIOBJ *)(gen_frame + 0x8)) = pvVar4;
  if (((byte)this[0xb0] & 1) == 0) {
    iVar21 = 1;
    color = 0x900000;
  }
  else {
    color = 0x80;
    iVar21 = 2;
  }
  pHVar5 = gen_imp_CreatePen(0,iVar21,color);
  (*(undefined * PTR32 *)(gen_frame + 0x5c)) = pHVar5;
  pvVar4 = gen_imp_SelectObject(param_2,pHVar5);
  (*(HGDIOBJ *)(gen_frame + 0x10)) = pvVar4;
  gen_imp_GetClientRect((*(HWND *)(gen_frame + 0x7c)),&(*(tagRECT *)(gen_frame + 0x100)));
  (*(HWND *)(gen_frame + 0x7c)) = (HWND)((*(tagRECT *)(gen_frame + 0x100)).right / 2);
  (*(int *)(gen_frame + 0x74)) = (*(tagRECT *)(gen_frame + 0x100)).bottom / 2;
  iVar10 = (*(tagRECT *)(gen_frame + 0x100)).right / 2 - (int)((double)*(float *)(this + 0x50) * *(double *)&REFG(double, 0x1132488));
  (*(int *)(gen_frame + 0x70)) = iVar10;
  iVar11 = (*(tagRECT *)(gen_frame + 0x100)).bottom / 2 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x58));
  (*(int *)(gen_frame + 0x78)) = iVar11;
  iVar21 = (int)((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x4c))) * *(double *)&REFG(undefined, 0x10947f0));
  gen_imp_Ellipse(param_2,iVar10 - iVar21,iVar11 - iVar21,iVar21 + iVar10,iVar21 + iVar11);
  iVar21 = (int)((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x48))) * *(double *)&REFG(undefined, 0x10947f0));
  gen_imp_Ellipse(param_2,(*(int *)(gen_frame + 0x70)) - iVar21,(*(int *)(gen_frame + 0x78)) - iVar21,iVar21 + (*(int *)(gen_frame + 0x70)),iVar21 + (*(int *)(gen_frame + 0x78)));
  piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x98))))
                            (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG)));
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x5c))))(piVar6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x84)));
  if ((char)uVar7 != '\0') {
    fVar12 = ((float10)GEN_TOD(fcos((float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x34))))));
    (*(HGDIOBJ *)(gen_frame + 0x80)) = ((HGDIOBJ)(uintptr_t)gen_fl2bits((float)((float)fVar12)));
    iVar21 = *(int *)(this + 0x128);
    fVar13 = ((float)GEN_TOF(((float10)(float)fVar12 * (float10)*((float *)GEN_TOP((iVar21 + 0x4c))))));
    (*(float *)(gen_frame + 0x4c)) = fVar13;
    fVar12 = ((float10)GEN_TOD(fsin((float10)*((float *)GEN_TOP((iVar21 + 0x34))))));
    (*(HGDIOBJ *)(gen_frame + 0x80)) = ((HGDIOBJ)(uintptr_t)gen_fl2bits((float)((float)fVar12)));
    iVar21 = *(int *)(this + 0x128);
    fVar17 = ((float)GEN_TOF(((float10)(float)fVar12 * (float10)*((float *)GEN_TOP((iVar21 + 0x4c))))));
    (*(float *)(gen_frame + 0x54)) = fVar17;
    (*(float *)(gen_frame + 0x50)) = *(float *)&REFG(undefined, 0x110f9d0);
    fVar15 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar21 + 0x44))) * (float10)REFG(double, 0x1088108) +
                    (float10)*((float *)GEN_TOP((iVar21 + 0x34))))));
    (*(HGDIOBJ *)(gen_frame + 0x80)) = ((HGDIOBJ)(uintptr_t)gen_fl2bits((float)(fVar15)));
    fVar12 = ((float10)GEN_TOD(fcos((float10)fVar15)));
    (*(HGDIOBJ *)(gen_frame + 0x80)) = ((HGDIOBJ)(uintptr_t)gen_fl2bits((float)((float)fVar12)));
    iVar21 = *(int *)(this + 0x128);
    fVar14 = ((float)GEN_TOF(((float10)(float)fVar12 * (float10)*((float *)GEN_TOP((iVar21 + 0x4c))))));
    (*(float *)(gen_frame + 0x2c)) = fVar14;
    fVar15 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar21 + 0x44))) * (float10)REFG(double, 0x1088108) +
                    (float10)*((float *)GEN_TOP((iVar21 + 0x34))))));
    (*(HGDIOBJ *)(gen_frame + 0x80)) = ((HGDIOBJ)(uintptr_t)gen_fl2bits((float)(fVar15)));
    fVar12 = ((float10)GEN_TOD(fsin((float10)fVar15)));
    (*(HGDIOBJ *)(gen_frame + 0x80)) = ((HGDIOBJ)(uintptr_t)gen_fl2bits((float)((float)fVar12)));
    iVar21 = *(int *)(this + 0x128);
    fVar18 = ((float)GEN_TOF(((float10)(float)fVar12 * (float10)*((float *)GEN_TOP((iVar21 + 0x4c))))));
    (*(float *)(gen_frame + 0x34)) = fVar18;
    (*(float *)(gen_frame + 0x30)) = *(float *)&REFG(undefined, 0x110f9d0);
    fVar15 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar21 + 0x34))) -
                    (float10)*((float *)GEN_TOP((iVar21 + 0x44))) * (float10)REFG(double, 0x1088108))));
    (*(HGDIOBJ *)(gen_frame + 0x80)) = ((HGDIOBJ)(uintptr_t)gen_fl2bits((float)(fVar15)));
    fVar12 = ((float10)GEN_TOD(fcos((float10)fVar15)));
    (*(HGDIOBJ *)(gen_frame + 0x80)) = ((HGDIOBJ)(uintptr_t)gen_fl2bits((float)((float)fVar12)));
    iVar21 = *(int *)(this + 0x128);
    fVar1 = ((float)GEN_TOF(((float10)(float)fVar12 * (float10)*((float *)GEN_TOP((iVar21 + 0x4c))))));
    (*(float *)(gen_frame + 0x3c)) = fVar1;
    fVar15 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar21 + 0x34))) -
                    (float10)*((float *)GEN_TOP((iVar21 + 0x44))) * (float10)REFG(double, 0x1088108))));
    (*(HGDIOBJ *)(gen_frame + 0x80)) = ((HGDIOBJ)(uintptr_t)gen_fl2bits((float)(fVar15)));
    fVar12 = ((float10)GEN_TOD(fsin((float10)fVar15)));
    (*(HGDIOBJ *)(gen_frame + 0x80)) = ((HGDIOBJ)(uintptr_t)gen_fl2bits((float)((float)fVar12)));
    iVar21 = *(int *)(this + 0x128);
    fVar2 = ((float)GEN_TOF(((float10)(float)fVar12 * (float10)*((float *)GEN_TOP((iVar21 + 0x4c))))));
    (*(float *)(gen_frame + 0x44)) = fVar2;
    (*(float *)(gen_frame + 0x40)) = *(float *)&REFG(undefined, 0x110f9d0);
    fVar13 = *((float *)GEN_TOP((iVar21 + 0x20))) + fVar13;
    fVar15 = *((float *)GEN_TOP((iVar21 + 0x24))) + *(float *)&REFG(undefined, 0x110f9d0);
    fVar17 = *((float *)GEN_TOP((iVar21 + 0x28))) + fVar17;
    fVar19 = *((float *)GEN_TOP((iVar21 + 0x2c))) + (*(float *)(gen_frame + 0x58));
    (*(float *)(gen_frame + 0x14)) = fVar13;
    (*(float *)(gen_frame + 0x18)) = fVar15;
    (*(float *)(gen_frame + 0x1c)) = fVar17;
    (*(float *)(gen_frame + 0x20)) = fVar19;
    (*(float *)(gen_frame + 0x60)) = fVar13;
    (*(float *)(gen_frame + 0x64)) = fVar15;
    (*(float *)(gen_frame + 0x4c)) = fVar13;
    (*(float *)(gen_frame + 0x68)) = fVar17;
    (*(float *)(gen_frame + 0x50)) = fVar15;
    (*(float *)(gen_frame + 0x6c)) = fVar19;
    (*(float *)(gen_frame + 0x58)) = fVar19;
    iVar21 = *(int *)(this + 0x128);
    (*(float *)(gen_frame + 0x54)) = fVar17;
    fVar13 = *((float *)GEN_TOP((iVar21 + 0x2c)));
    fVar17 = *((float *)GEN_TOP((iVar21 + 0x28)));
    fVar14 = *((float *)GEN_TOP((iVar21 + 0x20))) + fVar14;
    fVar16 = *((float *)GEN_TOP((iVar21 + 0x24))) + *(float *)&REFG(undefined, 0x110f9d0);
    fVar18 = *((float *)GEN_TOP((iVar21 + 0x28))) + fVar18;
    fVar20 = *((float *)GEN_TOP((iVar21 + 0x2c))) + (*(float *)(gen_frame + 0x38));
    fVar15 = *((float *)GEN_TOP((iVar21 + 0x24)));
    (*(float *)(gen_frame + 0x14)) = fVar14;
    (*(float *)(gen_frame + 0x18)) = fVar16;
    (*(float *)(gen_frame + 0x1c)) = fVar18;
    (*(float *)(gen_frame + 0x20)) = fVar20;
    fVar19 = *((float *)GEN_TOP((iVar21 + 0x20)));
    (*(float *)(gen_frame + 0x60)) = fVar14;
    (*(float *)(gen_frame + 0x64)) = fVar16;
    (*(float *)(gen_frame + 0x2c)) = fVar14;
    (*(float *)(gen_frame + 0x68)) = fVar18;
    (*(float *)(gen_frame + 0x6c)) = fVar20;
    (*(float *)(gen_frame + 0x30)) = fVar16;
    (*(float *)(gen_frame + 0x34)) = fVar18;
    (*(float *)(gen_frame + 0x38)) = fVar20;
    fVar19 = fVar19 + fVar1;
    fVar15 = fVar15 + *(float *)&REFG(undefined, 0x110f9d0);
    fVar17 = fVar17 + fVar2;
    fVar13 = fVar13 + (*(float *)(gen_frame + 0x48));
    (*(float *)(gen_frame + 0x14)) = fVar19;
    (*(float *)(gen_frame + 0x18)) = fVar15;
    (*(float *)(gen_frame + 0x1c)) = fVar17;
    (*(float *)(gen_frame + 0x20)) = fVar13;
    (*(float *)(gen_frame + 0x60)) = fVar19;
    (*(float *)(gen_frame + 0x3c)) = fVar19;
    (*(float *)(gen_frame + 0x64)) = fVar15;
    (*(float *)(gen_frame + 0x40)) = fVar15;
    (*(float *)(gen_frame + 0x68)) = fVar17;
    (*(float *)(gen_frame + 0x44)) = fVar17;
    (*(float *)(gen_frame + 0x6c)) = fVar13;
    fVar12 = (float10)1;
    (*(float *)(gen_frame + 0x58)) = (float)fVar12;
    (*(float *)(gen_frame + 0x38)) = (float)fVar12;
    (*(float *)(gen_frame + 0x48)) = fVar13;
    (*(float *)(gen_frame + 0x48)) = (float)fVar12;
    pfVar8 = ((float *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x4c)))));
    fVar13 = pfVar8[1];
    (*(float *)(gen_frame + 0x4c)) = *pfVar8;
    (*(float *)(gen_frame + 0x50)) = fVar13;
    (*(float *)(gen_frame + 0x54)) = pfVar8[2];
    (*(float *)(gen_frame + 0x58)) = pfVar8[3];
    pfVar8 = ((float *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x2c)))));
    fVar13 = pfVar8[1];
    (*(float *)(gen_frame + 0x2c)) = *pfVar8;
    (*(float *)(gen_frame + 0x30)) = fVar13;
    (*(float *)(gen_frame + 0x34)) = pfVar8[2];
    (*(float *)(gen_frame + 0x38)) = pfVar8[3];
    pfVar8 = ((float *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x3c)))));
    fVar13 = pfVar8[1];
    (*(float *)(gen_frame + 0x3c)) = *pfVar8;
    (*(float *)(gen_frame + 0x40)) = fVar13;
    (*(float *)(gen_frame + 0x44)) = pfVar8[2];
    (*(float *)(gen_frame + 0x48)) = pfVar8[3];
    gen_imp_MoveToEx(param_2,(*(int *)(gen_frame + 0x70)),(*(int *)(gen_frame + 0x78)),(LPPOINT)0x0);
    gen_imp_LineTo(param_2,(int)(*(HWND *)(gen_frame + 0x7c)) - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0x4c))),
           (*(int *)(gen_frame + 0x74)) - (int)((double)(*(float *)(gen_frame + 0x54)) * *(double *)&REFG(double, 0x1132488)));
    gen_imp_MoveToEx(param_2,(*(int *)(gen_frame + 0x70)),(*(int *)(gen_frame + 0x78)),(LPPOINT)0x0);
    gen_imp_LineTo(param_2,(int)(*(HWND *)(gen_frame + 0x7c)) - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0x2c))),
           (*(int *)(gen_frame + 0x74)) - (int)((double)(*(float *)(gen_frame + 0x34)) * *(double *)&REFG(double, 0x1132488)));
    gen_imp_MoveToEx(param_2,(*(int *)(gen_frame + 0x70)),(*(int *)(gen_frame + 0x78)),(LPPOINT)0x0);
    gen_imp_LineTo(param_2,(int)(*(HWND *)(gen_frame + 0x7c)) - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0x3c))),
           (*(int *)(gen_frame + 0x74)) - (int)((double)(*(float *)(gen_frame + 0x44)) * *(double *)&REFG(double, 0x1132488)));
    if (((byte)this[0xb0] & 1) != 0) {
      (*(int *)(gen_frame + 0x74)) = (*(tagRECT *)(gen_frame + 0x100)).right / 2;
      (*(HWND *)(gen_frame + 0x7c)) = (HWND)((*(tagRECT *)(gen_frame + 0x100)).bottom / 2);
      gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x10)));
      gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x5c)));
      pHVar5 = gen_imp_CreatePen(0,1,0x900000);
      (*(undefined * PTR32 *)(gen_frame + 0x5c)) = pHVar5;
      pvVar4 = gen_imp_SelectObject(param_2,pHVar5);
      (*(HGDIOBJ *)(gen_frame + 0x10)) = pvVar4;
      gen_imp_MoveToEx(param_2,(*(int *)(gen_frame + 0x74)) - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x60)),
               (int)(*(HWND *)(gen_frame + 0x7c)) - (int)((double)*(float *)(this + 0x68) * *(double *)&REFG(double, 0x1132488)),
               (LPPOINT)0x0);
      gen_imp_LineTo(param_2,(*(int *)(gen_frame + 0x74)),(int)(*(HWND *)(gen_frame + 0x7c)));
    }
    F_00c48350(((undefined *)(gen_frame + 0xc4)),0,0x3c);
    F_00c49908(((CHAR *)(((char *)((undefined *)(gen_frame + 0xc4)) + 28))),0x20,&REFG(undefined, 0x1132d04));
    (*(LONG *)((char *)((undefined *)(gen_frame + 0xc4)))) = 0xd;
    (*(BYTE *)(((char *)((undefined *)(gen_frame + 0xc4)) + 23))) = 0x80;
    (*(BYTE *)(((char *)((undefined *)(gen_frame + 0xc4)) + 27))) = '\x01';
    h = gen_imp_CreateFontIndirectA(((undefined *)(gen_frame + 0xc4)));
    (*(HWND *)(gen_frame + 0x7c)) = (HWND)h;
    pvVar4 = gen_imp_SelectObject(param_2,h);
    (*(HGDIOBJ *)(gen_frame + 0x80)) = pvVar4;
    if (((byte)this[0xb0] & 1) == 0) {
      F_00c472af(((char *)(gen_frame + 0x110)),0x20,&REFG(undefined, 0x1132d20),&REFG(undefined, 0x1132d18));
    }
    else {
      F_00c472af(((char *)(gen_frame + 0x110)),0x20,&REFG(undefined, 0x1132d10),
                 (int)(ulonglong)
                      gen_d2bits((double)*(float *)(this + 0x80) * *(double *)&REFG(undefined, 0x1088118)),
                 (int)((ulonglong)
                       gen_d2bits((double)*(float *)(this + 0x80) * *(double *)&REFG(undefined, 0x1088118)) >>
                      0x20));
    }
    pcVar9 = ((char *)(gen_frame + 0x110));
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    gen_imp_GetTextExtentPoint32A(param_2,((char *)(gen_frame + 0x110)),(int)pcVar9 - (int)(((char *)(gen_frame + 0x110)) + 1),&(*(undefined8 *)(gen_frame + 0x0)));
    gen_imp_TextOutA(param_2,(*(int *)(gen_frame + 0x70)) - (*(LONG *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) / 2,(*(int *)(gen_frame + 0x78)) - (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) / 2,((char *)(gen_frame + 0x110)),
             (int)pcVar9 - (int)(((char *)(gen_frame + 0x110)) + 1));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x80)));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x10)));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x8)));
    gen_imp_DeleteObject((*(HWND *)(gen_frame + 0x7c)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x5c)));
    uVar7 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0xc)));
  }
  return uVar7;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d159e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd159e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined * _File;
  byte bVar1;
  int iVar2;
  volatile double dVar3;
  
  _File = param_1;
  bVar1 = F_00d21f00((undefined *)this GEN_EDX_FWD,param_1);
  if (bVar1 == 0) {
    return 0;
  }
  iVar2 = *(int *)(this + 0x128);
  F_00c49386(param_1,((char *)REFP(0x1132d24)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((iVar2 + 0x20))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((iVar2 + 0x20))))),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((iVar2 + 0x24))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((iVar2 + 0x24))))),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((iVar2 + 0x28))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((iVar2 + 0x28))))));
  iVar2 = *(int *)(this + 0x128);
  dVar3 = (double)*((float *)GEN_TOP((iVar2 + 0x38)));
  F_00c49386(param_1,((char *)REFP(0x1132d3c)),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar2 + 0x30)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar2 + 0x30)))) >> 0x20),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar2 + 0x34)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar2 + 0x34)))) >> 0x20));
  F_00c49386(param_1,((char *)REFP(0x1132d54)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))))));
  F_00c49386(param_1,((char *)REFP(0x1132d64)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44))))));
  F_00c49386(param_1,((char *)REFP(0x1132d74)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x48))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x48))))));
  F_00c49386(param_1,((char *)REFP(0x1132d84)),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x4c)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x4c)))) >> 0x20));
  param_1 = ((undefined *)GEN_TOP(0x0));
  iVar2 = 0x50;
  do {
    F_00c49386(_File,((char *)REFP(0x1132d94)),param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar2 + *(int *)(this + 0x128))))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar2 + *(int *)(this + 0x128))))) >> 0x20
                  ));
    param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1)));
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x58);
  F_00c49386(_File,((char *)REFP(0x1132da8)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x58))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x58))))));
  F_00c49386(_File,((char *)REFP(0x1132dbc)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x5c))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x5c))))));
  F_00c49386(_File,((char *)REFP(0x1132dcc)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60))))));
  F_00c49386(_File,((char *)REFP(0x1132dd8)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 100))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 100))))));
  F_00c49386(_File,((char *)REFP(0x1132de8)),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x68)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x68)))) >> 0x20));
  F_00c49386(_File,((char *)REFP(0x1132dfc)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf31 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d15b90(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd15b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = ((char *)REFP(0x1132e14));
  pbVar5 = ((byte *)GEN_TOP(param_2));
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d15bc1: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d15bc6;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d15bc1;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d15bc6: ;
  if (iVar3 == 0) {
    pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
    if (pcVar2 != ((char *)GEN_TOP(0x0))) {
      dVar7 = F_00c4acaa(pcVar2);
      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x20))) = (float)dVar7;
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24))) = (float)dVar7;
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28))) = (float)dVar7;
          return 1;
        }
      }
    }
  }
  else {
    pcVar2 = ((char *)REFP(0x1132e20));
    pbVar5 = ((byte *)GEN_TOP(param_2));
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d15c75: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d15c7a;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d15c75;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d15c7a: ;
    if (iVar3 == 0) {
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x30))) = (float)dVar7;
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x34))) = (float)dVar7;
          pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
          if (pcVar2 != ((char *)GEN_TOP(0x0))) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x38))) = (float)dVar7;
            return 1;
          }
        }
      }
    }
    else {
      pcVar2 = ((char *)REFP(0x1132e2c));
      pbVar5 = ((byte *)GEN_TOP(param_2));
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00d15d30: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d15d35;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00d15d30;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d15d35: ;
      if (iVar3 == 0) {
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x40))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = ((char *)REFP(0x1132e34));
        pbVar5 = ((byte *)GEN_TOP(param_2));
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d15d92: ;
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d15d97;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d15d92;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d15d97: ;
        if (iVar3 == 0) {
          pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
          if (pcVar2 != ((char *)GEN_TOP(0x0))) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x44))) = (float)dVar7;
            return 1;
          }
        }
        else {
          pcVar2 = ((char *)REFP(0x1132e3c));
          pbVar5 = ((byte *)GEN_TOP(param_2));
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d15df4: ;
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d15df9;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d15df4;
            pcVar2 = pcVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d15df9: ;
          if (iVar3 == 0) {
            pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
            if (pcVar2 != ((char *)GEN_TOP(0x0))) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x48))) = (float)dVar7;
              return 1;
            }
          }
          else {
            pcVar2 = ((char *)REFP(0x1132e48));
            pbVar5 = ((byte *)GEN_TOP(param_2));
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d15e56: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d15e5b;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d15e56;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d15e5b: ;
            if (iVar3 == 0) {
              pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
              if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                dVar7 = F_00c4acaa(pcVar2);
                *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x4c))) = (float)dVar7;
                return 1;
              }
            }
            else {
              pcVar2 = ((char *)REFP(0x1132e54));
              pbVar5 = ((byte *)GEN_TOP(param_2));
              do {
                bVar1 = *pcVar2;
                bVar6 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_00d15eb8: ;
                  iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                  goto LAB_00d15ebd;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar2[1];
                bVar6 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_00d15eb8;
                pcVar2 = pcVar2 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00d15ebd: ;
              if (iVar3 == 0) {
                uVar4 = F_00d00d00(0,0);
                if (uVar4 != 0) {
                  uVar4 = F_00c4c74c(uVar4);
                  pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                  if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                    dVar7 = F_00c4acaa(pcVar2);
                    *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x50 + uVar4 * 4))) = (float)dVar7;
                    return 1;
                  }
                }
              }
              else {
                pcVar2 = ((char *)REFP(0x1132e5c));
                pbVar5 = ((byte *)GEN_TOP(param_2));
                do {
                  bVar1 = *pcVar2;
                  bVar6 = bVar1 < *pbVar5;
                  if (bVar1 != *pbVar5) {
LAB_00d15f37: ;
                    iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                    goto LAB_00d15f3c;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pcVar2[1];
                  bVar6 = bVar1 < pbVar5[1];
                  if (bVar1 != pbVar5[1]) goto LAB_00d15f37;
                  pcVar2 = pcVar2 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_00d15f3c: ;
                if (iVar3 == 0) {
                  pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                  if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                    dVar7 = F_00c4acaa(pcVar2);
                    *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x58))) = (float)dVar7;
                    return 1;
                  }
                }
                else {
                  pcVar2 = ((char *)REFP(0x1132e68));
                  pbVar5 = ((byte *)GEN_TOP(param_2));
                  do {
                    bVar1 = *pcVar2;
                    bVar6 = bVar1 < *pbVar5;
                    if (bVar1 != *pbVar5) {
LAB_00d15fa0: ;
                      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                      goto LAB_00d15fa5;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pcVar2[1];
                    bVar6 = bVar1 < pbVar5[1];
                    if (bVar1 != pbVar5[1]) goto LAB_00d15fa0;
                    pcVar2 = pcVar2 + 2;
                    pbVar5 = pbVar5 + 2;
                  } while (bVar1 != 0);
                  iVar3 = 0;
LAB_00d15fa5: ;
                  if (iVar3 == 0) {
                    pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                    if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                      dVar7 = F_00c4acaa(pcVar2);
                      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x5c))) = (float)dVar7;
                      return 1;
                    }
                  }
                  else {
                    pcVar2 = ((char *)REFP(0x1132e70));
                    pbVar5 = ((byte *)GEN_TOP(param_2));
                    do {
                      bVar1 = *pcVar2;
                      bVar6 = bVar1 < *pbVar5;
                      if (bVar1 != *pbVar5) {
LAB_00d16002: ;
                        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                        goto LAB_00d16007;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pcVar2[1];
                      bVar6 = bVar1 < pbVar5[1];
                      if (bVar1 != pbVar5[1]) goto LAB_00d16002;
                      pcVar2 = pcVar2 + 2;
                      pbVar5 = pbVar5 + 2;
                    } while (bVar1 != 0);
                    iVar3 = 0;
LAB_00d16007: ;
                    if (iVar3 == 0) {
                      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                        dVar7 = F_00c4acaa(pcVar2);
                        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x60))) = (float)dVar7;
                        return 1;
                      }
                    }
                    else {
                      pcVar2 = ((char *)REFP(0x1132e78));
                      pbVar5 = ((byte *)GEN_TOP(param_2));
                      do {
                        bVar1 = *pcVar2;
                        bVar6 = bVar1 < *pbVar5;
                        if (bVar1 != *pbVar5) {
LAB_00d16064: ;
                          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                          goto LAB_00d16069;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pcVar2[1];
                        bVar6 = bVar1 < pbVar5[1];
                        if (bVar1 != pbVar5[1]) goto LAB_00d16064;
                        pcVar2 = pcVar2 + 2;
                        pbVar5 = pbVar5 + 2;
                      } while (bVar1 != 0);
                      iVar3 = 0;
LAB_00d16069: ;
                      if (iVar3 == 0) {
                        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                          dVar7 = F_00c4acaa(pcVar2);
                          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 100))) = (float)dVar7;
                          return 1;
                        }
                      }
                      else {
                        pcVar2 = ((char *)REFP(0x1132e84));
                        pbVar5 = ((byte *)GEN_TOP(param_2));
                        do {
                          bVar1 = *pcVar2;
                          bVar6 = bVar1 < *pbVar5;
                          if (bVar1 != *pbVar5) {
LAB_00d160c6: ;
                            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                            goto LAB_00d160cb;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pcVar2[1];
                          bVar6 = bVar1 < pbVar5[1];
                          if (bVar1 != pbVar5[1]) goto LAB_00d160c6;
                          pcVar2 = pcVar2 + 2;
                          pbVar5 = pbVar5 + 2;
                        } while (bVar1 != 0);
                        iVar3 = 0;
LAB_00d160cb: ;
                        if (iVar3 != 0) {
                          bVar1 = F_00d22040(param_1 GEN_EDX_ARG,param_2);
                          return bVar1;
                        }
                        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                          dVar7 = F_00c4acaa(pcVar2);
                          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x68))) = (float)dVar7;
                          return 1;
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
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00d16110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd16110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  undefined1 PVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  int * piVar8;
  float fVar9;
  float10 fVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  (*(char *)(gen_frame + 0x1b)) = '\0';
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar8;
  bVar5 = F_00d21830((undefined *)this GEN_EDX_FWD);
  if (bVar5 == 0) {
    piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x90))))(piVar8 GEN_EDX_ARG)));
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xfc))))(piVar6 GEN_EDX_ARG,*(undefined4 *)(this + 0x24));
    if ((char)uVar7 == '\0') goto LAB_00d1650f;
    F_00d2dd80(&(*(undefined4 *)(gen_frame + 0x34)),*(undefined4 *)(this + 0x24));
    if (((byte)this[0xb0] & 0x80) == 0) {
      bVar5 = F_00cbe970(&(*(undefined4 *)(gen_frame + 0x34)) GEN_EDX_ARG);
    }
    else {
      bVar5 = F_00cbe940(&(*(undefined4 *)(gen_frame + 0x34)) GEN_EDX_ARG);
    }
    if (bVar5 != 0) {
      uVar2 = *(undefined4 *)(this + 0x28);
      iVar3 = *piVar6;
      (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)&REFG(undefined, 0x110f9d0);
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)&REFG(undefined, 0x110f9d0);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x110f9d0);
      (*(float *)(gen_frame + 0xc)) = (float)(float10)1;
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x3c))))
                        (piVar6,((undefined1 *)(gen_frame + 0x20)),*(undefined4 *)(this + 0x24),uVar2,&(*(undefined4 *)(gen_frame + 0x0)),0,0,1);
      F_00cbbdc0(this + 8 GEN_EDX_ARG,uVar7);
      F_00cbbdb0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
      bVar5 = F_00cbc040(this + 8 GEN_EDX_ARG);
      if (bVar5 != 0) {
        iVar3 = *(int *)(this + 0x128);
        (*(char *)(gen_frame + 0x1b)) = '\x01';
        if (((*((byte *)GEN_TOP((iVar3 + 4))) & 0x80) != 0) && ((*((byte *)GEN_TOP((iVar3 + 0xc))) & 2) != 0)) {
          fVar10 = F_00d23370(this GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((iVar3 + 0x70)))));
          *(float *)(this + 0xa0) = (float)fVar10;
        }
        F_00d22bf0(this GEN_EDX_ARG,0x403);
        F_00cbe3b0(&(*(undefined4 *)(gen_frame + 0x34)) GEN_EDX_ARG);
        goto LAB_00d1623a;
      }
    }
    F_00cbe3b0(&(*(undefined4 *)(gen_frame + 0x34)) GEN_EDX_ARG);
  }
  else {
LAB_00d1623a: ;
    bVar5 = F_00cbc040(this + 8 GEN_EDX_ARG);
    if (bVar5 == 0) {
LAB_00d1650f: ;
      *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) | 4;
      return 0;
    }
    uVar7 = F_00d00230(piVar8 GEN_EDX_ARG);
    if (uVar7 == 1) {
      fVar10 = F_00d22df0(((undefined1 *)(gen_frame + 0x20)),this + 0x60,*(float *)(this + 0x80),*(float *)(this + 0x94));
      (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar10)));
      F_00cbc920(this + 8 GEN_EDX_ARG,(float)fVar10);
      F_00cbc4e0(this + 8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
    }
    else {
      (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)&REFG(undefined, 0x110f9d0);
      (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)&REFG(undefined, 0x110f9d0);
      (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)&REFG(undefined, 0x110f9d0);
      (*(undefined4 *)(gen_frame + 0x3c)) = 0;
      F_00d14f60(this GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x1c)),&(*(float *)(gen_frame + 0x14)),(uint)&(*(undefined4 *)(gen_frame + 0x30)));
      F_00cbc9e0(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0x1c)),(*(float *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x30)));
      uVar7 = F_00d2e5a0();
      if ((uVar7 == 3) || (uVar7 == 5)) {
        fVar10 = F_00d2edb0(*(float *)(this + 0x80),0,2);
      }
      else {
        fVar10 = (float10)*(float *)(this + 0x80);
      }
      PVar1 = this[0x2c];
      (*(float *)(gen_frame + 0x14)) = (float)fVar10;
      if (((byte)PVar1 & 2) != 0) {
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x98))))(piVar8 GEN_EDX_ARG)));
        fVar9 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xd0))))(piVar8 GEN_EDX_ARG));
        iVar3 = *piVar8;
        (*(float *)(gen_frame + 0x1c)) = fVar9;
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((iVar3 + 0x50))))(piVar8);
        fVar10 = F_00d2bc80((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c))) GEN_EDX_ARG,(float)extraout_ST0);
        (*(float *)(gen_frame + 0x14)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x14)));
        piVar8 = (*(int * PTR32 *)(gen_frame + 0x10));
      }
      F_00cbc920(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0x14)));
    }
    if (((byte)this[0xb0] & 2) == 0) {
      fVar10 = F_00d22f40(this GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x68)))),
                            *((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) >> 2 & 1);
      fVar9 = ((float)GEN_TOF((fVar10 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60))))));
      (*(float *)(gen_frame + 0x1c)) = fVar9;
      F_00cbc980(this + 8 GEN_EDX_ARG,fVar9);
    }
    PVar1 = this[0x2c];
    (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xc4) * (float10)*(float *)(this + 0x8c))));
    if (((byte)PVar1 & 2) != 0) {
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x98))))(piVar8 GEN_EDX_ARG)));
      fVar9 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xd0))))(piVar8 GEN_EDX_ARG));
      (*(float *)(gen_frame + 0x1c)) = fVar9;
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x50))))(piVar8);
      fVar10 = F_00d2bc60((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c))) GEN_EDX_ARG,(float)extraout_ST0_00);
      (*(float *)(gen_frame + 0x14)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x14)));
    }
    F_00cbc710(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0x14)));
    if ((*(char *)(gen_frame + 0x1b)) != '\0') {
      dVar4 = GEN_X87(*(double *)&REFG(undefined, 0x1097260) * 0.0);
      fVar9 = *(float *)(this + 0xbc);
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f((int)dVar4);
      F_00cbddc0(this + 8 GEN_EDX_ARG,fVar9,(uint)&(*(float *)(gen_frame + 0x1c)));
      fVar9 = *(float *)(this + 0xc0);
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f((int)dVar4);
      F_00cbdeb0(this + 8 GEN_EDX_ARG,fVar9,(uint)&(*(float *)(gen_frame + 0x1c)));
      F_00cbc980(this + 8 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60)))));
      F_00cbcd10(this + 8 GEN_EDX_ARG,*(float *)(this + 200),*(undefined4 *)(this + 0xcc));
      F_00cbce00(this + 8 GEN_EDX_ARG,(uint)(byte)this[0xe0]);
      if ((*(uint *)(this + 0xb0) & 0x400) != 0) {
        F_00cbcbc0(this + 8 GEN_EDX_ARG);
      }
      if ((*(uint *)(this + 0xb0) & 0x100) == 0) {
        F_00cbd990(this + 8 GEN_EDX_ARG,*(undefined4 *)(this + 0xdc),*(undefined4 *)(this + 0xb8));
      }
      else {
        F_00cbdfe0(this + 8 GEN_EDX_ARG,*(undefined4 *)(this + 0xd4),*(float *)(this + 0xbc),
                     *(float *)(this + 0xd0),gen_bits2f((unsigned int)(*(undefined4 *)(this + 0xdc))),
                     *(undefined4 *)(this + 0xb8));
      }
      *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) & 0xfffffeff;
      *(undefined4 *)(this + 0xdc) = 0;
      return 1;
    }
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d16530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd16530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00d22da0(this GEN_EDX_FWD,param_1,0x80)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x20);
  }
  F_00d170e0(*(undefined4 *)(this + 0x128) GEN_EDX_ARG,(uint)puVar1);
  return (uint)(puVar1 + 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf28 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d16590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd16590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x58, 8, 4);
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x50)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x54));
  uVar2 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x50;
    uVar3 = F_00427d90();
    iVar1 = *(int *)(this + 0x128);
    (*(ulonglong *)(gen_frame + 0x8)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x44)) = *((undefined4 *)GEN_TOP((iVar1 + 0x48)));
    (*(undefined4 *)(gen_frame + 0x48)) = *((undefined4 *)GEN_TOP((iVar1 + 0x4c)));
    (*(undefined4 *)(gen_frame + 0x4c)) = *((undefined4 *)GEN_TOP((iVar1 + 0x44)));
    (*(undefined4 *)(gen_frame + 0x38)) = *((undefined4 *)GEN_TOP((iVar1 + 0x30)));
    (*(undefined4 *)(gen_frame + 0x3c)) = *((undefined4 *)GEN_TOP((iVar1 + 0x34)));
    (*(undefined4 *)(gen_frame + 0x40)) = *((undefined4 *)GEN_TOP((iVar1 + 0x38)));
    F_00d16fb0(&(*(undefined2 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)));
    uVar2 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)),0x50);
  }
  return uVar2;
}

/* ref: FUN_00d16670 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d16670(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd16670u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_FRAME_DECL(0xb0, 0);
  int * this;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * pPVar4;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  F_00d22580(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[33])REFP(0x1132fb4));
  *(uint *)(param_1 + 0xb0) =
       *(uint *)(param_1 + 0xb0) ^ ((uint)param_5 << 4 ^ *(uint *)(param_1 + 0xb0)) & 0x10;
  if (param_5 == 0) {
    *(undefined4 * PTR32 *)(param_1 + 0x128) = param_2;
  }
  else {
    *(undefined * PTR32 *)(param_1 + 0x128) = param_1 + 0x130;
    puVar3 = param_2;
    pPVar4 = param_1 + 0x130;
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 - 1) {
      *(undefined4 *)pPVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pPVar4 = pPVar4 + 4;
    }
    if (*((char *)GEN_TOP((*(int *)(param_1 + 0x128) + 3))) == '\0') {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x70))) = *(undefined4 *)&REFG(undefined, 0x110f9d0);
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x128);
  F_00d228c0(param_1 GEN_EDX_ARG);
  *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x6c))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x6c))) *
              (float10)*(double *)&REFG(undefined, 0x109cac8))));
  F_00d20fe0(param_1 GEN_EDX_ARG,~(*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 4))) >> 5) & 1);
  this = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xe4))))(this GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x68))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  F_00d16590(param_1 GEN_EDX_ARG,0x401);
  return (uint)param_1;
}

/* ref: FUN_00d167b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d167b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd167b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xb0, 0);
  int iVar1;
  int * this_00;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  F_00d22720(this GEN_EDX_FWD,param_1,param_2);
  *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) | 0x10;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1132fb4));
  *((int *)GEN_TOP(((int)this + 0x128))) = (int)this + 0x130;
  F_00d17040((int)this + 0x130 GEN_EDX_ARG);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x128)));
  *((int *)GEN_TOP(((int)this + 0x18))) = iVar1;
  *((float *)GEN_TOP((iVar1 + 0x6c))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar1 + 0x6c))) * (float10)*(double *)&REFG(undefined, 0x109cac8))));
  this_00 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  F_00d16590(this GEN_EDX_ARG,0x401);
  return (uint)this;
}

/* ref: FUN_00d16880 */
GEN_LIB GEN_NOFRAME float F_00d16880(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd16880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x40, 0);
  float * pfVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pfVar1 = ((float *)GEN_TOP(F_00c34320(param_2 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),param_1 + 0x20)));
  (*(float *)(gen_frame + 0x1c)) = *pfVar1;
  (*(float *)(gen_frame + 0x20)) = pfVar1[1];
  (*(float *)(gen_frame + 0x24)) = pfVar1[2];
  (*(float *)(gen_frame + 0x28)) = pfVar1[3];
  if ((*((byte *)GEN_TOP((param_1 + 4))) & 4) == 0) {
    (*(float *)(gen_frame + 0x2c)) = pfVar1[1];
    F_00d218f0(param_3[1],&(*(float *)(gen_frame + 0x2c)),param_1,param_1 + 0x50);
    (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x2c));
  }
  fVar4 = *param_3 - (*(float *)(gen_frame + 0x1c));
  fVar5 = param_3[1] - (*(float *)(gen_frame + 0x20));
  fVar6 = param_3[2] - (*(float *)(gen_frame + 0x24));
  fVar7 = param_3[3] - (*(float *)(gen_frame + 0x28));
  (*(float *)(gen_frame + 0x0)) = fVar4;
  (*(float *)(gen_frame + 0x4)) = fVar5;
  (*(float *)(gen_frame + 0x8)) = fVar6;
  (*(float *)(gen_frame + 0xc)) = fVar7;
  (*(float *)(gen_frame + 0x1c)) = fVar4;
  (*(float *)(gen_frame + 0x20)) = fVar5;
  (*(float *)(gen_frame + 0x24)) = fVar6;
  (*(float *)(gen_frame + 0x28)) = fVar7;
  fVar5 = fVar5 * fVar5;
  fVar6 = fVar6 * fVar6;
  fVar4 = GEN_X87(SQRT((fVar6 + fVar4 * fVar4) + fVar5));
  (*(float *)(gen_frame + 0x0)) = fVar4;
  (*(float *)(gen_frame + 0x4)) = (fVar6 + fVar5) + fVar5;
  (*(float *)(gen_frame + 0x8)) = (fVar6 + fVar6) + fVar5;
  (*(float *)(gen_frame + 0xc)) = (fVar6 + fVar7 * fVar7) + fVar5;
  fVar2 = (float10)fVar4;
  fVar3 = (float10)*((float *)GEN_TOP((param_1 + 0x4c)));
  if (!(fVar2 <= fVar3) != ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
    fVar4 = ((float)GEN_TOF((fVar2 - (float10)*((float *)GEN_TOP((param_1 + 0x4c))))));
    (*(float *)(gen_frame + 0x2c)) = fVar4;
    return fVar4;
  }
  return *(float *)&REFG(undefined, 0x110f9d0);
}

/* ref: FUN_00d169c0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d169c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd169c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL(0x170, 0);
  int iVar1;
  code * pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  int * piVar7;
  uint uVar8;
  float * pfVar9;
  float * pfVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  (*(uint *)(gen_frame + 0x15c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x160);
  piVar7 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  (*(float * PTR32 *)(gen_frame + 0x88)) = param_1;
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x98))))(piVar7 GEN_EDX_FWD)));
  (*(int * PTR32 *)(gen_frame + 0x84)) = piVar7;
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x5c))))(piVar7 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xd0)));
  if ((char)uVar8 != '\0') {
    iVar1 = *((int *)GEN_TOP(((int)this + 0x128)));
    (*(undefined4 *)(gen_frame + 0x110)) = *((undefined4 *)GEN_TOP((iVar1 + 0x20)));
    (*(float *)(gen_frame + 0x114)) = *((float *)GEN_TOP((iVar1 + 0x24)));
    (*(undefined4 *)(gen_frame + 0x118)) = *((undefined4 *)GEN_TOP((iVar1 + 0x28)));
    (*(undefined4 *)(gen_frame + 0x11c)) = *((undefined4 *)GEN_TOP((iVar1 + 0x2c)));
    if ((*((byte *)GEN_TOP((iVar1 + 4))) & 4) == 0) {
      pcVar2 = *((gen_code32 *)GEN_TOP((*piVar7 + 0x30)));
      (*(float *)(gen_frame + 0x8c)) = *((float *)GEN_TOP((iVar1 + 0x24)));
      (*pcVar2)(piVar7,&(*(float *)(gen_frame + 0x120)));
      bVar6 = F_00d218f0((*(float *)(gen_frame + 0x124)),&(*(float *)(gen_frame + 0x8c)),*((int *)GEN_TOP(((int)this + 0x128))),
                           *((int *)GEN_TOP(((int)this + 0x128))) + 0x50);
      if (bVar6 != 1) {
        return 0;
      }
      (*(float *)(gen_frame + 0x114)) = (*(float *)(gen_frame + 0x8c));
    }
    pfVar9 = ((float *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0xd0)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x120)),&(*(undefined4 *)(gen_frame + 0x110)))));
    fVar16 = *pfVar9;
    (*(float *)(gen_frame + 0x13c)) = fVar16;
    fVar3 = pfVar9[1];
    (*(float *)(gen_frame + 0x140)) = fVar3;
    fVar4 = pfVar9[2];
    (*(float *)(gen_frame + 0x144)) = fVar4;
    fVar5 = pfVar9[3];
    (*(float *)(gen_frame + 0x148)) = fVar5;
    *((float *)GEN_TOP(((int)this + 0x50))) = fVar16;
    *((float *)GEN_TOP(((int)this + 0x54))) = fVar3;
    *((float *)GEN_TOP(((int)this + 0x58))) = fVar4;
    *((float *)GEN_TOP(((int)this + 0x5c))) = fVar5;
    *((float *)GEN_TOP(((int)this + 0x60))) = fVar16;
    fVar14 = fVar3 * fVar3;
    fVar15 = fVar4 * fVar4;
    *((float *)GEN_TOP(((int)this + 100))) = fVar3;
    *((float *)GEN_TOP(((int)this + 0x68))) = fVar4;
    *((float *)GEN_TOP(((int)this + 0x6c))) = fVar5;
    iVar1 = *((int *)GEN_TOP(((int)this + 0x128)));
    fVar16 = GEN_X87(SQRT((fVar15 + fVar16 * fVar16) + fVar14));
    (*(float *)(gen_frame + 0x120)) = fVar16;
    (*(float *)(gen_frame + 0x124)) = (fVar15 + fVar14) + fVar14;
    (*(float *)(gen_frame + 0x128)) = (fVar15 + fVar15) + fVar14;
    (*(float *)(gen_frame + 0x12c)) = (fVar15 + fVar5 * fVar5) + fVar14;
    fVar12 = (float10)fVar16;
    fVar13 = (float10)*((float *)GEN_TOP((iVar1 + 0x4c)));
    if (!(fVar12 <= fVar13) == ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) || fVar13 == fVar12)) {
      fVar13 = (float10)*((float *)GEN_TOP((iVar1 + 0x48)));
      if (!(fVar12 <= fVar13) || ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) || fVar13 == fVar12)) {
        fVar16 = ((float)GEN_TOF((fVar12 - (float10)*((float *)GEN_TOP((iVar1 + 0x48))))));
        (*(float *)(gen_frame + 0x8c)) = fVar16;
        *(*(float * PTR32 *)(gen_frame + 0x88)) = fVar16;
        fVar16 = ((float)GEN_TOF(((float10)fVar16 /
                        ((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x4c))) -
                        (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x48)))))));
        (*(float *)(gen_frame + 0x8c)) = fVar16;
        fVar16 = (float)((float10)1 - (float10)fVar16);
        (*(float *)(gen_frame + 0x8c)) = fVar16;
        *(*(float * PTR32 *)(gen_frame + 0x88)) = fVar16;
        fVar12 = GEN_X87((float10)fVar16 * (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x58))));
      }
      else {
        fVar16 = ((float)GEN_TOF((fVar12 / (float10)*((float *)GEN_TOP((iVar1 + 0x48))))));
        (*(float *)(gen_frame + 0x8c)) = fVar16;
        fVar16 = (float)((float10)1 - (float10)fVar16);
        (*(float *)(gen_frame + 0x8c)) = fVar16;
        *(*(float * PTR32 *)(gen_frame + 0x88)) = fVar16;
        fVar12 = GEN_X87((float10)fVar16 *
                 ((float10)1 - (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x58)))) +
                 (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x58))));
      }
      *(*(float * PTR32 *)(gen_frame + 0x88)) = (float)fVar12;
      iVar1 = *((int *)GEN_TOP(((int)this + 0x128)));
      (*(float *)(gen_frame + 0x120)) = *((float *)GEN_TOP((iVar1 + 0x30)));
      (*(float *)(gen_frame + 0x124)) = gen_bits2f(*((undefined4 *)GEN_TOP((iVar1 + 0x34))));
      (*(float *)(gen_frame + 0x128)) = gen_bits2f(*((undefined4 *)GEN_TOP((iVar1 + 0x38))));
      (*(float *)(gen_frame + 0x12c)) = *(float *)&REFG(undefined, 0x110f9d0);
      F_00c34430(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x120)));
      F_004eb4e0(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      (*(float *)(gen_frame + 0x14c)) = *(float *)&REFG(undefined, 0x110f9d0);
      (*(float *)(gen_frame + 0x150)) = *(float *)&REFG(undefined, 0x110f9d0);
      (*(float *)(gen_frame + 0x154)) = *(float *)&REFG(undefined, 0x110f9d0);
      (*(float *)(gen_frame + 0x70)) = *(float *)&REFG(undefined, 0x110f9d0);
      (*(float *)(gen_frame + 0x158)) = *(float *)&REFG(undefined, 0x110f9d0);
      (*(float *)(gen_frame + 0x12c)) = *(float *)&REFG(undefined, 0x110f9d0);
      (*(float *)(gen_frame + 0x12c)) = (float)(float10)1;
      (*(float *)(gen_frame + 0x78)) = *(float *)&REFG(undefined, 0x110f9d0);
      (*(float *)(gen_frame + 0x7c)) = (float)(float10)1;
      (*(float *)(gen_frame + 0x74)) = *(float *)&REFG(undefined, 0x110f9d0);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x30))))(piVar7 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x14c)));
      iVar1 = *((int *)GEN_TOP(((int)this + 0x128)));
      F_004eb230(&(*(float *)(gen_frame + 0x14c)) GEN_EDX_ARG,iVar1 + 0x20);
      (*(float *)(gen_frame + 0x158)) = (float)(float10)1;
      pfVar10 = ((float *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x120)),&(*(float *)(gen_frame + 0x14c)))));
      pfVar9 = (*(float * PTR32 *)(gen_frame + 0x88));
      fVar16 = *pfVar10;
      (*(float *)(gen_frame + 0x14c)) = fVar16;
      (*(float *)(gen_frame + 0x150)) = pfVar10[1];
      fVar3 = pfVar10[2];
      (*(float *)(gen_frame + 0x154)) = fVar3;
      (*(float *)(gen_frame + 0x158)) = pfVar10[3];
      if ((*((byte *)GEN_TOP((iVar1 + 4))) & 4) == 0) {
        fVar12 = ((float10)GEN_TOD(atan2((float10)pfVar10[1],(float10)fVar16)));
        fVar4 = (float)fVar12;
        (*(float *)(gen_frame + 0x8c)) = fVar4;
        fVar12 = (float10)fVar4;
        fVar13 = GEN_X87(-(float10)*((float *)GEN_TOP((iVar1 + 0x40))) * (float10)REFG(double, 0x1088108));
        if ((fVar12 <= fVar13 && ((!GEN_ISNAN(fVar13) && !GEN_ISNAN(fVar12)) && fVar13 != fVar12)) ||
           (fVar13 = (float10)REFG(double, 0x1088108) * (float10)*((float *)GEN_TOP((iVar1 + 0x40))),
           !(fVar12 <= fVar13) != (GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)))) {
          *(*(float * PTR32 *)(gen_frame + 0x88)) = *(float *)&REFG(undefined, 0x110f9d0);
          return 0;
        }
      }
      fVar12 = ((float10)GEN_TOD(atan2((float10)fVar3,(float10)fVar16)));
      fVar16 = (float)fVar12;
      (*(float *)(gen_frame + 0x8c)) = fVar16;
      fVar12 = (float10)fVar16;
      fVar13 = GEN_X87(-(float10)*((float *)GEN_TOP((iVar1 + 0x44))) * (float10)REFG(double, 0x1088108));
      if ((fVar12 <= fVar13 && ((!GEN_ISNAN(fVar13) && !GEN_ISNAN(fVar12)) && fVar13 != fVar12)) ||
         (fVar13 = (float10)REFG(double, 0x1088108) * (float10)*((float *)GEN_TOP((iVar1 + 0x44))),
         !(fVar12 <= fVar13) != (GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)))) {
        *(*(float * PTR32 *)(gen_frame + 0x88)) = *(float *)&REFG(undefined, 0x110f9d0);
      }
      else {
        F_00d24070(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x110)),(*(float * PTR32 *)(gen_frame + 0x88)),(int)this + 0x8c,GEN_ARGF(*((float *)GEN_TOP((iVar1 + 0x4c)))),GEN_ARGF(*((float *)GEN_TOP((iVar1 + 0x48)))),GEN_ARGF(*((float *)GEN_TOP((iVar1 + 0x58)))),GEN_ARGF(*((float *)GEN_TOP((iVar1 + 0x6c)))));
        F_00d219d0(this GEN_EDX_ARG,(uint)pfVar9,(int)this + 0x8c,param_2);
        pcVar2 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x84)) + 100)));
        *pfVar9 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x5c))) * (float10)*pfVar9
                         )));
        uVar8 = (*pcVar2)((*(int * PTR32 *)(gen_frame + 0x84)),((undefined1 *)(gen_frame + 0x90)));
        if ((char)uVar8 == '\x01') {
          pfVar10 = ((float *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x90)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x120)),(int)this + 0x70)));
          (*(float *)(gen_frame + 0x13c)) = *pfVar10;
          (*(float *)(gen_frame + 0x140)) = pfVar10[1];
          (*(float *)(gen_frame + 0x144)) = pfVar10[2];
          (*(float *)(gen_frame + 0x148)) = pfVar10[3];
          pfVar10 = &(*(float *)(gen_frame + 0x13c));
        }
        else {
          pfVar10 = ((float *)GEN_TOP(((int)this + 0x60)));
        }
        fVar12 = F_00d21d90(this GEN_EDX_ARG,(uint)pfVar10,pfVar9,(int)this + 0x8c);
        *((float *)GEN_TOP(((int)this + 0x90))) = (float)fVar12;
        *((float *)GEN_TOP(((int)this + 0x80))) = *pfVar9;
        bVar11 = GEN_ISNAN((float10)*(float *)&REFG(undefined, 0x110f9d0)) || GEN_ISNAN((float10)*pfVar9);
        if (bVar11 == (bVar11 || (float10)*(float *)&REFG(undefined, 0x110f9d0) == (float10)*pfVar9)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf14 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d16e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd16e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ushort uVar1;
  int * this_00;
  int iVar2;
  byte bVar3;
  uint uVar4;
  float fVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_FWD,0x406);
  if (((byte)this[0xb0] & 4) != 0) {
    return 0;
  }
  bVar3 = F_00d217a0((undefined *)this GEN_EDX_ARG,param_1);
  if (bVar3 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = *(undefined * PTR32 *)&REFG(undefined, 0x110f9d0);
    *(float *)(this + 0x8c) = (float)(float10)1;
    F_00d21970(this GEN_EDX_ARG);
    bVar3 = F_00d169c0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),param_1);
    if (bVar3 != 0) {
      this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
      iVar2 = *(int *)(this + 0x128);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x18))))(this_00 GEN_EDX_ARG);
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 0x10 + (uVar4 & 0xff) * 4))) *
                       (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0)))))))))));
      uVar1 = *((ushort *)GEN_TOP((iVar2 + 0xe)));
      if (uVar1 != 0) {
        fVar5 = F_00d005d0(this_00 GEN_EDX_ARG,(uint)uVar1);
        (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar5 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0)))))))));
      }
      iVar2 = *(int *)(this + 0x128);
      *(undefined * PTR32 *)(this + 0x80) = (*(undefined * PTR32 *)(gen_frame + 0x0));
      if ((*((byte *)GEN_TOP((iVar2 + 0xc))) & 8) != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x0)) = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x5c)));
        *(undefined4 *)(this + 0x80) = *((undefined4 *)GEN_TOP((iVar2 + 0x5c)));
      }
      if ((((byte)this[0xb0] & 0x40) == 0) && (bVar3 = F_00d228c0(this GEN_EDX_ARG), bVar3 == 0)) {
        return 1;
      }
      bVar3 = F_00d00ed0(this_00 GEN_EDX_ARG,this,(uint)(byte)this[0x2d],*(undefined4 *)(this + 0x30),
                           ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0))))));
      return bVar3;
    }
    F_00d219b0(this GEN_EDX_ARG);
    F_00d22c70(this GEN_EDX_ARG,0);
  }
  return 1;
}

/* ref: FUN_00d16f70 */
GEN_LIB GEN_FRAME uint F_00d16f70(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xd16f70u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  
  (*(float *)(gen_frame + 0x0)) = param_4;
  (*(float *)(gen_frame + 0x4)) = param_3;
  (*(float *)(gen_frame + 0x8)) = param_2;
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x110f9d0);
  F_00c34430(param_1,&(*(float *)(gen_frame + 0x0)));
  return param_1;
}

/* ref: FUN_00d16fb0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d16fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd16fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *param_1 = *(undefined2 *)this;
  param_1[1] = *((undefined2 *)GEN_TOP(((int)this + 2)));
  *(undefined4 *)(param_1 + 4) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined4 *)(param_1 + 6) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  *(undefined4 *)(param_1 + 0xc) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *(undefined4 *)(param_1 + 0xe) = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  *(undefined4 *)(param_1 + 0x10) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  *(undefined4 *)(param_1 + 0x16) = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  *(undefined4 *)(param_1 + 0x14) = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  param_1[0x18] = *((undefined2 *)GEN_TOP(((int)this + 0x30)));
  param_1[0x19] = *((undefined2 *)GEN_TOP(((int)this + 0x32)));
  *(undefined1 *)(param_1 + 0x1a) = *((undefined1 *)GEN_TOP(((int)this + 0x34)));
  *(undefined4 *)(param_1 + 0x22) = *((undefined4 *)GEN_TOP(((int)this + 0x44)));
  *(undefined4 *)(param_1 + 0x24) = *((undefined4 *)GEN_TOP(((int)this + 0x48)));
  *(undefined4 *)(param_1 + 0x1c) = *((undefined4 *)GEN_TOP(((int)this + 0x38)));
  *(undefined4 *)(param_1 + 0x1e) = *((undefined4 *)GEN_TOP(((int)this + 0x3c)));
  *(undefined4 *)(param_1 + 0x20) = *((undefined4 *)GEN_TOP(((int)this + 0x40)));
  *(undefined4 *)(param_1 + 0x26) = *((undefined4 *)GEN_TOP(((int)this + 0x4c)));
  return 0;
}

/* ref: FUN_00d17040 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d17040(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd17040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  float10 fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  fVar1 = (float10)1;
  in_ecx[1] = 4;
  *(undefined1 *)(in_ecx + 3) = 0;
  in_ecx[2] = 0;
  in_ecx[4] = (undefined4)gen_fl2bits((float)fVar1);
  in_ecx[5] = (undefined4)gen_fl2bits((float)fVar1);
  in_ecx[6] = (undefined4)gen_fl2bits((float)fVar1);
  in_ecx[7] = (undefined4)gen_fl2bits((float)fVar1);
  *((undefined2 *)GEN_TOP(((int)in_ecx + 0xe))) = 0;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 0xd))) = 0;
  *in_ecx = 0x1040080;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x110f9d0);
  in_ecx[8] = *(undefined4 *)&REFG(undefined, 0x110f9d0);
  in_ecx[9] = uVar3;
  in_ecx[10] = uVar3;
  in_ecx[0xb] = uVar3;
  in_ecx[0xb] = (undefined4)gen_fl2bits((float)fVar1);
  in_ecx[0xc] = uVar3;
  in_ecx[0xd] = uVar3;
  in_ecx[0xe] = uVar3;
  in_ecx[0xf] = uVar3;
  in_ecx[0x1d] = 0;
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1132cf4);
  in_ecx[0x1e] = 0;
  in_ecx[0x10] = uVar2;
  in_ecx[0x1f] = 0;
  in_ecx[0x11] = uVar2;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094880)));
  in_ecx[0x12] = GEN_FLT_TO(in_ecx[0x12], REFG(float, 0x1094880));
  in_ecx[0x13] = GEN_FLT_TO(in_ecx[0x13], REFG(float, 0x10a0d00));
  in_ecx[0x14] = uVar2;
  in_ecx[0x15] = uVar3;
  in_ecx[0x1a] = uVar3;
  in_ecx[0x1c] = uVar3;
  in_ecx[0x16] = (undefined4)gen_fl2bits((float)fVar1);
  in_ecx[0x17] = (undefined4)gen_fl2bits((float)fVar1);
  in_ecx[0x18] = (undefined4)gen_fl2bits((float)fVar1);
  in_ecx[0x19] = (undefined4)gen_fl2bits((float)fVar1);
  in_ecx[0x1b] = (undefined4)gen_fl2bits((float)fVar1);
  return 0;
}

/* ref: FUN_00d170e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d170e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd170e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  F_00d0c080(param_1 GEN_EDX_FWD,param_2);
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x20)));
  *((uint *)GEN_TOP((param_2 + 0x20))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x24)));
  *((uint *)GEN_TOP((param_2 + 0x24))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x28)));
  *((uint *)GEN_TOP((param_2 + 0x28))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x2c)));
  *((uint *)GEN_TOP((param_2 + 0x2c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x30)));
  *((uint *)GEN_TOP((param_2 + 0x30))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x34)));
  *((uint *)GEN_TOP((param_2 + 0x34))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x38)));
  *((uint *)GEN_TOP((param_2 + 0x38))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x3c)));
  *((uint *)GEN_TOP((param_2 + 0x3c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x40)));
  *((uint *)GEN_TOP((param_2 + 0x40))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x44)));
  *((uint *)GEN_TOP((param_2 + 0x44))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x48)));
  *((uint *)GEN_TOP((param_2 + 0x48))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x4c)));
  *((uint *)GEN_TOP((param_2 + 0x4c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x50)));
  *((uint *)GEN_TOP((param_2 + 0x50))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x54)));
  *((uint *)GEN_TOP((param_2 + 0x54))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x58)));
  *((uint *)GEN_TOP((param_2 + 0x58))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x5c)));
  *((uint *)GEN_TOP((param_2 + 0x5c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x60)));
  *((uint *)GEN_TOP((param_2 + 0x60))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 100)));
  *((uint *)GEN_TOP((param_2 + 100))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x68)));
  *((uint *)GEN_TOP((param_2 + 0x68))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x6c)));
  *((uint *)GEN_TOP((param_2 + 0x6c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x70)));
  *((uint *)GEN_TOP((param_2 + 0x70))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((undefined4 *)GEN_TOP((param_2 + 0x74))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 0x78))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 0x7c))) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d172b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd172b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[33])REFP(0x1132fb4));
  F_00d23680(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00d172e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d172e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd172e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x113324c));
  if ((*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x6d))) & 1) != 0) {
    piVar1 = ((int *)GEN_TOP(F_00d2cd00()));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x20))));
    }
  }
  uVar2 = F_00d23680(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d17320(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd17320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00c51673((double)*((float *)GEN_TOP(param_2)));
  if (uVar2 == 0) {
    uVar2 = F_00c51673((double)*((float *)GEN_TOP((param_2 + 4))));
    if (uVar2 == 0) {
      uVar2 = F_00c51673((double)*((float *)GEN_TOP((param_2 + 8))));
      if (uVar2 == 0) {
        F_00d21390(param_1 GEN_EDX_ARG,param_2);
        iVar1 = *((int *)GEN_TOP((param_1 + 0x128)));
        *((undefined4 *)GEN_TOP((iVar1 + 0x20))) = *((undefined4 *)GEN_TOP(param_2));
        *((undefined4 *)GEN_TOP((iVar1 + 0x24))) = *((undefined4 *)GEN_TOP((param_2 + 4)));
        *((undefined4 *)GEN_TOP((iVar1 + 0x28))) = *((undefined4 *)GEN_TOP((param_2 + 8)));
        *((undefined4 *)GEN_TOP((iVar1 + 0x2c))) = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
        uVar2 = F_00cbc5c0(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,*((int *)GEN_TOP((param_1 + 0x128))) + 0x20);
      }
    }
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d173c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd173c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00c51673((double)*((float *)GEN_TOP(param_2)));
  if (uVar2 == 0) {
    uVar2 = F_00c51673((double)*((float *)GEN_TOP((param_2 + 4))));
    if (uVar2 == 0) {
      uVar2 = F_00c51673((double)*((float *)GEN_TOP((param_2 + 8))));
      if (uVar2 == 0) {
        F_00d213a0(param_1 GEN_EDX_ARG,param_2);
        iVar1 = *(int *)(param_1 + 0x128);
        *((undefined4 *)GEN_TOP((iVar1 + 0x20))) = *((undefined4 *)GEN_TOP(param_2));
        *((undefined4 *)GEN_TOP((iVar1 + 0x24))) = *((undefined4 *)GEN_TOP((param_2 + 4)));
        *((undefined4 *)GEN_TOP((iVar1 + 0x28))) = *((undefined4 *)GEN_TOP((param_2 + 8)));
        *((undefined4 *)GEN_TOP((iVar1 + 0x2c))) = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
        uVar2 = F_00cbc5c0(param_1 + 8 GEN_EDX_ARG,*(int *)(param_1 + 0x128) + 0x20);
      }
    }
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d17460(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd17460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c51673((double)*((float *)GEN_TOP(param_2)));
  if (uVar1 == 0) {
    uVar1 = F_00c51673((double)*((float *)GEN_TOP((param_2 + 4))));
    if (uVar1 == 0) {
      uVar1 = F_00c51673((double)*((float *)GEN_TOP((param_2 + 8))));
      if (uVar1 == 0) {
        F_00d213b0(param_1 GEN_EDX_ARG,param_2,(undefined1)param_3);
        F_00c34180(*((int *)GEN_TOP((param_1 + 0x128))) + 0x20 GEN_EDX_ARG,param_2);
        *((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x128))) + 0x2c))) = (float)(float10)1;
        uVar1 = F_00cbc5c0(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,*((int *)GEN_TOP((param_1 + 0x128))) + 0x20);
      }
    }
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d17500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd17500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  iVar1 = *(int *)(this + 0x128);
  puVar2 = ((undefined4 *)GEN_TOP(F_00c34320(param_1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),((undefined4 *)GEN_TOP((iVar1 + 0x20))))));
  *((undefined4 *)GEN_TOP((iVar1 + 0x20))) = *puVar2;
  *((undefined4 *)GEN_TOP((iVar1 + 0x24))) = puVar2[1];
  *((undefined4 *)GEN_TOP((iVar1 + 0x28))) = puVar2[2];
  *((undefined4 *)GEN_TOP((iVar1 + 0x2c))) = puVar2[3];
  iVar1 = *(int *)(this + 0x128);
  *((float *)GEN_TOP((iVar1 + 0x2c))) = (float)(float10)1;
  uVar3 = F_00cbc5c0(this + 8 GEN_EDX_ARG,iVar1 + 0x20);
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d17560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd17560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(this + 0x128);
  *param_1 = *((undefined4 *)GEN_TOP((iVar1 + 0x20)));
  param_1[1] = *((undefined4 *)GEN_TOP((iVar1 + 0x24)));
  uVar2 = *((undefined4 *)GEN_TOP((iVar1 + 0x2c)));
  param_1[2] = *((undefined4 *)GEN_TOP((iVar1 + 0x28)));
  param_1[3] = uVar2;
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d17590(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd17590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x80)));
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d175b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd175b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  float10 fVar1;
  
  fVar1 = F_00d22f40(this GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x50)))),
                       *((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) >> 2 & 1);
  *param_1 = ((float)GEN_TOF((fVar1 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x48))))));
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d175f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd175f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x80) {
    return 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x128)));
  puVar3 = param_2;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x80;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf19 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d17630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd17630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x128);
  *param_1 = *((undefined4 *)GEN_TOP((iVar1 + 0x30)));
  *param_2 = *((undefined4 *)GEN_TOP((iVar1 + 0x34)));
  *param_3 = *((undefined4 *)GEN_TOP((iVar1 + 0x58)));
  *param_4 = *((undefined4 *)GEN_TOP((iVar1 + 0x50)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d17660(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd17660u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x128)));
  *((float *)GEN_TOP((uVar1 + 0x30))) = param_2;
  *((float *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x128))) + 0x34))) = param_3;
  return uVar1;
}

/* ref: FUN_00d17680 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d17680(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd17680u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  int iVar1;
  uint uVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_8;
  
  uVar2 = param_4;
  fVar5 = (float10)0;
  local_8 = (float)fVar5;
  *((float *)GEN_TOP(param_4)) = (float)fVar5;
  *((undefined4 *)GEN_TOP((param_4 + 0xc))) = 0;
  *((float *)GEN_TOP((param_4 + 4))) = (float)fVar5;
  *((float *)GEN_TOP((param_4 + 8))) = (float)fVar5;
  *((float *)GEN_TOP(param_2)) = (float)fVar5;
  *param_3 = (float)fVar5;
  *((undefined4 *)GEN_TOP((param_4 + 4))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x128))) + 0x54)));
  *((byte *)GEN_TOP((param_4 + 0xc))) =
       *((byte *)GEN_TOP((param_4 + 0xc))) ^
       (*((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x128))) + 0xc))) >> 1 ^ *((byte *)GEN_TOP((param_4 + 0xc)))) & 8;
  if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x128))) + 0xc))) & 0x10) != 0) {
    return 0;
  }
  fVar4 = (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x128))) + 0x54)));
  fVar6 = (float10)1;
  bVar3 = GEN_ISNAN(fVar6) || GEN_ISNAN(fVar4);
  if ((bVar3 == (bVar3 || fVar6 == fVar4)) && ((*((byte *)GEN_TOP((param_1 + 0xb0))) & 8) == 0)) {
    *((undefined4 *)GEN_TOP((param_4 + 8))) = *((undefined4 *)GEN_TOP((param_1 + 0x98)));
    iVar1 = *((int *)GEN_TOP((param_1 + 0x128)));
    if ((*((byte *)GEN_TOP((iVar1 + 4))) & 0x80) == 0) {
      fVar6 = (float10)*((float *)GEN_TOP((param_1 + 0x60)));
      fVar4 = (float10)*((float *)GEN_TOP((param_1 + 0x68)));
      if (((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar6)) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar6)) || fVar5 == fVar6)) ||
         ((GEN_ISNAN(fVar4) || GEN_ISNAN(fVar5)) == ((GEN_ISNAN(fVar4) || GEN_ISNAN(fVar5)) || fVar4 == fVar5))) {
        fVar5 = ((float10)GEN_TOD(atan2(fVar6,-fVar4)));
        param_4 = (uint)gen_fl2bits((float)fVar5);
        *((uint *)GEN_TOP((param_1 + 0xa4))) = param_4;
      }
      else {
        param_4 = *((uint *)GEN_TOP((param_1 + 0xa4)));
      }
      fVar7 = (float10)*((float *)GEN_TOP((param_1 + 0x68)));
      fVar6 = (float10)*((float *)GEN_TOP((param_1 + 0x60)));
      fVar4 = (float10)*((float *)GEN_TOP((param_1 + 100)));
      fVar5 = (float10)0;
      fVar6 = (float10)((float)GEN_TOF(GEN_X87(SQRT((float10)(float)(fVar6 * fVar6 + fVar7 * fVar7)))));
      if (((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4)) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4)) || fVar5 == fVar4)) ||
         ((GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5)) == ((GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5)) || fVar6 == fVar5))) {
        fVar5 = ((float10)GEN_TOD(atan2(fVar4,fVar6)));
        local_8 = (float)fVar5;
        *((float *)GEN_TOP((param_1 + 0xa8))) = local_8;
      }
      else {
        local_8 = *((float *)GEN_TOP((param_1 + 0xa8)));
      }
      *((undefined4 *)GEN_TOP(uVar2)) = *((undefined4 *)GEN_TOP((param_1 + 0x94)));
    }
    else {
      *((float *)GEN_TOP((param_1 + 0x94))) = (float)fVar5;
      if ((*((byte *)GEN_TOP((iVar1 + 0xc))) & 2) == 0) {
        param_4 = *((uint *)GEN_TOP((iVar1 + 0x5c)));
      }
      else {
        fVar5 = F_00d234c0(param_1 GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0xa0)))));
        param_4 = (uint)gen_fl2bits((float)fVar5);
      }
    }
    fVar5 = (float10)*(double *)&REFG(undefined, 0x1092098);
    fVar6 = (float10)*(double *)&REFG(undefined, 0x1080228);
    *((float *)GEN_TOP(param_2)) = ((float)GEN_TOF(((((float10)GEN_TOD(gen_bits2f(param_4))) * fVar5) / fVar6)));
    *param_3 = ((float)GEN_TOF(((fVar5 * (float10)local_8) / fVar6)));
    return 0;
  }
  *((float *)GEN_TOP((param_1 + 0x80))) = (float)fVar6;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d17860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd17860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xb0, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf27 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d178e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd178e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  bVar1 = F_00d228c0(this GEN_EDX_FWD);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf29 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d17910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(HWND param_1, unsigned int gen_a1), GEN_P(HDC param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd17910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(HWND param_1 = (HWND)gen_a1;)
  GEN_PIN(HDC param_2 = (HDC)gen_a2;)
  GEN_FRAME_DECL_GS(0x9c, 4, 4);
  char cVar1;
  HGDIOBJ pvVar2;
  undefined * pHVar3;
  undefined * h;
  char * pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong color;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x94)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x98));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  pvVar2 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0xc)) = pvVar2;
  pvVar2 = gen_imp_SelectObject(param_2,pvVar2);
  (*(HGDIOBJ *)(gen_frame + 0x10)) = pvVar2;
  if (((byte)this[0xb0] & 1) == 0) {
    iVar8 = 1;
    color = 0x900000;
  }
  else {
    color = 0x80;
    iVar8 = 2;
  }
  pHVar3 = gen_imp_CreatePen(0,iVar8,color);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = pHVar3;
  pvVar2 = gen_imp_SelectObject(param_2,pHVar3);
  (*(HGDIOBJ *)(gen_frame + 0x14)) = pvVar2;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x64)));
  iVar7 = (*(tagRECT *)(gen_frame + 0x64)).right / 2 - (int)((double)*(float *)(this + 0x50) * *(double *)&REFG(double, 0x1132488));
  iVar6 = (*(tagRECT *)(gen_frame + 0x64)).bottom / 2 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x58));
  iVar8 = (int)((double)*((float *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x128) + 0x34))) * *(double *)&REFG(undefined, 0x10947f0));
  gen_imp_Ellipse(param_2,iVar7 - iVar8,iVar6 - iVar8,iVar8 + iVar7,iVar8 + iVar6);
  iVar8 = (int)((double)*((float *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x128) + 0x30))) * *(double *)&REFG(undefined, 0x10947f0));
  gen_imp_Ellipse(param_2,iVar7 - iVar8,iVar6 - iVar8,iVar8 + iVar7,iVar8 + iVar6);
  if (((byte)(*(undefined * PTR32 *)(gen_frame + 0x24))[0xb0] & 1) != 0) {
    (*(int *)(gen_frame + 0x18)) = (*(tagRECT *)(gen_frame + 0x64)).right / 2;
    (*(HGDIOBJ *)(gen_frame + 0x1c)) = (HGDIOBJ)((*(tagRECT *)(gen_frame + 0x64)).bottom / 2);
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x14)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x20)));
    pHVar3 = gen_imp_CreatePen(0,1,0x900000);
    (*(undefined * PTR32 *)(gen_frame + 0x20)) = pHVar3;
    pvVar2 = gen_imp_SelectObject(param_2,pHVar3);
    (*(HGDIOBJ *)(gen_frame + 0x14)) = pvVar2;
    gen_imp_MoveToEx(param_2,(*(int *)(gen_frame + 0x18)) -
                     (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x60)),
             (int)(*(HGDIOBJ *)(gen_frame + 0x1c)) - (int)((double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x68) * *(double *)&REFG(double, 0x1132488)),
             (LPPOINT)0x0);
    gen_imp_LineTo(param_2,(*(int *)(gen_frame + 0x18)),(int)(*(HGDIOBJ *)(gen_frame + 0x1c)));
  }
  F_00c48350(((undefined *)(gen_frame + 0x28)),0,0x3c);
  F_00c49908(((CHAR *)(((char *)((undefined *)(gen_frame + 0x28)) + 28))),0x20,&REFG(undefined, 0x1133050));
  (*(LONG *)((char *)((undefined *)(gen_frame + 0x28)))) = 0xd;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x28)) + 23))) = 0x80;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x28)) + 27))) = '\x01';
  h = gen_imp_CreateFontIndirectA(((undefined *)(gen_frame + 0x28)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = h;
  pvVar2 = gen_imp_SelectObject(param_2,h);
  (*(HGDIOBJ *)(gen_frame + 0x1c)) = pvVar2;
  if (((byte)(*(undefined * PTR32 *)(gen_frame + 0x24))[0xb0] & 1) == 0) {
    F_00c472af(((char *)(gen_frame + 0x74)),0x20,&REFG(undefined, 0x113306c),&REFG(undefined, 0x1133064));
  }
  else {
    F_00c472af(((char *)(gen_frame + 0x74)),0x20,&REFG(undefined, 0x113305c),
               (int)(ulonglong)
                    gen_d2bits((double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x80) * *(double *)&REFG(undefined, 0x1088118)),
               (int)((ulonglong)
                     gen_d2bits((double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x80) * *(double *)&REFG(undefined, 0x1088118)) >>
                    0x20));
  }
  pcVar4 = ((char *)(gen_frame + 0x74));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  (*(int *)(gen_frame + 0x18)) = (int)pcVar4 - (int)(((char *)(gen_frame + 0x74)) + 1);
  gen_imp_GetTextExtentPoint32A(param_2,((char *)(gen_frame + 0x74)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x74)) + 1),&(*(undefined8 *)(gen_frame + 0x0)));
  gen_imp_TextOutA(param_2,iVar7 - (*(LONG *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) / 2,iVar6 - (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) / 2,((char *)(gen_frame + 0x74)),(*(int *)(gen_frame + 0x18)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x1c)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x14)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x10)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x8)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x20)));
  uVar5 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0xc)));
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d17c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd17c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined * _File;
  byte bVar1;
  int iVar2;
  volatile double dVar3;
  
  _File = param_1;
  bVar1 = F_00d21f00((undefined *)this GEN_EDX_FWD,param_1);
  if (bVar1 == 0) {
    return 0;
  }
  iVar2 = *(int *)(this + 0x128);
  dVar3 = (double)*((float *)GEN_TOP((iVar2 + 0x28)));
  F_00c49386(param_1,((char *)REFP(0x1133070)),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar2 + 0x20)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar2 + 0x20)))) >> 0x20),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar2 + 0x24)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar2 + 0x24)))) >> 0x20));
  F_00c49386(param_1,((char *)REFP(0x1133088)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x30))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x30))))));
  F_00c49386(param_1,((char *)REFP(0x1133098)),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x34)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x34)))) >> 0x20));
  param_1 = ((undefined *)GEN_TOP(0x0));
  iVar2 = 0x38;
  do {
    F_00c49386(_File,((char *)REFP(0x11330a8)),param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar2 + *(int *)(this + 0x128))))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar2 + *(int *)(this + 0x128))))) >> 0x20
                  ));
    param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1)));
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x40);
  F_00c49386(_File,((char *)REFP(0x11330bc)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))))));
  F_00c49386(_File,((char *)REFP(0x11330d0)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44))))));
  F_00c49386(_File,((char *)REFP(0x11330e0)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x48))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x48))))));
  F_00c49386(_File,((char *)REFP(0x11330ec)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x4c))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x4c))))));
  F_00c49386(_File,((char *)REFP(0x11330fc)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x50))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x50))))));
  F_00c49386(_File,((char *)REFP(0x1133110)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x54))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x54))))));
  F_00c49386(_File,((char *)REFP(0x1133120)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x58))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x58))))));
  F_00c49386(_File,((char *)REFP(0x1133134)),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x5c)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x5c)))) >> 0x20));
  F_00c49386(_File,((char *)REFP(0x1133144)),*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x6d))) >> 1 & 1);
  F_00c49386(_File,((char *)REFP(0x113315c)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf31 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d17dc0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd17dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = ((char *)REFP(0x1133174));
  pbVar5 = ((byte *)GEN_TOP(param_2));
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d17df1: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d17df6;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d17df1;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d17df6: ;
  if (iVar3 == 0) {
    pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
    if (pcVar2 != ((char *)GEN_TOP(0x0))) {
      dVar7 = F_00c4acaa(pcVar2);
      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x20))) = (float)dVar7;
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24))) = (float)dVar7;
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28))) = (float)dVar7;
          return 1;
        }
      }
    }
  }
  else {
    pcVar2 = ((char *)REFP(0x1133180));
    pbVar5 = ((byte *)GEN_TOP(param_2));
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d17ea5: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d17eaa;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d17ea5;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d17eaa: ;
    if (iVar3 == 0) {
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x30))) = (float)dVar7;
        return 1;
      }
    }
    else {
      pcVar2 = ((char *)REFP(0x113318c));
      pbVar5 = ((byte *)GEN_TOP(param_2));
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00d17f07: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d17f0c;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00d17f07;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d17f0c: ;
      if (iVar3 == 0) {
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x34))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = ((char *)REFP(0x1133198));
        pbVar5 = ((byte *)GEN_TOP(param_2));
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d17f70: ;
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d17f75;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d17f70;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d17f75: ;
        if (iVar3 == 0) {
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
            if (pcVar2 != ((char *)GEN_TOP(0x0))) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x38 + uVar4 * 4))) = (float)dVar7;
              return 1;
            }
          }
        }
        else {
          pcVar2 = ((char *)REFP(0x11331a0));
          pbVar5 = ((byte *)GEN_TOP(param_2));
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d17ff0: ;
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d17ff5;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d17ff0;
            pcVar2 = pcVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d17ff5: ;
          if (iVar3 == 0) {
            pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
            if (pcVar2 != ((char *)GEN_TOP(0x0))) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x40))) = (float)dVar7;
              return 1;
            }
          }
          else {
            pcVar2 = ((char *)REFP(0x11331ac));
            pbVar5 = ((byte *)GEN_TOP(param_2));
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d18052: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d18057;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d18052;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d18057: ;
            if (iVar3 == 0) {
              pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
              if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                dVar7 = F_00c4acaa(pcVar2);
                *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x44))) = (float)dVar7;
                return 1;
              }
            }
            else {
              pcVar2 = ((char *)REFP(0x11331b4));
              pbVar5 = ((byte *)GEN_TOP(param_2));
              do {
                bVar1 = *pcVar2;
                bVar6 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_00d180b4: ;
                  iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                  goto LAB_00d180b9;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar2[1];
                bVar6 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_00d180b4;
                pcVar2 = pcVar2 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00d180b9: ;
              if (iVar3 == 0) {
                pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                  dVar7 = F_00c4acaa(pcVar2);
                  *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x48))) = (float)dVar7;
                  return 1;
                }
              }
              else {
                pcVar2 = ((char *)REFP(0x11331bc));
                pbVar5 = ((byte *)GEN_TOP(param_2));
                do {
                  bVar1 = *pcVar2;
                  bVar6 = bVar1 < *pbVar5;
                  if (bVar1 != *pbVar5) {
LAB_00d18116: ;
                    iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                    goto LAB_00d1811b;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pcVar2[1];
                  bVar6 = bVar1 < pbVar5[1];
                  if (bVar1 != pbVar5[1]) goto LAB_00d18116;
                  pcVar2 = pcVar2 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_00d1811b: ;
                if (iVar3 == 0) {
                  pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                  if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                    dVar7 = F_00c4acaa(pcVar2);
                    *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x4c))) = (float)dVar7;
                    return 1;
                  }
                }
                else {
                  pcVar2 = ((char *)REFP(0x11331c8));
                  pbVar5 = ((byte *)GEN_TOP(param_2));
                  do {
                    bVar1 = *pcVar2;
                    bVar6 = bVar1 < *pbVar5;
                    if (bVar1 != *pbVar5) {
LAB_00d18178: ;
                      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                      goto LAB_00d1817d;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pcVar2[1];
                    bVar6 = bVar1 < pbVar5[1];
                    if (bVar1 != pbVar5[1]) goto LAB_00d18178;
                    pcVar2 = pcVar2 + 2;
                    pbVar5 = pbVar5 + 2;
                  } while (bVar1 != 0);
                  iVar3 = 0;
LAB_00d1817d: ;
                  if (iVar3 == 0) {
                    pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                    if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                      dVar7 = F_00c4acaa(pcVar2);
                      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x50))) = (float)dVar7;
                      return 1;
                    }
                  }
                  else {
                    pcVar2 = ((char *)REFP(0x11331d4));
                    pbVar5 = ((byte *)GEN_TOP(param_2));
                    do {
                      bVar1 = *pcVar2;
                      bVar6 = bVar1 < *pbVar5;
                      if (bVar1 != *pbVar5) {
LAB_00d181e0: ;
                        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                        goto LAB_00d181e5;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pcVar2[1];
                      bVar6 = bVar1 < pbVar5[1];
                      if (bVar1 != pbVar5[1]) goto LAB_00d181e0;
                      pcVar2 = pcVar2 + 2;
                      pbVar5 = pbVar5 + 2;
                    } while (bVar1 != 0);
                    iVar3 = 0;
LAB_00d181e5: ;
                    if (iVar3 == 0) {
                      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                        dVar7 = F_00c4acaa(pcVar2);
                        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x54))) = (float)dVar7;
                        return 1;
                      }
                    }
                    else {
                      pcVar2 = ((char *)REFP(0x11331e0));
                      pbVar5 = ((byte *)GEN_TOP(param_2));
                      do {
                        bVar1 = *pcVar2;
                        bVar6 = bVar1 < *pbVar5;
                        if (bVar1 != *pbVar5) {
LAB_00d18242: ;
                          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                          goto LAB_00d18247;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pcVar2[1];
                        bVar6 = bVar1 < pbVar5[1];
                        if (bVar1 != pbVar5[1]) goto LAB_00d18242;
                        pcVar2 = pcVar2 + 2;
                        pbVar5 = pbVar5 + 2;
                      } while (bVar1 != 0);
                      iVar3 = 0;
LAB_00d18247: ;
                      if (iVar3 == 0) {
                        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                          dVar7 = F_00c4acaa(pcVar2);
                          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x58))) = (float)dVar7;
                          return 1;
                        }
                      }
                      else {
                        pcVar2 = ((char *)REFP(0x11331ec));
                        pbVar5 = ((byte *)GEN_TOP(param_2));
                        do {
                          bVar1 = *pcVar2;
                          bVar6 = bVar1 < *pbVar5;
                          if (bVar1 != *pbVar5) {
LAB_00d182a4: ;
                            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                            goto LAB_00d182a9;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pcVar2[1];
                          bVar6 = bVar1 < pbVar5[1];
                          if (bVar1 != pbVar5[1]) goto LAB_00d182a4;
                          pcVar2 = pcVar2 + 2;
                          pbVar5 = pbVar5 + 2;
                        } while (bVar1 != 0);
                        iVar3 = 0;
LAB_00d182a9: ;
                        if (iVar3 == 0) {
                          pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
                          if (pcVar2 != ((char *)GEN_TOP(0x0))) {
                            dVar7 = F_00c4acaa(pcVar2);
                            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x5c))) = (float)dVar7;
                            return 1;
                          }
                        }
                        else {
                          pcVar2 = ((char *)REFP(0x11331f8));
                          pbVar5 = ((byte *)GEN_TOP(param_2));
                          do {
                            bVar1 = *pcVar2;
                            bVar6 = bVar1 < *pbVar5;
                            if (bVar1 != *pbVar5) {
LAB_00d18306: ;
                              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                              goto LAB_00d1830b;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pcVar2[1];
                            bVar6 = bVar1 < pbVar5[1];
                            if (bVar1 != pbVar5[1]) goto LAB_00d18306;
                            pcVar2 = pcVar2 + 2;
                            pbVar5 = pbVar5 + 2;
                          } while (bVar1 != 0);
                          iVar3 = 0;
LAB_00d1830b: ;
                          if (iVar3 != 0) {
                            bVar1 = F_00d22040(param_1 GEN_EDX_ARG,param_2);
                            return bVar1;
                          }
                          uVar4 = F_00d00d00(0,0);
                          if (uVar4 != 0) {
                            uVar4 = F_00c4c74c(uVar4);
                            pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x6d)));
                            *pbVar5 = *pbVar5 ^ ((char)uVar4 * '\x02' ^
                                                *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x6d)))) & 2;
                            return 1;
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
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00d18350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd18350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x38, 8, 4);
  int iVar1;
  double dVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  float fVar6;
  int * piVar7;
  float10 fVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x30)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34));
  piVar7 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  (*(char *)(gen_frame + 0xb)) = '\0';
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar7;
  bVar3 = F_00d21830((undefined *)this GEN_EDX_FWD);
  if (bVar3 == 0) {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x90))))(piVar7 GEN_EDX_ARG)));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xfc))))(piVar4 GEN_EDX_ARG,*(undefined4 *)(this + 0x24));
    if ((char)uVar5 == '\0') goto LAB_00d187da;
    F_00d2dd80(&(*(float *)(gen_frame + 0x24)),*(undefined4 *)(this + 0x24));
    if (((byte)this[0xb0] & 0x80) == 0) {
      bVar3 = F_00cbe970(&(*(float *)(gen_frame + 0x24)) GEN_EDX_ARG);
    }
    else {
      bVar3 = F_00cbe940(&(*(float *)(gen_frame + 0x24)) GEN_EDX_ARG);
    }
    if (bVar3 != 0) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x3c))))
                        (piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),*(undefined4 *)(this + 0x24),*(undefined4 *)(this + 0x28),
                         *(int *)(this + 0x128) + 0x20,*(undefined4 *)(this + 0x130),
                         *(undefined4 *)(this + 0x134),(uint)(byte)this[0x13c]);
      F_00cbbdc0(this + 8 GEN_EDX_ARG,uVar5);
      F_00cbbdb0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      bVar3 = F_00cbc040(this + 8 GEN_EDX_ARG);
      if (bVar3 != 0) {
        iVar1 = *(int *)(this + 0x128);
        (*(char *)(gen_frame + 0xb)) = '\x01';
        if (((*((byte *)GEN_TOP((iVar1 + 4))) & 0x80) != 0) && ((*((byte *)GEN_TOP((iVar1 + 0xc))) & 2) != 0)) {
          fVar8 = F_00d23370(this GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((iVar1 + 0x5c)))));
          *(float *)(this + 0xa0) = (float)fVar8;
        }
        F_00d22bf0(this GEN_EDX_ARG,0x403);
        F_00cbe3b0(&(*(float *)(gen_frame + 0x24)) GEN_EDX_ARG);
        goto LAB_00d184a0;
      }
      if (((byte)this[0xb0] & 0x80) == 0) {
        F_00cbe3b0(&(*(float *)(gen_frame + 0x24)) GEN_EDX_ARG);
        return 0;
      }
    }
    F_00cbe3b0(&(*(float *)(gen_frame + 0x24)) GEN_EDX_ARG);
  }
  else {
LAB_00d184a0: ;
    bVar3 = F_00cbc040(this + 8 GEN_EDX_ARG);
    if (bVar3 == 0) {
LAB_00d187da: ;
      *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) | 4;
      return 0;
    }
    uVar5 = F_00d00230(piVar7 GEN_EDX_ARG);
    if (uVar5 == 1) {
      fVar8 = F_00d22df0(((undefined1 *)(gen_frame + 0x10)),this + 0x60,*(float *)(this + 0x80),*(float *)(this + 0x94));
      (*(float *)(gen_frame + 0xc)) = (float)fVar8;
      F_00cbc920(this + 8 GEN_EDX_ARG,(float)fVar8);
      F_00cbc4e0(this + 8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
    }
    else {
      fVar8 = (float10)0;
      (*(float *)(gen_frame + 0x20)) = (float)fVar8;
      (*(float *)(gen_frame + 0x24)) = (float)fVar8;
      (*(float *)(gen_frame + 0x28)) = (float)fVar8;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      F_00d17680(this GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0xc)),(uint)&(*(float *)(gen_frame + 0x20)));
      F_00cbc9e0(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x20)));
      uVar5 = F_00d2e5a0();
      if ((uVar5 == 3) || (uVar5 == 5)) {
        fVar8 = F_00d2edb0(*(float *)(this + 0x80),0,2);
      }
      else {
        fVar8 = (float10)*(float *)(this + 0x80);
      }
      iVar1 = *(int *)(this + 0x128);
      (*(float *)(gen_frame + 0xc)) = (float)fVar8;
      if ((*((byte *)GEN_TOP((iVar1 + 0x6c))) & 1) != 0) {
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x98))))(piVar7 GEN_EDX_ARG)));
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x4c))))(piVar4);
        (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((extraout_ST0 * (float10)*(double *)&REFG(undefined, 0x109cac8) +
                           (float10)*(double *)&REFG(undefined, 0x10c6318)) * (float10)(*(float *)(gen_frame + 0xc)))));
      }
      if ((*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x6c))) & 2) != 0) {
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x98))))(piVar7 GEN_EDX_ARG)));
        fVar6 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xd0))))(piVar7 GEN_EDX_ARG));
        iVar1 = *piVar7;
        (*(float *)(gen_frame + 0x0)) = fVar6;
        extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((iVar1 + 0x50))))(piVar7);
        fVar8 = F_00d2bc80((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x0))) GEN_EDX_ARG,(float)extraout_ST0_00);
        (*(float *)(gen_frame + 0xc)) = (float)(fVar8 * (float10)(*(float *)(gen_frame + 0xc)));
        piVar7 = (*(int * PTR32 *)(gen_frame + 0x4));
      }
      F_00cbc920(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0xc)));
    }
    if (((byte)this[0xb0] & 2) == 0) {
      fVar8 = F_00d22f40(this GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x50)))),
                           *((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) >> 2 & 1);
      piVar4 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar8 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x48)))))))));
      (*(int * PTR32 *)(gen_frame + 0x4)) = piVar4;
      F_00cbc980(this + 8 GEN_EDX_ARG,((float)gen_bits2f((unsigned int)(uintptr_t)(piVar4))));
    }
    bVar3 = *((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x6c)));
    (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((((float10)*(float *)(this + 0x9c) * (float10)*(float *)(this + 0x8c)) *
                      (float10)*(float *)(this + 0xc4))));
    if ((bVar3 & 1) != 0) {
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x98))))(piVar7 GEN_EDX_ARG)));
      extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x4c))))(piVar4);
      (*(float *)(gen_frame + 0xc)) = (float)(extraout_ST0_01 * (float10)(*(float *)(gen_frame + 0xc)));
    }
    if ((*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x6c))) & 2) != 0) {
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x98))))(piVar7 GEN_EDX_ARG)));
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xd0))))(piVar7 GEN_EDX_ARG)));
      iVar1 = *piVar7;
      (*(int * PTR32 *)(gen_frame + 0x4)) = piVar4;
      extraout_ST0_02 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((iVar1 + 0x50))))(piVar7);
      fVar8 = F_00d2bc60((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,(float)extraout_ST0_02);
      (*(float *)(gen_frame + 0xc)) = (float)(fVar8 * (float10)(*(float *)(gen_frame + 0xc)));
    }
    F_00cbc710(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0xc)));
    if ((*(char *)(gen_frame + 0xb)) != '\0') {
      dVar2 = GEN_X87(*(double *)&REFG(undefined, 0x1097260) * 0.0);
      fVar6 = *(float *)(this + 0xbc);
      (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP((int)dVar2));
      F_00cbddc0(this + 8 GEN_EDX_ARG,fVar6,(uint)&(*(int * PTR32 *)(gen_frame + 0x4)));
      fVar6 = *(float *)(this + 0xc0);
      (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP((int)dVar2));
      F_00cbdeb0(this + 8 GEN_EDX_ARG,fVar6,(uint)&(*(int * PTR32 *)(gen_frame + 0x4)));
      F_00cbc980(this + 8 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x48)))));
      F_00cbcd10(this + 8 GEN_EDX_ARG,*(float *)(this + 200),*(undefined4 *)(this + 0xcc));
      F_00cbce00(this + 8 GEN_EDX_ARG,(uint)(byte)this[0xe0]);
      if ((*(uint *)(this + 0xb0) & 0x400) != 0) {
        F_00cbcbc0(this + 8 GEN_EDX_ARG);
      }
      if ((*(uint *)(this + 0xb0) & 0x100) == 0) {
        F_00cbd990(this + 8 GEN_EDX_ARG,*(undefined4 *)(this + 0xdc),*(undefined4 *)(this + 0xb8));
      }
      else {
        F_00cbdfe0(this + 8 GEN_EDX_ARG,*(undefined4 *)(this + 0xd4),*(float *)(this + 0xbc),
                     *(float *)(this + 0xd0),gen_bits2f((unsigned int)(*(undefined4 *)(this + 0xdc))),
                     *(undefined4 *)(this + 0xb8));
      }
      *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) & 0xfffffeff;
      *(undefined4 *)(this + 0xdc) = 0;
      return 1;
    }
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d18800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd18800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00d22da0(this GEN_EDX_FWD,param_1,0x80)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x20);
  }
  F_00d19410(*(undefined4 *)(this + 0x128) GEN_EDX_ARG,(uint)puVar1);
  return (uint)(puVar1 + 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf28 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d18860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd18860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  uint uVar1;
  ulonglong uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  uVar1 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x40;
    uVar2 = F_00427d90();
    (*(ulonglong *)(gen_frame + 0x8)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x3c)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x34)));
    (*(undefined4 *)(gen_frame + 0x38)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x30)));
    F_00d19390(&(*(undefined2 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)));
    uVar1 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)),0x40);
  }
  return uVar1;
}

/* ref: FUN_00d188f0 */
GEN_LIB GEN_NOFRAME uint F_00d188f0(GEN_P(float * in_eax, unsigned int gen_a0), GEN_P(float * in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xd188f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_eax = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[3];
  fVar2 = in_ecx[1] * in_ecx[1];
  fVar3 = in_ecx[2] * in_ecx[2];
  *in_eax = SQRT((fVar3 + *in_ecx * *in_ecx) + fVar2);
  in_eax[1] = (fVar3 + fVar2) + fVar2;
  in_eax[2] = (fVar3 + fVar3) + fVar2;
  in_eax[3] = (fVar3 + fVar1 * fVar1) + fVar2;
  return (uint)in_eax;
}

/* ref: FUN_00d18930 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d18930(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd18930u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_FRAME_DECL(0xb0, 0);
  int * this;
  float10 fVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined * pPVar5;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  F_00d22580(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  *(uint *)(param_1 + 0xb0) =
       *(uint *)(param_1 + 0xb0) ^ ((uint)param_5 << 4 ^ *(uint *)(param_1 + 0xb0)) & 0x10;
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[33])REFP(0x113324c));
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  param_1[0x13c] = (undefined1)0x1;
  if (param_5 == 0) {
    *(undefined4 * PTR32 *)(param_1 + 0x128) = param_2;
  }
  else {
    *(undefined * PTR32 *)(param_1 + 0x128) = param_1 + 0x140;
    puVar4 = param_2;
    pPVar5 = param_1 + 0x140;
    for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 - 1) {
      *(undefined4 *)pPVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      pPVar5 = pPVar5 + 4;
    }
    if (*((char *)GEN_TOP((*(int *)(param_1 + 0x128) + 3))) == '\0') {
      fVar1 = (float10)0;
      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x60))) = (float)fVar1;
      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 100))) = (float)fVar1;
      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x68))) = (float)fVar1;
      *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x6c))) = 0;
      *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x6d))) =
           *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x6d))) & 0xfe;
    }
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x128);
  if ((*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x6d))) & 2) == 0) {
    F_00d228c0(param_1 GEN_EDX_ARG);
  }
  *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x58))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x58))) *
              (float10)*(double *)&REFG(undefined, 0x109cac8))));
  F_00d20fe0(param_1 GEN_EDX_ARG,~(*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 4))) >> 5) & 1);
  *(undefined4 *)(param_1 + 0x138) = 0;
  this = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xe4))))(this GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x68))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  F_00d18860(param_1 GEN_EDX_ARG,0x401);
  return (uint)param_1;
}

/* ref: FUN_00d18ac0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d18ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd18ac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xb0, 0);
  int iVar1;
  int * this_00;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  F_00d22720(this GEN_EDX_FWD,param_1,param_2);
  *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) | 0x10;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x113324c));
  *((undefined4 *)GEN_TOP(((int)this + 0x130))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x134))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x13c))) = 1;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x128))) = ((undefined *)GEN_TOP(((int)this + 0x140)));
  F_006095e0(((undefined *)GEN_TOP(((int)this + 0x140))) GEN_EDX_ARG);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x128)));
  *((int *)GEN_TOP(((int)this + 0x18))) = iVar1;
  *((float *)GEN_TOP((iVar1 + 0x58))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar1 + 0x58))) * (float10)*(double *)&REFG(undefined, 0x109cac8))));
  F_00d20fe0(this GEN_EDX_ARG,~(*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 4))) >> 5) & 1);
  *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 0;
  this_00 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  F_00d18860(this GEN_EDX_ARG,0x401);
  return (uint)this;
}

/* ref: FUN_00d18bc0 */
GEN_LIB GEN_NOFRAME float F_00d18bc0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd18bc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x40, 0);
  float * pfVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pfVar1 = ((float *)GEN_TOP(F_00c34320(param_2 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),param_1 + 0x20)));
  (*(float *)(gen_frame + 0x1c)) = *pfVar1;
  (*(float *)(gen_frame + 0x20)) = pfVar1[1];
  (*(float *)(gen_frame + 0x24)) = pfVar1[2];
  (*(float *)(gen_frame + 0x28)) = pfVar1[3];
  if ((*((byte *)GEN_TOP((param_1 + 4))) & 4) == 0) {
    (*(float *)(gen_frame + 0x2c)) = pfVar1[1];
    F_00d218f0(param_3[1],&(*(float *)(gen_frame + 0x2c)),param_1,param_1 + 0x38);
    (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x2c));
  }
  fVar4 = (*(float *)(gen_frame + 0x1c)) - *param_3;
  fVar5 = (*(float *)(gen_frame + 0x20)) - param_3[1];
  fVar6 = (*(float *)(gen_frame + 0x24)) - param_3[2];
  fVar7 = (*(float *)(gen_frame + 0x28)) - param_3[3];
  (*(float *)(gen_frame + 0x0)) = fVar4;
  (*(float *)(gen_frame + 0x4)) = fVar5;
  (*(float *)(gen_frame + 0x8)) = fVar6;
  (*(float *)(gen_frame + 0xc)) = fVar7;
  (*(float *)(gen_frame + 0x1c)) = fVar4;
  (*(float *)(gen_frame + 0x20)) = fVar5;
  (*(float *)(gen_frame + 0x24)) = fVar6;
  (*(float *)(gen_frame + 0x28)) = fVar7;
  fVar5 = fVar5 * fVar5;
  fVar6 = fVar6 * fVar6;
  fVar4 = GEN_X87(SQRT((fVar6 + fVar4 * fVar4) + fVar5));
  (*(float *)(gen_frame + 0x0)) = fVar4;
  (*(float *)(gen_frame + 0x4)) = (fVar6 + fVar5) + fVar5;
  (*(float *)(gen_frame + 0x8)) = (fVar6 + fVar6) + fVar5;
  (*(float *)(gen_frame + 0xc)) = (fVar6 + fVar7 * fVar7) + fVar5;
  fVar2 = (float10)fVar4;
  fVar3 = (float10)*((float *)GEN_TOP((param_1 + 0x34)));
  if (!(fVar2 <= fVar3) != ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
    fVar5 = ((float)GEN_TOF((fVar2 - (float10)*((float *)GEN_TOP((param_1 + 0x34))))));
    (*(float *)(gen_frame + 0x2c)) = fVar5;
    return fVar5;
  }
  return (float)(float10)0;
}

/* ref: FUN_00d18d00 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d18d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd18d00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL(0xd4, 12);
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  int * piVar7;
  uint uVar8;
  float * pfVar9;
  bool bVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  (*(uint *)(gen_frame + 0xc0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc4);
  piVar7 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x98))))(piVar7 GEN_EDX_FWD)));
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x5c))))(piVar7 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x44)));
  if ((char)uVar8 != '\0') {
    iVar1 = *((int *)GEN_TOP(((int)this + 0x128)));
    (*(undefined4 *)(gen_frame + 0xa0)) = *((undefined4 *)GEN_TOP((iVar1 + 0x20)));
    (*(float *)(gen_frame + 0xa4)) = *((float *)GEN_TOP((iVar1 + 0x24)));
    (*(undefined4 *)(gen_frame + 0xa8)) = *((undefined4 *)GEN_TOP((iVar1 + 0x28)));
    (*(undefined4 *)(gen_frame + 0xac)) = *((undefined4 *)GEN_TOP((iVar1 + 0x2c)));
    if ((*((byte *)GEN_TOP((iVar1 + 4))) & 4) == 0) {
      iVar2 = *piVar7;
      (*(float *)(gen_frame + 0x0)) = *((float *)GEN_TOP((iVar1 + 0x24)));
      ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x30))))(piVar7,&(*(float *)(gen_frame + 0x84)));
      bVar6 = F_00d218f0((*(float *)(gen_frame + 0x88)),&(*(float *)(gen_frame + 0x0)),*((int *)GEN_TOP(((int)this + 0x128))),
                           *((int *)GEN_TOP(((int)this + 0x128))) + 0x38);
      if (bVar6 != 1) {
        return 0;
      }
      (*(float *)(gen_frame + 0xa4)) = (*(float *)(gen_frame + 0x0));
    }
    pfVar9 = ((float *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x84)),&(*(undefined4 *)(gen_frame + 0xa0)))));
    fVar15 = *pfVar9;
    (*(float *)(gen_frame + 0xb0)) = fVar15;
    fVar3 = pfVar9[1];
    (*(float *)(gen_frame + 0xb4)) = fVar3;
    fVar4 = pfVar9[2];
    (*(float *)(gen_frame + 0xb8)) = fVar4;
    fVar5 = pfVar9[3];
    (*(float *)(gen_frame + 0xbc)) = fVar5;
    *((float *)GEN_TOP(((int)this + 0x50))) = fVar15;
    *((float *)GEN_TOP(((int)this + 0x54))) = fVar3;
    *((float *)GEN_TOP(((int)this + 0x58))) = fVar4;
    *((float *)GEN_TOP(((int)this + 0x5c))) = fVar5;
    *((float *)GEN_TOP(((int)this + 0x60))) = fVar15;
    fVar13 = fVar3 * fVar3;
    fVar14 = fVar4 * fVar4;
    *((float *)GEN_TOP(((int)this + 100))) = fVar3;
    *((float *)GEN_TOP(((int)this + 0x68))) = fVar4;
    *((float *)GEN_TOP(((int)this + 0x6c))) = fVar5;
    iVar1 = *((int *)GEN_TOP(((int)this + 0x128)));
    fVar15 = GEN_X87(SQRT((fVar14 + fVar15 * fVar15) + fVar13));
    (*(float *)(gen_frame + 0x84)) = fVar15;
    (*(float *)(gen_frame + 0x88)) = (fVar14 + fVar13) + fVar13;
    (*(float *)(gen_frame + 0x8c)) = (fVar14 + fVar14) + fVar13;
    (*(float *)(gen_frame + 0x90)) = (fVar14 + fVar5 * fVar5) + fVar13;
    fVar11 = (float10)fVar15;
    fVar12 = (float10)*((float *)GEN_TOP((iVar1 + 0x34)));
    if (!(fVar11 <= fVar12) == ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar11)) || fVar12 == fVar11)) {
      fVar12 = (float10)*((float *)GEN_TOP((iVar1 + 0x30)));
      if (!(fVar11 <= fVar12) || ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar11)) || fVar12 == fVar11)) {
        fVar15 = ((float)GEN_TOF((fVar11 - (float10)*((float *)GEN_TOP((iVar1 + 0x30))))));
        (*(float *)(gen_frame + 0x0)) = fVar15;
        *param_1 = fVar15;
        fVar15 = ((float)GEN_TOF(((float10)fVar15 /
                        ((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x34))) -
                        (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x30)))))));
        (*(float *)(gen_frame + 0x0)) = fVar15;
        fVar15 = (float)((float10)1 - (float10)fVar15);
        (*(float *)(gen_frame + 0x0)) = fVar15;
        *param_1 = fVar15;
        fVar12 = GEN_X87((float10)fVar15 * (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x40))));
      }
      else {
        fVar15 = ((float)GEN_TOF((fVar11 / (float10)*((float *)GEN_TOP((iVar1 + 0x30))))));
        (*(float *)(gen_frame + 0x0)) = fVar15;
        fVar15 = (float)((float10)1 - (float10)fVar15);
        (*(float *)(gen_frame + 0x0)) = fVar15;
        *param_1 = fVar15;
        fVar12 = GEN_X87((float10)fVar15 *
                 ((float10)1 - (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x40)))) +
                 (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x40))));
      }
      *param_1 = (float)fVar12;
      iVar1 = *((int *)GEN_TOP(((int)this + 0x128)));
      if ((*((byte *)GEN_TOP((iVar1 + 0x6d))) & 2) == 0) {
        fVar12 = (float10)*((float *)GEN_TOP((iVar1 + 0x60)));
        if (fVar11 <= fVar12 && ((!GEN_ISNAN(fVar12) && !GEN_ISNAN(fVar11)) && fVar12 != fVar11)) {
          fVar12 = (float10)*((float *)GEN_TOP((iVar1 + 100)));
          if (fVar11 <= fVar12 && ((!GEN_ISNAN(fVar12) && !GEN_ISNAN(fVar11)) && fVar12 != fVar11)) {
            return 0;
          }
          fVar15 = ((float)GEN_TOF((fVar11 - (float10)*((float *)GEN_TOP((iVar1 + 100))))));
          (*(float *)(gen_frame + 0x0)) = fVar15;
          fVar15 = ((float)GEN_TOF(((float10)fVar15 /
                          ((float10)*((float *)GEN_TOP((iVar1 + 0x60))) - (float10)*((float *)GEN_TOP((iVar1 + 100)))))));
          (*(float *)(gen_frame + 0x0)) = fVar15;
          *param_1 = (float)((float10)fVar15 * (float10)*param_1);
        }
        iVar1 = *((int *)GEN_TOP(((int)this + 0x128)));
        F_00d24070(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xa0)),param_1,(int)this + 0x8c,GEN_ARGF(*((float *)GEN_TOP((iVar1 + 0x34)))),GEN_ARGF(*((float *)GEN_TOP((iVar1 + 0x30)))),GEN_ARGF(*((float *)GEN_TOP((iVar1 + 0x40)))),GEN_ARGF(*((float *)GEN_TOP((iVar1 + 0x58)))));
        F_00d219d0(this GEN_EDX_ARG,(uint)param_1,(int)this + 0x8c,param_2);
        *param_1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x44))) *
                          (float10)*param_1)));
        fVar11 = (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x54)));
        bVar10 = GEN_ISNAN((float10)1) || GEN_ISNAN(fVar11);
        if (bVar10 == (bVar10 || (float10)1 == fVar11)) {
          uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 100))))(piVar7 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
          if ((char)uVar8 == '\x01') {
            pfVar9 = ((float *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x84)),(int)this + 0x70)));
            (*(float *)(gen_frame + 0xb0)) = *pfVar9;
            (*(float *)(gen_frame + 0xb4)) = pfVar9[1];
            (*(float *)(gen_frame + 0xb8)) = pfVar9[2];
            (*(float *)(gen_frame + 0xbc)) = pfVar9[3];
            pfVar9 = &(*(float *)(gen_frame + 0xb0));
          }
          else {
            pfVar9 = ((float *)GEN_TOP(((int)this + 0x60)));
          }
          fVar11 = F_00d21d90(this GEN_EDX_ARG,(uint)pfVar9,param_1,(int)this + 0x8c);
        }
        else {
          fVar11 = (float10)0;
        }
        *((float *)GEN_TOP(((int)this + 0x90))) = (float)fVar11;
        *((float *)GEN_TOP(((int)this + 0x80))) = *param_1;
        bVar10 = GEN_ISNAN((float10)0) || GEN_ISNAN((float10)*param_1);
        if (bVar10 != (bVar10 || (float10)0 == (float10)*param_1)) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf14 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d19060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd19060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  byte * pbVar1;
  float fVar2;
  undefined1 PVar3;
  ushort uVar4;
  int iVar5;
  byte bVar6;
  int * piVar7;
  uint uVar8;
  float * pfVar9;
  bool bVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_FWD,0x406);
  if (((byte)this[0xb0] & 4) != 0) {
    return 0;
  }
  bVar6 = F_00d217a0((undefined *)this GEN_EDX_ARG,param_1);
  if (bVar6 != 0) {
    if (((*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x6d))) & 1) != 0) &&
       (piVar7 = ((int *)GEN_TOP(F_00d2cd00())), piVar7 != ((int *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x20))))
                (piVar7 GEN_EDX_ARG,*(int *)(this + 0x128) + 0x20,*(undefined4 *)(this + 0x20));
    }
    PVar3 = this[0xb0];
    (*(float *)(gen_frame + 0x28)) = (float)(float10)0;
    fVar11 = (float10)1;
    *(float *)(this + 0x8c) = (float)fVar11;
    if (((byte)PVar3 & 8) == 0) {
      F_00d21970(this GEN_EDX_ARG);
      bVar6 = F_00d18d00(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x28)),param_1);
      if (((bVar6 == 0) &&
          (fVar11 = (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x70))),
          bVar10 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar11), bVar10 != (bVar10 || (float10)0 == fVar11))) &&
         ((*((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) & 0x40) == 0)) {
        F_00d219b0(this GEN_EDX_ARG);
        F_00d22c70(this GEN_EDX_ARG,0);
        return 0;
      }
    }
    else {
      (*(float *)(gen_frame + 0x28)) = (float)fVar11;
      *(float *)(this + 0x80) = (float)fVar11;
    }
    if ((*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x6d))) & 2) == 0) {
      fVar11 = (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x68)));
      bVar10 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar11);
      if ((bVar10 == (bVar10 || (float10)0 == fVar11)) &&
         (uVar8 = F_00cbbff0(this + 8 GEN_EDX_ARG), uVar8 == 0)) {
        pfVar9 = ((float *)GEN_TOP(F_00d188f0(((undefined1 *)(gen_frame + 0x0)),this + 0x50)));
        fVar13 = *((float *)GEN_TOP((*(int *)(this + 0x128) + 0x68)));
        fVar11 = (float10)*(double *)&REFG(undefined, 0x10912a8);
        fVar2 = *pfVar9;
        *(int *)(this + 0x138) = *(int *)(this + 0x138) + param_1;
        fVar13 = ((float)GEN_TOF((((float10)fVar13 * fVar11) * (float10)fVar2)));
        (*(int * PTR32 *)(gen_frame + 0x24)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar13)));
        fVar11 = GEN_X87((float10)fVar13 / (float10)*(double *)&REFG(double, 0x11332d0));
        (*(int * PTR32 *)(gen_frame + 0x24)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar11)));
        if (*(int *)(this + 0x138) < (int)fVar11) {
          return 1;
        }
      }
      piVar7 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
      iVar5 = *(int *)(this + 0x128);
      (*(int * PTR32 *)(gen_frame + 0x24)) = piVar7;
      uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x18))))(piVar7 GEN_EDX_ARG);
      (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar5 + 0x10 + (uVar8 & 0xff) * 4))) * (float10)(*(float *)(gen_frame + 0x28)))))
      ;
      uVar4 = *((ushort *)GEN_TOP((iVar5 + 0xe)));
      if (uVar4 != 0) {
        fVar13 = F_00d005d0((*(int * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,(uint)uVar4);
        (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar13 * (float10)(*(float *)(gen_frame + 0x28)));
      }
      fVar11 = (float10)(*(float *)(gen_frame + 0x28));
      iVar5 = *(int *)(this + 0x128);
      *(float *)(this + 0x80) = (*(float *)(gen_frame + 0x28));
      bVar10 = GEN_ISNAN((float10)0) || GEN_ISNAN((float10)*((float *)GEN_TOP((iVar5 + 0x70))));
      if (bVar10 == (bVar10 || (float10)0 == (float10)*((float *)GEN_TOP((iVar5 + 0x70))))) {
        fVar12 = (float10)*((float *)GEN_TOP((iVar5 + 0x70)));
        if (fVar11 <= fVar12 && ((!GEN_ISNAN(fVar12) && !GEN_ISNAN(fVar11)) && fVar12 != fVar11)) {
          (*(float *)(gen_frame + 0x28)) = *((float *)GEN_TOP((iVar5 + 0x70)));
          *(undefined4 *)(this + 0x80) = *((undefined4 *)GEN_TOP((iVar5 + 0x70)));
        }
        *(float *)(this + 0x8c) = (float)(float10)1;
      }
      if ((*((byte *)GEN_TOP((iVar5 + 0xc))) & 8) != 0) {
        (*(float *)(gen_frame + 0x28)) = *((float *)GEN_TOP((iVar5 + 0x44)));
        *(undefined4 *)(this + 0x80) = *((undefined4 *)GEN_TOP((iVar5 + 0x44)));
      }
      if ((((byte)this[0xb0] & 0x40) != 0) || (bVar6 = F_00d228c0(this GEN_EDX_ARG), bVar6 != 0)) {
        F_00d2dd80(((undefined1 *)(gen_frame + 0x18)),*(undefined4 *)(this + 0x24));
        F_00cbe880(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
        uVar8 = F_00cbe7a0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,*(undefined4 *)(this + 0x28));
        if (uVar8 != 0) {
          if (*((char *)GEN_TOP((uVar8 + 3))) == '\0') {
            *((undefined1 *)GEN_TOP((*(int *)(this + 0x128) + 0x6c))) = 0;
            *((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x6d))) =
                 *((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x6d))) & 0xfe;
          }
          else {
            *((undefined1 *)GEN_TOP((*(int *)(this + 0x128) + 0x6c))) = *((undefined1 *)GEN_TOP((uVar8 + 0x6c)));
            pbVar1 = ((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x6d)));
            *pbVar1 = *pbVar1 ^ (*((byte *)GEN_TOP((uVar8 + 0x6d))) ^ *((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x6d))))
                                & 1;
            *((byte *)GEN_TOP((*(int *)(this + 0x128) + 0xc))) =
                 *((byte *)GEN_TOP((*(int *)(this + 0x128) + 0xc))) | *((byte *)GEN_TOP((uVar8 + 0xc))) & 4;
          }
        }
        F_00cbe8b0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
        bVar6 = F_00d00ed0((*(int * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,this,(uint)(byte)this[0x2d],*(undefined4 *)(this + 0x30),
                             (*(float *)(gen_frame + 0x28)));
        (*(byte *)(gen_frame + 0x2f)) = bVar6;
        F_00cbe3b0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
        return (*(byte *)(gen_frame + 0x2f));
      }
    }
    else {
      uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x98))))
                        (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
      F_00d1b9f0(uVar8 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44)))),(*(float *)(gen_frame + 0x28)));
    }
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d19360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd19360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(uint *)(this + 0x130) = param_1;
  *(undefined4 *)(this + 0x134) = param_2;
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf17 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d19380(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd19380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x13c))) = param_2;
  return param_2;
}

/* ref: FUN_00d19390 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d19390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd19390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *param_1 = *(undefined2 *)this;
  param_1[1] = *((undefined2 *)GEN_TOP(((int)this + 2)));
  *(undefined4 *)(param_1 + 4) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined4 *)(param_1 + 6) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  *(undefined4 *)(param_1 + 0xc) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *(undefined4 *)(param_1 + 0xe) = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  *(undefined4 *)(param_1 + 0x10) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  *(undefined4 *)(param_1 + 0x16) = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  *(undefined4 *)(param_1 + 0x14) = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  param_1[0x18] = *((undefined2 *)GEN_TOP(((int)this + 0x30)));
  param_1[0x19] = *((undefined2 *)GEN_TOP(((int)this + 0x32)));
  *(undefined1 *)(param_1 + 0x1a) = *((undefined1 *)GEN_TOP(((int)this + 0x34)));
  *(undefined4 *)(param_1 + 0x1c) = *((undefined4 *)GEN_TOP(((int)this + 0x38)));
  *(undefined4 *)(param_1 + 0x1e) = *((undefined4 *)GEN_TOP(((int)this + 0x3c)));
  return 0;
}

/* ref: FUN_00d19410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d19410(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd19410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  F_00d0c080(param_1 GEN_EDX_FWD,param_2);
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x20)));
  *((uint *)GEN_TOP((param_2 + 0x20))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x24)));
  *((uint *)GEN_TOP((param_2 + 0x24))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x28)));
  *((uint *)GEN_TOP((param_2 + 0x28))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x2c)));
  *((uint *)GEN_TOP((param_2 + 0x2c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x30)));
  *((uint *)GEN_TOP((param_2 + 0x30))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x34)));
  *((uint *)GEN_TOP((param_2 + 0x34))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x38)));
  *((uint *)GEN_TOP((param_2 + 0x38))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x3c)));
  *((uint *)GEN_TOP((param_2 + 0x3c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x40)));
  *((uint *)GEN_TOP((param_2 + 0x40))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x44)));
  *((uint *)GEN_TOP((param_2 + 0x44))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x48)));
  *((uint *)GEN_TOP((param_2 + 0x48))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x4c)));
  *((uint *)GEN_TOP((param_2 + 0x4c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x50)));
  *((uint *)GEN_TOP((param_2 + 0x50))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x54)));
  *((uint *)GEN_TOP((param_2 + 0x54))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x58)));
  *((uint *)GEN_TOP((param_2 + 0x58))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x5c)));
  *((uint *)GEN_TOP((param_2 + 0x5c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x60)));
  *((uint *)GEN_TOP((param_2 + 0x60))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 100)));
  *((uint *)GEN_TOP((param_2 + 100))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x68)));
  *((uint *)GEN_TOP((param_2 + 0x68))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x70)));
  *((uint *)GEN_TOP((param_2 + 0x70))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((undefined1 *)GEN_TOP((param_2 + 0x6c))) = *((undefined1 *)GEN_TOP((param_1 + 0x6c)));
  *((byte *)GEN_TOP((param_2 + 0x6d))) =
       *((byte *)GEN_TOP((param_2 + 0x6d))) ^ (*((byte *)GEN_TOP((param_2 + 0x6d))) ^ *((byte *)GEN_TOP((param_1 + 0x6d)))) & 1;
  *((byte *)GEN_TOP((param_2 + 0x6d))) =
       (*((byte *)GEN_TOP((param_1 + 0x6d))) ^ *((byte *)GEN_TOP((param_2 + 0x6d)))) & 2 ^ *((byte *)GEN_TOP((param_2 + 0x6d)));
  *((ushort *)GEN_TOP((param_2 + 0x74))) = *((ushort *)GEN_TOP((param_1 + 0x74))) << 8 | *((ushort *)GEN_TOP((param_1 + 0x74))) >> 8;
  *((ushort *)GEN_TOP((param_2 + 0x76))) = *((ushort *)GEN_TOP((param_1 + 0x76))) << 8 | *((ushort *)GEN_TOP((param_1 + 0x76))) >> 8;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x78)));
  *((byte *)GEN_TOP((param_2 + 0x6d))) = *((byte *)GEN_TOP((param_2 + 0x6d))) & 3;
  *((uint *)GEN_TOP((param_2 + 0x78))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((undefined2 *)GEN_TOP((param_2 + 0x6e))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 0x7c))) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d19630(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd19630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[33])REFP(0x113324c));
  if ((*((byte *)GEN_TOP((param_1[0x4a] + 0x6d))) & 1) != 0) {
    piVar1 = ((int *)GEN_TOP(F_00d2cd00()));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,param_1[8]);
    }
  }
  F_00d23680(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d19690(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd19690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x80)));
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d196b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd196b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x128)));
  *param_2 = *((undefined4 *)GEN_TOP((uVar1 + 0x24)));
  return uVar1;
}

/* ref: FUN_00d196d0 */
GEN_LIB GEN_NOFRAME double F_00d196d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd196d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  return 0.0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d196e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd196e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x40) {
    return 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x128)));
  puVar3 = param_2;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x40;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf19 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d19710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd19710u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d19720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd19720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00d19730 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00d19730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd19730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_GS(0xa8, 8, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code * pcVar5;
  int * piVar6;
  uint uVar7;
  float * pfVar8;
  float * pfVar9;
  bool bVar10;
  float10 fVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa4));
  piVar6 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x98))))(piVar6 GEN_EDX_FWD)));
  fVar11 = ((float10)GEN_TOD(fcos((float10)*((float *)GEN_TOP(((int)this + 0xa0))))));
  (*(float *)(gen_frame + 0x90)) = (float)((float10)(float)fVar11 * (float10)*(double *)&REFG(undefined, 0x1088120));
  (*(float *)(gen_frame + 0x94)) = (float)(float10)0;
  fVar11 = ((float10)GEN_TOD(fsin((float10)*((float *)GEN_TOP(((int)this + 0xa0))))));
  (*(float *)(gen_frame + 0x98)) = (float)((float10)(float)fVar11 * (float10)*(double *)&REFG(undefined, 0x1088120));
  (*(float *)(gen_frame + 0x9c)) = (float)(float10)1;
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x5c))))(piVar6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x40)));
  if ((char)uVar7 != '\0') {
    fVar11 = (float10)0;
    (*(float *)(gen_frame + 0x80)) = (float)fVar11;
    (*(float *)(gen_frame + 0x84)) = (float)fVar11;
    (*(float *)(gen_frame + 0x88)) = (float)fVar11;
    fVar1 = (float)(float10)1;
    (*(float *)(gen_frame + 0x8c)) = fVar1;
    (*(float *)(gen_frame + 0x74)) = (float)fVar11;
    fVar1 = (float)(float10)1;
    (*(float *)(gen_frame + 0x8c)) = fVar1;
    (*(float *)(gen_frame + 0x78)) = (float)fVar11;
    (*(float *)(gen_frame + 0x70)) = (float)fVar11;
    (*(float *)(gen_frame + 0x7c)) = fVar1;
    pfVar8 = ((float *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x80)),&(*(float *)(gen_frame + 0x90)))));
    fVar1 = *pfVar8;
    (*(float *)(gen_frame + 0x90)) = fVar1;
    fVar2 = pfVar8[1];
    (*(float *)(gen_frame + 0x94)) = fVar2;
    fVar3 = pfVar8[2];
    (*(float *)(gen_frame + 0x98)) = fVar3;
    fVar4 = pfVar8[3];
    *((float *)GEN_TOP(((int)this + 0x50))) = fVar1;
    *((float *)GEN_TOP(((int)this + 0x54))) = fVar2;
    *((float *)GEN_TOP(((int)this + 0x58))) = fVar3;
    *((float *)GEN_TOP(((int)this + 0x5c))) = fVar4;
    *((float *)GEN_TOP(((int)this + 0x60))) = fVar1;
    pfVar8 = ((float *)GEN_TOP(((int)this + 0x60)));
    *((float *)GEN_TOP(((int)this + 100))) = fVar2;
    *((float *)GEN_TOP(((int)this + 0x68))) = fVar3;
    *((float *)GEN_TOP(((int)this + 0x6c))) = fVar4;
    *param_1 = (float)(float10)1;
    (*(float *)(gen_frame + 0x9c)) = fVar4;
    pfVar9 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x68))))(piVar6 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x80)),&(*(float *)(gen_frame + 0x90)))));
    fVar11 = (float10)0;
    (*(float *)(gen_frame + 0x90)) = *pfVar9;
    (*(float *)(gen_frame + 0x94)) = pfVar9[1];
    (*(float *)(gen_frame + 0x98)) = pfVar9[2];
    (*(float *)(gen_frame + 0x9c)) = pfVar9[3];
    F_00d24070(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x90)),param_1,(int)this + 0x8c,(float)fVar11,(float)fVar11,(float)fVar11,
                 (float)fVar11);
    F_00d219d0(this GEN_EDX_ARG,(uint)param_1,(int)this + 0x8c,param_2);
    pcVar5 = *((gen_code32 *)GEN_TOP((*piVar6 + 100)));
    *param_1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x20))) * (float10)*param_1)));
    uVar7 = (*pcVar5)(piVar6,((undefined1 *)(gen_frame + 0x0)));
    if ((char)uVar7 == '\x01') {
      pfVar9 = ((float *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x80)),(int)this + 0x70)));
      (*(float *)(gen_frame + 0x90)) = *pfVar9;
      (*(float *)(gen_frame + 0x94)) = pfVar9[1];
      (*(float *)(gen_frame + 0x98)) = pfVar9[2];
      pfVar8 = &(*(float *)(gen_frame + 0x90));
      (*(float *)(gen_frame + 0x9c)) = pfVar9[3];
    }
    fVar11 = F_00d21d90(this GEN_EDX_ARG,(uint)pfVar8,param_1,(int)this + 0x8c);
    *((float *)GEN_TOP(((int)this + 0x90))) = (float)fVar11;
    *((float *)GEN_TOP(((int)this + 0x80))) = *param_1;
    bVar10 = GEN_ISNAN((float10)0) || GEN_ISNAN((float10)*param_1);
    if (bVar10 == (bVar10 || (float10)0 == (float10)*param_1)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00d19960 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d19960(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd19960u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  uVar2 = param_4;
  fVar3 = (float10)0;
  *((float *)GEN_TOP(param_4)) = (float)fVar3;
  *((undefined4 *)GEN_TOP((param_4 + 0xc))) = 0;
  *((float *)GEN_TOP((param_4 + 4))) = (float)fVar3;
  *((float *)GEN_TOP((param_4 + 8))) = (float)fVar3;
  *((float *)GEN_TOP(param_2)) = (float)fVar3;
  *param_3 = (float)fVar3;
  if ((*((byte *)GEN_TOP((param_1 + 0xb0))) & 8) != 0) {
    *((byte *)GEN_TOP((param_4 + 0xc))) = *((byte *)GEN_TOP((param_4 + 0xc))) | 2;
    *((float *)GEN_TOP((param_1 + 0x80))) = (float)(float10)1;
    return 0;
  }
  iVar1 = *((int *)GEN_TOP((param_1 + 0x128)));
  if ((*((byte *)GEN_TOP((iVar1 + 4))) & 0x80) == 0) {
    fVar4 = (float10)*((float *)GEN_TOP((param_1 + 0x60)));
    fVar5 = (float10)*((float *)GEN_TOP((param_1 + 0x68)));
    if (((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar4)) == ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar4)) || fVar3 == fVar4)) ||
       ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar3)) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar3)) || fVar5 == fVar3))) {
      fVar3 = ((float10)GEN_TOD(atan2(fVar4,-fVar5)));
      param_4 = (uint)gen_fl2bits((float)fVar3);
      *((uint *)GEN_TOP((param_1 + 0xa4))) = param_4;
    }
    else {
      param_4 = *((uint *)GEN_TOP((param_1 + 0xa4)));
    }
    *((undefined4 *)GEN_TOP(uVar2)) = *((undefined4 *)GEN_TOP((param_1 + 0x94)));
    *((float *)GEN_TOP(param_2)) =
         ((float)GEN_TOF(((((float10)GEN_TOD(gen_bits2f(param_4))) + ((float10)GEN_TOD(gen_bits2f(param_4)))) /
                (float10)*(double *)&REFG(undefined, 0x1080228))));
    return 0;
  }
  *((float *)GEN_TOP((param_1 + 0x94))) = (float)fVar3;
  if ((*((byte *)GEN_TOP((iVar1 + 0xc))) & 2) == 0) {
    *((float *)GEN_TOP(param_2)) =
         ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar1 + 0x2c))) + (float10)*((float *)GEN_TOP((iVar1 + 0x2c)))) /
                (float10)*(double *)&REFG(undefined, 0x1080228))));
    return 0;
  }
  fVar3 = F_00d234c0(param_1 GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0xa0)))));
  *((float *)GEN_TOP(param_2)) =
       ((float)GEN_TOF((((float10)(float)fVar3 + (float10)(float)fVar3) / (float10)*(double *)&REFG(undefined, 0x1080228))));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d19a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd19a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x70, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x50);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf27 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d19ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd19ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  bVar1 = F_00d228c0(this GEN_EDX_FWD);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf29 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d19b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(HWND param_1, unsigned int gen_a1), GEN_P(HDC param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd19b10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(HWND param_1 = (HWND)gen_a1;)
  GEN_PIN(HDC param_2 = (HDC)gen_a2;)
  GEN_FRAME_DECL_GS(0x9c, 4, 4);
  char cVar1;
  HGDIOBJ pvVar2;
  undefined * pHVar3;
  undefined * h;
  char * pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong color;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x94)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x98));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  pvVar2 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0xc)) = pvVar2;
  pvVar2 = gen_imp_SelectObject(param_2,pvVar2);
  (*(HGDIOBJ *)(gen_frame + 0x10)) = pvVar2;
  if (((byte)this[0xb0] & 1) == 0) {
    iVar6 = 1;
    color = 0x900000;
  }
  else {
    color = 0x80;
    iVar6 = 2;
  }
  pHVar3 = gen_imp_CreatePen(0,iVar6,color);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = pHVar3;
  pvVar2 = gen_imp_SelectObject(param_2,pHVar3);
  (*(HGDIOBJ *)(gen_frame + 0x14)) = pvVar2;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x64)));
  iVar7 = (*(tagRECT *)(gen_frame + 0x64)).right / 2 - (int)((double)*(float *)(this + 0x50) * *(double *)&REFG(double, 0x1132488));
  iVar6 = (*(tagRECT *)(gen_frame + 0x64)).bottom / 2 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x58));
  gen_imp_Ellipse(param_2,iVar7 - 0x32,iVar6 - 0x32,iVar7 + 0x32,iVar6 + 0x32);
  if (((byte)(*(undefined * PTR32 *)(gen_frame + 0x1c))[0xb0] & 1) != 0) {
    (*(int *)(gen_frame + 0x18)) = (*(tagRECT *)(gen_frame + 0x64)).right / 2;
    (*(HGDIOBJ *)(gen_frame + 0x20)) = (HGDIOBJ)((*(tagRECT *)(gen_frame + 0x64)).bottom / 2);
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x14)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x24)));
    pHVar3 = gen_imp_CreatePen(0,1,0x9000);
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = pHVar3;
    pvVar2 = gen_imp_SelectObject(param_2,pHVar3);
    (*(HGDIOBJ *)(gen_frame + 0x14)) = pvVar2;
    gen_imp_MoveToEx(param_2,(*(int *)(gen_frame + 0x18)) -
                     (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x60)),
             (int)(*(HGDIOBJ *)(gen_frame + 0x20)) - (int)((double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x68) * *(double *)&REFG(double, 0x1132488)),
             (LPPOINT)0x0);
    gen_imp_LineTo(param_2,(*(int *)(gen_frame + 0x18)),(int)(*(HGDIOBJ *)(gen_frame + 0x20)));
  }
  F_00c48350(((undefined *)(gen_frame + 0x28)),0,0x3c);
  F_00c49908(((CHAR *)(((char *)((undefined *)(gen_frame + 0x28)) + 28))),0x20,&REFG(undefined, 0x11332ec));
  (*(LONG *)((char *)((undefined *)(gen_frame + 0x28)))) = 0xd;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x28)) + 23))) = 0x80;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x28)) + 27))) = '\x01';
  h = gen_imp_CreateFontIndirectA(((undefined *)(gen_frame + 0x28)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = h;
  pvVar2 = gen_imp_SelectObject(param_2,h);
  (*(HGDIOBJ *)(gen_frame + 0x20)) = pvVar2;
  if (((byte)(*(undefined * PTR32 *)(gen_frame + 0x1c))[0xb0] & 1) == 0) {
    F_00c472af(((char *)(gen_frame + 0x74)),0x20,&REFG(undefined, 0x1133308),&REFG(undefined, 0x1133300));
  }
  else {
    F_00c472af(((char *)(gen_frame + 0x74)),0x20,&REFG(undefined, 0x11332f8),
               (int)(ulonglong)
                    gen_d2bits((double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x8c) * *(double *)&REFG(undefined, 0x1088118)),
               (int)((ulonglong)
                     gen_d2bits((double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x8c) * *(double *)&REFG(undefined, 0x1088118)) >>
                    0x20));
  }
  pcVar4 = ((char *)(gen_frame + 0x74));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  (*(int *)(gen_frame + 0x18)) = (int)pcVar4 - (int)(((char *)(gen_frame + 0x74)) + 1);
  gen_imp_GetTextExtentPoint32A(param_2,((char *)(gen_frame + 0x74)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x74)) + 1),&(*(undefined8 *)(gen_frame + 0x0)));
  gen_imp_TextOutA(param_2,iVar7 - (*(LONG *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) / 2,iVar6 - (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) / 2,((char *)(gen_frame + 0x74)),(*(int *)(gen_frame + 0x18)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x20)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x14)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x10)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x8)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x24)));
  uVar5 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0xc)));
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d19db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd19db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00d21f00((undefined *)this GEN_EDX_FWD,param_1);
  if (bVar1 == 0) {
    return 0;
  }
  F_00c49386(param_1,((char *)REFP(0x113330c)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x20))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x20))))));
  F_00c49386(param_1,((char *)REFP(0x113331c)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x24))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x24))))));
  F_00c49386(param_1,((char *)REFP(0x1133328)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x28))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x28))))));
  F_00c49386(param_1,((char *)REFP(0x1133338)),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x2c)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x2c)))) >> 0x20));
  F_00c49386(param_1,((char *)REFP(0x1133348)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf31 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d19e50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd19e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  char * pcVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  double dVar6;
  
  pcVar2 = ((char *)REFP(0x1133360));
  pbVar4 = ((byte *)GEN_TOP(param_2));
  do {
    bVar1 = *pcVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00d19e81: ;
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00d19e86;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00d19e81;
    pcVar2 = pcVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d19e86: ;
  if (iVar3 == 0) {
    pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
    if (pcVar2 != ((char *)GEN_TOP(0x0))) {
      dVar6 = F_00c4acaa(pcVar2);
      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x20))) = (float)dVar6;
      return 1;
    }
  }
  else {
    pcVar2 = ((char *)REFP(0x1133368));
    pbVar4 = ((byte *)GEN_TOP(param_2));
    do {
      bVar1 = *pcVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00d19ee7: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00d19eec;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00d19ee7;
      pcVar2 = pcVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d19eec: ;
    if (iVar3 == 0) {
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar6 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24))) = (float)dVar6;
        return 1;
      }
    }
    else {
      pcVar2 = ((char *)REFP(0x1133370));
      pbVar4 = ((byte *)GEN_TOP(param_2));
      do {
        bVar1 = *pcVar2;
        bVar5 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00d19f45: ;
          iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_00d19f4a;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00d19f45;
        pcVar2 = pcVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d19f4a: ;
      if (iVar3 == 0) {
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar6 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28))) = (float)dVar6;
          return 1;
        }
      }
      else {
        pcVar2 = ((char *)REFP(0x113337c));
        pbVar4 = ((byte *)GEN_TOP(param_2));
        do {
          bVar1 = *pcVar2;
          bVar5 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) {
LAB_00d19fa7: ;
            iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
            goto LAB_00d19fac;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar5 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_00d19fa7;
          pcVar2 = pcVar2 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d19fac: ;
        if (iVar3 != 0) {
          bVar1 = F_00d22040(param_1 GEN_EDX_ARG,param_2);
          return bVar1;
        }
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar6 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x2c))) = (float)dVar6;
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf14 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d19ff0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd19ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ushort uVar1;
  int * this;
  int iVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = param_1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x70))))(param_1 GEN_EDX_FWD,0x406);
  if (((byte)param_1[0xb0] & 4) != 0) {
    return 0;
  }
  bVar3 = F_00d217a0(param_1 GEN_EDX_ARG,param_2);
  if (bVar3 != 0) {
    if ((((*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 4))) & 0x80) == 0) &&
        (fVar6 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x30))),
        bVar5 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar6), bVar5 == (bVar5 || (float10)0 == fVar6))) &&
       (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc))) + 0x10))))
                          (*((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc))) GEN_EDX_ARG), (char)uVar4 == '\0')) {
      fVar8 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x30))) * (float10)(int)param_2
                      ) / (float10)*(double *)&REFG(undefined, 0x10912a8) + (float10)*(float *)(param_1 + 0xa0))));
      fVar6 = (float10)fVar8;
      *(float *)(param_1 + 0xa0) = fVar8;
      fVar7 = (float10)REFG(double, 0x10920b8);
      if (!(fVar6 <= fVar7) == (GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6))) {
        if (fVar6 <= (float10)0) {
          *(float *)(param_1 + 0xa0) = (float)(fVar7 + fVar6);
        }
      }
      else {
        *(float *)(param_1 + 0xa0) = (float)(fVar6 - fVar7);
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(float10)0)));
    *(float *)(param_1 + 0x8c) = (float)(float10)1;
    bVar3 = F_00d19730(param_1 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),param_2);
    if (bVar3 == 0) {
      F_00d219b0(param_1 GEN_EDX_ARG);
      F_00d22c70(param_1 GEN_EDX_ARG,0);
    }
    else {
      this = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
      iVar2 = *(int *)(param_1 + 0x128);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x18))))(this GEN_EDX_ARG);
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 0x10 + (uVar4 & 0xff) * 4))) *
                       (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0)))))))))));
      uVar1 = *((ushort *)GEN_TOP((iVar2 + 0xe)));
      if (uVar1 != 0) {
        fVar8 = F_00d005d0(this GEN_EDX_ARG,(uint)uVar1);
        (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar8 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0)))))))));
      }
      iVar2 = *(int *)(param_1 + 0x128);
      *(undefined * PTR32 *)(param_1 + 0x80) = (*(undefined * PTR32 *)(gen_frame + 0x0));
      if ((*((byte *)GEN_TOP((iVar2 + 0xc))) & 8) != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x0)) = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x20)));
        *(undefined4 *)(param_1 + 0x80) = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
      }
      if ((((byte)param_1[0xb0] & 0x40) != 0) || (bVar3 = F_00d228c0(param_1 GEN_EDX_ARG), bVar3 != 0)) {
        bVar3 = F_00d00ed0(this GEN_EDX_ARG,param_1,(uint)(byte)param_1[0x2d],*(undefined4 *)(param_1 + 0x30),
                             ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0))))));
        return bVar3;
      }
    }
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00d1a180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1a180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  undefined1 DVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  int * piVar8;
  float fVar9;
  float10 fVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  (*(char *)(gen_frame + 0x1f)) = '\0';
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar8;
  bVar5 = F_00d21830((undefined *)this GEN_EDX_FWD);
  if (bVar5 == 0) {
    piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x90))))(piVar8 GEN_EDX_ARG)));
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xfc))))(piVar6 GEN_EDX_ARG,*(undefined4 *)(this + 0x24));
    if ((char)uVar7 == '\0') goto LAB_00d1a546;
    F_00d2dd80(&(*(float *)(gen_frame + 0x34)),*(undefined4 *)(this + 0x24));
    if (((byte)this[0xb0] & 0x80) == 0) {
      bVar5 = F_00cbe970(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
    }
    else {
      bVar5 = F_00cbe940(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
    }
    if (bVar5 != 0) {
      fVar10 = (float10)0;
      uVar2 = *(undefined4 *)(this + 0x28);
      iVar3 = *piVar6;
      (*(float *)(gen_frame + 0x0)) = (float)fVar10;
      (*(float *)(gen_frame + 0x4)) = (float)fVar10;
      (*(float *)(gen_frame + 0x8)) = (float)fVar10;
      (*(float *)(gen_frame + 0xc)) = (float)(float10)1;
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x3c))))
                        (piVar6,((undefined1 *)(gen_frame + 0x20)),*(undefined4 *)(this + 0x24),uVar2,&(*(float *)(gen_frame + 0x0)),0,0,1);
      F_00cbbdc0(this + 8 GEN_EDX_ARG,uVar7);
      F_00cbbdb0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
      bVar5 = F_00cbc040(this + 8 GEN_EDX_ARG);
      if (bVar5 != 0) {
        iVar3 = *(int *)(this + 0x128);
        (*(char *)(gen_frame + 0x1f)) = '\x01';
        if (((*((byte *)GEN_TOP((iVar3 + 4))) & 0x80) != 0) && ((*((byte *)GEN_TOP((iVar3 + 0xc))) & 2) != 0)) {
          fVar10 = F_00d23370(this GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((iVar3 + 0x2c)))));
          *(float *)(this + 0xa0) = (float)fVar10;
        }
        F_00d22bf0(this GEN_EDX_ARG,0x403);
        F_00cbe3b0(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
        goto LAB_00d1a2a6;
      }
    }
    F_00cbe3b0(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
  }
  else {
LAB_00d1a2a6: ;
    bVar5 = F_00cbc040(this + 8 GEN_EDX_ARG);
    if (bVar5 == 0) {
LAB_00d1a546: ;
      *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) | 4;
      return 0;
    }
    uVar7 = F_00d00230(piVar8 GEN_EDX_ARG);
    if (uVar7 == 1) {
      fVar10 = F_00d22df0(((undefined1 *)(gen_frame + 0x20)),this + 0x60,*(float *)(this + 0x80),*(float *)(this + 0x94));
      (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar10)));
      F_00cbc920(this + 8 GEN_EDX_ARG,(float)fVar10);
      F_00cbc4e0(this + 8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
    }
    else {
      fVar10 = (float10)0;
      (*(float *)(gen_frame + 0x30)) = (float)fVar10;
      (*(float *)(gen_frame + 0x34)) = (float)fVar10;
      (*(float *)(gen_frame + 0x38)) = (float)fVar10;
      (*(undefined4 *)(gen_frame + 0x3c)) = 0;
      F_00d19960(this GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x18)),(uint)&(*(float *)(gen_frame + 0x30)));
      F_00cbc9e0(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0x14)),(*(float *)(gen_frame + 0x18)),&(*(float *)(gen_frame + 0x30)));
      uVar7 = F_00d2e5a0();
      if ((uVar7 == 3) || (uVar7 == 5)) {
        fVar10 = F_00d2edb0(*(float *)(this + 0x80),0,2);
      }
      else {
        fVar10 = (float10)*(float *)(this + 0x80);
      }
      DVar1 = this[0x2c];
      (*(float *)(gen_frame + 0x18)) = (float)fVar10;
      if (((byte)DVar1 & 2) != 0) {
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x98))))(piVar8 GEN_EDX_ARG)));
        fVar9 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xd0))))(piVar8 GEN_EDX_ARG));
        iVar3 = *piVar8;
        (*(float *)(gen_frame + 0x14)) = fVar9;
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((iVar3 + 0x50))))(piVar8);
        fVar10 = F_00d2bc80((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))) GEN_EDX_ARG,(float)extraout_ST0);
        (*(float *)(gen_frame + 0x18)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x18)));
        piVar8 = (*(int * PTR32 *)(gen_frame + 0x10));
      }
      F_00cbc920(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0x18)));
    }
    F_00cbc980(this + 8 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x24)))));
    DVar1 = this[0x2c];
    (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xc4) * (float10)*(float *)(this + 0x8c))));
    if (((byte)DVar1 & 2) != 0) {
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x98))))(piVar8 GEN_EDX_ARG)));
      fVar9 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xd0))))(piVar8 GEN_EDX_ARG));
      iVar3 = *piVar8;
      (*(float *)(gen_frame + 0x14)) = fVar9;
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((iVar3 + 0x50))))(piVar8);
      fVar10 = F_00d2bc60((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))) GEN_EDX_ARG,(float)extraout_ST0_00);
      (*(float *)(gen_frame + 0x18)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x18)));
    }
    F_00cbc710(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0x18)));
    if ((*(char *)(gen_frame + 0x1f)) != '\0') {
      dVar4 = GEN_X87(*(double *)&REFG(undefined, 0x1097260) * 0.0);
      fVar9 = *(float *)(this + 0xbc);
      (*(float *)(gen_frame + 0x14)) = gen_bits2f((int)dVar4);
      F_00cbddc0(this + 8 GEN_EDX_ARG,fVar9,(uint)&(*(float *)(gen_frame + 0x14)));
      fVar9 = *(float *)(this + 0xc0);
      (*(float *)(gen_frame + 0x14)) = gen_bits2f((int)dVar4);
      F_00cbdeb0(this + 8 GEN_EDX_ARG,fVar9,(uint)&(*(float *)(gen_frame + 0x14)));
      F_00cbc980(this + 8 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x24)))));
      F_00cbcd10(this + 8 GEN_EDX_ARG,*(float *)(this + 200),*(undefined4 *)(this + 0xcc));
      F_00cbce00(this + 8 GEN_EDX_ARG,(uint)(byte)this[0xe0]);
      if ((*(uint *)(this + 0xb0) & 0x400) != 0) {
        F_00cbcbc0(this + 8 GEN_EDX_ARG);
      }
      if ((*(uint *)(this + 0xb0) & 0x100) == 0) {
        F_00cbd990(this + 8 GEN_EDX_ARG,*(undefined4 *)(this + 0xdc),*(undefined4 *)(this + 0xb8));
      }
      else {
        F_00cbdfe0(this + 8 GEN_EDX_ARG,*(undefined4 *)(this + 0xd4),*(float *)(this + 0xbc),
                     *(float *)(this + 0xd0),gen_bits2f((unsigned int)(*(undefined4 *)(this + 0xdc))),
                     *(undefined4 *)(this + 0xb8));
      }
      *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) & 0xfffffeff;
      *(undefined4 *)(this + 0xdc) = 0;
      return 1;
    }
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1a560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1a560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00d22da0(this GEN_EDX_FWD,param_1,0x40)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x10);
  }
  F_00d1a8f0(*(undefined4 *)(this + 0x128) GEN_EDX_ARG,(uint)puVar1);
  return (uint)(puVar1 + 0x10);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf28 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d1a5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1a5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  uVar3 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x40;
    uVar5 = F_00427d90();
    iVar2 = *(int *)(this + 0x128);
    (*(ulonglong *)(gen_frame + 0x8)) = uVar5;
    if (((*((byte *)GEN_TOP((iVar2 + 4))) & 0x80) == 0) &&
       (bVar4 = GEN_ISNAN((float10)0) || GEN_ISNAN((float10)*((float *)GEN_TOP((iVar2 + 0x30)))),
       bVar4 == (bVar4 || (float10)0 == (float10)*((float *)GEN_TOP((iVar2 + 0x30)))))) {
      uVar1 = *(undefined4 *)(this + 0xa0);
    }
    else {
      uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x2c)));
    }
    (*(undefined4 *)(gen_frame + 0x38)) = uVar1;
    F_00d1a880(&(*(undefined2 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)));
    uVar3 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)),0x40);
  }
  return uVar3;
}

/* ref: FUN_00d1a660 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d1a660(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd1a660u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_FRAME_DECL(0x70, 0);
  int * this;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * pDVar4;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  F_00d22580(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[33])REFP(0x11333cc));
  *(uint *)(param_1 + 0xb0) =
       *(uint *)(param_1 + 0xb0) ^ ((uint)param_5 << 4 ^ *(uint *)(param_1 + 0xb0)) & 0x10;
  if (param_5 == 0) {
    *(undefined4 * PTR32 *)(param_1 + 0x128) = param_2;
  }
  else {
    *(undefined * PTR32 *)(param_1 + 0x128) = param_1 + 0x130;
    puVar3 = param_2;
    pDVar4 = param_1 + 0x130;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 - 1) {
      *(undefined4 *)pDVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pDVar4 = pDVar4 + 4;
    }
    if (*((char *)GEN_TOP((*(int *)(param_1 + 0x128) + 3))) == '\0') {
      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x30))) = (float)(float10)0;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x128);
  F_00d228c0(param_1 GEN_EDX_ARG);
  *(undefined4 *)(param_1 + 0xa0) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x2c)));
  F_00d20fe0(param_1 GEN_EDX_ARG,~(*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 4))) >> 5) & 1);
  this = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xe4))))(this GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x68))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x50);
  }
  F_00d1a5c0(param_1 GEN_EDX_ARG,0x401);
  return (uint)param_1;
}

/* ref: FUN_00d1a780 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d1a780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1a780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x70, 0);
  int * this_00;
  float10 fVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  F_00d22720(this GEN_EDX_FWD,param_1,param_2);
  fVar1 = (float10)1;
  *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) | 0x10;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11333cc));
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x128))) = ((undefined4 *)GEN_TOP(((int)this + 0x130)));
  *((undefined4 *)GEN_TOP(((int)this + 0x134))) = 4;
  *((undefined1 *)GEN_TOP(((int)this + 0x13c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 0;
  *((float *)GEN_TOP(((int)this + 0x140))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x144))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x148))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x14c))) = (float)fVar1;
  *((undefined1 *)GEN_TOP(((int)this + 0x13d))) = 0;
  *((float *)GEN_TOP(((int)this + 0x150))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x164))) = 0;
  *((float *)GEN_TOP(((int)this + 0x154))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x168))) = 0;
  *((float *)GEN_TOP(((int)this + 0x158))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x16c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x13e))) = 0;
  *((float *)GEN_TOP(((int)this + 0x15c))) = (float)(float10)0;
  *((undefined4 *)GEN_TOP(((int)this + 0x130))) = 0x1020040;
  *((float *)GEN_TOP(((int)this + 0x160))) = (float)(float10)0;
  *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x128)));
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x2c)));
  this_00 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x50);
  }
  F_00d1a5c0(this GEN_EDX_ARG,0x401);
  return (uint)this;
}

/* ref: FUN_00d1a880 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d1a880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1a880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *param_1 = *(undefined2 *)this;
  param_1[1] = *((undefined2 *)GEN_TOP(((int)this + 2)));
  *(undefined4 *)(param_1 + 4) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined4 *)(param_1 + 6) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  *(undefined4 *)(param_1 + 0xc) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *(undefined4 *)(param_1 + 0xe) = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  *(undefined4 *)(param_1 + 0x10) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  *(undefined4 *)(param_1 + 0x16) = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  *(undefined4 *)(param_1 + 0x14) = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  param_1[0x18] = *((undefined2 *)GEN_TOP(((int)this + 0x30)));
  param_1[0x19] = *((undefined2 *)GEN_TOP(((int)this + 0x32)));
  *(undefined1 *)(param_1 + 0x1a) = *((undefined1 *)GEN_TOP(((int)this + 0x34)));
  *(undefined4 *)(param_1 + 0x1c) = *((undefined4 *)GEN_TOP(((int)this + 0x38)));
  return 0;
}

/* ref: FUN_00d1a8f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1a8f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd1a8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  F_00d0c080(param_1 GEN_EDX_FWD,param_2);
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x20)));
  *((uint *)GEN_TOP((param_2 + 0x20))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x24)));
  *((uint *)GEN_TOP((param_2 + 0x24))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x28)));
  *((uint *)GEN_TOP((param_2 + 0x28))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x2c)));
  *((uint *)GEN_TOP((param_2 + 0x2c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x30)));
  *((uint *)GEN_TOP((param_2 + 0x30))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((undefined4 *)GEN_TOP((param_2 + 0x34))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 0x38))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 0x3c))) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1a980(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd1a980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[33])REFP(0x11333cc));
  F_00d23680(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1a9c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd1a9c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x80)));
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1a9e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd1a9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x128)));
  *param_2 = *((undefined4 *)GEN_TOP((uVar1 + 0x24)));
  return uVar1;
}

/* ref: FUN_00d1aa00 */
GEN_LIB GEN_NOFRAME double F_00d1aa00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd1aa00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  return 0.0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1aa10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd1aa10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x50) {
    return 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x128)));
  puVar3 = param_2;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x50;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf19 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d1aa40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd1aa40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d1aa50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1aa50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00d1aa60 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1aa60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd1aa60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  float fVar1;
  bool bVar2;
  
  *((float *)GEN_TOP(param_2)) = (float)(float10)1;
  F_00d21d00(param_1 GEN_EDX_FWD,param_2,(int)param_1 + 0x8c);
  F_00d219d0(param_1 GEN_EDX_ARG,param_2,(int)param_1 + 0x8c,param_3);
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x128))) + 0x20))) *
                 (float10)*((float *)GEN_TOP(param_2)))));
  *((float *)GEN_TOP(param_2)) = fVar1;
  *((float *)GEN_TOP(((int)param_1 + 0x80))) = fVar1;
  bVar2 = GEN_ISNAN((float10)0) || GEN_ISNAN((float10)*((float *)GEN_TOP(param_2)));
  if (bVar2 != (bVar2 || (float10)0 == (float10)*((float *)GEN_TOP(param_2)))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00d1aac0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d1aac0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd1aac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float10 fVar1;
  
  fVar1 = (float10)0;
  *param_3 = (float)fVar1;
  param_3[1] = (float)fVar1;
  param_3[3] = 0.0;
  param_3[2] = (float)fVar1;
  *param_1 = (float)fVar1;
  *param_2 = (float)fVar1;
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d1aaf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1aaf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x80, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x60);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf27 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1ab60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1ab60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  bVar1 = F_00d228c0(this GEN_EDX_FWD);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1ab90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1ab90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00d21f00((undefined *)this GEN_EDX_FWD,param_1);
  if (bVar1 == 0) {
    return 0;
  }
  F_00c49386(param_1,((char *)REFP(0x1133460)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x20))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x20))))));
  F_00c49386(param_1,((char *)REFP(0x1133470)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x24))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x24))))));
  F_00c49386(param_1,((char *)REFP(0x113347c)),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x28)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x28)))) >> 0x20));
  F_00c49386(param_1,((char *)REFP(0x113348c)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf31 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1ac10(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd1ac10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  char * pcVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  double dVar6;
  
  pcVar2 = ((char *)REFP(0x11334a4));
  pbVar4 = ((byte *)GEN_TOP(param_2));
  do {
    bVar1 = *pcVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00d1ac41: ;
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00d1ac46;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00d1ac41;
    pcVar2 = pcVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d1ac46: ;
  if (iVar3 == 0) {
    pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
    if (pcVar2 != ((char *)GEN_TOP(0x0))) {
      dVar6 = F_00c4acaa(pcVar2);
      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x20))) = (float)dVar6;
      return 1;
    }
  }
  else {
    pcVar2 = ((char *)REFP(0x11334ac));
    pbVar4 = ((byte *)GEN_TOP(param_2));
    do {
      bVar1 = *pcVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00d1aca7: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00d1acac;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00d1aca7;
      pcVar2 = pcVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d1acac: ;
    if (iVar3 == 0) {
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar6 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24))) = (float)dVar6;
        return 1;
      }
    }
    else {
      pcVar2 = ((char *)REFP(0x11334b4));
      pbVar4 = ((byte *)GEN_TOP(param_2));
      do {
        bVar1 = *pcVar2;
        bVar5 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00d1ad05: ;
          iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_00d1ad0a;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00d1ad05;
        pcVar2 = pcVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d1ad0a: ;
      if (iVar3 != 0) {
        bVar1 = F_00d22040(param_1 GEN_EDX_ARG,param_2);
        return bVar1;
      }
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar6 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28))) = (float)dVar6;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf14 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1ad50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1ad50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ushort uVar1;
  int * this_00;
  int iVar2;
  byte bVar3;
  uint uVar4;
  float fVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_FWD,0x406);
  if (((byte)this[0xb0] & 4) != 0) {
    return 0;
  }
  bVar3 = F_00d217a0((undefined *)this GEN_EDX_ARG,param_1);
  if (bVar3 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(float10)0)));
    *(float *)(this + 0x8c) = (float)(float10)1;
    bVar3 = F_00d1aa60(this GEN_EDX_ARG,(uint)&(*(undefined * PTR32 *)(gen_frame + 0x0)),param_1);
    if (bVar3 != 0) {
      this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
      iVar2 = *(int *)(this + 0x128);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x18))))(this_00 GEN_EDX_ARG);
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 0x10 + (uVar4 & 0xff) * 4))) *
                       (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0)))))))))));
      uVar1 = *((ushort *)GEN_TOP((iVar2 + 0xe)));
      if (uVar1 != 0) {
        fVar5 = F_00d005d0(this_00 GEN_EDX_ARG,(uint)uVar1);
        (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar5 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0)))))))));
      }
      iVar2 = *(int *)(this + 0x128);
      *(undefined * PTR32 *)(this + 0x80) = (*(undefined * PTR32 *)(gen_frame + 0x0));
      if ((*((byte *)GEN_TOP((iVar2 + 0xc))) & 8) != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x0)) = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x20)));
        *(undefined4 *)(this + 0x80) = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
      }
      if ((((byte)this[0xb0] & 0x40) == 0) && (bVar3 = F_00d228c0(this GEN_EDX_ARG), bVar3 == 0)) {
        return 1;
      }
      bVar3 = F_00d00ed0(this_00 GEN_EDX_ARG,this,(uint)(byte)this[0x2d],*(undefined4 *)(this + 0x30),
                           ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0))))));
      return bVar3;
    }
    F_00d219b0(this GEN_EDX_ARG);
    F_00d22c70(this GEN_EDX_ARG,0);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf15 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00d1ae50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1ae50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  int * piVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  (*(char *)(gen_frame + 0x2f)) = '\0';
  bVar5 = F_00d21830((undefined *)this GEN_EDX_FWD);
  if (bVar5 == 0) {
    piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x90))))(piVar8 GEN_EDX_ARG)));
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xfc))))(piVar6 GEN_EDX_ARG,*(undefined4 *)(this + 0x24));
    if ((char)uVar7 == '\0') goto LAB_00d1b16c;
    F_00d2dd80(&(*(float *)(gen_frame + 0x34)),*(undefined4 *)(this + 0x24));
    if (((byte)this[0xb0] & 0x80) == 0) {
      bVar5 = F_00cbe970(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
    }
    else {
      bVar5 = F_00cbe940(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
    }
    if (bVar5 != 0) {
      fVar9 = (float10)0;
      uVar2 = *(undefined4 *)(this + 0x28);
      iVar3 = *piVar6;
      (*(float *)(gen_frame + 0x10)) = (float)fVar9;
      (*(float *)(gen_frame + 0x14)) = (float)fVar9;
      (*(float *)(gen_frame + 0x18)) = (float)fVar9;
      (*(float *)(gen_frame + 0x1c)) = (float)(float10)1;
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x3c))))
                        (piVar6,((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)(this + 0x24),uVar2,&(*(float *)(gen_frame + 0x10)),0,0,1);
      F_00cbbdc0(this + 8 GEN_EDX_ARG,uVar7);
      F_00cbbdb0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      bVar5 = F_00cbc040(this + 8 GEN_EDX_ARG);
      if (bVar5 != 0) {
        (*(char *)(gen_frame + 0x2f)) = '\x01';
        F_00d22bf0(this GEN_EDX_ARG,0x403);
        F_00cbe3b0(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
        goto LAB_00d1af4d;
      }
    }
    F_00cbe3b0(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
  }
  else {
LAB_00d1af4d: ;
    bVar5 = F_00cbc040(this + 8 GEN_EDX_ARG);
    if (bVar5 == 0) {
LAB_00d1b16c: ;
      *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) | 4;
      return 0;
    }
    uVar7 = F_00d00230(piVar8 GEN_EDX_ARG);
    if (uVar7 == 1) {
      fVar1 = *(float *)(this + 0x80);
    }
    else {
      fVar9 = (float10)0;
      (*(float *)(gen_frame + 0x30)) = (float)fVar9;
      (*(float *)(gen_frame + 0x34)) = (float)fVar9;
      (*(float *)(gen_frame + 0x38)) = (float)fVar9;
      (*(undefined4 *)(gen_frame + 0x3c)) = 0;
      F_00cbc9e0(this + 8 GEN_EDX_ARG,(float)fVar9,(float)fVar9,&(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x24)) = *(float *)(this + 0x80);
      fVar1 = (*(float *)(gen_frame + 0x24));
      if (((byte)this[0x2c] & 2) != 0) {
        piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x98))))(piVar8 GEN_EDX_ARG)));
        (*(int * PTR32 *)(gen_frame + 0x20)) = piVar6;
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xd0))))(piVar6 GEN_EDX_ARG);
        iVar3 = *(*(int * PTR32 *)(gen_frame + 0x20));
        (*(uint *)(gen_frame + 0x28)) = uVar7;
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((iVar3 + 0x50))))((*(int * PTR32 *)(gen_frame + 0x20)));
        fVar9 = F_00d2bc80((*(uint *)(gen_frame + 0x28)) GEN_EDX_ARG,(float)extraout_ST0);
        (*(float *)(gen_frame + 0x24)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x24)));
        fVar1 = (*(float *)(gen_frame + 0x24));
      }
    }
    F_00cbc920(this + 8 GEN_EDX_ARG,fVar1);
    F_00cbc980(this + 8 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x24)))));
    (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xc4) * (float10)*(float *)(this + 0x8c))));
    if (((byte)this[0x2c] & 2) != 0) {
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x98))))(piVar8 GEN_EDX_ARG)));
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xd0))))(piVar8 GEN_EDX_ARG);
      iVar3 = *piVar8;
      (*(uint *)(gen_frame + 0x28)) = uVar7;
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((iVar3 + 0x50))))(piVar8);
      fVar9 = F_00d2bc60((*(uint *)(gen_frame + 0x28)) GEN_EDX_ARG,(float)extraout_ST0_00);
      (*(float *)(gen_frame + 0x24)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x24)));
    }
    F_00cbc710(this + 8 GEN_EDX_ARG,(*(float *)(gen_frame + 0x24)));
    if ((*(char *)(gen_frame + 0x2f)) != '\0') {
      dVar4 = GEN_X87(*(double *)&REFG(undefined, 0x1097260) * 0.0);
      fVar1 = *(float *)(this + 0xbc);
      (*(uint *)(gen_frame + 0x28)) = (int)dVar4;
      F_00cbddc0(this + 8 GEN_EDX_ARG,fVar1,(uint)&(*(uint *)(gen_frame + 0x28)));
      fVar1 = *(float *)(this + 0xc0);
      (*(uint *)(gen_frame + 0x28)) = (int)dVar4;
      F_00cbdeb0(this + 8 GEN_EDX_ARG,fVar1,(uint)&(*(uint *)(gen_frame + 0x28)));
      F_00cbc980(this + 8 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x24)))));
      F_00cbcd10(this + 8 GEN_EDX_ARG,*(float *)(this + 200),*(undefined4 *)(this + 0xcc));
      F_00cbce00(this + 8 GEN_EDX_ARG,(uint)(byte)this[0xe0]);
      if ((*(uint *)(this + 0xb0) & 0x400) != 0) {
        F_00cbcbc0(this + 8 GEN_EDX_ARG);
      }
      if ((*(uint *)(this + 0xb0) & 0x100) == 0) {
        F_00cbd990(this + 8 GEN_EDX_ARG,*(undefined4 *)(this + 0xdc),*(undefined4 *)(this + 0xb8));
      }
      else {
        F_00cbdfe0(this + 8 GEN_EDX_ARG,*(undefined4 *)(this + 0xd4),*(float *)(this + 0xbc),
                     *(float *)(this + 0xd0),gen_bits2f((unsigned int)(*(undefined4 *)(this + 0xdc))),
                     *(undefined4 *)(this + 0xb8));
      }
      *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) & 0xfffffeff;
      *(undefined4 *)(this + 0xdc) = 0;
      return 1;
    }
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1b190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1b190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00d22da0(this GEN_EDX_FWD,param_1,0x50)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x14);
  }
  F_00d1b580(*(undefined4 *)(this + 0x128) GEN_EDX_ARG,(uint)puVar1);
  return (uint)(puVar1 + 0x14);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf28 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d1b1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1b1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x40, 0, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c));
  uVar1 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x38;
    (*(ulonglong *)(gen_frame + 0x8)) = F_00427d90();
    F_00d1b510(&(*(undefined2 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)));
    uVar1 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)),0x38);
  }
  return uVar1;
}

/* ref: FUN_00d1b270 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d1b270(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd1b270u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_FRAME_DECL(0x80, 0);
  uint uVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  F_00d22580(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  *param_1 = (int)(*(undefined * PTR32 (*)[33])REFP(0x1133504));
  param_1[0x2c] = param_1[0x2c] ^ ((uint)param_5 << 4 ^ param_1[0x2c]) & 0x10;
  if (param_5 == 0) {
    param_1[0x4a] = (int)param_2;
  }
  else {
    param_1[0x4a] = (int)(param_1 + 0x4c);
    piVar3 = param_2;
    piVar4 = param_1 + 0x4c;
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 - 1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
  }
  param_1[6] = param_1[0x4a];
  F_00d228c0(param_1 GEN_EDX_ARG);
  F_00d20fe0(param_1 GEN_EDX_ARG,~(*((byte *)GEN_TOP((param_1[0x4a] + 4))) >> 5) & 1);
  piVar3 = *((int * PTR32 *)GEN_TOP((param_1[7] + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe4))))(piVar3 GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x68))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x60);
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1[7] + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(param_1 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x28)));
    ((undefined4 *)(gen_frame + 0x28))[0] = 0x380401;
    (*(ulonglong *)(gen_frame + 0x30)) = F_00427d90();
    F_00d1b510(((undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x28)));
    F_00d00b10(*((undefined * PTR32 *)GEN_TOP((param_1[7] + 0xc))) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x28)),0x38);
  }
  return (uint)param_1;
}

/* ref: FUN_00d1b3b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d1b3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1b3b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x80, 0);
  int * this_00;
  float10 fVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  F_00d22720(this GEN_EDX_FWD,param_1,param_2);
  fVar1 = (float10)1;
  *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) | 0x10;
  *((undefined2 * PTR32 *)GEN_TOP(((int)this + 0x128))) = ((undefined2 *)GEN_TOP(((int)this + 0x130)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133504));
  *((undefined2 *)GEN_TOP(((int)this + 0x133))) = 0x400;
  *((undefined1 *)GEN_TOP(((int)this + 0x13c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x135))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x136))) = 0;
  *((float *)GEN_TOP(((int)this + 0x140))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x144))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x148))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x14c))) = (float)fVar1;
  *((undefined2 *)GEN_TOP(((int)this + 0x13e))) = 0;
  *((float *)GEN_TOP(((int)this + 0x150))) = (float)fVar1;
  *((undefined1 *)GEN_TOP(((int)this + 0x13d))) = 0;
  *((float *)GEN_TOP(((int)this + 0x154))) = (float)fVar1;
  *((undefined1 *)GEN_TOP(((int)this + 0x132))) = 1;
  *((float *)GEN_TOP(((int)this + 0x158))) = (float)fVar1;
  *((undefined2 *)GEN_TOP(((int)this + 0x130))) = 0x50;
  *((float *)GEN_TOP(((int)this + 0x15c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x160))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x164))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x168))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x16c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x170))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x174))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x178))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x17c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP(((int)this + 0x128)));
  this_00 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x60);
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x28)));
    ((undefined4 *)(gen_frame + 0x28))[0] = 0x380401;
    (*(ulonglong *)(gen_frame + 0x30)) = F_00427d90();
    F_00d1b510(((undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x28)));
    F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc))) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x28)),0x38);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf29 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d1b500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1b500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00d1b510 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d1b510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1b510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *param_1 = *(undefined2 *)this;
  param_1[1] = *((undefined2 *)GEN_TOP(((int)this + 2)));
  *(undefined4 *)(param_1 + 4) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined4 *)(param_1 + 6) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  *(undefined4 *)(param_1 + 0xc) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *(undefined4 *)(param_1 + 0xe) = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  *(undefined4 *)(param_1 + 0x10) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  *(undefined4 *)(param_1 + 0x16) = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  *(undefined4 *)(param_1 + 0x14) = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  param_1[0x18] = *((undefined2 *)GEN_TOP(((int)this + 0x30)));
  param_1[0x19] = *((undefined2 *)GEN_TOP(((int)this + 0x32)));
  *(undefined1 *)(param_1 + 0x1a) = *((undefined1 *)GEN_TOP(((int)this + 0x34)));
  return 0;
}

/* ref: FUN_00d1b580 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d1b580(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd1b580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  F_00d0c080(param_1 GEN_EDX_FWD,param_2);
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x20)));
  *((uint *)GEN_TOP((param_2 + 0x20))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x24)));
  *((uint *)GEN_TOP((param_2 + 0x24))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x28)));
  *((uint *)GEN_TOP((param_2 + 0x28))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  iVar3 = 8;
  puVar2 = ((uint *)GEN_TOP((param_2 + 0x2c)));
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar2)));
    iVar3 = iVar3 - 1;
    *puVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  *((undefined4 *)GEN_TOP((param_2 + 0x4c))) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1b600(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd1b600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[33])REFP(0x1133504));
  F_00d23680(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00d1b630 */
GEN_LIB GEN_FRAME unsigned int F_00d1b630(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd1b630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00d1b650 */
GEN_LIB GEN_FRAME float10 F_00d1b650(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xd1b650u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00d1b670 */
GEN_LIB GEN_FRAME float10 F_00d1b670(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xd1b670u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_1;
  if ((float10)0 <= fVar1) {
    fVar2 = GEN_X87((float10)*(double *)&REFG(undefined, 0x1080228) + fVar1);
  }
  else {
    fVar2 = GEN_X87(fVar1 - (float10)*(double *)&REFG(undefined, 0x1080228));
  }
  return GEN_X87((float10)((float)GEN_TOF((fVar1 - (float10)REFG(double, 0x10920b8) *
                                  (float10)(int)(fVar2 / (float10)REFG(double, 0x10920b8))))));
}

/* ref: FUN_00d1b7a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d1b7a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1b7a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: FUN_00d1b7b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1b7b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd1b7b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1b7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1b7c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00cffbb0(param_1 GEN_EDX_FWD,param_2,this);
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf7 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d1b7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1b7e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf8 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d1b7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1b7f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf9 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d1b800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1b800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: FUN_00d1b810 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d1b810(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd1b810u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *((float *)GEN_TOP((in_ecx + 0x58))) = param_2;
  *((float *)GEN_TOP((in_ecx + 0x5c))) = param_3;
  return;
}

/* ref: FUN_00d1b830 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d1b830(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1b830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((float *)GEN_TOP((in_ecx + 0x58))) = (float)(float10)0;
  *((float *)GEN_TOP((in_ecx + 0x5c))) = (float)(float10)0;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf19 */
GEN_LIB GEN_NOFRAME float GEN_THISCALL F_00d1b840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1b840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  
  fVar1 = F_00cccde0(this + 0x30 GEN_EDX_FWD);
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf20 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00d1b850(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1b850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x54))) - (float10)*((float *)GEN_TOP((in_ecx + 0x58)))))));
  fVar2 = (float10)*((float *)GEN_TOP((in_ecx + 0x5c)));
  if (fVar1 <= fVar2 && ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar1)) && fVar2 != fVar1)) {
    fVar1 = (float10)*((float *)GEN_TOP((in_ecx + 0x5c)));
  }
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf12 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1b880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1b880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (*(int *)(this + 0x68) == 0) {
    return 0;
  }
  *param_1 = *(undefined4 *)(this + 0x70);
  param_1[1] = *(undefined4 *)(this + 0x74);
  param_1[2] = *(undefined4 *)(this + 0x78);
  param_1[3] = *(undefined4 *)(this + 0x7c);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1b8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1b8b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (*(int *)(this + 0x68) == 0) {
    return 0;
  }
  *param_1 = *(undefined4 *)(this + 0x80);
  param_1[1] = *(undefined4 *)(this + 0x84);
  param_1[2] = *(undefined4 *)(this + 0x88);
  param_1[3] = *(undefined4 *)(this + 0x8c);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf23 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1b8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1b8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (*(int *)(this + 0x68) == 0) {
    return 0;
  }
  F_004eb4e0(param_1 GEN_EDX_FWD,this + 0x90);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf24 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d1b930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1b930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_004eb4e0(this + 0x110 GEN_EDX_FWD,param_1);
  this[0x6d] = (undefined1)0x1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf25 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1b950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1b950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (this[0x6d] == (undefined1)0x0) {
    return 0;
  }
  F_004eb4e0(param_1 GEN_EDX_FWD,this + 0x110);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1b980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1b980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 uVar1;
  undefined4 * puVar2;
  
  if (*(int *)(this + 0x68) == 0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    uVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar1;
    return (uint)param_1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_00c34320(this + 0xd0 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_2)));
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  uVar1 = puVar2[3];
  param_1[2] = puVar2[2];
  param_1[3] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d1b9f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d1b9f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd1b9f0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  if ((float10)*((float *)GEN_TOP((in_ecx + 0x24))) <= (float10)param_3) {
    *((float *)GEN_TOP((in_ecx + 0x20))) = param_2;
    *((float *)GEN_TOP((in_ecx + 0x24))) = param_3;
    return 0;
  }
  return 0;
}

/* ref: FUN_00d1ba20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1ba20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1ba20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  bVar2 = GEN_ISNAN((float10)*((float *)GEN_TOP(((int)this + 0x20)))) || GEN_ISNAN((float10)*((float *)GEN_TOP(((int)this + 0x28))));
  if (bVar2 != (bVar2 || (float10)*((float *)GEN_TOP(((int)this + 0x20))) ==
                         (float10)*((float *)GEN_TOP(((int)this + 0x28))))) {
    fVar4 = (float10)*((float *)GEN_TOP(((int)this + 0x2c)));
    fVar5 = (float10)*((float *)GEN_TOP(((int)this + 0x24)));
    bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
    bVar3 = bVar2 || fVar5 == fVar4;
    uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),
                     (ushort)!(fVar4 <= fVar5) << 8 | (ushort)bVar2 << 10 | (ushort)bVar3 << 0xe);
    if (bVar2 != bVar3) goto LAB_00d1ba7b;
  }
  F_00d2de20(((undefined1 *)(gen_frame + 0x0)),0);
  uVar1 = F_00cbb980(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x20)))),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x24)))));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  F_00cbb890(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
LAB_00d1ba7b: ;
  *((float *)GEN_TOP(((int)this + 0x20))) = (float)(float10)0;
  *((float *)GEN_TOP(((int)this + 0x24))) = (float)(float10)0;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf27 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d1ba90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd1ba90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  float * pfVar2;
  float10 fVar3;
  
  iVar1 = 0;
  *((uint *)GEN_TOP((param_1 + 0x150))) = param_2;
  if (*((char *)GEN_TOP((param_1 + 0x1f2 + param_2 * 2))) != '\0') {
    pfVar2 = ((float *)GEN_TOP((param_1 + 0x15c)));
    do {
      fVar3 = ((float10)GEN_TOD(fcos(
                            (float10)*((float *)GEN_TOP((param_1 + 0x1fc +
                                               (iVar1 + *((int *)GEN_TOP((param_1 + 0x150))) * 6) * 4))))));
      pfVar2[-2] = (float)fVar3;
      fVar3 = ((float10)GEN_TOD(fsin(
                            (float10)*((float *)GEN_TOP((param_1 + 0x1fc +
                                               (iVar1 + *((int *)GEN_TOP((param_1 + 0x150))) * 6) * 4))))));
      iVar1 = iVar1 + 1;
      *pfVar2 = (float)fVar3;
      pfVar2[-1] = (float)(float10)0;
      pfVar2[1] = (float)(float10)0;
      pfVar2 = pfVar2 + 4;
    } while (iVar1 < (int)(uint)*((byte *)GEN_TOP((param_1 + 0x1f2 + *((int *)GEN_TOP((param_1 + 0x150))) * 2))));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf32 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d1bb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1bb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined * pLVar4;
  uint local_8;
  
  iVar1 = *(int *)(this + 0x150);
  uVar2 = (uint)(byte)this[iVar1 * 2 + 0x1f2];
  local_8 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = 0;
      if (uVar2 != 0) {
        pLVar4 = this + (iVar1 * 3 + 0xea) * 2;
        do {
          if (local_8 == (byte)*pLVar4) {
            *((undefined4 *)GEN_TOP((param_1 + local_8 * 4))) =
                 *((undefined4 *)GEN_TOP((this + (iVar3 + iVar1 * 6) * 4 + 0x1fc)));
            break;
          }
          iVar3 = iVar3 + 1;
          pLVar4 = pLVar4 + 1;
        } while (iVar3 < (int)uVar2);
      }
      iVar1 = *(int *)(this + 0x150);
      uVar2 = (uint)(byte)this[iVar1 * 2 + 0x1f2];
      local_8 = local_8 + 1;
    } while ((int)local_8 < (int)uVar2);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf31 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d1bba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1bba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(byte)this[param_1 * 2 + 0x1f2];
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      iVar1 = 0;
      if (uVar2 != 0) {
        do {
          if (uVar3 == (byte)this[iVar1 + (param_1 * 3 + 0xea) * 2]) {
            *((undefined4 *)GEN_TOP((param_2 + uVar3 * 4))) =
                 *((undefined4 *)GEN_TOP((this + (iVar1 + param_1 * 6) * 4 + 0x1fc)));
            break;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)uVar2);
      }
      uVar2 = (uint)(byte)this[param_1 * 2 + 0x1f2];
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)uVar2);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf36 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d1bc10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1bc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x150);
  iVar2 = 0;
  if (this[iVar1 * 2 + 0x1f2] != (undefined1)0x0) {
    do {
      iVar1 = iVar2 + iVar1 * 6;
      iVar2 = iVar2 + 1;
      *((undefined4 *)GEN_TOP((param_1 - 4 + iVar2 * 4))) = *(undefined4 *)(this + iVar1 * 4 + 0x274);
      iVar1 = *(int *)(this + 0x150);
    } while (iVar2 < (int)(uint)(byte)this[iVar1 * 2 + 0x1f2]);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf35 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d1bc60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1bc60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  undefined * pLVar2;
  
  iVar1 = 0;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar2 = this + param_1 * 0x18 + 0x274;
    do {
      iVar1 = iVar1 + 1;
      *((undefined4 *)GEN_TOP((param_2 - 4 + iVar1 * 4))) = *(undefined4 *)pLVar2;
      pLVar2 = pLVar2 + 4;
    } while (iVar1 < (int)(uint)(byte)this[param_1 * 2 + 0x1f2]);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf39 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d1bca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1bca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined * pLVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (this[*(int *)(this + 0x150) * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar1 = this + 0x154;
    puVar2 = param_1;
    do {
      *puVar2 = *(undefined4 *)pLVar1;
      puVar2[1] = *(undefined4 *)(pLVar1 + 4);
      puVar2[2] = *(undefined4 *)(pLVar1 + 8);
      puVar2[3] = *(undefined4 *)(pLVar1 + 0xc);
      iVar3 = iVar3 + 1;
      pLVar1 = pLVar1 + 0x10;
      puVar2 = puVar2 + 4;
    } while (iVar3 < (int)(uint)(byte)this[*(int *)(this + 0x150) * 2 + 0x1f2]);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1bd00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1bd00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  undefined1 LVar1;
  
  *param_1 = this[*(int *)(this + 0x150) * 2 + 0x1f2];
  LVar1 = this[*(int *)(this + 0x150) * 2 + 499];
  *(undefined1 *)param_2 = LVar1;
  return (byte)LVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf29 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1bd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd1bd30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  undefined1 LVar1;
  
  *param_2 = this[param_1 * 2 + 0x1f2];
  LVar1 = this[param_1 * 2 + 499];
  *(undefined1 *)param_3 = LVar1;
  return (byte)LVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1bd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd1bd60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  if (6 < (byte)*param_2) {
    *param_2 = (undefined1)0x6;
  }
  if (1 < (byte)*param_3) {
    *param_3 = (undefined1)0x1;
  }
  this[param_1 * 2 + 0x1f2] = *param_2;
  this[param_1 * 2 + 499] = *param_3;
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf33 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d1bda0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd1bda0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  float10 fVar1;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10920c0);
  *((float *)GEN_TOP((in_ecx + 0x60))) = (float)((float10)param_2 / fVar1);
  *((float *)GEN_TOP((in_ecx + 100))) = (float)((float10)param_3 / fVar1);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf34 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1bdc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd1bdc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float10 fVar1;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10920c0);
  *param_2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x60))) * fVar1)));
  *param_3 = ((float)GEN_TOF((fVar1 * (float10)*((float *)GEN_TOP((in_ecx + 100))))));
  return (uint)param_2;
}

/* ref: FUN_00d1bdf0 */
GEN_LIB GEN_FRAME uint F_00d1bdf0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd1bdf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*param_1;
  fVar2 = (float10)*param_2;
  if (fVar1 <= fVar2 && ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar1)) && fVar2 != fVar1)) {
    return 0xffffffff;
  }
  if (!((float10)*param_1 <= (float10)*param_2) !=
      (GEN_ISNAN((float10)*param_2) || GEN_ISNAN((float10)*param_1))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00d1be30 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d1be30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1be30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  float fVar1;
  byte bVar2;
  undefined1 uVar3;
  float10 fVar4;
  uint uVar5;
  float fVar6;
  float * pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  fVar6 = 0.0;
  if (*((char *)GEN_TOP(((int)this + param_1 * 2 + 0x1f2))) != '\0') {
    fVar4 = (float10)0;
    (*(float * PTR32 *)(gen_frame + 0x0)) = ((float *)GEN_TOP(((int)this + param_1 * 0x18 + 0x1fc)));
    fVar8 = (float10)REFG(double, 0x10920b8);
    do {
      fVar9 = (float10)*(*(float * PTR32 *)(gen_frame + 0x0));
      if (fVar4 <= fVar9) {
        fVar10 = GEN_X87(fVar9 + (float10)*(double *)&REFG(undefined, 0x1080228));
      }
      else {
        fVar10 = GEN_X87(fVar9 - (float10)*(double *)&REFG(undefined, 0x1080228));
      }
      fVar1 = ((float)GEN_TOF((fVar9 - (float10)(int)(fVar10 / fVar8) * fVar8)));
      fVar9 = (float10)fVar1;
      ((float *)(gen_frame + 0xc))[(int)((int)gen_fl2bits(fVar6) * 2 - 1)] = fVar1;
      if (!(fVar4 <= fVar9) != (GEN_ISNAN(fVar9) || GEN_ISNAN(fVar4))) {
        ((float *)(gen_frame + 0xc))[(int)((int)gen_fl2bits(fVar6) * 2 - 1)] = (float)(fVar9 + fVar8);
      }
      bVar2 = *((byte *)GEN_TOP(((int)this + param_1 * 2 + 0x1f2)));
      (*(float * PTR32 *)(gen_frame + 0x0)) = (*(float * PTR32 *)(gen_frame + 0x0)) + 1;
      ((float *)(gen_frame + 0xc))[(int)((int)gen_fl2bits(fVar6) * 2)] = fVar6;
      fVar6 = gen_bits2f((int)gen_fl2bits(fVar6) + 1);
    } while ((int)gen_fl2bits(fVar6) < (int)(uint)bVar2);
  }
  F_00c4f040(&(*(float *)(gen_frame + 0x8)),(uint)*((byte *)GEN_TOP(((int)this + param_1 * 2 + 0x1f2))),8,((code *)REFP(0xd1bdf0)));
  uVar5 = 0;
  if (*((char *)GEN_TOP(((int)this + param_1 * 2 + 0x1f2))) != '\0') {
    pfVar7 = ((float *)GEN_TOP(((int)this + param_1 * 0x18 + 0x1fc)));
    do {
      uVar3 = *(undefined1 *)(((float *)(gen_frame + 0xc)) + uVar5 * 2);
      *pfVar7 = ((float *)(gen_frame + 0xc))[(int)(uVar5 * 2 - 1)];
      *((undefined1 *)GEN_TOP(((int)this + uVar5 + (param_1 * 3 + 0xea) * 2))) = uVar3;
      uVar5 = uVar5 + 1;
      pfVar7 = pfVar7 + 1;
    } while ((int)uVar5 < (int)(uint)*((byte *)GEN_TOP(((int)this + param_1 * 2 + 0x1f2))));
  }
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf42 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d1bf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1bf50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  undefined * pLVar3;
  
  iVar2 = 0;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar3 = this + param_1 * 0x18 + 0x274;
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *(undefined4 *)pLVar3 = *((undefined4 *)GEN_TOP((param_2 + iVar1)));
      pLVar3 = pLVar3 + 4;
    } while (iVar2 < (int)(uint)(byte)this[param_1 * 2 + 0x1f2]);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf38 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d1bf90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1bf90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  float fVar1;
  undefined1 LVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined * pLVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  this[*(int *)(this + 0x150) * 2 + 0x1f2] =
       *(undefined *)(&REFG(undefined, 0x13503a0) + *(int *)(this + 0x150) * 2);
  this[*(int *)(this + 0x150) * 2 + 499] =
       *(undefined *)(&REFG(undefined, 0x13503a1) + *(int *)(this + 0x150) * 2);
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x1fc))) =
       *(undefined4 *)(&REFG(undefined, 0x13503b8) + *(int *)(this + 0x150) * 0x18);
  uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x274))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x274))), REFG(float, 0x1097250));
  iVar8 = 0;
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x200))) =
       *(undefined4 *)(&REFG(undefined, 0x13503bc) + *(int *)(this + 0x150) * 0x18);
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x278))) = uVar5;
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x204))) =
       *(undefined4 *)(&REFG(undefined, 0x13503c0) + *(int *)(this + 0x150) * 0x18);
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x27c))) = uVar5;
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x208))) =
       *(undefined4 *)(&REFG(undefined, 0x13503c4) + *(int *)(this + 0x150) * 0x18);
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x280))) = uVar5;
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x20c))) =
       *(undefined4 *)(&REFG(undefined, 0x13503c8) + *(int *)(this + 0x150) * 0x18);
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x284))) = uVar5;
  *((undefined4 *)GEN_TOP((this + (*(int *)(this + 0x150) * 3 + 0x42) * 8))) =
       *(undefined4 *)(&REFG(undefined, 0x13503cc) + *(int *)(this + 0x150) * 0x18);
  *((undefined4 *)GEN_TOP((this + (*(int *)(this + 0x150) * 3 + 0x51) * 8))) = uVar5;
  iVar3 = *(int *)(this + 0x150);
  if (this[iVar3 * 2 + 0x1f2] != (undefined1)0x0) {
    fVar4 = (float10)0;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + iVar3 * 0x18 + 0x1fc;
    fVar9 = (float10)REFG(double, 0x10920b8);
    do {
      fVar10 = (float10)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x0));
      if (fVar4 <= fVar10) {
        fVar11 = GEN_X87(fVar10 + (float10)*(double *)&REFG(undefined, 0x1080228));
      }
      else {
        fVar11 = GEN_X87(fVar10 - (float10)*(double *)&REFG(undefined, 0x1080228));
      }
      fVar1 = ((float)GEN_TOF((fVar10 - (float10)(int)(fVar11 / fVar9) * fVar9)));
      fVar10 = (float10)fVar1;
      *(float *)(((undefined1 *)(gen_frame + 0xc)) + iVar8 * 8 - 4) = fVar1;
      if (!(fVar4 <= fVar10) != (GEN_ISNAN(fVar10) || GEN_ISNAN(fVar4))) {
        *(float *)(((undefined1 *)(gen_frame + 0xc)) + iVar8 * 8 - 4) = (float)(fVar10 + fVar9);
      }
      LVar2 = this[iVar3 * 2 + 0x1f2];
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
      *(int *)(((undefined1 *)(gen_frame + 0xc)) + iVar8 * 8) = iVar8;
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)(uint)(byte)LVar2);
  }
  F_00c4f040(((undefined1 *)(gen_frame + 0x8)),(uint)(byte)this[iVar3 * 2 + 0x1f2],8,((code *)REFP(0xd1bdf0)));
  uVar6 = 0;
  if (this[iVar3 * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar7 = this + iVar3 * 0x18 + 0x1fc;
    do {
      LVar2 = ((undefined1 *)(gen_frame + 0xc))[(int)(uVar6 * 8)];
      *(undefined4 *)pLVar7 = *(undefined4 *)(((undefined1 *)(gen_frame + 0xc)) + uVar6 * 8 - 4);
      this[uVar6 + (iVar3 * 3 + 0xea) * 2] = LVar2;
      uVar6 = uVar6 + 1;
      pLVar7 = pLVar7 + 4;
    } while ((int)uVar6 < (int)(uint)(byte)this[iVar3 * 2 + 0x1f2]);
  }
  return uVar6;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf37 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d1c1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1c1d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  float fVar1;
  undefined1 LVar2;
  float10 fVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined * pLVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  this[param_1 * 2 + 0x1f2] = *(undefined *)(&REFG(undefined, 0x13503a0) + param_1 * 2);
  this[param_1 * 2 + 499] = *(undefined *)(&REFG(undefined, 0x13503a1) + param_1 * 2);
  *(undefined4 *)(this + param_1 * 0x18 + 0x1fc) = *(undefined4 *)(&REFG(undefined, 0x13503b8) + param_1 * 0x18);
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
  iVar7 = 0;
  *(undefined4 *)(this + param_1 * 0x18 + 0x274) = GEN_FLT_TO(*(undefined4 *)(this + param_1 * 0x18 + 0x274), REFG(float, 0x1097250));
  *(undefined4 *)(this + param_1 * 0x18 + 0x200) = *(undefined4 *)(&REFG(undefined, 0x13503bc) + param_1 * 0x18);
  *(undefined4 *)(this + param_1 * 0x18 + 0x278) = uVar4;
  *(undefined4 *)(this + param_1 * 0x18 + 0x204) = *(undefined4 *)(&REFG(undefined, 0x13503c0) + param_1 * 0x18);
  *(undefined4 *)(this + param_1 * 0x18 + 0x27c) = uVar4;
  *(undefined4 *)(this + param_1 * 0x18 + 0x208) = *(undefined4 *)(&REFG(undefined, 0x13503c4) + param_1 * 0x18);
  *(undefined4 *)(this + param_1 * 0x18 + 0x280) = uVar4;
  *(undefined4 *)(this + param_1 * 0x18 + 0x20c) = *(undefined4 *)(&REFG(undefined, 0x13503c8) + param_1 * 0x18);
  *(undefined4 *)(this + param_1 * 0x18 + 0x284) = uVar4;
  *((undefined4 *)GEN_TOP((this + (param_1 * 3 + 0x42) * 8))) = *(undefined4 *)(&REFG(undefined, 0x13503cc) + param_1 * 0x18)
  ;
  *((undefined4 *)GEN_TOP((this + (param_1 * 3 + 0x51) * 8))) = uVar4;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    fVar3 = (float10)0;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + param_1 * 0x18 + 0x1fc;
    fVar8 = (float10)REFG(double, 0x10920b8);
    do {
      fVar9 = (float10)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x0));
      if (fVar3 <= fVar9) {
        fVar10 = GEN_X87(fVar9 + (float10)*(double *)&REFG(undefined, 0x1080228));
      }
      else {
        fVar10 = GEN_X87(fVar9 - (float10)*(double *)&REFG(undefined, 0x1080228));
      }
      fVar1 = ((float)GEN_TOF((fVar9 - (float10)(int)(fVar10 / fVar8) * fVar8)));
      fVar9 = (float10)fVar1;
      *(float *)(((undefined1 *)(gen_frame + 0xc)) + iVar7 * 8 - 4) = fVar1;
      if (!(fVar3 <= fVar9) != (GEN_ISNAN(fVar9) || GEN_ISNAN(fVar3))) {
        *(float *)(((undefined1 *)(gen_frame + 0xc)) + iVar7 * 8 - 4) = (float)(fVar9 + fVar8);
      }
      LVar2 = this[param_1 * 2 + 0x1f2];
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
      *(int *)(((undefined1 *)(gen_frame + 0xc)) + iVar7 * 8) = iVar7;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)(byte)LVar2);
  }
  F_00c4f040(((undefined1 *)(gen_frame + 0x8)),(uint)(byte)this[param_1 * 2 + 0x1f2],8,((code *)REFP(0xd1bdf0)));
  uVar5 = 0;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar6 = this + param_1 * 0x18 + 0x1fc;
    do {
      LVar2 = ((undefined1 *)(gen_frame + 0xc))[(int)(uVar5 * 8)];
      *(undefined4 *)pLVar6 = *(undefined4 *)(((undefined1 *)(gen_frame + 0xc)) + uVar5 * 8 - 4);
      this[uVar5 + (param_1 * 3 + 0xea) * 2] = LVar2;
      uVar5 = uVar5 + 1;
      pLVar6 = pLVar6 + 4;
    } while ((int)uVar5 < (int)(uint)(byte)this[param_1 * 2 + 0x1f2]);
  }
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf43 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00d1c390(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd1c390u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = GEN_X87((float10)((float)GEN_TOF((((float10)REFG(double, 0x10920b8) - (float10)param_2) -
                          (float10)*(double *)&REFG(undefined, 0x1094620)))));
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1080228);
  if (fVar1 <= fVar2 && ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar1)) && fVar2 != fVar1)) {
    return GEN_X87((float10)(float)(fVar2 - (float10)REFG(double, 0x10920b8)));
  }
  return fVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf44 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00d1c3d0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd1c3d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  
  fVar1 = GEN_X87((float10)(float)((float10)param_2 - (float10)*(double *)&REFG(undefined, 0x1133868)));
  if (!((float10)*(double *)&REFG(undefined, 0x109c9b8) <= fVar1) !=
      (GEN_ISNAN(fVar1) || GEN_ISNAN((float10)*(double *)&REFG(undefined, 0x109c9b8)))) {
    fVar1 = GEN_X87((float10)(float)(fVar1 + (float10)REFG(double, 0x10920b8)));
  }
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf45 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00d1c400(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd1c400u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  
  fVar1 = GEN_X87((float10)((float)GEN_TOF((((float10)REFG(double, 0x10920b8) - (float10)param_2) -
                          (float10)*(double *)&REFG(undefined, 0x1094620)))));
  if (!((float10)0 <= fVar1) != (GEN_ISNAN(fVar1) || GEN_ISNAN((float10)0))) {
    return GEN_X87((float10)(float)(fVar1 + (float10)REFG(double, 0x10920b8)));
  }
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf46 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00d1c440(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd1c440u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  
  fVar1 = GEN_X87((float10)(float)((float10)param_2 - (float10)*(double *)&REFG(undefined, 0x1094620)));
  if (!((float10)0 <= fVar1) != (GEN_ISNAN(fVar1) || GEN_ISNAN((float10)0))) {
    fVar1 = GEN_X87((float10)(float)(fVar1 + (float10)REFG(double, 0x10920b8)));
  }
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf47 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d1c470(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd1c470u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float10 fVar2;
  
  fVar1 = ((float)GEN_TOF(((((float10)param_2 - (float10)REFG(double, 0x1088130)) * (float10)REFG(double, 0x1088108)) *
                 (float10)*(double *)&REFG(undefined, 0x1080228))));
  fVar2 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  *param_3 = (float)((float10)(float)fVar2 * (float10)REFG(double, 0x10944b8));
  param_3[1] = (float)(float10)0;
  fVar2 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  param_3[2] = (float)((float10)(float)fVar2 * (float10)REFG(double, 0x10944b8));
  param_3[3] = GEN_FLT_TO(param_3[3], REFG(float, 0x1097250));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf55 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d1c4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1c4e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf56 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d1c500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1c500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  }
  return 0;
}

/* ref: FUN_00d1c520 */
GEN_LIB_GS GEN_FRAME unsigned int GEN_THISCALL F_00d1c520(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xd1c520u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_FRAME_DECL_GS(0x3c, 4, 4);
  float fVar1;
  int iVar2;
  undefined4 * puVar3;
  float * pfVar4;
  byte * pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 * puVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x34)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x38));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x78))))(param_1 GEN_EDX_FWD,&(*(byte *)(gen_frame + 0xf)),&(*(char *)(gen_frame + 0x7)));
  fVar11 = (float10)REFG(float, 0x1097250);
  fVar14 = (float10)param_4;
  if (!(fVar14 <= fVar11) == ((GEN_ISNAN(fVar11) || GEN_ISNAN(fVar14)) || fVar11 == fVar14)) {
    fVar11 = ((float10)GEN_TOD(atan2((float10)param_3[2],(float10)*param_3)));
    (*(float *)(gen_frame + 0x10)) = (float)fVar11;
    fVar14 = (float10)0;
    fVar11 = (float10)(float)fVar11;
    fVar12 = (float10)REFG(double, 0x10920b8);
    if (!(fVar14 <= fVar11) != (GEN_ISNAN(fVar11) || GEN_ISNAN(fVar14))) {
      (*(float *)(gen_frame + 0x10)) = (float)(fVar11 + fVar12);
      fVar11 = GEN_X87((float10)(float)(fVar11 + fVar12));
    }
    uVar9 = (uint)(*(byte *)(gen_frame + 0xf));
    iVar6 = param_1[0x54];
    uVar8 = uVar9;
    puVar3 = param_2;
    if (uVar9 != 0) {
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
    }
    (*(uint *)(gen_frame + 0x0)) = 0;
    if (uVar9 != 0) {
      do {
        fVar13 = ((float10)GEN_TOD(gen_bits2f(param_1[iVar6 * 6 + (*(uint *)(gen_frame + 0x0)) + 0x7f])));
        if (fVar11 <= fVar13 && ((!GEN_ISNAN(fVar13) && !GEN_ISNAN(fVar11)) && fVar13 != fVar11)) {
          uVar8 = uVar9;
          if (((*(uint *)(gen_frame + 0x0)) == 0) || (uVar8 = (*(uint *)(gen_frame + 0x0)), (*(uint *)(gen_frame + 0x0)) != 0xffffffff)) goto LAB_00d1c603;
          break;
        }
        (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
      } while ((int)(*(uint *)(gen_frame + 0x0)) < (int)uVar9);
    }
    (*(uint *)(gen_frame + 0x0)) = 0;
    uVar8 = uVar9;
LAB_00d1c603: ;
    (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((fVar11 - ((float10)GEN_TOD(gen_bits2f(param_1[iVar6 * 6 + uVar8 + 0x7e]))))));
    fVar11 = GEN_X87((float10)((float)GEN_TOF((fVar11 - ((float10)GEN_TOD(gen_bits2f(param_1[iVar6 * 6 + uVar8 + 0x7e])))))));
    if (!(fVar14 <= fVar11) != (GEN_ISNAN(fVar11) || GEN_ISNAN(fVar14))) {
      (*(float *)(gen_frame + 0x10)) = (float)(fVar11 + fVar12);
      fVar11 = GEN_X87((float10)(float)(fVar11 + fVar12));
    }
    (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_1[iVar6 * 6 + (*(uint *)(gen_frame + 0x0)) + 0x7f]))) -
                      ((float10)GEN_TOD(gen_bits2f(param_1[iVar6 * 6 + uVar8 + 0x7e]))))));
    fVar13 = GEN_X87((float10)((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_1[iVar6 * 6 + (*(uint *)(gen_frame + 0x0)) + 0x7f]))) -
                             ((float10)GEN_TOD(gen_bits2f(param_1[iVar6 * 6 + uVar8 + 0x7e])))))));
    if (!(fVar14 <= fVar13) != (GEN_ISNAN(fVar13) || GEN_ISNAN(fVar14))) {
      (*(float *)(gen_frame + 0x10)) = (float)(fVar13 + fVar12);
      fVar13 = GEN_X87((float10)(float)(fVar13 + fVar12));
    }
    fVar1 = ((float)GEN_TOF((((fVar11 / fVar13) * (float10)*(double *)&REFG(undefined, 0x1080228)) * (float10)REFG(double, 0x1088108))))
    ;
    (*(float *)(gen_frame + 0x10)) = fVar1;
    fVar14 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    (*(float *)(gen_frame + 0x8)) = (float)fVar14;
    param_2[uVar8 - 1] = (undefined4)gen_fl2bits((float)fVar14);
    fVar14 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    (*(float *)(gen_frame + 0x8)) = (float)fVar14;
    iVar6 = 0;
    param_2[(*(uint *)(gen_frame + 0x0))] = (undefined4)gen_fl2bits((float)fVar14);
    if (3 < uVar9) {
      iVar7 = (uVar9 - 4 >> 2) + 1;
      iVar6 = iVar7 * 4;
      puVar3 = param_2 + 2;
      pbVar5 = ((byte *)GEN_TOP(((int)param_1 + param_1[0x54] * 6 + 0x1d6)));
      do {
        iVar7 = iVar7 - 1;
        ((undefined4 *)(gen_frame + 0x14))[(int)(pbVar5[-2])] = puVar3[-2];
        ((undefined4 *)(gen_frame + 0x14))[(int)(pbVar5[-1])] = puVar3[-1];
        ((undefined4 *)(gen_frame + 0x14))[(int)(*pbVar5)] = *puVar3;
        ((undefined4 *)(gen_frame + 0x14))[(int)(pbVar5[1])] = puVar3[1];
        puVar3 = puVar3 + 4;
        pbVar5 = pbVar5 + 4;
      } while (iVar7 != 0);
    }
    if (iVar6 < (int)uVar9) {
      iVar7 = param_1[0x54];
      do {
        iVar2 = iVar6 + (iVar7 * 3 + 0xea) * 2;
        puVar3 = param_2 + iVar6;
        iVar6 = iVar6 + 1;
        ((undefined4 *)(gen_frame + 0x14))[(int)(*((byte *)GEN_TOP(((int)param_1 + iVar2))))] = *puVar3;
      } while (iVar6 < (int)uVar9);
    }
    if (uVar9 != 0) {
      puVar3 = ((undefined4 *)(gen_frame + 0x14));
      puVar10 = param_2;
      for (uVar8 = uVar9; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar10 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar10 = puVar10 + 1;
      }
    }
    fVar1 = ((float)GEN_TOF((((float10)param_4 * (float10)*(double *)&REFG(undefined, 0x1080228)) * (float10)REFG(double, 0x1088108))));
    fVar14 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    (*(float *)(gen_frame + 0x8)) = (float)fVar14;
    fVar11 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    fVar1 = (float)fVar11;
    (*(float *)(gen_frame + 0x8)) = fVar1;
    iVar6 = 0;
    fVar14 = (float10)(float)fVar14;
    if (3 < uVar9) {
      fVar11 = GEN_X87((float10)REFG(double, 0x1088108) * (float10)fVar1);
      iVar7 = (uVar9 - 4 >> 2) + 1;
      iVar6 = iVar7 * 4;
      pfVar4 = (float *)(param_2 + 2);
      do {
        iVar7 = iVar7 - 1;
        pfVar4[-2] = (float)((float10)pfVar4[-2] * fVar14 + fVar11);
        pfVar4[-1] = (float)((float10)pfVar4[-1] * fVar14 + fVar11);
        *pfVar4 = (float)((float10)*pfVar4 * fVar14 + fVar11);
        pfVar4[1] = (float)((float10)pfVar4[1] * fVar14 + fVar11);
        pfVar4 = pfVar4 + 4;
      } while (iVar7 != 0);
    }
    if (iVar6 < (int)uVar9) {
      fVar11 = (float10)REFG(double, 0x1088108);
      do {
        iVar7 = iVar6 + 1;
        param_2[iVar6] =
             (undefined4)
             gen_fl2bits((float)(fVar14 * ((float10)GEN_TOD(gen_bits2f(param_2[iVar6]))) +
                                (float10)fVar1 * fVar11));
        iVar6 = iVar7;
      } while (iVar7 < (int)uVar9);
    }
  }
  else {
    uVar8 = (uint)(*(byte *)(gen_frame + 0xf));
    puVar3 = param_2;
    if (uVar8 != 0) {
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar3 = 0x3f000000;
        puVar3 = puVar3 + 1;
      }
    }
  }
  uVar8 = (uint)(*(byte *)(gen_frame + 0xf));
  if (uVar8 < 8) {
    puVar3 = param_2 + uVar8;
    for (iVar6 = 8 - uVar8; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  param_2[7] = param_2[5];
  param_2[6] = param_2[4];
  param_2[5] = param_2[3];
  param_2[4] = param_2[2];
  param_2[3] = (undefined4)gen_fl2bits((float)(float10)0);
  param_2[2] = (undefined4)gen_fl2bits((float)(float10)0);
  if ((*(char *)(gen_frame + 0x7)) != '\0') {
    param_2[3] = *(undefined4 *)&REFG(undefined, 0x11335a0);
  }
  return 0;
}

/* ref: FUN_00d1c830 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d1c830(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd1c830u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_FRAME_DECL_GS(0x39, 7, 4);
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  undefined3 uVar7;
  float * pfVar5;
  float * pfVar6;
  uint uVar8;
  byte * pbVar9;
  int iVar10;
  int iVar11;
  float * pfVar12;
  bool bVar13;
  ushort uVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x31)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x35));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x78))))(param_1 GEN_EDX_FWD,&(*(byte *)(gen_frame + 0x10)),&(*(char *)(gen_frame + 0x0)));
  fVar15 = (float10)REFG(float, 0x1097250);
  fVar16 = (float10)param_4;
  bVar13 = (GEN_ISNAN(fVar15) || GEN_ISNAN(fVar16)) || fVar15 == fVar16;
  fVar18 = (float10)0;
  if (!(fVar16 <= fVar15) == bVar13) {
    fVar16 = (float10)param_3;
    (*(float *)(gen_frame + 0x5)) = param_3;
    fVar15 = (float10)REFG(double, 0x10920b8);
    if (!(fVar18 <= fVar16) == (GEN_ISNAN(fVar16) || GEN_ISNAN(fVar18))) {
      if (!(fVar16 <= fVar15) != ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar16)) || fVar15 == fVar16)) {
        (*(float *)(gen_frame + 0x5)) = (float)(fVar16 - fVar15);
      }
    }
    else {
      (*(float *)(gen_frame + 0x5)) = (float)(fVar16 + fVar15);
    }
    iVar10 = param_1[0x54];
    uVar8 = (uint)(*(byte *)(gen_frame + 0x10));
    uVar4 = uVar8;
    pfVar5 = param_2;
    if (uVar8 != 0) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pfVar5 = 0.0;
        pfVar5 = pfVar5 + 1;
      }
    }
    fVar16 = (float10)(*(float *)(gen_frame + 0x5));
    uVar4 = 0;
    if (uVar8 != 0) {
      do {
        fVar17 = ((float10)GEN_TOD(gen_bits2f(param_1[iVar10 * 6 + uVar4 + 0x7f])));
        if (fVar16 <= fVar17 && ((!GEN_ISNAN(fVar17) && !GEN_ISNAN(fVar16)) && fVar17 != fVar16)) {
          (*(float *)(gen_frame + 0x1)) = gen_bits2f(uVar4);
          uVar3 = uVar8;
          if ((uVar4 == 0) || (uVar3 = uVar4, uVar4 != 0xffffffff)) goto LAB_00d1c91b;
          break;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar8);
    }
    (*(float *)(gen_frame + 0x1)) = 0.0;
    uVar3 = uVar8;
LAB_00d1c91b: ;
    (*(float *)(gen_frame + 0x5)) = ((float)GEN_TOF((fVar16 - ((float10)GEN_TOD(gen_bits2f(param_1[iVar10 * 6 + uVar3 + 0x7e]))))));
    fVar16 = GEN_X87((float10)((float)GEN_TOF((fVar16 - ((float10)GEN_TOD(gen_bits2f(param_1[iVar10 * 6 + uVar3 + 0x7e])))))));
    if (!(fVar18 <= fVar16) != (GEN_ISNAN(fVar16) || GEN_ISNAN(fVar18))) {
      (*(float *)(gen_frame + 0x5)) = (float)(fVar16 + fVar15);
      fVar16 = GEN_X87((float10)(float)(fVar16 + fVar15));
    }
    (*(float *)(gen_frame + 0x5)) = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_1[iVar10 * 6 + (int)gen_fl2bits((*(float *)(gen_frame + 0x1))) + 0x7fU])))
                      - ((float10)GEN_TOD(gen_bits2f(param_1[iVar10 * 6 + uVar3 + 0x7e]))))));
    fVar17 = GEN_X87((float10)((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_1[iVar10 * 6 +
                                                          (int)gen_fl2bits((*(float *)(gen_frame + 0x1))) + 0x7fU]))) -
                             ((float10)GEN_TOD(gen_bits2f(param_1[iVar10 * 6 + uVar3 + 0x7e])))))));
    bVar13 = GEN_ISNAN(fVar17) || GEN_ISNAN(fVar18);
    pfVar5 = ((float *)GEN_TOP(CONCAT22((short)((uint)gen_fl2bits((*(float *)(gen_frame + 0x1))) >> 0x10),
                               (ushort)!(fVar18 <= fVar17) << 8 | (ushort)bVar13 << 10 |
                               (ushort)(bVar13 || fVar17 == fVar18) << 0xe)));
    if (!(fVar18 <= fVar17) != bVar13) {
      (*(float *)(gen_frame + 0x5)) = (float)(fVar17 + fVar15);
      fVar17 = GEN_X87((float10)(float)(fVar17 + fVar15));
    }
    fVar1 = ((float)GEN_TOF((((fVar16 / fVar17) * (float10)*(double *)&REFG(undefined, 0x1080228)) * (float10)REFG(double, 0x1088108))))
    ;
    (*(float *)(gen_frame + 0x5)) = fVar1;
    fVar16 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    (*(float *)(gen_frame + 0x9)) = (float)fVar16;
    param_2[uVar3 - 1] = (float)fVar16;
    fVar16 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    (*(float *)(gen_frame + 0x9)) = (float)fVar16;
    iVar10 = 0;
    param_2[(int)gen_fl2bits((*(float *)(gen_frame + 0x1)))] = (float)fVar16;
    if (3 < uVar8) {
      iVar11 = (uVar8 - 4 >> 2) + 1;
      iVar10 = iVar11 * 4;
      pfVar6 = param_2 + 2;
      pbVar9 = ((byte *)GEN_TOP(((int)param_1 + param_1[0x54] * 6 + 0x1d6)));
      do {
        pfVar5 = pfVar6 + 4;
        iVar11 = iVar11 - 1;
        ((float *)(gen_frame + 0x11))[(int)(pbVar9[-2])] = pfVar6[-2];
        ((float *)(gen_frame + 0x11))[(int)(pbVar9[-1])] = pfVar6[-1];
        ((float *)(gen_frame + 0x11))[(int)(*pbVar9)] = *pfVar6;
        ((float *)(gen_frame + 0x11))[(int)(pbVar9[1])] = pfVar6[1];
        pfVar6 = pfVar5;
        pbVar9 = pbVar9 + 4;
      } while (iVar11 != 0);
    }
    uVar4 = (uint)(*(byte *)(gen_frame + 0x10));
    if (iVar10 < (int)uVar4) {
      pfVar5 = ((float *)GEN_TOP(((int)param_1 + (param_1[0x54] * 3 + 0xea) * 2)));
      do {
        pbVar9 = ((byte *)GEN_TOP(((int)pfVar5 + iVar10)));
        pfVar6 = param_2 + iVar10;
        iVar10 = iVar10 + 1;
        ((float *)(gen_frame + 0x11))[(int)(*pbVar9)] = *pfVar6;
      } while (iVar10 < (int)uVar4);
    }
    if (uVar4 != 0) {
      pfVar6 = ((float *)(gen_frame + 0x11));
      pfVar12 = param_2;
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pfVar12 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar12 = pfVar12 + 1;
      }
    }
    if (param_6 != 0) {
      fVar16 = (float10)0;
      fVar18 = (float10)param_5;
      bVar13 = (GEN_ISNAN(fVar18) || GEN_ISNAN(fVar16)) || fVar18 == fVar16;
      uVar14 = (ushort)!(fVar16 <= fVar18) << 8 | (ushort)(GEN_ISNAN(fVar18) || GEN_ISNAN(fVar16)) << 10 |
               (ushort)bVar13 << 0xe;
      if (!(fVar16 <= fVar18) == bVar13) {
        fVar16 = ((float10)GEN_TOD(gen_bits2f(param_1[0x18])));
        uVar14 = (ushort)!(fVar18 <= fVar16) << 8 | (ushort)(GEN_ISNAN(fVar16) || GEN_ISNAN(fVar18)) << 10 |
                 (ushort)((GEN_ISNAN(fVar16) || GEN_ISNAN(fVar18)) || fVar16 == fVar18) << 0xe;
        if (!(fVar18 <= fVar16)) {
          fVar16 = ((float10)GEN_TOD(gen_bits2f(param_1[0x19])));
          uVar14 = (ushort)!(fVar18 <= fVar16) << 8 | (ushort)(GEN_ISNAN(fVar16) || GEN_ISNAN(fVar18)) << 10 |
                   (ushort)((GEN_ISNAN(fVar16) || GEN_ISNAN(fVar18)) || fVar16 == fVar18) << 0xe;
          if (!(fVar18 <= fVar16)) {
            fVar1 = ((float)GEN_TOF(((fVar18 - ((float10)GEN_TOD(gen_bits2f(param_1[0x19])))) /
                           ((float10)1 - ((float10)GEN_TOD(gen_bits2f(param_1[0x19])))))));
            (*(float *)(gen_frame + 0x9)) = fVar1;
            fVar1 = ((float)GEN_TOF((((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x1080228)) *
                           (float10)*(double *)&REFG(undefined, 0x1094878))));
            (*(float *)(gen_frame + 0x1)) = fVar1;
            fVar16 = ((float10)GEN_TOD(fcos((float10)fVar1)));
            fVar2 = (float)fVar16;
            (*(float *)(gen_frame + 0x9)) = fVar2;
            (*(float *)(gen_frame + 0x5)) = fVar2;
            fVar16 = ((float10)GEN_TOD(fsin((float10)fVar1)));
            fVar1 = (float)fVar16;
            (*(float *)(gen_frame + 0x9)) = fVar1;
            fVar16 = (float10)fVar1;
            fVar18 = (float10)fVar2;
            param_2[4] = (float)(fVar16 * (float10)param_2[2] + fVar18 * (float10)*param_2);
            param_2[5] = (float)(fVar16 * (float10)param_2[3] + (float10)param_2[1] * fVar18);
            param_2[2] = (float)((float10)*param_2 * fVar16 + (float10)param_2[2] * fVar18);
            param_2[3] = (float)(fVar16 * (float10)param_2[1] + (float10)param_2[3] * fVar18);
          }
          else {
            param_2[4] = *param_2;
            param_2[5] = param_2[1];
          }
          fVar16 = (float10)0;
          *param_2 = (float)fVar16;
        }
        else {
          fVar1 = ((float)GEN_TOF((((((float10)1 / ((float10)GEN_TOD(gen_bits2f(param_1[0x18])))) * fVar18) *
                          (float10)*(double *)&REFG(undefined, 0x1080228)) * (float10)REFG(double, 0x1088108))));
          (*(float *)(gen_frame + 0x1)) = fVar1;
          fVar16 = ((float10)GEN_TOD(fcos((float10)fVar1)));
          fVar2 = (float)fVar16;
          (*(float *)(gen_frame + 0x9)) = fVar2;
          (*(float *)(gen_frame + 0x5)) = fVar2;
          fVar16 = ((float10)GEN_TOD(fsin((float10)fVar1)));
          fVar1 = (float)fVar16;
          (*(float *)(gen_frame + 0x9)) = fVar1;
          param_2[4] = (float)((float10)fVar1 * (float10)*param_2);
          param_2[5] = (float)((float10)fVar1 * (float10)param_2[1]);
          *param_2 = (float)((float10)fVar2 * (float10)*param_2);
          fVar16 = GEN_X87((float10)fVar2 * (float10)param_2[1]);
        }
        param_2[1] = (float)fVar16;
      }
      else {
        param_2[4] = (float)fVar16;
        param_2[5] = (float)fVar16;
      }
      pfVar5 = ((float *)GEN_TOP(CONCAT22((short)((uint)((int)(uintptr_t)pfVar5) >> 0x10),uVar14)));
      (*(byte *)(gen_frame + 0x10)) = 6;
    }
    fVar1 = ((float)GEN_TOF((((float10)param_4 * (float10)*(double *)&REFG(undefined, 0x1080228)) * (float10)REFG(double, 0x1088108))));
    (*(float *)(gen_frame + 0x1)) = fVar1;
    fVar16 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    fVar2 = (float)fVar16;
    (*(float *)(gen_frame + 0x9)) = fVar2;
    (*(float *)(gen_frame + 0x5)) = fVar2;
    fVar16 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    fVar1 = (float)fVar16;
    (*(float *)(gen_frame + 0x9)) = fVar1;
    uVar4 = (uint)(*(byte *)(gen_frame + 0x10));
    iVar10 = 0;
    fVar16 = (float10)fVar2;
    if (3 < uVar4) {
      fVar18 = GEN_X87((float10)REFG(double, 0x1088108) * (float10)fVar1);
      iVar11 = (uVar4 - 4 >> 2) + 1;
      iVar10 = iVar11 * 4;
      pfVar6 = param_2 + 2;
      do {
        pfVar5 = pfVar6 + 4;
        iVar11 = iVar11 - 1;
        pfVar6[-2] = (float)(fVar16 * (float10)pfVar6[-2] + fVar18);
        pfVar6[-1] = (float)((float10)pfVar6[-1] * fVar16 + fVar18);
        *pfVar6 = (float)((float10)*pfVar6 * fVar16 + fVar18);
        pfVar6[1] = (float)((float10)pfVar6[1] * fVar16 + fVar18);
        pfVar6 = pfVar5;
      } while (iVar11 != 0);
    }
    if (iVar10 < (int)uVar4) {
      fVar18 = (float10)REFG(double, 0x1088108);
      do {
        iVar11 = iVar10 + 1;
        param_2[iVar10] = (float)((float10)param_2[iVar10] * fVar16 + (float10)fVar1 * fVar18);
        iVar10 = iVar11;
      } while (iVar11 < (int)uVar4);
    }
  }
  else {
    uVar7 = (undefined3)
            (CONCAT22((short)(uVar4 >> 0x10),
                      (ushort)!(fVar16 <= fVar15) << 8 | (ushort)(GEN_ISNAN(fVar15) || GEN_ISNAN(fVar16)) << 10
                      | (ushort)bVar13 << 0xe) >> 8);
    pfVar5 = ((float *)GEN_TOP(CONCAT31(uVar7,6)));
    if (param_6 == 0) {
      pfVar5 = ((float *)GEN_TOP(CONCAT31(uVar7,(*(byte *)(gen_frame + 0x10)))));
    }
    uVar4 = (uint)pfVar5 & 0xff;
    if (uVar4 != 0) {
      pfVar5 = ((float *)GEN_TOP(0x3f000000));
      pfVar6 = param_2;
      for (uVar8 = uVar4; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pfVar6 = 0.5;
        pfVar6 = pfVar6 + 1;
      }
    }
  }
  if (uVar4 < 8) {
    pfVar5 = ((float *)GEN_TOP(0x0));
    pfVar6 = param_2 + uVar4;
    for (iVar10 = 8 - uVar4; iVar10 != 0; iVar10 = iVar10 - 1) {
      *pfVar6 = 0.0;
      pfVar6 = pfVar6 + 1;
    }
  }
  param_2[7] = param_2[5];
  param_2[6] = param_2[4];
  param_2[5] = param_2[3];
  param_2[4] = param_2[2];
  param_2[3] = (float)(float10)0;
  param_2[2] = (float)(float10)0;
  if ((*(char *)(gen_frame + 0x0)) != '\0') {
    param_2[3] = *(float *)&REFG(undefined, 0x11335a0);
  }
  return (uint)pfVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf51 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00d1cca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd1cca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[6];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  GEN_FRAME_DECL_GS(0x70, 0, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  float * pfVar5;
  uint uVar6;
  float * pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  pfVar5 = (*(float * PTR32 *)&gen_args[5]);
  pfVar4 = (*(float * PTR32 *)&gen_args[4]);
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x28)));
  if ((char)uVar6 != '\0') {
    pfVar7 = ((float *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]))));
    fVar1 = pfVar7[1];
    (*(float *)(gen_frame + 0x14)) = *pfVar7;
    (*(float *)(gen_frame + 0x18)) = fVar1;
    (*(float *)(gen_frame + 0x1c)) = pfVar7[2];
    (*(float *)(gen_frame + 0x20)) = pfVar7[3];
    pfVar7 = ((float *)GEN_TOP(F_00d034e0(&(*(float *)(gen_frame + 0x14)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
    fVar1 = *pfVar7;
    fVar2 = pfVar7[1];
    (*(float *)(gen_frame + 0x14)) = fVar1;
    fVar8 = (float10)fVar1;
    fVar3 = pfVar7[2];
    fVar10 = (float10)0;
    (*(float *)(gen_frame + 0x18)) = fVar2;
    (*(float *)(gen_frame + 0x1c)) = fVar3;
    (*(float *)(gen_frame + 0x20)) = pfVar7[3];
    fVar9 = (float10)fVar3;
    if (((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar8)) == ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar8)) || fVar10 == fVar8)) ||
       ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar9)) == ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar9)) || fVar10 == fVar9))) {
      fVar10 = ((float10)GEN_TOD(atan2(fVar8,-fVar9)));
      (*(float *)(gen_frame + 0x24)) = (float)fVar10;
      (*(float *)(gen_frame + 0x10)) = (float)fVar10;
    }
    else {
      (*(float *)(gen_frame + 0x10)) = (float)fVar10;
    }
    fVar1 = (float)((float10)fVar3 * (float10)fVar3 + (float10)fVar1 * (float10)fVar1);
    (*(float *)(gen_frame + 0x24)) = fVar1;
    fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar1))));
    (*(float *)(gen_frame + 0x24)) = fVar1;
    fVar8 = (float10)fVar2;
    fVar10 = (float10)0;
    fVar9 = (float10)fVar1;
    if (((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar8)) == ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar8)) || fVar10 == fVar8)) ||
       ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar9)) == ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar9)) || fVar10 == fVar9))) {
      fVar10 = ((float10)GEN_TOD(atan2(fVar8,fVar9)));
      (*(float *)(gen_frame + 0x24)) = (float)fVar10;
      fVar10 = (float10)(float)fVar10;
    }
    (*(float *)(gen_frame + 0x24)) = (float)fVar10;
    fVar8 = (float10)*(double *)&REFG(undefined, 0x1092098);
    fVar9 = (float10)*(double *)&REFG(undefined, 0x1080228);
    *pfVar4 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x10)) * fVar8) / fVar9)));
    *pfVar5 = ((float)GEN_TOF(((fVar8 * (float10)(float)fVar10) / fVar9)));
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf53 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1cdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd1cdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  *param_1 = *(undefined4 *)(this + 0x10);
  *param_2 = *(undefined4 *)(this + 0x14);
  uVar1 = *(uint *)(this + 0x18);
  *param_3 = uVar1;
  return uVar1;
}

/* ref: FUN_00d1ce10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d1ce10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1ce10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  int local_8;
  
  *((uint *)GEN_TOP(((int)this + 0xc))) = (uint)*((byte *)GEN_TOP(((int)param_1 + 4)));
  *((uint *)GEN_TOP(((int)this + 0x150))) = (uint)*((byte *)GEN_TOP(((int)param_1 + 5)));
  puVar3 = ((undefined1 *)GEN_TOP(((int)this + 499)));
  local_8 = 5;
  puVar1 = ((undefined4 *)GEN_TOP(((int)param_1 + 0x88)));
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x274)));
  puVar4 = ((undefined1 *)GEN_TOP(((int)param_1 + 0x101)));
  puVar5 = ((undefined1 *)GEN_TOP(((int)this + 0x1d5)));
  param_1 = ((undefined1 *)GEN_TOP(((int)param_1 + 7)));
  do {
    puVar3[-1] = param_1[-1];
    *puVar3 = *param_1;
    param_1 = param_1 + 2;
    puVar3 = puVar3 + 2;
    puVar2[-0x1e] = puVar1[-0x1e];
    *puVar2 = *puVar1;
    puVar5[-1] = puVar4[-1];
    local_8 = local_8 - 1;
    puVar2[-0x1d] = puVar1[-0x1d];
    puVar2[1] = puVar1[1];
    *puVar5 = *puVar4;
    puVar2[-0x1c] = puVar1[-0x1c];
    puVar2[2] = puVar1[2];
    puVar5[1] = puVar4[1];
    puVar2[-0x1b] = puVar1[-0x1b];
    puVar2[3] = puVar1[3];
    puVar5[2] = puVar4[2];
    puVar2[-0x1a] = puVar1[-0x1a];
    puVar2[4] = puVar1[4];
    puVar5[3] = puVar4[3];
    puVar2[-0x19] = puVar1[-0x19];
    puVar2[5] = puVar1[5];
    puVar5[4] = puVar4[4];
    puVar1 = puVar1 + 6;
    puVar2 = puVar2 + 6;
    puVar4 = puVar4 + 6;
    puVar5 = puVar5 + 6;
  } while (local_8 != 0);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1cf10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1cf10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2f0);
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_2 == 0xffffffff) {
    param_2 = *(uint *)(this + 8);
    *(uint *)(this + 8) = param_2 + 1;
  }
  iVar7 = 0;
  if (0 < *(int *)(this + 0x10)) {
    piVar4 = *(int * PTR32 *)(this + 0x2ec);
LAB_00d1cf58: ;
    if (*((uint *)GEN_TOP((*piVar4 + 8))) != param_2) goto code_r0x00d1cf5f;
    piVar4 = ((int *)GEN_TOP((*(int * PTR32 *)(this + 0x2ec))[iVar7]));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG);
    if (uVar5 == param_1) {
      if (this[0x308] == (undefined1)0x0) {
        return param_2;
      }
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return param_2;
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar7 * 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
    }
    iVar7 = iVar7 + 1;
    if (iVar7 < *(int *)(this + 0x10)) {
      do {
        iVar1 = iVar7 * 4;
        iVar2 = iVar7 * 4;
        iVar7 = iVar7 + 1;
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar2 - 4))) =
             *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar1)));
      } while (iVar7 < *(int *)(this + 0x10));
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) - 4 + iVar7 * 4))) = 0;
    *(int *)(this + 0x10) = *(int *)(this + 0x10) - 1;
  }
LAB_00d1cfe9: ;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
  case 1: ;
    if (*(int *)(this + 0x18) <= *(int *)(this + 0x10)) {
LAB_00d1d0b7: ;
      if (this[0x308] != (undefined1)0x0) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
      }
      return 0;
    }
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
    }
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x80,"CDev.Engine.Sd.SoundLayout",0,0,0x10)));
    if (pvVar6 == ((undefined *)GEN_TOP(0x0))) {
LAB_00d1d11b: ;
      uVar5 = 0;
    }
    else {
      uVar5 = F_00d2c8e0(pvVar6 GEN_EDX_ARG,param_2,this);
    }
    break;
  case 2: ;
    if (*(int *)(this + 0x18) <= *(int *)(this + 0x10)) goto LAB_00d1d0b7;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
    }
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x80,"CDev.Engine.Sd.SoundLayout",0,0,0x10)));
    if (pvVar6 == ((undefined *)GEN_TOP(0x0))) goto LAB_00d1d11b;
    uVar5 = F_00d2c550(pvVar6 GEN_EDX_ARG,param_2,this);
    break;
  case 3: ;
    if (*(int *)(this + 0x18) <= *(int *)(this + 0x10)) goto LAB_00d1d0b7;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
    }
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0xb0,"CDev.Engine.Sd.SoundLayout",0,0,0x10)));
    if (pvVar6 == ((undefined *)GEN_TOP(0x0))) goto LAB_00d1d11b;
    uVar5 = F_00d2bf90(pvVar6 GEN_EDX_ARG,param_2,this);
    break;
  default: ;
    goto switchD_00d1cff5_default;
  }
  *((uint *)GEN_TOP((*(int *)(this + 0x2ec) + *(int *)(this + 0x10) * 4))) = uVar5;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
switchD_00d1cff5_default: ;
  if (*(int *)(this + 0x14) < *(int *)(this + 0x10)) {
    *(int *)(this + 0x14) = *(int *)(this + 0x10);
  }
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return param_2;
code_r0x00d1cf5f: ;
  iVar7 = iVar7 + 1;
  piVar4 = piVar4 + 1;
  if (*(int *)(this + 0x10) <= iVar7) goto LAB_00d1cfe9;
  goto LAB_00d1cf58;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1d160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1d160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2f0);
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar2 = 0;
  if (0 < *(int *)(this + 0x10)) {
    piVar3 = *(int * PTR32 *)(this + 0x2ec);
    do {
      if (*((int *)GEN_TOP((*piVar3 + 8))) == param_1) {
        uVar1 = (*(int * PTR32 *)(this + 0x2ec))[iVar2];
        if (this[0x308] != (undefined1)0x0) {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return uVar1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(this + 0x10));
  }
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_00d1d1f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1d1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1d1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x2f0);
  *((undefined1 *)GEN_TOP(((int)this + 0x308))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x2ec)));
    do {
      if (*((int *)GEN_TOP((*piVar3 + 8))) == param_1) {
        uVar1 = (*((int * PTR32 *)GEN_TOP(((int)this + 0x2ec))))[iVar2];
        if (*((char *)GEN_TOP(((int)this + 0x308))) != '\0') {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return uVar1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x10))));
  }
  if (*((char *)GEN_TOP(((int)this + 0x308))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf3 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d1d280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1d280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  
  if (param_1 != 0) {
    this[0x308] = (undefined1)0x1;
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
    iVar5 = 0;
    if (0 < *(int *)(this + 0x10)) {
      piVar4 = *(int * PTR32 *)(this + 0x2ec);
LAB_00d1d2b6: ;
      if (*((int *)GEN_TOP((*piVar4 + 8))) != param_1) goto code_r0x00d1d2c0;
      puVar3 = ((undefined4 *)GEN_TOP((*(int * PTR32 *)(this + 0x2ec))[iVar5]));
      if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
      }
      iVar5 = iVar5 + 1;
      if (iVar5 < *(int *)(this + 0x10)) {
        do {
          iVar1 = iVar5 * 4;
          iVar2 = iVar5 * 4;
          iVar5 = iVar5 + 1;
          *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar2 - 4))) =
               *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar1)));
        } while (iVar5 < *(int *)(this + 0x10));
      }
      *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) - 4 + iVar5 * 4))) = 0;
      *(int *)(this + 0x10) = *(int *)(this + 0x10) - 1;
    }
LAB_00d1d30b: ;
    if (this[0x308] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
    }
  }
  return;
code_r0x00d1d2c0: ;
  iVar5 = iVar5 + 1;
  piVar4 = piVar4 + 1;
  if (*(int *)(this + 0x10) <= iVar5) goto LAB_00d1d30b;
  goto LAB_00d1d2b6;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d1d330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1d330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  iVar2 = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar2 * 4)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x10));
  }
  *(undefined4 *)(this + 0x10) = 0;
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1d390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1d390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  piVar1 = ((int *)GEN_TOP(F_00d1d1f0(this GEN_EDX_ARG,param_1)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,param_2);
  }
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf11 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1d3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1d3e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2f0);
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = ((int *)GEN_TOP(F_00d1d1f0(this GEN_EDX_ARG,param_1)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    if (this[0x308] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (byte)uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf13 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1d440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1d440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2f0);
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = ((int *)GEN_TOP(F_00d1d1f0(this GEN_EDX_ARG,param_1)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    if (this[0x308] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,param_2);
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (byte)uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf14 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1d4b0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd1d4b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0x2f0);
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x308))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = ((int *)GEN_TOP(F_00d1d1f0(param_1 GEN_EDX_ARG,param_2)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    if (*((char *)GEN_TOP(((int)param_1 + 0x308))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  iVar2 = F_00c51673((double)*((float *)GEN_TOP((param_3 + 0x30))));
  if (iVar2 == 0) {
    iVar2 = F_00c51673((double)*((float *)GEN_TOP((param_3 + 0x34))));
    if (iVar2 == 0) {
      iVar2 = F_00c51673((double)*((float *)GEN_TOP((param_3 + 0x38))));
      if (iVar2 == 0) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG,param_3);
        if (*((char *)GEN_TOP(((int)param_1 + 0x308))) != '\0') {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return (byte)uVar3;
      }
    }
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0x308))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf15 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1d580(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd1d580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0x2f0);
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x308))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = ((int *)GEN_TOP(F_00d1d1f0(param_1 GEN_EDX_ARG,param_2)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    if (*((char *)GEN_TOP(((int)param_1 + 0x308))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  iVar2 = F_00c51673((double)*((float *)GEN_TOP((param_3 + 0x30))));
  if (iVar2 == 0) {
    iVar2 = F_00c51673((double)*((float *)GEN_TOP((param_3 + 0x34))));
    if (iVar2 == 0) {
      iVar2 = F_00c51673((double)*((float *)GEN_TOP((param_3 + 0x38))));
      if (iVar2 == 0) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG,param_3);
        if (*((char *)GEN_TOP(((int)param_1 + 0x308))) != '\0') {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return (byte)uVar3;
      }
    }
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0x308))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf16 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1d650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1d650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2f0);
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = ((int *)GEN_TOP(F_00d1d1f0(this GEN_EDX_ARG,param_1)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    if (this[0x308] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG,param_2);
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (byte)uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1d6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1d6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2f0);
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = ((int *)GEN_TOP(F_00d1d1f0(this GEN_EDX_ARG,param_1)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    if (this[0x308] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG);
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1d720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1d720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  piVar1 = ((int *)GEN_TOP(F_00d1d1f0(this GEN_EDX_ARG,param_1)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,param_2);
  }
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf1 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00d1d770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1d770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0xa8, 8, 4);
  byte * pbVar1;
  int * piVar2;
  int * piVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  float10 extraout_ST0;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  ulonglong uVar14;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa4));
  iVar7 = *(int *)(this + 0x68);
  *(undefined4 *)(this + 0x68) = 0;
  (*(byte *)(gen_frame + 0x7)) = 1;
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x30) + 8))))(this + 0x30 GEN_EDX_ARG,param_1);
  (*(int *)(gen_frame + 0x0)) = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x2ec) + (*(int *)(gen_frame + 0x0)) * 4)));
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
      if ((char)uVar5 != '\0') {
        piVar3 = *(int * PTR32 *)(this + 0x68);
        if (piVar3 != ((int *)GEN_TOP(0x0))) {
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x24))))(piVar3 GEN_EDX_ARG);
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG);
          if (uVar6 < uVar5) goto LAB_00d1d808;
        }
        *(int * PTR32 *)(this + 0x68) = piVar2;
      }
LAB_00d1d808: ;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
    } while ((*(int *)(gen_frame + 0x0)) < *(int *)(this + 0x10));
  }
  piVar2 = *(int * PTR32 *)(this + 0x68);
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    (*(byte *)(gen_frame + 0x7)) = 0;
  }
  else {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG);
    if ((char)uVar5 == '\0') {
      (*(byte *)(gen_frame + 0x7)) = 0;
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x68) + 0x1c))))(*(int * PTR32 *)(this + 0x68) GEN_EDX_ARG,this + 0x90);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x68) + 0x10))))(*(int * PTR32 *)(this + 0x68) GEN_EDX_ARG,this + 0x70);
      F_004eb600(this + 0x90 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x60)));
      *(undefined4 *)(this + 0xd0) = (*(undefined4 *)(gen_frame + 0x60));
      *(undefined4 *)(this + 0xd4) = (*(undefined4 *)(gen_frame + 0x64));
      *(undefined4 *)(this + 0xd8) = (*(undefined4 *)(gen_frame + 0x68));
      *(undefined4 *)(this + 0xdc) = (*(undefined4 *)(gen_frame + 0x6c));
      *(undefined4 *)(this + 0xe0) = (*(undefined4 *)(gen_frame + 0x70));
      *(undefined4 *)(this + 0xe4) = (*(undefined4 *)(gen_frame + 0x74));
      *(undefined4 *)(this + 0xe8) = (*(undefined4 *)(gen_frame + 0x78));
      *(undefined4 *)(this + 0xec) = (*(undefined4 *)(gen_frame + 0x7c));
      *(undefined4 *)(this + 0xf0) = (*(undefined4 *)(gen_frame + 0x80));
      *(undefined4 *)(this + 0xf4) = (*(undefined4 *)(gen_frame + 0x84));
      *(undefined4 *)(this + 0xf8) = (*(undefined4 *)(gen_frame + 0x88));
      *(undefined4 *)(this + 0xfc) = (*(undefined4 *)(gen_frame + 0x8c));
      *(undefined4 *)(this + 0x100) = (*(undefined4 *)(gen_frame + 0x90));
      *(undefined4 *)(this + 0x104) = (*(undefined4 *)(gen_frame + 0x94));
      *(undefined4 *)(this + 0x108) = (*(undefined4 *)(gen_frame + 0x98));
      *(undefined4 *)(this + 0x10c) = (*(undefined4 *)(gen_frame + 0x9c));
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x68) + 0x2c))))(*(int * PTR32 *)(this + 0x68) GEN_EDX_ARG);
      if (*(uint *)(this + 0x1c) != uVar5) {
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x68) + 0x2c))))(*(int * PTR32 *)(this + 0x68) GEN_EDX_ARG);
        *(uint *)(this + 0x1c) = uVar5;
        fVar4 = REFG(float, 0x10c75a0);
        if (uVar5 == 0) {
          fVar4 = REFG(float, 0x1097250);
        }
        F_00cccd90(this + 0x30 GEN_EDX_ARG,fVar4,300);
      }
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x68) + 0x34))))(*(int * PTR32 *)(this + 0x68));
      fVar9 = (float10)(float)extraout_ST0;
      bVar8 = GEN_ISNAN((float10)*(float *)(this + 0x54)) || GEN_ISNAN(fVar9);
      if (bVar8 == (bVar8 || (float10)*(float *)(this + 0x54) == fVar9)) {
        fVar10 = (float10)*(double *)&REFG(undefined, 0x1133870);
        fVar13 = GEN_X87((float10)((float)GEN_TOF((fVar9 - (float10)*(float *)(this + 0x54)))) * fVar10);
        fVar11 = (float10)param_1;
        if (!(fVar13 <= fVar11) == (GEN_ISNAN(fVar11) || GEN_ISNAN(fVar13))) {
          fVar12 = ((float10)GEN_TOD(-param_1));
          if (!(fVar13 <= fVar12) || ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar13)) || fVar12 == fVar13)) {
            *(float *)(this + 0x54) =
                 ((float)GEN_TOF(((float10)*(float *)(this + 0x54) +
                        (float10)((float)GEN_TOF((fVar9 - (float10)*(float *)(this + 0x54)))))));
          }
          else {
            *(float *)(this + 0x54) =
                 ((float)GEN_TOF(((float10)*(float *)(this + 0x54) + (float10)(float)(-fVar11 / fVar10))));
          }
        }
        else {
          *(float *)(this + 0x54) =
               ((float)GEN_TOF(((float10)*(float *)(this + 0x54) + (float10)(float)(fVar11 / fVar10))));
        }
      }
    }
  }
  if (iVar7 == *(int *)(this + 0x68)) {
    this[0x6c] = (undefined1)(*((byte *)GEN_TOP((*(int *)(this + 0x68) + 0x7c))) >> 1 & 1);
  }
  else {
    this[0x6c] = (undefined1)0x1;
  }
  iVar7 = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x2ec) + iVar7 * 4))) + 0x7c)));
      *pbVar1 = *pbVar1 & 0xfd;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(this + 0x10));
  }
  if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x2f8))) != 0) {
    ((undefined4 *)(gen_frame + 0x8))[0] = 0x580203;
    uVar14 = F_00427d90();
    (*(ulonglong *)(gen_frame + 0x10)) = uVar14;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x60)));
    if ((char)uVar5 == '\x01') {
      (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 *)(gen_frame + 0x64));
      (*(undefined4 *)(gen_frame + 0x20)) = (*(undefined4 *)(gen_frame + 0x60));
      (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 *)(gen_frame + 0x70));
      (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 *)(gen_frame + 0x68));
      (*(undefined4 *)(gen_frame + 0x2c)) = (*(undefined4 *)(gen_frame + 0x6c));
      (*(undefined4 *)(gen_frame + 0x3c)) = (*(undefined4 *)(gen_frame + 0x7c));
      (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 *)(gen_frame + 0x74));
      (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 *)(gen_frame + 0x78));
      (*(undefined4 *)(gen_frame + 0x48)) = (*(undefined4 *)(gen_frame + 0x88));
      (*(undefined4 *)(gen_frame + 0x40)) = (*(undefined4 *)(gen_frame + 0x80));
      (*(undefined4 *)(gen_frame + 0x44)) = (*(undefined4 *)(gen_frame + 0x84));
      (*(undefined4 *)(gen_frame + 0x54)) = (*(undefined4 *)(gen_frame + 0x94));
      (*(undefined4 *)(gen_frame + 0x4c)) = (*(undefined4 *)(gen_frame + 0x8c));
      (*(undefined4 *)(gen_frame + 0x50)) = (*(undefined4 *)(gen_frame + 0x90));
      (*(undefined4 *)(gen_frame + 0x58)) = (*(undefined4 *)(gen_frame + 0x98));
      (*(undefined4 *)(gen_frame + 0x5c)) = (*(undefined4 *)(gen_frame + 0x9c));
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      F_00d00b10(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x8)),0x58);
    }
  }
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  }
  return (*(byte *)(gen_frame + 0x7));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf41 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d1db20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1db20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0x50, 0, 4);
  int iVar1;
  float fVar2;
  undefined1 LVar3;
  float10 fVar4;
  int iVar5;
  uint uVar6;
  undefined * pLVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  iVar5 = 0;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar7 = this + param_1 * 0x18 + 0x1fc;
    do {
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(undefined4 *)pLVar7 = *((undefined4 *)GEN_TOP((param_2 + iVar1)));
      pLVar7 = pLVar7 + 4;
    } while (iVar5 < (int)(uint)(byte)this[param_1 * 2 + 0x1f2]);
  }
  iVar5 = 0;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    fVar4 = (float10)0;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + param_1 * 0x18 + 0x1fc;
    fVar8 = (float10)REFG(double, 0x10920b8);
    do {
      fVar9 = (float10)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x0));
      if (fVar4 <= fVar9) {
        fVar10 = GEN_X87(fVar9 + (float10)*(double *)&REFG(undefined, 0x1080228));
      }
      else {
        fVar10 = GEN_X87(fVar9 - (float10)*(double *)&REFG(undefined, 0x1080228));
      }
      fVar2 = ((float)GEN_TOF((fVar9 - (float10)(int)(fVar10 / fVar8) * fVar8)));
      fVar9 = (float10)fVar2;
      *(float *)(((undefined1 *)(gen_frame + 0xc)) + iVar5 * 8 - 4) = fVar2;
      if (!(fVar4 <= fVar9) != (GEN_ISNAN(fVar9) || GEN_ISNAN(fVar4))) {
        *(float *)(((undefined1 *)(gen_frame + 0xc)) + iVar5 * 8 - 4) = (float)(fVar9 + fVar8);
      }
      LVar3 = this[param_1 * 2 + 0x1f2];
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
      *(int *)(((undefined1 *)(gen_frame + 0xc)) + iVar5 * 8) = iVar5;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)(byte)LVar3);
  }
  F_00c4f040(((undefined1 *)(gen_frame + 0x8)),(uint)(byte)this[param_1 * 2 + 0x1f2],8,((code *)REFP(0xd1bdf0)));
  uVar6 = 0;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar7 = this + param_1 * 0x18 + 0x1fc;
    do {
      LVar3 = ((undefined1 *)(gen_frame + 0xc))[(int)(uVar6 * 8)];
      *(undefined4 *)pLVar7 = *(undefined4 *)(((undefined1 *)(gen_frame + 0xc)) + uVar6 * 8 - 4);
      this[uVar6 + (param_1 * 3 + 0xea) * 2] = LVar3;
      uVar6 = uVar6 + 1;
      pLVar7 = pLVar7 + 4;
    } while ((int)uVar6 < (int)(uint)(byte)this[param_1 * 2 + 0x1f2]);
  }
  return uVar6;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf49 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d1dc70(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd1dc70u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x19, 7, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x11)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xbc))))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),((undefined1 *)(gen_frame + 0x1)));
  F_00d1c520(param_1 GEN_EDX_ARG,param_3,((undefined1 *)(gen_frame + 0x1)),(float)(float10)0);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x78))))(param_1 GEN_EDX_ARG,param_4,&(*(undefined1 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf50 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00d1dce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd1dce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x6c, 4, 4);
  uint uVar1;
  undefined4 * puVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x68));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x24)));
  if ((char)uVar1 == '\0') {
    return 0;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_1)));
  (*(undefined4 *)(gen_frame + 0x14)) = puVar2[1];
  (*(undefined4 *)(gen_frame + 0x10)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0x18)) = puVar2[2];
  (*(undefined4 *)(gen_frame + 0x1c)) = puVar2[3];
  F_00d1c520(this GEN_EDX_ARG,param_2,&(*(undefined4 *)(gen_frame + 0x10)),(float)(float10)0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x78))))(this GEN_EDX_ARG,param_3,&(*(undefined1 *)(gen_frame + 0x23)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf48 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1dd80(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(float * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd1dd80u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  float fVar1;
  float fVar2;
  byte bVar3;
  float10 fVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  
  uVar5 = param_5;
  fVar2 = *(float *)&REFG(undefined, 0x11335a8);
  fVar1 = REFG(float, 0x1097250);
  bVar3 = *((byte *)GEN_TOP((param_5 + 0xc)));
  if ((bVar3 & 8) != 0) {
    fVar8 = (float10)0;
    *param_6 = (float)fVar8;
    param_6[1] = (float)fVar8;
    param_6[2] = (float)fVar8;
    param_6[3] = GEN_FLT_TO(param_6[3], REFG(float, 0x1097250));
    param_6[4] = (float)fVar8;
    param_6[5] = (float)fVar8;
    param_6[6] = (float)fVar8;
    param_6[7] = (float)fVar8;
    return (uint)param_6;
  }
  bVar7 = GEN_ISNAN((float10)REFG(float, 0x1097250)) || GEN_ISNAN((float10)*((float *)GEN_TOP((param_5 + 4))));
  if (bVar7 == (bVar7 || (float10)REFG(float, 0x1097250) == (float10)*((float *)GEN_TOP((param_5 + 4))))) {
    if ((bVar3 & 1) == 0) {
      if ((bVar3 & 2) == 0) {
        fVar1 = (float)((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1094620) -
                       (float10)*(double *)&REFG(undefined, 0x1094620));
        fVar2 = *((float *)GEN_TOP(param_5));
        fVar8 = (float10)1;
        fVar4 = (float10)0;
        fVar9 = GEN_X87((float10)(float)((float10)param_3 * (float10)*(double *)&REFG(undefined, 0x10944c0) + fVar8));
        param_5 = (uint)gen_fl2bits(fVar1);
        if (!(fVar4 <= fVar9) != (GEN_ISNAN(fVar9) || GEN_ISNAN(fVar4))) {
          param_5 = (uint)gen_fl2bits((float)((float10)fVar1 + (float10)*(double *)&REFG(undefined, 0x1080228)));
          fVar9 = (float10)((float)GEN_TOF(-fVar9));
        }
        param_2 = ((float)GEN_TOF((fVar8 - (float10)((float)GEN_TOF(((fVar8 - (float10)fVar2) * fVar9))))));
        fVar8 = (float10)param_2;
        if (fVar8 <= fVar4 && ((!GEN_ISNAN(fVar4) && !GEN_ISNAN(fVar8)) && fVar4 != fVar8)) {
          param_2 = (float)fVar4;
        }
        fVar9 = ((float10)GEN_TOD(gen_bits2f(param_5)));
        fVar8 = (float10)REFG(double, 0x10920b8);
        if (!(fVar9 <= fVar8) == (GEN_ISNAN(fVar8) || GEN_ISNAN(fVar9))) {
          if (fVar9 <= fVar4) {
            fVar9 = GEN_X87((float10)(float)(fVar9 + fVar8));
          }
        }
        else {
          fVar9 = GEN_X87((float10)(float)(fVar9 - fVar8));
        }
        uVar6 = F_00d1c830(param_1 GEN_EDX_FWD,param_6,(float)fVar9,param_2,param_4,bVar3 >> 4 & 1);
        if ((*((byte *)GEN_TOP((uVar5 + 0xc))) & 4) != 0) {
          fVar8 = (float10)*(double *)&REFG(undefined, 0x1133878);
          param_6[4] = (float)((float10)param_6[4] + (float10)*param_6 * fVar8);
          param_6[5] = (float)(fVar8 * (float10)param_6[1] + (float10)param_6[5]);
        }
        return uVar6;
      }
      *param_6 = *(float *)&REFG(undefined, 0x11335a8);
      param_6[1] = fVar2;
      fVar8 = (float10)0;
      param_6[2] = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)&REFG(undefined, 0x11335a8);
      *param_6 = *(float *)&REFG(undefined, 0x11335a8);
      param_6[1] = fVar2;
      param_6[2] = (float)(float10)0;
    }
    param_6[3] = *(float *)&REFG(undefined, 0x11335a0);
    param_6[4] = (float)fVar8;
    param_6[5] = (float)fVar8;
    param_6[6] = (float)fVar8;
    param_6[7] = (float)fVar8;
    return (uint)param_6;
  }
  fVar8 = (float10)0;
  *param_6 = (float)fVar8;
  param_6[1] = (float)fVar8;
  param_6[3] = (float)fVar8;
  param_6[4] = (float)fVar8;
  param_6[5] = (float)fVar8;
  param_6[6] = (float)fVar8;
  param_6[7] = (float)fVar8;
  param_6[2] = fVar1;
  return (uint)param_6;
}

/* ref: FUN_00d1df30 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d1df30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1df30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x308))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f0));
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2ec))) + iVar2 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_ARG);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x10))));
  }
  if (*((char *)GEN_TOP(((int)this + 0x308))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f0));
  }
  return 0;
}

/* ref: FUN_00d1df80 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1df80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1df80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  short sVar1;
  uint uVar2;
  int * piVar3;
  
  sVar1 = *param_1;
  if (sVar1 == 5) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))
                      (this GEN_EDX_ARG,(uint)*(byte *)(param_1 + 8),*(undefined4 *)(param_1 + 2));
    piVar3 = ((int *)GEN_TOP(F_00d1d1f0(this GEN_EDX_ARG,uVar2)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x58))))(piVar3 GEN_EDX_ARG,param_1 + 8);
    }
    return 1;
  }
  if (sVar1 != 6) {
    if (sVar1 != 8) {
      return 0;
    }
    F_00d1ce10(this GEN_EDX_ARG,param_1);
    return 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,*(undefined4 *)(param_1 + 2));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf54 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d1e000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1e000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x13c, 4, 4);
  undefined4 uVar1;
  undefined1 LVar2;
  uint uVar3;
  undefined * pLVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined * pLVar7;
  undefined * pLVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x134)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x138));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0xe4))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
  if ((char)uVar3 != '\0') {
    (*(undefined1 *)(gen_frame + 0x9)) = this[0x150];
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 499;
    (*(undefined1 *)(gen_frame + 0x8)) = this[0xc];
    (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x12fffdc)) + 0x2c;
    iVar6 = 0;
    pLVar7 = ((undefined1 *)(gen_frame + 0x105));
    pLVar8 = this + 0x1d5;
    puVar5 = ((undefined4 *)(gen_frame + 0x8c));
    pLVar4 = this + 0x274;
    do {
      uVar1 = *(undefined4 *)(pLVar4 - 0x78);
      ((undefined1 *)(gen_frame + 0xa))[(int)(iVar6 * 2)] = (*(undefined * PTR32 *)(gen_frame + 0x0))[-1];
      ((undefined1 *)(gen_frame + 0xa))[(int)(iVar6 * 2 + 1)] = *(*(undefined * PTR32 *)(gen_frame + 0x0));
      LVar2 = pLVar8[-1];
      puVar5[-0x1e] = uVar1;
      *puVar5 = *(undefined4 *)pLVar4;
      pLVar7[-1] = LVar2;
      LVar2 = *(undefined1 *)pLVar8;
      puVar5[-0x1d] = *(undefined4 *)(pLVar4 - 0x74);
      puVar5[1] = *(undefined4 *)(pLVar4 + 4);
      *(undefined1 *)pLVar7 = LVar2;
      LVar2 = pLVar8[1];
      puVar5[-0x1c] = *(undefined4 *)(pLVar4 - 0x70);
      puVar5[2] = *(undefined4 *)(pLVar4 + 8);
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 2;
      uVar1 = *(undefined4 *)(pLVar4 - 0x6c);
      pLVar7[1] = LVar2;
      LVar2 = pLVar8[2];
      puVar5[-0x1b] = uVar1;
      puVar5[3] = *(undefined4 *)(pLVar4 + 0xc);
      pLVar7[2] = LVar2;
      LVar2 = pLVar8[3];
      puVar5[-0x1a] = *(undefined4 *)(pLVar4 - 0x68);
      puVar5[4] = *(undefined4 *)(pLVar4 + 0x10);
      pLVar7[3] = LVar2;
      LVar2 = pLVar8[4];
      puVar5[-0x19] = *(undefined4 *)(pLVar4 - 100);
      puVar5[5] = *(undefined4 *)(pLVar4 + 0x14);
      pLVar7[4] = LVar2;
      iVar6 = iVar6 + 1;
      pLVar7 = pLVar7 + 6;
      pLVar4 = pLVar4 + 0x18;
      puVar5 = puVar5 + 6;
      pLVar8 = pLVar8 + 6;
    } while (iVar6 < 5);
    (*(undefined4 *)(gen_frame + 0x128)) = 0;
    (*(undefined4 *)(gen_frame + 0x12c)) = 0;
    (*(undefined4 *)(gen_frame + 0x130)) = 0;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0xf4))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG);
    if (uVar3 == 0) {
      F_00d1e710(&(*(char * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x4)));
    }
    uVar3 = F_00d00af0(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x4)),0x130);
  }
  return uVar3;
}

/* ref: FUN_00d1e180 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d1e180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1e180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x1133884));
  F_00d1d330(this GEN_EDX_FWD);
  if (*((int *)GEN_TOP(((int)this + 0x2ec))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0x2ec))));
    *((undefined4 *)GEN_TOP(((int)this + 0x2ec))) = 0;
  }
  F_00d2bc40((int)this + 0x30c GEN_EDX_ARG);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f0));
  F_00cccb40((int)this + 0x30 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x1133784));
  return extraout_EAX;
}

/* ref: FUN_00d1e1e0 */
GEN_LIB_GS GEN_FRAME uint F_00d1e1e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd1e1e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x1133744)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x1133724)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00d1e280 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d1e280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1e280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  code * pcVar1;
  float10 fVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  int * piVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x1133884));
  F_00cccb10((int)this + 0x30 GEN_EDX_FWD,(float)(float10)0);
  *((float *)GEN_TOP(((int)this + 0x58))) = (float)(float10)0;
  *((float *)GEN_TOP(((int)this + 0x5c))) = (float)(float10)0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f0));
  *((undefined1 *)GEN_TOP(((int)this + 0x308))) = 1;
  F_00d2bb90(((undefined *)GEN_TOP(((int)this + 0x30c))) GEN_EDX_ARG);
  pcVar1 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x30))) + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  (*pcVar1)((int)this + 0x30,REFG(float, 0x1097250));
  fVar2 = (float10)0;
  *((float *)GEN_TOP(((int)this + 0x54))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x20))) = (float)fVar2;
  *((undefined2 *)GEN_TOP(((int)this + 0x6c))) = 1;
  *((float *)GEN_TOP(((int)this + 0x24))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x28))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x2c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x70))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x74))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x78))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x7c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x80))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x84))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x88))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x8c))) = (float)fVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((int *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x2ec))) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,param_1 * 4,((char *)REFP(0x11335bc)),0,0,0x10);
  *((uint *)GEN_TOP(((int)this + 0x2ec))) = uVar3;
  if (uVar3 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xd1e1e0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x1133688),"",((char *)REFP(0x1133664)),0x69,
                    ((char *)REFP(0x1133620)));
  }
  else {
    iVar4 = 0;
    if (0 < *((int *)GEN_TOP(((int)this + 0x18)))) {
      do {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2ec))) + iVar4 * 4))) = 0;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *((int *)GEN_TOP(((int)this + 0x18))));
    }
  }
  iVar4 = 0;
  do {
    F_00d1c1d0(this GEN_EDX_ARG,iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  F_00d1ba90(this GEN_EDX_ARG,0);
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = *(undefined4 *)&REFG(undefined, 0x11335ac);
  *((undefined4 *)GEN_TOP(((int)this + 100))) = *(undefined4 *)&REFG(undefined, 0x11335b0);
  puVar5 = ((undefined4 *)GEN_TOP(F_004ec420(((undefined1 *)(gen_frame + 0x0)))));
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = *puVar5;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = puVar5[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = puVar5[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = puVar5[3];
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = puVar5[4];
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = puVar5[5];
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = puVar5[6];
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = puVar5[7];
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = puVar5[8];
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = puVar5[9];
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = puVar5[10];
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = puVar5[0xb];
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = puVar5[0xc];
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = puVar5[0xd];
  *((undefined4 *)GEN_TOP(((int)this + 200))) = puVar5[0xe];
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = puVar5[0xf];
  puVar5 = ((undefined4 *)GEN_TOP(F_004ec420(((undefined1 *)(gen_frame + 0x0)))));
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = *puVar5;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = puVar5[1];
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = puVar5[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = puVar5[3];
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = puVar5[4];
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = puVar5[5];
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = puVar5[6];
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = puVar5[7];
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = puVar5[8];
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = puVar5[9];
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = puVar5[10];
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = puVar5[0xb];
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = puVar5[0xc];
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = puVar5[0xd];
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = puVar5[0xe];
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = puVar5[0xf];
  uVar3 = F_00d1cf10(this GEN_EDX_ARG,2,0xffffffff);
  piVar6 = ((int *)GEN_TOP(F_00d1d160(this GEN_EDX_ARG,uVar3)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    F_004ec420(((undefined1 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x14))))(piVar6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x20))))(piVar6 GEN_EDX_ARG,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG,1);
  }
  *((float *)GEN_TOP(((int)this + 0x3a0))) = (float)(float10)0;
  *((undefined1 *)GEN_TOP(((int)this + 0x39c))) = 0;
  *((float *)GEN_TOP(((int)this + 0x3b0))) = (float)(float10)0;
  *((undefined1 *)GEN_TOP(((int)this + 0x3a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3ac))) = 0;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::IListenerManager::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1e5d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd1e5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[57])REFP(0x1133784));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00d1e650 */
GEN_LIB GEN_FRAME uint F_00d1e650(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd1e650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  F_004eb600(param_2 GEN_EDX_ARG,param_1);
  return param_1;
}

/* ref: FUN_00d1e670 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d1e670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1e670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *param_1 = *(undefined2 *)this;
  param_1[1] = *((undefined2 *)GEN_TOP(((int)this + 2)));
  *(undefined4 *)(param_1 + 4) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined4 *)(param_1 + 6) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *(undefined4 *)(param_1 + 0xe) = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  *(undefined4 *)(param_1 + 0x10) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  *(undefined4 *)(param_1 + 0x12) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  *(undefined4 *)(param_1 + 0x14) = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  *(undefined4 *)(param_1 + 0x16) = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  *(undefined4 *)(param_1 + 0x18) = *((undefined4 *)GEN_TOP(((int)this + 0x30)));
  *(undefined4 *)(param_1 + 0x1a) = *((undefined4 *)GEN_TOP(((int)this + 0x34)));
  *(undefined4 *)(param_1 + 0x1c) = *((undefined4 *)GEN_TOP(((int)this + 0x38)));
  *(undefined4 *)(param_1 + 0x1e) = *((undefined4 *)GEN_TOP(((int)this + 0x3c)));
  *(undefined4 *)(param_1 + 0x20) = *((undefined4 *)GEN_TOP(((int)this + 0x40)));
  *(undefined4 *)(param_1 + 0x22) = *((undefined4 *)GEN_TOP(((int)this + 0x44)));
  *(undefined4 *)(param_1 + 0x24) = *((undefined4 *)GEN_TOP(((int)this + 0x48)));
  *(undefined4 *)(param_1 + 0x26) = *((undefined4 *)GEN_TOP(((int)this + 0x4c)));
  *(undefined4 *)(param_1 + 0x28) = *((undefined4 *)GEN_TOP(((int)this + 0x50)));
  *(undefined4 *)(param_1 + 0x2a) = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
  return 0;
}

/* ref: FUN_00d1e710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1e710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1e710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint * puVar2;
  ushort * puVar3;
  uint * puVar4;
  int iVar5;
  ushort * puVar6;
  uint * puVar7;
  int local_14;
  int local_10;
  undefined1 * local_c;
  
  *param_1 = *(ushort *)((int)(uintptr_t)this) << 8 | *(ushort *)((int)(uintptr_t)this) >> 8;
  param_1[1] = *((ushort *)GEN_TOP(((int)this + 2))) << 8 | *((ushort *)GEN_TOP(((int)this + 2))) >> 8;
  *(undefined1 *)(param_1 + 2) = *((undefined1 *)GEN_TOP(((int)this + 4)));
  *((undefined1 *)GEN_TOP(((int)param_1 + 5))) = *((undefined1 *)GEN_TOP(((int)this + 5)));
  local_c = ((undefined1 *)GEN_TOP(((int)this + 7)));
  puVar7 = ((uint *)GEN_TOP(((int)this + 0x88)));
  puVar2 = (uint *)(param_1 + 8);
  puVar6 = param_1 + 0x80;
  puVar3 = param_1 + 3;
  iVar5 = (int)this - (int)param_1;
  local_14 = 5;
  do {
    *(undefined1 *)puVar3 = *((undefined1 *)GEN_TOP(((int)puVar3 + iVar5)));
    *((undefined1 *)GEN_TOP(((int)puVar3 + 1))) = *local_c;
    local_10 = 6;
    puVar4 = puVar2;
    do {
      uVar1 = *((uint *)GEN_TOP((iVar5 + (int)puVar4)));
      *puVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar1 = *puVar7;
      puVar2 = puVar4 + 1;
      puVar4[0x1e] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
      ;
      *(undefined1 *)puVar6 = *((undefined1 *)GEN_TOP((iVar5 + (int)puVar6)));
      puVar7 = puVar7 + 1;
      puVar6 = ((ushort *)GEN_TOP(((int)puVar6 + 1)));
      local_10 = local_10 - 1;
      puVar4 = puVar2;
    } while (local_10 != 0);
    local_c = local_c + 2;
    puVar3 = puVar3 + 1;
    local_14 = local_14 - 1;
  } while (local_14 != 0);
  *(undefined4 *)(param_1 + 0x90) = *((undefined4 *)GEN_TOP(((int)this + 0x120)));
  param_1[0x8f] = 0;
  puVar3 = param_1;
  puVar3[0x92] = 0;
  puVar3[0x93] = 0;
  puVar3[0x94] = 0;
  puVar3[0x95] = 0;
  puVar3[0x96] = 0;
  puVar3[0x97] = 0;
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf21 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d1e820(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1e820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x6c)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf28 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d1e830(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1e830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x150)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf52 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d1e840(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1e840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x30c;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1e850(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd1e850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[57])REFP(0x1133884));
  F_00d1d330(param_1 GEN_EDX_FWD);
  if (*(int *)(param_1 + 0x2ec) != 0) {
    F_00406810(*(int *)(param_1 + 0x2ec));
    *(undefined4 *)(param_1 + 0x2ec) = 0;
  }
  F_00d2bc40(param_1 + 0x30c GEN_EDX_ARG);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f0));
  F_00cccb40(param_1 + 0x30 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[57])REFP(0x1133784));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d1e8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1e8c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auVar9 [16];
  
  iVar6 = *(int *)(this + 0x128);
  *(undefined4 *)(this + 300) = *((undefined4 *)GEN_TOP((iVar6 + 0x20)));
  *(undefined4 *)(this + 0x130) = *((undefined4 *)GEN_TOP((iVar6 + 0x24)));
  *(undefined4 *)(this + 0x134) = *((undefined4 *)GEN_TOP((iVar6 + 0x28)));
  *(undefined4 *)(this + 0x138) = *((undefined4 *)GEN_TOP((iVar6 + 0x2c)));
  iVar6 = *(int *)(this + 0x128);
  *(undefined4 *)(this + 0x13c) = *((undefined4 *)GEN_TOP((iVar6 + 0x20)));
  *(undefined4 *)(this + 0x140) = *((undefined4 *)GEN_TOP((iVar6 + 0x24)));
  *(undefined4 *)(this + 0x144) = *((undefined4 *)GEN_TOP((iVar6 + 0x28)));
  *(undefined4 *)(this + 0x148) = *((undefined4 *)GEN_TOP((iVar6 + 0x2c)));
  iVar6 = 0x30;
  do {
    iVar5 = *(int *)(this + 0x128);
    uVar4 = *((undefined4 *)GEN_TOP((iVar5 + 8 + iVar6)));
    (*(undefined4 *)((char *)&auVar7 + 4)) = uVar4;
    (*(undefined4 *)((char *)&auVar7 + 0)) = *((undefined4 *)GEN_TOP((iVar5 + iVar6)));
    (*(undefined4 *)((char *)&auVar7 + 8)) = uVar4;
    (*(undefined4 *)((char *)&auVar7 + 12)) = *((undefined4 *)GEN_TOP((iVar5 + 0xc + iVar6)));
    (*(undefined8 *)((char *)&auVar8 + 8)) = (*(undefined8 *)((char *)&auVar7 + 8));
    (*(undefined4 *)((char *)&auVar8 + 4)) = *((undefined4 *)GEN_TOP((iVar5 + 4 + iVar6)));
    (*(undefined4 *)((char *)&auVar8 + 0)) = *((undefined4 *)GEN_TOP((iVar5 + iVar6)));
    gen_minps(&(auVar8), &(auVar8), (this + 300));
    local_40 = (*(undefined4 *)((char *)&auVar8 + 0));
    uStack_3c = (*(undefined4 *)((char *)&auVar8 + 4));
    *(undefined4 *)(this + 300) = local_40;
    uStack_38 = (*(undefined4 *)((char *)&auVar8 + 8));
    *(undefined4 *)(this + 0x130) = uStack_3c;
    uStack_34 = (*(undefined4 *)((char *)&auVar8 + 12));
    *(undefined4 *)(this + 0x134) = uStack_38;
    *(undefined4 *)(this + 0x138) = uStack_34;
    iVar5 = *(int *)(this + 0x128);
    uVar4 = *((undefined4 *)GEN_TOP((iVar5 + 8 + iVar6)));
    puVar2 = ((undefined4 *)GEN_TOP((iVar5 + 0xc + iVar6)));
    puVar1 = ((undefined4 *)GEN_TOP((iVar5 + iVar6)));
    puVar3 = ((undefined4 *)GEN_TOP((iVar5 + 4 + iVar6)));
    iVar6 = iVar6 + 0x10;
    (*(undefined4 *)((char *)&auVar10 + 4)) = uVar4;
    (*(undefined4 *)((char *)&auVar10 + 0)) = *puVar1;
    (*(undefined4 *)((char *)&auVar10 + 8)) = uVar4;
    (*(undefined4 *)((char *)&auVar10 + 12)) = *puVar2;
    (*(undefined8 *)((char *)&auVar9 + 8)) = (*(undefined8 *)((char *)&auVar10 + 8));
    (*(undefined4 *)((char *)&auVar9 + 4)) = *puVar3;
    (*(undefined4 *)((char *)&auVar9 + 0)) = *puVar1;
    gen_maxps(&(auVar8), &(auVar9), (this + 0x13c));
    local_40 = (*(undefined4 *)((char *)&auVar8 + 0));
    uStack_3c = (*(undefined4 *)((char *)&auVar8 + 4));
    *(undefined4 *)(this + 0x13c) = local_40;
    uStack_38 = (*(undefined4 *)((char *)&auVar8 + 8));
    *(undefined4 *)(this + 0x140) = uStack_3c;
    uStack_34 = (*(undefined4 *)((char *)&auVar8 + 12));
    *(undefined4 *)(this + 0x144) = uStack_38;
    *(undefined4 *)(this + 0x148) = uStack_34;
  } while (iVar6 < 0x60);
  *(float *)(this + 0x130) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x130) - (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 100)))
              )));
  *(float *)(this + 0x140) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(uint *)(this + 0x128) + 0x60))) +
              (float10)*(float *)(this + 0x140))));
  return *(uint *)(this + 0x128);
}

/* ref: FUN_00d1eaa0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d1eaa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1eaa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133acc));
  F_00cccb40((int)this + 0x14c GEN_EDX_FWD);
  uVar1 = F_00d23680(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1eac0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xd1eac0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  F_00d211a0(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  F_00cccbd0(param_1 + 0x14c GEN_EDX_ARG,param_4);
  F_00cccd90(param_1 + 0x14c GEN_EDX_ARG,param_3,param_2);
  return REFG(undefined4, 0x11299e4);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1eb10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd1eb10u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cccd90(param_1 + 0x14c GEN_EDX_FWD,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d1eb30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1eb30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  F_00d213b0(this GEN_EDX_FWD,param_1,(undefined1)param_2);
  iVar11 = 0;
  do {
    iVar9 = *(int *)(this + 0x128);
    fVar4 = *((float *)GEN_TOP((iVar9 + 0x28 + iVar11)));
    fVar5 = *((float *)GEN_TOP((iVar9 + 0x2c + iVar11)));
    pfVar1 = ((float *)GEN_TOP((iVar9 + 0x20 + iVar11)));
    pfVar2 = ((float *)GEN_TOP((iVar9 + 0x24 + iVar11)));
    fVar6 = param_1[3];
    pfVar3 = ((float *)GEN_TOP((iVar9 + 0x20 + iVar11)));
    iVar11 = iVar11 + 0x10;
    fVar7 = param_1[1];
    fVar8 = param_1[2];
    *pfVar3 = *pfVar1 + *param_1;
    pfVar3[1] = *pfVar2 + fVar7;
    pfVar3[2] = fVar4 + fVar8;
    pfVar3[3] = fVar5 + fVar6;
    *((float *)GEN_TOP((*(int *)(this + 0x128) + 0x1c + iVar11))) = (float)(float10)1;
  } while (iVar11 < 0x40);
  uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG);
  return uVar10;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf14 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1ec10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1ec10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_FWD,0x406);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
  if ((char)uVar1 == '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x14c) + 8))))(this + 0x14c GEN_EDX_ARG,param_1);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf15 */
GEN_LIB GEN_NOFRAME byte F_00d1ec50(void)
{
  GEN_ENTER(0xd1ec50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf21 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1ec60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1ec60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  if (((((float10)*param_1 <= (float10)*(float *)(this + 0x13c)) &&
       ((float10)*(float *)(this + 300) <= (float10)*param_2)) &&
      ((float10)param_1[1] <= (float10)*(float *)(this + 0x140))) &&
     ((((float10)*(float *)(this + 0x130) <= (float10)param_2[1] &&
       ((float10)param_1[2] <= (float10)*(float *)(this + 0x144))) &&
      ((float10)*(float *)(this + 0x134) <= (float10)param_2[2])))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00d1ecf0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d1ecf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1ecf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x6c, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float * pfVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float fVar18;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  fVar1 = param_1[2];
  fVar2 = param_1[3];
  fVar3 = *param_1;
  fVar4 = param_1[1];
  iVar8 = *((int *)GEN_TOP(((int)this + 0x128)));
  fVar5 = param_2[3];
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar18 = *param_2;
  ((byte *)(gen_frame + 0x50))[0] = 0;
  ((byte *)(gen_frame + 0x50))[1] = 1;
  ((byte *)(gen_frame + 0x50))[2] = 1;
  ((byte *)(gen_frame + 0x50))[3] = 2;
  ((byte *)(gen_frame + 0x50))[4] = 2;
  ((byte *)(gen_frame + 0x50))[5] = 3;
  ((byte *)(gen_frame + 0x50))[6] = 3;
  ((byte *)(gen_frame + 0x50))[7] = 0;
  iVar11 = 0;
  fVar18 = fVar18 - fVar3;
  (*(float *)(gen_frame + 0x0)) = fVar6 - fVar4;
  (*(float *)(gen_frame + 0x8)) = fVar5 - fVar2;
  fVar12 = GEN_X87((float10)(fVar7 - fVar1));
  while( true ) {
    iVar9 = (((byte *)(gen_frame + 0x50))[(int)(iVar11 * 2)] + 2) * 0x10;
    fVar5 = *((float *)GEN_TOP((iVar9 + iVar8)));
    iVar9 = iVar9 + iVar8;
    pfVar10 = ((float *)GEN_TOP(((((byte *)(gen_frame + 0x50))[(int)(iVar11 * 2 + 1)] + 2) * 0x10 + iVar8)));
    (*(float *)(gen_frame + 0x10)) = pfVar10[1] - *((float *)GEN_TOP((iVar9 + 4)));
    (*(float *)(gen_frame + 0x18)) = pfVar10[3] - *((float *)GEN_TOP((iVar9 + 0xc)));
    fVar13 = GEN_X87(((float10)GEN_TOD((pfVar10[2] - *((float *)GEN_TOP((iVar9 + 8)))))));
    fVar14 = GEN_X87((float10)(*pfVar10 - fVar5));
    fVar15 = GEN_X87((float10)(float)(fVar13 * (float10)fVar18 - fVar14 * fVar12));
    (*(float *)(gen_frame + 0x10)) = *((float *)GEN_TOP((iVar9 + 4))) - fVar4;
    (*(float *)(gen_frame + 0x18)) = *((float *)GEN_TOP((iVar9 + 0xc))) - fVar2;
    fVar16 = GEN_X87((float10)(fVar5 - fVar3));
    fVar17 = GEN_X87(((float10)GEN_TOD((*((float *)GEN_TOP((iVar9 + 8))) - fVar1))));
    fVar13 = GEN_X87((float10)((float)GEN_TOF(((fVar16 * fVar13 - fVar17 * fVar14) / fVar15))));
    if (((((float10)0 <= fVar13) && (fVar13 <= (float10)1)) &&
        (fVar13 = (float10)((float)GEN_TOF(((fVar16 * fVar12 - (float10)fVar18 * fVar17) / fVar15))),
        (float10)0 <= fVar13)) && (!((float10)1 <= fVar13))) break;
    iVar11 = iVar11 + 1;
    if (3 < iVar11) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00d1eee0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d1eee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1eee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x70, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  byte bVar10;
  float * pfVar11;
  float * pfVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  iVar13 = *((int *)GEN_TOP(((int)this + 0x128)));
  fVar9 = (float10)0;
  fVar14 = GEN_X87((float10)((float)GEN_TOF(((float10)param_1[1] - (float10)*((float *)GEN_TOP((iVar13 + 0x24)))))));
  if (!(fVar9 <= fVar14) || ((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar9)) || fVar14 == fVar9)) {
    if ((!(fVar9 <= fVar14) != (GEN_ISNAN(fVar14) || GEN_ISNAN(fVar9))) && ((*((byte *)GEN_TOP((iVar13 + 4))) & 0x10) == 0)
       ) {
      fVar15 = (float10)*((float *)GEN_TOP((iVar13 + 100)));
      fVar14 = -fVar14;
      if (fVar15 <= fVar14 && ((!GEN_ISNAN(fVar14) && !GEN_ISNAN(fVar15)) && fVar14 != fVar15)) {
        return 0xfffffffe;
      }
    }
  }
  else if (((*((byte *)GEN_TOP((iVar13 + 4))) & 8) == 0) &&
          (!(fVar14 <= (float10)*((float *)GEN_TOP((iVar13 + 0x60)))) !=
           (GEN_ISNAN((float10)*((float *)GEN_TOP((iVar13 + 0x60)))) || GEN_ISNAN(fVar14)))) {
    return 0xffffffff;
  }
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  pfVar12 = ((float *)GEN_TOP((iVar13 + 0x20)));
  iVar13 = 4;
  pfVar11 = ((float *)(gen_frame + 0x18)) + 1;
  do {
    fVar5 = *pfVar12;
    fVar6 = pfVar12[1];
    fVar7 = pfVar12[2];
    fVar8 = pfVar12[3];
    pfVar12 = pfVar12 + 4;
    iVar13 = iVar13 - 1;
    (*(float *)(gen_frame + 0x0)) = fVar1 - fVar5;
    (*(float *)(gen_frame + 0x4)) = fVar2 - fVar6;
    (*(float *)(gen_frame + 0x8)) = fVar3 - fVar7;
    (*(float *)(gen_frame + 0xc)) = fVar4 - fVar8;
    pfVar11[-1] = fVar1 - fVar5;
    pfVar11[1] = fVar3 - fVar7;
    pfVar11[2] = fVar4 - fVar8;
    *pfVar11 = (float)fVar9;
    pfVar11 = pfVar11 + 4;
  } while (iVar13 != 0);
  F_01052f50(((float *)(gen_frame + 0x18)),&(*(float *)(gen_frame + 0x0)));
  bVar10 = F_01053270(((float *)(gen_frame + 0x18)),&(*(float *)(gen_frame + 0x0)));
  return (uint)(bVar10 != 0);
}

/* ref: FUN_00d1f050 */
GEN_LIB GEN_NOFRAME float GEN_THISCALL F_00d1f050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1f050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x88, 8);
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  bool bVar8;
  float * pfVar9;
  float * pfVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  (*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78);
  fVar17 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  pfVar9 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x20)));
  iVar11 = 4;
  pfVar10 = ((float *)(gen_frame + 0x20)) + 1;
  do {
    fVar14 = *pfVar9;
    fVar6 = pfVar9[1];
    pfVar1 = pfVar9 + 2;
    pfVar2 = pfVar9 + 3;
    pfVar9 = pfVar9 + 4;
    iVar11 = iVar11 - 1;
    fVar14 = fVar14 - fVar17;
    fVar15 = *pfVar1 - fVar4;
    fVar16 = *pfVar2 - fVar5;
    (*(float *)(gen_frame + 0x8)) = fVar14;
    (*(float *)(gen_frame + 0xc)) = fVar6 - fVar3;
    (*(float *)(gen_frame + 0x10)) = fVar15;
    (*(float *)(gen_frame + 0x14)) = fVar16;
    (*(float *)(gen_frame + 0x64)) = fVar14;
    pfVar10[-1] = fVar14;
    (*(float *)(gen_frame + 0x68)) = fVar6 - fVar3;
    (*(float *)(gen_frame + 0x6c)) = fVar15;
    pfVar10[1] = fVar15;
    (*(float *)(gen_frame + 0x70)) = fVar16;
    pfVar10[2] = fVar16;
    *pfVar10 = (float)(float10)0;
    pfVar10 = pfVar10 + 4;
  } while (iVar11 != 0);
  (*(float *)(gen_frame + 0x0)) = (float)(float10)0;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x70)) + 0)) = 1;
  (*(float *)(gen_frame + 0x6c)) = 3.7616967e-37;
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x70)) + 1)) = 0x302;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x70)) + 3)) = 2;
  (*(float *)(gen_frame + 0x70)) = 9.624935e-38;
  bVar8 = false;
  iVar11 = 0;
  do {
    fVar17 = F_010536a0(((float *)(gen_frame + 0x20)) + (uint)*((byte *)GEN_TOP(((int)&(*(float *)(gen_frame + 0x6c)) + iVar11 * 2))) * 4,
                          ((float *)(gen_frame + 0x20)) + (uint)*((byte *)GEN_TOP(((int)&(*(float *)(gen_frame + 0x6c)) + iVar11 * 2 + 1))) * 4,&(*(float *)(gen_frame + 0x8)))
    ;
    fVar12 = (float10)fVar17;
    if (bVar8) {
      fVar13 = (float10)(*(float *)(gen_frame + 0x0));
      if (fVar12 <= fVar13 && ((!GEN_ISNAN(fVar13) && !GEN_ISNAN(fVar12)) && fVar13 != fVar12)) {
        (*(float *)(gen_frame + 0x0)) = fVar17;
      }
    }
    else {
      bVar8 = true;
      (*(float *)(gen_frame + 0x0)) = fVar17;
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 4);
  bVar7 = *((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 4)));
  if ((bVar7 & 8) == 0) {
    fVar12 = GEN_X87((float10)((float)GEN_TOF((((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x60))) +
                              (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x24)))) -
                             (float10)param_1[1]))));
    if (!((float10)0 <= fVar12) != (GEN_ISNAN(fVar12) || GEN_ISNAN((float10)0))) {
      fVar12 = (float10)((float)GEN_TOF(-fVar12));
    }
    fVar13 = (float10)(*(float *)(gen_frame + 0x0));
    if (fVar12 <= fVar13 && ((!GEN_ISNAN(fVar13) && !GEN_ISNAN(fVar12)) && fVar13 != fVar12)) {
      (*(float *)(gen_frame + 0x0)) = (float)fVar12;
    }
  }
  if ((bVar7 & 0x10) == 0) {
    fVar12 = GEN_X87((float10)((float)GEN_TOF((((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x24))) -
                              (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 100)))) -
                             (float10)param_1[1]))));
    if (!((float10)0 <= fVar12) != (GEN_ISNAN(fVar12) || GEN_ISNAN((float10)0))) {
      fVar12 = (float10)((float)GEN_TOF(-fVar12));
    }
    fVar13 = (float10)(*(float *)(gen_frame + 0x0));
    if (!(fVar12 <= fVar13) || ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) || fVar13 == fVar12))
    goto LAB_00d1f216;
    (*(float *)(gen_frame + 0x0)) = (float)fVar12;
  }
  fVar13 = (float10)(*(float *)(gen_frame + 0x0));
LAB_00d1f216: ;
  return (float)fVar13;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1f230(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd1f230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x80) {
    return 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x128)));
  puVar3 = param_2;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x80;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf19 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d1f270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd1f270u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d1f280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1f280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1f290(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xd1f290u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  float fVar1;
  uint uVar2;
  float10 fVar3;
  bool bVar4;
  float10 fVar5;
  float10 extraout_ST0;
  float local_8;
  
  fVar3 = (float10)0;
  local_8 = (float)fVar3;
  fVar5 = (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x128))) + 0x74)));
  bVar4 = GEN_ISNAN(fVar3) || GEN_ISNAN(fVar5);
  if (bVar4 == (bVar4 || fVar3 == fVar5)) {
    if (param_5 == 0.0) {
      fVar5 = (float10)param_4;
      if ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar3)) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar3)) || fVar5 == fVar3)) {
        local_8 = ((float)GEN_TOF((fVar5 / (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x128))) + 0x74))))));
        fVar3 = (float10)1;
        if (!((float10)local_8 <= fVar3) != (GEN_ISNAN(fVar3) || GEN_ISNAN((float10)local_8))) {
          local_8 = (float)fVar3;
        }
      }
    }
    else {
      local_8 = (float)(float10)1;
    }
  }
  else {
    local_8 = (float)(float10)1;
  }
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14c))) + 0x10))))(param_1 + 0x14c);
  uVar2 = *((uint *)GEN_TOP((param_1 + 0x128)));
  fVar1 = ((float)GEN_TOF(((float10)1 -
                 (float10)(float)(extraout_ST0 * (float10)local_8) *
                 (float10)*((float *)GEN_TOP((uVar2 + 0x68))))));
  *param_2 = fVar1;
  if ((*((byte *)GEN_TOP((uVar2 + 0x70))) & 0x10) == 0) {
    *param_3 = fVar1;
    return uVar2;
  }
  *param_3 = ((float)GEN_TOF(((float10)1 -
                    (float10)(float)(extraout_ST0 * (float10)local_8) *
                    (float10)*((float *)GEN_TOP((uVar2 + 0x6c))))));
  return (uint)param_3;
}

/* ref: FUN_00d1f360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d1f360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1f360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  ushort uVar1;
  uint uVar2;
  float10 fVar3;
  
  if (param_1 == 0) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x7a)));
    fVar3 = (float10)1;
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x78)));
    fVar3 = (float10)0;
  }
  uVar2 = F_00cccd90((int)this + 0x14c GEN_EDX_FWD,(float)fVar3,(uint)uVar1 * 1000 >> 4);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d1f3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd1f3a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xb0, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf27 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d1f420(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd1f420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 0x128)));
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf29 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d1f440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(HWND param_1, unsigned int gen_a1), GEN_P(HDC param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd1f440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(HWND param_1 = (HWND)gen_a1;)
  GEN_PIN(HDC param_2 = (HDC)gen_a2;)
  GEN_FRAME_DECL_GS(0x110, 0, 4);
  char cVar1;
  undefined * pBVar2;
  HGDIOBJ pvVar3;
  undefined * pHVar4;
  int * piVar5;
  uint uVar6;
  float * pfVar7;
  char * pcVar8;
  int iVar9;
  int x;
  int iVar10;
  int iVar11;
  float fVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c));
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  pvVar3 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x24)) = pvVar3;
  pvVar3 = gen_imp_SelectObject(param_2,pvVar3);
  (*(HGDIOBJ *)(gen_frame + 0x28)) = pvVar3;
  pHVar4 = gen_imp_CreatePen(0,2,0x8000);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pHVar4;
  pvVar3 = gen_imp_SelectObject(param_2,pHVar4);
  (*(HGDIOBJ *)(gen_frame + 0x1c)) = pvVar3;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x98)));
  iVar11 = (*(tagRECT *)(gen_frame + 0x98)).right / 2;
  iVar10 = (*(tagRECT *)(gen_frame + 0x98)).bottom / 2;
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x1c) + 0xc))) + 0x98))))
                            (*((int * PTR32 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x1c) + 0xc))) GEN_EDX_ARG)));
  (*(int * PTR32 *)(gen_frame + 0x38)) = piVar5;
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x5c))))(piVar5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x48)));
  if ((char)uVar6 != '\0') {
    (*(byte *)(gen_frame + 0x47)) = *((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x128) + 4))) >> 2 & 1;
    (*(float * PTR32 *)(gen_frame + 0x40)) = &(*(float *)(gen_frame + 0xac));
    (*(int *)(gen_frame + 0x34)) = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x128) + 0x20;
    (*(int *)(gen_frame + 0x3c)) = 4;
    do {
      pfVar7 = ((float *)GEN_TOP(F_00c34320(((undefined1 *)(gen_frame + 0x48)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x34)))));
      (*(float * PTR32 *)(gen_frame + 0x40))[-1] = *pfVar7;
      *(*(float * PTR32 *)(gen_frame + 0x40)) = pfVar7[1];
      fVar12 = pfVar7[3];
      (*(float * PTR32 *)(gen_frame + 0x40))[1] = pfVar7[2];
      (*(float * PTR32 *)(gen_frame + 0x40))[2] = fVar12;
      if ((*(byte *)(gen_frame + 0x47)) == 0) {
        *(*(float * PTR32 *)(gen_frame + 0x40)) = (float)(float10)0;
      }
      (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 0x10;
      iVar9 = (*(int *)(gen_frame + 0x3c)) - 1;
      (*(int *)(gen_frame + 0x3c)) = iVar9;
      (*(float * PTR32 *)(gen_frame + 0x40)) = (*(float * PTR32 *)(gen_frame + 0x40)) + 4;
    } while (iVar9 != 0);
    iVar9 = iVar10 - (int)((double)(*(float *)(gen_frame + 0xb0)) * *(double *)&REFG(double, 0x1132488));
    (*(int *)(gen_frame + 0x3c)) = iVar9;
    x = iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xa8)));
    (*(float * PTR32 *)(gen_frame + 0x40)) = ((float *)GEN_TOP(x));
    gen_imp_MoveToEx(param_2,x,iVar9,(LPPOINT)0x0);
    gen_imp_LineTo(param_2,iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xb8))),
           iVar10 - (int)((double)(*(float *)(gen_frame + 0xc0)) * *(double *)&REFG(double, 0x1132488)));
    gen_imp_LineTo(param_2,iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xc8))),
           iVar10 - (int)((double)(*(float *)(gen_frame + 0xd0)) * *(double *)&REFG(double, 0x1132488)));
    gen_imp_LineTo(param_2,iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xd8))),
           iVar10 - (int)((double)(*(float *)(gen_frame + 0xe0)) * *(double *)&REFG(double, 0x1132488)));
    iVar10 = (*(int *)(gen_frame + 0x3c));
    gen_imp_LineTo(param_2,(*(float * PTR32 *)(gen_frame + 0x40)),(*(int *)(gen_frame + 0x3c)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x38)) + 0x30))))((*(int * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
    pBVar2 = (*(undefined * PTR32 *)(gen_frame + 0x30));
    fVar12 = F_00d1f050((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)));
    (*(int * PTR32 *)(gen_frame + 0x38)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar12)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pBVar2 + 0x60))))
              (pBVar2 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x18)),(undefined4)gen_fl2bits(fVar12),0);
    F_00c472af(((char *)(gen_frame + 0xe8)),0x20,&REFG(undefined, 0x1133978),(int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x20))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x20))) >> 0x20));
    pcVar8 = ((char *)(gen_frame + 0xe8));
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    gen_imp_GetTextExtentPoint32A(param_2,((char *)(gen_frame + 0xe8)),(int)pcVar8 - (int)(((char *)(gen_frame + 0xe8)) + 1),&(*(undefined8 *)(gen_frame + 0x10)));
    gen_imp_TextOutA(param_2,(int)(*(float * PTR32 *)(gen_frame + 0x40)),iVar10,((char *)(gen_frame + 0xe8)),(int)pcVar8 - (int)(((char *)(gen_frame + 0xe8)) + 1));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x1c)));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x28)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x2c)));
    uVar6 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x24)));
  }
  return uVar6;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1f750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd1f750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined * _File;
  byte bVar5;
  int iVar6;
  
  _File = param_1;
  bVar5 = F_00d21f00((undefined *)this GEN_EDX_FWD,param_1);
  if (bVar5 == 0) {
    return 0;
  }
  iVar6 = 0;
  param_1 = ((undefined *)GEN_TOP(0x0));
  do {
    iVar1 = *(int *)(this + 0x128);
    dVar2 = (double)*((float *)GEN_TOP((iVar6 + 0x28 + iVar1)));
    dVar3 = (double)*((float *)GEN_TOP((iVar6 + 0x24 + iVar1)));
    dVar4 = (double)*((float *)GEN_TOP((iVar6 + 0x20 + iVar1)));
    F_00c49386(_File,((char *)REFP(0x1133980)),param_1,(int)(ulonglong)gen_d2bits(dVar4),
             (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
             (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
             (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1)));
    iVar6 = iVar6 + 0x10;
  } while (iVar6 < 0x40);
  param_1 = ((undefined *)GEN_TOP(0x0));
  iVar6 = 0x60;
  do {
    F_00c49386(_File,((char *)REFP(0x113399c)),param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))) >> 0x20
                  ));
    param_1 = ((undefined *)GEN_TOP(((int)param_1 + 1)));
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x68);
  F_00c49386(_File,((char *)REFP(0x11339b0)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x68))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x68))))));
  F_00c49386(_File,((char *)REFP(0x11339c4)),
           (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x6c)))),
           (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x6c)))) >> 0x20));
  F_00c49386(_File,((char *)REFP(0x11339d4)),*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x70))) & 0xf);
  F_00c49386(_File,((char *)REFP(0x11339e8)),*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x70))) >> 4 & 1);
  F_00c49386(_File,((char *)REFP(0x11339fc)),GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x74))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x74))))));
  F_00c49386(_File,((char *)REFP(0x1133a0c)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf31 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d1f890(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd1f890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = ((char *)REFP(0x1133a24));
  pbVar5 = ((byte *)GEN_TOP(param_2));
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d1f8c1: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d1f8c6;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d1f8c1;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d1f8c6: ;
  if (iVar3 == 0) {
    uVar4 = F_00d00d00(0,0);
    if (uVar4 != 0) {
      uVar4 = F_00c4c74c(uVar4);
      pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
      if (pcVar2 != ((char *)GEN_TOP(0x0))) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 2) * 0x10))) = (float)dVar7;
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24 + uVar4 * 0x10))) = (float)dVar7;
          pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
          if (pcVar2 != ((char *)GEN_TOP(0x0))) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 0x10))) = (float)dVar7;
            return 1;
          }
        }
      }
    }
  }
  else {
    pcVar2 = ((char *)REFP(0x1133a30));
    pbVar5 = ((byte *)GEN_TOP(param_2));
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d1f9a0: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d1f9a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d1f9a0;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d1f9a5: ;
    if (iVar3 == 0) {
      uVar4 = F_00d00d00(0,0);
      if (uVar4 != 0) {
        uVar4 = F_00c4c74c(uVar4);
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x60 + uVar4 * 4))) = (float)dVar7;
          return 1;
        }
      }
    }
    else {
      pcVar2 = ((char *)REFP(0x1133a38));
      pbVar5 = ((byte *)GEN_TOP(param_2));
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00d1fa20: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d1fa25;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00d1fa20;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d1fa25: ;
      if (iVar3 == 0) {
        pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
        if (pcVar2 != ((char *)GEN_TOP(0x0))) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x68))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = ((char *)REFP(0x1133a44));
        pbVar5 = ((byte *)GEN_TOP(param_2));
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d1fa82: ;
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d1fa87;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d1fa82;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d1fa87: ;
        if (iVar3 == 0) {
          pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
          if (pcVar2 != ((char *)GEN_TOP(0x0))) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x6c))) = (float)dVar7;
            return 1;
          }
        }
        else {
          pcVar2 = "fUseHicutFac";
          pbVar5 = ((byte *)GEN_TOP(param_2));
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d1fae4: ;
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d1fae9;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d1fae4;
            pcVar2 = pcVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d1fae9: ;
          if (iVar3 != 0) {
            pcVar2 = ((char *)REFP(0x1133a60));
            pbVar5 = ((byte *)GEN_TOP(param_2));
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d1fb18: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d1fb1d;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d1fb18;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d1fb1d: ;
            if (iVar3 == 0) {
              uVar4 = F_00d00d00(0,0);
              if (uVar4 == 0) {
                return 0;
              }
              uVar4 = F_00c4c74c(uVar4);
              pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x70)));
              *pbVar5 = *pbVar5 ^ (*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x70))) ^ (byte)uVar4) & 0xf;
              return 1;
            }
            pcVar2 = "fUseHicutFac";
            pbVar5 = ((byte *)GEN_TOP(param_2));
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d1fb78: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d1fb7d;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d1fb78;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d1fb7d: ;
            if (iVar3 != 0) {
              pcVar2 = ((char *)REFP(0x1133a80));
              pbVar5 = ((byte *)GEN_TOP(param_2));
              do {
                bVar1 = *pcVar2;
                bVar6 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_00d1fbe2: ;
                  iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                  goto LAB_00d1fbe7;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar2[1];
                bVar6 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_00d1fbe2;
                pcVar2 = pcVar2 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00d1fbe7: ;
              if (iVar3 != 0) {
                bVar1 = F_00d22040(param_1 GEN_EDX_ARG,param_2);
                return bVar1;
              }
              pcVar2 = ((char *)GEN_TOP(F_00d00d00(0,0)));
              if (pcVar2 == ((char *)GEN_TOP(0x0))) {
                return 0;
              }
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x74))) = (float)dVar7;
              return 1;
            }
          }
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x70)));
            *pbVar5 = *pbVar5 ^ ((char)uVar4 << 4 ^ *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x70)))) &
                                0x10;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00d1fc30 */
GEN_LIB GEN_NOFRAME float GEN_THISCALL F_00d1fc30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd1fc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0xac, 4);
  undefined1 uVar1;
  float10 fVar2;
  float10 fVar3;
  float * pfVar4;
  float * pfVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  fVar3 = (float10)0;
  fVar2 = (float10)1;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  iVar8 = *((int *)GEN_TOP(((int)this + 0x128)));
  (*(float * PTR32 *)(gen_frame + 0x40)) = param_1;
  (*(byte *)(gen_frame + 0x4b)) = 0;
  ((byte *)(gen_frame + 0x90))[0] = 0;
  ((byte *)(gen_frame + 0x90))[1] = 1;
  ((byte *)(gen_frame + 0x90))[2] = 1;
  ((byte *)(gen_frame + 0x90))[3] = 2;
  ((byte *)(gen_frame + 0x90))[4] = 2;
  ((byte *)(gen_frame + 0x90))[5] = 3;
  ((byte *)(gen_frame + 0x90))[6] = 3;
  ((byte *)(gen_frame + 0x90))[7] = 0;
  iVar7 = 0;
  do {
    pfVar4 = ((float *)GEN_TOP(((((byte *)(gen_frame + 0x90))[(int)(iVar7 * 2)] + 2) * 0x10 + iVar8)));
    pfVar5 = ((float *)GEN_TOP(((((byte *)(gen_frame + 0x90))[(int)(iVar7 * 2 + 1)] + 2) * 0x10 + iVar8)));
    fVar14 = *pfVar5 - *pfVar4;
    fVar15 = pfVar5[2] - pfVar4[2];
    (*(float *)(gen_frame + 0x2c)) = fVar14;
    (*(float *)(gen_frame + 0x30)) = pfVar5[1] - pfVar4[1];
    (*(float *)(gen_frame + 0x34)) = fVar15;
    (*(float *)(gen_frame + 0x38)) = pfVar5[3] - pfVar4[3];
    fVar9 = (float10)fVar15;
    fVar10 = (float10)fVar14;
    fVar14 = (float)(fVar9 * (float10)*param_2 - fVar10 * (float10)param_2[2]);
    (*(float *)(gen_frame + 0x44)) = fVar14;
    fVar11 = (float10)fVar14;
    pfVar5 = (*(float * PTR32 *)(gen_frame + 0x40));
    if ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar11)) == ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar11)) || fVar3 == fVar11)) {
      fVar14 = *pfVar4 - *(*(float * PTR32 *)(gen_frame + 0x40));
      fVar15 = pfVar4[2] - (*(float * PTR32 *)(gen_frame + 0x40))[2];
      (*(float *)(gen_frame + 0x2c)) = fVar14;
      (*(float *)(gen_frame + 0x30)) = pfVar4[1] - (*(float * PTR32 *)(gen_frame + 0x40))[1];
      (*(float *)(gen_frame + 0x34)) = fVar15;
      (*(float *)(gen_frame + 0x38)) = pfVar4[3] - (*(float * PTR32 *)(gen_frame + 0x40))[3];
      fVar12 = (float10)fVar14;
      fVar13 = (float10)fVar15;
      fVar14 = ((float)GEN_TOF(((fVar12 * fVar9 - fVar13 * fVar10) / fVar11)));
      (*(float *)(gen_frame + 0x44)) = fVar14;
      fVar9 = (float10)fVar14;
      if ((((!(fVar3 <= fVar9) == (GEN_ISNAN(fVar9) || GEN_ISNAN(fVar3))) &&
           (!(fVar2 <= fVar9) || ((GEN_ISNAN(fVar9) || GEN_ISNAN(fVar2)) || fVar9 == fVar2))) &&
          (fVar9 = (float10)((float)GEN_TOF((((float10)param_2[2] * fVar12 - (float10)*param_2 * fVar13) /
                                   fVar11))), !(fVar3 <= fVar9) == (GEN_ISNAN(fVar9) || GEN_ISNAN(fVar3)))) &&
         (!(fVar2 <= fVar9) || ((GEN_ISNAN(fVar9) || GEN_ISNAN(fVar2)) || fVar9 == fVar2))) {
        uVar6 = (uint)(*(byte *)(gen_frame + 0x4b));
        (*(float *)(gen_frame + 0x2c)) = *param_2 * fVar14;
        (*(float *)(gen_frame + 0x30)) = param_2[1] * fVar14;
        (*(float *)(gen_frame + 0x34)) = param_2[2] * fVar14;
        (*(float *)(gen_frame + 0x38)) = param_2[3] * fVar14;
        (*(float *)(gen_frame + 0x44)) = gen_bits2f(uVar6);
        (*(byte *)(gen_frame + 0x4b)) = (*(byte *)(gen_frame + 0x4b)) + 1;
        fVar15 = *param_2 * fVar14 + *(*(float * PTR32 *)(gen_frame + 0x40));
        fVar17 = param_2[1] * fVar14 + (*(float * PTR32 *)(gen_frame + 0x40))[1];
        (*(float *)(gen_frame + 0x2c)) = fVar15;
        (*(float *)(gen_frame + 0x30)) = fVar17;
        (*(float *)(gen_frame + 0x34)) = param_2[2] * fVar14 + (*(float * PTR32 *)(gen_frame + 0x40))[2];
        (*(float *)(gen_frame + 0x38)) = param_2[3] * fVar14 + (*(float * PTR32 *)(gen_frame + 0x40))[3];
        (*(float *)(gen_frame + 0x1c)) = fVar15;
        ((float *)(gen_frame + 0x4c))[(int)(uVar6 * 4)] = fVar15;
        (*(float *)(gen_frame + 0x20)) = fVar17;
        ((float *)(gen_frame + 0x4c))[(int)(uVar6 * 4 + 1)] = fVar17;
        (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x34));
        ((float *)(gen_frame + 0x4c))[(int)(uVar6 * 4 + 2)] = (*(float *)(gen_frame + 0x34));
        (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x38));
        ((float *)(gen_frame + 0x4c))[(int)(uVar6 * 4 + 3)] = (*(float *)(gen_frame + 0x38));
        pfVar5 = (*(float * PTR32 *)(gen_frame + 0x40));
        ((float *)(gen_frame + 0x4c))[(int)(uVar6 * 4 + 3)] = (float)fVar2;
        ((undefined1 *)(gen_frame + 0x14))[(int)((int)gen_fl2bits((*(float *)(gen_frame + 0x44))))] = (char)iVar7;
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  pfVar4 = ((float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1090708))));
  if ((*(byte *)(gen_frame + 0x4b)) != 0) {
    uVar6 = (uint)(*(byte *)(gen_frame + 0x4b));
    (*(float * PTR32 *)(gen_frame + 0x40)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar3)));
    iVar8 = 0;
    (*(float *)(gen_frame + 0x44)) = gen_bits2f(uVar6);
    pfVar4 = (*(float * PTR32 *)(gen_frame + 0x40));
    if (uVar6 != 0) {
      do {
        fVar14 = ((float *)(gen_frame + 0x4c))[(int)(iVar8 * 4)] - *pfVar5;
        fVar15 = ((float *)(gen_frame + 0x4c))[(int)(iVar8 * 4 + 1)] - pfVar5[1];
        fVar17 = ((float *)(gen_frame + 0x4c))[(int)(iVar8 * 4 + 2)] - pfVar5[2];
        fVar16 = ((float *)(gen_frame + 0x4c))[(int)(iVar8 * 4 + 3)] - pfVar5[3];
        (*(float *)(gen_frame + 0x2c)) = fVar14;
        (*(float *)(gen_frame + 0x30)) = fVar15;
        (*(float *)(gen_frame + 0x34)) = fVar17;
        (*(float *)(gen_frame + 0x38)) = fVar16;
        (*(float *)(gen_frame + 0x1c)) = fVar14;
        (*(float *)(gen_frame + 0x20)) = fVar15;
        (*(float *)(gen_frame + 0x24)) = fVar17;
        (*(float *)(gen_frame + 0x28)) = fVar16;
        fVar15 = fVar15 * fVar15;
        fVar17 = fVar17 * fVar17;
        fVar14 = GEN_X87(SQRT((fVar17 + fVar14 * fVar14) + fVar15));
        (*(float *)(gen_frame + 0x0)) = (fVar17 + fVar15) + fVar15;
        (*(float *)(gen_frame + 0x4)) = (fVar17 + fVar17) + fVar15;
        (*(float *)(gen_frame + 0x8)) = (fVar17 + fVar16 * fVar16) + fVar15;
        if (iVar8 == 0) {
          (*(float * PTR32 *)(gen_frame + 0x40)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
          *param_3 = ((float *)(gen_frame + 0x4c))[0];
          param_3[1] = ((float *)(gen_frame + 0x4c))[1];
          param_3[2] = ((float *)(gen_frame + 0x4c))[2];
          param_3[3] = ((float *)(gen_frame + 0x4c))[3];
          *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x178))) = ((undefined1 *)(gen_frame + 0x14))[0];
        }
        else if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x40))))) <= (float10)fVar14) !=
                 (GEN_ISNAN((float10)fVar14) || GEN_ISNAN((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x40)))))))) {
          (*(float * PTR32 *)(gen_frame + 0x40)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
          *param_3 = ((float *)(gen_frame + 0x4c))[(int)(iVar8 * 4)];
          param_3[1] = ((float *)(gen_frame + 0x4c))[(int)(iVar8 * 4 + 1)];
          fVar14 = ((float *)(gen_frame + 0x4c))[(int)(iVar8 * 4 + 3)];
          param_3[2] = ((float *)(gen_frame + 0x4c))[(int)(iVar8 * 4 + 2)];
          uVar1 = ((undefined1 *)(gen_frame + 0x14))[(int)(iVar8)];
          param_3[3] = fVar14;
          *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x178))) = uVar1;
        }
        iVar8 = iVar8 + 1;
        pfVar4 = (*(float * PTR32 *)(gen_frame + 0x40));
      } while (iVar8 < (int)uVar6);
    }
  }
  return ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar4)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf22 */
GEN_LIB GEN_NOFRAME double GEN_THISCALL F_00d20060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd20060u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x40, 0);
  int iVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  *param_4 = 0;
  fVar13 = param_2[3];
  fVar12 = param_1[2];
  fVar8 = param_1[3];
  fVar10 = param_1[1];
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  (*(float *)(gen_frame + 0x10)) = *param_1 + *param_2;
  (*(float *)(gen_frame + 0x14)) = fVar10 + fVar6;
  (*(float *)(gen_frame + 0x18)) = fVar12 + fVar7;
  (*(float *)(gen_frame + 0x1c)) = fVar8 + fVar13;
  (*(float *)(gen_frame + 0x0)) = *param_1 + *param_2;
  (*(float *)(gen_frame + 0x4)) = fVar10 + fVar6;
  (*(float *)(gen_frame + 0x8)) = fVar12 + fVar7;
  (*(float *)(gen_frame + 0xc)) = fVar8 + fVar13;
  uVar3 = F_00d1eee0(this GEN_EDX_FWD,param_1);
  *(uint *)(this + 0x170) = uVar3;
  uVar3 = F_00d1eee0(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
  iVar1 = *(int *)(this + 0x170);
  *(uint *)(this + 0x174) = uVar3;
  if ((iVar1 < 0) || ((int)uVar3 < 0)) {
    if (iVar1 == 1) {
      iVar1 = *(int *)(this + 0x128);
      if (uVar3 == 0xffffffff) {
        fVar13 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar1 + 0x60))) + (float10)*((float *)GEN_TOP((iVar1 + 0x24))))));
        (*(float *)(gen_frame + 0x2c)) = fVar13;
        fVar4 = (float10)fVar13;
      }
      else {
        fVar13 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar1 + 0x24))) - (float10)*((float *)GEN_TOP((iVar1 + 100))))));
        (*(float *)(gen_frame + 0x2c)) = fVar13;
        fVar4 = (float10)fVar13;
      }
    }
    else {
      if (uVar3 != 1) goto LAB_00d202e6;
      iVar2 = *(int *)(this + 0x128);
      if (iVar1 == -1) {
        fVar13 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 0x60))) + (float10)*((float *)GEN_TOP((iVar2 + 0x24))))));
        (*(float *)(gen_frame + 0x2c)) = fVar13;
        fVar4 = (float10)fVar13;
      }
      else {
        fVar13 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 0x24))) - (float10)*((float *)GEN_TOP((iVar2 + 100))))));
        (*(float *)(gen_frame + 0x2c)) = fVar13;
        fVar4 = (float10)fVar13;
      }
    }
    fVar13 = param_1[1];
    *param_4 = 1;
    (*(float *)(gen_frame + 0x2c)) = (float)(fVar4 - (float10)fVar13);
    fVar5 = GEN_X87((float10)(float)(fVar4 - (float10)fVar13));
    fVar4 = (float10)0;
    if ((GEN_ISNAN(fVar4) || GEN_ISNAN(fVar5)) != ((GEN_ISNAN(fVar4) || GEN_ISNAN(fVar5)) || fVar4 == fVar5)) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      return (double)fVar4;
    }
    fVar13 = param_1[3];
    fVar12 = (float)(fVar5 / (float10)param_2[1]);
    (*(float *)(gen_frame + 0x2c)) = fVar12;
    fVar6 = *param_2 * fVar12;
    fVar8 = param_2[1] * fVar12;
    fVar10 = param_2[2] * fVar12;
    fVar12 = param_2[3] * fVar12;
    (*(float *)(gen_frame + 0x0)) = fVar6;
    (*(float *)(gen_frame + 0x4)) = fVar8;
    (*(float *)(gen_frame + 0x8)) = fVar10;
    (*(float *)(gen_frame + 0xc)) = fVar12;
    (*(float *)(gen_frame + 0x10)) = fVar6;
    (*(float *)(gen_frame + 0x14)) = fVar8;
    (*(float *)(gen_frame + 0x18)) = fVar10;
    (*(float *)(gen_frame + 0x1c)) = fVar12;
    fVar7 = *param_1 + fVar6;
    fVar9 = param_1[1] + fVar8;
    fVar11 = param_1[2] + fVar10;
    fVar13 = fVar13 + fVar12;
    (*(float *)(gen_frame + 0x0)) = fVar7;
    (*(float *)(gen_frame + 0x4)) = fVar9;
    (*(float *)(gen_frame + 0x8)) = fVar11;
    (*(float *)(gen_frame + 0xc)) = fVar13;
    (*(float *)(gen_frame + 0x10)) = fVar7;
    fVar8 = fVar8 * fVar8;
    fVar10 = fVar10 * fVar10;
    (*(float *)(gen_frame + 0x14)) = fVar9;
    (*(float *)(gen_frame + 0x18)) = fVar11;
    *param_3 = fVar7;
    (*(float *)(gen_frame + 0x1c)) = fVar13;
    param_3[1] = fVar9;
    fVar6 = GEN_X87(SQRT((fVar10 + fVar6 * fVar6) + fVar8));
    param_3[2] = fVar11;
    (*(float *)(gen_frame + 0x0)) = fVar6;
    (*(float *)(gen_frame + 0x4)) = (fVar10 + fVar8) + fVar8;
    (*(float *)(gen_frame + 0x8)) = (fVar10 + fVar10) + fVar8;
    (*(float *)(gen_frame + 0xc)) = (fVar10 + fVar12 * fVar12) + fVar8;
    param_3[3] = fVar13;
    return (double)fVar6;
  }
  if (iVar1 != 0) {
    if (uVar3 != 0) {
LAB_00d202e6: ;
      return (double)REFG(float, 0x1090708);
    }
    if (iVar1 != 0) goto LAB_00d2013d;
  }
  if (uVar3 == 0) {
    fVar13 = F_00d1fc30(this GEN_EDX_ARG,param_1,param_2,param_3);
    return (double)fVar13;
  }
LAB_00d2013d: ;
  fVar13 = F_00d1fc30(this GEN_EDX_ARG,param_1,param_2,param_3);
  return (double)fVar13;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d20300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd20300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00d22da0(this GEN_EDX_FWD,param_1,0x80)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x20);
  }
  F_00d20d00(*(undefined4 *)(this + 0x128) GEN_EDX_ARG,(uint)puVar1);
  return (uint)(puVar1 + 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf28 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00d20360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd20360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x70, 0, 4);
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c));
  uVar2 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x68;
    uVar3 = F_00427d90();
    iVar1 = *(int *)(this + 0x128);
    (*(ulonglong *)(gen_frame + 0x8)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x38)) = *((undefined4 *)GEN_TOP((iVar1 + 0x20)));
    (*(undefined4 *)(gen_frame + 0x3c)) = *((undefined4 *)GEN_TOP((iVar1 + 0x24)));
    (*(undefined4 *)(gen_frame + 0x40)) = *((undefined4 *)GEN_TOP((iVar1 + 0x28)));
    (*(undefined4 *)(gen_frame + 0x44)) = *((undefined4 *)GEN_TOP((iVar1 + 0x30)));
    (*(undefined4 *)(gen_frame + 0x48)) = *((undefined4 *)GEN_TOP((iVar1 + 0x34)));
    (*(undefined4 *)(gen_frame + 0x4c)) = *((undefined4 *)GEN_TOP((iVar1 + 0x38)));
    (*(undefined4 *)(gen_frame + 0x50)) = *((undefined4 *)GEN_TOP((iVar1 + 0x40)));
    (*(undefined4 *)(gen_frame + 0x54)) = *((undefined4 *)GEN_TOP((iVar1 + 0x44)));
    (*(undefined4 *)(gen_frame + 0x58)) = *((undefined4 *)GEN_TOP((iVar1 + 0x48)));
    (*(undefined4 *)(gen_frame + 0x5c)) = *((undefined4 *)GEN_TOP((iVar1 + 0x50)));
    (*(undefined4 *)(gen_frame + 0x60)) = *((undefined4 *)GEN_TOP((iVar1 + 0x54)));
    (*(undefined4 *)(gen_frame + 0x64)) = *((undefined4 *)GEN_TOP((iVar1 + 0x58)));
    F_00d20ba0(&(*(undefined2 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)));
    uVar2 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)),0x68);
  }
  return uVar2;
}

/* ref: FUN_00d20430 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d20430(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd20430u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_FRAME_DECL(0xb0, 0);
  int * this;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * pBVar4;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  F_00d22580(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[33])REFP(0x1133acc));
  F_00cccb10(param_1 + 0x14c GEN_EDX_ARG,(float)(float10)1);
  *(uint *)(param_1 + 0xb0) =
       *(uint *)(param_1 + 0xb0) ^ ((uint)param_5 << 4 ^ *(uint *)(param_1 + 0xb0)) & 0x10;
  if (param_5 == 0) {
    *(undefined4 * PTR32 *)(param_1 + 0x128) = param_2;
  }
  else {
    *(undefined * PTR32 *)(param_1 + 0x128) = param_1 + 0x180;
    puVar3 = param_2;
    pBVar4 = param_1 + 0x180;
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 - 1) {
      *(undefined4 *)pBVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pBVar4 = pBVar4 + 4;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x128);
  F_00d1e8c0(param_1 GEN_EDX_ARG);
  F_00d20fe0(param_1 GEN_EDX_ARG,~(*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 4))) >> 5) & 1);
  this = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xe4))))(this GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x68))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  F_00d20360(param_1 GEN_EDX_ARG,0x401);
  return (uint)param_1;
}

/* ref: FUN_00d20560 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d20560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd20560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xb0, 0);
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  F_00d22720(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133acc));
  F_00cccb10((int)this + 0x14c GEN_EDX_ARG,(float)(float10)1);
  *((uint *)GEN_TOP(((int)this + 0xb0))) = *((uint *)GEN_TOP(((int)this + 0xb0))) | 0x10;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x128))) = ((undefined *)GEN_TOP(((int)this + 0x180)));
  F_00d20c50(((undefined *)GEN_TOP(((int)this + 0x180))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP(((int)this + 0x128)));
  this_00 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0xc)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe4))))(this_00 GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  F_00d20360(this GEN_EDX_ARG,0x401);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf23 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d20630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3), GEN_P(float * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd20630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x80, 0);
  float * pfVar1;
  float * pfVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  float * pfVar6;
  int iVar7;
  int iVar8;
  undefined4 * puVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  (*(float * PTR32 *)(gen_frame + 0x2c)) = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = param_2;
  (*(float * PTR32 *)(gen_frame + 0x28)) = param_4;
  if (((*(int *)(this + 0x170) != 0) &&
      ((*(int *)(this + 0x174) != 0 || (*(int *)(this + 0x170) != 0)))) ||
     (*(int *)(this + 0x174) != 0)) {
    return 0;
  }
  iVar3 = *(int *)(this + 0x128);
  (*(byte *)(gen_frame + 0x5b)) = *((byte *)GEN_TOP((iVar3 + 0x70)));
  if ((*((byte *)GEN_TOP((iVar3 + 0x70))) & 0xf) == 0xf) {
    return 0;
  }
  uVar5 = (uint)(byte)this[0x178];
  ((byte *)(gen_frame + 0x64))[0] = 0;
  ((byte *)(gen_frame + 0x64))[1] = 1;
  ((byte *)(gen_frame + 0x64))[2] = 2;
  ((byte *)(gen_frame + 0x64))[3] = 3;
  ((byte *)(gen_frame + 0x64))[4] = 0;
  (*(uint *)(gen_frame + 0x1c)) = uVar5;
  (*(uint *)(gen_frame + 0x60)) = uVar5;
  pfVar6 = ((float *)GEN_TOP(F_00d03460(param_4 GEN_EDX_FWD,&(*(float *)(gen_frame + 0x0)),(((byte *)(gen_frame + 0x64))[(int)(uVar5 + 1)] + 2) * 0x10 + iVar3)));
  (*(uint *)(gen_frame + 0x20)) = 0xffffffff;
  fVar12 = pfVar6[1] * pfVar6[1];
  fVar13 = pfVar6[2] * pfVar6[2];
  fVar14 = GEN_X87(SQRT((fVar13 + *pfVar6 * *pfVar6) + fVar12));
  (*(float *)(gen_frame + 0x30)) = fVar14;
  (*(float *)(gen_frame + 0x34)) = (fVar13 + fVar12) + fVar12;
  (*(float *)(gen_frame + 0x38)) = (fVar13 + fVar13) + fVar12;
  (*(float *)(gen_frame + 0x3c)) = (fVar13 + pfVar6[3] * pfVar6[3]) + fVar12;
  (*(float *)(gen_frame + 0x5c)) = 0.0;
  (*(float *)(gen_frame + 0x50)) = fVar14;
  (*(uint *)(gen_frame + 0x18)) = (*(byte *)(gen_frame + 0x5b)) & 0xf;
  puVar9 = param_2;
  do {
    uVar5 = (*(uint *)(gen_frame + 0x60)) + 1;
    (*(uint *)(gen_frame + 0x60)) = uVar5;
    if (3 < (int)uVar5) {
      (*(uint *)(gen_frame + 0x60)) = 0;
    }
    if (((*(uint *)(gen_frame + 0x18)) & 1 << GEN_SHC((byte)(*(uint *)(gen_frame + 0x60)), (byte)(*(uint *)(gen_frame + 0x60)))) != 0) break;
    iVar8 = (((byte *)(gen_frame + 0x64))[(int)((*(uint *)(gen_frame + 0x60)))] + 2) * 0x10 + iVar3;
    bVar4 = F_00d1ecf0((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,iVar8,(*(float * PTR32 *)(gen_frame + 0x2c)));
    if (bVar4 == 0) {
      pfVar6 = ((float *)GEN_TOP(F_00d03460((*(float * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),iVar8)));
      fVar12 = pfVar6[1] * pfVar6[1];
      fVar13 = pfVar6[2] * pfVar6[2];
      fVar14 = GEN_X87(SQRT((fVar13 + *pfVar6 * *pfVar6) + fVar12));
      (*(float *)(gen_frame + 0x30)) = fVar14;
      (*(float *)(gen_frame + 0x34)) = (fVar13 + fVar12) + fVar12;
      (*(float *)(gen_frame + 0x38)) = (fVar13 + fVar13) + fVar12;
      (*(float *)(gen_frame + 0x3c)) = (fVar13 + pfVar6[3] * pfVar6[3]) + fVar12;
      (*(uint *)(gen_frame + 0x20)) = (uint)((byte *)(gen_frame + 0x64))[(int)((*(uint *)(gen_frame + 0x1c)) + 1)];
      (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar14 + (float10)(*(float *)(gen_frame + 0x50)));
      puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x54));
      break;
    }
    pfVar6 = ((float *)GEN_TOP(F_00d03460((((byte *)(gen_frame + 0x64))[(int)((*(uint *)(gen_frame + 0x60)) + 1)] + 2) * 0x10 + iVar3 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),iVar8)));
    iVar8 = (int)gen_fl2bits((*(float *)(gen_frame + 0x5c))) + 1;
    (*(float *)(gen_frame + 0x5c)) = gen_bits2f(iVar8);
    fVar12 = pfVar6[1] * pfVar6[1];
    fVar13 = pfVar6[2] * pfVar6[2];
    fVar14 = GEN_X87(SQRT((fVar13 + *pfVar6 * *pfVar6) + fVar12));
    (*(float *)(gen_frame + 0x30)) = fVar14;
    (*(float *)(gen_frame + 0x34)) = (fVar13 + fVar12) + fVar12;
    (*(float *)(gen_frame + 0x38)) = (fVar13 + fVar13) + fVar12;
    (*(float *)(gen_frame + 0x3c)) = (fVar13 + pfVar6[3] * pfVar6[3]) + fVar12;
    (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar14 + (float10)(*(float *)(gen_frame + 0x50)));
    puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x54));
  } while (iVar8 < 4);
  iVar8 = (((byte *)(gen_frame + 0x64))[(int)((*(uint *)(gen_frame + 0x1c)))] + 2) * 0x10;
  pfVar6 = (*(float * PTR32 *)(gen_frame + 0x28)) + 3;
  (*(uint *)(gen_frame + 0x24)) = 0xffffffff;
  pfVar1 = (*(float * PTR32 *)(gen_frame + 0x28)) + 1;
  pfVar2 = (*(float * PTR32 *)(gen_frame + 0x28)) + 2;
  fVar12 = *(*(float * PTR32 *)(gen_frame + 0x28));
  (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
  fVar12 = fVar12 - *((float *)GEN_TOP((iVar8 + iVar3)));
  fVar13 = *pfVar1 - *((float *)GEN_TOP((iVar8 + 4 + iVar3)));
  fVar14 = *pfVar2 - *((float *)GEN_TOP((iVar8 + 8 + iVar3)));
  fVar15 = *pfVar6 - *((float *)GEN_TOP((iVar8 + 0xc + iVar3)));
  (*(float *)(gen_frame + 0x30)) = fVar12;
  (*(float *)(gen_frame + 0x34)) = fVar13;
  (*(float *)(gen_frame + 0x38)) = fVar14;
  (*(float *)(gen_frame + 0x3c)) = fVar15;
  (*(float *)(gen_frame + 0x40)) = fVar12;
  (*(float *)(gen_frame + 0x44)) = fVar13;
  (*(float *)(gen_frame + 0x48)) = fVar14;
  (*(float *)(gen_frame + 0x4c)) = fVar15;
  fVar13 = fVar13 * fVar13;
  fVar14 = fVar14 * fVar14;
  fVar12 = GEN_X87(SQRT((fVar14 + fVar12 * fVar12) + fVar13));
  (*(float *)(gen_frame + 0x30)) = fVar12;
  (*(float *)(gen_frame + 0x34)) = (fVar14 + fVar13) + fVar13;
  (*(float *)(gen_frame + 0x38)) = (fVar14 + fVar14) + fVar13;
  (*(float *)(gen_frame + 0x3c)) = (fVar14 + fVar15 * fVar15) + fVar13;
  (*(float *)(gen_frame + 0x5c)) = fVar12;
  uVar5 = (*(uint *)(gen_frame + 0x1c));
  do {
    (*(uint *)(gen_frame + 0x60)) = uVar5 - 1;
    if ((int)(uVar5 - 1) < 0) {
      (*(uint *)(gen_frame + 0x60)) = 3;
    }
    if (((*(uint *)(gen_frame + 0x18)) & 1 << GEN_SHC((byte)(*(uint *)(gen_frame + 0x60)), (byte)(*(uint *)(gen_frame + 0x60)))) != 0) break;
    pfVar6 = ((float *)GEN_TOP(((((byte *)(gen_frame + 0x64))[(int)((*(uint *)(gen_frame + 0x60)) + 1)] + 2) * 0x10 + iVar3)));
    bVar4 = F_00d1ecf0((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,pfVar6,(*(float * PTR32 *)(gen_frame + 0x2c)));
    puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x54));
    if (bVar4 == 0) {
      fVar14 = *(*(float * PTR32 *)(gen_frame + 0x2c)) - *pfVar6;
      fVar12 = (*(float * PTR32 *)(gen_frame + 0x2c))[1] - pfVar6[1];
      fVar13 = (*(float * PTR32 *)(gen_frame + 0x2c))[2] - pfVar6[2];
      fVar15 = (*(float * PTR32 *)(gen_frame + 0x2c))[3] - pfVar6[3];
      (*(float *)(gen_frame + 0x30)) = fVar14;
      (*(float *)(gen_frame + 0x34)) = fVar12;
      (*(float *)(gen_frame + 0x38)) = fVar13;
      (*(float *)(gen_frame + 0x3c)) = fVar15;
      (*(uint *)(gen_frame + 0x24)) = (uint)((byte *)(gen_frame + 0x64))[(int)((*(uint *)(gen_frame + 0x1c)))];
      (*(float *)(gen_frame + 0x40)) = fVar14;
      (*(float *)(gen_frame + 0x44)) = fVar12;
      (*(float *)(gen_frame + 0x48)) = fVar13;
      (*(float *)(gen_frame + 0x4c)) = fVar15;
      fVar12 = fVar12 * fVar12;
      fVar13 = fVar13 * fVar13;
      fVar14 = GEN_X87(SQRT((fVar13 + fVar14 * fVar14) + fVar12));
      (*(float *)(gen_frame + 0x0)) = fVar14;
      (*(float *)(gen_frame + 0x4)) = (fVar13 + fVar12) + fVar12;
      (*(float *)(gen_frame + 0x8)) = (fVar13 + fVar13) + fVar12;
      (*(float *)(gen_frame + 0xc)) = (fVar13 + fVar15 * fVar15) + fVar12;
      (*(float *)(gen_frame + 0x5c)) = (float)((float10)fVar14 + (float10)(*(float *)(gen_frame + 0x5c)));
      break;
    }
    iVar8 = (((byte *)(gen_frame + 0x64))[(int)((*(uint *)(gen_frame + 0x60)))] + 2) * 0x10;
    iVar7 = (int)(*(float * PTR32 *)(gen_frame + 0x28)) + 1;
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(iVar7));
    fVar12 = *((float *)GEN_TOP((iVar8 + iVar3))) - *pfVar6;
    fVar13 = *((float *)GEN_TOP((iVar8 + 4 + iVar3))) - pfVar6[1];
    fVar14 = *((float *)GEN_TOP((iVar8 + 8 + iVar3))) - pfVar6[2];
    fVar15 = *((float *)GEN_TOP((iVar8 + 0xc + iVar3))) - pfVar6[3];
    (*(float *)(gen_frame + 0x30)) = fVar12;
    (*(float *)(gen_frame + 0x34)) = fVar13;
    (*(float *)(gen_frame + 0x38)) = fVar14;
    (*(float *)(gen_frame + 0x3c)) = fVar15;
    (*(float *)(gen_frame + 0x40)) = fVar12;
    (*(float *)(gen_frame + 0x44)) = fVar13;
    (*(float *)(gen_frame + 0x48)) = fVar14;
    (*(float *)(gen_frame + 0x4c)) = fVar15;
    fVar13 = fVar13 * fVar13;
    fVar14 = fVar14 * fVar14;
    fVar12 = GEN_X87(SQRT((fVar14 + fVar12 * fVar12) + fVar13));
    (*(float *)(gen_frame + 0x0)) = fVar12;
    (*(float *)(gen_frame + 0x4)) = (fVar14 + fVar13) + fVar13;
    (*(float *)(gen_frame + 0x8)) = (fVar14 + fVar14) + fVar13;
    (*(float *)(gen_frame + 0xc)) = (fVar14 + fVar15 * fVar15) + fVar13;
    (*(float *)(gen_frame + 0x5c)) = (float)((float10)fVar12 + (float10)(*(float *)(gen_frame + 0x5c)));
    uVar5 = (*(uint *)(gen_frame + 0x60));
  } while (iVar7 < 4);
  if ((*(uint *)(gen_frame + 0x20)) == 0xffffffff) {
    if ((*(uint *)(gen_frame + 0x24)) == 0xffffffff) {
      return 0;
    }
    iVar8 = ((*(uint *)(gen_frame + 0x24)) + 2) * 0x10;
    iVar7 = iVar8 + iVar3;
    *puVar9 = *((undefined4 *)GEN_TOP((iVar8 + iVar3)));
    puVar9[1] = *((undefined4 *)GEN_TOP((iVar7 + 4)));
    puVar9[2] = *((undefined4 *)GEN_TOP((iVar7 + 8)));
    puVar9[3] = *((undefined4 *)GEN_TOP((iVar7 + 0xc)));
    return 1;
  }
  if ((*(uint *)(gen_frame + 0x24)) != 0xffffffff) {
    fVar10 = (float10)(*(float *)(gen_frame + 0x50));
    fVar11 = (float10)(*(float *)(gen_frame + 0x5c));
    uVar5 = (*(uint *)(gen_frame + 0x24));
    if (!(fVar10 <= fVar11) || ((GEN_ISNAN(fVar11) || GEN_ISNAN(fVar10)) || fVar11 == fVar10))
    goto LAB_00d20af7;
  }
  uVar5 = (*(uint *)(gen_frame + 0x20));
LAB_00d20af7: ;
  iVar8 = (uVar5 + 2) * 0x10;
  iVar7 = iVar8 + iVar3;
  *puVar9 = *((undefined4 *)GEN_TOP((iVar8 + iVar3)));
  puVar9[1] = *((undefined4 *)GEN_TOP((iVar7 + 4)));
  puVar9[2] = *((undefined4 *)GEN_TOP((iVar7 + 8)));
  puVar9[3] = *((undefined4 *)GEN_TOP((iVar7 + 0xc)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d20b50(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd20b50u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_3)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),local_c);
  return uVar1;
}

/* ref: FUN_00d20ba0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d20ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd20ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *param_1 = *(undefined2 *)this;
  param_1[1] = *((undefined2 *)GEN_TOP(((int)this + 2)));
  *(undefined4 *)(param_1 + 4) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined4 *)(param_1 + 6) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  *(undefined4 *)(param_1 + 0xc) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *(undefined4 *)(param_1 + 0xe) = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  *(undefined4 *)(param_1 + 0x10) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  *(undefined4 *)(param_1 + 0x16) = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  *(undefined4 *)(param_1 + 0x14) = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  param_1[0x18] = *((undefined2 *)GEN_TOP(((int)this + 0x30)));
  param_1[0x19] = *((undefined2 *)GEN_TOP(((int)this + 0x32)));
  *(undefined1 *)(param_1 + 0x1a) = *((undefined1 *)GEN_TOP(((int)this + 0x34)));
  *(undefined4 *)(param_1 + 0x1c) = *((undefined4 *)GEN_TOP(((int)this + 0x38)));
  *(undefined4 *)(param_1 + 0x1e) = *((undefined4 *)GEN_TOP(((int)this + 0x3c)));
  *(undefined4 *)(param_1 + 0x20) = *((undefined4 *)GEN_TOP(((int)this + 0x40)));
  *(undefined4 *)(param_1 + 0x22) = *((undefined4 *)GEN_TOP(((int)this + 0x44)));
  *(undefined4 *)(param_1 + 0x24) = *((undefined4 *)GEN_TOP(((int)this + 0x48)));
  *(undefined4 *)(param_1 + 0x26) = *((undefined4 *)GEN_TOP(((int)this + 0x4c)));
  *(undefined4 *)(param_1 + 0x28) = *((undefined4 *)GEN_TOP(((int)this + 0x50)));
  *(undefined4 *)(param_1 + 0x2a) = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
  *(undefined4 *)(param_1 + 0x2c) = *((undefined4 *)GEN_TOP(((int)this + 0x58)));
  *(undefined4 *)(param_1 + 0x2e) = *((undefined4 *)GEN_TOP(((int)this + 0x5c)));
  *(undefined4 *)(param_1 + 0x30) = *((undefined4 *)GEN_TOP(((int)this + 0x60)));
  *(undefined4 *)(param_1 + 0x32) = *((undefined4 *)GEN_TOP(((int)this + 100)));
  return 0;
}

/* ref: FUN_00d20c50 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d20c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd20c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  fVar1 = (float10)1;
  *((undefined2 *)GEN_TOP(((int)this + 3))) = 0x400;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 5))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((float *)GEN_TOP(((int)this + 0x10))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x14))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x18))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x1c))) = (float)fVar1;
  *((undefined2 *)GEN_TOP(((int)this + 0xe))) = 0;
  fVar2 = (float10)0;
  *((undefined1 *)GEN_TOP(((int)this + 0xd))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 2))) = 9;
  *(undefined2 *)this = 0x80;
  *((float *)GEN_TOP(((int)this + 0x20))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x24))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x28))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x2c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x2c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x30))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x34))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x38))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x3c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x3c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x40))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x44))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x48))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x4c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x4c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x50))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x54))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x58))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x5c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x5c))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094880)));
  *((undefined2 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = uVar3;
  *((undefined2 *)GEN_TOP(((int)this + 0x7a))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((float *)GEN_TOP(((int)this + 100))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x74))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x68))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x6c))) = (float)fVar1;
  return 0;
}

/* ref: FUN_00d20d00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d20d00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd20d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint * puVar4;
  uint * puVar5;
  int local_8;
  
  uVar2 = param_2;
  F_00d0c080(param_1 GEN_EDX_FWD,param_2);
  puVar5 = ((uint *)GEN_TOP((param_1 + 0x28)));
  local_8 = 4;
  puVar4 = ((uint *)GEN_TOP((param_2 + 0x20)));
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar4)));
    *puVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar5[-1];
    puVar4[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar5;
    puVar4[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar5[1];
    puVar4[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar5 = puVar5 + 4;
    local_8 = local_8 - 1;
    puVar4 = puVar4 + 4;
  } while (local_8 != 0);
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x60)));
  *((uint *)GEN_TOP((param_2 + 0x60))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 100)));
  *((uint *)GEN_TOP((param_2 + 100))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x68)));
  *((uint *)GEN_TOP((param_2 + 0x68))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x6c)));
  *((uint *)GEN_TOP((param_2 + 0x6c))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((byte *)GEN_TOP((param_2 + 0x70))) =
       *((byte *)GEN_TOP((param_2 + 0x70))) ^ (*((byte *)GEN_TOP((param_2 + 0x70))) ^ *((byte *)GEN_TOP((param_1 + 0x70)))) & 0xf;
  *((byte *)GEN_TOP((param_2 + 0x70))) =
       (*((byte *)GEN_TOP((param_1 + 0x70))) ^ *((byte *)GEN_TOP((param_2 + 0x70)))) & 0x10 ^ *((byte *)GEN_TOP((param_2 + 0x70)));
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x74)));
  *((byte *)GEN_TOP((param_2 + 0x70))) = *((byte *)GEN_TOP((param_2 + 0x70))) & 0x1f;
  *((uint *)GEN_TOP((param_2 + 0x74))) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *((undefined2 *)GEN_TOP((param_2 + 0x71))) = 0;
  *((undefined1 *)GEN_TOP((param_2 + 0x73))) = 0;
  *((ushort *)GEN_TOP((param_2 + 0x78))) = *((ushort *)GEN_TOP((param_1 + 0x78))) << 8 | *((ushort *)GEN_TOP((param_1 + 0x78))) >> 8;
  uVar3 = *((ushort *)GEN_TOP((param_1 + 0x7a))) << 8 | *((ushort *)GEN_TOP((param_1 + 0x7a))) >> 8;
  param_2 = (uint)uVar3;
  *((ushort *)GEN_TOP((uVar2 + 0x7a))) = uVar3;
  *((undefined4 *)GEN_TOP((uVar2 + 0x7c))) = 0;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d20e50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd20e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[33])REFP(0x1133acc));
  F_00cccb40(param_1 + 0x53 GEN_EDX_FWD);
  F_00d23680(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00d20e90 */
GEN_LIB GEN_FRAME uint F_00d20e90(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd20e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[3];
  fVar2 = param_2[1] * param_2[1];
  fVar3 = param_2[2] * param_2[2];
  *param_1 = SQRT((fVar3 + *param_2 * *param_2) + fVar2);
  param_1[1] = (fVar3 + fVar2) + fVar2;
  param_1[2] = (fVar3 + fVar3) + fVar2;
  param_1[3] = (fVar3 + fVar1 * fVar1) + fVar2;
  return (uint)param_1;
}

/* ref: FUN_00d20fd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d20fd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd20fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x18))) + 2)));
}

/* ref: FUN_00d20fe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d20fe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd20fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  uVar1 = ((uint)param_2 ^ *((uint *)GEN_TOP((in_ecx + 0xe4)))) & 1;
  *((uint *)GEN_TOP((in_ecx + 0xe4))) = *((uint *)GEN_TOP((in_ecx + 0xe4))) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00d21000 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d21000(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd21000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0xe4))) & 1;
}

/* ref: FUN_00d21010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d21010(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd21010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined * this;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *((uint *)GEN_TOP((param_1 + 0xe4))) =
       *((uint *)GEN_TOP((param_1 + 0xe4))) ^ ((uint)param_2 * 2 ^ *((uint *)GEN_TOP((param_1 + 0xe4)))) & 2;
  this = ((undefined *)GEN_TOP((param_1 + 8)));
  bVar1 = F_00cbc040(this GEN_EDX_FWD);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    if (param_2 != 0) {
      uVar2 = F_00cbc120(this GEN_EDX_ARG,param_3);
      return uVar2;
    }
    uVar2 = F_00cbc1a0(this GEN_EDX_ARG,param_3);
  }
  return uVar2;
}

/* ref: FUN_00d21060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d21060(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd21060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  undefined * this;
  int iVar1;
  float10 fVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined4 local_c;
  ushort uStack_8;
  
  iVar1 = *((int *)GEN_TOP(param_3));
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1097260);
  *((uint *)GEN_TOP((param_1 + 0xe4))) =
       *((uint *)GEN_TOP((param_1 + 0xe4))) ^ ((uint)param_2 * 2 ^ *((uint *)GEN_TOP((param_1 + 0xe4)))) & 2;
  this = ((undefined *)GEN_TOP((param_1 + 8)));
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)TRUNC((double)(float)((float10)iVar1 / fVar2) * *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  bVar3 = F_00cbc040(this GEN_EDX_FWD);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (bVar3 != 0) {
    if (param_2 != 0) {
      uVar4 = F_00cbc120(this GEN_EDX_ARG,local_c);
      return uVar4;
    }
    uVar4 = F_00cbc1a0(this GEN_EDX_ARG,local_c);
  }
  return uVar4;
}

/* ref: FUN_00d210f0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d210f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd210f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0xe4))) >> 1 & 1;
}

/* ref: FUN_00d21100 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d21100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd21100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00cbbff0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  if (uVar2 == 0) {
    return ~(*((byte *)GEN_TOP(((int)this + 0xb0))) >> 2) & 1;
  }
  bVar1 = F_00cbc290(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  return bVar1 != 0;
}

/* ref: FUN_00d21130 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d21130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd21130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0xb0))) & 1;
}

/* ref: FUN_00d21150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d21150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd21150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x30))) = param_2;
  return param_2;
}

/* ref: FUN_00d21160 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d21160(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd21160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x30)));
}

/* ref: FUN_00d21170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d21170(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd21170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x18)));
  if (uVar1 != 0) {
    *((undefined1 *)GEN_TOP((uVar1 + 5))) = param_2;
  }
  return uVar1;
}

/* ref: FUN_00d21190 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d21190(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd21190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x18))) == 0) {
    return 0;
  }
  return *((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x18))) + 5)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d211a0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xd211a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  byte bVar1;
  
  bVar1 = F_00cbc040(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD);
  if (bVar1 != 0) {
    return REFG(undefined4, 0x1129a00);
  }
  *((uint *)GEN_TOP((param_1 + 0xb0))) = *((uint *)GEN_TOP((param_1 + 0xb0))) | 0x100;
  *((float *)GEN_TOP((param_1 + 0xbc))) = param_3;
  *((uint *)GEN_TOP((param_1 + 0xe4))) = *((uint *)GEN_TOP((param_1 + 0xe4))) | 1;
  *((float *)GEN_TOP((param_1 + 0xd0))) = param_4;
  *((undefined4 *)GEN_TOP((param_1 + 0xd4))) = param_2;
  return REFG(undefined4, 0x11299e4);
}

/* ref: FUN_00d21200 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d21200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd21200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00cbc040(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  if (bVar1 != 0) {
    return REFG(undefined4, 0x1129a00);
  }
  *((uint *)GEN_TOP(((int)this + 0xe4))) = *((uint *)GEN_TOP(((int)this + 0xe4))) | 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = param_1;
  return REFG(undefined4, 0x11299e4);
}

/* ref: FUN_00d21240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d21240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd21240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00cbc040(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  if (bVar1 != 0) {
    return REFG(undefined4, 0x1129a00);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = param_1;
  return REFG(undefined4, 0x11299e4);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d21270(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd21270u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *((float *)GEN_TOP((param_1 + 0xbc))) = param_2;
  bVar1 = F_00cbc040(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00cbc390(param_1 + 8 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0xbc)))),param_3);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d212b0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd212b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_3)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),local_c);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d21300(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd21300u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *((float *)GEN_TOP((param_1 + 0xc0))) = param_2;
  bVar1 = F_00cbc040(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00cbc680(param_1 + 8 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0xc0)))),param_3);
  }
  return uVar2;
}

