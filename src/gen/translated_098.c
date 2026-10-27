#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Apricot::Engine::Data::Runtime::Document::vf20 */
uint F_0097af00(unsigned int gen_a0)
{
  GEN_ENTER(0x97af00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x94);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf21 */
uint F_0097af10(unsigned int gen_a0)
{
  GEN_ENTER(0x97af10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x95);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf22 */
uint F_0097af20(unsigned int gen_a0)
{
  GEN_ENTER(0x97af20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x96);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf23 */
uint F_0097af30(unsigned int gen_a0)
{
  GEN_ENTER(0x97af30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x97);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf24 */
uint F_0097af40(unsigned int gen_a0)
{
  GEN_ENTER(0x97af40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x98);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf25 */
uint F_0097af50(unsigned int gen_a0)
{
  GEN_ENTER(0x97af50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x99);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf26 */
uint F_0097af60(unsigned int gen_a0)
{
  GEN_ENTER(0x97af60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x9a);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf27 */
uint F_0097af70(unsigned int gen_a0)
{
  GEN_ENTER(0x97af70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x9b);
}

/* ref: FUN_0097afb0 */
unsigned int F_0097afb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97afb0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined1 *)((int)param_3 + 0x25) = 1;
  puVar3 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = *puVar3;
      puVar2 = puVar3 + 2;
      if (uVar1 < 0x4950624d) {
        if (uVar1 == 0x4950624c) {
          uVar1 = ((uint)(*puVar2 != 0) << 5 ^ param_3[0x10]) & 0x20;
        }
        else {
          if (uVar1 < 0x43725073) {
            if (uVar1 == 0x43725072) {
              param_3[3] = *puVar2;
            }
            else if (uVar1 < 0x4249415a) {
              if (uVar1 == 0x42494159) {
                param_3[6] = *puVar2;
              }
              else if (uVar1 == 0x624744) {
                *(bool *)(param_3 + 9) = *puVar2 != 0;
              }
              else if (uVar1 == 0x42494158) {
                param_3[5] = *puVar2;
              }
            }
            else if (uVar1 == 0x4249415a) {
              param_3[7] = *puVar2;
            }
            else if (uVar1 == 0x4372436e) {
              param_3[2] = *puVar2;
            }
            goto LAB_0097b1d5;
          }
          if (uVar1 < 0x49436251) {
            if (uVar1 != 0x49436250) {
              if (uVar1 == 0x4372546d) {
                param_3[1] = *puVar2;
              }
              else if (uVar1 == 0x47656e44) {
                param_3[8] = *puVar2;
              }
              goto LAB_0097b1d5;
            }
            uVar1 = ((uint)(*puVar2 != 0) * 8 ^ param_3[0x10]) & 8;
          }
          else if (uVar1 == 0x49436252) {
            uVar1 = ((uint)(*puVar2 != 0) * 4 ^ param_3[0x10]) & 4;
          }
          else {
            if (uVar1 != 0x49436253) goto LAB_0097b1d5;
            uVar1 = ((uint)(*puVar2 != 0) * 2 ^ param_3[0x10]) & 2;
          }
        }
LAB_0097b1d2: ;
        param_3[0x10] = param_3[0x10] ^ uVar1;
      }
      else if (uVar1 < 0x50494370) {
        if (uVar1 == 0x5049436f) {
          param_3[0xc] = *puVar2;
        }
        else if (uVar1 < 0x4f767253) {
          if (uVar1 == 0x4f767252) {
            param_3[0xf] = *puVar2;
          }
          else {
            if (uVar1 == 0x49506256) {
              uVar1 = ((uint)(*puVar2 != 0) << 4 ^ param_3[0x10]) & 0x10;
              goto LAB_0097b1d2;
            }
            if (uVar1 == 0x4c6f4472) {
              param_3[10] = (int)(char)*puVar2;
            }
          }
        }
        else if (uVar1 == 0x4f767256) {
          param_3[0xe] = *puVar2;
        }
        else if (uVar1 == 0x50494364) {
          param_3[0xb] = *puVar2;
        }
      }
      else {
        if (0x54677442 < uVar1) {
          if (uVar1 == 0x624f7672) {
            uVar1 = ((uint)(*puVar2 != 0) << 6 ^ param_3[0x10]) & 0x40;
          }
          else {
            if (uVar1 != 0x6253744e) goto LAB_0097b1d5;
            uVar1 = ((uint)(*puVar2 != 0) ^ param_3[0x10]) & 1;
          }
          goto LAB_0097b1d2;
        }
        if (uVar1 == 0x54677442) {
          *param_3 = *puVar2;
        }
        else if (uVar1 == 0x50724c6b) {
          param_3[4] = *puVar2;
        }
        else if (uVar1 == 0x53744672) {
          param_3[0xd] = *puVar2;
        }
      }
LAB_0097b1d5: ;
      uVar4 = uVar4 + 8 + (puVar3[1] + 3 & 0xfffffffc);
      puVar3 = ((uint *)GEN_TOP(((int)puVar2 + (puVar3[1] + 3 & 0xfffffffc))));
    } while (uVar4 < param_2);
  }
  switch((unsigned int)(uintptr_t)(param_3[0xb])) {
  case 4: ;
    param_3[0x10] = param_3[0x10] | 0x80;
    param_3[0xb] = 2;
    break;
  case 5: ;
    param_3[0x10] = param_3[0x10] | 0x80;
    param_3[0xb] = 3;
    break;
  case 6: ;
    param_3[0x10] = param_3[0x10] | 0x80;
    param_3[0xb] = 0;
    break;
  case 7: ;
    param_3[0x10] = param_3[0x10] | 0x80;
    param_3[0xb] = 1;
    break;
  default: ;
    param_3[0x10] = param_3[0x10] & 0xffffff7f;
  }
  if (param_3[0xb] == 0) {
    param_3[0x10] = param_3[0x10] & 0xfffffff1;
  }
  else if (param_3[0xb] - 2 < 2) {
    param_3[0x10] = param_3[0x10] | 0xe;
    return 0;
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf1 */
unsigned int F_0097b280(void)
{
  GEN_ENTER(0x97b280u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097b2b0 */
unsigned int F_0097b2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x97b2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ddc54));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd1f4));
  return 0;
}

/* ref: FUN_0097b2f0 */
unsigned int F_0097b2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97b2f0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  uVar1 = 0;
  piVar2 = param_1;
  iVar3 = REFG(int, 0x14a09d4);
  if (param_2 != 0) {
    do {
      if ((*piVar2 == 0x56456d74) || (*piVar2 == 0x564e756d)) {
        iVar3 = (iVar3 + 0xfU & 0xfffffff0) + (piVar2[1] + 0xfU & 0xfffffff0);
        REFG(int, 0x14a09d4) = iVar3;
      }
      uVar1 = uVar1 + 8 + (piVar2[1] + 3U & 0xfffffffc);
      piVar2 = ((int *)GEN_TOP(((int)piVar2 + (piVar2[1] + 3U & 0xfffffffc) + 8)));
    } while (uVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_0097b390 */
unsigned int F_0097b390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97b390u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = param_1;
  if (param_2 != 0) {
    do {
      if ((*piVar1 == 0x4974436e) || (*piVar1 == 0x5472436e)) {
        REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + (char)piVar1[2] * 4;
      }
      uVar2 = uVar2 + 8 + (piVar1[1] + 3U & 0xfffffffc);
      piVar1 = ((int *)GEN_TOP(((int)(piVar1 + 2) + (piVar1[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_0097b400 */
unsigned int F_0097b400(unsigned int gen_a0)
{
  GEN_ENTER(0x97b400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ddc78));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd200));
  return 0;
}

/* ref: FUN_0097b440 */
unsigned int F_0097b440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x97b440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,param_2,param_4);
    *(uint *)((int)this + 4) = uVar1;
  }
  return 0;
}

/* ref: FUN_0097b4c0 */
unsigned int F_0097b4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97b4c0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  piVar2 = param_1;
  if (param_2 != 0) {
    do {
      piVar1 = piVar2 + 2;
      if (*piVar2 == 0x4370436e) {
        iVar4 = (char)*piVar1 * 0xa4;
LAB_0097b4fc: ;
        REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + (iVar4 + 3U & 0xfffffffc);
      }
      else if (*piVar2 == 0x5449436e) {
        iVar4 = (char)*piVar1 * 0x2a;
        goto LAB_0097b4fc;
      }
      uVar3 = uVar3 + 8 + (piVar2[1] + 3U & 0xfffffffc);
      piVar2 = ((int *)GEN_TOP(((int)piVar1 + (piVar2[1] + 3U & 0xfffffffc))));
    } while (uVar3 < param_2);
  }
  return 0;
}

/* ref: FUN_0097b530 */
unsigned int F_0097b530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97b530u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = uVar1 + 8 + (*(int *)(iVar2 + 4) + 3U & 0xfffffffc);
      iVar2 = iVar2 + 8 + (*(int *)(iVar2 + 4) + 3U & 0xfffffffc);
    } while (uVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_0097b570 */
unsigned int F_0097b570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97b570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = param_2;
  if (param_3 != 0) {
    do {
      uVar1 = uVar1 + 8 + (*(int *)(iVar2 + 4) + 3U & 0xfffffffc);
      iVar2 = iVar2 + 8 + (*(int *)(iVar2 + 4) + 3U & 0xfffffffc);
    } while (uVar1 < param_3);
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Axis2Parameter::vf2 */
uint F_0097b5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97b5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x14) + 0x14))))(this + 0x14);
  *param_1 = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x1c) + 0x14))))(this + 0x1c);
  param_1[1] = (char)uVar1;
  return uVar1;
}

/* ref: Apricot::Engine::Data::Runtime::Axis2Parameter::vf1 */
uint F_0097b620(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x97b620u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0ac4) + *(char *)(param_1 + 0x26) * 8))
                    (*(int *)(&REFG(undefined, 0x14a0ac8) + *(char *)(param_1 + 0x26) * 8) + param_1);
  return uVar1;
}

/* ref: FUN_0097b660 */
uint F_0097b660(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x97b660u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(char *)(param_1 + 0x24) * 8;
  uVar2 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0ad4) + iVar1))(*(int *)(&REFG(undefined, 0x14a0ad8) + iVar1) + param_1,param_5);
  return uVar2;
}

/* ref: FUN_0097b6a0 */
uint F_0097b6a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97b6a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int iVar1;
  float fVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))))(param_1 + 4);
  iVar1 = *(int *)(param_1 + 0xc);
  *param_2 = (float)extraout_ST0;
  extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(iVar1 + 0x10))
                    (param_1 + 0xc,(undefined4)gen_fl2bits(param_3),(undefined4)gen_fl2bits(param_4)
                     ,(undefined4)gen_fl2bits((float)(float10)0)); fVar2 = extraout_ST0_00;
  param_2[1] = (float)extraout_ST0_00;
  return (uint)gen_fl2bits(fVar2);
}

/* ref: FUN_0097b700 */
uint F_0097b700(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97b700u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))))(param_1 + 4);
  *param_2 = (float)extraout_ST0;
  param_2[1] = (float)extraout_ST0;
  return (uint)param_2;
}

/* ref: FUN_0097b740 */
uint F_0097b740(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97b740u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x10))))(param_1 + 0xc);
  param_2[1] = (float)extraout_ST0;
  *param_2 = (float)extraout_ST0;
  return (uint)param_2;
}

/* ref: Apricot::Engine::Data::Runtime::Axis3Parameter::vf4 */
uint F_0097b780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97b780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x20) + 0x14))))(this + 0x20);
  *param_1 = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 0x14))))(this + 0x28);
  param_1[1] = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x30) + 0x14))))(this + 0x30);
  param_1[2] = (char)uVar1;
  return uVar1;
}

/* ref: FUN_0097b7c0 */
uint F_0097b7c0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x97b7c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(uint * PTR32 *)(param_1 + 4) >> 1 & 0xf) * 8;
  uVar2 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0b00) + iVar1))(*(int *)(&REFG(undefined, 0x14a0b04) + iVar1) + param_1,param_6);
  return uVar2;
}

/* ref: FUN_0097b810 */
uint F_0097b810(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x97b810u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  int iVar1;
  float fVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 8) + 0x10))))(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x10);
  *param_2 = (float)extraout_ST0;
  extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(iVar1 + 0x10))
            (param_1 + 0x10,(undefined4)gen_fl2bits(param_3),(undefined4)gen_fl2bits(param_4),
             (undefined4)gen_fl2bits(param_5));
  iVar1 = *(int *)(param_1 + 0x18);
  param_2[1] = (float)extraout_ST0_00;
  extraout_ST0_01 = ((gen_fcode *)*(gen_code32 *)(iVar1 + 0x10))
                    (param_1 + 0x18,(undefined4)gen_fl2bits(param_3),
                     (undefined4)gen_fl2bits(param_4),(undefined4)gen_fl2bits(param_5)); fVar2 = extraout_ST0_01;
  param_2[2] = (float)extraout_ST0_01;
  return (uint)gen_fl2bits(fVar2);
}

/* ref: FUN_0097b890 */
uint F_0097b890(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x97b890u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float fVar1;
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 8) + 0x10))))(param_1 + 8);
  fVar1 = (float)extraout_ST0;
  *param_2 = fVar1;
  param_2[1] = fVar1;
  param_2[2] = fVar1;
  return (uint)param_2;
}

/* ref: FUN_0097b8d0 */
uint F_0097b8d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x97b8d0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  code * pcVar1;
  float fVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 8) + 0x10))))(param_1 + 8);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x18) + 0x10)));
  *param_2 = (float)extraout_ST0;
  param_2[1] = (float)extraout_ST0;
  extraout_ST0_00 = (*pcVar1)(param_1 + 0x18,(undefined4)gen_fl2bits(param_3),(undefined4)gen_fl2bits(param_4)
                    ,(undefined4)gen_fl2bits(param_5)); fVar2 = extraout_ST0_00;
  param_2[2] = (float)extraout_ST0_00;
  return (uint)gen_fl2bits(fVar2);
}

/* ref: FUN_0097b940 */
uint F_0097b940(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x97b940u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  code * pcVar1;
  float fVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 8) + 0x10))))(param_1 + 8);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10)));
  *param_2 = (float)extraout_ST0;
  param_2[2] = (float)extraout_ST0;
  extraout_ST0_00 = (*pcVar1)(param_1 + 0x10,(undefined4)gen_fl2bits(param_3),(undefined4)gen_fl2bits(param_4)
                    ,(undefined4)gen_fl2bits(param_5)); fVar2 = extraout_ST0_00;
  param_2[1] = (float)extraout_ST0_00;
  return (uint)gen_fl2bits(fVar2);
}

/* ref: FUN_0097b9b0 */
uint F_0097b9b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x97b9b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float fVar1;
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))))(param_1 + 0x10);
  fVar1 = (float)extraout_ST0;
  param_2[1] = fVar1;
  *param_2 = fVar1;
  param_2[2] = fVar1;
  return (uint)param_2;
}

/* ref: FUN_0097b9f0 */
uint F_0097b9f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x97b9f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  code * pcVar1;
  float fVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))))(param_1 + 0x10);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x18) + 0x10)));
  param_2[1] = (float)extraout_ST0;
  *param_2 = (float)extraout_ST0;
  extraout_ST0_00 = (*pcVar1)(param_1 + 0x18,(undefined4)gen_fl2bits(param_3),(undefined4)gen_fl2bits(param_4)
                    ,(undefined4)gen_fl2bits(param_5)); fVar2 = extraout_ST0_00;
  param_2[2] = (float)extraout_ST0_00;
  return (uint)gen_fl2bits(fVar2);
}

/* ref: FUN_0097ba60 */
uint F_0097ba60(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x97ba60u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  code * pcVar1;
  float fVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))))(param_1 + 0x10);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(param_1 + 8) + 0x10)));
  param_2[1] = (float)extraout_ST0;
  param_2[2] = (float)extraout_ST0;
  extraout_ST0_00 = (*pcVar1)(param_1 + 8,(undefined4)gen_fl2bits(param_3),(undefined4)gen_fl2bits(param_4),
                    (undefined4)gen_fl2bits(param_5)); fVar2 = extraout_ST0_00;
  *param_2 = (float)extraout_ST0_00;
  return (uint)gen_fl2bits(fVar2);
}

/* ref: FUN_0097bad0 */
uint F_0097bad0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x97bad0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float fVar1;
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x18) + 0x10))))(param_1 + 0x18);
  fVar1 = (float)extraout_ST0;
  param_2[2] = fVar1;
  *param_2 = fVar1;
  param_2[1] = fVar1;
  return (uint)param_2;
}

/* ref: FUN_0097bb10 */
uint F_0097bb10(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x97bb10u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  code * pcVar1;
  float fVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x18) + 0x10))))(param_1 + 0x18);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10)));
  param_2[2] = (float)extraout_ST0;
  *param_2 = (float)extraout_ST0;
  extraout_ST0_00 = (*pcVar1)(param_1 + 0x10,(undefined4)gen_fl2bits(param_3),(undefined4)gen_fl2bits(param_4)
                    ,(undefined4)gen_fl2bits(param_5)); fVar2 = extraout_ST0_00;
  param_2[1] = (float)extraout_ST0_00;
  return (uint)gen_fl2bits(fVar2);
}

/* ref: FUN_0097bb80 */
uint F_0097bb80(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x97bb80u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  code * pcVar1;
  float fVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x18) + 0x10))))(param_1 + 0x18);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(param_1 + 8) + 0x10)));
  param_2[2] = (float)extraout_ST0;
  param_2[1] = (float)extraout_ST0;
  extraout_ST0_00 = (*pcVar1)(param_1 + 8,(undefined4)gen_fl2bits(param_3),(undefined4)gen_fl2bits(param_4),
                    (undefined4)gen_fl2bits(param_5)); fVar2 = extraout_ST0_00;
  *param_2 = (float)extraout_ST0_00;
  return (uint)gen_fl2bits(fVar2);
}

/* ref: Apricot::Engine::Data::Runtime::Axis3Parameter::vf3 */
uint F_0097bbf0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x97bbf0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = **(uint * PTR32 *)(param_1 + 4) & 1;
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0aec) + uVar1 * 8))(*(int *)(&REFG(undefined, 0x14a0af0) + uVar1 * 8) + param_1);
  return uVar1;
}

/* ref: Apricot::Engine::Data::Runtime::Axis3Parameter::vf2 */
byte F_0097bc40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x97bc40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 8) + 0xc))))(param_1 + 8,(undefined4)gen_fl2bits(param_2));
  if ((char)uVar1 == '\0') {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0xc))))
                      (param_1 + 0x10,(undefined4)gen_fl2bits(param_2));
    if ((char)uVar1 == '\0') {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x18) + 0xc))))
                        (param_1 + 0x18,(undefined4)gen_fl2bits(param_2));
      if ((char)uVar1 == '\0') {
        uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc))))
                          (param_1 + 0x20,(undefined4)gen_fl2bits((float)(float10)0));
        if ((char)uVar1 == '\0') {
          uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x28) + 0xc))))
                            (param_1 + 0x28,(undefined4)gen_fl2bits((float)(float10)0));
          if ((char)uVar1 == '\0') {
            uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x30) + 0xc))))
                              (param_1 + 0x30,(undefined4)gen_fl2bits((float)(float10)0));
            return (char)uVar1 != '\0';
          }
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_0097bce0 */
uint F_0097bce0(unsigned int gen_a0)
{
  GEN_ENTER(0x97bce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 8))))((int)this + 8);
  bVar3 = (char)uVar2 != '\0';
  if (bVar3) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 2;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc))))
                    ((int)this + 0x10,(undefined4)gen_fl2bits((float)(float10)1));
  bVar4 = (char)uVar2 != '\0';
  if (bVar4) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 4;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x38) + 0xc))))
                    ((int)this + 0x38,(undefined4)gen_fl2bits((float)(float10)0));
  bVar5 = (char)uVar2 != '\0';
  if (bVar5) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 0x10;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x40) + 0xc))))
                    ((int)this + 0x40,(undefined4)gen_fl2bits((float)(float10)0));
  bVar6 = (char)uVar2 != '\0';
  if (bVar6) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 0x20;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x48) + 0xc))))
                    ((int)this + 0x48,(undefined4)gen_fl2bits((float)(float10)0));
  bVar7 = (char)uVar2 != '\0';
  if (bVar7) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 0x40;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x50) + 0xc))))
                    ((int)this + 0x50,(undefined4)gen_fl2bits((float)(float10)0));
  bVar8 = (char)uVar2 != '\0';
  if (bVar8) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 0x80;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))))
                    ((int)this + 0x18,(undefined4)gen_fl2bits((float)(float10)1));
  bVar9 = (char)uVar2 != '\0';
  if (bVar9) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 0x100;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x20) + 0xc))))
                    ((int)this + 0x20,(undefined4)gen_fl2bits((float)(float10)1));
  bVar10 = (char)uVar2 != '\0';
  if (bVar10) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 0x200;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x28) + 0xc))))
                    ((int)this + 0x28,(undefined4)gen_fl2bits((float)(float10)1));
  bVar11 = (char)uVar2 != '\0';
  if (bVar11) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 0x400;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x30) + 0xc))))
                    ((int)this + 0x30,(undefined4)gen_fl2bits((float)(float10)1));
  bVar12 = (char)uVar2 != '\0';
  if (bVar12) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 0x800;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x58) + 0xc))))
                    ((int)this + 0x58,(undefined4)gen_fl2bits((float)(float10)1));
  piVar1 = (int *)((int)this + 0x60);
  if ((char)uVar2 != '\0') {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,(undefined4)gen_fl2bits((float)(float10)0));
    if ((char)uVar2 != '\0') {
      *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 0x3000;
      *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 1;
      return uVar2;
    }
    uVar2 = *(uint *)((int)this + 0x68) & 0xffffdfff | 0x1000;
    *(uint *)((int)this + 0x68) = uVar2;
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 1;
    return uVar2;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,(undefined4)gen_fl2bits((float)(float10)0));
  if ((char)uVar2 != '\0') {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xffffefff | 0x2000;
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 1;
    return uVar2;
  }
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xffffcfff;
  uVar2 = *(uint *)((int)this + 0x68);
  if (bVar12 || (bVar11 ||
                (bVar10 || (bVar9 || (bVar8 || (bVar7 || (bVar6 || (bVar5 || (bVar4 || bVar3))))))))
     ) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 1;
    return uVar2;
  }
  uVar2 = uVar2 & 0xfffffffe;
  *(uint *)((int)this + 0x68) = uVar2;
  return uVar2;
}

/* ref: Apricot::Engine::Data::Runtime::ColorFunctionCurve::vf4 */
uint F_0097be90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97be90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x38) + 0x14))))(this + 0x38);
  *param_1 = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x40) + 0x14))))(this + 0x40);
  param_1[1] = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x48) + 0x14))))(this + 0x48);
  param_1[2] = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x50) + 0x14))))(this + 0x50);
  param_1[3] = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x60) + 0x14))))(this + 0x60);
  param_1[4] = (char)uVar1;
  return uVar1;
}

/* ref: FUN_0097bef0 */
uint F_0097bef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97bef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *param_3 = GEN_FLT_TO(*param_3, REFG(float, 0x1087f04));
  param_3[1] = uVar1;
  param_3[2] = uVar1;
  return (uint)param_3;
}

/* ref: FUN_0097bf10 */
uint F_0097bf10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97bf10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  *(undefined4 *)(param_3 + 0xc) = GEN_FLT_TO(*(undefined4 *)(param_3 + 0xc), REFG(float, 0x1087f04));
  return param_3;
}

/* ref: FUN_0097bf30 */
uint F_0097bf30(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97bf30u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))))(param_1 + 0x10);
  *(float *)(param_4 + 0xc) = (float)extraout_ST0;
  return param_4;
}

/* ref: FUN_0097bf60 */
unsigned int F_0097bf60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97bf60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_0097bf70 */
unsigned int F_0097bf70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97bf70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_0097bf80 */
unsigned int F_0097bf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97bf80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_0097bf90 */
unsigned int F_0097bf90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97bf90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_0097bfa0 */
unsigned int F_0097bfa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97bfa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_0097bfb0 */
uint F_0097bfb0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97bfb0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x18) + 0x10))))(param_1 + 0x18);
  *param_4 = (float)(extraout_ST0 * (float10)*param_4);
  return (uint)param_4;
}

/* ref: FUN_0097bfe0 */
unsigned int F_0097bfe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97bfe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_0097bff0 */
uint F_0097bff0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97bff0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  float fVar1;
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x10))))(param_1 + 0x20); fVar1 = extraout_ST0;
  *(float *)(param_4 + 4) = ((float)GEN_TOF((extraout_ST0 * (float10)*(float *)(param_4 + 4))));
  return (uint)gen_fl2bits(fVar1);
}

/* ref: FUN_0097c030 */
unsigned int F_0097c030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97c030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_0097c040 */
uint F_0097c040(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97c040u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  float fVar1;
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x28) + 0x10))))(param_1 + 0x28); fVar1 = extraout_ST0;
  *(float *)(param_4 + 8) = ((float)GEN_TOF((extraout_ST0 * (float10)*(float *)(param_4 + 8))));
  return (uint)gen_fl2bits(fVar1);
}

/* ref: FUN_0097c080 */
unsigned int F_0097c080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97c080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_0097c090 */
uint F_0097c090(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97c090u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  float fVar1;
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x30) + 0x10))))(param_1 + 0x30); fVar1 = extraout_ST0;
  *(float *)(param_4 + 0xc) = ((float)GEN_TOF((extraout_ST0 * (float10)*(float *)(param_4 + 0xc))));
  return (uint)gen_fl2bits(fVar1);
}

/* ref: FUN_0097c0d0 */
unsigned int F_0097c0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97c0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_0097c0e0 */
uint F_0097c0e0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x97c0e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float10 extraout_ST0;
  float10 fVar1;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x58) + 0x10))))(param_1 + 0x58);
  fVar1 = (float10)(float)extraout_ST0;
  *param_5 = (float)(fVar1 * (float10)*param_5);
  param_5[1] = (float)(fVar1 * (float10)param_5[1]);
  param_5[2] = (float)(fVar1 * (float10)param_5[2]);
  return (uint)param_5;
}

/* ref: Apricot::Engine::Data::Runtime::ColorFunctionCurve::vf2 */
uint F_0097c130(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x97c130u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x68) & 1;
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0b60) + uVar1 * 8))(*(int *)(&REFG(undefined, 0x14a0b64) + uVar1 * 8) + param_1);
  return uVar1;
}

/* ref: Apricot::Engine::Data::Runtime::ColorFunctionCurve::vf3 */
uint F_0097c170(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x97c170u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x68) & 1;
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0b50) + uVar1 * 8))(*(int *)(&REFG(undefined, 0x14a0b54) + uVar1 * 8) + param_1);
  return uVar1;
}

/* ref: FUN_0097c1b0 */
uint F_0097c1b0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x97c1b0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x68) >> 1 & 1;
  ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0b70) + uVar2 * 8))(*(int *)(&REFG(undefined, 0x14a0b74) + uVar2 * 8) + param_1);
  uVar2 = *(uint *)(param_1 + 0x68) >> 2 & 1;
  ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0b80) + uVar2 * 8))
            (*(int *)(&REFG(undefined, 0x14a0b84) + uVar2 * 8) + param_1,(undefined4)gen_fl2bits(param_2),
             (undefined4)gen_fl2bits(param_3),param_5);
  uVar2 = *(uint *)(param_1 + 0x68) >> 4 & 1;
  ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0b90) + uVar2 * 8))
            (*(int *)(&REFG(undefined, 0x14a0b94) + uVar2 * 8) + param_1,(undefined4)gen_fl2bits(param_2),
             (undefined4)gen_fl2bits(param_3),param_4,param_5);
  uVar2 = *(uint *)(param_1 + 0x68) >> 5 & 1;
  ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0ba0) + uVar2 * 8))
            (*(int *)(&REFG(undefined, 0x14a0ba4) + uVar2 * 8) + param_1,(undefined4)gen_fl2bits(param_2),
             (undefined4)gen_fl2bits(param_3),param_4,param_5);
  iVar1 = (*(uint *)(param_1 + 0x68) >> 6 & 1) * 8;
  ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0bb0) + iVar1))
            (*(int *)(&REFG(undefined, 0x14a0bb4) + iVar1) + param_1,(undefined4)gen_fl2bits(param_2),
             (undefined4)gen_fl2bits(param_3),param_4,param_5);
  uVar2 = *(uint *)(param_1 + 0x68) >> 7 & 1;
  ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0bc0) + uVar2 * 8))
            (*(int *)(&REFG(undefined, 0x14a0bc4) + uVar2 * 8) + param_1,(undefined4)gen_fl2bits(param_2),
             (undefined4)gen_fl2bits(param_3),param_4,param_5);
  uVar2 = *(uint *)(param_1 + 0x68) >> 8 & 1;
  ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0bd0) + uVar2 * 8))
            (*(int *)(&REFG(undefined, 0x14a0bd4) + uVar2 * 8) + param_1,(undefined4)gen_fl2bits(param_2),
             (undefined4)gen_fl2bits(param_3),param_5);
  uVar2 = *(uint *)(param_1 + 0x68) >> 9 & 1;
  ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0be0) + uVar2 * 8))
            (*(int *)(&REFG(undefined, 0x14a0be4) + uVar2 * 8) + param_1,(undefined4)gen_fl2bits(param_2),
             (undefined4)gen_fl2bits(param_3),param_5);
  uVar2 = *(uint *)(param_1 + 0x68) >> 10 & 1;
  ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0bf0) + uVar2 * 8))
            (*(int *)(&REFG(undefined, 0x14a0bf4) + uVar2 * 8) + param_1,(undefined4)gen_fl2bits(param_2),
             (undefined4)gen_fl2bits(param_3),param_5);
  iVar1 = (*(uint *)(param_1 + 0x68) >> 0xb & 1) * 8;
  ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c00) + iVar1))
            (*(int *)(&REFG(undefined, 0x14a0c04) + iVar1) + param_1,(undefined4)gen_fl2bits(param_2),
             (undefined4)gen_fl2bits(param_3),param_5);
  uVar2 = *(uint *)(param_1 + 0x68) >> 0xc & 3;
  uVar2 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c10) + uVar2 * 8))
                    (*(int *)(&REFG(undefined, 0x14a0c14) + uVar2 * 8) + param_1,(undefined4)gen_fl2bits(param_2),
                     (undefined4)gen_fl2bits(param_3),param_4,param_5);
  return uVar2;
}

