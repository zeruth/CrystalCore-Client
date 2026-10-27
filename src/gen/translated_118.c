#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00a99700 */
uint F_00a99700(unsigned int gen_a0)
{
  GEN_ENTER(0xa99700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a97d20(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a99730 */
uint F_00a99730(unsigned int gen_a0)
{
  GEN_ENTER(0xa99730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a97b00(this);
  uVar1 = F_00429760(*(undefined4 *)this,0x78,800);
  return (uint)uVar1;
}

/* ref: FUN_00a99750 */
unsigned int F_00a99750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa99750u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x29)));
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  while (cVar1 == '\0') {
    F_00a99750((*(undefined * PTR32 *)&gen_args[0]),(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_0095c5e0(piVar3 + 4,&(*(int * PTR32 *)&gen_args[1]),*(undefined4 *)piVar3[5],(undefined4 *)piVar3[5]);
    F_00429760(piVar3[5],0x18,800);
    F_00429760(piVar3,0x2c,800);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x29);
  }
  return 0;
}

/* ref: FUN_00a997c0 */
uint F_00a997c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa997c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_00a97b90(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xe1) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0xe1) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0xe1);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xe1);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xe1);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xe1);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a976a0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a99890 */
uint F_00a99890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa99890u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_00a97d20(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x71) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x71) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x71);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x71);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x71);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x71);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a97de0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a99950 */
uint F_00a99950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa99950u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int * piVar6;
  int * piVar7;
  
  piVar6 = (*(int * PTR32 *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x29))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)&gen_args[2]);
  F_00a884e0(&(*(int * PTR32 *)&gen_args[2]));
  piVar5 = (int *)*piVar6;
  if (*(char *)((int)piVar5 + 0x29) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(piVar6[2] + 0x29) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar6)) {
      piVar5[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar6;
      piVar5 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar6[2]) {
        piVar5 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x29) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar6[2];
        *(int * PTR32 *)(piVar6[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) == piVar6) {
        *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar6[1];
        if ((int *)*puVar2 == piVar6) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar6[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[10];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 10))) = (char)piVar6[10];
      *(char *)(piVar6 + 10) = (char)iVar1;
      goto LAB_00a99a6a;
    }
  }
  else {
    piVar7 = (int *)piVar6[2];
  }
  piVar5 = (int *)piVar6[1];
  if (*(char *)((int)piVar7 + 0x29) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) == piVar6) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) = piVar7;
  }
  else if ((int *)*piVar5 == piVar6) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) == piVar6) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0x29) == '\0') {
      piVar3 = (int *)F_00a88160(piVar7);
    }
    **(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) = piVar3;
  }
  iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4);
  (*(int *)(gen_frame + 0x0)) = iVar1;
  if (*(int * PTR32 *)(iVar1 + 8) == piVar6) {
    if (*(char *)((int)piVar7 + 0x29) == '\0') {
      uVar4 = F_00a88140(piVar7);
      *(uint *)((*(int *)(gen_frame + 0x0)) + 8) = uVar4;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar5;
    }
  }
LAB_00a99a6a: ;
  if ((char)(*(int * PTR32 *)(gen_frame + 0x4))[10] == '\x01') {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4)))) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[10] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[10] == '\0') {
            *(undefined1 *)(piVar5 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            F_00a8bb80(this_00,piVar6);
            piVar5 = (int *)piVar6[2];
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x29) == '\0') {
            if ((*(char *)(*piVar5 + 0x28) != '\x01') || (*(char *)(piVar5[2] + 0x28) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x28) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x28) = 1;
                *(undefined1 *)(piVar5 + 10) = 0;
                F_00a8bbe0(this_00,piVar5);
                piVar5 = (int *)piVar6[2];
                this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
              }
              *(char *)(piVar5 + 10) = (char)piVar6[10];
              *(undefined1 *)(piVar6 + 10) = 1;
              *(undefined1 *)(piVar5[2] + 0x28) = 1;
              F_00a8bb80(this_00,piVar6);
              break;
            }
LAB_00a99b28: ;
            *(undefined1 *)(piVar5 + 10) = 0;
          }
        }
        else {
          if ((char)piVar5[10] == '\0') {
            *(undefined1 *)(piVar5 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            F_00a8bbe0(this_00,piVar6);
            piVar5 = (int *)*piVar6;
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x29) == '\0') {
            if ((*(char *)(piVar5[2] + 0x28) == '\x01') && (*(char *)(*piVar5 + 0x28) == '\x01'))
            goto LAB_00a99b28;
            if (*(char *)(*piVar5 + 0x28) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x28) = 1;
              *(undefined1 *)(piVar5 + 10) = 0;
              F_00a8bb80(this_00,piVar5);
              piVar5 = (int *)*piVar6;
              this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            *(char *)(piVar5 + 10) = (char)piVar6[10];
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(*piVar5 + 0x28) = 1;
            F_00a8bbe0(this_00,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *((int * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 4) + 4))));
    }
    *(undefined1 *)(piVar7 + 10) = 1;
  }
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
  F_0095c5e0((*(int * PTR32 *)(gen_frame + 0x4)) + 4,&(*(int *)(gen_frame + 0x0)),*(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[5],(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[5]);
  F_00429760(piVar6[5],0x18,800);
  F_00429760(piVar6,0x2c,800);
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) != 0) {
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a99bd0 */
uint F_00a99bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa99bd0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x25))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00928170(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x25) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x25) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x25) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[9];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 9))) = (char)piVar3[9];
      *(char *)(piVar3 + 9) = (char)iVar1;
      goto LAB_00a99cea;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x25) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x25) == '\0') {
      piVar4 = (int *)F_00912b90(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x25) == '\0') {
      uVar5 = F_00a88320(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00a99cea: ;
  if ((char)piVar3[9] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[9] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[9] == '\0') {
            *(undefined1 *)(piVar6 + 9) = 1;
            *(undefined1 *)(piVar4 + 9) = 0;
            F_00a8bd30((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x25) == '\0') {
            if ((*(char *)(*piVar6 + 0x24) != '\x01') || (*(char *)(piVar6[2] + 0x24) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x24) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x24) = 1;
                *(undefined1 *)(piVar6 + 9) = 0;
                F_00a882c0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 9) = (char)piVar4[9];
              *(undefined1 *)(piVar4 + 9) = 1;
              *(undefined1 *)(piVar6[2] + 0x24) = 1;
              F_00a8bd30((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00a99da8: ;
            *(undefined1 *)(piVar6 + 9) = 0;
          }
        }
        else {
          if ((char)piVar6[9] == '\0') {
            *(undefined1 *)(piVar6 + 9) = 1;
            *(undefined1 *)(piVar4 + 9) = 0;
            F_00a882c0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x25) == '\0') {
            if ((*(char *)(piVar6[2] + 0x24) == '\x01') && (*(char *)(*piVar6 + 0x24) == '\x01'))
            goto LAB_00a99da8;
            if (*(char *)(*piVar6 + 0x24) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x24) = 1;
              *(undefined1 *)(piVar6 + 9) = 0;
              F_00a8bd30((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 9) = (char)piVar4[9];
            *(undefined1 *)(piVar4 + 9) = 1;
            *(undefined1 *)(*piVar6 + 0x24) = 1;
            F_00a882c0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 9) = 1;
  }
  F_00a934c0(piVar3 + 5);
  F_00429760(piVar3,0x28,0x191);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a99e30 */
unsigned int F_00a99e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa99e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  undefined * pvVar3;
  int * piVar4;
  undefined * this_00;
  
  cVar1 = *(char *)((int)param_1 + 0x25);
  piVar4 = param_1;
  while (cVar1 == '\0') {
    F_00a99e30(this,(int *)piVar4[2]);
    this_00 = (undefined *)piVar4[5];
    piVar2 = (int *)*piVar4;
    if (this_00 != (undefined *)0x0) {
      pvVar3 = (undefined *)piVar4[6];
      for (; this_00 != pvVar3; this_00 = (undefined *)((int)this_00 + 0x88)) {
        F_0042c880(this_00);
      }
      F_00429760(piVar4[5],((piVar4[7] - piVar4[5]) / 0x88) * 0x88,0x191);
    }
    piVar4[5] = 0;
    piVar4[6] = 0;
    piVar4[7] = 0;
    F_00429760(piVar4,0x28,0x191);
    piVar4 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x25);
  }
  return 0;
}

/* ref: FUN_00a99ef0 */
uint F_00a99ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xa99ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a982d0(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a99f20 */
unsigned int F_00a99f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa99f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (this != param_1) {
    F_00a982d0(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    uVar1 = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_1 + 4);
    *(undefined4 *)((int)param_1 + 4) = uVar1;
    uVar1 = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
    *(undefined4 *)((int)param_1 + 8) = uVar1;
  }
  return 0;
}

/* ref: FUN_00a99f80 */
uint F_00a99f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa99f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xe4,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x38) = 0;
  F_00a97460((int)this + 0xd,puVar1 + 3,param_2);
  F_00a98430(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a99fe0 */
uint F_00a99fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa99fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xe4,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x38) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_00a95ec0(puVar1 + 3,param_3);
  }
  F_00a98560(this,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_00a9a040 */
uint F_00a9a040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9a040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x74,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 3,param_3);
    F_00a93d20(puVar1 + 0x18,param_3 + 0x54);
  }
  F_00a98900(this,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_00a9a0b0 */
uint F_00a9a0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9a0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*(char *)((int)puVar2[1] + 0x25) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(ushort *)((*(int *)&gen_args[2]) + 0xc) < *(ushort *)(puVar2 + 3);
      }
      else {
        bVar3 = *(ushort *)((*(int *)&gen_args[2]) + 0xc) <= *(ushort *)(puVar2 + 3);
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x25) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00a98b30((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00a891e0(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if (*((ushort *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[3]) + 3))) < *(ushort *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00a98b30((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00a934c0((undefined *)((*(int *)&gen_args[2]) + 0x14));
  F_00429760((*(int *)&gen_args[2]),0x28,0x191);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a9a1a0 */
uint F_00a9a1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9a1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  bool bVar4;
  
  iVar1 = (*(int *)&gen_args[2]);
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar4 = true;
  (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),1);
  if (*(char *)((int)puVar3[1] + 0x29) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar4 = *(uint *)(iVar1 + 0xc) < (uint)puVar3[3];
      }
      else {
        bVar4 = *(uint *)(iVar1 + 0xc) <= (uint)puVar3[3];
      }
      (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),bVar4);
      if (bVar4 == false) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar2 + 0x29) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar3;
  if (bVar4 != false) {
    if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar3 = (undefined4 *)F_00a98d60((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar3,iVar1);
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00a89120(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)(iVar1 + 0xc)) {
    puVar3 = (undefined4 *)F_00a98d60((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(int *)&gen_args[2]),puVar3,iVar1);
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_0095c5e0((undefined *)(iVar1 + 0x10),&(*(undefined4 * PTR32 *)&gen_args[3]),**(undefined4 * PTR32 *)(iVar1 + 0x14),
               *(undefined4 * PTR32 *)(iVar1 + 0x14));
  F_00429760(*(undefined4 *)(iVar1 + 0x14),0x18,800);
  F_00429760(iVar1,0x2c,800);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a9a2a0 */
uint F_00a9a2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9a2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[3]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) {
    F_00a971f0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,piVar1,(*(int * PTR32 *)&gen_args[3]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)*piVar1) {
    if ((uint)(*(int * PTR32 *)&gen_args[3])[3] < (uint)(*(int * PTR32 *)&gen_args[2])[3]) {
      F_00a971f0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[2]) == piVar1) {
    if (*(uint *)(piVar1[2] + 0xc) < (uint)(*(int * PTR32 *)&gen_args[3])[3]) {
      F_00a971f0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,piVar1[2],(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    if ((uint)(*(int * PTR32 *)&gen_args[3])[3] < (uint)(*(int * PTR32 *)&gen_args[2])[3]) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00a88fe0(&(*(int * PTR32 *)&gen_args[3]));
      if ((uint)(*(int * PTR32 *)&gen_args[3])[3] < (uint)piVar2[3]) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[2] + 0x21))) != '\0') {
          F_00a971f0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[3]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00a971f0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
    if ((uint)(*(int * PTR32 *)&gen_args[2])[3] < (uint)piVar2[3]) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00a886d0(&(*(int * PTR32 *)&gen_args[3]));
      if (((*(int * PTR32 *)&gen_args[3]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) || ((uint)piVar2[3] < (uint)(*(int * PTR32 *)&gen_args[3])[3])) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x21))) != '\0') {
          F_00a971f0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00a971f0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[3]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
  }
  puVar3 = (undefined4 *)F_00a98fb0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)),piVar2,0);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a9a400 */
uint F_00a9a400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9a400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x74,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  F_00a99200((int)this + 0xd,puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00a9a450 */
uint F_00a9a450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9a450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x2c,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 10) = 0;
  F_00a992a0((int)this + 0xd,puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00a9a4a0 */
uint F_00a9a4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9a4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x28,0,0x191);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 9) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 3) = *param_1;
    *(undefined2 *)(puVar1 + 4) = param_1[2];
    F_00a93db0(puVar1 + 5,param_1 + 4);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a9a500 */
uint F_00a9a500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9a500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  uint uVar2;
  uint * puVar3;
  uint * local_8;
  
  puVar3 = *(uint * PTR32 *)((int)this + 4);
  if (*(char *)((int)param_1 + 0x25) == '\0') {
    puVar1 = (uint *)F_004296a0(0x28,0,0x191);
    *puVar1 = *(uint *)((int)this + 4);
    puVar1[1] = *(uint *)((int)this + 4);
    puVar1[2] = *(uint *)((int)this + 4);
    *(undefined2 *)(puVar1 + 9) = 0;
    if (puVar1 + 3 != (uint *)0x0) {
      *(undefined2 *)(puVar1 + 3) = *(undefined2 *)(param_1 + 3);
      *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(param_1 + 4);
      F_00a93db0(puVar1 + 5,param_1 + 5);
    }
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 9) = *(undefined1 *)(param_1 + 9);
    local_8 = puVar3;
    if (*(char *)((int)puVar3 + 0x25) != '\0') {
      local_8 = puVar1;
    }
    uVar2 = F_00a9a500(this,(undefined4 *)*param_1,(uint)puVar1);
    *puVar1 = uVar2;
    uVar2 = F_00a9a500(this,(undefined4 *)param_1[2],(uint)puVar1);
    puVar1[2] = uVar2;
    puVar3 = local_8;
  }
  return (uint)puVar3;
}

/* ref: FUN_00a9a5b0 */
unsigned int F_00a9a5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9a5b0u, gen_a0, gen_a1, 0u, 0u);
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
  uVar7 = F_00a993d0(this,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 4))),iVar2);
  *(uint *)(iVar2 + 4) = uVar7;
  piVar3 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x21) != '\0') {
    *piVar3 = (int)piVar3;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    return 0;
  }
  cVar1 = *(char *)(*piVar4 + 0x21);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0x21);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0x21);
  while (cVar1 == '\0') {
    cVar1 = *((char *)GEN_TOP((*(int *)(iVar5 + 8) + 0x21)));
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = iVar2;
  return 0;
}

/* ref: FUN_00a9a670 */
uint F_00a9a670(unsigned int gen_a0)
{
  GEN_ENTER(0xa9a670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined4 *)this = 0;
  F_00a93600((undefined4 *)((int)this + 8),&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 8),
               *(undefined4 *)((int)this + 0xc));
  F_00a97d20((undefined *)((int)this + 0x18),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 4))) = *(int *)((int)this + 0x1c);
  *(undefined4 *)*(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x1c);
  uVar1 = *(uint *)((int)this + 0x1c);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00a9a6d0 */
uint F_00a9a6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9a6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  char cVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  byte bVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x168)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x16c);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = param_1;
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  cVar1 = *(char *)((int)puVar2[1] + 0xe1);
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)puVar2[1];
  while (cVar1 == '\0') {
    bVar4 = F_0042c7c0((*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 3,(*(undefined * PTR32 *)(gen_frame + 0x10)));
    if (bVar4 == 0) {
      puVar5 = (undefined4 *)*(*(undefined4 * PTR32 *)(gen_frame + 0xc));
    }
    else {
      puVar5 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0xc))[2];
      (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar2;
    }
    puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar5;
    cVar1 = *(char *)((int)puVar5 + 0xe1);
  }
  if ((puVar2 != *(undefined4 * PTR32 *)((int)this + 4)) &&
     (bVar4 = F_0042c7c0((*(undefined * PTR32 *)(gen_frame + 0x10)),puVar2 + 3), bVar4 == 0)) {
    F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
    return (uint)(puVar2 + 0x18);
  }
  F_0042b630(((undefined1 *)(gen_frame + 0xf0)));
  (*(undefined4 *)(gen_frame + 0x148)) = 0;
  (*(undefined4 *)(gen_frame + 0x14c)) = 0;
  (*(undefined4 *)(gen_frame + 0x150)) = 0;
  (*(undefined4 *)(gen_frame + 0x158)) = 0;
  (*(undefined4 *)(gen_frame + 0x15c)) = 0;
  (*(undefined4 *)(gen_frame + 0x160)) = 0;
  F_00a962b0(&(*(undefined4 *)(gen_frame + 0xe8)));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x14)),(*(undefined * PTR32 *)(gen_frame + 0x10)));
  (*(undefined4 *)(gen_frame + 0x6c)) = (*(undefined4 *)(gen_frame + 0xec));
  (*(undefined4 *)(gen_frame + 0x68)) = (*(undefined4 *)(gen_frame + 0xe8));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x70)),((undefined1 *)(gen_frame + 0xf0)));
  (*(undefined4 *)(gen_frame + 0xc4)) = (*(undefined4 *)(gen_frame + 0x144));
  F_00a92a70(((undefined1 *)(gen_frame + 0xc8)),&(*(undefined4 *)(gen_frame + 0x148)));
  F_00a92a70(((undefined1 *)(gen_frame + 0xd8)),&(*(undefined4 *)(gen_frame + 0x158)));
  puVar5 = (undefined4 *)F_004296a0(0xe4,0,800);
  *puVar5 = *(undefined4 *)((int)this + 4);
  puVar5[1] = *(undefined4 *)((int)this + 4);
  puVar5[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar5 + 0x38) = 0;
  if (puVar5 + 3 != (undefined4 *)0x0) {
    F_00a95ec0(puVar5 + 3,((undefined1 *)(gen_frame + 0x14)));
  }
  F_00a98560(this,&(*(undefined * PTR32 *)(gen_frame + 0x10)),puVar2,puVar5);
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  F_00a920d0(((undefined1 *)(gen_frame + 0xd8)));
  F_00a920d0(((undefined1 *)(gen_frame + 0xc8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x70)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00a920d0(&(*(undefined4 *)(gen_frame + 0x158)));
  F_00a920d0(&(*(undefined4 *)(gen_frame + 0x148)));
  F_0042c880(((undefined1 *)(gen_frame + 0xf0)));
  F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c));
  return (int)pvVar3 + 0x60;
}

/* ref: FUN_00a9a8b0 */
uint F_00a9a8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9a8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x188)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18c);
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)param_1;
  (*(uint *)(gen_frame + 0xa4)) = 0xa9a8d1;
  uVar2 = F_00a8b750(this,param_1);
  (*(uint *)(gen_frame + 0x11c)) = uVar2;
  if (uVar2 != *(uint *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)(uVar2 + 0xc);
    (*(uint *)(gen_frame + 0xa4)) = 0xa9a8e7;
    F_0042cbc0(((undefined1 *)(gen_frame + 0x134)),uVar2 + 0xc);
    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)param_1;
    (*(uint *)(gen_frame + 0xa4)) = 0xa9a8f3;
    F_0042cbc0(((undefined1 *)(gen_frame + 0xb8)),param_1);
    (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = ((undefined1 *)(gen_frame + 0x134));
    (*(undefined4 *)(gen_frame + 0x50)) = 0xa9a901;
    F_0042cbc0((gen_frame + 0x58),((undefined1 *)(gen_frame + 0x134)));
    F_0042cbc0((gen_frame + 0x4),((undefined1 *)(gen_frame + 0xb8)));
    bVar1 = F_00a67e30((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                         (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),
                         (*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),
                         (*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0x50)),(*(undefined1 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)));
    (*(byte *)(gen_frame + 0x123)) = bVar1;
    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa9a92b;
    F_0042c880(((undefined1 *)(gen_frame + 0xb8)));
    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa9a933;
    F_0042c880(((undefined1 *)(gen_frame + 0x134)));
    if ((*(byte *)(gen_frame + 0x123)) == 0) {
      uVar2 = (*(uint *)(gen_frame + 0x11c)) + 0x60;
      F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c));
      return uVar2;
    }
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)param_1;
  (*(uint *)(gen_frame + 0xa4)) = 0xa9a945;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x124)),param_1);
  (*(undefined4 *)(gen_frame + 0x178)) = 0;
  (*(undefined4 *)(gen_frame + 0x17c)) = 0;
  (*(undefined4 *)(gen_frame + 0x180)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa9a956;
  F_00a93680(&(*(undefined4 *)(gen_frame + 0x178)));
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0x320;
  (*(uint *)(gen_frame + 0xa4)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0xa0)) = (uint *)0x74;
  (*(undefined4 *)(gen_frame + 0x178)) = 0;
  (*(undefined4 *)(gen_frame + 0x17c)) = 0;
  (*(undefined4 *)(gen_frame + 0x180)) = 0;
  (*(undefined4 *)(gen_frame + 0x10c)) = 0;
  (*(undefined4 *)(gen_frame + 0x110)) = 0;
  (*(undefined4 *)(gen_frame + 0x114)) = 0;
  puVar3 = (undefined4 *)F_004296a0(0x74,0,800);
  *puVar3 = *(undefined4 *)((int)this + 4);
  puVar3[1] = *(undefined4 *)((int)this + 4);
  puVar3[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar3 + 0x1c) = 0;
  if (puVar3 + 3 != (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)((undefined1 *)(gen_frame + 0x124));
    (*(uint *)(gen_frame + 0xa4)) = 0xa9a99f;
    F_0042cbc0(puVar3 + 3,((undefined1 *)(gen_frame + 0x124)));
    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = &(*(undefined4 *)(gen_frame + 0x178));
    (*(uint *)(gen_frame + 0xa4)) = 0xa9a9ab;
    F_00a93d20(puVar3 + 0x18,&(*(undefined4 *)(gen_frame + 0x178)));
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = puVar3;
  (*(uint *)(gen_frame + 0xa4)) = (*(uint *)(gen_frame + 0x11c));
  (*(uint * PTR32 *)(gen_frame + 0xa0)) = &(*(uint *)(gen_frame + 0x11c));
  F_00a98900(this,&(*(uint *)(gen_frame + 0x11c)),(*(uint *)(gen_frame + 0x11c)),puVar3);
  uVar2 = (*(uint *)(gen_frame + 0x11c));
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa9a9c6;
  F_00a93680(&(*(undefined4 *)(gen_frame + 0x178)));
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa9a9ce;
  F_0042c880(((undefined1 *)(gen_frame + 0x124)));
  (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0xa9a9d6;
  F_00a93680(&(*(undefined4 *)(gen_frame + 0x10c)));
  F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c));
  return uVar2 + 0x60;
}

/* ref: FUN_00a9aa10 */
uint F_00a9aa10(unsigned int gen_a0)
{
  GEN_ENTER(0xa9aa10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a99750(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a9aa40 */
uint F_00a9aa40(unsigned int gen_a0)
{
  GEN_ENTER(0xa9aa40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a997c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a9aa60 */
uint F_00a9aa60(unsigned int gen_a0)
{
  GEN_ENTER(0xa9aa60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a99890(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a9aa80 */
uint F_00a9aa80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9aa80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_00a99750(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x29) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x29) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x29);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x29);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x29);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x29);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a99950(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a9ab40 */
uint F_00a9ab40(unsigned int gen_a0)
{
  GEN_ENTER(0xa9ab40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a9aa80(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a9ab60 */
uint F_00a9ab60(unsigned int gen_a0)
{
  GEN_ENTER(0xa9ab60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a99e30(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a9ab90 */
uint F_00a9ab90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9ab90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_00a982d0(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x21);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x21);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x21);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x21);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a98050(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a9ac50 */
uint F_00a9ac50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ac50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar2 = F_004296a0(0x24,0,800);
  *(uint *)((int)this + 4) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x21))) = 1;
  if (this != param_1) {
    F_00a982d0(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    uVar1 = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_1 + 4);
    *(undefined4 *)((int)param_1 + 4) = uVar1;
    uVar1 = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
    *(undefined4 *)((int)param_1 + 8) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00a9ace0 */
uint F_00a9ace0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9ace0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x74,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  F_00a99200((int)this + 0xd,puVar1 + 3,param_2);
  F_00a98710(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a9ad40 */
uint F_00a9ad40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9ad40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x2c,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 10) = 0;
  F_00a992a0((int)this + 0xd,puVar1 + 3,param_2);
  F_00a9a1a0(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a9ada0 */
uint F_00a9ada0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9ada0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x28,0,0x191);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 9) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 3) = *param_2;
    *(undefined2 *)(puVar1 + 4) = param_2[2];
    F_00a93db0(puVar1 + 5,param_2 + 4);
  }
  F_00a9a0b0(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a9ae10 */
uint F_00a9ae10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9ae10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00a969d0(puVar1 + 3,param_3);
  F_00a9a2a0(this,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_00a9ae70 */
unsigned int F_00a9ae70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ae70u, gen_a0, gen_a1, 0u, 0u);
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
  uVar7 = F_00a9a500(this,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 4))),iVar2);
  *(uint *)(iVar2 + 4) = uVar7;
  piVar3 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x25) != '\0') {
    *piVar3 = (int)piVar3;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    return 0;
  }
  cVar1 = *(char *)(*piVar4 + 0x25);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0x25);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0x25);
  while (cVar1 == '\0') {
    cVar1 = *((char *)GEN_TOP((*(int *)(iVar5 + 8) + 0x25)));
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = iVar2;
  return 0;
}

