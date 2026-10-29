#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_009fef50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_009fef50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9fef50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_009fef90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_009fef90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9fef90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_009fefd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_009fefd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fefd0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x11))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_009fa500(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x11) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x11) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x11) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[4];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 4))) = (char)piVar3[4];
      *(char *)(piVar3 + 4) = (char)iVar1;
      goto LAB_009ff0ec;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x11) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x11) == '\0') {
      piVar4 = (int *)F_009fa3f0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x11) == '\0') {
      uVar5 = F_009fa3d0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_009ff0ec: ;
  if ((char)piVar3[4] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[4] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_009fdc20((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x11) == '\0') {
            if ((*(char *)(*piVar6 + 0x10) != '\x01') || (*(char *)(piVar6[2] + 0x10) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x10) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x10) = 1;
                *(undefined1 *)(piVar6 + 4) = 0;
                F_009fc7a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 4) = (char)piVar4[4];
              *(undefined1 *)(piVar4 + 4) = 1;
              *(undefined1 *)(piVar6[2] + 0x10) = 1;
              F_009fdc20((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_009ff1b1: ;
            *(undefined1 *)(piVar6 + 4) = 0;
          }
        }
        else {
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_009fc7a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x11) == '\0') {
            if ((*(char *)(piVar6[2] + 0x10) == '\x01') && (*(char *)(*piVar6 + 0x10) == '\x01'))
            goto LAB_009ff1b1;
            if (*(char *)(*piVar6 + 0x10) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x10) = 1;
              *(undefined1 *)(piVar6 + 4) = 0;
              F_009fdc20((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 4) = (char)piVar4[4];
            *(undefined1 *)(piVar4 + 4) = 1;
            *(undefined1 *)(*piVar6 + 0x10) = 1;
            F_009fc7a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 4) = 1;
  }
  F_00429760(piVar3,0x14,0xcb);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_009ff230 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_009ff230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ff230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x11);
  while (cVar1 == '\0') {
    F_009fdbe0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x14,0xcb);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x11);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_009ff290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_009ff290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9ff290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_009ff300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_009ff300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9ff300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) - 4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009ff380 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_009ff380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x9ff380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_009ff230(this GEN_EDX_FWD);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x11);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x11);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x11);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_009fefd0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_009ff420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_009ff420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9ff420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_009fdca0(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_009ff440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_009ff440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ff440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_009ff380(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_009ff460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_009ff460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x9ff460u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0xcb);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_4;
  }
  F_009fdd90(this GEN_EDX_ARG,param_1,param_2,param_3,puVar1);
  return param_1;
}

/* ref: FUN_009ff4c0 */
GEN_LIB GEN_FRAME uint F_009ff4c0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x9ff4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  F_009fcba0(param_1,**(undefined4 * PTR32 *)(param_2 + 4),*(undefined4 * PTR32 *)(param_2 + 4),param_3,param_4)
  ;
  return param_1;
}

/* ref: FUN_009ff4f0 */
GEN_LIB GEN_FRAME uint F_009ff4f0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x9ff4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  F_009fe250(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return param_1;
}

/* ref: FUN_009ff530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_009ff530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9ff530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0xcb);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
  }
  F_009fe100(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_009ff5a0 */
GEN_LIB GEN_FRAME uint F_009ff5a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x9ff5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_009fe350(((undefined1 *)(gen_frame + 0x8)),param_2,param_3,param_4);
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_009ff5d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_009ff5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined2 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9ff5d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 * puVar4;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x20);
  }
  puVar4 = ((undefined2 *)GEN_TOP((*(int *)((int)this + 4) * 0x20 + *(int *)this)));
  if (puVar4 != (undefined2 *)0x0) {
    *puVar4 = *param_2;
    puVar4[1] = param_2[1];
    uVar1 = *(undefined4 *)(param_2 + 10);
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    uVar3 = *(undefined4 *)(param_2 + 0xe);
    *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(puVar4 + 10) = uVar1;
    *(undefined4 *)(puVar4 + 0xc) = uVar2;
    *(undefined4 *)(puVar4 + 0xe) = uVar3;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar4;
}

/* ref: FUN_009ff620 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_009ff620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ff620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_009ff660 */
GEN_LIB GEN_FRAME uint F_009ff660(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x9ff660u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  F_009fe410(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return param_1;
}

/* ref: FUN_009ff6a0 */
GEN_LIB GEN_FRAME uint F_009ff6a0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x9ff6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  F_009fe550(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return param_1;
}

/* ref: FUN_009ff6e0 */
GEN_LIB GEN_FRAME uint F_009ff6e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9ff6e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = param_2;
  if (4 < (int)(param_2 - param_1 & 0xfffffffc)) {
    uVar1 = F_009fe600(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_009ff710 */
GEN_LIB GEN_FRAME uint F_009ff710(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9ff710u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_009fe6b0(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_009ff730 */
GEN_LIB GEN_FRAME uint F_009ff730(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x9ff730u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 4 + param_1;
    F_009fe750(param_1,iVar1,iVar2 * 8 + param_1,param_4);
    F_009fe750(param_2 + iVar2 * -4,param_2,iVar2 * 4 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -4;
    F_009fe750(param_3 + iVar2 * -8,iVar3,param_3,param_4);
    uVar4 = F_009fe750(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_009fe750(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_009ff7d0 */
GEN_LIB GEN_FRAME uint F_009ff7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ff7d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)((*(int *)&gen_args[1]) - 4);
  *(undefined4 *)((*(int *)&gen_args[1]) - 4) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar2 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = uVar1;
  uVar3 = F_009fcce0((*(undefined4 * PTR32 *)&gen_args[0]),0,iVar2 - 4 >> 2,&(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_009ff810 */
GEN_LIB GEN_FRAME uint F_009ff810(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9ff810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
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
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar13 [16];
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *param_3 = *param_1 + *param_2;
  param_3[1] = fVar1 + fVar4;
  param_3[2] = fVar2 + fVar5;
  param_3[3] = fVar3 + fVar6;
  fVar1 = param_1[5];
  fVar2 = param_1[6];
  fVar3 = param_1[7];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  param_3[4] = param_1[4] + param_2[4];
  param_3[5] = fVar1 + fVar4;
  param_3[6] = fVar2 + fVar5;
  param_3[7] = fVar3 + fVar6;
  fVar1 = param_3[4];
  fVar2 = param_3[5];
  fVar3 = param_3[6];
  fVar4 = param_3[7];
  fVar5 = fVar3 * fVar3 + fVar1 * fVar1;
  fVar6 = fVar4 * fVar4 + fVar2 * fVar2;
  fVar7 = fVar1 * fVar1 + fVar3 * fVar3;
  fVar8 = fVar2 * fVar2 + fVar4 * fVar4;
  fVar9 = fVar6 + fVar5;
  fVar5 = fVar5 + fVar6;
  fVar6 = fVar8 + fVar7;
  fVar7 = fVar7 + fVar8;
  (*(undefined4 *)((char *)&auVar13 + 4)) = (undefined4)gen_fl2bits(fVar5);
  (*(undefined4 *)((char *)&auVar13 + 0)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar13 + 8)) = (undefined4)gen_fl2bits(fVar6);
  (*(undefined4 *)((char *)&auVar13 + 12)) = (undefined4)gen_fl2bits(fVar7);
  gen_rsqrtps(&(auVar13), &(in_XMM3), &(auVar13));
  fVar12 = (*(float *)((char *)&auVar13 + 0));
  fVar8 = (*(float *)((char *)&auVar13 + 4));
  fVar10 = (*(float *)((char *)&auVar13 + 8));
  fVar11 = (*(float *)((char *)&auVar13 + 12));
  fVar5 = *(float *)&REFG(undefined, 0x10e1574) - (fVar8 * fVar5) * fVar8;
  fVar6 = *(float *)&REFG(undefined, 0x10e1578) - (fVar10 * fVar6) * fVar10;
  fVar7 = *(float *)&REFG(undefined, 0x10e157c) - (fVar11 * fVar7) * fVar11;
  fVar8 = *(float *)&REFG(undefined, 0x10e1584) * fVar8;
  fVar10 = *(float *)&REFG(undefined, 0x10e1588) * fVar10;
  fVar11 = *(float *)&REFG(undefined, 0x10e158c) * fVar11;
  param_3[4] = fVar1 * ((*(float *)&REFG(undefined, 0x10e1570) - (fVar12 * fVar9) * fVar12) *
                       (*(float *)&REFG(undefined, 0x10e1580) * fVar12));
  param_3[5] = fVar2 * (fVar5 * fVar8);
  param_3[6] = fVar3 * (fVar6 * fVar10);
  param_3[7] = fVar4 * (fVar7 * fVar11);
  fVar1 = param_1[9];
  fVar2 = param_1[10];
  fVar3 = param_1[0xb];
  fVar4 = param_2[9];
  fVar5 = param_2[10];
  fVar6 = param_2[0xb];
  param_3[8] = param_1[8] * param_2[8];
  param_3[9] = fVar1 * fVar4;
  param_3[10] = fVar2 * fVar5;
  param_3[0xb] = fVar3 * fVar6;
  return (uint)param_3;
}

/* ref: FUN_009ff890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_009ff890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9ff890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 0x88) == (*(uint *)((int)this + 0x8c) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x84),4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x84) + *(int *)((int)this + 0x88) * 4)));
  *puVar1 = param_1;
  *(int *)((int)this + 0x88) = *(int *)((int)this + 0x88) + 1;
  return (uint)puVar1;
}

/* ref: FUN_009ff8d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_009ff8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9ff8d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_009ff970 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_009ff970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ff970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_009ff9b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_009ff9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ff9b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_009ff9f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_009ff9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ff9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_009ffa30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_009ffa30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ffa30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_009ffa70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_009ffa70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ffa70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x38);
  *(undefined4 *)((int)this + 0x34) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x30),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x20) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x1c),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),(uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0xc);
  *(undefined4 *)((int)this + 8) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 4),
                       (uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x80000000;
  return uVar1;
}

/* ref: FUN_009ffb40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_009ffb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ffb40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009ff380(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xcb);
  return (uint)uVar1;
}

/* ref: FUN_009ffb80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_009ffb80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9ffb80u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_009fdca0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_009fcac0((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_009ff380((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_009ffbe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_009ffbe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9ffbe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  LPVOID this_00;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(uint *)((int)this + 0x10) = param_1;
  if (param_1 != 0) {
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *(uint *)((int)this_00 + 0xc);
    uVar2 = param_1 * 0x20 + 0x7f & 0xffffff80;
    if ((*(int *)((int)this_00 + 8) < (int)uVar2) ||
       (*(uint *)((int)this_00 + 0x10) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00 GEN_EDX_ARG,uVar2);
    }
    else {
      *(uint *)((int)this_00 + 0xc) = uVar1 + uVar2;
    }
  }
  *(uint *)((int)this + 8) = param_1 | 0x80000000;
  *(uint *)this = uVar1;
  *(uint *)((int)this + 0xc) = uVar1;
  return (uint)this;
}

/* ref: FUN_009ffc50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_009ffc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9ffc50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  LPVOID this_00;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 == *(int *)this) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 0x10);
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = iVar2 * 0x20 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)this_00 + 8) < (int)uVar3) || (uVar3 + iVar1 != *(int *)((int)this_00 + 0xc)))
     || (*(int *)((int)this_00 + 0x14) == iVar1)) {
    F_00d945c0(this_00 GEN_EDX_ARG,iVar1,uVar3);
  }
  else {
    *(int *)((int)this_00 + 0xc) = iVar1;
  }
  uVar3 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_009ffce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_009ffce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9ffce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 * puVar4;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x20);
  }
  puVar4 = ((undefined2 *)GEN_TOP((*(int *)((int)this + 4) * 0x20 + *(int *)this)));
  if (puVar4 != (undefined2 *)0x0) {
    *puVar4 = *param_1;
    puVar4[1] = param_1[1];
    uVar1 = *(undefined4 *)(param_1 + 10);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    uVar3 = *(undefined4 *)(param_1 + 0xe);
    *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(puVar4 + 10) = uVar1;
    *(undefined4 *)(puVar4 + 0xc) = uVar2;
    *(undefined4 *)(puVar4 + 0xe) = uVar3;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar4;
}

/* ref: FUN_009ffd30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_009ffd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ffd30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  bool bVar4;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar4 = true;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar4 = *(*(uint * PTR32 *)&gen_args[2]) < (uint)puVar3[3];
      }
      else {
        bVar4 = *(*(uint * PTR32 *)&gen_args[2]) <= (uint)puVar3[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar4);
      if (bVar4 == false) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar3;
  if (bVar4 != false) {
    if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar3 = (undefined4 *)F_009ff460((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar3,(*(uint * PTR32 *)&gen_args[2]));
      uVar1 = *puVar3;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      *(*(undefined4 * PTR32 *)&gen_args[1]) = uVar1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_009fa5d0(&(*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  }
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(*(uint * PTR32 *)&gen_args[2])) {
    puVar3 = (undefined4 *)F_009ff460((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar3,(*(uint * PTR32 *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 * PTR32 *)&gen_args[3]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_009ffe00 */
GEN_LIB GEN_FRAME uint F_009ffe00(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x9ffe00u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  F_009fe410(param_1,**(undefined4 * PTR32 *)(param_2 + 4),*(undefined4 * PTR32 *)(param_2 + 4),param_3,param_4,
               param_5,param_6,param_7);
  return param_1;
}

/* ref: FUN_009ffe50 */
GEN_LIB GEN_FRAME uint F_009ffe50(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x9ffe50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  F_009fe250(param_1,**(undefined4 * PTR32 *)(param_2 + 4),*(undefined4 * PTR32 *)(param_2 + 4),param_3,param_4,
               param_5,param_6);
  return param_1;
}

/* ref: FUN_009ffe90 */
GEN_LIB GEN_FRAME uint F_009ffe90(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x9ffe90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  F_009fe550(param_1,**(undefined4 * PTR32 *)(param_2 + 4),*(undefined4 * PTR32 *)(param_2 + 4),param_3,param_4,
               param_5,param_6);
  return param_1;
}

/* ref: FUN_009ffed0 */
GEN_LIB GEN_FRAME uint F_009ffed0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x9ffed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * local_8;
  
  puVar6 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 2) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                     1);
  F_009ff730(param_2,puVar6,param_3 - 1,param_4);
  puVar5 = puVar6;
  while (((param_2 < puVar5 && (uVar3 = (*param_4)(puVar5[-1],*puVar5), (char)uVar3 == '\0')) &&
         (uVar3 = (*param_4)(*puVar5,puVar5[-1]), (char)uVar3 == '\0'))) {
    puVar5 = puVar5 - 1;
  }
  do {
    puVar6 = puVar6 + 1;
    puVar2 = puVar6;
    puVar4 = puVar5;
    if ((param_3 <= puVar6) || (uVar3 = (*param_4)(*puVar6,*puVar5), (char)uVar3 != '\0')) break;
    uVar3 = (*param_4)(*puVar5,*puVar6);
  } while ((char)uVar3 == '\0');
joined_r0x009fff73: ;
  do {
    if (puVar6 < param_3) {
      uVar3 = (*param_4)(*puVar5,*puVar6);
      local_8 = puVar2;
      if ((char)uVar3 == '\0') {
        uVar3 = (*param_4)(*puVar6,*puVar5);
        if ((char)uVar3 != '\0') goto joined_r0x009fffb3;
        local_8 = puVar2 + 1;
        uVar1 = *puVar2;
        *puVar2 = *puVar6;
        *puVar6 = uVar1;
      }
      puVar6 = puVar6 + 1;
      puVar2 = local_8;
      goto joined_r0x009fff73;
    }
joined_r0x009fffb3: ;
    for (; param_2 < puVar4; puVar4 = puVar4 - 1) {
      uVar3 = (*param_4)(puVar4[-1],*puVar5);
      if ((char)uVar3 == '\0') {
        uVar3 = (*param_4)(*puVar5,puVar4[-1]);
        if ((char)uVar3 != '\0') break;
        uVar1 = puVar5[-1];
        puVar5 = puVar5 - 1;
        *puVar5 = puVar4[-1];
        puVar4[-1] = uVar1;
      }
    }
    if (puVar4 == param_2) {
      if (puVar6 == param_3) {
        *param_1 = puVar5;
        param_1[1] = puVar2;
        return (uint)param_1;
      }
      if (puVar2 != puVar6) {
        uVar1 = *puVar5;
        *puVar5 = *puVar2;
        *puVar2 = uVar1;
      }
      uVar1 = *puVar5;
      *puVar5 = *puVar6;
      puVar5 = puVar5 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
      puVar2 = puVar2 + 1;
    }
    else {
      puVar4 = puVar4 - 1;
      if (puVar6 == param_3) {
        puVar5 = puVar5 - 1;
        if (puVar4 != puVar5) {
          uVar1 = *puVar4;
          *puVar4 = *puVar5;
          *puVar5 = uVar1;
        }
        uVar1 = *puVar5;
        *puVar5 = puVar2[-1];
        puVar2[-1] = uVar1;
        puVar2 = puVar2 - 1;
      }
      else {
        uVar1 = *puVar6;
        *puVar6 = *puVar4;
        *puVar4 = uVar1;
        puVar6 = puVar6 + 1;
      }
    }
  } while( true );
}

/* ref: FUN_00a00080 */
GEN_LIB GEN_FRAME uint F_00a00080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa00080u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = (*(undefined4 *)&gen_args[2]);
  uVar1 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  while (4 < (int)(uVar1 & 0xfffffffc)) {
    (*(int *)&gen_args[1]) = *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4)))) = *(*(undefined4 * PTR32 *)&gen_args[0]);
    F_009fcce0((*(undefined4 * PTR32 *)&gen_args[0]),0,(int)(uVar1 - 4) >> 2,&(*(int *)&gen_args[1]),uVar2);
    uVar1 = uVar1 - 4;
  }
  return uVar1;
}

/* ref: FUN_00a00140 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a00140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa00140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0x80000000;
  iVar1 = *(int *)(*(int *)this + 0x1c);
  *(int *)((int)this + 0x2c) = iVar1;
  uVar4 = iVar1 + 3U & 0xfffffffc;
  if ((int)(*(uint *)((int)this + 0x18) & 0x3fffffff) < (int)uVar4) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x10,uVar4,0x30);
  }
  if ((int)(*(uint *)((int)this + 0xc) & 0x3fffffff) < (int)uVar4) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 4,uVar4,0x30);
  }
  if ((int)(*(uint *)((int)this + 0x24) & 0x3fffffff) < (int)uVar4) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x1c,uVar4,4);
  }
  uVar4 = *(uint *)((int)this + 0x18) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar3 = uVar4 * 2;
    iVar2 = iVar1;
    if (iVar1 < iVar3) {
      iVar2 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x10,iVar2,0x30);
  }
  *(int *)((int)this + 0x14) = iVar1;
  uVar4 = *(uint *)((int)this + 0xc) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar3 = uVar4 * 2;
    iVar2 = iVar1;
    if (iVar1 < iVar3) {
      iVar2 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 4,iVar2,0x30);
  }
  *(int *)((int)this + 8) = iVar1;
  uVar4 = *(uint *)((int)this + 0x24) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar3 = uVar4 * 2;
    iVar2 = iVar1;
    if (iVar1 < iVar3) {
      iVar2 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x1c,iVar2,4);
  }
  *(int *)((int)this + 0x20) = iVar1;
  iVar1 = *(int *)(*(int *)this + 0x40);
  uVar4 = iVar1 + 3U & 0xfffffffc;
  if ((int)(*(uint *)((int)this + 0x38) & 0x3fffffff) < (int)uVar4) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x30,uVar4,4);
  }
  uVar4 = *(uint *)((int)this + 0x38) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar3 = uVar4 * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x30,iVar3,4);
  }
  iVar3 = iVar1 - *(int *)((int)this + 0x34);
  puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x30) + *(int *)((int)this + 0x34) * 4)));
  if (0 < iVar3) {
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  *(int *)((int)this + 0x34) = iVar1;
  return (uint)this;
}

/* ref: Client::Graphics::Animation::AnimationController::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a00300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa00300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  F_009f5260(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_00a00330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a00330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa00330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00a003a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a003a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa003a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00a003e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a003e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa003e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar1;
}

/* ref: FUN_00a00420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a00420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa00420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009ff380(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xcb);
  return (uint)uVar1;
}

/* ref: FUN_00a00460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a00460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa00460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  LPVOID pvVar1;
  
  F_009ffa70(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,0x3c);
  }
  return (uint)this;
}

/* ref: FUN_00a004e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a004e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa004e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_009ffd30(this GEN_EDX_FWD,param_1,param_2,0);
  return param_1;
}

/* ref: FUN_00a00500 */
GEN_LIB GEN_FRAME uint F_00a00500(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa00500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00a00080(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00a00510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a00510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa00510u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe8))) != (*(int *)&gen_args[1])) {
    if ((char)(*(int *)&gen_args[2]) != '\0') {
      F_00a00330(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xac))) GEN_EDX_FWD,&(*(int *)&gen_args[2]),&(*(int *)&gen_args[1]));
      iVar1 = (*(int *)&gen_args[2]);
      if ((*(int *)&gen_args[2]) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb0)))) goto LAB_00a00545;
    }
    F_00a00330(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))) GEN_EDX_ARG,&(*(int *)&gen_args[2]),&(*(int *)&gen_args[1]));
    iVar1 = (*(int *)&gen_args[2]);
    if ((*(int *)&gen_args[2]) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0)))) {
LAB_00a00545: ;
      return *(uint *)(iVar1 + 0x10);
    }
  }
  return 0;
}

/* ref: FUN_00a00580 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a00580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa00580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,iVar1 * 4);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00a00630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a00630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa00630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009ff380(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xcb);
  return (uint)uVar1;
}

/* ref: FUN_00a00670 */
GEN_LIB GEN_FRAME uint F_00a00670(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa00670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00a00690 */
GEN_LIB GEN_FRAME uint F_00a00690(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa00690u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2 - param_1;
  iVar3 = param_1;
  iVar5 = param_2;
  iVar4 = param_3;
  do {
    uVar2 = iVar1 >> 2;
    if ((int)uVar2 < 0x21) {
LAB_00a00722: ;
      if (1 < (int)uVar2) {
        uVar2 = F_009fe6b0(iVar3,iVar5,param_4,0);
      }
      return uVar2;
    }
    if (iVar4 < 1) {
      if (0x20 < (int)uVar2) {
        if (4 < (int)(iVar5 - iVar3 & 0xfffffffcU)) {
          F_009fe600(iVar3,iVar5,param_4,0,0);
        }
        uVar2 = F_00a00080(iVar3,iVar5,param_4);
        return uVar2;
      }
      goto LAB_00a00722;
    }
    F_009ffed0(&(*(int *)(gen_frame + 0x4)),iVar3,iVar5,param_4);
    iVar4 = iVar4 / 2 + (iVar4 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x4)) - iVar3 & 0xfffffffcU) < (int)(iVar5 - (*(int *)(gen_frame + 0x8)) & 0xfffffffcU)) {
      F_00a00690(iVar3,(*(int *)(gen_frame + 0x4)),iVar4,param_4);
      iVar3 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_00a00690((*(int *)(gen_frame + 0x8)),iVar5,iVar4,param_4);
      iVar5 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = iVar5 - iVar3;
  } while( true );
}

/* ref: FUN_00a00780 */
GEN_LIB GEN_FRAME unsigned int F_00a00780(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa00780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = param_2 - 1;
  if (-1 < iVar3) {
    piVar2 = (int *)(param_1 + 8 + iVar3 * 0xc);
    do {
      iVar1 = *piVar2;
      piVar2[-1] = 0;
      if (-1 < iVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar2[-2],iVar1 * 4);
      }
      piVar2[-2] = 0;
      *piVar2 = ((int)0x80000000);
      iVar3 = iVar3 - 1;
      piVar2 = piVar2 - 3;
    } while (-1 < iVar3);
  }
  return;
}

/* ref: Client::Graphics::Animation::AnimationControllerHandle::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a007e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa007e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  F_009f7b70(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_00a00810 */
GEN_LIB GEN_FRAME uint F_00a00810(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa00810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00a00690(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return uVar1;
}

/* ref: FUN_00a00840 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00a00840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa00840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    piVar2 = (int *)(*(int *)this + 8 + iVar3 * 0xc);
    do {
      iVar1 = *piVar2;
      piVar2[-1] = 0;
      if (-1 < iVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar2[-2],iVar1 * 4);
      }
      piVar2[-2] = 0;
      *piVar2 = ((int)0x80000000);
      iVar3 = iVar3 - 1;
      piVar2 = piVar2 - 3;
    } while (-1 < iVar3);
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return 0;
}

/* ref: FUN_00a008c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a008c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa008c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar4) {
    piVar3 = (int *)(*(int *)this + 8 + iVar4 * 0xc);
    do {
      iVar1 = *piVar3;
      piVar3[-1] = 0;
      if (-1 < iVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar3[-2],iVar1 * 4);
      }
      piVar3[-2] = 0;
      *piVar3 = ((int)0x80000000);
      piVar3 = piVar3 - 3;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar2 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00a00960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a00960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa00960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  F_009f95b0(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_00a00990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a00990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa00990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  F_009f9cd0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a00ae0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a00ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa00ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 0x14) - 1;
  if (-1 < iVar4) {
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x10) + 8 + iVar4 * 0xc)));
    do {
      iVar1 = *piVar3;
      piVar3[-1] = 0;
      if (-1 < iVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar3[-2],iVar1 * 4);
      }
      piVar3[-2] = 0;
      *piVar3 = ((int)0x80000000);
      iVar4 = iVar4 - 1;
      piVar3 = piVar3 - 3;
    } while (-1 < iVar4);
  }
  uVar2 = *(uint *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if ((int)uVar2 < 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x18) = 0x80000000;
    return uVar2;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                    (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),
                     (uVar2 & 0x3fffffff) * 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  return uVar2;
}

/* ref: FUN_00a00b90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a00b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa00b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00d96ba0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x1c) = 0x14;
  return (uint)this;
}

/* ref: FUN_00a00c00 */
GEN_LIB GEN_FRAME float10 F_00a00c00(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xa00c00u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00a00c20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a00c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa00c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_004cefe0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e1870));
  *(undefined4 *)((int)this + 0x1c) = param_3;
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined1 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: FUN_00a00c60 */
GEN_LIB GEN_NOFRAME unsigned int F_00a00c60(void)
{
  GEN_ENTER(0xa00c60u, 0u, 0u, 0u, 0u);
  if (REFG(undefined4 * PTR32, 0x14a2444) != (undefined4 *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x14a2444))))(REFG(undefined4 * PTR32, 0x14a2444) GEN_EDX_ARG,1);
    REFG(undefined4 * PTR32, 0x14a2444) = (undefined4 *)0x0;
  }
  return;
}