/* ref: FUN_0097c3f0 */
uint F_0097c3f0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x97c3f0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_0097c1b0(param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_0097c440 */
unsigned int F_0097c440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97c440u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  piVar2 = param_1;
  iVar4 = REFG(int, 0x14a09d4);
  if (param_2 != 0) {
    do {
      if ((*piVar2 == 0x4b657943) && (cVar1 = (char)piVar2[2], '\0' < cVar1)) {
        iVar4 = (iVar4 + 0xfU & 0xfffffff0) + (cVar1 * 8 + 0x13U & 0xfffffff0);
        REFG(int, 0x14a09d4) = iVar4;
      }
      uVar3 = uVar3 + 8 + (piVar2[1] + 3U & 0xfffffffc);
      piVar2 = ((int *)GEN_TOP(((int)(piVar2 + 2) + (piVar2[1] + 3U & 0xfffffffc))));
    } while (uVar3 < param_2);
  }
  return 0;
}

/* ref: FUN_0097c4b0 */
uint F_0097c4b0(float gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x97c4b0u, gen_trace_f(gen_a0), gen_a1, gen_a2, gen_a3);
  float param_1 = (float)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar2 = (float10)param_1;
  fVar3 = (float10)(float)(fVar2 * fVar2);
  fVar4 = (float10)(float)(fVar3 * fVar2);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar6 = fVar4 * fVar5;
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  *param_2 = ((float)GEN_TOF(((fVar6 - fVar3 * fVar1) + (float10)REFG(double, 0x1088130))));
  *param_3 = (float)(fVar3 * fVar1 - fVar6);
  *param_4 = ((float)GEN_TOF(((fVar4 - fVar3 * fVar5) + fVar2)));
  *param_5 = (float)(fVar4 - fVar3);
  return (uint)param_5;
}

/* ref: FUN_0097c510 */
float10 F_0097c510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97c510u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 4) + param_2 * 8;
  fVar3 = ((float)GEN_TOF(((float10)(int)*(char *)(iVar1 + 10) * (float10)*(double *)&REFG(undefined, 0x10ddcc8))));
  fVar4 = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xc) - (float10)*(float *)(iVar1 + 4))));
  if (-1 < (int)(param_2 - 1)) {
    pfVar2 = ((float *)GEN_TOP((*(int *)(param_1 + 4) + -4 + param_2 * 8)));
    uVar5 = *(ushort *)(iVar1 + 0x10) & 0x3fff;
    return (float10)((float)GEN_TOF((((float10)fVar4 * (float10)fVar3 +
                            ((float10)*(float *)(iVar1 + 4) - (float10)*pfVar2) *
                            (float10)((float)GEN_TOF(((float10)(int)*(char *)(iVar1 + 0xb) *
                                            (float10)*(double *)&REFG(undefined, 0x10ddcc8))))) *
                           (float10)((float)GEN_TOF(((float10)(int)(uVar5 - (*(ushort *)(iVar1 + 8) & 0x3fff)
                                                          ) /
                                           (float10)(int)(uVar5 - (*(ushort *)(pfVar2 + 1) & 0x3fff)
                                                         )))))));
  }
  return (float10)(float)((float10)fVar4 * (float10)fVar3);
}

/* ref: FUN_0097c5e0 */
float10 F_0097c5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97c5e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  uint * puVar3;
  uint uVar4;
  
  puVar3 = *(uint * PTR32 *)(param_1 + 4);
  fVar1 = ((float)GEN_TOF(((float10)(int)*(char *)((int)puVar3 + param_2 * 8 + 0x13) *
                 (float10)*(double *)&REFG(undefined, 0x10ddcc8))));
  fVar2 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(puVar3[param_2 * 2 + 3]))) -
                 ((float10)GEN_TOD(gen_bits2f(puVar3[param_2 * 2 + 1]))))));
  if ((int)(param_2 + 2) <= (int)((*puVar3 >> 9 & 0xffff) - 1)) {
    uVar4 = (ushort)puVar3[param_2 * 2 + 2] & 0x3fff;
    return (float10)((float)GEN_TOF((((float10)fVar2 * (float10)fVar1 +
                            (((float10)GEN_TOD(gen_bits2f(puVar3[param_2 * 2 + 5]))) -
                            ((float10)GEN_TOD(gen_bits2f(puVar3[param_2 * 2 + 3])))) *
                            (float10)((float)GEN_TOF(((float10)(int)*(char *)((int)puVar3 +
                                                                    param_2 * 8 + 0x12) *
                                            (float10)*(double *)&REFG(undefined, 0x10ddcc8))))) *
                           (float10)((float)GEN_TOF(((float10)(int)(((ushort)puVar3[param_2 * 2 + 4] & 0x3fff
                                                           ) - uVar4) /
                                           (float10)(int)(((ushort)puVar3[param_2 * 2 + 6] & 0x3fff)
                                                         - uVar4)))))));
  }
  return (float10)(float)((float10)fVar2 * (float10)fVar1);
}

/* ref: FUN_0097c6b0 */
float10 F_0097c6b0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97c6b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  iVar1 = *(int *)(param_1 + 4) + param_3 * 8;
  fVar2 = ((float)GEN_TOF((((float10)param_2 - ((float10)GEN_TOD((*(ushort *)(iVar1 + 8) & 0x3fff)))) /
                 (float10)(int)((*((ushort *)GEN_TOP((*(int *)(param_1 + 4) + 0x10 + param_3 * 8))) & 0x3fff) -
                               (*(ushort *)(iVar1 + 8) & 0x3fff)))));
  fVar7 = (float10)fVar2;
  fVar3 = (float)(fVar7 * fVar7);
  fVar4 = (float)((float10)fVar3 * fVar7);
  fVar7 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  fVar8 = F_0097c510(param_1,param_3);
  fVar9 = (float10)(double)((float10)fVar3 * fVar7);
  fVar7 = (float10)REFG(double, 0x1088130);
  fVar5 = *(float *)(iVar1 + 4);
  fVar6 = *(float *)(iVar1 + 0xc);
  fVar10 = F_0097c5e0(param_1,param_3);
  return (float10)((float)GEN_TOF((fVar10 * (float10)(float)((float10)fVar4 - (float10)fVar3) +
                         (float10)((double)GEN_TOD((((float10)((float)GEN_TOF((fVar9 - (float10)(fVar4 + fVar4)))) *
                                            (float10)fVar6 +
                                           (float10)((float)GEN_TOF((((float10)(fVar4 + fVar4) - fVar9) +
                                                           fVar7))) * (float10)fVar5) +
                                          fVar8 * (float10)((float)GEN_TOF((((float10)fVar4 -
                                                                   ((float10)fVar3 + (float10)fVar3)
                                                                   ) + (float10)fVar2)))))))));
}

/* ref: FUN_0097c790 */
float10 F_0097c790(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97c790u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 4) + param_3 * 8;
  fVar2 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 4) + 4 + param_3 * 8)));
  return (float10)((float)GEN_TOF((((float10)*(float *)(iVar1 + 0xc) - fVar2) *
                          (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_2 -
                                                           ((float10)GEN_TOD((*(ushort *)(iVar1 + 8) & 0x3fff
                                                                    )))))) /
                                          (float10)(int)((*(ushort *)(iVar1 + 0x10) & 0x3fff) -
                                                        (*(ushort *)(iVar1 + 8) & 0x3fff))))) + fVar2)))
  ;
}

/* ref: FUN_0097c800 */
float10 F_0097c800(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97c800u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((float10)GEN_TOD((*(ushort *)(iVar1 + 0x10 + param_3 * 8) & 0x3fff))) <= (float10)param_2) {
    return (float10)*(float *)(iVar1 + 0xc + param_3 * 8);
  }
  return (float10)*(float *)(iVar1 + 4 + param_3 * 8);
}

/* ref: FUN_0097c850 */
float10 F_0097c850(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x97c850u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  return (float10)param_3;
}

/* ref: FUN_0097c860 */
float10 F_0097c860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97c860u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return (float10)*((float *)GEN_TOP((*(int *)(in_ecx + 4) + 4)));
}

/* ref: FUN_0097c870 */
float10 F_0097c870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97c870u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (float10)*((float *)GEN_TOP((*(int *)(in_ecx + 4) + 4)));
}

/* ref: FUN_0097c880 */
float10 F_0097c880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97c880u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return ((float10)GEN_TOD(gen_bits2f((*(uint * PTR32 *)(in_ecx + 4))
                             [(**(uint * PTR32 *)(in_ecx + 4) >> 9 & 0xffff) * 2 + -1])));
}

/* ref: Apricot::Engine::Data::Runtime::FunctionCurve::vf4 */
uint F_0097c8a0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97c8a0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = **(uint * PTR32 *)(param_1 + 4) >> 7 & 3;
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c48) + uVar1 * 8))(*(int *)(&REFG(undefined, 0x14a0c4c) + uVar1 * 8) + param_1);
  return uVar1;
}

/* ref: Apricot::Engine::Data::Runtime::FunctionCurve::vf3 */
uint F_0097c930(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x97c930u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  bool bVar2;
  float10 fVar3;
  
  uVar1 = **(uint * PTR32 *)(in_ecx + 4) >> 9 & 0xffff;
  if (uVar1 == 0) {
    return 0;
  }
  if (uVar1 == 1) {
    fVar3 = ((float10)GEN_TOD(gen_bits2f((*(uint * PTR32 *)(in_ecx + 4))[1])));
    bVar2 = GEN_ISNAN(fVar3) || GEN_ISNAN((float10)param_2);
    if (bVar2 == (bVar2 || fVar3 == (float10)param_2)) {
      return 1;
    }
    return 0;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

/* ref: FUN_0097c9a0 */
unsigned int F_0097c9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97c9a0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  piVar2 = param_1;
  iVar4 = REFG(int, 0x14a09d4);
  if (param_2 != 0) {
    do {
      if ((*piVar2 == 0x4b657943) && (cVar1 = (char)piVar2[2], '\0' < cVar1)) {
        iVar4 = (iVar4 + 0xfU & 0xfffffff0) + (cVar1 + -1) * 0x10 + 0x20;
        REFG(int, 0x14a09d4) = iVar4;
      }
      uVar3 = uVar3 + 8 + (piVar2[1] + 3U & 0xfffffffc);
      piVar2 = ((int *)GEN_TOP(((int)(piVar2 + 2) + (piVar2[1] + 3U & 0xfffffffc))));
    } while (uVar3 < param_2);
  }
  return 0;
}

/* ref: FUN_0097ca10 */
unsigned int F_0097ca10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97ca10u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  iVar1 = param_3 * 0x10 + *(int *)(param_1 + 4);
  uVar2 = *(uint *)(iVar1 + 4) & 0xfffffff;
  iVar3 = (*(uint *)(iVar1 + 0x14) & 0xfffffff) - uVar2;
  fVar4 = (float10)iVar3;
  if (iVar3 < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar4 = (float10)((float)GEN_TOF(((float10)(float)((float10)param_2 - (float10)uVar2) / fVar4)));
  *param_4 = ((float)GEN_TOF((fVar4 * ((float10)*(float *)(iVar1 + 0x18) - (float10)*(float *)(iVar1 + 8)) +
                    (float10)*(float *)(iVar1 + 8))));
  param_4[1] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xc) +
                      fVar4 * ((float10)*(float *)(iVar1 + 0x1c) - (float10)*(float *)(iVar1 + 0xc))
                      )));
  param_4[2] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x10) +
                      ((float10)*(float *)(iVar1 + 0x20) - (float10)*(float *)(iVar1 + 0x10)) *
                      fVar4)));
  return 0;
}

/* ref: FUN_0097cac0 */
unsigned int F_0097cac0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97cac0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + param_3 * 0x10;
  if (!(((float10)GEN_TOD((*((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x14 + param_3 * 0x10))) & 0xfffffff))) <=
       (float10)param_2)) {
    *param_4 = *(undefined4 *)(iVar1 + 8);
    param_4[1] = *(undefined4 *)(iVar1 + 0xc);
    param_4[2] = *(undefined4 *)(iVar1 + 0x10);
    return 0;
  }
  *param_4 = *(undefined4 *)(iVar1 + 0x18);
  param_4[1] = *(undefined4 *)(iVar1 + 0x1c);
  param_4[2] = *(undefined4 *)(iVar1 + 0x20);
  return 0;
}

/* ref: FUN_0097cb20 */
uint F_0097cb20(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x97cb20u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = *(uint * PTR32 *)(param_1 + 4);
  iVar4 = 0;
  iVar3 = (*puVar1 >> 9 & 0xffff) - 1;
  if (-1 < iVar3) {
    do {
      uVar2 = (iVar3 - iVar4 >> 1) + iVar4;
      if ((float10)param_2 < ((float10)GEN_TOD((puVar1[uVar2 * 4 + 1] & 0xfffffff)))) {
        iVar3 = uVar2 - 1;
      }
      else {
        if (!(((float10)GEN_TOD((puVar1[uVar2 * 4 + 5] & 0xfffffff))) < (float10)param_2)) {
          return uVar2;
        }
        iVar4 = uVar2 + 1;
      }
    } while (iVar4 <= iVar3);
  }
  return 0;
}

/* ref: FUN_0097cbb0 */
uint F_0097cbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97cbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1087f04));
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_0097cbd0 */
uint F_0097cbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97cbd0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 4);
  *param_3 = *(undefined4 *)(uVar1 + 8);
  param_3[1] = *(undefined4 *)(uVar1 + 0xc);
  param_3[2] = *(undefined4 *)(uVar1 + 0x10);
  return uVar1;
}

/* ref: FUN_0097cbf0 */
uint F_0097cbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97cbf0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 4);
  *param_3 = *(undefined4 *)(uVar1 + 8);
  param_3[1] = *(undefined4 *)(uVar1 + 0xc);
  param_3[2] = *(undefined4 *)(uVar1 + 0x10);
  return uVar1;
}

/* ref: FUN_0097cc10 */
uint F_0097cc10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97cc10u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  puVar2 = *(uint * PTR32 *)(param_1 + 4);
  fVar5 = ((float10)GEN_TOD((puVar2[(*puVar2 >> 9 & 0xffff) * 4 + -3] & 0xfffffff))) -
          (float10)(puVar2[1] & 0xfffffff);
  fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(((int)((float10)(puVar2[1] & 0xfffffff) - (float10)param_2) / (int)fVar5
                           + 1))) * (float10)(float)fVar5 + (float10)param_2)));
  uVar4 = F_0097cb20(param_1,fVar1);
  iVar3 = (*((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x14 + uVar4 * 0x10))) >> 0x1c) * 8;
  uVar4 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c90) + iVar3))
                    (*(int *)(&REFG(undefined, 0x14a0c94) + iVar3) + param_1,(undefined4)gen_fl2bits(fVar1),uVar4,
                     param_3);
  return uVar4;
}

/* ref: FUN_0097ccd0 */
uint F_0097ccd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97ccd0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  
  puVar2 = *(uint * PTR32 *)(in_ecx + 4);
  uVar3 = *puVar2 >> 9 & 0xffff;
  puVar1 = puVar2 + uVar3 * 4 + -3;
  *param_3 = puVar2[uVar3 * 4 + -2];
  param_3[1] = puVar1[2];
  param_3[2] = puVar1[3];
  return (uint)puVar1;
}

/* ref: FUN_0097cd00 */
uint F_0097cd00(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97cd00u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  puVar2 = *(uint * PTR32 *)(param_1 + 4);
  fVar5 = ((float10)GEN_TOD((puVar2[(*puVar2 >> 9 & 0xffff) * 4 + -3] & 0xfffffff))) -
          (float10)(puVar2[1] & 0xfffffff);
  fVar1 = ((float)GEN_TOF(((float10)param_2 -
                 ((float10)GEN_TOD(((int)((float10)param_2 -
                                ((float10)GEN_TOD((puVar2[(*puVar2 >> 9 & 0xffff) * 4 + -3] & 0xfffffff)))) /
                           (int)fVar5 + 1))) * (float10)(float)fVar5)));
  uVar4 = F_0097cb20(param_1,fVar1);
  iVar3 = (*((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x14 + uVar4 * 0x10))) >> 0x1c) * 8;
  uVar4 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c90) + iVar3))
                    (*(int *)(&REFG(undefined, 0x14a0c94) + iVar3) + param_1,(undefined4)gen_fl2bits(fVar1),uVar4,
                     param_3);
  return uVar4;
}

/* ref: FUN_0097cdc0 */
uint F_0097cdc0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97cdc0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_0097cb20(param_1,param_2);
  iVar1 = (*((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x14 + uVar2 * 0x10))) >> 0x1c) * 8;
  uVar2 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c90) + iVar1))
                    (*(int *)(&REFG(undefined, 0x14a0c94) + iVar1) + param_1,(undefined4)gen_fl2bits(param_2),
                     uVar2,param_3);
  return uVar2;
}

/* ref: Apricot::Engine::Data::Runtime::RgbFunctionCurve::vf1 */
uint F_0097ce10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97ce10u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(uint * PTR32 *)(param_1 + 4) >> 7 & 3) * 8;
  uVar2 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0ca8) + iVar1))
                    (*(int *)(&REFG(undefined, 0x14a0cac) + iVar1) + param_1,(undefined4)gen_fl2bits(param_2),
                     param_3);
  return uVar2;
}

/* ref: Apricot::Engine::Data::Runtime::RgbFunctionCurve::vf2 */
uint F_0097ce90(unsigned int gen_a0)
{
  GEN_ENTER(0x97ce90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint * puVar1;
  uint uVar2;
  bool bVar3;
  
  puVar1 = *(uint * PTR32 *)(in_ecx + 4);
  uVar2 = *puVar1 >> 9 & 0xffff;
  if (uVar2 == 0) {
    return 0;
  }
  if (uVar2 == 1) {
    bVar3 = GEN_ISNAN(gen_bits2f(puVar1[2])) || GEN_ISNAN(REFG(float, 0x1087f04));
    if (((bVar3 != (bVar3 || gen_bits2f(puVar1[2]) == REFG(float, 0x1087f04))) &&
        (bVar3 = GEN_ISNAN(gen_bits2f(puVar1[3])) || GEN_ISNAN(REFG(float, 0x1087f04)),
        bVar3 != (bVar3 || gen_bits2f(puVar1[3]) == REFG(float, 0x1087f04)))) &&
       (bVar3 = GEN_ISNAN(gen_bits2f(puVar1[4])) || GEN_ISNAN(REFG(float, 0x1087f04)),
       bVar3 != (bVar3 || gen_bits2f(puVar1[4]) == REFG(float, 0x1087f04)))) {
      return 0;
    }
    return 1;
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}

/* ref: FUN_0097cf20 */
unsigned int F_0097cf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97cf20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar3 = param_2;
  if (param_3 != 0) {
    do {
      iVar1 = *piVar3;
      piVar2 = piVar3 + 2;
      if (iVar1 == 0x56616c) {
        *(int *)((int)this + 4) = *piVar2;
      }
      else if (iVar1 == 0x54797065) {
        *(int *)((int)this + 0xc) = (int)(char)*piVar2;
      }
      else if (iVar1 == 0x56616c52) {
        *(int *)((int)this + 8) = *piVar2;
      }
      uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
      piVar3 = ((int *)GEN_TOP(((int)piVar2 + (piVar3[1] + 3U & 0xfffffffc))));
    } while (uVar4 < param_3);
  }
  return 0;
}

/* ref: FUN_0097cfe0 */
uint F_0097cfe0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97cfe0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))))(param_1 + 4);
  return uVar1;
}

/* ref: FUN_0097d010 */
unsigned int F_0097d010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97d010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::ValueFunctionCurve::vf4 */
uint F_0097d020(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97d020u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14) & 7;
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0cf0) + uVar1 * 8))(*(int *)(&REFG(undefined, 0x14a0cf4) + uVar1 * 8) + param_1);
  return uVar1;
}

/* ref: Apricot::Engine::Data::Runtime::ValueFunctionCurve::vf5 */
uint F_0097d060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x97d060u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xc) + 0x14))))
                    (this + 0xc,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Data::Runtime::ValueFunctionCurve::vf3 */
uint F_0097d070(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x97d070u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 4) + 0xc))))(param_1 + 4,(undefined4)gen_fl2bits(param_2));
  if ((char)uVar1 == '\0') {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0xc) + 0xc))))
                      (param_1 + 0xc,(undefined4)gen_fl2bits((float)(float10)0));
    if ((char)uVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureUvSet::vf3 */
uint F_0097d0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97d0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x1c) + 0x14))))(this + 0x1c);
  *param_1 = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x24) + 0x14))))(this + 0x24);
  param_1[1] = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x44) + 0x14))))(this + 0x44);
  param_1[2] = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x4c) + 0x14))))(this + 0x4c);
  param_1[3] = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x58) + 0x14))))(this + 0x58);
  param_1[4] = (char)uVar1;
  return uVar1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureUvSet::vf4 */
uint F_0097d120(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x97d120u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint * param_5 = (uint *)(uintptr_t)gen_a4;
  uint uVar1;
  
  *param_5 = ~(**(uint * PTR32 *)(param_1 + 4) >> 1) & 1;
  uVar1 = **(uint * PTR32 *)(param_1 + 4) & 1;
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0d18) + uVar1 * 8))(*(int *)(&REFG(undefined, 0x14a0d1c) + uVar1 * 8) + param_1);
  return uVar1;
}

/* ref: FUN_0097d170 */
uint F_0097d170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97d170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)(param_4 + 4) = GEN_FLT_TO(*(undefined4 *)(param_4 + 4), REFG(float, 0x1087f04));
  *(undefined4 *)(param_4 + 8) = uVar1;
  *(undefined4 *)(param_4 + 0xc) = 0;
  *(undefined4 *)(param_4 + 0x10) = 0;
  *(undefined4 *)(param_4 + 0x14) = 0;
  return param_4;
}

/* ref: FUN_0097d1a0 */
uint F_0097d1a0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x97d1a0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  float fVar1;
  float10 extraout_ST0;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 8) + 4))))(param_1 + 8);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x30) + 4))))
            (param_1 + 0x30,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
             param_4 + 2,param_5 + 0xc);
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x58) + 0x10))))
                    (param_1 + 0x58,(undefined4)gen_fl2bits(param_2),
                     (undefined4)gen_fl2bits(param_3),(uint)*(byte *)(param_4 + 4)); fVar1 = extraout_ST0;
  *(float *)(param_5 + 0x14) = (float)extraout_ST0;
  return (uint)gen_fl2bits(fVar1);
}

/* ref: FUN_0097d220 */
uint F_0097d220(unsigned int gen_a0)
{
  GEN_ENTER(0x97d220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10ddd18));
  *(ushort *)((int)this + 6) = *(ushort *)((int)this + 6) & 0xf800;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x18) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x20) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_0097d280 */
unsigned int F_0097d280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97d280u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  
  uVar4 = 0;
  piVar6 = param_1;
  if (param_2 != 0) {
    do {
      iVar2 = *piVar6;
      if (iVar2 == 0x54784e) {
LAB_0097d2c9: ;
        uVar5 = 0;
        piVar3 = piVar6 + 2;
        do {
          if ((*piVar3 == 0x4b657943) && (cVar1 = (char)piVar3[2], '\0' < cVar1)) {
            REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
          }
          uVar5 = uVar5 + 8 + (piVar3[1] + 3U & 0xfffffffc);
          piVar3 = ((int *)GEN_TOP(((int)(piVar3 + 2) + (piVar3[1] + 3U & 0xfffffffc))));
        } while (uVar5 < param_2);
      }
      else if (iVar2 == 0x544c7374) {
        REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + (piVar6[1] + 3U & 0xfffffffc);
      }
      else if (iVar2 == 0x54784e52) goto LAB_0097d2c9;
      uVar4 = uVar4 + 8 + (piVar6[1] + 3U & 0xfffffffc);
      piVar6 = ((int *)GEN_TOP(((int)(piVar6 + 2) + (piVar6[1] + 3U & 0xfffffffc))));
    } while (uVar4 < param_2);
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf2 */
uint F_0097d360(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97d360u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float10 extraout_ST0;
  
  if ((*(ushort *)(param_1 + 4) & 2) != 0) {
    return 0xfffffffe - ((*(ushort *)(param_1 + 4) & 8) != 0);
  }
  if ((*(ushort *)(param_1 + 6) & 0x7f8) == 0) {
    return 0xffffffff;
  }
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))))(param_1 + 0x10);
  return (int)*((char *)GEN_TOP(((*(int *)(param_1 + 0xc) + (int)extraout_ST0) %
                        (int)(*(ushort *)(param_1 + 6) >> 3 & 0xff) + *(int *)(param_1 + 8))));
}

/* ref: FUN_0097d420 */
unsigned int F_0097d420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97d420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  uint uVar7;
  
  uVar7 = 0;
  puVar3 = param_2;
  if (param_3 != 0) {
    do {
      uVar1 = *puVar3;
      puVar2 = puVar3 + 2;
      if (0x54784e6f < uVar1) {
        if (uVar1 < 0x62456e62) {
          if (uVar1 == 0x62456e61) {
            uVar4 = (ushort)(char)((byte)*puVar2 & 1);
            uVar6 = 0xfffe;
          }
          else {
            if (uVar1 != 0x5576534e) {
              if (uVar1 != 0x62433241) goto LAB_0097d59a;
              sVar5 = (short)(char)((byte)*puVar2 & 1);
              uVar6 = 0xfffb;
              goto LAB_0097d586;
            }
            uVar4 = (short)(char)((byte)*puVar2 & 7) << 4;
            uVar6 = 0xff8f;
          }
        }
        else {
          if (uVar1 == 0x62504643) {
            sVar5 = (char)((byte)*puVar2 & 1) * 2;
            uVar6 = 0xfff7;
LAB_0097d586: ;
            sVar5 = sVar5 * 2;
          }
          else {
            if (uVar1 != 0x62555343) goto LAB_0097d59a;
            sVar5 = (short)(char)((byte)*puVar2 & 1);
            uVar6 = 0xfffd;
          }
          uVar4 = sVar5 * 2;
        }
        goto LAB_0097d58c;
      }
      if (uVar1 == 0x54784e6f) {
        *(byte *)((int)this + 8) = (byte)*puVar2;
        goto LAB_0097d59a;
      }
      if (uVar1 < 0x54425655) {
        if (uVar1 == 0x54425654) {
          uVar4 = (short)(char)(byte)*puVar2 << 0xe;
          uVar6 = 0x3fff;
          goto LAB_0097d58c;
        }
        if (uVar1 == 0x544654) {
          *(ushort *)((int)this + 6) =
               (short)(char)((byte)*puVar2 & 7) | *(ushort *)((int)this + 6) & 0xfff8;
        }
        else if (uVar1 == 0x54425554) {
          uVar4 = (short)(char)((byte)*puVar2 & 3) << 0xc;
          uVar6 = 0xcfff;
          goto LAB_0097d58c;
        }
      }
      else {
        if (uVar1 == 0x54434154) {
          uVar4 = (short)(char)((byte)*puVar2 & 3) << 10;
          uVar6 = 0xf3ff;
        }
        else {
          if (uVar1 != 0x54434354) goto LAB_0097d59a;
          uVar4 = (short)(char)((byte)*puVar2 & 7) << 7;
          uVar6 = 0xfc7f;
        }
LAB_0097d58c: ;
        *(ushort *)((int)this + 4) = uVar4 | *(ushort *)((int)this + 4) & uVar6;
      }
LAB_0097d59a: ;
      uVar7 = uVar7 + 8 + (puVar3[1] + 3 & 0xfffffffc);
      puVar3 = ((uint *)GEN_TOP(((int)puVar2 + (puVar3[1] + 3 & 0xfffffffc))));
    } while (uVar7 < param_3);
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf1 */
uint F_0097d5c0(unsigned int gen_a0)
{
  GEN_ENTER(0x97d5c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(ushort *)(in_ecx + 4) & 2) != 0) {
    return 0xfffffffe - ((*(ushort *)(in_ecx + 4) & 8) != 0);
  }
  return (int)*(char *)(in_ecx + 8);
}

/* ref: FUN_0097d5e0 */
uint F_0097d5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x97d5e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(ushort *)(in_ecx + 1) = *(ushort *)(in_ecx + 1) & 0xf800;
  *in_ecx = (*(undefined * PTR32 (*)[8])REFP(0x10ddd84));
  *(undefined1 *)((int)in_ecx + 6) = 0xff;
  in_ecx[2] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  in_ecx[3] = &REFG(undefined, 0x14a0a44);
  return (uint)in_ecx;
}