/* ref: FUN_00a9aef0 */
uint F_00a9aef0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9aef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a997c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0xe4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9af30 */
uint F_00a9af30(unsigned int gen_a0)
{
  GEN_ENTER(0xa9af30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a99890(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x74,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9af70 */
uint F_00a9af70(unsigned int gen_a0)
{
  GEN_ENTER(0xa9af70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9aa80(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x2c,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9afb0 */
uint F_00a9afb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9afb0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00a8df70((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_00a8ecb0((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_00a9aa80((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00a9b010 */
uint F_00a9b010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9b010u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  puVar1 = (*(uint * PTR32 *)&gen_args[1]);
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar5;
  if (*(char *)((int)puVar5[1] + 0x21) == '\0') {
    puVar3 = (undefined4 *)puVar5[1];
    do {
      if ((uint)puVar3[3] < *(*(uint * PTR32 *)&gen_args[1])) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar3;
        puVar2 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  if ((puVar5 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) && ((uint)puVar5[3] <= *(*(uint * PTR32 *)&gen_args[1]))) {
    return (uint)(puVar5 + 4);
  }
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  puVar3 = (undefined4 *)F_004296a0(0x18,0,800);
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar3;
  *puVar3 = puVar3;
  puVar3[1] = puVar3;
  puVar3[2] = puVar3;
  *(undefined1 *)(puVar3 + 5) = 1;
  *(undefined1 *)((int)puVar3 + 0x15) = 1;
  uVar4 = *puVar1;
  F_00a91460(((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x18)));
  puVar3 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar3 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  *(undefined2 *)(puVar3 + 8) = 0;
  if (puVar3 + 3 != (uint *)0x0) {
    puVar3[3] = uVar4;
    puVar3[6] = 0;
    uVar4 = F_004296a0(0x18,0,800);
    puVar3[5] = uVar4;
    *(uint *)uVar4 = uVar4;
    *(undefined4 *)(puVar3[5] + 4) = puVar3[5];
    *(undefined4 *)(puVar3[5] + 8) = puVar3[5];
    *(undefined1 *)(puVar3[5] + 0x14) = 1;
    *(undefined1 *)(puVar3[5] + 0x15) = 1;
    F_00a92ec0(puVar3 + 4,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x28));
  }
  F_00a9a2a0((*(undefined * PTR32 *)&gen_args[0]),&(*(uint * PTR32 *)&gen_args[1]),puVar5,puVar3);
  puVar1 = (*(uint * PTR32 *)&gen_args[1]);
  F_0095c5e0(((undefined1 *)(gen_frame + 0x8)),&(*(uint * PTR32 *)&gen_args[1]),*(*(undefined4 * PTR32 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xc)),0x18,800);
  F_0095c5e0(((undefined1 *)(gen_frame + 0x18)),&(*(uint * PTR32 *)&gen_args[1]),*(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),(*(undefined4 * PTR32 *)(gen_frame + 0x1c)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x1c)),0x18,800);
  return (uint)(puVar1 + 4);
}

/* ref: FUN_00a9b1a0 */
uint F_00a9b1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9b1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_00a99e30(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x25) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x25) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x25);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x25);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x25);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x25);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a99bd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a9b260 */
uint F_00a9b260(unsigned int gen_a0)
{
  GEN_ENTER(0xa9b260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a9ab90(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a9b280 */
uint F_00a9b280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9b280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x24,0,800);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x21))) = 1;
  F_00a9a5b0(this,param_1);
  return (uint)this;
}

/* ref: FUN_00a9b2d0 */
uint F_00a9b2d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9b2d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a997c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0xe4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9b310 */
uint F_00a9b310(unsigned int gen_a0)
{
  GEN_ENTER(0xa9b310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a99890(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x74,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9b350 */
uint F_00a9b350(unsigned int gen_a0)
{
  GEN_ENTER(0xa9b350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9aa80(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x2c,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9b390 */
uint F_00a9b390(unsigned int gen_a0)
{
  GEN_ENTER(0xa9b390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a99890((undefined *)((int)this + 0x18),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x1c),
               *(undefined4 * PTR32 *)((int)this + 0x1c));
  F_00429760(*(undefined4 *)((int)this + 0x1c),0x74,800);
  uVar1 = F_00a93680((undefined *)((int)this + 8));
  return uVar1;
}

/* ref: FUN_00a9b3d0 */
uint F_00a9b3d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9b3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a997c0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0xe4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9b410 */
uint F_00a9b410(unsigned int gen_a0)
{
  GEN_ENTER(0xa9b410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00492c50((undefined *)((int)this + 0x54));
  F_00429760(*(undefined4 *)((int)this + 0x54),8,0x2c4);
  *(undefined4 *)((int)this + 0x54) = 0;
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00a9b440 */
uint F_00a9b440(unsigned int gen_a0)
{
  GEN_ENTER(0xa9b440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00492c50((undefined *)((int)this + 0x54));
  F_00429760(*(undefined4 *)((int)this + 0x54),8,0x2c4);
  *(undefined4 *)((int)this + 0x54) = 0;
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00a9b470 */
uint F_00a9b470(unsigned int gen_a0)
{
  GEN_ENTER(0xa9b470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00492c50((undefined *)((int)this + 0x54));
  F_00429760(*(undefined4 *)((int)this + 0x54),8,0x2c4);
  *(undefined4 *)((int)this + 0x54) = 0;
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00a9b570 */
uint F_00a9b570(unsigned int gen_a0)
{
  GEN_ENTER(0xa9b570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a9b1a0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a9b590 */
uint F_00a9b590(unsigned int gen_a0)
{
  GEN_ENTER(0xa9b590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9ab90(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9b5d0 */
uint F_00a9b5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9b5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00a9ac50(this,param_1);
  return (uint)this;
}

/* ref: FUN_00a9b5f0 */
uint F_00a9b5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9b5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00492c50((undefined *)((int)this + 0x54));
  F_00429760(*(undefined4 *)((int)this + 0x54),8,0x2c4);
  *(undefined4 *)((int)this + 0x54) = 0;
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a9b640 */
uint F_00a9b640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9b640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00492c50((undefined *)((int)this + 0x54));
  F_00429760(*(undefined4 *)((int)this + 0x54),8,0x2c4);
  *(undefined4 *)((int)this + 0x54) = 0;
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a9b690 */
uint F_00a9b690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9b690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00492c50((undefined *)((int)this + 0x54));
  F_00429760(*(undefined4 *)((int)this + 0x54),8,0x2c4);
  *(undefined4 *)((int)this + 0x54) = 0;
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a9b6e0 */
uint F_00a9b6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9b6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x28,0,0x191);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x25))) = 1;
  F_00a9ae70(this,param_1);
  return (uint)this;
}

/* ref: FUN_00a9b730 */
uint F_00a9b730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9b730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x24,0,800);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x21))) = 1;
  F_00a9a5b0(this,param_1);
  return (uint)this;
}

/* ref: FUN_00a9b780 */
uint F_00a9b780(unsigned int gen_a0)
{
  GEN_ENTER(0xa9b780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0xe4,0,800);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0xe0))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0xe1))) = 1;
  *(undefined4 *)this = 0;
  F_00a97b90((undefined *)((int)this + 4),*((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *(undefined4 *)*(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 0xc) = 0;
  return (uint)this;
}

/* ref: FUN_00a9b800 */
uint F_00a9b800(unsigned int gen_a0)
{
  GEN_ENTER(0xa9b800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar1 = F_004296a0(0x74,0,800);
  *(uint *)((int)this + 0x1c) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 4))) = *(int *)((int)this + 0x1c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 8))) = *(int *)((int)this + 0x1c);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x70))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x71))) = 1;
  *(undefined4 *)this = 0;
  F_00a93600((undefined *)((int)this + 8),&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 8),
               *(undefined4 *)((int)this + 0xc));
  F_00a97d20((undefined *)((int)this + 0x18),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 4))) = *(int *)((int)this + 0x1c);
  *(undefined4 *)*(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x1c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 8))) = *(int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  return (uint)this;
}

/* ref: FUN_00a9b8a0 */
uint F_00a9b8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9b8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9b1a0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a9b8e0 */
uint F_00a9b8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9b8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9ab90(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9b920 */
uint F_00a9b920(unsigned int gen_a0)
{
  GEN_ENTER(0xa9b920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9ab90((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9b9a0 */
uint F_00a9b9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9b9a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = *param_1;
  F_00a9ac50((undefined *)((int)this + 4),param_2);
  return (uint)this;
}

/* ref: FUN_00a9b9c0 */
uint F_00a9b9c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9b9c0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00492c50((undefined *)((int)param_1 + 0x54));
  F_00429760(*(undefined4 *)((int)param_1 + 0x54),8,0x2c4);
  *(undefined4 *)((int)param_1 + 0x54) = 0;
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00a9ba00 */
uint F_00a9ba00(unsigned int gen_a0)
{
  GEN_ENTER(0xa9ba00u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00492c50((undefined *)((int)param_1 + 0x54));
  F_00429760(*(undefined4 *)((int)param_1 + 0x54),8,0x2c4);
  *(undefined4 *)((int)param_1 + 0x54) = 0;
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00a9ba40 */
uint F_00a9ba40(unsigned int gen_a0)
{
  GEN_ENTER(0xa9ba40u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00492c50((undefined *)((int)param_1 + 0x54));
  F_00429760(*(undefined4 *)((int)param_1 + 0x54),8,0x2c4);
  *(undefined4 *)((int)param_1 + 0x54) = 0;
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00a9ba80 */
uint F_00a9ba80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ba80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x28,0,0x191);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x25))) = 1;
  F_00a9ae70(this,param_1);
  return (uint)this;
}

/* ref: FUN_00a9bad0 */
uint F_00a9bad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9bad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x24,0,800);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x21))) = 1;
  F_00a9a5b0((undefined *)((int)this + 4),param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00a9bb30 */
uint F_00a9bb30(unsigned int gen_a0)
{
  GEN_ENTER(0xa9bb30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9b1a0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a9bbb0 */
uint F_00a9bbb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9bbb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9ab90((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9bbf0 */
uint F_00a9bbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9bbf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = *param_1;
  F_00a9ac50((undefined *)((int)this + 4),param_2);
  return (uint)this;
}

/* ref: FUN_00a9bc10 */
uint F_00a9bc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9bc10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  F_00492c50((undefined *)((int)param_2 + 0x54));
  F_00429760(*(undefined4 *)((int)param_2 + 0x54),8,0x2c4);
  *(undefined4 *)((int)param_2 + 0x54) = 0;
  uVar1 = F_0042c880(param_2);
  return (uint)uVar1;
}

/* ref: FUN_00a9bc50 */
uint F_00a9bc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9bc50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  F_00492c50((undefined *)((int)param_2 + 0x54));
  F_00429760(*(undefined4 *)((int)param_2 + 0x54),8,0x2c4);
  *(undefined4 *)((int)param_2 + 0x54) = 0;
  uVar1 = F_0042c880(param_2);
  return (uint)uVar1;
}

/* ref: FUN_00a9bc90 */
uint F_00a9bc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9bc90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  F_00492c50((undefined *)((int)param_2 + 0x54));
  F_00429760(*(undefined4 *)((int)param_2 + 0x54),8,0x2c4);
  *(undefined4 *)((int)param_2 + 0x54) = 0;
  uVar1 = F_0042c880(param_2);
  return (uint)uVar1;
}

/* ref: FUN_00a9bcd0 */
uint F_00a9bcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9bcd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9ab90((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  F_00429760(*(undefined4 *)((int)this + 8),0x24,800);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a9bd20 */
uint F_00a9bd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9bd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x28,0,0x191);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x25))) = 1;
  F_00a9ae70(this,param_1);
  return (uint)this;
}

/* ref: FUN_00a9bd70 */
uint F_00a9bd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9bd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x24,0,800);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x21))) = 1;
  F_00a9a5b0((undefined *)((int)this + 4),param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00a9be10 */
uint F_00a9be10(unsigned int gen_a0)
{
  GEN_ENTER(0xa9be10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9b1a0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a9be50 */
uint F_00a9be50(unsigned int gen_a0)
{
  GEN_ENTER(0xa9be50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9b1a0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x28,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a9be90 */
unsigned int F_00a9be90(unsigned int gen_a0)
{
  GEN_ENTER(0xa9be90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  
  if (*(int *)((int)this + 0x10) != 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 0xc) * 4)));
    F_00492c50((undefined *)((int)this_00 + 0x54));
    F_00429760(*(undefined4 *)((int)this_00 + 0x54),8,0x2c4);
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    F_0042c880(this_00);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    if (*(uint *)((int)this + 8) <= *(uint *)((int)this + 0xc)) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00a9bef0 */
unsigned int F_00a9bef0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9bef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  
  if (*(int *)((int)this + 0x10) != 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 0xc) * 4)));
    F_00492c50((undefined *)((int)this_00 + 0x54));
    F_00429760(*(undefined4 *)((int)this_00 + 0x54),8,0x2c4);
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    F_0042c880(this_00);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    if (*(uint *)((int)this + 8) <= *(uint *)((int)this + 0xc)) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00a9bf50 */
unsigned int F_00a9bf50(unsigned int gen_a0)
{
  GEN_ENTER(0xa9bf50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  
  if (*(int *)((int)this + 0x10) != 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 0xc) * 4)));
    F_00492c50((undefined *)((int)this_00 + 0x54));
    F_00429760(*(undefined4 *)((int)this_00 + 0x54),8,0x2c4);
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    F_0042c880(this_00);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    if (*(uint *)((int)this + 8) <= *(uint *)((int)this + 0xc)) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00a9bfb0 */
uint F_00a9bfb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9bfb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar2 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
    if (*(uint *)((int)this + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)((int)this + 8);
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4)));
    F_00492c50((undefined *)((int)this_00 + 0x54));
    F_00429760(*(undefined4 *)((int)this_00 + 0x54),8,0x2c4);
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    uVar3 = F_0042c880(this_00);
    uVar2 = (uint)uVar3;
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00a9c010 */
uint F_00a9c010(unsigned int gen_a0)
{
  GEN_ENTER(0xa9c010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar2 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
    if (*(uint *)((int)this + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)((int)this + 8);
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4)));
    F_00492c50((undefined *)((int)this_00 + 0x54));
    F_00429760(*(undefined4 *)((int)this_00 + 0x54),8,0x2c4);
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    uVar3 = F_0042c880(this_00);
    uVar2 = (uint)uVar3;
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00a9c070 */
uint F_00a9c070(unsigned int gen_a0)
{
  GEN_ENTER(0xa9c070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar2 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
    if (*(uint *)((int)this + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)((int)this + 8);
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4)));
    F_00492c50((undefined *)((int)this_00 + 0x54));
    F_00429760(*(undefined4 *)((int)this_00 + 0x54),8,0x2c4);
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    uVar3 = F_0042c880(this_00);
    uVar2 = (uint)uVar3;
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00a9c0d0 */
uint F_00a9c0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9c0d0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2)));
  uVar5 = param_1 & 0xffff;
  if ((uint)piVar2[4] <= uVar5) {
    F_00494140(piVar2,uVar5 + 1);
  }
  piVar3 = (int *)0x0;
  if (((int *)*piVar2 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*piVar2, puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  uVar5 = piVar2[3] + uVar5;
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar2 = *(int * PTR32 *)*piVar3, piVar2 == (int *)0x0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar2;
  }
  if (*(uint *)(iVar4 + 8) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(iVar4 + 8);
  }
  uVar5 = F_00490f90(*((undefined * PTR32 *)GEN_TOP((*(int *)(iVar4 + 4) + uVar5 * 4))),param_2);
  return uVar5;
}

/* ref: FUN_00a9c160 */
uint F_00a9c160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9c160u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined * this;
  int * piVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2)));
  uVar5 = param_1 & 0xffff;
  if ((uint)piVar2[4] <= uVar5) {
    F_00494140(piVar2,uVar5 + 1);
  }
  piVar3 = (int *)0x0;
  if (((int *)*piVar2 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*piVar2, puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  uVar5 = piVar2[3] + uVar5;
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar2 = *(int * PTR32 *)*piVar3, piVar2 == (int *)0x0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar2;
  }
  if (*(uint *)(iVar4 + 8) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(iVar4 + 8);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar4 + 4) + uVar5 * 4)));
  if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
    if ((*(char *)(puVar1 + 2) != '\0') && (*(char *)(puVar1 + 2) == '\x01')) {
      this = *(undefined * PTR32 *)puVar1[1];
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + -1;
      if (*(int *)((int)this + 0x54) < 1) {
        F_0042c880(this);
        F_00406ad0(this);
      }
    }
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0xff;
  }
  *puVar1 = *param_2;
  puVar1[1] = puVar1;
  *(undefined1 *)(puVar1 + 2) = 0;
  return (uint)param_2;
}

/* ref: FUN_00a9c220 */
uint F_00a9c220(unsigned int gen_a0)
{
  GEN_ENTER(0xa9c220u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[0]);
  F_00a9ab90((undefined *)((*(int *)&gen_args[0]) + 4),&(*(int *)&gen_args[0]),**(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 8),
               *(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 8));
  uVar2 = F_00429760(*(undefined4 *)(iVar1 + 8),0x24,800);
  return (uint)uVar2;
}

/* ref: FUN_00a9c260 */
uint F_00a9c260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9c260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x28,0,0x191);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x25))) = 1;
  F_00a9ae70((undefined *)((int)this + 4),param_2);
  return (uint)this;
}

/* ref: FUN_00a9c2c0 */
unsigned int F_00a9c2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9c2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[3] = 0;
    uVar1 = F_004296a0(0x24,0,800);
    param_1[2] = uVar1;
    *(uint *)uVar1 = uVar1;
    *(undefined4 *)(param_1[2] + 4) = param_1[2];
    *(undefined4 *)(param_1[2] + 8) = param_1[2];
    *(undefined1 *)(param_1[2] + 0x20) = 1;
    *(undefined1 *)(param_1[2] + 0x21) = 1;
    F_00a9a5b0(param_1 + 1,param_2 + 1);
  }
  return 0;
}

/* ref: FUN_00a9c320 */
uint F_00a9c320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9c320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x28,0,0x191);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x25))) = 1;
  F_00a9ae70((undefined *)((int)this + 4),param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00a9c380 */
uint F_00a9c380(unsigned int gen_a0)
{
  GEN_ENTER(0xa9c380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9b1a0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x28,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a9c3c0 */
uint F_00a9c3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9c3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *(int *)((int)this + 0x10);
  while (iVar3 != 0) {
    if (*(int *)((int)this + 0x10) != 0) {
      uVar2 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
      if (*(uint *)((int)this + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)((int)this + 8);
      }
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4)));
      F_00492c50((undefined *)((int)this_00 + 0x54));
      F_00429760(*(undefined4 *)((int)this_00 + 0x54),8,0x2c4);
      *(undefined4 *)((int)this_00 + 0x54) = 0;
      F_0042c880(this_00);
      piVar1 = (int *)((int)this + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar3 = *(int *)((int)this + 0x10);
  }
  iVar3 = *(int *)((int)this + 8);
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))),0x74,800);
    }
  }
  uVar2 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,800);
    uVar2 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a9c480 */
uint F_00a9c480(unsigned int gen_a0)
{
  GEN_ENTER(0xa9c480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *(int *)((int)this + 0x10);
  while (iVar3 != 0) {
    if (*(int *)((int)this + 0x10) != 0) {
      uVar2 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
      if (*(uint *)((int)this + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)((int)this + 8);
      }
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4)));
      F_00492c50((undefined *)((int)this_00 + 0x54));
      F_00429760(*(undefined4 *)((int)this_00 + 0x54),8,0x2c4);
      *(undefined4 *)((int)this_00 + 0x54) = 0;
      F_0042c880(this_00);
      piVar1 = (int *)((int)this + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar3 = *(int *)((int)this + 0x10);
  }
  iVar3 = *(int *)((int)this + 8);
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))),0x74,800);
    }
  }
  uVar2 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,800);
    uVar2 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a9c540 */
uint F_00a9c540(unsigned int gen_a0)
{
  GEN_ENTER(0xa9c540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *(int *)((int)this + 0x10);
  while (iVar3 != 0) {
    if (*(int *)((int)this + 0x10) != 0) {
      uVar2 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
      if (*(uint *)((int)this + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)((int)this + 8);
      }
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4)));
      F_00492c50((undefined *)((int)this_00 + 0x54));
      F_00429760(*(undefined4 *)((int)this_00 + 0x54),8,0x2c4);
      *(undefined4 *)((int)this_00 + 0x54) = 0;
      F_0042c880(this_00);
      piVar1 = (int *)((int)this + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar3 = *(int *)((int)this + 0x10);
  }
  iVar3 = *(int *)((int)this + 8);
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))),0x74,800);
    }
  }
  uVar2 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,800);
    uVar2 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a9c600 */
uint F_00a9c600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9c600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x28,0,0x191);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x25))) = 1;
  F_00a9ae70((undefined *)((int)this + 4),param_2);
  return (uint)this;
}

/* ref: FUN_00a9c660 */
uint F_00a9c660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9c660u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  F_00a9ab90((undefined *)((*(int *)&gen_args[1]) + 4),&(*(int *)&gen_args[1]),**(undefined4 * PTR32 *)((*(int *)&gen_args[1]) + 8),
               *(undefined4 * PTR32 *)((*(int *)&gen_args[1]) + 8));
  uVar2 = F_00429760(*(undefined4 *)(iVar1 + 8),0x24,800);
  return (uint)uVar2;
}

/* ref: FUN_00a9c690 */
uint F_00a9c690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9c690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9b1a0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  F_00429760(*(undefined4 *)((int)this + 8),0x28,0x191);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a9c6e0 */
uint F_00a9c6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9c6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  F_004949f0((undefined *)((int)this + 0x54),param_1 + 0x54);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined1 *)((int)this + 0x70) = *(undefined1 *)(param_1 + 0x70);
  return (uint)this;
}

/* ref: FUN_00a9c710 */
uint F_00a9c710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9c710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  F_004949f0((undefined *)((int)this + 0x54),param_1 + 0x54);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined1 *)((int)this + 0x70) = *(undefined1 *)(param_1 + 0x70);
  return (uint)this;
}

/* ref: FUN_00a9c740 */
uint F_00a9c740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9c740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  F_004949f0((undefined *)((int)this + 0x54),param_1 + 0x54);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined1 *)((int)this + 0x70) = *(undefined1 *)(param_1 + 0x70);
  return (uint)this;
}

/* ref: FUN_00a9c770 */
uint F_00a9c770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa9c770u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  piVar4 = (*(int * PTR32 *)&gen_args[4]);
  if (0xfffffffd < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
    F_00a9ab90((*(int * PTR32 *)&gen_args[4]) + 4,&(*(undefined4 *)&gen_args[2]),*((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[4])[5])),((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[4])[5])));
    F_00429760(piVar4[5],0x24,800);
    F_00429760(piVar4,0x24,800);
                    
    F_00c4579a("map/set<T> too long");
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 1;
  (*(int * PTR32 *)&gen_args[4])[1] = (int)(*(undefined4 * PTR32 *)&gen_args[3]);
  if ((*(undefined4 * PTR32 *)&gen_args[3]) == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1] = (*(int * PTR32 *)&gen_args[4]);
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(int * PTR32 *)&gen_args[4]);
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = (*(int * PTR32 *)&gen_args[4]);
  }
  else if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
    (*(undefined4 * PTR32 *)&gen_args[3])[2] = (*(int * PTR32 *)&gen_args[4]);
    if ((*(undefined4 * PTR32 *)&gen_args[3]) == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = (*(int * PTR32 *)&gen_args[4]);
    }
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[4]);
    if ((*(undefined4 * PTR32 *)&gen_args[3]) == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (int)(*(int * PTR32 *)&gen_args[4]);
    }
  }
  cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[4])[1] + 0x20)));
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[4]);
      *(undefined1 *)(iVar2 + 0x20) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x20) == '\0') {
        *(undefined1 *)(piVar5 + 8) = 1;
        *(undefined1 *)(iVar2 + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x21) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar4;
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
        *(undefined1 *)(piVar4[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x21) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar6;
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
LAB_00a9c98d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x20) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = iVar2;
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
        *(undefined1 *)(piVar4[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x21) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar6;
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
        goto LAB_00a9c98d;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *(undefined1 *)(iVar2 + 0x20) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x20);
  } while( true );
}