/* ref: FUN_00a00c80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a00c80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa00c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  F_004a0020(in_ecx GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10e188c));
  in_ecx[10] = 0;
  in_ecx[0xb] = 1;
  *(undefined1 *)(in_ecx + 0xc) = 0;
  in_ecx[0x10] = 3;
  F_00429f90(in_ecx + 0x11 GEN_EDX_ARG);
  in_ecx[0x93] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00a00cc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a00cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa00cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10e188c));
  if (*(undefined * PTR32 *)((int)this + 0x28) != (undefined *)0x0) {
    F_004cf020(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_FWD);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x28);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x28) = 0;
    }
  }
  F_00429fa0();
  uVar2 = F_004a05c0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00a00d00 */
GEN_LIB GEN_FRAME unsigned int F_00a00d00(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa00d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = REFG(int, 0x14a2444);
  if (REFG(int, 0x14a2444) != 0) {
    if (*param_1 == 0) {
      *(undefined4 *)(REFG(int, 0x14a2444) + 0x34) = 0;
    }
    else if (*param_1 == 1) {
      *(undefined4 *)(REFG(int, 0x14a2444) + 0x34) = 2;
    }
    else if ((*(int *)(REFG(int, 0x14a2444) + 0x28) == 0) ||
            (*((char *)GEN_TOP((*(int *)(REFG(int, 0x14a2444) + 0x28) + 0x24))) == '\0')) {
      *(undefined4 *)(REFG(int, 0x14a2444) + 0x34) = 3;
    }
    else {
      *(undefined4 *)(REFG(int, 0x14a2444) + 0x34) = 1;
    }
    if (*(char *)(iVar1 + 0x2d) != '\0') {
      if ((code *)*(gen_code32 *)(iVar1 + 0x38) != (code *)0x0) {
        ((code *)*(gen_code32 *)(iVar1 + 0x38))(*(undefined4 *)(iVar1 + 0x3c),*(undefined4 *)(iVar1 + 0x34));
      }
      *(undefined4 *)(iVar1 + 0x38) = 0;
      *(undefined4 *)(iVar1 + 0x3c) = 0;
      *(undefined1 *)(iVar1 + 0x2d) = 0;
      *(undefined1 *)(iVar1 + 0x2f) = 1;
    }
  }
  return;
}

/* ref: FUN_00a00d80 */
GEN_LIB GEN_FRAME uint F_00a00d80(GEN_P(wchar_t * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa00d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x210];
  int iVar1;
  wchar_t * _Dst;
  
  iVar1 = REFG(int, 0x14a2444);
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  _Dst = param_1;
  if (REFG(int, 0x14a2444) != 0) {
    F_0042a3a0(((wchar_t *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,1);
    _Dst = (wchar_t *)(iVar1 + 0x44);
    if (((wchar_t *)(gen_frame + 0x0)) != _Dst) {
      _Dst = (wchar_t *)F_00c4a8e0(_Dst,0x104,((wchar_t *)(gen_frame + 0x0)));
    }
    F_00429fa0();
    *(undefined1 *)(iVar1 + 0x2e) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c) GEN_EDX_ARG);
  return (uint)_Dst;
}

/* ref: FUN_00a00df0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a00df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa00df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_004cefe0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e189c));
  *(undefined4 *)((int)this + 0x220) = 0;
  return (uint)this;
}

/* ref: FUN_00a00e20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a00e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa00e20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  F_00c4983b((int)this + 0x18,0x104,param_1,0x104);
  *(undefined4 *)((int)this + 0x220) = param_2;
  uVar1 = F_004cf9e0(this GEN_EDX_ARG,0,0,0x2000,"FFXIV_ScreenShotThread");
  return uVar1;
}

/* ref: Client::System::Photo::ScreenShotThreadWin::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a00e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa00e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pSVar1;
  uint uVar2;
  
  F_004f88e0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_FWD);
  pSVar1 = this + 0x18;
  uVar2 = F_004f7d10(pSVar1,1);
  if (uVar2 == 1) {
    F_004f7c20(pSVar1);
    gen_imp_D3DXSaveSurfaceToFileW(pSVar1,1,*(undefined4 *)(this + 0x220),0,0);
  }
  uVar2 = F_004f9ed0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00a00ed0 */
GEN_LIB GEN_NOFRAME uint F_00a00ed0(void)
{
  GEN_ENTER(0xa00ed0u, 0u, 0u, 0u, 0u);
  undefined4 * in_ecx;
  uint uVar1;
  
  if (REFG(undefined4 * PTR32, 0x14a2444) == (undefined4 *)0x0) {
    in_ecx = (undefined4 *)F_00406b90(0x250,0,0);
    if (in_ecx == (undefined4 *)0x0) {
      REFG(undefined4 * PTR32, 0x14a2444) = (undefined4 *)0x0;
    }
    else {
      F_004a0020(in_ecx GEN_EDX_ARG);
      *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10e188c));
      in_ecx[10] = 0;
      in_ecx[0xb] = 1;
      *(undefined1 *)(in_ecx + 0xc) = 0;
      in_ecx[0x10] = 3;
      F_00429f90(in_ecx + 0x11 GEN_EDX_ARG);
      in_ecx[0x93] = 0;
      REFG(undefined4 * PTR32, 0x14a2444) = in_ecx;
    }
  }
  uVar1 = F_004a0100((undefined *)(REFG(int, 0x137104c) + 0x11b0) GEN_EDX_ARG,0x1d,REFG(undefined4 * PTR32, 0x14a2444));
  return uVar1;
}