/* ref: FUN_0097d620 */
unsigned int F_0097d620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97d620u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  uVar2 = 0;
  piVar5 = param_1;
  if (param_2 != 0) {
    do {
      if (*piVar5 == 0x4e506f77) {
        uVar4 = 0;
        piVar3 = piVar5 + 2;
        do {
          if ((*piVar3 == 0x4b657943) && (cVar1 = (char)piVar3[2], '\0' < cVar1)) {
            REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
          }
          uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
          piVar3 = ((int *)GEN_TOP(((int)(piVar3 + 2) + (piVar3[1] + 3U & 0xfffffffc))));
        } while (uVar4 < param_2);
      }
      uVar2 = uVar2 + 8 + (piVar5[1] + 3U & 0xfffffffc);
      piVar5 = ((int *)GEN_TOP(((int)(piVar5 + 2) + (piVar5[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf1 */
uint F_0097d6d0(unsigned int gen_a0)
{
  GEN_ENTER(0x97d6d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 6);
}

/* ref: FUN_0097d710 */
unsigned int F_0097d710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97d710u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  uVar2 = 0;
  piVar5 = param_1;
  if (param_2 != 0) {
    do {
      if (*piVar5 == 0x52617465) {
        uVar4 = 0;
        piVar3 = piVar5 + 2;
        do {
          if ((*piVar3 == 0x4b657943) && (cVar1 = (char)piVar3[2], '\0' < cVar1)) {
            REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
          }
          uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
          piVar3 = ((int *)GEN_TOP(((int)(piVar3 + 2) + (piVar3[1] + 3U & 0xfffffffc))));
        } while (uVar4 < param_2);
      }
      uVar2 = uVar2 + 8 + (piVar5[1] + 3U & 0xfffffffc);
      piVar5 = ((int *)GEN_TOP(((int)(piVar5 + 2) + (piVar5[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf1 */
uint F_0097d7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x97d7c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0xfffffffc;
  if ((*(byte *)(in_ecx + 4) & 2) == 0) {
    uVar1 = (uint)*(char *)(in_ecx + 5);
  }
  return uVar1;
}

/* ref: FUN_0097d7d0 */
uint F_0097d7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x97d7d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(ushort *)(in_ecx + 1) = *(ushort *)(in_ecx + 1) & 0x8000;
  *in_ecx = (*(undefined * PTR32 (*)[12])REFP(0x10dddc8));
  *(undefined1 *)((int)in_ecx + 6) = 0xff;
  in_ecx[2] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  in_ecx[3] = &REFG(undefined, 0x14a0a44);
  return (uint)in_ecx;
}

/* ref: FUN_0097d810 */
unsigned int F_0097d810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97d810u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  uVar2 = 0;
  piVar5 = param_1;
  if (param_2 != 0) {
    do {
      if (*piVar5 == 0x44506f77) {
        uVar4 = 0;
        piVar3 = piVar5 + 2;
        do {
          if ((*piVar3 == 0x4b657943) && (cVar1 = (char)piVar3[2], '\0' < cVar1)) {
            REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
          }
          uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
          piVar3 = ((int *)GEN_TOP(((int)(piVar3 + 2) + (piVar3[1] + 3U & 0xfffffffc))));
        } while (uVar4 < param_2);
      }
      uVar2 = uVar2 + 8 + (piVar5[1] + 3U & 0xfffffffc);
      piVar5 = ((int *)GEN_TOP(((int)(piVar5 + 2) + (piVar5[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf1 */
uint F_0097d8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x97d8c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 6);
}

/* ref: FUN_0097d8d0 */
uint F_0097d8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x97d8d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(byte *)(in_ecx + 1) = *(byte *)(in_ecx + 1) & 0xf0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x10dddfc));
  *(undefined1 *)((int)in_ecx + 5) = 0xff;
  in_ecx[2] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  in_ecx[3] = &REFG(undefined, 0x14a0a44);
  return (uint)in_ecx;
}

/* ref: FUN_0097d900 */
unsigned int F_0097d900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97d900u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  uVar2 = 0;
  piVar5 = param_1;
  if (param_2 != 0) {
    do {
      if (*piVar5 == 0x504f6666) {
        uVar4 = 0;
        piVar3 = piVar5 + 2;
        do {
          if ((*piVar3 == 0x4b657943) && (cVar1 = (char)piVar3[2], '\0' < cVar1)) {
            REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
          }
          uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
          piVar3 = ((int *)GEN_TOP(((int)(piVar3 + 2) + (piVar3[1] + 3U & 0xfffffffc))));
        } while (uVar4 < param_2);
      }
      uVar2 = uVar2 + 8 + (piVar5[1] + 3U & 0xfffffffc);
      piVar5 = ((int *)GEN_TOP(((int)(piVar5 + 2) + (piVar5[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Palette::vf1 */
uint F_0097d9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x97d9b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 5);
}

/* ref: FUN_0097d9c0 */
uint F_0097d9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x97d9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10dde14));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xc) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x14) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x24) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x2c) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_0097da40 */
unsigned int F_0097da40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97da40u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar2 = 0;
  puVar5 = param_1;
  if (param_2 != 0) {
    do {
      uVar4 = *puVar5;
      if (uVar4 < 0x4c656e53) {
        if (((uVar4 == 0x4c656e52) || (uVar4 == 0x4c656e)) || (uVar4 == 0x576474)) {
LAB_0097da8a: ;
          uVar4 = 0;
          puVar3 = puVar5 + 2;
          if (puVar5[1] != 0) {
            do {
              if ((*puVar3 == 0x4b657943) && (cVar1 = (char)puVar3[2], '\0' < cVar1)) {
                REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0)
                ;
              }
              uVar4 = uVar4 + 8 + (puVar3[1] + 3 & 0xfffffffc);
              puVar3 = ((uint *)GEN_TOP(((int)(puVar3 + 2) + (puVar3[1] + 3 & 0xfffffffc))));
            } while (uVar4 < puVar5[1]);
          }
        }
      }
      else if (uVar4 == 0x57647452) goto LAB_0097da8a;
      uVar2 = uVar2 + 8 + (puVar5[1] + 3 & 0xfffffffc);
      puVar5 = ((uint *)GEN_TOP(((int)(puVar5 + 2) + (puVar5[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf12 */
uint F_0097db10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97db10u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xc) & 0xff;
  if (uVar2 == 1) {
    *param_3 = (int)*(char *)(param_1 + 4);
    *param_4 = (int)*(char *)(param_1 + 4);
    return 0;
  }
  uVar1 = (uint)param_2;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  uVar2 = uVar2 - 2;
  if ((int)uVar2 < (int)uVar1) {
    uVar1 = uVar2;
  }
  *param_3 = (int)*(char *)(uVar1 + 4 + param_1);
  *param_4 = (int)*(char *)(uVar1 + 5 + param_1);
  return uVar1;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf13 */
uint F_0097db70(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x97db70u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float10 extraout_ST0;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    return 0xffffffff;
  }
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x138) + 0x10))))(param_1 + 0x138);
  return (int)*((char *)GEN_TOP(((uint)(int)extraout_ST0 % (uint)*(byte *)(param_1 + 0xc) + 4 + param_1)));
}

/* ref: FUN_0097dc00 */
unsigned int F_0097dc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97dc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = param_2;
  if (param_3 != 0) {
    do {
      if (*piVar1 == 0x4d4e4f) {
        *(char *)((int)this + 4) = (char)piVar1[2];
      }
      uVar2 = uVar2 + 8 + (piVar1[1] + 3U & 0xfffffffc);
      piVar1 = ((int *)GEN_TOP(((int)(piVar1 + 2) + (piVar1[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_3);
  }
  return 0;
}

/* ref: FUN_0097dc50 */
uint F_0097dc50(unsigned int gen_a0)
{
  GEN_ENTER(0x97dc50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dde30));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xc) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x14) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_0097dca0 */
unsigned int F_0097dca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97dca0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  uVar2 = 0;
  piVar5 = param_1;
  if (param_2 != 0) {
    do {
      if ((*piVar5 == 0x436e74) || (*piVar5 == 0x436e7452)) {
        uVar4 = 0;
        piVar3 = piVar5 + 2;
        if (piVar5[1] != 0) {
          do {
            if ((*piVar3 == 0x4b657943) && (cVar1 = (char)piVar3[2], '\0' < cVar1)) {
              REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
            }
            uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
            piVar3 = ((int *)GEN_TOP(((int)(piVar3 + 2) + (piVar3[1] + 3U & 0xfffffffc))));
          } while (uVar4 < (uint)piVar5[1]);
        }
      }
      uVar2 = uVar2 + 8 + (piVar5[1] + 3U & 0xfffffffc);
      piVar5 = ((int *)GEN_TOP(((int)(piVar5 + 2) + (piVar5[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_0097dda0 */
unsigned int F_0097dda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97dda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar3 = param_2;
  if (param_3 != 0) {
    do {
      iVar1 = *piVar3;
      piVar2 = piVar3 + 2;
      if (iVar1 == 0x436e4f66) {
        *(int *)((int)this + 8) = *piVar2;
      }
      else if (iVar1 == 0x4c677454) {
        *(char *)((int)this + 5) = (char)*piVar2;
      }
      else if (iVar1 == 0x624c6774) {
        *(char *)((int)this + 4) = (char)*piVar2;
      }
      uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
      piVar3 = ((int *)GEN_TOP(((int)piVar2 + (piVar3[1] + 3U & 0xfffffffc))));
    } while (uVar4 < param_3);
  }
  return 0;
}

/* ref: FUN_0097de40 */
unsigned int F_0097de40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97de40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = param_2;
  if (param_3 != 0) {
    do {
      if (*piVar1 == 0x57557654) {
        *(char *)((int)this + 4) = (char)piVar1[2];
      }
      uVar2 = uVar2 + 8 + (piVar1[1] + 3U & 0xfffffffc);
      piVar1 = ((int *)GEN_TOP(((int)(piVar1 + 2) + (piVar1[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_3);
  }
  return 0;
}

/* ref: FUN_0097df10 */
unsigned int F_0097df10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97df10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = param_2;
  if (param_3 != 0) {
    do {
      if (*piVar1 == 0x5353) {
        *(int *)((int)this + 4) = piVar1[2];
      }
      uVar2 = uVar2 + 8 + (piVar1[1] + 3U & 0xfffffffc);
      piVar1 = ((int *)GEN_TOP(((int)(piVar1 + 2) + (piVar1[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_3);
  }
  return 0;
}

/* ref: FUN_0097df60 */
uint F_0097df60(unsigned int gen_a0)
{
  GEN_ENTER(0x97df60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10dde70));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xc) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x14) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffff8;
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  *(undefined4 *)((int)this + 0x20) = uVar1;
  return (uint)this;
}

/* ref: FUN_0097dfc0 */
unsigned int F_0097dfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97dfc0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  uVar2 = 0;
  piVar5 = param_1;
  if (param_2 != 0) {
    do {
      if ((*piVar5 == 0x574944) || (*piVar5 == 0x57494452)) {
        uVar4 = 0;
        piVar3 = piVar5 + 2;
        if (piVar5[1] != 0) {
          do {
            if ((*piVar3 == 0x4b657943) && (cVar1 = (char)piVar3[2], '\0' < cVar1)) {
              REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
            }
            uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
            piVar3 = ((int *)GEN_TOP(((int)(piVar3 + 2) + (piVar3[1] + 3U & 0xfffffffc))));
          } while (uVar4 < (uint)piVar5[1]);
        }
      }
      uVar2 = uVar2 + 8 + (piVar5[1] + 3U & 0xfffffffc);
      piVar5 = ((int *)GEN_TOP(((int)(piVar5 + 2) + (piVar5[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::BinderInstance::vf31 */
unsigned int F_0097e080(void)
{
  GEN_ENTER(0x97e080u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097e0a0 */
uint F_0097e0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97e0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)((int)this + 0x3ac);
  bVar1 = (byte)*(ushort *)((int)this + 0x3ac);
  if (bVar1 < 0x10) {
    uVar2 = (uint)bVar1;
    *(undefined4 *)((int)this + uVar2 * 8 + 0x278) = param_1;
    *(char *)((int)this + 0x3ac) = *(char *)((int)this + 0x3ac) + '\x01';
  }
  return uVar2;
}

/* ref: FUN_0097e0e0 */
uint F_0097e0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97e0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)(uint)*(ushort *)((int)this + 0x3aa);
  *(ushort *)((int)this + 0x3aa) = *(ushort *)((int)this + 0x3aa) + 1;
  if (*(int *)((int)this + 0x31c) != 0) {
    puVar1 = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar1) * 0x10 + *(int *)((int)this + 0x31c))));
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
  }
  return (uint)puVar1;
}

/* ref: FUN_0097e120 */
uint F_0097e120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97e120u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  short * psVar1;
  
  psVar1 = (short *)(in_ecx + 0x380 + param_2 * 2);
  *psVar1 = *psVar1 + 1;
  return param_2;
}

/* ref: FUN_0097e140 */
unsigned int F_0097e140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97e140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  short sVar1;
  undefined4 * puVar2;
  
  if (*(int *)((int)this + param_1 * 4 + 800) != 0) {
    sVar1 = *(short *)((int)this + param_1 * 2 + 0x360);
    *(short *)((int)this + param_1 * 2 + 0x360) = sVar1 + 1;
    puVar2 = ((undefined4 *)GEN_TOP((sVar1 * 0x10 + *(int *)((int)this + param_1 * 4 + 800))));
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    puVar2[3] = param_2[3];
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::DocumentInstance::vf31 */
unsigned int F_0097e1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x97e1a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  if (((((*(ushort *)(this + 0x3ac) & 0x1000) == 0) && (*(int *)(this + 0x1ec) != 0)) &&
      (!(*((float *)GEN_TOP((*(int *)(this + 0x1ec) + 0x3c))) <= REFG(float, 0x10947f8)))) &&
     (uVar2 = (uint)*(ushort *)(this + 0x3aa), uVar2 != 0)) {
    iVar3 = 0;
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((iVar3 + 8 + *(int *)(this + 0x31c))));
      ((code *)*(gen_code32 *)(*piVar1 + 0x74))(piVar1);
      iVar3 = iVar3 + 0x10;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_0097e200 */
unsigned int F_0097e200(unsigned int gen_a0)
{
  GEN_ENTER(0x97e200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int local_c;
  short * local_8;
  
  local_8 = (short *)((int)this + 0x360);
  piVar1 = (int *)((int)this + 800);
  local_c = 0x10;
  do {
    iVar3 = (int)*local_8;
    if (0 < iVar3) {
      puVar2 = (undefined4 *)(*piVar1 + 8);
      do {
        ((code *)*(gen_code32 *)(*(int *)*puVar2 + 0x74))((int *)*puVar2);
        puVar2 = puVar2 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_8 = local_8 + 1;
    piVar1 = piVar1 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  return 0;
}

/* ref: FUN_0097e260 */
unsigned int F_0097e260(unsigned int gen_a0)
{
  GEN_ENTER(0x97e260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  int local_c;
  short * local_8;
  
  local_8 = (short *)((int)this + 0x360);
  piVar1 = (int *)((int)this + 800);
  local_c = 0x10;
  do {
    iVar2 = *local_8 + -1;
    if (-1 < iVar2) {
      puVar3 = (undefined4 *)(*piVar1 + 8 + iVar2 * 0x10);
      do {
        ((code *)*(gen_code32 *)(*(int *)*puVar3 + 0x74))((int *)*puVar3);
        puVar3 = puVar3 + -4;
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
    local_8 = local_8 + 1;
    piVar1 = piVar1 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  return 0;
}

/* ref: FUN_0097e2c0 */
unsigned int F_0097e2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x97e2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int local_c;
  short * local_8;
  
  local_8 = (short *)((int)this + 0x360);
  piVar1 = (int *)((int)this + 800);
  local_c = 0x10;
  do {
    iVar3 = (int)*local_8;
    if (0 < iVar3) {
      puVar2 = (undefined4 *)(*piVar1 + 8);
      do {
        ((code *)*(gen_code32 *)(*(int *)*puVar2 + 0x78))((int *)*puVar2);
        puVar2 = puVar2 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_8 = local_8 + 1;
    piVar1 = piVar1 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  return 0;
}

/* ref: FUN_0097e320 */
uint F_0097e320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97e320u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  *(undefined4 *)(in_ecx + 0x30c) = *param_2;
  *(undefined4 *)(in_ecx + 0x310) = param_2[1];
  *(undefined4 *)(in_ecx + 0x314) = param_2[2];
  *(undefined4 *)(in_ecx + 0x300) = *param_3;
  *(undefined4 *)(in_ecx + 0x304) = param_3[1];
  *(undefined4 *)(in_ecx + 0x308) = param_3[2];
  *(undefined4 *)(in_ecx + 0x2f4) = *param_4;
  *(undefined4 *)(in_ecx + 0x2f8) = param_4[1];
  *(undefined4 *)(in_ecx + 0x2fc) = param_4[2];
  return (uint)param_4;
}

/* ref: FUN_0097e380 */
uint F_0097e380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97e380u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  *param_2 = *(undefined4 *)(in_ecx + 0x30c);
  param_2[1] = *(undefined4 *)(in_ecx + 0x310);
  param_2[2] = *(undefined4 *)(in_ecx + 0x314);
  *param_3 = *(undefined4 *)(in_ecx + 0x300);
  param_3[1] = *(undefined4 *)(in_ecx + 0x304);
  param_3[2] = *(undefined4 *)(in_ecx + 0x308);
  *param_4 = *(undefined4 *)(in_ecx + 0x2f4);
  param_4[1] = *(undefined4 *)(in_ecx + 0x2f8);
  param_4[2] = *(undefined4 *)(in_ecx + 0x2fc);
  return (uint)param_4;
}

/* ref: switchD_0097e40e::caseD_0 */
unsigned int F_0097e3e0(void)
{
  GEN_ENTER(0x97e3e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::EmitterInstance::vf27 */
uint F_0097e3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x97e3f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  ((code *)*(gen_code32 *)(this + 0x2e0))();
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f038))[(int)(*(uint *)(this + 0x2ac) & 1)])))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0097e410 */
unsigned int F_0097e410(void)
{
  GEN_ENTER(0x97e410u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097e420 */
unsigned int F_0097e420(void)
{
  GEN_ENTER(0x97e420u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097e430 */
unsigned int F_0097e430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97e430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_0097e440 */
unsigned int F_0097e440(unsigned int gen_a0)
{
  GEN_ENTER(0x97e440u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_0097e450 */
unsigned int F_0097e450(unsigned int gen_a0)
{
  GEN_ENTER(0x97e450u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_0097e460 */
unsigned int F_0097e460(void)
{
  GEN_ENTER(0x97e460u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::EmitterInstance::vf15 */
uint F_0097e470(unsigned int gen_a0)
{
  GEN_ENTER(0x97e470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x88;
}

/* ref: FUN_0097e480 */
uint F_0097e480(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x97e480u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  int * piVar1;
  float10 extraout_ST0;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1f8) + 0x34))))(*(int * PTR32 *)(param_1 + 0x1f8))));
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  return (int)extraout_ST0;
}

/* ref: FUN_0097e4c0 */
uint F_0097e4c0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x97e4c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1f8) + 0x38))))(*(int * PTR32 *)(param_1 + 0x1f8))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  return uVar2;
}

/* ref: FUN_0097e5c0 */
uint F_0097e5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97e5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = *(uint *)((int)this + 0x1d0);
    *(uint *)((int)this + 0x1d0) = ((uVar1 & 0xfffffe00) + 0x200 ^ uVar1) & 0x3fe00 ^ uVar1;
    if (*(int *)((int)this + 0x1e4) == 0) {
      *(int * PTR32 *)((int)this + 0x1e0) = param_1;
      *(int * PTR32 *)((int)this + 0x1e4) = param_1;
      uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
      return uVar1;
    }
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1e4) + 0x1e8))) = param_1;
    *(int * PTR32 *)((int)this + 0x1e4) = param_1;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  }
  return (uint)this;
}

/* ref: FUN_0097e630 */
unsigned int F_0097e630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97e630u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (iVar1 = *(int *)(in_ecx + 0x1e0); (0 < iVar2 && (iVar2 = iVar2 + -1, iVar1 != 0));
      iVar1 = *(int *)(iVar1 + 0x1e8)) {
  }
  return 0;
}

/* ref: FUN_0097e670 */
uint F_0097e670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97e670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(uint *)((int)this + 0x1d0) ^ param_1) & 0x1ff ^ *(uint *)((int)this + 0x1d0);
  *(uint *)((int)this + 0x1d0) =
       ((uint)((uVar1 & 0x1ff) == 0) * 0x20000000 ^ uVar1) & 0x20000000 ^ uVar1;
  return uVar1;
}

/* ref: FUN_0097e6f0 */
unsigned int F_0097e6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x97e6f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_0097e700 */
unsigned int F_0097e700(void)
{
  GEN_ENTER(0x97e700u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097e710 */
uint F_0097e710(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x97e710u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  float fVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((*(int *)&gen_args[0]) + 0x1bc) * (float10)(*(float *)&gen_args[1]))));
  fVar3 = (float10)fVar1;
  *(float *)((*(int *)&gen_args[0]) + 0x1b0) = fVar1;
  (*(float *)&gen_args[1]) = ((float)GEN_TOF(((float10)*(float *)((*(int *)&gen_args[0]) + 0x1a8) + fVar3)));
  fVar1 = *(float *)((*(int *)&gen_args[0]) + 0x1ac);
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f078))[(int)(*(uint *)((*(int *)&gen_args[0]) + 0x1d0) >> 0x1c & 1)])))((*(int *)&gen_args[0]),&(*(float *)&gen_args[1]));
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f080))[(int)(*(uint *)((*(int *)&gen_args[0]) + 0x1d0) >> 0x1d & 1)])))((*(int *)&gen_args[0]),&(*(float *)&gen_args[1]));
  uVar2 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f058))[(int)(*(byte *)((*(int *)&gen_args[0]) + 0x1d3) & 1)])))((*(int *)&gen_args[0]));
  *(float *)((*(int *)&gen_args[0]) + 0x1a8) = (*(float *)&gen_args[1]);
  *(float *)((*(int *)&gen_args[0]) + 0x1ac) = (float)(fVar3 + (float10)fVar1);
  return uVar2;
}

/* ref: FUN_0097e7b0 */
unsigned int F_0097e7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x97e7b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_0097e7c0 */
unsigned int F_0097e7c0(void)
{
  GEN_ENTER(0x97e7c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097e7d0 */
uint F_0097e7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x97e7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f060))[(int)(*(uint *)((int)this + 0x1d0) >> 0x19 & 1)])))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0097e7f0 */
unsigned int F_0097e7f0(void)
{
  GEN_ENTER(0x97e7f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097e800 */
unsigned int F_0097e800(void)
{
  GEN_ENTER(0x97e800u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097e810 */
uint F_0097e810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x97e810u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f068))[(int)(*(uint *)((int)this + 0x1d0) >> 0x1a & 1)])))();
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f070))
                    [*(uint *)((int)this + 0x1d0) >> 0x1b & 1])))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0097e840 */
unsigned int F_0097e840(void)
{
  GEN_ENTER(0x97e840u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097e850 */
unsigned int F_0097e850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97e850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)*(float *)((int)this + 0x1c4);
  if (fVar1 <= (float10)*param_1) {
    do {
      *param_1 = ((float)GEN_TOF(((float10)*param_1 - (fVar1 - (float10)*(float *)((int)this + 0x1c0)))));
      ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this);
      fVar1 = (float10)*(float *)((int)this + 0x1c4);
    } while ((!GEN_ISNAN((float10)*param_1) && !GEN_ISNAN(fVar1)) && !((float10)*param_1 < fVar1));
  }
  return 0;
}

/* ref: FUN_0097e8a0 */
unsigned int F_0097e8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x97e8a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_0097e8b0 */
uint F_0097e8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97e8b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  if (*param_2 == 0) {
    *(undefined4 *)((int)this + 0x1e0) = *param_3;
  }
  else {
    *(undefined4 *)(*param_2 + 0x1e8) = *param_3;
  }
  if (*(int *)((int)this + 0x1e4) == *param_1) {
    *(int *)((int)this + 0x1e4) = *param_2;
  }
  uVar2 = *(uint *)((int)this + 0x1d0);
  *(uint *)((int)this + 0x1d0) = (((uVar2 >> 9) - 1) * 0x200 ^ uVar2) & 0x3fe00 ^ uVar2;
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  return uVar2;
}

/* ref: switchD_0097e83e::caseD_0 */
unsigned int F_0097e920(void)
{
  GEN_ENTER(0x97e920u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf11 */
unsigned int F_0097e930(unsigned int gen_a0)
{
  GEN_ENTER(0x97e930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f048))[(int)(*(uint *)(this + 0x1d0) >> 0x16 & 1)])))();
  for (piVar1 = *(int * PTR32 *)(this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf12 */
unsigned int F_0097e970(unsigned int gen_a0)
{
  GEN_ENTER(0x97e970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f050))[(int)(*(uint *)(this + 0x1d0) >> 0x17 & 1)])))();
  for (piVar1 = *(int * PTR32 *)(this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1);
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf13 */
unsigned int F_0097e9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x97e9b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  for (piVar1 = *(int * PTR32 *)(this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1);
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf15 */
uint F_0097e9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x97e9e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x88;
}

/* ref: FUN_0097e9f0 */
unsigned int F_0097e9f0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97e9f0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 0x58) = param_2;
  *(float *)(in_ecx + 0x5c) = param_3;
  *(float *)(in_ecx + 0x60) = param_4;
  return 0;
}

/* ref: FUN_0097ea20 */
unsigned int F_0097ea20(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97ea20u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 100) = param_2;
  *(float *)(in_ecx + 0x68) = param_3;
  *(float *)(in_ecx + 0x6c) = param_4;
  return 0;
}

/* ref: FUN_0097ea50 */
unsigned int F_0097ea50(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97ea50u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 0x70) = param_2;
  *(float *)(in_ecx + 0x74) = param_3;
  *(float *)(in_ecx + 0x78) = param_4;
  return 0;
}

/* ref: FUN_0097eab0 */
float10 F_0097eab0(unsigned int gen_a0)
{
  GEN_ENTER(0x97eab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(uint *)(in_ecx + 0x1d0) & 0x80000) == 0) {
    return (float10)1;
  }
  if ((float10)*(float *)(in_ecx + 0x1c8) < (float10)*(float *)(in_ecx + 0x1cc)) {
    return (float10)0;
  }
  return (float10)((float)GEN_TOF(((float10)1 -
                         (float10)*(float *)(in_ecx + 0x1cc) / (float10)*(float *)(in_ecx + 0x1c8))));
}

/* ref: FUN_0097eb00 */
uint F_0097eb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97eb00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int in_ecx_00;
  uint in_EAX = 0;
  
  *(uint *)(in_ecx + 0x1d0) = *(uint *)(in_ecx + 0x1d0) | 0x8080000;
  in_ecx_00 = *(int *)(in_ecx + 0x1e0);
  *(float *)(in_ecx + 0x1c8) = (float)param_2;
  *(undefined4 *)(in_ecx + 0x1cc) = 0;
  for (; in_ecx_00 != 0; in_ecx_00 = *(int *)(in_ecx_00 + 0x1e8)) {
    in_EAX = F_0097eb00(in_ecx_00,param_2);
  }
  return in_EAX;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf14 */
unsigned int F_0097eb60(unsigned int gen_a0)
{
  GEN_ENTER(0x97eb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) & 0xefefffff;
  for (piVar1 = *(int * PTR32 *)(this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1);
  }
  return 0;
}

/* ref: FUN_0097eb90 */
unsigned int F_0097eb90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x97eb90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x1bc) * (float10)param_2)));
  *(float *)(in_ecx + 0x1a8) = fVar1;
  *(float *)(in_ecx + 0x1ac) = fVar1;
  return 0;
}

/* ref: FUN_0097ebf0 */
uint F_0097ebf0(unsigned int gen_a0)
{
  GEN_ENTER(0x97ebf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x1d0);
  if ((uVar1 & 0x40000) == 0) {
    uVar1 = uVar1 & 0xf81fffff | 0x40000;
    *(uint *)(in_ecx + 0x1d0) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_0097ec70 */
byte F_0097ec70(unsigned int gen_a0)
{
  GEN_ENTER(0x97ec70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (((*(uint *)(in_ecx + 0x1d0) & 0x40000) != 0) && (*(int *)(in_ecx + 0x1e0) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0097ed20 */
uint F_0097ed20(unsigned int gen_a0)
{
  GEN_ENTER(0x97ed20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)((int)this + 0x1a8);
  uVar2 = *(undefined4 *)((int)this + 0x1ac);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1fc) + 0x18))))(*(int * PTR32 *)((int)this + 0x1fc))));
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))
            (piVar3,uVar1,uVar2,(undefined4)gen_fl2bits((float)(float10)1),(int)this + 0x1ec,
             (int)this + 0x98);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1fc) + 0x1c))))(*(int * PTR32 *)((int)this + 0x1fc))));
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))
            (piVar3,uVar1,uVar2,(undefined4)gen_fl2bits((float)(float10)0),(int)this + 0x1ef,
             (int)this + 0xa4);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1fc) + 0x20))))(*(int * PTR32 *)((int)this + 0x1fc))));
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))
            (piVar3,uVar1,uVar2,(undefined4)gen_fl2bits((float)(float10)0),(int)this + 0x1f2,
             (int)this + 0xb0);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1fc) + 0x14))))(*(int * PTR32 *)((int)this + 0x1fc))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,uVar1,uVar2,(int)this + 0x1f5,(int)this + 0x88);
  return uVar4;
}

/* ref: FUN_0097ee40 */
unsigned int F_0097ee40(unsigned int gen_a0)
{
  GEN_ENTER(0x97ee40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  iVar2 = *(int *)((int)this + 0x1f0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[31])REFP(0x10ddf04));
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + 0x200);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((*(uint *)(iVar2 + 0x1d0) & 0x40000) == 0)) {
      *(uint *)(iVar2 + 0x1d0) = *(uint *)(iVar2 + 0x1d0) & 0xf81fffff | 0x40000;
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[31])REFP(0x10dde84));
  puVar4 = *(undefined4 * PTR32 *)((int)this + 0x1e0);
  while (puVar4 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)puVar4[0x7a];
    ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
    puVar4 = puVar3;
  }
  return 0;
}

/* ref: FUN_0097eed0 */
unsigned int F_0097eed0(void)
{
  GEN_ENTER(0x97eed0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097eee0 */
unsigned int F_0097eee0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97eee0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 0x150) = param_2;
  *(float *)(in_ecx + 0x154) = param_3;
  *(float *)(in_ecx + 0x158) = param_4;
  return 0;
}

/* ref: switchD_009be164::caseD_0 */
unsigned int F_0097ef50(void)
{
  GEN_ENTER(0x97ef50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097ef70 */
uint F_0097ef70(unsigned int gen_a0)
{
  GEN_ENTER(0x97ef70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)((int)this + 0x1a8);
  uVar2 = *(undefined4 *)((int)this + 0x1ac);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0x18))))(*(int * PTR32 *)((int)this + 0x29c))));
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))
            (piVar3,uVar1,uVar2,(undefined4)gen_fl2bits((float)(float10)1),(int)this + 0x256,
             (int)this + 0x98);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0x1c))))(*(int * PTR32 *)((int)this + 0x29c))));
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))
            (piVar3,uVar1,uVar2,(undefined4)gen_fl2bits((float)(float10)0),(int)this + 0x259,
             (int)this + 0xa4);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0x20))))(*(int * PTR32 *)((int)this + 0x29c))));
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))
            (piVar3,uVar1,uVar2,(undefined4)gen_fl2bits((float)(float10)0),(int)this + 0x25c,
             (int)this + 0xb0);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0x14))))(*(int * PTR32 *)((int)this + 0x29c))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,uVar1,uVar2,(int)this + 0x25f,(int)this + 0x88);
  return uVar4;
}

