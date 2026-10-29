#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00a8dc70 */
GEN_FRAME uint GEN_THISCALL F_00a8dc70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8dc70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_00a8dcb0 */
GEN_FRAME uint GEN_THISCALL F_00a8dcb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8dcb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_00a8dcf0 */
GEN_FRAME uint GEN_THISCALL F_00a8dcf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8dcf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a8dd00 */
GEN_FRAME uint GEN_THISCALL F_00a8dd00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8dd00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a8dd10 */
GEN_FRAME uint GEN_THISCALL F_00a8dd10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8dd10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a8dd20 */
GEN_FRAME uint GEN_THISCALL F_00a8dd20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8dd20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a8ddd0 */
GEN_FRAME uint GEN_THISCALL F_00a8ddd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8ddd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a8ddf0 */
GEN_FRAME uint GEN_THISCALL F_00a8ddf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8ddf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a8de40 */
GEN_FRAME uint GEN_STDCALL F_00a8de40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8de40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a8dee0 */
GEN_FRAME uint GEN_STDCALL F_00a8dee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8dee0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a8df00 */
GEN_FRAME uint GEN_STDCALL F_00a8df00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8df00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a8df50 */
GEN_FRAME uint GEN_THISCALL F_00a8df50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8df50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a8df70 */
GEN_FRAME uint GEN_THISCALL F_00a8df70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8df70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar4 = puVar3;
  if (*(char *)((int)puVar3[1] + 0x29) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        if ((*(char *)((int)puVar3 + 0x29) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x29) == '\0');
  }
  if (*(char *)((int)puVar3 + 0x29) == '\0') {
    puVar1 = (undefined4 *)*puVar3;
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  }
  if (*(char *)((int)puVar1 + 0x29) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x29) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00a8e060 */
GEN_FRAME uint GEN_STDCALL F_00a8e060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8e060u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a8e070 */
GEN_FRAME uint GEN_THISCALL F_00a8e070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8e070u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * -0x34;
  return (uint)in_ecx;
}

/* ref: FUN_00a8e090 */
GEN_FRAME undefined4 * GEN_THISCALL F_00a8e090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8e090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00a8e0e0 */
GEN_FRAME uint GEN_THISCALL F_00a8e0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00a884e0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00a8e100 */
GEN_FRAME byte GEN_THISCALL F_00a8e100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8e100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a8e120 */
GEN_FRAME byte GEN_THISCALL F_00a8e120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8e120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a8e140 */
GEN_FRAME byte GEN_THISCALL F_00a8e140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8e140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a8e160 */
GEN_FRAME uint GEN_THISCALL F_00a8e160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a8e170 */
GEN_FRAME uint GEN_THISCALL F_00a8e170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_00a8e1b0 */
GEN_FRAME uint GEN_THISCALL F_00a8e1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e1b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a8e1c0 */
GEN_FRAME uint GEN_THISCALL F_00a8e1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e1c0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00a88580(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00a8e2da;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_00a883a0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00a88380(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00a8e2da: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00a8be50((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00a8beb0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_00a8be50((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00a8e398: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00a8beb0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_00a8e398;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00a8be50((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_00a8beb0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,0x191);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a8e420 */
GEN_FRAME uint GEN_THISCALL F_00a8e420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00a88580(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00a8e440 */
GEN_FRAME uint GEN_THISCALL F_00a8e440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_009283d0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00a8e460 */
GEN_FRAME uint GEN_THISCALL F_00a8e460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8e460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a8e4c0 */
GEN_FRAME uint GEN_THISCALL F_00a8e4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00928100(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00a8e4e0 */
GEN_FRAME uint GEN_THISCALL F_00a8e4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00928170(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00a8e500 */
GEN_FRAME uint GEN_THISCALL F_00a8e500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00a88660(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00a8e520 */
GEN_FRAME uint GEN_THISCALL F_00a8e520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00a886d0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00a8e540 */
GEN_FRAME uint F_00a8e540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_00a8e560 */
GEN_FRAME uint F_00a8e560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_00a8e580 */
GEN_FRAME unsigned int F_00a8e580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a88bf0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a8e5a0 */
GEN_FRAME unsigned int F_00a8e5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e5a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a88bf0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a8e5c0 */
GEN_FRAME uint F_00a8e5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a8c870(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00a8e5e0 */
GEN_FRAME unsigned int F_00a8e5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e5e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a88c70(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a8e600 */
GEN_FRAME unsigned int F_00a8e600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a88c70(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a8e620 */
GEN_FRAME unsigned int F_00a8e620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a88d10(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a8e640 */
GEN_FRAME unsigned int F_00a8e640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a88d10(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a8e660 */
GEN_FRAME uint F_00a8e660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 5) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1 = puVar1 + 5;
  }
  return (uint)puVar1;
}

/* ref: FUN_00a8e6a0 */
GEN_FRAME uint F_00a8e6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a8c970(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00a8e6c0 */
GEN_FRAME uint F_00a8e6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a8ca30(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00a8e6e0 */
GEN_FRAME unsigned int F_00a8e6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e6e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 3) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_00a8e710 */
GEN_FRAME unsigned int F_00a8e710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a88d10(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a8e740 */
GEN_FRAME uint GEN_THISCALL F_00a8e740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8e740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00a8e770 */
GEN_FRAME uint GEN_THISCALL F_00a8e770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a8e790 */
GEN_FRAME uint GEN_THISCALL F_00a8e790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8e790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_0042cbc0((undefined *)((int)this + 0x54) GEN_EDX_ARG,param_1 + 0x54);
  *(undefined2 *)((int)this + 0xa8) = *(undefined2 *)(param_1 + 0xa8);
  *(undefined2 *)((int)this + 0xaa) = *(undefined2 *)(param_1 + 0xaa);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  iVar3 = param_1 + 0xb4;
  iVar1 = 0xb4 - iVar3;
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  param_1 = 0x17;
  do {
    F_00a88d90((undefined *)((int)this + iVar3 + iVar1) GEN_EDX_ARG,iVar3);
    iVar3 = iVar3 + 0x18c;
    param_1 = param_1 - 1;
  } while (-1 < param_1);
  *(undefined4 *)((int)this + 0x25d4) = *(undefined4 *)(iVar2 + 0x25d4);
  *(undefined4 *)((int)this + 0x25d8) = *(undefined4 *)(iVar2 + 0x25d8);
  *(undefined4 *)((int)this + 0x25dc) = *(undefined4 *)(iVar2 + 0x25dc);
  *(undefined2 *)((int)this + 0x25e0) = *(undefined2 *)(iVar2 + 0x25e0);
  *(undefined4 *)((int)this + 0x25e4) = *(undefined4 *)(iVar2 + 0x25e4);
  *(undefined4 *)((int)this + 0x25e8) = *(undefined4 *)(iVar2 + 0x25e8);
  *(undefined4 *)((int)this + 0x25ec) = *(undefined4 *)(iVar2 + 0x25ec);
  *(undefined4 *)((int)this + 0x25f0) = *(undefined4 *)(iVar2 + 0x25f0);
  *(undefined4 *)((int)this + 0x25f4) = *(undefined4 *)(iVar2 + 0x25f4);
  *(undefined4 *)((int)this + 0x25f8) = *(undefined4 *)(iVar2 + 0x25f8);
  *(undefined4 *)((int)this + 0x25fc) = *(undefined4 *)(iVar2 + 0x25fc);
  *(undefined4 *)((int)this + 0x2600) = *(undefined4 *)(iVar2 + 0x2600);
  *(undefined4 *)((int)this + 0x2604) = *(undefined4 *)(iVar2 + 0x2604);
  *(undefined4 *)((int)this + 0x2608) = *(undefined4 *)(iVar2 + 0x2608);
  *(undefined4 *)((int)this + 0x260c) = *(undefined4 *)(iVar2 + 0x260c);
  *(undefined4 *)((int)this + 0x2610) = *(undefined4 *)(iVar2 + 0x2610);
  *(undefined4 *)((int)this + 0x2614) = *(undefined4 *)(iVar2 + 0x2614);
  *(undefined4 *)((int)this + 0x2618) = *(undefined4 *)(iVar2 + 0x2618);
  *(undefined4 *)((int)this + 0x261c) = *(undefined4 *)(iVar2 + 0x261c);
  *(undefined4 *)((int)this + 0x2620) = *(undefined4 *)(iVar2 + 0x2620);
  return (uint)this;
}

/* ref: FUN_00a8e920 */
GEN_FRAME uint GEN_THISCALL F_00a8e920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa8e920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00429760(param_4,0x18,0x191);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x14);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x14) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(iVar2 + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x15) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x15) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00a8eb1d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x14) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x15) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00a8eb1d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_00a8eb50 */
GEN_NOFRAME uint GEN_THISCALL F_00a8eb50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8eb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a88e60(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a8eb60 */
GEN_NOFRAME uint GEN_THISCALL F_00a8eb60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8eb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a88f00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a8eb70 */
GEN_FRAME uint GEN_THISCALL F_00a8eb70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8eb70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a8eb90 */
GEN_FRAME uint GEN_THISCALL F_00a8eb90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8eb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a8ebb0 */
GEN_NOFRAME uint GEN_THISCALL F_00a8ebb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8ebb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a89120(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a8ebc0 */
GEN_FRAME uint GEN_THISCALL F_00a8ebc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8ebc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a8ebe0 */
GEN_NOFRAME uint GEN_THISCALL F_00a8ebe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8ebe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a89180(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a8ebf0 */
GEN_NOFRAME uint GEN_THISCALL F_00a8ebf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8ebf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a891e0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a8ec00 */
GEN_FRAME uint GEN_THISCALL F_00a8ec00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8ec00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a8ec20 */
GEN_FRAME uint GEN_THISCALL F_00a8ec20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8ec20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a8ec40 */
GEN_FRAME uint GEN_THISCALL F_00a8ec40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8ec40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a8ec60 */
GEN_NOFRAME uint GEN_THISCALL F_00a8ec60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8ec60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a89070(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a8ec70 */
GEN_FRAME uint GEN_THISCALL F_00a8ec70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8ec70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a8ec90 */
GEN_FRAME uint GEN_THISCALL F_00a8ec90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8ec90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a8ecb0 */
GEN_FRAME unsigned int F_00a8ecb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa8ecb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  
  if (param_1 != param_2) {
    iVar5 = *param_3;
    piVar4 = param_1;
    do {
      iVar5 = iVar5 + 1;
      *param_3 = iVar5;
      if (*(char *)((int)piVar4 + 0x29) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x29) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x29);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x29);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x29);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x29);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return;
}

/* ref: FUN_00a8ed40 */
GEN_FRAME uint GEN_THISCALL F_00a8ed40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8ed40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this GEN_EDX_FWD,param_1);
  F_0042ccf0((undefined *)((int)this + 0x54) GEN_EDX_ARG,param_1 + 0x54);
  *(undefined2 *)((int)this + 0xa8) = *(undefined2 *)(param_1 + 0xa8);
  *(undefined2 *)((int)this + 0xaa) = *(undefined2 *)(param_1 + 0xaa);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  F_00a8cc10((undefined *)((int)this + 0xb0) GEN_EDX_ARG,param_1 + 0xb0);
  *(undefined4 *)((int)this + 0x25d4) = *(undefined4 *)(param_1 + 0x25d4);
  *(undefined4 *)((int)this + 0x25d8) = *(undefined4 *)(param_1 + 0x25d8);
  *(undefined4 *)((int)this + 0x25dc) = *(undefined4 *)(param_1 + 0x25dc);
  *(undefined2 *)((int)this + 0x25e0) = *(undefined2 *)(param_1 + 0x25e0);
  *(undefined4 *)((int)this + 0x25e4) = *(undefined4 *)(param_1 + 0x25e4);
  *(undefined4 *)((int)this + 0x25e8) = *(undefined4 *)(param_1 + 0x25e8);
  *(undefined4 *)((int)this + 0x25ec) = *(undefined4 *)(param_1 + 0x25ec);
  *(undefined4 *)((int)this + 0x25f0) = *(undefined4 *)(param_1 + 0x25f0);
  *(undefined4 *)((int)this + 0x25f4) = *(undefined4 *)(param_1 + 0x25f4);
  *(undefined4 *)((int)this + 0x25f8) = *(undefined4 *)(param_1 + 0x25f8);
  *(undefined4 *)((int)this + 0x25fc) = *(undefined4 *)(param_1 + 0x25fc);
  *(undefined4 *)((int)this + 0x2600) = *(undefined4 *)(param_1 + 0x2600);
  *(undefined4 *)((int)this + 0x2604) = *(undefined4 *)(param_1 + 0x2604);
  *(undefined4 *)((int)this + 0x2608) = *(undefined4 *)(param_1 + 0x2608);
  *(undefined4 *)((int)this + 0x260c) = *(undefined4 *)(param_1 + 0x260c);
  *(undefined4 *)((int)this + 0x2610) = *(undefined4 *)(param_1 + 0x2610);
  *(undefined1 *)((int)this + 0x2614) = *(undefined1 *)(param_1 + 0x2614);
  *(undefined1 *)((int)this + 0x2615) = *(undefined1 *)(param_1 + 0x2615);
  *(undefined1 *)((int)this + 0x2616) = *(undefined1 *)(param_1 + 0x2616);
  *(undefined1 *)((int)this + 0x2617) = *(undefined1 *)(param_1 + 0x2617);
  *(undefined4 *)((int)this + 0x2618) = *(undefined4 *)(param_1 + 0x2618);
  *(undefined4 *)((int)this + 0x261c) = *(undefined4 *)(param_1 + 0x261c);
  *(undefined4 *)((int)this + 0x2620) = *(undefined4 *)(param_1 + 0x2620);
  return (uint)this;
}

/* ref: FUN_00a8eec0 */
GEN_FRAME uint GEN_THISCALL F_00a8eec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8eec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = param_2 * 0x11c + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_00a8eee0 */
GEN_FRAME uint GEN_THISCALL F_00a8eee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8eee0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3 * -0x11c;
  return (uint)param_2;
}

/* ref: FUN_00a8ef00 */
GEN_FRAME uint GEN_THISCALL F_00a8ef00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8ef00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = param_2 * 0x11c + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_00a8ef20 */
GEN_FRAME uint GEN_THISCALL F_00a8ef20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8ef20u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3 * -0x11c;
  return (uint)param_2;
}

/* ref: FUN_00a8ef40 */
GEN_FRAME unsigned int F_00a8ef40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8ef40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 5) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
    }
    puVar1 = puVar1 + 5;
  }
  return 0;
}

/* ref: FUN_00a8ef80 */
GEN_FRAME unsigned int F_00a8ef80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8ef80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 3) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
    }
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_00a8efc0 */
GEN_FRAME uint F_00a8efc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8efc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)param_2 + 0xbc) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)param_2 + 0x60) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a8eff0 */
GEN_FRAME unsigned int F_00a8eff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8eff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00a8f020 */
GEN_FRAME unsigned int F_00a8f020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00a8f050 */
GEN_FRAME unsigned int F_00a8f050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8f050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00a8f080 */
GEN_FRAME unsigned int F_00a8f080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00a8f0b0 */
GEN_FRAME unsigned int F_00a8f0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8f0b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00a8f0e0 */
GEN_FRAME unsigned int F_00a8f0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00a8f120 */
GEN_FRAME unsigned int F_00a8f120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8f120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00a8f150 */
GEN_FRAME unsigned int F_00a8f150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f150u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00a8f180 */
GEN_FRAME uint F_00a8f180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f180u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a8f190 */
GEN_FRAME uint F_00a8f190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8f190u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_00a88c70(this GEN_EDX_ARG,iVar1);
    }
    iVar1 = iVar1 + 0x11c;
    this = (undefined *)((int)this + 0x11c);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a8f1d0 */