/* ref: Client::System::Photo::ScreenShot::vf1 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00a00f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa00f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  if (this[0x2f] != (undefined1)0x0) {
    F_004cf020(*(undefined * PTR32 *)(this + 0x28) GEN_EDX_FWD);
    puVar1 = *(undefined4 * PTR32 *)(this + 0x28);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x28) = 0;
    }
    this[0x2f] = (undefined1)0x0;
  }
  if (this[0x2e] != (undefined1)0x0) {
    if (REFG(int, 0x1370b90) != 0) {
      F_00a01660(this + 0x44);
    }
    this[0x2e] = (undefined1)0x0;
  }
  return;
}

/* ref: FUN_00a00fa0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00a00fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa00fa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  undefined4 * this_00;
  ulonglong uVar3;
  
  if (((*(char *)((int)this + 0x2c) != '\0') && (*(char *)((int)this + 0x2d) == '\0')) &&
     (*(int *)((int)this + 0x28) == 0)) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_FWD,0x3e);
    if ((*(int *)(uVar2 + 0x14) == 0) || (*(int *)(uVar2 + 0x14) != 1)) {
      *(undefined4 *)((int)this + 0x40) = 3;
    }
    else {
      *(undefined4 *)((int)this + 0x40) = 1;
    }
    uVar3 = F_0046ff40();
    *(int *)((int)this + 0x24c) = (int)(uVar3 / 1000);
    *(undefined4 *)((int)this + 0x38) = param_1;
    *(undefined4 *)((int)this + 0x3c) = param_2;
    *(undefined1 *)((int)this + 0x2d) = 1;
    if (REFG(void * PTR32, 0x1370b90) != (undefined *)0x0) {
      F_00a01590(REFG(void * PTR32, 0x1370b90) GEN_EDX_ARG,0,*(undefined4 *)((int)this + 0x40),1,((code *)REFP(0xa00d00)));
    }
    this_00 = (undefined4 *)F_00406b90(0x28,0,0);
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)((int)this + 0x40);
      F_004cefe0(this_00 GEN_EDX_ARG);
      this_00[6] = uVar1;
      *this_00 = (*(undefined * PTR32 (*)[6])REFP(0x10e1870));
      this_00[7] = ((code *)REFP(0xa00d00));
      this_00[8] = this;
      *(undefined1 *)(this_00 + 9) = 0;
    }
    *(undefined4 * PTR32 *)((int)this + 0x28) = this_00;
    F_004cf9e0(this_00 GEN_EDX_ARG,0,0,0x10000,"ScreenShotThread");
    return 1;
  }
  return 0;
}

/* ref: FUN_00a01090 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00a01090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa01090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x380];
  int iVar1;
  int iVar2;
  byte bVar3;
  wchar_t * _Src;
  uint uVar4;
  LPCWSTR lpDirectoryName;
  BOOL BVar5;
  ULARGE_INTEGER * lpFreeBytesAvailableToCaller;
  ULARGE_INTEGER * lpTotalNumberOfBytes;
  char * _Format;
  ULARGE_INTEGER * lpTotalNumberOfFreeBytes;
  undefined * puVar6;
  
  (*(uint *)(gen_frame + 0x378)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x37c);
  if ((REFG(void * PTR32, 0x137104c) == (undefined *)0x0) || (REFG(int, 0x1370b90) == 0)) goto LAB_00a011ff;
  F_00429f90(((wchar_t *)(gen_frame + 0x9c)) GEN_EDX_FWD);
  (*(undefined4 *)(gen_frame + 0x40)) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x24c)));
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  F_00c4f4ca(((undefined *)(gen_frame + 0x2f8)),&(*(undefined4 *)(gen_frame + 0x40)));
  if (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x1d))) == '\x02') {
    _Format = "ffxiv_%m%d%Y_%H%M%S";
  }
  else if (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x1d))) == '\x03') {
    _Format = "ffxiv_%d%m%Y_%H%M%S";
  }
  else {
    _Format = "ffxiv_%Y%m%d_%H%M%S";
  }
  F_00c5071b(((char *)(gen_frame + 0x338)),0x40,_Format,((undefined *)(gen_frame + 0x2f8)));
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x18))) {
  case 0: ;
    puVar6 = &REFG(undefined, 0x10e1810);
    break;
  case 1: ;
    puVar6 = &REFG(undefined, 0x10e1818);
    break;
  default: ;
    goto switchD_00a0115a_caseD_2;
  case 3: ;
    puVar6 = &REFG(undefined, 0x10e1820);
    break;
  case 4: ;
    puVar6 = &REFG(undefined, 0x10e1828);
  }
  F_00c473c8(((char *)(gen_frame + 0x338)),0x40,puVar6);
  F_004f88e0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
  _Src = (wchar_t *)F_004308f0(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG);
  F_00c4a8e0(((wchar_t *)(gen_frame + 0x9c)),0x104,_Src);
  F_0042a2a0(((wchar_t *)(gen_frame + 0x9c)) GEN_EDX_ARG,"screenshots");
  uVar4 = F_004f7d10(((wchar_t *)(gen_frame + 0x9c)),0);
  if (uVar4 == 1) {
    F_0042a2a0(((wchar_t *)(gen_frame + 0x9c)) GEN_EDX_ARG,((char *)(gen_frame + 0x338)));
    iVar1 = *((int *)GEN_TOP((*(int *)(REFG(int, 0x1370b90) + 0x2c) + 0x34)));
    iVar2 = *(int *)(iVar1 + 0x18);
    iVar1 = *(int *)(iVar1 + 0x1c);
    F_00a013b0(((wchar_t *)(gen_frame + 0x9c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2a4)));
    lpTotalNumberOfFreeBytes = &(*(ULARGE_INTEGER *)(gen_frame + 0x8));
    lpTotalNumberOfBytes = &(*(ULARGE_INTEGER *)(gen_frame + 0x10));
    ((undefined2 *)(gen_frame + 0x31c))[0] = 0;
    lpFreeBytesAvailableToCaller = &(*(ULARGE_INTEGER *)(gen_frame + 0x38));
    (*(undefined4 *)(gen_frame + 0x330)) = 7;
    (*(undefined4 *)(gen_frame + 0x32c)) = 0;
    lpDirectoryName = (LPCWSTR)F_0042eb40(((undefined1 *)(gen_frame + 0x2a4)) GEN_EDX_ARG,((undefined2 *)(gen_frame + 0x31c)));
    BVar5 = gen_imp_GetDiskFreeSpaceExW(lpDirectoryName,lpFreeBytesAvailableToCaller,lpTotalNumberOfBytes,
                                lpTotalNumberOfFreeBytes);
    if (BVar5 == 1) {
      if (((*(ULARGE_INTEGER *)(gen_frame + 0x38)).s.HighPart == 0) && ((uint)(*(undefined4 *)((char *)&(*(ULARGE_INTEGER *)(gen_frame + 0x38)) + 0)) < iVar1 * iVar2 * 3 + 0x400U)) {
        *(undefined1 *)((int)this + 0x24) = 1;
      }
      else {
        bVar3 = F_004f7c20(((wchar_t *)(gen_frame + 0x9c)));
        if (bVar3 == 0) {
          uVar4 = F_00429fb0(((wchar_t *)(gen_frame + 0x9c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x48)));
          F_00a00d80(uVar4);
          F_0042c880(((undefined1 *)(gen_frame + 0x48)) GEN_EDX_ARG);
          F_00403330(((undefined2 *)(gen_frame + 0x31c)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x2a4)) GEN_EDX_ARG);
          F_004f9ed0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
          F_00429fa0();
          F_00c47745((*(uint *)(gen_frame + 0x378)) ^ (uint)(uint)(gen_frame + 0x37c) GEN_EDX_ARG);
          return 1;
        }
      }
    }
    F_00403330(((undefined2 *)(gen_frame + 0x31c)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x2a4)) GEN_EDX_ARG);
    F_004f9ed0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    F_00429fa0();
    F_00c47745((*(uint *)(gen_frame + 0x378)) ^ (uint)(uint)(gen_frame + 0x37c) GEN_EDX_ARG);
    return 0;
  }
  F_004f9ed0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
switchD_00a0115a_caseD_2: ;
  F_00429fa0();
LAB_00a011ff: ;
  F_00c47745((*(uint *)(gen_frame + 0x378)) ^ (uint)(uint)(gen_frame + 0x37c) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::System::Photo::ScreenShot::ScreenShotThread::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = F_00a01090(this GEN_EDX_FWD);
  if (bVar2 == 0) {
    pcVar1 = *(gen_code32 *)(this + 0x1c);
    ((undefined4 *)(gen_frame + 0x4))[0] = 2;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(((undefined4 *)(gen_frame + 0x4)));
    }
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00a013b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a013b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa013b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(param_1 GEN_EDX_FWD);
  F_0042e170(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,this);
  F_004fecf0(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return param_1;
}

/* ref: Client::System::Photo::ScreenShot::ScreenShotThread::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e1870));
  F_004cf880(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Photo::ScreenShot::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10e188c));
  if (*(undefined * PTR32 *)(this + 0x28) != (undefined *)0x0) {
    F_004cf020(*(undefined * PTR32 *)(this + 0x28) GEN_EDX_FWD);
    puVar1 = *(undefined4 * PTR32 *)(this + 0x28);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x28) = 0;
    }
  }
  F_00429fa0();
  F_004a05c0(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Photo::ScreenShotThreadWin::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a014b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa014b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e189c));
  F_004cf880(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a014e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a014e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa014e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_004d4760(this GEN_EDX_FWD,0x14);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0xe;
    puVar1[1] = param_1;
    puVar1[2] = param_2;
    puVar1[3] = (uint)((char)param_3 != '\0') | puVar1[3] & 0xfffffffe;
    puVar1[4] = param_4;
    uVar2 = F_004d4810(this GEN_EDX_ARG,puVar1);
  }
  return uVar2;
}

/* ref: FUN_00a01530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(LPCWSTR param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LPCWSTR param_1 = (LPCWSTR)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (undefined4 *)F_004d4760(this GEN_EDX_FWD,8);
  uVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0xf;
    iVar2 = gen_imp_lstrlenW(param_1);
    iVar2 = iVar2 * 2 + 2;
    uVar3 = F_004d4760(this GEN_EDX_ARG,iVar2);
    uVar4 = 0;
    if (uVar3 != 0) {
      F_00c46aa0(uVar3,param_1,iVar2);
      puVar1[1] = uVar3;
      uVar4 = F_004d4810(this GEN_EDX_ARG,puVar1);
    }
  }
  return uVar4;
}

/* ref: FUN_00a01590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa01590u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  uVar1 = *(uint *)((int)this_00 + 8);
  uVar2 = *(uint *)((int)this_00 + 8);
  uVar3 = *(uint *)((int)this_00 + 8);
  uVar5 = *(uint *)((int)this_00 + 8);
  *(undefined4 *)((int)this_00 + 8) = 0xff47ffff;
  uVar4 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x34)));
  uVar5 = uVar5 & 0x7ffff;
  puVar6 = (undefined4 *)F_004d4760(this_00 GEN_EDX_FWD,0x14);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0xe;
    puVar6[1] = param_2;
    puVar6[2] = uVar4;
    puVar6[3] = (uint)((char)param_3 != '\0') | puVar6[3] & 0xfffffffe;
    puVar6[4] = param_4;
    F_004d4810(this_00 GEN_EDX_ARG,puVar6);
  }
  if (param_1 != 0) {
    F_00a01530(this_00 GEN_EDX_ARG,param_1);
  }
  *(uint *)((int)this_00 + 8) =
       ((uVar2 >> 0x17 & 0xf | (uVar1 >> 0x1b) << 4) << 4 | uVar3 >> 0x13 & 0xf) << 0x13 | uVar5;
  return uVar5;
}

/* ref: FUN_00a01660 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00a01660(GEN_P(LPCWSTR param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa01660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(LPCWSTR param_1 = (LPCWSTR)gen_a0;)
  undefined * this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  
  this = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  uVar1 = *(uint *)((int)this + 8);
  uVar2 = *(uint *)((int)this + 8);
  uVar3 = *(uint *)((int)this + 8);
  uVar4 = *(uint *)((int)this + 8) & 0x7ffff;
  *(undefined4 *)((int)this + 8) = 0xff47ffff;
  puVar5 = (undefined4 *)F_004d4760(this GEN_EDX_ARG,8);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0xf;
    iVar6 = gen_imp_lstrlenW(param_1);
    iVar6 = iVar6 * 2 + 2;
    uVar7 = F_004d4760(this GEN_EDX_ARG,iVar6);
    if (uVar7 != 0) {
      F_00c46aa0(uVar7,param_1,iVar6);
      puVar5[1] = uVar7;
      F_004d4810(this GEN_EDX_ARG,puVar5);
    }
  }
  *(uint *)((int)this + 8) =
       ((uVar2 >> 0x17 & 0xf | (uVar1 >> 0x1b) << 4) << 4 | uVar3 >> 0x13 & 0xf) << 0x13 | uVar4;
  return uVar4;
}

/* ref: FUN_00a01730 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00a01730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa01730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(UINT *)((int)this + 4) != 0) {
    gen_imp_timeKillEvent(*(UINT *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_00a01750 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a01750(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa01750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  return in_ecx;
}

/* ref: FUN_00a01790 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00a01790(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa01790u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(param_3 + 8))(*(undefined4 *)(param_3 + 0xc),param_3 + 0x10);
  return uVar1;
}

/* ref: FUN_00a017b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00a017b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa017b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(UINT *)((int)this + 4) != 0) {
    gen_imp_timeKillEvent(*(UINT *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_00a017d0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00a017d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(UINT param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xa017d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(UINT param_1 = (UINT)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint MVar1;
  
  if (*(UINT *)((int)this + 4) != 0) {
    gen_imp_timeKillEvent(*(UINT *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(UINT *)this = param_1;
  *(undefined4 *)((int)this + 0x14) = param_5;
  MVar1 = gen_imp_timeSetEvent(param_1,param_1,((code *)REFP(0xa01790)),(DWORD_PTR)this,1);
  *(uint *)((int)this + 4) = MVar1;
  return 0;
}

/* ref: FUN_00a01840 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a01840(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa01840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10e1a94));
  in_ecx[2] = 0;
  *(undefined1 *)(in_ecx + 3) = 1;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00a01860 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01860(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa01860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[2] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10e1a94));
  *(undefined1 *)(in_ecx + 3) = 1;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00a01890 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00a01890(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa01890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10e1a94));
  return;
}

/* ref: FUN_00a018a0 */
GEN_LIB GEN_NOFRAME uint F_00a018a0(void)
{
  GEN_ENTER(0xa018a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00a018b0 */
GEN_LIB GEN_FRAME uint F_00a018b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa018b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar1 = F_00b9a750(param_1);
  F_00b9b070(param_1,0xffffd8ee,"tostring");
  iVar4 = 1;
  if (0 < (int)uVar1) {
    do {
      F_00b9a910(param_1,0xffffffff);
      F_00b9a910(param_1,iVar4);
      F_00b9b510(param_1,1,1);
      uVar2 = F_00b9abf0(param_1,0xffffffff,0);
      if (uVar2 == 0) {
        uVar1 = F_00b9bbd0(param_1,"\'tostring\' must return a string to \'print\'");
        F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
        return uVar1;
      }
      if (1 < iVar4) {
        uVar3 = F_00c50860();
        F_00c5075a("\t",(undefined *)(uVar3 + 0x20));
      }
      F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,&REFG(undefined, 0x10e18f4),uVar2);
      F_00b9a760(param_1,0xfffffffe);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= (int)uVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00a019a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a019a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa019a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_00bb8aa0(*(int *)((int)this + 8));
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return uVar1;
}

/* ref: FUN_00a019d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a019d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa019d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b9a750(*(undefined4 *)(in_ecx + 8));
  return uVar1;
}

/* ref: FUN_00a019e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a019e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa019e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b9a760(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00a01a00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b9a760(*(undefined4 *)((int)this + 8),-1 - param_1);
  return uVar1;
}

/* ref: FUN_00a01a20 */
GEN_LIB GEN_FRAME uint F_00a01a20(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xa01a20u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int param_1 = (int)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00c475c9(((char *)(gen_frame + 0x8)),0x100,param_2,((undefined *)&gen_args[2]));
  uVar1 = F_00b9bbd0(*(undefined4 *)(param_1 + 8),((char *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a01a80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a01a20(this,"invalid arg#d",param_1);
  return uVar1;
}

/* ref: FUN_00a01aa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_1);
    return uVar1;
  }
  uVar1 = F_00b9adc0(*(undefined4 *)((int)this + 8));
  return uVar1;
}

/* ref: FUN_00a01ad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_1);
  F_00b9b070(*(undefined4 *)((int)this + 8),uVar1 + 1,"referenceCount");
  uVar2 = F_00b9ab70(*(undefined4 *)((int)this + 8),0xffffffff);
  F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  F_00b9ae00(*(undefined4 *)((int)this + 8),uVar2 + 1);
  F_00b9b290(*(undefined4 *)((int)this + 8),uVar1 + 1,"referenceCount");
  F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  return uVar2 + 1;
}

/* ref: FUN_00a01b60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_1);
  F_00b9b070(*(undefined4 *)((int)this + 8),uVar1 + 1,"referenceCount");
  uVar2 = F_00b9ab70(*(undefined4 *)((int)this + 8),0xffffffff);
  F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  F_00b9ae00(*(undefined4 *)((int)this + 8),uVar2 - 1);
  F_00b9b290(*(undefined4 *)((int)this + 8),uVar1 + 1,"referenceCount");
  F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  return uVar2 - 1;
}

/* ref: FUN_00a01bf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9adc0(*(undefined4 *)((int)this + 8));
  F_00b9b290(*(undefined4 *)((int)this + 8),0xffffd8ee,param_1);
  F_00b9adc0(*(undefined4 *)((int)this + 8));
  uVar1 = F_00b9b290(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  return uVar1;
}

/* ref: FUN_00a01c40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa01c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_3);
  uVar1 = F_00b9b2f0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00a01c80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa01c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9ae00(*(undefined4 *)((int)this + 8),param_3);
  uVar1 = F_00b9b2f0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00a01cc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa01cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9af30(*(undefined4 *)((int)this + 8),param_3,0);
  uVar1 = F_00b9b2f0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00a01d00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa01d00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00b9b070(*(undefined4 *)((int)this + 8),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a01d20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined * puVar2;
  
  F_00b9b070(*(undefined4 *)((int)this + 8),param_1,"className");
  puVar2 = REFG(undefined * PTR32, 0x13333f4);
  uVar1 = F_00b9a9f0(*(undefined4 *)((int)this + 8),0xffffffff);
  if (uVar1 != 0) {
    puVar2 = (undefined *)F_00b9abf0(*(undefined4 *)((int)this + 8),0xffffffff,0);
  }
  F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  return (uint)puVar2;
}

/* ref: FUN_00a01d80 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00a01d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a940(*(undefined4 *)((int)this + 8),0xffffffff);
  if (uVar1 == 1) {
    uVar2 = F_00b9abc0(*(undefined4 *)((int)this + 8),0xffffffff);
    *(bool *)param_1 = uVar2 != 0;
  }
  F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  return uVar1 == 1;
}

/* ref: FUN_00a01dd0 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00a01dd0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa01dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  
  fVar1 = F_00b9c8e0(*(undefined4 *)(param_1 + 8),param_2);
  return (float10)fVar1;
}

/* ref: FUN_00a01df0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00a01df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  float fVar1;
  
  fVar1 = F_00b9c8e0(*(undefined4 *)((int)this + 8),param_1);
  return fVar1;
}

/* ref: FUN_00a01e10 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00a01e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  F_00b9c7a0(*(undefined4 *)((int)this + 8),param_1,1);
  uVar1 = F_00b9abc0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1 != 0;
}

/* ref: FUN_00a01e40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b9c820(*(undefined4 *)((int)this + 8),param_1,0);
  return uVar1;
}

/* ref: FUN_00a01e60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01e60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa01e60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b9ade0(*(undefined4 *)(in_ecx + 8),(double)param_2);
  return uVar1;
}

/* ref: FUN_00a01e80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01e80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(double param_2, double gen_a1))
{
  GEN_ENTER(0xa01e80u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(double param_2 = (double)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b9ade0(*(undefined4 *)(in_ecx + 8),param_2);
  return uVar1;
}

/* ref: FUN_00a01ea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b9afd0(*(undefined4 *)((int)this + 8),(uint)((char)param_1 != '\0'));
  return uVar1;
}

/* ref: FUN_00a01ec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b9ae60(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00a01ee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_1);
    return uVar1;
  }
  uVar1 = F_00b9adc0(*(undefined4 *)((int)this + 8));
  return uVar1;
}

/* ref: FUN_00a01f20 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00a01f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b9a940(*(undefined4 *)((int)this + 8),param_1);
  return 1 - (uVar1 != 0);
}

/* ref: FUN_00a01f40 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00a01f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b9a940(*(undefined4 *)((int)this + 8),param_1);
  return uVar1 == 3;
}

/* ref: FUN_00a01f60 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00a01f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b9a940(*(undefined4 *)((int)this + 8),param_1);
  return uVar1 == 4;
}

/* ref: FUN_00a01f80 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00a01f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b9a940(*(undefined4 *)((int)this + 8),param_1);
  return 1 - (uVar1 != 1);
}

/* ref: FUN_00a01fa0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00a01fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa01fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b9abc0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1 != 0;
}

/* ref: FUN_00a01fc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa01fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00b9a760(*(undefined4 *)((int)this + 8),param_2);
  return uVar1;
}

/* ref: FUN_00a01fe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a01fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa01fe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x410];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  uVar1 = F_00b9abf0(*(undefined4 *)((int)this + 8),0xffffffff,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x400,"lua error(%d): %s",param_1,uVar1);
  uVar1 = F_00b9a760(*(undefined4 *)((int)this + 8),param_2);
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a02040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a02040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa02040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,"Thread");
  uVar2 = F_00b9a940(*(undefined4 *)((int)this + 8),0xffffffff);
  if (uVar2 == 0) {
    F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
    F_00b9b150(*(undefined4 *)((int)this + 8),0,0);
    F_00b9b290(*(undefined4 *)((int)this + 8),0xffffd8f0,"Thread");
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,"Thread");
  }
  uVar2 = F_00b9a710(*(undefined4 *)((int)this + 8));
  *(uint *)(param_1 + 8) = uVar2;
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x14,&REFG(undefined, 0x10e1a80),uVar2);
  F_00b9b290(*(undefined4 *)((int)this + 8),uVar1 + 1,((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a02120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a02120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa02120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,"Thread");
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x14,&REFG(undefined, 0x10e1a8c),*(undefined4 *)(param_1 + 8));
  F_00b9adc0(*(undefined4 *)((int)this + 8));
  F_00b9b290(*(undefined4 *)((int)this + 8),uVar1 + 1,((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  *(undefined4 *)(param_1 + 8) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a021b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a021b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa021b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00b9b730(*(undefined4 *)((int)this + 8),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a021d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a021d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa021d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined1 *)((int)this + 0xc) = 0;
  uVar1 = F_00b9b730(*(undefined4 *)((int)this + 8),0,0);
  return uVar1;
}

/* ref: FUN_00a021f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a021f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa021f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b9b730(*(undefined4 *)((int)this + 8),5,param_1);
  return uVar1;
}

/* ref: FUN_00a02210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a02210(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa02210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[2] = param_2;
  *(undefined1 *)(in_ecx + 3) = 1;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10e1a9c));
  return (uint)in_ecx;
}

/* ref: FUN_00a02240 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00a02240(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa02240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10e1a94));
  return;
}

/* ref: FUN_00a02250 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a02250(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa02250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  in_ecx[2] = 0;
  *(undefined1 *)(in_ecx + 3) = 1;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10e1a9c));
  return (uint)in_ecx;
}

/* ref: FUN_00a02270 */
GEN_LIB GEN_FRAME byte GEN_STDCALL F_00a02270(unsigned int gen_a0)
{
  GEN_ENTER(0xa02270u, gen_a0, 0u, 0u, 0u);
  if (((*(int *)&gen_a0) != 1) && ((*(int *)&gen_a0) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a02290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a02290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa02290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bb91c0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00a022b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a022b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa022b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b9b720(*(undefined4 *)(in_ecx + 8));
  return uVar1;
}

/* ref: FUN_00a022c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a022c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa022c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  uVar2 = F_00b9c490(*(undefined4 *)((int)this + 8),param_1,param_2,param_3);
  if (uVar2 != 0) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
    return uVar2;
  }
  uVar2 = 0;
  if ((char)param_4 != '\0') {
    uVar2 = F_00b9b570(*(undefined4 *)((int)this + 8),0,0,0);
    if (uVar2 != 0) {
      F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
    }
  }
  return uVar2;
}

/* ref: FUN_00a02340 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a02340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa02340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x410];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  uVar2 = F_00b9c250(*(undefined4 *)((int)this + 8),param_1);
  if (uVar2 == 0) {
    if (((char)param_2 != '\0') &&
       (uVar2 = F_00b9b570(*(undefined4 *)((int)this + 8),0,0,0), uVar2 != 0)) {
      F_00a01fe0(this GEN_EDX_ARG,uVar2,uVar1);
    }
  }
  else {
    uVar3 = F_00b9abf0(*(undefined4 *)((int)this + 8),0xffffffff,0);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x400,"lua error(%d): %s",uVar2,uVar3);
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00a023f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a023f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa023f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_1);
  F_00b9b070(*(undefined4 *)((int)this + 8),uVar1 + 1,"className");
  uVar1 = F_00b9abf0(*(undefined4 *)((int)this + 8),0xffffffff,0);
  uVar1 = F_00a01b60(this GEN_EDX_ARG,uVar1);
  F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffd);
  F_00b9adc0(*(undefined4 *)((int)this + 8));
  F_00b9b290(*(undefined4 *)((int)this + 8),0xffffd8ee,param_1);
  return uVar1;
}

/* ref: FUN_00a02470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a02470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa02470u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  uint uVar2;
  
  F_00b9a610(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),((int)(*(uint *)&gen_args[2]) < 0) - 1 & (*(uint *)&gen_args[2]));
  uVar1 = F_00b9a750(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))));
  uVar2 = F_00b9b570(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(*(undefined4 *)&gen_args[1]),(*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  if (uVar2 != 0) {
    F_00b9a760(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a024d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a024d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa024d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_3;
  if (param_3 < 2) {
    uVar1 = 2;
  }
  F_00b9a610(*(undefined4 *)((int)this + 8),uVar1);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffffff,param_1);
  F_00b9a7b0(*(undefined4 *)((int)this + 8),uVar1 + 1);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  uVar2 = F_00b9b570(*(undefined4 *)((int)this + 8),1,param_3,0);
  if (uVar2 != 0) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a02570 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a02570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4), GEN_P(uint param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xa02570u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_PIN(uint param_5 = (uint)gen_a5;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_4 + 2;
  if (uVar1 <= param_5) {
    uVar1 = param_5;
  }
  F_00b9a610(*(undefined4 *)((int)this + 8),uVar1);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffffff,param_1);
  F_00b9a7b0(*(undefined4 *)((int)this + 8),uVar1 + 1);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  uVar2 = 0;
  if (param_4 != 0) {
    do {
      F_00b9ae00(*(undefined4 *)((int)this + 8),*(undefined4 *)(param_3 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_4);
  }
  uVar2 = F_00b9b570(*(undefined4 *)((int)this + 8),uVar2 + 1,param_5,0);
  if (uVar2 != 0) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a02640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a02640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xa02640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint param_5 = (uint)gen_a5;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_5;
  if (param_5 < 4) {
    uVar1 = 4;
  }
  F_00b9a610(*(undefined4 *)((int)this + 8),uVar1);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffffff,param_1);
  F_00b9a7b0(*(undefined4 *)((int)this + 8),uVar1 + 1);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  F_00b9ae00(*(undefined4 *)((int)this + 8),param_3);
  F_00b9ae00(*(undefined4 *)((int)this + 8),param_4);
  uVar2 = F_00b9b570(*(undefined4 *)((int)this + 8),3,param_5,0);
  if (uVar2 != 0) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a02700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a02700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa02700u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_4;
  if (param_4 < 3) {
    uVar1 = 3;
  }
  F_00b9a610(*(undefined4 *)((int)this + 8),uVar1);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffffff,param_1);
  F_00b9a7b0(*(undefined4 *)((int)this + 8),uVar1 + 1);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  if (param_3 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_3);
  }
  uVar2 = F_00b9b570(*(undefined4 *)((int)this + 8),2,param_4,0);
  if (uVar2 != 0) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a027d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a027d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(uint param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xa027d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(uint param_5 = (uint)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_5 + 3;
  if (uVar1 <= param_6) {
    uVar1 = param_6;
  }
  F_00b9a610(*(undefined4 *)((int)this + 8),uVar1);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffffff,param_1);
  F_00b9a7b0(*(undefined4 *)((int)this + 8),uVar1 + 1);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  if (param_3 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_3);
  }
  uVar2 = 0;
  if (param_5 != 0) {
    do {
      F_00b9ae00(*(undefined4 *)((int)this + 8),*(undefined4 *)(param_4 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_5);
  }
  uVar2 = F_00b9b570(*(undefined4 *)((int)this + 8),uVar2 + 2,param_6,0);
  if (uVar2 != 0) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a028c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a028c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa028c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  uint uVar1;
  
  uVar1 = F_00a027d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[4]),1,(*(undefined4 *)&gen_args[5]));
  return uVar1;
}

/* ref: FUN_00a028f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a028f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xa028f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = param_4;
  (*(undefined4 *)(gen_frame + 0x8)) = param_5;
  uVar1 = F_00a027d0(this GEN_EDX_FWD,param_1,param_2,param_3,&(*(undefined4 *)(gen_frame + 0x4)),2,param_6);
  return uVar1;
}

/* ref: FUN_00a02930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a02930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xa02930u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = param_4;
  (*(undefined4 *)(gen_frame + 0x10)) = param_5;
  (*(undefined4 *)(gen_frame + 0x14)) = param_6;
  uVar1 = F_00a027d0(this GEN_EDX_FWD,param_1,param_2,param_3,&(*(undefined4 *)(gen_frame + 0xc)),3,param_7);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a02990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a02990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa02990u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x8)) = param_4;
  (*(undefined4 *)(gen_frame + 0xc)) = param_5;
  (*(undefined4 *)(gen_frame + 0x10)) = param_6;
  (*(undefined4 *)(gen_frame + 0x14)) = param_7;
  uVar1 = F_00a027d0(this GEN_EDX_FWD,param_1,param_2,param_3,&(*(undefined4 *)(gen_frame + 0x8)),4,param_8);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a029f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a029f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8), GEN_P(undefined4 param_9, unsigned int gen_a9))
{
  GEN_ENTER(0xa029f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a9;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x4)) = param_4;
  (*(undefined4 *)(gen_frame + 0x8)) = param_5;
  (*(undefined4 *)(gen_frame + 0xc)) = param_6;
  (*(undefined4 *)(gen_frame + 0x10)) = param_7;
  (*(undefined4 *)(gen_frame + 0x14)) = param_8;
  uVar1 = F_00a027d0(this GEN_EDX_FWD,param_1,param_2,param_3,&(*(undefined4 *)(gen_frame + 0x4)),5,param_9);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a02a50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a02a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6), GEN_P(uint param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xa02a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  GEN_PIN(uint param_7 = (uint)gen_a7;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_6 + 4;
  if (uVar1 <= param_7) {
    uVar1 = param_7;
  }
  F_00b9a610(*(undefined4 *)((int)this + 8),uVar1);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffffff,param_1);
  F_00b9a7b0(*(undefined4 *)((int)this + 8),uVar1 + 1);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  if (param_3 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_3);
  }
  F_00b9ae00(*(undefined4 *)((int)this + 8),param_4);
  uVar2 = 0;
  if (param_6 != 0) {
    do {
      F_00b9ae00(*(undefined4 *)((int)this + 8),*(undefined4 *)(param_5 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_6);
  }
  uVar2 = F_00b9b570(*(undefined4 *)((int)this + 8),uVar2 + 3,param_7,0);
  if (uVar2 != 0) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a02b50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a02b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(uint param_7, unsigned int gen_a7), GEN_P(uint param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa02b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(uint param_7 = (uint)gen_a7;)
  GEN_PIN(uint param_8 = (uint)gen_a8;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_7 + 5;
  if (uVar1 <= param_8) {
    uVar1 = param_8;
  }
  F_00b9a610(*(undefined4 *)((int)this + 8),uVar1);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffffff,param_1);
  F_00b9a7b0(*(undefined4 *)((int)this + 8),uVar1 + 1);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  if (param_3 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_3);
  }
  F_00b9ae00(*(undefined4 *)((int)this + 8),param_4);
  F_00b9ae00(*(undefined4 *)((int)this + 8),param_5);
  uVar2 = 0;
  if (param_7 != 0) {
    uVar2 = 0;
    do {
      F_00b9ae00(*(undefined4 *)((int)this + 8),*(undefined4 *)(param_6 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_7);
  }
  uVar2 = F_00b9b570(*(undefined4 *)((int)this + 8),uVar2 + 4,param_8,0);
  if (uVar2 != 0) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a02c60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a02c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(uint param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xa02c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(uint param_5 = (uint)gen_a5;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_5;
  if (param_5 < 4) {
    uVar1 = 4;
  }
  F_00b9a610(*(undefined4 *)((int)this + 8),uVar1);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffffff,param_1);
  F_00b9a7b0(*(undefined4 *)((int)this + 8),uVar1 + 1);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  if (param_3 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_3);
  }
  if (param_4 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_4);
  }
  uVar2 = F_00b9b570(*(undefined4 *)((int)this + 8),3,param_5,0);
  if (uVar2 != 0) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a02d50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a02d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6), GEN_P(uint param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xa02d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  GEN_PIN(uint param_7 = (uint)gen_a7;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_6 + 4;
  if (uVar1 <= param_7) {
    uVar1 = param_7;
  }
  F_00b9a610(*(undefined4 *)((int)this + 8),uVar1);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffffff,param_1);
  F_00b9a7b0(*(undefined4 *)((int)this + 8),uVar1 + 1);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  if (param_3 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_3);
  }
  if (param_4 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_4);
  }
  uVar2 = 0;
  if (param_6 != 0) {
    do {
      F_00b9ae00(*(undefined4 *)((int)this + 8),*(undefined4 *)(param_5 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_6);
  }
  uVar2 = F_00b9b570(*(undefined4 *)((int)this + 8),uVar2 + 3,param_7,0);
  if (uVar2 != 0) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a02e70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a02e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa02e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  uint uVar1;
  
  uVar1 = F_00a02d50((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),&(*(undefined4 *)&gen_args[5]),1,(*(undefined4 *)&gen_args[6]));
  return uVar1;
}

/* ref: FUN_00a02ea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a02ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xa02ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(uint param_7 = (uint)gen_a7;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_7;
  if (param_7 < 6) {
    uVar1 = 6;
  }
  F_00b9a610(*(undefined4 *)((int)this + 8),uVar1);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffffff,param_1);
  F_00b9a7b0(*(undefined4 *)((int)this + 8),uVar1 + 1);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  if (param_3 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_3);
  }
  if (param_4 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_4);
  }
  F_00b9ae00(*(undefined4 *)((int)this + 8),param_5);
  F_00b9afd0(*(undefined4 *)((int)this + 8),(uint)((char)param_6 != '\0'));
  uVar2 = F_00b9b570(*(undefined4 *)((int)this + 8),5,param_7,0);
  if (uVar2 != 0) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a02fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a02fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(int param_7, unsigned int gen_a7), GEN_P(uint param_8, unsigned int gen_a8), GEN_P(uint param_9, unsigned int gen_a9))
{
  GEN_ENTER(0xa02fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(int param_7 = (int)gen_a7;)
  GEN_PIN(uint param_8 = (uint)gen_a8;)
  GEN_PIN(uint param_9 = (uint)gen_a9;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_8 + 6;
  if (uVar1 <= param_9) {
    uVar1 = param_9;
  }
  F_00b9a610(*(undefined4 *)((int)this + 8),uVar1);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffffff,param_1);
  F_00b9a7b0(*(undefined4 *)((int)this + 8),uVar1 + 1);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  if (param_3 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_3);
  }
  if (param_4 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_4);
  }
  F_00b9ae00(*(undefined4 *)((int)this + 8),param_5);
  F_00b9afd0(*(undefined4 *)((int)this + 8),(uint)((char)param_6 != '\0'));
  uVar2 = 0;
  if (param_8 != 0) {
    do {
      F_00b9ae00(*(undefined4 *)((int)this + 8),*(undefined4 *)(param_7 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_8);
  }
  uVar2 = F_00b9b570(*(undefined4 *)((int)this + 8),uVar2 + 5,param_9,0);
  if (uVar2 != 0) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a030f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a030f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(uint param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xa030f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(uint param_7 = (uint)gen_a7;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_7;
  if (param_7 < 6) {
    uVar1 = 6;
  }
  F_00b9a610(*(undefined4 *)((int)this + 8),uVar1);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffffff,param_1);
  F_00b9a7b0(*(undefined4 *)((int)this + 8),uVar1 + 1);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  if (param_3 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_3);
  }
  if (param_4 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_4);
  }
  F_00b9ae00(*(undefined4 *)((int)this + 8),param_5);
  F_00b9ae00(*(undefined4 *)((int)this + 8),param_6);
  uVar2 = F_00b9b570(*(undefined4 *)((int)this + 8),5,param_7,0);
  if (uVar2 != 0) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a03200 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a03200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(uint param_7, unsigned int gen_a7), GEN_P(uint param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xa03200u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(uint param_7 = (uint)gen_a7;)
  GEN_PIN(uint param_8 = (uint)gen_a8;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_7 + 5;
  if (uVar1 <= param_8) {
    uVar1 = param_8;
  }
  F_00b9a610(*(undefined4 *)((int)this + 8),uVar1);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffffff,param_1);
  F_00b9a7b0(*(undefined4 *)((int)this + 8),uVar1 + 1);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  if (param_3 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_3);
  }
  if (param_4 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_4);
  }
  F_00b9ae00(*(undefined4 *)((int)this + 8),param_5);
  uVar2 = 0;
  if (param_7 != 0) {
    do {
      F_00b9ae00(*(undefined4 *)((int)this + 8),*(undefined4 *)(param_6 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_7);
  }
  uVar2 = F_00b9b570(*(undefined4 *)((int)this + 8),uVar2 + 4,param_8,0);
  if (uVar2 != 0) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a03330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a03330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(int param_7, unsigned int gen_a7), GEN_P(uint param_8, unsigned int gen_a8), GEN_P(uint param_9, unsigned int gen_a9))
{
  GEN_ENTER(0xa03330u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(int param_7 = (int)gen_a7;)
  GEN_PIN(uint param_8 = (uint)gen_a8;)
  GEN_PIN(uint param_9 = (uint)gen_a9;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_8 + 6;
  if (uVar1 <= param_9) {
    uVar1 = param_9;
  }
  F_00b9a610(*(undefined4 *)((int)this + 8),uVar1);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffffff,param_1);
  F_00b9a7b0(*(undefined4 *)((int)this + 8),uVar1 + 1);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  if (param_3 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_3);
  }
  if (param_4 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_4);
  }
  F_00b9ae00(*(undefined4 *)((int)this + 8),param_5);
  F_00b9ae00(*(undefined4 *)((int)this + 8),param_6);
  uVar2 = 0;
  if (param_8 != 0) {
    do {
      F_00b9ae00(*(undefined4 *)((int)this + 8),*(undefined4 *)(param_7 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_8);
  }
  uVar2 = F_00b9b570(*(undefined4 *)((int)this + 8),uVar2 + 5,param_9,0);
  if (uVar2 != 0) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a03470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a03470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(int param_8, unsigned int gen_a8), GEN_P(uint param_9, unsigned int gen_a9), GEN_P(uint param_10, unsigned int gen_a10))
{
  GEN_ENTER(0xa03470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(int param_8 = (int)gen_a8;)
  GEN_PIN(uint param_9 = (uint)gen_a9;)
  GEN_PIN(uint param_10 = (uint)gen_a10;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_9 + 7;
  if (uVar1 <= param_10) {
    uVar1 = param_10;
  }
  F_00b9a610(*(undefined4 *)((int)this + 8),uVar1);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffffff,param_1);
  F_00b9a7b0(*(undefined4 *)((int)this + 8),uVar1 + 1);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  if (param_3 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_3);
  }
  if (param_4 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_4);
  }
  F_00b9ae00(*(undefined4 *)((int)this + 8),param_5);
  F_00b9ae00(*(undefined4 *)((int)this + 8),param_6);
  F_00b9ae00(*(undefined4 *)((int)this + 8),param_7);
  uVar2 = 0;
  if (param_9 != 0) {
    do {
      F_00b9ae00(*(undefined4 *)((int)this + 8),*(undefined4 *)(param_8 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_9);
  }
  uVar2 = F_00b9b570(*(undefined4 *)((int)this + 8),uVar2 + 6,param_10,0);
  if (uVar2 != 0) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a035b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a035b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8), GEN_P(uint param_9, unsigned int gen_a9))
{
  GEN_ENTER(0xa035b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  GEN_PIN(uint param_9 = (uint)gen_a9;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_9;
  if (param_9 < 8) {
    uVar1 = 8;
  }
  F_00b9a610(*(undefined4 *)((int)this + 8),uVar1);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffffff,param_1);
  F_00b9a7b0(*(undefined4 *)((int)this + 8),uVar1 + 1);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  if (param_3 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_3);
  }
  if (param_4 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_4);
  }
  F_00b9ae00(*(undefined4 *)((int)this + 8),param_5);
  F_00b9ae00(*(undefined4 *)((int)this + 8),param_6);
  F_00b9afd0(*(undefined4 *)((int)this + 8),(uint)((char)param_7 != '\0'));
  F_00b9afd0(*(undefined4 *)((int)this + 8),(uint)((char)param_8 != '\0'));
  uVar2 = F_00b9b570(*(undefined4 *)((int)this + 8),7,param_9,0);
  if (uVar2 != 0) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a036e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a036e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa036e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined1 *)((int)this + 0xc) = 1;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 0x10) = uVar2;
  uVar1 = F_00b9b730(*(undefined4 *)((int)this + 8),1,0);
  return uVar1;
}

/* ref: FUN_00a03710 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a03710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa03710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00b9a750(*(undefined4 *)((int)this + 8));
  uVar1 = F_00bb9700(*(undefined4 *)((int)this + 8),0);
  if ((uVar1 != 1) && (uVar1 != 0)) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a03750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a03750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xa03750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffffff,param_1);
  F_00b9a7b0(*(undefined4 *)((int)this + 8),uVar1 + 1);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_2);
  if (param_3 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_3);
  }
  if (param_4 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_4);
  }
  uVar2 = 0;
  if (param_6 != 0) {
    do {
      F_00b9ae00(*(undefined4 *)((int)this + 8),*(undefined4 *)(param_5 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_6);
  }
  uVar2 = F_00bb9700(*(undefined4 *)((int)this + 8),uVar2 + 3);
  if ((uVar2 != 1) && (uVar2 != 0)) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a03850 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a03850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa03850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9afd0(*(undefined4 *)((int)this + 8),(uint)((char)param_1 != '\0'));
  uVar2 = F_00bb9700(*(undefined4 *)((int)this + 8),1);
  if ((uVar2 != 1) && (uVar2 != 0)) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a038b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a038b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa038b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae00(*(undefined4 *)((int)this + 8),param_1);
  uVar2 = F_00bb9700(*(undefined4 *)((int)this + 8),1);
  if ((uVar2 != 1) && (uVar2 != 0)) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a03900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a03900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa03900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      F_00b9ae00(*(undefined4 *)((int)this + 8),*(undefined4 *)(param_1 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  uVar2 = F_00bb9700(*(undefined4 *)((int)this + 8),param_2);
  if ((uVar2 != 1) && (uVar2 != 0)) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a03970 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a03970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa03970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  if (param_1 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9ae60(*(undefined4 *)((int)this + 8),param_1);
  }
  uVar2 = F_00bb9700(*(undefined4 *)((int)this + 8),1);
  if ((uVar2 != 1) && (uVar2 != 0)) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a039e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a039e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa039e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  if (param_1 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9ae60(*(undefined4 *)((int)this + 8),param_1);
  }
  if (param_2 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  }
  uVar2 = F_00bb9700(*(undefined4 *)((int)this + 8),2);
  if ((uVar2 != 1) && (uVar2 != 0)) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a03a70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a03a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa03a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  if (*param_1 == 0) {
    F_00b9adc0(*(undefined4 *)((int)this + 8));
  }
  else {
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,*param_1);
  }
  uVar2 = F_00bb9700(*(undefined4 *)((int)this + 8),1);
  if ((uVar2 != 1) && (uVar2 != 0)) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a03ae0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a03ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa03ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9afd0(*(undefined4 *)((int)this + 8),(uint)((char)param_1 != '\0'));
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      F_00b9ae00(*(undefined4 *)((int)this + 8),*(undefined4 *)(param_2 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  uVar2 = F_00bb9700(*(undefined4 *)((int)this + 8),param_3 + 1);
  if ((uVar2 != 1) && (uVar2 != 0)) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a03b60 */
GEN_LIB GEN_FRAME uint F_00a03b60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa03b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x24) + 0xc))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x24) GEN_EDX_ARG,param_2,param_4,8);
  return uVar1;
}

/* ref: FUN_00a03b80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a03b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa03b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00bb8950(((code *)REFP(0xa03b60)),0);
  *(uint *)((int)this + 8) = uVar1;
  F_00bb9920(uVar1);
  F_00b9a6f0(*(undefined4 *)((int)this + 8),((code *)REFP(0xa018a0)));
  F_00b9af30(*(undefined4 *)((int)this + 8),((code *)REFP(0xa018b0)),0);
  F_00b9b290(*(undefined4 *)((int)this + 8),0xffffd8ee,"print");
  F_00b9b730(*(undefined4 *)((int)this + 8),6,100);
  F_00b9b730(*(undefined4 *)((int)this + 8),7,100);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,"debug");
  uVar2 = F_00b9a940(*(undefined4 *)((int)this + 8),uVar1 + 1);
  if (uVar2 != 0) {
    F_00b9b070(*(undefined4 *)((int)this + 8),uVar1 + 1,"traceback");
    uVar1 = F_00b9acd0(*(undefined4 *)((int)this + 8),0xffffffff);
    *(uint *)((int)this + 0x18) = uVar1;
    F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  }
  F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  uVar2 = F_00b9c490(*(undefined4 *)((int)this + 8),
                       "mt = {}\nmt.__newindex = function(t, n, v)\n    error(\"assign to undeclared variable \'\" .. n .. \"\'\", 2)\nend\nmt.__index = function(t, n)\n    error(\"variable \'\" .. n .. \"\' is not declared\", 2)\nend\nsetmetatable(_G, mt)\n"
                       ,0xd6,0);
  if (uVar2 != 0) {
    uVar1 = F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
    return uVar1;
  }
  uVar3 = F_00b9b570(*(undefined4 *)((int)this + 8),0,0,0);
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a03cb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a03cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa03cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 4);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD,param_2,param_3,param_4);
  return uVar2;
}

/* ref: Common::Lua::LuaState::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a03ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa03ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e1a94));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Common::Lua::LuaThread::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a03d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa03d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e1a94));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a03d40 */
GEN_LIB GEN_NOFRAME uint F_00a03d40(void)
{
  GEN_ENTER(0xa03d40u, 0u, 0u, 0u, 0u);
  uint uVar1;
  ulonglong uVar2;
  
  if (REFG(int, 0x14a2454) != 0) {
    REFG(int, 0x14a2454) = 0;
  }
  if (REFG(int, 0x14a2458) != 0) {
    REFG(int, 0x14a2458) = 0;
  }
  if (REFG(int, 0x14a245c) != 0) {
    REFG(int, 0x14a245c) = 0;
  }
  if (REFG(int, 0x14a2460) != 0) {
    REFG(int, 0x14a2460) = 0;
  }
  if (REFG(int, 0x14a2464) != 0) {
    REFG(int, 0x14a2464) = 0;
  }
  if (REFG(int, 0x14a2468) != 0) {
    REFG(int, 0x14a2468) = 0;
  }
  if (REFG(int, 0x14a246c) != 0) {
    REFG(int, 0x14a246c) = 0;
  }
  if (REFG(int, 0x14a2474) != 0) {
    REFG(int, 0x14a2474) = 0;
  }
  uVar1 = 0;
  if (REFG(int, 0x14a2450) != 0) {
    uVar2 = F_00406b30(REFG(int, 0x14a2450));
    uVar1 = (uint)uVar2;
    REFG(int, 0x14a2450) = 0;
  }
  return uVar1;
}

/* ref: FUN_00a03dd0 */
GEN_LIB GEN_NOFRAME uint F_00a03dd0(void)
{
  GEN_ENTER(0xa03dd0u, 0u, 0u, 0u, 0u);
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  
  iVar1 = REFG(int, 0x14a2454);
  if (0 < *(int *)(REFG(int, 0x14a2454) + 0xc00)) {
    iVar2 = *(int *)(REFG(int, 0x14a2454) + 0xc00) - 1;
    *(int *)(REFG(int, 0x14a2454) + 0xc00) = iVar2;
    pvVar4 = *(undefined * PTR32 *)(iVar1 + 0x800 + iVar2 * 4);
    if (pvVar4 != (undefined *)0x0) {
      uVar3 = F_00b63940(pvVar4 GEN_EDX_ARG);
      return uVar3;
    }
  }
  pvVar4 = (undefined *)F_00406b90(8,0,0);
  if (pvVar4 != (undefined *)0x0) {
    uVar3 = F_00b63940(pvVar4 GEN_EDX_ARG);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00a03e20 */
GEN_LIB GEN_NOFRAME uint F_00a03e20(void)
{
  GEN_ENTER(0xa03e20u, 0u, 0u, 0u, 0u);
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = REFG(int, 0x14a2458);
  if (0 < *(int *)(REFG(int, 0x14a2458) + 0x2000)) {
    iVar2 = *(int *)(REFG(int, 0x14a2458) + 0x2000) - 1;
    *(int *)(REFG(int, 0x14a2458) + 0x2000) = iVar2;
    iVar1 = *(int *)(iVar1 + 0x1c00 + iVar2 * 4);
    if (iVar1 != 0) {
      uVar3 = F_00bb9b60(iVar1 GEN_EDX_ARG);
      return uVar3;
    }
  }
  uVar3 = F_00406b90(0x1c,0,0);
  if (uVar3 != 0) {
    uVar3 = F_00bb9b60(uVar3 GEN_EDX_ARG);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00a03e70 */
GEN_LIB GEN_FRAME uint F_00a03e70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa03e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  
  iVar1 = REFG(int, 0x14a245c);
  if (0 < *(int *)(REFG(int, 0x14a245c) + 0x4400)) {
    iVar2 = *(int *)(REFG(int, 0x14a245c) + 0x4400) - 1;
    *(int *)(REFG(int, 0x14a245c) + 0x4400) = iVar2;
    pvVar4 = *(undefined * PTR32 *)(iVar1 + 0x4000 + iVar2 * 4);
    if (pvVar4 != (undefined *)0x0) {
      uVar3 = F_00bba570(pvVar4 GEN_EDX_ARG,param_1);
      return uVar3;
    }
  }
  pvVar4 = (undefined *)F_00406b90(0x40,0,0);
  if (pvVar4 != (undefined *)0x0) {
    uVar3 = F_00bba570(pvVar4 GEN_EDX_ARG,param_1);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00a03ed0 */
GEN_LIB GEN_NOFRAME uint F_00a03ed0(void)
{
  GEN_ENTER(0xa03ed0u, 0u, 0u, 0u, 0u);
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = REFG(int, 0x14a2460);
  if (0 < *(int *)(REFG(int, 0x14a2460) + 0x400)) {
    iVar2 = *(int *)(REFG(int, 0x14a2460) + 0x400) - 1;
    *(int *)(REFG(int, 0x14a2460) + 0x400) = iVar2;
    iVar1 = *(int *)(iVar1 + 0x300 + iVar2 * 4);
    if (iVar1 != 0) {
      uVar3 = F_00bbab90(iVar1 GEN_EDX_ARG);
      return uVar3;
    }
  }
  uVar3 = F_00406b90(0xc,0,0);
  if (uVar3 != 0) {
    uVar3 = F_00bbab90(uVar3 GEN_EDX_ARG);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00a03f20 */
GEN_LIB GEN_NOFRAME uint F_00a03f20(void)
{
  GEN_ENTER(0xa03f20u, 0u, 0u, 0u, 0u);
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  
  iVar1 = REFG(int, 0x14a2464);
  if (0 < *(int *)(REFG(int, 0x14a2464) + 0x800)) {
    iVar2 = *(int *)(REFG(int, 0x14a2464) + 0x800) - 1;
    *(int *)(REFG(int, 0x14a2464) + 0x800) = iVar2;
    pvVar4 = *(undefined * PTR32 *)(iVar1 + 0x600 + iVar2 * 4);
    if (pvVar4 != (undefined *)0x0) {
      uVar3 = F_00a0c590(pvVar4 GEN_EDX_ARG);
      return uVar3;
    }
  }
  pvVar4 = (undefined *)F_00406b90(0xc,0,0);
  if (pvVar4 != (undefined *)0x0) {
    uVar3 = F_00a0c590(pvVar4 GEN_EDX_ARG);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00a03f70 */
GEN_LIB GEN_NOFRAME uint F_00a03f70(void)
{
  GEN_ENTER(0xa03f70u, 0u, 0u, 0u, 0u);
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  
  iVar1 = REFG(int, 0x14a2468);
  if (0 < *(int *)(REFG(int, 0x14a2468) + 0x800)) {
    iVar2 = *(int *)(REFG(int, 0x14a2468) + 0x800) - 1;
    *(int *)(REFG(int, 0x14a2468) + 0x800) = iVar2;
    pvVar4 = *(undefined * PTR32 *)(iVar1 + 0x600 + iVar2 * 4);
    if (pvVar4 != (undefined *)0x0) {
      uVar3 = F_00a0b8f0(pvVar4 GEN_EDX_ARG);
      return uVar3;
    }
  }
  pvVar4 = (undefined *)F_00406b90(0xc,0,0);
  if (pvVar4 != (undefined *)0x0) {
    uVar3 = F_00a0b8f0(pvVar4 GEN_EDX_ARG);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00a03fc0 */
GEN_LIB GEN_FRAME uint F_00a03fc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa03fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * this;
  
  iVar1 = REFG(int, 0x14a246c);
  if (0 < *(int *)(REFG(int, 0x14a246c) + 0x380)) {
    iVar2 = *(int *)(REFG(int, 0x14a246c) + 0x380) - 1;
    *(int *)(REFG(int, 0x14a246c) + 0x380) = iVar2;
    this = *(undefined * PTR32 *)(iVar1 + 0x300 + iVar2 * 4);
    if (this != (undefined *)0x0) goto LAB_00a03fe5;
  }
  this = (undefined *)F_00406b90(0x18,0,0);
  if (this == (undefined *)0x0) {
    return 0;
  }
LAB_00a03fe5: ;
  uVar3 = F_00a0b3f0(this GEN_EDX_ARG,param_1,param_2);
  return uVar3;
}

/* ref: FUN_00a04010 */
GEN_LIB GEN_FRAME uint F_00a04010(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa04010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  
  iVar1 = REFG(int, 0x14a2470);
  if (0 < *(int *)(REFG(int, 0x14a2470) + 0x1000)) {
    iVar2 = *(int *)(REFG(int, 0x14a2470) + 0x1000) - 1;
    *(int *)(REFG(int, 0x14a2470) + 0x1000) = iVar2;
    pvVar4 = *(undefined * PTR32 *)(iVar1 + 0xe00 + iVar2 * 4);
    if (pvVar4 != (undefined *)0x0) {
      uVar3 = F_00a052d0(pvVar4 GEN_EDX_ARG,param_1);
      return uVar3;
    }
  }
  pvVar4 = (undefined *)F_00406b90(0x1c,0,0);
  if (pvVar4 != (undefined *)0x0) {
    uVar3 = F_00a052d0(pvVar4 GEN_EDX_ARG,param_1);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00a04070 */
GEN_LIB GEN_NOFRAME uint F_00a04070(void)
{
  GEN_ENTER(0xa04070u, 0u, 0u, 0u, 0u);
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = REFG(int, 0x14a2474);
  if (0 < *(int *)(REFG(int, 0x14a2474) + 0x240)) {
    iVar2 = *(int *)(REFG(int, 0x14a2474) + 0x240) - 1;
    *(int *)(REFG(int, 0x14a2474) + 0x240) = iVar2;
    iVar1 = *(int *)(iVar1 + 0x200 + iVar2 * 4);
    if (iVar1 != 0) {
      uVar3 = F_00bb99c0(iVar1 GEN_EDX_ARG);
      return uVar3;
    }
  }
  uVar3 = F_00406b90(0x20,0,0);
  if (uVar3 != 0) {
    uVar3 = F_00bb99c0(uVar3 GEN_EDX_ARG);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00a040c0 */
GEN_LIB GEN_NOFRAME uint F_00a040c0(void)
{
  GEN_ENTER(0xa040c0u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  uint uVar2;
  undefined * pvVar3;
  
  pvVar1 = (undefined *)F_00406bb0(0x99e4,0,0);
  REFG(void * PTR32, 0x14a2450) = pvVar1;
  if (pvVar1 == (undefined *)0x0) {
    REFG(void * PTR32, 0x14a2454) = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = F_00a048b0(pvVar1 GEN_EDX_ARG);
    REFG(void * PTR32, 0x14a2454) = pvVar1;
  }
  pvVar3 = (undefined *)((int)pvVar1 + 0xc04);
  if (pvVar3 == (undefined *)0x0) {
    REFG(void * PTR32, 0x14a2458) = (undefined *)0x0;
  }
  else {
    uVar2 = F_00a048f0(pvVar3 GEN_EDX_ARG);
    REFG(void * PTR32, 0x14a2458) = pvVar3;
  }
  pvVar3 = (undefined *)((int)pvVar1 + 0x2c08);
  if (pvVar3 == (undefined *)0x0) {
    REFG(void * PTR32, 0x14a245c) = (undefined *)0x0;
  }
  else {
    uVar2 = F_00a04940(pvVar3 GEN_EDX_ARG);
    REFG(void * PTR32, 0x14a245c) = pvVar3;
  }
  pvVar3 = (undefined *)((int)pvVar1 + 0x700c);
  if (pvVar3 == (undefined *)0x0) {
    REFG(void * PTR32, 0x14a2460) = (undefined *)0x0;
  }
  else {
    uVar2 = F_00a04980(pvVar3 GEN_EDX_ARG);
    REFG(void * PTR32, 0x14a2460) = pvVar3;
  }
  pvVar3 = (undefined *)((int)pvVar1 + 0x7410);
  if (pvVar3 == (undefined *)0x0) {
    REFG(void * PTR32, 0x14a2464) = (undefined *)0x0;
  }
  else {
    uVar2 = F_00a049c0(pvVar3 GEN_EDX_ARG);
    REFG(void * PTR32, 0x14a2464) = pvVar3;
  }
  pvVar3 = (undefined *)((int)pvVar1 + 0x7c14);
  if (pvVar3 == (undefined *)0x0) {
    REFG(void * PTR32, 0x14a2468) = (undefined *)0x0;
  }
  else {
    uVar2 = F_00a04a00(pvVar3 GEN_EDX_ARG);
    REFG(void * PTR32, 0x14a2468) = pvVar3;
  }
  pvVar3 = (undefined *)((int)pvVar1 + 0x8418);
  if (pvVar3 == (undefined *)0x0) {
    REFG(void * PTR32, 0x14a246c) = (undefined *)0x0;
  }
  else {
    uVar2 = F_00a04a40(pvVar3 GEN_EDX_ARG);
    REFG(void * PTR32, 0x14a246c) = pvVar3;
  }
  pvVar3 = (undefined *)((int)pvVar1 + 0x879c);
  if (pvVar3 == (undefined *)0x0) {
    REFG(void * PTR32, 0x14a2470) = (undefined *)0x0;
  }
  else {
    uVar2 = F_00a04a80(pvVar3 GEN_EDX_ARG);
    REFG(void * PTR32, 0x14a2470) = pvVar3;
  }
  pvVar1 = (undefined *)((int)pvVar1 + 0x97a0);
  if (pvVar1 != (undefined *)0x0) {
    uVar2 = F_00a04ad0(pvVar1 GEN_EDX_ARG);
    REFG(void * PTR32, 0x14a2474) = pvVar1;
    return uVar2;
  }
  REFG(void * PTR32, 0x14a2474) = (undefined *)0x0;
  return uVar2;
}

/* ref: FUN_00a041f0 */
GEN_LIB GEN_FRAME uint F_00a041f0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa041f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = REFG(undefined4 * PTR32, 0x14a2454);
  if ((param_1 < REFG(undefined4 * PTR32, 0x14a2454)) || (puVar2 = REFG(undefined4 * PTR32, 0x14a2454) + 0x200, puVar2 <= param_1)) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,1)));
    }
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0)));
    puVar1 = REFG(undefined4 * PTR32, 0x14a2454);
    if (REFG(undefined4 * PTR32, 0x14a2454) <= param_1) {
      puVar2 = REFG(undefined4 * PTR32, 0x14a2454) + 0x200;
      if (param_1 < puVar2) {
        REFG(undefined4 * PTR32, 0x14a2454)[REFG(undefined4 * PTR32, 0x14a2454)[0x300] + 0x200] = param_1;
        puVar1[0x300] = puVar1[0x300] + 1;
        return (uint)puVar2;
      }
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00a04250 */
GEN_LIB GEN_FRAME uint F_00a04250(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa04250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = REFG(undefined4 * PTR32, 0x14a2458);
  if ((param_1 < REFG(undefined4 * PTR32, 0x14a2458)) || (puVar2 = REFG(undefined4 * PTR32, 0x14a2458) + 0x700, puVar2 <= param_1)) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,1)));
    }
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0)));
    puVar1 = REFG(undefined4 * PTR32, 0x14a2458);
    if (REFG(undefined4 * PTR32, 0x14a2458) <= param_1) {
      puVar2 = REFG(undefined4 * PTR32, 0x14a2458) + 0x700;
      if (param_1 < puVar2) {
        REFG(undefined4 * PTR32, 0x14a2458)[REFG(undefined4 * PTR32, 0x14a2458)[0x800] + 0x700] = param_1;
        puVar1[0x800] = puVar1[0x800] + 1;
        return (uint)puVar2;
      }
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00a042b0 */
GEN_LIB GEN_FRAME uint F_00a042b0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa042b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = REFG(undefined4 * PTR32, 0x14a245c);
  if ((param_1 < REFG(undefined4 * PTR32, 0x14a245c)) || (puVar2 = REFG(undefined4 * PTR32, 0x14a245c) + 0x1000, puVar2 <= param_1)) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,1)));
    }
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0)));
    puVar1 = REFG(undefined4 * PTR32, 0x14a245c);
    if (REFG(undefined4 * PTR32, 0x14a245c) <= param_1) {
      puVar2 = REFG(undefined4 * PTR32, 0x14a245c) + 0x1000;
      if (param_1 < puVar2) {
        REFG(undefined4 * PTR32, 0x14a245c)[REFG(undefined4 * PTR32, 0x14a245c)[0x1100] + 0x1000] = param_1;
        puVar1[0x1100] = puVar1[0x1100] + 1;
        return (uint)puVar2;
      }
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00a04310 */
GEN_LIB GEN_FRAME uint F_00a04310(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa04310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = REFG(undefined4 * PTR32, 0x14a2460);
  if ((param_1 < REFG(undefined4 * PTR32, 0x14a2460)) || (puVar2 = REFG(undefined4 * PTR32, 0x14a2460) + 0xc0, puVar2 <= param_1)) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,1)));
    }
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0)));
    puVar1 = REFG(undefined4 * PTR32, 0x14a2460);
    if (REFG(undefined4 * PTR32, 0x14a2460) <= param_1) {
      puVar2 = REFG(undefined4 * PTR32, 0x14a2460) + 0xc0;
      if (param_1 < puVar2) {
        REFG(undefined4 * PTR32, 0x14a2460)[REFG(undefined4 * PTR32, 0x14a2460)[0x100] + 0xc0] = param_1;
        puVar1[0x100] = puVar1[0x100] + 1;
        return (uint)puVar2;
      }
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00a04370 */
GEN_LIB GEN_FRAME uint F_00a04370(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa04370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG);
    if (uVar1 == 0) {
      in_EAX = F_00a04250(param_1);
    }
    else {
      if (uVar1 == 1) {
        uVar1 = F_00a042b0(param_1);
        return uVar1;
      }
      in_EAX = uVar1 - 2;
      if (in_EAX == 0) {
        uVar1 = F_00a04310(param_1);
        return uVar1;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00a043c0 */
GEN_LIB GEN_FRAME uint F_00a043c0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa043c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = REFG(undefined4 * PTR32, 0x14a2464);
  if ((param_1 < REFG(undefined4 * PTR32, 0x14a2464)) || (puVar2 = REFG(undefined4 * PTR32, 0x14a2464) + 0x180, puVar2 <= param_1)) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,1)));
    }
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0)));
    puVar1 = REFG(undefined4 * PTR32, 0x14a2464);
    if (REFG(undefined4 * PTR32, 0x14a2464) <= param_1) {
      puVar2 = REFG(undefined4 * PTR32, 0x14a2464) + 0x180;
      if (param_1 < puVar2) {
        REFG(undefined4 * PTR32, 0x14a2464)[REFG(undefined4 * PTR32, 0x14a2464)[0x200] + 0x180] = param_1;
        puVar1[0x200] = puVar1[0x200] + 1;
        return (uint)puVar2;
      }
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00a04420 */
GEN_LIB GEN_FRAME uint F_00a04420(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa04420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = REFG(undefined4 * PTR32, 0x14a2468);
  if ((param_1 < REFG(undefined4 * PTR32, 0x14a2468)) || (puVar2 = REFG(undefined4 * PTR32, 0x14a2468) + 0x180, puVar2 <= param_1)) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,1)));
    }
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0)));
    puVar1 = REFG(undefined4 * PTR32, 0x14a2468);
    if (REFG(undefined4 * PTR32, 0x14a2468) <= param_1) {
      puVar2 = REFG(undefined4 * PTR32, 0x14a2468) + 0x180;
      if (param_1 < puVar2) {
        REFG(undefined4 * PTR32, 0x14a2468)[REFG(undefined4 * PTR32, 0x14a2468)[0x200] + 0x180] = param_1;
        puVar1[0x200] = puVar1[0x200] + 1;
        return (uint)puVar2;
      }
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00a04480 */
GEN_LIB GEN_FRAME uint F_00a04480(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa04480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = REFG(undefined4 * PTR32, 0x14a246c);
  if ((param_1 < REFG(undefined4 * PTR32, 0x14a246c)) || (puVar2 = REFG(undefined4 * PTR32, 0x14a246c) + 0xc0, puVar2 <= param_1)) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,1)));
    }
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0)));
    puVar1 = REFG(undefined4 * PTR32, 0x14a246c);
    if (REFG(undefined4 * PTR32, 0x14a246c) <= param_1) {
      puVar2 = REFG(undefined4 * PTR32, 0x14a246c) + 0xc0;
      if (param_1 < puVar2) {
        REFG(undefined4 * PTR32, 0x14a246c)[REFG(undefined4 * PTR32, 0x14a246c)[0xe0] + 0xc0] = param_1;
        puVar1[0xe0] = puVar1[0xe0] + 1;
        return (uint)puVar2;
      }
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00a044e0 */
GEN_LIB GEN_FRAME uint F_00a044e0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa044e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = REFG(undefined4 * PTR32, 0x14a2470);
  if ((param_1 < REFG(undefined4 * PTR32, 0x14a2470)) || (puVar2 = REFG(undefined4 * PTR32, 0x14a2470) + 0x380, puVar2 <= param_1)) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,1)));
    }
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0)));
    puVar1 = REFG(undefined4 * PTR32, 0x14a2470);
    if (REFG(undefined4 * PTR32, 0x14a2470) <= param_1) {
      puVar2 = REFG(undefined4 * PTR32, 0x14a2470) + 0x380;
      if (param_1 < puVar2) {
        REFG(undefined4 * PTR32, 0x14a2470)[REFG(undefined4 * PTR32, 0x14a2470)[0x400] + 0x380] = param_1;
        puVar1[0x400] = puVar1[0x400] + 1;
        return (uint)puVar2;
      }
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00a04540 */
GEN_LIB GEN_FRAME uint F_00a04540(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa04540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined * pvVar2;
  
  pvVar2 = REFG(void * PTR32, 0x14a2474);
  if ((param_1 < REFG(void * PTR32, 0x14a2474)) || (pvVar2 = ((undefined *)GEN_TOP(((int)REFG(void * PTR32, 0x14a2474) + 0x200))), pvVar2 <= param_1))
  {
    if (param_1 != (undefined *)0x0) {
      F_00bb99d0(param_1 GEN_EDX_ARG);
      pvVar2 = (undefined *)F_00406ad0(param_1);
    }
  }
  else {
    pvVar2 = (undefined *)F_00bb99d0(param_1 GEN_EDX_ARG);
    pvVar1 = REFG(void * PTR32, 0x14a2474);
    if (REFG(void * PTR32, 0x14a2474) <= param_1) {
      pvVar2 = ((undefined *)GEN_TOP(((int)REFG(void * PTR32, 0x14a2474) + 0x200)));
      if (param_1 < pvVar2) {
        *((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x14a2474) + *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x14a2474) + 0x240))) * 4 + 0x200))) = param_1;
        *(int *)((int)pvVar1 + 0x240U) = *(int *)((int)pvVar1 + 0x240U) + 1;
        return (uint)pvVar2;
      }
    }
  }
  return (uint)pvVar2;
}