/* ref: Apricot::Engine::Instance::ParticleInstance::vf27 */
uint F_0097f090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x97f090u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0a4))[(int)(*(uint *)(this + 0x2ac) >> 9 & 1)])))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::ParticleInstance::vf32 */
unsigned int F_0097f0b0(void)
{
  GEN_ENTER(0x97f0b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: switchD_0097f0a3::caseD_1 */
uint F_0097f0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x97f0c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  short * psVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(in_ecx + 0x1d4);
  psVar1 = (short *)(uVar2 + 0x3a8);
  *psVar1 = *psVar1 + 1;
  return uVar2;
}

/* ref: switchD_009be164::caseD_3 */
uint F_0097f0d0(unsigned int gen_a0)
{
  GEN_ENTER(0x97f0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * psVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)((int)this + 0x1d4);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0x68))))(*(int * PTR32 *)((int)this + 0x29c));
  psVar1 = (short *)(iVar2 + 0x380 + uVar3 * 2);
  *psVar1 = *psVar1 + 1;
  return uVar3;
}

/* ref: FUN_0097f0f0 */
uint F_0097f0f0(unsigned int gen_a0)
{
  GEN_ENTER(0x97f0f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint * puVar5;
  uint local_8;
  
  REFG(undefined4, 0x14a0a10) = REFG(undefined4, 0x14a0a10) + 1;
  lVar3 = (longlong)(*(double *)&REFG(undefined, 0x10912a8) * 0.0) + 0x7fffffffffff;
  uVar4 = (uint)(lVar3 * 0x10000) | REFG(undefined4, 0x14a0a10) & 0xffff;
  iVar2 = *(int *)((int)this + 0x1d4);
  uVar1 = *(ushort *)(iVar2 + 0x3aa);
  *(ushort *)(iVar2 + 0x3aa) = uVar1 + 1;
  if (*(int *)(iVar2 + 0x31c) != 0) {
    puVar5 = ((uint *)GEN_TOP(((uint)uVar1 * 0x10 + *(int *)(iVar2 + 0x31c))));
    *puVar5 = uVar4;
    puVar5[1] = (uint)((ulonglong)lVar3 >> 0x10);
    puVar5[2] = (uint)this;
    puVar5[3] = local_8;
    uVar4 = local_8;
  }
  return uVar4;
}

/* ref: FUN_0097f170 */
unsigned int F_0097f170(void)
{
  GEN_ENTER(0x97f170u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097f180 */
unsigned int F_0097f180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97f180u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_0097f190 */
uint F_0097f190(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x97f190u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  int * piVar2;
  float fVar3;
  float10 extraout_ST0;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x29c) + 0xc))))(*(int * PTR32 *)(param_1 + 0x29c))));
  fVar1 = *(float *)(param_1 + 0x1b0);
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2); fVar3 = extraout_ST0;
  fVar1 = ((float)GEN_TOF((extraout_ST0 * (float10)fVar1 + (float10)*(float *)(param_1 + 0x7c))));
  *(float *)(param_1 + 0x7c) = fVar1;
  *(float *)(param_1 + 0x80) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)*(float *)(param_1 + 0x1b0) +
              (float10)*(float *)(param_1 + 0x80))));
  return (uint)gen_fl2bits(fVar3);
}

/* ref: FUN_0097f200 */
unsigned int F_0097f200(unsigned int gen_a0)
{
  GEN_ENTER(0x97f200u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_0097f210 */
unsigned int F_0097f210(unsigned int gen_a0)
{
  GEN_ENTER(0x97f210u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_0097f220 */
uint F_0097f220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97f220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0d4))[(int)(*(uint *)((int)this + 0x2ac) >> 0xe & 1)])))
                    ((undefined4 *)((int)this + 0x98));
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)this + 0x98);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)this + 0x9c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((int)this + 0xa0);
  return uVar1;
}

/* ref: FUN_0097f260 */
uint F_0097f260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97f260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0dc))[(int)(*(uint *)((int)this + 0x2ac) >> 0xe & 1)])))
                    ((undefined4 *)((int)this + 0xa4));
  *(undefined4 *)((int)this + 100) = *(undefined4 *)((int)this + 0xa4);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0xa8);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0xac);
  return uVar1;
}

/* ref: FUN_0097f2a0 */
unsigned int F_0097f2a0(void)
{
  GEN_ENTER(0x97f2a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097f2b0 */
unsigned int F_0097f2b0(void)
{
  GEN_ENTER(0x97f2b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097f2c0 */
uint F_0097f2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x97f2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)((int)this + 0x1a8);
  uVar2 = *(undefined4 *)((int)this + 0x1ac);
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0ec))[(int)(*(uint *)((int)this + 0x2ac) >> 0xe & 1)])))(this,(int)this + 0x88);
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0b4))[(int)(*(uint *)((int)this + 0x2ac) >> 10 & 1)])))(this);
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0bc))[(int)(*(uint *)((int)this + 0x2ac) >> 0xb & 1)])))(this,uVar1,uVar2);
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0cc))[(int)(*(uint *)((int)this + 0x2ac) >> 0xd & 1)])))(this,uVar1,uVar2);
  ((code *)*(gen_code32 *)((int)this + 0x2b0))(this,uVar1,uVar2);
  ((code *)*(gen_code32 *)((int)this + 0x2b4))(this,uVar1,uVar2);
  uVar3 = ((code *)*(gen_code32 *)((int)this + 0x2b8))(this,uVar1,uVar2);
  return uVar3;
}

/* ref: FUN_0097f3c0 */
uint F_0097f3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x97f3c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_0097f2c0(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0097f3f0 */
uint F_0097f3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97f3f0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_3 == 0) {
    return param_2;
  }
  if (param_3 != 1) {
    if (param_3 != 2) {
      return in_ecx + 0x15c;
    }
    return param_2 + 0x18;
  }
  return param_2 + 0xc;
}

/* ref: FUN_0097f430 */
unsigned int F_0097f430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97f430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_0097f440 */
uint F_0097f440(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97f440u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x29c) + 0xdc))))(*(int * PTR32 *)(param_1 + 0x29c))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1dc) + 0x14))))(*(int * PTR32 *)(param_1 + 0x1dc),uVar2);
  *(uint *)(param_1 + 0x264) = uVar2;
  *(uint *)(param_1 + 0x2a4) = uVar2;
  return uVar2;
}

/* ref: FUN_0097f4a0 */
unsigned int F_0097f4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97f4a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_0097f4b0 */
uint F_0097f4b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97f4b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  int * piVar1;
  float10 extraout_ST0;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 0x29c) + 0xec))))(*(int * PTR32 *)((*(int *)&gen_args[0]) + 0x29c))));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1)));
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  (*(undefined1 *)((char *)&(*(float *)&gen_args[2]) + 0)) = (undefined1)(int)TRUNC(extraout_ST0 * (float10)*(double *)&REFG(undefined, 0x1088100));
  *(*(undefined1 * PTR32 *)&gen_args[1]) = (*(undefined1 *)((char *)&(*(float *)&gen_args[2]) + 0));
  return gen_x87_cw | 0xc00;
}

/* ref: FUN_0097f520 */
uint F_0097f520(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97f520u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  int * piVar1;
  float10 extraout_ST0;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 0x29c) + 0xf0))))(*(int * PTR32 *)((*(int *)&gen_args[0]) + 0x29c))));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1)));
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  (*(undefined1 *)((char *)&(*(float *)&gen_args[2]) + 0)) = (undefined1)(int)TRUNC(extraout_ST0 * (float10)*(double *)&REFG(undefined, 0x1088100));
  *(undefined1 *)((*(int *)&gen_args[1]) + 1) = (*(undefined1 *)((char *)&(*(float *)&gen_args[2]) + 0));
  return gen_x87_cw | 0xc00;
}

/* ref: FUN_0097f590 */
uint F_0097f590(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97f590u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(param_1 + 0x2c8))(param_2);
  ((code *)*(gen_code32 *)(param_1 + 0x2cc))
            (param_1,param_2,(undefined4)gen_fl2bits(param_3),(undefined4)gen_fl2bits(param_4));
  ((code *)*(gen_code32 *)(param_1 + 0x2d0))
            (param_1,param_2,(undefined4)gen_fl2bits(param_3),(undefined4)gen_fl2bits(param_4));
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x2d4))
                    (param_1,param_2,(undefined4)gen_fl2bits(param_3),
                     (undefined4)gen_fl2bits(param_4));
  return uVar1;
}

/* ref: FUN_0097f610 */
unsigned int F_0097f610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97f610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_0097f620 */
uint F_0097f620(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97f620u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x29c) + 0xdc))))(*(int * PTR32 *)(param_1 + 0x29c))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1dc) + 0x14))))(*(int * PTR32 *)(param_1 + 0x1dc),uVar2);
  *(uint *)(param_1 + 0x264) = uVar2;
  *(uint *)(param_1 + 0x2a4) = uVar2;
  return uVar2;
}

/* ref: FUN_0097f680 */
unsigned int F_0097f680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97f680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_0097f690 */
uint F_0097f690(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97f690u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int * piVar1;
  float fVar2;
  float10 extraout_ST0;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x29c) + 0xec))))(*(int * PTR32 *)(param_1 + 0x29c))));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1)));
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1); fVar2 = extraout_ST0;
  *param_2 = (float)extraout_ST0;
  return (uint)gen_fl2bits(fVar2);
}

/* ref: FUN_0097f6e0 */
uint F_0097f6e0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97f6e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int * piVar1;
  float fVar2;
  float10 extraout_ST0;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x29c) + 0xf0))))(*(int * PTR32 *)(param_1 + 0x29c))));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1)));
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1); fVar2 = extraout_ST0;
  *(float *)(param_2 + 4) = (float)extraout_ST0;
  return (uint)gen_fl2bits(fVar2);
}

/* ref: FUN_0097f730 */
uint F_0097f730(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97f730u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int * piVar1;
  float fVar2;
  float10 extraout_ST0;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x29c) + 0xe8))))(*(int * PTR32 *)(param_1 + 0x29c))));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1); fVar2 = extraout_ST0;
  *(float *)(param_2 + 8) = (float)extraout_ST0;
  return (uint)gen_fl2bits(fVar2);
}

/* ref: FUN_0097f780 */
uint F_0097f780(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97f780u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int * piVar1;
  float fVar2;
  float10 extraout_ST0;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x29c) + 0xe4))))(*(int * PTR32 *)(param_1 + 0x29c))));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1); fVar2 = extraout_ST0;
  *(float *)(param_2 + 0xc) = (float)extraout_ST0;
  return (uint)gen_fl2bits(fVar2);
}

/* ref: FUN_0097f7d0 */
uint F_0097f7d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97f7d0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(param_1 + 0x2d8))(param_2);
  ((code *)*(gen_code32 *)(param_1 + 0x2dc))
            (param_1,param_2,(undefined4)gen_fl2bits(param_3),(undefined4)gen_fl2bits(param_4));
  ((code *)*(gen_code32 *)(param_1 + 0x2e0))
            (param_1,param_2,(undefined4)gen_fl2bits(param_3),(undefined4)gen_fl2bits(param_4));
  ((code *)*(gen_code32 *)(param_1 + 0x2e4))
            (param_1,param_2,(undefined4)gen_fl2bits(param_3),(undefined4)gen_fl2bits(param_4));
  ((code *)*(gen_code32 *)(param_1 + 0x2e8))
            (param_1,param_2,(undefined4)gen_fl2bits(param_3),(undefined4)gen_fl2bits(param_4));
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x2ec))
                    (param_1,param_2,(undefined4)gen_fl2bits(param_3),
                     (undefined4)gen_fl2bits(param_4));
  return uVar1;
}

/* ref: FUN_0097f880 */
unsigned int F_0097f880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97f880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  iVar4 = (int)this + 0x240;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined2 *)((int)this + 0x254) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0x8c))))(*(int * PTR32 *)((int)this + 0x29c));
  iVar3 = 0;
  if ((int)uVar1 < 1) {
    *(char *)((int)this + 0x254) = (char)uVar1;
    *(undefined1 *)((int)this + 0x255) = 0;
    return 0;
  }
  do {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0xd8))))
                              (*(int * PTR32 *)((int)this + 0x29c),iVar3)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,iVar4);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 5;
  } while (iVar3 < (int)uVar1);
  *(char *)((int)this + 0x254) = (char)uVar1;
  *(undefined1 *)((int)this + 0x255) = 0;
  return 0;
}

/* ref: FUN_0097f930 */
unsigned int F_0097f930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97f930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  iVar4 = (int)this + 0x240;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined2 *)((int)this + 0x254) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0x8c))))(*(int * PTR32 *)((int)this + 0x29c));
  iVar3 = 0;
  if ((int)uVar1 < 1) {
    *(char *)((int)this + 0x254) = (char)uVar1;
    *(undefined1 *)((int)this + 0x255) = 1;
    return 0;
  }
  do {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0xd8))))
                              (*(int * PTR32 *)((int)this + 0x29c),iVar3)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,iVar4);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 5;
  } while (iVar3 < (int)uVar1);
  *(char *)((int)this + 0x254) = (char)uVar1;
  *(undefined1 *)((int)this + 0x255) = 1;
  return 0;
}

/* ref: Apricot::Engine::Instance::ParticleInstance::vf13 */
unsigned int F_0097f9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x97f9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  for (piVar1 = *(int * PTR32 *)(this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1);
  }
  return 0;
}

/* ref: FUN_0097fa40 */
uint F_0097fa40(unsigned int gen_a0)
{
  GEN_ENTER(0x97fa40u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 1;
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  if (1 < (int)(uVar1 + 1)) {
    uVar4 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
    uVar4 = uVar4 + 1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1);
  if (0 < (int)uVar1) {
    iVar3 = 0;
    do {
      uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,iVar3);
      uVar2 = (int)*(short *)(uVar2 + 6) + 1;
      if ((int)uVar4 < (int)uVar2) {
        uVar4 = uVar2;
      }
      uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,iVar3);
      if ((int)uVar4 < (int)*(short *)(uVar2 + 8)) {
        uVar4 = (int)*(short *)(uVar2 + 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar1);
  }
  return uVar4;
}

/* ref: FUN_0097fac0 */
unsigned int F_0097fac0(void)
{
  GEN_ENTER(0x97fac0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::SchedulerInstance::vf11 */
unsigned int F_0097fad0(unsigned int gen_a0)
{
  GEN_ENTER(0x97fad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  ((code *)*(gen_code32 *)(this + 0x1ec))();
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f048))[(int)(*(uint *)(this + 0x1d0) >> 0x16 & 1)])))(this);
  for (piVar1 = *(int * PTR32 *)(this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::SchedulerInstance::vf14 */
unsigned int F_0097fb20(unsigned int gen_a0)
{
  GEN_ENTER(0x97fb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) & 0xefefffff;
  piVar1 = *(int * PTR32 *)(this + 0x1e0);
  this[0x1f8] = (undefined1)0x1;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1);
  }
  return 0;
}

/* ref: FUN_0097fb60 */
unsigned int F_0097fb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97fb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  for (piVar1 = *(int * PTR32 *)((int)this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1);
    if (uVar4 == 3) {
      if (piVar1[0x7d] == param_1) {
        iVar2 = piVar1[0x78];
        piVar1[0x74] = piVar1[0x74] | 0x8080000;
        piVar1[0x72] = (int)gen_fl2bits((float)param_2);
        piVar1[0x73] = 0;
        while (iVar2 != 0) {
          uVar4 = F_0097eb00(iVar2,param_2);
          iVar2 = *(int *)(uVar4 + 0x1e8);
        }
      }
    }
    else {
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1);
      if (uVar4 == 9) {
        for (piVar3 = (int *)piVar1[0x78]; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[0x7a]) {
          uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x20))(piVar3);
          if ((uVar4 == 3) && (piVar3[0x7d] == param_1)) {
            iVar2 = piVar3[0x78];
            piVar3[0x74] = piVar3[0x74] | 0x8080000;
            piVar3[0x72] = (int)gen_fl2bits((float)param_2);
            piVar3[0x73] = 0;
            while (iVar2 != 0) {
              uVar4 = F_0097eb00(iVar2,param_2);
              iVar2 = *(int *)(uVar4 + 0x1e8);
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_0097fcb0 */
unsigned int F_0097fcb0(void)
{
  GEN_ENTER(0x97fcb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::TimelineInstance::vf11 */
unsigned int F_0097fcc0(unsigned int gen_a0)
{
  GEN_ENTER(0x97fcc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  ((code *)*(gen_code32 *)(this + 0x1ec))();
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f048))[(int)(*(uint *)(this + 0x1d0) >> 0x16 & 1)])))(this);
  for (piVar1 = *(int * PTR32 *)(this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceGeneratorInstance::vf25 */
unsigned int F_0097fd40(void)
{
  GEN_ENTER(0x97fd40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceGeneratorInstance::vf27 */
unsigned int F_0097fd50(unsigned int gen_a0)
{
  GEN_ENTER(0x97fd50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  code * pcVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  float10 fVar6;
  int local_8;
  
  fVar6 = (float10)*(float *)(this + 0x1a8);
  if (this[0x200] == (undefined1)0x0) {
    if (fVar6 < (float10)*(int *)(this + 0x1fc)) {
      return 0;
    }
    piVar4 = *(int * PTR32 *)(this + 0x1d8);
    uVar1 = ((code *)*(gen_code32 *)(*piVar4 + 0x20))(piVar4);
    if (uVar1 == 6) {
      piVar5 = (int *)0x0;
      piVar3 = piVar4;
    }
    else {
      piVar3 = (int *)piVar4[0x76];
      piVar5 = piVar4;
    }
    local_8 = *(int *)(this + 0x1f8);
    if (*(int *)(this + 0x1ec) == 0) {
      if (0 < local_8) {
        do {
          ((code *)*(gen_code32 *)(*piVar3 + 0x84))(piVar3,*(undefined4 *)(this + 0x1f0),piVar5);
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
    }
    else if ((*(int *)(this + 0x1ec) == 1) && (0 < local_8)) {
      do {
        ((code *)*(gen_code32 *)(*piVar3 + 0x88))(piVar3,*(undefined4 *)(this + 0x1f0),piVar5);
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    if ((*(uint *)(this + 0x1d0) & 0x40000) != 0) {
      return 0;
    }
    *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) & 0xf81fffff | 0x40000;
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    return 0;
  }
  if ((!GEN_ISNAN(((float10)GEN_TOD((*(int *)(this + 0x1fc) * *(int *)(this + 500))))) && !GEN_ISNAN(fVar6)) &&
      !(((float10)GEN_TOD((*(int *)(this + 0x1fc) * *(int *)(this + 500)))) <= fVar6)) {
    return 0;
  }
  piVar4 = *(int * PTR32 *)(this + 0x1d8);
  uVar1 = ((code *)*(gen_code32 *)(*piVar4 + 0x20))(piVar4);
  if (uVar1 == 6) {
    piVar3 = piVar4;
    piVar4 = (int *)0x0;
  }
  else {
    piVar3 = (int *)piVar4[0x76];
  }
  if (*(int *)(this + 0x1ec) == 0) {
    pcVar2 = *(gen_code32 *)(*piVar3 + 0x84);
  }
  else {
    if (*(int *)(this + 0x1ec) != 1) goto LAB_0097fdd4;
    pcVar2 = *(gen_code32 *)(*piVar3 + 0x88);
  }
  (*pcVar2)(piVar3,*(undefined4 *)(this + 0x1f0),piVar4);
LAB_0097fdd4: ;
  *(int *)(this + 500) = *(int *)(this + 500) + 1;
  if ((*(int *)(this + 500) == *(int *)(this + 0x1f8)) && ((*(uint *)(this + 0x1d0) & 0x40000) == 0)
     ) {
    *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) & 0xf81fffff | 0x40000;
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    return 0;
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::CameraBinderInstance::vf13 */
unsigned int F_0097fee0(void)
{
  GEN_ENTER(0x97fee0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::LinearBinderInstance::vf13 */
unsigned int F_0097fef0(void)
{
  GEN_ENTER(0x97fef0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::PointBinderInstance::vf13 */
unsigned int F_0097ff00(void)
{
  GEN_ENTER(0x97ff00u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::SplineBinderInstance::vf13 */
unsigned int F_0097ff10(void)
{
  GEN_ENTER(0x97ff10u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00980040 */
uint F_00980040(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x980040u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  int * piVar1;
  float fVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1ec) + 0x28))))(*(int * PTR32 *)(param_1 + 0x1ec))));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  *(float *)(param_1 + 0x1f0) = (float)extraout_ST0;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1ec) + 0x28))))(*(int * PTR32 *)(param_1 + 0x1ec))));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
  extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*piVar1 + 0x10))
            (piVar1,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
             (undefined4)gen_fl2bits((float)(float10)0));
  *(float *)(param_1 + 500) = (float)extraout_ST0_00;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1ec) + 0x28))))(*(int * PTR32 *)(param_1 + 0x1ec))));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
  extraout_ST0_01 = ((gen_fcode *)*(gen_code32 *)(*piVar1 + 0x10))
            (piVar1,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
             (undefined4)gen_fl2bits((float)(float10)0));
  *(float *)(param_1 + 0x1f8) = (float)extraout_ST0_01;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1ec) + 0x28))))(*(int * PTR32 *)(param_1 + 0x1ec))));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1)));
  extraout_ST0_02 = ((gen_fcode *)*(gen_code32 *)(*piVar1 + 0x10))
            (piVar1,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
             (undefined4)gen_fl2bits((float)(float10)0));
  *(float *)(param_1 + 0x1fc) = (float)extraout_ST0_02;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1ec) + 0x28))))(*(int * PTR32 *)(param_1 + 0x1ec))));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1)));
  extraout_ST0_03 = ((gen_fcode *)*(gen_code32 *)(*piVar1 + 0x10))
                    (piVar1,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
                     (undefined4)gen_fl2bits((float)(float10)0)); fVar2 = extraout_ST0_03;
  *(float *)(param_1 + 0x200) = (float)extraout_ST0_03;
  return (uint)gen_fl2bits(fVar2);
}

/* ref: FUN_009801b0 */
uint F_009801b0(float gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9801b0u, gen_trace_f(gen_a0), gen_a1, gen_a2, gen_a3);
  float param_1 = (float)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar2 = (float10)param_1;
  fVar3 = (float10)(float)(fVar2 * fVar2);
  fVar4 = (float10)(float)(fVar3 * fVar2);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar6 = fVar4 * fVar5;
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  *param_2 = ((float)GEN_TOF(((fVar6 - fVar3 * fVar1) + (float10)REFG(double, 0x1088130))));
  *param_3 = (float)(fVar3 * fVar1 - fVar6);
  *param_4 = ((float)GEN_TOF(((fVar4 - fVar3 * fVar5) + fVar2)));
  *param_5 = (float)(fVar4 - fVar3);
  return (uint)param_5;
}

/* ref: FUN_00980210 */
float10 F_00980210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x980210u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)*(float *)(param_1 + 4 + param_2 * 8);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0xc + param_2 * 8) - fVar2)));
  if (-1 < (int)(param_2 - 1)) {
    fVar3 = (float10)*(float *)(param_1 + 8 + param_2 * 8);
    return (float10)((float)GEN_TOF((((float10)fVar1 +
                            (fVar2 - (float10)*(float *)(param_1 + -4 + param_2 * 8))) *
                           (float10)((float)GEN_TOF(((fVar3 - (float10)*(float *)(param_1 + param_2 * 8)) /
                                           (fVar3 - (float10)*(float *)(param_1 + -8 + param_2 * 8))
                                           ))))));
  }
  return (float10)fVar1;
}

/* ref: FUN_00980280 */
float10 F_00980280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x980280u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)*(float *)(param_1 + 0xc + param_2 * 8);
  iVar1 = param_2 + 2;
  fVar2 = ((float)GEN_TOF((fVar3 - (float10)*(float *)(param_1 + 4 + param_2 * 8))));
  if (iVar1 <= *(int *)(param_1 + 0x20) + -1) {
    fVar4 = (float10)*(float *)(param_1 + param_2 * 8);
    return (float10)((float)GEN_TOF((((float10)fVar2 + ((float10)*(float *)(param_1 + 4 + iVar1 * 8) - fVar3)
                            ) * (float10)((float)GEN_TOF((((float10)*(float *)(param_1 + 8 + param_2 * 8) -
                                                 fVar4) / ((float10)*(float *)(param_1 + iVar1 * 8)
                                                          - fVar4)))))));
  }
  return (float10)fVar2;
}

/* ref: FUN_009802f0 */
float10 F_009802f0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9802f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float local_c;
  
  pfVar2 = (float *)(param_1 + 8 + param_3 * 8);
  fVar5 = (float10)*(float *)(param_1 + param_3 * 8);
  iVar1 = param_3 + 2;
  fVar3 = ((float)GEN_TOF((((float10)param_2 - fVar5) / ((float10)*pfVar2 - fVar5))));
  local_c = ((float)GEN_TOF(((float10)pfVar2[1] - (float10)*(float *)(param_1 + 4 + param_3 * 8))));
  if (iVar1 <= *(int *)(param_1 + 0x20) + -1) {
    fVar5 = (float10)*(float *)(param_1 + param_3 * 8);
    local_c = ((float)GEN_TOF((((float10)local_c + ((float10)*(float *)(param_1 + 4 + iVar1 * 8) - (float10)pfVar2[1])) * (float10)((float)GEN_TOF((((float10)*pfVar2 - fVar5) / ((float10)*(float *)(param_1 + iVar1 * 8) - fVar5)))))));
  }
  fVar6 = (float10)fVar3;
  fVar7 = (float10)(float)(fVar6 * fVar6);
  fVar4 = (float)(fVar7 * fVar6);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  fVar8 = F_00980210(param_1,param_3);
  fVar6 = (float10)(float)(fVar6 * fVar6);
  fVar5 = (float10)(double)(fVar7 * fVar5);
  return (float10)((float)GEN_TOF(((float10)(float)((float10)fVar4 - fVar6) * (float10)local_c + (((float10)((float)GEN_TOF((fVar5 - (float10)(fVar4 + fVar4)))) * (float10)pfVar2[1] + (float10)((float)GEN_TOF((((float10)(fVar4 + fVar4) - fVar5) + (float10)REFG(double, 0x1088130)))) * (float10)*(float *)(((int)(uint)(param_1)) + 4 + param_3 * 8)) + (float10)((float)GEN_TOF(((float10)fVar3 + ((float10)fVar4 - (fVar6 + fVar6))))) * fVar8))));
}

/* ref: FUN_00980400 */
uint F_00980400(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x980400u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x20) + -1;
  if (-1 < iVar3) {
    do {
      uVar1 = (iVar3 - iVar2 >> 1) + iVar2;
      if ((float10)param_2 < (float10)*(float *)(param_1 + uVar1 * 8)) {
        iVar3 = uVar1 - 1;
      }
      else {
        if (!((float10)*(float *)(param_1 + 8 + uVar1 * 8) < (float10)param_2)) {
          return uVar1;
        }
        iVar2 = uVar1 + 1;
      }
    } while (iVar2 <= iVar3);
  }
  return 0;
}

/* ref: FUN_00980450 */
uint F_00980450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x980450u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_00980460 */
uint F_00980460(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x980460u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 4 + param_2 * 8) = param_3;
  return param_2;
}

/* ref: FUN_00980480 */
uint F_00980480(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x980480u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + param_2 * 8) = param_3;
  return param_2;
}

/* ref: FUN_009804a0 */
float10 F_009804a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9804a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  float10 fVar2;
  
  if ((float10)param_2 <= (float10)*param_1) {
    return (float10)param_1[1];
  }
  if (((float10)GEN_TOD(param_1[(int)gen_fl2bits(param_1[8]) * 2 + -2])) <= (float10)param_2) {
    return ((float10)GEN_TOD((param_1 + (int)gen_fl2bits(param_1[8]) * 2 + -2)[1]));
  }
  uVar1 = F_00980400(param_1,param_2);
  fVar2 = F_009802f0(((undefined4)(uint)(param_1)),param_2,uVar1);
  return fVar2;
}

/* ref: FUN_009804f0 */
uint F_009804f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9804f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de010));
  *(int * PTR32 *)((int)this + 4) = param_1;
  if (param_1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x34))(param_1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,(int)this + 8);
  }
  return (uint)this;
}

/* ref: FUN_00980540 */
uint F_00980540(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x980540u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x34))))(*(int * PTR32 *)(param_1 + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  return uVar2;
}

/* ref: Apricot::Engine::Instance::LineParticleInstance::vf26 */
uint F_009805e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9805e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)(this + 0x1a8);
  uVar2 = *(undefined4 *)(this + 0x1ac);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xa8))))(*(int * PTR32 *)(this + 0x29c))));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
  ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,uVar1,uVar2,this + 0x32d,*(undefined4 *)(this + 0x2f0),2);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xa8))))(*(int * PTR32 *)(this + 0x29c))));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3)));
  ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,uVar1,uVar2,this + 0x332,*(int *)(this + 0x2f0) + 0x10,2);
  uVar4 = F_0097ef70(this);
  return uVar4;
}

/* ref: Apricot::Engine::Instance::LineParticleInstance::vf29 */
uint F_00980690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x980690u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xa4))))(*(int * PTR32 *)(this + 0x29c));
  if (((char)uVar1 != '\0') && (*(int *)(this + 0x298) == 0)) {
    return uVar1;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x84))(this);
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f0f4))[(int)((char)this[0x337])])))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_009806e0 */
uint F_009806e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9806e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * in_EAX = 0;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  if (*(int *)((int)this + 0x298) != 0) {
    in_EAX = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0xf4))))(*(int * PTR32 *)((int)this + 0x29c))));
    iVar3 = (int)*(short *)(in_EAX + 0x2e);
    if (0 < iVar3) {
      puVar1 = param_1;
      do {
        in_EAX = puVar1 + 0x14;
        iVar3 = iVar3 + -1;
        puVar4 = ((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
        for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar1 = in_EAX;
      } while (iVar3 != 0);
    }
  }
  return (uint)in_EAX;
}

/* ref: Apricot::Engine::Instance::PowderParticleInstance::vf29 */
uint F_00980740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x980740u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x29c) + 0xa4))))(*(int * PTR32 *)(this + 0x29c));
  if (((char)uVar1 != '\0') && (*(int *)(this + 0x298) == 0)) {
    return uVar1;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x84))(this);
  uVar1 = ((code *)*(gen_code32 *)(this + 0x348))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00980780 */