GEN_FRAME uint F_00a8f1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  F_0042c880((undefined *)(param_2 + 0x58) GEN_EDX_ARG);
  uVar1 = F_0042c880((undefined *)(param_2 + 4) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a8f1f0 */
GEN_FRAME uint F_00a8f1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a8d060(param_2);
  return uVar1;
}

/* ref: FUN_00a8f210 */
GEN_FRAME unsigned int F_00a8f210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8f210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 0xd) {
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = puVar3;
      puVar5 = puVar1;
      for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar1 = puVar1 + 0xd;
  }
  return 0;
}

/* ref: FUN_00a8f250 */
GEN_FRAME uint F_00a8f250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa8f250u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined * this;
  
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_00a88c70(this GEN_EDX_ARG,param_1);
    }
    param_1 = param_1 + 0x11c;
    this = (undefined *)((int)this + 0x11c);
  } while (param_1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a8f290 */
GEN_FRAME uint GEN_STDCALL F_00a8f290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a8f2b0 */
GEN_FRAME uint F_00a8f2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f2b0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *param_1 = *param_1 + param_2 * 0x11c;
  return (uint)param_1;
}

/* ref: FUN_00a8f2d0 */
GEN_FRAME uint F_00a8f2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f2d0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *param_1 = *param_1 + param_2 * 0x11c;
  return (uint)param_1;
}

/* ref: FUN_00a8f2f0 */
GEN_FRAME unsigned int F_00a8f2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8f2f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 * puVar1;
  undefined2 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00a8f320 */
GEN_FRAME unsigned int F_00a8f320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8f320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00a8f350 */
GEN_FRAME unsigned int F_00a8f350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8f350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  undefined1 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00a8f380 */
GEN_FRAME uint F_00a8f380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa8f380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar2 = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *param_1;
      F_0042cbc0(puVar2 + 1 GEN_EDX_ARG,param_1 + 1);
      F_0042cbc0(puVar2 + 0x16 GEN_EDX_ARG,param_1 + 0x16);
      puVar2[0x2b] = param_1[0x2b];
      puVar2[0x2c] = param_1[0x2c];
      puVar2[0x2d] = param_1[0x2d];
      puVar3 = param_1 + 0x2e;
      puVar4 = puVar2 + 0x2e;
      for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar2[0x46] = param_1[0x46];
    }
    param_1 = param_1 + 0x47;
    puVar2 = puVar2 + 0x47;
  } while (param_1 != param_2);
  return (uint)puVar2;
}

/* ref: FUN_00a8f430 */
GEN_FRAME uint F_00a8f430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8f430u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  *param_3 = *param_3 + (param_2 - param_1) / 0x11c;
  return (uint)param_3;
}

/* ref: FUN_00a8f460 */
GEN_FRAME uint F_00a8f460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8f460u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  *param_3 = *param_3 + (param_2 - param_1) / 0x11c;
  return (uint)param_3;
}

/* ref: FUN_00a8f490 */
GEN_FRAME uint F_00a8f490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa8f490u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined * this;
  
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_00a88bf0(this GEN_EDX_ARG,param_1);
    }
    param_1 = param_1 + 0x88;
    this = (undefined *)((int)this + 0x88);
  } while (param_1 != param_2);
  return (uint)this;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00a8f4d0 */
GEN_FRAME unsigned int F_00a8f4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8f4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00a8f4f0 */
GEN_FRAME uint F_00a8f4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  ulonglong uVar1;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  F_00a88c70(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  F_00a89650(param_1 GEN_EDX_ARG,param_2);
  F_00a89650(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc8)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a8f560 */
GEN_FRAME uint F_00a8f560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f560u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  ulonglong uVar1;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  F_00a88d10(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  F_00a896f0(param_1 GEN_EDX_ARG,param_2);
  F_00a896f0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a8f5d0 */
GEN_FRAME unsigned int F_00a8f5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8f5d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 0xd) {
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = puVar3;
      puVar5 = puVar1;
      for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar1 = puVar1 + 0xd;
  }
  return 0;
}

/* ref: FUN_00a8f610 */
GEN_FRAME uint GEN_THISCALL F_00a8f610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f610u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a8f630 */
GEN_FRAME uint GEN_THISCALL F_00a8f630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f630u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a8f640 */
GEN_FRAME uint GEN_THISCALL F_00a8f640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f640u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a8f660 */
GEN_FRAME uint GEN_THISCALL F_00a8f660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a8f670 */
GEN_NOFRAME uint GEN_THISCALL F_00a8f670(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8f670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00a8d7e0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x18,0x191);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00a8f6d0 */
GEN_FRAME uint GEN_THISCALL F_00a8f6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f6d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a8f6f0 */
GEN_FRAME uint GEN_THISCALL F_00a8f6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f6f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a8f700 */
GEN_FRAME uint GEN_THISCALL F_00a8f700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f700u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a8f720 */
GEN_FRAME uint GEN_THISCALL F_00a8f720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a8f770 */
GEN_FRAME uint GEN_THISCALL F_00a8f770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00a8f790 */
GEN_FRAME uint GEN_THISCALL F_00a8f790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 0xc);
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00a8f820 */
GEN_FRAME uint GEN_THISCALL F_00a8f820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00a8f840 */
GEN_FRAME uint GEN_THISCALL F_00a8f840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 0xc);
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00a8f8d0 */
GEN_FRAME uint GEN_THISCALL F_00a8f8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00a8f8f0 */
GEN_FRAME uint GEN_THISCALL F_00a8f8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 0xc);
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00a8f940 */
GEN_FRAME uint GEN_THISCALL F_00a8f940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f940u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a8f9c0 */
GEN_FRAME uint GEN_THISCALL F_00a8f9c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a8f9d0 */
GEN_FRAME uint GEN_THISCALL F_00a8f9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8f9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a8fa30 */
GEN_NOFRAME uint GEN_THISCALL F_00a8fa30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8fa30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_009283d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a8fa40 */
GEN_NOFRAME uint GEN_THISCALL F_00a8fa40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8fa40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00928100(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a8fa50 */
GEN_NOFRAME uint GEN_THISCALL F_00a8fa50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8fa50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00928170(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a8fa60 */
GEN_NOFRAME uint GEN_THISCALL F_00a8fa60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8fa60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 1) * 2,0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a8faa0 */
GEN_FRAME uint GEN_THISCALL F_00a8faa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa8faa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a8fb00 */
GEN_NOFRAME uint GEN_THISCALL F_00a8fb00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8fb00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a8fc50 */
GEN_FRAME uint GEN_THISCALL F_00a8fc50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8fc50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0xe1);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3 GEN_EDX_FWD,param_2);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0xe1);
  }
  *param_1 = (int)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00a8fce0 */
GEN_FRAME uint GEN_THISCALL F_00a8fce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8fce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a8b750(this GEN_EDX_FWD,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00a8fd00 */
GEN_FRAME uint GEN_THISCALL F_00a8fd00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa8fd00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = *(int *)((int)this + 4) - param_3;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a8fd50 */
GEN_NOFRAME uint GEN_THISCALL F_00a8fd50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8fd50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a8fd90 */
GEN_FRAME uint GEN_THISCALL F_00a8fd90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8fd90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar4 = puVar3;
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        if ((*(char *)((int)puVar3 + 0x15) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if (*(char *)((int)puVar3 + 0x15) == '\0') {
    puVar1 = (undefined4 *)*puVar3;
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  }
  if (*(char *)((int)puVar1 + 0x15) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00a8fe60 */
GEN_FRAME uint GEN_THISCALL F_00a8fe60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8fe60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a8fe70 */
GEN_FRAME uint GEN_THISCALL F_00a8fe70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8fe70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00a8fef0 */
GEN_FRAME uint GEN_THISCALL F_00a8fef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8fef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x29) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x29) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00a8ff30 */
GEN_FRAME uint GEN_THISCALL F_00a8ff30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8ff30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00a8df70(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00a8ff50 */
GEN_FRAME uint GEN_THISCALL F_00a8ff50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa8ff50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00a8ff70 */
GEN_NOFRAME uint GEN_THISCALL F_00a8ff70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8ff70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)((int)this + 0x10);
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 - 1;
      *(int *)((int)this + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar2 = iVar2 - 1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0xc,800);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,800);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00a8fff0 */
GEN_FRAME uint GEN_THISCALL F_00a8fff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8fff0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3 * -0x34;
  return (uint)param_2;
}

/* ref: FUN_00a90010 */
GEN_FRAME uint GEN_THISCALL F_00a90010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa90010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a90020 */
GEN_FRAME uint GEN_THISCALL F_00a90020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00a90060 */
GEN_FRAME uint GEN_THISCALL F_00a90060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa90060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_00a8f670(this GEN_EDX_FWD);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x15);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a8e1c0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a90100 */
GEN_FRAME uint GEN_THISCALL F_00a90100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa90100u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a90160 */
GEN_FRAME unsigned int GEN_THISCALL F_00a90160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa90160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (this != param_1) {
    F_00955670(this GEN_EDX_FWD);
    uVar1 = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_1 + 4);
    *(undefined4 *)((int)param_1 + 4) = uVar1;
    uVar1 = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
    *(undefined4 *)((int)param_1 + 8) = uVar1;
  }
  return;
}

/* ref: FUN_00a901a0 */
GEN_FRAME uint F_00a901a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa901a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_00a901c0 */
GEN_FRAME unsigned int F_00a901c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa901c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_00a8ecb0(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_00a90200 */
GEN_FRAME uint GEN_THISCALL F_00a90200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa90200u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool bVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar3 = true;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) < (uint)puVar2[3];
      }
      else {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) <= (uint)puVar2[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00a8e920((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00a89070(&(*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00a8e920((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x18,0x191);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a902e0 */
GEN_FRAME unsigned int GEN_STDCALL F_00a902e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa902e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00a8e790(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00a90300 */
GEN_FRAME unsigned int F_00a90300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa90300u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
        puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc + (int)puVar1);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10 + (int)puVar1);
      }
      puVar1 = puVar1 + 5;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a90350 */
GEN_FRAME unsigned int F_00a90350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90350u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
        puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
      }
      puVar1 = puVar1 + 3;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a90390 */
GEN_FRAME unsigned int F_00a90390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa90390u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x11c)) {
    F_0042c880((undefined *)((int)this + 0xbc) GEN_EDX_ARG);
    F_0042c880((undefined *)((int)this + 0x60) GEN_EDX_ARG);
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00a903d0 */
GEN_FRAME unsigned int F_00a903d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa903d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a90400 */
GEN_FRAME unsigned int F_00a90400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa90400u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00a90430 */
GEN_FRAME unsigned int F_00a90430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90430u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a90460 */
GEN_FRAME unsigned int F_00a90460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa90460u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00a90490 */
GEN_FRAME uint F_00a90490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa90490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined2 * puVar1;
  undefined2 * puVar2;
  undefined * this;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 0x54;
    this = param_3;
    do {
      F_0042ccf0(this GEN_EDX_ARG,puVar2 - 0x54);
      F_0042ccf0((undefined *)((int)this + 0x54) GEN_EDX_ARG,puVar2 - 0x2a);
      *(undefined2 *)((int)this + 0xa8) = *puVar2;
      *(undefined2 *)((int)this + 0xaa) = puVar2[1];
      *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(puVar2 + 2);
      F_00a8cc10((undefined *)((int)this + 0xb0) GEN_EDX_ARG,puVar2 + 4);
      *(undefined4 *)((int)this + 0x25d4) = *(undefined4 *)(puVar2 + 0x1296);
      *(undefined4 *)((int)this + 0x25d8) = *(undefined4 *)(puVar2 + 0x1298);
      *(undefined4 *)((int)this + 0x25dc) = *(undefined4 *)(puVar2 + 0x129a);
      *(undefined2 *)((int)this + 0x25e0) = puVar2[0x129c];
      *(undefined4 *)((int)this + 0x25e4) = *(undefined4 *)(puVar2 + 0x129e);
      *(undefined4 *)((int)this + 0x25e8) = *(undefined4 *)(puVar2 + 0x12a0);
      *(undefined4 *)((int)this + 0x25ec) = *(undefined4 *)(puVar2 + 0x12a2);
      *(undefined4 *)((int)this + 0x25f0) = *(undefined4 *)(puVar2 + 0x12a4);
      *(undefined4 *)((int)this + 0x25f4) = *(undefined4 *)(puVar2 + 0x12a6);
      *(undefined4 *)((int)this + 0x25f8) = *(undefined4 *)(puVar2 + 0x12a8);
      *(undefined4 *)((int)this + 0x25fc) = *(undefined4 *)(puVar2 + 0x12aa);
      *(undefined4 *)((int)this + 0x2600) = *(undefined4 *)(puVar2 + 0x12ac);
      *(undefined4 *)((int)this + 0x2604) = *(undefined4 *)(puVar2 + 0x12ae);
      *(undefined4 *)((int)this + 0x2608) = *(undefined4 *)(puVar2 + 0x12b0);
      *(undefined4 *)((int)this + 0x260c) = *(undefined4 *)(puVar2 + 0x12b2);
      *(undefined4 *)((int)this + 0x2610) = *(undefined4 *)(puVar2 + 0x12b4);
      *(undefined1 *)((int)this + 0x2614) = *(undefined1 *)(puVar2 + 0x12b6);
      *(undefined1 *)((int)this + 0x2615) = *(undefined1 *)((int)puVar2 + 0x256d);
      *(undefined1 *)((int)this + 0x2616) = *(undefined1 *)(puVar2 + 0x12b7);
      *(undefined1 *)((int)this + 0x2617) = *(undefined1 *)((int)puVar2 + 0x256f);
      *(undefined4 *)((int)this + 0x2618) = *(undefined4 *)(puVar2 + 0x12b8);
      *(undefined4 *)((int)this + 0x261c) = *(undefined4 *)(puVar2 + 0x12ba);
      *(undefined4 *)((int)this + 0x2620) = *(undefined4 *)(puVar2 + 0x12bc);
      puVar1 = puVar2 + 0x12be;
      this = (undefined *)((int)this + 0x2624);
      puVar2 = puVar2 + 0x1312;
    } while (puVar1 != param_2);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_00a90640 */
GEN_FRAME unsigned int F_00a90640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90640u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a90670 */
GEN_FRAME unsigned int F_00a90670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa90670u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00a906b0 */
GEN_FRAME unsigned int F_00a906b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa906b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a906e0 */
GEN_FRAME unsigned int F_00a906e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa906e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00a90710 */
GEN_FRAME unsigned int F_00a90710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa90710u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x88)) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00a90740 */
GEN_FRAME uint F_00a90740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90740u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00a88c70(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x11c);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00a90780 */
GEN_FRAME unsigned int F_00a90780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa90780u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = (undefined *)(param_1 + 4);
    do {
      F_0042c880((undefined *)((int)this + 0x54) GEN_EDX_ARG);
      F_0042c880(this GEN_EDX_ARG);
      iVar1 = (int)this + 0x118;
      this = (undefined *)((int)this + 0x11c);
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a907c0 */
GEN_FRAME unsigned int F_00a907c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa907c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  undefined * pvVar2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x2624)) {
    iVar1 = 0x17;
    pvVar2 = (undefined *)((int)this + 0x25d8);
    do {
      F_0042c880((undefined *)((int)pvVar2 - 0x134) GEN_EDX_ARG);
      F_0042c880((undefined *)((int)pvVar2 - 0x18c) GEN_EDX_ARG);
      iVar1 = iVar1 - 1;
      pvVar2 = (undefined *)((int)pvVar2 - 0x18c);
    } while (-1 < iVar1);
    F_0042c880((undefined *)((int)this + 0x54) GEN_EDX_ARG);
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00a90820 */
GEN_FRAME unsigned int F_00a90820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90820u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0xd;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a90860 */
GEN_FRAME uint F_00a90860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa90860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a8f250(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00a90890 */
GEN_FRAME uint F_00a90890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_3 + 1);
  }
  return (uint)param_2;
}