/* ref: FUN_00a9c9c0 */
unsigned int F_00a9c9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9c9c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00a9c2c0(param_2,param_3);
  return 0;
}

/* ref: FUN_00a9c9e0 */
uint F_00a9c9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9c9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x28,0,0x191);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x25))) = 1;
  F_00a9ae70((undefined *)((int)this + 4),param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00a9ca40 */
uint F_00a9ca40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9ca40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_0042cbc0(this,param_1);
  F_004949f0((undefined *)((int)this + 0x54),param_2);
  *(undefined4 *)((int)this + 0x6c) = param_3;
  *(undefined1 *)((int)this + 0x70) = 0;
  return (uint)this;
}

/* ref: FUN_00a9ca70 */
uint F_00a9ca70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9ca70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_0042cbc0(this,param_1);
  F_004949f0((undefined *)((int)this + 0x54),param_2);
  *(undefined4 *)((int)this + 0x6c) = param_3;
  *(undefined1 *)((int)this + 0x70) = 0;
  return (uint)this;
}

/* ref: FUN_00a9caa0 */
uint F_00a9caa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9caa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_0042cbc0(this,param_1);
  F_004949f0((undefined *)((int)this + 0x54),param_2);
  *(undefined4 *)((int)this + 0x6c) = param_3;
  *(undefined1 *)((int)this + 0x70) = 0;
  return (uint)this;
}

/* ref: FUN_00a9cad0 */
uint F_00a9cad0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9cad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a9c3c0(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,800);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a9cb00 */
uint F_00a9cb00(unsigned int gen_a0)
{
  GEN_ENTER(0xa9cb00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a9c480(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,800);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a9cb30 */
uint F_00a9cb30(unsigned int gen_a0)
{
  GEN_ENTER(0xa9cb30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a9c540(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,800);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a9cb60 */
unsigned int F_00a9cb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9cb60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x21)));
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  while (cVar1 == '\0') {
    F_00a9cb60((*(undefined * PTR32 *)&gen_args[0]),(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00a9ab90(piVar3 + 4,&(*(int * PTR32 *)&gen_args[1]),*(undefined4 *)piVar3[5],(undefined4 *)piVar3[5]);
    F_00429760(piVar3[5],0x24,800);
    F_00429760(piVar3,0x24,800);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return 0;
}

/* ref: FUN_00a9cbd0 */
uint F_00a9cbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9cbd0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int * piVar6;
  int * piVar7;
  
  piVar6 = (*(int * PTR32 *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x21))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)&gen_args[2]);
  F_00a88660(&(*(int * PTR32 *)&gen_args[2]));
  piVar5 = (int *)*piVar6;
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(piVar6[2] + 0x21) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar6)) {
      piVar5[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar6;
      piVar5 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar6[2]) {
        piVar5 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x21) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar6[2];
        *(int * PTR32 *)(piVar6[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) == piVar6) {
        *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar6[1];
        if ((int *)*puVar2 == piVar6) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar6[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 8))) = (char)piVar6[8];
      *(char *)(piVar6 + 8) = (char)iVar1;
      goto LAB_00a9ccea;
    }
  }
  else {
    piVar7 = (int *)piVar6[2];
  }
  piVar5 = (int *)piVar6[1];
  if (*(char *)((int)piVar7 + 0x21) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) == piVar6) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) = piVar7;
  }
  else if ((int *)*piVar5 == piVar6) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) == piVar6) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      piVar3 = (int *)F_00a88430(piVar7);
    }
    **(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) = piVar3;
  }
  iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4);
  (*(int *)(gen_frame + 0x0)) = iVar1;
  if (*(int * PTR32 *)(iVar1 + 8) == piVar6) {
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      uVar4 = F_00a88410(piVar7);
      *(uint *)((*(int *)(gen_frame + 0x0)) + 8) = uVar4;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar5;
    }
  }
LAB_00a9ccea: ;
  if ((char)(*(int * PTR32 *)(gen_frame + 0x4))[8] == '\x01') {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4)))) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[8] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_00a8bfe0(this_00,piVar6);
            piVar5 = (int *)piVar6[2];
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x21) == '\0') {
            if ((*(char *)(*piVar5 + 0x20) != '\x01') || (*(char *)(piVar5[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x20) = 1;
                *(undefined1 *)(piVar5 + 8) = 0;
                F_00a8c040(this_00,piVar5);
                piVar5 = (int *)piVar6[2];
                this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
              }
              *(char *)(piVar5 + 8) = (char)piVar6[8];
              *(undefined1 *)(piVar6 + 8) = 1;
              *(undefined1 *)(piVar5[2] + 0x20) = 1;
              F_00a8bfe0(this_00,piVar6);
              break;
            }
LAB_00a9cda8: ;
            *(undefined1 *)(piVar5 + 8) = 0;
          }
        }
        else {
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_00a8c040(this_00,piVar6);
            piVar5 = (int *)*piVar6;
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x21) == '\0') {
            if ((*(char *)(piVar5[2] + 0x20) == '\x01') && (*(char *)(*piVar5 + 0x20) == '\x01'))
            goto LAB_00a9cda8;
            if (*(char *)(*piVar5 + 0x20) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x20) = 1;
              *(undefined1 *)(piVar5 + 8) = 0;
              F_00a8bfe0(this_00,piVar5);
              piVar5 = (int *)*piVar6;
              this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            *(char *)(piVar5 + 8) = (char)piVar6[8];
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(*piVar5 + 0x20) = 1;
            F_00a8c040(this_00,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *((int * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 4) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
  F_00a9ab90((*(int * PTR32 *)(gen_frame + 0x4)) + 4,&(*(int *)(gen_frame + 0x0)),*(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[5],(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[5]);
  F_00429760(piVar6[5],0x24,800);
  F_00429760(piVar6,0x24,800);
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) != 0) {
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a9ce50 */
uint F_00a9ce50(unsigned int gen_a0)
{
  GEN_ENTER(0xa9ce50u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[0]);
  F_00a9b1a0((undefined *)((*(int *)&gen_args[0]) + 4),&(*(int *)&gen_args[0]),**(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 8),
               *(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 8));
  uVar2 = F_00429760(*(undefined4 *)(iVar1 + 8),0x28,0x191);
  return (uint)uVar2;
}

/* ref: FUN_00a9ce90 */
unsigned int F_00a9ce90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ce90u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    F_004949f0((undefined *)((int)param_1 + 0x54),param_2 + 0x54);
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    *(undefined1 *)((int)param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  }
  return 0;
}

/* ref: FUN_00a9ced0 */
unsigned int F_00a9ced0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ced0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    F_004949f0((undefined *)((int)param_1 + 0x54),param_2 + 0x54);
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    *(undefined1 *)((int)param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  }
  return 0;
}

/* ref: FUN_00a9cf10 */
unsigned int F_00a9cf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9cf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    F_004949f0((undefined *)((int)param_1 + 0x54),param_2 + 0x54);
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    *(undefined1 *)((int)param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  }
  return 0;
}

/* ref: FUN_00a9cf50 */
uint F_00a9cf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9cf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  bool bVar4;
  
  iVar1 = (*(int *)&gen_args[2]);
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar4 = true;
  (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),1);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar4 = *(uint *)(iVar1 + 0xc) < (uint)puVar3[3];
      }
      else {
        bVar4 = *(uint *)(iVar1 + 0xc) <= (uint)puVar3[3];
      }
      (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),bVar4);
      if (bVar4 == false) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar3;
  if (bVar4 != false) {
    if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar3 = (undefined4 *)F_00a9c770((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar3,iVar1);
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00a88f70(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)(iVar1 + 0xc)) {
    puVar3 = (undefined4 *)F_00a9c770((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(int *)&gen_args[2]),puVar3,iVar1);
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00a9ab90((undefined *)(iVar1 + 0x10),&(*(undefined4 * PTR32 *)&gen_args[3]),**(undefined4 * PTR32 *)(iVar1 + 0x14),
               *(undefined4 * PTR32 *)(iVar1 + 0x14));
  F_00429760(*(undefined4 *)(iVar1 + 0x14),0x24,800);
  F_00429760(iVar1,0x24,800);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a9d050 */
uint F_00a9d050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00a9c2c0(puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00a9d0a0 */
unsigned int F_00a9d0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 6) = 0;
    uVar1 = F_004296a0(0x28,0,0x191);
    *(uint *)(param_1 + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)(param_1 + 4) + 4))) = *(int *)(param_1 + 4);
    *((int *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(int *)(param_1 + 4);
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 4) + 0x24))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 4) + 0x25))) = 1;
    F_00a9ae70(param_1 + 2,param_2 + 2);
  }
  return 0;
}

/* ref: FUN_00a9d100 */
uint F_00a9d100(unsigned int gen_a0)
{
  GEN_ENTER(0xa9d100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a9cb60(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a9d130 */
uint F_00a9d130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9d130u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_00a9cb60(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x21);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x21);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x21);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x21);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a9cbd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a9d1f0 */
unsigned int F_00a9d1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9d1f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    F_004949f0((undefined *)((int)param_2 + 0x54),param_3 + 0x54);
    *(undefined4 *)((int)param_2 + 0x6c) = *(undefined4 *)(param_3 + 0x6c);
    *(undefined1 *)((int)param_2 + 0x70) = *(undefined1 *)(param_3 + 0x70);
  }
  return 0;
}

/* ref: FUN_00a9d230 */
unsigned int F_00a9d230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9d230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    F_004949f0((undefined *)((int)param_2 + 0x54),param_3 + 0x54);
    *(undefined4 *)((int)param_2 + 0x6c) = *(undefined4 *)(param_3 + 0x6c);
    *(undefined1 *)((int)param_2 + 0x70) = *(undefined1 *)(param_3 + 0x70);
  }
  return 0;
}

/* ref: FUN_00a9d270 */
unsigned int F_00a9d270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9d270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    F_004949f0((undefined *)((int)param_2 + 0x54),param_3 + 0x54);
    *(undefined4 *)((int)param_2 + 0x6c) = *(undefined4 *)(param_3 + 0x6c);
    *(undefined1 *)((int)param_2 + 0x70) = *(undefined1 *)(param_3 + 0x70);
  }
  return 0;
}

/* ref: FUN_00a9d2b0 */
uint F_00a9d2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d2b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  F_00a9b1a0((undefined *)((*(int *)&gen_args[1]) + 4),&(*(int *)&gen_args[1]),**(undefined4 * PTR32 *)((*(int *)&gen_args[1]) + 8),
               *(undefined4 * PTR32 *)((*(int *)&gen_args[1]) + 8));
  uVar2 = F_00429760(*(undefined4 *)(iVar1 + 8),0x28,0x191);
  return (uint)uVar2;
}

/* ref: FUN_00a9d2e0 */
uint F_00a9d2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9d2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[3]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) {
    F_00a9c770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,piVar1,(*(int * PTR32 *)&gen_args[3]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)*piVar1) {
    if ((uint)(*(int * PTR32 *)&gen_args[3])[3] < (uint)(*(int * PTR32 *)&gen_args[2])[3]) {
      F_00a9c770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[2]) == piVar1) {
    if (*(uint *)(piVar1[2] + 0xc) < (uint)(*(int * PTR32 *)&gen_args[3])[3]) {
      F_00a9c770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,piVar1[2],(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    if ((uint)(*(int * PTR32 *)&gen_args[3])[3] < (uint)(*(int * PTR32 *)&gen_args[2])[3]) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00a88f70(&(*(int * PTR32 *)&gen_args[3]));
      if ((uint)(*(int * PTR32 *)&gen_args[3])[3] < (uint)piVar2[3]) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[2] + 0x21))) != '\0') {
          F_00a9c770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[3]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00a9c770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
    if ((uint)(*(int * PTR32 *)&gen_args[2])[3] < (uint)piVar2[3]) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00a88660(&(*(int * PTR32 *)&gen_args[3]));
      if (((*(int * PTR32 *)&gen_args[3]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) || ((uint)piVar2[3] < (uint)(*(int * PTR32 *)&gen_args[3])[3])) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x21))) != '\0') {
          F_00a9c770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00a9c770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[3]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
  }
  puVar3 = (undefined4 *)F_00a9cf50((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)),piVar2,0);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a9d440 */
uint F_00a9d440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa9d440u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  piVar4 = (*(int * PTR32 *)&gen_args[4]);
  if (0xfffffffd < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
    F_00a9b1a0((*(int * PTR32 *)&gen_args[4]) + 4,&(*(undefined4 *)&gen_args[2]),*((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[4])[5])),((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[4])[5])));
    F_00429760(piVar4[5],0x28,0x191);
    F_00429760(piVar4,0x24,0x191);
                    
    F_00c4579a("map/set<T> too long");
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 1;
  (*(int * PTR32 *)&gen_args[4])[1] = (int)(*(undefined4 * PTR32 *)&gen_args[3]);
  if ((*(undefined4 * PTR32 *)&gen_args[3]) == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1] = (*(int * PTR32 *)&gen_args[4]);
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(int * PTR32 *)&gen_args[4]);
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = (*(int * PTR32 *)&gen_args[4]);
  }
  else if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
    (*(undefined4 * PTR32 *)&gen_args[3])[2] = (*(int * PTR32 *)&gen_args[4]);
    if ((*(undefined4 * PTR32 *)&gen_args[3]) == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = (*(int * PTR32 *)&gen_args[4]);
    }
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[4]);
    if ((*(undefined4 * PTR32 *)&gen_args[3]) == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (int)(*(int * PTR32 *)&gen_args[4]);
    }
  }
  cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[4])[1] + 0x20)));
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[4]);
      *(undefined1 *)(iVar2 + 0x20) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x20) == '\0') {
        *(undefined1 *)(piVar5 + 8) = 1;
        *(undefined1 *)(iVar2 + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x21) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar4;
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
        *(undefined1 *)(piVar4[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x21) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar6;
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
LAB_00a9d65d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x20) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = iVar2;
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
        *(undefined1 *)(piVar4[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x21) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar6;
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
        goto LAB_00a9d65d;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *(undefined1 *)(iVar2 + 0x20) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x20);
  } while( true );
}

/* ref: FUN_00a9d690 */
unsigned int F_00a9d690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9d690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00a9d0a0(param_2,param_3);
  return 0;
}

/* ref: Client::Game::UI::Journal::vf0 */
uint F_00a9d6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a7fe60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::UI::QuestTodoList::vf0 */
uint F_00a9d6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7990));
  *(undefined * PTR32 * PTR32 *)(this + 0x1c0) = (*(undefined * PTR32 (*)[3])REFP(0x10b8194));
  F_00a9c540(this + 0x1a8);
  F_00429760(*(undefined4 *)(this + 0x1a8),8,800);
  *(undefined4 *)(this + 0x1a8) = 0;
  F_00a93740(this + 0x198);
  F_00a71520(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::UI::QuestUI::vf0 */
uint F_00a9d750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a80310(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a9d780 */
byte F_00a9d780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00a92130(this,1);
  }
  uVar2 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0x74,0,800);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) = uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  this_00 = *(undefined * PTR32 *)(uVar1 + uVar2 * 4);
  if (this_00 != (undefined *)0x0) {
    F_0042cbc0(this_00,param_1);
    F_004949f0((undefined *)((int)this_00 + 0x54),param_1 + 0x54);
    *(undefined4 *)((int)this_00 + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
    uVar1 = (uint)*(byte *)(param_1 + 0x70);
    *(byte *)((int)this_00 + 0x70) = *(byte *)(param_1 + 0x70);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return (byte)uVar1;
}

/* ref: FUN_00a9d800 */
byte F_00a9d800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00a922a0(this,1);
  }
  uVar2 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0x74,0,800);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) = uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  this_00 = *(undefined * PTR32 *)(uVar1 + uVar2 * 4);
  if (this_00 != (undefined *)0x0) {
    F_0042cbc0(this_00,param_1);
    F_004949f0((undefined *)((int)this_00 + 0x54),param_1 + 0x54);
    *(undefined4 *)((int)this_00 + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
    uVar1 = (uint)*(byte *)(param_1 + 0x70);
    *(byte *)((int)this_00 + 0x70) = *(byte *)(param_1 + 0x70);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return (byte)uVar1;
}

/* ref: FUN_00a9d880 */
byte F_00a9d880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00a92410(this,1);
  }
  uVar2 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0x74,0,800);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) = uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  this_00 = *(undefined * PTR32 *)(uVar1 + uVar2 * 4);
  if (this_00 != (undefined *)0x0) {
    F_0042cbc0(this_00,param_1);
    F_004949f0((undefined *)((int)this_00 + 0x54),param_1 + 0x54);
    *(undefined4 *)((int)this_00 + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
    uVar1 = (uint)*(byte *)(param_1 + 0x70);
    *(byte *)((int)this_00 + 0x70) = *(byte *)(param_1 + 0x70);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return (byte)uVar1;
}

/* ref: FUN_00a9d900 */
unsigned int F_00a9d900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9d900u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x21)));
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  while (cVar1 == '\0') {
    F_00a9d900((*(undefined * PTR32 *)&gen_args[0]),(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00a9b1a0(piVar3 + 4,&(*(int * PTR32 *)&gen_args[1]),*(undefined4 *)piVar3[5],(undefined4 *)piVar3[5]);
    F_00429760(piVar3[5],0x28,0x191);
    F_00429760(piVar3,0x24,0x191);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return 0;
}

/* ref: FUN_00a9d970 */
uint F_00a9d970(unsigned int gen_a0)
{
  GEN_ENTER(0xa9d970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a9d130(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a9d990 */
uint F_00a9d990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9d990u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int * piVar6;
  int * piVar7;
  
  piVar6 = (*(int * PTR32 *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x21))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)&gen_args[2]);
  F_00928100(&(*(int * PTR32 *)&gen_args[2]));
  piVar5 = (int *)*piVar6;
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(piVar6[2] + 0x21) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar6)) {
      piVar5[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar6;
      piVar5 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar6[2]) {
        piVar5 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x21) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar6[2];
        *(int * PTR32 *)(piVar6[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) == piVar6) {
        *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar6[1];
        if ((int *)*puVar2 == piVar6) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar6[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 8))) = (char)piVar6[8];
      *(char *)(piVar6 + 8) = (char)iVar1;
      goto LAB_00a9daaa;
    }
  }
  else {
    piVar7 = (int *)piVar6[2];
  }
  piVar5 = (int *)piVar6[1];
  if (*(char *)((int)piVar7 + 0x21) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) == piVar6) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) = piVar7;
  }
  else if ((int *)*piVar5 == piVar6) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) == piVar6) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      piVar3 = (int *)F_00912c00(piVar7);
    }
    **(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) = piVar3;
  }
  iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4);
  (*(int *)(gen_frame + 0x0)) = iVar1;
  if (*(int * PTR32 *)(iVar1 + 8) == piVar6) {
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      uVar4 = F_00a88350(piVar7);
      *(uint *)((*(int *)(gen_frame + 0x0)) + 8) = uVar4;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar5;
    }
  }
LAB_00a9daaa: ;
  if ((char)(*(int * PTR32 *)(gen_frame + 0x4))[8] == '\x01') {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4)))) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[8] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_00a8bd90(this_00,piVar6);
            piVar5 = (int *)piVar6[2];
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x21) == '\0') {
            if ((*(char *)(*piVar5 + 0x20) != '\x01') || (*(char *)(piVar5[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x20) = 1;
                *(undefined1 *)(piVar5 + 8) = 0;
                F_00a8bdf0(this_00,piVar5);
                piVar5 = (int *)piVar6[2];
                this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
              }
              *(char *)(piVar5 + 8) = (char)piVar6[8];
              *(undefined1 *)(piVar6 + 8) = 1;
              *(undefined1 *)(piVar5[2] + 0x20) = 1;
              F_00a8bd90(this_00,piVar6);
              break;
            }
LAB_00a9db68: ;
            *(undefined1 *)(piVar5 + 8) = 0;
          }
        }
        else {
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_00a8bdf0(this_00,piVar6);
            piVar5 = (int *)*piVar6;
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x21) == '\0') {
            if ((*(char *)(piVar5[2] + 0x20) == '\x01') && (*(char *)(*piVar5 + 0x20) == '\x01'))
            goto LAB_00a9db68;
            if (*(char *)(*piVar5 + 0x20) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x20) = 1;
              *(undefined1 *)(piVar5 + 8) = 0;
              F_00a8bd90(this_00,piVar5);
              piVar5 = (int *)*piVar6;
              this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            *(char *)(piVar5 + 8) = (char)piVar6[8];
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(*piVar5 + 0x20) = 1;
            F_00a8bdf0(this_00,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *((int * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 4) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
  F_00a9b1a0((*(int * PTR32 *)(gen_frame + 0x4)) + 4,&(*(int *)(gen_frame + 0x0)),*(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[5],(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[5]);
  F_00429760(piVar6[5],0x28,0x191);
  F_00429760(piVar6,0x24,0x191);
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) != 0) {
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a9dc10 */
uint F_00a9dc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9dc10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00a9c2c0(puVar1 + 3,param_3);
  F_00a9d2e0(this,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_00a9dc70 */
uint F_00a9dc70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9dc70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  bool bVar4;
  
  iVar1 = (*(int *)&gen_args[2]);
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar4 = true;
  (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),1);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar4 = *(ushort *)(iVar1 + 0xc) < *(ushort *)(puVar3 + 3);
      }
      else {
        bVar4 = *(ushort *)(iVar1 + 0xc) <= *(ushort *)(puVar3 + 3);
      }
      (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),bVar4);
      if (bVar4 == false) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar3;
  if (bVar4 != false) {
    if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar3 = (undefined4 *)F_00a9d440((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar3,iVar1);
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00a89180(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if (*((ushort *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[3]) + 3))) < *(ushort *)(iVar1 + 0xc)) {
    puVar3 = (undefined4 *)F_00a9d440((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(int *)&gen_args[2]),puVar3,iVar1);
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00a9b1a0((undefined *)(iVar1 + 0x10),&(*(undefined4 * PTR32 *)&gen_args[3]),**(undefined4 * PTR32 *)(iVar1 + 0x14),
               *(undefined4 * PTR32 *)(iVar1 + 0x14));
  F_00429760(*(undefined4 *)(iVar1 + 0x14),0x28,0x191);
  F_00429760(iVar1,0x24,0x191);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a9dd80 */
uint F_00a9dd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9dd80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x24,0,0x191);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00a9d0a0(puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_00a9ddd0 */
uint F_00a9ddd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9ddd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a9d900(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a9de00 */
uint F_00a9de00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9de00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  puVar1 = (*(uint * PTR32 *)&gen_args[1]);
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar5;
  if (*(char *)((int)puVar5[1] + 0x21) == '\0') {
    puVar3 = (undefined4 *)puVar5[1];
    do {
      if ((uint)puVar3[3] < *(*(uint * PTR32 *)&gen_args[1])) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar3;
        puVar2 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  if ((puVar5 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) && ((uint)puVar5[3] <= *(*(uint * PTR32 *)&gen_args[1]))) {
    return (uint)(puVar5 + 4);
  }
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  puVar3 = (undefined4 *)F_004296a0(0x24,0,800);
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar3;
  *puVar3 = puVar3;
  puVar3[1] = puVar3;
  puVar3[2] = puVar3;
  *(undefined1 *)(puVar3 + 8) = 1;
  *(undefined1 *)((int)puVar3 + 0x21) = 1;
  uVar4 = *puVar1;
  F_00a9ac50(((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x18)));
  puVar3 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar3 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  *(undefined2 *)(puVar3 + 8) = 0;
  if (puVar3 + 3 != (uint *)0x0) {
    puVar3[3] = uVar4;
    puVar3[6] = 0;
    uVar4 = F_004296a0(0x24,0,800);
    puVar3[5] = uVar4;
    *(uint *)uVar4 = uVar4;
    *(undefined4 *)(puVar3[5] + 4) = puVar3[5];
    *(undefined4 *)(puVar3[5] + 8) = puVar3[5];
    *(undefined1 *)(puVar3[5] + 0x20) = 1;
    *(undefined1 *)(puVar3[5] + 0x21) = 1;
    F_00a9a5b0(puVar3 + 4,((undefined1 *)(gen_frame + 0x8)));
    puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x28));
  }
  F_00a9d2e0((*(undefined * PTR32 *)&gen_args[0]),&(*(uint * PTR32 *)&gen_args[1]),puVar5,puVar3);
  puVar1 = (*(uint * PTR32 *)&gen_args[1]);
  F_00a9ab90(((undefined1 *)(gen_frame + 0x8)),&(*(uint * PTR32 *)&gen_args[1]),*(*(undefined4 * PTR32 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xc)),0x24,800);
  F_00a9ab90(((undefined1 *)(gen_frame + 0x18)),&(*(uint * PTR32 *)&gen_args[1]),*(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),(*(undefined4 * PTR32 *)(gen_frame + 0x1c)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x1c)),0x24,800);
  return (uint)(puVar1 + 4);
}

/* ref: FUN_00a9df90 */
uint F_00a9df90(unsigned int gen_a0)
{
  GEN_ENTER(0xa9df90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9d130(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9dfd0 */
uint F_00a9dfd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9dfd0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_00a9d900(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x21);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x21);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x21);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x21);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a9d990(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a9e090 */
uint F_00a9e090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9e090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x24,0,0x191);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00a9d0a0(puVar1 + 3,param_2);
  F_00a9dc70(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a9e0f0 */
uint F_00a9e0f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9e0f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9d130(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00a9e170 */
uint F_00a9e170(unsigned int gen_a0)
{
  GEN_ENTER(0xa9e170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a9dfd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a9e190 */
uint F_00a9e190(unsigned int gen_a0)
{
  GEN_ENTER(0xa9e190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int local_c;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x24,0,800);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x21))) = 1;
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar1 = F_004296a0(0x2c,0,800);
  *(uint *)((int)this + 0x14) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(int *)((int)this + 0x14);
  *((int *)GEN_TOP((*(int *)((int)this + 0x14) + 8))) = *(int *)((int)this + 0x14);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x28))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x29))) = 1;
  iVar2 = 1;
  do {
    iVar2 = iVar2 + -1;
    *(undefined4 *)((int)this + iVar2 * 8 + 0x28) = 0;
    *(undefined4 *)((int)this + iVar2 * 8 + 0x2c) = 0;
  } while (-1 < iVar2);
  puVar3 = (undefined4 *)((int)this + 0x30);
  local_c = 0x1d;
  puVar4 = (undefined4 *)((int)this + 0x94);
  do {
    *puVar3 = 0;
    puVar4[-0x18] = 0;
    F_0042b630(puVar4 + -0x17);
    puVar3 = puVar3 + 0x1c;
    puVar4[-2] = 0;
    puVar4[-1] = 0;
    *puVar4 = 0;
    *(undefined2 *)(puVar4 + 2) = 0;
    puVar4 = puVar4 + 0x1c;
    local_c = local_c + -1;
  } while (-1 < local_c);
  puVar4 = (undefined4 *)((int)this + 0xd50);
  local_c = 0xf;
  puVar3 = (undefined4 *)((int)this + 0xdb4);
  do {
    *puVar4 = 0;
    puVar3[-0x18] = 0;
    F_0042b630(puVar3 + -0x17);
    puVar4 = puVar4 + 0x1c;
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    *(undefined2 *)(puVar3 + 2) = 0;
    puVar3 = puVar3 + 0x1c;
    local_c = local_c + -1;
  } while (-1 < local_c);
  *(undefined4 *)((int)this + 0x1454) = 0;
  *(undefined4 *)((int)this + 0x1458) = 0;
  F_0042b630((int)this + 0x145c);
  *(undefined4 *)((int)this + 0x14b0) = 0;
  *(undefined4 *)((int)this + 0x14b4) = 0;
  *(undefined4 *)((int)this + 0x14b8) = 0;
  *(undefined2 *)((int)this + 0x14c0) = 0;
  *(undefined4 *)((int)this + 0x14d0) = 0;
  uVar1 = F_004296a0(0x78,0,800);
  *(uint *)((int)this + 0x14cc) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x14cc) + 4))) = *(int *)((int)this + 0x14cc);
  puVar3 = (undefined4 *)((int)this + 0x14d8);
  *puVar3 = 0;
  puVar4 = (undefined4 *)F_004296a0(8,0,800);
  *puVar3 = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar3 = puVar3;
  *(undefined4 *)((int)this + 0x14dc) = 0;
  *(undefined4 *)((int)this + 0x14e0) = 0;
  *(undefined4 *)((int)this + 0x14e4) = 0;
  *(undefined4 *)((int)this + 0x14e8) = 0;
  *(undefined4 *)((int)this + 0x14fc) = 0;
  uVar1 = F_004296a0(0x78,0,800);
  *(uint *)((int)this + 0x14f8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x14f8) + 4))) = *(int *)((int)this + 0x14f8);
  puVar3 = (undefined4 *)((int)this + 0x1504);
  *puVar3 = 0;
  puVar4 = (undefined4 *)F_004296a0(8,0,800);
  *puVar3 = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar3 = puVar3;
  *(undefined4 *)((int)this + 0x1508) = 0;
  *(undefined4 *)((int)this + 0x150c) = 0;
  *(undefined4 *)((int)this + 0x1510) = 0;
  *(undefined4 *)((int)this + 0x1514) = 0;
  *(undefined4 *)((int)this + 0x1528) = 0;
  uVar1 = F_004296a0(0x78,0,800);
  *(uint *)((int)this + 0x1524) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1524) + 4))) = *(int *)((int)this + 0x1524);
  return (uint)this;
}

