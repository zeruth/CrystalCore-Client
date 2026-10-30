#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00a23910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a23910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa23910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f48));
  F_00a22980(this GEN_EDX_FWD);
  F_00a30fa0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x10))),0x68,0x2c4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1090598));
  return (uint)uVar1;
}

/* ref: FUN_00a23960 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_00a23960(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa23960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x6c, 4, 4);
  int iVar1;
  undefined * pvVar2;
  byte bVar3;
  uint uVar4;
  char * pcVar5;
  undefined * puVar6;
  undefined * pvVar7;
  undefined * PTR32 * ppvVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x68));
  if ((*(uint *)&REFG(undefined, 0x14a2e6c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a2e6c) = *(uint *)&REFG(undefined, 0x14a2e6c) | 1;
    F_0042cc20(&REFG(undefined, 0x14a2b78) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3e0c)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2bcc) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3e08)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2c20) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3e04)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2c74) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3e00)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2cc8) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3dfc)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2d1c) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3df8)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2d70) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3df4)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2dc4) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3df0)),REFG(undefined4, 0x108cc50));
    F_0042cc20(&REFG(undefined, 0x14a2e18) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3dec)),REFG(undefined4, 0x108cc50));
    F_00c47de6(((code *)REFP(0x107c570)));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x8)) = 0;
  ppvVar8 = &(*(undefined * PTR32 *)(gen_frame + 0x0));
  uVar4 = F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&REFG(undefined, 0x10e3e10),REFG(undefined4, 0x108cc50));
  F_00ada1b0(param_1,uVar4,ppvVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  iVar1 = ((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x0))) / 0x54;
  if (iVar1 == 2) {
    *param_3 = 0;
  }
  else {
    if (iVar1 != 3) {
      F_004876d0(&(*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return 0xfffffffe;
    }
    uVar4 = F_00a4cf70((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0xa8,10);
    *param_3 = uVar4 - 1;
  }
  uVar4 = F_00a4cf70((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x54,10);
  *param_2 = uVar4;
  pcVar5 = ((char *)GEN_TOP(F_0042a7f0((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x54 GEN_EDX_ARG,0)));
  if (*pcVar5 == '=') {
    *param_2 = -*param_2 - 1;
  }
  uVar4 = 0;
  puVar6 = &REFG(undefined, 0x14a2b78);
  do {
    bVar3 = F_0042b660((*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar6);
    pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x4));
    if (bVar3 != 0) {
      pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x0));
      if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != ((undefined *)GEN_TOP(0x0))) {
        for (; pvVar7 != pvVar2; pvVar7 = ((undefined *)GEN_TOP(((int)pvVar7 + 0x54)))) {
          F_0042c880(pvVar7 GEN_EDX_ARG);
        }
        F_00429760((*(undefined * PTR32 *)(gen_frame + 0x0)),(((*(int *)(gen_frame + 0x8)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x0))) / 0x54) * 0x54,0x35);
      }
      return uVar4;
    }
    puVar6 = puVar6 + 0x54;
    uVar4 = uVar4 + 1;
  } while ((int)puVar6 < 0x14a2e6c);
  pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x0));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != ((undefined *)GEN_TOP(0x0))) {
    for (; pvVar7 != pvVar2; pvVar7 = ((undefined *)GEN_TOP(((int)pvVar7 + 0x54)))) {
      F_0042c880(pvVar7 GEN_EDX_ARG);
    }
    F_00429760((*(undefined * PTR32 *)(gen_frame + 0x0)),(((*(int *)(gen_frame + 0x8)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x0))) / 0x54) * 0x54,0x35);
  }
  return 0xffffffff;
}

/* ref: FUN_00a23c00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a23c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa23c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x24, 12);
  code * pcVar1;
  char cVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  
  cVar2 = *param_1;
  pcVar7 = ((char *)GEN_TOP(0x0));
  pcVar8 = ((char *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x8)) = ((char *)GEN_TOP(0x0));
  if (cVar2 != '\0') {
    do {
      if (cVar2 == '\x02') {
        pcVar1 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4))) + (uint)(byte)param_1[1] * 4)));
        pcVar3 = param_1 + 2;
        uVar4 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_FWD,pcVar3,param_2,&(*(int *)(gen_frame + 0x14)),1);
        if (pcVar1 == ((code *)GEN_TOP(0x0))) {
          iVar6 = uVar4 + 3 + (*(int *)(gen_frame + 0x14));
          (*(int *)(gen_frame + 0x10)) = iVar6;
          pcVar3 = (*(char * PTR32 *)(gen_frame + 0x8));
          if (pcVar8 != pcVar7) {
            F_00c46e20(pcVar8,pcVar7,0);
            (*(char * PTR32 *)(gen_frame + 0x4)) = pcVar8;
            pcVar7 = pcVar8;
            pcVar3 = (*(char * PTR32 *)(gen_frame + 0x8));
          }
          while (0 < iVar6) {
            if ((param_1 < pcVar7) && (pcVar8 <= param_1)) {
              iVar6 = (int)param_1 - (int)pcVar8;
              if (pcVar7 == pcVar3) {
                if ((int)pcVar7 - (int)pcVar8 == -1) goto LAB_00a23fc1;
                uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
                uVar4 = (int)pcVar3 - (int)pcVar8;
                if (uVar4 < uVar5) {
                  if (-(uVar4 >> 1) - 1 < uVar4) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = uVar4 + (uVar4 >> 1);
                  }
                  if (uVar4 < uVar5) {
                    uVar4 = uVar5;
                  }
                  F_00a31510(&(*(char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
                  pcVar3 = (*(char * PTR32 *)(gen_frame + 0x8));
                  pcVar7 = (*(char * PTR32 *)(gen_frame + 0x4));
                  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x0));
                }
              }
              if (pcVar7 != ((char *)GEN_TOP(0x0))) {
                *pcVar7 = pcVar8[iVar6];
              }
            }
            else {
              if (pcVar7 == pcVar3) {
                if ((int)pcVar7 - (int)pcVar8 == -1) goto LAB_00a23fc1;
                uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
                uVar4 = (int)pcVar3 - (int)pcVar8;
                if (uVar4 < uVar5) {
                  if (-(uVar4 >> 1) - 1 < uVar4) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = uVar4 + (uVar4 >> 1);
                  }
                  if (uVar4 < uVar5) {
                    uVar4 = uVar5;
                  }
                  F_00a31510(&(*(char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
                  pcVar3 = (*(char * PTR32 *)(gen_frame + 0x8));
                  pcVar7 = (*(char * PTR32 *)(gen_frame + 0x4));
                  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x0));
                }
              }
              if (pcVar7 != ((char *)GEN_TOP(0x0))) {
                *pcVar7 = *param_1;
              }
            }
            param_1 = param_1 + 1;
            iVar6 = (*(int *)(gen_frame + 0x10)) - 1;
            (*(char * PTR32 *)(gen_frame + 0x4)) = pcVar7 + 1;
            (*(int *)(gen_frame + 0x10)) = iVar6;
            pcVar7 = pcVar7 + 1;
          }
          (*(char *)(gen_frame + 0x1f)) = '\0';
          if ((pcVar7 <= &(*(char *)(gen_frame + 0x1f))) || (&(*(char *)(gen_frame + 0x1f)) < pcVar8)) goto LAB_00a23f39;
          iVar6 = (int)&(*(char *)(gen_frame + 0x1f)) - (int)pcVar8;
          if (pcVar7 == pcVar3) {
            if ((int)pcVar7 - (int)pcVar8 == -1) goto LAB_00a23fc1;
            uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
            uVar4 = (int)pcVar3 - (int)pcVar8;
            if (uVar4 < uVar5) {
              if (-(uVar4 >> 1) - 1 < uVar4) {
                uVar4 = 0;
              }
              else {
                uVar4 = uVar4 + (uVar4 >> 1);
              }
              if (uVar4 < uVar5) {
                uVar4 = uVar5;
              }
              F_00a31510(&(*(char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
              pcVar7 = (*(char * PTR32 *)(gen_frame + 0x4));
              pcVar8 = (*(char * PTR32 *)(gen_frame + 0x0));
            }
          }
          if (pcVar7 != ((char *)GEN_TOP(0x0))) {
            *pcVar7 = pcVar8[iVar6];
          }
          goto LAB_00a23f7d;
        }
        uVar5 = (*pcVar1)((*(undefined * PTR32 *)(gen_frame + 0x18)),pcVar3 + uVar4,(*(int *)(gen_frame + 0x14)),param_2,param_3);
        if (uVar5 == 0) {
          if (pcVar8 != ((char *)GEN_TOP(0x0))) {
            F_00429760(pcVar8,(int)(*(char * PTR32 *)(gen_frame + 0x8)) - (int)pcVar8,0x2c4);
          }
          return 0;
        }
        param_1 = pcVar3 + uVar4 + (*(int *)(gen_frame + 0x14));
      }
      else {
        if (pcVar8 != pcVar7) {
          F_00c46e20(pcVar8,pcVar7,0);
          (*(char * PTR32 *)(gen_frame + 0x4)) = pcVar8;
          pcVar7 = pcVar8;
        }
        cVar2 = *param_1;
        pcVar3 = (*(char * PTR32 *)(gen_frame + 0x8));
        while ((cVar2 != '\0' && (cVar2 != '\x02'))) {
          if ((param_1 < pcVar7) && (pcVar8 <= param_1)) {
            iVar6 = (int)param_1 - (int)pcVar8;
            if (pcVar7 == pcVar3) {
              if ((int)pcVar7 - (int)pcVar8 == -1) goto LAB_00a23fc1;
              uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
              uVar4 = (int)pcVar3 - (int)pcVar8;
              if (uVar4 < uVar5) {
                if (-(uVar4 >> 1) - 1 < uVar4) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = uVar4 + (uVar4 >> 1);
                }
                if (uVar4 < uVar5) {
                  uVar4 = uVar5;
                }
                F_00a31510(&(*(char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
                pcVar3 = (*(char * PTR32 *)(gen_frame + 0x8));
                pcVar7 = (*(char * PTR32 *)(gen_frame + 0x4));
                pcVar8 = (*(char * PTR32 *)(gen_frame + 0x0));
              }
            }
            if (pcVar7 != ((char *)GEN_TOP(0x0))) {
              cVar2 = pcVar8[iVar6];
LAB_00a23ec3: ;
              *pcVar7 = cVar2;
            }
          }
          else {
            if (pcVar7 == pcVar3) {
              if ((int)pcVar7 - (int)pcVar8 == -1) goto LAB_00a23fc1;
              uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
              uVar4 = (int)pcVar3 - (int)pcVar8;
              if (uVar4 < uVar5) {
                if (-(uVar4 >> 1) - 1 < uVar4) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = uVar4 + (uVar4 >> 1);
                }
                if (uVar4 < uVar5) {
                  uVar4 = uVar5;
                }
                F_00a31510(&(*(char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
                pcVar3 = (*(char * PTR32 *)(gen_frame + 0x8));
                pcVar7 = (*(char * PTR32 *)(gen_frame + 0x4));
                pcVar8 = (*(char * PTR32 *)(gen_frame + 0x0));
              }
            }
            if (pcVar7 != ((char *)GEN_TOP(0x0))) {
              cVar2 = *param_1;
              goto LAB_00a23ec3;
            }
          }
          cVar2 = param_1[1];
          param_1 = param_1 + 1;
          pcVar7 = pcVar7 + 1;
          (*(char * PTR32 *)(gen_frame + 0x4)) = pcVar7;
        }
        (*(char *)(gen_frame + 0x1f)) = '\0';
        if ((&(*(char *)(gen_frame + 0x1f)) < pcVar7) && (pcVar8 <= &(*(char *)(gen_frame + 0x1f)))) {
          iVar6 = (int)&(*(char *)(gen_frame + 0x1f)) - (int)pcVar8;
          if (pcVar7 == pcVar3) {
            if ((int)pcVar7 - (int)pcVar8 == -1) goto LAB_00a23fc1;
            uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
            uVar4 = (int)pcVar3 - (int)pcVar8;
            if (uVar4 < uVar5) {
              if (-(uVar4 >> 1) - 1 < uVar4) {
                uVar4 = 0;
              }
              else {
                uVar4 = uVar4 + (uVar4 >> 1);
              }
              if (uVar4 < uVar5) {
                uVar4 = uVar5;
              }
              F_00a31510(&(*(char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
              pcVar7 = (*(char * PTR32 *)(gen_frame + 0x4));
              pcVar8 = (*(char * PTR32 *)(gen_frame + 0x0));
            }
          }
          if (pcVar7 != ((char *)GEN_TOP(0x0))) {
            *pcVar7 = pcVar8[iVar6];
          }
        }
        else {
LAB_00a23f39: ;
          (*(char *)(gen_frame + 0x1f)) = '\0';
          if (pcVar7 == pcVar3) {
            if ((int)pcVar7 - (int)pcVar8 == -1) {
LAB_00a23fc1: ;
                    
              F_00c4579a(((char *)REFP(0x108497c)));
            }
            uVar5 = ((int)pcVar7 - (int)pcVar8) + 1;
            uVar4 = (int)pcVar3 - (int)pcVar8;
            if (uVar4 < uVar5) {
              if (-(uVar4 >> 1) - 1 < uVar4) {
                uVar4 = 0;
              }
              else {
                uVar4 = uVar4 + (uVar4 >> 1);
              }
              if (uVar4 < uVar5) {
                uVar4 = uVar5;
              }
              F_00a31510(&(*(char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
              pcVar7 = (*(char * PTR32 *)(gen_frame + 0x4));
              pcVar8 = (*(char * PTR32 *)(gen_frame + 0x0));
            }
          }
          if (pcVar7 != ((char *)GEN_TOP(0x0))) {
            *pcVar7 = '\0';
          }
        }
LAB_00a23f7d: ;
        pcVar7 = pcVar7 + 1;
        (*(char * PTR32 *)(gen_frame + 0x4)) = pcVar7;
        F_0042d540(param_3 GEN_EDX_ARG,pcVar8);
        param_1 = param_1 - 1;
      }
      param_1 = param_1 + 1;
      cVar2 = *param_1;
    } while (cVar2 != '\0');
    if (pcVar8 != ((char *)GEN_TOP(0x0))) {
      F_00429760(pcVar8,(int)(*(char * PTR32 *)(gen_frame + 0x8)) - (int)pcVar8,0x2c4);
    }
  }
  return 1;
}

/* ref: FUN_00a23ff0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a23ff0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa23ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  GEN_FRAME_DECL_GS(0x70, 0, 4);
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte * pbVar4;
  byte * pbVar5;
  undefined * PTR32 * ppuVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_4;
  bVar1 = *param_2;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = param_3;
  pbVar5 = param_2;
  if (0xef < bVar1) {
    if (bVar1 == 0xff) {
      uVar2 = F_00a24d30(param_1 GEN_EDX_FWD,param_2 + 1,param_3,&(*(int *)(gen_frame + 0x0)),1);
      pbVar4 = param_2 + 1 + uVar2;
      bVar1 = pbVar4[(*(int *)(gen_frame + 0x0))];
      (*(byte * PTR32 *)(gen_frame + 0x10)) = pbVar4 + (*(int *)(gen_frame + 0x0));
      pbVar4[(*(int *)(gen_frame + 0x0))] = 0;
      (*(byte *)(gen_frame + 0xf)) = bVar1;
      bVar1 = F_00a23c00(param_1 GEN_EDX_ARG,pbVar4,(*(undefined * PTR32 *)(gen_frame + 0x4)),(*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (bVar1 == 0) {
        *(*(byte * PTR32 *)(gen_frame + 0x10)) = (*(byte *)(gen_frame + 0xf));
      }
      else {
        pbVar5 = pbVar4 + (*(int *)(gen_frame + 0x0));
        *(*(byte * PTR32 *)(gen_frame + 0x10)) = (*(byte *)(gen_frame + 0xf));
      }
    }
    goto LAB_00a2413b;
  }
  if ((0xec < bVar1) || (bVar1 < 0xe8)) goto LAB_00a2413b;
  if (bVar1 == 0xea) {
    uVar2 = F_00a24d30(param_1 GEN_EDX_ARG,param_2 + 1,param_3,&(*(byte * PTR32 *)(gen_frame + 0x10)),1);
    pbVar5 = param_2 + 1 + uVar2;
    pbVar4 = (*(byte * PTR32 *)(gen_frame + 0x10)) - 1;
    (*(byte * PTR32 *)(gen_frame + 0x10)) = pbVar4;
    if (pbVar4 < *((byte * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x10)))) {
      uVar2 = F_00481720((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,pbVar4);
      if (*((char *)GEN_TOP((uVar2 + 8))) == '\x01') {
        uVar2 = F_00481720((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,(*(byte * PTR32 *)(gen_frame + 0x10)));
        ppuVar6 = ((undefined * PTR32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((uVar2 + 4)))));
      }
      else {
LAB_00a240e3: ;
        ppuVar6 = &REFG(undefined * PTR32, 0x12fd328);
      }
    }
    else {
LAB_00a2412e: ;
      ppuVar6 = &REFG(undefined * PTR32, 0x12fd328);
    }
  }
  else {
    if (bVar1 != 0xeb) goto LAB_00a2413b;
    uVar2 = F_00a24d30(param_1 GEN_EDX_ARG,param_2 + 1,(int)param_1 + 0x14,&(*(byte * PTR32 *)(gen_frame + 0x10)),1);
    pbVar5 = param_2 + 1 + uVar2;
    pbVar4 = (*(byte * PTR32 *)(gen_frame + 0x10)) - 1;
    (*(byte * PTR32 *)(gen_frame + 0x10)) = pbVar4;
    if (*((byte * PTR32 *)GEN_TOP(((int)param_1 + 0x24))) <= pbVar4) goto LAB_00a2412e;
    uVar2 = F_00484010(((undefined *)GEN_TOP(((int)param_1 + 0x14))) GEN_EDX_ARG,pbVar4);
    if (*((char *)GEN_TOP((uVar2 + 8))) != '\x01') goto LAB_00a240e3;
    uVar2 = F_00484010(((undefined *)GEN_TOP(((int)param_1 + 0x14))) GEN_EDX_ARG,(*(byte * PTR32 *)(gen_frame + 0x10)));
    ppuVar6 = ((undefined * PTR32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((uVar2 + 4)))));
  }
  F_0042ccf0((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,ppuVar6);
LAB_00a2413b: ;
  if ((param_5 != '\0') && (param_2 == pbVar5)) {
    uVar2 = F_00a24d30(param_1 GEN_EDX_ARG,pbVar5,(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined * PTR32 *)(gen_frame + 0x4)),0);
    if (uVar2 != 0) {
      uVar3 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x14)),(*(undefined * PTR32 *)(gen_frame + 0x4)),10,0,0);
      F_0042ccf0((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar3);
      F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      return uVar2;
    }
  }
  return (int)pbVar5 - (int)param_2;
}

/* ref: FUN_00a241b0 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_00a241b0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa241b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  char cVar1;
  int iVar2;
  int iVar3;
  char * pcVar4;
  bool bVar5;
  uint uVar6;
  char * pcVar7;
  undefined * puVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  iVar2 = param_1[1];
  iVar3 = *param_1;
  F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  bVar5 = false;
  cVar1 = *param_2;
  pcVar4 = param_2;
  while (pcVar7 = pcVar4, cVar1 != '\0') {
    pcVar7 = pcVar4 + 1;
    if (bVar5) {
      F_0042d160(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,cVar1);
      bVar5 = false;
    }
    else if (cVar1 == '\\') {
      bVar5 = true;
    }
    else {
      if (cVar1 == ']') break;
      if (cVar1 == '>') {
        if (*pcVar7 == '=') {
          pcVar7 = pcVar4 + 2;
          uVar6 = F_0042b790(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          if (uVar6 == 0) {
LAB_00a243ab: ;
            F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            return 0xfffffffa;
          }
          F_0048a040(param_1 GEN_EDX_ARG,&REFG(undefined, 0x14a2e70));
          F_0048a040(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
          F_0042aca0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        }
        else {
          uVar6 = F_0042b790(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          if (uVar6 == 0) goto LAB_00a243ab;
          F_0048a040(param_1 GEN_EDX_ARG,&REFG(undefined, 0x14a2ec8));
          F_0048a040(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
          F_0042aca0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        }
      }
      else if (cVar1 == '<') {
        if (*pcVar7 == '=') {
          uVar6 = F_0042b790(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          if (uVar6 == 0) goto LAB_00a243ab;
          puVar8 = &REFG(undefined, 0x14a2f20);
LAB_00a24342: ;
          pcVar7 = pcVar4 + 2;
          F_0048a040(param_1 GEN_EDX_ARG,puVar8);
          F_0048a040(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
          F_0042aca0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        }
        else {
          uVar6 = F_0042b790(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          if (uVar6 == 0) goto LAB_00a243ab;
          F_0048a040(param_1 GEN_EDX_ARG,&REFG(undefined, 0x14a2f78));
          F_0048a040(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
          F_0042aca0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        }
      }
      else {
        if (cVar1 == '=') {
          if (*pcVar7 == '=') {
            pcVar7 = pcVar4 + 2;
            uVar6 = F_0042b790(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            if (uVar6 == 0) goto LAB_00a243ab;
            F_0048a040(param_1 GEN_EDX_ARG,&REFG(undefined, 0x14a2fd0));
            F_0048a040(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
            F_0042aca0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            goto LAB_00a2436a;
          }
        }
        else if ((cVar1 == '!') && (*pcVar7 == '=')) {
          uVar6 = F_0042b790(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          if (uVar6 == 0) goto LAB_00a243ab;
          puVar8 = &REFG(undefined, 0x14a3028);
          goto LAB_00a24342;
        }
        F_0042d160(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,cVar1);
      }
    }
LAB_00a2436a: ;
    pcVar4 = pcVar7;
    cVar1 = *pcVar7;
  }
  F_0048a040(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar6 = F_0042b790(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (uVar6 == 0) {
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return 0xfffffffb;
  }
  if ((param_1[1] - *param_1) / 0x54 - (iVar2 - iVar3) / 0x54 == 3) {
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return (int)pcVar7 - (int)param_2;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0xfffffffc;
}

/* ref: FUN_00a24430 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a24430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(char * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa24430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x15c, 4, 4);
  char cVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  char * pcVar5;
  char * pcVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x154)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x158));
  F_0042b630(((char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD);
  cVar1 = *param_2;
  pcVar5 = param_2;
  cVar4 = '\0';
  while (cVar1 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar4 = cVar1;
    if (((cVar1 == '>') || (cVar1 == '(')) || (cVar1 == '=')) {
      F_0048a040(param_1 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x0)));
      F_0042aca0(((char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      break;
    }
    F_0042d160(((char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,cVar1);
    cVar1 = *pcVar5;
  }
  bVar2 = false;
  if ((cVar4 == '(') || (cVar4 == '=')) {
    cVar1 = *pcVar5;
    pcVar6 = pcVar5;
    while (pcVar5 = pcVar6, cVar1 != '\0') {
      pcVar5 = pcVar6 + 1;
      if (bVar2) {
        F_0042d160(((char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,cVar1);
        bVar2 = false;
      }
      else if (cVar1 == '\\') {
        F_0042d160(((char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,0x5c);
        bVar2 = true;
      }
      else if (cVar1 == '[') {
        uVar3 = F_00a241b0(param_1,pcVar5);
        if ((int)uVar3 < -1) {
          if (uVar3 == 0xfffffffa) {
            pcVar6 = ((char *)REFP(0x10e3bc0));
          }
          else if (uVar3 == 0xfffffffb) {
            pcVar6 = ((char *)REFP(0x10e3bec));
          }
          else {
            if (uVar3 != 0xfffffffc) goto LAB_00a24626;
            pcVar6 = ((char *)REFP(0x10e3c18));
          }
          F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,pcVar6,pcVar5);
LAB_00a24626: ;
          F_0042e430(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
          F_0042c880(((char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          return uVar3;
        }
        pcVar5 = pcVar6 + uVar3 + 2;
      }
      else if (cVar1 == '<') {
        F_0042d160(((char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,0x3c);
        uVar3 = F_00a20450(((char * PTR32 *)(gen_frame + 0x0)),pcVar5);
        if ((int)uVar3 < -1) {
          F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,((char *)REFP(0x10e3c44)),pcVar5);
          goto LAB_00a24626;
        }
        pcVar5 = pcVar5 + uVar3;
      }
      else if ((cVar1 == ',') || (cVar1 == ')')) {
        F_0048a040(param_1 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x0)));
        F_0042aca0(((char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      else {
        if (cVar1 == '>') {
          if (*((char * PTR32 *)(gen_frame + 0x0))[0] != '\0') {
            F_0048a040(param_1 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x0)));
            F_0042aca0(((char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          }
          break;
        }
        F_0042d160(((char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,cVar1);
      }
      pcVar6 = pcVar5;
      cVar1 = *pcVar5;
    }
  }
  F_0042c880(((char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (int)pcVar5 - (int)param_2;
}

/* ref: FUN_00a246c0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a246c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa246c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x114, 12, 4);
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined * pvVar6;
  undefined * pvVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110));
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = param_1;
  ((undefined * PTR32 *)(gen_frame + 0x104))[0] = this;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x18)) = 0;
  uVar2 = F_00a24430(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x10)),param_2);
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  *param_3 = uVar2;
  if ((int)uVar2 < -1) {
    (*(uint *)(gen_frame + 0x2c)) = uVar2;
  }
  else {
    iVar5 = (int)(*(undefined * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x10))) >> 0x1f;
    iVar4 = ((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x10))) / 0x54 + iVar5;
    uVar2 = iVar4 - iVar5;
    if (iVar4 != iVar5) {
      F_00a2fde0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x20)),(*(undefined * PTR32 *)(gen_frame + 0x10)));
      pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      if ((*(int *)(gen_frame + 0x20)) == *((int *)GEN_TOP(((int)this + 8)))) {
        uVar2 = F_0042a990(pvVar6 GEN_EDX_ARG);
        F_00c472af(((undefined1 *)(gen_frame + 0x84)),0x80,((char *)REFP(0x10e3c6c)),uVar2);
        F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x84)),REFG(undefined4, 0x108cc50));
        F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
        F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
        F_004876d0(&(*(undefined * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        return 0xffffffff;
      }
      F_0042d160((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,2);
      iVar5 = (*(int *)(gen_frame + 0x20));
      F_0042d160(pvVar7 GEN_EDX_ARG,*((undefined1 *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 0x60))));
      F_0042b630(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
      if (1 < uVar2) {
        (*(int *)(gen_frame + 0x24)) = (int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x54;
        iVar4 = 0;
        do {
          F_0042b630(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
          if (iVar4 < *((int *)GEN_TOP((iVar5 + 0xa4)))) {
            ((byte *)(gen_frame + 0x0))[0xc] = *((byte *)GEN_TOP((iVar4 + 0x61 + iVar5)));
          }
          else {
            ((byte *)(gen_frame + 0x0))[0xc] = 0x2e;
          }
          uVar3 = F_00a22b40(((undefined * PTR32 *)(gen_frame + 0x104))[0] GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x24)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)));
          if ((int)uVar3 < -1) {
            F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
            F_0042c880(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
            F_004876d0(&(*(undefined * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
            return uVar3;
          }
          F_0042d4d0(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
          if ((int)(*(uint *)(gen_frame + 0x2c)) < (int)uVar3) {
            (*(uint *)(gen_frame + 0x2c)) = uVar3;
          }
          F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
          (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 0x54;
          uVar3 = iVar4 + 2;
          iVar5 = (*(int *)(gen_frame + 0x20));
          pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x28));
          iVar4 = iVar4 + 1;
        } while (uVar3 < uVar2);
      }
      uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
      uVar2 = F_00a20720(((undefined * PTR32 *)(gen_frame + 0x104)),uVar2);
      iVar5 = 0;
      if (0 < (int)uVar2) {
        do {
          F_0042d160(pvVar7 GEN_EDX_ARG,*((undefined1 *)GEN_TOP(((int)((undefined * PTR32 *)(gen_frame + 0x104)) + iVar5))));
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar2);
      }
      F_0042d4d0(pvVar7 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb0)));
      F_0042d160(pvVar7 GEN_EDX_ARG,3);
      F_0042c880(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
    }
  }
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x14));
  pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  if ((*(undefined * PTR32 *)(gen_frame + 0x10)) != ((undefined *)GEN_TOP(0x0))) {
    for (; pvVar6 != pvVar1; pvVar6 = ((undefined *)GEN_TOP(((int)pvVar6 + 0x54)))) {
      F_0042c880(pvVar6 GEN_EDX_ARG);
    }
    F_00429760(pvVar7,(((*(int *)(gen_frame + 0x18)) - (int)pvVar7) / 0x54) * 0x54,0x35);
  }
  return (*(uint *)(gen_frame + 0x2c));
}

/* ref: FUN_00a249b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a249b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa249b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00a246c0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),(*(int *)&gen_args[1]) + 1,&(*(int *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00a249d0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a249d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa249d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  int iVar2;
  undefined1 * puVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD);
  puVar3 = ((undefined1 *)(gen_frame + 0x0));
  iVar2 = (int)this + 0x34;
  uVar1 = F_0042a990(param_1 GEN_EDX_ARG);
  F_00a23c00(this GEN_EDX_ARG,uVar1,iVar2,puVar3);
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x30)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Component::Text::TextModule::vf8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a24a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa24a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined * in_ecx;
  
  in_ecx = this + 0x114;
  F_0042aca0(in_ecx GEN_EDX_FWD);
  F_00a246c0(this + 0x54 GEN_EDX_ARG,in_ecx,(*(int *)&gen_args[1]) + 1,&(*(int *)&gen_args[1]));
  F_0042cbc0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,in_ecx);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a24a70 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a24a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa24a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD);
  uVar1 = F_00a23ff0(this GEN_EDX_ARG,param_1,param_3,((undefined1 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    F_0042d4d0(param_4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a24ae0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a24ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa24ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD);
  uVar1 = F_00a23ff0(this GEN_EDX_ARG,param_1,param_3,((undefined1 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    uVar2 = F_0042a9a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0,0,0,0);
    F_0042d4d0(param_4 GEN_EDX_ARG,uVar2);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a24b60 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a24b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa24b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD);
  uVar1 = F_00a23ff0(this GEN_EDX_ARG,param_1,param_3,((undefined1 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    uVar2 = F_0042a9a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,1,0,0,0);
    F_0042d4d0(param_4 GEN_EDX_ARG,uVar2);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a24be0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a24be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa24be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD);
  uVar1 = F_00a23ff0(this GEN_EDX_ARG,param_1,param_3,((undefined1 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x30))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG)));
    uVar3 = F_0042a9a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,1,1,0,*(undefined4 *)(&REFG(undefined, 0x1333e28) + *piVar2 * 4));
    F_0042d4d0(param_4 GEN_EDX_ARG,uVar3);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a24c70 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a24c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa24c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD);
  uVar1 = F_00a23ff0(this GEN_EDX_ARG,param_1,param_3,((undefined1 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    uVar2 = F_0042b820(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_0042d4d0(param_4 GEN_EDX_ARG,uVar2);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a24ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a24ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa24ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e3f48));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  uVar1 = F_004296a0(0x68,0,0x2c4);
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) = *((int *)GEN_TOP(((int)this + 0x10)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 8))) = *((int *)GEN_TOP(((int)this + 0x10)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x65))) = 1;
  return (uint)this;
}

/* ref: FUN_00a24d30 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a24d30(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa24d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  GEN_FRAME_DECL_GS(0x114, 12, 4);
  undefined * pvVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte * pbVar6;
  ulonglong uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110));
  bVar2 = *param_2;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_3;
  pbVar6 = param_2;
  if (0xef < bVar2) {
    if (bVar2 != 0xff) {
      uVar3 = F_00a20540(param_2,param_4);
      pbVar6 = param_2 + uVar3;
    }
    goto switchD_00a25093_default;
  }
  if (0xec < bVar2) goto switchD_00a25093_default;
  if (0xe7 < bVar2) {
    if (bVar2 == 0xe8) {
      uVar3 = F_00a24d30(param_1 GEN_EDX_ARG,param_2 + 1,param_3,param_4,1);
      *param_4 = *param_4 - 1;
      pbVar6 = param_2 + 1 + uVar3;
      if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10))) <= *param_4) {
LAB_00a24e4a: ;
        *param_4 = 0;
        goto switchD_00a25093_default;
      }
      uVar3 = F_00481720((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,*param_4);
      if (*((char *)GEN_TOP((uVar3 + 8))) == '\0') {
        uVar3 = F_00481720((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,*param_4);
        *param_4 = **((uint * PTR32 *)GEN_TOP((uVar3 + 4)));
        goto switchD_00a25093_default;
      }
    }
    else {
      if (bVar2 != 0xe9) {
        if (bVar2 != 0xec) goto switchD_00a25093_default;
        *param_4 = 0;
        goto LAB_00a25115;
      }
      uVar3 = F_00a24d30(param_1 GEN_EDX_ARG,param_2 + 1,((undefined *)GEN_TOP(((int)param_1 + 0x14))),param_4,1);
      *param_4 = *param_4 - 1;
      pbVar6 = param_2 + 1 + uVar3;
      if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x24))) <= *param_4) goto LAB_00a24e4a;
      uVar3 = F_00484010(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x14))) GEN_EDX_ARG,*param_4);
      if (*((char *)GEN_TOP((uVar3 + 8))) == '\0') {
        uVar3 = F_00484010(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x14))) GEN_EDX_ARG,*param_4);
        *param_4 = **((uint * PTR32 *)GEN_TOP((uVar3 + 4)));
        goto switchD_00a25093_default;
      }
    }
    *param_4 = 0;
    goto switchD_00a25093_default;
  }
  if (bVar2 < 0xe0) {
    if (0xd7 < bVar2) {
      switch((unsigned int)(uintptr_t)(bVar2)) {
      case 0xd8: ;
        uVar7 = F_0046ff40();
        *param_4 = (uint)(uVar7 % 1000);
        pbVar6 = param_2 + 1;
        break;
      case 0xd9: ;
        *param_4 = REFG(undefined4, 0x14a2ad4);
        pbVar6 = param_2 + 1;
        break;
      case 0xda: ;
        *param_4 = REFG(undefined4, 0x14a2ad8);
        pbVar6 = param_2 + 1;
        break;
      case 0xdb: ;
        *param_4 = REFG(undefined4, 0x14a2adc);
        pbVar6 = param_2 + 1;
        break;
      case 0xdc: ;
        *param_4 = REFG(undefined4, 0x14a2ae0);
        pbVar6 = param_2 + 1;
        break;
      case 0xdd: ;
        *param_4 = REFG(int, 0x14a2aec) + 1;
        pbVar6 = param_2 + 1;
        break;
      case 0xde: ;
        *param_4 = REFG(int, 0x14a2ae4) + 1;
        pbVar6 = param_2 + 1;
        break;
      case 0xdf: ;
        *param_4 = REFG(int, 0x14a2ae8) + 0x76c;
        pbVar6 = param_2 + 1;
      }
      goto switchD_00a25093_default;
    }
    if (bVar2 == 0) goto switchD_00a25093_default;
    *param_4 = bVar2 - 1;
LAB_00a25115: ;
    pbVar6 = param_2 + 1;
    goto switchD_00a25093_default;
  }
  pbVar6 = param_2 + 1;
  F_0042b630(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0xb8)) GEN_EDX_ARG);
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0xc));
  uVar3 = F_00a202f0(pbVar6);
  if (uVar3 == 0) {
    uVar5 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,pbVar6,(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x0)),1);
  }
  else {
    uVar5 = F_00a23ff0(pvVar1 GEN_EDX_ARG,pbVar6,(*(undefined * PTR32 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x64)),1);
    F_00a21bc0((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)));
  }
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0xc));
  pbVar6 = pbVar6 + uVar5;
  uVar5 = F_00a202f0(pbVar6);
  if (uVar5 == 0) {
    uVar4 = F_00a24d30(pvVar1 GEN_EDX_ARG,pbVar6,(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x4)),1);
  }
  else {
    uVar4 = F_00a23ff0(pvVar1 GEN_EDX_ARG,pbVar6,(*(undefined * PTR32 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0xb8)),1);
    F_00a21bc0((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb8)));
  }
  pbVar6 = pbVar6 + uVar4;
  if (uVar3 != uVar5) {
    if (uVar3 == 1) {
      uVar3 = F_00a4cf70(((undefined1 *)(gen_frame + 0x64)),0);
      (*(uint *)(gen_frame + 0x0)) = uVar3;
      uVar3 = 0;
    }
    else {
      uVar5 = F_00a4cf70(((undefined1 *)(gen_frame + 0xb8)),0);
      (*(uint *)(gen_frame + 0x4)) = uVar5;
    }
  }
  switch((unsigned int)(uintptr_t)(bVar2)) {
  case 0xe0: ;
    if (uVar3 == 0) {
      uVar3 = (uint)((int)(*(uint *)(gen_frame + 0x4)) <= (int)(*(uint *)(gen_frame + 0x0)));
    }
    else {
      bVar2 = F_0042c760(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb8)));
LAB_00a25055: ;
      uVar3 = (uint)(bVar2 != 0);
    }
    break;
  case 0xe1: ;
    if (uVar3 != 0) {
      bVar2 = F_0042c820(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb8)));
      goto LAB_00a25055;
    }
    uVar3 = (uint)((int)(*(uint *)(gen_frame + 0x4)) < (int)(*(uint *)(gen_frame + 0x0)));
    break;
  case 0xe2: ;
    if (uVar3 != 0) {
      bVar2 = F_0042c700(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb8)));
      goto LAB_00a25055;
    }
    uVar3 = (uint)((int)(*(uint *)(gen_frame + 0x0)) <= (int)(*(uint *)(gen_frame + 0x4)));
    break;
  case 0xe3: ;
    if (uVar3 != 0) {
      bVar2 = F_0042c7c0(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb8)));
      goto LAB_00a25055;
    }
    uVar3 = (uint)((int)(*(uint *)(gen_frame + 0x0)) < (int)(*(uint *)(gen_frame + 0x4)));
    break;
  case 0xe4: ;
    if (uVar3 != 0) {
      bVar2 = F_0042b660(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb8)));
      goto LAB_00a25055;
    }
    uVar3 = (uint)((*(uint *)(gen_frame + 0x0)) == (*(uint *)(gen_frame + 0x4)));
    break;
  case 0xe5: ;
    if (uVar3 != 0) {
      bVar2 = F_0042b6f0(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb8)));
      goto LAB_00a25055;
    }
    uVar3 = (uint)((*(uint *)(gen_frame + 0x0)) != (*(uint *)(gen_frame + 0x4)));
    break;
  default: ;
    goto switchD_00a24f87_default;
  }
  *param_4 = uVar3;
switchD_00a24f87_default: ;
  F_0042c880(((undefined1 *)(gen_frame + 0xb8)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
switchD_00a25093_default: ;
  if ((param_5 != '\0') && (param_2 == pbVar6)) {
    F_0042b630(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    uVar3 = F_00a23ff0((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,pbVar6,(*(undefined * PTR32 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x10)),0);
    if (uVar3 != 0) {
      uVar5 = F_00a4cf70(((undefined1 *)(gen_frame + 0x10)),0);
      *param_4 = uVar5;
      F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      return uVar3;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  }
  return (int)pbVar6 - (int)param_2;
}

/* ref: FUN_00a251f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a251f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa251f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]),1);
  if (uVar1 != 0) {
    F_00a21c80((*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[1]));
  }
  return uVar1;
}

/* ref: FUN_00a25230 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a25230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa25230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0xf4, 12, 4);
  undefined * this_00;
  uint uVar1;
  undefined4 * puVar2;
  char cVar3;
  int iVar4;
  undefined4 * puVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e3fc4));
  this_00 = ((undefined *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_004296a0(0xac,0,0x2c4);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xa8))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xa9))) = 1;
  F_004142d0((int)this + 0x14 GEN_EDX_ARG,0xffffffff);
  F_0042b630((int)this + 0x18 GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 7;
  (*(int *)(gen_frame + 0xe8)) = 0;
  cVar3 = 'n';
  do {
    *((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0xa4)) + (*(int *)(gen_frame + 0xe8)) + 1))) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3919))[(int)((*(int *)(gen_frame + 0xe8)))];
    (*(int *)(gen_frame + 0xe8)) = (*(int *)(gen_frame + 0xe8)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e391c)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 8;
  (*(int *)(gen_frame + 0xe8)) = 0;
  cVar3 = '.';
  do {
    *((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0xa4)) + (*(int *)(gen_frame + 0xe8)) + 1))) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3925))[(int)((*(int *)(gen_frame + 0xe8)))];
    (*(int *)(gen_frame + 0xe8)) = (*(int *)(gen_frame + 0xe8)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x10e3928),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 9;
  (*(int *)(gen_frame + 0xe8)) = 0;
  cVar3 = '.';
  do {
    *((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0xa4)) + (*(int *)(gen_frame + 0xe8)) + 1))) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e392d))[(int)((*(int *)(gen_frame + 0xe8)))];
    (*(int *)(gen_frame + 0xe8)) = (*(int *)(gen_frame + 0xe8)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x10e3930),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 9;
  (*(int *)(gen_frame + 0xe8)) = 0;
  cVar3 = '.';
  do {
    *((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0xa4)) + (*(int *)(gen_frame + 0xe8)) + 1))) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3935))[(int)((*(int *)(gen_frame + 0xe8)))];
    (*(int *)(gen_frame + 0xe8)) = (*(int *)(gen_frame + 0xe8)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e3938)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x10;
  (*(int *)(gen_frame + 0xe8)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x10e3940),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x11;
  (*(int *)(gen_frame + 0xe8)) = 0;
  cVar3 = 'n';
  do {
    *((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0xa4)) + (*(int *)(gen_frame + 0xe8)) + 1))) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3945))[(int)((*(int *)(gen_frame + 0xe8)))];
    (*(int *)(gen_frame + 0xe8)) = (*(int *)(gen_frame + 0xe8)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x10e3948),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x17;
  (*(int *)(gen_frame + 0xe8)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3950)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x16;
  (*(int *)(gen_frame + 0xe8)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x10e3954),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x12;
  (*(int *)(gen_frame + 0xe8)) = 0;
  cVar3 = 'n';
  do {
    *((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0xa4)) + (*(int *)(gen_frame + 0xe8)) + 1))) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3959))[(int)((*(int *)(gen_frame + 0xe8)))];
    (*(int *)(gen_frame + 0xe8)) = (*(int *)(gen_frame + 0xe8)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x10e395c),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x1e;
  (*(int *)(gen_frame + 0xe8)) = 0;
  cVar3 = 'n';
  do {
    *((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0xa4)) + (*(int *)(gen_frame + 0xe8)) + 1))) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3965))[(int)((*(int *)(gen_frame + 0xe8)))];
    (*(int *)(gen_frame + 0xe8)) = (*(int *)(gen_frame + 0xe8)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e3968)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x13;
  (*(int *)(gen_frame + 0xe8)) = 0;
  cVar3 = 'n';
  do {
    *((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0xa4)) + (*(int *)(gen_frame + 0xe8)) + 1))) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3971))[(int)((*(int *)(gen_frame + 0xe8)))];
    (*(int *)(gen_frame + 0xe8)) = (*(int *)(gen_frame + 0xe8)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e3974)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x14;
  (*(int *)(gen_frame + 0xe8)) = 0;
  cVar3 = 'n';
  do {
    *((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0xa4)) + (*(int *)(gen_frame + 0xe8)) + 1))) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e397d))[(int)((*(int *)(gen_frame + 0xe8)))];
    (*(int *)(gen_frame + 0xe8)) = (*(int *)(gen_frame + 0xe8)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e3980)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x15;
  (*(int *)(gen_frame + 0xe8)) = 0;
  cVar3 = 'n';
  do {
    *((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0xa4)) + (*(int *)(gen_frame + 0xe8)) + 1))) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e398d))[(int)((*(int *)(gen_frame + 0xe8)))];
    (*(int *)(gen_frame + 0xe8)) = (*(int *)(gen_frame + 0xe8)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e3990)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x1d;
  (*(int *)(gen_frame + 0xe8)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x10e399c),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x1f;
  (*(int *)(gen_frame + 0xe8)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x10e39a4),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x18;
  (*(int *)(gen_frame + 0xe8)) = 0;
  cVar3 = 'n';
  do {
    *((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0xa4)) + (*(int *)(gen_frame + 0xe8)) + 1))) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39a9))[(int)((*(int *)(gen_frame + 0xe8)))];
    (*(int *)(gen_frame + 0xe8)) = (*(int *)(gen_frame + 0xe8)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e39ac)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x19;
  (*(int *)(gen_frame + 0xe8)) = 0;
  cVar3 = 'n';
  do {
    *((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0xa4)) + (*(int *)(gen_frame + 0xe8)) + 1))) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39b5))[(int)((*(int *)(gen_frame + 0xe8)))];
    (*(int *)(gen_frame + 0xe8)) = (*(int *)(gen_frame + 0xe8)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x10e39b8),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x1a;
  (*(int *)(gen_frame + 0xe8)) = 0;
  cVar3 = 'n';
  do {
    *((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0xa4)) + (*(int *)(gen_frame + 0xe8)) + 1))) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39c1))[(int)((*(int *)(gen_frame + 0xe8)))];
    (*(int *)(gen_frame + 0xe8)) = (*(int *)(gen_frame + 0xe8)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e39c4)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x1b;
  (*(int *)(gen_frame + 0xe8)) = 0;
  cVar3 = 'n';
  do {
    *((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0xa4)) + (*(int *)(gen_frame + 0xe8)) + 1))) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39cd))[(int)((*(int *)(gen_frame + 0xe8)))];
    (*(int *)(gen_frame + 0xe8)) = (*(int *)(gen_frame + 0xe8)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x10e39d0),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x1c;
  (*(int *)(gen_frame + 0xe8)) = 0;
  cVar3 = 'n';
  do {
    *((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0xa4)) + (*(int *)(gen_frame + 0xe8)) + 1))) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39d9))[(int)((*(int *)(gen_frame + 0xe8)))];
    (*(int *)(gen_frame + 0xe8)) = (*(int *)(gen_frame + 0xe8)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e39dc)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x20;
  (*(int *)(gen_frame + 0xe8)) = 0;
  cVar3 = 'n';
  do {
    *((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0xa4)) + (*(int *)(gen_frame + 0xe8)) + 1))) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39e5))[(int)((*(int *)(gen_frame + 0xe8)))];
    (*(int *)(gen_frame + 0xe8)) = (*(int *)(gen_frame + 0xe8)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e39e8)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x21;
  (*(int *)(gen_frame + 0xe8)) = 0;
  cVar3 = 'n';
  do {
    *((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0xa4)) + (*(int *)(gen_frame + 0xe8)) + 1))) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39ed))[(int)((*(int *)(gen_frame + 0xe8)))];
    (*(int *)(gen_frame + 0xe8)) = (*(int *)(gen_frame + 0xe8)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e39f0)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x22;
  (*(int *)(gen_frame + 0xe8)) = 0;
  cVar3 = 'n';
  do {
    *((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0xa4)) + (*(int *)(gen_frame + 0xe8)) + 1))) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e39f5))[(int)((*(int *)(gen_frame + 0xe8)))];
    (*(int *)(gen_frame + 0xe8)) = (*(int *)(gen_frame + 0xe8)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x10e39f8),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x23;
  (*(int *)(gen_frame + 0xe8)) = 0;
  cVar3 = 'n';
  do {
    *((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0xa4)) + (*(int *)(gen_frame + 0xe8)) + 1))) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3a01))[(int)((*(int *)(gen_frame + 0xe8)))];
    (*(int *)(gen_frame + 0xe8)) = (*(int *)(gen_frame + 0xe8)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x10e3a04),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xa4)) + 0)) = 0x24;
  (*(int *)(gen_frame + 0xe8)) = 0;
  cVar3 = 'n';
  do {
    *((char *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0xa4)) + (*(int *)(gen_frame + 0xe8)) + 1))) = cVar3;
    cVar3 = (&REFG(undefined, 0x10e3a0d))[(int)((*(int *)(gen_frame + 0xe8)))];
    (*(int *)(gen_frame + 0xe8)) = (*(int *)(gen_frame + 0xe8)) + 1;
  } while (cVar3 != '\0');
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3a10)),REFG(undefined4, 0x108cc50));
  puVar2 = &(*(undefined4 *)(gen_frame + 0xa4));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0xac,0,0x2c4)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar2 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = ((undefined4 *)(gen_frame + 0x5c));
    puVar2 = puVar2 + 0x18;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  F_00a307a0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(F_00a2b000(&(*(undefined4 *)(gen_frame + 0xa4)) GEN_EDX_ARG,0x25,&REFG(undefined, 0x10e3a14))));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x10e3a18),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(F_00a2b000(&(*(undefined4 *)(gen_frame + 0xa4)) GEN_EDX_ARG,0x26,&REFG(undefined, 0x10e3a20))));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e3a24)),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(F_00a2b000(&(*(undefined4 *)(gen_frame + 0xa4)) GEN_EDX_ARG,0x27,((char *)REFP(0x10e3a2c)))));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x10e3a34),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(F_00a2b000(&(*(undefined4 *)(gen_frame + 0xa4)) GEN_EDX_ARG,0x28,&REFG(undefined, 0x10e3a3c))));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e3a44)),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(F_00a2b000(&(*(undefined4 *)(gen_frame + 0xa4)) GEN_EDX_ARG,0x29,&REFG(undefined, 0x10e3a4c))));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e3a50)),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(F_00a2b000(&(*(undefined4 *)(gen_frame + 0xa4)) GEN_EDX_ARG,0x2a,&REFG(undefined, 0x10e3a58))));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x10e3a5c),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(F_00a2b000(&(*(undefined4 *)(gen_frame + 0xa4)) GEN_EDX_ARG,0x2b,&REFG(undefined, 0x10e3a64))));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x10e3a68),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(F_00a2b000(&(*(undefined4 *)(gen_frame + 0xa4)) GEN_EDX_ARG,0x2d,&REFG(undefined, 0x10e3a70))));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e3a74)),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(F_00a2b000(&(*(undefined4 *)(gen_frame + 0xa4)) GEN_EDX_ARG,0x2c,(*(undefined * PTR32 (*)[1])REFP(0x10e3a7c)))));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e3a80)),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(F_00a2b000(&(*(undefined4 *)(gen_frame + 0xa4)) GEN_EDX_ARG,0x2e,&REFG(undefined, 0x10e3a88))));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e3a8c)),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(F_00a2b000(&(*(undefined4 *)(gen_frame + 0xa4)) GEN_EDX_ARG,0x2f,&REFG(undefined, 0x10e3a94))));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e3a98)),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(F_00a2b000(&(*(undefined4 *)(gen_frame + 0xa4)) GEN_EDX_ARG,0x30,&REFG(undefined, 0x10e3aa0))));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e3aa4)),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(F_00a2b000(&(*(undefined4 *)(gen_frame + 0xa4)) GEN_EDX_ARG,0x31,&REFG(undefined, 0x10e3aac))));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e3ab0)),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(F_00a2b000(&(*(undefined4 *)(gen_frame + 0xa4)) GEN_EDX_ARG,0x32,&REFG(undefined, 0x10e3ab8))));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e3abc)),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(F_00a2b000(&(*(undefined4 *)(gen_frame + 0xa4)) GEN_EDX_ARG,0x33,&REFG(undefined, 0x10e3ac4))));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e3ac8)),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(F_00a2b000(&(*(undefined4 *)(gen_frame + 0xa4)) GEN_EDX_ARG,0x34,&REFG(undefined, 0x10e3ad0))));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x10e3ad4)),REFG(undefined4, 0x108cc50));
  puVar5 = ((undefined4 *)(gen_frame + 0x5c));
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  F_00a31090(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00a26b00 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a26b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa26b00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  uint uVar1;
  undefined4 uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  ((undefined1 *)(gen_frame + 0x8))[0] = 0;
  F_00a2edd0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,param_1,0,0xffffffff);
  (*(undefined4 *)(gen_frame + 0x38)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  ((undefined1 *)(gen_frame + 0x24))[0] = 0;
  F_00a2edd0(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG,param_2,0,0xffffffff);
  uVar2 = 0;
  uVar1 = F_00a32750(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  F_00a32170(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar1,uVar2);
  uVar1 = F_00a2e950(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a26b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a26b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa26b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  char cVar1;
  undefined1 * puVar2;
  char * pcVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  
  pcVar3 = ((char *)GEN_TOP(F_0042a990((*(uint *)&gen_args[0]) GEN_EDX_FWD)));
  pcVar5 = pcVar3;
  pcVar6 = pcVar3;
  if (-1 < (*(int *)&gen_args[2])) {
    do {
      pcVar5 = pcVar6;
      cVar1 = *pcVar5;
      if (cVar1 == '\0') break;
      if (cVar1 == '\x02') {
        uVar4 = F_00a24d30(this GEN_EDX_ARG,pcVar5 + 2,(int)this + 0x34,&(*(uint *)&gen_args[0]),1);
        pcVar6 = pcVar5 + 2 + (*(uint *)&gen_args[0]) + uVar4 + 1;
      }
      else {
        uVar4 = F_0042acc0(cVar1);
        pcVar6 = pcVar5 + uVar4;
      }
    } while ((int)pcVar6 - (int)pcVar3 <= (*(int *)&gen_args[2]));
  }
  puVar2 = (*(undefined1 * PTR32 *)&gen_args[1]);
  uVar4 = (int)pcVar5 - (int)pcVar3;
  if (uVar4 == 0) {
    *(*(undefined1 * PTR32 *)&gen_args[1]) = 0;
    return 0;
  }
  (*(uint *)&gen_args[0]) = uVar4;
  F_00c46aa0((*(undefined1 * PTR32 *)&gen_args[1]),pcVar3,uVar4);
  puVar2[uVar4] = 0;
  return (*(uint *)&gen_args[0]);
}

/* ref: FUN_00a26c30 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a26c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa26c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0x60, 0, 4);
  char cVar1;
  char * pcVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c));
  pcVar2 = ((char *)GEN_TOP(F_0042a990(param_1 GEN_EDX_FWD)));
  pcVar4 = pcVar2;
  pcVar5 = pcVar2;
  if (-1 < param_2) {
    do {
      pcVar4 = pcVar5;
      cVar1 = *pcVar4;
      if (cVar1 == '\0') break;
      if (cVar1 == '\x02') {
        uVar3 = F_00a24d30(this GEN_EDX_ARG,pcVar4 + 2,(int)this + 0x34,&(*(uint *)(gen_frame + 0x0)),1);
        pcVar5 = pcVar4 + 2 + (*(uint *)(gen_frame + 0x0)) + uVar3 + 1;
      }
      else {
        uVar3 = F_0042acc0(cVar1);
        pcVar5 = pcVar4 + uVar3;
      }
    } while ((int)pcVar5 - (int)pcVar2 <= param_2);
  }
  (*(uint *)(gen_frame + 0x0)) = (int)pcVar4 - (int)pcVar2;
  uVar3 = F_0042d2c0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0,(int)pcVar4 - (int)pcVar2);
  F_0042ccf0(param_1 GEN_EDX_ARG,uVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_00a26ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a26ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa26ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  
  pcVar2 = ((char *)GEN_TOP(F_0042a990((*(int *)&gen_args[0]) GEN_EDX_FWD)));
  uVar4 = 0;
  cVar1 = *pcVar2;
  while (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      if (pcVar2[1] != '\x10') {
        uVar4 = uVar4 + 1;
      }
      uVar3 = F_00a24d30(this GEN_EDX_ARG,pcVar2 + 2,(int)this + 0x34,&(*(int *)&gen_args[0]),1);
      pcVar2 = pcVar2 + 2 + (*(int *)&gen_args[0]) + uVar3 + 1;
    }
    else {
      uVar4 = uVar4 + 1;
      uVar3 = F_0042acc0(cVar1);
      pcVar2 = pcVar2 + uVar3;
    }
    cVar1 = *pcVar2;
  }
  return uVar4;
}

/* ref: FUN_00a26d50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a26d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa26d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  char * pcVar4;
  
  pcVar2 = ((char *)GEN_TOP(F_0042a990((*(int *)&gen_args[0]) GEN_EDX_FWD)));
  cVar1 = *pcVar2;
  pcVar4 = pcVar2;
  while (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      uVar3 = F_00a24d30(this GEN_EDX_ARG,pcVar4 + 2,(int)this + 0x34,&(*(int *)&gen_args[0]),1);
      pcVar4 = pcVar4 + 2 + (*(int *)&gen_args[0]) + uVar3 + 1;
    }
    else {
      uVar3 = F_0042acc0(cVar1);
      pcVar4 = pcVar4 + uVar3;
    }
    cVar1 = *pcVar4;
  }
  return (int)pcVar4 - (int)pcVar2;
}

/* ref: FUN_00a26db0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a26db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa26db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_GS(0x6c, 4, 4);
  char cVar1;
  undefined * this_00;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x68));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  if (param_3 == 0) {
    uVar2 = F_0042e430(param_1 GEN_EDX_FWD,&REFG(undefined, 0x10e38dd));
    return uVar2;
  }
  pcVar3 = ((char *)GEN_TOP(F_0042a990(param_1 GEN_EDX_ARG)));
  (*(char * PTR32 *)(gen_frame + 0x4)) = pcVar3;
  iVar5 = 0;
  uVar2 = 0;
  (*(bool *)(gen_frame + 0xf)) = param_3 == REFG(int, 0x108cc50);
  while ((this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8)), (*(bool *)(gen_frame + 0xf)) != false || (uVar2 < param_2 + param_3))) {
    cVar1 = *pcVar3;
    if (cVar1 == '\0') break;
    if (cVar1 == '\x02') {
      uVar4 = F_00a24d30(this GEN_EDX_ARG,pcVar3 + 2,(int)this + 0x34,&(*(int *)(gen_frame + 0x0)),1);
      uVar4 = (*(int *)(gen_frame + 0x0)) + uVar4 + 3;
    }
    else {
      uVar4 = F_0042acc0(cVar1);
    }
    pcVar3 = pcVar3 + uVar4;
    uVar2 = uVar2 + 1;
    if (uVar2 == param_2) {
      iVar5 = (int)pcVar3 - (int)(*(char * PTR32 *)(gen_frame + 0x4));
    }
  }
  if (uVar2 < param_2) {
    uVar2 = F_0042e430((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined, 0x10e38de));
    return uVar2;
  }
  uVar2 = F_0042d2c0((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),iVar5,pcVar3 + (-(int)(*(char * PTR32 *)(gen_frame + 0x4)) - iVar5));
  F_0042ccf0(this_00 GEN_EDX_ARG,uVar2);
  uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  return (uint)uVar6;
}

/* ref: FUN_00a26ec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a26ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa26ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  
  pbVar2 = ((byte *)GEN_TOP(F_0042a990((*(byte * PTR32 *)&gen_args[0]) GEN_EDX_FWD)));
  bVar1 = *pbVar2;
  pbVar4 = pbVar2;
  while (bVar1 != 0) {
    bVar1 = *pbVar4;
    if (bVar1 == 2) {
      pbVar2 = ((byte *)GEN_TOP(F_00a24d30(param_1 GEN_EDX_ARG,pbVar4 + 2,param_1 + 0x34,&(*(byte * PTR32 *)&gen_args[0]),1)));
      pbVar4 = pbVar4 + 3 + (int)((*(byte * PTR32 *)&gen_args[0]) + (int)pbVar2);
    }
    else {
      pbVar2 = ((byte *)GEN_TOP(F_0042acc0(bVar1)));
      iVar3 = 0;
      (*(byte * PTR32 *)&gen_args[0]) = pbVar2;
      if (0 < (int)pbVar2) {
        do {
          if ((uint)*pbVar4 == (int)(*(char *)&gen_args[1])) {
            *pbVar4 = (*(byte *)&gen_args[2]);
          }
          iVar3 = iVar3 + 1;
          pbVar4 = pbVar4 + 1;
        } while (iVar3 < (int)pbVar2);
      }
    }
    bVar1 = *pbVar4;
  }
  return (uint)pbVar2;
}

/* ref: FUN_00a26f40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a26f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa26f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  char * pcVar4;
  
  pcVar2 = (*(char * PTR32 *)&gen_args[0]);
  cVar1 = *(*(char * PTR32 *)&gen_args[0]);
  pcVar4 = (*(char * PTR32 *)&gen_args[0]);
  while (((cVar1 != '\0' && (cVar1 = *pcVar4, cVar1 != '\r')) && (cVar1 != '\n'))) {
    if (cVar1 == '\x02') {
      if (pcVar4[1] == '\x10') break;
      uVar3 = F_00a24d30(this GEN_EDX_FWD,pcVar4 + 2,(int)this + 0x34,&(*(char * PTR32 *)&gen_args[0]),1);
      pcVar4 = pcVar4 + 2 + uVar3 + 1 + (int)(*(char * PTR32 *)&gen_args[0]);
    }
    else {
      uVar3 = F_0042acc0(cVar1);
      pcVar4 = pcVar4 + uVar3;
    }
    cVar1 = *pcVar4;
  }
  return (int)pcVar4 - (int)pcVar2;
}

/* ref: FUN_00a26fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a26fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa26fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  
  uVar4 = 1;
  uVar2 = F_0042a990((*(int *)&gen_args[0]) GEN_EDX_FWD);
  uVar3 = F_00a26f40(this GEN_EDX_ARG,uVar2);
  for (pcVar5 = ((char *)GEN_TOP((uVar2 + uVar3))); (pcVar5 != ((char *)GEN_TOP(0x0)) && (cVar1 = *pcVar5, cVar1 != '\0'))
      ; pcVar5 = pcVar5 + uVar2) {
    if (cVar1 == '\x02') {
      uVar2 = F_00a24d30(this GEN_EDX_ARG,pcVar5 + 2,(int)this + 0x34,&(*(int *)&gen_args[0]),1);
      pcVar5 = pcVar5 + 2 + (*(int *)&gen_args[0]) + uVar2 + 1;
    }
    else if ((cVar1 == '\r') || (cVar1 == '\n')) {
      if (pcVar5[1] == '\n') {
        pcVar5 = pcVar5 + 1;
      }
      pcVar5 = pcVar5 + 1;
    }
    uVar4 = uVar4 + 1;
    uVar2 = F_00a26f40(this GEN_EDX_ARG,pcVar5);
  }
  return uVar4;
}

/* ref: FUN_00a27030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a27030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa27030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0042a990(param_2 GEN_EDX_FWD);
  uVar1 = F_00a26f40(this GEN_EDX_ARG,uVar1);
  F_0042d2c0(param_2 GEN_EDX_ARG,param_1,0,uVar1);
  return param_1;
}

/* ref: FUN_00a27060 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a27060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa27060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x60, 0, 4);
  undefined * this_00;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  char * pcVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c));
  pcVar2 = ((char *)GEN_TOP(F_0042a990(param_2 GEN_EDX_FWD)));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x4c)));
  F_0042aca0(this_00 GEN_EDX_ARG);
  cVar1 = *pcVar2;
  pcVar4 = pcVar2;
  do {
    if (cVar1 == '\0') {
      F_0042cbc0(param_1 GEN_EDX_ARG,this_00);
      return (uint)param_1;
    }
    uVar3 = F_00a26f40(this GEN_EDX_ARG,pcVar4);
    (*(uint *)(gen_frame + 0x0)) = uVar3;
    uVar3 = F_0042d2c0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),(int)pcVar4 - (int)pcVar2,uVar3);
    F_0042ccf0(this_00 GEN_EDX_ARG,uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    pcVar4 = pcVar4 + (*(uint *)(gen_frame + 0x0));
    cVar1 = *pcVar4;
    if (cVar1 == '\x02') {
      uVar3 = F_00a24d30(this GEN_EDX_ARG,pcVar4 + 2,(int)this + 0x34,&(*(uint *)(gen_frame + 0x0)),1);
      pcVar4 = pcVar4 + 2 + (*(uint *)(gen_frame + 0x0)) + uVar3 + 1;
LAB_00a27107: ;
      F_0042aca0(this_00 GEN_EDX_ARG);
    }
    else if ((cVar1 == '\r') || (cVar1 == '\n')) {
      if (pcVar4[1] == '\n') {
        pcVar4 = pcVar4 + 1;
      }
      pcVar4 = pcVar4 + 1;
      goto LAB_00a27107;
    }
    cVar1 = *pcVar4;
  } while( true );
}

/* ref: FUN_00a27140 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a27140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa27140u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  char cVar1;
  undefined4 uVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  
  pcVar3 = ((char *)GEN_TOP(F_0042a990((*(uint *)&gen_args[0]) GEN_EDX_FWD)));
  uVar2 = (*(undefined4 *)&gen_args[1]);
  if ((*(char *)&gen_args[2]) != '\0') {
    F_0042aca0((*(undefined4 *)&gen_args[1]) GEN_EDX_ARG);
  }
  cVar1 = *pcVar3;
  while (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      F_0042d160(uVar2 GEN_EDX_ARG,2);
      F_0042d160(uVar2 GEN_EDX_ARG,pcVar3[1]);
      pcVar3 = pcVar3 + 2;
      uVar4 = F_00a24d30(param_1 GEN_EDX_ARG,pcVar3,param_1 + 0x34,&(*(uint *)&gen_args[0]),1);
      iVar5 = uVar4 + (*(uint *)&gen_args[0]);
      if (0 < iVar5) {
        do {
          F_0042d160(uVar2 GEN_EDX_ARG,*pcVar3);
          pcVar3 = pcVar3 + 1;
          iVar5 = iVar5 - 1;
        } while (iVar5 != 0);
      }
      F_0042d160(uVar2 GEN_EDX_ARG,*pcVar3);
      pcVar3 = pcVar3 + 1;
    }
    else {
      (*(uint *)&gen_args[0]) = F_0042acc0(cVar1);
      iVar5 = 0;
      if (0 < (int)(*(uint *)&gen_args[0])) {
        do {
          F_0042d160(uVar2 GEN_EDX_ARG,*pcVar3);
          iVar5 = iVar5 + 1;
          pcVar3 = pcVar3 + 1;
        } while (iVar5 < (int)(*(uint *)&gen_args[0]));
      }
    }
    cVar1 = *pcVar3;
  }
  return 0;
}

/* ref: FUN_00a27210 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a27210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa27210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x1c, 4, 4);
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  int iVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x14)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18));
  pbVar2 = ((byte *)GEN_TOP(F_0042a990(param_1 GEN_EDX_FWD)));
  uVar3 = F_0042aca0(param_2 GEN_EDX_ARG);
  bVar1 = *pbVar2;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar1);
  while (bVar1 != 0) {
    if ((char)uVar3 == '\x02') {
      bVar1 = pbVar2[1];
      F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x10,((char *)REFP(0x10e3d34)),(uint)bVar1);
      F_0042d540(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
      uVar3 = F_00a24d30(this GEN_EDX_ARG,pbVar2 + 2,(int)this + 0x34,&(*(uint *)(gen_frame + 0x0)),1);
      iVar4 = 0;
      pbVar2 = pbVar2 + 2 + uVar3;
      if (0 < (int)(*(uint *)(gen_frame + 0x0))) {
        do {
          F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x10,((char *)REFP(0x10e3d3c)),(-(uint)(iVar4 != 0) & 0xfffffff2) + 0x3a,(uint)*pbVar2);
          pbVar2 = pbVar2 + 1;
          F_0042d540(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(*(uint *)(gen_frame + 0x0)));
      }
      pbVar2 = pbVar2 + 1;
      uVar3 = F_0042d160(param_2 GEN_EDX_ARG,0x5d);
    }
    else {
      uVar3 = F_0042acc0((char)uVar3);
      iVar4 = 0;
      (*(uint *)(gen_frame + 0x0)) = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar3 = F_0042d160(param_2 GEN_EDX_ARG,*pbVar2);
          iVar4 = iVar4 + 1;
          pbVar2 = pbVar2 + 1;
        } while (iVar4 < (int)(*(uint *)(gen_frame + 0x0)));
      }
    }
    bVar1 = *pbVar2;
    uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar1);
  }
  return uVar3;
}

/* ref: FUN_00a27330 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a27330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa27330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x64, 12, 4);
  undefined * this_00;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  char * pcVar4;
  ulonglong uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = param_1;
  pcVar4 = ((char *)GEN_TOP(0x0));
  pcVar2 = ((char *)GEN_TOP(F_0042a990(param_1 GEN_EDX_FWD)));
  uVar3 = F_0042aca0((int)this + 0x4c GEN_EDX_ARG);
  uVar3 = CONCAT31((int3)(uVar3 >> 8),*pcVar2);
  if (*pcVar2 != '\0') {
    do {
      cVar1 = (char)uVar3;
      if (cVar1 == '\x02') {
        uVar3 = F_00a24d30(this GEN_EDX_ARG,pcVar2 + 2,(int)this + 0x34,&(*(int *)(gen_frame + 0x0)),1);
        pcVar2 = pcVar2 + 2 + (*(int *)(gen_frame + 0x0)) + uVar3 + 1;
        pcVar4 = ((char *)GEN_TOP(0x0));
      }
      else {
        if ((pcVar4 == ((char *)GEN_TOP(0x0))) &&
           ((cVar1 == ' ' || (((*pcVar2 == -0x1d && (pcVar2[1] == -0x80)) && (pcVar2[2] == -0x80))))
           )) {
          pcVar4 = pcVar2;
        }
        if ((cVar1 != ' ') && (((*pcVar2 != -0x1d || (pcVar2[1] != -0x80)) || (pcVar2[2] != -0x80)))
           ) {
          pcVar4 = ((char *)GEN_TOP(0x0));
        }
        uVar3 = F_0042acc0(cVar1);
        pcVar2 = pcVar2 + uVar3;
      }
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4));
      uVar3 = CONCAT31((int3)(uVar3 >> 8),*pcVar2);
    } while (*pcVar2 != '\0');
    if (pcVar4 != ((char *)GEN_TOP(0x0))) {
      uVar3 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      uVar3 = F_0042d2c0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),0,(int)pcVar4 - uVar3);
      F_0042ccf0(this_00 GEN_EDX_ARG,uVar3);
      uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      uVar3 = (uint)uVar5;
    }
  }
  return uVar3;
}

/* ref: FUN_00a27410 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a27410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xa27410u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint param_5 = (uint)gen_a5;)
  GEN_FRAME_DECL_GS(0x64, 12, 4);
  char cVar1;
  code * pcVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined * this_00;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = param_1;
  pcVar3 = ((char *)GEN_TOP(F_0042a990(param_2 GEN_EDX_FWD)));
  F_0042b630(param_1 GEN_EDX_ARG);
  F_0042b630(((char * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  cVar1 = *pcVar3;
  this_00 = param_1;
  uVar6 = param_5;
  while (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      if (*((char * PTR32 *)(gen_frame + 0x8))[0] != '\0') {
        pcVar2 = *((gen_code32 *)GEN_TOP((*param_3 + 4)));
        uVar4 = (*pcVar2)(param_3,((char * PTR32 *)(gen_frame + 0x8)),param_4,uVar6);
        F_0042ccf0(((char * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar4);
        uVar4 = F_0042a970(((char * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        if (uVar6 <= uVar4) break;
        F_0042e360(this_00 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x8)));
        uVar4 = F_0042a970(((char * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        uVar6 = uVar6 - uVar4;
        F_0042aca0(((char * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      }
      F_0042d160(((char * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,*pcVar3);
      F_0042d160(((char * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,pcVar3[1]);
      pcVar3 = pcVar3 + 2;
      uVar4 = F_00a24d30(this GEN_EDX_ARG,pcVar3,(int)this + 0x34,&(*(uint *)(gen_frame + 0x0)),1);
      iVar5 = uVar4 + (*(uint *)(gen_frame + 0x0));
      if (0 < iVar5) {
        do {
          F_0042d160(((char * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,*pcVar3);
          pcVar3 = pcVar3 + 1;
          iVar5 = iVar5 - 1;
          this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4));
        } while (iVar5 != 0);
      }
      F_0042d160(((char * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,*pcVar3);
      pcVar3 = pcVar3 + 1;
      uVar4 = F_0042a970(((char * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      if (uVar6 <= uVar4) break;
      F_0042e360(this_00 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x8)));
      uVar4 = F_0042a970(((char * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      uVar6 = uVar6 - uVar4;
      F_0042aca0(((char * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    }
    else {
      uVar4 = F_0042acc0(cVar1);
      (*(uint *)(gen_frame + 0x0)) = uVar4;
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4));
      if (0 < (int)uVar4) {
        iVar5 = 0;
        do {
          F_0042d160(((char * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,*pcVar3);
          iVar5 = iVar5 + 1;
          pcVar3 = pcVar3 + 1;
          this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4));
        } while (iVar5 < (int)(*(uint *)(gen_frame + 0x0)));
      }
    }
    cVar1 = *pcVar3;
  }
  if (*((char * PTR32 *)(gen_frame + 0x8))[0] != '\0') {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 4))))(param_3 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x8)),param_4,uVar6);
    F_0042ccf0(((char * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar4);
    uVar4 = F_0042a970(((char * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    if (uVar4 < uVar6) {
      F_0042e360(this_00 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x8)));
    }
  }
  F_0042c880(((char * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return (uint)this_00;
}

/* ref: Component::Text::TextChecker::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a275d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa275d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),(*(int *)&gen_args[2]),&(*(int *)&gen_args[2]),1);
  if ((uVar1 != 0) && ((*(int *)&gen_args[2]) == 0)) {
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
  }
  return uVar1;
}

/* ref: FUN_00a27600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a27600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[2]),1);
  if (uVar1 == 0) {
    return 0;
  }
  F_00a1afb0((*(undefined4 *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00a27640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a27640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[2]),1);
  if (uVar1 != 0) {
    F_00a21c80((*(undefined4 *)&gen_args[3]),0x11,(*(undefined4 *)&gen_args[2]));
  }
  return uVar1;
}

/* ref: FUN_00a27680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a27680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[2]),1);
  if (uVar1 != 0) {
    F_00a21c80((*(undefined4 *)&gen_args[3]),0x12,(*(undefined4 *)&gen_args[2]));
  }
  return uVar1;
}

/* ref: FUN_00a276c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a276c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa276c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (*(undefined4 *)&gen_args[2]);
  iVar1 = (*(int *)&gen_args[0]);
  uVar3 = F_00a24d30(this GEN_EDX_FWD,(*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[2]),&(*(int *)&gen_args[0]),1);
  if (uVar3 != 0) {
    uVar4 = F_00a24d30(this GEN_EDX_ARG,uVar3 + iVar1,uVar2,&(*(undefined4 *)&gen_args[2]),1);
    if (uVar4 != 0) {
      F_00a21d00((*(undefined4 *)&gen_args[3]),0x1e,(*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[2]));
      return uVar4 + uVar3;
    }
  }
  return 0;
}

/* ref: FUN_00a27730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a27730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = (*(undefined4 *)&gen_args[3]);
  if (*(*(char * PTR32 *)&gen_args[0]) == -0x14) {
    F_0042d160((*(undefined4 *)&gen_args[3]) GEN_EDX_FWD,2);
    F_0042d160(uVar1 GEN_EDX_ARG,0x13);
    F_0042d160(uVar1 GEN_EDX_ARG,2);
    F_0042d160(uVar1 GEN_EDX_ARG,0xec);
    F_0042d160(uVar1 GEN_EDX_ARG,3);
    return (*(uint *)&gen_args[1]);
  }
  uVar2 = F_00a24d30(this GEN_EDX_ARG,(*(char * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[2]),&(*(char * PTR32 *)&gen_args[0]),1);
  if (uVar2 != 0) {
    F_00a21c80((*(undefined4 *)&gen_args[3]),0x13,(*(char * PTR32 *)&gen_args[0]));
  }
  return uVar2;
}

/* ref: FUN_00a277b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a277b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa277b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[2]),1);
  if (uVar1 != 0) {
    F_00a21c80((*(undefined4 *)&gen_args[3]),0x14,(*(undefined4 *)&gen_args[2]));
  }
  return uVar1;
}

/* ref: FUN_00a277f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a277f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa277f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[2]),1);
  if (uVar1 != 0) {
    F_00a21c80((*(undefined4 *)&gen_args[3]),0x15,(*(undefined4 *)&gen_args[2]));
  }
  return uVar1;
}

/* ref: FUN_00a27830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a27830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa27830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[2]),1);
  if (uVar1 != 0) {
    F_00a21c80((*(undefined4 *)&gen_args[3]),0x18,(*(undefined4 *)&gen_args[2]));
  }
  return uVar1;
}

/* ref: FUN_00a27870 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a27870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa27870u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0x60, 0, 4);
  uint uVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c));
  uVar1 = F_00a24d30(this GEN_EDX_FWD,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    uVar2 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),10,0,0);
    F_0042d4d0(param_4 GEN_EDX_ARG,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00a278e0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a278e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa278e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0x60, 0, 4);
  uint uVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c));
  uVar1 = F_00a24d30(this GEN_EDX_FWD,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    uVar2 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),0x10,0,0);
    F_0042d4d0(param_4 GEN_EDX_ARG,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00a27950 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a27950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa27950u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0x110, 0, 4);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_4;
  (*(undefined4 *)(gen_frame + 0x4)) = param_3;
  uVar1 = F_00a24d30(this GEN_EDX_FWD,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    F_0042b630(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
    uVar2 = F_00a23ff0(this GEN_EDX_ARG,param_1 + uVar1,(*(undefined4 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0xb4)),1);
    if (uVar2 != 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,&REFG(undefined, 0x10e3d68),REFG(undefined4, 0x108cc50));
      F_0042cc20(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((char *)REFP(0x10e3d6c)),REFG(undefined4, 0x108cc50));
      F_0042d750(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x60)));
      F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
      uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
      uVar3 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x0)),10,1,uVar3);
      F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar3);
      F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
      return uVar2 + uVar1;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00a27a90 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a27a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa27a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0x60, 0, 4);
  uint uVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c));
  uVar1 = F_00a24d30(this GEN_EDX_FWD,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    uVar2 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),10,2,0);
    F_0042d4d0(param_4 GEN_EDX_ARG,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00a27b10 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a27b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa27b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0x60, 0, 4);
  uint uVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c));
  uVar1 = F_00a24d30(this GEN_EDX_FWD,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    uVar2 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),10,3,0);
    F_0042d4d0(param_4 GEN_EDX_ARG,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00a27b80 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a27b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa27b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = param_4;
  uVar1 = F_00a24d30(this GEN_EDX_FWD,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    F_0042b630(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    uVar2 = F_00a23ff0(this GEN_EDX_ARG,param_1 + uVar1,param_3,((undefined1 *)(gen_frame + 0x5c)),1);
    if (uVar2 != 0) {
      uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      uVar3 = F_00a4c8f0(((undefined1 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x0)),10,4,uVar3);
      F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar3);
      F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      return uVar2 + uVar1;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00a27c60 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a27c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa27c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0xbc, 4, 4);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb8));
  uVar1 = F_00a24d30(this GEN_EDX_FWD,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x4)),1);
  if (uVar1 != 0) {
    (*(uint *)(gen_frame + 0x8)) = uVar1;
    uVar1 = F_00a24d30(this GEN_EDX_ARG,uVar1 + param_1,param_3,&(*(undefined4 *)(gen_frame + 0x0)),1);
    if (uVar1 != 0) {
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + uVar1;
      F_0042b630(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
      uVar1 = (*(uint *)(gen_frame + 0x8));
      uVar2 = F_00a23ff0(this GEN_EDX_ARG,param_1 + (*(uint *)(gen_frame + 0x8)),param_3,((undefined1 *)(gen_frame + 0x60)),1);
      if (uVar2 != 0) {
        uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
        uVar3 = F_00a4c8f0(((undefined1 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),5,uVar3);
        F_0042d4d0(param_4 GEN_EDX_ARG,uVar3);
        F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
        return uVar2 + uVar1;
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: FUN_00a27d60 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a27d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa27d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0xcc, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc8));
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = param_4;
  F_0042b630(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_FWD);
  F_0042b630(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
  uVar1 = F_00a23ff0(this GEN_EDX_ARG,param_1,param_3,((undefined1 *)(gen_frame + 0x1c)),1);
  if (uVar1 != 0) {
    (*(uint *)(gen_frame + 0x18)) = uVar1;
    uVar1 = F_00a23ff0(this GEN_EDX_ARG,uVar1 + param_1,param_3,((undefined1 *)(gen_frame + 0x70)),1);
    if (uVar1 != 0) {
      uVar1 = (*(uint *)(gen_frame + 0x18)) + uVar1;
      (*(uint *)(gen_frame + 0x18)) = uVar1;
      uVar1 = F_00a24d30(this GEN_EDX_ARG,param_1 + uVar1,param_3,&(*(int *)(gen_frame + 0x10)),1);
      if (uVar1 != 0) {
        uVar1 = (*(uint *)(gen_frame + 0x18)) + uVar1;
        (*(int *)(gen_frame + 0x0)) = 0;
        (*(int *)(gen_frame + 0x4)) = 0;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        F_00ada1b0(((undefined1 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x70)),&(*(int *)(gen_frame + 0x0)));
        if ((*(int *)(gen_frame + 0x10)) - 1U < (uint)(((*(int *)(gen_frame + 0x4)) - (*(int *)(gen_frame + 0x0))) / 0x54)) {
          F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x10)) * 0x54 - 0x54 + (*(int *)(gen_frame + 0x0)));
        }
        F_004876d0(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
        return uVar1;
      }
    }
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00a27ed0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a27ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa27ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0x70, 0, 4);
  undefined * this_00;
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = param_4;
  if (*((int *)GEN_TOP(((int)this + 0x164))) == 0) {
    return param_2;
  }
  uVar1 = F_00a24d30(this GEN_EDX_FWD,param_1,param_3,&(*(undefined4 *)(gen_frame + 0x0)),1);
  if (uVar1 != 0) {
    (*(uint *)(gen_frame + 0xc)) = uVar1;
    uVar1 = F_00a24d30(this GEN_EDX_ARG,param_1 + uVar1,param_3,&(*(undefined4 *)(gen_frame + 0x8)),1);
    if (uVar1 != 0) {
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + uVar1;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x164))) + 4))))
                        (*((int * PTR32 *)GEN_TOP(((int)this + 0x164))) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)),&(*(char *)(gen_frame + 0x13)));
      if (uVar1 != 0) {
        F_0042b630(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
        if ((*(char *)(gen_frame + 0x13)) == '\0') {
          uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this - 4))) + 0x18))))
                            ((int)this - 4,uVar1,(*(undefined4 *)(gen_frame + 0x8)),0xffff,param_3,((undefined1 *)(gen_frame + 0x14)));
        }
        else {
          uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this - 4))) + 0x24))))
                            ((int)this - 4,uVar1,(*(undefined4 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x14)));
          uVar1 = (uint)((char)uVar1 != '\0') * 2 - 1;
        }
        if (uVar1 == 1) {
          uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x164))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x164))) GEN_EDX_ARG);
          this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4));
          F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar1);
          F_0042d4d0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
          uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x164))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x164))) GEN_EDX_ARG);
          F_0042d4d0(this_00 GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
          return (*(uint *)(gen_frame + 0xc));
        }
        if (uVar1 != 0xffffffff) {
          F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
          return 0;
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      }
      return param_2;
    }
  }
  return 0;
}

/* ref: FUN_00a28030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a28030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa28030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  uint uVar4;
  byte * pbVar5;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[0]);
  bVar1 = *(*(byte * PTR32 *)&gen_args[0]);
  pbVar5 = (*(byte * PTR32 *)&gen_args[0]);
  if (0xef < bVar1) {
    switch((unsigned int)(uintptr_t)(bVar1)) {
    case 0xf0: ;
    case 0xf1: ;
    case 0xf3: ;
    case 0xf7: ;
      return 2;
    case 0xf2: ;
    case 0xf4: ;
    case 0xf5: ;
    case 0xf8: ;
    case 0xf9: ;
    case 0xfb: ;
      return 3;
    case 0xf6: ;
    case 0xfa: ;
    case 0xfc: ;
    case 0xfd: ;
      return 4;
    case 0xfe: ;
      return 5;
    case 0xff: ;
      pbVar5 = (*(byte * PTR32 *)&gen_args[0]) + 1;
      uVar3 = F_00a24d30(this GEN_EDX_FWD,pbVar5,(*(undefined4 *)&gen_args[1]),&(*(byte * PTR32 *)&gen_args[0]),1);
      return (int)(pbVar5 + uVar3 + (int)(*(byte * PTR32 *)&gen_args[0])) - (int)pbVar2;
    }
    goto switchD_00a2805b_default;
  }
  if (bVar1 < 0xed) {
    if (0xe7 < bVar1) {
      pbVar5 = (*(byte * PTR32 *)&gen_args[0]) + 1;
      if (bVar1 != 0xec) {
        uVar3 = F_00a28030(this GEN_EDX_ARG,pbVar5,(*(undefined4 *)&gen_args[1]));
        return (uint)(pbVar5 + (uVar3 - (int)pbVar2));
      }
      goto switchD_00a2805b_default;
    }
    if (0xdf < bVar1) {
      uVar3 = F_00a28030(this GEN_EDX_ARG,(*(byte * PTR32 *)&gen_args[0]) + 1,(*(undefined4 *)&gen_args[1]));
      uVar4 = F_00a28030(this GEN_EDX_ARG,pbVar2 + uVar3 + 2,(*(undefined4 *)&gen_args[1]));
      return (uint)(pbVar2 + uVar3 + 2 + (uVar4 - (int)pbVar2));
    }
    if ((bVar1 < 0xd8) && (bVar1 == 0)) goto switchD_00a2805b_default;
  }
  pbVar5 = (*(byte * PTR32 *)&gen_args[0]) + 1;
switchD_00a2805b_default: ;
  return (int)pbVar5 - (int)(*(byte * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a28150 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_00a28150(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa28150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x58, 8, 4);
  byte bVar1;
  undefined4 uVar2;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar3;
  int iVar4;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * pppppuVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * pppppuVar6;
  byte * pbVar7;
  byte * pbVar8;
  
  ppppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18))[0];
  GEN_COOKIE((*(uint *)(gen_frame + 0x50)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x54));
  bVar1 = *param_2;
  (*(uint *)(gen_frame + 0x2c)) = 0xf;
  (*(int *)(gen_frame + 0x28)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18))[0] = ((undefined4 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((uint)ppppuVar3 & 0xffffff00)));
  pbVar8 = param_2;
  pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0];
  uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16));
  do {
    ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0] = pppppuVar5;
    if (bVar1 == 0) {
LAB_00a28314: ;
      if (0xf < (*(uint *)(gen_frame + 0x2c))) {
        F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18))[0],(*(uint *)(gen_frame + 0x2c)) + 1,0x2c4);
      }
      return (int)pbVar8 - (int)param_2;
    }
    pbVar7 = pbVar8 + 1;
    gen_piece_set(((byte *)(gen_frame + 0x0)), 17, 3, (unsigned long long)(SUB43(uVar2,1)));
    ((byte *)(gen_frame + 0x0))[0x10] = bVar1;
    if (bVar1 == 0x5d) {
      F_00a32fd0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18)));
      (*(int *)(gen_frame + 0x28)) = 0;
      pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18))[0];
      if ((*(uint *)(gen_frame + 0x2c)) < 0x10) {
        pppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18));
      }
      *(undefined1 *)pppppuVar5 = 0;
      pbVar8 = pbVar8 + 2;
      goto LAB_00a28314;
    }
    if ((bVar1 == 0x21) || ((';' < (char)bVar1 && ((char)bVar1 < '?')))) {
      (*(uint *)(gen_frame + 0x48)) = 0xf;
      (*(int *)(gen_frame + 0x44)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0] = ((undefined4 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((uint)pppppuVar5 & 0xffffff00)));
      F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,0,1,0x5b);
      pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0];
      if ((*(uint *)(gen_frame + 0x48)) < 0x10) {
        pppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34));
      }
      pppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0];
      if ((*(uint *)(gen_frame + 0x48)) < 0x10) {
        pppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34));
      }
      if ((int)pppppuVar5 + (*(int *)(gen_frame + 0x44)) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = ((int)pppppuVar5 + (*(int *)(gen_frame + 0x44))) - (int)pppppuVar6;
      }
      F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,iVar4,1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)));
      if (*pbVar7 == 0x3d) {
        pbVar7 = pbVar8 + 2;
        pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0];
        if ((*(uint *)(gen_frame + 0x48)) < 0x10) {
          pppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34));
        }
        pppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0];
        if ((*(uint *)(gen_frame + 0x48)) < 0x10) {
          pppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34));
        }
        if ((int)pppppuVar5 + (*(int *)(gen_frame + 0x44)) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = ((int)pppppuVar5 + (*(int *)(gen_frame + 0x44))) - (int)pppppuVar6;
        }
        F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,iVar4,1,0x3d);
      }
      pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0];
      if ((*(uint *)(gen_frame + 0x48)) < 0x10) {
        pppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34));
      }
      pppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0];
      if ((*(uint *)(gen_frame + 0x48)) < 0x10) {
        pppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34));
      }
      if ((int)pppppuVar5 + (*(int *)(gen_frame + 0x44)) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = ((int)pppppuVar5 + (*(int *)(gen_frame + 0x44))) - (int)pppppuVar6;
      }
      F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,iVar4,1,0x5d);
      F_00a32fd0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34)));
      F_00a32fd0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18)));
      (*(int *)(gen_frame + 0x28)) = 0;
      pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18))[0];
      if ((*(uint *)(gen_frame + 0x2c)) < 0x10) {
        pppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18));
      }
      *(undefined1 *)pppppuVar5 = 0;
      if (0xf < (*(uint *)(gen_frame + 0x48))) {
        F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0],(*(uint *)(gen_frame + 0x48)) + 1,0x2c4);
      }
    }
    else {
      pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18))[0];
      if ((*(uint *)(gen_frame + 0x2c)) < 0x10) {
        pppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18));
      }
      pppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18))[0];
      if ((*(uint *)(gen_frame + 0x2c)) < 0x10) {
        pppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18));
      }
      if (((undefined1 *)GEN_TOP(((int)pppppuVar5 + (*(int *)(gen_frame + 0x28))))) == ((undefined1 *)GEN_TOP(0x0))) {
        iVar4 = 0;
      }
      else {
        iVar4 = ((int)pppppuVar5 + (*(int *)(gen_frame + 0x28))) - (int)pppppuVar6;
      }
      F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,iVar4,1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)));
    }
    bVar1 = *pbVar7;
    pbVar8 = pbVar7;
    pppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x34))[0];
    uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16));
  } while( true );
}

/* ref: FUN_00a28350 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a28350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(char * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa28350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar8;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar9;
  char * pcVar10;
  
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44))[0];
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  (*(uint *)(gen_frame + 0x58)) = 0xf;
  (*(int *)(gen_frame + 0x54)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar4 & 0xffffff00)));
  cVar5 = *param_2;
  bVar1 = false;
  (*(int *)(gen_frame + 0x0)) = 0;
  bVar3 = false;
  bVar2 = false;
  pcVar10 = param_2;
  if (cVar5 != '\0') {
    do {
      pcVar10 = pcVar10 + 1;
      (*(undefined4 *)(gen_frame + 0x5)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x5)), 1, 3),cVar5);
      if (bVar1) {
        ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44))[0];
        if ((*(uint *)(gen_frame + 0x58)) < 0x10) {
          ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44));
        }
        ppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44))[0];
        if ((*(uint *)(gen_frame + 0x58)) < 0x10) {
          ppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44));
        }
        if (((undefined1 *)GEN_TOP(((int)ppppuVar8 + (*(int *)(gen_frame + 0x54))))) == ((undefined1 *)GEN_TOP(0x0))) {
          iVar6 = 0;
        }
        else {
          iVar6 = ((int)ppppuVar8 + (*(int *)(gen_frame + 0x54))) - (int)ppppuVar9;
        }
        F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44)) GEN_EDX_FWD,iVar6,1,(*(undefined4 *)(gen_frame + 0x5)));
        bVar1 = false;
      }
      else {
        switch((unsigned int)(uintptr_t)(cVar5)) {
        case '(': ;
        case '=': ;
          if ((*(int *)(gen_frame + 0x0)) == 0) {
LAB_00a284ed: ;
            F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x5)));
          }
          else {
            F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,0x3d);
            F_00a32fd0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44)));
            (*(int *)(gen_frame + 0x54)) = 0;
            ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44))[0];
            if ((*(uint *)(gen_frame + 0x58)) < 0x10) {
              ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44));
            }
            *(undefined1 *)ppppuVar8 = 0;
            bVar2 = false;
            bVar3 = true;
          }
          break;
        case ')': ;
          if ((*(int *)(gen_frame + 0x0)) == 0) {
            F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x5)));
          }
          break;
        default: ;
          ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44))[0];
          if ((*(uint *)(gen_frame + 0x58)) < 0x10) {
            ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44));
          }
          ppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44))[0];
          if ((*(uint *)(gen_frame + 0x58)) < 0x10) {
            ppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44));
          }
          if (((undefined1 *)GEN_TOP(((int)ppppuVar8 + (*(int *)(gen_frame + 0x54))))) == ((undefined1 *)GEN_TOP(0x0))) {
            iVar6 = 0;
          }
          else {
            iVar6 = ((int)ppppuVar8 + (*(int *)(gen_frame + 0x54))) - (int)ppppuVar9;
          }
          F_00a2f570(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,iVar6,1,(*(undefined4 *)(gen_frame + 0x5)));
          break;
        case ',': ;
          if ((*(int *)(gen_frame + 0x0)) == 0) goto LAB_00a284ed;
          F_00a32fd0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44)));
          (*(int *)(gen_frame + 0x54)) = 0;
          ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44))[0];
          if ((*(uint *)(gen_frame + 0x58)) < 0x10) {
            ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44));
          }
          *(undefined1 *)ppppuVar8 = 0;
          (*(undefined4 *)(gen_frame + 0x3c)) = 0xf;
          (*(undefined4 *)(gen_frame + 0x38)) = 0;
          ((undefined1 *)(gen_frame + 0x28))[0] = 0;
          F_00a2f470(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG,&REFG(undefined, 0x10e3d18),1);
          F_00a32fd0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x28)));
          F_00a2df40(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
          break;
        case '<': ;
          if ((*(int *)(gen_frame + 0x54)) != 0) {
            F_00a32fd0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44)));
            (*(int *)(gen_frame + 0x54)) = 0;
            ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44))[0];
            if ((*(uint *)(gen_frame + 0x58)) < 0x10) {
              ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44));
            }
            *(undefined1 *)ppppuVar8 = 0;
          }
          F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x5)));
          (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
          bVar2 = true;
          break;
        case '>': ;
          if ((*(int *)(gen_frame + 0x0)) == 0) {
LAB_00a28584: ;
            F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x5)));
          }
          else {
            if (bVar2) {
              F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x5)));
              F_00a32fd0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44)));
            }
            else {
              F_00a32fd0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44)));
              F_00a30c60(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined, 0x10e3d14));
              F_00a32fd0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
              F_00a2df40(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
            }
            (*(int *)(gen_frame + 0x54)) = 0;
            ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44))[0];
            if ((*(uint *)(gen_frame + 0x58)) < 0x10) {
              ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44));
            }
            (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
            *(undefined1 *)ppppuVar8 = 0;
            bVar2 = false;
          }
          break;
        case '[': ;
          if (((*(int *)(gen_frame + 0x0)) == 0) || (!bVar3)) {
            F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,0x5c);
            goto LAB_00a28584;
          }
          uVar7 = F_00a28150(param_1,pcVar10);
          pcVar10 = pcVar10 + uVar7;
          (*(int *)(gen_frame + 0x54)) = 0;
          ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44))[0];
          if ((*(uint *)(gen_frame + 0x58)) < 0x10) {
            ppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44));
          }
          *(undefined1 *)ppppuVar8 = 0;
          bVar3 = false;
          break;
        case '\\': ;
          F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x5)));
          bVar1 = true;
          break;
        case ']': ;
          F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,0x5c);
          F_00a30cf0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x5)));
        }
      }
      cVar5 = *pcVar10;
    } while (cVar5 != '\0');
    if ((*(int *)(gen_frame + 0x54)) != 0) {
      F_00a32fd0(param_1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44)));
    }
  }
  if (0xf < (*(uint *)(gen_frame + 0x58))) {
    F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44))[0],(*(uint *)(gen_frame + 0x58)) + 1,0x2c4);
  }
  return (int)pcVar10 - (int)param_2;
}

/* ref: FUN_00a286a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a286a0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa286a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  int iVar7;
  uint local_c;
  int local_8;
  int iVar6;
  
  iVar6 = *param_2;
  local_8 = 0;
  local_c = param_3;
  if (param_3 < (uint)((param_2[1] - iVar6) / 0x1c)) {
    iVar7 = param_3 * 0x1c;
    do {
      pcVar5 = ((char *)GEN_TOP((iVar6 + iVar7)));
      pcVar4 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar4 = *(char * PTR32 *)pcVar5;
      }
      if (*pcVar4 == '<') {
        F_00a32fd0(param_1 GEN_EDX_ARG,pcVar5);
        puVar2 = ((undefined4 *)GEN_TOP((iVar7 + *param_2)));
        piVar1 = puVar2 + 4;
        if (0xf < *((uint *)GEN_TOP((iVar7 + 0x14 + *param_2)))) {
          puVar2 = ((undefined4 *)GEN_TOP(*puVar2));
        }
        if (*((char *)GEN_TOP(((int)puVar2 + *piVar1 - 1))) != '>') {
          local_8 = local_8 + 1;
        }
      }
      else {
        iVar6 = *(int *)(pcVar5 + 0x10);
        pcVar4 = pcVar5;
        if (0xf < *(uint *)(pcVar5 + 0x14)) {
          pcVar4 = *(char * PTR32 *)pcVar5;
        }
        uVar3 = F_0040d320(pcVar4,&REFG(undefined, 0x10e3d24),(uint)(iVar6 != 0));
        if (((uVar3 == 0) && (iVar6 != 0)) && (iVar6 == 1)) {
          if (local_8 == 0) break;
          if (0 < local_8) {
            F_00a32fd0(param_1 GEN_EDX_ARG,pcVar5);
          }
          local_8 = local_8 - 1;
        }
        else {
          iVar6 = *(int *)(pcVar5 + 0x10);
          pcVar4 = pcVar5;
          if (0xf < *(uint *)(pcVar5 + 0x14)) {
            pcVar4 = *(char * PTR32 *)pcVar5;
          }
          uVar3 = F_0040d320(pcVar4,&REFG(undefined, 0x10e3d28),(uint)(iVar6 != 0));
          if (((uVar3 == 0) && (iVar6 != 0)) && ((iVar6 == 1 && (local_8 == 0)))) break;
          F_00a32fd0(param_1 GEN_EDX_ARG,pcVar5);
        }
      }
      iVar6 = *param_2;
      local_c = local_c + 1;
      iVar7 = iVar7 + 0x1c;
    } while (local_c < (uint)((param_2[1] - iVar6) / 0x1c));
  }
  return local_c - param_3;
}

/* ref: FUN_00a28830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a28830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa28830u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  int * piVar1;
  int iVar2;
  uint * puVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  uint local_18;
  uint * local_14;
  uint * local_10;
  uint local_c;
  uint local_8;
  
  if ((param_3[5] - param_3[4]) / 0x1c == 1) {
    F_00a32fd0(param_4 GEN_EDX_FWD,param_3[4]);
    return 1;
  }
  uVar4 = (param_3[1] - *param_3) / 0x1c;
  uVar6 = -(uint)((int)((ulonglong)uVar4 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x10);
  puVar3 = ((uint *)GEN_TOP(F_00406bb0(-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0,0)));
  if (puVar3 == ((uint *)GEN_TOP(0x0))) {
    local_14 = ((uint *)GEN_TOP(0x0));
  }
  else {
    *puVar3 = uVar4;
    local_14 = puVar3 + 1;
    puVar3 = local_14;
    while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3 = puVar3 + 4;
    }
  }
  local_18 = param_2 + 1;
  local_c = 1;
  local_8 = local_18;
  puVar3 = local_14;
  if (1 < (uint)((param_3[1] - *param_3) / 0x1c)) {
    do {
      local_10 = puVar3 + 4;
      iVar7 = *param_1;
      if ((uint)((param_1[1] - iVar7) / 0x1c) <= local_8) {
        return 0;
      }
      iVar2 = *((int *)GEN_TOP((iVar7 + 0x10 + local_8 * 0x1c)));
      piVar1 = ((int *)GEN_TOP((iVar7 + local_8 * 0x1c)));
      piVar5 = piVar1;
      if (0xf < (uint)piVar1[5]) {
        piVar5 = ((int *)GEN_TOP(*piVar1));
      }
      uVar4 = F_0040d320(piVar5,&REFG(undefined, 0x10e3d2c),(uint)(iVar2 != 0));
      if (((uVar4 == 0) && (iVar2 != 0)) && (iVar2 == 1)) {
        F_00a32fd0(local_10 GEN_EDX_ARG,piVar1);
        local_18 = local_8 + 1;
        local_8 = local_18;
      }
      else {
        iVar7 = piVar1[4];
        piVar5 = piVar1;
        if (0xf < (uint)piVar1[5]) {
          piVar5 = ((int *)GEN_TOP(*piVar1));
        }
        uVar4 = F_0040d320(piVar5,&REFG(undefined, 0x10e3d30),(uint)(iVar7 != 0));
        if (((uVar4 == 0) && (iVar7 != 0)) && (iVar7 == 1)) {
          F_00a32fd0(local_10 GEN_EDX_ARG,piVar1);
          local_8 = local_8 + 1;
        }
        else {
          uVar4 = F_00a286a0(local_10,param_1,local_8);
          local_8 = local_8 + uVar4;
        }
      }
      local_c = local_c + 1;
      puVar3 = local_10;
    } while (local_c < (uint)((param_3[1] - *param_3) / 0x1c));
  }
  iVar7 = param_3[4];
  iVar2 = param_3[5] - iVar7 >> 0x1f;
  local_c = 0;
  if ((param_3[5] - iVar7) / 0x1c + iVar2 != iVar2) {
    local_10 = ((uint *)GEN_TOP(0x0));
    do {
      iVar2 = *((int *)GEN_TOP((param_3[8] + local_c * 4)));
      if (iVar2 < 0) {
        F_00a32fd0(param_4 GEN_EDX_ARG,(int)local_10 + iVar7);
      }
      else {
        if ((param_3[1] - *param_3) / 0x1c <= iVar2) {
          return 0;
        }
        puVar3 = local_14 + iVar2 * 4;
        uVar4 = *puVar3;
        iVar7 = (int)(puVar3[1] - uVar4) >> 0x1f;
        uVar6 = 0;
        if ((int)(puVar3[1] - uVar4) / 0x1c + iVar7 != iVar7) {
          param_1 = ((int *)GEN_TOP(0x0));
          do {
            F_00a32fd0(param_4 GEN_EDX_ARG,(int)param_1 + uVar4);
            uVar4 = *puVar3;
            param_1 = ((int *)GEN_TOP(((int)param_1 + 0x1c)));
            uVar6 = uVar6 + 1;
          } while (uVar6 < (uint)((int)(puVar3[1] - uVar4) / 0x1c));
        }
      }
      iVar7 = param_3[4];
      local_10 = ((uint *)GEN_TOP(((int)local_10 + 0x1c)));
      local_c = local_c + 1;
    } while (local_c < (uint)((param_3[5] - iVar7) / 0x1c));
  }
  if (local_14 != ((uint *)GEN_TOP(0x0))) {
    F_00a32990(local_14 GEN_EDX_ARG,3);
  }
  return local_18 - param_2;
}

/* ref: FUN_00a28b70 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00a28b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa28b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  uint * puVar1;
  char cVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  int * piVar6;
  uint * puVar7;
  uint uVar8;
  uint * puVar9;
  int iVar10;
  uint uVar11;
  undefined4 * puVar12;
  uint uVar13;
  int * piVar14;
  uint * puVar15;
  uint uVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  uVar16 = param_1[5];
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x28)) = ((uint *)GEN_TOP(0x0));
  (*(uint * PTR32 *)(gen_frame + 0x2c)) = ((uint *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x30)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x14)) = ((uint *)GEN_TOP(0x0));
  (*(uint * PTR32 *)(gen_frame + 0x18)) = ((uint *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x1c)) = 0;
  puVar12 = param_1;
  if (0xf < uVar16) {
    puVar12 = ((undefined4 *)GEN_TOP(*param_1));
  }
  F_00a28350(this GEN_EDX_FWD,&(*(uint * PTR32 *)(gen_frame + 0x28)),puVar12);
  uVar16 = ((int)(*(uint * PTR32 *)(gen_frame + 0x2c)) - (int)(*(uint * PTR32 *)(gen_frame + 0x28))) / 0x1c;
  if (uVar16 != 0) {
    (*(uint *)(gen_frame + 0x3c)) = uVar16;
    puVar9 = (*(uint * PTR32 *)(gen_frame + 0x28));
    do {
      puVar7 = puVar9;
      if (0xf < puVar9[5]) {
        puVar7 = ((uint *)GEN_TOP(*puVar9));
      }
      if ((char)*puVar7 != '<') {
        puVar7 = puVar9;
        if (0xf < puVar9[5]) {
          puVar7 = ((uint *)GEN_TOP(*puVar9));
        }
        if (((char)*puVar7 != '[') &&
           (piVar14 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x18))))), piVar14 != *((int * PTR32 *)GEN_TOP(((int)this + 0x18)))))
        {
          do {
            F_00a22180(puVar9,piVar14 + 3,piVar14 + 10);
            if (*((char *)GEN_TOP(((int)piVar14 + 0x45))) == '\0') {
              piVar3 = ((int *)GEN_TOP(piVar14[2]));
              if (*((char *)GEN_TOP(((int)piVar3 + 0x45))) == '\0') {
                cVar2 = *((char *)GEN_TOP((*piVar3 + 0x45)));
                piVar14 = piVar3;
                piVar3 = ((int *)GEN_TOP(*piVar3));
                while (cVar2 == '\0') {
                  cVar2 = *((char *)GEN_TOP((*piVar3 + 0x45)));
                  piVar14 = piVar3;
                  piVar3 = ((int *)GEN_TOP(*piVar3));
                }
              }
              else {
                cVar2 = *((char *)GEN_TOP((piVar14[1] + 0x45)));
                piVar6 = ((int *)GEN_TOP(piVar14[1]));
                piVar3 = piVar14;
                while ((piVar14 = piVar6, cVar2 == '\0' && (piVar3 == ((int *)GEN_TOP(piVar14[2]))))) {
                  cVar2 = *((char *)GEN_TOP((piVar14[1] + 0x45)));
                  piVar6 = ((int *)GEN_TOP(piVar14[1]));
                  piVar3 = piVar14;
                }
              }
            }
          } while (piVar14 != *((int * PTR32 *)GEN_TOP(((int)this + 0x18))));
        }
      }
      puVar9 = puVar9 + 7;
      uVar16 = (*(uint *)(gen_frame + 0x3c)) - 1;
      (*(uint *)(gen_frame + 0x3c)) = uVar16;
    } while (uVar16 != 0);
  }
  while( true ) {
    uVar11 = ((int)(*(uint * PTR32 *)(gen_frame + 0x2c)) - (int)(*(uint * PTR32 *)(gen_frame + 0x28))) / 0x1c;
    (*(char *)(gen_frame + 0x43)) = '\0';
    (*(uint *)(gen_frame + 0xc)) = uVar11;
    uVar16 = 0;
    if (uVar11 == 0) break;
    do {
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x24));
      (*(uint * PTR32 *)(gen_frame + 0x10)) = (*(uint * PTR32 *)(gen_frame + 0x28)) + uVar16 * 7;
      uVar8 = F_00a2f670(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 4))) GEN_EDX_ARG,(*(uint * PTR32 *)(gen_frame + 0x28)) + uVar16 * 7);
      uVar11 = *((uint *)GEN_TOP(((int)pvVar5 + 8)));
      (*(uint *)(gen_frame + 0x4)) = uVar8;
      (*(uint *)(gen_frame + 0x8)) = uVar11;
      if (uVar8 == uVar11) {
LAB_00a28d9b: ;
        (*(uint *)(gen_frame + 0x0)) = uVar11;
        puVar9 = &(*(uint *)(gen_frame + 0x0));
      }
      else {
        uVar4 = *((uint *)GEN_TOP((uVar8 + 0x1c)));
        puVar9 = ((uint *)GEN_TOP((uVar8 + 0xc)));
        (*(uint *)(gen_frame + 0x3c)) = uVar4;
        if (0xf < *((uint *)GEN_TOP((uVar8 + 0x20)))) {
          puVar9 = ((uint *)GEN_TOP(*puVar9));
        }
        uVar8 = (*(uint * PTR32 *)(gen_frame + 0x10))[4];
        (*(uint *)(gen_frame + 0x38)) = uVar8;
        uVar13 = uVar4;
        if (uVar8 < uVar4) {
          uVar13 = uVar8;
        }
        puVar7 = (*(uint * PTR32 *)(gen_frame + 0x10));
        if (0xf < (*(uint * PTR32 *)(gen_frame + 0x10))[5]) {
          puVar7 = ((uint *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x10))));
        }
        for (; 3 < uVar13; uVar13 = uVar13 - 4) {
          if (*puVar7 != *puVar9) goto LAB_00a28d38;
          puVar9 = puVar9 + 1;
          puVar7 = puVar7 + 1;
        }
        if (uVar13 == 0) {
LAB_00a28d81: ;
          uVar13 = 0;
        }
        else {
LAB_00a28d38: ;
          iVar10 = (uint)(byte)*puVar7 - (uint)(byte)*puVar9;
          if (iVar10 == 0) {
            if (uVar13 < 2) goto LAB_00a28d81;
            iVar10 = (uint)*((byte *)GEN_TOP(((int)puVar7 + 1))) - (uint)*((byte *)GEN_TOP(((int)puVar9 + 1)));
            if (iVar10 == 0) {
              if (uVar13 < 3) goto LAB_00a28d81;
              iVar10 = (uint)*((byte *)GEN_TOP(((int)puVar7 + 2))) - (uint)*((byte *)GEN_TOP(((int)puVar9 + 2)));
              if (iVar10 == 0) {
                if (uVar13 < 4) goto LAB_00a28d81;
                iVar10 = (uint)*((byte *)GEN_TOP(((int)puVar7 + 3))) - (uint)*((byte *)GEN_TOP(((int)puVar9 + 3)));
              }
            }
          }
          uVar13 = iVar10 >> 0x1f | 1;
        }
        if (uVar13 == 0) {
          if (uVar8 < uVar4) goto LAB_00a28d9b;
          uVar13 = (uint)(uVar8 != uVar4);
        }
        if ((int)uVar13 < 0) goto LAB_00a28d9b;
        puVar9 = &(*(uint *)(gen_frame + 0x4));
      }
      if (*puVar9 == *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 8)))) {
        F_00a32fd0(&(*(uint * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(uint * PTR32 *)(gen_frame + 0x10)));
      }
      else {
        uVar11 = F_00a28830((*(undefined * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,&(*(uint * PTR32 *)(gen_frame + 0x28)),uVar16,*puVar9 + 0x28,&(*(uint * PTR32 *)(gen_frame + 0x14)));
        puVar7 = (*(uint * PTR32 *)(gen_frame + 0x18));
        puVar9 = (*(uint * PTR32 *)(gen_frame + 0x14));
        if (uVar11 == 0) {
          if ((*(uint * PTR32 *)(gen_frame + 0x14)) != ((uint *)GEN_TOP(0x0))) {
            if ((*(uint * PTR32 *)(gen_frame + 0x14)) != (*(uint * PTR32 *)(gen_frame + 0x18))) {
              puVar15 = (*(uint * PTR32 *)(gen_frame + 0x14)) + 5;
              do {
                if (0xf < *puVar15) {
                  F_00429760(puVar15[-5],*puVar15 + 1,0x2c4);
                }
                *puVar15 = 0xf;
                puVar15[-1] = 0;
                *(undefined1 *)(puVar15 - 5) = 0;
                puVar1 = puVar15 + 2;
                puVar15 = puVar15 + 7;
              } while (puVar1 != puVar7);
            }
            F_00429760(puVar9,(((*(int *)(gen_frame + 0x1c)) - (int)puVar9) / 0x1c) * 0x1c,0x2c4);
          }
          puVar9 = (*(uint * PTR32 *)(gen_frame + 0x2c));
          if ((*(uint * PTR32 *)(gen_frame + 0x28)) != ((uint *)GEN_TOP(0x0))) {
            if ((*(uint * PTR32 *)(gen_frame + 0x28)) != (*(uint * PTR32 *)(gen_frame + 0x2c))) {
              puVar7 = (*(uint * PTR32 *)(gen_frame + 0x28)) + 5;
              do {
                if (0xf < *puVar7) {
                  F_00429760(puVar7[-5],*puVar7 + 1,0x2c4);
                }
                *puVar7 = 0xf;
                puVar7[-1] = 0;
                *(char *)(puVar7 - 5) = '\0';
                puVar15 = puVar7 + 2;
                puVar7 = puVar7 + 7;
              } while (puVar15 != puVar9);
            }
            F_00429760((*(uint * PTR32 *)(gen_frame + 0x28)),(((*(int *)(gen_frame + 0x30)) - (int)(*(uint * PTR32 *)(gen_frame + 0x28))) / 0x1c) * 0x1c,0x2c4);
          }
          return 0;
        }
        uVar16 = (uVar16 - 1) + uVar11;
        (*(char *)(gen_frame + 0x43)) = '\x01';
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < (*(uint *)(gen_frame + 0xc)));
    if ((*(char *)(gen_frame + 0x43)) == '\0') break;
    F_00a32e30(&(*(uint * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,&(*(uint * PTR32 *)(gen_frame + 0x14)));
    puVar7 = (*(uint * PTR32 *)(gen_frame + 0x18));
    puVar9 = (*(uint * PTR32 *)(gen_frame + 0x14));
    if ((*(uint * PTR32 *)(gen_frame + 0x14)) != (*(uint * PTR32 *)(gen_frame + 0x18))) {
      puVar15 = (*(uint * PTR32 *)(gen_frame + 0x14)) + 5;
      do {
        if (0xf < *puVar15) {
          F_00429760(puVar15[-5],*puVar15 + 1,0x2c4);
        }
        *puVar15 = 0xf;
        puVar15[-1] = 0;
        *(undefined1 *)(puVar15 - 5) = 0;
        puVar1 = puVar15 + 2;
        puVar15 = puVar15 + 7;
      } while (puVar1 != puVar7);
      (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar9;
    }
  }
  puVar12 = ((undefined4 *)GEN_TOP(F_00a23530(((undefined4 *)(gen_frame + 0x44)),&(*(uint * PTR32 *)(gen_frame + 0x14)))));
  if (param_1 != puVar12) {
    if (0xf < (uint)param_1[5]) {
      F_00429760(*param_1,param_1[5] + 1,0x2c4);
    }
    param_1[5] = 0xf;
    param_1[4] = 0;
    *(undefined1 *)param_1 = 0;
    if ((uint)puVar12[5] < 0x10) {
      F_00c46e20(param_1,puVar12,puVar12[4] + 1);
    }
    else {
      *param_1 = *puVar12;
      *puVar12 = 0;
    }
    param_1[4] = puVar12[4];
    param_1[5] = puVar12[5];
    puVar12[5] = 0xf;
    puVar12[4] = 0;
    *(undefined1 *)puVar12 = 0;
  }
  if (0xf < (*(uint *)(gen_frame + 0x58))) {
    F_00429760(((undefined4 *)(gen_frame + 0x44))[0],(*(uint *)(gen_frame + 0x58)) + 1,0x2c4);
  }
  puVar7 = (*(uint * PTR32 *)(gen_frame + 0x18));
  puVar9 = (*(uint * PTR32 *)(gen_frame + 0x14));
  if ((*(uint * PTR32 *)(gen_frame + 0x14)) != ((uint *)GEN_TOP(0x0))) {
    if ((*(uint * PTR32 *)(gen_frame + 0x14)) != (*(uint * PTR32 *)(gen_frame + 0x18))) {
      puVar15 = (*(uint * PTR32 *)(gen_frame + 0x14)) + 5;
      do {
        if (0xf < *puVar15) {
          F_00429760(puVar15[-5],*puVar15 + 1,0x2c4);
        }
        *puVar15 = 0xf;
        puVar15[-1] = 0;
        *(undefined1 *)(puVar15 - 5) = 0;
        puVar1 = puVar15 + 2;
        puVar15 = puVar15 + 7;
      } while (puVar1 != puVar7);
    }
    F_00429760(puVar9,(((*(int *)(gen_frame + 0x1c)) - (int)puVar9) / 0x1c) * 0x1c,0x2c4);
  }
  puVar7 = (*(uint * PTR32 *)(gen_frame + 0x2c));
  puVar9 = (*(uint * PTR32 *)(gen_frame + 0x28));
  if ((*(uint * PTR32 *)(gen_frame + 0x28)) != ((uint *)GEN_TOP(0x0))) {
    if ((*(uint * PTR32 *)(gen_frame + 0x28)) != (*(uint * PTR32 *)(gen_frame + 0x2c))) {
      puVar15 = (*(uint * PTR32 *)(gen_frame + 0x28)) + 5;
      do {
        if (0xf < *puVar15) {
          F_00429760(puVar15[-5],*puVar15 + 1,0x2c4);
        }
        *puVar15 = 0xf;
        puVar15[-1] = 0;
        *(char *)(puVar15 - 5) = '\0';
        puVar1 = puVar15 + 2;
        puVar15 = puVar15 + 7;
      } while (puVar1 != puVar7);
    }
    F_00429760(puVar9,(((*(int *)(gen_frame + 0x30)) - (int)puVar9) / 0x1c) * 0x1c,0x2c4);
  }
  return 1;
}

/* ref: FUN_00a29100 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00a29100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa29100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x24, 12, 4);
  char cVar1;
  undefined4 * PTR32 * ppuVar2;
  byte bVar3;
  char * pcVar4;
  undefined4 * PTR32 * PTR32 * pppuVar5;
  char * pcVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20));
  pcVar4 = ((char *)GEN_TOP(F_0042a990(param_1 GEN_EDX_FWD)));
  ppuVar2 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  (*(uint *)(gen_frame + 0x14)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((undefined4 * PTR32 *)GEN_TOP(((uint)ppuVar2 & 0xffffff00)));
  pcVar6 = pcVar4;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00a2f470(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
  bVar3 = F_00a28b70(this GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x0)));
  pppuVar5 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
    pppuVar5 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x0));
  }
  F_0042e430(param_1 GEN_EDX_ARG,pppuVar5);
  if (0xf < (*(uint *)(gen_frame + 0x14))) {
    F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x0))[0],(*(uint *)(gen_frame + 0x14)) + 1,0x2c4);
  }
  return bVar3;
}

/* ref: FUN_00a291a0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a291a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa291a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x64, 12, 4);
  char cVar1;
  char * pcVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,param_1);
  F_00a26db0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),param_2,REFG(undefined4, 0x108cc50));
  F_00a26db0(this GEN_EDX_ARG,param_1,0,param_2);
  pcVar2 = ((char *)GEN_TOP(F_0042a990(param_3 GEN_EDX_ARG)));
  cVar1 = *pcVar2;
  while (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      F_0042d160(param_1 GEN_EDX_ARG,2);
      F_0042d160(param_1 GEN_EDX_ARG,pcVar2[1]);
      pcVar2 = pcVar2 + 2;
      uVar3 = F_00a24d30(this GEN_EDX_ARG,pcVar2,(int)this + 0x34,&(*(int *)(gen_frame + 0x0)),1);
      if (0 < (int)(uVar3 + (*(int *)(gen_frame + 0x0)))) {
        (*(uint *)(gen_frame + 0x4)) = uVar3 + (*(int *)(gen_frame + 0x0));
        do {
          F_0042d160(param_1 GEN_EDX_ARG,*pcVar2);
          pcVar2 = pcVar2 + 1;
          uVar3 = (*(uint *)(gen_frame + 0x4)) - 1;
          (*(uint *)(gen_frame + 0x4)) = uVar3;
        } while (uVar3 != 0);
      }
      F_0042d160(param_1 GEN_EDX_ARG,*pcVar2);
      pcVar2 = pcVar2 + 1;
    }
    else {
      uVar3 = F_0042acc0(cVar1);
      if (uVar3 != 0) {
        (*(uint *)(gen_frame + 0x4)) = uVar3;
        do {
          F_0042d160(param_1 GEN_EDX_ARG,*pcVar2);
          pcVar2 = pcVar2 + 1;
          uVar3 = (*(uint *)(gen_frame + 0x4)) - 1;
          (*(uint *)(gen_frame + 0x4)) = uVar3;
        } while (uVar3 != 0);
      }
    }
    cVar1 = *pcVar2;
  }
  pcVar2 = ((char *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG)));
  cVar1 = *pcVar2;
  while (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      F_0042d160(param_1 GEN_EDX_ARG,2);
      F_0042d160(param_1 GEN_EDX_ARG,pcVar2[1]);
      pcVar2 = pcVar2 + 2;
      uVar3 = F_00a24d30(this GEN_EDX_ARG,pcVar2,(int)this + 0x34,&(*(int *)(gen_frame + 0x0)),1);
      iVar4 = uVar3 + (*(int *)(gen_frame + 0x0));
      if (0 < iVar4) {
        do {
          F_0042d160(param_1 GEN_EDX_ARG,*pcVar2);
          pcVar2 = pcVar2 + 1;
          iVar4 = iVar4 - 1;
        } while (iVar4 != 0);
      }
      F_0042d160(param_1 GEN_EDX_ARG,*pcVar2);
      pcVar2 = pcVar2 + 1;
    }
    else {
      for (uVar3 = F_0042acc0(cVar1); uVar3 != 0; uVar3 = uVar3 - 1) {
        cVar1 = *pcVar2;
        F_0042d160(param_1 GEN_EDX_ARG,cVar1);
        pcVar2 = pcVar2 + 1;
      }
    }
    cVar1 = *pcVar2;
  }
  F_0042d160(param_1 GEN_EDX_ARG,0);
  uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return (uint)uVar5;
}

/* ref: FUN_00a29340 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a29340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa29340u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0x6c, 4, 4);
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x68));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = param_4;
  (*(undefined4 *)(gen_frame + 0x8)) = param_3;
  uVar1 = F_00a24d30(this GEN_EDX_FWD,param_1,param_3,&(*(int *)(gen_frame + 0x0)),1);
  (*(uint *)(gen_frame + 0xc)) = uVar1;
  if (uVar1 == 0) {
    return 0;
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  if ((*(int *)(gen_frame + 0x0)) == 0) {
    uVar1 = F_00a28030(this GEN_EDX_ARG,param_1 + uVar1,(*(undefined4 *)(gen_frame + 0x8)));
    uVar1 = uVar1 + (*(uint *)(gen_frame + 0xc));
    uVar2 = F_00a23ff0(this GEN_EDX_ARG,param_1 + uVar1,(*(undefined4 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x10)),1);
    if (uVar2 != 0) {
      F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
      uVar1 = uVar1 + uVar2;
    }
  }
  else {
    uVar2 = F_00a23ff0(this GEN_EDX_ARG,param_1 + uVar1,(*(undefined4 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x10)),1);
    (*(uint *)(gen_frame + 0xc)) = uVar2;
    if (uVar2 != 0) {
      F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
      iVar3 = uVar1 + (*(uint *)(gen_frame + 0xc));
      uVar1 = F_00a28030(this GEN_EDX_ARG,param_1 + iVar3,(*(undefined4 *)(gen_frame + 0x8)));
      uVar1 = iVar3 + uVar1;
    }
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  if (param_2 == uVar1) {
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00a29450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a29450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa29450u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar2 = F_00a24d30(this GEN_EDX_FWD,param_1,param_3,&(*(undefined * PTR32 *)(gen_frame + 0x0)),1);
  if (uVar2 != 0) {
    pvVar1 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) - 1)));
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar1;
    if (-1 < (int)pvVar1) {
      iVar4 = 0;
      if (0 < (int)pvVar1) {
        do {
          uVar3 = F_00a28030(this GEN_EDX_ARG,uVar2 + param_1,param_3);
          iVar4 = iVar4 + 1;
          uVar2 = uVar2 + uVar3;
        } while (iVar4 < (int)(*(undefined * PTR32 *)(gen_frame + 0x0)));
      }
      uVar2 = F_00a23ff0(this GEN_EDX_ARG,uVar2 + param_1,param_3,param_4,1);
      return -(uint)(uVar2 != 0) & param_2;
    }
  }
  return 0;
}

/* ref: FUN_00a294d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a294d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa294d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x10e3fcc));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x14)));
  *puVar1 = 0;
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  *puVar1 = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar1)) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  F_00a31b30(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0x37);
  return (uint)this;
}

/* ref: FUN_00a29530 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a29530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa29530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x10e3fcc));
  F_00492c50(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x14))),8,0x2c4);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0xc))) - iVar1 >> 2) * 4,0x2c4);
    uVar2 = (uint)uVar3;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return uVar2;
}

/* ref: FUN_00a295a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a295a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined1 * param_3, unsigned int gen_a3), GEN_P(char * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa295a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;)
  GEN_PIN(char * param_4 = (char *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  char * pcVar5;
  
  bVar1 = *param_1;
  switch((unsigned int)(uintptr_t)((uint)bVar1)) {
  case 0: ;
    *param_2 = 1;
    return 5;
  default: ;
    if (bVar1 == 0x26) {
      bVar2 = param_1[1];
      if (((bVar2 == 0x67) && (param_1[2] == 0x74)) && (param_1[3] == 0x3b)) {
        *param_2 = 4;
        *param_3 = 0x3e;
        return 0;
      }
      if (((bVar2 == 0x6c) && (param_1[2] == 0x74)) && (param_1[3] == 0x3b)) {
        *param_2 = 4;
        *param_3 = 0x3c;
        return 0;
      }
      if (((bVar2 == 0x61) && (param_1[2] == 0x6d)) &&
         ((param_1[3] == 0x70 && (param_1[4] == 0x3b)))) {
        *param_2 = 5;
        *param_3 = 0x26;
        return 0;
      }
    }
    cVar3 = *param_4;
    pcVar5 = param_4;
    while( true ) {
      if (cVar3 == '\0') {
        *param_2 = 1;
        return 0;
      }
      if ((int)cVar3 == (uint)bVar1) break;
      cVar3 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
    }
    *param_2 = 1;
    return 1;
  case 2: ;
    break;
  case 10: ;
  case 0xd: ;
    *param_2 = 1;
    return 3;
  }
  bVar1 = param_1[1];
  if (bVar1 == 0x16) {
    *param_2 = 4;
    return 2;
  }
  if (bVar1 == 0x1d) {
    *param_2 = 4;
    *param_3 = 0x1d;
    return 0;
  }
  if (bVar1 == 0x1f) {
    *param_2 = 4;
    *param_3 = 0x1e;
    return 0;
  }
  if (bVar1 == 0x11) {
    F_004816e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD);
    uVar4 = F_00a24d30(this GEN_EDX_ARG,param_1 + 2,((undefined1 *)(gen_frame + 0x0)),param_2,1);
    *param_2 = *param_2 + uVar4 + 3;
    F_00493180(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return 3;
  }
  *param_2 = 1;
  return 4;
}

/* ref: FUN_00a297a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a297a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa297a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  char * pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char * pcVar5;
  uint uVar6;
  char * pcVar7;
  byte * pbVar8;
  
  pbVar8 = (*(byte * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  F_0042aca0((*(undefined4 *)&gen_args[1]) GEN_EDX_FWD);
  pcVar5 = (*(char * PTR32 *)&gen_args[3]);
  *(*(int * PTR32 *)&gen_args[2]) = 0;
  do {
    bVar2 = *pbVar8;
    switch((unsigned int)(uintptr_t)((uint)bVar2)) {
    case 0: ;
      return 5;
    default: ;
      if (bVar2 == 0x26) {
        bVar3 = pbVar8[1];
        if (((bVar3 == 0x67) && (pbVar8[2] == 0x74)) && (pbVar8[3] == 0x3b)) {
          (*(byte * PTR32 *)&gen_args[0]) = &REFG(undefined, 0x4);
          (*(char * PTR32 *)&gen_args[3]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[3]), 1, 3),0x3e)));
          pcVar7 = (*(char * PTR32 *)&gen_args[3]);
        }
        else if (((bVar3 == 0x6c) && (pbVar8[2] == 0x74)) && (pbVar8[3] == 0x3b)) {
          (*(byte * PTR32 *)&gen_args[0]) = &REFG(undefined, 0x4);
          (*(char * PTR32 *)&gen_args[3]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[3]), 1, 3),0x3c)));
          pcVar7 = (*(char * PTR32 *)&gen_args[3]);
        }
        else {
          if (((bVar3 != 0x61) || (pbVar8[2] != 0x6d)) ||
             ((pbVar8[3] != 0x70 || (pbVar8[4] != 0x3b)))) goto LAB_00a2987d;
          (*(byte * PTR32 *)&gen_args[0]) = &REFG(undefined, 0x5);
          (*(char * PTR32 *)&gen_args[3]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[3]), 1, 3),0x26)));
          pcVar7 = (*(char * PTR32 *)&gen_args[3]);
        }
      }
      else {
LAB_00a2987d: ;
        cVar4 = *pcVar5;
        pcVar7 = pcVar5;
        while (cVar4 != '\0') {
          if ((int)cVar4 == (uint)bVar2) {
            (*(byte * PTR32 *)&gen_args[0]) = ((byte *)GEN_TOP(0x1));
            if ((*(char *)&gen_args[4]) == '\0') {
              return 1;
            }
            pcVar7 = ((char *)GEN_TOP((uint)*pbVar8));
            goto LAB_00a297f9;
          }
          pcVar1 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
          cVar4 = *pcVar1;
        }
        (*(byte * PTR32 *)&gen_args[0]) = ((byte *)GEN_TOP(0x1));
        pcVar7 = ((char *)GEN_TOP((uint)*pbVar8));
      }
      break;
    case 2: ;
      bVar2 = pbVar8[1];
      if (bVar2 == 0x16) {
        return 2;
      }
      if (bVar2 == 0x1d) {
        (*(byte * PTR32 *)&gen_args[0]) = &REFG(undefined, 0x4);
        (*(char * PTR32 *)&gen_args[3]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[3]), 1, 3),0x1d)));
        pcVar7 = (*(char * PTR32 *)&gen_args[3]);
      }
      else {
        if (bVar2 != 0x1f) {
          if (pbVar8[1] == 0x11) {
            F_004816e0(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            uVar6 = F_00a24d30((*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,pbVar8 + 2,((undefined4 *)(gen_frame + 0x0)),&(*(byte * PTR32 *)&gen_args[0]),1);
            (*(byte * PTR32 *)&gen_args[0]) = (*(byte * PTR32 *)&gen_args[0]) + uVar6 + 3;
            F_00492c50(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
            return 3;
          }
          return 4;
        }
        (*(byte * PTR32 *)&gen_args[0]) = &REFG(undefined, 0x4);
        (*(char * PTR32 *)&gen_args[3]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[3]), 1, 3),0x1e)));
        pcVar7 = (*(char * PTR32 *)&gen_args[3]);
      }
      break;
    case 10: ;
    case 0xd: ;
      return 3;
    }
LAB_00a297f9: ;
    F_0042d160((*(undefined4 *)&gen_args[1]) GEN_EDX_ARG,(char)pcVar7);
    *(*(int * PTR32 *)&gen_args[2]) = (int)((*(byte * PTR32 *)&gen_args[0]) + *(*(int * PTR32 *)&gen_args[2]));
    pbVar8 = pbVar8 + (int)(*(byte * PTR32 *)&gen_args[0]);
  } while( true );
}

/* ref: FUN_00a29960 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a29960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa29960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x8c, 4, 4);
  uint uVar1;
  undefined4 uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x84)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x88));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  ((int *)(gen_frame + 0x28))[0] = 0;
  ((int *)(gen_frame + 0x28))[1] = 0;
  ((int *)(gen_frame + 0x28))[2] = 0;
  F_00a32fd0(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,param_1);
  F_00a32fd0(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,param_2);
  F_00a28b70(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x18)));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  ((undefined1 *)(gen_frame + 0x38))[0] = 0;
  F_00a2edd0(((undefined1 *)(gen_frame + 0x38)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x8)),0,0xffffffff);
  F_00a327e0(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
  F_00a327e0(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
  F_00a31a20(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG,((int *)(gen_frame + 0x28)));
  uVar2 = 0;
  uVar1 = F_00a33c20(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x38)));
  F_00a33a70(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar1,uVar2);
  F_00a32920(((undefined1 *)(gen_frame + 0x38)) GEN_EDX_ARG);
  if (((int *)(gen_frame + 0x28))[0] != 0) {
    F_00429760(((int *)(gen_frame + 0x28))[0],(((int *)(gen_frame + 0x28))[2] - ((int *)(gen_frame + 0x28))[0] >> 2) * 4,0x2c4);
  }
  ((int *)(gen_frame + 0x28))[0] = 0;
  ((int *)(gen_frame + 0x28))[1] = 0;
  ((int *)(gen_frame + 0x28))[2] = 0;
  F_00a31ca0(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG);
  uVar1 = F_00a31ca0(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a29aa0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a29aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa29aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  F_00a294d0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x10e4074));
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x34)));
  *puVar1 = 0;
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  *puVar1 = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar1)) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  F_0042b630((int)this + 0x4c GEN_EDX_ARG);
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x44))) = ((code *)REFP(0xa2ca60));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x74))) = ((code *)REFP(0xa2cb10));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x7c))) = ((code *)REFP(0xa2c980));
  return (uint)this;
}

/* ref: FUN_00a29b20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a29b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa29b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x10e4074));
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x4c))) GEN_EDX_FWD);
  F_00492c50(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x34))),8,0x2c4);
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  uVar1 = F_00a29530(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a29b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a29b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa29b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10e3ec8));
  F_00a294d0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10e41c4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[40])REFP(0x10e411c));
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x38))) = (*(undefined * PTR32 (*)[2])REFP(0x10e3f48));
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  uVar1 = F_004296a0(0x68,0,0x2c4);
  *((uint *)GEN_TOP(((int)this + 0x48))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x48))) + 4))) = *((int *)GEN_TOP(((int)this + 0x48)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x48))) + 8))) = *((int *)GEN_TOP(((int)this + 0x48)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x48))) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x48))) + 0x65))) = 1;
  F_00a25230(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
  F_0042b630((int)this + 0xc0 GEN_EDX_ARG);
  F_0042b630((int)this + 0x114 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x168))) = 0;
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x1c))) = ((code *)REFP(0xa2ca40));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x20))) = ((code *)REFP(0xa2cad0));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x24))) = ((code *)REFP(0xa2cb60));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x40))) = ((code *)REFP(0xa2c9d0));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x44))) = ((code *)REFP(0xa2ca60));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x48))) = ((code *)REFP(0xa2caf0));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x78))) = ((code *)REFP(0xa2cb80));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x4c))) = ((code *)REFP(0xa2c9f0));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x50))) = ((code *)REFP(0xa2ca70));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x54))) = ((code *)REFP(0xa2cb00));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x60))) = ((code *)REFP(0xa2ca80));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x80))) = ((code *)REFP(0xa2ca00));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x84))) = ((code *)REFP(0xa2ca90));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x88))) = ((code *)REFP(0xa2cb20));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x8c))) = ((code *)REFP(0xa2c990));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x90))) = ((code *)REFP(0xa2ca10));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x94))) = ((code *)REFP(0xa2caa0));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x98))) = ((code *)REFP(0xa2cb30));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xa0))) = ((code *)REFP(0xa2c9a0));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xa4))) = ((code *)REFP(0xa2ca20));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xa8))) = ((code *)REFP(0xa2cab0));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xac))) = ((code *)REFP(0xa2cb40));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xb0))) = ((code *)REFP(0xa2c9b0));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xb4))) = ((code *)REFP(0xa2ca30));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xb8))) = ((code *)REFP(0xa2cac0));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xbc))) = ((code *)REFP(0xa2cb50));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc0))) = ((code *)REFP(0xa2c9c0));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc4))) = ((code *)REFP(0xa2ca50));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 200))) = ((code *)REFP(0xa2cae0));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xcc))) = ((code *)REFP(0xa2cb70));
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xd0))) = ((code *)REFP(0xa2c9e0));
  F_0042d160((int)this + 0xc0 GEN_EDX_ARG,2);
  F_0042d160((int)this + 0xc0 GEN_EDX_ARG,0x1d);
  F_0042d160((int)this + 0xc0 GEN_EDX_ARG,1);
  F_0042d160((int)this + 0xc0 GEN_EDX_ARG,3);
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x16c))),0,0x40);
  return (uint)this;
}

/* ref: FUN_00a29dc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a29dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa29dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10e41c4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[40])REFP(0x10e411c));
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x114))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xc0))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x54))) = (*(undefined * PTR32 (*)[1])REFP(0x10e3fc4));
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x6c))) GEN_EDX_ARG);
  F_00a315a0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x5c))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x5c))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x5c))),0xac,0x2c4);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x38))) = (*(undefined * PTR32 (*)[2])REFP(0x10e3f48));
  F_00a22980(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG);
  F_00a30fa0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x48))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x48))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x48))),0x68,0x2c4);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x38))) = (*(undefined * PTR32 (*)[2])REFP(0x1090598));
  uVar1 = F_00a29530(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10e3ec8));
  return uVar1;
}

/* ref: FUN_00a29e80 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a29e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa29e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0xd4, 12, 4);
  undefined4 * this_00;
  uint * puVar1;
  undefined * pvVar2;
  undefined4 * PTR32 * PTR32 * pppuVar3;
  byte bVar4;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar5;
  int iVar6;
  uint * puVar7;
  undefined4 * puVar8;
  char * pcVar9;
  uint * puVar10;
  uint uVar11;
  uint * PTR32 * ppuVar12;
  uint uVar13;
  int iVar14;
  uint * puVar15;
  ulonglong uVar16;
  
  uVar13 = ((uint *)(gen_frame + 0x48))[0];
  GEN_COOKIE((*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0));
  uVar11 = *(uint *)(param_1 + 0x14);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(uint *)(gen_frame + 0x5c)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x48))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x48))[0] = uVar13 & 0xffffff00;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x24)) = 0;
  (*(int *)(gen_frame + 0x28)) = 0;
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) = ((uint * PTR32 *)GEN_TOP(0x0));
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0x34)) = ((uint * PTR32 *)GEN_TOP(0x0));
  (*(uint * PTR32 * PTR32 *)(gen_frame + 0x38)) = ((uint * PTR32 *)GEN_TOP(0x0));
  pcVar9 = param_1;
  if (0xf < uVar11) {
    pcVar9 = *(char * PTR32 *)param_1;
  }
  if (*pcVar9 == '<') {
    F_00a28350(this GEN_EDX_FWD,&(*(int *)(gen_frame + 0x10)),pcVar9);
    F_00a2ec30(((uint *)(gen_frame + 0x48)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x10)),0,0xffffffff);
    pppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb0))[0];
    (*(uint *)(gen_frame + 0xc4)) = 0xf;
    (*(undefined4 *)(gen_frame + 0xc0)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar3 & 0xffffff00)));
    F_00a2edd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb0)) GEN_EDX_ARG,param_2,0,0xffffffff);
    bVar4 = F_00a28b70(this GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb0)));
    if (bVar4 == 0) {
      if (0xf < (*(uint *)(gen_frame + 0xc4))) {
        F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb0))[0],(*(uint *)(gen_frame + 0xc4)) + 1,0x2c4);
      }
      pppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb0))[0];
      (*(uint *)(gen_frame + 0xc4)) = 0xf;
      (*(undefined4 *)(gen_frame + 0xc0)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar3 & 0xffffff00)));
      F_00a328d0(&(*(int *)(gen_frame + 0x10)) GEN_EDX_ARG);
      uVar11 = (*(uint *)(gen_frame + 0x5c));
      if (0xf < (*(uint *)(gen_frame + 0x5c))) {
        uVar16 = F_00429760(((uint *)(gen_frame + 0x48))[0],(*(uint *)(gen_frame + 0x5c)) + 1,0x2c4);
        return (uint)uVar16;
      }
    }
    else {
      ppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb0))[0];
      if ((*(uint *)(gen_frame + 0xc4)) < 0x10) {
        ppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb0));
      }
      F_00a28350(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x20)),ppppuVar5);
      iVar14 = (*(int *)(gen_frame + 0x24)) - (*(int *)(gen_frame + 0x20)) >> 0x1f;
      uVar11 = 0;
      if (((*(int *)(gen_frame + 0x24)) - (*(int *)(gen_frame + 0x20))) / 0x1c + iVar14 != iVar14) {
        ((uint * PTR32 *)(gen_frame + 0x40))[0] = ((uint *)GEN_TOP(0xffffffff));
        do {
          ppuVar12 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x34));
          if ((((uint * PTR32 *)(gen_frame + 0x40)) < (*(uint * PTR32 * PTR32 *)(gen_frame + 0x34))) && ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) <= ((uint * PTR32 *)(gen_frame + 0x40)))) {
            iVar14 = (int)((uint * PTR32 *)(gen_frame + 0x40)) - (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x30));
            if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x34)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x38))) {
              F_00a31d10(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,1);
              ppuVar12 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x34));
            }
            if (ppuVar12 != ((uint * PTR32 *)GEN_TOP(0x0))) {
              *ppuVar12 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30))[iVar14 >> 2];
            }
          }
          else {
            if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x34)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x38))) {
              F_00a31d10(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,1);
              ppuVar12 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x34));
            }
            if (ppuVar12 != ((uint * PTR32 *)GEN_TOP(0x0))) {
              *ppuVar12 = ((uint *)GEN_TOP(0xffffffff));
            }
          }
          uVar11 = uVar11 + 1;
          (*(uint * PTR32 * PTR32 *)(gen_frame + 0x34)) = ppuVar12 + 1;
        } while (uVar11 < (uint)(((*(int *)(gen_frame + 0x24)) - (*(int *)(gen_frame + 0x20))) / 0x1c));
      }
      iVar14 = ((*(int *)(gen_frame + 0x24)) - (*(int *)(gen_frame + 0x20))) / 0x1c;
      (*(int *)(gen_frame + 0x8)) = 1;
      if (1 < iVar14) {
        puVar1 = ((uint *)GEN_TOP((((*(int *)(gen_frame + 0x14)) - (*(int *)(gen_frame + 0x10))) / 0x1c)));
        ((uint * PTR32 *)(gen_frame + 0x40))[0] = ((uint *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 0x1c)));
        do {
          (*(uint * PTR32 *)(gen_frame + 0xc)) = ((uint *)GEN_TOP(0x1));
          if (((uint *)GEN_TOP(0x1)) < puVar1) {
            puVar15 = ((uint *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 0x2c)));
            ((uint * PTR32 *)(gen_frame + 0x40))[1] = puVar15;
            do {
              puVar7 = ((uint * PTR32 *)(gen_frame + 0x40))[0];
              if (0xf < ((uint * PTR32 *)(gen_frame + 0x40))[0][5]) {
                puVar7 = ((uint *)GEN_TOP(*((uint * PTR32 *)(gen_frame + 0x40))[0]));
              }
              uVar11 = *puVar15;
              uVar13 = ((uint * PTR32 *)(gen_frame + 0x40))[0][4];
              if (uVar11 < ((uint * PTR32 *)(gen_frame + 0x40))[0][4]) {
                uVar13 = uVar11;
              }
              if (puVar15[1] < 0x10) {
                puVar10 = puVar15 - 4;
              }
              else {
                puVar10 = ((uint *)GEN_TOP(puVar15[-4]));
              }
              for (; 3 < uVar13; uVar13 = uVar13 - 4) {
                if (*puVar10 != *puVar7) goto LAB_00a2a19e;
                puVar7 = puVar7 + 1;
                puVar10 = puVar10 + 1;
              }
              if (uVar13 == 0) {
LAB_00a2a1ed: ;
                uVar13 = 0;
              }
              else {
LAB_00a2a19e: ;
                iVar6 = (uint)(byte)*puVar10 - (uint)(byte)*puVar7;
                if (iVar6 == 0) {
                  if (uVar13 < 2) goto LAB_00a2a1ed;
                  iVar6 = (uint)*((byte *)GEN_TOP(((int)puVar10 + 1))) - (uint)*((byte *)GEN_TOP(((int)puVar7 + 1)));
                  if (iVar6 == 0) {
                    if (uVar13 < 3) goto LAB_00a2a1ed;
                    iVar6 = (uint)*((byte *)GEN_TOP(((int)puVar10 + 2))) - (uint)*((byte *)GEN_TOP(((int)puVar7 + 2)));
                    if (iVar6 == 0) {
                      if (uVar13 < 4) goto LAB_00a2a1ed;
                      iVar6 = (uint)*((byte *)GEN_TOP(((int)puVar10 + 3))) - (uint)*((byte *)GEN_TOP(((int)puVar7 + 3)));
                    }
                  }
                }
                uVar13 = iVar6 >> 0x1f | 1;
              }
              if (((uVar13 == 0) && (((uint * PTR32 *)(gen_frame + 0x40))[0][4] <= uVar11)) && (uVar11 == ((uint * PTR32 *)(gen_frame + 0x40))[0][4])) {
                uVar11 = *puVar15;
                uVar13 = (uint)(uVar11 != 0);
                if (puVar15[1] < 0x10) {
                  puVar7 = puVar15 - 4;
                }
                else {
                  puVar7 = ((uint *)GEN_TOP(puVar15[-4]));
                }
                puVar10 = (uint *)&REFG(undefined1, 0x10e3d1c);
                for (; 3 < uVar13; uVar13 = uVar13 - 4) {
                  if (*puVar7 != *puVar10) goto LAB_00a2a25c;
                  puVar10 = puVar10 + 1;
                  puVar7 = puVar7 + 1;
                }
                if (uVar13 == 0) {
LAB_00a2a2ab: ;
                  uVar13 = 0;
                }
                else {
LAB_00a2a25c: ;
                  iVar6 = (uint)(byte)*puVar7 - (uint)(byte)*puVar10;
                  if (iVar6 == 0) {
                    if (uVar13 < 2) goto LAB_00a2a2ab;
                    iVar6 = (uint)*((byte *)GEN_TOP(((int)puVar7 + 1))) - (uint)*((byte *)GEN_TOP(((int)puVar10 + 1)));
                    if (iVar6 == 0) {
                      if (uVar13 < 3) goto LAB_00a2a2ab;
                      iVar6 = (uint)*((byte *)GEN_TOP(((int)puVar7 + 2))) - (uint)*((byte *)GEN_TOP(((int)puVar10 + 2)));
                      if (iVar6 == 0) {
                        if (uVar13 < 4) goto LAB_00a2a2ab;
                        iVar6 = (uint)*((byte *)GEN_TOP(((int)puVar7 + 3))) - (uint)*((byte *)GEN_TOP(((int)puVar10 + 3)))
                        ;
                      }
                    }
                  }
                  uVar13 = iVar6 >> 0x1f | 1;
                }
                if (((uVar13 != 0) || (uVar11 == 0)) || (uVar11 != 1)) {
                  uVar11 = *puVar15;
                  if (puVar15[1] < 0x10) {
                    puVar7 = puVar15 - 4;
                  }
                  else {
                    puVar7 = ((uint *)GEN_TOP(puVar15[-4]));
                  }
                  ((uint * PTR32 *)(gen_frame + 0x40))[1] = puVar15;
                  uVar13 = F_0040d320(puVar7,&REFG(undefined1, 0x10e3d20),(uint)(uVar11 != 0));
                  if (((uVar13 != 0) || (uVar11 == 0)) || (uVar11 != 1)) {
                    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30))[(*(int *)(gen_frame + 0x8))] = (*(uint * PTR32 *)(gen_frame + 0xc));
                  }
                }
              }
              puVar7 = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0xc)) + 1)));
              puVar15 = puVar15 + 7;
              (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar7;
              ((uint * PTR32 *)(gen_frame + 0x40))[1] = puVar15;
            } while (puVar7 < puVar1);
          }
          ((uint * PTR32 *)(gen_frame + 0x40))[0] = ((uint * PTR32 *)(gen_frame + 0x40))[0] + 7;
          iVar6 = (*(int *)(gen_frame + 0x8)) + 1;
          (*(int *)(gen_frame + 0x8)) = iVar6;
        } while (iVar6 < iVar14);
      }
      uVar11 = ((uint *)(gen_frame + 0x64))[0];
      (*(uint *)(gen_frame + 0x78)) = 0xf;
      (*(undefined4 *)(gen_frame + 0x74)) = 0;
      (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x64))[0] + 0)) = 0;
      ((uint *)(gen_frame + 0x64))[0] = uVar11 & 0xffffff00;
      F_00a2edd0(((uint *)(gen_frame + 0x64)) GEN_EDX_ARG,((uint *)(gen_frame + 0x48)),0,0xffffffff);
      F_00a327e0(&(*(int *)(gen_frame + 0x80)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x10)));
      F_00a327e0(&(*(int *)(gen_frame + 0x90)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x20)));
      F_00a31a20(((int *)(gen_frame + 0xa0)) GEN_EDX_ARG,&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)));
      pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x4));
      puVar8 = ((undefined4 *)GEN_TOP(F_004296a0(0x5c,0,0x2c4)));
      *puVar8 = *((undefined4 *)GEN_TOP(((int)pvVar2 + 8)));
      puVar8[1] = *((undefined4 *)GEN_TOP(((int)pvVar2 + 8)));
      this_00 = puVar8 + 3;
      puVar8[2] = *((undefined4 *)GEN_TOP(((int)pvVar2 + 8)));
      *(undefined2 *)(puVar8 + 0x16) = 0;
      if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar8[8] = 0xf;
        puVar8[7] = 0;
        *(undefined1 *)this_00 = 0;
        F_00a2edd0(this_00 GEN_EDX_ARG,((uint *)(gen_frame + 0x64)),0,0xffffffff);
        F_00a327e0(puVar8 + 10 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x80)));
        F_00a327e0(puVar8 + 0xe GEN_EDX_ARG,&(*(int *)(gen_frame + 0x90)));
        F_00a31a20(puVar8 + 0x12 GEN_EDX_ARG,((int *)(gen_frame + 0xa0)));
      }
      F_00a33a70(((undefined *)GEN_TOP(((int)pvVar2 + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar8,0);
      if (((int *)(gen_frame + 0xa0))[0] != 0) {
        F_00429760(((int *)(gen_frame + 0xa0))[0],(((int *)(gen_frame + 0xa0))[2] - ((int *)(gen_frame + 0xa0))[0] >> 2) * 4,0x2c4);
      }
      ((int *)(gen_frame + 0xa0))[0] = 0;
      ((int *)(gen_frame + 0xa0))[1] = 0;
      ((int *)(gen_frame + 0xa0))[2] = 0;
      if ((*(int *)(gen_frame + 0x90)) != 0) {
        F_00a31280((*(int *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),((undefined1 *)(gen_frame + 0x9c)),(*(undefined * PTR32 *)(gen_frame + 0x4)));
        F_00429760((*(int *)(gen_frame + 0x90)),(((*(int *)(gen_frame + 0x98)) - (*(int *)(gen_frame + 0x90))) / 0x1c) * 0x1c,0x2c4);
      }
      (*(int *)(gen_frame + 0x90)) = 0;
      (*(undefined4 *)(gen_frame + 0x94)) = 0;
      (*(int *)(gen_frame + 0x98)) = 0;
      if ((*(int *)(gen_frame + 0x80)) != 0) {
        F_00a31280((*(int *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),((undefined1 *)(gen_frame + 0x8c)),(*(undefined * PTR32 *)(gen_frame + 0x4)));
        F_00429760((*(int *)(gen_frame + 0x80)),(((*(int *)(gen_frame + 0x88)) - (*(int *)(gen_frame + 0x80))) / 0x1c) * 0x1c,0x2c4);
      }
      (*(int *)(gen_frame + 0x80)) = 0;
      (*(undefined4 *)(gen_frame + 0x84)) = 0;
      (*(int *)(gen_frame + 0x88)) = 0;
      if (0xf < (*(uint *)(gen_frame + 0x78))) {
        F_00429760(((uint *)(gen_frame + 0x64))[0],(*(uint *)(gen_frame + 0x78)) + 1,0x2c4);
      }
      if (0xf < (*(uint *)(gen_frame + 0xc4))) {
        F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb0))[0],(*(uint *)(gen_frame + 0xc4)) + 1,0x2c4);
      }
      pppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb0))[0];
      (*(uint *)(gen_frame + 0xc4)) = 0xf;
      (*(undefined4 *)(gen_frame + 0xc0)) = 0;
      (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb0))[0] + 0)) = 0;
      ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb0))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar3 & 0xffffff00)));
      if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) != ((uint * PTR32 *)GEN_TOP(0x0))) {
        F_00429760((*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)),((int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x38)) - (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x30))) >> 2) * 4,0x2c4);
      }
      iVar14 = (*(int *)(gen_frame + 0x20));
      if ((*(int *)(gen_frame + 0x20)) != 0) {
        F_00a31280((*(int *)(gen_frame + 0x20)),(*(int *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x2c)),(*(undefined * PTR32 *)(gen_frame + 0x4)));
        F_00429760(iVar14,(((*(int *)(gen_frame + 0x28)) - iVar14) / 0x1c) * 0x1c,0x2c4);
      }
      iVar14 = (*(int *)(gen_frame + 0x10));
      if ((*(int *)(gen_frame + 0x10)) != 0) {
        F_00a31280((*(int *)(gen_frame + 0x10)),(*(int *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x1c)),(*(undefined * PTR32 *)(gen_frame + 0x4)));
        F_00429760(iVar14,(((*(int *)(gen_frame + 0x18)) - iVar14) / 0x1c) * 0x1c,0x2c4);
      }
      uVar11 = (*(uint *)(gen_frame + 0x5c));
      if (0xf < (*(uint *)(gen_frame + 0x5c))) {
        uVar16 = F_00429760(((uint *)(gen_frame + 0x48))[0],(*(uint *)(gen_frame + 0x5c)) + 1,0x2c4);
        return (uint)uVar16;
      }
    }
  }
  else {
    F_00a29960(this GEN_EDX_ARG,param_1,param_2);
    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) = ((uint * PTR32 *)GEN_TOP(0x0));
    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x34)) = ((uint * PTR32 *)GEN_TOP(0x0));
    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x38)) = ((uint * PTR32 *)GEN_TOP(0x0));
    F_00a31ca0(&(*(int *)(gen_frame + 0x20)) GEN_EDX_ARG);
    uVar11 = F_00a31ca0(&(*(int *)(gen_frame + 0x10)) GEN_EDX_ARG);
  }
  return uVar11;
}

/* ref: FUN_00a2a6c0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a2a6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa2a6c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0xa0, 0, 4);
  int iVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  (*(uint *)(gen_frame + 0x8)) = param_1;
  (*(undefined4 *)(gen_frame + 0x18)) = param_3;
  (*(uint *)(gen_frame + 0x28)) = param_1;
  (*(uint *)(gen_frame + 0x1c)) = param_1 + param_2;
  F_0042b630(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_FWD);
  uVar4 = param_1;
  uVar5 = param_1;
  if (param_1 < (*(uint *)(gen_frame + 0x1c))) {
    do {
      uVar4 = F_00a24d30((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,uVar5,(*(undefined4 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),0);
      (*(uint *)(gen_frame + 0x24)) = uVar4;
      if (uVar4 == 0) {
        uVar4 = F_00a23ff0((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,uVar5,(*(undefined4 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x2c)),0);
        (*(uint *)(gen_frame + 0x24)) = uVar4;
        if (uVar4 != 0) {
          (*(undefined4 *)(gen_frame + 0x80)) = 0;
          (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = ((undefined4 *)GEN_TOP(0x0));
          (*(char *)(gen_frame + 0x88)) = -1;
          F_00490f90(&(*(undefined4 *)(gen_frame + 0x80)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2c)));
          if (*((uint *)GEN_TOP(((int)param_4 + 8))) <= *((int *)GEN_TOP(((int)param_4 + 0x10))) + 1U) {
            F_00486f80(param_4 GEN_EDX_ARG,1);
          }
          uVar5 = *((int *)GEN_TOP(((int)param_4 + 0xc))) + *((int *)GEN_TOP(((int)param_4 + 0x10)));
          if (*((uint *)GEN_TOP(((int)param_4 + 8))) <= uVar5) {
            uVar5 = uVar5 - *((uint *)GEN_TOP(((int)param_4 + 8)));
          }
          if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)param_4 + 4))) + uVar5 * 4))) == 0) {
            uVar4 = F_004296a0(0xc,0,0x2c4);
            *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)param_4 + 4))) + uVar5 * 4))) = uVar4;
          }
          puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_4 + 4))) + uVar5 * 4)));
          if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined1 *)(puVar2 + 2) = 0xff;
            if (((*(char *)(gen_frame + 0x88)) != -1) && (puVar2 != &(*(undefined4 *)(gen_frame + 0x80)))) {
              (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
              (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (*(undefined4 * PTR32 *)(gen_frame + 0x84));
              if ((*(char *)(gen_frame + 0x88)) == '\0') {
                F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
              }
              else if ((*(char *)(gen_frame + 0x88)) == '\x01') {
                F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
              }
            }
          }
          *((int *)GEN_TOP(((int)param_4 + 0x10))) = *((int *)GEN_TOP(((int)param_4 + 0x10))) + 1;
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x84)) != ((undefined4 *)GEN_TOP(0x0))) {
            if (((*(char *)(gen_frame + 0x88)) != '\0') && ((*(char *)(gen_frame + 0x88)) == '\x01')) {
              pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x84))));
              *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
              if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
                F_0042c880(pvVar3 GEN_EDX_ARG);
                F_00406ad0(pvVar3);
              }
            }
            (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = ((undefined4 *)GEN_TOP(0x0));
            (*(char *)(gen_frame + 0x88)) = -1;
          }
          goto LAB_00a2a91d;
        }
      }
      else {
        iVar1 = *((int *)GEN_TOP(((int)param_4 + 0x10)));
        (*(undefined4 *)(gen_frame + 0x8c)) = 0;
        (*(undefined4 *)(gen_frame + 0x8c)) = (*(undefined4 *)(gen_frame + 0x14));
        (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = &(*(undefined4 *)(gen_frame + 0x8c));
        (*(char *)(gen_frame + 0x94)) = '\0';
        if (*((uint *)GEN_TOP(((int)param_4 + 8))) <= iVar1 + 1U) {
          F_00486f80(param_4 GEN_EDX_ARG,1);
        }
        uVar5 = *((int *)GEN_TOP(((int)param_4 + 0xc))) + *((int *)GEN_TOP(((int)param_4 + 0x10)));
        if (*((uint *)GEN_TOP(((int)param_4 + 8))) <= uVar5) {
          uVar5 = uVar5 - *((uint *)GEN_TOP(((int)param_4 + 8)));
        }
        if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)param_4 + 4))) + uVar5 * 4))) == 0) {
          uVar4 = F_004296a0(0xc,0,0x2c4);
          *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)param_4 + 4))) + uVar5 * 4))) = uVar4;
        }
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_4 + 4))) + uVar5 * 4)));
        if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined1 *)(puVar2 + 2) = 0xff;
          if (((*(char *)(gen_frame + 0x94)) != -1) && (puVar2 != &(*(undefined4 *)(gen_frame + 0x8c)))) {
            (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar2;
            (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (*(undefined4 * PTR32 *)(gen_frame + 0x90));
            if ((*(char *)(gen_frame + 0x94)) == '\0') {
              F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
            }
            else if ((*(char *)(gen_frame + 0x94)) == '\x01') {
              F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
            }
          }
        }
        *((int *)GEN_TOP(((int)param_4 + 0x10))) = *((int *)GEN_TOP(((int)param_4 + 0x10))) + 1;
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x90)) != ((undefined4 *)GEN_TOP(0x0))) {
          if (((*(char *)(gen_frame + 0x94)) != '\0') && ((*(char *)(gen_frame + 0x94)) == '\x01')) {
            pvVar3 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x90))));
            *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
            if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
              F_0042c880(pvVar3 GEN_EDX_ARG);
              F_00406ad0(pvVar3);
            }
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = ((undefined4 *)GEN_TOP(0x0));
          (*(char *)(gen_frame + 0x94)) = -1;
        }
LAB_00a2a91d: ;
        uVar5 = (*(uint *)(gen_frame + 0x28)) + (*(uint *)(gen_frame + 0x24));
        (*(uint *)(gen_frame + 0x28)) = uVar5;
      }
      uVar4 = (*(uint *)(gen_frame + 0x8));
    } while (uVar5 < (*(uint *)(gen_frame + 0x1c)));
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
  return uVar5 - uVar4;
}

/* ref: FUN_00a2a960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2a960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2a960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e4204));
  F_00a32bf0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x18))),0x48,0x2c4);
  F_00a33cd0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x5c,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2a9c0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a2a9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa2a9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0xd8, 8, 4);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd4));
  (*(undefined4 *)(gen_frame + 0x24)) = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = param_4;
  F_0042b630(((undefined1 *)(gen_frame + 0x7c)) GEN_EDX_FWD);
  uVar1 = F_00a23ff0(this GEN_EDX_ARG,param_1,param_3,((undefined1 *)(gen_frame + 0x7c)),1);
  if (uVar1 != 0) {
    uVar2 = F_00a24d30(this GEN_EDX_ARG,param_1 + uVar1,(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x1c)),1);
    if (uVar2 != 0) {
      uVar3 = F_00a24d30(this GEN_EDX_ARG,param_1 + uVar1 + uVar2,(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x18)),1);
      if (uVar3 != 0) {
        iVar4 = uVar1 + uVar2 + uVar3;
        F_004816e0(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        uVar1 = F_00a2a6c0(this GEN_EDX_ARG,param_1 + iVar4,param_2 - iVar4,(*(undefined4 *)(gen_frame + 0x24)),((undefined4 *)(gen_frame + 0x0)));
        F_0042b630(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this - 4))) + 0x18))))
                          ((int)this - 4,((undefined1 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x18)),((undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x28)));
        if (uVar2 == 1) {
          F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x28)));
          F_0042c880(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
          F_00492c50(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
          ((undefined4 *)(gen_frame + 0x0))[0] = 0;
          F_0042c880(((undefined1 *)(gen_frame + 0x7c)) GEN_EDX_ARG);
          return iVar4 + uVar1;
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
        F_00492c50(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
        ((undefined4 *)(gen_frame + 0x0))[0] = 0;
      }
    }
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x7c)) GEN_EDX_ARG);
  return 0;
}

/* ref: Component::Text::TextModule::vf14 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a2ab70(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(undefined * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xa2ab70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(undefined * param_7 = (undefined *)(uintptr_t)gen_a6;)
  GEN_FRAME_DECL_GS(0x13c, 4, 4);
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x134)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x138));
  (*(int * PTR32 *)(gen_frame + 0x1c)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = param_7;
  F_0042b630(((undefined1 *)(gen_frame + 0xc8)) GEN_EDX_FWD);
  uVar3 = F_00a23ff0(param_1 + 1 GEN_EDX_ARG,param_2,param_4,((undefined1 *)(gen_frame + 0xc8)),1);
  if (uVar3 != 0) {
    uVar4 = F_00a24d30((*(int * PTR32 *)(gen_frame + 0x1c)) + 1 GEN_EDX_ARG,param_2 + uVar3,param_4,((undefined1 *)(gen_frame + 0x128)),1);
    if (uVar4 != 0) {
      uVar5 = F_00a24d30((*(int * PTR32 *)(gen_frame + 0x1c)) + 1 GEN_EDX_ARG,param_2 + uVar3 + uVar4,param_4,&(*(undefined4 *)(gen_frame + 0x120)),1);
      if (uVar5 != 0) {
        iVar7 = uVar3 + uVar4 + uVar5;
        uVar3 = F_00a24d30((*(int * PTR32 *)(gen_frame + 0x1c)) + 1 GEN_EDX_ARG,param_2 + iVar7,param_4,((undefined1 *)(gen_frame + 0x124)),1);
        if (uVar3 != 0) {
          iVar7 = iVar7 + uVar3;
          if (param_5 != '\0') {
            uVar3 = F_00a24d30((*(int * PTR32 *)(gen_frame + 0x1c)) + 1 GEN_EDX_ARG,param_2 + iVar7,param_4,((int *)(gen_frame + 0x12c)),1);
            if (uVar3 == 0) goto LAB_00a2adc2;
            ((int *)(gen_frame + 0x12c))[0] = ((int *)(gen_frame + 0x12c))[0] - 1;
            iVar7 = iVar7 + uVar3;
          }
          uVar3 = F_00a24d30((*(int * PTR32 *)(gen_frame + 0x1c)) + 1 GEN_EDX_ARG,param_2 + iVar7,param_4,&(*(int *)(gen_frame + 0x11c)),1);
          if (uVar3 != 0) {
            (*(int *)(gen_frame + 0x11c)) = (*(int *)(gen_frame + 0x11c)) - 1;
            iVar7 = iVar7 + uVar3;
            F_004816e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            uVar3 = F_00a2a6c0((*(int * PTR32 *)(gen_frame + 0x1c)) + 1 GEN_EDX_ARG,param_2 + iVar7,param_3 - iVar7,param_4,((undefined1 *)(gen_frame + 0x0)));
            F_0042b630(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
            piVar1 = (*(int * PTR32 *)(gen_frame + 0x1c));
            piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x1c))[0xd])) + 0xc))))(((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x1c))[0xd])) GEN_EDX_ARG)));
            if (*piVar6 == param_6) {
              F_0042b630(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
              bVar2 = F_00a227a0(piVar1 + 0xe GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc8)),((undefined1 *)(gen_frame + 0x20)));
              if (bVar2 != 0) {
                uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x74)));
                if (uVar4 == 1) {
                  F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x74)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
                  goto LAB_00a2ad07;
                }
              }
              F_0042c880(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
            }
            else {
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))
                                (piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc8)),(*(undefined4 *)(gen_frame + 0x120)),0xffff,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x74)));
              if (uVar4 == 1) {
                F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x74)));
LAB_00a2ad07: ;
                F_0042c880(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
                F_00493180(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
                F_0042c880(((undefined1 *)(gen_frame + 0xc8)) GEN_EDX_ARG);
                return iVar7 + uVar3;
              }
            }
            F_0042c880(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
            F_00493180(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          }
        }
      }
    }
  }
LAB_00a2adc2: ;
  F_0042c880(((undefined1 *)(gen_frame + 0xc8)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00a2ade0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00a2ade0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2ade0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x40, 0, 4);
  uint uVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e4204));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_004296a0(0x5c,0,0x2c4);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x58))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x59))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  uVar2 = F_004296a0(0x48,0,0x2c4);
  uVar1 = ((uint *)(gen_frame + 0x0))[0];
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar2;
  *((uint *)GEN_TOP(uVar2)) = uVar2;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 4))) = *((int *)GEN_TOP(((int)this + 0x18)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 8))) = *((int *)GEN_TOP(((int)this + 0x18)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x44))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x45))) = 1;
  (*(uint *)(gen_frame + 0x14)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x0))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x0))[0] = uVar1 & 0xffffff00;
  F_00a2f470(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x10e3cec),1);
  uVar1 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar1 & 0xffffff00;
  F_00a2f470(((uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,&REFG(undefined, 0x10e3cf0),2);
  F_00a29960(this GEN_EDX_ARG,((uint *)(gen_frame + 0x1c)),((uint *)(gen_frame + 0x0)));
  if (0xf < (*(uint *)(gen_frame + 0x30))) {
    F_00429760(((uint *)(gen_frame + 0x1c))[0],(*(uint *)(gen_frame + 0x30)) + 1,0x2c4);
  }
  uVar1 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar1 & 0xffffff00;
  if (0xf < (*(uint *)(gen_frame + 0x14))) {
    F_00429760(((uint *)(gen_frame + 0x0))[0],(*(uint *)(gen_frame + 0x14)) + 1,0x2c4);
  }
  uVar1 = ((uint *)(gen_frame + 0x0))[0];
  (*(uint *)(gen_frame + 0x14)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x0))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x0))[0] = uVar1 & 0xffffff00;
  F_00a2f470(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x10e3cf4),1);
  uVar1 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar1 & 0xffffff00;
  F_00a2f470(((uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10e3cf8)),3);
  F_00a29960(this GEN_EDX_ARG,((uint *)(gen_frame + 0x1c)),((uint *)(gen_frame + 0x0)));
  if (0xf < (*(uint *)(gen_frame + 0x30))) {
    F_00429760(((uint *)(gen_frame + 0x1c))[0],(*(uint *)(gen_frame + 0x30)) + 1,0x2c4);
  }
  uVar1 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar1 & 0xffffff00;
  if (0xf < (*(uint *)(gen_frame + 0x14))) {
    F_00429760(((uint *)(gen_frame + 0x0))[0],(*(uint *)(gen_frame + 0x14)) + 1,0x2c4);
  }
  uVar1 = ((uint *)(gen_frame + 0x0))[0];
  (*(uint *)(gen_frame + 0x14)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x0))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x0))[0] = uVar1 & 0xffffff00;
  F_00a2f470(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x10e3cfc),1);
  uVar1 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar1 & 0xffffff00;
  F_00a2f470(((uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,&REFG(undefined, 0x10e3d00),4);
  F_00a29960(this GEN_EDX_ARG,((uint *)(gen_frame + 0x1c)),((uint *)(gen_frame + 0x0)));
  if (0xf < (*(uint *)(gen_frame + 0x30))) {
    F_00429760(((uint *)(gen_frame + 0x1c))[0],(*(uint *)(gen_frame + 0x30)) + 1,0x2c4);
  }
  uVar1 = ((uint *)(gen_frame + 0x1c))[0];
  (*(uint *)(gen_frame + 0x30)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x1c))[0] = uVar1 & 0xffffff00;
  if (0xf < (*(uint *)(gen_frame + 0x14))) {
    F_00429760(((uint *)(gen_frame + 0x0))[0],(*(uint *)(gen_frame + 0x14)) + 1,0x2c4);
  }
  return (uint)this;
}

/* ref: FUN_00a2b000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2b000(GEN_P(undefined1 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2b000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  char cVar1;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 0x44) = 0;
  cVar1 = *param_3;
  while (cVar1 != '\0') {
    param_1[*(int *)(param_1 + 0x44) + 1] = param_3[*(int *)(param_1 + 0x44)];
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    cVar1 = param_3[*(int *)(param_1 + 0x44)];
  }
  return (uint)param_1;
}

/* ref: FUN_00a2b040 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a2b040(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 < *((int *)GEN_TOP((in_ecx + 0x44)))) {
    return *((byte *)GEN_TOP((param_2 + 1 + in_ecx)));
  }
  return 0x2e;
}

/* ref: FUN_00a2b060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2b060(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return param_2;
}

/* ref: Component::Text::TextModuleInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2b090(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[13])REFP(0x10e3ec8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a2b0c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2b0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xa2b0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = param_5;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = param_6;
  *((undefined1 *)GEN_TOP(((int)this + 0x68))) = 0;
  return (uint)this;
}

/* ref: Component::Text::Localize::Noun::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2b110(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a2b1d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2b1d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b1d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2;
}

/* ref: FUN_00a2b230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2b230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(int *)this + param_1 * 0x1c;
}

/* ref: FUN_00a2b250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2b250(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00a2b290 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2b290(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a2b300 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a2b300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00a2b3a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2b3a0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a2b3f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2b3f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2b420(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a2b4b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a2b4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00a2b4e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a2b4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b4e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00a2b520 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a2b520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00a2b580 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2b580(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b5f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2b5f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b610 */
GEN_OWN GEN_FRAME uint F_00a2b610(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2b610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00a2b640 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2b640(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xac,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2b670(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(gen_size32 param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa2b670u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00a2b6d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2b6d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b710 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2b710(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x1c,param_2,0x2c4);
  return uVar1;
}

/* ref: FUN_00a2b780 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2b780(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b7b0 */
GEN_OWN GEN_FRAME uint F_00a2b7b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2b7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x59;
}

/* ref: FUN_00a2b7c0 */
GEN_OWN GEN_FRAME uint F_00a2b7c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2b7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2b7d0 */
GEN_OWN GEN_FRAME uint F_00a2b7d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2b7d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00a2b7e0 */
GEN_OWN GEN_FRAME uint F_00a2b7e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2b7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00a2b7f0 */
GEN_OWN GEN_FRAME uint F_00a2b7f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2b7f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00a2b820 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2b820(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x5c,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b840 */
GEN_OWN GEN_FRAME uint F_00a2b840(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2b840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2b870 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2b870(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x48,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b8b0 */
GEN_OWN GEN_FRAME uint F_00a2b8b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2b8b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x65;
}

/* ref: FUN_00a2b8c0 */
GEN_OWN GEN_FRAME uint F_00a2b8c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2b8c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2b8d0 */
GEN_OWN GEN_FRAME uint F_00a2b8d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2b8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00a2b8e0 */
GEN_OWN GEN_FRAME uint F_00a2b8e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2b8e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00a2b8f0 */
GEN_OWN GEN_FRAME uint F_00a2b8f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2b8f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00a2b920 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2b920(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x68,0x2c4);
  return (uint)uVar1;
}

/* ref: FUN_00a2b940 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2b940(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x2c4);
  return uVar1;
}

/* ref: FUN_00a2b980 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2b980(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2b980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x2c4);
  return uVar1;
}

/* ref: FUN_00a2b9b0 */
GEN_OWN GEN_FRAME uint F_00a2b9b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2b9b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xa8;
}

/* ref: FUN_00a2b9c0 */
GEN_OWN GEN_FRAME uint F_00a2b9c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2b9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xa9;
}

/* ref: FUN_00a2b9d0 */
GEN_OWN GEN_FRAME uint F_00a2b9d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2b9d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2b9e0 */
GEN_OWN GEN_FRAME uint F_00a2b9e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2b9e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00a2b9f0 */
GEN_OWN GEN_FRAME uint F_00a2b9f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2b9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00a2ba00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2ba00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2ba00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xac,param_2,0x2c4);
  return uVar1;
}