/* ref: FUN_00a908b0 */
GEN_FRAME uint F_00a908b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa908b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_00a88c70(this GEN_EDX_ARG,iVar1);
    }
    iVar1 = iVar1 + 0x11c;
    this = (undefined *)((int)this + 0x11c);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a908f0 */
GEN_FRAME unsigned int F_00a908f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa908f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = *((undefined2 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a90920 */
GEN_FRAME unsigned int F_00a90920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90920u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a90950 */
GEN_FRAME uint F_00a90950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90950u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_00a88bf0(this GEN_EDX_ARG,iVar1);
    }
    iVar1 = iVar1 + 0x88;
    this = (undefined *)((int)this + 0x88);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a90990 */
GEN_FRAME uint F_00a90990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa90990u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 0x58;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar2 - 0x58);
        F_0042cbc0(param_3 + 1 GEN_EDX_ARG,iVar2 - 0x54);
        F_0042cbc0(param_3 + 0x16 GEN_EDX_ARG,iVar2);
        param_3[0x2b] = *(undefined4 *)(iVar2 + 0x54);
        param_3[0x2c] = *(undefined4 *)(iVar2 + 0x58);
        param_3[0x2d] = *(undefined4 *)(iVar2 + 0x5c);
        puVar3 = (undefined4 *)(iVar2 + 0x60);
        puVar4 = param_3 + 0x2e;
        for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        param_3[0x46] = *(undefined4 *)(iVar2 + 0xc0);
      }
      param_3 = param_3 + 0x47;
      iVar1 = iVar2 + 0xc4;
      iVar2 = iVar2 + 0x11c;
    } while (iVar1 != param_2);
    return (uint)param_3;
  }
  return (uint)param_3;
}

/* ref: FUN_00a90a30 */
GEN_FRAME unsigned int F_00a90a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00a90a60 */
GEN_FRAME uint F_00a90a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa90a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a8f380(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00a90a90 */
GEN_FRAME uint F_00a90a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa90a90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (param_2 - param_1) / 0x11c;
}

/* ref: FUN_00a90ab0 */
GEN_FRAME uint F_00a90ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa90ab0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (param_2 - param_1) / 0x11c;
}

/* ref: FUN_00a90ad0 */
GEN_FRAME uint F_00a90ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = uVar1;
  }
  return (uint)param_2;
}

/* ref: FUN_00a90af0 */
GEN_FRAME unsigned int F_00a90af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a8e790(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a90b10 */
GEN_FRAME uint F_00a90b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa90b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a8f490(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00a90b40 */
GEN_FRAME uint GEN_THISCALL F_00a90b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa90b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
    puVar1[4] = param_1[1];
  }
  return (uint)puVar1;
}

/* ref: FUN_00a90b90 */
GEN_FRAME uint F_00a90b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa90b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined * this;
  undefined * this_00;
  undefined * pvVar7;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  uVar2 = ((int)param_3 - (int)param_1) / 0x11c;
  uVar1 = (param_2 - (int)param_1) / 0x11c;
  uVar5 = uVar1;
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  while (uVar4 = uVar5, uVar4 != 0) {
    uVar5 = (int)(*(uint *)(gen_frame + 0x8)) % (int)uVar4;
    (*(uint *)(gen_frame + 0x8)) = uVar4;
  }
  if (((int)(*(uint *)(gen_frame + 0x8)) < (int)uVar2) && (0 < (int)(*(uint *)(gen_frame + 0x8)))) {
    pvVar6 = (undefined *)((*(uint *)(gen_frame + 0x8)) * 0x11c + (int)param_1);
    do {
      pvVar7 = (undefined *)((int)pvVar6 + uVar1 * 0x11c);
      this = pvVar6;
      this_00 = param_1;
      if (pvVar7 != param_3) {
        this_00 = pvVar7;
      }
      do {
        F_00a88c70(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,this);
        F_00a89650(this GEN_EDX_ARG,this_00);
        F_00a89650(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
        F_0042c880(((undefined1 *)(gen_frame + 0xc8)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
        iVar3 = ((int)param_3 - (int)this_00) / 0x11c;
        if ((int)uVar1 < iVar3) {
          pvVar7 = (undefined *)((int)this_00 + uVar1 * 0x11c);
        }
        else {
          pvVar7 = ((undefined *)GEN_TOP(((uVar1 - iVar3) * 0x11c + (int)param_1)));
        }
        this = this_00;
        this_00 = pvVar7;
      } while (pvVar7 != pvVar6);
      pvVar6 = (undefined *)((int)pvVar6 - 0x11c);
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) - 1;
    } while (0 < (int)(*(uint *)(gen_frame + 0x8)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c) GEN_EDX_ARG);
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_00a90d20 */
GEN_FRAME uint F_00a90d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa90d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * this;
  undefined4 * puVar8;
  undefined4 * puVar9;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  uVar3 = ((int)param_3 - (int)param_1) / 0x11c;
  uVar2 = (param_2 - (int)param_1) / 0x11c;
  uVar5 = uVar2;
  (*(uint *)(gen_frame + 0x8)) = uVar3;
  while (uVar4 = uVar5, uVar4 != 0) {
    uVar5 = (int)(*(uint *)(gen_frame + 0x8)) % (int)uVar4;
    (*(uint *)(gen_frame + 0x8)) = uVar4;
  }
  if (((int)(*(uint *)(gen_frame + 0x8)) < (int)uVar3) && (0 < (int)(*(uint *)(gen_frame + 0x8)))) {
    puVar7 = param_1 + (*(uint *)(gen_frame + 0x8)) * 0x47;
    do {
      this = puVar7;
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
      if (puVar7 + uVar2 * 0x47 != param_3) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar7 + uVar2 * 0x47;
      }
      do {
        (*(undefined4 *)(gen_frame + 0xc)) = *this;
        F_0042cbc0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,this + 1);
        F_0042cbc0(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,this + 0x16);
        (*(undefined4 *)(gen_frame + 0xbc)) = this[0x2c];
        (*(undefined4 *)(gen_frame + 0xb8)) = this[0x2b];
        uVar1 = this[0x46];
        (*(undefined4 *)(gen_frame + 0xc0)) = this[0x2d];
        puVar8 = this + 0x2e;
        puVar9 = ((undefined4 *)(gen_frame + 0xc4));
        for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        (*(undefined4 *)(gen_frame + 0x124)) = uVar1;
        F_00a896f0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
        F_00a896f0((*(undefined4 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        iVar6 = ((int)param_3 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x4))) / 0x11c;
        if ((int)uVar2 < iVar6) {
          puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar2 * 0x47;
        }
        else {
          puVar8 = param_1 + (uVar2 - iVar6) * 0x47;
        }
        this = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar8;
      } while (puVar8 != puVar7);
      puVar7 = puVar7 - 0x47;
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) - 1;
    } while (0 < (int)(*(uint *)(gen_frame + 0x8)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c) GEN_EDX_ARG);
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_00a90f20 */
GEN_FRAME unsigned int F_00a90f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa90f20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0xd;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a90f60 */
GEN_FRAME uint GEN_THISCALL F_00a90f60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa90f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte bVar2;
  char cVar3;
  int * piVar4;
  byte bVar5;
  byte bVar6;
  int * piVar7;
  int * piVar8;
  int iVar9;
  byte bVar10;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  bVar6 = 0;
  piVar8 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)));
  bVar10 = 0;
  bVar5 = 0;
  if (piVar8 != *(int * PTR32 *)((int)this + 4)) {
    do {
      iVar9 = piVar8[4] * 0x34 + *(int *)(piVar8[3] + 0x5c);
      bVar1 = *(byte *)(iVar9 + 0xc);
      bVar2 = *(byte *)(iVar9 + 0xd);
      if ((bVar10 < bVar1) || ((bVar1 == bVar10 && (bVar10 = bVar5, bVar6 < bVar2)))) {
        *(int *)((int)this + 0x10) = piVar8[3];
        *(int *)((int)this + 0x14) = piVar8[4];
        bVar10 = bVar1;
        bVar5 = bVar1;
        bVar6 = bVar2;
      }
      if (*(char *)((int)piVar8 + 0x15) == '\0') {
        piVar4 = (int *)piVar8[2];
        if (*(char *)((int)piVar4 + 0x15) == '\0') {
          cVar3 = *(char *)(*piVar4 + 0x15);
          piVar8 = piVar4;
          piVar4 = (int *)*piVar4;
          while (cVar3 == '\0') {
            cVar3 = *(char *)(*piVar4 + 0x15);
            piVar8 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar3 = *(char *)(piVar8[1] + 0x15);
          piVar7 = (int *)piVar8[1];
          piVar4 = piVar8;
          while ((piVar8 = piVar7, cVar3 == '\0' && (piVar4 == (int *)piVar8[2]))) {
            cVar3 = *(char *)(piVar8[1] + 0x15);
            piVar7 = (int *)piVar8[1];
            piVar4 = piVar8;
          }
        }
      }
    } while (piVar8 != *(int * PTR32 *)((int)this + 4));
  }
  return (uint)piVar8;
}

/* ref: FUN_00a91010 */
GEN_NOFRAME uint GEN_THISCALL F_00a91010(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 1) * 2,0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a91050 */
GEN_NOFRAME uint GEN_THISCALL F_00a91050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a91090 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a91090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return;
}

/* ref: FUN_00a910c0 */
GEN_FRAME uint GEN_THISCALL F_00a910c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa910c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0xe1);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3 GEN_EDX_FWD,param_2);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0xe1);
  }
  if ((puVar2 != *(undefined4 * PTR32 *)((int)this + 4)) &&
     (bVar3 = F_0042c7c0(param_2 GEN_EDX_ARG,puVar2 + 3), bVar3 == 0)) {
    *param_1 = puVar2;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00a91150 */
GEN_FRAME uint GEN_THISCALL F_00a91150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  byte bVar1;
  uint uVar2;
  
  (*(int *)(gen_frame + 0xb0)) = param_2;
  (*(undefined4 *)(gen_frame + 0xac)) = 0xa91167;
  uVar2 = F_00a8b750(this GEN_EDX_FWD,param_2);
  if (uVar2 != *(uint *)((int)this + 4)) {
    (*(int *)(gen_frame + 0xb0)) = uVar2 + 0xc;
    (*(undefined4 *)(gen_frame + 0xac)) = 0xa9117e;
    F_0042cbc0(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG,uVar2 + 0xc);
    (*(int *)(gen_frame + 0xb0)) = param_2;
    (*(undefined4 *)(gen_frame + 0xac)) = 0xa91187;
    F_0042cbc0(((undefined1 *)(gen_frame + 0x114)) GEN_EDX_ARG,param_2);
    (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = ((undefined1 *)(gen_frame + 0xc0));
    (*(undefined4 *)(gen_frame + 0x58)) = 0xa91198;
    F_0042cbc0((gen_frame + 0x60) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc0)));
    F_0042cbc0((gen_frame + 0xc) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x114)));
    bVar1 = F_00a67e30((*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),
                         (*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),
                         (*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0x50)),
                         (*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)),(*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),
                         (*(undefined4 *)(gen_frame + 0x6c)),(*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),(*(undefined4 *)(gen_frame + 0x78)),(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),
                         (*(undefined4 *)(gen_frame + 0x88)),(*(undefined4 *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),(*(undefined4 *)(gen_frame + 0x98)),(*(undefined4 *)(gen_frame + 0x9c)),(*(undefined4 *)(gen_frame + 0xa0)),
                         (*(undefined4 *)(gen_frame + 0xa4)),(*(undefined4 *)(gen_frame + 0xa8)),(*(undefined4 *)(gen_frame + 0xac)),(*(int *)(gen_frame + 0xb0)));
    (*(int *)(gen_frame + 0xb0)) = 0xa911bb;
    F_0042c880(((undefined1 *)(gen_frame + 0x114)) GEN_EDX_ARG);
    (*(int *)(gen_frame + 0xb0)) = 0xa911c6;
    F_0042c880(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG);
    if (bVar1 == 0) {
      *param_1 = uVar2;
      return (uint)param_1;
    }
  }
  (*(uint *)(gen_frame + 0x168)) = *(uint *)((int)this + 4);
  *param_1 = *(uint *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00a91200 */
GEN_NOFRAME uint GEN_THISCALL F_00a91200(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a91240 */
GEN_NOFRAME uint GEN_THISCALL F_00a91240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  uVar1 = *(uint *)this;
  if (uVar1 != uVar2) {
    uVar2 = F_00c46e20(uVar1,uVar2,0);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar2;
}

/* ref: FUN_00a91270 */
GEN_FRAME uint GEN_THISCALL F_00a91270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00a8fd90(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00a912a0 */
GEN_FRAME uint GEN_THISCALL F_00a912a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa912a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x29) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x29) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00a91310 */
GEN_NOFRAME uint GEN_THISCALL F_00a91310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a8ff70(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,800);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a91340 */
GEN_NOFRAME uint GEN_THISCALL F_00a91340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)((int)this + 0xc);
  iVar2 = 0;
  if (*(int * PTR32 *)this != (int *)0x0) {
    iVar2 = **(int * PTR32 *)this;
  }
  if (*(uint *)(iVar2 + 8) <= uVar1) {
    return *((uint *)GEN_TOP((*(int *)(iVar2 + 4) + (uVar1 - *(uint *)(iVar2 + 8)) * 4)));
  }
  return *((uint *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4)));
}