/* ref: FUN_00a9e3a0 */
uint F_00a9e3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9e3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  int iVar2;
  undefined4 * puVar3;
  ulonglong uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a97b00((undefined *)((int)this + 0x1524));
  F_00429760(*(undefined4 *)((int)this + 0x1524),0x78,800);
  F_00a8ff70((undefined *)((int)this + 0x1504));
  F_00429760(*(undefined4 *)((int)this + 0x1504),8,800);
  *(undefined4 *)((int)this + 0x1504) = 0;
  F_00a97b00((undefined *)((int)this + 0x14f8));
  F_00429760(*(undefined4 *)((int)this + 0x14f8),0x78,800);
  F_00a8ff70((undefined *)((int)this + 0x14d8));
  F_00429760(*(undefined4 *)((int)this + 0x14d8),8,800);
  *(undefined4 *)((int)this + 0x14d8) = 0;
  F_00a97b00((undefined *)((int)this + 0x14cc));
  F_00429760(*(undefined4 *)((int)this + 0x14cc),0x78,800);
  iVar2 = *(int *)((int)this + 0x14b0);
  if (iVar2 != 0) {
    F_00429760(iVar2,((*(int *)((int)this + 0x14b8) - iVar2) / 0x34) * 0x34,800);
  }
  *(undefined4 *)((int)this + 0x14b0) = 0;
  *(undefined4 *)((int)this + 0x14b4) = 0;
  *(undefined4 *)((int)this + 0x14b8) = 0;
  F_0042c880((undefined *)((int)this + 0x145c));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xf;
  puVar3 = (undefined4 *)((int)this + 0x14ac);
  do {
    iVar2 = puVar3[-0x1c];
    if (iVar2 != 0) {
      F_00429760(iVar2,((puVar3[-0x1a] - iVar2) / 0x34) * 0x34,800);
    }
    puVar3[-0x1c] = 0;
    puVar3[-0x1b] = 0;
    puVar3[-0x1a] = 0;
    F_0042c880(puVar3 + -0x31);
    pvVar1 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + -1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
    puVar3 = puVar3 + -0x1c;
  } while (-1 < (int)pvVar1);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1d;
  puVar3 = (undefined4 *)((int)this + 0xdac);
  do {
    iVar2 = puVar3[-0x1c];
    if (iVar2 != 0) {
      F_00429760(iVar2,((puVar3[-0x1a] - iVar2) / 0x34) * 0x34,800);
    }
    puVar3[-0x1c] = 0;
    puVar3[-0x1b] = 0;
    puVar3[-0x1a] = 0;
    F_0042c880(puVar3 + -0x31);
    pvVar1 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + -1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
    puVar3 = puVar3 + -0x1c;
  } while (-1 < (int)pvVar1);
  F_00a9aa80((undefined *)((int)this + 0x10),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x14),
               *(undefined4 * PTR32 *)((int)this + 0x14));
  F_00429760(*(undefined4 *)((int)this + 0x14),0x2c,800);
  F_00a9d130(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar4 = F_00429760(*(undefined4 *)((int)this + 4),0x24,800);
  return (uint)uVar4;
}

/* ref: FUN_00a9e5c0 */
uint F_00a9e5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9e5c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9dfd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a9e600 */
uint F_00a9e600(unsigned int gen_a0)
{
  GEN_ENTER(0xa9e600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a9dfd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a9e680 */
uint F_00a9e680(unsigned int gen_a0)
{
  GEN_ENTER(0xa9e680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x24,0,0x191);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x21))) = 1;
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar1 = F_004296a0(0x18,0,0x191);
  *(uint *)((int)this + 0x14) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(int *)((int)this + 0x14);
  *((int *)GEN_TOP((*(int *)((int)this + 0x14) + 8))) = *(int *)((int)this + 0x14);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x15))) = 1;
  return (uint)this;
}

/* ref: FUN_00a9e700 */
uint F_00a9e700(unsigned int gen_a0)
{
  GEN_ENTER(0xa9e700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a90060((undefined *)((int)this + 0x10),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x14),
               *(undefined4 * PTR32 *)((int)this + 0x14));
  F_00429760(*(undefined4 *)((int)this + 0x14),0x18,0x191);
  F_00a9dfd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a9e760 */
unsigned int F_00a9e760(unsigned int gen_a0)
{
  GEN_ENTER(0xa9e760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb02c) = (*(undefined * PTR32 (*)[1])REFP(0x10e788c));
  F_00b9d730((undefined *)((int)this + 0x92f4));
  *(undefined4 *)((int)this + 0x92e8) =
       (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  if (*(undefined * PTR32 *)((int)this + 0x92f0) != (undefined *)0x0) {
    F_00414620(*(undefined * PTR32 *)((int)this + 0x92f0),(undefined4 *)((int)this + 0x92e8));
  }
  F_00bc6480((undefined *)((int)this + 0x8ba8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8b80) = (*(undefined * PTR32 (*)[1])REFP(0x10e7940));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8b7c) = (*(undefined * PTR32 (*)[1])REFP(0x10e7938));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8b70) = (*(undefined * PTR32 (*)[1])REFP(0x10e7930));
  *(undefined4 *)((int)this + 0x8948) = (*(undefined * PTR32 (*)[1])REFP(0x10e7928));
  F_00a859d0((undefined4 *)((int)this + 0x8948));
  F_00a9e3a0((undefined *)((int)this + 0x7418));
  F_0042c880((undefined *)((int)this + 0x73bc));
  F_0042c880((undefined *)((int)this + 0x7360));
  F_00b9f8b0((undefined *)((int)this + 0x70ec));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6ec4) = (*(undefined * PTR32 (*)[2])REFP(0x10e7990));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7084) = (*(undefined * PTR32 (*)[3])REFP(0x10b8194));
  F_00a9c540((undefined *)((int)this + 0x706c));
  F_00429760(*(undefined4 *)((int)this + 0x706c),8,800);
  *(undefined4 *)((int)this + 0x706c) = 0;
  F_00a93740((undefined *)((int)this + 0x705c));
  F_00a71520((undefined *)((int)this + 0x6ec4));
  F_00a80310((undefined *)((int)this + 0x5ef8));
  F_00a7fe60((undefined *)((int)this + 0x2448));
  F_00a72970((undefined *)((int)this + 0x237c));
  F_00a84440((undefined *)((int)this + 0x2344));
  F_00a71e70((undefined *)((int)this + 0x1950));
  F_00a72450((undefined *)((int)this + 0x1904));
  iVar1 = *(int *)((int)this + 0x1938);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x1940) - iVar1 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0x1938) = 0;
  *(undefined4 *)((int)this + 0x193c) = 0;
  *(undefined4 *)((int)this + 0x1940) = 0;
  F_00a72750((undefined *)((int)this + 0x15e8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1540) =
       (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7874));
  return 0;
}

/* ref: FUN_00a9e8f0 */
uint F_00a9e8f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9e8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7954));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1540) = (*(undefined * PTR32 (*)[2])REFP(0x10e7880));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x15e8) = (*(undefined * PTR32 (*)[2])REFP(0x10e7978));
  *(undefined4 *)((int)this + 0x15ec) = 0;
  *(undefined4 *)((int)this + 0x15f0) = 0;
  *(undefined4 *)((int)this + 0x15f4) = 0;
  *(undefined2 *)((int)this + 0x15fc) = 0;
  F_00a91f10((undefined4 *)((int)this + 0x15ec),0x10);
  *(undefined4 *)((int)this + 0x1600) = 0;
  *(undefined4 *)((int)this + 0x1604) = 0;
  *(undefined4 *)((int)this + 0x1608) = 0;
  *(undefined4 *)((int)this + 0x160c) = 0;
  *(undefined4 *)((int)this + 0x1610) = 0;
  *(undefined4 *)((int)this + 0x1614) = 0;
  *(undefined4 *)((int)this + 0x1618) = 0;
  *(undefined4 *)((int)this + 0x161c) = 0;
  *(undefined4 *)((int)this + 0x1620) = 0;
  *(undefined4 *)((int)this + 0x1624) = 0;
  F_00c48350((undefined *)((int)this + 0x1628),0,0x100);
  *(undefined4 *)((int)this + 0x1728) = 0;
  *(undefined4 *)((int)this + 0x172c) = 0;
  *(undefined2 *)((int)this + 0x1730) = 0;
  *(undefined4 *)((int)this + 0x1734) = 0;
  *(undefined4 *)((int)this + 0x1738) = 0;
  *(undefined4 *)((int)this + 0x173c) = 0;
  *(undefined4 *)((int)this + 0x1740) = 0;
  *(undefined4 *)((int)this + 0x1928) = 0;
  *(undefined4 *)((int)this + 0x192c) = 0;
  *(undefined4 *)((int)this + 0x1938) = 0;
  *(undefined4 *)((int)this + 0x193c) = 0;
  *(undefined4 *)((int)this + 0x1940) = 0;
  iVar1 = 0;
  do {
    *(undefined1 *)((int)this + iVar1 + 0x194c) = 0;
    *(undefined4 *)((int)this + iVar1 * 4 + 0x1904) = 0;
    *(undefined4 *)((int)this + iVar1 * 4 + 0x1910) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  F_00a71dd0((undefined *)((int)this + 0x1950));
  *(undefined4 *)((int)this + 0x2344) = 0;
  F_00a9e680((undefined *)((int)this + 0x2348));
  *(undefined4 *)((int)this + 0x2368) = 0;
  *(undefined4 *)((int)this + 0x236c) = 0;
  *(undefined4 *)((int)this + 0x2370) = 0;
  *(undefined4 *)((int)this + 0x2374) = 0;
  *(undefined4 *)((int)this + 0x2378) = 0;
  *(undefined4 *)((int)this + 0x237c) = 0;
  *(undefined4 *)((int)this + 0x2380) = 0;
  *(undefined4 *)((int)this + 0x2384) = 0;
  *(undefined4 *)((int)this + 0x2388) = 0;
  F_0042b630((int)this + 0x2390);
  *(undefined4 *)((int)this + 0x23e4) = 0;
  *(undefined4 *)((int)this + 0x23e8) = 0;
  *(undefined4 *)((int)this + 0x23ec) = 0;
  *(undefined4 *)((int)this + 0x23f0) = 0;
  F_00a91df0((undefined *)((int)this + 0x2380),0xc9);
  *(undefined4 *)((int)this + 0x23f4) = 0;
  *(undefined4 *)((int)this + 0x2414) = 0;
  *(undefined4 *)((int)this + 0x2438) = 0;
  *(undefined4 *)((int)this + 0x23f8) = 0;
  *(undefined4 *)((int)this + 0x23fc) = 0;
  *(undefined1 *)((int)this + 0x2400) = 0;
  *(undefined4 *)((int)this + 0x2404) = 0;
  *(undefined4 *)((int)this + 0x2408) = 0;
  *(undefined1 *)((int)this + 0x240c) = 0;
  *(undefined4 *)((int)this + 0x2410) = 0;
  *(undefined1 *)((int)this + 0x2418) = 0;
  *(undefined4 *)((int)this + 0x241c) = 0;
  *(undefined4 *)((int)this + 0x2420) = 0;
  *(undefined1 *)((int)this + 0x2424) = 0;
  *(undefined4 *)((int)this + 0x2428) = 0;
  *(undefined4 *)((int)this + 0x242c) = 0;
  *(undefined1 *)((int)this + 0x2430) = 0;
  *(undefined4 *)((int)this + 0x2434) = 0;
  *(undefined1 *)((int)this + 0x243c) = 0;
  *(undefined4 *)((int)this + 0x2440) = 0;
  F_00a7fc50((undefined *)((int)this + 0x2448));
  F_00a80250((undefined *)((int)this + 0x5ef8));
  F_00a80110((undefined *)((int)this + 0x6ec4));
  F_00b9fec0((undefined *)((int)this + 0x70ec));
  F_0042b630((int)this + 0x7360);
  F_0042b630((int)this + 0x73bc);
  F_00a9e190((undefined *)((int)this + 0x7418));
  *(undefined4 *)((int)this + 0x8948) = (*(undefined * PTR32 (*)[1])REFP(0x10e7928));
  F_00a859d0((undefined4 *)((int)this + 0x8948));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8b70) = (*(undefined * PTR32 (*)[1])REFP(0x10e7930));
  *(undefined1 *)((int)this + 0x8b74) = 0;
  *(undefined1 *)((int)this + 0x8b78) = 0;
  *(undefined2 *)((int)this + 0x8b76) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8b7c) = (*(undefined * PTR32 (*)[1])REFP(0x10e7938));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8b80) = (*(undefined * PTR32 (*)[1])REFP(0x10e7940));
  *(undefined4 *)((int)this + 0x8b84) = 0;
  *(undefined4 *)((int)this + 0x8b88) = 0;
  *(undefined4 *)((int)this + 0x8b8c) = 0;
  *(undefined4 *)((int)this + 0x8b90) = 0;
  *(undefined4 *)((int)this + 0x8b94) = 0;
  *(undefined4 *)((int)this + 0x8b98) = 0;
  *(undefined4 *)((int)this + 0x8b9c) = 0;
  *(undefined4 *)((int)this + 0x8ba0) = 0;
  *(undefined2 *)((int)this + 0x8ba4) = 0;
  F_00bc65a0((undefined *)((int)this + 0x8ba8));
  *(undefined4 *)((int)this + 0x92ec) = 0;
  *(undefined4 *)((int)this + 0x92f0) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x92e8) = (*(undefined * PTR32 (*)[2])REFP(0x10e7960));
  F_00b9d840((undefined *)((int)this + 0x92f4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb02c) = (*(undefined * PTR32 (*)[1])REFP(0x10e788c));
  *(undefined4 *)((int)this + 0xb030) = 0;
  *(undefined4 *)((int)this + 0xb034) = 0;
  *(undefined4 *)((int)this + 0xb038) = 0;
  *(undefined4 *)((int)this + 0xb03c) = 0;
  *(undefined1 *)((int)this + 0xb042) = 0;
  *(undefined2 *)((int)this + 0xb040) = 0;
  *(undefined4 *)((int)this + 0xb044) = 0;
  *(undefined4 *)((int)this + 0xb048) = 0;
  *(undefined4 *)((int)this + 0xb04c) = 0;
  *(undefined4 *)((int)this + 0xb050) = 0;
  *(undefined1 *)((int)this + 0xb056) = 0;
  *(undefined2 *)((int)this + 0xb054) = 0;
  *(undefined4 *)((int)this + 0xb058) = 0;
  *(undefined4 *)((int)this + 0xb05c) = 0;
  *(undefined4 *)((int)this + 0xb060) = 0;
  *(undefined4 *)((int)this + 0xb064) = 0;
  *(undefined1 *)((int)this + 0xb06a) = 0;
  *(undefined2 *)((int)this + 0xb068) = 0;
  *(undefined4 *)((int)this + 0xb06c) = 0;
  *(undefined4 *)((int)this + 0xb070) = 0;
  return (uint)this;
}

/* ref: FUN_00a9ec90 */
byte F_00a9ec90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ec90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x8e) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x8e) = *(byte *)(in_ecx + 0x8e) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a9ecb0 */
unsigned int F_00a9ecb0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa9ecb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xb8) = param_2;
  return 0;
}

/* ref: FUN_00a9ecd0 */
unsigned int F_00a9ecd0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa9ecd0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xbc) = param_2;
  return 0;
}

/* ref: FUN_00a9ecf0 */
uint F_00a9ecf0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa9ecf0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  *(float *)((int)param_1 + 0xc4) = param_2;
  uVar1 = F_00a60de0(param_1);
  return uVar1;
}

/* ref: FUN_00a9ed10 */
unsigned int F_00a9ed10(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa9ed10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 200) = param_2;
  return 0;
}

/* ref: FUN_00a9ed40 */
byte F_00a9ed40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ed40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x90)) & 2;
  *(byte *)(in_ecx + 0x90) = *(byte *)(in_ecx + 0x90) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a9ed60 */
byte F_00a9ed60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ed60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x8c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a9ed70 */
uint F_00a9ed70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa9ed70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if ((double)param_2 < *(double *)&REFG(undefined, 0x10e8718)) {
    *(char *)(in_ecx + 0x8d) = (char)(int)param_2;
    return (int)param_2 & 0xff;
  }
  *(undefined1 *)(in_ecx + 0x8d) = 0xfa;
  return 0xfa;
}

/* ref: FUN_00a9edb0 */
uint F_00a9edb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9edb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x7c) = param_2;
  return param_2;
}

/* ref: FUN_00a9edd0 */
byte F_00a9edd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9edd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x04' ^ *(byte *)(in_ecx + 0x8e)) & 4;
  *(byte *)(in_ecx + 0x8e) = *(byte *)(in_ecx + 0x8e) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a9ee00 */
unsigned int F_00a9ee00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa9ee00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x34) = param_2;
  return 0;
}

/* ref: FUN_00a9ee70 */
byte F_00a9ee70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ee70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x14) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a9ee80 */
byte F_00a9ee80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ee80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 8) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a9eeb0 */
byte F_00a9eeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9eeb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 4) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::Game::Control::MoveControl::OptionOfRequestFreeControlRotating::vf0 */
uint F_00a9eec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9eec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e8724));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a9eef0 */
uint F_00a9eef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9eef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_00a9ef00 */
uint F_00a9ef00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ef00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x364) = param_2;
  return param_2;
}

/* ref: FUN_00a9ef10 */
uint F_00a9ef10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ef10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x368) = param_2;
  return param_2;
}

/* ref: FUN_00a9ef40 */
byte F_00a9ef40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ef40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x422) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a9ef70 */
byte F_00a9ef70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ef70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x421) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a9ef80 */
uint F_00a9ef80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ef80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00a9efd0 */
float10 F_00a9efd0(float gen_a0)
{
  GEN_ENTER(0xa9efd0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00a9eff0 */
uint F_00a9eff0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9eff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(in_ecx + 0x8a);
  if ((uVar1 == 2) && (*(int *)(in_ecx + 0x2ed4) == 1)) {
    uVar1 = 3;
  }
  return uVar1;
}

/* ref: FUN_00a9f010 */
uint F_00a9f010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9f010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this);
  return uVar1;
}