uint F_00980780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x980780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * in_EAX = 0;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  if (*(int *)((int)this + 0x298) != 0) {
    in_EAX = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x29c) + 0xf4))))(*(int * PTR32 *)((int)this + 0x29c))));
    iVar3 = (int)*(short *)(in_EAX + 0x2e);
    if (0 < iVar3) {
      puVar1 = param_1;
      do {
        in_EAX = puVar1 + 0x14;
        iVar3 = iVar3 + -1;
        puVar4 = ((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
        for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar1 = in_EAX;
      } while (iVar3 != 0);
    }
  }
  return (uint)in_EAX;
}

/* ref: Apricot::Engine::Instance::WindmillParticleInstance::vf25 */
unsigned int F_009807e0(void)
{
  GEN_ENTER(0x9807e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_009808e0 */
unsigned int F_009808e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9808e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  int local_8;
  
  local_8 = *(int *)((int)this + 0x318);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10de25c));
  uVar1 = REFG(undefined4, 0x14a09e8);
  if (0 < local_8) {
    piVar3 = (int *)((int)this + 800);
    uVar2 = REFG(undefined4, 0x14a09e8);
    do {
      uVar1 = uVar2;
      if (*piVar3 != 0) {
        uVar1 = (uint)(*piVar3 - REFG(int, 0x14a09f4)) >> 10;
        *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = uVar2;
        REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
        REFG(undefined4, 0x14a09e8) = uVar1;
      }
      piVar3 = piVar3 + 1;
      local_8 = local_8 + -1;
      uVar2 = uVar1;
    } while (local_8 != 0);
  }
  if (*(int *)((int)this + 0x31c) != 0) {
    REFG(undefined4, 0x14a09e8) = (uint)(*(int *)((int)this + 0x31c) - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(REFG(undefined4, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4)) = uVar1;
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(this);
  return 0;
}

/* ref: FUN_00980980 */
unsigned int F_00980980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x980980u, gen_a0, gen_a1, gen_a2, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  short sVar1;
  short sVar2;
  short * psVar3;
  int iVar4;
  
  iVar4 = param_3 + -1;
  if (iVar4 != 0) {
    psVar3 = param_1;
    sVar2 = (short)param_2 + 1;
    do {
      *psVar3 = sVar2 + -1;
      psVar3[1] = sVar2;
      sVar1 = sVar2 + 3;
      psVar3[2] = sVar1;
      psVar3[3] = sVar1;
      psVar3[4] = sVar2 + 2;
      psVar3[5] = sVar2 + -1;
      psVar3[6] = sVar2;
      psVar3[7] = sVar2 + 1;
      psVar3[8] = sVar1;
      psVar3[9] = sVar2 + 1;
      psVar3[10] = sVar2 + 4;
      psVar3[0xb] = sVar1;
      psVar3 = psVar3 + 0xc;
      iVar4 = iVar4 + -1;
      sVar2 = sVar1;
    } while (iVar4 != 0);
  }
  return 0;
}

/* ref: FUN_009809f0 */
uint F_009809f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9809f0u, gen_a0, gen_a1, gen_a2, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  short sVar1;
  short * in_EAX = 0;
  int iVar2;
  
  iVar2 = param_3 + -1;
  if (iVar2 != 0) {
    sVar1 = (short)param_2 + 3;
    in_EAX = param_1;
    do {
      *in_EAX = sVar1 + -3;
      in_EAX[1] = sVar1 + -2;
      in_EAX[2] = sVar1;
      in_EAX[3] = sVar1;
      in_EAX[4] = sVar1 + -1;
      in_EAX[5] = sVar1 + -3;
      in_EAX = in_EAX + 6;
      sVar1 = sVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return (uint)in_EAX;
}

/* ref: Apricot::Engine::Instance::QuadParticleInstance::vf25 */
unsigned int F_00980a90(void)
{
  GEN_ENTER(0x980a90u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::DecalParticleInstance::vf13 */
unsigned int F_00980af0(unsigned int gen_a0)
{
  GEN_ENTER(0x980af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  for (piVar1 = *(int * PTR32 *)(this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1);
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::DecalRingParticleInstance::vf13 */
unsigned int F_00980b70(unsigned int gen_a0)
{
  GEN_ENTER(0x980b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  for (piVar1 = *(int * PTR32 *)(this + 0x1e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x7a]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1);
  }
  return 0;
}

/* ref: FUN_00980bf0 */
unsigned int F_00980bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x980bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  short * psVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int local_8;
  
  cVar1 = *((char *)GEN_TOP((*(int *)((int)this + 0x304) + 0xd1)));
  iVar5 = *((char *)GEN_TOP((*(int *)((int)this + 0x304) + 0xd2))) + -1;
  local_8 = 0;
  psVar6 = param_1;
  if (0 < iVar5) {
    do {
      iVar9 = 0;
      if (0 < cVar1 + -1) {
        sVar3 = (short)local_8 * (short)cVar1;
        sVar2 = ((short)local_8 + 1) * (short)cVar1;
        do {
          sVar4 = (short)iVar9;
          *psVar6 = sVar3 + sVar4 + (short)param_2;
          sVar8 = sVar3 + sVar4 + 1 + (short)param_2;
          psVar6[1] = sVar8;
          sVar7 = sVar4 + sVar2 + (short)param_2;
          psVar6[2] = sVar7;
          psVar6[3] = sVar7;
          psVar6[4] = sVar8;
          psVar6[5] = sVar4 + 1 + sVar2 + (short)param_2;
          iVar9 = iVar9 + 1;
          psVar6 = psVar6 + 6;
        } while (iVar9 < cVar1 + -1);
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar5);
  }
  return 0;
}

/* ref: FUN_00980cd0 */
uint F_00980cd0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x980cd0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return (uint)in_ecx;
}

/* ref: FUN_00980d00 */
uint F_00980d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x980d00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_00980da0 */
uint F_00980da0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x980da0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  return (uint)in_ecx;
}

/* ref: FUN_00980dd0 */
uint F_00980dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x980dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_00980df0 */
uint F_00980df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x980df0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 * (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] * (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] * (float10)param_3[2]);
  return (uint)param_2;
}

/* ref: FUN_00980e20 */
unsigned int F_00980e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x980e20u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  
  fVar1 = (float10)param_4;
  *param_1 = ((float)GEN_TOF((fVar1 * ((float10)*param_3 - (float10)*(float *)param_2) +
                    (float10)*(float *)param_2)));
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) +
                      fVar1 * ((float10)param_3[1] - (float10)*(float *)(param_2 + 4)))));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) +
                      ((float10)param_3[2] - (float10)*(float *)(param_2 + 8)) * fVar1)));
  return 0;
}

/* ref: FUN_00980e80 */
unsigned int F_00980e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x980e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  *param_1 = ((float)GEN_TOF(((float10)*(float *)param_2 +
                    (float10)*param_4 * ((float10)*param_3 - (float10)*(float *)param_2))));
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) +
                      (float10)param_4[1] * ((float10)param_3[1] - (float10)*(float *)(param_2 + 4))
                      )));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) +
                      (float10)param_4[2] * ((float10)param_3[2] - (float10)*(float *)(param_2 + 8))
                      )));
  return 0;
}

/* ref: FUN_00980ee0 */
uint F_00980ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x980ee0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * (float10)param_3[2] +
                 ((float10)*(float *)param_2 * (float10)*param_3 +
                 (float10)*(float *)(param_2 + 4) * (float10)param_3[1]))));
  *param_1 = fVar1;
  param_1[1] = fVar1;
  param_1[2] = fVar1;
  return (uint)param_1;
}

/* ref: FUN_00980f10 */
uint F_00980f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x980f10u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)param_2[1] * (float10)param_3[2] -
                    (float10)param_2[2] * (float10)param_3[1]);
  param_1[1] = (float)((float10)param_2[2] * (float10)*param_3 -
                      (float10)*param_2 * (float10)param_3[2]);
  param_1[2] = (float)((float10)param_3[1] * (float10)*param_2 -
                      (float10)*param_3 * (float10)param_2[1]);
  return (uint)param_2;
}

/* ref: FUN_00980f50 */
uint F_00980f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x980f50u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * (float10)*(float *)(param_2 + 8) +
                 ((float10)*(float *)param_2 * (float10)*(float *)param_2 +
                 (float10)*(float *)(param_2 + 4) * (float10)*(float *)(param_2 + 4)))));
  *param_1 = fVar1;
  param_1[1] = fVar1;
  param_1[2] = fVar1;
  return (uint)param_1;
}

/* ref: FUN_00980f90 */
uint F_00980f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x980f90u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  
  fVar1 = *(float *)(param_3 + 0xc);
  fVar13 = (float10)*(float *)param_2;
  fVar2 = *(float *)(param_3 + 0x1c);
  fVar14 = (float10)*(float *)(param_2 + 4);
  fVar3 = *(float *)(param_3 + 0x2c);
  fVar15 = (float10)*(float *)(param_2 + 8);
  fVar4 = *(float *)(param_3 + 0x3c);
  fVar5 = *(float *)(param_3 + 4);
  fVar6 = *(float *)(param_3 + 0x14);
  fVar7 = *(float *)(param_3 + 0x24);
  fVar8 = *(float *)(param_3 + 0x34);
  fVar9 = *(float *)(param_3 + 0x10);
  fVar10 = *(float *)param_3;
  fVar11 = *(float *)(param_3 + 0x20);
  fVar12 = *(float *)(param_3 + 0x30);
  param_1[2] = ((float)GEN_TOF((((float10)*(float *)(param_3 + 0x28) * fVar15 +
                       ((float10)*(float *)(param_3 + 0x18) * fVar14 +
                       (float10)*(float *)(param_3 + 8) * fVar13)) +
                      (float10)*(float *)(param_3 + 0x38))));
  *param_1 = ((float)GEN_TOF(((((float10)fVar9 * fVar14 + (float10)fVar10 * fVar13) +
                     (float10)fVar11 * fVar15) + (float10)fVar12)));
  param_1[3] = ((float)GEN_TOF((((fVar13 * (float10)fVar1 + fVar14 * (float10)fVar2) +
                       fVar15 * (float10)fVar3) + (float10)fVar4)));
  param_1[1] = ((float)GEN_TOF((((float10)fVar7 * fVar15 +
                       ((float10)fVar6 * fVar14 + (float10)fVar5 * fVar13)) + (float10)fVar8)));
  return (uint)param_1;
}

/* ref: FUN_00981050 */
uint F_00981050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x981050u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar7 = (float10)*(float *)param_2;
  fVar8 = (float10)*(float *)(param_2 + 4);
  fVar9 = (float10)*(float *)(param_2 + 8);
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0x10);
  fVar3 = *(float *)(param_3 + 0x1c);
  fVar4 = *(float *)(param_3 + 0xc);
  fVar5 = *(float *)param_3;
  fVar6 = *(float *)(param_3 + 0x18);
  param_1[2] = ((float)GEN_TOF(((fVar7 * (float10)*(float *)(param_3 + 8) +
                       fVar8 * (float10)*(float *)(param_3 + 0x14)) +
                      fVar9 * (float10)*(float *)(param_3 + 0x20))));
  *param_1 = ((float)GEN_TOF((((float10)fVar4 * fVar8 + (float10)fVar5 * fVar7) + (float10)fVar6 * fVar9)));
  param_1[1] = ((float)GEN_TOF(((float10)fVar3 * fVar9 + ((float10)fVar2 * fVar8 + (float10)fVar1 * fVar7))));
  return (uint)param_1;
}

/* ref: FUN_009810e0 */
uint F_009810e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9810e0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar7 = (float10)*(float *)param_2;
  fVar8 = (float10)*(float *)(param_2 + 4);
  fVar9 = (float10)*(float *)(param_2 + 8);
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 0x10);
  fVar5 = *(float *)param_3;
  fVar6 = *(float *)(param_3 + 0x20);
  param_1[2] = ((float)GEN_TOF(((fVar7 * (float10)*(float *)(param_3 + 8) +
                       fVar8 * (float10)*(float *)(param_3 + 0x18)) +
                      fVar9 * (float10)*(float *)(param_3 + 0x28))));
  *param_1 = ((float)GEN_TOF((((float10)fVar4 * fVar8 + (float10)fVar5 * fVar7) + (float10)fVar6 * fVar9)));
  param_1[1] = ((float)GEN_TOF(((float10)fVar3 * fVar9 + ((float10)fVar2 * fVar8 + (float10)fVar1 * fVar7))));
  return (uint)param_1;
}

/* ref: FUN_00981170 */
uint F_00981170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x981170u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar9 = (float10)*(float *)param_2;
  fVar10 = (float10)*(float *)(param_2 + 4);
  fVar11 = (float10)*(float *)(param_2 + 8);
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0x10);
  fVar3 = *(float *)(param_3 + 0x1c);
  fVar4 = *(float *)(param_3 + 0x28);
  fVar5 = *(float *)(param_3 + 0xc);
  fVar6 = *(float *)param_3;
  fVar7 = *(float *)(param_3 + 0x18);
  fVar8 = *(float *)(param_3 + 0x24);
  param_1[2] = ((float)GEN_TOF((((fVar9 * (float10)*(float *)(param_3 + 8) +
                        fVar10 * (float10)*(float *)(param_3 + 0x14)) +
                       fVar11 * (float10)*(float *)(param_3 + 0x20)) +
                      (float10)*(float *)(param_3 + 0x2c))));
  *param_1 = ((float)GEN_TOF(((((float10)fVar5 * fVar10 + (float10)fVar6 * fVar9) + (float10)fVar7 * fVar11)
                    + (float10)fVar8)));
  param_1[1] = ((float)GEN_TOF((((float10)fVar3 * fVar11 + ((float10)fVar2 * fVar10 + (float10)fVar1 * fVar9)
                       ) + (float10)fVar4)));
  return (uint)param_1;
}

/* ref: FUN_00981210 */
uint F_00981210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x981210u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar9 = (float10)*(float *)param_2;
  fVar10 = (float10)*(float *)(param_2 + 4);
  fVar11 = (float10)*(float *)(param_2 + 8);
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 0x34);
  fVar5 = *(float *)(param_3 + 0x10);
  fVar6 = *(float *)param_3;
  fVar7 = *(float *)(param_3 + 0x20);
  fVar8 = *(float *)(param_3 + 0x30);
  param_1[2] = ((float)GEN_TOF((((fVar9 * (float10)*(float *)(param_3 + 8) +
                        fVar10 * (float10)*(float *)(param_3 + 0x18)) +
                       fVar11 * (float10)*(float *)(param_3 + 0x28)) +
                      (float10)*(float *)(param_3 + 0x38))));
  *param_1 = ((float)GEN_TOF(((((float10)fVar5 * fVar10 + (float10)fVar6 * fVar9) + (float10)fVar7 * fVar11)
                    + (float10)fVar8)));
  param_1[1] = ((float)GEN_TOF((((float10)fVar3 * fVar11 + ((float10)fVar2 * fVar10 + (float10)fVar1 * fVar9)
                       ) + (float10)fVar4)));
  return (uint)param_1;
}

/* ref: FUN_00981310 */
uint F_00981310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x981310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  return (uint)in_ecx;
}

/* ref: FUN_00981370 */
unsigned int F_00981370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x981370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = *param_3;
  in_ecx[4] = param_3[1];
  in_ecx[5] = param_3[2];
  in_ecx[6] = *param_4;
  in_ecx[7] = param_4[1];
  in_ecx[8] = param_4[2];
  in_ecx[9] = *param_5;
  in_ecx[10] = param_5[1];
  in_ecx[0xb] = param_5[2];
  return 0;
}

/* ref: FUN_009813d0 */
uint F_009813d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9813d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[3];
  param_1[2] = param_2[6];
  param_1[3] = param_2[1];
  param_1[4] = param_2[4];
  param_1[5] = param_2[7];
  param_1[6] = param_2[2];
  param_1[7] = param_2[5];
  uVar1 = param_2[8];
  param_1[9] = 0;
  param_1[8] = uVar1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return (uint)param_1;
}

/* ref: FUN_00981430 */
byte F_00981430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x981430u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float fVar21;
  float fVar22;
  
  fVar10 = REFG(float, 0x1087f04);
  fVar1 = *(float *)param_2;
  fVar4 = *(float *)(param_2 + 0x1c);
  fVar5 = *(float *)(param_2 + 0x20);
  fVar11 = (float10)fVar5;
  fVar2 = *(float *)(param_2 + 0x18);
  fVar12 = (float10)*(float *)(param_2 + 0x10);
  fVar3 = *(float *)(param_2 + 0x24);
  fVar21 = *(float *)(param_2 + 0x28);
  fVar22 = *(float *)(param_2 + 0x2c);
  fVar13 = (float10)*(float *)(param_2 + 0x14);
  fVar14 = (float10)*(float *)(param_2 + 8);
  fVar15 = (float10)*(float *)(param_2 + 4);
  fVar16 = (float10)*(float *)(param_2 + 0xc);
  dVar7 = (double)((float10)fVar22 * (float10)fVar2 - (float10)fVar3 * (float10)fVar5);
  dVar8 = (double)((float10)fVar22 * (float10)fVar4 - (float10)fVar21 * (float10)fVar5);
  dVar9 = (double)((float10)fVar21 * (float10)fVar2 - (float10)fVar3 * (float10)fVar4);
  fVar17 = (float10)(float)((float10)fVar2 * fVar13 - fVar16 * fVar11);
  fVar18 = (float10)(float)(fVar12 * fVar11 - fVar13 * (float10)fVar4);
  fVar19 = (float10)(float)((float10)fVar4 * fVar16 - (float10)fVar2 * fVar12);
  fVar6 = ((float)GEN_TOF(((fVar17 * fVar15 + fVar18 * (float10)fVar1) + fVar19 * fVar14)));
  fVar20 = (float10)fVar6;
  if (((float10)*(double *)&REFG(undefined, 0x10de528) <= fVar20) && (fVar6 <= ((float)GEN_TOF((*(float (*)[1])REFP(0x10de524))[0])))) {
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = fVar10;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[8] = fVar10;
    fVar21 = gen_bits2f((uint)gen_fl2bits(fVar21) ^ REFG(uint, 0x10920d0));
    fVar22 = gen_bits2f((uint)gen_fl2bits(fVar22) ^ REFG(uint, 0x10920d0));
    param_1[9] = gen_bits2f((uint)gen_fl2bits(fVar3) ^ REFG(uint, 0x10920d0));
    param_1[10] = fVar21;
    param_1[0xb] = fVar22;
    return 0;
  }
  fVar20 = (float10)(float)((float10)1 / fVar20);
  *param_1 = (float)(fVar20 * fVar18);
  param_1[1] = ((float)GEN_TOF((fVar20 * (float10)(float)(fVar14 * (float10)fVar4 - fVar15 * fVar11))));
  param_1[2] = ((float)GEN_TOF((fVar20 * (float10)(float)(fVar13 * fVar15 - fVar12 * fVar14))));
  param_1[3] = (float)(fVar20 * fVar17);
  param_1[4] = ((float)GEN_TOF((fVar20 * (float10)(float)((float10)fVar5 * (float10)fVar1 -
                                                (float10)fVar2 * fVar14))));
  param_1[5] = ((float)GEN_TOF((fVar20 * (float10)(float)(fVar16 * fVar14 - fVar13 * (float10)fVar1))));
  param_1[6] = (float)(fVar20 * fVar19);
  param_1[7] = ((float)GEN_TOF((fVar20 * (float10)(float)((float10)fVar2 * fVar15 -
                                                (float10)fVar4 * (float10)fVar1))));
  param_1[8] = ((float)GEN_TOF((fVar20 * (float10)(float)(fVar12 * (float10)fVar1 - fVar16 * fVar15))));
  param_1[9] = ((float)GEN_TOF((fVar20 * (float10)((float)GEN_TOF(((fVar12 * (float10)dVar7 - fVar16 * (float10)dVar8)
                                                - fVar13 * (float10)dVar9))))));
  param_1[10] = ((float)GEN_TOF((fVar20 * (float10)((float)GEN_TOF((fVar14 * (float10)dVar9 +
                                                 ((float10)fVar1 * (float10)dVar8 -
                                                 fVar15 * (float10)dVar7)))))));
  param_1[0xb] = ((float)GEN_TOF((fVar20 * (float10)((float)GEN_TOF(((((float10)fVar22 * fVar16 -
                                                    (float10)fVar3 * fVar13) * fVar15 -
                                                   (float10)fVar1 *
                                                   ((float10)fVar22 * fVar12 -
                                                   (float10)fVar21 * fVar13)) -
                                                  fVar14 * ((float10)fVar21 * fVar16 -
                                                           (float10)fVar3 * fVar12)))))));
  return 1;
}

/* ref: FUN_00981700 */
unsigned int F_00981700(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x981700u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar8 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * (float10)REFG(double, 0x1088108)))));
  fVar4 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * (float10)REFG(double, 0x1088108)))));
  fVar5 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_3 * (float10)REFG(double, 0x1088108)))));
  fVar6 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_3 * (float10)REFG(double, 0x1088108)))));
  fVar3 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_4 * (float10)REFG(double, 0x1088108)))));
  fVar2 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_4 * (float10)REFG(double, 0x1088108)))));
  fVar7 = (float10)(float)fVar8 * (float10)(float)fVar6;
  fVar1 = (float10)(float)fVar5 * (float10)(float)fVar4;
  fVar2 = (float10)(float)fVar2;
  fVar3 = (float10)(float)fVar3;
  fVar9 = (float10)(float)fVar4 * (float10)(float)fVar6;
  fVar8 = (float10)(float)fVar5 * (float10)(float)fVar8;
  fVar4 = (float10)(float)(fVar2 * fVar7 - fVar3 * fVar1);
  fVar5 = (float10)(float)(fVar2 * fVar1 + fVar3 * fVar7);
  fVar6 = (float10)(float)(fVar3 * fVar9 - fVar2 * fVar8);
  fVar3 = (float10)(float)(fVar3 * fVar8 + fVar2 * fVar9);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar8 = (float10)1;
  *param_1 = ((float)GEN_TOF((fVar8 - ((float10)(float)(fVar5 * fVar5) + (float10)(float)(fVar6 * fVar6)) *
                             fVar2)));
  param_1[1] = ((float)GEN_TOF((((float10)(float)(fVar5 * fVar4) - (float10)(float)(fVar6 * fVar3)) * fVar2)));
  param_1[2] = ((float)GEN_TOF((((float10)(float)(fVar3 * fVar5) + (float10)(float)(fVar6 * fVar4)) * fVar2)));
  param_1[3] = ((float)GEN_TOF((((float10)(float)(fVar6 * fVar3) + (float10)(float)(fVar5 * fVar4)) * fVar2)));
  param_1[4] = ((float)GEN_TOF((fVar8 - ((float10)(float)(fVar4 * fVar4) + (float10)(float)(fVar6 * fVar6)) *
                               fVar2)));
  param_1[5] = ((float)GEN_TOF((((float10)(float)(fVar6 * fVar5) - (float10)(float)(fVar3 * fVar4)) * fVar2)));
  param_1[6] = ((float)GEN_TOF((((float10)(float)(fVar6 * fVar4) - (float10)(float)(fVar3 * fVar5)) * fVar2)));
  param_1[7] = ((float)GEN_TOF((((float10)(float)(fVar3 * fVar4) + (float10)(float)(fVar6 * fVar5)) * fVar2)));
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  param_1[8] = ((float)GEN_TOF((fVar8 - fVar2 * ((float10)(float)(fVar5 * fVar5) +
                                       (float10)(float)(fVar4 * fVar4)))));
  return 0;
}

/* ref: FUN_009818e0 */
uint F_009818e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9818e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 uVar1;
  float10 fVar2;
  float10 fVar3;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  fVar2 = ((float10)GEN_TOD(fcos((float10)param_2)));
  fVar3 = ((float10)GEN_TOD(fsin((float10)param_2)));
  param_1[4] = (undefined4)gen_fl2bits((float)fVar2);
  *param_1 = uVar1;
  param_1[5] = (undefined4)gen_fl2bits((float)fVar3);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[7] = (undefined4)gen_fl2bits(((float)GEN_TOF(-(float10)(float)fVar3)));
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[8] = (undefined4)gen_fl2bits((float)fVar2);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return (uint)param_1;
}

/* ref: FUN_00981960 */
uint F_00981960(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x981960u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = REFG(float, 0x1087f04);
  fVar2 = ((float10)GEN_TOD(fcos((float10)param_2)));
  fVar3 = ((float10)GEN_TOD(fsin((float10)param_2)));
  *param_1 = (float)fVar2;
  param_1[4] = fVar1;
  param_1[1] = 0.0;
  param_1[3] = 0.0;
  param_1[2] = ((float)GEN_TOF(-(float10)(float)fVar3));
  param_1[5] = 0.0;
  param_1[7] = 0.0;
  param_1[6] = (float)fVar3;
  param_1[8] = (float)fVar2;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  return (uint)param_1;
}

/* ref: FUN_009819e0 */
uint F_009819e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9819e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = REFG(float, 0x1087f04);
  fVar2 = ((float10)GEN_TOD(fcos((float10)param_2)));
  fVar3 = ((float10)GEN_TOD(fsin((float10)param_2)));
  *param_1 = (float)fVar2;
  param_1[2] = 0.0;
  param_1[5] = 0.0;
  param_1[1] = (float)fVar3;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[3] = ((float)GEN_TOF(-(float10)(float)fVar3));
  param_1[8] = fVar1;
  param_1[9] = 0.0;
  param_1[4] = (float)fVar2;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  return (uint)param_1;
}

/* ref: FUN_00981a60 */
unsigned int F_00981a60(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x981a60u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = ((float10)GEN_TOD(fcos((float10)param_3)));
  fVar3 = ((float10)GEN_TOD(fsin((float10)param_3)));
  fVar1 = (float10)(float)fVar1;
  fVar2 = (float10)(float)((float10)1 - fVar1);
  *param_1 = ((float)GEN_TOF((fVar1 + fVar2 * ((float10)*param_2 * (float10)*param_2))));
  fVar3 = (float10)(float)fVar3;
  param_1[1] = ((float)GEN_TOF((((float10)*param_2 * (float10)param_2[1]) * fVar2 +
                      fVar3 * (float10)param_2[2])));
  param_1[2] = ((float)GEN_TOF((((float10)param_2[2] * (float10)*param_2) * fVar2 -
                      fVar3 * (float10)param_2[1])));
  param_1[3] = ((float)GEN_TOF((((float10)*param_2 * (float10)param_2[1]) * fVar2 -
                      (float10)param_2[2] * fVar3)));
  param_1[4] = ((float)GEN_TOF((((float10)param_2[1] * (float10)param_2[1]) * fVar2 + fVar1)));
  param_1[5] = ((float)GEN_TOF(((float10)*param_2 * fVar3 +
                      ((float10)param_2[2] * (float10)param_2[1]) * fVar2)));
  param_1[6] = ((float)GEN_TOF((fVar3 * (float10)param_2[1] +
                      ((float10)param_2[2] * (float10)*param_2) * fVar2)));
  param_1[7] = ((float)GEN_TOF((((float10)param_2[2] * (float10)param_2[1]) * fVar2 -
                      (float10)*param_2 * fVar3)));
  param_1[8] = ((float)GEN_TOF((((float10)param_2[2] * (float10)param_2[2]) * fVar2 + fVar1)));
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  return 0;
}

/* ref: FUN_00981b50 */
uint F_00981b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x981b50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = 0;
  *param_1 = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2[1];
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2[2];
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return (uint)param_1;
}

/* ref: FUN_00981ba0 */
uint F_00981ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x981ba0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = ((float)GEN_TOF(((float10)param_2[2] * (float10)param_3[6] +
                    ((float10)param_2[1] * (float10)param_3[3] +
                    (float10)*param_2 * (float10)*param_3))));
  param_1[1] = ((float)GEN_TOF(((float10)param_2[2] * (float10)param_3[7] +
                      ((float10)param_3[1] * (float10)*param_2 +
                      (float10)param_2[1] * (float10)param_3[4]))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] * (float10)param_3[8] +
                      ((float10)param_3[2] * (float10)*param_2 +
                      (float10)param_3[5] * (float10)param_2[1]))));
  param_1[3] = ((float)GEN_TOF(((float10)param_2[5] * (float10)param_3[6] +
                      ((float10)*param_3 * (float10)param_2[3] +
                      (float10)param_2[4] * (float10)param_3[3]))));
  param_1[4] = ((float)GEN_TOF(((float10)param_2[5] * (float10)param_3[7] +
                      ((float10)param_3[1] * (float10)param_2[3] +
                      (float10)param_2[4] * (float10)param_3[4]))));
  param_1[5] = ((float)GEN_TOF(((float10)param_2[5] * (float10)param_3[8] +
                      ((float10)param_3[2] * (float10)param_2[3] +
                      (float10)param_3[5] * (float10)param_2[4]))));
  param_1[6] = ((float)GEN_TOF(((float10)param_3[6] * (float10)param_2[8] +
                      ((float10)param_2[6] * (float10)*param_3 +
                      (float10)param_2[7] * (float10)param_3[3]))));
  param_1[7] = ((float)GEN_TOF(((float10)param_3[7] * (float10)param_2[8] +
                      ((float10)param_3[1] * (float10)param_2[6] +
                      (float10)param_2[7] * (float10)param_3[4]))));
  param_1[8] = ((float)GEN_TOF(((float10)param_2[8] * (float10)param_3[8] +
                      ((float10)param_2[7] * (float10)param_3[5] +
                      (float10)param_2[6] * (float10)param_3[2]))));
  return (uint)param_2;
}