/* ref: FUN_00a2ba30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2ba30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2ba30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2ba40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a2ba40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2ba40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a2ba90 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2ba90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2ba90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x2c4);
  return uVar1;
}

/* ref: FUN_00a2bad0 */
GEN_OWN GEN_FRAME uint F_00a2bad0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x58;
}

/* ref: FUN_00a2bae0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2bae0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2bae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x5c,param_2,0x2c4);
  return uVar1;
}

/* ref: FUN_00a2bb00 */
GEN_OWN GEN_FRAME uint F_00a2bb00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bb00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x44;
}

/* ref: FUN_00a2bb10 */
GEN_OWN GEN_FRAME uint F_00a2bb10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bb10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x45;
}

/* ref: FUN_00a2bb20 */
GEN_OWN GEN_FRAME uint F_00a2bb20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bb20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00a2bb30 */
GEN_OWN GEN_FRAME uint F_00a2bb30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bb30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00a2bb40 */
GEN_OWN GEN_FRAME uint F_00a2bb40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bb40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00a2bb50 */
GEN_OWN GEN_FRAME uint F_00a2bb50(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bb50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x45)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x45)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00a2bb70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2bb70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2bb70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x48,param_2,0x2c4);
  return uVar1;
}

/* ref: FUN_00a2bba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2bba0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2bba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2bbb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2bbb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2bbb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2bbc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2bbc0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2bbc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2bbd0 */
GEN_OWN GEN_FRAME uint F_00a2bbd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bbd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 100;
}