/* ref: FUN_00a9f040 */
uint F_00a9f040(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa9f040u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)*(float *)(param_1 + 0xb0);
  fVar5 = (float10)param_2;
  bVar2 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar5);
  bVar3 = bVar2 || fVar4 == fVar5;
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar5 <= fVar4),(char)in_EAX));
  if (bVar2 == bVar3) {
    uVar1 = F_00a61890(param_1,param_2);
  }
  if ((*(int *)(param_1 + 0x2e00) != 0) && (*(char *)(param_1 + 0x2e08) != '\0')) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x2e00) + 0x48))))
                      (*(int * PTR32 *)(param_1 + 0x2e00),(undefined4)gen_fl2bits(param_2));
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a9f110 */
uint F_00a9f110(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa9f110u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)*(float *)(param_1 + 0xe0);
  fVar5 = (float10)param_2;
  bVar2 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar5);
  bVar3 = bVar2 || fVar4 == fVar5;
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar5 <= fVar4),(char)in_EAX));
  if (bVar2 == bVar3) {
    uVar1 = F_00a61820(param_1,param_2);
  }
  if ((*(int *)(param_1 + 0x2e00) != 0) && (*(char *)(param_1 + 0x2e08) != '\0')) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x2e00) + 0x18))))
                      (*(int * PTR32 *)(param_1 + 0x2e00),(undefined4)gen_fl2bits(param_2));
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a9f170 */
uint F_00a9f170(unsigned int gen_a0)
{
  GEN_ENTER(0xa9f170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint in_EAX = 0;
  undefined4 uVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xec);
  if (piVar1 != (int *)0x0) {
    if (*(int * PTR32 *)((int)this + 0x1684) != (int *)0x0) {
      iVar2 = **(int * PTR32 *)((int)this + 0x1684);
      uVar3 = 0;
      if (iVar2 != 0) {
        uVar3 = *(undefined4 *)(iVar2 + 0x18);
      }
      ((code *)*(gen_code32 *)(*piVar1 + 0x168))(piVar1,uVar3);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 0x164))))
              (*(int * PTR32 *)((int)this + 0xec),0,(uint)(*(byte *)((int)this + 0x1680) >> 1 & 1));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 0x164))))
              (*(int * PTR32 *)((int)this + 0xec),1,(uint)(*(byte *)((int)this + 0x1680) >> 2 & 1));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 0x164))))
              (*(int * PTR32 *)((int)this + 0xec),2,(uint)(*(byte *)((int)this + 0x1680) >> 3 & 1));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 0x164))))
              (*(int * PTR32 *)((int)this + 0xec),3,(uint)(*(byte *)((int)this + 0x1680) >> 4 & 1));
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 0x164))))
                       (*(int * PTR32 *)((int)this + 0xec),4,(uint)(*(byte *)((int)this + 0x1680) >> 5 & 1)
                       );
    piVar1 = (int *)((int)this + 0x1e60);
    if (piVar1 != (int *)0x0) {
      if (*(int * PTR32 *)((int)this + 0x1684) != (int *)0x0) {
        iVar2 = **(int * PTR32 *)((int)this + 0x1684);
        uVar3 = 0;
        if (iVar2 != 0) {
          uVar3 = *(undefined4 *)(iVar2 + 0x18);
        }
        ((code *)*(gen_code32 *)(*piVar1 + 0x168))(piVar1,uVar3);
      }
      in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x164))(piVar1,0,(uint)(*(byte *)((int)this + 0x1680) & 1));
    }
  }
  return in_EAX;
}

/* ref: FUN_00a9f2a0 */
unsigned int F_00a9f2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9f2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  if (param_2 != (undefined *)0x0) {
    F_00a9f170(param_2);
    return 0;
  }
  return 0;
}

/* ref: FUN_00a9f2c0 */
byte F_00a9f2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9f2c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (((param_2 != 0) && (*(char *)(in_ecx + 0x2f03) == '\x01')) &&
     (*(int *)(param_2 + 0x74) == *(int *)(in_ecx + 0x2ed8))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a9f2f0 */
byte F_00a9f2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9f2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  
  cVar1 = *(char *)((int)this + 0x188);
  if (((cVar1 != '\x05') && (cVar1 != '\x06')) && (cVar1 != '\a')) {
    return *(char *)(param_1 * 0x7a0 + 0x1e45 + (int)this) == '\0';
  }
  return (*(byte *)(param_1 * 0x7a0 + 0x1e45 + (int)this) & 0xfd) == 0;
}

/* ref: Global::SetLocalPlayer */
unsigned int F_00a9f360(unsigned int gen_a0)
{
  GEN_ENTER(0xa9f360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  REFG(void * PTR32, 0x1379694) = this;
  F_00afe350((undefined *)((int)this + 0x1b0));
  if ((REFG(int, 0x1375bbc) == 0) && (REFG(int, 0x1375b90) != 0)) {
    F_00b6ffe0(REFG(int, 0x1375b90));
    return 0;
  }
  return 0;
}

/* ref: FUN_00a9f390 */
byte F_00a9f390(unsigned int gen_a0)
{
  GEN_ENTER(0xa9f390u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00a9f3a0 */
uint F_00a9f3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9f3a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < 10) && (((*(byte *)(in_ecx + 0x2dd3) & 0x20) == 0 || (param_2 != 0)))) {
    return *(uint *)(in_ecx + 0x2d90 + param_2 * 4);
  }
  return 0;
}

/* ref: FUN_00a9f3d0 */
unsigned int F_00a9f3d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9f3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  ushort * puVar2;
  uint uVar3;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xec);
  if ((*(int *)((int)this + 0x2e00) != 0) && (this_00 != (undefined *)0x0)) {
    uVar3 = 0xffffffff;
    uVar1 = F_00ab2840((uint)*(byte *)((int)this + 0x2e08));
    puVar2 = (ushort *)F_00ab2960(*(undefined4 *)(uVar1 + 0x84));
    if ((char)puVar2[2] == '\x02') {
      uVar3 = 0x2ffff;
    }
    else if ((char)puVar2[2] == '\x03') {
      uVar3 = 0x1ffff;
    }
    F_006abd50(this_00,uVar3 & 0xffff0000 | (uint)*puVar2);
  }
  return 0;
}

/* ref: FUN_00a9f440 */
byte F_00a9f440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9f440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (param_1 == *(byte *)((int)this + 0x1688)) {
    return 1;
  }
  uVar1 = F_00ab21a0((uint)*(byte *)((int)this + 0x1688));
  if ((uVar1 != 0) && (*(char *)(uVar1 + 0x45) != '\0')) {
    return *(byte *)(uVar1 + 0x3e) == param_1;
  }
  return 0;
}

/* ref: FUN_00a9f490 */
uint F_00a9f490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9f490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  *(undefined4 *)((int)this + 0xec) = param_1;
  piVar3 = (int *)((int)this + 0x1e10);
  iVar2 = 3;
  do {
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
    piVar3 = piVar3 + 0x1e8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  F_006a5ab0((undefined *)((int)this + 0x1e10),0,(int)this + 0x16c0,param_1);
  F_006a5ab0((undefined *)((int)this + 0x25b0),1,(int)this + 0x1e60,param_1);
  uVar1 = F_006a5ab0((undefined *)((int)this + 0x2d50),2,(int)this + 0x2600,param_1);
  return uVar1;
}

/* ref: FUN_00a9f510 */
uint F_00a9f510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9f510u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 8: ;
    if ((char)param_2 != '\0') {
      return 0x113c5;
    }
    break;
  case 9: ;
    if ((char)param_2 == '\0') {
      return 0x11401;
    }
    break;
  case 10: ;
  case 0xe: ;
  case 0xf: ;
    break;
  case 0xb: ;
    if ((char)param_2 == '\0') {
      return 0x114b5;
    }
    break;
  case 0xc: ;
    if ((char)param_2 != '\0') {
      return 0x11555;
    }
    break;
  case 0xd: ;
    if ((char)param_2 == '\0') {
      return 0x11591;
    }
    break;
  default: ;
    goto switchD_00a9f522_default;
  }
switchD_00a9f522_default: ;
  return 0;
}

/* ref: FUN_00a9f5b0 */
uint F_00a9f5b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa9f5b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  float * pfVar2;
  
  F_00a618b0(param_1,param_2);
  uVar1 = F_00ab2960(*(undefined4 *)(param_1 + 0x2e98));
  pfVar2 = (float *)0x0;
  if (uVar1 != 0) {
    pfVar2 = (float *)F_00ab2930(*(undefined4 *)(param_1 + 0x2e9c));
    if (pfVar2 == (float *)0x0) {
      pfVar2 = (float *)F_00ab2930(0);
    }
    *(float *)(param_1 + 0xc0) = (float)((float10)*pfVar2 * (float10)param_2);
    *(float *)(param_1 + 0xb8) = pfVar2[2];
    *(float *)(param_1 + 0xbc) = pfVar2[3];
  }
  return (uint)pfVar2;
}

/* ref: FUN_00a9f620 */
byte F_00a9f620(unsigned int gen_a0)
{
  GEN_ENTER(0xa9f620u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return REFG(int, 0x1379694) == in_ecx;
}

/* ref: FUN_00a9f630 */
unsigned int F_00a9f630(unsigned int gen_a0)
{
  GEN_ENTER(0xa9f630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  F_00ae6a20(in_ecx + 0x1b0);
  return 0;
}

/* ref: FUN_00a9f640 */
unsigned int F_00a9f640(unsigned int gen_a0)
{
  GEN_ENTER(0xa9f640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005482c0((undefined *)((int)this + 0x620));
  return 0;
}

/* ref: FUN_00a9f650 */
float10 F_00a9f650(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9f650u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float10 fVar1;
  
  fVar1 = F_00ae90c0(param_1 + 0x1b0,param_2,param_3);
  return fVar1;
}

/* ref: FUN_00a9f670 */
uint F_00a9f670(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xa9f670u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(float *)(gen_frame + 0x0)) = param_2;
  (*(float *)(gen_frame + 0x4)) = param_3;
  (*(float *)(gen_frame + 0x8)) = param_4;
  uVar1 = F_00afe900(param_1 + 0x1b0,&(*(float *)(gen_frame + 0x0)),param_5);
  return uVar1;
}

/* ref: FUN_00a9f6d0 */
uint F_00a9f6d0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8, float gen_a9)
{
  GEN_ENTER(0xa9f6d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  float param_9 = (float)gen_a8;
  float param_10 = (float)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(float *)(gen_frame + 0x0)) = param_2;
  (*(float *)(gen_frame + 0x4)) = param_3;
  (*(float *)(gen_frame + 0x8)) = param_4;
  uVar1 = F_00afcd60(param_1 + 0x1b0,&(*(float *)(gen_frame + 0x0)),param_5,param_6,param_7,param_8,param_9,param_10);
  return uVar1;
}

/* ref: FUN_00a9f750 */
uint F_00a9f750(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa9f750u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(float *)(gen_frame + 0x0)) = param_2;
  (*(float *)(gen_frame + 0x4)) = param_3;
  (*(float *)(gen_frame + 0x8)) = param_4;
  uVar1 = F_00afcdc0(param_1 + 0x1b0,&(*(float *)(gen_frame + 0x0)),param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00a9f7c0 */
uint F_00a9f7c0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa9f7c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this;
  uint uVar1;
  float fVar2;
  
  (*(float *)(gen_frame + 0x0)) = (*(float *)&gen_args[1]);
  (*(float *)(gen_frame + 0x4)) = (*(float *)&gen_args[2]);
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[3]);
  F_00afd7d0((undefined *)((*(int *)&gen_args[0]) + 0x1b0),&(*(float *)(gen_frame + 0x0)),&(*(float *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
  fVar2 = (*(float *)&gen_args[4]);
  this = (undefined *)F_006b8c00();
  uVar1 = F_006e3540(this,(*(int *)&gen_args[0]),(undefined4)gen_fl2bits((*(float *)&gen_args[1])),
                       (undefined4)gen_fl2bits((*(float *)&gen_args[2])),(undefined4)gen_fl2bits((*(float *)&gen_args[3])),
                       (undefined4)gen_fl2bits(fVar2));
  return uVar1;
}

/* ref: FUN_00a9f850 */
uint F_00a9f850(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9f850u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00afd950((undefined *)(param_1 + 0x1b0),(undefined4)gen_fl2bits(param_2),param_3);
  return uVar1;
}

/* ref: FUN_00a9f870 */
uint F_00a9f870(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa9f870u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10e79e4)));
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10e79e4)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c964));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)(gen_frame + 0x14)) = 1;
  uVar1 = F_00afd950((undefined *)(param_1 + 0x1b0),(undefined4)gen_fl2bits(param_2),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00a9f960 */
unsigned int F_00a9f960(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9f960u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00aebea0(in_ecx + 0x1b0,param_2,param_3);
  return 0;
}

/* ref: FUN_00a9f980 */
uint F_00a9f980(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa9f980u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(float *)(gen_frame + 0x0)) = param_2;
  (*(float *)(gen_frame + 0x4)) = param_3;
  (*(float *)(gen_frame + 0x8)) = param_4;
  uVar1 = F_00afdab0(param_1 + 0x1b0,&(*(float *)(gen_frame + 0x0)),param_5,param_6);
  return uVar1;
}

/* ref: FUN_00a9f9e0 */
uint F_00a9f9e0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xa9f9e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = F_00afe960(param_1 + 0x1b0,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00a9fa00 */
uint F_00a9fa00(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fa00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00afbbd0((undefined *)((int)this + 0x1b0),1);
  return uVar1;
}

/* ref: FUN_00a9fa20 */
byte F_00a9fa20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9fa20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x5d2) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a9fa30 */
byte F_00a9fa30(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fa30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x5d1);
}

/* ref: FUN_00a9fa40 */
byte F_00a9fa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9fa40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x5d1) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a9fa50 */
uint F_00a9fa50(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xa9fa50u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = F_00af98d0(param_1 + 0x1b0,param_2,param_3,0,0,0,(float)(float10)0);
  return uVar1;
}

/* ref: FUN_00a9fa80 */
uint F_00a9fa80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa9fa80u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00af6450(param_1 + 0x1b0,param_2,param_3,param_4,param_5,param_6,0,REFG(float, 0x10e79e4),0,
                       param_7,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a9fad0 */
float10 F_00a9fad0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fad0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00ae6fc0(in_ecx + 0x1b0);
  return fVar1;
}

/* ref: FUN_00a9fae0 */
uint F_00a9fae0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00af67f0((undefined *)((int)this + 0x1b0));
  return uVar1;
}

/* ref: FUN_00a9faf0 */
ushort F_00a9faf0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9faf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  ushort uVar1;
  
  uVar1 = F_00ae7060(in_ecx + 0x1b0);
  return uVar1;
}

/* ref: FUN_00a9fb00 */
uint F_00a9fb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9fb00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ae7070(in_ecx + 0x1b0,param_2);
  return uVar1;
}

/* ref: FUN_00a9fb20 */
uint F_00a9fb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9fb20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  if ((*(char *)((int)this + 0x2e08) != '\0') && (*(undefined * PTR32 *)((int)this + 0x2e00) != (undefined *)0x0)) {
    this = *(undefined * PTR32 *)((int)this + 0x2e00);
  }
  uVar1 = F_00a608f0(this,((undefined1 *)(gen_frame + 0x0)),param_2);
  *param_1 = *(undefined4 *)(uVar1 + 0x30);
  param_1[1] = *(undefined4 *)(uVar1 + 0x34);
  param_1[2] = *(undefined4 *)(uVar1 + 0x38);
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return (uint)param_1;
}

/* ref: FUN_00a9fba0 */
uint F_00a9fba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9fba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00aec030(this,param_1);
  return uVar1;
}

/* ref: FUN_00a9fbc0 */
uint F_00a9fbc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fbc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ae70b0(in_ecx + 0x1b0);
  return uVar1;
}

/* ref: FUN_00a9fbd0 */
unsigned int F_00a9fbd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fbd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  F_00ae70d0(in_ecx + 0x1b0);
  return 0;
}

/* ref: FUN_00a9fbf0 */
uint F_00a9fbf0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fbf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00ae6970(in_ecx + 0x1b0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a9fc00 */
byte F_00a9fc00(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fc00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae8580(in_ecx + 0x1b0);
  return bVar1;
}

/* ref: FUN_00a9fc10 */
uint F_00a9fc10(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fc10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00aebee0(in_ecx + 0x1b0);
  return uVar1;
}

/* ref: FUN_00a9fc30 */
uint F_00a9fc30(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fc30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00ae85f0(in_ecx + 0x1b0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a9fc40 */
byte F_00a9fc40(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fc40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00aebf40(in_ecx + 0x1b0);
  return bVar1;
}

/* ref: FUN_00a9fc50 */
byte F_00a9fc50(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fc50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00aebfc0(in_ecx + 0x1b0);
  return bVar1;
}

/* ref: FUN_00a9fc60 */
uint F_00a9fc60(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fc60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00ae87a0(in_ecx + 0x1b0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a9fc70 */
byte F_00a9fc70(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fc70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae87a0(in_ecx + 0x1b0);
  if ((bVar1 == 0) || (bVar1 = 1, *(int *)(in_ecx + 0x2f10) != 1)) {
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: FUN_00a9fca0 */
byte F_00a9fca0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae87c0(in_ecx + 0x1b0);
  return bVar1;
}

/* ref: FUN_00a9fcc0 */
uint F_00a9fcc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fcc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00ae87f0(in_ecx + 0x1b0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a9fcd0 */
byte F_00a9fcd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fcd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae8810(in_ecx + 0x1b0);
  return bVar1;
}

/* ref: FUN_00a9fce0 */
byte F_00a9fce0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae69a0(in_ecx + 0x1b0);
  return bVar1;
}

/* ref: FUN_00a9fcf0 */
byte F_00a9fcf0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fcf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae8680(in_ecx + 0x1b0);
  return bVar1;
}

/* ref: FUN_00a9fd00 */
byte F_00a9fd00(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fd00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae69b0(in_ecx + 0x1b0);
  return bVar1;
}

/* ref: FUN_00a9fd10 */
uint F_00a9fd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa9fd10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00afdcb0((undefined *)((int)this + 0x1b0),param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00a9fd20 */
unsigned int F_00a9fd20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa9fd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined * this_00;
  uint uVar1;
  
  F_005481e0((undefined *)((int)this + 0x620),param_1,param_2,param_3);
  uVar1 = (uint)*(byte *)((int)this + 0x188);
  this_00 = (undefined *)F_006b8c00();
  F_006e2b30(this_00,param_1,param_2,param_3,uVar1);
  return 0;
}

/* ref: FUN_00a9fd60 */
byte F_00a9fd60(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fd60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((((*(char *)((int)this + 0x196) != '\x01') || (*(int *)((int)this + 0x198) != REFG(int, 0x1379690)))
      || (*(int *)((int)this + 0x19c) != 0)) &&
     (((*(char *)((int)this + 0x196) != '\x02' || (*(int *)((int)this + 0x198) != REFG(int, 0x1338ac0))) ||
      (*(int *)((int)this + 0x19c) != REFG(int, 0x1338ac4))))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a9fdb0 */
byte F_00a9fdb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fdb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (((*(char *)((int)this + 0x196) != '\x01') ||
      ((*(int *)((int)this + 0x198) == REFG(int, 0x1379690) && (*(int *)((int)this + 0x19c) == 0)))) &&
     ((*(char *)((int)this + 0x196) != '\x02' ||
      ((*(int *)((int)this + 0x198) == REFG(int, 0x1338ac0) && (*(int *)((int)this + 0x19c) == REFG(int, 0x1338ac4))
       ))))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a9fe00 */
ushort F_00a9fe00(unsigned int gen_a0)
{
  GEN_ENTER(0xa9fe00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  
  uVar1 = 0xffff;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x1688))) {
  case 8: ;
  case 10: ;
  case 0xc: ;
    return 3;
  case 9: ;
    return (ushort)((*(byte *)((int)this + 0x2dd2) & 8 | 0x10) >> 3);
  case 0xb: ;
    return (ushort)(((byte)~*(byte *)((int)this + 0x2dd2) & 8 | 4) >> 2);
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
    uVar1 = (ushort)((*(byte *)((int)this + 0x2dd2) & 8 | 4) >> 2);
  }
  return uVar1;
}

/* ref: FUN_00a9fe80 */
uint F_00a9fe80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9fe80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 6;
  piVar2 = (int *)((int)this + 0x165c);
  do {
    if (*piVar2 == 0) {
      *(undefined4 *)((int)this + uVar1 * 4 + 0x1644) = param_1;
      if (this != (undefined *)0x0) {
        uVar1 = F_00983120(param_1,(int)this + 0x180);
        return uVar1;
      }
      uVar1 = F_00983120(param_1,0);
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar1 < 8);
  return uVar1;
}

/* ref: FUN_00a9ff10 */
byte F_00a9ff10(unsigned int gen_a0)
{
  GEN_ENTER(0xa9ff10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = 6;
  piVar2 = (int *)(in_ecx + 0x165c);
  do {
    if (*piVar2 == 0) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 8);
  return 0;
}

/* ref: FUN_00a9ff40 */
unsigned int F_00a9ff40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa9ff40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  int iVar1;
  
  iVar1 = 3;
  if (param_1 != 0) {
    iVar1 = 4;
  }
  this_00 = *(undefined * PTR32 *)((int)this + iVar1 * 4 + 0x1644);
  if (this_00 != (undefined *)0x0) {
    if ((char)param_2 == '\0') {
      F_009bc5d0(this_00,0);
    }
    F_009bc530(*(undefined * PTR32 *)((int)this + iVar1 * 4 + 0x1644),1);
    F_00983120(*(undefined4 *)((int)this + iVar1 * 4 + 0x1644),0);
  }
  *(undefined4 *)((int)this + iVar1 * 4 + 0x1644) = 0;
  *(undefined1 *)(param_1 + 0x2dd6 + (int)this) = 0;
  return 0;
}

/* ref: FUN_00a9ffd0 */
byte F_00a9ffd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa9ffd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  int iVar2;
  
  if ((((char)param_2 != '\0') || (*(char *)(in_ecx + 0x2e08) == '\0')) ||
     (iVar2 = *(int *)(in_ecx + 0x2e00), *(int *)(in_ecx + 0x2e00) == 0)) {
    iVar2 = in_ecx;
  }
  bVar1 = F_005366b0(iVar2 + 0x680);
  return bVar1;
}

/* ref: FUN_00aa0000 */
uint F_00aa0000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xaa0000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * pvVar1;
  uint uVar2;
  
  if ((((char)param_5 != '\0') || (*(char *)((int)this + 0x2e08) == '\0')) ||
     (pvVar1 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar1 = this;
  }
  uVar2 = F_005486f0((undefined *)((int)pvVar1 + 0x940),param_1,param_2,param_3,param_4);
  return uVar2;
}

/* ref: FUN_00aa0040 */
uint F_00aa0040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xaa0040u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  int iVar1;
  uint uVar2;
  
  if ((((char)param_8 != '\0') || (*(char *)(param_1 + 0x2e08) == '\0')) ||
     (iVar1 = *(int *)(param_1 + 0x2e00), *(int *)(param_1 + 0x2e00) == 0)) {
    iVar1 = param_1;
  }
  uVar2 = F_00549500(iVar1 + 0x680,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar2;
}

/* ref: FUN_00aa0090 */
uint F_00aa0090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  F_0053c1a0((undefined *)((int)this + 0x680),param_1,param_2);
  uVar2 = F_005393f0((int)this + 0x940);
  *(undefined1 *)((int)this + 0xa08) = 0;
  if ((*(char *)((int)this + 0x2e08) != '\0') && (uVar2 = 0, *(int *)((int)this + 0x2e00) != 0)) {
    F_0053c1a0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x680))),param_1,param_2);
    iVar1 = *(int *)((int)this + 0x2e00);
    uVar2 = F_005393f0(iVar1 + 0x940);
    *(undefined1 *)(iVar1 + 0xa08) = 0;
  }
  return uVar2;
}

/* ref: FUN_00aa0100 */
uint F_00aa0100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0053c1a0((undefined *)((int)this + 0x680),param_1,param_2);
  if ((*(char *)((int)this + 0x2e08) != '\0') && (*(int *)((int)this + 0x2e00) != 0)) {
    uVar1 = F_0053c1a0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x680))),param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00aa0150 */
uint F_00aa0150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_0053c1a0((undefined *)((int)this + 0x680),0,param_2);
  if ((*(char *)((int)this + 0x2e08) != '\0') && (*(int *)((int)this + 0x2e00) != 0)) {
    F_0053c1a0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x680))),0,param_2);
  }
  uVar1 = F_0053c1a0((undefined *)((int)this + 0x680),1,param_2);
  if ((*(char *)((int)this + 0x2e08) != '\0') && (*(int *)((int)this + 0x2e00) != 0)) {
    uVar1 = F_0053c1a0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x680))),1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00aa01c0 */
unsigned int F_00aa01c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa01c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_005341f0((undefined *)((int)this + 0x620),param_1);
  return 0;
}

/* ref: FUN_00aa01d0 */
uint F_00aa01d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa01d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0053c230((undefined *)((int)this + 0x680),param_1,param_2);
  if (*(int *)((int)this + 0x2e00) != 0) {
    uVar1 = F_0053c230(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x680))),param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00aa0210 */
uint F_00aa0210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0210u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if ((((char)param_3 != '\0') || (*(char *)(in_ecx + 0x2e08) == '\0')) ||
     (iVar1 = *(int *)(in_ecx + 0x2e00), *(int *)(in_ecx + 0x2e00) == 0)) {
    iVar1 = in_ecx;
  }
  uVar2 = F_00531e00(iVar1 + 0x680,param_2);
  return uVar2;
}

/* ref: FUN_00aa0250 */
uint F_00aa0250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0250u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if ((((char)param_3 != '\0') || (*(char *)(in_ecx + 0x2e08) == '\0')) ||
     (iVar1 = *(int *)(in_ecx + 0x2e00), *(int *)(in_ecx + 0x2e00) == 0)) {
    iVar1 = in_ecx;
  }
  uVar2 = F_00531e20(iVar1 + 0x680,param_2);
  return uVar2;
}

/* ref: FUN_00aa0290 */
uint F_00aa0290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0290u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if ((((char)param_3 != '\0') || (*(char *)(in_ecx + 0x2e08) == '\0')) ||
     (iVar1 = *(int *)(in_ecx + 0x2e00), *(int *)(in_ecx + 0x2e00) == 0)) {
    iVar1 = in_ecx;
  }
  uVar2 = F_00531e40(iVar1 + 0x680,param_2);
  return uVar2;
}