/* ref: FUN_00a91380 */
GEN_FRAME uint GEN_THISCALL F_00a91380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a90060(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a913b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a913b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa913b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x14) * 0x14,0x191);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

/* ref: FUN_00a91410 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a91410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xc) * 0xc,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

/* ref: FUN_00a91460 */
GEN_FRAME uint GEN_THISCALL F_00a91460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa91460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar2 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 4) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  if (this != param_1) {
    F_00955670(this GEN_EDX_ARG);
    uVar1 = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_1 + 4);
    *(undefined4 *)((int)param_1 + 4) = uVar1;
    uVar1 = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
    *(undefined4 *)((int)param_1 + 8) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00a914d0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a914d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa914d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00a90300(param_1,param_2,param_3,(int)this + 0xc);
  return;
}

/* ref: FUN_00a914f0 */
GEN_FRAME unsigned int F_00a914f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa914f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a8e790(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a91510 */
GEN_FRAME unsigned int F_00a91510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a8e790(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a91530 */
GEN_FRAME unsigned int GEN_STDCALL F_00a91530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91530u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
        puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
      }
      puVar1 = puVar1 + 3;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a91570 */
GEN_FRAME unsigned int F_00a91570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa91570u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x11c)) {
    F_0042c880((undefined *)((int)this + 0xbc) GEN_EDX_ARG);
    F_0042c880((undefined *)((int)this + 0x60) GEN_EDX_ARG);
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00a915b0 */
GEN_FRAME unsigned int F_00a915b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa915b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a915e0 */
GEN_FRAME unsigned int F_00a915e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa915e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00a91610 */
GEN_FRAME unsigned int F_00a91610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91610u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a91640 */
GEN_FRAME unsigned int F_00a91640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa91640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00a91670 */
GEN_FRAME uint F_00a91670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a90490(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00a91690 */
GEN_FRAME unsigned int F_00a91690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91690u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a916c0 */
GEN_FRAME unsigned int F_00a916c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa916c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00a91700 */
GEN_FRAME unsigned int F_00a91700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91700u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a91730 */
GEN_FRAME unsigned int F_00a91730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa91730u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00a91760 */
GEN_FRAME unsigned int F_00a91760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa91760u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x88)) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00a91790 */
GEN_FRAME uint GEN_STDCALL F_00a91790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91790u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00a88c70(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x11c);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00a917d0 */
GEN_FRAME unsigned int F_00a917d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa917d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = (undefined *)(param_1 + 4);
    do {
      F_0042c880((undefined *)((int)this + 0x54) GEN_EDX_ARG);
      F_0042c880(this GEN_EDX_ARG);
      iVar1 = (int)this + 0x118;
      this = (undefined *)((int)this + 0x11c);
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a91810 */
GEN_FRAME unsigned int F_00a91810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_00a907c0(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_00a91830 */
GEN_FRAME unsigned int GEN_STDCALL F_00a91830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91830u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0xd;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a91870 */
GEN_FRAME uint GEN_THISCALL F_00a91870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa91870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a8f250(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_00a918a0 */
GEN_FRAME uint GEN_THISCALL F_00a918a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa918a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,0x191);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_1 + 1);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a918f0 */
GEN_FRAME uint F_00a918f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa918f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00a88c70(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x11c);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00a91930 */
GEN_FRAME unsigned int F_00a91930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91930u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = *((undefined2 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a91960 */
GEN_FRAME unsigned int F_00a91960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91960u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a91990 */
GEN_FRAME uint F_00a91990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91990u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00a88bf0(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x88);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00a919d0 */
GEN_FRAME uint F_00a919d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa919d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a90990(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00a91a00 */
GEN_FRAME unsigned int F_00a91a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00a91a30 */
GEN_FRAME uint GEN_THISCALL F_00a91a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa91a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a8f380(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_00a91a60 */
GEN_FRAME uint GEN_THISCALL F_00a91a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa91a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_004296a0(0x18,0,800);
  *puVar2 = *(undefined4 *)((int)this + 4);
  puVar2[1] = *(undefined4 *)((int)this + 4);
  puVar2[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar2 + 5) = 0;
  uVar1 = param_1[1];
  if (puVar2 + 3 != (undefined4 *)0x0) {
    puVar2[3] = *param_1;
    puVar2[4] = uVar1;
  }
  return (uint)puVar2;
}

/* ref: FUN_00a91ab0 */
GEN_FRAME uint F_00a91ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91ab0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_00a8e790(this GEN_EDX_ARG,iVar1);
    }
    iVar1 = iVar1 + 0x2624;
    this = (undefined *)((int)this + 0x2624);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a91af0 */
GEN_FRAME uint GEN_THISCALL F_00a91af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa91af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a8f490(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_00a91b20 */
GEN_FRAME uint GEN_THISCALL F_00a91b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  uint uVar2;
  uint * puVar3;
  uint * local_8;
  
  puVar3 = *(uint * PTR32 *)((int)this + 4);
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    puVar1 = (uint *)F_004296a0(0x18,0,800);
    *puVar1 = *(uint *)((int)this + 4);
    puVar1[1] = *(uint *)((int)this + 4);
    puVar1[2] = *(uint *)((int)this + 4);
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != (uint *)0x0) {
      puVar1[3] = param_1[3];
      puVar1[4] = param_1[4];
    }
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(param_1 + 5);
    local_8 = puVar3;
    if (*(char *)((int)puVar3 + 0x15) != '\0') {
      local_8 = puVar1;
    }
    uVar2 = F_00a91b20(this GEN_EDX_ARG,(undefined4 *)*param_1,(uint)puVar1);
    *puVar1 = uVar2;
    uVar2 = F_00a91b20(this GEN_EDX_ARG,(undefined4 *)param_1[2],(uint)puVar1);
    puVar1[2] = uVar2;
    puVar3 = local_8;
  }
  return (uint)puVar3;
}

/* ref: FUN_00a91bc0 */
GEN_FRAME unsigned int F_00a91bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00a90b90(param_1,param_2,param_3,0,0);
  return;
}

/* ref: FUN_00a91be0 */
GEN_FRAME unsigned int F_00a91be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00a90d20(param_1,param_2,param_3,0,0);
  return;
}

/* ref: FUN_00a91c00 */
GEN_FRAME unsigned int GEN_STDCALL F_00a91c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa91c00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0xd;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a91c50 */
GEN_NOFRAME uint GEN_THISCALL F_00a91c50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 1) * 2,0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a91c90 */
GEN_NOFRAME uint GEN_THISCALL F_00a91c90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_0042c880((undefined *)((int)this + 100) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x10) GEN_EDX_ARG);
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 1) * 2,0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a91cf0 */
GEN_NOFRAME uint GEN_THISCALL F_00a91cf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: Client::Game::UI::ScenarioTextReader::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a91d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa91d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a71520(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a91d60 */
GEN_FRAME uint GEN_THISCALL F_00a91d60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a90060(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a91da0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a91da0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x14) * 0x14,0x191);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

/* ref: FUN_00a91df0 */
GEN_FRAME uint GEN_THISCALL F_00a91df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa91df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x14;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x14,0,0x191);
    F_00a90300(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x14) * 0x14,0x191);
    }
    *(uint *)((int)this + 8) = param_1 * 0x14 + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar2 - iVar1) / 0x14) * 0x14;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a91ec0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a91ec0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xc) * 0xc,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

/* ref: FUN_00a91f10 */
GEN_FRAME uint GEN_THISCALL F_00a91f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa91f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xc,0,400);
    F_00a91530(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xc) * 0xc,400);
    }
    *(uint *)((int)this + 8) = param_1 * 0xc + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar2 - iVar1) / 0xc) * 0xc;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a91fd0 */
GEN_FRAME uint GEN_THISCALL F_00a91fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa91fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00a8e660(param_3,*(undefined4 *)((int)this + 4),param_2);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a92000 */
GEN_FRAME uint GEN_THISCALL F_00a92000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa92000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x14;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x14;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a91df0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a91df0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a92090 */
GEN_FRAME unsigned int GEN_STDCALL F_00a92090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa92090u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x11c)) {
    F_0042c880((undefined *)((int)this + 0xbc) GEN_EDX_ARG);
    F_0042c880((undefined *)((int)this + 0x60) GEN_EDX_ARG);
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00a920d0 */
GEN_NOFRAME uint GEN_THISCALL F_00a920d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa920d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00a92090(*(int *)this,*(undefined4 *)((int)this + 4));
    uVar2 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x11c) * 0x11c,800
                        );
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a92130 */
GEN_FRAME uint GEN_THISCALL F_00a92130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa92130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc);
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,800);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,800);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00a922a0 */
GEN_FRAME uint GEN_THISCALL F_00a922a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa922a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc);
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,800);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,800);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00a92410 */
GEN_FRAME uint GEN_THISCALL F_00a92410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa92410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc);
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,800);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,800);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00a92590 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a92590(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa92590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x34) * 0x34,800);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

/* ref: FUN_00a925e0 */
GEN_FRAME uint GEN_THISCALL F_00a925e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa925e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc);
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,800);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,800);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00a92750 */
GEN_FRAME uint GEN_THISCALL F_00a92750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa92750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 3) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3 = puVar3 + 3;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a927a0 */
GEN_FRAME uint GEN_THISCALL F_00a927a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa927a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0xc;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a91f10(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a91f10(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a92820 */
GEN_FRAME unsigned int GEN_STDCALL F_00a92820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa92820u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x88)) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00a92850 */
GEN_FRAME uint GEN_THISCALL F_00a92850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa92850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x11c;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x11c,0,800);
    F_00a91790(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00a92090(*(int *)this,*(undefined4 *)((int)this + 4));
      F_00429760(*(undefined4 *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x11c) * 0x11c,
                   800);
    }
    *(uint *)((int)this + 4) = ((iVar1 - iVar2) / 0x11c) * 0x11c + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x11c + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a92930 */
GEN_FRAME unsigned int GEN_STDCALL F_00a92930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa92930u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = (undefined *)(param_1 + 4);
    do {
      F_0042c880((undefined *)((int)this + 0x54) GEN_EDX_ARG);
      F_0042c880(this GEN_EDX_ARG);
      iVar1 = (int)this + 0x118;
      this = (undefined *)((int)this + 0x11c);
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a92970 */
GEN_FRAME unsigned int GEN_THISCALL F_00a92970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa92970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00a907c0(param_1,param_2,(int)this + 0xc,param_2);
  return;
}

/* ref: FUN_00a92990 */
GEN_FRAME uint GEN_THISCALL F_00a92990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa92990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  puVar3 = ((undefined4 *)GEN_TOP(((*(int *)((int)this + 8) - *(int *)this) / 0x34)));
  if (puVar3 < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 0x34,0,800);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar1; puVar4 = puVar4 + 0xd) {
      if (puVar6 != (undefined4 *)0x0) {
        puVar7 = puVar4;
        puVar8 = puVar6;
        for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar6 = puVar6 + 0xd;
    }
    iVar5 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar5 != 0) {
      F_00429760(iVar5,((*(int *)((int)this + 8) - iVar5) / 0x34) * 0x34,800);
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + ((iVar2 - iVar5) / 0x34) * 0xd;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar3 + (int)((int)(uintptr_t)param_1) * 0xd;
    *(undefined4 * PTR32 *)this = puVar3;
  }
  return (uint)puVar3;
}

/* ref: FUN_00a92a70 */
GEN_FRAME uint GEN_THISCALL F_00a92a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa92a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar2 = (param_1[1] - *param_1) / 0x11c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar2 != 0) {
    iVar2 = iVar2 * 0x11c;
    uVar1 = F_004296a0(iVar2,0,800);
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)((int)this + 8) = iVar2 + uVar1;
    uVar1 = F_00a8f250(*param_1,param_1[1],uVar1,(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00a92b00 */
GEN_FRAME uint GEN_THISCALL F_00a92b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa92b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,0x191);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_2 + 1);
  }
  F_00a90200(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a92b60 */
GEN_FRAME uint GEN_STDCALL F_00a92b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa92b60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00a88c70(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x11c);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00a92ba0 */
GEN_FRAME unsigned int GEN_STDCALL F_00a92ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa92ba0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = *((undefined2 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a92bd0 */
GEN_FRAME unsigned int GEN_STDCALL F_00a92bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa92bd0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a92c00 */
GEN_FRAME uint GEN_STDCALL F_00a92c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa92c00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00a88bf0(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x88);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00a92c40 */
GEN_FRAME uint GEN_THISCALL F_00a92c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa92c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a90990(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00a92c70 */
GEN_FRAME unsigned int GEN_STDCALL F_00a92c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa92c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00a92ca0 */
GEN_FRAME uint GEN_THISCALL F_00a92ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa92ca0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint * puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar5 = (undefined4 *)F_004296a0(0x18,0,800);
  *puVar5 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar5[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar5[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  *(undefined2 *)(puVar5 + 5) = 0;
  uVar4 = (*(uint * PTR32 *)&gen_args[2])[1];
  puVar1 = puVar5 + 3;
  if (puVar1 != (uint *)0x0) {
    *puVar1 = *(*(uint * PTR32 *)&gen_args[2]);
    puVar5[4] = uVar4;
  }
  puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar6 = (undefined4 *)puVar7[1];
  cVar3 = *(char *)((int)puVar6 + 0x15);
  (*(uint * PTR32 *)&gen_args[2]) = ((uint *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(uint * PTR32 *)&gen_args[2]), 1, 3),1)));
  if (cVar3 == '\0') {
    uVar4 = *puVar1;
    do {
      puVar7 = puVar6;
      uVar2 = puVar7[3];
      (*(uint * PTR32 *)&gen_args[2]) = ((uint *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(uint * PTR32 *)&gen_args[2]), 1, 3),uVar4 < uVar2)));
      if (uVar4 < uVar2) {
        puVar6 = (undefined4 *)*puVar7;
      }
      else {
        puVar6 = (undefined4 *)puVar7[2];
      }
    } while (*(char *)((int)puVar6 + 0x15) == '\0');
  }
  puVar5 = (undefined4 *)F_0094eb30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[2]),(*(uint * PTR32 *)&gen_args[2]),puVar7,puVar5);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a92d40 */