/* ref: FUN_00a2bbe0 */
GEN_OWN GEN_FRAME uint F_00a2bbe0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bbe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x65)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x65)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00a2bc00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2bc00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2bc00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x68,param_2,0x2c4);
  return uVar1;
}

/* ref: FUN_00a2bc20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2bc20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2bc20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2bc30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2bc30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2bc30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2bc40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2bc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2bc40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00a2bc60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2bc60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2bc60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2bc70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2bc70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2bc70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2bc90 */
GEN_OWN GEN_FRAME uint F_00a2bc90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bc90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0xa9)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0xa9)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00a2bcc0 */
GEN_OWN GEN_FRAME uint F_00a2bcc0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bcc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0xa9)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0xa9)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00a2bcf0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2bcf0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2bcf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x2c4);
  return uVar1;
}

/* ref: FUN_00a2bd20 */
GEN_OWN GEN_FRAME uint F_00a2bd20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bd20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x59)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x59)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00a2bd40 */
GEN_OWN GEN_FRAME uint F_00a2bd40(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bd40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x59)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x59)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00a2bd90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2bd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2bd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x45))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP((uVar2 + 4))) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = ((uint *)GEN_TOP(param_1[1]));
  if (param_1 == ((uint *)GEN_TOP(puVar1[2]))) {
    puVar1[2] = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00a2bdf0 */
GEN_OWN GEN_FRAME uint F_00a2bdf0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bdf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x45)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x45)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00a2be30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2be30(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2be30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2be50 */
GEN_OWN GEN_FRAME uint F_00a2be50(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2be50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x65)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x65)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00a2beb0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a2beb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2beb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0xa9))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0xa9))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0xa9)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (piVar5 = piVar4, cVar1 == '\0') {
        piVar4 = ((int *)GEN_TOP(*piVar5));
        cVar1 = *((char *)GEN_TOP(((int)piVar4 + 0xa9)));
        piVar3 = piVar5;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0xa9)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0xa9)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00a2bf10 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a2bf10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2bf10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x59))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x59))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x59)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x59)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x59)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x59)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00a2bf60 */