/* ref: FUN_00981c90 */
uint F_00981c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x981c90u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = ((float)GEN_TOF(((float10)param_2[2] * (float10)param_3[6] +
                    ((float10)param_2[1] * (float10)param_3[3] +
                    (float10)*param_2 * (float10)*param_3))));
  param_1[1] = ((float)GEN_TOF(((float10)param_2[2] * (float10)param_3[7] +
                      ((float10)param_3[1] * (float10)*param_2 +
                      (float10)param_2[1] * (float10)param_3[4]))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] * (float10)param_3[8] +
                      ((float10)param_3[2] * (float10)*param_2 +
                      (float10)param_3[5] * (float10)param_2[1]))));
  param_1[3] = ((float)GEN_TOF(((float10)param_2[5] * (float10)param_3[6] +
                      ((float10)*param_3 * (float10)param_2[3] +
                      (float10)param_2[4] * (float10)param_3[3]))));
  param_1[4] = ((float)GEN_TOF(((float10)param_2[5] * (float10)param_3[7] +
                      ((float10)param_3[1] * (float10)param_2[3] +
                      (float10)param_2[4] * (float10)param_3[4]))));
  param_1[5] = ((float)GEN_TOF(((float10)param_2[5] * (float10)param_3[8] +
                      ((float10)param_3[2] * (float10)param_2[3] +
                      (float10)param_3[5] * (float10)param_2[4]))));
  param_1[6] = ((float)GEN_TOF(((float10)param_3[6] * (float10)param_2[8] +
                      ((float10)param_2[6] * (float10)*param_3 +
                      (float10)param_2[7] * (float10)param_3[3]))));
  param_1[7] = ((float)GEN_TOF(((float10)param_3[7] * (float10)param_2[8] +
                      ((float10)param_3[1] * (float10)param_2[6] +
                      (float10)param_2[7] * (float10)param_3[4]))));
  param_1[8] = ((float)GEN_TOF(((float10)param_2[8] * (float10)param_3[8] +
                      ((float10)param_2[7] * (float10)param_3[5] +
                      (float10)param_2[6] * (float10)param_3[2]))));
  param_1[9] = ((float)GEN_TOF((((float10)param_3[6] * (float10)param_2[0xb] +
                       ((float10)param_2[10] * (float10)param_3[3] +
                       (float10)param_2[9] * (float10)*param_3)) + (float10)param_3[9])));
  param_1[10] = ((float)GEN_TOF((((float10)param_2[0xb] * (float10)param_3[7] +
                        ((float10)param_2[10] * (float10)param_3[4] +
                        (float10)param_2[9] * (float10)param_3[1])) + (float10)param_3[10])));
  param_1[0xb] = ((float)GEN_TOF((((float10)param_2[0xb] * (float10)param_3[8] +
                         ((float10)param_2[9] * (float10)param_3[2] +
                         (float10)param_3[5] * (float10)param_2[10])) + (float10)param_3[0xb])));
  return (uint)param_3;
}

/* ref: FUN_00981dd0 */
unsigned int F_00981dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x981dd0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = ((float)GEN_TOF(((float10)param_3[8] * (float10)param_2[2] +
                    ((float10)param_2[1] * (float10)param_3[4] +
                    (float10)*param_2 * (float10)*param_3))));
  param_1[1] = ((float)GEN_TOF(((float10)param_2[2] * (float10)param_3[9] +
                      ((float10)param_3[1] * (float10)*param_2 +
                      (float10)param_2[1] * (float10)param_3[5]))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] * (float10)param_3[10] +
                      ((float10)param_3[2] * (float10)*param_2 +
                      (float10)param_3[6] * (float10)param_2[1]))));
  param_1[3] = ((float)GEN_TOF(((float10)param_2[5] * (float10)param_3[8] +
                      ((float10)*param_3 * (float10)param_2[3] +
                      (float10)param_2[4] * (float10)param_3[4]))));
  param_1[4] = ((float)GEN_TOF(((float10)param_2[5] * (float10)param_3[9] +
                      ((float10)param_3[1] * (float10)param_2[3] +
                      (float10)param_2[4] * (float10)param_3[5]))));
  param_1[5] = ((float)GEN_TOF(((float10)param_2[5] * (float10)param_3[10] +
                      ((float10)param_3[2] * (float10)param_2[3] +
                      (float10)param_3[6] * (float10)param_2[4]))));
  param_1[6] = ((float)GEN_TOF(((float10)param_3[8] * (float10)param_2[8] +
                      ((float10)param_2[6] * (float10)*param_3 +
                      (float10)param_2[7] * (float10)param_3[4]))));
  param_1[7] = ((float)GEN_TOF(((float10)param_3[9] * (float10)param_2[8] +
                      ((float10)param_3[1] * (float10)param_2[6] +
                      (float10)param_2[7] * (float10)param_3[5]))));
  param_1[8] = ((float)GEN_TOF(((float10)param_2[8] * (float10)param_3[10] +
                      ((float10)param_2[7] * (float10)param_3[6] +
                      (float10)param_2[6] * (float10)param_3[2]))));
  param_1[9] = ((float)GEN_TOF((((float10)param_3[8] * (float10)param_2[0xb] +
                       ((float10)param_2[10] * (float10)param_3[4] +
                       (float10)param_2[9] * (float10)*param_3)) + (float10)param_3[0xc])));
  param_1[10] = ((float)GEN_TOF((((float10)param_2[0xb] * (float10)param_3[9] +
                        ((float10)param_2[10] * (float10)param_3[5] +
                        (float10)param_2[9] * (float10)param_3[1])) + (float10)param_3[0xd])));
  param_1[0xb] = ((float)GEN_TOF((((float10)param_2[0xb] * (float10)param_3[10] +
                         ((float10)param_2[9] * (float10)param_3[2] +
                         (float10)param_3[6] * (float10)param_2[10])) + (float10)param_3[0xe])));
  return 0;
}

/* ref: FUN_00981f10 */
unsigned int F_00981f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x981f10u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  
  fVar1 = *(float *)(param_3 + 0x1c);
  fVar14 = (float10)*(float *)param_2;
  fVar15 = (float10)*(float *)(param_3 + 4);
  fVar16 = (float10)*(float *)(param_3 + 0x10);
  fVar17 = (float10)*(float *)(param_2 + 4);
  fVar18 = (float10)*(float *)(param_2 + 8);
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 8);
  fVar4 = *(float *)(param_3 + 0x20);
  fVar5 = *(float *)(param_2 + 0x10);
  fVar6 = *(float *)(param_3 + 0xc);
  fVar7 = *(float *)(param_2 + 0xc);
  fVar8 = *(float *)param_3;
  fVar9 = *(float *)(param_2 + 0x14);
  fVar10 = *(float *)(param_3 + 0x18);
  fVar11 = *(float *)(param_2 + 0x1c);
  fVar12 = *(float *)(param_2 + 0x18);
  fVar13 = *(float *)(param_2 + 0x20);
  param_1[1] = ((float)GEN_TOF((fVar18 * (float10)fVar1 + (fVar15 * fVar14 + fVar17 * fVar16))));
  param_1[2] = ((float)GEN_TOF(((float10)fVar4 * fVar18 + ((float10)fVar2 * fVar17 + (float10)fVar3 * fVar14)
                      )));
  param_1[3] = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar9 +
                      ((float10)fVar6 * (float10)fVar5 + (float10)fVar8 * (float10)fVar7))));
  param_1[4] = ((float)GEN_TOF(((float10)fVar9 * (float10)fVar1 +
                      ((float10)fVar5 * fVar16 + (float10)fVar7 * fVar15))));
  param_1[5] = ((float)GEN_TOF(((float10)fVar9 * (float10)fVar4 +
                      ((float10)fVar5 * (float10)fVar2 + (float10)fVar7 * (float10)fVar3))));
  fVar19 = (float10)fVar12;
  param_1[6] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar10 +
                      ((float10)fVar11 * (float10)fVar6 + (float10)fVar12 * (float10)fVar8))));
  fVar20 = (float10)fVar11;
  param_1[7] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar1 + (fVar19 * fVar15 + fVar20 * fVar16))));
  param_1[8] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar4 +
                      ((float10)fVar3 * fVar19 + (float10)fVar2 * fVar20))));
  *param_1 = ((float)GEN_TOF((((float10)fVar8 * fVar14 + (float10)fVar6 * fVar17) + (float10)fVar10 * fVar18)))
  ;
  return 0;
}

/* ref: FUN_009820e0 */
uint F_009820e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9820e0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 8);
  fVar20 = (float10)fVar2;
  fVar21 = (float10)*(float *)(param_3 + 4);
  fVar22 = (float10)*(float *)(param_3 + 0x10);
  fVar23 = (float10)fVar1;
  fVar24 = (float10)*(float *)(param_3 + 0x1c);
  fVar4 = *(float *)(param_3 + 0x20);
  fVar25 = (float10)*(float *)(param_3 + 8);
  fVar26 = (float10)*(float *)(param_3 + 0x14);
  fVar5 = *(float *)(param_2 + 0x10);
  fVar6 = *(float *)(param_3 + 0xc);
  fVar7 = *(float *)(param_2 + 0xc);
  fVar8 = *(float *)param_3;
  fVar9 = *(float *)(param_2 + 0x14);
  fVar10 = *(float *)(param_3 + 0x18);
  fVar11 = *(float *)(param_2 + 0x1c);
  fVar12 = *(float *)(param_2 + 0x18);
  fVar13 = *(float *)(param_2 + 0x20);
  fVar14 = *(float *)(param_2 + 0x28);
  fVar15 = *(float *)(param_2 + 0x24);
  fVar16 = *(float *)(param_2 + 0x2c);
  fVar17 = *(float *)(param_3 + 0x24);
  fVar27 = (float10)fVar15;
  fVar28 = (float10)fVar14;
  fVar29 = (float10)fVar16;
  fVar18 = *(float *)(param_3 + 0x28);
  fVar19 = *(float *)(param_3 + 0x2c);
  param_1[1] = ((float)GEN_TOF(((fVar21 * fVar20 + fVar23 * fVar22) + fVar24 * (float10)fVar3)));
  param_1[2] = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar3 + (fVar25 * fVar20 + fVar26 * fVar23))));
  param_1[3] = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar9 +
                      ((float10)fVar6 * (float10)fVar5 + (float10)fVar8 * (float10)fVar7))));
  param_1[4] = ((float)GEN_TOF(((float10)fVar9 * fVar24 + ((float10)fVar5 * fVar22 + (float10)fVar7 * fVar21)
                      )));
  param_1[5] = ((float)GEN_TOF(((float10)fVar9 * (float10)fVar4 +
                      ((float10)fVar5 * fVar26 + (float10)fVar7 * fVar25))));
  param_1[6] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar10 +
                      ((float10)fVar11 * (float10)fVar6 + (float10)fVar12 * (float10)fVar8))));
  param_1[7] = ((float)GEN_TOF(((float10)fVar13 * fVar24 +
                      ((float10)fVar11 * fVar22 + (float10)fVar12 * fVar21))));
  param_1[8] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar4 +
                      ((float10)fVar11 * fVar26 + (float10)fVar12 * fVar25))));
  param_1[9] = ((float)GEN_TOF((((float10)fVar16 * (float10)fVar10 +
                       ((float10)fVar14 * (float10)fVar6 + (float10)fVar15 * (float10)fVar8)) +
                      (float10)fVar17)));
  param_1[10] = ((float)GEN_TOF(((float10)fVar18 + ((fVar27 * fVar21 + fVar28 * fVar22) + fVar29 * fVar24))));
  *param_1 = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar3 +
                    ((float10)fVar6 * (float10)fVar1 + (float10)fVar8 * (float10)fVar2))));
  param_1[0xb] = ((float)GEN_TOF(((fVar29 * (float10)fVar4 + (fVar27 * fVar25 + fVar28 * fVar26)) +
                        (float10)fVar19)));
  return (uint)param_1;
}

/* ref: FUN_00982330 */
unsigned int F_00982330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x982330u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 8);
  fVar20 = (float10)fVar2;
  fVar21 = (float10)*(float *)(param_3 + 4);
  fVar22 = (float10)*(float *)(param_3 + 0x14);
  fVar23 = (float10)fVar1;
  fVar24 = (float10)*(float *)(param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 0x28);
  fVar25 = (float10)*(float *)(param_3 + 8);
  fVar26 = (float10)*(float *)(param_3 + 0x18);
  fVar5 = *(float *)(param_2 + 0x10);
  fVar6 = *(float *)(param_3 + 0x10);
  fVar7 = *(float *)(param_2 + 0xc);
  fVar8 = *(float *)param_3;
  fVar9 = *(float *)(param_2 + 0x14);
  fVar10 = *(float *)(param_3 + 0x20);
  fVar11 = *(float *)(param_2 + 0x1c);
  fVar12 = *(float *)(param_2 + 0x18);
  fVar13 = *(float *)(param_2 + 0x20);
  fVar14 = *(float *)(param_2 + 0x28);
  fVar15 = *(float *)(param_2 + 0x24);
  fVar16 = *(float *)(param_2 + 0x2c);
  fVar17 = *(float *)(param_3 + 0x30);
  fVar27 = (float10)fVar15;
  fVar28 = (float10)fVar14;
  fVar29 = (float10)fVar16;
  fVar18 = *(float *)(param_3 + 0x34);
  fVar19 = *(float *)(param_3 + 0x38);
  param_1[1] = ((float)GEN_TOF(((fVar21 * fVar20 + fVar23 * fVar22) + fVar24 * (float10)fVar3)));
  param_1[2] = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar3 + (fVar25 * fVar20 + fVar26 * fVar23))));
  param_1[3] = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar9 +
                      ((float10)fVar6 * (float10)fVar5 + (float10)fVar8 * (float10)fVar7))));
  param_1[4] = ((float)GEN_TOF(((float10)fVar9 * fVar24 + ((float10)fVar5 * fVar22 + (float10)fVar7 * fVar21)
                      )));
  param_1[5] = ((float)GEN_TOF(((float10)fVar9 * (float10)fVar4 +
                      ((float10)fVar5 * fVar26 + (float10)fVar7 * fVar25))));
  param_1[6] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar10 +
                      ((float10)fVar11 * (float10)fVar6 + (float10)fVar12 * (float10)fVar8))));
  param_1[7] = ((float)GEN_TOF(((float10)fVar13 * fVar24 +
                      ((float10)fVar11 * fVar22 + (float10)fVar12 * fVar21))));
  param_1[8] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar4 +
                      ((float10)fVar11 * fVar26 + (float10)fVar12 * fVar25))));
  param_1[9] = ((float)GEN_TOF((((float10)fVar16 * (float10)fVar10 +
                       ((float10)fVar14 * (float10)fVar6 + (float10)fVar15 * (float10)fVar8)) +
                      (float10)fVar17)));
  param_1[10] = ((float)GEN_TOF(((float10)fVar18 + ((fVar27 * fVar21 + fVar28 * fVar22) + fVar29 * fVar24))));
  *param_1 = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar3 +
                    ((float10)fVar6 * (float10)fVar1 + (float10)fVar8 * (float10)fVar2))));
  param_1[0xb] = ((float)GEN_TOF(((fVar29 * (float10)fVar4 + (fVar27 * fVar25 + fVar28 * fVar26)) +
                        (float10)fVar19)));
  return 0;
}

/* ref: FUN_009825a0 */
unsigned int F_009825a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9825a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *in_ecx = *param_2;
  in_ecx[1] = uVar1;
  in_ecx[3] = 0;
  in_ecx[2] = uVar2;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  in_ecx[4] = param_2[3];
  in_ecx[7] = 0;
  in_ecx[5] = uVar1;
  in_ecx[6] = uVar2;
  uVar1 = param_2[7];
  uVar2 = param_2[8];
  in_ecx[8] = param_2[6];
  in_ecx[0xb] = 0;
  in_ecx[9] = uVar1;
  in_ecx[10] = uVar2;
  uVar1 = param_2[10];
  uVar2 = param_2[0xb];
  in_ecx[0xc] = param_2[9];
  in_ecx[0xd] = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  in_ecx[0xe] = uVar2;
  in_ecx[0xf] = uVar1;
  return 0;
}

/* ref: FUN_00982640 */
unsigned int F_00982640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x982640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  in_ecx[0xe] = param_2[0xe];
  in_ecx[0xf] = param_2[0xf];
  return 0;
}

/* ref: FUN_009826b0 */
unsigned int F_009826b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9826b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  in_ecx[7] = param_3[3];
  in_ecx[8] = *param_4;
  in_ecx[9] = param_4[1];
  in_ecx[10] = param_4[2];
  in_ecx[0xb] = param_4[3];
  in_ecx[0xc] = *param_5;
  in_ecx[0xd] = param_5[1];
  in_ecx[0xe] = param_5[2];
  in_ecx[0xf] = param_5[3];
  return 0;
}

/* ref: FUN_00982720 */
unsigned int F_00982720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x982720u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = ((float)GEN_TOF(((float10)param_3[8] * (float10)param_2[2] +
                    ((float10)param_2[1] * (float10)param_3[4] +
                    (float10)*param_2 * (float10)*param_3))));
  param_1[1] = ((float)GEN_TOF(((float10)param_2[2] * (float10)param_3[9] +
                      ((float10)param_3[1] * (float10)*param_2 +
                      (float10)param_2[1] * (float10)param_3[5]))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] * (float10)param_3[10] +
                      ((float10)param_3[2] * (float10)*param_2 +
                      (float10)param_3[6] * (float10)param_2[1]))));
  param_1[3] = ((float)GEN_TOF(((float10)param_3[0xb] * (float10)param_2[2] +
                      ((float10)*param_2 * (float10)param_3[3] +
                      (float10)param_3[7] * (float10)param_2[1]))));
  param_1[4] = ((float)GEN_TOF(((float10)param_3[8] * (float10)param_2[5] +
                      ((float10)param_2[3] * (float10)*param_3 +
                      (float10)param_2[4] * (float10)param_3[4]))));
  param_1[5] = ((float)GEN_TOF(((float10)param_2[5] * (float10)param_3[9] +
                      ((float10)param_2[4] * (float10)param_3[5] +
                      (float10)param_2[3] * (float10)param_3[1]))));
  param_1[6] = ((float)GEN_TOF(((float10)param_2[5] * (float10)param_3[10] +
                      ((float10)param_2[3] * (float10)param_3[2] +
                      (float10)param_3[6] * (float10)param_2[4]))));
  param_1[7] = ((float)GEN_TOF(((float10)param_3[0xb] * (float10)param_2[5] +
                      ((float10)param_3[7] * (float10)param_2[4] +
                      (float10)param_2[3] * (float10)param_3[3]))));
  param_1[8] = ((float)GEN_TOF(((float10)param_3[8] * (float10)param_2[8] +
                      ((float10)param_2[6] * (float10)*param_3 +
                      (float10)param_2[7] * (float10)param_3[4]))));
  param_1[9] = ((float)GEN_TOF(((float10)param_2[8] * (float10)param_3[9] +
                      ((float10)param_2[7] * (float10)param_3[5] +
                      (float10)param_2[6] * (float10)param_3[1]))));
  param_1[10] = ((float)GEN_TOF(((float10)param_2[8] * (float10)param_3[10] +
                       ((float10)param_2[6] * (float10)param_3[2] +
                       (float10)param_3[6] * (float10)param_2[7]))));
  param_1[0xb] = ((float)GEN_TOF(((float10)param_3[0xb] * (float10)param_2[8] +
                        ((float10)param_3[7] * (float10)param_2[7] +
                        (float10)param_2[6] * (float10)param_3[3]))));
  param_1[0xc] = ((float)GEN_TOF((((float10)param_3[8] * (float10)param_2[0xb] +
                         ((float10)param_2[10] * (float10)param_3[4] +
                         (float10)param_2[9] * (float10)*param_3)) + (float10)param_3[0xc])));
  param_1[0xd] = ((float)GEN_TOF((((float10)param_2[0xb] * (float10)param_3[9] +
                         ((float10)param_2[10] * (float10)param_3[5] +
                         (float10)param_2[9] * (float10)param_3[1])) + (float10)param_3[0xd])));
  param_1[0xe] = ((float)GEN_TOF((((float10)param_2[0xb] * (float10)param_3[10] +
                         ((float10)param_2[9] * (float10)param_3[2] +
                         (float10)param_3[6] * (float10)param_2[10])) + (float10)param_3[0xe])));
  param_1[0xf] = ((float)GEN_TOF((((float10)param_3[0xb] * (float10)param_2[0xb] +
                         ((float10)param_3[7] * (float10)param_2[10] +
                         (float10)param_2[9] * (float10)param_3[3])) + (float10)param_3[0xf])));
  return 0;
}

/* ref: FUN_009828d0 */
unsigned int F_009828d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9828d0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = ((float)GEN_TOF(((float10)param_3[0xc] * (float10)param_2[3] +
                    ((float10)param_3[8] * (float10)param_2[2] +
                    ((float10)param_2[1] * (float10)param_3[4] +
                    (float10)*param_2 * (float10)*param_3)))));
  param_1[1] = ((float)GEN_TOF(((float10)param_3[0xd] * (float10)param_2[3] +
                      ((float10)param_2[2] * (float10)param_3[9] +
                      ((float10)param_3[1] * (float10)*param_2 +
                      (float10)param_3[5] * (float10)param_2[1])))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[3] * (float10)param_3[0xe] +
                      ((float10)param_2[2] * (float10)param_3[10] +
                      ((float10)param_3[2] * (float10)*param_2 +
                      (float10)param_3[6] * (float10)param_2[1])))));
  param_1[3] = ((float)GEN_TOF(((float10)param_3[0xf] * (float10)param_2[3] +
                      ((float10)param_2[2] * (float10)param_3[0xb] +
                      ((float10)param_3[3] * (float10)*param_2 +
                      (float10)param_3[7] * (float10)param_2[1])))));
  param_1[4] = ((float)GEN_TOF(((float10)param_3[0xc] * (float10)param_2[7] +
                      ((float10)param_3[8] * (float10)param_2[6] +
                      ((float10)param_2[4] * (float10)*param_3 +
                      (float10)param_2[5] * (float10)param_3[4])))));
  param_1[5] = ((float)GEN_TOF(((float10)param_3[0xd] * (float10)param_2[7] +
                      ((float10)param_2[6] * (float10)param_3[9] +
                      ((float10)param_2[4] * (float10)param_3[1] +
                      (float10)param_3[5] * (float10)param_2[5])))));
  param_1[6] = ((float)GEN_TOF(((float10)param_3[0xe] * (float10)param_2[7] +
                      ((float10)param_2[6] * (float10)param_3[10] +
                      ((float10)param_2[4] * (float10)param_3[2] +
                      (float10)param_2[5] * (float10)param_3[6])))));
  param_1[7] = ((float)GEN_TOF(((float10)param_3[0xf] * (float10)param_2[7] +
                      ((float10)param_2[6] * (float10)param_3[0xb] +
                      ((float10)param_2[4] * (float10)param_3[3] +
                      (float10)param_3[7] * (float10)param_2[5])))));
  param_1[8] = ((float)GEN_TOF(((float10)param_2[0xb] * (float10)param_3[0xc] +
                      ((float10)param_3[8] * (float10)param_2[10] +
                      ((float10)param_2[9] * (float10)param_3[4] +
                      (float10)param_2[8] * (float10)*param_3)))));
  param_1[9] = ((float)GEN_TOF(((float10)param_2[0xb] * (float10)param_3[0xd] +
                      ((float10)param_2[10] * (float10)param_3[9] +
                      ((float10)param_2[8] * (float10)param_3[1] +
                      (float10)param_3[5] * (float10)param_2[9])))));
  param_1[10] = ((float)GEN_TOF(((float10)param_2[0xb] * (float10)param_3[0xe] +
                       ((float10)param_3[10] * (float10)param_2[10] +
                       ((float10)param_3[2] * (float10)param_2[8] +
                       (float10)param_2[9] * (float10)param_3[6])))));
  param_1[0xb] = ((float)GEN_TOF(((float10)param_2[0xb] * (float10)param_3[0xf] +
                        ((float10)param_2[10] * (float10)param_3[0xb] +
                        ((float10)param_2[8] * (float10)param_3[3] +
                        (float10)param_3[7] * (float10)param_2[9])))));
  param_1[0xc] = ((float)GEN_TOF(((float10)param_3[0xc] * (float10)param_2[0xf] +
                        ((float10)param_3[8] * (float10)param_2[0xe] +
                        ((float10)param_2[0xd] * (float10)param_3[4] +
                        (float10)param_2[0xc] * (float10)*param_3)))));
  param_1[0xd] = ((float)GEN_TOF(((float10)param_3[0xd] * (float10)param_2[0xf] +
                        ((float10)param_2[0xe] * (float10)param_3[9] +
                        ((float10)param_2[0xc] * (float10)param_3[1] +
                        (float10)param_3[5] * (float10)param_2[0xd])))));
  param_1[0xe] = ((float)GEN_TOF(((float10)param_3[0xe] * (float10)param_2[0xf] +
                        ((float10)param_3[10] * (float10)param_2[0xe] +
                        ((float10)param_3[6] * (float10)param_2[0xd] +
                        (float10)param_3[2] * (float10)param_2[0xc])))));
  param_1[0xf] = ((float)GEN_TOF(((float10)param_3[0xf] * (float10)param_2[0xf] +
                        ((float10)param_2[0xe] * (float10)param_3[0xb] +
                        ((float10)param_2[0xc] * (float10)param_3[3] +
                        (float10)param_3[7] * (float10)param_2[0xd])))));
  return 0;
}

/* ref: FUN_00982b20 */
uint F_00982b20(unsigned int gen_a0)
{
  GEN_ENTER(0x982b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  LOCK();
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  UNLOCK();
  uVar1 = F_0050c620(*(undefined4 *)((int)this + 100),0,0);
  return uVar1;
}

/* ref: FUN_00982b50 */
byte F_00982b50(unsigned int gen_a0)
{
  GEN_ENTER(0x982b50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  piVar2 = (int *)(in_ecx + 8);
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  return 1 - (iVar1 != 1);
}

/* ref: FUN_00982b60 */
uint F_00982b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x982b60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x44) = param_2;
  return param_2;
}

/* ref: FUN_00982b80 */
byte F_00982b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x982b80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 4 ^ *(byte *)(in_ecx + 0x96)) & 0x10;
  *(byte *)(in_ecx + 0x96) = *(byte *)(in_ecx + 0x96) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00982ba0 */
uint F_00982ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x982ba0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_6;
  puVar3 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(byte *)((int)param_1 + 0x96) = *(byte *)((int)param_1 + 0x96) & 0xfd | 1;
  param_1[0x16] = (undefined4)gen_fl2bits(param_4);
  *(undefined1 *)(param_1 + 0x25) = (undefined1)param_2;
  *(undefined1 *)((int)param_1 + 0x95) = (undefined1)param_3;
  param_1[0x17] = (undefined4)gen_fl2bits(param_5);
  return (uint)param_1;
}

/* ref: FUN_00982c00 */
byte F_00982c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x982c00u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = (undefined4)gen_fl2bits(param_6);
  param_1[0xd] = (undefined4)gen_fl2bits(param_7);
  param_1[0xe] = (undefined4)gen_fl2bits(param_8);
  *(byte *)((int)param_1 + 0x96) = *(byte *)((int)param_1 + 0x96) & 0xfd | 1;
  param_1[0x16] = (undefined4)gen_fl2bits(param_4);
  *param_1 = uVar1;
  param_1[5] = uVar1;
  param_1[10] = uVar1;
  *(undefined1 *)(param_1 + 0x25) = (undefined1)param_2;
  *(byte *)((int)param_1 + 0x95) = (byte)param_3;
  param_1[0x17] = (undefined4)gen_fl2bits(param_5);
  return (byte)param_3;
}

/* ref: FUN_00982ca0 */
byte F_00982ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x982ca0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *(byte *)(param_1 + 0x96) = *(byte *)(param_1 + 0x96) & 0xfd | 1;
  *(float *)(param_1 + 0x58) = param_4;
  *(undefined1 *)(param_1 + 0x94) = (undefined1)param_2;
  *(byte *)(param_1 + 0x95) = (byte)param_3;
  *(float *)(param_1 + 0x5c) = param_5;
  return (byte)param_3;
}

/* ref: FUN_00982ce0 */
uint F_00982ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x982ce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP((*(int *)(in_ecx + 0x40) + 8)));
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  return (uint)(iVar1 == 1);
}

/* ref: FUN_00982d00 */
uint F_00982d00(float gen_a0)
{
  GEN_ENTER(0x982d00u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (int)((double)param_1 * *(double *)&REFG(undefined, 0x10912a8));
}

/* ref: FUN_00982d20 */
float10 F_00982d20(float gen_a0)
{
  GEN_ENTER(0x982d20u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF(SQRT((float10)param_1)));
}

/* ref: FUN_00982d40 */
uint F_00982d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x982d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined2 in_ax = (undefined2)gen_a0;
  undefined2 in_cx = (undefined2)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint local_c;
  
  local_c = CONCAT22(in_cx,in_ax);
  return local_c;
}

/* ref: FUN_00982d70 */
unsigned int F_00982d70(void)
{
  GEN_ENTER(0x982d70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00982d80 */
unsigned int F_00982d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x982d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined2 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int local_8;
  
  *(int *)((int)this + 0x40) = param_1;
  *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd4) = 0xffffffff;
  *(undefined2 *)((int)this + 0x8c) = 0xffff;
  *(undefined2 *)((int)this + 0x8e) = 0xffff;
  *(undefined4 *)((int)this + 0x88) = 0;
  puVar2 = (undefined4 *)((int)this + 0xd8);
  puVar1 = (undefined2 *)((int)this + 0x90);
  local_8 = 0x10;
  puVar3 = (undefined4 *)((int)this + 0x48);
  do {
    puVar1[0x10] = 0xffff;
    *puVar1 = 0xffff;
    *puVar3 = 0xffffffff;
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffff;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 2;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x44) = 0xffffffff;
  }
  else if (param_1 == 1) {
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
    return 0;
  }
  return 0;
}

/* ref: FUN_00982e70 */
ushort F_00982e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x982e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x44) = param_1;
  *(undefined2 *)((int)this + 0x8c) = (undefined2)param_2;
  *(ushort *)((int)this + 0x8e) = (ushort)param_3;
  return (ushort)param_3;
}

/* ref: FUN_00982ea0 */
uint F_00982ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x982ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x88);
  if (uVar1 < 0x10) {
    *(undefined4 *)((int)this + uVar1 * 4 + 0x48) = param_1;
    *((undefined2 *)GEN_TOP(((int)this + *(int *)((int)this + 0x88) * 2 + 0x90))) = (undefined2)param_2;
    uVar1 = *(uint *)((int)this + 0x88);
    *(undefined2 *)((int)this + uVar1 * 2 + 0xb0) = (undefined2)param_3;
    *(int *)((int)this + 0x88) = *(int *)((int)this + 0x88) + 1;
  }
  return uVar1;
}