/* ref: FUN_00aa02d0 */
uint F_00aa02d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa02d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  
  if ((((char)param_2 != '\0') || (*(char *)((int)this + 0x2e08) == '\0')) ||
     (pvVar1 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar1 = this;
  }
  uVar2 = F_00542ff0((undefined *)((int)pvVar1 + 0x680),param_1);
  return uVar2;
}

/* ref: FUN_00aa0310 */
uint F_00aa0310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  
  if ((((char)param_2 != '\0') || (*(char *)((int)this + 0x2e08) == '\0')) ||
     (pvVar1 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar1 = this;
  }
  uVar2 = F_0053c280((undefined *)((int)pvVar1 + 0x680),param_1);
  return uVar2;
}

/* ref: FUN_00aa0350 */
uint F_00aa0350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0350u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if ((((char)param_3 != '\0') || (*(char *)(in_ecx + 0x2e08) == '\0')) ||
     (iVar1 = *(int *)(in_ecx + 0x2e00), *(int *)(in_ecx + 0x2e00) == 0)) {
    iVar1 = in_ecx;
  }
  uVar2 = F_0053c3a0(iVar1 + 0x680,param_2);
  return uVar2;
}

/* ref: FUN_00aa0390 */
byte F_00aa0390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * pvVar2;
  
  if ((((char)param_2 != '\0') || (*(char *)((int)this + 0x2e08) == '\0')) ||
     (pvVar2 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar2 = this;
  }
  bVar1 = F_00536680((undefined *)((int)pvVar2 + 0x680),param_1);
  return bVar1;
}

/* ref: FUN_00aa03d0 */
float F_00aa03d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa03d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((char)param_2 != '\0') {
    return *(float *)((int)this + param_1 * 4 + 0x7ec);
  }
  if ((*(char *)((int)this + 0x2e08) != '\0') && (*(int *)((int)this + 0x2e00) != 0)) {
    return *((float *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x7ec + param_1 * 4)));
  }
  return *(float *)((int)this + param_1 * 4 + 0x7ec);
}

/* ref: FUN_00aa0420 */
uint F_00aa0420(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xaa0420u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  F_00531f10(param_1 + 0x680,param_2,param_3);
  uVar1 = *(uint *)(param_1 + 0x2e00);
  if ((uVar1 != 0) && (*(char *)(param_1 + 0x2e09) == '\0')) {
    uVar1 = F_00531f10(uVar1 + 0x680,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00aa0470 */
byte F_00aa0470(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  if ((*(char *)(in_ecx + 0x2e08) == '\0') ||
     (iVar2 = *(int *)(in_ecx + 0x2e00), *(int *)(in_ecx + 0x2e00) == 0)) {
    iVar2 = in_ecx;
  }
  uVar3 = F_00531e00(iVar2 + 0x680,0);
  bVar1 = F_00ae8da0(in_ecx + 0x1b0,uVar3);
  if ((bVar1 != 0) &&
     (bVar4 = GEN_ISNAN(*(float *)(in_ecx + 0xc4)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114)),
     bVar4 != (bVar4 || *(float *)(in_ecx + 0xc4) == *(float *)&REFG(undefined, 0x1088114)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aa04d0 */
float F_00aa04d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa04d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((char)param_2 != '\0') {
    return *(float *)((int)this + param_1 * 4 + 0x828);
  }
  if ((*(char *)((int)this + 0x2e08) != '\0') && (*(int *)((int)this + 0x2e00) != 0)) {
    return *((float *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x828 + param_1 * 4)));
  }
  return *(float *)((int)this + param_1 * 4 + 0x828);
}

/* ref: FUN_00aa0520 */
uint F_00aa0520(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa0520u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  
  if ((((char)param_4 != '\0') || (*(char *)(param_1 + 0x2e08) == '\0')) ||
     (iVar1 = *(int *)(param_1 + 0x2e00), *(int *)(param_1 + 0x2e00) == 0)) {
    iVar1 = param_1;
  }
  uVar2 = F_00531f50(iVar1 + 0x680,param_2,param_3);
  return uVar2;
}

/* ref: FUN_00aa0560 */
uint F_00aa0560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x514) = param_2;
  return param_2;
}

/* ref: FUN_00aa0570 */
uint F_00aa0570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x518) = param_2;
  return param_2;
}

/* ref: FUN_00aa0580 */
uint F_00aa0580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_1 == '\0') {
    uVar1 = F_00ae6e80((undefined *)((int)this + 0x1b0));
    return uVar1;
  }
  return 3;
}

/* ref: FUN_00aa05b0 */
uint F_00aa05b0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa05b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  if (uVar1 == 3) {
    uVar1 = (uint)*(ushort *)((int)this + 0x2f00);
    *(uint *)((int)this + 0x514) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00aa05d0 */
uint F_00aa05d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa05d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  if ((((char)param_1 != '\0') || (*(char *)((int)this + 0x2e08) == '\0')) ||
     (pvVar1 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar1 = this;
  }
  uVar2 = F_00531fc0((undefined *)((int)pvVar1 + 0x680));
  return uVar2;
}

/* ref: FUN_00aa0600 */
uint F_00aa0600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  if ((((char)param_1 != '\0') || (*(char *)((int)this + 0x2e08) == '\0')) ||
     (pvVar1 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar1 = this;
  }
  uVar2 = F_00531fe0((undefined *)((int)pvVar1 + 0x680));
  return uVar2;
}

/* ref: FUN_00aa0630 */
uint F_00aa0630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((char)param_2 != '\0') {
    return *(uint *)((int)this + param_1 * 4 + 0x88c);
  }
  if ((*(char *)((int)this + 0x2e08) != '\0') && (*(int *)((int)this + 0x2e00) != 0)) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x88c + param_1 * 4)));
  }
  return *(uint *)((int)this + param_1 * 4 + 0x88c);
}

/* ref: FUN_00aa0680 */
uint F_00aa0680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((char)param_2 != '\0') {
    return *(uint *)((int)this + param_1 * 4 + 0x8fc);
  }
  if ((*(char *)((int)this + 0x2e08) != '\0') && (*(int *)((int)this + 0x2e00) != 0)) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x8fc + param_1 * 4)));
  }
  return *(uint *)((int)this + param_1 * 4 + 0x8fc);
}

/* ref: FUN_00aa06d0 */
byte F_00aa06d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa06d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_00ae8890((undefined *)((int)this + 0x1b0),param_1,param_2);
  return bVar1;
}

/* ref: FUN_00aa06e0 */
byte F_00aa06e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa06e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00ae8da0(in_ecx + 0x1b0,param_2);
  return bVar1;
}

/* ref: FUN_00aa06f0 */
byte F_00aa06f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa06f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00ae8d00(in_ecx + 0x1b0,param_2);
  return bVar1;
}

/* ref: FUN_00aa0700 */
uint F_00aa0700(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)((int)this + 0x195) = 0;
  iVar2 = (int)this + 0x16c0;
  iVar3 = 3;
  do {
    uVar1 = 0;
    if (*(int *)(iVar2 + -0x10) != 0 || *(int *)(iVar2 + -0xc) != 0) {
      uVar1 = F_00b5c0c0(REFG(void * PTR32, 0x14c4e84),iVar2);
    }
    iVar2 = iVar2 + 0x7a0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_00aa0740 */
unsigned int F_00aa0740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00aa0750 */
unsigned int F_00aa0750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00aa0790 */
uint F_00aa0790(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005344c0(in_ecx + 0x940);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa07a0 */
uint F_00aa07a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa07a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 4 + 0x95c) = param_2;
  return param_2;
}

/* ref: FUN_00aa07c0 */
byte F_00aa07c0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa07c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x9a0);
}

/* ref: FUN_00aa07d0 */
byte F_00aa07d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa07d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_005446c0((undefined *)((int)this + 0x940),param_1);
  return bVar1;
}

/* ref: FUN_00aa07e0 */
float F_00aa07e0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa07e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pvVar4;
  code * pcVar5;
  undefined4 uVar6;
  int local_8;
  
  local_8 = 100;
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
  if (uVar3 != 0) {
    uVar6 = 8;
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
    bVar1 = F_00b7aaa0(uVar3,uVar6);
    if (bVar1 != 0) {
      uVar6 = 0xe;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this)));
      uVar2 = F_00b7abd0(pvVar4,uVar6);
      local_8 = 100 - (short)uVar2;
    }
    uVar6 = 0x10;
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
    bVar1 = F_00b7aaa0(uVar3,uVar6);
    if (bVar1 != 0) {
      uVar6 = 0x43;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this)));
      uVar2 = F_00b7abd0(pvVar4,uVar6);
      local_8 = local_8 - (short)uVar2;
    }
    uVar6 = 0x200;
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
    bVar1 = F_00b7aaa0(uVar3,uVar6);
    if (bVar1 != 0) {
      uVar6 = 0xb5;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this)));
      uVar2 = F_00b7abd0(pvVar4,uVar6);
      local_8 = local_8 - (short)uVar2;
    }
    if (*(char *)((int)this + 0x2e08) == '\0') {
      uVar6 = 0x32;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this)));
      bVar1 = F_00b7aac0(pvVar4,uVar6);
      pcVar5 = *(gen_code32 *)(*(int *)this + 0xd4);
      if (bVar1 == 0) {
        uVar6 = 0x69;
        pvVar4 = ((undefined *)GEN_TOP((*pcVar5)(this)));
        bVar1 = F_00b7aac0(pvVar4,uVar6);
        pcVar5 = *(gen_code32 *)(*(int *)this + 0xd4);
        if (bVar1 == 0) {
          uVar6 = 0x85;
          pvVar4 = ((undefined *)GEN_TOP((*pcVar5)(this)));
          bVar1 = F_00b7aac0(pvVar4,uVar6);
          pcVar5 = *(gen_code32 *)(*(int *)this + 0xd4);
          if (bVar1 == 0) {
            uVar6 = 0x86;
            pvVar4 = ((undefined *)GEN_TOP((*pcVar5)(this)));
            bVar1 = F_00b7aac0(pvVar4,uVar6);
            if (bVar1 == 0) goto LAB_00aa094e;
            pcVar5 = *(gen_code32 *)(*(int *)this + 0xd4);
            uVar6 = 0x86;
          }
          else {
            uVar6 = 0x85;
          }
        }
        else {
          uVar6 = 0x69;
        }
      }
      else {
        uVar6 = 0x32;
      }
      pvVar4 = ((undefined *)GEN_TOP((*pcVar5)(this)));
      uVar2 = F_00b7abd0(pvVar4,uVar6);
      local_8 = local_8 + (short)uVar2;
    }
  }
LAB_00aa094e: ;
  if (REFG(int, 0x14a73b8) != 0) {
    local_8 = REFG(int, 0x14a73b8) * 100;
  }
  if (local_8 < 0) {
    local_8 = 0;
  }
  return (float)((float10)local_8 / (float10)*(double *)&REFG(undefined, 0x1088118));
}

/* ref: FUN_00aa0980 */
uint F_00aa0980(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0980u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  if (param_3 < 2) {
    *(float *)(in_ecx + 0x2ec0 + param_3 * 4) = param_2;
  }
  return param_3;
}

/* ref: FUN_00aa09c0 */
byte F_00aa09c0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa09c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  uint uVar2;
  char * pcVar3;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
  if (uVar2 != 0) {
    pcVar3 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this)));
    if (*pcVar3 == '\x01') {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
      fVar1 = *(float *)(uVar2 + 0x34);
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
      if (!((float10)*(float *)(uVar2 + 0x38) <= (float10)fVar1)) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00aa0a20 */
unsigned int F_00aa0a20(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x1658) != (undefined *)0x0) {
    bVar1 = F_009bc4f0(*(undefined * PTR32 *)((int)this + 0x1658));
    if (bVar1 == 0) {
      F_009bc4a0(*(undefined * PTR32 *)((int)this + 0x1658));
    }
    else {
      F_009bc530(*(undefined * PTR32 *)((int)this + 0x1658),1);
    }
    F_00983120(*(undefined4 *)((int)this + 0x1658),0);
    *(undefined4 *)((int)this + 0x1658) = 0;
  }
  return 0;
}

/* ref: FUN_00aa0a70 */
uint F_00aa0a70(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_EAX = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x1644) != (undefined *)0x0) {
    bVar1 = F_009bc4f0(*(undefined * PTR32 *)((int)this + 0x1644));
    if (bVar1 == 0) {
      F_009bc4a0(*(undefined * PTR32 *)((int)this + 0x1644));
    }
    else {
      F_009bc530(*(undefined * PTR32 *)((int)this + 0x1644),1);
    }
    in_EAX = F_00983120(*(undefined4 *)((int)this + 0x1644),0);
    *(undefined4 *)((int)this + 0x1644) = 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0x1648) != (undefined *)0x0) {
    bVar1 = F_009bc4f0(*(undefined * PTR32 *)((int)this + 0x1648));
    if (bVar1 == 0) {
      F_009bc4a0(*(undefined * PTR32 *)((int)this + 0x1648));
    }
    else {
      F_009bc530(*(undefined * PTR32 *)((int)this + 0x1648),1);
    }
    in_EAX = F_00983120(*(undefined4 *)((int)this + 0x1648),0);
    *(undefined4 *)((int)this + 0x1648) = 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0x1658) != (undefined *)0x0) {
    bVar1 = F_009bc4f0(*(undefined * PTR32 *)((int)this + 0x1658));
    if (bVar1 == 0) {
      F_009bc4a0(*(undefined * PTR32 *)((int)this + 0x1658));
    }
    else {
      F_009bc530(*(undefined * PTR32 *)((int)this + 0x1658),1);
    }
    in_EAX = F_00983120(*(undefined4 *)((int)this + 0x1658),0);
    *(undefined4 *)((int)this + 0x1658) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00aa0b30 */
unsigned int F_00aa0b30(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x2ea9) != '\0') {
    F_00afed60((undefined *)((int)this + 0x1b0));
    if (*(int *)((int)this + 0x2e00) != 0) {
      F_00afed60(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x1b0))));
    }
    if (*(int *)((int)this + 0x2e04) != 0) {
      F_00afed60(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e04) + 0x1b0))));
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00aa0b80 */
unsigned int F_00aa0b80(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x2ea9) != '\0') {
    F_00afb860((undefined *)((int)this + 0x1b0));
    if ((*(int *)((int)this + 0x2e00) != 0) &&
       ((*(char *)((int)this + 0x2e08) != '\0' || (*(char *)((int)this + 0x2e09) != '\0')))) {
      F_00afb860(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x1b0))));
    }
    if (*(int *)((int)this + 0x2e04) != 0) {
      F_00afb860(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e04) + 0x1b0))));
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00aa0be0 */
unsigned int F_00aa0be0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x2ea9) != '\0') {
    F_00afec70((undefined *)((int)this + 0x1b0));
    if ((*(int *)((int)this + 0x2e00) != 0) &&
       ((*(char *)((int)this + 0x2e08) != '\0' || (*(char *)((int)this + 0x2e09) != '\0')))) {
      F_00afec70(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x1b0))));
    }
    if (*(int *)((int)this + 0x2e04) != 0) {
      F_00afec70(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e04) + 0x1b0))));
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00aa0c40 */
unsigned int F_00aa0c40(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x2ea9) != '\0') {
    F_00afe3b0((undefined *)((int)this + 0x1b0));
    if ((*(int *)((int)this + 0x2e00) != 0) &&
       ((*(char *)((int)this + 0x2e08) != '\0' || (*(char *)((int)this + 0x2e09) != '\0')))) {
      F_00afe3b0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e00) + 0x1b0))));
    }
    if (*(int *)((int)this + 0x2e04) != 0) {
      F_00afe3b0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2e04) + 0x1b0))));
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00aa0ca0 */
unsigned int F_00aa0ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0ca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x18c) = 0;
  *(undefined1 *)(in_ecx + 0x18b) = 3;
  return 0;
}

/* ref: FUN_00aa0cc0 */
uint F_00aa0cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  int * piVar2;
  ushort uVar3;
  undefined4 in_EAX = 0;
  undefined3 uVar7;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 extraout_var = 0;
  int * piVar8;
  
  bVar1 = *(byte *)((int)this + 0x2dd4);
  uVar7 = (undefined3)((uint)in_EAX >> 8);
  uVar4 = CONCAT31(uVar7,bVar1);
  (*(undefined * PTR32 *)(gen_frame + 0x88)) = this;
  if ((bVar1 & 0x40) != 0) {
    if (*(char *)((int)this + 0x8a) != '\x03') {
      uVar4 = CONCAT31(uVar7,bVar1) & 0xffffffbf;
      *(char *)((int)this + 0x2dd4) = (char)uVar4;
      return uVar4;
    }
    if ((REFG(int, 0x1379694) != 0) &&
       (uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this), (char)uVar4 != '\0')) {
      uVar5 = F_00a5f3d0(this,((int *)(gen_frame + 0x0)));
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar4 = 0;
        if (uVar5 != 0) {
          do {
            piVar8 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar4)];
            if ((piVar8 != (int *)0x0) &&
               (uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x1dc))(piVar8), (char)uVar6 == '\0')) {
              return uVar6;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar5);
        }
        uVar4 = 0;
        piVar8 = (int *)0x0;
        (*(uint *)(gen_frame + 0x84)) = 0;
        if (uVar5 != 0) {
          piVar8 = (int *)0x0;
          do {
            piVar2 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar4)];
            if (piVar2 != (int *)0x0) {
              uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0x1cc))(piVar2,(*(undefined * PTR32 *)(gen_frame + 0x88)));
              if (((ushort)uVar6 != 0) && ((ushort)(*(uint *)(gen_frame + 0x84)) < (ushort)uVar6)) {
                piVar8 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar4)];
                (*(uint *)(gen_frame + 0x84)) = uVar6 & 0xffff;
              }
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar5);
        }
        uVar4 = 0;
        if (piVar8 != (int *)0x0) {
          uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0x1d8))(piVar8,(*(undefined * PTR32 *)(gen_frame + 0x88)));
          uVar4 = uVar4 & 0xffff;
        }
        this = (*(undefined * PTR32 *)(gen_frame + 0x88));
        if (*(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x88)) + 0x135a) != (short)uVar4) {
          uVar3 = F_00b76c70((int)(*(undefined * PTR32 *)(gen_frame + 0x88)) + 0x1340,uVar4);
          *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x88)) + 0x2dd4) = *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x88)) + 0x2dd4) & 0xbf;
          return CONCAT22(extraout_var,uVar3);
        }
      }
      *(byte *)((int)this + 0x2dd4) = *(byte *)((int)this + 0x2dd4) & 0xbf;
    }
  }
  return uVar4;
}

/* ref: FUN_00aa0df0 */
float F_00aa0df0(void)
{
  GEN_ENTER(0xaa0df0u, 0u, 0u, 0u, 0u);
  return *(float *)&REFG(undefined, 0x10e8728);
}

/* ref: FUN_00aa0e00 */
uint F_00aa0e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = *(byte *)((int)this + 0x2e94);
  if (bVar1 < 0x20) {
    *(undefined4 *)((int)this + (uint)bVar1 * 4 + 0x2e14) = param_1;
    *(char *)((int)this + 0x2e94) = *(char *)((int)this + 0x2e94) + '\x01';
    return (uint)bVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00aa0e30 */
uint F_00aa0e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = 0;
  if (*(char *)((int)this + 0x2e94) != '\0') {
    puVar2 = (undefined4 *)((int)this + 0x2e14);
    do {
      *(undefined4 *)(param_1 + uVar1 * 4) = *puVar2;
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 < *(byte *)((int)this + 0x2e94));
  }
  return (uint)*(byte *)((int)this + 0x2e94);
}

/* ref: FUN_00aa0e80 */
uint F_00aa0e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (*(byte *)((int)this + 0x2e94) != 0) {
    piVar2 = (int *)((int)this + 0x2e14);
    do {
      if (param_1 == *(int *)(*piVar2 + 8)) {
        return *(uint *)((int)this + uVar1 * 4 + 0x2e14);
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < *(byte *)((int)this + 0x2e94));
  }
  return 0;
}

/* ref: FUN_00aa0ed0 */
byte F_00aa0ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_00547df0((undefined *)((int)this + 0x620),param_1,param_2);
  return bVar1;
}

/* ref: FUN_00aa0ee0 */
uint F_00aa0ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa0ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00549f60((undefined *)((int)this + 0x620),param_1,param_2,param_3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa0ef0 */
uint F_00aa0ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0ef0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00533ea0(in_ecx + 0x620);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa0f00 */
uint F_00aa0f00(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00538e40((undefined *)((int)this + 0x620));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa0f10 */
uint F_00aa0f10(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00538ef0((undefined *)((int)this + 0x620));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa0f20 */
uint F_00aa0f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005390f0((undefined *)((int)this + 0x620),param_1);
  return uVar1;
}

/* ref: FUN_00aa0f30 */
byte F_00aa0f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00538fd0((undefined *)((int)this + 0x620),param_1);
  return bVar1;
}

/* ref: FUN_00aa0f40 */
byte F_00aa0f40(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00533ed0();
  return bVar1;
}

/* ref: FUN_00aa0f60 */
uint F_00aa0f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa0f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00548040((int)this + 0x620,param_1,1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa0f80 */
uint F_00aa0f80(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0f80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00533f10(in_ecx + 0x620);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa0f90 */
uint F_00aa0f90(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0f90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00533f10(in_ecx + 0x620);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa0fa0 */
uint F_00aa0fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa0fa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00533ec0(in_ecx + 0x620);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa0fb0 */
uint F_00aa0fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa0fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00546350((undefined *)((int)this + 0xa10),param_1,param_2,param_3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa0fc0 */
unsigned int F_00aa0fc0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xaa0fc0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  F_005416c0(param_1 + 0xa10,param_2,param_3);
  return 0;
}

/* ref: FUN_00aa0fe0 */
unsigned int F_00aa0fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00541880((undefined *)((int)this + 0xa10),param_1,param_2);
  return 0;
}

/* ref: FUN_00aa0ff0 */
uint F_00aa0ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa0ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005418f0((undefined *)((int)this + 0xa10),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00aa1020 */
uint F_00aa1020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa1020u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  F_00542100(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),(*(uint *)&gen_args[1]),-(uint)((*(uint *)&gen_args[2]) != 0xffffffff) & (*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[3]))
  ;
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00aa1050 */
uint F_00aa1050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa1050u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  F_0053b1b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),(*(uint *)&gen_args[1]),-(uint)((*(uint *)&gen_args[2]) != 0xffffffff) & (*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[3]))
  ;
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00aa1080 */
uint F_00aa1080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa1080u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  F_00542140(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),(*(uint *)&gen_args[1]),-(uint)((*(uint *)&gen_args[2]) != 0xffffffff) & (*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[3]))
  ;
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00aa10b0 */
float F_00aa10b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa10b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  float fVar1;
  
  fVar1 = F_00542180(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]))
  ;
  return fVar1;
}

/* ref: FUN_00aa10e0 */
float F_00aa10e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa10e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  float fVar1;
  
  fVar1 = F_00542230(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]))
  ;
  return fVar1;
}

/* ref: FUN_00aa1110 */
float F_00aa1110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa1110u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  float fVar1;
  
  fVar1 = F_005422e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]))
  ;
  return fVar1;
}

/* ref: FUN_00aa1140 */
float F_00aa1140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa1140u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  float fVar1;
  
  fVar1 = F_00542320(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]))
  ;
  return fVar1;
}

/* ref: FUN_00aa1170 */
float F_00aa1170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1170u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *((float *)GEN_TOP(((-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1])) * 0x300 + 0xaec + (int)(*(undefined * PTR32 *)&gen_args[0]))));
}

/* ref: FUN_00aa1190 */
float F_00aa1190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1190u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *((float *)GEN_TOP(((-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1])) * 0x300 + 0xc50 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
}

/* ref: FUN_00aa11b0 */
float F_00aa11b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa11b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *((float *)GEN_TOP(((-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1])) * 0x300 + 0xc54 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
}

/* ref: FUN_00aa11d0 */
float F_00aa11d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa11d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  float fVar2;
  
  uVar1 = F_0053a4e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))));
  if (uVar1 == 0) {
    return REFG(float, 0x10e79e4);
  }
  fVar2 = F_0053a540(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]));
  return fVar2;
}

/* ref: FUN_00aa1210 */
float F_00aa1210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1210u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  float fVar2;
  
  uVar1 = F_0053a4e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))));
  if (uVar1 == 0) {
    return REFG(float, 0x10e79e4);
  }
  fVar2 = F_0053a580(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]));
  return fVar2;
}

/* ref: FUN_00aa1250 */
float F_00aa1250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1250u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  float fVar2;
  
  uVar1 = F_0053a4e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))));
  if (uVar1 == 0) {
    return REFG(float, 0x10e79e4);
  }
  fVar2 = F_0053a5c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]));
  return fVar2;
}