GEN_OWN GEN_FRAME uint F_00a2bf60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bf60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2bf70 */
GEN_OWN GEN_FRAME uint F_00a2bf70(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bf70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2bf80 */
GEN_OWN GEN_FRAME uint F_00a2bf80(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bf80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2bf90 */
GEN_OWN GEN_FRAME uint F_00a2bf90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bf90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2bfb0 */
GEN_OWN GEN_FRAME uint F_00a2bfb0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bfb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2bfc0 */
GEN_OWN GEN_FRAME uint F_00a2bfc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bfc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2bfd0 */
GEN_OWN GEN_FRAME uint F_00a2bfd0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bfd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2bfe0 */
GEN_OWN GEN_FRAME uint F_00a2bfe0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bfe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2bff0 */
GEN_OWN GEN_FRAME uint F_00a2bff0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2bff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c020 */
GEN_OWN GEN_FRAME uint F_00a2c020(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c050 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2c050(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2c050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00a2c070 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2c070(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2c070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00a2c090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2c090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa2c090u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  uint uVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 0x10))) < param_1) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10))) - param_1;
  uVar2 = param_2;
  if (uVar1 < param_2) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2;
  if (param_4 <= uVar2) {
    uVar1 = param_4;
  }
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    this = *(undefined * PTR32 *)this;
  }
  uVar1 = F_0040d320((int)this + param_1,param_3,uVar1);
  if (uVar1 == 0) {
    if (uVar2 < param_4) {
      return 0xffffffff;
    }
    uVar1 = (uint)(uVar2 != param_4);
  }
  return uVar1;
}