GEN_FRAME uint F_00a92d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa92d40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00a8e790(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x2624);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00a92d80 */
GEN_FRAME uint F_00a92d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa92d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_4 = (int)gen_a3;
  int iVar1;
  
  iVar1 = param_2;
  if ((param_2 != (*(int *)&gen_a2)) && ((*(int *)&gen_a2) != param_4)) {
    F_00a90b90(param_2,(*(int *)&gen_a2),param_4,0,0);
    iVar1 = param_2 + ((param_4 - (*(int *)&gen_a2)) / 0x11c) * 0x11c;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00a92dd0 */
GEN_FRAME uint F_00a92dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa92dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_4 = (int)gen_a3;
  int iVar1;
  
  iVar1 = param_2;
  if ((param_2 != (*(int *)&gen_a2)) && ((*(int *)&gen_a2) != param_4)) {
    F_00a90d20(param_2,(*(int *)&gen_a2),param_4,0,0);
    iVar1 = param_2 + ((param_4 - (*(int *)&gen_a2)) / 0x11c) * 0x11c;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00a92e20 */
GEN_FRAME uint GEN_THISCALL F_00a92e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa92e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar3 = (param_1[1] - *param_1) / 0x34;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar3 != 0) {
    puVar2 = (undefined4 *)F_004296a0(iVar3 * 0x34,0,800);
    *(undefined4 * PTR32 *)this = puVar2;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar2 + iVar3 * 0xd;
    puVar1 = (undefined4 *)param_1[1];
    for (puVar4 = (undefined4 *)*param_1; puVar4 != puVar1; puVar4 = puVar4 + 0xd) {
      if (puVar2 != (undefined4 *)0x0) {
        puVar5 = puVar4;
        puVar6 = puVar2;
        for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      puVar2 = puVar2 + 0xd;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  return (uint)this;
}

/* ref: FUN_00a92ec0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a92ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa92ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  
  iVar2 = *(int *)((int)this + 4);
  uVar7 = F_00a91b20(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 4))),iVar2);
  *(uint *)(iVar2 + 4) = uVar7;
  piVar3 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x15) != '\0') {
    *piVar3 = (int)piVar3;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    return 0;
  }
  cVar1 = *(char *)(*piVar4 + 0x15);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0x15);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0x15);
  while (cVar1 == '\0') {
    cVar1 = *((char *)GEN_TOP((*(int *)(iVar5 + 8) + 0x15)));
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = iVar2;
  return 0;
}

/* ref: FUN_00a92f40 */
GEN_NOFRAME uint GEN_THISCALL F_00a92f40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa92f40u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  F_0042b630(in_ecx + 4 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x19 GEN_EDX_ARG);
  in_ecx[0x2e] = 0;
  in_ecx[0x2f] = 0;
  *(undefined2 *)(in_ecx + 0x30) = 0;
  *(undefined1 *)((int)in_ecx + 0xc2) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00a92f80 */
GEN_FRAME uint GEN_THISCALL F_00a92f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa92f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined * pvVar4;
  
  if ((param_1 & 2) == 0) {
    F_0042c880((undefined *)((int)this + 100) GEN_EDX_FWD);
    F_0042c880((undefined *)((int)this + 0x10) GEN_EDX_ARG);
    iVar3 = *(int *)this;
    if (iVar3 != 0) {
      F_00429760(iVar3,(*(int *)((int)this + 8) - iVar3 >> 1) * 2,0);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
    return (uint)this;
  }
  piVar1 = (int *)((int)this - 4);
  iVar3 = *piVar1 - 1;
  if (-1 < iVar3) {
    pvVar4 = (undefined *)(*piVar1 * 0xc4 + 0x10 + (int)this);
    do {
      F_0042c880((undefined *)((int)pvVar4 - 0x70) GEN_EDX_ARG);
      F_0042c880((undefined *)((int)pvVar4 - 0xc4) GEN_EDX_ARG);
      iVar2 = *(int *)((int)pvVar4 - 0xd4);
      if (iVar2 != 0) {
        F_00429760(iVar2,(*(int *)((int)pvVar4 - 0xcc) - iVar2 >> 1) * 2,0);
      }
      iVar3 = iVar3 - 1;
      *(undefined4 *)((int)pvVar4 - 0xd4) = 0;
      *(undefined4 *)((int)pvVar4 - 0xd0) = 0;
      *(undefined4 *)((int)pvVar4 - 0xcc) = 0;
      pvVar4 = (undefined *)((int)pvVar4 - 0xc4);
    } while (-1 < iVar3);
  }
  if ((param_1 & 1) != 0) {
    F_00406b30(piVar1);
  }
  return (uint)piVar1;
}

/* ref: FUN_00a93070 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a93070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa93070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x14) * 0x14,0x191);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

/* ref: FUN_00a930d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a930d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa930d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xc) * 0xc,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

/* ref: FUN_00a93120 */
GEN_FRAME uint GEN_THISCALL F_00a93120(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa93120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a90060(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a93160 */
GEN_NOFRAME uint GEN_THISCALL F_00a93160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa93160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = F_0042c880((undefined *)((int)this + 0x10) GEN_EDX_FWD);
  uVar2 = (uint)uVar3;
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x14) * 0x14,0x191);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a93200 */
GEN_FRAME uint GEN_THISCALL F_00a93200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa93200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00a92000(this GEN_EDX_FWD,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0x14) * 0x14)));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00a92000(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      puVar3[3] = param_1[3];
      puVar3[4] = param_1[4];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
  return (uint)puVar3;
}

/* ref: FUN_00a932b0 */
GEN_NOFRAME uint GEN_THISCALL F_00a932b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa932b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)this != uVar1) {
    uVar1 = F_00a8e660(uVar1,uVar1,*(uint *)this);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a932e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a932e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa932e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x34) * 0x34,800);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

/* ref: FUN_00a93330 */
GEN_FRAME uint GEN_THISCALL F_00a93330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa93330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar2 = param_2;
  puVar3 = param_2;
  while (puVar3 = puVar3 + 0xd, puVar3 != puVar1) {
    puVar5 = puVar2 + 0xd;
    puVar6 = puVar3;
    puVar7 = puVar2;
    for (iVar4 = 0xd; puVar2 = puVar5, iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) - 0x34;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a93380 */
GEN_FRAME uint GEN_THISCALL F_00a93380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa93380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00a925e0(this GEN_EDX_FWD,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) == 0) {
    uVar2 = F_004296a0(0xc,0,800);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) = uVar2;
  }
  uVar2 = *(uint *)((int)this + 4);
  puVar1 = *(undefined4 * PTR32 *)(uVar2 + uVar3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    uVar2 = param_1[2];
    puVar1[2] = uVar2;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar2;
}

/* ref: FUN_00a933f0 */
GEN_FRAME uint GEN_THISCALL F_00a933f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa933f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00a927a0(this GEN_EDX_FWD,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0xc) * 0xc)));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00a927a0(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
  return (uint)puVar3;
}

/* ref: FUN_00a934c0 */
GEN_NOFRAME uint GEN_THISCALL F_00a934c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa934c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x88)) {
      F_0042c880(this_00 GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x88) * 0x88,0x191);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00a93520 */
GEN_FRAME uint GEN_THISCALL F_00a93520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa93520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00a8c970(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    F_00a92090(uVar1,*(undefined4 *)((int)this + 4));
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a93570 */
GEN_FRAME uint GEN_THISCALL F_00a93570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa93570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x11c;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x11c;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a92850(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a92850(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a93600 */
GEN_FRAME uint GEN_THISCALL F_00a93600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa93600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  
  if (param_2 != param_3) {
    uVar3 = F_00a8ca30(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    uVar2 = *(uint *)((int)this + 4);
    if (uVar3 != uVar2) {
      this_00 = (undefined *)(uVar3 + 4);
      do {
        F_0042c880((undefined *)((int)this_00 + 0x54) GEN_EDX_ARG);
        F_0042c880(this_00 GEN_EDX_ARG);
        uVar1 = (int)this_00 + 0x118;
        this_00 = (undefined *)((int)this_00 + 0x11c);
      } while (uVar1 != uVar2);
    }
    *(uint *)((int)this + 4) = uVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a93680 */
GEN_NOFRAME uint GEN_THISCALL F_00a93680(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa93680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  if (iVar2 != 0) {
    iVar1 = *(int *)((int)this + 4);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x11c) {
      F_0042c880((undefined *)(iVar2 + 0x58) GEN_EDX_FWD);
      F_0042c880((undefined *)(iVar2 + 4) GEN_EDX_ARG);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x11c) * 0x11c,800);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00a936f0 */
GEN_FRAME uint GEN_THISCALL F_00a936f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa936f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00a90490(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    F_00a907c0(uVar1,*(undefined4 *)((int)this + 4),(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a93740 */
GEN_FRAME uint GEN_THISCALL F_00a93740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa93740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00a907c0(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x2624) * 0x2624,
                         800);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a937b0 */
GEN_FRAME uint GEN_THISCALL F_00a937b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa937b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    puVar3 = param_3;
    while (puVar3 != puVar1) {
      puVar4 = puVar3 + 0xd;
      puVar6 = puVar2 + 0xd;
      puVar7 = puVar3;
      puVar8 = puVar2;
      for (iVar5 = 0xd; puVar2 = puVar6, puVar3 = puVar4, iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a93800 */
GEN_FRAME uint GEN_THISCALL F_00a93800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa93800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x34;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x34;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a92990(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a92990(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a93890 */
GEN_FRAME uint GEN_THISCALL F_00a93890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa93890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined2 * puVar3;
  undefined2 * puVar4;
  undefined2 * puVar5;
  undefined2 * puVar6;
  
  puVar5 = param_1;
  if (((undefined2 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 1))) < param_1) {
    puVar3 = (undefined2 *)F_004296a0((int)((int)(uintptr_t)param_1) * 2,0,0);
    puVar5 = *(undefined2 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined2 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 1) * 2,0);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined2 * PTR32 *)this = puVar3;
    *(undefined2 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined2 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 1);
  }
  return (uint)puVar5;
}

/* ref: FUN_00a93930 */
GEN_FRAME uint GEN_THISCALL F_00a93930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa93930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,800);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,800);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00a939e0 */
GEN_FRAME uint GEN_THISCALL F_00a939e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa939e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x88;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x88,0,0x191);
    F_00a92c00(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != (undefined *)0x0) {
      for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x88)) {
        F_0042c880(this_00 GEN_EDX_ARG);
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x88) * 0x88,0x191);
    }
    *(uint *)((int)this + 4) = (((int)pvVar1 - iVar2) / 0x88) * 0x88 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x88 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a93ae0 */
GEN_FRAME uint GEN_THISCALL F_00a93ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa93ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x11c;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x11c,0,800);
    F_00a90990(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00a92930(*(int *)this,*(undefined4 *)((int)this + 4));
      F_00429760(*(undefined4 *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x11c) * 0x11c,
                   800);
    }
    *(uint *)((int)this + 4) = ((iVar1 - iVar2) / 0x11c) * 0x11c + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x11c + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a93bc0 */
GEN_FRAME uint GEN_THISCALL F_00a93bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa93bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  
  puVar5 = param_1;
  if (((undefined1 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)this))) < param_1) {
    puVar3 = (undefined1 *)F_004296a0(param_1,0,800);
    puVar5 = *(undefined1 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined1 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,800);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined1 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1);
    *(undefined1 * PTR32 *)this = puVar3;
    *(undefined1 * PTR32 *)((int)this + 8) = puVar5;
  }
  return (uint)puVar5;
}

/* ref: FUN_00a93c50 */
GEN_FRAME uint GEN_THISCALL F_00a93c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa93c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  F_0042cbc0((undefined *)((int)this + 8) GEN_EDX_FWD,param_1 + 2);
  *(undefined4 *)((int)this + 0x5c) = param_1[0x17];
  F_00a92a70((undefined *)((int)this + 0x60) GEN_EDX_ARG,param_1 + 0x18);
  F_00a92a70((undefined *)((int)this + 0x70) GEN_EDX_ARG,param_1 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a93ca0 */
GEN_FRAME uint GEN_THISCALL F_00a93ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa93ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00a91460(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00a93cc0 */
GEN_FRAME uint GEN_THISCALL F_00a93cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa93cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00a92ca0(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x4)),param_2);
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00a93ce0 */
GEN_FRAME uint GEN_STDCALL F_00a93ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa93ce0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00a8e790(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x2624);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00a93d20 */
GEN_FRAME uint GEN_THISCALL F_00a93d20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa93d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar2 = (param_1[1] - *param_1) / 0x11c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar2 != 0) {
    iVar2 = iVar2 * 0x11c;
    uVar1 = F_004296a0(iVar2,0,800);
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)((int)this + 8) = iVar2 + uVar1;
    uVar1 = F_00a8f380(*param_1,param_1[1],uVar1,(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00a93db0 */
GEN_FRAME uint GEN_THISCALL F_00a93db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa93db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar2 = (param_1[1] - *param_1) / 0x88;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar2 != 0) {
    iVar2 = iVar2 * 0x88;
    uVar1 = F_004296a0(iVar2,0,0x191);
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)((int)this + 8) = iVar2 + uVar1;
    uVar1 = F_00a8f490(*param_1,param_1[1],uVar1,(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00a93e40 */
GEN_FRAME uint GEN_THISCALL F_00a93e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa93e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (uVar1 == *(uint *)((int)this + 8)) {
    uVar1 = F_00a93570(this GEN_EDX_FWD,1);
  }
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    uVar1 = F_00a88c70(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
  return uVar1;
}

/* ref: FUN_00a93e80 */
GEN_FRAME uint GEN_THISCALL F_00a93e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa93e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  F_0042cbc0((undefined *)((int)this + 8) GEN_EDX_FWD,param_1 + 2);
  F_00a92e20((undefined *)((int)this + 0x5c) GEN_EDX_ARG,param_1 + 0x17);
  *(undefined1 *)((int)this + 0x6c) = *(undefined1 *)(param_1 + 0x1b);
  *(undefined1 *)((int)this + 0x6d) = *(undefined1 *)((int)param_1 + 0x6d);
  return (uint)this;
}

/* ref: FUN_00a93ec0 */
GEN_FRAME uint GEN_THISCALL F_00a93ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa93ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  F_00a92ec0(this GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_00a93f10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a93f10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa93f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00a92f80(*(undefined * PTR32 *)this GEN_EDX_FWD,3);
    *(undefined4 *)this = 0;
  }
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 6) = 0;
  return;
}