/* ref: FUN_00aa1290 */
float F_00aa1290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1290u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  float fVar2;
  
  uVar1 = F_0053a4e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))));
  if (uVar1 == 0) {
    return REFG(float, 0x10e79e4);
  }
  fVar2 = F_0053a600(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]));
  return fVar2;
}

/* ref: FUN_00aa12d0 */
byte F_00aa12d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa12d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_0053a4e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))));
  if (uVar2 == 0) {
    return 0;
  }
  bVar1 = F_00535c20(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10))),-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]));
  return bVar1;
}

/* ref: FUN_00aa1310 */
byte F_00aa1310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_0053ad80((undefined *)((int)this + 0xa10),param_1);
  return bVar1;
}

/* ref: FUN_00aa1320 */
byte F_00aa1320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_0053ae10((undefined *)((int)this + 0xa10),param_1);
  return bVar1;
}

/* ref: FUN_00aa1330 */
byte F_00aa1330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00546640((undefined *)((int)this + 0xa10),param_1);
  return bVar1;
}

/* ref: FUN_00aa1340 */
byte F_00aa1340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_0053aeb0((undefined *)((int)this + 0xa10),param_1);
  return bVar1;
}

/* ref: FUN_00aa1350 */
byte F_00aa1350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_0053af40((undefined *)((int)this + 0xa10),param_1);
  return bVar1;
}

/* ref: FUN_00aa1360 */
uint F_00aa1360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1360u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *((uint *)GEN_TOP(((-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1])) * 0x300 + 0xa88 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
}

/* ref: FUN_00aa1380 */
uint F_00aa1380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1380u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_00534990((-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1])) * 0x300 + 0xa30 + (int)(*(undefined * PTR32 *)&gen_args[0]));
  return uVar1;
}

/* ref: FUN_00aa13b0 */
float F_00aa13b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa13b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  float10 fVar1;
  
  fVar1 = F_00535a70((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa10,-(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]));
  return (float)fVar1;
}

/* ref: FUN_00aa13d0 */
uint F_00aa13d0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa13d0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0053ac00(param_1 + 0xa10,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00aa13f0 */
uint F_00aa13f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa13f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005353f0((undefined *)((int)this + 0xa10),param_1);
  return uVar1;
}

/* ref: FUN_00aa1400 */
uint F_00aa1400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00535420((undefined *)((int)this + 0xa10),param_1);
  return uVar1;
}

/* ref: FUN_00aa1410 */
uint F_00aa1410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0053a640((undefined *)((int)this + 0xa10),param_1);
  return uVar1;
}

/* ref: FUN_00aa1420 */
unsigned int F_00aa1420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1420u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_0054ad20((undefined *)(param_1 + 0xa10),param_2);
  }
  return 0;
}

/* ref: FUN_00aa1440 */
unsigned int F_00aa1440(unsigned int gen_a0)
{
  GEN_ENTER(0xaa1440u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 != 0) {
    F_00548ff0((undefined *)(param_1 + 0xa10));
    return 0;
  }
  return 0;
}

/* ref: FUN_00aa1460 */
uint F_00aa1460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2dfc) = param_2;
  return param_2;
}

/* ref: FUN_00aa1470 */
uint F_00aa1470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  if (*(char *)((int)this + 0x2e09) != (char)param_1) {
    *(char *)((int)this + 0x2e09) = (char)param_1;
    uVar1 = F_00a35790(&REFG(undefined, 0x14a31e0),this);
  }
  return uVar1;
}

/* ref: FUN_00aa14a0 */
uint F_00aa14a0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa14a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x2e04) != 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x2e04) + 0x80)));
  }
  return 0;
}

/* ref: FUN_00aa14c0 */
ushort F_00aa14c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa14c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x2e0c) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00aa14e0 */
uint F_00aa14e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa14e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x2e04);
  uVar2 = 0;
  *(undefined2 *)((int)this + 0x2e0c) = 0;
  if (piVar1 != (int *)0x0) {
    if ((char)param_1 != '\0') {
      *(short *)((int)this + 0x2e0c) = (short)piVar1[0x20];
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e04) + 0xb4))))(*(int * PTR32 *)((int)this + 0x2e04),0);
    *(undefined4 *)((int)this + 0x2e04) = 0;
    uVar2 = F_00a35790(&REFG(undefined, 0x14a31e0),this);
  }
  return uVar2;
}

/* ref: FUN_00aa1550 */
unsigned int F_00aa1550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (REFG(void * PTR32, 0x1379694) == this) {
    F_00a6a960(param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00aa1570 */
uint F_00aa1570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa1570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  if ((byte)param_1 < 0x1a) {
    this_00 = *(int * PTR32 *)((int)this + 0xec);
    if (this_00 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*this_00 + 200))(this_00);
      if (uVar2 == 1) {
        uVar3 = (uint)(byte)param_1;
        uVar2 = 0;
        if (*(char *)(uVar3 + 0x2db8 + (int)this) != (char)param_2) {
          F_0068e790(((char *)(gen_frame + 0x0)));
          F_00c48350(((char *)(gen_frame + 0x0)),0,0x48);
          uVar2 = 0;
          do {
            if (uVar2 == uVar3) {
              ((char *)(gen_frame + 0x0))[(int)(uVar2)] = (char)param_2;
            }
            else {
              ((char *)(gen_frame + 0x0))[(int)(uVar2)] = *(char *)((int)this + uVar2 + 0x2db8);
            }
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < 0x1a);
          bVar1 = F_006a9a90(this_00,((char *)(gen_frame + 0x0)),1);
          uVar2 = CONCAT31(extraout_var,bVar1);
          if (bVar1 == 0) {
            F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
            return uVar2;
          }
          *(char *)(uVar3 + 0x2db8 + (int)this) = (char)param_2;
        }
        F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00aa1660 */
float F_00aa1660(unsigned int gen_a0)
{
  GEN_ENTER(0xaa1660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab2930(*(undefined4 *)((int)this + 0x2e9c));
  if (uVar1 != 0) {
    return *(float *)(uVar1 + 0x10);
  }
  return REFG(float, 0x1087ef8);
}

/* ref: FUN_00aa1680 */
float F_00aa1680(unsigned int gen_a0)
{
  GEN_ENTER(0xaa1680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab2930(*(undefined4 *)((int)this + 0x2e9c));
  if (uVar1 != 0) {
    return *(float *)(uVar1 + 0x14);
  }
  return REFG(float, 0x1087ef8);
}

/* ref: FUN_00aa16a0 */
uint F_00aa16a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa16a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((REFG(void * PTR32, 0x1379694) == this) && ((char)param_1 == '\x01')) {
    F_00af2090();
  }
  uVar1 = F_00a5ff20(this,param_1);
  return uVar1;
}

/* ref: FUN_00aa16d0 */
unsigned int F_00aa16d0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa16d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(char *)(in_ecx + 0x9a0) == '\0') {
    bVar1 = F_00ae8580(in_ecx + 0x1b0);
    if (bVar1 == 0) {
      *(undefined4 *)(in_ecx + 0x20) = *(undefined4 *)(in_ecx + 0xb0);
    }
  }
  return 0;
}

/* ref: FUN_00aa1700 */
unsigned int F_00aa1700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa1700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b784f0((int)this + 0x1340,this,param_1,param_2);
  return 0;
}

/* ref: FUN_00aa1720 */
uint F_00aa1720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1720u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  if ((char)(*(uint *)&gen_args[1]) != '\0') {
    (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2dc4)))) & 0xffffff7f;
    uVar1 = F_00aa1570((*(undefined * PTR32 *)&gen_args[0]),0xc,(*(uint *)&gen_args[1]));
    return uVar1;
  }
  (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2dc4)))) | 0x80;
  uVar1 = F_00aa1570((*(undefined * PTR32 *)&gen_args[0]),0xc,(*(uint *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00aa1760 */
uint F_00aa1760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x2ed4) = param_1;
  this_00 = (undefined *)F_006b8c00();
  uVar1 = F_006e3480(this_00,this,param_1);
  return uVar1;
}

/* ref: FUN_00aa1780 */
unsigned int F_00aa1780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)((int)this + 0x14c4) == param_1) {
    *(undefined4 *)((int)this + 0x14c4) = 0;
  }
  if (*(int *)((int)this + 0x14c8) == param_1) {
    *(undefined4 *)((int)this + 0x14c8) = 0;
  }
  if (*(int *)((int)this + 0x14cc) == param_1) {
    *(undefined4 *)((int)this + 0x14cc) = 0;
  }
  if (*(int *)((int)this + 0x14d0) == param_1) {
    *(undefined4 *)((int)this + 0x14d0) = 0;
  }
  if (*(int *)((int)this + 0x14d4) == param_1) {
    *(undefined4 *)((int)this + 0x14d4) = 0;
  }
  if (*(int *)((int)this + 0x14d8) == param_1) {
    *(undefined4 *)((int)this + 0x14d8) = 0;
  }
  if (*(int *)((int)this + 0x14dc) == param_1) {
    *(undefined4 *)((int)this + 0x14dc) = 0;
  }
  if (*(int *)((int)this + 0x14e0) == param_1) {
    *(undefined4 *)((int)this + 0x14e0) = 0;
  }
  return 0;
}

/* ref: FUN_00aa1800 */
byte F_00aa1800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_00ab22c0((uint)*(byte *)((int)this + 0x2ecf));
    if ((uVar1 != 0) && (*(byte *)(param_1 + 0x2ecf) < 0xc)) {
      return *((byte *)GEN_TOP((*(byte *)(param_1 + 0x2ecf) + uVar1)));
    }
  }
  return 0;
}

/* ref: FUN_00aa1840 */
ulonglong F_00aa1840(unsigned int gen_a0)
{
  GEN_ENTER(0xaa1840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  if (REFG(void * PTR32, 0x1379694) == this) {
    uVar1 = F_00538780(&REFG(undefined4, 0x1375bc0));
    return uVar1;
  }
  return *(ulonglong *)((int)this + 0x1a0);
}

/* ref: FUN_00aa1860 */
uint F_00aa1860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa1860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ae0810(&REFG(undefined, 0x1336e40),*(undefined4 *)((int)this + 0x74));
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    *(undefined4 *)((int)this + 0x1690) = param_2;
    if (uVar1 != 0) {
      *(undefined4 *)(uVar1 + 0x58) = param_2;
      return uVar1;
    }
    break;
  case 3: ;
    *(undefined4 *)((int)this + 0x1698) = param_2;
    if (uVar1 != 0) {
      *(undefined2 *)(uVar1 + 0x60) = (undefined2)param_2;
      return uVar1;
    }
    break;
  case 5: ;
    *(undefined2 *)((int)this + 0x16a0) = (undefined2)param_2;
    if (uVar1 != 0) {
      *(undefined2 *)(uVar1 + 100) = (undefined2)param_2;
      return uVar1;
    }
    break;
  case 7: ;
    *(undefined2 *)((int)this + 0x16a2) = (undefined2)param_2;
    return CONCAT22((short)(uVar1 >> 0x10),(undefined2)param_2);
  case 8: ;
    *(undefined2 *)((int)this + 0x16a6) = (undefined2)param_2;
  }
  return uVar1;
}

/* ref: FUN_00aa1910 */
ushort F_00aa1910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1910u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 0x2efc) = 1;
  *(ushort *)(in_ecx + 0x2efe) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00aa1930 */
ushort F_00aa1930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1930u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x2f00) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00aa1950 */
uint F_00aa1950(unsigned int gen_a0)
{
  GEN_ENTER(0xaa1950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  if ((char)uVar1 != '\0') {
    return uVar1;
  }
  if ((*(char *)((int)this + 0x8a) == '\x03') &&
     (uVar1 = F_00ab2410(*(undefined4 *)((int)this + 0x80)), uVar1 == 0)) {
    return 0;
  }
  F_00a5f950(this);
  return uVar1;
}

/* ref: FUN_00aa19d0 */
byte F_00aa19d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa19d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (REFG(void * PTR32, 0x1379694) == this) {
    iVar1 = 0;
  }
  else if ((*(byte *)((int)this + 0x2dd2) & 0x10) == 0) {
    uVar2 = F_00a62220(this);
    iVar1 = 3 - (uint)((uVar2 & 0xff) != 0);
  }
  else {
    iVar1 = 1;
  }
  if ((char)param_2 == '\0') {
    if ((&REFG(undefined1, 0x14b4f54))[(int)(iVar1)] == '\0') {
      return 1;
    }
  }
  else if ((&REFG(undefined1, 0x14b4f54))[(int)(iVar1)] != '\x02') {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aa1a30 */
uint F_00aa1a30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaa1a30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_00af20c0(param_1 + 0x1b0,param_2);
  return uVar1;
}

/* ref: FUN_00aa1a50 */
uint F_00aa1a50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaa1a50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint in_EAX = 0;
  
  F_00ae9200(in_ecx + 0x1b0,param_2);
  return in_EAX;
}

/* ref: FUN_00aa1a70 */
uint F_00aa1a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa1a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ulonglong uVar1;
  
  uVar1 = F_007c9d00(this);
  if ((char)param_2 == '\0') {
    *param_1 = (uint)(uVar1 >> 0x20) & 0xffffff;
    return (uint)param_1;
  }
  *param_1 = (uint)uVar1 & 0xffffff;
  return (uint)param_1;
}

/* ref: FUN_00aa1ab0 */
uint F_00aa1ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (*(char *)((int)this + 0x2f04) == '\x03') {
    F_00a60a40(this,param_1,0x1c);
    return param_1;
  }
  F_00a60a40(this,param_1,0x2e);
  return param_1;
}

/* ref: FUN_00aa1ae0 */
uint F_00aa1ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (((byte)param_1 & 0x80) != 0x80) {
    *(byte *)((int)this + 0x168a) = (byte)param_1;
  }
  return param_1;
}

/* ref: FUN_00aa1b00 */
uint F_00aa1b00(unsigned int gen_a0)
{
  GEN_ENTER(0xaa1b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  F_00541850((undefined *)((int)this + 0xa10));
  bVar1 = F_00ae70f0((int)this + 0x1b0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00aa1b20 */
uint F_00aa1b20(unsigned int gen_a0)
{
  GEN_ENTER(0xaa1b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x80) == 0x372) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xa8))(this);
    uVar1 = F_00463610(0,uVar2,uVar1);
    return uVar1;
  }
  return (int)this + 0x30;
}

/* ref: FUN_00aa1b60 */
uint F_00aa1b60(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xaa1b60u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a61850(param_1,param_2,param_3,param_4);
  if ((*(int *)(param_1 + 0x2e00) != 0) && (*(char *)(param_1 + 0x2e08) != '\0')) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x2e00) + 0x40))))
                      (*(int * PTR32 *)(param_1 + 0x2e00),(undefined4)gen_fl2bits(param_2),
                       (undefined4)gen_fl2bits(param_3),(undefined4)gen_fl2bits(param_4));
  }
  if ((*(byte *)(param_1 + 0x2dd2) & 0x10) != 0) {
    uVar1 = F_00ae0810(&REFG(undefined, 0x1336e40),*(undefined4 *)(param_1 + 0x74));
    if (uVar1 != 0) {
      *(undefined1 *)(uVar1 + 0x1e0) = 1;
      *(float *)(uVar1 + 0x1f0) = param_2;
      *(float *)(uVar1 + 500) = param_3;
      *(float *)(uVar1 + 0x1f8) = param_4;
    }
  }
  return uVar1;
}

/* ref: FUN_00aa1c10 */
uint F_00aa1c10(unsigned int gen_a0)
{
  GEN_ENTER(0xaa1c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  undefined * pvVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  code * pcVar6;
  undefined4 uVar7;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = 0;
  if (piVar2 != (int *)0x0) {
    if (*(int *)((int)this + 0x1684) != 0) {
      piVar1 = *(int * PTR32 *)((int)this + 0xec);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x168))(piVar1,0);
      }
      piVar1 = (int *)((int)this + 0x1e60);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x168))(piVar1,0);
      }
      uVar7 = *(undefined4 *)((int)this + 0x1684);
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      F_008aad20(pvVar3,uVar7);
      *(undefined4 *)((int)this + 0x1684) = 0;
    }
    uVar4 = *(uint *)((int)this + 0x1678);
    uVar5 = *(uint *)((int)this + 0x167c);
    if ((uVar4 & uVar5) != 0xffffffff) {
      pcVar6 = ((code *)REFP(0xa9f2a0));
      pvVar3 = this;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      uVar4 = F_008aac80(this_00,uVar4,uVar5,pcVar6,pvVar3);
      *(uint *)((int)this + 0x1684) = uVar4;
    }
  }
  return uVar4;
}

/* ref: FUN_00aa1cc0 */
uint F_00aa1cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa1cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = param_1;
  if ((*(uint *)((int)this + 0x1678) != param_1) || (*(int *)((int)this + 0x167c) != param_2)) {
    *(uint *)((int)this + 0x1678) = param_1;
    *(int *)((int)this + 0x167c) = param_2;
    if ((*(int *)((int)this + 0xec) != 0) && (*(char *)((int)this + 0x1680) != '\0')) {
      uVar1 = F_00aa1c10(this);
    }
  }
  return uVar1;
}

/* ref: FUN_00aa1d10 */
uint F_00aa1d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa1d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(char *)((int)this + 0x1680) = (char)param_1;
  if ((*(int *)((int)this + 0x1684) == 0) && ((char)param_1 != '\0')) {
    uVar1 = F_00aa1c10(this);
    return uVar1;
  }
  uVar1 = F_00a9f170(this);
  return uVar1;
}

/* ref: FUN_00aa1d40 */
byte F_00aa1d40(unsigned int gen_a0)
{
  GEN_ENTER(0xaa1d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  undefined4 * puVar2;
  undefined1 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float local_8;
  
  puVar2 = REFG(undefined4 * PTR32, 0x1379694);
  if (REFG(undefined4 * PTR32, 0x1379694) == (undefined4 *)0x0) {
    return 0xd;
  }
  if ((REFG(undefined4 * PTR32, 0x1379694) == this) || ((*(byte *)((int)this + 0x2dd4) & 0x20) != 0)) {
    return 1;
  }
  local_8 = F_00a60140(REFG(undefined4 * PTR32, 0x1379694),this);
  if ((float10)local_8 < (float10)0) {
    local_8 = 0.0;
  }
  if ((double)local_8 < *(double *)&REFG(undefined, 0x10e8718)) {
    uVar3 = (undefined1)(int)local_8;
  }
  else {
    uVar3 = 0xfa;
  }
  bVar1 = local_8 <= REFG(float, 0x1094880);
  *(undefined1 *)((int)this + 0x8d) = uVar3;
  *(byte *)((int)this + 0x90) =
       *(byte *)((int)this + 0x90) ^ (bVar1 * '\x02' ^ *(byte *)((int)this + 0x90)) & 2;
  uVar5 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this);
  uVar6 = F_00533b60(&REFG(undefined4, 0x1375bc0));
  if (uVar5 != uVar6) {
    uVar5 = ((gen_lcode *)*(gen_code32 *)*puVar2)(puVar2);
    uVar6 = F_00aa1840(this);
    if (uVar5 != uVar6) {
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
      if ((uVar4 == 2) && ((*(byte *)((int)this + 0x2dd2) & 1) != 0)) {
        if ((*(byte *)((int)puVar2 + 0x2dd2) & 2) == 0) {
          if (local_8 <= REFG(float, 0x10a0d00)) {
            return 3;
          }
          return 7;
        }
        if (local_8 <= REFG(float, 0x10a0d00)) {
          return 3;
        }
        return 5;
      }
      if (((*(int *)((int)this + 0x118) != 0) || ((*(byte *)((int)this + 0x2dd3) & 1) != 0)) ||
         ((*(byte *)((int)this + 0x2dd2) & 0x10) != 0)) {
        if ((*(byte *)((int)puVar2 + 0x2dd2) & 2) == 0) {
          if (!((double)local_8 <= *(double *)&REFG(undefined, 0x1090718))) {
            return 7;
          }
        }
        else if (!((double)local_8 <= *(double *)&REFG(undefined, 0x1090718))) {
          return 5;
        }
        return 3;
      }
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
      if ((uVar4 == 3) && ((*(byte *)((int)this + 0x2dd2) & 0x80) == 0)) {
        if ((*(byte *)((int)puVar2 + 0x2dd2) & 2) != 0) {
          if ((double)local_8 <= *(double *)&REFG(undefined, 0x1090718)) {
            return 6;
          }
          return 7;
        }
        if (local_8 <= REFG(float, 0x10a0d00)) {
          return 4;
        }
        if ((double)local_8 <= *(double *)&REFG(undefined, 0x1090718)) {
          return 8;
        }
        return 9;
      }
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
      if ((uVar4 != 2) && (uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this), uVar4 != 1)) {
        if ((*(byte *)((int)puVar2 + 0x2dd2) & 2) != 0) {
          if ((double)local_8 <= *(double *)&REFG(undefined, 0x1090718)) {
            return 6;
          }
          return 9;
        }
        if (local_8 <= REFG(float, 0x10a0d00)) {
          return 4;
        }
        if ((double)local_8 <= *(double *)&REFG(undefined, 0x1090718)) {
          return 8;
        }
        return 10;
      }
      if ((*(byte *)((int)puVar2 + 0x2dd2) & 2) != 0) {
        if (local_8 <= REFG(float, 0x10a0d00)) {
          return 5;
        }
        if ((double)local_8 <= *(double *)&REFG(undefined, 0x1090718)) {
          return 6;
        }
        return 8;
      }
      if (local_8 <= REFG(float, 0x10a0d00)) {
        return 4;
      }
      if (!((double)local_8 <= *(double *)&REFG(undefined, 0x1090718))) {
        return 10;
      }
      return 8;
    }
  }
  if ((*(byte *)((int)puVar2 + 0x2dd2) & 2) == 0) {
    if ((double)local_8 <= *(double *)&REFG(undefined, 0x1090718)) {
      return 2;
    }
    return 5;
  }
  if (!((double)local_8 <= *(double *)&REFG(undefined, 0x1090718))) {
    return 4;
  }
  return 2;
}

/* ref: Client::Game::Character::BattleChara::vf13 */
uint F_00aa2030(unsigned int gen_a0)
{
  GEN_ENTER(0xaa2030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined1 BVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  undefined * pBVar6;
  int local_8;
  
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  if (uVar4 != 8) {
    BVar2 = (undefined1)F_00aa1d40(this);
    piVar1 = *(int * PTR32 *)(this + 0xec);
    uVar5 = (uint)(byte)BVar2;
    this[0x8c] = BVar2;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1,uVar5);
    }
    pBVar6 = this + 0x16c0;
    local_8 = 3;
    do {
      ((code *)*(gen_code32 *)(*(int *)pBVar6 + 0x70))(pBVar6,uVar5);
      pBVar6 = pBVar6 + 0x7a0;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (*(int *)(this + 0x2e00) != 0) {
      *((undefined *)GEN_TOP((*(int *)(this + 0x2e00) + 0x8c))) = BVar2;
      if ((double)(byte)this[0x8d] < *(double *)&REFG(undefined, 0x10e8718)) {
        uVar3 = (undefined1)(int)(float)(byte)this[0x8d];
      }
      else {
        uVar3 = 0xfa;
      }
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x2e00) + 0x8d))) = uVar3;
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x2e00) + 0xec)));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1,uVar5);
      }
    }
    uVar4 = 0;
    if (*(int *)(this + 0x2e04) != 0) {
      *((undefined *)GEN_TOP((*(int *)(this + 0x2e04) + 0x8c))) = BVar2;
      if ((double)(byte)this[0x8d] < *(double *)&REFG(undefined, 0x10e8718)) {
        uVar3 = (undefined1)(int)(float)(byte)this[0x8d];
      }
      else {
        uVar3 = 0xfa;
      }
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x2e04) + 0x8d))) = uVar3;
      uVar4 = *(uint *)(this + 0x2e04);
      piVar1 = *(int * PTR32 *)(uVar4 + 0xec);
      if (piVar1 != (int *)0x0) {
        uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1,uVar5);
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00aa2160 */
unsigned int F_00aa2160(unsigned int gen_a0)
{
  GEN_ENTER(0xaa2160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  code * pcVar3;
  
  if (*(int *)((int)this + 0x2e00) != 0) {
    if ((REFG(void * PTR32, 0x1379694) == this) && (*(char *)((int)this + 0x2e08) != '\0')) {
      pcVar3 = *(gen_code32 *)(*(int *)this + 0x9c);
    }
    else {
      pcVar3 = *(gen_code32 *)(*(int *)this + 0xa0);
    }
    uVar2 = (*pcVar3)(this);
    piVar1 = *(int * PTR32 *)((int)this + 0x2e00);
    if ((char)uVar2 == '\x01') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x10,0);
      return 0;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x10,0);
  }
  return 0;
}

/* ref: FUN_00aa21b0 */
uint F_00aa21b0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa21b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  if ((uVar2 == 8) && (uVar2 = *(ushort *)((int)this + 0x88) - 1, uVar2 < 200)) {
    if ((uVar2 < 0x158) && (piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar2)])), piVar1 != (int *)0x0)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x98))(piVar1);
      if ((char)uVar2 != '\0') {
        return 1;
      }
    }
    return 0;
  }
  return (uint)((*(uint *)((int)this + 0x11c) & 0xfffffff7) == 0);
}