/* ref: FUN_00982f10 */
uint F_00982f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x982f10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x48 + param_2 * 4);
}

/* ref: FUN_00982f30 */
ushort F_00982f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x982f30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(ushort *)(in_ecx + 0x90 + param_2 * 2);
}

/* ref: FUN_00982f60 */
ushort F_00982f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x982f60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(ushort *)(in_ecx + 0xb0 + param_2 * 2);
}

/* ref: FUN_00982f90 */
uint F_00982f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x982f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)((int)this + param_1 * 8 + 0xd8);
}

/* ref: FUN_00982fc0 */
uint F_00982fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x982fc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x48 + param_2 * 4);
}

/* ref: FUN_00982fd0 */
uint F_00982fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x982fd0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x174);
  if (uVar1 != 0) {
    *(byte *)(uVar1 + 0x96) = *(byte *)(uVar1 + 0x96) & 0xfd | 1;
    *(float *)(uVar1 + 0x58) = param_4;
    *(undefined1 *)(uVar1 + 0x94) = (undefined1)param_2;
    *(undefined1 *)(uVar1 + 0x95) = (undefined1)param_3;
    *(float *)(uVar1 + 0x5c) = param_5;
  }
  return uVar1;
}

/* ref: FUN_00983020 */
unsigned int F_00983020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, float gen_a8, float gen_a9, float gen_a10, float gen_a11)
{
  GEN_ENTER(0x983020u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  float param_10 = (float)gen_a9;
  float param_11 = (float)gen_a10;
  float param_12 = (float)gen_a11;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float10 fVar1;
  int iVar2;
  float * pfVar3;
  float * pfVar4;
  
  pfVar4 = *(float * PTR32 *)(param_1 + 0x174);
  (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar4;
  if (pfVar4 != (float *)0x0) {
    fVar1 = (float10)0;
    (*(float *)(gen_frame + 0x30)) = (float)fVar1;
    (*(float *)(gen_frame + 0x34)) = (float)fVar1;
    ((float *)(gen_frame + 0x0))[0] = param_9;
    (*(float *)(gen_frame + 0x38)) = (float)fVar1;
    ((float *)(gen_frame + 0x0))[1] = 0.0;
    ((float *)(gen_frame + 0x0))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(float *)(gen_frame + 0x14)) = param_10;
    (*(float *)(gen_frame + 0x28)) = param_11;
    F_0065ed60(((float *)(gen_frame + 0x0)),param_12);
    (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x30)) + (float10)param_6);
    (*(float * PTR32 *)(gen_frame + 0x4c))[0x16] = param_4;
    *(undefined1 *)((*(float * PTR32 *)(gen_frame + 0x4c)) + 0x25) = (undefined1)param_2;
    (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x34)) + (float10)param_7);
    (*(float * PTR32 *)(gen_frame + 0x4c))[0x17] = param_5;
    (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x38)) + (float10)param_8);
    pfVar3 = ((float *)(gen_frame + 0x0));
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar4 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar4 = pfVar4 + 1;
    }
    *(byte *)((int)(*(float * PTR32 *)(gen_frame + 0x4c)) + 0x96) = *(byte *)((int)(*(float * PTR32 *)(gen_frame + 0x4c)) + 0x96) & 0xfd | 1;
    *(undefined1 *)((int)(*(float * PTR32 *)(gen_frame + 0x4c)) + 0x95) = (undefined1)param_3;
  }
  return 0;
}

/* ref: FUN_00983120 */
uint F_00983120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983120u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x178) = param_2;
  return param_2;
}

/* ref: FUN_00983140 */
uint F_00983140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983140u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x174) = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x44) = in_ecx + 0x170;
  }
  return param_2;
}

/* ref: FUN_00983160 */
uint F_00983160(unsigned int gen_a0)
{
  GEN_ENTER(0x983160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x174);
}

/* ref: FUN_00983170 */
unsigned int F_00983170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983170u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 4) = 0;
  return 0;
}

/* ref: FUN_00983180 */
uint F_00983180(unsigned int gen_a0)
{
  GEN_ENTER(0x983180u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a09a0) + 0x88))))(REFG(int * PTR32, 0x14a09a0),param_1);
  return uVar1;
}

/* ref: Apricot::ApricotListenner::vf1 */
byte F_009831a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9831a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)(this + 0x1c) = param_1;
  F_004cf9e0(this + 4,0,0,0x20000,"ApricotCommunicator");
  return 1;
}

/* ref: Apricot::ApricotListenner::vf2 */
uint F_009831d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9831d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_004cf020(this + 4);
  return uVar1;
}

/* ref: Apricot::ApricotListenner::vf3 */
unsigned int F_009831e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9831e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x20));
  return 0;
}

/* ref: Apricot::ApricotListenner::vf4 */
unsigned int F_009831f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9831f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x20));
  return 0;
}

/* ref: Apricot::ApricotListenner::vf7 */
unsigned int F_00983200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cee60(param_1);
  return 0;
}

/* ref: Apricot::ApricotListenner::vf5 */
unsigned int F_00983220(unsigned int gen_a0)
{
  GEN_ENTER(0x983220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x38));
  return 0;
}

/* ref: Apricot::ApricotListenner::vf6 */
unsigned int F_00983230(unsigned int gen_a0)
{
  GEN_ENTER(0x983230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x38));
  return 0;
}

/* ref: Apricot::ApricotListenner::vf12 */
byte F_00983240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x983240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_2) {
    iVar2 = param_2;
    iVar3 = param_1;
    do {
      uVar1 = F_00ba7610(this + 0x78,iVar3,iVar2);
      if ((int)uVar1 < 1) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
        return 0;
      }
      iVar2 = iVar2 - uVar1;
      iVar3 = iVar3 + uVar1;
    } while (0 < iVar2);
  }
  return 1;
}

/* ref: Apricot::ApricotListenner::vf13 */
byte F_00983290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x983290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_2) {
    iVar2 = param_2;
    iVar3 = param_1;
    do {
      uVar1 = F_00ba7650(this + 0x78,iVar3,iVar2);
      if ((int)uVar1 < 1) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
        return 0;
      }
      iVar2 = iVar2 - uVar1;
      iVar3 = iVar3 + uVar1;
    } while (0 < iVar2);
  }
  return 1;
}

/* ref: Apricot::ApricotListenner::vf11 */
uint F_009832e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9832e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00ba74d0(this + 0x78);
  uVar1 = F_00ba74d0(this + 0x50);
  return uVar1;
}

/* ref: Apricot::ApricotListenner::vf10 */
byte F_00983300(unsigned int gen_a0)
{
  GEN_ENTER(0x983300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
  this_00 = this + 0x50;
  uVar1 = F_00baba80(this_00);
  if (uVar1 == 0) {
    uVar1 = F_00baba80(this + 0x78);
    if (uVar1 == 0) {
      uVar1 = F_00ba8460(this_00,0xd431);
      if (uVar1 == 0) {
        uVar1 = F_00babc10(this_00,this + 0x78);
        return 0 < (int)uVar1;
      }
    }
  }
  return 0;
}

/* ref: Apricot::ApricotListenner::vf29 */
unsigned int F_00983350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*param_1)(param_1,1);
  }
  return 0;
}

/* ref: Apricot::ApricotListenner::vf22 */
uint F_00983370(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x983370u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;
  undefined4 uVar1;
  undefined4 in_EAX = 0;
  undefined4 * puVar2;
  
  puVar2 = ((undefined4 *)GEN_TOP(CONCAT31((int3)((uint)in_EAX >> 8),(char)param_2)));
  *(char *)(in_ecx + 0xa0) = (char)param_2;
  if ((char)param_2 != '\0') {
    if (param_6 < 0.0) {
      param_6 = 0.0;
    }
    if ((float10)param_7 <= (float10)param_6) {
      param_7 = (float)((float10)param_6 + (float10)*(double *)&REFG(undefined, 0x10928e8));
    }
    *(float *)(in_ecx + 0xa4) = param_3;
    *(float *)(in_ecx + 0xa8) = param_4;
    *(float *)(in_ecx + 0xac) = param_5;
    *(undefined4 *)(in_ecx + 0xb0) = *param_8;
    uVar1 = param_8[1];
    *(float *)(in_ecx + 0xc0) = param_6;
    *(float *)(in_ecx + 0xc4) = param_6;
    *(undefined4 *)(in_ecx + 0xb4) = uVar1;
    *(float *)(in_ecx + 200) = param_7;
    *(float *)(in_ecx + 0xcc) = param_7;
    puVar2 = param_8;
  }
  return (uint)puVar2;
}

/* ref: Apricot::ApricotListenner::vf23 */
unsigned int F_00983420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float * pfVar5;
  float * pfVar6;
  float10 fVar7;
  
  if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
    fVar1 = *((float *)GEN_TOP(((int)REFG(void * PTR32, 0x1379694) + 0xb0)));
    (*(float *)(gen_frame + 0x4c)) = fVar1;
    fVar7 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    fVar2 = (float)fVar7;
    (*(float *)(gen_frame + 0x48)) = fVar2;
    fVar7 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    fVar1 = (float)fVar7;
    (*(float *)(gen_frame + 0x4c)) = fVar1;
    ((float *)(gen_frame + 0x0))[0] = fVar1;
    (*(float *)(gen_frame + 0x20)) = fVar2;
    ((float *)(gen_frame + 0x0))[2] = ((float)GEN_TOF(-(float10)fVar2));
    ((float *)(gen_frame + 0x0))[1] = 0.0;
    ((float *)(gen_frame + 0x0))[3] = 0.0;
    ((float *)(gen_frame + 0x0))[4] = 0.0;
    ((float *)(gen_frame + 0x0))[5] = gen_bits2f(REFG(float, 0x1087f04));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(float *)(gen_frame + 0x28)) = fVar1;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    uVar3 = F_00a5feb0(REFG(void * PTR32, 0x1379694));
    F_0065f330(((float *)(gen_frame + 0x0)),uVar3);
    pfVar5 = ((float *)(gen_frame + 0x0));
    pfVar6 = param_1;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
  }
  return 0;
}

/* ref: Apricot::ApricotListenner::vf24 */
unsigned int F_00983510(void)
{
  GEN_ENTER(0x983510u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::ApricotListenner::vf25 */
uint F_00983520(void)
{
  GEN_ENTER(0x983520u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::ApricotListenner::vf26 */
unsigned int F_00983530(unsigned int gen_a0)
{
  GEN_ENTER(0x983530u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0xd0) = 0;
  *(undefined4 *)(in_ecx + 0xd4) = 0;
  *(undefined4 *)(in_ecx + 0xd8) = 0;
  *(undefined4 *)(in_ecx + 0xdc) = 0;
  *(undefined4 *)(in_ecx + 0xe0) = 0;
  *(undefined4 *)(in_ecx + 0xe4) = 0;
  *(undefined4 *)(in_ecx + 0xe8) = 0;
  return 0;
}

/* ref: Apricot::ApricotListenner::vf27 */
unsigned int F_00983570(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x983570u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  if ((float10)*(float *)(in_ecx + 0xd0) < fVar1) {
    *(float *)(in_ecx + 0xd0) = param_2;
    *(float *)(in_ecx + 0xd4) = (float)((float10)*param_3 * fVar1);
    *(float *)(in_ecx + 0xd8) = (float)((float10)param_3[1] * fVar1);
    *(float *)(in_ecx + 0xdc) = (float)((float10)param_3[2] * fVar1);
    *(float *)(in_ecx + 0xe0) = (float)((float10)*param_4 * fVar1);
    *(float *)(in_ecx + 0xe4) = (float)((float10)param_4[1] * fVar1);
    *(float *)(in_ecx + 0xe8) = (float)(fVar1 * (float10)param_4[2]);
    return 0;
  }
  return 0;
}

/* ref: Apricot::ApricotListenner::vf32 */
uint F_009835e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9835e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Apricot::ApricotListenner::vf33 */
uint F_009835f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9835f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  uint uVar1;
  
  if (*(int *)(REFG(int, 0x137104c) + 0x25f8) != 0) {
    uVar1 = F_004e95a0(*(int *)(REFG(int, 0x137104c) + 0x25f8),param_1,(float)(float10)1,0,*param_3,
                         param_3[1],param_3[2],(float)(float10)1,0,param_2,0);
    return uVar1;
  }
  return 0;
}

/* ref: Apricot::ApricotListenner::vf34 */
uint F_00983650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x137104c);
  if ((*(int *)(REFG(undefined4, 0x137104c) + 0x25f8) != 0) && (param_1 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*param_1 + 0x50))(param_1,500);
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x78))(param_1,500);
  }
  return uVar1;
}

/* ref: Apricot::ApricotListenner::vf35 */
unsigned int F_00983690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x983690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 0x44))(param_1);
  }
  return 0;
}

/* ref: Apricot::ApricotDeviceListenner::vf1 */
uint F_009836d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9836d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pAVar1;
  uint uVar2;
  
  pAVar1 = this + 8;
  *(int *)pAVar1 = *(int *)pAVar1 + -1;
  uVar2 = *(uint *)(this + 8);
  if (*(int *)pAVar1 == 0) {
    (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  }
  return uVar2;
}

/* ref: Apricot::ApricotDeviceListenner::vf2 */
uint F_009836f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9836f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(int *)(in_ecx + 8) + 1;
  *(uint *)(in_ecx + 8) = uVar1;
  return uVar1;
}

/* ref: Apricot::ApricotDeviceListenner::vf17 */
uint F_00983700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x983700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  *(uint *)(this + param_1 * 4 + 0x240) =
       *(uint *)(this + param_1 * 4 + 0x240) ^
       ((uint)(&REFG(undefined * PTR32, 0x10de6ec))[(int)(param_2)] ^ *(uint *)(this + param_1 * 4 + 0x240)) & 3;
  *(uint *)(this + param_1 * 4 + 0x240) =
       ((uint)(&REFG(undefined * PTR32, 0x10de6ec))[(int)(param_3)] & 3 | 8) * 4 |
       *(uint *)(this + param_1 * 4 + 0x240) & 0xffffffe3;
  return param_1;
}

/* ref: Apricot::ApricotDeviceListenner::vf31 */
unsigned int F_00983750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x983750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  return 0;
}

/* ref: Apricot::ApricotDeviceListenner::vf32 */
unsigned int F_00983760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Apricot::ApricotDeviceListenner::vf33 */
unsigned int F_00983770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Apricot::ApricotDeviceListenner::vf34 */
byte F_00983780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x26e) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00983790 */
uint F_00983790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983790u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x10de6fc));
  puVar2 = param_2;
  puVar3 = in_ecx + 4;
  for (iVar1 = 0x58; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: FUN_009837b0 */
unsigned int F_009837b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9837b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x10b2a9c));
  return 0;
}

/* ref: FUN_009837c0 */
byte F_009837c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9837c0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = param_2;
  puVar3 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x50)),in_ecx + 0x10,param_3);
  puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x4c));
  puVar5 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  *puVar2 = ((undefined4 *)(gen_frame + 0x0))[0];
  puVar2[1] = ((undefined4 *)(gen_frame + 0x0))[1];
  puVar2[2] = ((undefined4 *)(gen_frame + 0x0))[2];
  puVar2[4] = (*(undefined4 *)(gen_frame + 0x10));
  puVar2[3] = 0;
  puVar2[5] = (*(undefined4 *)(gen_frame + 0x14));
  puVar2[7] = 0;
  puVar2[0xb] = 0;
  puVar2[6] = (*(undefined4 *)(gen_frame + 0x18));
  puVar2[0xc] = (*(undefined4 *)(gen_frame + 0x30));
  puVar2[8] = (*(undefined4 *)(gen_frame + 0x20));
  puVar2[0xd] = (*(undefined4 *)(gen_frame + 0x34));
  puVar2[9] = (*(undefined4 *)(gen_frame + 0x24));
  puVar2[0xe] = (*(undefined4 *)(gen_frame + 0x38));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  puVar2[10] = (*(undefined4 *)(gen_frame + 0x28));
  puVar2[0xf] = uVar1;
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return 1;
}

/* ref: FUN_00983930 */
byte F_00983930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x983930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  bVar1 = F_00a5fcc0(param_3,param_2);
  if (bVar1 == 0) {
    bVar1 = 0;
  }
  else {
    uVar2 = F_00a608f0(param_3,((undefined1 *)(gen_frame + 0x0)),param_2);
    bVar1 = F_009837c0(this,param_1,uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return bVar1;
}

/* ref: FUN_009839b0 */
byte F_009839b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9839b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar2 = ((code *)*(gen_code32 *)(*param_3 + 0x50))(param_3,param_2);
  if ((char)uVar2 == '\0') {
    bVar1 = 0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*param_3 + 0x40))(param_3,((undefined1 *)(gen_frame + 0x0)),param_2);
    bVar1 = F_009837c0(this,param_1,uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return bVar1;
}

/* ref: FUN_00983a30 */
byte F_00983a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x983a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  bool bVar2;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar1 = ((code *)*(gen_code32 *)(*param_3 + 0x50))(param_3,param_2);
  bVar2 = (char)uVar1 != '\0';
  if (bVar2) {
    ((code *)*(gen_code32 *)(*param_3 + 0x40))(param_3,((undefined1 *)(gen_frame + 0x0)),param_2);
    *param_1 = (*(undefined4 *)(gen_frame + 0x30));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x34));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x38));
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return bVar2;
}

/* ref: Apricot::ApricotInstanceListenner::vf3 */
uint F_00983ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x983ac0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x98);
}

/* ref: Apricot::ApricotInstanceListenner::vf4 */
uint F_00983ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return param_1;
}

/* ref: FUN_00983ae0 */
unsigned int F_00983ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983ae0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = (undefined4 *)(in_ecx + 0x10);
  for (iVar1 = 0x58; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: Apricot::ApricotCommunicatorInstanceListenner::vf2 */
byte F_00983b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (REFG(int, 0x1379694) != 0) {
    *param_1 = *(undefined4 *)(REFG(int, 0x1379694) + 0xb8);
    return 1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
  return 1;
}

/* ref: Apricot::ApricotCommunicatorInstanceListenner::vf3 */
uint F_00983b50(void)
{
  GEN_ENTER(0x983b50u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_005369a0(&REFG(undefined4, 0x1375b90));
  if ((uVar1 == 0) && (REFG(int, 0x1379694) == 0)) {
    return 8;
  }
  return 1;
}

/* ref: Apricot::ApricotCommunicatorInstanceListenner::vf4 */
uint F_00983b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x983b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return param_1;
}

/* ref: Apricot::ApricotCommunicatorInstanceListenner::vf6 */
byte F_00983b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x983b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_005369a0(&REFG(undefined4, 0x1375b90));
  if ((uVar1 == 0) && (uVar1 = REFG(undefined4, 0x1379694), REFG(undefined4, 0x1379694) == 0)) {
    *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1087f04));
    return 1;
  }
  *param_2 = *(undefined4 *)(uVar1 + 0xb8);
  return 1;
}

/* ref: Apricot::ApricotCommunicatorInstanceListenner::vf7 */
byte F_00983bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x983bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  float10 fVar5;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  piVar2 = (int *)F_005369a0(&REFG(undefined4, 0x1375b90));
  piVar4 = REFG(int * PTR32, 0x1379694);
  if (param_5 != -1) {
    piVar4 = piVar2;
  }
  if (piVar4 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0xb8))(piVar4);
    if ((char)uVar3 != '\0') {
      if (param_4 == 0) {
        piVar4 = piVar4 + 0x5b0;
      }
      else {
        if (param_4 != 1) goto LAB_00983d1d;
        piVar4 = piVar4 + 0x798;
      }
      if (piVar4 != (int *)0x0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x50))(piVar4,3);
        if ((char)uVar3 != '\0') {
          ((code *)*(gen_code32 *)(*piVar4 + 0x40))(piVar4,((undefined1 *)(gen_frame + 0x0)),3);
          *param_1 = (*(float *)(gen_frame + 0x30));
          param_1[1] = (*(float *)(gen_frame + 0x34));
          param_1[2] = (*(float *)(gen_frame + 0x38));
          uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x50))(piVar4,5);
          if ((char)uVar3 != '\0') {
            ((code *)*(gen_code32 *)(*piVar4 + 0x40))(piVar4,((undefined1 *)(gen_frame + 0x0)),5);
            *param_3 = (*(float *)(gen_frame + 0x30));
            param_3[1] = (*(float *)(gen_frame + 0x34));
            param_3[2] = (*(float *)(gen_frame + 0x38));
            bVar1 = F_00983a30(param_2,4,piVar4);
            if (bVar1 == 0) {
              fVar5 = (float10)REFG(double, 0x1088108);
              *param_2 = ((float)GEN_TOF((((float10)*param_1 + (float10)*param_3) * fVar5)));
              param_2[1] = ((float)GEN_TOF((((float10)param_1[1] + (float10)param_3[1]) * fVar5)));
              param_2[2] = ((float)GEN_TOF((((float10)param_1[2] + (float10)param_3[2]) * fVar5)));
            }
            bVar1 = 1;
            goto LAB_00983d1f;
          }
        }
      }
    }
  }
LAB_00983d1d: ;
  bVar1 = 0;
LAB_00983d1f: ;
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return bVar1;
}

/* ref: FUN_00983d50 */
uint F_00983d50(float gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x983d50u, gen_trace_f(gen_a0), gen_a1, gen_a2, gen_a3);
  float param_1 = (float)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar2 = (float10)param_1;
  fVar3 = (float10)(float)(fVar2 * fVar2);
  fVar4 = (float10)(float)(fVar3 * fVar2);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar6 = fVar4 * fVar5;
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  *param_2 = ((float)GEN_TOF(((fVar6 - fVar3 * fVar1) + (float10)REFG(double, 0x1088130))));
  *param_3 = (float)(fVar3 * fVar1 - fVar6);
  *param_4 = ((float)GEN_TOF(((fVar4 - fVar3 * fVar5) + fVar2)));
  *param_5 = (float)(fVar4 - fVar3);
  return (uint)param_5;
}

/* ref: FUN_00983db0 */
uint F_00983db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x983db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  float fVar1;
  float fVar2;
  float * pfVar3;
  float * pfVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_2c;
  float local_28;
  
  pfVar3 = (float *)(param_2 * 0x30 + (int)this);
  fVar7 = (float10)1;
  pfVar4 = ((float *)GEN_TOP(((param_2 * 3 + 6) * 0x10 + (int)this)));
  fVar5 = (float10)*(float *)(param_2 * 0x30 + 0x54 + (int)this);
  fVar1 = ((float)GEN_TOF((((float10)pfVar3[0x16] + fVar7) *
                 ((fVar7 - fVar5) * (fVar7 - (float10)pfVar3[0x14])))));
  fVar2 = (float)((float10)pfVar4[4] - (float10)pfVar3[0x10]);
  local_2c = (float)((float10)pfVar4[5] - (float10)pfVar3[0x11]);
  local_28 = (float)((float10)pfVar4[6] - (float10)pfVar3[0x12]);
  if (-1 < param_2 + -1) {
    fVar6 = (float10)fVar1;
    fVar7 = (float10)((float)GEN_TOF(((fVar7 - (float10)pfVar3[0x16]) *
                            ((fVar5 + fVar7) * (fVar7 - (float10)pfVar3[0x14])))));
    fVar2 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar7 * (float10)(float)((float10)pfVar3[0x10] -
                                                             (float10)pfVar3[4])))) +
                   (float10)(float)(fVar6 * (float10)fVar2))));
    local_2c = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)pfVar3[0x11] - (float10)pfVar3[5])
                                       * fVar7))) + (float10)(float)((float10)local_2c * fVar6))));
    local_28 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar7 * (float10)(float)((float10)pfVar3[0x12] -
                                                                (float10)pfVar3[6])))) +
                      (float10)(float)(fVar6 * (float10)local_28))));
    fVar1 = ((float)GEN_TOF((((float10)*pfVar4 - (float10)pfVar3[0xc]) /
                   ((float10)*pfVar4 - (float10)*pfVar3))));
  }
  fVar7 = (float10)fVar1;
  *param_1 = (float)(fVar7 * (float10)fVar2);
  param_1[1] = (float)((float10)local_2c * fVar7);
  param_1[2] = (float)(fVar7 * (float10)local_28);
  return (uint)param_1;
}

/* ref: FUN_00983f30 */
uint F_00983f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x983f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  float fVar1;
  float fVar2;
  int iVar3;
  float * pfVar4;
  float * pfVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float local_2c;
  float local_28;
  
  iVar3 = (param_2 + 2) * 0x30;
  pfVar4 = (float *)(iVar3 + (int)this);
  fVar9 = (float10)1;
  pfVar6 = ((float *)GEN_TOP(((param_2 * 3 + 3) * 0x10 + (int)this)));
  fVar7 = (float10)*(float *)(iVar3 + 0x24 + (int)this);
  fVar1 = ((float)GEN_TOF(((fVar9 - (float10)pfVar4[10]) * ((fVar7 + fVar9) * (fVar9 - (float10)pfVar4[8])))));
  fVar2 = (float)((float10)pfVar4[4] - (float10)pfVar6[4]);
  local_2c = (float)((float10)pfVar4[5] - (float10)pfVar6[5]);
  local_28 = (float)((float10)pfVar4[6] - (float10)pfVar6[6]);
  if (param_2 + 2 <= *(int *)((int)this + 0x24) + -1) {
    pfVar5 = ((float *)GEN_TOP(((param_2 * 3 + 9) * 0x10 + (int)this)));
    fVar8 = (float10)fVar1;
    fVar9 = (float10)((float)GEN_TOF((((float10)pfVar4[10] + fVar9) *
                            ((fVar9 - fVar7) * (fVar9 - (float10)pfVar4[8])))));
    fVar2 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar9 * (float10)(float)((float10)pfVar5[4] -
                                                             (float10)pfVar4[4])))) +
                   (float10)(float)(fVar8 * (float10)fVar2))));
    local_2c = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)pfVar5[5] - (float10)pfVar4[5]) *
                                       fVar9))) + (float10)(float)((float10)local_2c * fVar8))));
    local_28 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar9 * (float10)(float)((float10)pfVar5[6] -
                                                                (float10)pfVar4[6])))) +
                      (float10)(float)(fVar8 * (float10)local_28))));
    fVar1 = ((float)GEN_TOF((((float10)*pfVar4 - (float10)*pfVar6) / ((float10)*pfVar5 - (float10)*pfVar6))));
  }
  fVar9 = (float10)fVar1;
  *param_1 = (float)(fVar9 * (float10)fVar2);
  param_1[1] = (float)((float10)local_2c * fVar9);
  param_1[2] = (float)(fVar9 * (float10)local_28);
  return (uint)param_1;
}

/* ref: FUN_00984260 */
unsigned int F_00984260(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x984260u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float * pfVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  
  fVar10 = (float10)param_3;
  iVar6 = *param_4;
  iVar7 = *(int *)((int)param_1 + 0x24) + -1;
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = param_1;
  iVar8 = iVar7;
  if (iVar6 < iVar7) {
    pfVar9 = ((float *)GEN_TOP(((iVar6 * 3 + 6) * 0x10 + (int)param_1)));
    do {
      iVar8 = iVar6;
      if ((!GEN_ISNAN((float10)*pfVar9) && !GEN_ISNAN(fVar10)) && !((float10)*pfVar9 < fVar10)) break;
      iVar6 = iVar6 + 1;
      pfVar9 = pfVar9 + 0xc;
      iVar8 = iVar7;
    } while (iVar6 < iVar7);
  }
  iVar6 = (iVar8 * 3 + 3) * 0x10;
  (*(float *)(gen_frame + 0x4c)) = *(float *)(iVar6 + (int)param_1);
  fVar11 = (float10)*(float *)(iVar6 + (int)param_1);
  pfVar9 = ((float *)GEN_TOP(((iVar8 * 3 + 6) * 0x10 + (int)param_1)));
  (*(float * PTR32 *)(gen_frame + 0x44)) = pfVar9;
  (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF(((fVar10 - fVar11) / ((float10)*pfVar9 - fVar11))));
  F_00983f30(param_1,&(*(float *)(gen_frame + 0x0)),iVar8);
  F_00983db0((*(undefined * PTR32 *)(gen_frame + 0x48)),&(*(float *)(gen_frame + 0x10)),iVar8);
  fVar12 = (float10)(*(float *)(gen_frame + 0x4c));
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(fVar12 * fVar12))));
  fVar13 = (float10)(float)(fVar12 * fVar12);
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(fVar13 * fVar12))));
  fVar14 = (float10)(float)(fVar13 * fVar12);
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(fVar14 - fVar13))));
  fVar15 = (float10)(*(float *)(gen_frame + 0x0));
  fVar16 = (float10)(float)(fVar14 - fVar13);
  fVar10 = (float10)(*(float *)(gen_frame + 0x4));
  fVar11 = (float10)(*(float *)(gen_frame + 0x8));
  fVar1 = ((float)GEN_TOF(((fVar14 - fVar13 * (float10)*(double *)&REFG(undefined, 0x1092098)) + fVar12)));
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar1)));
  fVar17 = (float10)(*(float *)(gen_frame + 0x10));
  fVar18 = (float10)fVar1;
  (*(float *)(gen_frame + 0x0)) = (float)(fVar18 * fVar17);
  fVar19 = (float10)(*(float *)(gen_frame + 0x14));
  (*(float *)(gen_frame + 0x4)) = (float)(fVar19 * fVar18);
  fVar12 = (float10)(*(float *)(gen_frame + 0x18));
  (*(float *)(gen_frame + 0x8)) = (float)(fVar18 * fVar12);
  fVar14 = fVar14 * (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar1 = (float)(fVar13 * (float10)*(double *)&REFG(undefined, 0x10944e0) - fVar14);
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar1)));
  pfVar9 = (*(float * PTR32 *)(gen_frame + 0x44)) + 4;
  fVar20 = (float10)fVar1;
  (*(float *)(gen_frame + 0x20)) = (float)(fVar20 * (float10)*pfVar9);
  fVar1 = (*(float * PTR32 *)(gen_frame + 0x44))[5];
  (*(float *)(gen_frame + 0x24)) = (float)((float10)fVar1 * fVar20);
  fVar2 = (*(float * PTR32 *)(gen_frame + 0x44))[6];
  (*(float *)(gen_frame + 0x28)) = (float)(fVar20 * (float10)fVar2);
  fVar3 = ((float)GEN_TOF(((fVar14 - fVar13 * (float10)*(double *)&REFG(undefined, 0x10944e0)) + (float10)REFG(double, 0x1088130))));
  (*(float * PTR32 *)(gen_frame + 0x44)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar3)));
  fVar13 = (float10)fVar3;
  fVar3 = ((float)GEN_TOF((fVar13 * (float10)*(float *)((int)param_1 + iVar6 + 0x10))));
  (*(float *)(gen_frame + 0x30)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + iVar6 + 0x14) * fVar13)));
  (*(float *)(gen_frame + 0x34)) = fVar4;
  fVar5 = ((float)GEN_TOF((fVar13 * (float10)*(float *)((int)param_1 + iVar6 + 0x18))));
  (*(float *)(gen_frame + 0x38)) = fVar5;
  fVar3 = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)(fVar20 * (float10)*pfVar9))));
  (*(float *)(gen_frame + 0x10)) = fVar3;
  fVar1 = ((float)GEN_TOF(((float10)fVar4 + (float10)(float)((float10)fVar1 * fVar20))));
  (*(float *)(gen_frame + 0x14)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)fVar5 + (float10)(float)(fVar20 * (float10)fVar2))));
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)(fVar18 * fVar17))));
  (*(float *)(gen_frame + 0x20)) = fVar3;
  fVar1 = ((float)GEN_TOF(((float10)fVar1 + (float10)(float)(fVar19 * fVar18))));
  (*(float *)(gen_frame + 0x24)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)fVar2 + (float10)(float)(fVar18 * fVar12))));
  (*(float *)(gen_frame + 0x28)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)(fVar16 * fVar15))));
  (*(float *)(gen_frame + 0x0)) = fVar3;
  fVar1 = ((float)GEN_TOF(((float10)fVar1 + (float10)(float)(fVar16 * fVar10))));
  (*(float *)(gen_frame + 0x4)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)fVar2 + (float10)(float)(fVar16 * fVar11))));
  (*(float *)(gen_frame + 0x8)) = fVar2;
  *param_2 = fVar3;
  param_2[1] = fVar1;
  param_2[2] = fVar2;
  *param_4 = iVar8;
  return 0;
}