/* ref: FUN_00a045b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a045b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa045b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  F_00bb99d0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a04600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a04600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa04600u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx <= (*(uint *)&gen_a1)) && ((*(uint *)&gen_a1) < in_ecx + 0x800)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a04650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a04650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa04650u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx <= (*(uint *)&gen_a1)) && ((*(uint *)&gen_a1) < in_ecx + 0x1c00)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a046a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a046a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa046a0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx <= (*(uint *)&gen_a1)) && ((*(uint *)&gen_a1) < in_ecx + 0x4000)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a046f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a046f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa046f0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx <= (*(uint *)&gen_a1)) && ((*(uint *)&gen_a1) < in_ecx + 0x300)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a04740 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a04740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa04740u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx <= (*(uint *)&gen_a1)) && ((*(uint *)&gen_a1) < in_ecx + 0x600)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a04790 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a04790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa04790u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx <= (*(uint *)&gen_a1)) && ((*(uint *)&gen_a1) < in_ecx + 0x600)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a047e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a047e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa047e0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx <= (*(uint *)&gen_a1)) && ((*(uint *)&gen_a1) < in_ecx + 0x300)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a04830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a04830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa04830u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx <= (*(uint *)&gen_a1)) && ((*(uint *)&gen_a1) < in_ecx + 0xe00)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a04880 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a04880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa04880u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx <= (*(uint *)&gen_a1)) && ((*(uint *)&gen_a1) < in_ecx + 0x200)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a048b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a048b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa048b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined4 *)((int)this + 0xc00) = 0;
  do {
    uVar1 = *(uint *)((int)this + 0xc00);
    *(undefined * PTR32 *)((int)this + uVar1 * 4 + 0x800) = ((undefined *)GEN_TOP(((int)this + (0xff - uVar1) * 8)));
    *(int *)((int)this + 0xc00) = *(int *)((int)this + 0xc00) + 1;
  } while (*(int *)((int)this + 0xc00) < 0x100);
  return uVar1;
}

/* ref: FUN_00a048f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a048f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa048f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  
  *(undefined4 *)((int)this + 0x2000) = 0;
  do {
    pvVar1 = ((undefined *)GEN_TOP(((int)this + (0xff - *(int *)((int)this + 0x2000)) * 0x1c)));
    *((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2000) * 4 + 0x1c00))) = pvVar1;
    *(int *)((int)this + 0x2000) = *(int *)((int)this + 0x2000) + 1;
  } while (*(int *)((int)this + 0x2000) < 0x100);
  return (uint)pvVar1;
}

/* ref: FUN_00a04940 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a04940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa04940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x4400) = 0;
  do {
    uVar1 = *(uint *)((int)this + 0x4400);
    *(undefined * PTR32 *)((int)this + uVar1 * 4 + 0x4000) = ((undefined *)GEN_TOP(((0xff - uVar1) * 0x40 + (int)this)));
    *(int *)((int)this + 0x4400) = *(int *)((int)this + 0x4400) + 1;
  } while (*(int *)((int)this + 0x4400) < 0x100);
  return uVar1;
}

/* ref: FUN_00a04980 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a04980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa04980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  
  *(undefined4 *)((int)this + 0x400) = 0;
  do {
    pvVar1 = ((undefined *)GEN_TOP(((int)this + (0x3f - *(int *)((int)this + 0x400)) * 0xc)));
    *((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x400) * 4 + 0x300))) = pvVar1;
    *(int *)((int)this + 0x400) = *(int *)((int)this + 0x400) + 1;
  } while (*(int *)((int)this + 0x400) < 0x40);
  return (uint)pvVar1;
}

/* ref: FUN_00a049c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a049c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa049c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  
  *(undefined4 *)((int)this + 0x800) = 0;
  do {
    pvVar1 = ((undefined *)GEN_TOP(((int)this + (0x7f - *(int *)((int)this + 0x800)) * 0xc)));
    *((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x800) * 4 + 0x600))) = pvVar1;
    *(int *)((int)this + 0x800) = *(int *)((int)this + 0x800) + 1;
  } while (*(int *)((int)this + 0x800) < 0x80);
  return (uint)pvVar1;
}

/* ref: FUN_00a04a00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a04a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa04a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  
  *(undefined4 *)((int)this + 0x800) = 0;
  do {
    pvVar1 = ((undefined *)GEN_TOP(((int)this + (0x7f - *(int *)((int)this + 0x800)) * 0xc)));
    *((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x800) * 4 + 0x600))) = pvVar1;
    *(int *)((int)this + 0x800) = *(int *)((int)this + 0x800) + 1;
  } while (*(int *)((int)this + 0x800) < 0x80);
  return (uint)pvVar1;
}

/* ref: FUN_00a04a40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a04a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa04a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  
  *(undefined4 *)((int)this + 0x380) = 0;
  do {
    pvVar1 = ((undefined *)GEN_TOP(((int)this + (0x1f - *(int *)((int)this + 0x380)) * 0x18)));
    *((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x380) * 4 + 0x300))) = pvVar1;
    *(int *)((int)this + 0x380) = *(int *)((int)this + 0x380) + 1;
  } while (*(int *)((int)this + 0x380) < 0x20);
  return (uint)pvVar1;
}

/* ref: FUN_00a04a80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a04a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa04a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  
  *(undefined4 *)((int)this + 0x1000) = 0;
  do {
    pvVar1 = ((undefined *)GEN_TOP(((int)this + (0x7f - *(int *)((int)this + 0x1000)) * 0x1c)));
    *((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x1000) * 4 + 0xe00))) = pvVar1;
    *(int *)((int)this + 0x1000) = *(int *)((int)this + 0x1000) + 1;
  } while (*(int *)((int)this + 0x1000) < 0x80);
  return (uint)pvVar1;
}

/* ref: FUN_00a04ad0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a04ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa04ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x240) = 0;
  do {
    uVar1 = *(uint *)((int)this + 0x240);
    *(undefined * PTR32 *)((int)this + uVar1 * 4 + 0x200) = ((undefined *)GEN_TOP(((0xf - uVar1) * 0x20 + (int)this)));
    *(int *)((int)this + 0x240) = *(int *)((int)this + 0x240) + 1;
  } while (*(int *)((int)this + 0x240) < 0x10);
  return uVar1;
}

/* ref: FUN_00a04b10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a04b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa04b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a048b0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a04b20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a04b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa04b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if ((this <= param_1) && (param_1 < (undefined *)((int)this + 0x800U))) {
    *((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0xc00) * 4 + 0x800))) = param_1;
    *(int *)((int)this + 0xc00) = *(int *)((int)this + 0xc00) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a04b50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a04b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa04b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a048f0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a04b60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a04b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa04b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if ((this <= param_1) && (param_1 < (undefined *)((int)this + 0x1c00U))) {
    *((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2000) * 4 + 0x1c00))) = param_1;
    *(int *)((int)this + 0x2000) = *(int *)((int)this + 0x2000) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a04b90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a04b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa04b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a04940(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a04ba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a04ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa04ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if ((this <= param_1) && (param_1 < (undefined *)((int)this + 0x4000U))) {
    *((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x4400) * 4 + 0x4000))) = param_1;
    *(int *)((int)this + 0x4400) = *(int *)((int)this + 0x4400) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a04bd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a04bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa04bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a04980(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a04be0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a04be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa04be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if ((this <= param_1) && (param_1 < (undefined *)((int)this + 0x300U))) {
    *((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x400) * 4 + 0x300))) = param_1;
    *(int *)((int)this + 0x400) = *(int *)((int)this + 0x400) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a04c10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a04c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa04c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a049c0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a04c20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a04c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa04c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if ((this <= param_1) && (param_1 < (undefined *)((int)this + 0x600U))) {
    *((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x800) * 4 + 0x600))) = param_1;
    *(int *)((int)this + 0x800) = *(int *)((int)this + 0x800) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a04c50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a04c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa04c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a04a00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a04c60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a04c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa04c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if ((this <= param_1) && (param_1 < (undefined *)((int)this + 0x600U))) {
    *((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x800) * 4 + 0x600))) = param_1;
    *(int *)((int)this + 0x800) = *(int *)((int)this + 0x800) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a04c90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a04c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa04c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a04a40(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a04ca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a04ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa04ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if ((this <= param_1) && (param_1 < (undefined *)((int)this + 0x300U))) {
    *((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x380) * 4 + 0x300))) = param_1;
    *(int *)((int)this + 0x380) = *(int *)((int)this + 0x380) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a04cd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a04cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa04cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a04a80(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a04ce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a04ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa04ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if ((this <= param_1) && (param_1 < (undefined *)((int)this + 0xe00U))) {
    *((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x1000) * 4 + 0xe00))) = param_1;
    *(int *)((int)this + 0x1000) = *(int *)((int)this + 0x1000) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a04d10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a04d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa04d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a04ad0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a04d20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a04d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa04d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if ((this <= param_1) && (param_1 < (undefined *)((int)this + 0x200U))) {
    *((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x240) * 4 + 0x200))) = param_1;
    *(int *)((int)this + 0x240) = *(int *)((int)this + 0x240) + 1;
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::IHumanListener::vf1 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00a04d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa04d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::Graphics::Scene::IHumanListener::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00a04d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa04d70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::Graphics::Scene::IHumanListener::vf3 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00a04d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa04d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::Graphics::Scene::IHumanListener::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a04d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa04d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10e1b40));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a04dc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a04dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa04dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(ushort *)((int)this + 8) = *(ushort *)((int)this + 8) | 1 << ((byte)param_1 & 0x1f);
  return (uint)this;
}

/* ref: FUN_00a04de0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a04de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa04de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(ushort *)((int)this + 8) = *(ushort *)((int)this + 8) & ~(1 << ((byte)param_1 & 0x1f));
  return (uint)this;
}

/* ref: FUN_00a04e00 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00a04e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa04e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return (1 << ((byte)param_1 & 0x1f) & (uint)*(ushort *)((int)this + 8)) != 0;
}

/* ref: FUN_00a04e40 */
GEN_LIB GEN_FRAME uint F_00a04e40(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa04e40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(param_1,param_3,param_2 - (int)param_1);
  return (uint)pvVar1;
}