/* ref: FUN_00a93f40 */
GEN_NOFRAME uint GEN_THISCALL F_00a93f40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa93f40u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  F_0042b630(in_ecx + 4 GEN_EDX_FWD);
  return (uint)in_ecx;
}

/* ref: FUN_00a93f60 */
GEN_NOFRAME uint GEN_THISCALL F_00a93f60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa93f60u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  F_0042b630(in_ecx + 2 GEN_EDX_FWD);
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  *(undefined2 *)(in_ecx + 0x1b) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00a93f90 */
GEN_FRAME uint GEN_THISCALL F_00a93f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa93f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  F_0042cc20((undefined *)((int)this + 8) GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x6c) = 0;
  return (uint)this;
}

/* ref: FUN_00a93fd0 */
GEN_NOFRAME uint GEN_THISCALL F_00a93fd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa93fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *(int *)((int)this + 0x5c);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 100) - iVar1) / 0x34) * 0x34,800);
  }
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  uVar2 = F_0042c880((undefined *)((int)this + 8) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_00a94030 */
GEN_NOFRAME uint GEN_THISCALL F_00a94030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a920d0((undefined *)((int)this + 0x70) GEN_EDX_FWD);
  F_00a920d0((undefined *)((int)this + 0x60) GEN_EDX_ARG);
  uVar1 = F_0042c880((undefined *)((int)this + 8) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a94050 */
GEN_NOFRAME uint GEN_THISCALL F_00a94050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a920d0((undefined *)((int)this + 0xc4) GEN_EDX_FWD);
  F_00a920d0((undefined *)((int)this + 0xb4) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x5c) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a94080 */
GEN_FRAME uint GEN_THISCALL F_00a94080(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0095c5e0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00a940c0 */
GEN_FRAME uint GEN_THISCALL F_00a940c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa940c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0095c5e0((undefined *)((int)this + 4) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x18,800);
  return (uint)uVar1;
}

/* ref: Client::Game::UI::Telepo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a94100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa94100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a72750(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a94140 */
GEN_FRAME uint GEN_THISCALL F_00a94140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_0074d820(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a94160 */
GEN_FRAME unsigned int GEN_THISCALL F_00a94160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa94160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a93570(this GEN_EDX_FWD,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a88c70(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x11c) * 0x11c + *(int *)this
                  );
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
      return;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a93570(this GEN_EDX_ARG,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a88c70(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
  return;
}

/* ref: FUN_00a941f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a941f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa941f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)this != iVar1) {
    uVar2 = F_00a8c970(iVar1,iVar1,*(int *)this,this);
    F_00a92090(uVar2,*(undefined4 *)((int)this + 4));
    *(uint *)((int)this + 4) = uVar2;
  }
  return;
}

/* ref: FUN_00a94240 */
GEN_FRAME uint GEN_THISCALL F_00a94240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a93600(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a94270 */
GEN_FRAME unsigned int GEN_THISCALL F_00a94270(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)this != iVar1) {
    uVar2 = F_00a90490(iVar1,iVar1,*(int *)this,this);
    F_00a907c0(uVar2,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    *(uint *)((int)this + 4) = uVar2;
  }
  return;
}

/* ref: FUN_00a942b0 */
GEN_FRAME uint GEN_THISCALL F_00a942b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa942b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * in_EAX = 0;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (in_EAX = *(undefined4 * PTR32 *)this, in_EAX <= param_1)) {
    iVar1 = (int)param_1 - (int)in_EAX;
    in_EAX = (undefined4 *)(iVar1 * 0x4ec4ec4f);
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      in_EAX = (undefined4 *)F_00a93800(this GEN_EDX_FWD,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP(((iVar1 / 0x34) * 0x34 + *(int *)this)));
  }
  else {
    puVar2 = param_1;
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      in_EAX = (undefined4 *)F_00a93800(this GEN_EDX_ARG,1);
    }
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x34;
  return (uint)in_EAX;
}

/* ref: FUN_00a94320 */
GEN_FRAME unsigned int GEN_THISCALL F_00a94320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)this != *(int *)((int)this + 4)) {
    *(int *)((int)this + 4) = *(int *)this;
  }
  return;
}

/* ref: FUN_00a94370 */
GEN_NOFRAME uint GEN_THISCALL F_00a94370(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a920d0((undefined *)((int)this + 0xc4) GEN_EDX_FWD);
  F_00a920d0((undefined *)((int)this + 0xb4) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x5c) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a943a0 */
GEN_NOFRAME uint GEN_THISCALL F_00a943a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa943a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a93680((undefined *)((int)this + 0x54) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a943c0 */
GEN_FRAME uint GEN_THISCALL F_00a943c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa943c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0095c5e0((undefined *)((int)this + 4) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00a94400 */
GEN_FRAME uint GEN_THISCALL F_00a94400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa94400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 1;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 1;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00a93890(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00a93890(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00a94470 */
GEN_FRAME uint GEN_THISCALL F_00a94470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa94470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00a93930(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00a93930(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00a944e0 */
GEN_FRAME uint GEN_THISCALL F_00a944e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa944e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x88;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x88;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a939e0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a939e0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a94570 */
GEN_FRAME uint GEN_THISCALL F_00a94570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa94570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x11c;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x11c;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a93ae0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a93ae0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a94600 */
GEN_FRAME uint GEN_THISCALL F_00a94600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa94600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)this;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)this;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00a93bc0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00a93bc0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00a94660 */
GEN_FRAME uint GEN_THISCALL F_00a94660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa94660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x54) = *param_2;
  *(undefined4 *)((int)this + 0x58) = param_2[1];
  F_0042cbc0((undefined *)((int)this + 0x5c) GEN_EDX_ARG,param_2 + 2);
  *(undefined4 *)((int)this + 0xb0) = param_2[0x17];
  F_00a92a70((undefined *)((int)this + 0xb4) GEN_EDX_ARG,param_2 + 0x18);
  F_00a92a70((undefined *)((int)this + 0xc4) GEN_EDX_ARG,param_2 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a946c0 */
GEN_FRAME uint GEN_THISCALL F_00a946c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa946c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x2624;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x2624,0,800);
    F_00a93ce0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00a907c0(iVar1,*(undefined4 *)((int)this + 4),(int)this + 0xc,uVar3);
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x2624) * 0x2624,800);
    }
    *(uint *)((int)this + 4) = ((iVar2 - iVar1) / 0x2624) * 0x2624 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x2624 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a947a0 */
GEN_FRAME uint GEN_THISCALL F_00a947a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa947a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = *param_1;
  F_00a91460((undefined *)((int)this + 4) GEN_EDX_FWD,param_2);
  return (uint)this;
}

/* ref: FUN_00a947c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a947c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa947c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a94570(this GEN_EDX_FWD,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a88d10(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x11c) * 0x11c + *(int *)this
                  );
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
      return;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a94570(this GEN_EDX_ARG,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a88d10(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
  return;
}

/* ref: FUN_00a94850 */
GEN_NOFRAME uint GEN_THISCALL F_00a94850(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *(int *)((int)this + 100);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 0x6c) - iVar1) / 0x34) * 0x34,800);
  }
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  uVar2 = F_0042c880((undefined *)((int)this + 0x10) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_00a948b0 */
GEN_FRAME uint GEN_THISCALL F_00a948b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa948b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0095c5e0((undefined *)((int)this + 4) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00a948f0 */
GEN_FRAME uint GEN_THISCALL F_00a948f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa948f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x54) = *param_2;
  *(undefined4 *)((int)this + 0x58) = param_2[1];
  F_0042cbc0((undefined *)((int)this + 0x5c) GEN_EDX_ARG,param_2 + 2);
  *(undefined4 *)((int)this + 0xb0) = param_2[0x17];
  F_00a92a70((undefined *)((int)this + 0xb4) GEN_EDX_ARG,param_2 + 0x18);
  F_00a92a70((undefined *)((int)this + 0xc4) GEN_EDX_ARG,param_2 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a94950 */
GEN_FRAME uint GEN_THISCALL F_00a94950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa94950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)this;
  if (*(int *)((int)this + 4) == *(int *)((int)this + 8)) {
    F_00a93570(this GEN_EDX_FWD,1);
  }
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00a88c70(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_3);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
  iVar4 = ((param_2 - iVar1) / 0x11c) * 0x11c;
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 - 0x11c;
  iVar3 = *(int *)this + iVar4;
  if ((iVar3 != iVar1) && (iVar1 != iVar2)) {
    F_00a90b90(iVar3,iVar1,iVar2,0,0);
  }
  *param_1 = *(int *)this + iVar4;
  return (uint)param_1;
}

/* ref: FUN_00a949d0 */
GEN_FRAME uint GEN_THISCALL F_00a949d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa949d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  F_00a93db0((undefined *)((int)this + 4) GEN_EDX_FWD,param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00a94a00 */
GEN_FRAME uint GEN_THISCALL F_00a94a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa94a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (uVar1 == *(uint *)((int)this + 8)) {
    uVar1 = F_00a94570(this GEN_EDX_FWD,1);
  }
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    uVar1 = F_00a88d10(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
  return uVar1;
}

/* ref: FUN_00a94a40 */
GEN_FRAME uint GEN_THISCALL F_00a94a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa94a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  F_00a92ec0(this GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_00a94a90 */
GEN_FRAME unsigned int GEN_STDCALL F_00a94a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa94a90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    F_0042cbc0(param_1 + 2 GEN_EDX_ARG,param_2 + 2);
    F_00a92e20(param_1 + 0x17 GEN_EDX_ARG,param_2 + 0x17);
    *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
    *(undefined1 *)((int)param_1 + 0x6d) = *(undefined1 *)((int)param_2 + 0x6d);
  }
  return;
}

/* ref: FUN_00a94ae0 */
GEN_FRAME uint GEN_THISCALL F_00a94ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa94ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  F_0042cbc0((undefined *)((int)this + 0x5c) GEN_EDX_ARG,param_1 + 0x5c);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  F_00a92a70((undefined *)((int)this + 0xb4) GEN_EDX_ARG,param_1 + 0xb4);
  F_00a92a70((undefined *)((int)this + 0xc4) GEN_EDX_ARG,param_1 + 0xc4);
  return (uint)this;
}

/* ref: FUN_00a94b40 */
GEN_FRAME uint GEN_THISCALL F_00a94b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa94b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_00a93d20((undefined *)((int)this + 0x54) GEN_EDX_ARG,param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00a94b70 */
GEN_FRAME uint GEN_THISCALL F_00a94b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa94b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x15))) = 1;
  F_00a92ec0((undefined *)((int)this + 4) GEN_EDX_ARG,param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00a94bd0 */
GEN_FRAME uint GEN_THISCALL F_00a94bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa94bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x54) = *param_2;
  *(undefined4 *)((int)this + 0x58) = param_2[1];
  F_0042cbc0((undefined *)((int)this + 0x5c) GEN_EDX_ARG,param_2 + 2);
  *(undefined4 *)((int)this + 0xb0) = param_2[0x17];
  F_00a92a70((undefined *)((int)this + 0xb4) GEN_EDX_ARG,param_2 + 0x18);
  F_00a92a70((undefined *)((int)this + 0xc4) GEN_EDX_ARG,param_2 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a94c50 */
GEN_FRAME uint GEN_THISCALL F_00a94c50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0042e430((undefined *)((int)this + 4) GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
  F_0042e430((undefined *)((int)this + 0x58) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0xac) = 0;
  F_0042e430((undefined *)((int)this + 0xb0) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined2 *)((int)this + 0x114) = 0;
  F_0074d820((undefined4 *)((int)this + 0x118) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x118),
               *(undefined4 *)((int)this + 0x11c));
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined2 *)((int)this + 300) = 0;
  *(undefined1 *)((int)this + 0x12e) = 0;
  *(undefined2 *)((int)this + 0x2d0) = 0;
  *(undefined1 *)((int)this + 0x2d2) = 0;
  *(undefined4 *)((int)this + 0x130) = 0xefe4;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  F_0042e430((undefined *)((int)this + 0x144) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  F_0042e430((undefined *)((int)this + 0x1a4) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  F_0042e430((undefined *)((int)this + 0x200) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x254) = 0;
  F_0042e430((undefined *)((int)this + 600) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined1 *)((int)this + 0x13c) = 1;
  *(undefined1 *)((int)this + 700) = 0;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  *(undefined1 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  pvVar3 = (undefined *)((int)this + 0x2d8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x5;
  do {
    *(undefined4 *)((int)pvVar3 - 4) = 0;
    *(undefined4 *)((int)pvVar3 + 0x54) = 0;
    F_0042e430(pvVar3 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)pvVar3 + 0x58) = 0;
    *(undefined4 *)((int)pvVar3 + 0x5c) = 0;
    *(undefined4 *)((int)pvVar3 + 0x60) = 0;
    *(undefined1 *)((int)pvVar3 + 100) = 0;
    pvVar3 = (undefined *)((int)pvVar3 + 0x6c);
    pvVar1 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) - 1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
  } while (pvVar1 != (undefined *)0x0);
  pvVar3 = (undefined *)((int)this + 0x4f4);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x5;
  do {
    *(undefined4 *)((int)pvVar3 - 4) = 0;
    *(undefined4 *)((int)pvVar3 + 0x54) = 0;
    F_0042e430(pvVar3 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)pvVar3 + 0x58) = 0;
    *(undefined4 *)((int)pvVar3 + 0x5c) = 0;
    *(undefined4 *)((int)pvVar3 + 0x60) = 0;
    *(undefined1 *)((int)pvVar3 + 100) = 0;
    pvVar3 = (undefined *)((int)pvVar3 + 0x6c);
    pvVar1 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) - 1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
  } while (pvVar1 != (undefined *)0x0);
  pvVar3 = (undefined *)((int)this + 0x710);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x4;
  do {
    *(undefined4 *)((int)pvVar3 - 4) = 0;
    *(undefined4 *)((int)pvVar3 + 0x54) = 0;
    F_0042e430(pvVar3 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)pvVar3 + 0x58) = 0;
    *(undefined4 *)((int)pvVar3 + 0x5c) = 0;
    *(undefined4 *)((int)pvVar3 + 0x60) = 0;
    *(undefined1 *)((int)pvVar3 + 100) = 0;
    pvVar3 = (undefined *)((int)pvVar3 + 0x6c);
    pvVar1 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) - 1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
  } while (pvVar1 != (undefined *)0x0);
  *(undefined4 *)((int)this + 0x8c8) = 0;
  *(undefined2 *)((int)this + 0x9ac) = 0;
  *(undefined4 *)((int)this + 0x8bc) = 0;
  *(undefined4 *)((int)this + 0x8c0) = 0;
  *(undefined4 *)((int)this + 0x8c4) = 0;
  *(undefined2 *)((int)this + 0x8cc) = 0;
  *(undefined1 *)((int)this + 0x8ce) = 0;
  *(undefined4 *)((int)this + 0x9b0) = 0;
  F_0042e430((undefined *)((int)this + 0x9b4) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  F_0042e430((undefined *)((int)this + 0xa08) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  uVar2 = F_0042e430((undefined *)((int)this + 0xa5c) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0xab0) = 0;
  *(undefined4 *)((int)this + 0x8d0) = 0;
  *(undefined4 *)((int)this + 0x8d4) = 0;
  *(undefined4 *)((int)this + 0x8d8) = 0;
  *(undefined4 *)((int)this + 0x8dc) = 0;
  *(undefined1 *)((int)this + 0x8e8) = 0;
  *(undefined4 *)((int)this + 0x8ec) = 0;
  *(undefined4 *)((int)this + 0x8e4) = 0;
  return uVar2;
}

/* ref: FUN_00a94ee0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a94ee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  iVar1 = *(int *)((int)this + 100);
  if (*(int *)((int)this + 0x60) != iVar1) {
    uVar2 = F_00a8c970(iVar1,iVar1,*(int *)((int)this + 0x60),this);
    F_00a92090(uVar2,*(undefined4 *)((int)this + 100));
    *(uint *)((int)this + 100) = uVar2;
  }
  return;
}

/* ref: FUN_00a94f20 */
GEN_FRAME unsigned int GEN_THISCALL F_00a94f20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  iVar1 = *(int *)((int)this + 0x74);
  if (*(int *)((int)this + 0x70) != iVar1) {
    uVar2 = F_00a8c970(iVar1,iVar1,*(int *)((int)this + 0x70),this);
    F_00a92090(uVar2,*(undefined4 *)((int)this + 0x74));
    *(uint *)((int)this + 0x74) = uVar2;
  }
  return;
}