/* ref: FUN_00a2c120 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2c120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2c120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0xa9))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0xa9))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0xa9))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0xa9))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0xa9)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0xa9)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0xa9))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00a2c1c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2c1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2c1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x59))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x59))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x59))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x59))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x59)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x59)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x59))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00a2c220 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2c220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2c220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x45))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x45))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x45))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x45))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x45)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x45)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x45))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00a2c290 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2c290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2c290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x65))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x65))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x65))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x65))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x65)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x65)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x65))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00a2c2f0 */
GEN_OWN GEN_FRAME uint F_00a2c2f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c300 */
GEN_OWN GEN_FRAME uint F_00a2c300(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2c310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2c310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2c340 */
GEN_OWN GEN_FRAME uint F_00a2c340(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c350 */
GEN_OWN GEN_FRAME uint F_00a2c350(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2c360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2c360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2c390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2c390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2c390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2c3c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2c3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2c3c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2c3f0 */
GEN_OWN GEN_FRAME uint F_00a2c3f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c3f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2c400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2c400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2c430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2c430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2c430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2c460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2c460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2c460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2c490 */
GEN_OWN GEN_FRAME uint F_00a2c490(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c4a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2c4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2c4a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2c4d0 */
GEN_OWN GEN_FRAME uint F_00a2c4d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c4d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c4e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2c4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2c4e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2c510 */
GEN_OWN GEN_FRAME uint F_00a2c510(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c520 */
GEN_OWN GEN_FRAME uint F_00a2c520(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c530 */
GEN_OWN GEN_FRAME uint F_00a2c530(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c540 */
GEN_OWN GEN_FRAME uint F_00a2c540(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c550 */
GEN_OWN GEN_FRAME uint F_00a2c550(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2c560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2c560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2c580 */
GEN_OWN GEN_FRAME uint F_00a2c580(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c5a0 */
GEN_OWN GEN_FRAME byte F_00a2c5a0(void)
{
  GEN_ENTER(0xa2c5a0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00a2c5b0 */
GEN_OWN GEN_FRAME byte F_00a2c5b0(void)
{
  GEN_ENTER(0xa2c5b0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00a2c5c0 */
GEN_OWN GEN_FRAME uint F_00a2c5c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c5c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c5d0 */
GEN_OWN GEN_FRAME uint F_00a2c5d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2c5d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00a2c630 */
GEN_OWN GEN_FRAME uint F_00a2c630(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c640 */
GEN_OWN GEN_FRAME uint F_00a2c640(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c650 */
GEN_OWN GEN_FRAME uint F_00a2c650(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c660 */
GEN_OWN GEN_FRAME uint F_00a2c660(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c670 */
GEN_OWN GEN_FRAME uint F_00a2c670(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2c750(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2c750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a2c760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2c760(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2c760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a2c770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2c770(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2c770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2c780 */
GEN_OWN GEN_FRAME uint F_00a2c780(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c7a0 */
GEN_OWN GEN_FRAME uint F_00a2c7a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c7a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c7b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2c7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2c7b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2c7d0 */
GEN_OWN GEN_FRAME uint F_00a2c7d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c7d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c7e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2c7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2c7e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2c800 */
GEN_OWN GEN_FRAME uint F_00a2c800(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2c810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2c810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2c830 */
GEN_OWN GEN_FRAME uint F_00a2c830(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2c840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2c840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2c860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2c860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2c860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  puVar2 = ((undefined4 *)GEN_TOP((param_1 + 0x54)));
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2c890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2c890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2c890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  return (uint)this;
}

/* ref: FUN_00a2c8b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2c8b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2c8b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00a2c8e0 */
GEN_OWN GEN_FRAME uint F_00a2c8e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2c8e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a2c8f0 */
GEN_OWN GEN_FRAME byte F_00a2c8f0(void)
{
  GEN_ENTER(0xa2c8f0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00a2c900 */
GEN_OWN GEN_FRAME byte F_00a2c900(void)
{
  GEN_ENTER(0xa2c900u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00a2c980 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2c980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2c980u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2c990 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2c990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2c990u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2c9a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2c9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2c9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x6c))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2c9b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2c9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2c9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2c9c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2c9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2c9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x8c))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2c9d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2c9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2c9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2c9e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2c9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2c9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x9c))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2c9f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2c9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2c9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2ca00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2ca00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2ca00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2ca10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2ca10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2ca10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2ca20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2ca20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2ca20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2ca30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2ca30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2ca30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x80))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2ca40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2ca40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2ca40u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2ca50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2ca50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2ca50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x90))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2ca60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2ca60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2ca60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2ca70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2ca70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2ca70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2ca80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2ca80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2ca80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2ca90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2ca90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2ca90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x54))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2caa0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2caa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2caa0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cab0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2cab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2cab0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x74))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cac0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2cac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2cac0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x84))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cad0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2cad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2cad0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cae0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2cae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2cae0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x94))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2caf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2caf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2caf0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cb00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2cb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2cb00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cb10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2cb10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2cb10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cb20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2cb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2cb20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cb30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2cb30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2cb30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cb40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2cb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2cb40u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x78))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cb50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2cb50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2cb50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cb60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2cb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2cb60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cb70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2cb70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2cb70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x98))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cb80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2cb80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa2cb80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a2cb90 */
GEN_OWN GEN_FRAME uint F_00a2cb90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2cb90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  if (param_1 != 0) {
    ((int *)(gen_frame + 0x0))[0] = param_1;
    ((int *)(gen_frame + 0x0))[1] = 0;
    F_00c4f4ca(&REFG(undefined4, 0x14a2ab0),((int *)(gen_frame + 0x0)));
    return 0x14a2ab0;
  }
  return 0x14a2ad4;
}

/* ref: Component::Text::Localize::NounCh::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2cbf0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2cbf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10e3f0c));
  if (param_1[4] != 0) {
    F_00406b30(param_1[4]);
    param_1[4] = 0;
  }
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::Text::Localize::NounDe::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2cc30(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2cc30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00a211b0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::Text::Localize::NounEn::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2cc60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2cc60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10e3f24));
  if (param_1[4] != 0) {
    F_00406b30(param_1[4]);
    param_1[4] = 0;
  }
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::Text::Localize::NounFr::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2cca0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2cca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10e3f30));
  if (param_1[4] != 0) {
    F_00406b30(param_1[4]);
    param_1[4] = 0;
  }
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::Text::Localize::NounJa::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2cce0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2cce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10e3f3c));
  if (param_1[4] != 0) {
    F_00406b30(param_1[4]);
    param_1[4] = 0;
  }
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10e3f00));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a2cd20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a2cd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2cd20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00a2cd40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2cd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2cd40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    return param_1 + *(int *)this;
  }
  return (int)this + param_1;
}

/* ref: FUN_00a2cd70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a2cd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2cd70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00a2cd90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a2cd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2cd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00a2cdb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a2cdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2cdb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00a2ce10 */
GEN_OWN GEN_FRAME uint F_00a2ce10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2ce10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00a2ce30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2ce30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa2ce30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  undefined * pvVar1;
  undefined * pvVar2;
  uint uVar3;
  gen_size32 _MaxCount;
  
  if ((param_3 != 0) || (uVar3 = param_2, *((uint *)GEN_TOP(((int)this + 0x10))) < param_2)) {
    if ((param_2 < *((uint *)GEN_TOP(((int)this + 0x10)))) &&
       (uVar3 = *((uint *)GEN_TOP(((int)this + 0x10))) - param_2, param_3 <= uVar3)) {
      _MaxCount = uVar3 + (1 - param_3);
      pvVar2 = this;
      if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
        pvVar2 = *(undefined * PTR32 *)this;
      }
      pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + param_2)));
      pvVar1 = F_00c48f80(pvVar2,(int)*param_1,_MaxCount);
      while (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_0040d320(pvVar1,param_1,param_3);
        if (uVar3 == 0) {
          if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
            this = *(undefined * PTR32 *)this;
          }
          return (int)pvVar1 - (int)this;
        }
        _MaxCount = (int)pvVar2 + ((_MaxCount - 1) - (int)pvVar1);
        pvVar2 = ((undefined *)GEN_TOP(((int)pvVar1 + 1)));
        pvVar1 = F_00c48f80(pvVar2,(int)*param_1,_MaxCount);
      }
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

/* ref: FUN_00a2cee0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2cee0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2cee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos_00a2cef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2cef0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2cef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  in_ecx[4] = param_2;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = ((undefined4 *)GEN_TOP(*in_ecx));
  }
  *((undefined1 *)GEN_TOP(((int)in_ecx + param_2))) = 0;
  return param_2;
}

/* ref: FUN_00a2cf10 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a2cf10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2cf10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 uVar1;
  
  if ((param_2 != '\0') && (0xf < (uint)param_1[5])) {
    uVar1 = *param_1;
    if (param_3 != 0) {
      F_00c46aa0(param_1,uVar1,param_3);
    }
    F_00429760(uVar1,param_1[5] + 1,0x2c4);
  }
  param_1[4] = param_3;
  param_1[5] = 0xf;
  *((undefined1 *)GEN_TOP((param_3 + (int)param_1))) = 0;
  return;
}

/* ref: FUN_00a2cff0 */
GEN_OWN GEN_FRAME uint F_00a2cff0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2cff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00a2d050 */
GEN_OWN GEN_FRAME uint F_00a2d050(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2d050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00a2d0c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2d0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_00a2d100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2d100u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a2d130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d130(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2d130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2d140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2d140u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a2d1e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2d1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x1c;
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

/* ref: FUN_00a2d230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2d230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_00a2d260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d260(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2d260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2d270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d270(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2d270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2d290 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a2d290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2d290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x45))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x45))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x45)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x45)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x45)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x45)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00a2d2e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2d2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x65)));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3 GEN_EDX_FWD,param_1);
    if (bVar3 == 0) {
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0x65)));
  }
  return (uint)puVar2;
}

/* ref: FUN_00a2d320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d320(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2d320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2d330 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a2d330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2d330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x65))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x65))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x65)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x65)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x65)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x65)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00a2d380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d380(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2d380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2d390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2d390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00a2d3b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d3b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2d3b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2d3c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d3c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2d3c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2d3d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d3d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2d3d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2d420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2d420u, gen_a0, gen_a1, gen_a2, 0u);
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
  uVar4 = F_004296a0(uVar5 + 1,0,0x2c4);
  if (param_2 != 0) {
    pvVar3 = this;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(uVar4,pvVar3,param_2);
  }
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    F_00429760(*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 0x14))) + 1,0x2c4);
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

/* ref: FUN_00a2d500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d500(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2d500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  return *in_ecx - *param_2;
}

/* ref: FUN_00a2d520 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a2d520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2d520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00a2d540 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a2d540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2d540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00a2d560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d560(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2d560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2d570 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a2d570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2d570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00a2d590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2d590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0xa9))) == '\0') {
    *((int *)GEN_TOP((*piVar2 + 4))) = param_1;
  }
  piVar2[1] = *((int *)GEN_TOP((param_1 + 4)));
  if (param_1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00a2d5f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2d5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0xa9))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP((uVar2 + 4))) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = ((uint *)GEN_TOP(param_1[1]));
  if (param_1 == ((uint *)GEN_TOP(puVar1[2]))) {
    puVar1[2] = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00a2d650 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2d650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2d650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a2beb0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a2d660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2d660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x59))) == '\0') {
    *((int *)GEN_TOP((*piVar2 + 4))) = param_1;
  }
  piVar2[1] = *((int *)GEN_TOP((param_1 + 4)));
  if (param_1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00a2d6c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2d6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x59))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP((uVar2 + 4))) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = ((uint *)GEN_TOP(param_1[1]));
  if (param_1 == ((uint *)GEN_TOP(puVar1[2]))) {
    puVar1[2] = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00a2d720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2d720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x45))) == '\0') {
    *((int *)GEN_TOP((*piVar2 + 4))) = param_1;
  }
  piVar2[1] = *((int *)GEN_TOP((param_1 + 4)));
  if (param_1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00a2d780 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2d780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2d780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a2bf10(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a2d790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2d790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x65))) == '\0') {
    *((int *)GEN_TOP((*piVar2 + 4))) = param_1;
  }
  piVar2[1] = *((int *)GEN_TOP((param_1 + 4)));
  if (param_1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00a2d7f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2d7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x65))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP((uVar2 + 4))) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = ((uint *)GEN_TOP(param_1[1]));
  if (param_1 == ((uint *)GEN_TOP(puVar1[2]))) {
    puVar1[2] = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00a2d850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2d850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2d880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2d880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2d8b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2d8b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2d8e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2d8e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2d910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2d910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2d940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2d940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2d970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2d970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2d9a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2d9a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2d9d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2d9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2d9d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2da00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2da00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2da00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2da20 */
GEN_OWN GEN_FRAME uint F_00a2da20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2da20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00a2da40 */
GEN_OWN GEN_FRAME uint F_00a2da40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2da40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00a2da60 */
GEN_OWN GEN_FRAME uint F_00a2da60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2da60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00a2da80 */
GEN_OWN GEN_FRAME uint F_00a2da80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2da80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00a2daa0 */
GEN_OWN GEN_FRAME uint F_00a2daa0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2daa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00a2db00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2db00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2db00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = F_00a2c090(this GEN_EDX_FWD,0,*((undefined4 *)GEN_TOP(((int)this + 0x10))),puVar1,param_1[4]);
  return uVar2;
}

/* ref: FUN_00a2db30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2db30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2db30u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_00a2c090(this GEN_EDX_FWD,0,*((undefined4 *)GEN_TOP(((int)this + 0x10))),param_1,
                       (int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00a2db70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2db70(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2db70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a2dba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2dba0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2dba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a2dbd0 */
GEN_OWN GEN_FRAME uint F_00a2dbd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2dbd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00a2dbf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2dbf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2dbf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2dc10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2dc10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2dc10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a2c120(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a2dc40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2dc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2dc40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2dc60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2dc60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2dc60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a2c1c0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a2dc70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2dc70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2dc70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2dc90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2dc90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2dc90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a2c220(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a2dcb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2dcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2dcb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a2c290(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a2dcc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2dcc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2dcc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2dce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2dce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2dce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2dd00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2dd00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2dd00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2dd20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2dd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2dd20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2dd40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2dd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2dd40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2dd60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2dd60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2dd60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a2dd70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2dd70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2dd70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a2dd80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a2dd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2dd80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 4,0,0x2c4);
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 4 + uVar1;
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00a2dde0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2dde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2dde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  puVar2 = ((undefined4 *)GEN_TOP((param_1 + 0x54)));
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x54)));
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a2de10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2de10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2de10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  return (uint)this;
}

/* ref: FUN_00a2de30 */
GEN_OWN GEN_FRAME uint F_00a2de30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2de30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00a2de60 */
GEN_OWN GEN_FRAME unsigned int F_00a2de60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2de60u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a2deb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a2deb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2deb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00a2ded0 */
GEN_OWN GEN_FRAME uint F_00a2ded0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2ded0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00a2df40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2df40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2df40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 + 1,0x2c4);
    uVar1 = (uint)uVar2;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  return uVar1;
}