/* ref: FUN_00a04e60 */
GEN_LIB GEN_FRAME float10 F_00a04e60(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xa04e60u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00a04e80 */
GEN_LIB GEN_NOFRAME byte F_00a04e80(void)
{
  GEN_ENTER(0xa04e80u, 0u, 0u, 0u, 0u);
  byte bVar1;
  
  bVar1 = F_0052ef30(REFG(void * PTR32, 0x1375b00) GEN_EDX_ARG);
  REFG(undefined1, 0x14a247c) = bVar1;
  return bVar1;
}

/* ref: FUN_00a04ea0 */
GEN_LIB GEN_FRAME uint F_00a04ea0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa04ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00a044e0(param_1);
  }
  return uVar1;
}

/* ref: FUN_00a04ec0 */
GEN_LIB GEN_FRAME byte F_00a04ec0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa04ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  (&REFG(undefined1, 0x14a2478))[(int)(param_1)] = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a04ee0 */
GEN_LIB GEN_FRAME uint F_00a04ee0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa04ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a062f0(param_2);
  if (uVar1 != 0) {
    return (int)*(char *)((char)(&REFG(undefined1, 0x14a2478))[(int)(param_1)] + 0x38 + uVar1);
  }
  return 0;
}

/* ref: FUN_00a04f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a04f10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa04f10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  int iVar4;
  
  pcVar2 = (char *)F_00a09e30(param_2);
  pcVar3 = (char *)0x0;
  if (pcVar2 != (char *)0x0) {
    cVar1 = *pcVar2;
    if (cVar1 < '\0') {
      pcVar3 = (char *)(in_ecx + 10);
      iVar4 = 0xf;
      do {
        *pcVar3 = *pcVar3 + '\x01';
        pcVar3 = pcVar3 + 1;
        iVar4 = iVar4 - 1;
      } while (iVar4 != 0);
    }
    else {
      if (-1 < cVar1) {
        pcVar3 = (char *)(cVar1 + 10 + in_ecx);
        *pcVar3 = *pcVar3 + '\x01';
      }
      pcVar3 = (char *)(int)pcVar2[1];
      if (-1 < (int)pcVar3) {
        pcVar3[in_ecx + 10] = pcVar3[in_ecx + 10] + '\x01';
      }
    }
    if ((char)param_3 == '\0') {
      *(byte *)(in_ecx + 0x19) = *(byte *)(in_ecx + 0x19) | 2;
    }
  }
  return (uint)pcVar3;
}

/* ref: Client::System::Animation::BonePhysicsController::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a04f70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa04f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *(ushort *)(in_ecx + 8) = *(ushort *)(in_ecx + 8) | 0x800;
  return 0x800;
}

/* ref: FUN_00a04f80 */
GEN_LIB GEN_FRAME uint F_00a04f80(void)
{
  GEN_ENTER(0xa04f80u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 uVar1;
  undefined * this;
  uint uVar2;
  int iVar3;
  
  ((uint *)(gen_frame + 0x8))[4] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  this = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x10);
  ((uint *)(gen_frame + 0x8))[0] = 0x39;
  ((uint *)(gen_frame + 0x8))[1] = 0x3a;
  ((uint *)(gen_frame + 0x8))[2] = 0x3b;
  ((uint *)(gen_frame + 0x8))[3] = 0x3c;
  F_00415250(this GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13334f4));
  iVar3 = 0;
  do {
    uVar2 = F_00414500(this GEN_EDX_ARG,((uint *)(gen_frame + 0x8))[(int)(iVar3)]);
    uVar1 = (&REFG(undefined, 0x10e1b24))[(int)(*(int *)(uVar2 + 0x14) * 4)];
    (&REFG(undefined1, 0x14a2478))[(int)(iVar3)] = uVar1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  F_00c47745(((uint *)(gen_frame + 0x8))[4] ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return CONCAT31((int3)(uVar2 >> 8),uVar1);
}

/* ref: FUN_00a05000 */
GEN_LIB GEN_NOFRAME uint F_00a05000(void)
{
  GEN_ENTER(0xa05000u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00414620(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13334f4));
  return uVar1;
}

/* ref: FUN_00a05020 */
GEN_LIB GEN_FRAME uint F_00a05020(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa05020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = F_00bbafd0(param_1 GEN_EDX_ARG);
    if ((uVar1 != 0) && (*(int *)(uVar1 + 0xe4) != 0)) {
      uVar1 = F_00a04010(param_2);
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00a05080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a05080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa05080u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined * PTR32 * ppvVar2;
  int iVar3;
  undefined * PTR32 * ppvVar4;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ppvVar2 = (undefined * PTR32 *)F_00a09e30((*(int *)&gen_args[1]));
  if (ppvVar2 != (undefined * PTR32 *)0x0) {
    cVar1 = *(char *)ppvVar2;
    if (cVar1 < '\0') {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      ppvVar2 = ((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb)));
      iVar5 = 3;
      do {
        iVar3 = *(char *)((int)ppvVar2 - 1) - 1;
        (*(int *)&gen_args[1]) = iVar3;
        ppvVar4 = (undefined * PTR32 *)&(*(int *)&gen_args[1]);
        if (iVar3 < 1) {
          ppvVar4 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
        }
        *(char *)((int)ppvVar2 - 1) = *(char *)ppvVar4;
        cVar1 = *(char *)ppvVar2;
        (*(int *)&gen_args[1]) = cVar1 - 1;
        ppvVar4 = (undefined * PTR32 *)&(*(int *)&gen_args[1]);
        if (cVar1 - 1 < 1) {
          ppvVar4 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
        }
        cVar1 = *(char *)ppvVar4;
        iVar3 = *(char *)((int)ppvVar2 + 1) - 1;
        (*(int *)&gen_args[1]) = iVar3;
        *(char *)ppvVar2 = cVar1;
        ppvVar4 = (undefined * PTR32 *)&(*(int *)&gen_args[1]);
        if (iVar3 < 1) {
          ppvVar4 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
        }
        *(char *)((int)ppvVar2 + 1) = *(char *)ppvVar4;
        iVar3 = *(char *)((int)ppvVar2 + 2) - 1;
        (*(int *)&gen_args[1]) = iVar3;
        ppvVar4 = (undefined * PTR32 *)&(*(int *)&gen_args[1]);
        if (iVar3 < 1) {
          ppvVar4 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
        }
        cVar1 = *(char *)ppvVar4;
        iVar3 = *(char *)((int)ppvVar2 + 3) - 1;
        (*(int *)&gen_args[1]) = iVar3;
        *(char *)((int)ppvVar2 + 2) = cVar1;
        ppvVar4 = (undefined * PTR32 *)&(*(int *)&gen_args[1]);
        if (iVar3 < 1) {
          ppvVar4 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
        }
        *(char *)((int)ppvVar2 + 3) = *(char *)ppvVar4;
        ppvVar2 = (undefined * PTR32 *)((int)ppvVar2 + 5);
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
    else {
      if (-1 < cVar1) {
        iVar5 = *((char *)GEN_TOP((cVar1 + 10 + (int)(*(undefined * PTR32 *)&gen_args[0])))) - 1;
        (*(int *)&gen_args[1]) = iVar5;
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
        ppvVar4 = (undefined * PTR32 *)&(*(int *)&gen_args[1]);
        if (iVar5 < 1) {
          ppvVar4 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
        }
        *((undefined1 *)GEN_TOP((cVar1 + 10 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = *(undefined1 *)ppvVar4;
      }
      iVar5 = (int)*(char *)((int)ppvVar2 + 1);
      if (-1 < iVar5) {
        iVar3 = *((char *)GEN_TOP((iVar5 + 10 + (int)(*(undefined * PTR32 *)&gen_args[0])))) - 1;
        (*(int *)&gen_args[1]) = iVar3;
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
        ppvVar2 = (undefined * PTR32 *)&(*(int *)&gen_args[1]);
        if (iVar3 < 1) {
          ppvVar2 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
        }
        *((char *)GEN_TOP((iVar5 + 10 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = *(char *)ppvVar2;
      }
    }
    if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
      *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19))) | 1;
    }
  }
  return (uint)ppvVar2;
}

/* ref: FUN_00a05190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a05190(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa05190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (*(int *)(in_ecx + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 4) + 0x810))) = 0;
  }
  *(uint *)(in_ecx + 4) = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x810) = in_ecx;
  }
  return param_2;
}

/* ref: Client::System::Animation::BonePhysicsController::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a051c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa051c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)(this + 4);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x810) = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  return uVar1;
}

/* ref: Client::System::Animation::BonePhysicsController::ConfigChangeEventHandler::vf1 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00a051e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa051e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined1 uVar1;
  
  uVar1 = (undefined1)*(undefined4 *)(&REFG(undefined, 0x10e1b24) + *(int *)(param_2 + 0x14) * 4);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x39: ;
    REFG(undefined1, 0x14a2478) = uVar1;
    return 0;
  case 0x3a: ;
    REFG(undefined4, 0x14a2479) = uVar1;
    return 0;
  case 0x3b: ;
    REFG(undefined1, 0x14a247a) = uVar1;
    return 0;
  case 0x3c: ;
    REFG(undefined4, 0x14a247b) = uVar1;
  }
  return 0;
}

/* ref: FUN_00a05250 */
GEN_LIB GEN_FRAME unsigned int F_00a05250(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa05250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if ((*(char *)(param_1 + 0xc4) == '\0') || (*(char *)(param_1 + 0xcb) == '\x01')) {
    *(undefined1 *)(param_1 + 0xc4) = 1;
    if ((char)param_2 != '\0') {
      F_00a05fd0(param_1 GEN_EDX_ARG,REFG(float, 0x1104960));
      return;
    }
    F_00a05fd0(param_1 GEN_EDX_ARG,(float)(float10)0);
  }
  return;
}

/* ref: FUN_00a052a0 */
GEN_LIB GEN_FRAME unsigned int F_00a052a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa052a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if ((char)param_2 != '\0') {
    F_00a06070(param_1 GEN_EDX_ARG,REFG(float, 0x1104960));
    return;
  }
  F_00a06070(param_1 GEN_EDX_ARG,(float)(float10)0);
  return;
}

/* ref: FUN_00a052d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a052d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa052d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10e1b60));
  *(int *)((int)this + 4) = param_1;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0x19) = 0;
  if (param_1 != 0) {
    *(undefined * PTR32 *)(param_1 + 0x810) = this;
  }
  F_00c48350((undefined *)((int)this + 10),0,(int)this + (0x19 - ((int)this + 10)));
  return (uint)this;
}

/* ref: FUN_00a05320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a05320(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa05320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined4 uVar1;
  byte bVar2;
  undefined * this;
  int iVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  float10 fVar10;
  float fVar11;
  uint local_18;
  int local_14;
  uint local_10;
  int local_8;
  
  piVar4 = (int *)F_00bbafd0((undefined *)param_2 GEN_EDX_FWD);
  if (piVar4 == (int *)0x0) {
    *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xfc;
    return 0;
  }
  local_18 = 0xffffffff;
  local_8 = 2;
  switch((unsigned int)(uintptr_t)(*(undefined2 *)((int)piVar4 + 0x72))) {
  case 0: ;
    local_8 = 0;
    break;
  case 1: ;
    local_8 = 1;
    break;
  case 2: ;
    local_8 = 3;
    break;
  case 3: ;
    local_8 = 2;
  }
  uVar5 = F_00a065a0();
  if ((char)uVar5 != '\0') {
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc0))(piVar4 GEN_EDX_ARG);
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = *(uint *)(uVar6 + 0xa0);
      local_18 = uVar5;
    }
  }
  this = (undefined *)piVar4[0x39];
  if (this != (undefined *)0x0) {
    local_14 = 0;
    do {
      uVar6 = F_00b83a40(this GEN_EDX_ARG,local_14);
      local_10 = 0;
      uVar5 = uVar6;
      if (0 < (int)uVar6) {
        do {
          uVar5 = F_00b839b0(this GEN_EDX_ARG,local_14,local_10);
          iVar3 = *(int *)(uVar5 + 0x10);
          uVar7 = F_00a062f0(iVar3);
          cVar9 = '\0';
          uVar8 = F_00a062f0(iVar3);
          if (uVar8 != 0) {
            cVar9 = *(char *)((char)(&REFG(undefined1, 0x14a2478))[(int)(local_8)] + 0x38 + uVar8);
          }
          if (cVar9 != '\x02') {
            if ((int)local_18 < 0) {
              *(undefined4 *)(uVar5 + 0x50) = GEN_FLT_TO(*(undefined4 *)(uVar5 + 0x50), REFG(float, 0x108bee8));
              *(undefined4 *)(uVar5 + 0x54) = *(undefined4 *)&REFG(undefined, 0x10e1b74);
              *(undefined4 *)(uVar5 + 100) = GEN_FLT_TO(*(undefined4 *)(uVar5 + 100), REFG(float, 0x10e1b70));
LAB_00a05484: ;
              if (((1 << ((byte)iVar3 & 0x1f) & (uint)*(ushort *)(param_1 + 8)) == 0) &&
                 ((*(char *)(iVar3 + 10 + param_1) < '\x01' ||
                  ((uVar7 != 0 && (cVar9 = '\x01', *(char *)(uVar7 + 0x3c) != '\0'))))))
              goto LAB_00a054b9;
            }
            else {
              fVar11 = F_00a06340(iVar3,local_18);
              if ((float10)0 < (float10)fVar11) {
                fVar11 = (float)((float10)1 / (float10)fVar11);
                *(float *)(uVar5 + 0x50) = fVar11;
                fVar11 = (float)((float10)1 / (float10)fVar11);
                fVar10 = (float10)fVar11;
                *(float *)(uVar5 + 0x54) = fVar11;
                *(float *)(uVar5 + 100) =
                     ((float)GEN_TOF(((fVar10 * fVar10) / (float10)*(double *)&REFG(undefined, 0x10943e0))));
                goto LAB_00a05484;
              }
            }
            cVar9 = '\x02';
          }
LAB_00a054b9: ;
          if (cVar9 == '\0') {
            bVar2 = *(byte *)(param_1 + 0x19);
            *(undefined1 *)(uVar5 + 0xc5) = 1;
            *(undefined1 *)(uVar5 + 0xcd) = 0;
            if ((*(char *)(uVar5 + 0xc4) == '\0') || (*(char *)(uVar5 + 0xcb) == '\x01')) {
              *(undefined1 *)(uVar5 + 0xc4) = 1;
              if ((~bVar2 & 1) == 0) {
                fVar10 = (float10)0;
              }
              else {
                fVar10 = (float10)REFG(float, 0x1104960);
              }
              F_00a05fd0(uVar5 GEN_EDX_ARG,(float)fVar10);
            }
          }
          else if (cVar9 == '\x01') {
            *(undefined2 *)(uVar5 + 0xc4) = 1;
            *(undefined1 *)(uVar5 + 0xcd) = 1;
          }
          else if (cVar9 == '\x02') {
            bVar2 = *(byte *)(param_1 + 0x19);
            *(undefined1 *)(uVar5 + 0xc5) = 1;
            if ((~(bVar2 >> 1) & 1) == 0) {
              F_00a06070(uVar5 GEN_EDX_ARG,(float)(float10)0);
            }
            else {
              F_00a06070(uVar5 GEN_EDX_ARG,REFG(float, 0x1104960));
            }
          }
          if (uVar7 != 0) {
            if (REFG(char, 0x14a247c) == '\0') {
              uVar1 = *(undefined4 *)(uVar7 + 0x30);
            }
            else {
              uVar1 = *(undefined4 *)(uVar7 + 0x34);
            }
            *(undefined4 *)(uVar5 + 0x68) = uVar1;
          }
          uVar5 = local_10 + 1;
          local_10 = uVar5;
        } while ((int)uVar5 < (int)uVar6);
      }
      local_14 = local_14 + 1;
    } while (local_14 < 5);
  }
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xfc;
  return uVar5;
}

/* ref: FUN_00a055d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a055d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa055d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float * pfVar1;
  byte bVar2;
  int * in_ecx;
  uint uVar3;
  int * piVar4;
  int iVar5;
  float fVar6;
  undefined * pvVar7;
  float10 fVar8;
  undefined4 uVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  in_ecx = (int *)F_00bbafd0(param_1 GEN_EDX_FWD);
  piVar4 = in_ecx;
  if (in_ecx != (int *)0x0) {
    pvVar7 = (undefined *)in_ecx[0x39];
    (*(undefined * PTR32 *)(gen_frame + 0x60)) = pvVar7;
    if (pvVar7 != (undefined *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 0xc0))(in_ecx GEN_EDX_ARG);
      piVar4 = (int *)0x0;
      if (uVar3 != 0) {
        pfVar1 = (float *)(uVar3 + 0x10);
        (*(float * PTR32 *)(gen_frame + 0x5c)) = pfVar1;
        (*(int *)(gen_frame + 0x54)) = (int)(((float10)*(float *)(uVar3 + 0x14) + (float10)*pfVar1) +
                        (float10)*(float *)(uVar3 + 0x18));
        (*(float *)(gen_frame + 0x64)) = 0.0;
        if (REFG(int, 0x1371290) != 0) {
          fVar8 = F_006b1440(in_ecx GEN_EDX_ARG);
          F_004aa750(REFG(int, 0x1371290) GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x20)),pfVar1,(float)fVar8);
          fVar6 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x28)) * (float10)(*(float *)(gen_frame + 0x28)) +
                         ((float10)(*(float *)(gen_frame + 0x20)) * (float10)(*(float *)(gen_frame + 0x20)) +
                         (float10)(*(float *)(gen_frame + 0x24)) * (float10)(*(float *)(gen_frame + 0x24))))));
          (*(float *)(gen_frame + 0x58)) = fVar6;
          fVar6 = ((float)GEN_TOF(SQRT((float10)fVar6)));
          (*(float *)(gen_frame + 0x58)) = fVar6;
          (*(float *)(gen_frame + 0x64)) = fVar6;
          F_0046f390(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG);
        }
        (*(int *)(gen_frame + 0x68)) = 0;
        do {
          iVar5 = (*(int *)(gen_frame + 0x68));
          piVar4 = (int *)F_00b83a40((*(undefined * PTR32 *)(gen_frame + 0x60)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x68)));
          (*(int * PTR32 *)(gen_frame + 0x4c)) = piVar4;
          (*(float *)(gen_frame + 0x58)) = 0.0;
          if (0 < (int)piVar4) {
            do {
              fVar6 = (*(float *)(gen_frame + 0x58));
              piVar4 = (int *)F_00b839b0((*(undefined * PTR32 *)(gen_frame + 0x60)) GEN_EDX_ARG,iVar5,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x58))));
              if ((char)piVar4[0x31] != '\0') {
                iVar5 = piVar4[4] + (*(int *)(gen_frame + 0x68)) + (*(int *)(gen_frame + 0x54));
                (*(float *)(gen_frame + 0x30)) = 0.0;
                (*(float *)(gen_frame + 0x34)) = 0.0;
                (*(float *)(gen_frame + 0x38)) = 0.0;
                bVar2 = F_00bc0860(&(*(float *)(gen_frame + 0x30)),(*(float * PTR32 *)(gen_frame + 0x5c)),iVar5);
                (*(byte *)(gen_frame + 0x6f)) = bVar2;
                if ((*(undefined * PTR32 *)((int)param_1 + 0x458) == (undefined *)0x0) ||
                   (bVar2 = F_00bb9a20(*(undefined * PTR32 *)((int)param_1 + 0x458) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),(*(float * PTR32 *)(gen_frame + 0x5c)),iVar5),
                   bVar2 == 0)) {
                  if (((*(byte *)(gen_frame + 0x6f)) == 0) &&
                     ((!GEN_ISNAN((*(float *)(gen_frame + 0x64))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
                      !((*(float *)(gen_frame + 0x64)) <= *(float *)&REFG(undefined, 0x1088114)))) {
                    fVar8 = F_00a08770((uint)gen_fl2bits((*(float *)(gen_frame + 0x64))),iVar5);
                    (*(float *)(gen_frame + 0x50)) = (float)fVar8;
                    fVar8 = (float10)(float)fVar8;
                    (*(float *)(gen_frame + 0x10)) = (float)(fVar8 * (float10)(*(float *)(gen_frame + 0x20)));
                    (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x24)) * fVar8);
                    (*(float *)(gen_frame + 0x18)) = (float)(fVar8 * (float10)(*(float *)(gen_frame + 0x28)));
                    (*(float *)(gen_frame + 0x30)) = (float)(fVar8 * (float10)(*(float *)(gen_frame + 0x20)));
                    (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x24)) * fVar8);
                    fVar8 = (float10)(float)(fVar8 * (float10)(*(float *)(gen_frame + 0x28)));
                    goto LAB_00a05794;
                  }
                }
                else {
                  (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(float *)(gen_frame + 0x30)));
                  (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x34)));
                  fVar8 = (float10)(*(float *)(gen_frame + 0x8)) + (float10)(*(float *)(gen_frame + 0x38));
LAB_00a05794: ;
                  (*(float *)(gen_frame + 0x38)) = (float)fVar8;
                }
                piVar4 = (int *)F_00a05ee0(piVar4 GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x30)));
                fVar6 = (*(float *)(gen_frame + 0x58));
              }
              (*(float *)(gen_frame + 0x58)) = gen_bits2f((int)gen_fl2bits(fVar6) + 1);
              iVar5 = (*(int *)(gen_frame + 0x68));
            } while ((int)gen_fl2bits(fVar6) + 1 < (int)(*(int * PTR32 *)(gen_frame + 0x4c)));
          }
          (*(int *)(gen_frame + 0x68)) = iVar5 + 1;
          pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x60));
        } while (iVar5 + 1 < 5);
      }
      uVar9 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      if ((*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x19) & 4) != 0) {
        uVar9 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10e1b30)));
      }
      *(undefined4 *)((int)pvVar7 + 0x90) = uVar9;
      *(undefined4 *)((int)pvVar7 + 0x94) = GEN_FLT_TO(*(undefined4 *)((int)pvVar7 + 0x94), REFG(float, 0x10e1b34));
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_00a05810 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00a05810(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa05810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00bbafd0(param_1 GEN_EDX_ARG);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a05d00(uVar1,param_2,0,param_1);
  }
  return uVar2;
}

/* ref: FUN_00a05840 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00a05840(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa05840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00bbafd0(param_1 GEN_EDX_ARG);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a05dd0(uVar1,param_2,0,param_1);
  }
  return uVar2;
}

/* ref: FUN_00a05870 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a05870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa05870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  
  pvVar1 = F_00c48350((undefined *)((int)this + 10),0,(int)this + (0x19 - ((int)this + 10)));
  *(byte *)((int)this + 0x19) = *(byte *)((int)this + 0x19) & 0xfc;
  return (uint)pvVar1;
}

/* ref: FUN_00a05890 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00a05890(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xa05890u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  if (param_2 != 0) {
    F_00a05320(param_1 GEN_EDX_FWD,param_2);
    F_00a055d0(param_1 GEN_EDX_ARG,param_2,(undefined4)gen_fl2bits(param_3));
  }
  return;
}

/* ref: Client::System::Animation::BonePhysicsController::vf2 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00a058c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined2 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa058c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * pvVar1;
  int * piVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  
  pvVar1 = *(undefined * PTR32 *)(param_1 + 0xe4);
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = pvVar1;
  if (pvVar1 != (undefined *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x48)) = (int *)((int)pvVar1 + 0xa0);
    param_1 = 0;
    do {
      iVar8 = 0;
      if (param_1 < 5) {
        piVar2 = (int *)*(*(int * PTR32 *)(gen_frame + 0x48));
        for (piVar4 = (int *)(*(int * PTR32 *)(gen_frame + 0x48))[-1]; piVar4 != piVar2; piVar4 = piVar4 + 1) {
          if (*(int *)(*piVar4 + 0x10) - 3U < 4) {
            if (0xf < iVar8) break;
            ((int *)(gen_frame + 0x4))[(int)(iVar8)] = *piVar4;
            iVar8 = iVar8 + 1;
          }
        }
      }
      iVar7 = 0;
      if (0 < iVar8) {
        do {
          bVar6 = (byte)*(undefined4 *)(((int *)(gen_frame + 0x4))[(int)(iVar7)] + 0x10);
          switch((unsigned int)(uintptr_t)(*(undefined4 *)(((int *)(gen_frame + 0x4))[(int)(iVar7)] + 0x10))) {
          case 3: ;
            bVar3 = (byte)((ushort)*param_2 >> 10);
            break;
          case 4: ;
            bVar3 = (byte)((ushort)*param_2 >> 0xd);
            break;
          case 5: ;
            bVar3 = (byte)((ushort)*param_2 >> 0xb);
            break;
          case 6: ;
            bVar3 = (byte)((ushort)*param_2 >> 0xc);
            break;
          default: ;
            goto switchD_00a0593f_default;
          }
          if ((bVar3 & 1) == 0) {
switchD_00a0593f_default: ;
            *(ushort *)(this + 8) = *(ushort *)(this + 8) & ~(1 << (bVar6 & 0x1f));
          }
          else {
            *(ushort *)(this + 8) = *(ushort *)(this + 8) | 1 << (bVar6 & 0x1f);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar8);
      }
      uVar5 = F_00b839f0((*(undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_FWD,param_1,7);
      if (uVar5 != 0) {
        bVar6 = (byte)*(undefined4 *)(uVar5 + 0x10);
        if ((param_2[1] & 0x2000) == 0) {
          *(ushort *)(this + 8) = *(ushort *)(this + 8) & ~(1 << (bVar6 & 0x1f));
        }
        else {
          *(ushort *)(this + 8) = *(ushort *)(this + 8) | 1 << (bVar6 & 0x1f);
        }
      }
      (*(int * PTR32 *)(gen_frame + 0x48)) = (*(int * PTR32 *)(gen_frame + 0x48)) + 4;
      param_1 = param_1 + 1;
    } while ((int)param_1 < 5);
  }
  return 0;
}

/* ref: FUN_00a05a40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a05a40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa05a40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a05a60 */
GEN_LIB GEN_FRAME uint F_00a05a60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa05a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a05aa0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00a05aa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa05aa0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *(float *)(in_ecx + 0x68) = param_2;
  return;
}

/* ref: FUN_00a05ac0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00a05ac0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa05ac0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  
  *(float *)(in_ecx + 0x50) = param_2;
  fVar1 = (float10)(float)((float10)1 / (float10)param_2);
  *(float *)(in_ecx + 0x54) = (float)((float10)1 / (float10)param_2);
  *(float *)(in_ecx + 100) = ((float)GEN_TOF(((fVar1 * fVar1) / (float10)*(double *)&REFG(undefined, 0x10943e0))));
  return;
}

/* ref: FUN_00a05b70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a05b70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa05b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(uint *)(in_ecx + 0x70) = param_2;
  return param_2;
}

/* ref: FUN_00a05b80 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00a05b80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa05b80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *(float *)(in_ecx + 0x90) = param_2;
  return;
}

/* ref: FUN_00a05ba0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00a05ba0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa05ba0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *(float *)(in_ecx + 0x94) = param_2;
  return;
}

/* ref: FUN_00a05be0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a05be0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa05be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(uint *)(in_ecx + 0x810) = param_2;
  return param_2;
}

/* ref: FUN_00a05c00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a05c00(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa05c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00a05c10 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00a05c10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa05c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)(*(int *)(param_1 + 0x10) - 3U < 4);
}

/* ref: FUN_00a05c30 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00a05c30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa05c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  *(undefined1 *)(param_1 + 0xcc) = 1;
  return param_1;
}

/* ref: FUN_00a05c50 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00a05c50(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa05c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  *(undefined1 *)(param_1 + 0xcc) = 1;
  *(undefined4 *)(param_1 + 0x70) = 0x1e;
  return param_1;
}

/* ref: Client::System::Animation::BonePhysicsController::ConfigChangeEventHandler::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a05cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa05cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  if (*(undefined * PTR32 *)(this + 8) != (undefined *)0x0) {
    F_00414620(*(undefined * PTR32 *)(this + 8) GEN_EDX_FWD,this);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a05ce0 */
GEN_LIB GEN_FRAME uint F_00a05ce0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa05ce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(param_1,*param_3,param_2 - (int)param_1);
  return (uint)pvVar1;
}

/* ref: FUN_00a05d00 */
GEN_LIB GEN_FRAME uint F_00a05d00(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa05d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined * this;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  
  this = (undefined *)param_1[0x39];
  if (this != (undefined *)0x0) {
    iVar6 = 0;
    do {
      uVar2 = F_00b83a40(this GEN_EDX_ARG,iVar6);
      iVar5 = 0;
      if (0 < (int)uVar2) {
        do {
          uVar3 = F_00b839b0(this GEN_EDX_ARG,iVar6,iVar5);
          if ((param_2 & 0xffff & 1 << ((byte)*(undefined4 *)(uVar3 + 0x10) & 0x1f)) != 0) {
            *(undefined1 *)(uVar3 + 0xcc) = 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 5);
  }
  if ((char)param_3 != '\0') {
    for (piVar1 = (int *)param_1[7]; (piVar1 != (int *)0x0 && (piVar1 != param_1));
        piVar1 = (int *)piVar1[7]) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
      if (uVar2 == 3) {
        F_00a05d00(piVar1,param_2,0,param_4);
      }
    }
  }
  piVar1 = (int *)param_1[8];
  piVar4 = param_1;
  if ((piVar1 != (int *)0x0) &&
     (piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG))), piVar4 == (int *)0x3)) {
    piVar4 = (int *)F_00a05d00(piVar1,param_2,1,param_4);
  }
  return (uint)piVar4;
}

/* ref: FUN_00a05dd0 */
GEN_LIB GEN_FRAME uint F_00a05dd0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa05dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined * this;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  
  this = (undefined *)param_1[0x39];
  if (this != (undefined *)0x0) {
    iVar6 = 0;
    do {
      uVar2 = F_00b83a40(this GEN_EDX_ARG,iVar6);
      iVar5 = 0;
      if (0 < (int)uVar2) {
        do {
          uVar3 = F_00b839b0(this GEN_EDX_ARG,iVar6,iVar5);
          if ((param_2 & 0xffff & 1 << ((byte)*(undefined4 *)(uVar3 + 0x10) & 0x1f)) != 0) {
            *(undefined1 *)(uVar3 + 0xcc) = 1;
            *(undefined4 *)(uVar3 + 0x70) = 0x1e;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 5);
  }
  if ((char)param_3 != '\0') {
    for (piVar1 = (int *)param_1[7]; (piVar1 != (int *)0x0 && (piVar1 != param_1));
        piVar1 = (int *)piVar1[7]) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
      if (uVar2 == 3) {
        F_00a05dd0(piVar1,param_2,0,param_4);
      }
    }
  }
  piVar1 = (int *)param_1[8];
  piVar4 = param_1;
  if ((piVar1 != (int *)0x0) &&
     (piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG))), piVar4 == (int *)0x3)) {
    piVar4 = (int *)F_00a05dd0(piVar1,param_2,1,param_4);
  }
  return (uint)piVar4;
}