/* ref: FUN_00aa2210 */
unsigned int F_00aa2210(unsigned int gen_a0)
{
  GEN_ENTER(0xaa2210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xec);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00694320((undefined *)((int)this + 0x1e60));
    uVar2 = F_00694320((undefined *)((int)this + 0x16c0));
    F_006abe30(this_00,uVar2,uVar1);
    if (REFG(void * PTR32, 0x1379694) == this) {
      F_00b5a0c0(REFG(void * PTR32, 0x14c4e78),1);
    }
  }
  return 0;
}

/* ref: FUN_00aa2260 */
uint F_00aa2260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa2260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * pvVar2;
  int * piVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  uVar1 = F_00ab2960(*(undefined4 *)((int)this + 0x2e98));
  pvVar2 = param_2;
  if ((((uVar1 != 0) && (*(char *)(uVar1 + 4) == '\x01')) && (param_2 == (undefined *)0x0)) &&
     (param_1 == 2)) {
    pvVar2 = (undefined *)0x1;
  }
  if (*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x2d90) != pvVar2) {
    *(undefined * PTR32 *)((int)this + param_1 * 4 + 0x2d90) = pvVar2;
    if ((9 < param_1) || (((*(byte *)((int)this + 0x2dd3) & 0x20) != 0 && (param_1 == 0)))) {
      pvVar2 = (undefined *)0x0;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
    uVar1 = F_00a5f500(this);
    pvVar2 = (undefined *)0x0;
    if (uVar1 != 0) {
      piVar3 = (int *)F_00a5f500(this);
      pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xfc))(piVar3,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)))));
    }
  }
  return (uint)pvVar2;
}

/* ref: FUN_00aa22f0 */
unsigned int F_00aa22f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaa22f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[1])REFP(0x10e8724));
  (*(undefined1 *)(gen_frame + 0x8)) = 1;
  F_00aebea0(in_ecx + 0x1b0,param_2,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_00aa23a0 */
uint F_00aa23a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xaa23a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  if ((param_6 == 0) && (REFG(int, 0x1379694) == param_1)) {
    bVar1 = F_00ae87a0(param_1 + 0x1b0);
    if ((bVar1 != 0) && (*(int *)(param_1 + 0x2f10) == 1)) {
      return CONCAT31(extraout_var,bVar1);
    }
  }
  *(int *)(param_1 + 0x2f10) = param_6;
  uVar2 = F_00afd9f0(param_1 + 0x1b0,param_2,(undefined4)gen_fl2bits(param_3),param_4,param_5);
  return uVar2;
}

/* ref: FUN_00aa2400 */
uint F_00aa2400(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xaa2400u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  byte bVar3;
  float * pfVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  float10 fVar6;
  
  fVar6 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar1 = (float)fVar6;
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar6 = ((float10)GEN_TOD(fcos((float10)param_2)));
  fVar2 = (float)fVar6;
  (*(float *)(gen_frame + 0x3c)) = fVar2;
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar6 = (float10)param_3;
  (*(float *)(gen_frame + 0x20)) = (float)(fVar6 * (float10)fVar1);
  (*(float *)(gen_frame + 0x24)) = (float)((float10)*(double *)&REFG(undefined, 0x108bec8) * fVar6);
  (*(float *)(gen_frame + 0x28)) = (float)(fVar6 * (float10)fVar2);
  pfVar4 = (float *)F_00a5feb0(param_1);
  (*(float *)(gen_frame + 0x3c)) = gen_bits2f(*(undefined4 *)((int)param_1 + 0xb0));
  (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar4 + (float10)(*(float *)(gen_frame + 0x20)));
  fVar1 = pfVar4[1];
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x24)));
  fVar2 = pfVar4[2];
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x28)));
  (*(float *)(gen_frame + 0x0)) = (float)((float10)*pfVar4 + (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x24)));
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x28)));
  if ((param_6 == 0) && (REFG(void * PTR32, 0x1379694) == param_1)) {
    bVar3 = F_00ae87a0((int)param_1 + 0x1b0);
    if ((bVar3 != 0) && (*(int *)((int)param_1 + 0x2f10) == 1)) {
      return CONCAT31(extraout_var,bVar3);
    }
  }
  *(int *)((int)param_1 + 0x2f10) = param_6;
  uVar5 = F_00afd9f0((int)param_1 + 0x1b0,&(*(float *)(gen_frame + 0x0)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x3c))),param_4,
                       param_5);
  return uVar5;
}

/* ref: FUN_00aa2500 */
uint F_00aa2500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa2500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  
  uVar1 = F_00ab2a20(param_1);
  uVar3 = 0;
  if (uVar1 != 0) {
    if ((*(char *)((int)this + 0x2e08) == '\0') ||
       (pvVar2 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
      pvVar2 = this;
    }
    uVar3 = F_00531e20((int)pvVar2 + 0x680,(uint)*(byte *)(uVar1 + 7));
    if (uVar3 == param_1) {
      *(undefined1 *)((int)this + 0x2f14) = 1;
      *(uint *)((int)this + 0x2f18) = param_1;
    }
  }
  return uVar3;
}

/* ref: FUN_00aa2560 */
uint F_00aa2560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa2560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = F_00ab1fc0(param_1);
  uVar4 = 0;
  if (uVar1 != 0) {
    if ((*(char *)((int)this + 0x2e08) == '\0') ||
       (pvVar2 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
      pvVar2 = this;
    }
    F_00549500((int)pvVar2 + 0x680,0,(uint)*(ushort *)(uVar1 + 6),(uint)*(ushort *)(uVar1 + 8),
                 (uint)*(ushort *)(uVar1 + 10),(float)*(byte *)(uVar1 + 0xc),0);
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar7 = 0;
      fVar5 = (float)*(byte *)(uVar1 + 0xc);
      uVar6 = 4;
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
      uVar4 = F_00ac3dd0(uVar4,uVar6,param_1,fVar5,param_2,param_3,uVar7);
    }
  }
  return uVar4;
}

/* ref: FUN_00aa2620 */
uint F_00aa2620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa2620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x280];
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char * pcVar6;
  
  (*(uint *)(gen_frame + 0x26c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x270);
  F_00990c20(((undefined1 *)(gen_frame + 0x0)));
  uVar1 = F_00a9fe00(this);
  uVar2 = (uint)uVar1;
  iVar4 = -1;
  uVar3 = (byte)param_1 - 2;
  switch((unsigned int)(uintptr_t)((byte)param_1 - 2)) {
  case 0: ;
    pcVar6 = "vfx/live/craft/eff/cft_base000.avfx";
    goto LAB_00aa2684;
  case 1: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_base001.avfx");
    iVar4 = 3;
    break;
  case 2: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_base002.avfx");
    iVar4 = 3;
    break;
  case 3: ;
    pcVar6 = "vfx/live/craft/eff/cft_base003.avfx";
LAB_00aa2684: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,pcVar6);
    iVar4 = 3;
    break;
  case 4: ;
    pcVar6 = "vfx/live/craft/eff/cft_ele_f3.avfx";
    goto LAB_00aa26eb;
  case 5: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_ele_i3.avfx");
    iVar4 = 4;
    break;
  case 6: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_ele_w3.avfx");
    iVar4 = 4;
    break;
  case 7: ;
    pcVar6 = "vfx/live/craft/eff/cft_ele_e3.avfx";
LAB_00aa26eb: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,pcVar6);
    iVar4 = 4;
    break;
  case 8: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_ele_t3.avfx");
    iVar4 = 4;
    break;
  case 9: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_ele_a3.avfx");
    iVar4 = 4;
    break;
  case 10: ;
    pcVar6 = "vfx/live/craft/eff/cft_endng0.avfx";
    goto LAB_00aa27bb;
  case 0xb: ;
    pcVar6 = "vfx/live/craft/eff/cft_endnq0.avfx";
    goto LAB_00aa27bb;
  case 0xc: ;
    pcVar6 = "vfx/live/craft/eff/cft_endhq0.avfx";
LAB_00aa27bb: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,pcVar6);
    break;
  default: ;
    goto switchD_00aa2678_default;
  }
  if (-1 < (short)uVar1) {
    F_00990c50(((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)((int)this + 0x88),0xffffffff,uVar2);
  }
  if (iVar4 == -1) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x98))(this);
    if ((char)uVar3 != '\0') {
      uVar3 = F_009cfc30(((char *)(gen_frame + 0x168)),((undefined1 *)(gen_frame + 0x0)),2,0);
    }
    goto switchD_00aa2678_default;
  }
  if (uVar1 == 1) {
    bVar5 = *(char *)((int)this + 0x1725) == '\x03';
LAB_00aa281d: ;
    uVar2 = (uint)CONCAT11((char)(uVar1 >> 8),bVar5);
    if (bVar5 != false) {
      uVar3 = F_009cfc30(((char *)(gen_frame + 0x168)),((undefined1 *)(gen_frame + 0x0)),2,0);
      *(uint *)((int)this + iVar4 * 4 + 0x1644) = uVar3;
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = F_00983120(uVar3,(int)this + 0x180);
      }
    }
  }
  else {
    if (uVar1 == 2) {
      bVar5 = *(char *)((int)this + 0x1ec5) == '\x03';
      goto LAB_00aa281d;
    }
    if (uVar1 == 3) {
      bVar5 = *(char *)((int)this + 0x2665) == '\x03';
      goto LAB_00aa281d;
    }
  }
  if (iVar4 == 3) {
    uVar3 = CONCAT31((int3)(uVar2 >> 8),(byte)param_1);
    *(byte *)((int)this + 0x2dd6) = (byte)param_1;
  }
  else {
    uVar3 = uVar2;
    if (iVar4 == 4) {
      *(byte *)((int)this + 0x2dd7) = (byte)param_1;
    }
  }
switchD_00aa2678_default: ;
  F_00982d70();
  F_00c47745((*(uint *)(gen_frame + 0x26c)) ^ (uint)(uint)(gen_frame + 0x270));
  return uVar3;
}

/* ref: FUN_00aa2900 */
uint F_00aa2900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa2900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x1650) != (undefined *)0x0) {
    if ((char)param_1 == '\0') {
      F_009bc5d0(*(undefined * PTR32 *)((int)this + 0x1650),0);
    }
    F_009bc530(*(undefined * PTR32 *)((int)this + 0x1650),1);
    in_EAX = F_00983120(*(undefined4 *)((int)this + 0x1650),0);
  }
  *(undefined4 *)((int)this + 0x1650) = 0;
  *(undefined1 *)((int)this + 0x2dd6) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x1654) != (undefined *)0x0) {
    if ((char)param_1 == '\0') {
      F_009bc5d0(*(undefined * PTR32 *)((int)this + 0x1654),0);
    }
    F_009bc530(*(undefined * PTR32 *)((int)this + 0x1654),1);
    in_EAX = F_00983120(*(undefined4 *)((int)this + 0x1654),0);
  }
  *(undefined4 *)((int)this + 0x1654) = 0;
  *(undefined1 *)((int)this + 0x2dd7) = 0;
  return in_EAX;
}

/* ref: FUN_00aa2990 */
uint F_00aa2990(unsigned int gen_a0)
{
  GEN_ENTER(0xaa2990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x280];
  ushort uVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  char * pcVar4;
  
  (*(uint *)(gen_frame + 0x26c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x270);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x98))(this);
  if ((char)uVar2 == '\0') goto LAB_00aa2bed;
  uVar3 = 0xa0001;
  this_00 = (undefined *)F_006b8c00();
  uVar2 = F_006e3240(this_00,uVar3);
  if ((uVar2 != 0) && ((*(byte *)(uVar2 + 0x184) & 0x10) != 0)) goto LAB_00aa2bed;
  F_00990c20(((undefined1 *)(gen_frame + 0x0)));
  F_00990c50(((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)((int)this + 0x88),0xffffffff,3);
  uVar1 = F_00a9fe00(this);
  if (-1 < (short)uVar1) {
    F_00990c50(((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)((int)this + 0x88),0xffffffff,(uint)uVar1);
  }
  uVar2 = *(byte *)((int)this + 0x2dd5) - 0xb;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    pcVar4 = "vfx/live/craft/eff/cft_exsuc0.avfx";
    goto LAB_00aa2a53;
  case 1: ;
  case 8: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_hit_f0.avfx");
    break;
  case 2: ;
  case 9: ;
    pcVar4 = "vfx/live/craft/eff/cft_hit_i0.avfx";
    goto LAB_00aa2a53;
  case 3: ;
  case 10: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_hit_w0.avfx");
    break;
  case 4: ;
  case 0xb: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_hit_e0.avfx");
    break;
  case 5: ;
  case 0xc: ;
    pcVar4 = "vfx/live/craft/eff/cft_hit_t0.avfx";
LAB_00aa2a53: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,pcVar4);
    break;
  case 6: ;
  case 0xd: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_hit_a0.avfx");
    break;
  case 7: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_nmsuc0.avfx");
    break;
  case 0xe: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,"vfx/live/craft/eff/cft_act_ng0.avfx");
    break;
  case 0xf: ;
    pcVar4 = "vfx/live/craft/eff/cft_endnq0.avfx";
    goto LAB_00aa2b68;
  case 0x10: ;
    pcVar4 = "vfx/live/craft/eff/cft_endhq0.avfx";
    goto LAB_00aa2b68;
  case 0x11: ;
    pcVar4 = "vfx/live/craft/eff/cft_endng0.avfx";
LAB_00aa2b68: ;
    F_00c472af(((char *)(gen_frame + 0x168)),0x100,pcVar4);
    if (*(undefined * PTR32 *)((int)this + 0x1650) != (undefined *)0x0) {
      F_009bc530(*(undefined * PTR32 *)((int)this + 0x1650),1);
      F_00983120(*(undefined4 *)((int)this + 0x1650),0);
    }
    *(undefined4 *)((int)this + 0x1650) = 0;
    *(undefined1 *)((int)this + 0x2dd6) = 0;
    if (*(undefined * PTR32 *)((int)this + 0x1654) != (undefined *)0x0) {
      F_009bc530(*(undefined * PTR32 *)((int)this + 0x1654),1);
      F_00983120(*(undefined4 *)((int)this + 0x1654),0);
    }
    *(undefined4 *)((int)this + 0x1654) = 0;
    *(undefined1 *)((int)this + 0x2dd7) = 0;
    break;
  default: ;
    goto switchD_00aa2a47_default;
  }
  uVar2 = F_009cfc30(((char *)(gen_frame + 0x168)),((undefined1 *)(gen_frame + 0x0)),2,0);
switchD_00aa2a47_default: ;
  F_00982d70();
LAB_00aa2bed: ;
  F_00c47745((*(uint *)(gen_frame + 0x26c)) ^ (uint)(uint)(gen_frame + 0x270));
  return uVar2;
}

/* ref: FUN_00aa2c50 */
uint F_00aa2c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa2c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_EAX = 0;
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  
  uVar1 = 0;
  do {
    if (uVar1 == 1) {
      pvVar2 = *(undefined * PTR32 *)((int)this + 0x2e00);
      if (*(undefined * PTR32 *)((int)this + 0x2e00) != (undefined *)0x0) {
LAB_00aa2c71: ;
        uVar3 = 3;
        goto LAB_00aa2c76;
      }
    }
    else {
      pvVar2 = this;
      if (uVar1 != 0) goto LAB_00aa2c71;
      uVar3 = F_00ae6e80((undefined *)((int)this + 0x1b0));
LAB_00aa2c76: ;
      F_0053c1a0((undefined *)((int)pvVar2 + 0x680),param_1,param_3);
      in_EAX = F_005492d0((undefined *)((int)pvVar2 + 0x680),uVar3,param_2,1);
    }
    uVar1 = uVar1 + 1;
    if (1 < uVar1) {
      return in_EAX;
    }
  } while( true );
}

/* ref: FUN_00aa2cc0 */
uint F_00aa2cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa2cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if (uVar3 == 1) {
      uVar2 = 0;
      pvVar1 = *(undefined * PTR32 *)((int)this + 0x2e00);
      if (*(undefined * PTR32 *)((int)this + 0x2e00) != (undefined *)0x0) {
LAB_00aa2ce1: ;
        F_0053c1a0((undefined *)((int)pvVar1 + 0x680),uVar3,0);
        uVar2 = F_005492d0((undefined *)((int)pvVar1 + 0x680),3,0,1);
      }
    }
    else {
      pvVar1 = this;
      if (uVar3 != 0) goto LAB_00aa2ce1;
      uVar2 = F_00ae6e80((undefined *)((int)this + 0x1b0));
      uVar2 = F_0053f940((undefined *)((int)this + 0x940),uVar2,param_1);
    }
    uVar3 = uVar3 + 1;
    if (1 < uVar3) {
      return uVar2;
    }
  } while( true );
}

/* ref: FUN_00aa2d30 */
uint F_00aa2d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa2d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((((char)param_1 == '\0') && (*(char *)((int)this + 0x2e08) != '\0')) &&
     (*(undefined * PTR32 *)((int)this + 0x2e00) != (undefined *)0x0)) {
    this = *(undefined * PTR32 *)((int)this + 0x2e00);
  }
  uVar1 = F_0053c280((undefined *)((int)this + 0x680),0);
  return uVar1;
}

/* ref: FUN_00aa2d60 */
byte F_00aa2d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaa2d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * pvVar2;
  
  if ((((char)param_2 != '\0') || (*(char *)((int)this + 0x2e08) == '\0')) ||
     (pvVar2 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
    pvVar2 = this;
  }
  bVar1 = F_005446c0((undefined *)((int)pvVar2 + 0x940),param_1);
  return bVar1;
}

/* ref: FUN_00aa2da0 */
uint F_00aa2da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaa2da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  float * pfVar2;
  uint uVar3;
  float fVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
  pfVar2 = (float *)F_00a5feb0(this);
  uVar5 = 1;
  uVar3 = F_00a5feb0(this);
  fVar4 = *(float *)(uVar3 + 8);
  uVar3 = F_00a5feb0(this);
  uVar3 = F_004ea220(uVar1,param_1,*pfVar2,*(float *)(uVar3 + 4),fVar4,uVar5);
  return uVar3;
}

/* ref: FUN_00aa3060 */
unsigned int F_00aa3060(unsigned int gen_a0)
{
  GEN_ENTER(0xaa3060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x2e04);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x84))(piVar1);
    bVar2 = F_00bc6a70(*(undefined4 *)((int)this + 0x2e04));
    if (bVar2 != 0) {
      piVar1 = *(int * PTR32 *)((int)this + 0x2e04);
      *(undefined2 *)((int)this + 0x2e0c) = 0;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e04) + 0xb4))))(*(int * PTR32 *)((int)this + 0x2e04),0);
        *(undefined4 *)((int)this + 0x2e04) = 0;
        F_00a35790(&REFG(undefined, 0x14a31e0),this);
      }
    }
  }
  return 0;
}

/* ref: FUN_00aa30d0 */
uint F_00aa30d0(unsigned int gen_a0)
{
  GEN_ENTER(0xaa30d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  undefined * pvVar3;
  
  cVar1 = *(char *)((int)this + 0x188);
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),cVar1);
  if ((cVar1 == '\x05') || (cVar1 == '\a')) {
    if ((*(int *)((int)this + 0x1650) == 0) &&
       (uVar2 = (uint)*(byte *)((int)this + 0x2dd6), *(byte *)((int)this + 0x2dd6) != 0)) {
      uVar2 = F_00aa2620(this,uVar2);
    }
    if ((*(int *)((int)this + 0x1654) == 0) &&
       (uVar2 = (uint)*(byte *)((int)this + 0x2dd7), *(byte *)((int)this + 0x2dd7) != 0)) {
      uVar2 = F_00aa2620(this,uVar2);
    }
    if (*(char *)((int)this + 0x188) != '\a') {
      return uVar2;
    }
    if ((*(char *)((int)this + 0x2e08) == '\0') ||
       (pvVar3 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
      pvVar3 = this;
    }
    uVar2 = F_00542ff0((undefined *)((int)pvVar3 + 0x680),0xfd);
    if ((char)uVar2 == '\0') {
      if ((*(char *)((int)this + 0x2e08) == '\0') ||
         (pvVar3 = *(undefined * PTR32 *)((int)this + 0x2e00), *(undefined * PTR32 *)((int)this + 0x2e00) == (undefined *)0x0)) {
        pvVar3 = this;
      }
      uVar2 = F_00542ff0((undefined *)((int)pvVar3 + 0x680),0xfe);
      if ((char)uVar2 == '\0') {
        return uVar2;
      }
    }
    if (*(undefined * PTR32 *)((int)this + 0x1650) != (undefined *)0x0) {
      F_009bc5d0(*(undefined * PTR32 *)((int)this + 0x1650),0);
      F_009bc530(*(undefined * PTR32 *)((int)this + 0x1650),1);
      uVar2 = F_00983120(*(undefined4 *)((int)this + 0x1650),0);
    }
    *(undefined4 *)((int)this + 0x1650) = 0;
    *(undefined1 *)((int)this + 0x2dd6) = 0;
    if (*(undefined * PTR32 *)((int)this + 0x1654) == (undefined *)0x0) goto LAB_00aa3225;
    F_009bc5d0(*(undefined * PTR32 *)((int)this + 0x1654),0);
    pvVar3 = *(undefined * PTR32 *)((int)this + 0x1654);
  }
  else {
    if ((*(int *)((int)this + 0x1650) == 0) && (*(int *)((int)this + 0x1654) == 0)) {
      return uVar2;
    }
    if (*(undefined * PTR32 *)((int)this + 0x1650) != (undefined *)0x0) {
      F_009bc530(*(undefined * PTR32 *)((int)this + 0x1650),1);
      uVar2 = F_00983120(*(undefined4 *)((int)this + 0x1650),0);
    }
    *(undefined4 *)((int)this + 0x1650) = 0;
    *(undefined1 *)((int)this + 0x2dd6) = 0;
    pvVar3 = *(undefined * PTR32 *)((int)this + 0x1654);
    if (pvVar3 == (undefined *)0x0) goto LAB_00aa3225;
  }
  F_009bc530(pvVar3,1);
  uVar2 = F_00983120(*(undefined4 *)((int)this + 0x1654),0);
LAB_00aa3225: ;
  *(undefined4 *)((int)this + 0x1654) = 0;
  *(undefined1 *)((int)this + 0x2dd7) = 0;
  return uVar2;
}

/* ref: FUN_00aa3240 */
unsigned int F_00aa3240(unsigned int gen_a0)
{
  GEN_ENTER(0xaa3240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int * piVar2;
  int iVar3;
  undefined4 uVar4;
  float local_8;
  
  uVar4 = 0;
  fVar1 = *(float *)((int)this + 0x2ec8);
  if (GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)fVar1 +
                   (float10)*(float *)((int)this + 0x2ec0))));
    *(float *)((int)this + 0x2ec0) = fVar1;
    if (((!GEN_ISNAN((float10)fVar1) && !GEN_ISNAN((float10)1)) && !((float10)fVar1 < (float10)1)) ||
       (fVar1 <= 0.0)) {
      *(undefined4 *)((int)this + 0x2ec8) = 0;
      if (0.0 < *(float *)((int)this + 0x2ec0)) {
        uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      }
      *(undefined4 *)((int)this + 0x2ec0) = uVar4;
    }
  }
  local_8 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x2ec4) *
                   (float10)*(float *)((int)this + 0x2ec0))));
  if ((*(byte *)((int)this + 0x2dd4) & 8) != 0) {
    local_8 = REFG(float, 0x10abe50);
  }
  if (*(int *)((int)this + 0x7c) == 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0xec);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x68))
                (piVar2,(undefined4)gen_fl2bits((float)((float10)1 - (float10)local_8)));
    }
    piVar2 = *(int * PTR32 *)((int)this + 0xf0);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xd4))
                (piVar2,(undefined4)gen_fl2bits((float)((float10)1 - (float10)local_8)));
    }
  }
  piVar2 = (int *)((int)this + 0x16c0);
  iVar3 = 3;
  do {
    ((code *)*(gen_code32 *)(*piVar2 + 0x68))
              (piVar2,(undefined4)gen_fl2bits((float)((float10)1 - (float10)local_8)));
    piVar2 = piVar2 + 0x1e8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}

/* ref: FUN_00aa3360 */
byte F_00aa3360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaa3360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (REFG(void * PTR32, 0x1379694) == this) {
    F_00ac4db0(&REFG(undefined, 0x14bcf40));
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
  if (uVar1 != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this);
    F_00ac3d70(uVar1);
  }
  *(byte *)((int)this + 0x2dd2) = *(byte *)((int)this + 0x2dd2) & 0xbf;
  F_00aa0a70(this);
  if ((char)param_3 != '\0') {
    F_00ab4370(0xa9,this,this,0,0);
  }
  return 0;
}