/* ref: FUN_00a2df90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2df90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2df90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  uVar2 = F_00a2ce30(this GEN_EDX_FWD,puVar1,param_2,param_1[4]);
  return uVar2;
}

/* ref: FUN_00a2dff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2dff0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2dff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a2e000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e000(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a2e010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e010(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a2e020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e020(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a2e050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e050(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2e050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2e060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e060(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  if (0xf < (uint)in_ecx[5]) {
    *param_2 = in_ecx[4] + *in_ecx;
    return (uint)param_2;
  }
  *param_2 = in_ecx[4] + (int)in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a2e090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e090(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a2e0a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e0a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a2e0b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a2e0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 0x1c,0,0x2c4);
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x1c + uVar1;
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00a2e150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e150(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2e150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2e160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e160(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2e160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2e180 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2e180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2e180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a2d290(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a2e1b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e1b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2e1b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a2e1c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2e1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2e1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a2d330(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a2e1d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2e1d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00a2e1f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2e1f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a2e210 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2e210(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a2e230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e230(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a2e250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0xa9)));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3 GEN_EDX_FWD,param_1);
    if (bVar3 == 0) {
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0xa9)));
  }
  return (uint)puVar2;
}

/* ref: FUN_00a2e2f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e2f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = ((undefined4 *)GEN_TOP(*in_ecx));
  }
  *param_2 = in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a2e310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e310(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2e310u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_00a2d420(param_1 GEN_EDX_ARG,param_2,param_1[4]);
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
      F_00429760(uVar2,param_1[5] + 1,0x2c4);
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

/* ref: FUN_00a2e3d0 */
GEN_OWN GEN_FRAME uint F_00a2e3d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 == 0) {
    return 0;
  }
  return param_1 - param_2;
}