/* ref: FUN_00a05ea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a05ea0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa05ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a05eb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a05eb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa05eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a05ec0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00a05ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa05ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00a05ee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a05ee0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa05ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  uint in_EAX = 0;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)*(float *)(param_1 + 0x40);
  fVar4 = (float10)*(float *)param_2;
  fVar5 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x48) * (float10)*(float *)(param_2 + 8) +
                          ((float10)*(float *)(param_1 + 0x44) * (float10)*(float *)(param_2 + 4) +
                          fVar4 * fVar3))));
  if (((!GEN_ISNAN((float10)0) && !GEN_ISNAN(fVar5)) && !((float10)0 < fVar5)) ||
     ((float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x48) * (float10)*(float *)(param_1 + 0x48) +
                      ((float10)*(float *)(param_1 + 0x44) * (float10)*(float *)(param_1 + 0x44) +
                      fVar3 * fVar3)))) <
      (float10)((float)GEN_TOF((((float10)*(float *)(param_2 + 4) * (float10)*(float *)(param_2 + 4) +
                       fVar4 * fVar4) +
                      (float10)*(float *)(param_2 + 8) * (float10)*(float *)(param_2 + 8)))))) {
    uVar2 = 0;
    in_EAX = 0;
    if (*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74) >> 2 != 0) {
      iVar1 = *(int *)(param_1 + 0x74);
      in_EAX = 0;
      do {
        *((undefined4 *)GEN_TOP((*(int *)(iVar1 + in_EAX * 4) + 0xb4))) = 0;
        uVar2 = uVar2 + 1;
        in_EAX = uVar2 & 0xffff;
      } while (in_EAX < (uint)(*(int *)(param_1 + 0x78) - iVar1 >> 2));
    }
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 8);
  return in_EAX;
}

/* ref: FUN_00a05fd0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00a05fd0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa05fd0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float * pfVar2;
  
  if ((*(char *)((int)param_1 + 0xc4) != '\0') && (*(char *)((int)param_1 + 0xca) == '\0')) {
    *(undefined1 *)((int)param_1 + 0xca) = 1;
    if (*(char *)((int)param_1 + 0xcb) != '\0') {
      fVar1 = *(float *)((int)param_1 + 0x58);
      (*(float *)(gen_frame + 0x4)) = 0.0;
      pfVar2 = &(*(float *)(gen_frame + 0x8));
      fVar1 = ((float)GEN_TOF(((float10)1 - (float10)fVar1 / (float10)*(float *)((int)param_1 + 0x60))));
      (*(float *)(gen_frame + 0x8)) = fVar1;
      if (!((float10)0 < (float10)fVar1)) {
        pfVar2 = &(*(float *)(gen_frame + 0x4));
      }
      *(float *)((int)param_1 + 0x58) = (float)((float10)*pfVar2 * (float10)param_2);
      *(undefined4 *)((int)param_1 + 0x5c) = GEN_FLT_TO(*(undefined4 *)((int)param_1 + 0x5c), REFG(float, 0x1104964));
      *(float *)((int)param_1 + 0x60) = param_2;
      *(undefined1 *)((int)param_1 + 0xcb) = 0;
      return;
    }
    *(undefined4 *)((int)param_1 + 0x58) = 0;
    *(undefined4 *)((int)param_1 + 0x5c) = 0;
    *(float *)((int)param_1 + 0x60) = param_2;
    F_00bbc2d0(param_1 GEN_EDX_FWD);
  }
  return;
}

/* ref: FUN_00a06070 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00a06070(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa06070u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float * pfVar2;
  
  if ((*(char *)(in_ecx + 0xc4) != '\0') && (*(char *)(in_ecx + 0xcb) == '\0')) {
    *(undefined1 *)(in_ecx + 0xcb) = 1;
    if (*(char *)(in_ecx + 0xca) != '\0') {
      fVar1 = *(float *)(in_ecx + 0x58);
      (*(float *)(gen_frame + 0x4)) = 0.0;
      pfVar2 = &(*(float *)(gen_frame + 0x8));
      fVar1 = ((float)GEN_TOF(((float10)1 - (float10)fVar1 / (float10)*(float *)(in_ecx + 0x60))));
      (*(float *)(gen_frame + 0x8)) = fVar1;
      if (!((float10)0 < (float10)fVar1)) {
        pfVar2 = &(*(float *)(gen_frame + 0x4));
      }
      fVar1 = *pfVar2;
      *(undefined1 *)(in_ecx + 0xca) = 0;
      *(float *)(in_ecx + 0x60) = param_2;
      *(float *)(in_ecx + 0x58) = (float)((float10)fVar1 * (float10)param_2);
      return;
    }
    *(undefined4 *)(in_ecx + 0x58) = 0;
    *(float *)(in_ecx + 0x60) = param_2;
  }
  return;
}

/* ref: Client::System::Animation::BonePhysicsController::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a06100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa06100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10e1b60));
  if (*(int *)(this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 0x810))) = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10e1b40));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a06140 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00a06140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa06140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00a06160 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a06160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xa06160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  int * piVar2;
  int * piVar3;
  
  uVar1 = 0;
  if (4 < param_3) {
    return uVar1;
  }
  piVar2 = *(int * PTR32 *)((int)this + param_3 * 0x10 + 0x9c);
  piVar3 = ((int *)GEN_TOP(((param_3 + 10) * 0x10 + (int)this)));
  if (piVar2 != (int *)*piVar3) {
    do {
      if (*(int *)(*piVar2 + 0x10) - 3U < 4) {
        if (param_2 <= (int)uVar1) {
          return uVar1;
        }
        *(int *)(param_1 + uVar1 * 4) = *piVar2;
        uVar1 = uVar1 + 1;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)*piVar3);
  }
  return uVar1;
}

/* ref: FUN_00a061c0 */
GEN_LIB GEN_FRAME byte GEN_STDCALL F_00a061c0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa061c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  return *param_1 < *param_2;
}

/* ref: FUN_00a061e0 */
GEN_LIB GEN_NOFRAME uint F_00a061e0(void)
{
  GEN_ENTER(0xa061e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (REFG(int, 0x14a2488) != 0) {
    uVar2 = F_00406b30(REFG(int, 0x14a2488));
    uVar1 = (uint)uVar2;
    REFG(int, 0x14a2488) = 0;
    REFG(undefined4, 0x14a248c) = 0;
  }
  return uVar1;
}

/* ref: FUN_00a06210 */
GEN_LIB GEN_FRAME uint F_00a06210(void)
{
  GEN_ENTER(0xa06210u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,"PhysicsGroup");
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
  uVar3 = uVar2;
  if (0 < (int)uVar2) {
    uVar3 = F_00406bb0(-(uint)((int)((ulonglong)uVar2 * 8 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar2 * 8),0,0);
    iVar5 = 0;
    REFG(undefined4, 0x14a2490) = 0;
    REFG(undefined4, 0x14a2488) = uVar3;
    REFG(undefined4, 0x14a248c) = uVar2;
    if (0 < (int)uVar2) {
      do {
        F_00cb4120(((undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG);
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1 GEN_EDX_ARG,iVar5,((undefined4 *)(gen_frame + 0xc)))));
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG);
        uVar3 = *(uint *)(uVar3 + 4);
        *(undefined4 *)(REFG(undefined4, 0x14a2488) + iVar5 * 8) = ((undefined4 *)(gen_frame + 0xc))[0];
        *(uint *)(REFG(undefined4, 0x14a2488) + 4 + iVar5 * 8) = uVar3;
        if (*(char *)(uVar3 + 0x3b) != '\0') {
          REFG(undefined4, 0x14a2490) = REFG(undefined4, 0x14a2490) |
                         1 << ((byte)*(undefined4 *)(REFG(undefined4, 0x14a2488) + iVar5 * 8) & 0x1f);
          uVar3 = REFG(undefined4, 0x14a2488);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar2);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00a062f0 */
GEN_LIB GEN_FRAME uint F_00a062f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa062f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  
  piVar1 = (int *)(REFG(int, 0x14a2488) + REFG(int, 0x14a248c) * 8);
  ((int *)(gen_frame + 0x4))[0] = param_1;
  ((int *)(gen_frame + 0x4))[1] = 0;
  piVar2 = (int *)F_00a06460(REFG(int, 0x14a2488),piVar1,((int *)(gen_frame + 0x4)),param_1,0);
  if ((piVar2 != piVar1) && (*piVar2 == param_1)) {
    return piVar2[1];
  }
  return 0;
}

/* ref: FUN_00a06340 */
GEN_LIB GEN_FRAME float F_00a06340(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa06340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  
  piVar1 = (int *)(REFG(int, 0x14a2488) + REFG(int, 0x14a248c) * 8);
  ((int *)(gen_frame + 0x4))[0] = param_1;
  ((int *)(gen_frame + 0x4))[1] = 0;
  piVar2 = (int *)F_00a06460(REFG(int, 0x14a2488),piVar1,((int *)(gen_frame + 0x4)),param_1,0);
  if (((piVar2 != piVar1) && (*piVar2 == param_1)) && (piVar2[1] != 0)) {
    return *(float *)(piVar2[1] + param_2 * 4);
  }
  return (float)(float10)0;
}

/* ref: FUN_00a063a0 */
GEN_LIB GEN_FRAME uint F_00a063a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa063a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a063c0 */
GEN_LIB GEN_FRAME uint F_00a063c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa063c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a063d0 */
GEN_LIB GEN_FRAME uint F_00a063d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa063d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a063e0 */
GEN_LIB GEN_FRAME uint F_00a063e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa063e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  *param_3 = *param_3 + (param_2 - param_1 >> 3);
  return (uint)param_3;
}

/* ref: FUN_00a06400 */
GEN_LIB GEN_FRAME uint F_00a06400(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa06400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *param_1 = *param_1 + param_2 * 8;
  return (uint)param_1;
}

/* ref: FUN_00a06420 */
GEN_LIB GEN_FRAME uint F_00a06420(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa06420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  *param_3 = *param_3 + (param_2 - param_1 >> 3);
  return (uint)param_3;
}

/* ref: FUN_00a06440 */
GEN_LIB GEN_FRAME uint F_00a06440(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa06440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *param_1 = *param_1 + param_2 * 8;
  return (uint)param_1;
}

/* ref: FUN_00a06460 */
GEN_LIB GEN_FRAME uint F_00a06460(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa06460u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)(param_2 - param_1) >> 3;
  uVar3 = param_1;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 / 2;
      if (*(int *)(uVar3 + iVar1 * 8) < *param_3) {
        uVar3 = uVar3 + 8 + iVar1 * 8;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  return uVar3;
}

/* ref: FUN_00a064b0 */
GEN_LIB GEN_FRAME uint F_00a064b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa064b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00a06460(param_1,param_2,param_3,param_4,0);
  return uVar1;
}

/* ref: FUN_00a064d0 */
GEN_LIB GEN_NOFRAME uint F_00a064d0(void)
{
  GEN_ENTER(0xa064d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  ulonglong uVar2;
  
  if (REFG(int, 0x14a2494) != 0) {
    F_00406b30(REFG(int, 0x14a2494));
    REFG(int, 0x14a2494) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a2498) = 0;
  }
  uVar1 = 0;
  if (REFG(int, 0x14a249c) != 0) {
    uVar2 = F_00406b30(REFG(int, 0x14a249c));
    uVar1 = (uint)uVar2;
    REFG(int, 0x14a249c) = 0;
    REFG(undefined4, 0x14a24a0) = 0;
  }
  return uVar1;
}

/* ref: FUN_00a06520 */
GEN_LIB GEN_FRAME uint F_00a06520(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa06520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(REFG(int, 0x14a2494) + param_1 * 4);
}

/* ref: FUN_00a06540 */
GEN_LIB GEN_FRAME unsigned int F_00a06540(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa06540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  if ((char)param_1 != '\0') {
    REFG(undefined4, 0x14a24a4) = REFG(undefined4, 0x14a24a4) | 1;
    return;
  }
  REFG(undefined4, 0x14a24a4) = REFG(undefined4, 0x14a24a4) & 0xfffffffe;
  return;
}

/* ref: FUN_00a06560 */
GEN_LIB GEN_FRAME unsigned int F_00a06560(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa06560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  if ((char)param_1 != '\0') {
    REFG(undefined4, 0x14a24a4) = REFG(undefined4, 0x14a24a4) | 4;
    return;
  }
  REFG(undefined4, 0x14a24a4) = REFG(undefined4, 0x14a24a4) & 0xfffffffb;
  return;
}

/* ref: FUN_00a06580 */
GEN_LIB GEN_FRAME unsigned int F_00a06580(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa06580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  if ((char)param_1 != '\0') {
    REFG(undefined4, 0x14a24a4) = REFG(undefined4, 0x14a24a4) | 2;
    return;
  }
  REFG(undefined4, 0x14a24a4) = REFG(undefined4, 0x14a24a4) & 0xfffffffd;
  return;
}

/* ref: FUN_00a065a0 */
GEN_LIB GEN_NOFRAME uint F_00a065a0(void)
{
  GEN_ENTER(0xa065a0u, 0u, 0u, 0u, 0u);
  if ((((byte)REFG(undefined4, 0x14a24a4) & 1) != 0) && (((byte)REFG(undefined4, 0x14a24a4) & 4) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a065d0 */
GEN_LIB GEN_FRAME uint F_00a065d0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xa065d0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  uVar1 = REFG(int, 0x14a249c) + REFG(int, 0x14a24a0) * 0xc;
  (*(float *)(gen_frame + 0x4)) = param_1;
  uVar2 = F_00a06d30(REFG(int, 0x14a249c),uVar1,&(*(undefined4 *)(gen_frame + 0x0)),(undefined4)gen_fl2bits(param_1),0);
  return -(uint)(uVar2 != uVar1) & uVar2;
}

/* ref: FUN_00a06620 */
GEN_LIB GEN_FRAME byte F_00a06620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa06620u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  undefined * PTR32 * ppuVar2;
  
  uVar1 = (*(uint *)&gen_args[0]);
  (*(uint *)&gen_args[0]) = (*(uint *)&gen_args[0]) & 0xffff;
  ppuVar2 = (undefined * PTR32 *)
            F_00a06da0(&REFG(undefined, 0x13335cc),&REFG(undefined * PTR32, 0x13335ec),&(*(uint *)&gen_args[0]),(*(uint *)&gen_args[0]),0);
  if ((ppuVar2 != &REFG(undefined * PTR32, 0x13335ec)) && ((int)*(short *)ppuVar2 == uVar1)) {
    return *((byte *)GEN_TOP((*(int *)(REFG(int, 0x14a2494) + (*(int *)&gen_args[1]) * 4) + 9 + (int)*(short *)((int)ppuVar2 + 2))));
  }
  return 1;
}

/* ref: FUN_00a06680 */
GEN_LIB GEN_FRAME uint F_00a06680(GEN_P(float param_1, float gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa06680u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  uint * puVar2;
  
  if ((char)param_2 == '\0') {
    return 5;
  }
  puVar1 = (uint *)(REFG(int, 0x14a249c) + REFG(int, 0x14a24a0) * 0xc);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(float *)(gen_frame + 0x4)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  puVar2 = (uint *)F_00a06d30(REFG(int, 0x14a249c),(uint)puVar1,&(*(undefined4 *)(gen_frame + 0x0)),param_2,0);
  if ((puVar2 != puVar1) && (puVar2 != (uint *)0x0)) {
    return *puVar2;
  }
  return 3;
}

/* ref: FUN_00a066f0 */
GEN_LIB GEN_FRAME uint F_00a066f0(GEN_P(float param_1, float gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa066f0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a06680(param_1,param_2);
  return *(uint *)(REFG(int, 0x14a2494) + uVar1 * 4);
}

/* ref: FUN_00a06720 */
GEN_LIB GEN_FRAME uint F_00a06720(void)
{
  GEN_ENTER(0xa06720u, 0u, 0u, 0u, 0u);
  float fVar1;
  float * pfVar2;
  bool bVar3;
  float fVar4;
  int * piVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  uint uVar9;
  uint in_ECX = 0;
  int iVar10;
  uint local_8;
  
  piVar5 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,"AnimationLOD");
  uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x44))(piVar5 GEN_EDX_ARG);
  local_8 = in_ECX;
  if (0 < (int)uVar6) {
    local_8 = 0;
    REFG(undefined4, 0x14a2494) = F_00406bb0(-(uint)((int)((ulonglong)uVar6 * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)uVar6 * 4),0,0);
    iVar10 = 0;
    *(uint *)&REFG(undefined, 0x14a2498) = uVar6;
    if (0 < (int)uVar6) {
      do {
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5 GEN_EDX_ARG,iVar10)));
        uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG);
        fVar4 = *(float *)&REFG(undefined, 0x1088114);
        fVar1 = **(float * PTR32 *)(uVar8 + 4);
        bVar3 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
        *(float * PTR32 *)(REFG(undefined4, 0x14a2494) + iVar10 * 4) = *(float * PTR32 *)(uVar8 + 4);
        if ((!GEN_ISNAN(fVar1) && !bVar3) && !(fVar1 <= fVar4)) {
          local_8 = local_8 + 1;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar6);
    }
    REFG(undefined4, 0x14a249c) = F_00406bb0(-(uint)((int)((ulonglong)local_8 * 0xc >> 0x20) != 0) |
                                (uint)((ulonglong)local_8 * 0xc),0,0);
    iVar10 = 0;
    REFG(undefined4, 0x14a24a0) = local_8;
    if (0 < (int)uVar6) {
      local_8 = 0;
      do {
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5 GEN_EDX_ARG,iVar10)));
        uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG);
        uVar8 = REFG(undefined4, 0x14a249c);
        pfVar2 = *(float * PTR32 *)(uVar9 + 4);
        if ((!GEN_ISNAN(*pfVar2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
            !(*pfVar2 <= *(float *)&REFG(undefined, 0x1088114))) {
          *(int *)(REFG(undefined4, 0x14a249c) + local_8) = iVar10;
          fVar1 = *pfVar2;
          *(float * PTR32 *)(uVar8 + 8 + local_8) = pfVar2;
          local_8 = local_8 + 0xc;
          *((float *)GEN_TOP(((uVar8 - 8) + local_8))) = (float)((float10)fVar1 * (float10)fVar1);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar6);
    }
    iVar10 = REFG(undefined4, 0x14a249c) + REFG(undefined4, 0x14a24a0) * 0xc;
    F_00a08090(REFG(undefined4, 0x14a249c),iVar10,(int)(iVar10 - REFG(undefined4, 0x14a249c)) / 0xc,local_8);
  }
  F_00a081d0(&REFG(undefined, 0x13335cc),&REFG(undefined * PTR32, 0x13335ec),8,local_8);
  uVar6 = REFG(undefined4, 0x14a24a4) & 0xfffffffa;
  REFG(undefined4, 0x14a24a4) = uVar6;
  return uVar6;
}