/* ref: FUN_00a94f60 */
GEN_FRAME uint GEN_THISCALL F_00a94f60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0042e430((undefined *)((int)this + 4) GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
  F_0042e430((undefined *)((int)this + 0x58) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0xac) = 0;
  F_0042e430((undefined *)((int)this + 0xb0) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined2 *)((int)this + 0x114) = 0;
  F_0074d820((undefined4 *)((int)this + 0x118) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x118),
               *(undefined4 *)((int)this + 0x11c));
  iVar5 = *(int *)((int)this + 300);
  iVar2 = *(int *)((int)this + 0x128);
  if (iVar2 != iVar5) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    F_00c46e20(iVar2,iVar5,0);
    *(int *)((int)this + 300) = (int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + iVar2;
  }
  *(undefined1 *)((int)this + 0x138) = 1;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined2 *)((int)this + 0x140) = 0;
  *(undefined1 *)((int)this + 0x142) = 0;
  *(undefined2 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x56c) = 0;
  *(undefined4 *)((int)this + 0x570) = 0xffffffff;
  *(undefined4 *)((int)this + 0x154) = 0;
  pvVar4 = (undefined *)((int)this + 0x160);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x5;
  do {
    *(undefined4 *)((int)pvVar4 - 4) = 0;
    *(undefined4 *)((int)pvVar4 + 0x54) = 0;
    F_0042e430(pvVar4 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)pvVar4 + 0x58) = 0;
    *(undefined4 *)((int)pvVar4 + 0x5c) = 0;
    *(undefined4 *)((int)pvVar4 + 0x60) = 0;
    pvVar4 = (undefined *)((int)pvVar4 + 0x68);
    pvVar1 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) - 1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
  } while (pvVar1 != (undefined *)0x0);
  pvVar4 = (undefined *)((int)this + 0x368);
  iVar5 = 5;
  do {
    *(undefined4 *)((int)pvVar4 - 4) = 0;
    *(undefined4 *)((int)pvVar4 + 0x54) = 0;
    uVar3 = F_0042e430(pvVar4 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)pvVar4 + 0x58) = 0;
    *(undefined4 *)((int)pvVar4 + 0x5c) = 0;
    *(undefined4 *)((int)pvVar4 + 0x60) = 0;
    pvVar4 = (undefined *)((int)pvVar4 + 0x68);
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  return uVar3;
}

/* ref: FUN_00a950c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a950c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa950c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *(undefined1 *)((int)this + 0x11c) = 0;
  iVar1 = *(int *)((int)this + 0x124);
  if (*(int *)((int)this + 0x120) != iVar1) {
    uVar2 = F_00a90490(iVar1,iVar1,*(int *)((int)this + 0x120),this);
    F_00a907c0(uVar2,*(undefined4 *)((int)this + 0x124),(int)this + 300,this);
    *(uint *)((int)this + 0x124) = uVar2;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  return;
}

/* ref: FUN_00a951d0 */
GEN_NOFRAME uint GEN_THISCALL F_00a951d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa951d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x18) - iVar1 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar2 = F_0074d8a0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00a95220 */
GEN_NOFRAME uint GEN_THISCALL F_00a95220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa95220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  ulonglong uVar3;
  
  F_0042c880((undefined *)((int)this + 0xa5c) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0xa08) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x9b4) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x958) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x8f4) GEN_EDX_ARG);
  iVar1 = 3;
  pvVar2 = (undefined *)((int)this + 0x8c0);
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x6c);
    F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  iVar1 = 4;
  pvVar2 = (undefined *)((int)this + 0x710);
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x6c);
    F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  iVar1 = 4;
  pvVar2 = (undefined *)((int)this + 0x4f4);
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x6c);
    F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  F_0042c880((undefined *)((int)this + 600) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x200) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x1a4) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x144) GEN_EDX_ARG);
  F_0074d8a0((undefined *)((int)this + 0x118) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0xb0) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x58) GEN_EDX_ARG);
  uVar3 = F_0042c880((undefined *)((int)this + 4) GEN_EDX_ARG);
  return (uint)uVar3;
}

/* ref: FUN_00a95320 */
GEN_NOFRAME uint GEN_THISCALL F_00a95320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa95320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a93680((undefined *)((int)this + 0x54) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a95340 */
GEN_NOFRAME uint GEN_THISCALL F_00a95340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa95340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a920d0((undefined *)((int)this + 0xc4) GEN_EDX_FWD);
  F_00a920d0((undefined *)((int)this + 0xb4) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x5c) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a95380 */
GEN_NOFRAME uint GEN_THISCALL F_00a95380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa95380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  ulonglong uVar3;
  
  iVar1 = 4;
  pvVar2 = (undefined *)((int)this + 0x570);
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x68);
    F_0042c880(pvVar2 GEN_EDX_FWD);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  iVar1 = 4;
  pvVar2 = (undefined *)((int)this + 0x368);
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x68);
    F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  iVar1 = *(int *)((int)this + 0x128);
  if (iVar1 != 0) {
    F_00429760(iVar1,*(int *)((int)this + 0x130) - iVar1,800);
  }
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  F_0074d8a0((undefined *)((int)this + 0x118) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0xb0) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x58) GEN_EDX_ARG);
  uVar3 = F_0042c880((undefined *)((int)this + 4) GEN_EDX_ARG);
  return (uint)uVar3;
}

/* ref: FUN_00a95420 */
GEN_FRAME uint GEN_THISCALL F_00a95420(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa95420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0095c5e0((undefined *)((int)this + 4) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00a95480 */
GEN_FRAME uint GEN_THISCALL F_00a95480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa95480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * puVar1;
  undefined2 * puVar2;
  undefined2 * puVar3;
  
  puVar3 = *(undefined2 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined2 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined2 * PTR32 *)((int)this + 8)) {
      F_00a94400(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined2 * PTR32 *)((int)this + 4);
    puVar3 = (undefined2 *)0x0;
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = *((undefined2 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 1) * 2)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 2;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined2 * PTR32 *)((int)this + 8)) {
      F_00a94400(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined2 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 2;
  return (uint)puVar3;
}

/* ref: FUN_00a954f0 */
GEN_FRAME uint GEN_THISCALL F_00a954f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa954f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00a94470(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00a94470(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00a95560 */
GEN_FRAME unsigned int GEN_THISCALL F_00a95560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa95560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a944e0(this GEN_EDX_FWD,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a88bf0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x88) * 0x88 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x88;
      return;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a944e0(this GEN_EDX_ARG,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a88bf0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x88;
  return;
}

/* ref: FUN_00a955f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a955f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa955f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00751cb0(this GEN_EDX_FWD,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x54) * 0x54 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
      return;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00751cb0(this GEN_EDX_ARG,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
  return;
}

/* ref: FUN_00a95670 */
GEN_FRAME unsigned int GEN_THISCALL F_00a95670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa95670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00751cb0(this GEN_EDX_FWD,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x54) * 0x54 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
      return;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00751cb0(this GEN_EDX_ARG,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
  return;
}

/* ref: FUN_00a956f0 */
GEN_FRAME uint GEN_THISCALL F_00a956f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa956f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (this != param_1) {
    uVar3 = (param_1[1] - *param_1) / 0x11c;
    if (uVar3 == 0) {
      iVar5 = *(int *)((int)this + 4);
      if (*(int *)this != iVar5) {
        uVar3 = F_00a8c970(iVar5,iVar5,*(int *)this,0);
        F_00a92090(uVar3,*(undefined4 *)((int)this + 4));
        *(uint *)((int)this + 4) = uVar3;
        return (uint)this;
      }
    }
    else {
      iVar5 = *(int *)this;
      uVar1 = (*(int *)((int)this + 4) - iVar5) / 0x11c;
      if (uVar3 <= uVar1) {
        uVar3 = F_00a8c870(*param_1,param_1[1],iVar5,uVar3);
        F_00a92090(uVar3,*(undefined4 *)((int)this + 4));
        *(int *)((int)this + 4) = ((param_1[1] - *param_1) / 0x11c) * 0x11c + *(int *)this;
        return (uint)this;
      }
      if ((uint)((*(int *)((int)this + 8) - iVar5) / 0x11c) < uVar3) {
        if (iVar5 != 0) {
          F_00a92090(iVar5,*(undefined4 *)((int)this + 4));
          F_00a86d90(*(int *)this,(*(int *)((int)this + 8) - *(int *)this) / 0x11c);
        }
        bVar2 = F_00a8d860(this GEN_EDX_ARG,(param_1[1] - *param_1) / 0x11c);
        if (bVar2 == 0) {
          return (uint)this;
        }
        uVar6 = *(undefined4 *)this;
        iVar5 = param_1[1];
        iVar4 = *param_1;
      }
      else {
        iVar4 = uVar1 * 0x11c + *param_1;
        F_00a8c870(*param_1,iVar4,iVar5,iVar4);
        uVar6 = *(undefined4 *)((int)this + 4);
        iVar5 = param_1[1];
      }
      uVar3 = F_00a92b60(iVar4,iVar5,uVar6);
      *(uint *)((int)this + 4) = uVar3;
    }
  }
  return (uint)this;
}

/* ref: FUN_00a95890 */
GEN_FRAME uint GEN_THISCALL F_00a95890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa95890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (in_EAX = *(uint *)this, in_EAX <= param_1)) {
    iVar2 = param_1 - in_EAX;
    in_EAX = iVar2 * -0x193d4bb7;
    if (uVar1 == *(uint *)((int)this + 8)) {
      in_EAX = F_00a94570(this GEN_EDX_FWD,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      uVar1 = F_00a88d10(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,(iVar2 / 0x11c) * 0x11c + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
      return uVar1;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      in_EAX = F_00a94570(this GEN_EDX_ARG,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      in_EAX = F_00a88d10(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
  return in_EAX;
}

/* ref: FUN_00a95920 */
GEN_FRAME uint GEN_THISCALL F_00a95920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa95920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  undefined1 * puVar2;
  undefined1 * puVar3;
  
  puVar3 = *(undefined1 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined1 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined1 * PTR32 *)((int)this + 8)) {
      F_00a94600(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined1 * PTR32 *)((int)this + 4);
    puVar3 = (undefined1 *)0x0;
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = param_1[*(int *)this - (int)puVar1];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined1 * PTR32 *)((int)this + 8)) {
      F_00a94600(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined1 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar3;
}

/* ref: FUN_00a95980 */
GEN_NOFRAME uint GEN_THISCALL F_00a95980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa95980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a920d0((undefined *)((int)this + 0xc4) GEN_EDX_FWD);
  F_00a920d0((undefined *)((int)this + 0xb4) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x5c) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a959b0 */
GEN_NOFRAME uint GEN_THISCALL F_00a959b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa959b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a93680((undefined *)((int)this + 0x54) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a959d0 */
GEN_FRAME uint GEN_THISCALL F_00a959d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa959d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0095c5e0((undefined *)((int)this + 4) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00a95a10 */
GEN_FRAME uint GEN_THISCALL F_00a95a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa95a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x54) = *param_2;
  *(undefined4 *)((int)this + 0x58) = param_2[1];
  F_0042cbc0((undefined *)((int)this + 0x5c) GEN_EDX_ARG,param_2 + 2);
  *(undefined4 *)((int)this + 0xb0) = param_2[0x17];
  F_00a92a70((undefined *)((int)this + 0xb4) GEN_EDX_ARG,param_2 + 0x18);
  F_00a92a70((undefined *)((int)this + 0xc4) GEN_EDX_ARG,param_2 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a95a70 */
GEN_FRAME uint GEN_THISCALL F_00a95a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa95a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x2624;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x2624;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a946c0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a946c0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a95b00 */
GEN_FRAME uint GEN_THISCALL F_00a95b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa95b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = *param_1;
  F_00a91460((undefined *)((int)this + 4) GEN_EDX_FWD,param_2);
  return (uint)this;
}

/* ref: FUN_00a95b20 */
GEN_FRAME unsigned int GEN_THISCALL F_00a95b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa95b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    F_00a93680(this GEN_EDX_FWD);
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

/* ref: FUN_00a95b60 */
GEN_FRAME uint GEN_THISCALL F_00a95b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa95b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00a94950(this GEN_EDX_FWD,param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_00a95b80 */
GEN_FRAME uint GEN_THISCALL F_00a95b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa95b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x54) = *param_2;
  *(undefined4 *)((int)this + 0x58) = param_2[1];
  F_0042cbc0((undefined *)((int)this + 0x5c) GEN_EDX_ARG,param_2 + 2);
  *(undefined4 *)((int)this + 0xb0) = param_2[0x17];
  F_00a92a70((undefined *)((int)this + 0xb4) GEN_EDX_ARG,param_2 + 0x18);
  F_00a92a70((undefined *)((int)this + 0xc4) GEN_EDX_ARG,param_2 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a95be0 */
GEN_FRAME uint GEN_THISCALL F_00a95be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa95be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a920d0((undefined *)((int)this + 0xc4) GEN_EDX_FWD);
  F_00a920d0((undefined *)((int)this + 0xb4) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x5c) GEN_EDX_ARG);
  F_0042c880(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a95c30 */
GEN_FRAME uint GEN_THISCALL F_00a95c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa95c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a93680((undefined *)((int)this + 0x54) GEN_EDX_FWD);
  F_0042c880(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a95c60 */
GEN_FRAME uint GEN_THISCALL F_00a95c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa95c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 100);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 0x6c) - iVar1) / 0x34) * 0x34,800);
  }
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  F_0042c880((undefined *)((int)this + 0x10) GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a95cd0 */
GEN_FRAME uint GEN_THISCALL F_00a95cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa95cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0095c5e0((undefined *)((int)this + 4) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  F_00429760(*(undefined4 *)((int)this + 8),0x18,800);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a95d20 */
GEN_FRAME uint GEN_THISCALL F_00a95d20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa95d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0095c5e0((undefined *)((int)this + 4) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00a95d60 */
GEN_FRAME uint GEN_THISCALL F_00a95d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa95d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)this;
  if (*(int *)((int)this + 4) == *(int *)((int)this + 8)) {
    F_00a94570(this GEN_EDX_FWD,1);
  }
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00a88d10(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_3);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
  iVar4 = ((param_2 - iVar1) / 0x11c) * 0x11c;
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 - 0x11c;
  iVar3 = *(int *)this + iVar4;
  if ((iVar3 != iVar1) && (iVar1 != iVar2)) {
    F_00a90d20(iVar3,iVar1,iVar2,0,0);
  }
  *param_1 = *(int *)this + iVar4;
  return (uint)param_1;
}

/* ref: FUN_00a95de0 */
GEN_FRAME uint GEN_THISCALL F_00a95de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa95de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined2 *)((int)this + 4) = *param_2;
  F_00a93db0((undefined *)((int)this + 8) GEN_EDX_FWD,param_2 + 2);
  return (uint)this;
}

/* ref: FUN_00a95e10 */
GEN_FRAME unsigned int F_00a95e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa95e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    F_0042cbc0(param_2 + 2 GEN_EDX_ARG,param_3 + 2);
    F_00a92e20(param_2 + 0x17 GEN_EDX_ARG,param_3 + 0x17);
    *(undefined1 *)(param_2 + 0x1b) = *(undefined1 *)(param_3 + 0x1b);
    *(undefined1 *)((int)param_2 + 0x6d) = *(undefined1 *)((int)param_3 + 0x6d);
  }
  return;
}