/* ref: FUN_00a2e3f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2e3f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a2e410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e410(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a2e4f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a2e4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00a2e510 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a2e510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00a2e530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e530(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2e530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *param_2 = *in_ecx + param_3;
  return (uint)param_2;
}

/* ref: FUN_00a2e550 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a2e550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00a2e570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2e570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00a2beb0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00a2e590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2e590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00a2bf10(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00a2e5b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2e5b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00a2d290(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00a2e5d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2e5d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00a2d330(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00a2e600 */
GEN_OWN GEN_FRAME uint F_00a2e600(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00a2c090(param_1 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))),param_2,
                       (int)pcVar2 - (int)(param_2 + 1));
  return (uint)(uVar3 == 0);
}

/* ref: FUN_00a2e640 */
GEN_OWN GEN_FRAME uint F_00a2e640(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_2));
  }
  uVar2 = F_00a2c090(param_1 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))),puVar1,param_2[4]);
  return (uint)(uVar2 == 0);
}

/* ref: FUN_00a2e670 */
GEN_OWN GEN_FRAME uint F_00a2e670(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00a2c090(param_1 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))),param_2,
                       (int)pcVar2 - (int)(param_2 + 1));
  return (uint)(uVar3 != 0);
}

/* ref: FUN_00a2e6b0 */
GEN_OWN GEN_FRAME byte F_00a2e6b0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_2));
  }
  uVar2 = F_00a2c090(param_1 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)param_1 + 0x10))),puVar1,param_2[4]);
  return (int)uVar2 < 0;
}

/* ref: FUN_00a2e6e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2e6e0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2e6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a2e6f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a2e6f0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa2e6f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a2e700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2e700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2e720 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2e720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2e720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a2c120(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a2e730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2e730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2e750 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2e750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2e750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a2c1c0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a2e760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2e760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2e780 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2e780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2e780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a2c220(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a2e790 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a2e790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa2e790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a2c290(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a2e7a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a2e7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa2e7a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a2e7c0 */
GEN_OWN GEN_FRAME unsigned int F_00a2e7c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e7c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a2e7f0 */
GEN_OWN GEN_FRAME unsigned int F_00a2e7f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa2e7f0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a2e820 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a2e820(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa2e820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    puVar2 = ((undefined4 *)GEN_TOP((param_2 + 0x54)));
    puVar3 = ((undefined4 *)GEN_TOP(((int)param_1 + 0x54)));
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