/* ref: FUN_00a068a0 */
GEN_LIB GEN_FRAME uint F_00a068a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa068a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a068b0 */
GEN_LIB GEN_FRAME uint F_00a068b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa068b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a068d0 */
GEN_LIB GEN_FRAME uint F_00a068d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa068d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a068f0 */
GEN_LIB GEN_FRAME uint F_00a068f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa068f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a06920 */
GEN_LIB GEN_FRAME uint F_00a06920(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa06920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a06930 */
GEN_LIB GEN_FRAME uint F_00a06930(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa06930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  *param_3 = *param_3 + (param_2 - param_1) / 0xc;
  return (uint)param_3;
}

/* ref: FUN_00a06950 */
GEN_LIB GEN_FRAME uint F_00a06950(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa06950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *param_1 = *param_1 + param_2 * 0xc;
  return (uint)param_1;
}

/* ref: FUN_00a06970 */
GEN_LIB GEN_FRAME uint F_00a06970(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa06970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a06980 */
GEN_LIB GEN_FRAME uint F_00a06980(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa06980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  *param_3 = *param_3 + (param_2 - param_1 >> 2);
  return (uint)param_3;
}

/* ref: FUN_00a069a0 */
GEN_LIB GEN_FRAME uint F_00a069a0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa069a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *param_1 = *param_1 + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00a069c0 */
GEN_LIB GEN_FRAME uint F_00a069c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa069c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a069d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a069d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa069d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a069f0 */
GEN_LIB GEN_FRAME uint F_00a069f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa069f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a06a00 */
GEN_LIB GEN_FRAME uint F_00a06a00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa06a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a06a10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a06a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa06a10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a06a30 */
GEN_LIB GEN_FRAME uint F_00a06a30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa06a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a06a40 */
GEN_LIB GEN_FRAME byte F_00a06a40(void)
{
  GEN_ENTER(0xa06a40u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00a06a50 */
GEN_LIB GEN_FRAME byte F_00a06a50(void)
{
  GEN_ENTER(0xa06a50u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00a06a60 */
GEN_LIB GEN_FRAME uint F_00a06a60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa06a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a06a70 */
GEN_LIB GEN_FRAME uint F_00a06a70(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xa06a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00a06a80 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00a06a80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa06a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if ((float10)*(float *)(param_1 + 4) < (float10)*(float *)(param_2 + 4)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a06ab0 */
GEN_LIB GEN_FRAME byte GEN_STDCALL F_00a06ab0(GEN_P(short * param_1, unsigned int gen_a0), GEN_P(short * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa06ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_2 = (short *)(uintptr_t)gen_a1;)
  return *param_1 < *param_2;
}

/* ref: FUN_00a06ad0 */
GEN_LIB GEN_FRAME uint F_00a06ad0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa06ad0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  *param_3 = *param_3 + (param_2 - param_1) / 0xc;
  return (uint)param_3;
}

/* ref: FUN_00a06af0 */
GEN_LIB GEN_FRAME uint F_00a06af0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa06af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *param_1 = *param_1 + param_2 * 0xc;
  return (uint)param_1;
}

/* ref: FUN_00a06b10 */
GEN_LIB GEN_FRAME uint F_00a06b10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa06b10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  *param_3 = *param_3 + (param_2 - param_1 >> 2);
  return (uint)param_3;
}

/* ref: FUN_00a06b30 */
GEN_LIB GEN_FRAME uint F_00a06b30(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa06b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *param_1 = *param_1 + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00a06b50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a06b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa06b50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a06b70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00a06b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa06b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a06b90 */
GEN_LIB GEN_FRAME uint F_00a06b90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa06b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00a06bd0 */
GEN_LIB GEN_FRAME uint F_00a06bd0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa06bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00a06bf0 */
GEN_LIB GEN_FRAME uint F_00a06bf0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa06bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2;
  while (param_3 < iVar3) {
    iVar4 = (iVar3 - 1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar4 * 0xc);
    if (!((float10)*(float *)(param_1 + 4 + iVar4 * 0xc) < ((float10)GEN_TOD(gen_bits2f(param_4[1]))))) break;
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0xc);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    iVar3 = iVar4;
  }
  puVar1 = (undefined4 *)(param_1 + iVar3 * 0xc);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  return (uint)puVar1;
}

/* ref: FUN_00a06c70 */
GEN_LIB GEN_FRAME unsigned int F_00a06c70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa06c70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 0xc) {
    puVar1[-3] = *(undefined4 *)(iVar2 - 0xc);
    puVar1[-2] = *(undefined4 *)(iVar2 - 8);
    puVar1[-1] = *(undefined4 *)(iVar2 - 4);
    puVar1 = puVar1 - 3;
  }
  return 0;
}

/* ref: FUN_00a06ca0 */
GEN_LIB GEN_FRAME uint F_00a06ca0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa06ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2;
  if (param_2 <= param_3) {
    uVar1 = *param_4;
    *(uint *)(param_1 + param_2 * 4) = uVar1;
    return uVar1;
  }
  do {
    iVar2 = (iVar3 - 1) / 2;
    if ((short)*param_4 <= *(short *)(param_1 + iVar2 * 4)) break;
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    iVar3 = iVar2;
  } while (param_3 < iVar2);
  uVar1 = *param_4;
  *(uint *)(param_1 + iVar3 * 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00a06d00 */
GEN_LIB GEN_FRAME unsigned int F_00a06d00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa06d00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 4) {
    puVar1 = puVar1 - 1;
    *puVar1 = *(undefined4 *)(iVar2 - 4);
  }
  return 0;
}

/* ref: FUN_00a06d30 */
GEN_LIB GEN_FRAME uint F_00a06d30(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa06d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (int)(param_2 - param_1) / 0xc;
  uVar4 = param_1;
  if (0 < iVar3) {
    do {
      iVar2 = iVar3 / 2;
      iVar1 = uVar4 + iVar2 * 0xc;
      if (!((float10)*(float *)(param_3 + 4) < (float10)*(float *)(iVar1 + 4))) {
        uVar4 = iVar1 + 0xc;
        iVar2 = iVar3 + (-1 - iVar2);
      }
      iVar3 = iVar2;
    } while (0 < iVar2);
  }
  return uVar4;
}

/* ref: FUN_00a06da0 */
GEN_LIB GEN_FRAME uint F_00a06da0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(short * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa06da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(short * param_3 = (short *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)(param_2 - param_1) >> 2;
  uVar3 = param_1;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 / 2;
      if (*(short *)(uVar3 + iVar1 * 4) < *param_3) {
        uVar3 = uVar3 + 4 + iVar1 * 4;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  return uVar3;
}

/* ref: FUN_00a06df0 */
GEN_LIB GEN_FRAME uint F_00a06df0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa06df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00a06e30 */
GEN_LIB GEN_FRAME uint F_00a06e30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa06e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00a06e50 */
GEN_LIB GEN_FRAME unsigned int F_00a06e50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa06e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((float10)GEN_TOD(gen_bits2f(param_2[1]))) < ((float10)GEN_TOD(gen_bits2f(param_1[1])))) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
  }
  if (((float10)GEN_TOD(gen_bits2f(param_3[1]))) < ((float10)GEN_TOD(gen_bits2f(param_2[1])))) {
    uVar1 = param_3[2];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar1;
  }
  if (((float10)GEN_TOD(gen_bits2f(param_2[1]))) < ((float10)GEN_TOD(gen_bits2f(param_1[1])))) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
  }
  return;
}

/* ref: FUN_00a06f00 */
GEN_LIB GEN_FRAME uint F_00a06f00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa06f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_2;
  while( true ) {
    iVar5 = iVar6 * 2 + 2;
    if (param_3 <= iVar5) break;
    if ((float10)*(float *)(param_1 + 4 + iVar5 * 0xc) <
        (float10)*(float *)(param_1 + iVar5 * 0xc - 8)) {
      iVar5 = iVar6 * 2 + 1;
    }
    iVar1 = param_1 + iVar5 * 0xc;
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0xc);
    *puVar2 = *(undefined4 *)(param_1 + iVar5 * 0xc);
    puVar2[1] = *(undefined4 *)(iVar1 + 4);
    puVar2[2] = *(undefined4 *)(iVar1 + 8);
    iVar6 = iVar5;
  }
  if (iVar5 == param_3) {
    puVar3 = (undefined4 *)(param_1 - 0xc + param_3 * 0xc);
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0xc);
    *puVar2 = *puVar3;
    puVar2[1] = puVar3[1];
    puVar2[2] = puVar3[2];
    iVar6 = param_3 - 1;
  }
  uVar4 = F_00a06bf0(param_1,iVar6,param_2,param_4,param_5);
  return uVar4;
}

/* ref: FUN_00a06fa0 */
GEN_LIB GEN_FRAME unsigned int F_00a06fa0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa06fa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 0xc) {
    puVar1[-3] = *(undefined4 *)(iVar2 - 0xc);
    puVar1[-2] = *(undefined4 *)(iVar2 - 8);
    puVar1[-1] = *(undefined4 *)(iVar2 - 4);
    puVar1 = puVar1 - 3;
  }
  return 0;
}

/* ref: FUN_00a06fd0 */
GEN_LIB GEN_FRAME unsigned int F_00a06fd0(GEN_P(short * param_1, unsigned int gen_a0), GEN_P(short * param_2, unsigned int gen_a1), GEN_P(short * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa06fd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_2 = (short *)(uintptr_t)gen_a1;)
  GEN_PIN(short * param_3 = (short *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  
  if (*param_2 < *param_1) {
    uVar1 = *(undefined4 *)param_2;
    *(undefined4 *)param_2 = *(undefined4 *)param_1;
    *(undefined4 *)param_1 = uVar1;
  }
  if (*param_3 < *param_2) {
    uVar1 = *(undefined4 *)param_3;
    *(undefined4 *)param_3 = *(undefined4 *)param_2;
    *(undefined4 *)param_2 = uVar1;
  }
  if (*param_2 < *param_1) {
    uVar1 = *(undefined4 *)param_2;
    *(undefined4 *)param_2 = *(undefined4 *)param_1;
    *(undefined4 *)param_1 = uVar1;
  }
  return 0;
}

/* ref: FUN_00a07020 */
GEN_LIB GEN_FRAME uint F_00a07020(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa07020u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2;
  while( true ) {
    uVar1 = uVar2 * 2 + 2;
    if ((int)param_3 <= (int)uVar1) break;
    if (*(short *)(param_1 + uVar1 * 4) < *(short *)(param_1 - 4 + uVar1 * 4)) {
      uVar1 = uVar2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + uVar2 * 4) = *(undefined4 *)(param_1 + uVar1 * 4);
    uVar2 = uVar1;
  }
  if (uVar1 == param_3) {
    *(undefined4 *)(param_1 + uVar2 * 4) = *(undefined4 *)(param_1 - 4 + param_3 * 4);
    uVar2 = param_3 - 1;
  }
  if ((int)param_2 < (int)uVar2) {
    do {
      uVar1 = (int)(uVar2 - 1) / 2;
      if ((short)*param_4 <= *(short *)(param_1 + uVar1 * 4)) {
        *(uint *)(param_1 + uVar2 * 4) = *param_4;
        return uVar1;
      }
      *(undefined4 *)(param_1 + uVar2 * 4) = *(undefined4 *)(param_1 + uVar1 * 4);
      uVar2 = uVar1;
    } while ((int)param_2 < (int)uVar1);
    uVar2 = *param_4;
    *(uint *)(param_1 + uVar1 * 4) = uVar2;
    return uVar2;
  }
  uVar1 = *param_4;
  *(uint *)(param_1 + uVar2 * 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00a070c0 */
GEN_LIB GEN_FRAME unsigned int F_00a070c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa070c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 4) {
    puVar1 = puVar1 - 1;
    *puVar1 = *(undefined4 *)(iVar2 - 4);
  }
  return 0;
}

/* ref: FUN_00a070f0 */
GEN_LIB GEN_FRAME uint F_00a070f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa070f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  uVar1 = F_00a06f00(param_1,0,(param_2 - (int)param_1) / 0xc,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00a07140 */
GEN_LIB GEN_FRAME uint F_00a07140(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa07140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  *param_3 = *param_1;
  uVar1 = F_00a07020(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 2,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00a07170 */
GEN_LIB GEN_FRAME uint F_00a07170(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa07170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00a06d30(param_1,param_2,param_3,param_4,0);
  return uVar1;
}

/* ref: FUN_00a07190 */
GEN_LIB GEN_FRAME uint F_00a07190(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa07190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00a06da0(param_1,param_2,param_3,param_4,0);
  return uVar1;
}

/* ref: FUN_00a071b0 */
GEN_LIB GEN_FRAME unsigned int F_00a071b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa071b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_3 - param_1) / 0xc;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0xc + param_1;
    F_00a06e50(param_1,iVar1,iVar2 * 0x18 + param_1,param_4);
    F_00a06e50(param_2 + iVar2 * -0xc,param_2,iVar2 * 0xc + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0xc;
    F_00a06e50(param_3 + iVar2 * -0x18,iVar3,param_3,param_4);
    F_00a06e50(iVar1,param_2,iVar3,param_4);
    return;
  }
  F_00a06e50(param_1,param_2,param_3,param_4);
  return;
}

/* ref: FUN_00a07260 */
GEN_LIB GEN_FRAME uint F_00a07260(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa07260u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar4 = (param_2 - param_1) / 0xc;
  uVar5 = iVar4 - (iVar4 >> 0x1f);
  iVar10 = iVar4 / 2;
  if (0 < iVar10) {
    iVar7 = iVar10 * 2 + 2;
    iVar6 = param_1 + iVar10 * 0xc;
    do {
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(iVar6 - 0xc);
      iVar10 = iVar10 - 1;
      iVar7 = iVar7 - 2;
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar6 - 8);
      (*(int *)(gen_frame + 0x18)) = iVar10;
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(iVar6 - 4);
      iVar9 = iVar10;
      for (iVar8 = iVar7; iVar8 < iVar4; iVar8 = iVar8 * 2 + 2) {
        if ((float10)*(float *)(param_1 + 4 + iVar8 * 0xc) <
            (float10)*(float *)(param_1 + iVar8 * 0xc - 8)) {
          iVar8 = iVar8 - 1;
        }
        iVar1 = param_1 + iVar8 * 0xc;
        puVar2 = (undefined4 *)(param_1 + iVar9 * 0xc);
        *puVar2 = *(undefined4 *)(param_1 + iVar8 * 0xc);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        iVar9 = iVar8;
      }
      if (iVar8 == iVar4) {
        puVar3 = (undefined4 *)(param_1 - 0xc + iVar4 * 0xc);
        puVar2 = (undefined4 *)(param_1 + iVar9 * 0xc);
        *puVar2 = *puVar3;
        puVar2[1] = puVar3[1];
        puVar2[2] = puVar3[2];
        iVar9 = iVar4 - 1;
      }
      uVar5 = F_00a06bf0(param_1,iVar9,iVar10,&(*(undefined4 *)(gen_frame + 0xc)),param_3);
      iVar6 = iVar6 - 0xc;
    } while (0 < iVar10);
  }
  return uVar5;
}

/* ref: FUN_00a07360 */
GEN_LIB GEN_FRAME unsigned int F_00a07360(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa07360u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
    while (puVar4 = puVar4 + 3, puVar4 != param_2) {
      fVar1 = gen_bits2f(puVar4[1]);
      uVar2 = puVar4[2];
      uVar3 = *puVar4;
      puVar5 = puVar4;
      if ((float10)fVar1 < ((float10)GEN_TOD(gen_bits2f(param_1[1])))) {
        for (; param_1 != puVar5; puVar5 = puVar5 - 3) {
          *puVar5 = puVar5[-3];
          puVar5[1] = puVar5[-2];
          puVar5[2] = puVar5[-1];
        }
        *param_1 = uVar3;
        param_1[1] = (undefined4)gen_fl2bits(fVar1);
        param_1[2] = uVar2;
      }
      else {
        while ((float10)fVar1 < ((float10)GEN_TOD(gen_bits2f(puVar5[-2])))) {
          *puVar5 = puVar5[-3];
          puVar5[1] = puVar5[-2];
          puVar5[2] = puVar5[-1];
          puVar5 = puVar5 - 3;
        }
        *puVar5 = uVar3;
        puVar5[1] = (undefined4)gen_fl2bits(fVar1);
        puVar5[2] = uVar2;
      }
    }
  }
  return 0;
}

/* ref: FUN_00a07410 */
GEN_LIB GEN_FRAME unsigned int F_00a07410(GEN_P(short * param_1, unsigned int gen_a0), GEN_P(short * param_2, unsigned int gen_a1), GEN_P(short * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa07410u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_2 = (short *)(uintptr_t)gen_a1;)
  GEN_PIN(short * param_3 = (short *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 uVar1;
  int iVar2;
  short * psVar3;
  short * psVar4;
  
  iVar2 = (int)param_3 - (int)((int)(uintptr_t)param_1) >> 2;
  if (iVar2 < 0x29) {
    if (*param_2 < *param_1) {
      uVar1 = *(undefined4 *)param_2;
      *(undefined4 *)param_2 = *(undefined4 *)param_1;
      *(undefined4 *)param_1 = uVar1;
    }
    if (*param_3 < *param_2) {
      uVar1 = *(undefined4 *)param_3;
      *(undefined4 *)param_3 = *(undefined4 *)param_2;
      *(undefined4 *)param_2 = uVar1;
    }
    if (*param_2 < *param_1) {
      uVar1 = *(undefined4 *)param_2;
      *(undefined4 *)param_2 = *(undefined4 *)param_1;
      *(undefined4 *)param_1 = uVar1;
    }
  }
  else {
    iVar2 = iVar2 + 1;
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
    if (param_1[iVar2 * 2] < *param_1) {
      uVar1 = *(undefined4 *)(param_1 + iVar2 * 2);
      *(undefined4 *)(param_1 + iVar2 * 2) = *(undefined4 *)param_1;
      *(undefined4 *)param_1 = uVar1;
    }
    if (param_1[iVar2 * 4] < param_1[iVar2 * 2]) {
      uVar1 = *(undefined4 *)(param_1 + iVar2 * 4);
      *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar2 * 2);
      *(undefined4 *)(param_1 + iVar2 * 2) = uVar1;
    }
    if (param_1[iVar2 * 2] < *param_1) {
      uVar1 = *(undefined4 *)(param_1 + iVar2 * 2);
      *(undefined4 *)(param_1 + iVar2 * 2) = *(undefined4 *)param_1;
      *(undefined4 *)param_1 = uVar1;
    }
    psVar3 = param_2 + iVar2 * -2;
    if (*param_2 < *psVar3) {
      uVar1 = *(undefined4 *)param_2;
      *(undefined4 *)param_2 = *(undefined4 *)psVar3;
      *(undefined4 *)psVar3 = uVar1;
    }
    if (param_2[iVar2 * 2] < *param_2) {
      uVar1 = *(undefined4 *)(param_2 + iVar2 * 2);
      *(undefined4 *)(param_2 + iVar2 * 2) = *(undefined4 *)param_2;
      *(undefined4 *)param_2 = uVar1;
    }
    if (*param_2 < *psVar3) {
      uVar1 = *(undefined4 *)param_2;
      *(undefined4 *)param_2 = *(undefined4 *)psVar3;
      *(undefined4 *)psVar3 = uVar1;
    }
    psVar3 = param_3 + iVar2 * -2;
    psVar4 = param_3 + iVar2 * -4;
    if (*psVar3 < *psVar4) {
      uVar1 = *(undefined4 *)psVar3;
      *(undefined4 *)psVar3 = *(undefined4 *)psVar4;
      *(undefined4 *)psVar4 = uVar1;
    }
    if (*param_3 < *psVar3) {
      uVar1 = *(undefined4 *)param_3;
      *(undefined4 *)param_3 = *(undefined4 *)psVar3;
      *(undefined4 *)psVar3 = uVar1;
    }
    if (*psVar3 < *psVar4) {
      uVar1 = *(undefined4 *)psVar3;
      *(undefined4 *)psVar3 = *(undefined4 *)psVar4;
      *(undefined4 *)psVar4 = uVar1;
    }
    if (*param_2 < param_1[iVar2 * 2]) {
      uVar1 = *(undefined4 *)param_2;
      *(undefined4 *)param_2 = *(undefined4 *)(param_1 + iVar2 * 2);
      *(undefined4 *)(param_1 + iVar2 * 2) = uVar1;
    }
    if (*psVar3 < *param_2) {
      uVar1 = *(undefined4 *)psVar3;
      *(undefined4 *)psVar3 = *(undefined4 *)param_2;
      *(undefined4 *)param_2 = uVar1;
    }
    if (*param_2 < param_1[iVar2 * 2]) {
      uVar1 = *(undefined4 *)param_2;
      *(undefined4 *)param_2 = *(undefined4 *)(param_1 + iVar2 * 2);
      *(undefined4 *)(param_1 + iVar2 * 2) = uVar1;
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00a075a0 */
GEN_LIB GEN_FRAME unsigned int F_00a075a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa075a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = param_2 - param_1 >> 2;
  iVar6 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  if (0 < iVar6) {
    iVar4 = iVar6 * 2 + 2;
    do {
      uVar2 = *(undefined4 *)(param_1 - 4 + iVar6 * 4);
      iVar6 = iVar6 - 1;
      iVar4 = iVar4 - 2;
      iVar1 = iVar6;
      for (iVar5 = iVar4; iVar5 < iVar3; iVar5 = iVar5 * 2 + 2) {
        if (*(short *)(param_1 + iVar5 * 4) < *(short *)(param_1 - 4 + iVar5 * 4)) {
          iVar5 = iVar5 - 1;
        }
        *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar5 * 4);
        iVar1 = iVar5;
      }
      if (iVar5 == iVar3) {
        *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 - 4 + iVar3 * 4);
        iVar1 = iVar3 - 1;
      }
      while ((iVar6 < iVar1 &&
             (iVar5 = (iVar1 - 1) / 2, *(short *)(param_1 + iVar5 * 4) < (short)uVar2))) {
        *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar5 * 4);
        iVar1 = iVar5;
      }
      *(undefined4 *)(param_1 + iVar1 * 4) = uVar2;
    } while (0 < iVar6);
  }
  return 0;
}

/* ref: FUN_00a07660 */
GEN_LIB GEN_FRAME unsigned int F_00a07660(GEN_P(short * param_1, unsigned int gen_a0), GEN_P(short * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa07660u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_2 = (short *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  short sVar1;
  undefined4 uVar2;
  short * psVar3;
  short * psVar4;
  short * psVar5;
  
  psVar5 = param_1;
  if (param_1 != param_2) {
    while (psVar3 = psVar5 + 2, psVar3 != param_2) {
      uVar2 = *(undefined4 *)psVar3;
      psVar4 = psVar3;
      if ((short)uVar2 < *param_1) {
        for (; param_1 != psVar4; psVar4 = psVar4 - 2) {
          *(undefined4 *)psVar4 = *(undefined4 *)(psVar4 - 2);
        }
        *(undefined4 *)param_1 = uVar2;
        psVar5 = psVar3;
      }
      else {
        sVar1 = *psVar5;
        while ((short)uVar2 < sVar1) {
          *(undefined4 *)psVar4 = *(undefined4 *)psVar5;
          sVar1 = psVar5[-2];
          psVar4 = psVar5;
          psVar5 = psVar5 - 2;
        }
        *(undefined4 *)psVar4 = uVar2;
        psVar5 = psVar3;
      }
    }
  }
  return;
}

/* ref: FUN_00a076c0 */
GEN_LIB GEN_FRAME uint F_00a076c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa076c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_2 - 8);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(param_2 - 0xc);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 - 4);
  *(undefined4 *)(param_2 - 0xc) = *param_1;
  *(undefined4 *)(param_2 - 8) = param_1[1];
  *(undefined4 *)(param_2 - 4) = param_1[2];
  uVar1 = F_00a06f00(param_1,0,((param_2 - (int)param_1) - 0xc) / 0xc,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  return uVar1;
}

/* ref: FUN_00a07720 */
GEN_LIB GEN_FRAME uint F_00a07720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa07720u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)((*(int *)&gen_args[1]) - 4);
  *(undefined4 *)((*(int *)&gen_args[1]) - 4) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar2 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = uVar1;
  uVar3 = F_00a07020((*(undefined4 * PTR32 *)&gen_args[0]),0,iVar2 - 4 >> 2,&(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_00a07760 */
GEN_LIB GEN_FRAME uint F_00a07760(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa07760u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  float10 fVar10;
  float10 fVar11;
  undefined4 * local_c;
  
  puVar9 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  F_00a071b0(param_2,puVar9,param_3 - 3,param_4);
  puVar4 = puVar9 + 3;
  for (; param_2 < puVar9; puVar9 = puVar9 - 3) {
    fVar10 = ((float10)GEN_TOD(gen_bits2f(puVar9[-2])));
    fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar9[1])));
    if (((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10)) ||
       ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11))) break;
  }
  puVar8 = puVar4;
  local_c = puVar9;
  if (puVar4 < param_3) {
    if (3 < ((int)param_3 + (0xb - (int)puVar4)) / 0xc) {
      fVar10 = ((float10)GEN_TOD(gen_bits2f(puVar9[1])));
      do {
        fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar4[1])));
        puVar8 = puVar4;
        if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) ||
           ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10))) goto LAB_00a078c1;
        fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar4[4])));
        if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) ||
           ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10))) {
          puVar4 = puVar4 + 3;
          puVar8 = puVar4;
          goto LAB_00a078c1;
        }
        fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar4[7])));
        if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) ||
           ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10))) {
          puVar4 = puVar4 + 6;
          puVar8 = puVar4;
          goto LAB_00a078c1;
        }
        fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar4[10])));
        if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) ||
           ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10))) {
          puVar4 = puVar4 + 9;
          puVar8 = puVar4;
          goto LAB_00a078c1;
        }
        puVar4 = puVar4 + 0xc;
      } while ((int)puVar4 < (int)(param_3 - 9));
    }
    puVar8 = puVar4;
    if (puVar4 < param_3) {
      fVar10 = ((float10)GEN_TOD(gen_bits2f(puVar9[1])));
      do {
        fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar4[1])));
        puVar8 = puVar4;
        if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) ||
           ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10))) break;
        puVar4 = puVar4 + 3;
        puVar8 = puVar4;
      } while (puVar4 < param_3);
    }
  }