/* ref: FUN_00a95e60 */
GEN_FRAME uint GEN_THISCALL F_00a95e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa95e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  F_00a92ec0(this GEN_EDX_ARG,param_1);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return (uint)this;
}

/* ref: FUN_00a95ec0 */
GEN_FRAME uint GEN_THISCALL F_00a95ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa95ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  F_0042cbc0((undefined *)((int)this + 0x5c) GEN_EDX_ARG,param_1 + 0x5c);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  F_00a92a70((undefined *)((int)this + 0xb4) GEN_EDX_ARG,param_1 + 0xb4);
  F_00a92a70((undefined *)((int)this + 0xc4) GEN_EDX_ARG,param_1 + 0xc4);
  return (uint)this;
}

/* ref: FUN_00a95f20 */
GEN_FRAME uint GEN_THISCALL F_00a95f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa95f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_00a93d20((undefined *)((int)this + 0x54) GEN_EDX_ARG,param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00a95f50 */
GEN_FRAME uint GEN_THISCALL F_00a95f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa95f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x15))) = 1;
  F_00a92ec0((undefined *)((int)this + 4) GEN_EDX_ARG,param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00a95fb0 */
GEN_FRAME uint GEN_THISCALL F_00a95fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa95fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x15))) = 1;
  F_00a92ec0((undefined *)((int)this + 4) GEN_EDX_ARG,param_1 + 1);
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  return (uint)this;
}

/* ref: FUN_00a96020 */
GEN_FRAME uint GEN_THISCALL F_00a96020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa96020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined2 *)((int)this + 4) = param_1[2];
  F_00a93db0((undefined *)((int)this + 8) GEN_EDX_FWD,param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00a96050 */
GEN_FRAME uint GEN_THISCALL F_00a96050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa96050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  F_0042cbc0((undefined *)((int)this + 0x5c) GEN_EDX_ARG,param_1 + 0x5c);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  F_00a92a70((undefined *)((int)this + 0xb4) GEN_EDX_ARG,param_1 + 0xb4);
  F_00a92a70((undefined *)((int)this + 0xc4) GEN_EDX_ARG,param_1 + 0xc4);
  return (uint)this;
}

/* ref: FUN_00a960b0 */
GEN_FRAME uint GEN_THISCALL F_00a960b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa960b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x15))) = 1;
  F_00a92ec0((undefined *)((int)this + 4) GEN_EDX_ARG,param_2);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_2 + 0x14);
  return (uint)this;
}

/* ref: FUN_00a96120 */
GEN_FRAME uint GEN_THISCALL F_00a96120(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa96120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  int local_c;
  undefined4 * local_8;
  
  F_0042b630((int)this + 4 GEN_EDX_FWD);
  F_0042b630((int)this + 0x58 GEN_EDX_ARG);
  F_0042b630((int)this + 0xb0 GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  F_0042b630((int)this + 0x144 GEN_EDX_ARG);
  F_0042b630((int)this + 0x1a4 GEN_EDX_ARG);
  F_0042b630((int)this + 0x200 GEN_EDX_ARG);
  F_0042b630((int)this + 600 GEN_EDX_ARG);
  local_8 = (undefined4 *)((int)this + 0x2d4);
  local_c = 4;
  pvVar1 = (undefined *)((int)this + 0x2d8);
  do {
    F_0042b630(pvVar1 GEN_EDX_ARG);
    *local_8 = 0;
    *(undefined4 *)((int)pvVar1 + 0x54) = 0;
    F_0042e430(pvVar1 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    local_8 = local_8 + 0x1b;
    *(undefined4 *)((int)pvVar1 + 0x58) = 0;
    *(undefined4 *)((int)pvVar1 + 0x5c) = 0;
    *(undefined4 *)((int)pvVar1 + 0x60) = 0;
    *(undefined1 *)((int)pvVar1 + 100) = 0;
    pvVar1 = (undefined *)((int)pvVar1 + 0x6c);
    local_c = local_c - 1;
  } while (-1 < local_c);
  local_8 = (undefined4 *)((int)this + 0x4f0);
  local_c = 4;
  pvVar1 = (undefined *)((int)this + 0x4f4);
  do {
    F_0042b630(pvVar1 GEN_EDX_ARG);
    *local_8 = 0;
    *(undefined4 *)((int)pvVar1 + 0x54) = 0;
    F_0042e430(pvVar1 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    local_8 = local_8 + 0x1b;
    *(undefined4 *)((int)pvVar1 + 0x58) = 0;
    *(undefined4 *)((int)pvVar1 + 0x5c) = 0;
    *(undefined4 *)((int)pvVar1 + 0x60) = 0;
    *(undefined1 *)((int)pvVar1 + 100) = 0;
    pvVar1 = (undefined *)((int)pvVar1 + 0x6c);
    local_c = local_c - 1;
  } while (-1 < local_c);
  local_8 = (undefined4 *)((int)this + 0x70c);
  local_c = 3;
  pvVar1 = (undefined *)((int)this + 0x710);
  do {
    F_0042b630(pvVar1 GEN_EDX_ARG);
    *local_8 = 0;
    *(undefined4 *)((int)pvVar1 + 0x54) = 0;
    F_0042e430(pvVar1 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    local_8 = local_8 + 0x1b;
    *(undefined4 *)((int)pvVar1 + 0x58) = 0;
    *(undefined4 *)((int)pvVar1 + 0x5c) = 0;
    *(undefined4 *)((int)pvVar1 + 0x60) = 0;
    *(undefined1 *)((int)pvVar1 + 100) = 0;
    pvVar1 = (undefined *)((int)pvVar1 + 0x6c);
    local_c = local_c - 1;
  } while (-1 < local_c);
  F_0071db50((undefined *)((int)this + 0x8bc) GEN_EDX_ARG);
  F_0042b630((int)this + 0x9b4 GEN_EDX_ARG);
  F_0042b630((int)this + 0xa08 GEN_EDX_ARG);
  F_0042b630((int)this + 0xa5c GEN_EDX_ARG);
  F_00a84ef0((undefined *)((int)this + 0x8bc) GEN_EDX_ARG);
  F_00a94c50(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00a962b0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a962b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa962b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  iVar1 = *(int *)((int)this + 100);
  if (*(int *)((int)this + 0x60) != iVar1) {
    uVar2 = F_00a8c970(iVar1,iVar1,*(int *)((int)this + 0x60),this);
    F_00a92090(uVar2,*(undefined4 *)((int)this + 100));
    *(uint *)((int)this + 100) = uVar2;
  }
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  iVar1 = *(int *)((int)this + 0x74);
  if (*(int *)((int)this + 0x70) != iVar1) {
    uVar2 = F_00a8c970(iVar1,iVar1,*(int *)((int)this + 0x70),this);
    F_00a92090(uVar2,*(undefined4 *)((int)this + 0x74));
    *(uint *)((int)this + 0x74) = uVar2;
  }
  return;
}

/* ref: FUN_00a96330 */
GEN_FRAME uint GEN_THISCALL F_00a96330(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa96330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  int local_c;
  undefined4 * local_8;
  
  F_0042b630((int)this + 4 GEN_EDX_FWD);
  F_0042b630((int)this + 0x58 GEN_EDX_ARG);
  F_0042b630((int)this + 0xb0 GEN_EDX_ARG);
  local_8 = (undefined4 *)((int)this + 0x15c);
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  local_c = 4;
  pvVar1 = (undefined *)((int)this + 0x160);
  do {
    F_0042b630(pvVar1 GEN_EDX_ARG);
    *local_8 = 0;
    *(undefined4 *)((int)pvVar1 + 0x54) = 0;
    F_0042e430(pvVar1 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    local_8 = local_8 + 0x1a;
    *(undefined4 *)((int)pvVar1 + 0x58) = 0;
    *(undefined4 *)((int)pvVar1 + 0x5c) = 0;
    *(undefined4 *)((int)pvVar1 + 0x60) = 0;
    pvVar1 = (undefined *)((int)pvVar1 + 0x68);
    local_c = local_c - 1;
  } while (-1 < local_c);
  local_8 = (undefined4 *)((int)this + 0x364);
  local_c = 4;
  pvVar1 = (undefined *)((int)this + 0x368);
  do {
    F_0042b630(pvVar1 GEN_EDX_ARG);
    *local_8 = 0;
    *(undefined4 *)((int)pvVar1 + 0x54) = 0;
    F_0042e430(pvVar1 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    local_8 = local_8 + 0x1a;
    *(undefined4 *)((int)pvVar1 + 0x58) = 0;
    *(undefined4 *)((int)pvVar1 + 0x5c) = 0;
    *(undefined4 *)((int)pvVar1 + 0x60) = 0;
    pvVar1 = (undefined *)((int)pvVar1 + 0x68);
    local_c = local_c - 1;
  } while (-1 < local_c);
  F_00a94f60(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00a96440 */
GEN_NOFRAME uint GEN_THISCALL F_00a96440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa96440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a93680((undefined *)((int)this + 0x54) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a96460 */
GEN_FRAME uint GEN_THISCALL F_00a96460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa96460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  F_0042ccf0((undefined *)((int)this + 8) GEN_EDX_FWD,param_1 + 2);
  *(undefined4 *)((int)this + 0x5c) = param_1[0x17];
  F_00a956f0((undefined *)((int)this + 0x60) GEN_EDX_ARG,param_1 + 0x18);
  F_00a956f0((undefined *)((int)this + 0x70) GEN_EDX_ARG,param_1 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a964c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a964c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa964c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a95a70(this GEN_EDX_FWD,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a8e790(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,
                   ((int)(param_1 - uVar2) / 0x2624) * 0x2624 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x2624;
      return;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a95a70(this GEN_EDX_ARG,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a8e790(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x2624;
  return;
}

/* ref: FUN_00a96550 */
GEN_FRAME uint GEN_THISCALL F_00a96550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa96550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (this != param_1) {
    F_00a93680(this GEN_EDX_FWD);
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a96590 */
GEN_FRAME uint F_00a96590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa96590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(undefined4 *)(gen_frame + 0x5c)) = param_3[1];
  (*(undefined4 *)(gen_frame + 0x58)) = *param_3;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,param_3 + 2);
  (*(undefined4 *)(gen_frame + 0xb4)) = param_3[0x17];
  F_00a92a70(((undefined1 *)(gen_frame + 0xb8)) GEN_EDX_ARG,param_3 + 0x18);
  F_00a92a70(((undefined1 *)(gen_frame + 0xc8)) GEN_EDX_ARG,param_3 + 0x1c);
  uVar1 = F_0042cbc0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_2);
  F_0042cbc0(param_1 GEN_EDX_ARG,uVar1);
  *(undefined4 *)((int)param_1 + 0x54) = (*(undefined4 *)(gen_frame + 0x58));
  *(undefined4 *)((int)param_1 + 0x58) = (*(undefined4 *)(gen_frame + 0x5c));
  F_0042cbc0((undefined *)((int)param_1 + 0x5c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)));
  *(undefined4 *)((int)param_1 + 0xb0) = (*(undefined4 *)(gen_frame + 0xb4));
  F_00a92a70((undefined *)((int)param_1 + 0xb4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb8)));
  F_00a92a70((undefined *)((int)param_1 + 0xc4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00a920d0(((undefined1 *)(gen_frame + 0xc8)) GEN_EDX_ARG);
  F_00a920d0(((undefined1 *)(gen_frame + 0xb8)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00a96680 */
GEN_FRAME uint GEN_THISCALL F_00a96680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa96680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00a95d60(this GEN_EDX_FWD,param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_00a966a0 */
GEN_FRAME uint GEN_THISCALL F_00a966a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa966a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined2 *)((int)this + 4) = *param_2;
  F_00a93db0((undefined *)((int)this + 8) GEN_EDX_FWD,param_2 + 2);
  return (uint)this;
}