/* ref: FUN_00984440 */
unsigned int F_00984440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x984440u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x1fc) = *(uint *)(in_ecx + 0x1fc) | 1;
    return 0;
  }
  *(uint *)(in_ecx + 0x1fc) = *(uint *)(in_ecx + 0x1fc) & 0xfffffffe;
  return 0;
}

/* ref: FUN_00984460 */
unsigned int F_00984460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x984460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x200) = *(uint *)(in_ecx + 0x200) | 1;
    return 0;
  }
  *(uint *)(in_ecx + 0x200) = *(uint *)(in_ecx + 0x200) & 0xfffffffe;
  return 0;
}

/* ref: FUN_00984480 */
unsigned int F_00984480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x984480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x1fc) = *(uint *)(in_ecx + 0x1fc) | 2;
    return 0;
  }
  *(uint *)(in_ecx + 0x1fc) = *(uint *)(in_ecx + 0x1fc) & 0xfffffffd;
  return 0;
}

/* ref: FUN_009844a0 */
unsigned int F_009844a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9844a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x200) = *(uint *)(in_ecx + 0x200) | 2;
    return 0;
  }
  *(uint *)(in_ecx + 0x200) = *(uint *)(in_ecx + 0x200) & 0xfffffffd;
  return 0;
}

/* ref: FUN_009844c0 */
uint F_009844c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9844c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a7;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 8) = param_4;
  *(undefined4 *)((int)this + 0xc) = param_5;
  *(undefined4 *)((int)this + 0x10) = param_6;
  uVar1 = *param_7;
  *(undefined4 *)((int)this + 0x2c) = uVar2;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  return (uint)this;
}

/* ref: FUN_00984530 */
unsigned int F_00984530(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x984530u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar3 = (float10)param_2;
  *(float *)(in_ecx + 0x18) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x18) +
              (((float10)*(double *)&REFG(undefined, 0x1094560) * fVar3) / (float10)*(double *)&REFG(undefined, 0x1094568)) /
              (float10)*(float *)(in_ecx + 0x2c))));
  fVar2 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  *(float *)(in_ecx + 0x1c) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x1c) +
              ((fVar3 * fVar2) / (float10)*(double *)&REFG(undefined, 0x1088120)) /
              (float10)*(float *)(in_ecx + 0x2c))));
  *(float *)(in_ecx + 0x20) =
       ((float)GEN_TOF(((fVar3 * fVar2) / (float10)*(double *)&REFG(undefined, 0x10de740) +
              (float10)*(float *)(in_ecx + 0x20))));
  fVar1 = ((float)GEN_TOF((fVar3 / (float10)*(double *)&REFG(undefined, 0x10943d8) + (float10)*(float *)(in_ecx + 0x24))));
  *(float *)(in_ecx + 0x24) = fVar1;
  if ((float10)1 < (float10)fVar1) {
    *(undefined4 *)(in_ecx + 0x24) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x24), REFG(float, 0x1087f04));
  }
  return 0;
}

/* ref: FUN_009845c0 */
uint F_009845c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9845c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0xb8))(param_2);
  if ((char)uVar2 == '\0') {
    if (param_3 == 0x3d) goto LAB_00984615;
    bVar1 = F_00a5fcc0(param_2,param_3);
    if (bVar1 == 0) goto LAB_00984684;
    F_00a608f0(param_2,((undefined1 *)(gen_frame + 0x0)),param_3);
  }
  else if (param_3 == 0x3d) {
LAB_00984615: ;
    F_00a60ca0(param_2,((undefined1 *)(gen_frame + 0x0)),param_4,0);
  }
  else {
    bVar1 = F_00a5fcc0(param_2,param_3);
    if (bVar1 == 0) {
LAB_00984684: ;
      puVar3 = (undefined4 *)F_00a5feb0(param_2);
      *param_1 = *puVar3;
      param_1[1] = puVar3[1];
      param_1[2] = puVar3[2];
      goto LAB_0098469b;
    }
    F_00a608f0(param_2,((undefined1 *)(gen_frame + 0x0)),param_3);
  }
  *param_1 = (*(undefined4 *)(gen_frame + 0x30));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x34));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x38));
LAB_0098469b: ;
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return (uint)param_1;
}

/* ref: FUN_009846c0 */
unsigned int F_009846c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9846c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int * piVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  piVar4 = (int *)((int)this + 0x94);
  iVar5 = 0x20;
  fVar6 = (float10)((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) *
                          (float10)*(double *)&REFG(undefined, 0x10943d8))));
  fVar7 = (float10)*(double *)&REFG(undefined, 0x1094560);
  fVar8 = (float10)*(double *)&REFG(undefined, 0x1094568);
  fVar9 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  fVar10 = (float10)*(double *)&REFG(undefined, 0x1088120);
  fVar11 = (float10)*(double *)&REFG(undefined, 0x10de740);
  do {
    iVar2 = piVar4[-1];
    if (iVar2 != 0) {
      *(float *)(iVar2 + 0x18) =
           ((float)GEN_TOF((((fVar6 * fVar7) / fVar8) / (float10)*(float *)(iVar2 + 0x2c) +
                  (float10)*(float *)(iVar2 + 0x18))));
      *(float *)(iVar2 + 0x1c) =
           ((float)GEN_TOF((((fVar6 * fVar9) / fVar10) / (float10)*(float *)(iVar2 + 0x2c) +
                  (float10)*(float *)(iVar2 + 0x1c))));
      *(float *)(iVar2 + 0x20) =
           ((float)GEN_TOF(((float10)(double)(fVar6 * fVar9) / fVar11 + (float10)*(float *)(iVar2 + 0x20))));
      fVar1 = ((float)GEN_TOF((fVar6 / (float10)*(double *)&REFG(undefined, 0x10943d8) + (float10)*(float *)(iVar2 + 0x24))))
      ;
      *(float *)(iVar2 + 0x24) = fVar1;
      if ((float10)1 < (float10)fVar1) {
        *(undefined4 *)(iVar2 + 0x24) = uVar3;
      }
    }
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      *(float *)(iVar2 + 0x18) =
           ((float)GEN_TOF((((fVar6 * fVar7) / fVar8) / (float10)*(float *)(iVar2 + 0x2c) +
                  (float10)*(float *)(iVar2 + 0x18))));
      *(float *)(iVar2 + 0x1c) =
           ((float)GEN_TOF((((fVar6 * fVar9) / fVar10) / (float10)*(float *)(iVar2 + 0x2c) +
                  (float10)*(float *)(iVar2 + 0x1c))));
      *(float *)(iVar2 + 0x20) =
           ((float)GEN_TOF(((float10)(double)(fVar6 * fVar9) / fVar11 + (float10)*(float *)(iVar2 + 0x20))));
      fVar1 = ((float)GEN_TOF((fVar6 / (float10)*(double *)&REFG(undefined, 0x10943d8) + (float10)*(float *)(iVar2 + 0x24))))
      ;
      *(float *)(iVar2 + 0x24) = fVar1;
      if ((float10)1 < (float10)fVar1) {
        *(undefined4 *)(iVar2 + 0x24) = uVar3;
      }
    }
    iVar2 = piVar4[1];
    if (iVar2 != 0) {
      *(float *)(iVar2 + 0x18) =
           ((float)GEN_TOF((((fVar6 * fVar7) / fVar8) / (float10)*(float *)(iVar2 + 0x2c) +
                  (float10)*(float *)(iVar2 + 0x18))));
      *(float *)(iVar2 + 0x1c) =
           ((float)GEN_TOF((((fVar6 * fVar9) / fVar10) / (float10)*(float *)(iVar2 + 0x2c) +
                  (float10)*(float *)(iVar2 + 0x1c))));
      *(float *)(iVar2 + 0x20) =
           ((float)GEN_TOF(((float10)(double)(fVar6 * fVar9) / fVar11 + (float10)*(float *)(iVar2 + 0x20))));
      fVar1 = ((float)GEN_TOF((fVar6 / (float10)*(double *)&REFG(undefined, 0x10943d8) + (float10)*(float *)(iVar2 + 0x24))))
      ;
      *(float *)(iVar2 + 0x24) = fVar1;
      if ((float10)1 < (float10)fVar1) {
        *(undefined4 *)(iVar2 + 0x24) = uVar3;
      }
    }
    iVar2 = piVar4[2];
    if (iVar2 != 0) {
      *(float *)(iVar2 + 0x18) =
           ((float)GEN_TOF((((fVar6 * fVar7) / fVar8) / (float10)*(float *)(iVar2 + 0x2c) +
                  (float10)*(float *)(iVar2 + 0x18))));
      *(float *)(iVar2 + 0x1c) =
           ((float)GEN_TOF((((fVar6 * fVar9) / fVar10) / (float10)*(float *)(iVar2 + 0x2c) +
                  (float10)*(float *)(iVar2 + 0x1c))));
      *(float *)(iVar2 + 0x20) =
           ((float)GEN_TOF(((float10)(double)(fVar6 * fVar9) / fVar11 + (float10)*(float *)(iVar2 + 0x20))));
      fVar1 = ((float)GEN_TOF((fVar6 / (float10)*(double *)&REFG(undefined, 0x10943d8) + (float10)*(float *)(iVar2 + 0x24))))
      ;
      *(float *)(iVar2 + 0x24) = fVar1;
      if ((float10)1 < (float10)fVar1) {
        *(undefined4 *)(iVar2 + 0x24) = uVar3;
      }
    }
    piVar4 = piVar4 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return 0;
}

/* ref: FUN_00984890 */
uint F_00984890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x984890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a7;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 * puVar4;
  int * piVar5;
  
  iVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != param_5) {
    piVar5 = (int *)((int)this + 0x90);
    while (*piVar5 != 0) {
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 1;
      if (0x7f < iVar3) {
        return (uint)param_1;
      }
    }
    piVar5 = (int *)((int)this + 0x294);
    *piVar5 = *piVar5 + 1;
    if (*piVar5 == 0) {
      *(undefined4 *)((int)this + 0x294) = 1;
    }
    *(int *)((int)this + 0x290) = *(int *)((int)this + 0x290) + 1;
    *param_1 = *(undefined4 *)((int)this + 0x294);
    param_1[1] = iVar3;
    puVar4 = (undefined4 *)F_00406b90(0x30,0,0);
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = param_2;
      puVar4[2] = param_4;
      puVar4[3] = param_5;
      puVar4[1] = param_3;
      puVar4[4] = param_6;
      uVar1 = *param_1;
      puVar4[5] = *param_7;
      iVar3 = param_1[1];
      puVar4[0xb] = uVar2;
      puVar4[10] = uVar1;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      *(undefined4 * PTR32 *)((int)this + iVar3 * 4 + 0x90) = puVar4;
      return (uint)param_1;
    }
    *(undefined4 *)((int)this + param_1[1] * 4 + 0x90) = 0;
  }
  return (uint)param_1;
}

/* ref: FUN_009849c0 */
uint F_009849c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9849c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0xc) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_009849d0 */
unsigned int F_009849d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9849d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x10) = param_2;
  return 0;
}

/* ref: FUN_00984a00 */
uint F_00984a00(unsigned int gen_a0)
{
  GEN_ENTER(0x984a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 4));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00984a30 */
byte F_00984a30(unsigned int gen_a0)
{
  GEN_ENTER(0x984a30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 8) != 0;
}

/* ref: FUN_00984a50 */
unsigned int F_00984a50(unsigned int gen_a0)
{
  GEN_ENTER(0x984a50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&REFG(undefined4, 0x14a06d8))[(int)(iVar1)] == 0) {
      (&REFG(undefined4, 0x14a06d8))[(int)(iVar1)] = param_1;
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return 0;
}

/* ref: FUN_00984a80 */
unsigned int F_00984a80(unsigned int gen_a0)
{
  GEN_ENTER(0x984a80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  
  piVar1 = &REFG(undefined4, 0x14a06d8);
  do {
    if (*piVar1 == param_1) {
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x14a0718);
  return 0;
}

/* ref: FUN_00984ab0 */
uint F_00984ab0(void)
{
  GEN_ENTER(0x984ab0u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  
  if (REFG(int, 0x14a06d0) != 0) {
    F_0050c620(REFG(int, 0x14a06d0),0,0);
    REFG(int, 0x14a06d0) = 0;
  }
  if (REFG(int * PTR32, 0x14a06c4) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a06c4) + 0xc))))(REFG(int * PTR32, 0x14a06c4));
    REFG(int * PTR32, 0x14a06c4) = (int *)0x0;
  }
  if (REFG(int * PTR32, 0x14a06bc) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a06bc) + 0xc))))(REFG(int * PTR32, 0x14a06bc));
    REFG(int * PTR32, 0x14a06bc) = (int *)0x0;
  }
  if (REFG(int * PTR32, 0x14a06c0) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a06c0) + 0xc))))(REFG(int * PTR32, 0x14a06c0));
    REFG(int * PTR32, 0x14a06c0) = (int *)0x0;
  }
  pvVar1 = F_00c48350(&REFG(undefined4, 0x14a06d8),0,0x40);
  return (uint)pvVar1;
}

/* ref: FUN_00984b30 */
unsigned int F_00984b30(unsigned int gen_a0)
{
  GEN_ENTER(0x984b30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((char)param_1 != '\0') {
    REFG(undefined4, 0x14a06b8) = REFG(undefined4, 0x14a06b8) | 1;
    return 0;
  }
  REFG(undefined4, 0x14a06b8) = REFG(undefined4, 0x14a06b8) & 0xfffffffe;
  return 0;
}

/* ref: FUN_00984b50 */
byte F_00984b50(unsigned int gen_a0)
{
  GEN_ENTER(0x984b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c48350((undefined *)((int)this + 0x10),0,0x60);
  *(undefined4 *)((int)this + 0x18) = 0xe0000000;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x38) = 0xe0000000;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x58) = 0xe0000000;
  *(undefined4 *)((int)this + 0x5c) = 0;
  F_00c48350((undefined *)((int)this + 0x70),0,0x40);
  *(undefined4 *)((int)this + 0x78) = 0xe0000000;
  *(undefined4 *)((int)this + 0x88) = 0xe0000000;
  *(undefined4 *)((int)this + 0x98) = 0xe0000000;
  *(undefined4 *)((int)this + 0xa8) = 0xe0000000;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined1 *)((int)this + 0xb0) = 0;
  return 1;
}

/* ref: FUN_00984c30 */
unsigned int F_00984c30(unsigned int gen_a0)
{
  GEN_ENTER(0x984c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)((int)this + 0x78);
  F_00981430((int)this + 0x48,(uint)puVar1);
  F_00982720((int)this + 0xe8,puVar1,(int)this + 0xa8);
  *(undefined4 *)this = *puVar1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 0x84);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 0x7c);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0x88);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x94);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x80);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x8c);
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x98);
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)((int)this + 0x6c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x70);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x74);
  return 0;
}

/* ref: FUN_00984cd0 */
uint F_00984cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x984cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  short * psVar2;
  ushort uVar3;
  int iVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  uint local_c;
  int local_8;
  
  local_c = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3a000)));
  if (local_c != 0) {
    local_8 = 0x39000;
    do {
      iVar4 = *(int *)((int)this + 0x158);
      uVar3 = *(ushort *)(local_8 + iVar4);
      iVar7 = (uint)uVar3 * 0x68;
      iVar1 = iVar7 + 0x1000 + iVar4;
      if (*(int *)(iVar7 + 0x103c + iVar4) != 4) {
        piVar5 = *(int * PTR32 *)(iVar1 + 0x30);
        ((code *)*(gen_code32 *)(*piVar5 + 0x30))(piVar5);
        piVar5 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 0x30) + 0x1dc)));
        uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0xe8))(piVar5);
        *((ushort *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3b004 +
         ((uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x158) + 0x46004 + uVar6 * 2))) + uVar6 * 0x800) * 2)))
             = uVar3;
        psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 0x158) + 0x46004 + uVar6 * 2)));
        *psVar2 = *psVar2 + 1;
      }
      local_8 = local_8 + 2;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x150) + 0x54))))(*(int * PTR32 *)((int)this + 0x150));
  return uVar6;
}

/* ref: FUN_00984d90 */
unsigned int F_00984d90(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0x984d90u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1164);
  if (iVar3 < 0x80) {
    puVar1 = (undefined4 *)(iVar3 * 0x20 + 0x164 + param_1);
    *(int *)(param_1 + 0x1164) = iVar3 + 1;
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    uVar2 = param_2[2];
    puVar1[3] = (undefined4)gen_fl2bits(param_3);
    puVar1[2] = uVar2;
    puVar1[4] = (undefined4)gen_fl2bits(param_4);
    puVar1[5] = (undefined4)gen_fl2bits(param_5);
    puVar1[6] = (undefined4)gen_fl2bits((float)((float10)param_5 * (float10)param_6));
    puVar1[7] = (undefined4)gen_fl2bits((float)((float10)param_5 * (float10)param_7));
  }
  return 0;
}

/* ref: FUN_00984e00 */
uint F_00984e00(unsigned int gen_a0)
{
  GEN_ENTER(0x984e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  undefined * this_00;
  int iVar3;
  uint uVar4;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x150);
  ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  piVar2 = *(int * PTR32 *)((int)this + 0x158);
  iVar3 = 0;
  while (*piVar2 != 0) {
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
    if (0x3ff < iVar3) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      return 0;
    }
  }
  if (REFG(char, 0x14a06d6) == '\0') {
    this_00 = (undefined *)(REFG(int, 0x14a09e0) + REFG(int, 0x14a09d8));
    REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + 0xa0;
    if (this_00 != (undefined *)0x0) {
      uVar4 = F_0097acd0(this_00,iVar3);
      goto LAB_00984e5b;
    }
  }
  else {
    REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + 0xa0;
  }
  uVar4 = 0;
LAB_00984e5b: ;
  *((uint *)GEN_TOP((*(int *)((int)this + 0x158) + iVar3 * 4))) = uVar4;
  ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  return uVar4;
}

/* ref: FUN_00984ea0 */
unsigned int F_00984ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x984ea0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1);
    ((code *)*(gen_code32 *)*param_1)(param_1,1);
    if ((REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0) && (uVar1 != 0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
    }
  }
  return 0;
}

/* ref: FUN_00984ee0 */
uint F_00984ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x984ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if ((param_2 < 0x800) && (param_1 != 0)) {
    uVar3 = param_2 * 0x68;
    iVar1 = *(int *)((int)this + 0x158) + 0x1000 + uVar3;
    if ((*((int *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1040 + uVar3))) == param_1) &&
       (*(int *)(iVar1 + 0x3c) != 3)) {
      uVar3 = *(uint *)(iVar1 + 0x30);
      if ((uVar3 != 0) && (piVar2 = *(int * PTR32 *)(uVar3 + 0x270), piVar2 != (int *)0x0)) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,iVar1);
      }
      *(undefined4 *)(iVar1 + 0x3c) = 3;
    }
  }
  return uVar3;
}

/* ref: FUN_00984f40 */
ushort F_00984f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x984f40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if ((((param_2 < 0x800) && (param_1 != 0)) &&
      (uVar3 = *(int *)((int)this + 0x158) + 0x1000 + param_2 * 0x68,
      *((int *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1040 + param_2 * 0x68))) == param_1)) &&
     ((iVar1 = *(int *)(uVar3 + 0x30), iVar1 != 0 && (uVar3 = *(int *)(uVar3 + 0x3c) - 1, uVar3 < 2)
      ))) {
    uVar2 = (ushort)(~(byte)((ushort)*(undefined2 *)(iVar1 + 0x3ac) >> 10) & 1) << 10 |
            *(ushort *)(iVar1 + 0x3ac) & 0xfbff;
    uVar3 = (uint)uVar2;
    *(ushort *)(iVar1 + 0x3ac) = uVar2;
  }
  return (ushort)uVar3;
}

/* ref: FUN_00984fc0 */
byte F_00984fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x984fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  int iVar2;
  byte bVar3;
  
  if ((((param_2 < 0x800) && (param_1 != 0)) &&
      (iVar1 = *(int *)((int)this + 0x158) + 0x1000 + param_2 * 0x68,
      *((int *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1040 + param_2 * 0x68))) == param_1)) &&
     (iVar2 = *(int *)(iVar1 + 0x3c), iVar2 != 3)) {
    if (iVar2 == 4) {
      return 1;
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 != 0) {
      bVar3 = F_0097ec70(iVar1);
      return bVar3 == 0;
    }
  }
  return 0;
}

/* ref: FUN_00985020 */
uint F_00985020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x985020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = param_2;
  if (((param_2 < 0x800) && (param_1 != 0)) &&
     (uVar1 = *(int *)((int)this + 0x158) + 0x1000 + param_2 * 0x68,
     *((int *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1040 + param_2 * 0x68))) == param_1)) {
    *(byte *)(uVar1 + 0x62) =
         *(byte *)(uVar1 + 0x62) ^ (*(byte *)(uVar1 + 0x62) ^ (byte)param_3) & 1;
  }
  return uVar1;
}

/* ref: FUN_00985060 */
uint F_00985060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x985060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = param_2;
  if (((param_2 < 0x800) && (param_1 != 0)) &&
     (uVar1 = *(int *)((int)this + 0x158) + 0x1000 + param_2 * 0x68,
     *((int *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1040 + param_2 * 0x68))) == param_1)) {
    *(byte *)(uVar1 + 0x62) =
         *(byte *)(uVar1 + 0x62) ^ ((char)param_3 * '\x02' ^ *(byte *)(uVar1 + 0x62)) & 2;
  }
  return uVar1;
}

/* ref: FUN_009850a0 */
uint F_009850a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9850a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = param_2;
  if ((((param_2 < 0x800) && (param_1 != 0)) &&
      (uVar1 = *(int *)((int)this + 0x158) + 0x1000 + param_2 * 0x68,
      *((int *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1040 + param_2 * 0x68))) == param_1)) &&
     (*(int *)(uVar1 + 0x30) != 0)) {
    *(byte *)(uVar1 + 0x5e) = (byte)param_4;
    *(ushort *)(uVar1 + 0x60) = *(ushort *)(uVar1 + 0x60) | 1 << ((byte)param_4 & 0x1f);
  }
  return uVar1;
}

/* ref: FUN_009850f0 */
uint F_009850f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x9850f0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = param_3;
  if ((((param_3 < 0x800) && (param_2 != 0)) &&
      (uVar1 = *(int *)(param_1 + 0x158) + 0x1000 + param_3 * 0x68,
      *((int *)GEN_TOP((*(int *)(param_1 + 0x158) + 0x1040 + param_3 * 0x68))) == param_2)) &&
     ((uVar1 = *(uint *)(uVar1 + 0x30), uVar1 != 0 &&
      (((*(uint *)(uVar1 + 0x1d0) & 0x40000) == 0 || (*(int *)(uVar1 + 0x1e0) != 0)))))) {
    *((float *)GEN_TOP((*(int *)(uVar1 + 0x1ec) + 0x94))) = param_4;
  }
  return uVar1;
}

/* ref: FUN_00985150 */
uint F_00985150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x985150u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = param_3;
  if ((((param_3 < 0x800) && (param_2 != 0)) &&
      (uVar1 = *(int *)(param_1 + 0x158) + 0x1000 + param_3 * 0x68,
      *((int *)GEN_TOP((*(int *)(param_1 + 0x158) + 0x1040 + param_3 * 0x68))) == param_2)) &&
     ((uVar1 = *(uint *)(uVar1 + 0x30), uVar1 != 0 &&
      (((*(uint *)(uVar1 + 0x1d0) & 0x40000) == 0 || (*(int *)(uVar1 + 0x1e0) != 0)))))) {
    *(float *)(uVar1 + 0x318) = param_4;
  }
  return uVar1;
}

/* ref: FUN_009851b0 */
uint F_009851b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9851b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = param_2;
  if (((param_2 < (undefined4 *)0x800) && (param_1 != 0)) &&
     (puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1000 + (int)((int)(uintptr_t)param_2) * 0x68))),
     *((int *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1040 + (int)((int)(uintptr_t)param_2) * 0x68))) == param_1)) {
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
    puVar2[3] = param_3[4];
    puVar2[4] = param_3[5];
    puVar2[5] = param_3[6];
    puVar2[6] = param_3[8];
    puVar2[7] = param_3[9];
    puVar2[8] = param_3[10];
    puVar2[9] = param_3[0xc];
    puVar2[10] = param_3[0xd];
    piVar1 = (int *)puVar2[0xc];
    puVar2[0xb] = param_3[0xe];
    if ((piVar1 != (int *)0x0) && (((piVar1[0x74] & 0x40000U) == 0 || (piVar1[0x78] != 0)))) {
      puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,puVar2)));
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00985260 */
uint F_00985260(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x985260u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float param_2 = (float)gen_a2;
  char * param_3 = (char *)(uintptr_t)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  float * param_5 = (float *)(uintptr_t)gen_a5;
  float * param_6 = (float *)(uintptr_t)gen_a6;
  float * param_7 = (float *)(uintptr_t)gen_a7;
  int * piVar1;
  int iVar2;
  float fVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  
  *param_3 = '\0';
  fVar3 = param_2;
  if (((((uint)gen_fl2bits(param_2) < 0x800) && (param_1 != 0)) &&
      (fVar3 = gen_bits2f((int)gen_fl2bits(param_2) * 0x68 + 0x1000 + *(int *)((int)this + 0x158)),
      *((int *)GEN_TOP(((int)gen_fl2bits(param_2) * 0x68 + 0x1040 + *(int *)((int)this + 0x158)))) == param_1))
     && ((fVar3 = *(float *)((int)gen_fl2bits(fVar3) + 0x30), fVar3 != 0.0 &&
         (((*(uint *)((int)gen_fl2bits(fVar3) + 0x1d0) & 0x40000) == 0 ||
          (*(int *)((int)gen_fl2bits(fVar3) + 0x1e0) != 0)))))) {
    piVar1 = *(int * PTR32 *)((int)gen_fl2bits(fVar3) + 0x1dc);
    fVar3 = gen_bits2f(((code *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1));
    *param_3 = (char)(uint)gen_fl2bits(fVar3);
    if ((char)(uint)gen_fl2bits(fVar3) != '\0') {
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar1 + 0x74))(piVar1);
      iVar2 = *piVar1;
      *param_4 = (float)extraout_ST0;
      extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(iVar2 + 0x78))(piVar1);
      iVar2 = *piVar1;
      *param_5 = (float)extraout_ST0_00;
      extraout_ST0_01 = ((gen_fcode *)*(gen_code32 *)(iVar2 + 0x7c))(piVar1);
      iVar2 = *piVar1;
      *param_6 = (float)extraout_ST0_01;
      extraout_ST0_02 = ((gen_fcode *)*(gen_code32 *)(iVar2 + 0x80))(piVar1); fVar3 = extraout_ST0_02;
      *param_7 = (float)extraout_ST0_02;
    }
  }
  return (uint)gen_fl2bits(fVar3);
}

/* ref: FUN_00985340 */
uint F_00985340(unsigned int gen_a0)
{
  GEN_ENTER(0x985340u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = (uint)(param_1 - REFG(int, 0x14a09f4)) >> 10;
  *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
  REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
  REFG(undefined4, 0x14a09e8) = uVar1;
  return uVar1;
}

/* ref: FUN_00985370 */
uint F_00985370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x985370u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  undefined4 uVar5;
  
  fVar1 = *(float *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 8);
  (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(param_1 + 4);
  (*(undefined4 *)(gen_frame + 0x48)) = uVar5;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  fVar4 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  fVar2 = (float)fVar4;
  (*(float *)(gen_frame + 0x68)) = fVar2;
  fVar4 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  uVar5 = 0;
  (*(float *)(gen_frame + 0x8)) = fVar2;
  (*(float *)(gen_frame + 0xc)) = (float)fVar4;
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(-(float10)(float)fVar4));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(float *)(gen_frame + 0x18)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  uVar3 = F_00981ba0(param_2,&(*(float *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x38)));
  fVar4 = (float10)REFG(double, 0x1088108);
  *(float *)(param_2 + 0x24) = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0xc) + fVar4)));
  fVar1 = *(float *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x2c) = uVar5;
  *(float *)(param_2 + 0x28) = (float)(fVar4 + (float10)fVar1);
  return uVar3;
}