LAB_00a078c1: ;
  puVar6 = local_c;
  puVar7 = local_c;
  if (puVar4 < param_3) {
    if (3 < ((int)param_3 + (0xb - (int)puVar4)) / 0xc) {
      do {
        fVar10 = ((float10)GEN_TOD(gen_bits2f(puVar9[1])));
        fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar4[1])));
        if (!(fVar10 < fVar11)) {
          if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) goto joined_r0x00a07af7;
          uVar1 = *puVar8;
          uVar2 = puVar8[1];
          uVar3 = puVar8[2];
          *puVar8 = *puVar4;
          puVar8[1] = puVar4[1];
          puVar8[2] = puVar4[2];
          *puVar4 = uVar1;
          puVar4[1] = uVar2;
          puVar8 = puVar8 + 3;
          puVar4[2] = uVar3;
        }
        fVar10 = ((float10)GEN_TOD(gen_bits2f(puVar9[1])));
        fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar4[4])));
        if (!(fVar10 < fVar11)) {
          if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) {
            puVar4 = puVar4 + 3;
            goto joined_r0x00a07af7;
          }
          uVar1 = *puVar8;
          uVar2 = puVar8[1];
          uVar3 = puVar8[2];
          *puVar8 = puVar4[3];
          puVar8[1] = puVar4[4];
          puVar8[2] = puVar4[5];
          puVar4[3] = uVar1;
          puVar4[4] = uVar2;
          puVar8 = puVar8 + 3;
          puVar4[5] = uVar3;
        }
        fVar10 = ((float10)GEN_TOD(gen_bits2f(puVar9[1])));
        fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar4[7])));
        if (!(fVar10 < fVar11)) {
          if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) {
            puVar4 = puVar4 + 6;
            goto joined_r0x00a07af7;
          }
          uVar1 = *puVar8;
          uVar2 = puVar8[1];
          uVar3 = puVar8[2];
          *puVar8 = puVar4[6];
          puVar8[1] = puVar4[7];
          puVar8[2] = puVar4[8];
          puVar4[6] = uVar1;
          puVar4[7] = uVar2;
          puVar8 = puVar8 + 3;
          puVar4[8] = uVar3;
        }
        fVar10 = ((float10)GEN_TOD(gen_bits2f(puVar9[1])));
        fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar4[10])));
        if (!(fVar10 < fVar11)) {
          if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) {
            puVar4 = puVar4 + 9;
            goto joined_r0x00a07af7;
          }
          uVar1 = puVar8[1];
          uVar2 = *puVar8;
          uVar3 = puVar8[2];
          *puVar8 = puVar4[9];
          puVar8[1] = puVar4[10];
          puVar8[2] = puVar4[0xb];
          puVar4[9] = uVar2;
          puVar4[10] = uVar1;
          puVar8 = puVar8 + 3;
          puVar4[0xb] = uVar3;
        }
        puVar4 = puVar4 + 0xc;
      } while ((int)puVar4 < (int)(param_3 - 9));
    }
    for (; puVar4 < param_3; puVar4 = puVar4 + 3) {
      fVar10 = ((float10)GEN_TOD(gen_bits2f(puVar9[1])));
      fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar4[1])));
      if (!(fVar10 < fVar11)) {
        if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) break;
        uVar1 = puVar8[1];
        uVar2 = *puVar8;
        uVar3 = puVar8[2];
        *puVar8 = *puVar4;
        puVar8[1] = puVar4[1];
        puVar8[2] = puVar4[2];
        *puVar4 = uVar2;
        puVar4[1] = uVar1;
        puVar8 = puVar8 + 3;
        puVar4[2] = uVar3;
      }
    }
  }
joined_r0x00a07af7: ;
  do {
    if (puVar6 <= param_2) break;
    puVar5 = puVar7 - 3;
    fVar10 = ((float10)GEN_TOD(gen_bits2f(puVar7[-2])));
    fVar11 = ((float10)GEN_TOD(gen_bits2f(puVar9[1])));
    if (!(fVar10 < fVar11)) {
      if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) break;
      uVar1 = puVar9[-3];
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      puVar9[-3] = *puVar5;
      puVar9[-2] = puVar7[-2];
      puVar9[-1] = puVar7[-1];
      *puVar5 = uVar1;
      puVar7[-2] = uVar2;
      puVar7[-1] = uVar3;
      puVar9 = puVar9 - 3;
    }
    puVar6 = puVar6 - 3;
    puVar7 = puVar5;
  } while( true );
  if (puVar6 == param_2) {
    if (puVar4 == param_3) {
      *param_1 = puVar9;
      param_1[1] = puVar8;
      return (uint)param_1;
    }
    if (puVar8 != puVar4) {
      uVar1 = puVar9[2];
      uVar2 = puVar9[1];
      uVar3 = *puVar9;
      *puVar9 = *puVar8;
      puVar9[1] = puVar8[1];
      puVar9[2] = puVar8[2];
      *puVar8 = uVar3;
      puVar8[1] = uVar2;
      puVar8[2] = uVar1;
    }
    uVar1 = *puVar9;
    uVar2 = puVar9[1];
    uVar3 = puVar9[2];
    *puVar9 = *puVar4;
    puVar9[1] = puVar4[1];
    puVar9[2] = puVar4[2];
    *puVar4 = uVar1;
    puVar4[1] = uVar2;
    puVar4[2] = uVar3;
    puVar4 = puVar4 + 3;
    puVar8 = puVar8 + 3;
    puVar9 = puVar9 + 3;
    local_c = puVar6;
  }
  else {
    puVar7 = puVar6 - 3;
    local_c = puVar7;
    if (puVar4 == param_3) {
      puVar5 = puVar9 - 3;
      if (puVar7 != puVar5) {
        uVar1 = puVar6[-2];
        uVar2 = *puVar7;
        uVar3 = puVar6[-1];
        *puVar7 = *puVar5;
        puVar6[-2] = puVar9[-2];
        puVar6[-1] = puVar9[-1];
        *puVar5 = uVar2;
        puVar9[-2] = uVar1;
        puVar9[-1] = uVar3;
      }
      uVar1 = puVar9[-2];
      uVar2 = *puVar5;
      uVar3 = puVar9[-1];
      puVar6 = puVar8 - 3;
      *puVar5 = *puVar6;
      puVar9[-2] = puVar8[-2];
      puVar9[-1] = puVar8[-1];
      *puVar6 = uVar2;
      puVar8[-2] = uVar1;
      puVar8[-1] = uVar3;
      puVar8 = puVar6;
      puVar9 = puVar5;
    }
    else {
      uVar1 = puVar4[1];
      uVar2 = *puVar4;
      uVar3 = puVar4[2];
      *puVar4 = *puVar7;
      puVar4[1] = puVar6[-2];
      puVar4[2] = puVar6[-1];
      *puVar7 = uVar2;
      puVar6[-2] = uVar1;
      puVar6[-1] = uVar3;
      puVar4 = puVar4 + 3;
    }
  }
  goto LAB_00a078c1;
}

/* ref: FUN_00a07ca0 */
GEN_LIB GEN_FRAME uint F_00a07ca0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa07ca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = (param_2 - param_1) / 0xc;
  if (1 < (int)uVar1) {
    uVar1 = F_00a07260(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_00a07ce0 */
GEN_LIB GEN_FRAME unsigned int F_00a07ce0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa07ce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00a07360(param_1,param_2,param_3,0);
  return;
}

/* ref: FUN_00a07d00 */
GEN_LIB GEN_FRAME uint F_00a07d00(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(short * param_2, unsigned int gen_a1), GEN_P(short * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa07d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_2 = (short *)(uintptr_t)gen_a1;)
  GEN_PIN(short * param_3 = (short *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 uVar1;
  short * psVar2;
  short * psVar3;
  short * psVar4;
  short * psVar5;
  
  psVar2 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 2) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                     1) * 2;
  F_00a07410(param_2,psVar2,param_3 - 2,param_4);
  psVar4 = psVar2 + 2;
  for (; param_2 < psVar2; psVar2 = psVar2 - 2) {
    if ((psVar2[-2] < *psVar2) || (*psVar2 < psVar2[-2])) break;
  }
  psVar5 = psVar4;
  psVar3 = psVar2;
  if (psVar4 < param_3) {
    do {
      psVar5 = psVar4;
      if ((*psVar4 < *psVar2) || (*psVar2 < *psVar4)) break;
      psVar4 = psVar4 + 2;
      psVar5 = psVar4;
    } while (psVar4 < param_3);
  }
joined_r0x00a07d78: ;
  do {
    if (param_3 <= psVar4) {
joined_r0x00a07dab: ;
      for (; param_2 < psVar2; psVar2 = psVar2 - 2) {
        if (*psVar3 <= psVar2[-2]) {
          if (*psVar3 < psVar2[-2]) break;
          uVar1 = *(undefined4 *)(psVar3 - 2);
          psVar3 = psVar3 - 2;
          *(undefined4 *)psVar3 = *(undefined4 *)(psVar2 - 2);
          *(undefined4 *)(psVar2 - 2) = uVar1;
        }
      }
      if (psVar2 == param_2) {
        if (psVar4 == param_3) {
          param_1[1] = psVar5;
          *param_1 = psVar3;
          return (uint)param_1;
        }
        if (psVar5 != psVar4) {
          uVar1 = *(undefined4 *)psVar3;
          *(undefined4 *)psVar3 = *(undefined4 *)psVar5;
          *(undefined4 *)psVar5 = uVar1;
        }
        uVar1 = *(undefined4 *)psVar3;
        *(undefined4 *)psVar3 = *(undefined4 *)psVar4;
        *(undefined4 *)psVar4 = uVar1;
        psVar4 = psVar4 + 2;
        psVar5 = psVar5 + 2;
        psVar3 = psVar3 + 2;
      }
      else {
        psVar2 = psVar2 - 2;
        if (psVar4 == param_3) {
          psVar3 = psVar3 - 2;
          if (psVar2 != psVar3) {
            uVar1 = *(undefined4 *)psVar2;
            *(undefined4 *)psVar2 = *(undefined4 *)psVar3;
            *(undefined4 *)psVar3 = uVar1;
          }
          uVar1 = *(undefined4 *)psVar3;
          *(undefined4 *)psVar3 = *(undefined4 *)(psVar5 - 2);
          *(undefined4 *)(psVar5 - 2) = uVar1;
          psVar5 = psVar5 - 2;
        }
        else {
          uVar1 = *(undefined4 *)psVar4;
          *(undefined4 *)psVar4 = *(undefined4 *)psVar2;
          *(undefined4 *)psVar2 = uVar1;
          psVar4 = psVar4 + 2;
        }
      }
      goto joined_r0x00a07d78;
    }
    if (*psVar4 <= *psVar3) {
      if (*psVar4 < *psVar3) goto joined_r0x00a07dab;
      uVar1 = *(undefined4 *)psVar5;
      *(undefined4 *)psVar5 = *(undefined4 *)psVar4;
      psVar5 = psVar5 + 2;
      *(undefined4 *)psVar4 = uVar1;
    }
    psVar4 = psVar4 + 2;
  } while( true );
}

/* ref: FUN_00a07e60 */
GEN_LIB GEN_FRAME unsigned int F_00a07e60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa07e60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
    F_00a075a0(param_1,param_2,param_3,0,0);
  }
  return;
}

/* ref: FUN_00a07e90 */
GEN_LIB GEN_FRAME unsigned int F_00a07e90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa07e90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00a07660(param_1,param_2,param_3,0);
  return;
}

/* ref: FUN_00a07eb0 */
GEN_LIB GEN_FRAME uint F_00a07eb0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa07eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_2 - 8);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(param_2 - 0xc);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 - 4);
  *(undefined4 *)(param_2 - 0xc) = *param_1;
  *(undefined4 *)(param_2 - 8) = param_1[1];
  *(undefined4 *)(param_2 - 4) = param_1[2];
  uVar1 = F_00a06f00(param_1,0,((param_2 - (int)param_1) - 0xc) / 0xc,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  return uVar1;
}

/* ref: FUN_00a07f10 */
GEN_LIB GEN_FRAME uint F_00a07f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa07f10u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)((*(int *)&gen_args[1]) - 4);
  *(undefined4 *)((*(int *)&gen_args[1]) - 4) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar2 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = uVar1;
  uVar3 = F_00a07020((*(undefined4 * PTR32 *)&gen_args[0]),0,iVar2 - 4 >> 2,&(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_00a07f50 */
GEN_LIB GEN_FRAME unsigned int F_00a07f50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa07f50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = param_2 - (int)param_1;
  if (1 < iVar2 / 0xc) {
    puVar3 = (undefined4 *)(param_2 - 0xc);
    do {
      (*(undefined4 *)(gen_frame + 0x4)) = puVar3[1];
      uVar1 = *param_1;
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar3;
      *puVar3 = uVar1;
      (*(undefined4 *)(gen_frame + 0x8)) = puVar3[2];
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      F_00a06f00(param_1,0,(iVar2 - 0xc) / 0xc,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      puVar3 = puVar3 - 3;
      iVar2 = (int)puVar3 + (0xc - (int)param_1);
    } while (1 < iVar2 / 0xc);
  }
  return 0;
}

/* ref: FUN_00a07ff0 */
GEN_LIB GEN_FRAME unsigned int F_00a07ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa07ff0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = (*(undefined4 *)&gen_args[2]);
  uVar1 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  while (4 < (int)(uVar1 & 0xfffffffc)) {
    (*(int *)&gen_args[1]) = *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4)))) = *(*(undefined4 * PTR32 *)&gen_args[0]);
    F_00a07020((*(undefined4 * PTR32 *)&gen_args[0]),0,(int)(uVar1 - 4) >> 2,&(*(int *)&gen_args[1]),uVar2);
    uVar1 = uVar1 - 4;
  }
  return 0;
}

/* ref: FUN_00a08050 */
GEN_LIB GEN_FRAME unsigned int F_00a08050(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa08050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00a07f50(param_1,param_2,param_3);
  return;
}

/* ref: FUN_00a08070 */
GEN_LIB GEN_FRAME unsigned int F_00a08070(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa08070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00a07ff0(param_1,param_2,param_3);
  return;
}

/* ref: FUN_00a08090 */
GEN_LIB GEN_FRAME unsigned int F_00a08090(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa08090u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  iVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    iVar1 = iVar1 / 0xc;
    if (iVar1 < 0x21) {
LAB_00a08162: ;
      if (1 < iVar1) {
        F_00a07360(iVar2,iVar4,param_4,0);
      }
      return;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (iVar4 - iVar2) / 0xc) {
          F_00a07260(iVar2,iVar4,param_4,0,0);
        }
        F_00a07f50(iVar2,iVar4,param_4);
        return;
      }
      goto LAB_00a08162;
    }
    F_00a07760(&(*(int *)(gen_frame + 0x4)),iVar2,iVar4,param_4);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if (((*(int *)(gen_frame + 0x4)) - iVar2) / 0xc < (iVar4 - (*(int *)(gen_frame + 0x8))) / 0xc) {
      F_00a08090(iVar2,(*(int *)(gen_frame + 0x4)),iVar3,param_4);
      iVar2 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_00a08090((*(int *)(gen_frame + 0x8)),iVar4,iVar3,param_4);
      iVar4 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_00a081d0 */
GEN_LIB GEN_FRAME unsigned int F_00a081d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa081d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  iVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_00a08262: ;
      if (1 < iVar1) {
        F_00a07660(iVar2,iVar4,param_4,0);
      }
      return;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(iVar4 - iVar2 & 0xfffffffcU)) {
          F_00a075a0(iVar2,iVar4,param_4,0,0);
        }
        F_00a07ff0(iVar2,iVar4,param_4);
        return;
      }
      goto LAB_00a08262;
    }
    F_00a07d00(&(*(int *)(gen_frame + 0x4)),iVar2,iVar4,param_4);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x4)) - iVar2 & 0xfffffffcU) < (int)(iVar4 - (*(int *)(gen_frame + 0x8)) & 0xfffffffcU)) {
      F_00a081d0(iVar2,(*(int *)(gen_frame + 0x4)),iVar3,param_4);
      iVar2 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_00a081d0((*(int *)(gen_frame + 0x8)),iVar4,iVar3,param_4);
      iVar4 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_00a082c0 */
GEN_LIB GEN_FRAME unsigned int F_00a082c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa082c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00a08090(param_1,param_2,(param_2 - param_1) / 0xc,param_3);
  return;
}

/* ref: FUN_00a08300 */
GEN_LIB GEN_FRAME unsigned int F_00a08300(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa08300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00a081d0(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return;
}

/* ref: FUN_00a08340 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00a08340(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa08340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (((float10)GEN_TOD(**(float * PTR32 *)(param_1 + 4))) < ((float10)GEN_TOD(**(float * PTR32 *)(param_2 + 4)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a08370 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00a08370(GEN_P(int param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xa08370u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if ((float10)param_2 < ((float10)GEN_TOD(**(float * PTR32 *)(param_1 + 4)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a083a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00a083a0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa083a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_00bc0ae0(in_ecx + 8 GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00a083b0 */
GEN_LIB GEN_NOFRAME uint F_00a083b0(void)
{
  GEN_ENTER(0xa083b0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (REFG(int, 0x14a24a8) != 0) {
    uVar2 = F_00406b30(REFG(int, 0x14a24a8));
    uVar1 = (uint)uVar2;
    REFG(int, 0x14a24a8) = 0;
    REFG(undefined4, 0x14a24ac) = 0;
  }
  return uVar1;
}

/* ref: FUN_00a083e0 */
GEN_LIB GEN_FRAME unsigned int F_00a083e0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xa083e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float * pfVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  int local_14;
  int local_10;
  
  local_10 = 0;
  if (0 < REFG(int, 0x14a24ac)) {
    local_14 = 0;
    do {
      iVar4 = local_14 + REFG(int, 0x14a24a8);
      F_00bc0b40(iVar4 + 8 GEN_EDX_ARG,param_1);
      fVar1 = *(float *)(iVar4 + 0x1c);
      if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar1 <= *(float *)&REFG(undefined, 0x1088114))) {
        fVar6 = F_00bc0c10(((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x20) / (float10)fVar1))));
        fVar7 = (float10)(float)fVar6;
        fVar8 = (float10)*(double *)&REFG(undefined, 0x1092098);
        fVar6 = (float10)1;
        *(float *)(iVar4 + 0x2c) =
             ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar7 * ((float10)*(float *)(iVar4 + 0x28) -
                                              (float10)*(float *)(iVar4 + 0x24)) +
                                     (float10)*(float *)(iVar4 + 0x24)))) * fVar8 - fVar6)));
        *(float *)(iVar4 + 0x38) =
             ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x30) +
                                     fVar7 * ((float10)*(float *)(iVar4 + 0x34) -
                                             (float10)*(float *)(iVar4 + 0x30))))) * fVar8 - fVar6)));
        *(float *)(iVar4 + 0x44) =
             ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x3c) +
                                     fVar7 * ((float10)*(float *)(iVar4 + 0x40) -
                                             (float10)*(float *)(iVar4 + 0x3c))))) * fVar8 - fVar6)));
        *(float *)(iVar4 + 0x50) =
             ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x48) +
                                     fVar7 * ((float10)*(float *)(iVar4 + 0x4c) -
                                             (float10)*(float *)(iVar4 + 0x48))))) * fVar8 - fVar6)));
        *(float *)(iVar4 + 0x5c) =
             ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x54) +
                                     fVar7 * ((float10)*(float *)(iVar4 + 0x58) -
                                             (float10)*(float *)(iVar4 + 0x54))))) * fVar8 - fVar6)));
        *(float *)(iVar4 + 0x68) =
             ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x60) +
                                     fVar7 * ((float10)*(float *)(iVar4 + 100) -
                                             (float10)*(float *)(iVar4 + 0x60))))) * fVar8 - fVar6)));
        *(float *)(iVar4 + 0x74) =
             ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x6c) +
                                     fVar7 * ((float10)*(float *)(iVar4 + 0x70) -
                                             (float10)*(float *)(iVar4 + 0x6c))))) * fVar8 - fVar6)));
        *(float *)(iVar4 + 0x80) =
             ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x78) +
                                     ((float10)*(float *)(iVar4 + 0x7c) -
                                     (float10)*(float *)(iVar4 + 0x78)) * fVar7))) * fVar8 - fVar6)));
        fVar1 = ((float)GEN_TOF(((float10)param_1 / (float10)*(double *)&REFG(undefined, 0x1088070) +
                       (float10)*(float *)(iVar4 + 0x20))));
        *(float *)(iVar4 + 0x20) = fVar1;
        if ((float10)*(float *)(iVar4 + 0x1c) <= (float10)fVar1) {
          iVar3 = 8;
          pfVar5 = (float *)(iVar4 + 0x28);
          do {
            pfVar5[-1] = *pfVar5;
            uVar2 = F_00c4f2dd();
            iVar3 = iVar3 - 1;
            *pfVar5 = (float)((float10)(int)uVar2 / (float10)*(double *)&REFG(undefined, 0x10920e0));
            pfVar5 = pfVar5 + 3;
          } while (iVar3 != 0);
          if ((float10)*(float *)(iVar4 + 0x1c) <= (float10)*(float *)(iVar4 + 0x20)) {
            do {
              *(float *)(iVar4 + 0x20) =
                   ((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x20) - (float10)*(float *)(iVar4 + 0x1c))));
            } while ((!GEN_ISNAN((float10)*(float *)(iVar4 + 0x20)) &&
                     !GEN_ISNAN((float10)*(float *)(iVar4 + 0x1c))) &&
                     !((float10)*(float *)(iVar4 + 0x20) < (float10)*(float *)(iVar4 + 0x1c)));
          }
        }
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + 0x84;
    } while (local_10 < REFG(int, 0x14a24ac));
  }
  return;
}

/* ref: FUN_00a08610 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00a08610(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa08610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    return (float10)((float)GEN_TOF((((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x2c +
                                                                 (param_2 & 7) * 0xc))) *
                                             (float10)*(float *)(iVar1 + 4)))) + (float10)1) *
                           (float10)((float)GEN_TOF((((float10)*(float *)(iVar1 + 0x10) -
                                            (float10)*(float *)(iVar1 + 0xc)) *
                                            (float10)((float)GEN_TOF((((float10)*(float *)(param_1 + 0x18) +
                                                             (float10)1) * (float10)REFG(double, 0x1088108)))) +
                                           (float10)*(float *)(iVar1 + 0xc)))))));
  }
  return (float10)0;
}

/* ref: FUN_00a08680 */
GEN_LIB GEN_FRAME float F_00a08680(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa08680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar2 = 0;
  piVar3 = REFG(int * PTR32, 0x14a24a8);
  if (0 < REFG(int, 0x14a24ac)) {
    do {
      if (*piVar3 == param_1) {
        if (REFG(int * PTR32, 0x14a24a8)[iVar2 * 0x21 + 1] == 0) {
          return 0.0;
        }
        iVar1 = REFG(int * PTR32, 0x14a24a8)[iVar2 * 0x21 + 1];
        return ((float)GEN_TOF(((float10)((float)GEN_TOF((((float10)*(float *)(iVar1 + 0x10) -
                                        (float10)*(float *)(iVar1 + 0xc)) *
                                        (float10)((float)GEN_TOF(((((float10)GEN_TOD(gen_bits2f(REFG(int * PTR32, 0x14a24a8)
                                                                              [iVar2 * 0x21 + 6]))) +
                                                         (float10)1) * (float10)REFG(double, 0x1088108)))) +
                                       (float10)*(float *)(iVar1 + 0xc)))) *
                      ((float10)((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(REFG(int * PTR32, 0x14a24a8)
                                                            [iVar2 * 0x21 + (param_2 & 7) * 3 + 0xb]
                                                           ))) * (float10)*(float *)(iVar1 + 4)))) +
                      (float10)1))));
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x21;
    } while (iVar2 < REFG(int, 0x14a24ac));
  }
  return (float)(float10)0;
}

