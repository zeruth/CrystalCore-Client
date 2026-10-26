#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00758470 */
unsigned int F_00758470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x758470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x10) {
    F_00750930(this);
  }
  return 0;
}

/* ref: FUN_007584a0 */
uint F_007584a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7584a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00752390((undefined *)(param_2 + 4));
  return uVar1;
}

/* ref: FUN_007584b0 */
uint F_007584b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7584b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_0074a1e0((*(int * PTR32 *)&gen_args[4]) + 4,&(*(undefined4 *)&gen_args[2]),*((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[4])[5])),((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[4])[5])));
    F_00429760(piVar4[5],0x28,800);
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
LAB_007586cd: ;
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
        goto LAB_007586cd;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *(undefined1 *)(iVar2 + 0x20) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x20);
  } while( true );
}

/* ref: FUN_00758700 */
uint F_00758700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x758700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00752390(param_4 + 4);
    F_00429760(param_4,0x24,800);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    iVar4 = *(int *)((int)this + 4);
  }
  else {
    if ((char)param_2 != '\0') {
      *param_3 = param_4;
      if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
        **(int * PTR32 *)((int)this + 4) = (int)param_4;
      }
      goto LAB_00758776;
    }
    param_3[2] = param_4;
    iVar4 = *(int *)((int)this + 4);
    if (param_3 != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_00758776;
  }
  *(int * PTR32 *)(iVar4 + 8) = param_4;
LAB_00758776: ;
  cVar1 = *(char *)(param_4[1] + 0x20);
  piVar3 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar4 + 0x20) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar3[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar4 = piVar6[2];
      if (*(char *)(iVar4 + 0x20) == '\0') {
        *(undefined1 *)(piVar5 + 8) = 1;
        *(undefined1 *)(iVar4 + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x20))) = 0;
        piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
      }
      else {
        if (piVar3 == (int *)piVar5[2]) {
          piVar3 = (int *)piVar5[2];
          piVar5[2] = *piVar3;
          if (*(char *)(*piVar3 + 0x21) == '\0') {
            *(int * PTR32 *)(*piVar3 + 4) = piVar5;
          }
          piVar3[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar3;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar3;
            }
            else {
              piVar6[2] = (int)piVar3;
            }
          }
          *piVar3 = (int)piVar5;
          piVar5[1] = (int)piVar3;
          piVar3 = piVar5;
        }
        *(undefined1 *)(piVar3[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x21) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00758901: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*(char *)(iVar4 + 0x20) != '\0') {
        if (piVar3 == (int *)*piVar5) {
          iVar4 = *piVar5;
          *piVar5 = *(int *)(iVar4 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar4 + 8) + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar4 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar4 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar4;
          }
          else {
            piVar3 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar3[2]) {
              piVar3[2] = iVar4;
            }
            else {
              *piVar3 = iVar4;
            }
          }
          *(int * PTR32 *)(iVar4 + 8) = piVar5;
          piVar5[1] = iVar4;
          piVar3 = piVar5;
        }
        *(undefined1 *)(piVar3[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x21) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar2) {
            *piVar2 = (int)piVar6;
          }
          else {
            piVar2[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00758901;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *(undefined1 *)(iVar4 + 0x20) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x20))) = 0;
      piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
    }
    cVar1 = *(char *)(piVar3[1] + 0x20);
  } while( true );
}

/* ref: FUN_00758930 */
uint F_00758930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x758930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = *param_1;
  F_00757150((undefined *)((int)this + 8),param_2);
  return (uint)this;
}

/* ref: FUN_00758950 */
uint F_00758950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x758950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)((int)this + 4);
  *(undefined1 *)this = *param_1;
  *this_00 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (this_00 != param_2) {
    F_00752390(this_00);
    *this_00 = *param_2;
    *(undefined4 *)((int)this + 8) = param_2[1];
    *(undefined4 *)((int)this + 0xc) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_007589a0 */
uint F_007589a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7589a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  piVar6 = (*(int * PTR32 *)&gen_args[4]);
  if (0xfffffffd < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
    F_007496b0((*(int * PTR32 *)&gen_args[4]) + 0x1d,&(*(undefined4 *)&gen_args[2]),*((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[4])[0x1e])),((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[4])[0x1e])));
    F_00429760(piVar6[0x1e],0x18,800);
    F_00429760(piVar6,0x90,800);
                    
    F_00c4579a("map/set<T> too long");
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 1;
  (*(int * PTR32 *)&gen_args[4])[1] = (int)(*(undefined4 * PTR32 *)&gen_args[3]);
  if ((*(undefined4 * PTR32 *)&gen_args[3]) == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1] = (*(int * PTR32 *)&gen_args[4]);
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(int * PTR32 *)&gen_args[4]);
    iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  }
  else {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      *(*(undefined4 * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[4]);
      if ((*(undefined4 * PTR32 *)&gen_args[3]) == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
        **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (int)(*(int * PTR32 *)&gen_args[4]);
      }
      goto LAB_00758a35;
    }
    (*(undefined4 * PTR32 *)&gen_args[3])[2] = (*(int * PTR32 *)&gen_args[4]);
    iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    if ((*(undefined4 * PTR32 *)&gen_args[3]) != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_00758a35;
  }
  *(int * PTR32 *)(iVar4 + 8) = (*(int * PTR32 *)&gen_args[4]);
LAB_00758a35: ;
  cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[4])[1] + 0x88)));
  piVar3 = (*(int * PTR32 *)&gen_args[4]);
  do {
    if (cVar1 != '\0') {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) + 0x88))) = 1;
      *(*(undefined4 * PTR32 *)&gen_args[1]) = piVar3;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    piVar5 = (int *)piVar6[1];
    piVar2 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar2) {
      iVar4 = piVar2[2];
      if (*(char *)(iVar4 + 0x88) != '\0') {
        if (piVar6 == (int *)piVar5[2]) {
          piVar6 = (int *)piVar5[2];
          piVar5[2] = *piVar6;
          if (*(char *)(*piVar6 + 0x89) == '\0') {
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
          piVar5[1] = (int)piVar6;
          piVar6 = piVar5;
        }
        *(undefined1 *)(piVar6[1] + 0x88) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar6[1] + 4) + 0x88))) = 0;
        piVar3 = *(int * PTR32 *)(piVar6[1] + 4);
        piVar5 = (int *)*piVar3;
        *piVar3 = piVar5[2];
        if (*(char *)(piVar5[2] + 0x89) == '\0') {
          *(int * PTR32 *)(piVar5[2] + 4) = piVar3;
        }
        piVar5[1] = piVar3[1];
        if (piVar3 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar5;
          piVar5[2] = (int)piVar3;
        }
        else {
          piVar2 = (int *)piVar3[1];
          if (piVar3 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar3;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar3;
          }
        }
        goto LAB_00758ba8;
      }
LAB_00758b24: ;
      *(undefined1 *)(piVar5 + 0x22) = 1;
      *(undefined1 *)(iVar4 + 0x88) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar6[1] + 4) + 0x88))) = 0;
      piVar6 = *(int * PTR32 *)(piVar6[1] + 4);
    }
    else {
      iVar4 = *piVar2;
      if (*(char *)(iVar4 + 0x88) == '\0') goto LAB_00758b24;
      if (piVar6 == (int *)*piVar5) {
        F_007313f0((*(undefined * PTR32 *)&gen_args[0]),piVar5);
        piVar6 = piVar5;
      }
      *(undefined1 *)(piVar6[1] + 0x88) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar6[1] + 4) + 0x88))) = 0;
      piVar3 = *(int * PTR32 *)(piVar6[1] + 4);
      piVar5 = (int *)piVar3[2];
      piVar3[2] = *piVar5;
      if (*(char *)(*piVar5 + 0x89) == '\0') {
        *(int * PTR32 *)(*piVar5 + 4) = piVar3;
      }
      piVar5[1] = piVar3[1];
      if (piVar3 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar5;
      }
      else {
        piVar2 = (int *)piVar3[1];
        if (piVar3 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar3;
LAB_00758ba8: ;
      piVar3[1] = (int)piVar5;
      piVar3 = (*(int * PTR32 *)&gen_args[4]);
    }
    cVar1 = *(char *)(piVar6[1] + 0x88);
  } while( true );
}

/* ref: FUN_00758be0 */
uint F_00758be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x758be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
    uVar1 = F_00754bb0(param_2 + 4,param_3 + 4);
  }
  return uVar1;
}

/* ref: FUN_00758c00 */
uint F_00758c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x758c00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00750a20(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x10);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00758c40 */
unsigned int F_00758c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x758c40u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar1 = F_004296a0(0x28,0,800);
    *(uint *)(param_1 + 8) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = *(int *)(param_1 + 8);
    *((int *)GEN_TOP((*(int *)(param_1 + 8) + 8))) = *(int *)(param_1 + 8);
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 8) + 0x24))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 8) + 0x25))) = 1;
    F_00750b30(param_1 + 4,param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00758ca0 */
uint F_00758ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x758ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * this_00;
  
  puVar1 = (undefined4 *)(param_1 + 4);
  *(undefined1 *)this = *param_1;
  this_00 = (undefined4 *)((int)this + 4);
  *this_00 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (this_00 != puVar1) {
    F_00752390(this_00);
    *this_00 = *puVar1;
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00758cf0 */
uint F_00758cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x758cf0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x10) {
    if (this != (undefined *)0x0) {
      F_00750a20(this,iVar1);
    }
    this = (undefined *)((int)this + 0x10);
  }
  return (uint)this;
}

/* ref: FUN_00758d30 */
uint F_00758d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x758d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    uVar1 = F_00757150(param_1 + 2,param_2 + 2);
  }
  return uVar1;
}

/* ref: Client::Game::Event::GuildleveAssignmentRewardMenuCallback::vf1 */
uint F_00758d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x758d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  bVar1 = 1;
  if (*(undefined * PTR32 *)(this + 4) != (undefined *)0x0) {
    if ((param_3 < 2) || ((param_2[8] & 0xf) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
    }
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    bVar1 = F_006fad60(*(undefined * PTR32 *)(this + 4),uVar2,uVar3);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *(byte *)(param_1 + 1) = bVar1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::GatheringBarCallback::vf1 */
uint F_00758dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x758dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  
  if (*(undefined * PTR32 *)(this + 4) != (undefined *)0x0) {
    bVar1 = F_006fae00(*(undefined * PTR32 *)(this + 4),param_2,param_3);
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::QuestOfferCallback::vf1 */
uint F_00758e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x758e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * this_00;
  undefined4 uVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 4);
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  if ((this_00 != (undefined *)0x0) && (0 < param_3)) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    F_006fb930(this_00,uVar1);
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::Game::Event::QuestRewardCallback::vf1 */
uint F_00758e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x758e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  bVar1 = 1;
  if (*(undefined * PTR32 *)(this + 4) != (undefined *)0x0) {
    if ((param_3 < 2) || ((param_2[8] & 0xf) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
    }
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    bVar1 = F_006fb9e0(*(undefined * PTR32 *)(this + 4),uVar2,uVar3);
    if (bVar1 == 0) goto LAB_00758eaa;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
LAB_00758eaa: ;
  *(byte *)(param_1 + 1) = bVar1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::ShopItemPriceChangedCallback::vf1 */
uint F_00758ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x758ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  undefined4 uVar2;
  
  if (((REFG(int, 0x1488760) != 0) && (*(short *)(REFG(int, 0x1488760) + 0x54) != -1)) &&
     (*(undefined * PTR32 *)(this + 4) != (undefined *)0x0)) {
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    bVar1 = F_006fbd30(*(undefined * PTR32 *)(this + 4),uVar2);
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    *(byte *)(param_1 + 1) = bVar1;
    *param_1 = 2;
    return (uint)param_1;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::ShopConfirmWidgetCallback::vf1 */
uint F_00758f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x758f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  if (((REFG(int, 0x1488760) != 0) && (*(short *)(REFG(int, 0x1488760) + 0x54) != -1)) &&
     (*(undefined * PTR32 *)(this + 4) != (undefined *)0x0)) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    F_006fbdf0(*(undefined * PTR32 *)(this + 4),uVar1);
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return (uint)param_1;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::CraftLeveRewardCallback::vf1 */
uint F_00758fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x758fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  uVar4 = 1;
  if (*(undefined * PTR32 *)(this + 4) == (undefined *)0x0) {
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  }
  else {
    if ((param_3 < 2) || ((param_2[8] & 0xf) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
    }
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    bVar1 = F_006fbeb0(*(undefined * PTR32 *)(this + 4),uVar2,uVar3);
    uVar4 = 0;
    if (bVar1 != 0) {
      *(undefined4 *)(this + 4) = 0;
      *(byte *)(param_1 + 1) = bVar1;
      *param_1 = 2;
      return (uint)param_1;
    }
  }
  *(undefined1 *)(param_1 + 1) = uVar4;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::ChocoboTaxiStandEventHandler::vf110 */
uint F_00759020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x759020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0(param_1,this + 0x1d8);
  return uVar1;
}

/* ref: Client::Game::Event::Director::vf145 */
byte F_00759040(void)
{
  GEN_ENTER(0x759040u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::Director::vf146 */
unsigned int F_00759050(void)
{
  GEN_ENTER(0x759050u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::Director::vf147 */
byte F_00759060(void)
{
  GEN_ENTER(0x759060u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::Event::Director::vf148 */
byte F_00759070(void)
{
  GEN_ENTER(0x759070u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::Director::vf149 */
uint F_00759080(void)
{
  GEN_ENTER(0x759080u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::Director::vf150 */
unsigned int F_00759090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x759090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  return 0;
}

/* ref: Client::Game::Event::Director::vf151 */
unsigned int F_007590a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7590a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::Director::vf152 */
unsigned int F_007590b0(void)
{
  GEN_ENTER(0x7590b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::Director::vf110 */
uint F_007590c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7590c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0(param_1,this + 0x1e8);
  return uVar1;
}

/* ref: Client::Game::Event::Director::vf156 */
unsigned int F_007590e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7590e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf5 */
byte F_00759100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x759100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf148 */
byte F_00759110(void)
{
  GEN_ENTER(0x759110u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf149 */
uint F_00759120(unsigned int gen_a0)
{
  GEN_ENTER(0x759120u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x31c;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf122 */
unsigned int F_00759130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x759130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00ba0c90(this + 0x31c,param_1,param_2);
  return 0;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf123 */
uint F_00759140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x759140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ba0ce0(this + 0x31c,param_1,param_2);
  return uVar1;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf7 */
byte F_00759150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x759150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: FUN_00759160 */
uint F_00759160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x759160u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x89))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)&gen_args[2]);
  F_00724e40(&(*(int * PTR32 *)&gen_args[2]));
  piVar5 = (int *)*piVar6;
  if (*(char *)((int)piVar5 + 0x89) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(piVar6[2] + 0x89) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar6)) {
      piVar5[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar6;
      piVar5 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar6[2]) {
        piVar5 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x89) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[0x22];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x22))) = (char)piVar6[0x22];
      *(char *)(piVar6 + 0x22) = (char)iVar1;
      goto LAB_0075929f;
    }
  }
  else {
    piVar7 = (int *)piVar6[2];
  }
  piVar5 = (int *)piVar6[1];
  if (*(char *)((int)piVar7 + 0x89) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x89) == '\0') {
      piVar3 = (int *)F_00722c90(piVar7);
    }
    **(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) = piVar3;
  }
  iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4);
  (*(int *)(gen_frame + 0x0)) = iVar1;
  if (*(int * PTR32 *)(iVar1 + 8) == piVar6) {
    if (*(char *)((int)piVar7 + 0x89) == '\0') {
      uVar4 = F_00722c60(piVar7);
      *(uint *)((*(int *)(gen_frame + 0x0)) + 8) = uVar4;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar5;
    }
  }
LAB_0075929f: ;
  if ((char)(*(int * PTR32 *)(gen_frame + 0x4))[0x22] == '\x01') {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4)))) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[0x22] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[0x22] == '\0') {
            *(undefined1 *)(piVar5 + 0x22) = 1;
            *(undefined1 *)(piVar6 + 0x22) = 0;
            F_0073c1b0(this_00,piVar6);
            piVar5 = (int *)piVar6[2];
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x89) == '\0') {
            if ((*(char *)(*piVar5 + 0x88) != '\x01') || (*(char *)(piVar5[2] + 0x88) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x88) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x88) = 1;
                *(undefined1 *)(piVar5 + 0x22) = 0;
                F_007313f0(this_00,piVar5);
                piVar5 = (int *)piVar6[2];
                this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
              }
              *(char *)(piVar5 + 0x22) = (char)piVar6[0x22];
              *(undefined1 *)(piVar6 + 0x22) = 1;
              *(undefined1 *)(piVar5[2] + 0x88) = 1;
              F_0073c1b0(this_00,piVar6);
              break;
            }
LAB_007593ac: ;
            *(undefined1 *)(piVar5 + 0x22) = 0;
          }
        }
        else {
          if ((char)piVar5[0x22] == '\0') {
            *(undefined1 *)(piVar5 + 0x22) = 1;
            *(undefined1 *)(piVar6 + 0x22) = 0;
            F_007313f0(this_00,piVar6);
            piVar5 = (int *)*piVar6;
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x89) == '\0') {
            if ((*(char *)(piVar5[2] + 0x88) == '\x01') && (*(char *)(*piVar5 + 0x88) == '\x01'))
            goto LAB_007593ac;
            if (*(char *)(*piVar5 + 0x88) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x88) = 1;
              *(undefined1 *)(piVar5 + 0x22) = 0;
              F_0073c1b0(this_00,piVar5);
              piVar5 = (int *)*piVar6;
              this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            *(char *)(piVar5 + 0x22) = (char)piVar6[0x22];
            *(undefined1 *)(piVar6 + 0x22) = 1;
            *(undefined1 *)(*piVar5 + 0x88) = 1;
            F_007313f0(this_00,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *((int * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 4) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x22) = 1;
  }
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
  F_007496b0((*(int * PTR32 *)(gen_frame + 0x4)) + 0x1d,&(*(int *)(gen_frame + 0x0)),*(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[0x1e],(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[0x1e]);
  F_00429760(piVar6[0x1e],0x18,800);
  F_00429760(piVar6,0x90,800);
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) != 0) {
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00759470 */
uint F_00759470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x759470u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_007237a0(&(*(int * PTR32 *)&gen_args[2]));
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
      goto LAB_0075958a;
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
      piVar3 = (int *)F_00722dc0(piVar7);
    }
    **(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) = piVar3;
  }
  iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4);
  (*(int *)(gen_frame + 0x0)) = iVar1;
  if (*(int * PTR32 *)(iVar1 + 8) == piVar6) {
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      uVar4 = F_00722da0(piVar7);
      *(uint *)((*(int *)(gen_frame + 0x0)) + 8) = uVar4;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar5;
    }
  }
LAB_0075958a: ;
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
            F_0073c2d0(this_00,piVar6);
            piVar5 = (int *)piVar6[2];
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x21) == '\0') {
            if ((*(char *)(*piVar5 + 0x20) != '\x01') || (*(char *)(piVar5[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x20) = 1;
                *(undefined1 *)(piVar5 + 8) = 0;
                F_00731500(this_00,piVar5);
                piVar5 = (int *)piVar6[2];
                this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
              }
              *(char *)(piVar5 + 8) = (char)piVar6[8];
              *(undefined1 *)(piVar6 + 8) = 1;
              *(undefined1 *)(piVar5[2] + 0x20) = 1;
              F_0073c2d0(this_00,piVar6);
              break;
            }
LAB_00759648: ;
            *(undefined1 *)(piVar5 + 8) = 0;
          }
        }
        else {
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_00731500(this_00,piVar6);
            piVar5 = (int *)*piVar6;
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x21) == '\0') {
            if ((*(char *)(piVar5[2] + 0x20) == '\x01') && (*(char *)(*piVar5 + 0x20) == '\x01'))
            goto LAB_00759648;
            if (*(char *)(*piVar5 + 0x20) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x20) = 1;
              *(undefined1 *)(piVar5 + 8) = 0;
              F_0073c2d0(this_00,piVar5);
              piVar5 = (int *)*piVar6;
              this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            *(char *)(piVar5 + 8) = (char)piVar6[8];
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(*piVar5 + 0x20) = 1;
            F_00731500(this_00,piVar6);
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
  F_0074a1e0((*(int * PTR32 *)(gen_frame + 0x4)) + 4,&(*(int *)(gen_frame + 0x0)),*(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[5],(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[5]);
  F_00429760(piVar6[5],0x28,800);
  F_00429760(piVar6,0x24,800);
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) != 0) {
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_007596f0 */
unsigned int F_007596f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7596f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x21)));
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  while (cVar1 == '\0') {
    F_007596f0((*(undefined * PTR32 *)&gen_args[0]),(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_0074a1e0(piVar3 + 4,&(*(int * PTR32 *)&gen_args[1]),*(undefined4 *)piVar3[5],(undefined4 *)piVar3[5]);
    F_00429760(piVar3[5],0x28,800);
    F_00429760(piVar3,0x24,800);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return 0;
}

/* ref: FUN_00759760 */
uint F_00759760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x759760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)((int)this + 4);
  *(undefined1 *)this = *param_1;
  *this_00 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (this_00 != param_2) {
    F_00752390(this_00);
    *this_00 = *param_2;
    *(undefined4 *)((int)this + 8) = param_2[1];
    *(undefined4 *)((int)this + 0xc) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_007597b0 */
unsigned int F_007597b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7597b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x10)) {
    F_00750930(this);
  }
  return 0;
}

/* ref: FUN_007597e0 */
uint F_007597e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7597e0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x21))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00732f60(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x21) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x21) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x21) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 8))) = (char)piVar3[8];
      *(char *)(piVar3 + 8) = (char)iVar1;
      goto LAB_007598fa;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x21) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      piVar4 = (int *)F_00726550(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      uVar5 = F_00726c20(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_007598fa: ;
  if ((char)piVar3[8] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[8] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00733f90((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            if ((*(char *)(*piVar6 + 0x20) != '\x01') || (*(char *)(piVar6[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x20) = 1;
                *(undefined1 *)(piVar6 + 8) = 0;
                F_00733ff0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 8) = (char)piVar4[8];
              *(undefined1 *)(piVar4 + 8) = 1;
              *(undefined1 *)(piVar6[2] + 0x20) = 1;
              F_00733f90((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_007599b8: ;
            *(undefined1 *)(piVar6 + 8) = 0;
          }
        }
        else {
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00733ff0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            if ((*(char *)(piVar6[2] + 0x20) == '\x01') && (*(char *)(*piVar6 + 0x20) == '\x01'))
            goto LAB_007599b8;
            if (*(char *)(*piVar6 + 0x20) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x20) = 1;
              *(undefined1 *)(piVar6 + 8) = 0;
              F_00733f90((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 8) = (char)piVar4[8];
            *(undefined1 *)(piVar4 + 8) = 1;
            *(undefined1 *)(*piVar6 + 0x20) = 1;
            F_00733ff0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  F_00752390(piVar3 + 4);
  F_00429760(piVar3,0x24,800);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00759a40 */
unsigned int F_00759a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x759a40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x89)));
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  while (cVar1 == '\0') {
    F_00759a40((*(undefined * PTR32 *)&gen_args[0]),(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_007496b0(piVar3 + 0x1d,&(*(int * PTR32 *)&gen_args[1]),*(undefined4 *)piVar3[0x1e],(undefined4 *)piVar3[0x1e]);
    F_00429760(piVar3[0x1e],0x18,800);
    F_00429760(piVar3,0x90,800);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x89);
  }
  return 0;
}

/* ref: FUN_00759ab0 */
unsigned int F_00759ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x759ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  
  cVar1 = *(char *)((int)param_1 + 0x21);
  piVar4 = param_1;
  while (cVar1 == '\0') {
    F_00759ab0(this,(int *)piVar4[2]);
    iVar5 = piVar4[4];
    piVar2 = (int *)*piVar4;
    if (iVar5 != 0) {
      iVar3 = piVar4[5];
      for (; iVar5 != iVar3; iVar5 = iVar5 + 0x140) {
        F_0042c880((undefined *)(iVar5 + 0x1c));
      }
      F_00429760(piVar4[4],((piVar4[6] - piVar4[4]) / 0x140) * 0x140,800);
    }
    piVar4[4] = 0;
    piVar4[5] = 0;
    piVar4[6] = 0;
    F_00429760(piVar4,0x24,800);
    piVar4 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return 0;
}

/* ref: FUN_00759b70 */
uint F_00759b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x759b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = *param_2;
  F_00757150(param_1 + 2,param_3);
  return (uint)param_1;
}

/* ref: FUN_00759b90 */
uint F_00759b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x759b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * this;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00754bb0(((undefined1 *)(gen_frame + 0xc)),param_3);
  this = (undefined4 *)(param_1 + 4);
  *param_1 = *param_2;
  *this = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (this != puVar1) {
    F_00752390(this);
    *this = *puVar1;
    *(undefined4 *)(param_1 + 8) = puVar1[1];
    *(undefined4 *)(param_1 + 0xc) = puVar1[2];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  F_00752390(((undefined1 *)(gen_frame + 0xc)));
  return (uint)param_1;
}

/* ref: FUN_00759c00 */
uint F_00759c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x759c00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(byte *)((*(int *)&gen_args[2]) + 0xc) < *(byte *)(puVar2 + 3);
      }
      else {
        bVar3 = *(byte *)((*(int *)&gen_args[2]) + 0xc) <= *(byte *)(puVar2 + 3);
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x21) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00758700((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00728aa0(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if (*((byte *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[3]) + 3))) < *(byte *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00758700((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00752390((undefined *)((*(int *)&gen_args[2]) + 0x10));
  F_00429760((*(int *)&gen_args[2]),0x24,800);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00759cf0 */
uint F_00759cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x759cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00758700((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,piVar1,(*(int * PTR32 *)&gen_args[3]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)*piVar1) {
    if (*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3))) < *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3)))) {
      F_00758700((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[2]) == piVar1) {
    if (*(byte *)(piVar1[2] + 0xc) < *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3)))) {
      F_00758700((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,piVar1[2],(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    if (*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3))) < *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3)))) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00728aa0(&(*(int * PTR32 *)&gen_args[3]));
      if (*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3))) < *(byte *)(piVar2 + 3)) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[2] + 0x21))) != '\0') {
          F_00758700((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[3]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00758700((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
    if (*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3))) < *(byte *)(piVar2 + 3)) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00732f60(&(*(int * PTR32 *)&gen_args[3]));
      if (((*(int * PTR32 *)&gen_args[3]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) || (*(byte *)(piVar2 + 3) < *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3)))))
      {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x21))) != '\0') {
          F_00758700((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00758700((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[3]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
  }
  puVar3 = (undefined4 *)F_00759c00((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)),piVar2,0);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00759e50 */
uint F_00759e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x759e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  bool bVar6;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  cVar1 = *(char *)((int)puVar5 + 0x21);
  bVar6 = true;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  uVar3 = (*(undefined4 *)(gen_frame + 0x8));
  while (cVar1 == '\0') {
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      bVar6 = *(byte *)((*(int *)&gen_args[2]) + 0xc) < *(byte *)(puVar5 + 3);
    }
    else {
      bVar6 = *(byte *)((*(int *)&gen_args[2]) + 0xc) <= *(byte *)(puVar5 + 3);
    }
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)uVar3 >> 8)));
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar6);
    if (bVar6 == false) {
      puVar4 = (undefined4 *)puVar5[2];
    }
    else {
      puVar4 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    uVar3 = (*(undefined4 *)(gen_frame + 0x8));
    cVar1 = *(char *)((int)puVar4 + 0x21);
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar6 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar5 = (undefined4 *)F_007584b0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00728a30(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if (*((byte *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[3]) + 3))) < *(byte *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar5 = (undefined4 *)F_007584b0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),uVar3,puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_0074a1e0((undefined *)((*(int *)&gen_args[2]) + 0x10),&(*(undefined4 * PTR32 *)&gen_args[3]),**(undefined4 * PTR32 *)((*(int *)&gen_args[2]) + 0x14),
               *(undefined4 * PTR32 *)((*(int *)&gen_args[2]) + 0x14));
  F_00429760(*(undefined4 *)((*(int *)&gen_args[2]) + 0x14),0x28,800);
  F_00429760((*(int *)&gen_args[2]),0x24,800);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00759f60 */
uint F_00759f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x759f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 3) = *param_1;
    F_00754bb0(puVar1 + 4,param_1 + 4);
  }
  return (uint)puVar1;
}

/* ref: FUN_00759fc0 */
uint F_00759fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x759fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x89) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0x10) < (uint)puVar2[4];
      }
      else {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0x10) <= (uint)puVar2[4];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x89) == '\0');
  }
  puVar2 = (undefined4 *)F_007589a0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_0075a040 */
uint F_0075a040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined1 uVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)(param_3 + 4);
  uVar2 = *param_3;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  if (&(*(undefined4 *)(gen_frame + 0xc)) != puVar1) {
    F_00752390(&(*(undefined4 *)(gen_frame + 0xc)));
    (*(undefined4 *)(gen_frame + 0xc)) = *puVar1;
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_3 + 8);
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_3 + 0xc);
    *puVar1 = 0;
    *(undefined4 *)(param_3 + 8) = 0;
    *(undefined4 *)(param_3 + 0xc) = 0;
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = uVar2;
    F_00754bb0(param_2 + 4,&(*(undefined4 *)(gen_frame + 0xc)));
  }
  uVar3 = F_00752390(&(*(undefined4 *)(gen_frame + 0xc)));
  return uVar3;
}

/* ref: FUN_0075a0b0 */
uint F_0075a0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a0b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = *(*(undefined1 * PTR32 *)&gen_args[2]);
  F_0074a520(((undefined1 *)(gen_frame + 0xc)),(*(undefined1 * PTR32 *)&gen_args[2]) + 4);
  if ((*(undefined1 * PTR32 *)&gen_args[1]) != (undefined1 *)0x0) {
    *(*(undefined1 * PTR32 *)&gen_args[1]) = uVar1;
    *((undefined4 *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 0xc))) = 0;
    uVar2 = F_004296a0(0x28,0,800);
    *((uint *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8))) = uVar2;
    *(uint *)uVar2 = uVar2;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8))) + 4))) = *((int *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8))) + 8))) = *((int *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8))) + 0x24))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8))) + 0x25))) = 1;
    F_00750b30((*(undefined1 * PTR32 *)&gen_args[1]) + 4,((undefined1 *)(gen_frame + 0xc)));
  }
  F_0074a1e0(((undefined1 *)(gen_frame + 0xc)),&(*(undefined1 * PTR32 *)&gen_args[2]),*(*(undefined4 * PTR32 *)(gen_frame + 0x10)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)));
  uVar3 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x10)),0x28,800);
  return (uint)uVar3;
}

/* ref: FUN_0075a150 */
unsigned int F_0075a150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00758c40(param_2,param_3);
  return 0;
}

/* ref: FUN_0075a170 */
uint F_0075a170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  ulonglong uVar1;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(undefined4 *)(gen_frame + 0x10)) = *param_3;
  F_00757150(((undefined1 *)(gen_frame + 0x18)),param_3 + 2);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = (*(undefined4 *)(gen_frame + 0x10));
    F_00757150(param_2 + 2,((undefined1 *)(gen_frame + 0x18)));
  }
  F_007496b0(((undefined1 *)(gen_frame + 0x74)),((undefined1 *)(gen_frame + 0xc)),*(*(undefined4 * PTR32 *)(gen_frame + 0x78)),(*(undefined4 * PTR32 *)(gen_frame + 0x78)));
  uVar1 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x78)),0x18,800);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)uVar1;
}

/* ref: Client::Game::Event::ModuleBase::vf0 */
uint F_0075a1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ba978));
  F_00757fb0(this + 8);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::LuaActorModule::vf0 */
uint F_0075a220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ba994));
  F_00744fa0(this + 0x2c,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)(this + 0x30),*(undefined4 * PTR32 *)(this + 0x30));
  F_00429760(*(undefined4 *)(this + 0x30),0x28,0x322);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ba978));
  F_00757fb0(this + 8);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::LuaEventHandler::vf0 */
uint F_0075a280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006fd580(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::AetheryteEventHandler::vf0 */
uint F_0075a2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006fd840(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::CompanyLeveOfficerEventHandler::vf0 */
uint F_0075a2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bae44));
  F_006fd580(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf0 */
uint F_0075a310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006fdd70(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf0 */
uint F_0075a340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006fe160(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::WarpEventHandler::vf0 */
uint F_0075a370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006fe4f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::StoryEventHandler::vf0 */
uint F_0075a3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006fe690(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::EventHandlerModule::vf0 */
uint F_0075a3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006fe800(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::LeveDirector::vf145 */
byte F_0075a400(void)
{
  GEN_ENTER(0x75a400u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::Event::LeveDirector::vf158 */
unsigned int F_0075a410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf149 */
uint F_0075a420(unsigned int gen_a0)
{
  GEN_ENTER(0x75a420u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x4f0;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf122 */
unsigned int F_0075a430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00ba0c90(this + 0x4f0,param_1,param_2);
  return 0;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf123 */
uint F_0075a440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ba0ce0(this + 0x4f0,param_1,param_2);
  return uVar1;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf7 */
byte F_0075a450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: Client::Game::Event::DirectorModule::vf0 */
uint F_0075a460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006fe980(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::OpeningEventHandler::vf0 */
uint F_0075a490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006feae0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::ExitRangeEventHandler::vf0 */
uint F_0075a4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bbc3c));
  F_006fd580(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::ChocoboTaxiStandEventHandler::vf0 */
uint F_0075a4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bbe84));
  F_0042c880(this + 0x1d8);
  F_006fd580(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::Director::vf0 */
uint F_0075a530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a530u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_006fed10(in_ecx,in_edi);
  if ((param_3 & 1) != 0) {
    F_00406ad0(in_ecx);
  }
  return in_ecx;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf0 */
uint F_0075a560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a560u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_006feea0(in_ecx,in_edi);
  if ((param_3 & 1) != 0) {
    F_00406ad0(in_ecx);
  }
  return in_ecx;
}

/* ref: FUN_0075a590 */
uint F_0075a590(unsigned int gen_a0)
{
  GEN_ENTER(0x75a590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_007596f0(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_0075a5c0 */
uint F_0075a5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75a5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * this_00;
  
  if (param_2 != param_3) {
    pvVar2 = (undefined *)F_00757950(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (this_00 = pvVar2; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x10)) {
      F_00750930(this_00);
    }
    *(undefined * PTR32 *)((int)this + 4) = pvVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0075a630 */
uint F_0075a630(unsigned int gen_a0)
{
  GEN_ENTER(0x75a630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x10)) {
      F_00750930(this_00);
    }
    F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xfffffff0,800);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_0075a680 */
uint F_0075a680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  
  uVar2 = param_1;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4) < param_1) {
    uVar2 = F_004296a0(param_1 * 0x10,0,800);
    F_00758430(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar2);
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    this_00 = *(undefined * PTR32 *)this;
    uVar3 = (int)pvVar1 - (int)this_00;
    if (this_00 != (undefined *)0x0) {
      for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x10)) {
        F_00750930(this_00);
      }
      F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xfffffff0,800);
    }
    *(uint *)((int)this + 4) = (uVar3 & 0xfffffff0) + uVar2;
    *(uint *)((int)this + 8) = param_1 * 0x10 + uVar2;
    *(uint *)this = uVar2;
  }
  return uVar2;
}

/* ref: FUN_0075a740 */
uint F_0075a740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75a740u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_007596f0(this,piVar2[1]);
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
    F_00759470(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_0075a800 */
uint F_0075a800(unsigned int gen_a0)
{
  GEN_ENTER(0x75a800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00759a40(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_0075a830 */
uint F_0075a830(unsigned int gen_a0)
{
  GEN_ENTER(0x75a830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00759ab0(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_0075a860 */
uint F_0075a860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75a860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 3) = *param_3;
    F_00754bb0(puVar1 + 4,param_3 + 4);
  }
  F_00759cf0(this,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_0075a8d0 */
uint F_0075a8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75a8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_007584b0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,piVar1,(*(int * PTR32 *)&gen_args[3]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)*piVar1) {
    if (*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3))) < *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3)))) {
      F_007584b0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[2]) == piVar1) {
    if (*(byte *)(piVar1[2] + 0xc) < *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3)))) {
      F_007584b0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,piVar1[2],(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    if (*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3))) < *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3)))) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00728a30(&(*(int * PTR32 *)&gen_args[3]));
      if (*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3))) < *(byte *)(piVar2 + 3)) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[2] + 0x21))) != '\0') {
          F_007584b0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[3]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_007584b0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
    if (*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3))) < *(byte *)(piVar2 + 3)) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_007237a0(&(*(int * PTR32 *)&gen_args[3]));
      if (((*(int * PTR32 *)&gen_args[3]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) || (*(byte *)(piVar2 + 3) < *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3)))))
      {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x21))) != '\0') {
          F_007584b0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_007584b0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[3]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
  }
  puVar3 = (undefined4 *)F_00759e50((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)),piVar2,0);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_0075aa30 */
uint F_0075aa30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75aa30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined1 uVar2;
  undefined4 * puVar3;
  
  puVar3 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar3 = *(undefined4 *)((int)this + 4);
  puVar3[1] = *(undefined4 *)((int)this + 4);
  puVar1 = (undefined4 *)(param_1 + 4);
  puVar3[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar3 + 8) = 0;
  uVar2 = *param_1;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  if (&(*(undefined4 *)(gen_frame + 0xc)) != puVar1) {
    F_00752390(&(*(undefined4 *)(gen_frame + 0xc)));
    (*(undefined4 *)(gen_frame + 0xc)) = *puVar1;
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_1 + 8);
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_1 + 0xc);
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (puVar3 + 3 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar3 + 3) = uVar2;
    F_00754bb0(puVar3 + 4,&(*(undefined4 *)(gen_frame + 0xc)));
  }
  F_00752390(&(*(undefined4 *)(gen_frame + 0xc)));
  return (uint)puVar3;
}

/* ref: FUN_0075aad0 */
uint F_0075aad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75aad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  F_0075a0b0((int)this + 0xd,puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_0075ab20 */
uint F_0075ab20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75ab20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00758c40(puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_0075ab70 */
uint F_0075ab70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75ab70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined4 * puVar1;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  puVar1 = (undefined4 *)F_004296a0(0x90,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x22) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = *param_1;
  F_00757150(((undefined1 *)(gen_frame + 0x18)),param_1 + 2);
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = (*(undefined4 *)(gen_frame + 0x10));
    F_00757150(puVar1 + 6,((undefined1 *)(gen_frame + 0x18)));
  }
  F_007496b0(((undefined1 *)(gen_frame + 0x74)),((undefined1 *)(gen_frame + 0xc)),*(*(undefined4 * PTR32 *)(gen_frame + 0x78)),(*(undefined4 * PTR32 *)(gen_frame + 0x78)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x78)),0x18,800);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)puVar1;
}

/* ref: FUN_0075ac20 */
uint F_0075ac20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75ac20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar1 = param_1[1];
  iVar2 = *param_1;
  *(undefined4 *)this = 0;
  iVar1 = iVar1 - iVar2 >> 4;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 0x10;
    this_00 = (undefined *)F_004296a0(iVar1,0,800);
    *(undefined * PTR32 *)((int)this + 8) = (undefined *)(iVar1 + (int)this_00);
    *(undefined * PTR32 *)this = this_00;
    *(undefined * PTR32 *)((int)this + 4) = this_00;
    iVar1 = param_1[1];
    for (iVar2 = *param_1; iVar2 != iVar1; iVar2 = iVar2 + 0x10) {
      if (this_00 != (undefined *)0x0) {
        F_00750a20(this_00,iVar2);
      }
      this_00 = (undefined *)((int)this_00 + 0x10);
    }
    *(undefined * PTR32 *)((int)this + 4) = this_00;
  }
  return (uint)this;
}

/* ref: Client::Game::Event::LeveDirector::vf0 */
uint F_0075acb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75acb0u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_006ffbe0(in_ecx,in_edi);
  if ((param_3 & 1) != 0) {
    F_00406ad0(in_ecx);
  }
  return in_ecx;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf0 */
uint F_0075ace0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75ace0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * piVar1;
  undefined4 * puVar2;
  
  *in_ecx = (*(undefined * PTR32 (*)[160])REFP(0x10bc83c));
  if (in_ecx[0xd3] != 0) {
    piVar1 = (int *)in_ecx[0xd2];
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,in_ecx[0xd3]);
    }
    puVar2 = (undefined4 *)in_ecx[0xd3];
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      in_ecx[0xd3] = 0;
    }
  }
  F_006ffbe0(in_ecx,in_edi);
  if ((param_3 & 1) != 0) {
    F_00406ad0(in_ecx);
  }
  return (uint)in_ecx;
}

/* ref: Client::Game::Event::GatheringLeveDirector::vf0 */
uint F_0075ad50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75ad50u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_006ffd40(in_ecx,in_edi);
  if ((param_3 & 1) != 0) {
    F_00406ad0(in_ecx);
  }
  return in_ecx;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf0 */
uint F_0075ad80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75ad80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  *in_ecx = (*(undefined * PTR32 (*)[159])REFP(0x10bcd44));
  F_00ba0f80(in_ecx + 0x13c);
  F_006ffbe0(in_ecx,in_edi);
  if ((param_3 & 1) != 0) {
    F_00406ad0(in_ecx);
  }
  return (uint)in_ecx;
}

/* ref: Client::Game::Event::TestDirector::vf0 */
uint F_0075adc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75adc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  *in_ecx = (*(undefined * PTR32 (*)[157])REFP(0x10bcfc4));
  F_006fed10(in_ecx,in_edi);
  if ((param_3 & 1) != 0) {
    F_00406ad0(in_ecx);
  }
  return (uint)in_ecx;
}

/* ref: FUN_0075adf0 */
uint F_0075adf0(unsigned int gen_a0)
{
  GEN_ENTER(0x75adf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x10)) {
      F_00750930(this_00);
    }
    F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xfffffff0,800);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_0075ae40 */
uint F_0075ae40(unsigned int gen_a0)
{
  GEN_ENTER(0x75ae40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * this_00;
  
  pvVar2 = *(undefined * PTR32 *)((int)this + 4);
  if (*(undefined * PTR32 *)this != pvVar2) {
    pvVar1 = (undefined *)F_00757950(pvVar2,pvVar2,*(undefined * PTR32 *)this,this);
    pvVar2 = *(undefined * PTR32 *)((int)this + 4);
    for (this_00 = pvVar1; this_00 != pvVar2; this_00 = (undefined *)((int)this_00 + 0x10)) {
      F_00750930(this_00);
    }
    *(undefined * PTR32 *)((int)this + 4) = pvVar1;
    pvVar2 = this;
  }
  return (uint)pvVar2;
}

/* ref: FUN_0075ae90 */
uint F_0075ae90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75ae90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  undefined4 * puVar4;
  byte * pbVar5;
  
  pbVar5 = *((byte * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(byte * PTR32 *)(gen_frame + 0x28)) = pbVar5;
  if ((*(byte * PTR32 *)(pbVar5 + 4))[0x21] == 0) {
    pbVar2 = *(byte * PTR32 *)(pbVar5 + 4);
    do {
      if (pbVar2[0xc] < *(*(byte * PTR32 *)&gen_args[1])) {
        pbVar3 = *(byte * PTR32 *)(pbVar2 + 8);
      }
      else {
        (*(byte * PTR32 *)(gen_frame + 0x28)) = pbVar2;
        pbVar3 = *(byte * PTR32 *)pbVar2;
        pbVar5 = pbVar2;
      }
      pbVar2 = pbVar3;
    } while (pbVar3[0x21] == 0);
  }
  if ((pbVar5 == *((byte * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) || (*(*(byte * PTR32 *)&gen_args[1]) < pbVar5[0xc])) {
    bVar1 = *(*(byte * PTR32 *)&gen_args[1]);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_00752390(&(*(undefined4 *)(gen_frame + 0x8)));
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    puVar4 = (undefined4 *)F_004296a0(0x24,0,800);
    *puVar4 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    puVar4[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    puVar4[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    *(undefined2 *)(puVar4 + 8) = 0;
    if ((byte *)(puVar4 + 3) != (byte *)0x0) {
      *(byte *)(puVar4 + 3) = bVar1;
      F_00754bb0(puVar4 + 4,&(*(undefined4 *)(gen_frame + 0x8)));
    }
    F_00759cf0((*(undefined * PTR32 *)&gen_args[0]),&(*(byte * PTR32 *)&gen_args[1]),(*(byte * PTR32 *)(gen_frame + 0x28)),puVar4);
    pbVar5 = (*(byte * PTR32 *)&gen_args[1]);
    F_00752390(&(*(undefined4 *)(gen_frame + 0x8)));
    F_00752390(&(*(undefined4 *)(gen_frame + 0x18)));
  }
  return (uint)(pbVar5 + 0x10);
}

/* ref: FUN_0075af70 */
uint F_0075af70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75af70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 4;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_0075a680(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0075a680(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0075afe0 */
uint F_0075afe0(unsigned int gen_a0)
{
  GEN_ENTER(0x75afe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_0075a740(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0075b000 */
uint F_0075b000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75b000u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00759a40(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x89) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x89) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x89);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x89);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x89);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x89);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00759160(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_0075b0d0 */
uint F_0075b0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75b0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00759ab0(this,piVar2[1]);
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
    F_007597e0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_0075b190 */
uint F_0075b190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75b190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_0075aa30(this,param_2);
  F_00759c00(this,param_1,uVar1,uVar2);
  return param_1;
}

/* ref: FUN_0075b1c0 */
uint F_0075b1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75b1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  F_0075a0b0((int)this + 0xd,puVar1 + 3,param_3);
  F_0075a8d0(this,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_0075b220 */
uint F_0075b220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75b220u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  F_00758c40(puVar1 + 3,param_3);
  F_0075a8d0(this,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_0075b280 */
uint F_0075b280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75b280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_0075ab70(this,param_2);
  F_00759fc0(this,param_1,uVar1,uVar2);
  return param_1;
}

/* ref: FUN_0075b2b0 */
uint F_0075b2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x75b2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x10)) {
      F_00750930(this_00);
    }
    F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xfffffff0,800);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_0075b300 */
uint F_0075b300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75b300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined * pvVar4;
  byte bVar5;
  uint uVar6;
  undefined * this_00;
  uint uVar7;
  
  if (this != param_1) {
    iVar2 = *param_1;
    uVar7 = param_1[1] - iVar2 >> 4;
    if (uVar7 == 0) {
      F_0075ae40(this);
      return (uint)this;
    }
    iVar3 = *(int *)this;
    uVar6 = *(int *)((int)this + 4) - iVar3 >> 4;
    if (uVar7 <= uVar6) {
      this_00 = (undefined *)F_00755680(iVar2,param_1[1],iVar3,param_1);
      pvVar4 = *(undefined * PTR32 *)((int)this + 4);
      for (; this_00 != pvVar4; this_00 = (undefined *)((int)this_00 + 0x10)) {
        F_00750930(this_00);
      }
      *(uint *)((int)this + 4) = (param_1[1] - *param_1 & 0xfffffff0U) + *(int *)this;
      return (uint)this;
    }
    if (uVar7 <= (uint)(*(int *)((int)this + 8) - iVar3 >> 4)) {
      iVar1 = iVar2 + uVar6 * 0x10;
      F_00755680(iVar2,iVar1,iVar3,param_1);
      uVar7 = F_00758c00(iVar1,param_1[1],*(undefined4 *)((int)this + 4));
      *(uint *)((int)this + 4) = uVar7;
      return (uint)this;
    }
    if (iVar3 != 0) {
      F_007597b0(iVar3,*(undefined4 *)((int)this + 4));
      F_00724010(*(int *)this,*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4);
    }
    bVar5 = F_00739910(this,param_1[1] - *param_1 >> 4);
    if (bVar5 != 0) {
      uVar7 = F_00758c00(*param_1,param_1[1],*(undefined4 *)this);
      *(uint *)((int)this + 4) = uVar7;
    }
  }
  return (uint)this;
}

/* ref: FUN_0075b420 */
uint F_0075b420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75b420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0075ac20(this,param_1);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return (uint)this;
}

/* ref: FUN_0075b440 */
uint F_0075b440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75b440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x10)) {
      F_00750930(this_00);
    }
    F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xfffffff0,800);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0075b4b0 */
uint F_0075b4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x75b4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  undefined * this_00;
  
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)this == uVar1) {
    *(undefined4 *)((int)this + 0x10) = 0;
    return uVar1;
  }
  pvVar3 = (undefined *)F_00757950(uVar1,uVar1,*(uint *)this,this);
  pvVar2 = *(undefined * PTR32 *)((int)this + 4);
  for (this_00 = pvVar3; this_00 != pvVar2; this_00 = (undefined *)((int)this_00 + 0x10)) {
    F_00750930(this_00);
  }
  *(undefined * PTR32 *)((int)this + 4) = pvVar3;
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_0075b510 */
uint F_0075b510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75b510u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[1]);
  uVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0]) >> 4;
  if ((*(uint *)&gen_args[1]) < uVar2) {
    uVar2 = F_0075a5c0((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[1]),(*(uint *)&gen_args[1]) * 0x10 + *(int *)(*(undefined * PTR32 *)&gen_args[0]),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
    return uVar2;
  }
  if (uVar2 < (*(uint *)&gen_args[1])) {
    F_0075af70((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]) - uVar2);
    F_00757900(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar1 - (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0]) >> 4),0,
                 (int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,0,(*(uint *)&gen_args[1]));
    uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (uVar1 - ((int)(uVar2 - *(int *)(*(undefined * PTR32 *)&gen_args[0])) >> 4)) * 0x10 + uVar2;
  }
  return uVar2;
}

/* ref: FUN_0075b590 */
uint F_0075b590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75b590u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  undefined4 * puVar4;
  byte * pbVar5;
  
  pbVar5 = *((byte * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(byte * PTR32 *)(gen_frame + 0x28)) = pbVar5;
  if ((*(byte * PTR32 *)(pbVar5 + 4))[0x21] == 0) {
    pbVar2 = *(byte * PTR32 *)(pbVar5 + 4);
    do {
      if (pbVar2[0xc] < *(*(byte * PTR32 *)&gen_args[1])) {
        pbVar3 = *(byte * PTR32 *)(pbVar2 + 8);
      }
      else {
        (*(byte * PTR32 *)(gen_frame + 0x28)) = pbVar2;
        pbVar3 = *(byte * PTR32 *)pbVar2;
        pbVar5 = pbVar2;
      }
      pbVar2 = pbVar3;
    } while (pbVar3[0x21] == 0);
  }
  if ((pbVar5 == *((byte * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) || (*(*(byte * PTR32 *)&gen_args[1]) < pbVar5[0xc])) {
    bVar1 = *(*(byte * PTR32 *)&gen_args[1]);
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    puVar4 = (undefined4 *)F_004296a0(0x28,0,800);
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar4;
    *puVar4 = puVar4;
    puVar4[1] = puVar4;
    puVar4[2] = puVar4;
    *(undefined1 *)(puVar4 + 9) = 1;
    *(undefined1 *)((int)puVar4 + 0x25) = 1;
    ((byte *)(gen_frame + 0x4))[0] = bVar1;
    F_0074a520(((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x18)));
    puVar4 = (undefined4 *)F_004296a0(0x24,0,800);
    *puVar4 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    puVar4[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    puVar4[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    *(undefined2 *)(puVar4 + 8) = 0;
    F_0075a0b0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd,puVar4 + 3,((byte *)(gen_frame + 0x4)));
    F_0075a8d0((*(undefined * PTR32 *)&gen_args[0]),&(*(byte * PTR32 *)&gen_args[1]),(*(byte * PTR32 *)(gen_frame + 0x28)),puVar4);
    pbVar5 = (*(byte * PTR32 *)&gen_args[1]);
    F_0074a1e0(((undefined1 *)(gen_frame + 0x8)),&(*(byte * PTR32 *)&gen_args[1]),*(*(undefined4 * PTR32 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xc)),0x28,800);
    F_0074a1e0(((undefined1 *)(gen_frame + 0x18)),&(*(byte * PTR32 *)&gen_args[1]),*(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),(*(undefined4 * PTR32 *)(gen_frame + 0x1c)));
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x1c)),0x28,800);
  }
  return (uint)(pbVar5 + 0x10);
}

/* ref: FUN_0075b6d0 */
uint F_0075b6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75b6d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  byte * pbVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[1]);
  puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar6;
  if (*(char *)((int)puVar6[1] + 0x21) == '\0') {
    puVar4 = (undefined4 *)puVar6[1];
    do {
      if (*(byte *)(puVar4 + 3) < *(*(byte * PTR32 *)&gen_args[1])) {
        puVar3 = (undefined4 *)puVar4[2];
      }
      else {
        (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar4;
        puVar3 = (undefined4 *)*puVar4;
        puVar6 = puVar4;
      }
      puVar4 = puVar3;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  if ((puVar6 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) && (*(byte *)(puVar6 + 3) <= *(*(byte * PTR32 *)&gen_args[1]))) {
    return (uint)(puVar6 + 4);
  }
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  puVar4 = (undefined4 *)F_004296a0(0x28,0,800);
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar4;
  *puVar4 = puVar4;
  puVar4[1] = puVar4;
  puVar4[2] = puVar4;
  *(undefined1 *)(puVar4 + 9) = 1;
  *(undefined1 *)((int)puVar4 + 0x25) = 1;
  bVar1 = *pbVar2;
  F_0074a520(((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x18)));
  puVar4 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar4 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar4[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar4[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  *(undefined2 *)(puVar4 + 8) = 0;
  if ((byte *)(puVar4 + 3) != (byte *)0x0) {
    *(byte *)(puVar4 + 3) = bVar1;
    puVar4[6] = 0;
    uVar5 = F_004296a0(0x28,0,800);
    puVar4[5] = uVar5;
    *(uint *)uVar5 = uVar5;
    *(undefined4 *)(puVar4[5] + 4) = puVar4[5];
    *(undefined4 *)(puVar4[5] + 8) = puVar4[5];
    *(undefined1 *)(puVar4[5] + 0x24) = 1;
    *(undefined1 *)(puVar4[5] + 0x25) = 1;
    F_00750b30(puVar4 + 4,((undefined1 *)(gen_frame + 0x8)));
    puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x28));
  }
  F_0075a8d0((*(undefined * PTR32 *)&gen_args[0]),&(*(byte * PTR32 *)&gen_args[1]),puVar6,puVar4);
  pbVar2 = (*(byte * PTR32 *)&gen_args[1]);
  F_0074a1e0(((undefined1 *)(gen_frame + 0x8)),&(*(byte * PTR32 *)&gen_args[1]),*(*(undefined4 * PTR32 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xc)),0x28,800);
  F_0074a1e0(((undefined1 *)(gen_frame + 0x18)),&(*(byte * PTR32 *)&gen_args[1]),*(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),(*(undefined4 * PTR32 *)(gen_frame + 0x1c)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x1c)),0x28,800);
  return (uint)(pbVar2 + 0x10);
}

/* ref: FUN_0075b860 */
uint F_0075b860(unsigned int gen_a0)
{
  GEN_ENTER(0x75b860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0075a740(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_0075b8a0 */
uint F_0075b8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x75b8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_0075b000(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0075b8c0 */
uint F_0075b8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x75b8c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_0075b0d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0075b8e0 */
uint F_0075b8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75b8e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  bool bVar4;
  
  uVar1 = F_0075ab70((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[2]));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x89) == '\0') {
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      bVar4 = *(uint *)(uVar1 + 0x10) < (uint)puVar2[4];
      (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),bVar4);
      if (bVar4) {
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
      }
    } while (*(char *)((int)puVar3 + 0x89) == '\0');
  }
  puVar2 = (undefined4 *)F_007589a0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[2]),puVar2,uVar1);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_0075b950 */
uint F_0075b950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75b950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0075b300(this,param_1);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return (uint)this;
}

/* ref: FUN_0075b970 */
unsigned int F_0075b970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75b970u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0075ac20(param_1,param_2);
    *(undefined4 *)((int)param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  }
  return 0;
}

/* ref: FUN_0075b9a0 */
uint F_0075b9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x75b9a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this;
  
  this = (undefined *)*param_1;
  if (this != (undefined *)0x0) {
    pvVar1 = (undefined *)param_1[1];
    for (; this != pvVar1; this = (undefined *)((int)this + 0x10)) {
      F_00750930(this);
    }
    F_00429760(*param_1,param_1[2] - *param_1 & 0xfffffff0,800);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 0;
}

/* ref: FUN_0075b9f0 */
unsigned int F_0075b9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75b9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0075ac20(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
  }
  return 0;
}

/* ref: FUN_0075ba20 */
uint F_0075ba20(unsigned int gen_a0)
{
  GEN_ENTER(0x75ba20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00492c50((undefined *)((int)this + 0x54));
  F_00429760(*(undefined4 *)((int)this + 0x54),8,0x2c4);
  *(undefined4 *)((int)this + 0x54) = 0;
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_0075ba50 */
uint F_0075ba50(unsigned int gen_a0)
{
  GEN_ENTER(0x75ba50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0075a740(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,800);
  return (uint)uVar1;
}

/* ref: Client::Game::Event::GCShopConfirmWidgetCallback::vf1 */
uint F_0075baa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x75baa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  if (*(undefined * PTR32 *)(this + 4) == (undefined *)0x0) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  }
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  F_00700cf0(*(undefined * PTR32 *)(this + 4),uVar1);
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_0075baf0 */
uint F_0075baf0(unsigned int gen_a0)
{
  GEN_ENTER(0x75baf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0075b000(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x90,800);
  return (uint)uVar1;
}

/* ref: FUN_0075bb70 */
uint F_0075bb70(unsigned int gen_a0)
{
  GEN_ENTER(0x75bb70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0075b0d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_0075bbe0 */
uint F_0075bbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75bbe0u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_0075b300(this,iVar1);
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    iVar1 = iVar1 + 0x14;
    this = (undefined *)((int)this + 0x14);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_0075bc20 */
unsigned int F_0075bc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75bc20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0075ac20(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
  }
  return 0;
}

/* ref: FUN_0075bc50 */
uint F_0075bc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75bc50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  undefined * this;
  
  this = (undefined *)*param_2;
  if (this != (undefined *)0x0) {
    pvVar1 = (undefined *)param_2[1];
    for (; this != pvVar1; this = (undefined *)((int)this + 0x10)) {
      F_00750930(this);
    }
    F_00429760(*param_2,param_2[2] - *param_2 & 0xfffffff0,800);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return 0;
}

/* ref: FUN_0075bca0 */
uint F_0075bca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75bca0u, gen_a0, gen_a1, gen_a2, 0u);
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
      F_0075ac20(this,iVar1);
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    }
    iVar1 = iVar1 + 0x14;
    this = (undefined *)((int)this + 0x14);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_0075bce0 */
uint F_0075bce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x75bce0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      F_0075ac20(this,param_1);
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    }
    param_1 = param_1 + 0x14;
    this = (undefined *)((int)this + 0x14);
  } while (param_1 != param_2);
  return (uint)this;
}

/* ref: FUN_0075bd20 */
uint F_0075bd20(unsigned int gen_a0)
{
  GEN_ENTER(0x75bd20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0075b000(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x90,800);
  return (uint)uVar1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf0 */
uint F_0075bd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75bd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00701870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0075bd90 */
uint F_0075bd90(unsigned int gen_a0)
{
  GEN_ENTER(0x75bd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0075b0d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_0075bdd0 */
uint F_0075bdd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75bdd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0075c160((undefined *)((int)this + -0xf8),param_1);
  return uVar1;
}

/* ref: FUN_0075be70 */
uint F_0075be70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75be70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1;
    do {
      F_0075b300(this,iVar1);
      *(undefined4 *)((int)this + 0x10) =
           *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + 0x10 + (int)this)));
      iVar1 = iVar1 + 0x14;
      this = (undefined *)((int)this + 0x14);
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_0075beb0 */
uint F_0075beb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75beb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00492c50((undefined *)((int)this + 0x5c));
  F_00429760(*(undefined4 *)((int)this + 0x5c),8,0x2c4);
  *(undefined4 *)((int)this + 0x5c) = 0;
  F_0042c880((undefined *)((int)this + 8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0075bf00 */
unsigned int F_0075bf00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x75bf00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this;
  int iVar1;
  
  this = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    if (this != (undefined *)0x0) {
      F_0075ac20(this,&(*(undefined4 *)(gen_frame + 0x8)));
      *(undefined4 *)((int)this + 0x10) = 0;
    }
    this = (undefined *)((int)this + 0x14);
  }
  return 0;
}

/* ref: FUN_0075bf50 */
uint F_0075bf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75bf50u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0075ac20(this,iVar1 + (int)this);
        *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar1 + 0x10 + (int)this);
      }
      this = (undefined *)((int)this + 0x14);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_0075bf90 */
unsigned int F_0075bf90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75bf90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * pvVar1;
  int * piVar2;
  undefined * this;
  
  for (piVar2 = param_1; piVar2 != param_2; piVar2 = piVar2 + 5) {
    this = (undefined *)*piVar2;
    if (this != (undefined *)0x0) {
      pvVar1 = (undefined *)piVar2[1];
      for (; this != pvVar1; this = (undefined *)((int)this + 0x10)) {
        F_00750930(this);
      }
      F_00429760(*piVar2,piVar2[2] - *piVar2 & 0xfffffff0,800);
    }
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
  }
  return 0;
}

/* ref: FUN_0075bff0 */
uint F_0075bff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75bff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0075bce0(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_0075c020 */
uint F_0075c020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75c020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  piVar2 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
  if (piVar2 != (int *)0x0) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = (undefined4 *)0x0;
  (*(char *)(gen_frame + 0x24)) = -1;
  F_00490f90(&(*(undefined4 *)(gen_frame + 0x1c)),param_1);
  if ((*(uint *)(gen_frame + 0xc)) <= (*(int *)(gen_frame + 0x14)) + 1U) {
    F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x4)),1);
  }
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_0042aca0((int)this + 8);
  F_00ab3200(0x19002,&(*(int * PTR32 *)(gen_frame + 0x4)),(int)this + 8);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
  uVar5 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar5;
}

/* ref: Client::Game::Event::GCShopEventHandler::vf0 */
uint F_0075c160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75c160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00703620(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0075c190 */
unsigned int F_0075c190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75c190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 in_ECX = 0;
  
  F_0075bf00(param_1,param_2,param_3,param_4,0,in_ECX);
  return 0;
}

/* ref: FUN_0075c1c0 */
uint F_0075c1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75c1c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0075ac20(this,iVar1 + (int)this);
        *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar1 + 0x10 + (int)this);
      }
      this = (undefined *)((int)this + 0x14);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_0075c200 */
unsigned int F_0075c200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75c200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_0075bf90(param_1,param_2,param_3,in_ECX);
  return 0;
}

/* ref: FUN_0075c220 */
uint F_0075c220(unsigned int gen_a0)
{
  GEN_ENTER(0x75c220u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  ulonglong uVar1;
  
  F_00492c50((undefined *)(param_1 + 0x5c));
  F_00429760(*(undefined4 *)(param_1 + 0x5c),8,0x2c4);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  uVar1 = F_0042c880((undefined *)(param_1 + 8));
  return (uint)uVar1;
}

/* ref: FUN_0075c260 */
uint F_0075c260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75c260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_0075bce0(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_0075c290 */
uint F_0075c290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x75c290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *(undefined2 *)this = (undefined2)param_1;
  F_0042cc20((undefined *)((int)this + 4),param_2,REFG(undefined4, 0x108cc50));
  F_0042b630((int)this + 0x58);
  *(undefined4 *)((int)this + 0xb0) = param_4;
  *(undefined2 *)((int)this + 0xac) = (undefined2)param_3;
  *(undefined4 *)((int)this + 0xb4) = param_5;
  F_00709420(this);
  return (uint)this;
}

/* ref: Client::Game::Event::NormalCraftCallback::vf1 */
uint F_0075c2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x75c2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  
  if (*(undefined * PTR32 *)(this + 4) != (undefined *)0x0) {
    bVar1 = F_00704ab0(*(undefined * PTR32 *)(this + 4),param_2,param_3);
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::ShopItemSellCallback::vf1 */
uint F_0075c340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x75c340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  if (((REFG(int, 0x1488760) != 0) && (*(short *)(REFG(int, 0x1488760) + 0x54) != -1)) &&
     (*(undefined * PTR32 *)(this + 4) != (undefined *)0x0)) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    F_00706560(*(undefined * PTR32 *)(this + 4),uVar1);
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return (uint)param_1;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_0075c3b0 */
unsigned int F_0075c3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75c3b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0075bf90(param_1,param_2,(int)this + 0xc,param_2);
  return 0;
}

/* ref: FUN_0075c3d0 */
uint F_0075c3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75c3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  F_00492c50((undefined *)(param_2 + 0x5c));
  F_00429760(*(undefined4 *)(param_2 + 0x5c),8,0x2c4);
  *(undefined4 *)(param_2 + 0x5c) = 0;
  uVar1 = F_0042c880((undefined *)(param_2 + 8));
  return (uint)uVar1;
}

/* ref: FUN_0075c410 */
uint F_0075c410(unsigned int gen_a0)
{
  GEN_ENTER(0x75c410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_0075bf90(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x14) * 0x14,800);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_0075c480 */
uint F_0075c480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75c480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar1 = (param_1[1] - *param_1) / 0x14;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 0x14;
    uVar2 = F_004296a0(iVar1,0,800);
    *(uint *)this = uVar2;
    *(uint *)((int)this + 4) = uVar2;
    *(uint *)((int)this + 8) = iVar1 + uVar2;
    uVar2 = F_0075bce0(*param_1,param_1[1],uVar2,(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar2;
  }
  return (uint)this;
}

/* ref: Client::Game::Event::GCShopItemListCallback::vf1 */
uint F_0075c510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x75c510u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  byte * pbVar1;
  int iVar2;
  int * piVar3;
  uint in_ecx;
  undefined * this_00;
  undefined4 uVar4;
  
  pbVar1 = (*(byte * PTR32 *)&gen_args[2]);
  if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4)));
  }
  (*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3)))) = 0;
  if ((iVar2 == -1) || (iVar2 == -2)) {
    (*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3)))) = F_0070d7e0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),iVar2);
    if ((*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3)))) != 0) {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar4 = 5;
      in_ecx = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
      this_00 = (undefined *)F_00763050(in_ecx,uVar4);
      if (this_00 != (undefined *)0x0) {
        F_0089aef0(this_00,4,4);
      }
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]));
    }
  }
  else if (iVar2 == 0) {
    uVar4 = 0;
    if ((pbVar1[8] & 0xf) != 0) {
      uVar4 = *(undefined4 *)(pbVar1 + 0xc);
    }
    (*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3)))) = F_0070d7e0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar4);
    if ((*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3)))) != 0) {
      F_006c2fb0();
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = 2;
      *((byte *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = (*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3))));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((iVar2 == 1) || (iVar2 == 2)) {
    F_00700910(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = 2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 2;
  *((byte *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = (*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3))));
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: Client::Game::Event::SpecialShopListCallback::vf1 */
uint F_0075c600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x75c600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * this_00;
  undefined4 uVar1;
  int iVar2;
  
  this_00 = *(undefined * PTR32 *)(this + 4);
  if (this_00 == (undefined *)0x0) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  }
  if ((*param_2 & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 4);
    if (iVar2 == 0x403) {
      if ((param_2[0x10] & 0xf) == 0) {
        F_006eb210(this_00,0);
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
      F_006eb210(this_00,*(undefined4 *)(param_2 + 0x14));
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
  }
  uVar1 = 0;
  if ((1 < param_3) && (((byte)*(undefined4 *)(param_2 + 8) & 0xf) == 3)) {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
  }
  F_0070d9b0(this_00,iVar2,uVar1);
  if (iVar2 < 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  }
  *(bool *)(param_1 + 1) = iVar2 < 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_0075c6c0 */
uint F_0075c6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75c6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00492c50(param_2 + 0x17);
    F_00429760(param_2[0x17],8,0x2c4);
    param_2[0x17] = 0;
    F_0042c880(param_2 + 2);
    F_00429760(param_2,0x80,800);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
    *param_1 = iVar1;
    return (uint)param_1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_0075c740 */
uint F_0075c740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75c740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  undefined * this_00;
  undefined * pvVar2;
  
  if (param_2 != param_3) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    this_00 = param_2;
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = (undefined *)((int)pvVar2 + 0x14)) {
      F_0075b300(this_00,pvVar2);
      *(undefined4 *)((int)this_00 + 0x10) = *(undefined4 *)((int)pvVar2 + 0x10);
      this_00 = (undefined *)((int)this_00 + 0x14);
    }
    F_0075bf90(this_00,*(undefined4 *)((int)this + 4),(int)this + 0xc,param_1);
    *(undefined * PTR32 *)((int)this + 4) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0075c7c0 */
uint F_0075c7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x75c7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  ulonglong uVar4;
  
  piVar1 = *(int * PTR32 *)this;
  piVar3 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  uVar2 = *(uint *)this;
  *(uint *)(uVar2 + 4) = uVar2;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar3 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar3;
      F_00492c50(piVar3 + 0x17);
      F_00429760(piVar3[0x17],8,0x2c4);
      piVar3[0x17] = 0;
      F_0042c880(piVar3 + 2);
      uVar4 = F_00429760(piVar3,0x80,800);
      uVar2 = (uint)uVar4;
      piVar3 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return uVar2;
}

/* ref: FUN_0075c830 */
uint F_0075c830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75c830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x14;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x14,0,800);
    F_0075c1c0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_0075bf90(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,uVar3);
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x14) * 0x14,800);
    }
    *(uint *)((int)this + 8) = param_1 * 0x14 + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar1 - iVar2) / 0x14) * 0x14;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_0075c920 */
uint F_0075c920(unsigned int gen_a0)
{
  GEN_ENTER(0x75c920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_0075c740(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0075c940 */
unsigned int F_0075c940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75c940u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0075c480(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_0075c960 */
uint F_0075c960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75c960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  F_004949f0((undefined *)((int)this + 0x54),param_1 + 0x54);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(byte *)((int)this + 0x74) =
       *(byte *)((int)this + 0x74) ^ (*(byte *)((int)this + 0x74) ^ *(byte *)(param_1 + 0x74)) & 1;
  *(byte *)((int)this + 0x74) =
       (*(byte *)(param_1 + 0x74) ^ *(byte *)((int)this + 0x74)) & 2 ^ *(byte *)((int)this + 0x74);
  return (uint)this;
}

/* ref: FUN_0075c9b0 */
uint F_0075c9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75c9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0075c410(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0075c9e0 */
uint F_0075c9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x75c9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_0042cbc0(this,param_1);
  F_004949f0((undefined *)((int)this + 0x54),param_2);
  *(byte *)((int)this + 0x74) = *(byte *)((int)this + 0x74) & 0xfc;
  *(undefined4 *)((int)this + 0x70) = param_4;
  *(undefined4 *)((int)this + 0x6c) = param_3;
  return (uint)this;
}

/* ref: FUN_0075ca20 */
uint F_0075ca20(unsigned int gen_a0)
{
  GEN_ENTER(0x75ca20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_0075c6c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)this);
  return uVar1;
}

/* ref: FUN_0075ca50 */
uint F_0075ca50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75ca50u, gen_a0, gen_a1, 0u, 0u);
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
      uVar2 = F_0075c830(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0075c830(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0075cae0 */
unsigned int F_0075cae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75cae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  
  uVar2 = *(uint *)((int)this + 4);
  if ((param_1 < uVar2) && (uVar3 = *(uint *)this, uVar3 <= param_1)) {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_0075ca50(this,1);
    }
    pvVar4 = *(undefined * PTR32 *)((int)this + 4);
    iVar1 = *(int *)this + ((int)(param_1 - uVar3) / 0x14) * 0x14;
    if (pvVar4 != (undefined *)0x0) {
      F_0075ac20(pvVar4,iVar1);
      *(undefined4 *)((int)pvVar4 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
      return 0;
    }
  }
  else {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_0075ca50(this,1);
    }
    pvVar4 = *(undefined * PTR32 *)((int)this + 4);
    if (pvVar4 != (undefined *)0x0) {
      F_0075ac20(pvVar4,param_1);
      *(undefined4 *)((int)pvVar4 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
  return 0;
}

/* ref: FUN_0075cb70 */
unsigned int F_0075cb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75cb70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0075c480(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_0075cb90 */
unsigned int F_0075cb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75cb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    F_004949f0((undefined *)((int)param_1 + 0x54),param_2 + 0x54);
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    *(undefined4 *)((int)param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    *(byte *)((int)param_1 + 0x74) =
         *(byte *)((int)param_1 + 0x74) ^
         (*(byte *)((int)param_1 + 0x74) ^ *(byte *)(param_2 + 0x74)) & 1;
    *(byte *)((int)param_1 + 0x74) =
         (*(byte *)(param_2 + 0x74) ^ *(byte *)((int)param_1 + 0x74)) & 2 ^
         *(byte *)((int)param_1 + 0x74);
  }
  return 0;
}

/* ref: FUN_0075cbf0 */
uint F_0075cbf0(unsigned int gen_a0)
{
  GEN_ENTER(0x75cbf0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0075c410(param_1);
  return uVar1;
}

/* ref: FUN_0075cc00 */
uint F_0075cc00(unsigned int gen_a0)
{
  GEN_ENTER(0x75cc00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0075c7c0(this);
  uVar1 = F_00429760(*(undefined4 *)this,0x80,800);
  return (uint)uVar1;
}

/* ref: FUN_0075cc20 */
uint F_0075cc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75cc20u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[1]);
  uVar2 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x14;
  if ((*(uint *)&gen_args[1]) < uVar2) {
    uVar2 = F_0075c740((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[1]),*(int *)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 0x14,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
    return uVar2;
  }
  if (uVar2 < (*(uint *)&gen_args[1])) {
    F_0075ca50((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]) - uVar2);
    F_0075bf00(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar1 - (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x14,0,
                 (int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,0,(*(uint *)&gen_args[1]));
    uVar2 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x14;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + (uVar1 - uVar2) * 0x14;
  }
  return uVar2;
}

/* ref: FUN_0075ccd0 */
unsigned int F_0075ccd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75ccd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    F_0075c410(this);
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return 0;
}

/* ref: FUN_0075cd10 */
unsigned int F_0075cd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75cd10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    F_004949f0((undefined *)((int)param_2 + 0x54),param_3 + 0x54);
    *(undefined4 *)((int)param_2 + 0x6c) = *(undefined4 *)(param_3 + 0x6c);
    *(undefined4 *)((int)param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
    *(byte *)((int)param_2 + 0x74) =
         *(byte *)((int)param_2 + 0x74) ^
         (*(byte *)((int)param_2 + 0x74) ^ *(byte *)(param_3 + 0x74)) & 1;
    *(byte *)((int)param_2 + 0x74) =
         (*(byte *)(param_3 + 0x74) ^ *(byte *)((int)param_2 + 0x74)) & 2 ^
         *(byte *)((int)param_2 + 0x74);
  }
  return 0;
}

/* ref: FUN_0075cd60 */
uint F_0075cd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75cd60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_0075c410(param_2);
  return uVar1;
}

/* ref: FUN_0075cd70 */
uint F_0075cd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75cd70u, gen_a0, gen_a1, gen_a2, 0u);
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
      F_0075c480(this,iVar1);
    }
    iVar1 = iVar1 + 0x10;
    this = (undefined *)((int)this + 0x10);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_0075cdb0 */
uint F_0075cdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75cdb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x80,0,800);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 2,param_3);
    F_004949f0(puVar1 + 0x17,param_3 + 0x54);
    puVar1[0x1d] = *(undefined4 *)(param_3 + 0x6c);
    puVar1[0x1e] = *(undefined4 *)(param_3 + 0x70);
    *(byte *)(puVar1 + 0x1f) =
         *(byte *)(puVar1 + 0x1f) ^ (*(byte *)(puVar1 + 0x1f) ^ *(byte *)(param_3 + 0x74)) & 1;
    *(byte *)(puVar1 + 0x1f) =
         (*(byte *)(param_3 + 0x74) ^ *(byte *)(puVar1 + 0x1f)) & 2 ^ *(byte *)(puVar1 + 0x1f);
  }
  return (uint)puVar1;
}

/* ref: FUN_0075ce30 */
unsigned int F_0075ce30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x75ce30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this;
  int iVar1;
  
  this = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    if (this != (undefined *)0x0) {
      F_0075c480(this,&(*(undefined4 *)(gen_frame + 0xc)));
    }
    this = (undefined *)((int)this + 0x10);
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
  }
  return 0;
}

/* ref: FUN_0075ce80 */
uint F_0075ce80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75ce80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint in_EAX = 0;
  int * piVar1;
  
  for (piVar1 = param_1; piVar1 != param_2; piVar1 = piVar1 + 4) {
    if (*piVar1 != 0) {
      F_0075bf90(*piVar1,piVar1[1],piVar1 + 3,param_2);
      F_00429760(*piVar1,((piVar1[2] - *piVar1) / 0x14) * 0x14,800);
    }
    in_EAX = 0;
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
  }
  return in_EAX;
}

/* ref: FUN_0075cef0 */
uint F_0075cef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75cef0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_0075c480(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x10);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_0075cf30 */
uint F_0075cf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75cf30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    F_0075c410(this);
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_0075cf70 */
uint F_0075cf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75cf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0070fff0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0075cfa0 */
uint F_0075cfa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75cfa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0075cdb0(param_1,*(undefined4 *)(param_1 + 4),param_2);
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(param_1 + 4) = uVar1;
  **(uint * PTR32 *)(uVar1 + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_0075cff0 */
unsigned int F_0075cff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75cff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 in_ECX = 0;
  
  F_0075ce30(param_1,param_2,param_3,param_4,0,in_ECX);
  return 0;
}

/* ref: FUN_0075d020 */
uint F_0075d020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75d020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0075ce80(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_0075d040 */
uint F_0075d040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75d040u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_0075c480(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x10);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_0075d080 */
uint F_0075d080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75d080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * this;
  
  puVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != puVar1) {
      F_0075c410(this);
      *this = *puVar1;
      this[1] = puVar1[1];
      this[2] = puVar1[2];
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    puVar1 = puVar1 + 4;
    this = this + 4;
  } while (puVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_0075d0d0 */
uint F_0075d0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75d0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)this;
  uVar2 = F_0075cdb0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(iVar1 + 4) = uVar2;
  **(uint * PTR32 *)(uVar2 + 4) = uVar2;
  return uVar2;
}

/* ref: FUN_0075d120 */
uint F_0075d120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75d120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0075ce80(param_1,param_2,(int)this + 0xc,param_2);
  return uVar1;
}

/* ref: FUN_0075d140 */
uint F_0075d140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75d140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = param_1;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4) < param_1) {
    iVar3 = param_1 * 0x10;
    uVar4 = F_004296a0(iVar3,0,800);
    F_0075d040(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar4);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    uVar5 = 0;
    if (iVar2 != 0) {
      F_0075ce80(iVar2,iVar1,(int)this + 0xc,iVar3);
      uVar6 = F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xfffffff0,800);
      uVar5 = (uint)uVar6;
    }
    *(uint *)((int)this + 4) = (iVar1 - iVar2 & 0xfffffff0U) + uVar4;
    *(uint *)this = uVar4;
    *(uint *)((int)this + 8) = iVar3 + uVar4;
  }
  return uVar5;
}

/* ref: FUN_0075d1e0 */
uint F_0075d1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75d1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0075d080(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_0075d200 */
uint F_0075d200(unsigned int gen_a0)
{
  GEN_ENTER(0x75d200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_0075ce80(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xfffffff0,800);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_0075d260 */
uint F_0075d260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75d260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_0075d080(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    F_0075ce80(uVar1,*(undefined4 *)((int)this + 4),(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0075d2b0 */
uint F_0075d2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75d2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 4;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_0075d140(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0075d140(this,uVar2);
  }
  return uVar1;
}

/* ref: Client::Game::Event::GuildleveAssignmentListCallback::vf1 */
uint F_0075d320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x75d320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * this_00;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  bVar1 = 1;
  if (param_4 == 5) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = 0x1b;
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    uVar3 = F_00763050(uVar3,uVar4);
    if (uVar3 != 0) {
      bVar1 = F_00774fc0(uVar3);
      *(byte *)(param_1 + 1) = bVar1;
      *param_1 = 2;
      return (uint)param_1;
    }
  }
  else {
    this_00 = *(undefined * PTR32 *)(this + 4);
    if (this_00 != (undefined *)0x0) {
      if ((*param_2 & 0xf) == 0) {
        uVar3 = 0;
switchD_0075d39a_switchD: ;
        switch((unsigned int)(uintptr_t)(uVar3)) {
        default: ;
          if ((param_2[2] & 0xf) != 0) {
            bVar1 = F_006bda10(param_2[3]);
            *(byte *)(param_1 + 1) = bVar1;
            *param_1 = 2;
            return (uint)param_1;
          }
          bVar1 = F_006bda10(0);
          *(byte *)(param_1 + 1) = bVar1;
          *param_1 = 2;
          return (uint)param_1;
        case 1: ;
          *(undefined1 *)(param_1 + 1) = 0;
          *param_1 = 2;
          return (uint)param_1;
        case 2: ;
          bVar1 = F_006bda50();
          *(byte *)(param_1 + 1) = bVar1;
          *param_1 = 2;
          return (uint)param_1;
        case 3: ;
          if ((param_2[2] & 0xf) != 0) {
            bVar1 = F_00715610(this_00,param_2[3]);
            *(byte *)(param_1 + 1) = bVar1;
            *param_1 = 2;
            return (uint)param_1;
          }
          bVar1 = F_00715610(this_00,0);
          *(byte *)(param_1 + 1) = bVar1;
          *param_1 = 2;
          return (uint)param_1;
        case 4: ;
        case 5: ;
        case 6: ;
        case 7: ;
          goto switchD_0075d39a_caseD_4;
        case 8: ;
          if ((param_2[4] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = param_2[5];
          }
          if ((param_2[2] & 0xf) != 0) {
            bVar1 = F_0070f730(this_00,param_2[3],uVar3);
            *(byte *)(param_1 + 1) = bVar1;
            *param_1 = 2;
            return (uint)param_1;
          }
          bVar1 = F_0070f730(this_00,0,uVar3);
          *(byte *)(param_1 + 1) = bVar1;
          *param_1 = 2;
          return (uint)param_1;
        case 9: ;
          if ((param_2[2] & 0xf) != 0) {
            bVar1 = F_0070f3d0(this_00,param_2[3]);
            *(byte *)(param_1 + 1) = bVar1;
            *param_1 = 2;
            return (uint)param_1;
          }
          bVar1 = F_0070f3d0(this_00,0);
          *(byte *)(param_1 + 1) = bVar1;
          *param_1 = 2;
          return (uint)param_1;
        case 10: ;
          if ((param_2[4] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = param_2[5];
          }
          if ((param_2[2] & 0xf) != 0) {
            bVar1 = F_0070f450(this_00,param_2[3],uVar3);
            *(byte *)(param_1 + 1) = bVar1;
            *param_1 = 2;
            return (uint)param_1;
          }
          bVar1 = F_0070f450(this_00,0,uVar3);
          *(byte *)(param_1 + 1) = bVar1;
          *param_1 = 2;
          return (uint)param_1;
        }
      }
      uVar3 = param_2[1];
      if (uVar3 < 0xb) goto switchD_0075d39a_switchD;
switchD_0075d39a_caseD_4: ;
      if ((*param_2 & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = param_2[1];
      }
      bVar1 = F_006facc0(this_00,uVar3);
      if (bVar1 == 0) goto LAB_0075d54c;
    }
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  }
LAB_0075d54c: ;
  *(byte *)(param_1 + 1) = bVar1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_0075d590 */
uint F_0075d590(unsigned int gen_a0)
{
  GEN_ENTER(0x75d590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_0075ce80(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xfffffff0,800);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_0075d5f0 */
uint F_0075d5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75d5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 4);
  uVar2 = iVar1 - *(int *)((int)(uintptr_t)this) >> 4;
  if (param_1 < uVar2) {
    iVar4 = param_1 * 0x10 + *(int *)this;
    if (iVar4 != iVar1) {
      uVar2 = F_0075d080(iVar1,iVar1,iVar4,param_1);
      uVar3 = F_0075ce80(uVar2,*(undefined4 *)((int)this + 4),(int)this + 0xc,param_1);
      *(uint *)((int)this + 4) = uVar2;
      return uVar3;
    }
  }
  else if (uVar2 < param_1) {
    F_0075d2b0(this,param_1 - uVar2);
    F_0075ce30(*(int *)((int)this + 4),param_1 - (*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 4),0,
                 (int)this + 0xc,0,param_1);
    uVar2 = *(uint *)((int)this + 4);
    *(uint *)((int)this + 4) = (param_1 - ((int)(uVar2 - *(int *)this) >> 4)) * 0x10 + uVar2;
  }
  return uVar2;
}

/* ref: FUN_0075d690 */
uint F_0075d690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75d690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  F_0075d5f0(this,param_1);
  return (uint)this;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf0 */
uint F_0075d6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75d6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0071ad00(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0075d700 */
uint F_0075d700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75d700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_005a2710(this,10);
  *(uint *)((int)this + 4) = param_1;
  return param_1;
}

/* ref: FUN_0075d720 */
uint F_0075d720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75d720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x20);
  *(undefined4 *)(uVar1 + param_1 * 4) = param_2;
  return uVar1;
}

/* ref: FUN_0075d740 */
uint F_0075d740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75d740u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x20) + param_2 * 4)));
}

/* ref: FUN_0075d750 */
uint F_0075d750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75d750u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x20) + param_2 * 4)));
}

/* ref: FUN_0075d790 */
unsigned int F_0075d790(float gen_a0)
{
  GEN_ENTER(0x75d790u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_0075d7b0 */
unsigned int F_0075d7b0(float gen_a0)
{
  GEN_ENTER(0x75d7b0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_0075d7d0 */
float10 F_0075d7d0(float gen_a0)
{
  GEN_ENTER(0x75d7d0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF(SQRT((float10)param_1)));
}

/* ref: FUN_0075d7f0 */
unsigned int F_0075d7f0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x75d7f0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return 0;
}

/* ref: Client::UI2::RaptureAtkHistory::vf2 */
byte F_0075d810(unsigned int gen_a0)
{
  GEN_ENTER(0x75d810u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (-1 < *(int *)(in_ecx + 0x1c)) {
    *(int *)(in_ecx + 0x1c) = *(int *)(in_ecx + 0x1c) + -1;
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkHistory::vf3 */
unsigned int F_0075d830(unsigned int gen_a0)
{
  GEN_ENTER(0x75d830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x1c) = 0xffffffff;
  return 0;
}

/* ref: FUN_0075d840 */
byte F_0075d840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75d840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  code * pcVar2;
  char * pcVar3;
  
  if (*(int *)((int)this + 0x22d3c) == param_1) {
    return 0;
  }
  pcVar3 = (char *)((int)this + 0x22cf0);
  if (param_1 != 0) {
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 == (char *)((int)this + 0x22cf1)) {
      pcVar2 = *(gen_code32 *)(*(int *)this + 0x14);
      *(int *)((int)this + 0x22d3c) = param_1;
      (*pcVar2)(this,"GameMain",0,0);
      return 1;
    }
    F_00559190(this,"GameMain");
    *(int *)((int)this + 0x22d3c) = param_1;
    return 1;
  }
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 == (char *)((int)this + 0x22cf1)) {
    pcVar2 = *(gen_code32 *)(*(int *)this + 0x14);
    *(undefined4 *)((int)this + 0x22d3c) = 0;
    (*pcVar2)(this,"LobbyMain",0,0);
    return 1;
  }
  F_00559190(this,"LobbyMain");
  *(undefined4 *)((int)this + 0x22d3c) = 0;
  return 1;
}

/* ref: Client::UI2::RaptureAtkModule::vf62 */
uint F_0075d910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75d910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0057e9e0((undefined *)this,param_1);
  *(undefined4 *)(this + 0x22d3c) = 2;
  return uVar1;
}

/* ref: Client::UI2::RaptureAtkModule::vf4 */
byte F_0075d930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75d930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_005590e0(in_ecx,param_2);
  return bVar1;
}

/* ref: Client::UI2::RaptureAtkModule::vf50 */
uint F_0075d940(unsigned int gen_a0)
{
  GEN_ENTER(0x75d940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf0))(this);
  if ((char)uVar1 == '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,1);
    iVar2 = 2;
    do {
      ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x41);
    iVar2 = 1;
    do {
      ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x3c);
    iVar2 = 0;
    do {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    return uVar1;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this,1);
  iVar2 = 2;
  do {
    ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this,iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x41);
  iVar2 = 1;
  do {
    ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this,iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x3c);
  ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,2);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this,1);
  return uVar1;
}

/* ref: FUN_0075d9f0 */
uint F_0075d9f0(unsigned int gen_a0)
{
  GEN_ENTER(0x75d9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  uint * puVar7;
  int local_14;
  int * local_c;
  
  uVar1 = F_00404270();
  puVar6 = (uint *)0x0;
  *(undefined4 *)((int)this + 0x2db50) = 0;
  local_c = (int *)((int)this + 0x29258);
  local_14 = 0;
  do {
    *local_c = 0;
    uVar2 = F_00a36f30(&REFG(undefined, 0x14a4230),local_14);
    if (uVar2 != 0) {
      uVar5 = *(uint *)(uVar2 + 0xc);
      uVar4 = -(uint)((int)((ulonglong)uVar5 * 0x70 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x70)
      ;
      puVar3 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar4) | uVar4 + 4,0,uVar1,0);
      if (puVar3 == (uint *)0x0) {
        puVar3 = (uint *)0x0;
      }
      else {
        *puVar3 = uVar5;
        puVar3 = puVar3 + 1;
        puVar7 = puVar3;
        while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
          *puVar7 = (uint)(*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
          F_0042b630(puVar7 + 1);
          *(byte *)((int)puVar7 + 0x6d) = *(byte *)((int)puVar7 + 0x6d) & 0xfe;
          puVar7[0x16] = 0;
          puVar7[0x17] = 0;
          puVar7[0x18] = 0;
          *(undefined2 *)(puVar7 + 0x19) = 0;
          *(undefined1 *)((int)puVar7 + 0x66) = 0;
          *puVar7 = (uint)(*(undefined * PTR32 (*)[3])REFP(0x10c3efc));
          puVar7[0x1a] = 0;
          *(undefined1 *)(puVar7 + 0x1b) = 0;
          puVar7 = puVar7 + 0x1c;
        }
      }
      *local_c = (int)puVar3;
      *(int *)((int)this + 0x2db50) = *(int *)((int)this + 0x2db50) + *(int *)(uVar2 + 0xc);
    }
    local_c = local_c + 1;
    local_14 = local_14 + 1;
  } while (local_14 < 4);
  *(undefined4 *)((int)this + 0x29a48) = 0;
  uVar2 = F_00a36f30(&REFG(undefined, 0x14a4230),0x7d4);
  if (uVar2 != 0) {
    uVar2 = *(uint *)(uVar2 + 0xc);
    uVar5 = -(uint)((int)((ulonglong)uVar2 * 0x68 >> 0x20) != 0) | (uint)((ulonglong)uVar2 * 0x68);
    puVar3 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0,uVar1,0);
    if (puVar3 == (uint *)0x0) {
      puVar3 = (uint *)0x0;
    }
    else {
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
      puVar7 = puVar3;
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        *puVar7 = (uint)(*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
        F_0042b630(puVar7 + 1);
        puVar7[0x16] = 0;
        puVar7[0x17] = 0;
        puVar7[0x18] = 0;
        *(undefined2 *)(puVar7 + 0x19) = 0;
        *(undefined1 *)((int)puVar7 + 0x66) = 0;
        puVar7 = puVar7 + 0x1a;
      }
    }
    *(uint * PTR32 *)((int)this + 0x29a48) = puVar3;
  }
  *(undefined4 *)((int)this + 0x29a4c) = 0;
  uVar2 = F_00a36f30(&REFG(undefined, 0x14a4230),1000);
  puVar3 = (uint *)0x0;
  if (uVar2 != 0) {
    uVar2 = *(uint *)(uVar2 + 0xc);
    uVar5 = -(uint)((int)((ulonglong)uVar2 * 0x68 >> 0x20) != 0) | (uint)((ulonglong)uVar2 * 0x68);
    puVar3 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0,uVar1,0);
    if (puVar3 != (uint *)0x0) {
      *puVar3 = uVar2;
      puVar6 = puVar3 + 1;
      puVar7 = puVar6;
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        *puVar7 = (uint)(*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
        puVar3 = (uint *)F_0042b630(puVar7 + 1);
        puVar7[0x16] = 0;
        puVar7[0x17] = 0;
        puVar7[0x18] = 0;
        *(undefined2 *)(puVar7 + 0x19) = 0;
        *(undefined1 *)((int)puVar7 + 0x66) = 0;
        puVar7 = puVar7 + 0x1a;
      }
    }
    *(uint * PTR32 *)((int)this + 0x29a4c) = puVar6;
  }
  return (uint)puVar3;
}

/* ref: FUN_0075dc20 */
unsigned int F_0075dc20(unsigned int gen_a0)
{
  GEN_ENTER(0x75dc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = (int *)((int)this + 0x29258);
  iVar3 = 4;
  do {
    puVar1 = (undefined4 *)*piVar2;
    if (puVar1 != (undefined4 *)0x0) {
      if (puVar1[-1] == 0) {
        F_00406b30(puVar1 + -1);
      }
      else {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
      }
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x29a48);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 + -1);
    }
    else {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
    *(undefined4 *)((int)this + 0x29a48) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x29a4c);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
      *(undefined4 *)((int)this + 0x29a4c) = 0;
      return 0;
    }
    F_00406b30(puVar1 + -1);
    *(undefined4 *)((int)this + 0x29a4c) = 0;
  }
  return 0;
}

/* ref: FUN_0075dcd0 */
uint F_0075dcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75dcd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x29a4c + param_2 * 4);
}

/* ref: FUN_0075dcf0 */
uint F_0075dcf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75dcf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x70 + 0x29268 + in_ecx;
}

/* ref: Client::UI2::RaptureAtkModule::vf55 */
uint F_0075dd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75dd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  char * pcVar3;
  bool bVar4;
  
  pcVar3 = "GameMain";
  pbVar2 = param_1;
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < (byte)*pcVar3;
    if (bVar1 != *pcVar3) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < (byte)pcVar3[1];
    if (bVar1 != pcVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pcVar3 = pcVar3 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (uint)(1 - bVar4 != (uint)(bVar4 != 0));
}

/* ref: Client::UI2::RaptureAtkModule::vf56 */
uint F_0075dd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75dd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return param_1;
}

/* ref: Client::UI2::RaptureAtkModule::vf59 */
unsigned int F_0075dd70(unsigned int gen_a0)
{
  GEN_ENTER(0x75dd70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x23184) + 0x30))))(*(int * PTR32 *)(this + 0x23184))));
  F_0043b290(this_00);
  return 0;
}

/* ref: Client::UI2::RaptureAtkModule::vf60 */
byte F_0075dd90(unsigned int gen_a0)
{
  GEN_ENTER(0x75dd90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2db69);
}

/* ref: Client::UI2::RaptureAtkModule::vf61 */
byte F_0075dda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75dda0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2db69) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0075ddc0 */
byte F_0075ddc0(unsigned int gen_a0)
{
  GEN_ENTER(0x75ddc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x29254);
}

/* ref: FUN_0075ddd0 */
unsigned int F_0075ddd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75ddd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  int iVar7;
  int iVar8;
  int local_28;
  int local_1c;
  int * local_18;
  int local_14;
  int * local_c;
  int local_8;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,0);
  if (((uVar1 != 0) && (uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,1), uVar2 != 0)) &&
     (uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,0), uVar3 != 0)) {
    local_18 = (int *)((int)this + 0x2354c);
    local_8 = 0;
    local_1c = 0;
    local_14 = 4;
    iVar8 = 0x54;
    do {
      uVar4 = F_0043b800(*(undefined4 *)((int)this + 0x23188),local_8);
      if (*local_18 != *(int *)(uVar4 + 0x6ec)) {
        if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + iVar8))) != *(int *)(uVar4 + 0x6f8)) {
          *((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + iVar8))) = *(int *)(uVar4 + 0x6f8);
          *(undefined1 *)(uVar1 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((iVar8 + 4 + *(int *)(uVar1 + 0x20)))) != *(int *)(uVar4 + 0x6fc)) {
          *((int *)GEN_TOP((iVar8 + 4 + *(int *)(uVar1 + 0x20)))) = *(int *)(uVar4 + 0x6fc);
          *(undefined1 *)(uVar1 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 8 + iVar8))) != *(int *)(uVar4 + 0x6e8)) {
          *((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 8 + iVar8))) = *(int *)(uVar4 + 0x6e8);
          *(undefined1 *)(uVar1 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0xc + iVar8))) != *(int *)(uVar4 + 0x6ec)) {
          *((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0xc + iVar8))) = *(int *)(uVar4 + 0x6ec);
          *(undefined1 *)(uVar1 + 0x1d) = 1;
        }
        *local_18 = *(int *)(uVar4 + 0x6ec);
      }
      if ((ushort)*(byte *)((int)this + local_8 + 0x23548) != *(ushort *)(uVar4 + 0x706) >> 1) {
        if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + iVar8))) != *(int *)(uVar4 + 0x6f8)) {
          *((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + iVar8))) = *(int *)(uVar4 + 0x6f8);
          *(undefined1 *)(uVar1 + 0x1d) = 1;
        }
        if (*((uint *)GEN_TOP((iVar8 + -8 + *(int *)(uVar1 + 0x20)))) != (uint)*(ushort *)(uVar4 + 0x704)) {
          *((uint *)GEN_TOP((iVar8 + -8 + *(int *)(uVar1 + 0x20)))) = (uint)*(ushort *)(uVar4 + 0x704);
          *(undefined1 *)(uVar1 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((iVar8 + 4 + *(int *)(uVar1 + 0x20)))) != *(int *)(uVar4 + 0x6fc)) {
          *((int *)GEN_TOP((iVar8 + 4 + *(int *)(uVar1 + 0x20)))) = *(int *)(uVar4 + 0x6fc);
          *(undefined1 *)(uVar1 + 0x1d) = 1;
        }
        if (*((uint *)GEN_TOP((iVar8 + -4 + *(int *)(uVar1 + 0x20)))) != (uint)*(ushort *)(uVar4 + 0x702)) {
          *((uint *)GEN_TOP((iVar8 + -4 + *(int *)(uVar1 + 0x20)))) = (uint)*(ushort *)(uVar4 + 0x702);
          *(undefined1 *)(uVar1 + 0x1d) = 1;
        }
        *((uint *)GEN_TOP((iVar8 + 0x10 + *(int *)(uVar1 + 0x20)))) = *(ushort *)(uVar4 + 0x706) & 1;
        *(undefined1 *)(uVar1 + 0x1d) = 1;
        uVar5 = F_0042a990(uVar4 + 0x54);
        puVar6 = ((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_14)));
        if (uVar5 != *puVar6) {
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        *puVar6 = uVar5;
        local_28 = (uint)*(ushort *)(uVar4 + 0x704) * 2;
        if (*(ushort *)(uVar4 + 0x704) != 0) {
          local_c = (int *)(uVar4 + 0xa8);
          iVar7 = local_1c;
          do {
            if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + iVar7))) != *local_c) {
              *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + iVar7))) = *local_c;
              *(undefined1 *)(uVar2 + 0x1d) = 1;
            }
            local_c = local_c + 1;
            iVar7 = iVar7 + 4;
            local_28 = local_28 + -1;
          } while (local_28 != 0);
        }
        *(char *)((int)this + local_8 + 0x23548) = (char)(*(ushort *)(uVar4 + 0x706) >> 1);
      }
      local_14 = local_14 + 8;
      local_8 = local_8 + 1;
      local_18 = local_18 + 1;
      *(ushort *)(uVar4 + 0x706) = *(ushort *)(uVar4 + 0x706) & 0xfffe;
      local_1c = local_1c + 0x640;
      iVar8 = iVar8 + 0x1c;
    } while (local_1c < 0x1900);
  }
  return 0;
}

/* ref: FUN_0075e050 */
unsigned int F_0075e050(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0x75e050u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float * pfVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  
  pfVar1 = (float *)(param_1 + 0x29214 + param_2 * 0x18);
  fVar2 = ((float)GEN_TOF(((float10)(param_4 & 0xffff) * (float10)*(double *)&REFG(undefined, 0x10c3f40))));
  pfVar1[5] = fVar2;
  bVar3 = GEN_ISNAN((float10)fVar2) || GEN_ISNAN((float10)0);
  fVar4 = REFG(float, 0x1087f04);
  if (bVar3 == (bVar3 || (float10)fVar2 == (float10)0)) {
    fVar4 = fVar2;
  }
  pfVar1[3] = ((float)GEN_TOF((((float10)param_3 - (float10)*(float *)(param_1 + 0x29244)) / (float10)fVar4)));
  pfVar1[4] = *(float *)(param_1 + 0x29244);
  *pfVar1 = param_5;
  pfVar1[1] = param_6;
  pfVar1[2] = param_7;
  return 0;
}

/* ref: FUN_0075e0e0 */
uint F_0075e0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75e0e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + param_1 * 8 + 0x23560) = param_2;
  *(undefined4 *)((int)this + param_1 * 8 + 0x23564) = param_3;
  return param_1;
}

/* ref: FUN_0075e100 */
uint F_0075e100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75e100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  
  if (0 < (int)param_3) {
    if (((*param_2 & 0xf) == 3) || (uVar1 = param_3, (*param_2 & 0xf) == 4)) {
      uVar1 = param_2[1];
    }
    F_0043f8b0(uVar1);
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: FUN_0075e140 */
uint F_0075e140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75e140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  undefined * pvVar2;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if ((param_2 & 1) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = param_1;
    (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x64));
    (*(undefined4 *)(gen_frame + 0x4c)) = 0x75e170;
    uVar1 = F_0042cd30((undefined *)((int)this + 0x22f38),((undefined1 *)(gen_frame + 0x64)),param_1);
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)uVar1;
    (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x75e178;
    F_0042ccf0(param_1,uVar1);
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)0x75e180;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    param_2 = param_2 & 0xfffffffe;
  }
  if ((param_2 & 2) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = param_1;
    (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x64));
    (*(undefined4 *)(gen_frame + 0x4c)) = 0x75e19b;
    uVar1 = F_0042cd30((undefined *)((int)this + 0x22fe0),((undefined1 *)(gen_frame + 0x64)),param_1);
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)uVar1;
    (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x75e1a3;
    F_0042ccf0(param_1,uVar1);
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)0x75e1ab;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    param_2 = param_2 & 0xfffffffd;
  }
  uVar1 = 0;
  do {
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)uVar1;
    F_0042cbc0((gen_frame + 0x0),(int)this + 0x22f38);
    pvVar2 = param_1;
    F_00559470(this);
    uVar1 = F_0055f3b0(pvVar2,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),
                         (*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),
                         (*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                         (*(undefined1 * PTR32 *)(gen_frame + 0x50)),(*(undefined * PTR32 *)(gen_frame + 0x54)));
    if (uVar1 == REFG(undefined4, 0x108cc50)) goto LAB_0075e21e;
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)uVar1;
    F_0042cbc0((gen_frame + 0x0),(int)this + 0x22f8c);
    pvVar2 = param_1;
    F_00559470(this);
    uVar1 = F_0055f3b0(pvVar2,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),
                         (*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),
                         (*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                         (*(undefined1 * PTR32 *)(gen_frame + 0x50)),(*(undefined * PTR32 *)(gen_frame + 0x54)));
  } while (uVar1 != REFG(undefined4, 0x108cc50));
  param_2 = param_2 | 1;
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)((int)this + 0x22f8c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x75e21e;
  F_0042e360(param_1,(int)this + 0x22f8c);
LAB_0075e21e: ;
  uVar1 = 0;
  do {
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)uVar1;
    F_0042cbc0((gen_frame + 0x0),(int)this + 0x22fe0);
    pvVar2 = param_1;
    F_00559470(this);
    uVar1 = F_0055f3b0(pvVar2,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),
                         (*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),
                         (*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                         (*(undefined1 * PTR32 *)(gen_frame + 0x50)),(*(undefined * PTR32 *)(gen_frame + 0x54)));
    if (uVar1 == REFG(undefined4, 0x108cc50)) {
      F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
      return param_2;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)uVar1;
    F_0042cbc0((gen_frame + 0x0),(int)this + 0x23034);
    pvVar2 = param_1;
    F_00559470(this);
    uVar1 = F_0055f3b0(pvVar2,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),
                         (*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),
                         (*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                         (*(undefined1 * PTR32 *)(gen_frame + 0x50)),(*(undefined * PTR32 *)(gen_frame + 0x54)));
  } while (uVar1 != REFG(undefined4, 0x108cc50));
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)((int)this + 0x23034);
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = (undefined1 *)0x75e286;
  F_0042e360(param_1,(int)this + 0x23034);
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return param_2 | 1;
}

/* ref: FUN_0075e2c0 */
uint F_0075e2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75e2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  short sVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined * puVar5;
  undefined4 * puVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined1 * puVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  uVar8 = (int)this + 0x22d94;
  (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = param_2;
  (*(uint *)(gen_frame + 0x8)) = uVar8;
  (*(int *)(gen_frame + 0x1c)) = 5;
  do {
    F_0042aca0(uVar8);
    uVar3 = (*(uint *)(gen_frame + 0x8));
    uVar8 = uVar8 + 0x54;
    iVar9 = (*(int *)(gen_frame + 0x1c)) + -1;
    (*(int *)(gen_frame + 0x1c)) = iVar9;
  } while (iVar9 != 0);
  if ((((param_3 < 2) || (((byte)*param_2 & 0xf) != 6)) || (iVar9 = param_2[1], iVar9 == 0)) ||
     (((byte)param_2[2] & 0xf) != 4)) {
    F_0042aca0((*(uint *)(gen_frame + 0x8)));
  }
  else {
    sVar2 = (short)param_2[3] + -5;
    (*(undefined4 *)(gen_frame + 0x20)) = 0xffffffff;
    if (sVar2 == 0) {
      sVar2 = -1;
    }
    (*(short *)(gen_frame + 0x24)) = sVar2;
    (*(undefined4 *)(gen_frame + 0x26)) = 0x1000ffff;
    cVar7 = (char)((uint)param_2[3] >> 0x10);
    (*(char *)(gen_frame + 0x2b)) = cVar7;
    if (cVar7 == '\0') {
      (*(char *)(gen_frame + 0x2b)) = -1;
    }
    (*(byte *)(gen_frame + 0x2c)) = 0xff;
    (*(undefined2 *)(gen_frame + 0x2e)) = 0xffff;
    (*(undefined1 *)(gen_frame + 0x2a)) = 0;
    if ((2 < param_3) && (((byte)param_2[4] & 0xf) == 4)) {
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x26)) + 2)) = (char)param_2[5];
      gen_piece_set(&(*(undefined4 *)(gen_frame + 0x26)), 0, 3, (unsigned long long)(CONCAT12((char)param_2[5],0xffff)));
      (*(undefined4 *)(gen_frame + 0x26)) = CONCAT13(0x10,(undefined3)(*(undefined4 *)(gen_frame + 0x26)));
    }
    if ((3 < param_3) && (((byte)param_2[6] & 0xf) == 4)) {
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x26)) + 3)) = (char)param_2[7];
      (*(undefined4 *)(gen_frame + 0x26)) = CONCAT13((char)param_2[7],(undefined3)(*(undefined4 *)(gen_frame + 0x26)));
    }
    if (param_3 < 5) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x34)),iVar9,REFG(undefined4, 0x108cc50));
      uVar3 = (*(uint *)(gen_frame + 0x8));
      uVar11 = 0;
      puVar6 = &(*(undefined4 *)(gen_frame + 0x20));
      puVar10 = ((undefined1 *)(gen_frame + 0x34));
      uVar8 = (*(uint *)(gen_frame + 0x8));
      pvVar4 = (undefined *)F_00559470(this);
      F_00580530(pvVar4,uVar8,puVar10,puVar6,uVar11);
      F_0042c880(((undefined1 *)(gen_frame + 0x34)));
    }
    else {
      if ((((byte)param_2[8] & 0xf) == 2) && (*(char *)(param_2 + 9) == '\x01')) {
        if (((byte)param_2[10] & 0xf) == 4) {
          uVar11 = param_2[0xb];
        }
        else {
          uVar11 = 0xffff;
        }
        (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x26)) + 0)) = (short)uVar11;
        (*(undefined4 *)(gen_frame + 0x26)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x26)) + 2)),(short)uVar11);
        (*(char *)(gen_frame + 0x2d)) = (char)((uint)uVar11 >> 0x10);
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        F_00594ec0(&(*(undefined4 *)(gen_frame + 0x18)),6);
        (*(char *)(gen_frame + 0x33)) = '\0';
        uVar8 = 0;
        (*(byte *)(gen_frame + 0x2c)) = 0;
        puVar6 = param_2;
        do {
          uVar11 = REFG(undefined4, 0x108cc50);
          uVar3 = F_004311a0(puVar6);
          F_0042cc20(((undefined1 *)(gen_frame + 0x34)),uVar3,uVar11);
          uVar11 = 0;
          puVar6 = &(*(undefined4 *)(gen_frame + 0x20));
          puVar10 = ((undefined1 *)(gen_frame + 0x34));
          iVar9 = (uint)(*(byte *)(gen_frame + 0x2c)) * 0x54 + 0x22d94 + (int)this;
          pvVar4 = (undefined *)F_00559470(this);
          uVar3 = F_00580530(pvVar4,iVar9,puVar10,puVar6,uVar11);
          F_0042c880(((undefined1 *)(gen_frame + 0x34)));
          if (uVar3 == 0xfffffffe) {
            (*(char *)(gen_frame + 0x33)) = '\x01';
          }
          else if (uVar3 != 0xffffffff) break;
          uVar8 = F_0075e140(this,(uint)(*(byte *)(gen_frame + 0x2c)) * 0x54 + 0x22d94 + (int)this,uVar8);
          uVar3 = F_0042a990((uint)(*(byte *)(gen_frame + 0x2c)) * 0x54 + 0x22d94 + (int)this);
          (*(uint *)(gen_frame + 0x8)) = uVar3;
          (*(undefined4 *)(gen_frame + 0x4)) = 6;
          F_0056c4f0(&(*(undefined4 *)(gen_frame + 0x18)),(uint)(*(byte *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x4)));
          F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
          bVar1 = (*(byte *)(gen_frame + 0x2c)) + 1;
          (*(byte *)(gen_frame + 0x2c)) = bVar1;
          if ((*(char *)(gen_frame + 0x33)) != '\0') {
            (*(char *)(gen_frame + 0x2d)) = (*(char *)(gen_frame + 0x2d)) + '\x01';
          }
          puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
        } while (bVar1 < 5);
        F_0075e140(this,(uint)(*(byte *)(gen_frame + 0x2c)) * 0x54 + 0x22d94 + (int)this,uVar8);
        uVar8 = F_0042a990((uint)(*(byte *)(gen_frame + 0x2c)) * 0x54 + 0x22d94 + (int)this);
        (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)uVar8;
        (*(undefined4 *)(gen_frame + 0xc)) = 6;
        F_0056c4f0(&(*(undefined4 *)(gen_frame + 0x18)),(uint)(*(byte *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0xc)));
        F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)));
        puVar5 = &REFG(undefined, 0x10be460);
        if ((*(char *)(gen_frame + 0x33)) == '\0') {
          puVar5 = &REFG(undefined, 0x10be464);
        }
        (*(undefined4 *)(gen_frame + 0xc)) = 6;
        (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)puVar5;
        F_0056c4f0(&(*(undefined4 *)(gen_frame + 0x18)),5,&(*(undefined4 *)(gen_frame + 0xc)));
        F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)));
        puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
        F_00560a60((*(undefined4 * PTR32 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x18)));
        F_005a2670(&(*(undefined4 *)(gen_frame + 0x18)));
        F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
        return (uint)puVar6;
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x34)),iVar9,REFG(undefined4, 0x108cc50));
      uVar3 = (*(uint *)(gen_frame + 0x8));
      uVar11 = 0;
      puVar6 = &(*(undefined4 *)(gen_frame + 0x20));
      puVar10 = ((undefined1 *)(gen_frame + 0x34));
      uVar8 = (*(uint *)(gen_frame + 0x8));
      pvVar4 = (undefined *)F_00559470(this);
      bVar1 = F_00580670(pvVar4,uVar8,puVar10,puVar6,uVar11);
      F_0042c880(((undefined1 *)(gen_frame + 0x34)));
      if (bVar1 != 0) {
        F_0042aca0(uVar3);
      }
    }
  }
  uVar8 = F_0042a990(uVar3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x14))[1] = uVar8;
  *(*(undefined4 * PTR32 *)(gen_frame + 0x14)) = 6;
  puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)puVar6;
}

/* ref: FUN_0075e640 */
uint F_0075e640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75e640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_0075e650 */
uint F_0075e650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75e650u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  int iVar2;
  
  iVar2 = (*(int *)&gen_args[3]);
  if (0 < (*(int *)&gen_args[3])) {
    if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
      (*(int *)&gen_args[3]) = (uint)GEN_PIECE(&(*(int *)&gen_args[3]), 1, 3) << 8;
    }
    else {
      (*(int *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[3]), 1, 3),(*(byte * PTR32 *)&gen_args[2])[4]);
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23184)));
    if (1 < iVar2) {
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,0x80,(*(int *)&gen_args[3]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,4,(*(int *)&gen_args[3]));
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_0075e6c0 */
uint F_0075e6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75e6c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  int iVar2;
  
  iVar2 = (*(int *)&gen_args[3]);
  if (0 < (*(int *)&gen_args[3])) {
    if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
      (*(int *)&gen_args[3]) = (uint)GEN_PIECE(&(*(int *)&gen_args[3]), 1, 3) << 8;
    }
    else {
      (*(int *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[3]), 1, 3),(*(byte * PTR32 *)&gen_args[2])[4]);
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23184)));
    if (1 < iVar2) {
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,0x100,(*(int *)&gen_args[3]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,8,(*(int *)&gen_args[3]));
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_0075e730 */
uint F_0075e730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75e730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  
  if (0 < param_3) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x118))))(*(int * PTR32 *)((int)this + 0x23184),uVar1);
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_0075e770 */
uint F_0075e770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75e770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = 0;
  if (0 < param_3) {
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x11c))))
                      (*(int * PTR32 *)((int)this + 0x23184),uVar2);
    uVar1 = (undefined1)uVar3;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_0075e7c0 */
uint F_0075e7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75e7c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005582f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xb8) + 8))),param_1,param_2);
  return uVar1;
}

/* ref: FUN_0075e7e0 */
byte F_0075e7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75e7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * this_00;
  
  *(undefined1 *)((int)this + 0x230e8) = 0;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x230e0) + 0x1c))))
            (*(int * PTR32 *)((int)this + 0x230e0),param_1,param_2);
  if (*(char *)((int)this + 0x2db67) != '\0') {
    *(undefined1 *)((int)this + 0x2db67) = 0;
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x3c))))
                              (*(int * PTR32 *)((int)this + 0x23184))));
  bVar1 = F_00469120(this_00,param_1,param_2);
  return bVar1;
}

/* ref: FUN_0075e840 */
byte F_0075e840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x75e840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  byte bVar1;
  undefined * this_00;
  
  *(undefined1 *)((int)this + 0x230e8) = 0;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x230e0) + 0x1c))))
            (*(int * PTR32 *)((int)this + 0x230e0),param_1,param_2);
  if (*(char *)((int)this + 0x2db67) != '\0') {
    *(undefined1 *)((int)this + 0x2db67) = 0;
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x3c))))
                              (*(int * PTR32 *)((int)this + 0x23184))));
  bVar1 = F_00469190(this_00,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return bVar1;
}

/* ref: FUN_0075e8d0 */
byte F_0075e8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75e8d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x230e9) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::UI2::RaptureAtkModule::vf3 */
uint F_0075e8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75e8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined * this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  
  bVar1 = (byte)param_1;
  if (bVar1 == 0) {
    return 0;
  }
  if ((((bVar1 < 0x30) || (0x5f < bVar1)) && ((bVar1 < 0x70 || (0x7f < bVar1)))) &&
     (0x1d < (byte)(bVar1 + 0x7e))) {
    uVar5 = 0;
    iVar3 = (param_1 & 0xff) + 5000;
    uVar4 = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x23184) + 0x18))))(*(int * PTR32 *)(this + 0x23184))));
    uVar2 = F_0043bd00(this_00,iVar3,uVar4,uVar5);
    return uVar2;
  }
  uVar2 = F_005590b0((undefined *)this,param_1);
  return uVar2;
}

/* ref: FUN_0075e940 */
uint F_0075e940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75e940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  char * pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar1 = (param_1 & 0xff) + 0x1450;
  uVar3 = 0;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x18))))
                              (*(int * PTR32 *)((int)this + 0x23184))));
  pcVar2 = (char *)F_0043bd00(this_00,iVar1,uVar3,uVar4);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    pcVar2 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1)));
  }
  return (uint)pcVar2;
}

/* ref: FUN_0075e990 */
byte F_0075e990(unsigned int gen_a0)
{
  GEN_ENTER(0x75e990u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x234e0) >> 2 & 1;
}

/* ref: Client::UI2::RaptureAtkModule::vf38 */
byte F_0075e9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x75e9a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = (~*(byte *)(in_ecx + 0x234e0) ^ *(byte *)(in_ecx + 0x234e0)) & 4;
  *(byte *)(in_ecx + 0x234e0) = *(byte *)(in_ecx + 0x234e0) ^ bVar1;
  return bVar1;
}

/* ref: FUN_0075e9d0 */
byte F_0075e9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x75e9d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x23534);
}

/* ref: FUN_0075e9e0 */
byte F_0075e9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75e9e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x23534) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0075ea00 */
unsigned int F_0075ea00(unsigned int gen_a0)
{
  GEN_ENTER(0x75ea00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0xb8) != 0) {
    F_005a9ff0(((undefined *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x20c))));
    return 0;
  }
  return 0;
}

/* ref: FUN_0075ea20 */
byte F_0075ea20(unsigned int gen_a0)
{
  GEN_ENTER(0x75ea20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0xb8) != 0) {
    return *((byte *)GEN_TOP((*(int *)(in_ecx + 0xb8) + 0x21d)));
  }
  return 0;
}

/* ref: FUN_0075ea40 */
unsigned int F_0075ea40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75ea40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 0xb8) != 0) {
    F_005aa0f0(((undefined *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x20c))),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_0075ea60 */
uint F_0075ea60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x75ea60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_1,param_4);
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10c3f4c));
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = param_3;
  return (uint)this;
}

/* ref: Client::UI2::ExdSheetWaiter::vf1 */
unsigned int F_0075eaa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75eaa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 0x1c);
  uVar2 = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  if (uVar1 != 0) {
    do {
      if ((code *)*(gen_code32 *)(this + 0x20) != (code *)0x0) {
        ((code *)*(gen_code32 *)(this + 0x20))(*(undefined4 *)(param_2 + uVar2 * 4),param_3);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}

/* ref: FUN_0075eae0 */
uint F_0075eae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75eae0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  int * piVar2;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2db94))) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),"AddonParam");
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2db94))) = uVar1;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2db94)));
  if (piVar2 != (int *)0x0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,0,(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]))));
    if (piVar2 != (int *)0x0) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0075eb40 */
byte F_0075eb40(unsigned int gen_a0)
{
  GEN_ENTER(0x75eb40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0xb8) != 0) {
    return *((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0xb8) + 0x14))) + 0x1b0))) >> 3 & 1;
  }
  return 0;
}

/* ref: FUN_0075eb60 */
byte F_0075eb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75eb60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x23330) + 0x4c))))
            ((int)this + 0x23330,param_1 & 0x3f,param_2,param_3);
  return 1;
}

/* ref: FUN_0075eb90 */
uint F_0075eb90(unsigned int gen_a0)
{
  GEN_ENTER(0x75eb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 8))))(*(int * PTR32 *)((int)this + 0x23184),0x1fe,0);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x23330) + 0x4c))))((int)this + 0x23330,0x3e,0,1);
  return uVar1;
}

/* ref: FUN_0075ebc0 */
uint F_0075ebc0(unsigned int gen_a0)
{
  GEN_ENTER(0x75ebc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 8))))(*(int * PTR32 *)((int)this + 0x23184),0x32,1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x23330) + 0x4c))))((int)this + 0x23330,0x2e,1,1);
  return uVar1;
}

/* ref: FUN_0075ebf0 */
uint F_0075ebf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x75ebf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * puVar1;
  uint uVar2;
  
  puVar1 = REFG(undefined * PTR32, 0x132723c);
  if (param_1 != 1) {
    puVar1 = REFG(undefined * PTR32, 0x1327fe8);
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,puVar1,param_2,param_3,param_4,param_5,0);
  return uVar2;
}

/* ref: FUN_0075ec30 */
byte F_0075ec30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x75ec30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * puVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  bool bVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  bVar4 = *(int *)((int)this + 0x29250) == 2;
  (*(uint *)(gen_frame + 0x24)) = 0;
  if (bVar4) {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    (*(uint *)(gen_frame + 0x24)) = 1;
  }
  (*(uint *)(gen_frame + 0x24)) = (uint)bVar4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(undefined4 *)(gen_frame + 0xc)) = 1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(undefined4 *)(gen_frame + 0x14)) = param_2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
  (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
  puVar1 = REFG(undefined * PTR32, 0x132723c);
  if (param_1 != 1) {
    puVar1 = REFG(undefined * PTR32, 0x1327fe8);
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,puVar1,4,&(*(undefined4 *)(gen_frame + 0x8)),param_4,param_5,0);
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar3 = 3;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (byte)uVar2;
}

/* ref: FUN_0075ed10 */
byte F_0075ed10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x75ed10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * puVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(undefined4 *)(gen_frame + 0xc)) = 2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(undefined4 *)(gen_frame + 0x14)) = param_2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
  (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
  puVar1 = REFG(undefined * PTR32, 0x132723c);
  if (param_1 != 1) {
    puVar1 = REFG(undefined * PTR32, 0x1327fe8);
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,puVar1,4,&(*(undefined4 *)(gen_frame + 0x8)),param_4,param_5,0);
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar3 = 3;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (byte)uVar2;
}

/* ref: FUN_0075edd0 */
uint F_0075edd0(unsigned int gen_a0)
{
  GEN_ENTER(0x75edd0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_005594c0(in_ecx,2);
  uVar2 = F_005594c0(in_ecx,4);
  if ((uVar1 == 2) || (uVar2 == 2)) {
    uVar2 = 2;
  }
  else if ((uVar2 & 8) == 0) {
    if ((uVar1 & 8) != 0) {
      return uVar1;
    }
    if ((uVar1 != 4) && (uVar2 != 4)) {
      return 0;
    }
    return 4;
  }
  return uVar2;
}

/* ref: FUN_0075ee20 */
byte F_0075ee20(unsigned int gen_a0)
{
  GEN_ENTER(0x75ee20u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_005594c0(in_ecx,2);
  uVar2 = F_005594c0(in_ecx,4);
  if ((uVar1 != 2) && (uVar2 != 2)) {
    uVar3 = uVar2;
    if (((uVar2 & 8) == 0) && (uVar3 = uVar1, (uVar1 & 8) == 0)) {
      if (uVar1 == 4) {
        return 1;
      }
    }
    else {
      uVar2 = uVar3;
      if (uVar3 == 2) {
        return 1;
      }
    }
    if (uVar2 != 4) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_0075ee70 */
byte F_0075ee70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75ee70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int * PTR32 * this_00;
  
  iVar4 = 0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = this;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  ((undefined4 *)(gen_frame + 0x10))[0] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(int *)(gen_frame + 0xc)) = param_1;
  F_00594ec0(((undefined4 *)(gen_frame + 0x10)),param_2);
  iVar3 = param_3;
  if (0 < param_2) {
    do {
      F_0056c4f0(((undefined4 *)(gen_frame + 0x10)),iVar4,iVar3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 8;
      this = (*(int * PTR32 *)(gen_frame + 0x18));
    } while (iVar4 < param_2);
  }
  if (param_1 == 0xb) {
    pcVar1 = "LobbyScreenText";
  }
  else {
    pcVar1 = REFG(undefined * PTR32, 0x132806c);
    if (param_1 != 10) {
      pcVar1 = REFG(undefined * PTR32, 0x1328070);
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,pcVar1,param_2,param_3,0,0,0);
  this_00 = &(*(int * PTR32 *)(gen_frame + 0x18));
  iVar3 = 1;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return (byte)uVar2;
}

/* ref: FUN_0075ef20 */
uint F_0075ef20(unsigned int gen_a0)
{
  GEN_ENTER(0x75ef20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x15;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  ((undefined4 *)(gen_frame + 0x10))[0] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(undefined4 *)(gen_frame + 0xc)) = 5;
  F_00594ec0(((undefined4 *)(gen_frame + 0x10)),10);
  iVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x18));
  do {
    F_0056c4f0(((undefined4 *)(gen_frame + 0x10)),iVar3,puVar2);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar3 < 10);
  ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,REFG(undefined * PTR32, 0x1328070),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
  puVar2 = &(*(undefined4 *)(gen_frame + 0x18));
  iVar3 = 1;
  do {
    puVar2 = puVar2 + -2;
    F_005a2670(puVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  ((undefined4 *)(gen_frame + 0x10))[0] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(undefined4 *)(gen_frame + 0xc)) = 10;
  F_00594ec0(((undefined4 *)(gen_frame + 0x10)),10);
  iVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x18));
  do {
    F_0056c4f0(((undefined4 *)(gen_frame + 0x10)),iVar3,puVar2);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar3 < 10);
  ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
  puVar2 = &(*(undefined4 *)(gen_frame + 0x18));
  iVar3 = 1;
  do {
    puVar2 = puVar2 + -2;
    F_005a2670(puVar2);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  this_00 = &(*(uint *)(gen_frame + 0x68));
  iVar3 = 9;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar1;
}

/* ref: FUN_0075f070 */
byte F_0075f070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x75f070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  int iVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(uint *)(gen_frame + 0xc)) = (uint)(0 < param_3);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  if ((param_5 == 0xeab1) || (bVar1 = 0, param_3 == 0xeab1)) {
    bVar1 = 1;
  }
  iVar3 = param_3;
  if (param_3 == 0xeab1) {
    iVar3 = param_5;
  }
  if (((char)param_4 == '\0') && ((char)param_6 == '\0')) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
  (*(int *)(gen_frame + 0x1c)) = iVar2 + iVar3 * 2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
  (*(uint *)(gen_frame + 0x2c)) = (uint)bVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
  (*(undefined4 *)(gen_frame + 0x24)) = param_2;
  bVar1 = F_0075ee70(this,param_7,10,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x58));
  iVar3 = 9;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return bVar1;
}

/* ref: FUN_0075f180 */
byte F_0075f180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x75f180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  byte bVar1;
  
  bVar1 = F_0075f070(this,param_1,param_2,param_3,param_4,param_5,param_6,0xb);
  return bVar1;
}

/* ref: FUN_0075f1b0 */
byte F_0075f1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75f1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  int * PTR32 * this_00;
  uint * this_01;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(int * PTR32 *)(gen_frame + 0x14)) = this;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
  (*(undefined4 *)(gen_frame + 0x1c)) = 3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  ((undefined4 *)(gen_frame + 0xc))[0] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),4);
  (*(undefined4 *)(gen_frame + 0x8)) = 5;
  F_00594ec0(((undefined4 *)(gen_frame + 0xc)),10);
  iVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x18));
  do {
    F_0056c4f0(((undefined4 *)(gen_frame + 0xc)),iVar3,puVar2);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar3 < 10);
  uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x58))
                    ((*(int * PTR32 *)(gen_frame + 0x14)),REFG(undefined * PTR32, 0x1328070),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
  this_00 = &(*(int * PTR32 *)(gen_frame + 0x14));
  iVar3 = 1;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  this_01 = &(*(uint *)(gen_frame + 0x68));
  iVar3 = 9;
  do {
    this_01 = this_01 + -2;
    F_005a2670(this_01);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (byte)uVar1;
}

/* ref: FUN_0075f2b0 */
byte F_0075f2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x75f2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (((param_1 != (char *)0x0) && (*param_1 != '\0')) &&
     ((param_2 != 5 || (*(char *)((int)this + 0x29254) == '\0')))) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(int *)(gen_frame + 0xc)) = (-(uint)((char)param_3 != '\0') & 7) + 5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
    (*(char * PTR32 *)(gen_frame + 0x24)) = param_1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
    (*(uint *)(gen_frame + 0x2c)) = (uint)((char)param_4 == '\0');
    bVar1 = F_0075ee70(this,param_2,10,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x58));
    iVar2 = 9;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return bVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_0075f3a0 */
byte F_0075f3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75f3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 10;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
    (*(char * PTR32 *)(gen_frame + 0x24)) = param_1;
    F_0043f8b0(7);
    bVar1 = F_0075ee70(this,param_2,10,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x58));
    iVar2 = 9;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return bVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_0075f470 */
byte F_0075f470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75f470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int * PTR32 * this_01;
  uint * this_02;
  undefined4 * puVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  this_00 = *(undefined * PTR32 *)((int)this + 0x14);
  (*(int * PTR32 *)(gen_frame + 0x1c)) = this;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00ab1f90(param_2);
    (*(uint *)(gen_frame + 0x24)) = uVar1;
    if (uVar1 == 0) goto LAB_0075f6d7;
    uVar1 = F_0043bd00(this_00,0x542,0,0);
    (*(uint *)(gen_frame + 0x20)) = uVar1;
    uVar2 = F_00460bd0(this_00,0x543,param_2);
    uVar1 = *(uint *)((*(uint *)(gen_frame + 0x24)) + 8);
    break;
  case 1: ;
    uVar1 = F_00ab1ed0(param_2);
    (*(uint *)(gen_frame + 0x24)) = uVar1;
    if (uVar1 == 0) goto LAB_0075f6d7;
    uVar1 = F_0043bd00(this_00,0x53c,0,0);
    uVar5 = 0x53d;
    goto LAB_0075f5b9;
  default: ;
    uVar1 = F_00ab41f0(param_2);
    (*(uint *)(gen_frame + 0x24)) = uVar1;
    if (uVar1 == 0) goto LAB_0075f6d7;
    uVar1 = F_0043bd00(this_00,0x555,0,0);
    uVar5 = 0x556;
LAB_0075f5b9: ;
    (*(uint *)(gen_frame + 0x20)) = uVar1;
    uVar2 = F_00460bd0(this_00,uVar5,param_2);
    uVar1 = (uint)*(ushort *)((*(uint *)(gen_frame + 0x24)) + 8);
    break;
  case 5: ;
    uVar1 = F_00ab1f30(param_2);
    (*(uint *)(gen_frame + 0x24)) = uVar1;
    if (uVar1 == 0) goto LAB_0075f6d7;
    uVar1 = F_0043bd00(this_00,0x540,0,0);
    (*(uint *)(gen_frame + 0x20)) = uVar1;
    uVar2 = F_00460bd0(this_00,0x541,param_2);
    uVar1 = *(uint *)((*(uint *)(gen_frame + 0x24)) + 8);
    break;
  case 9: ;
    uVar1 = F_00ab1f00(param_2);
    (*(uint *)(gen_frame + 0x24)) = uVar1;
    if (uVar1 == 0) goto LAB_0075f6d7;
    uVar1 = F_0043bd00(this_00,0x53e,0,0);
    (*(uint *)(gen_frame + 0x20)) = uVar1;
    uVar2 = F_00460bd0(this_00,0x53f,param_2);
    uVar1 = (uint)*(ushort *)((*(uint *)(gen_frame + 0x24)) + 0xc);
  }
  if (((uVar1 != 0) && (uVar2 != 0)) && ((*(uint *)(gen_frame + 0x20)) != 0)) {
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
    (*(undefined4 *)(gen_frame + 0x2c)) = 0xf;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),3);
    (*(uint *)(gen_frame + 0x3c)) = uVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x50)),6);
    (*(uint *)(gen_frame + 0x54)) = (*(uint *)(gen_frame + 0x20));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),6);
    (*(uint *)(gen_frame + 0x44)) = uVar2;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    ((undefined4 *)(gen_frame + 0x14))[0] = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),4);
    (*(undefined4 *)(gen_frame + 0x10)) = 5;
    F_00594ec0(((undefined4 *)(gen_frame + 0x14)),10);
    iVar3 = 0;
    puVar4 = &(*(undefined4 *)(gen_frame + 0x28));
    do {
      F_0056c4f0(((undefined4 *)(gen_frame + 0x14)),iVar3,puVar4);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar3 < 10);
    uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x1c)) + 0x58))
                      ((*(int * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1328070),10,&(*(undefined4 *)(gen_frame + 0x28)),0,0,0);
    this_01 = &(*(int * PTR32 *)(gen_frame + 0x1c));
    iVar3 = 1;
    do {
      this_01 = this_01 + -2;
      F_005a2670(this_01);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    this_02 = &(*(uint *)(gen_frame + 0x78));
    iVar3 = 9;
    do {
      this_02 = this_02 + -2;
      F_005a2670(this_02);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return (byte)uVar1;
  }
LAB_0075f6d7: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: FUN_0075f710 */
byte F_0075f710(unsigned int gen_a0)
{
  GEN_ENTER(0x75f710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  int * PTR32 * this_00;
  uint * this_01;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(int * PTR32 *)(gen_frame + 0x14)) = this;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
  (*(undefined4 *)(gen_frame + 0x1c)) = 9;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  ((undefined4 *)(gen_frame + 0xc))[0] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),4);
  (*(undefined4 *)(gen_frame + 0x8)) = 10;
  F_00594ec0(((undefined4 *)(gen_frame + 0xc)),10);
  iVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x18));
  do {
    F_0056c4f0(((undefined4 *)(gen_frame + 0xc)),iVar3,puVar2);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar3 < 10);
  uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x58))
                    ((*(int * PTR32 *)(gen_frame + 0x14)),REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
  this_00 = &(*(int * PTR32 *)(gen_frame + 0x14));
  iVar3 = 1;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  this_01 = &(*(uint *)(gen_frame + 0x68));
  iVar3 = 9;
  do {
    this_01 = this_01 + -2;
    F_005a2670(this_01);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (byte)uVar1;
}

/* ref: FUN_0075f800 */
uint F_0075f800(unsigned int gen_a0)
{
  GEN_ENTER(0x75f800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x29248) = 0xffffffff;
  *(undefined4 *)(in_ecx + 0x2924c) = 0xffffffff;
  return 0xffffffff;
}

/* ref: FUN_0075f810 */
byte F_0075f810(unsigned int gen_a0)
{
  GEN_ENTER(0x75f810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  int * PTR32 * this_00;
  uint * this_01;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(int * PTR32 *)(gen_frame + 0x14)) = this;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xd;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  ((undefined4 *)(gen_frame + 0xc))[0] = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),4);
  (*(undefined4 *)(gen_frame + 0x8)) = 10;
  F_00594ec0(((undefined4 *)(gen_frame + 0xc)),10);
  iVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x18));
  do {
    F_0056c4f0(((undefined4 *)(gen_frame + 0xc)),iVar3,puVar2);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar3 < 10);
  uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x58))
                    ((*(int * PTR32 *)(gen_frame + 0x14)),REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
  this_00 = &(*(int * PTR32 *)(gen_frame + 0x14));
  iVar3 = 1;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  this_01 = &(*(uint *)(gen_frame + 0x68));
  iVar3 = 9;
  do {
    this_01 = this_01 + -2;
    F_005a2670(this_01);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (byte)uVar1;
}

/* ref: FUN_0075f900 */
byte F_0075f900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75f900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  ushort uVar1;
  undefined * this_00;
  ushort * puVar2;
  uint * puVar3;
  uint uVar4;
  uint * PTR32 * ppuVar5;
  undefined4 * puVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(uint * PTR32 *)(gen_frame + 0x14)) = param_2;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x18))))
                              (*(int * PTR32 *)((int)this + 0x23184))));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x60)),4);
  (*(uint * PTR32 *)(gen_frame + 0x64)) = (uint *)0x0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    puVar3 = (uint *)F_00ab3d80((*(uint * PTR32 *)(gen_frame + 0x14)));
    (*(uint * PTR32 *)(gen_frame + 0x14)) = puVar3;
    if (((puVar3 != (uint *)0x0) && (param_3 < 4)) &&
       (puVar2 = (ushort *)F_00ab3db0((uint)*(ushort *)((int)puVar3 + param_3 * 2 + 8)),
       puVar2 != (ushort *)0x0)) {
      puVar3 = (uint *)F_0043bf60(2,(uint)*puVar2);
      (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(undefined4 *)(gen_frame + 0x1c)) = 0x11;
      uVar1 = puVar2[1];
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
      (*(uint * PTR32 *)(gen_frame + 0x2c)) = (uint *)(uint)uVar1;
      iVar7 = (*(*(uint * PTR32 *)(gen_frame + 0x14)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x14));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
      (*(uint * PTR32 *)(gen_frame + 0x34)) = (uint *)iVar7;
      uVar4 = F_00460bd0(this_00,0x7e9,(*(uint * PTR32 *)(gen_frame + 0x10)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),6);
      (*(uint *)(gen_frame + 0x44)) = uVar4;
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      ((undefined4 *)(gen_frame + 0x8))[0] = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),4);
      (*(undefined4 *)(gen_frame + 0x4)) = 10;
      F_00594ec0(((undefined4 *)(gen_frame + 0x8)),10);
      iVar7 = 0;
      puVar6 = &(*(undefined4 *)(gen_frame + 0x18));
      do {
        F_0056c4f0(((undefined4 *)(gen_frame + 0x8)),iVar7,puVar6);
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 2;
      } while (iVar7 < 10);
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))
                        (this,REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
      ppuVar5 = &(*(uint * PTR32 *)(gen_frame + 0x10));
      iVar7 = 1;
      do {
        ppuVar5 = ppuVar5 + -2;
        F_005a2670(ppuVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      puVar3 = &(*(uint *)(gen_frame + 0x68));
      iVar7 = 9;
      do {
        puVar3 = puVar3 + -2;
        F_005a2670(puVar3);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return (byte)uVar4;
    }
    break;
  case 1: ;
    puVar3 = (uint *)F_00ab3d80((*(uint * PTR32 *)(gen_frame + 0x14)));
    (*(uint * PTR32 *)(gen_frame + 0x14)) = puVar3;
    if (puVar3 != (uint *)0x0) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(undefined4 *)(gen_frame + 0x1c)) = 0x12;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
      (*(uint * PTR32 *)(gen_frame + 0x2c)) = (uint *)(param_3 + 0xf294);
      iVar7 = (*(*(uint * PTR32 *)(gen_frame + 0x14)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x14));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
      (*(uint * PTR32 *)(gen_frame + 0x34)) = (uint *)iVar7;
      uVar4 = F_00460bd0(this_00,0x14,(*(uint * PTR32 *)(gen_frame + 0x14))[1]);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),6);
      (*(uint *)(gen_frame + 0x44)) = uVar4;
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      ((undefined4 *)(gen_frame + 0x8))[0] = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),4);
      (*(undefined4 *)(gen_frame + 0x4)) = 10;
      F_00594ec0(((undefined4 *)(gen_frame + 0x8)),10);
      iVar7 = 0;
      puVar6 = &(*(undefined4 *)(gen_frame + 0x18));
      do {
        F_0056c4f0(((undefined4 *)(gen_frame + 0x8)),iVar7,puVar6);
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 2;
      } while (iVar7 < 10);
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))
                        (this,REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
      ppuVar5 = &(*(uint * PTR32 *)(gen_frame + 0x10));
      iVar7 = 1;
      do {
        ppuVar5 = ppuVar5 + -2;
        F_005a2670(ppuVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      puVar3 = &(*(uint *)(gen_frame + 0x68));
      iVar7 = 9;
      do {
        puVar3 = puVar3 + -2;
        F_005a2670(puVar3);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return (byte)uVar4;
    }
    break;
  case 2: ;
    if (param_3 == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = param_3 * 10;
    }
    puVar3 = (uint *)F_00ab2260(iVar7);
    (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar3;
    if (puVar3 != (uint *)0x0) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(undefined4 *)(gen_frame + 0x1c)) = 0x13;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
      (*(uint * PTR32 *)(gen_frame + 0x2c)) = (*(uint * PTR32 *)(gen_frame + 0x14)) + 0x3ca5;
      uVar4 = F_00460c80(this_00,0x763,(*(uint * PTR32 *)(gen_frame + 0x14)),param_3 + 1);
      F_0042e430((undefined *)((int)this + 0x22d40),uVar4);
      uVar4 = F_0042a990((int)this + 0x22d40);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
      (*(uint * PTR32 *)(gen_frame + 0x34)) = (uint *)uVar4;
      uVar4 = F_00460bd0(this_00,0x14,(*(uint * PTR32 *)(gen_frame + 0x10))[4]);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),6);
      (*(uint *)(gen_frame + 0x44)) = uVar4;
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      ((undefined4 *)(gen_frame + 0x8))[0] = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),4);
      (*(undefined4 *)(gen_frame + 0x4)) = 10;
      F_00594ec0(((undefined4 *)(gen_frame + 0x8)),10);
      iVar7 = 0;
      puVar6 = &(*(undefined4 *)(gen_frame + 0x18));
      do {
        F_0056c4f0(((undefined4 *)(gen_frame + 0x8)),iVar7,puVar6);
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 2;
      } while (iVar7 < 10);
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))
                        (this,REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
      ppuVar5 = &(*(uint * PTR32 *)(gen_frame + 0x10));
      iVar7 = 1;
      do {
        ppuVar5 = ppuVar5 + -2;
        F_005a2670(ppuVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      puVar3 = &(*(uint *)(gen_frame + 0x68));
      iVar7 = 9;
      do {
        puVar3 = puVar3 + -2;
        F_005a2670(puVar3);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return (byte)uVar4;
    }
    break;
  case 3: ;
    puVar3 = (uint *)F_00ab3d80((*(uint * PTR32 *)(gen_frame + 0x14)));
    (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar3;
    if ((puVar3 != (uint *)0x0) && (param_3 < 4)) {
      puVar3 = (uint *)F_00ab3db0((uint)*(ushort *)((int)puVar3 + param_3 * 2 + 8));
      (*(uint * PTR32 *)(gen_frame + 0x14)) = puVar3;
      if (puVar3 != (uint *)0x0) {
        uVar4 = F_0043bf60(2,(uint)(ushort)*puVar3);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
        (*(undefined4 *)(gen_frame + 0x1c)) = 0x11;
        (*(uint * PTR32 *)(gen_frame + 0x14)) = (uint *)(uint)*(ushort *)((int)(*(uint * PTR32 *)(gen_frame + 0x14)) + 2);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
        (*(uint * PTR32 *)(gen_frame + 0x2c)) = (*(uint * PTR32 *)(gen_frame + 0x14));
        (*(uint * PTR32 *)(gen_frame + 0x10)) = ((uint *)GEN_TOP(((*(*(uint * PTR32 *)(gen_frame + 0x10)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x10)))));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
        (*(uint * PTR32 *)(gen_frame + 0x34)) = (*(uint * PTR32 *)(gen_frame + 0x10));
        uVar4 = F_00460bd0(this_00,0x7e9,uVar4);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),6);
        (*(uint *)(gen_frame + 0x44)) = uVar4;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x60)),4);
        (*(uint * PTR32 *)(gen_frame + 0x64)) = (uint *)param_3;
        (*(undefined4 *)(gen_frame + 0x0)) = 0;
        ((undefined4 *)(gen_frame + 0x8))[0] = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),4);
        (*(undefined4 *)(gen_frame + 0x4)) = 10;
        F_00594ec0(((undefined4 *)(gen_frame + 0x8)),10);
        iVar7 = 0;
        puVar6 = &(*(undefined4 *)(gen_frame + 0x18));
        do {
          F_0056c4f0(((undefined4 *)(gen_frame + 0x8)),iVar7,puVar6);
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 2;
        } while (iVar7 < 10);
        uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))
                          (this,REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
        ppuVar5 = &(*(uint * PTR32 *)(gen_frame + 0x10));
        iVar7 = 1;
        do {
          ppuVar5 = ppuVar5 + -2;
          F_005a2670(ppuVar5);
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
        puVar3 = &(*(uint *)(gen_frame + 0x68));
        iVar7 = 9;
        do {
          puVar3 = puVar3 + -2;
          F_005a2670(puVar3);
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
        F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
        return (byte)uVar4;
      }
    }
    break;
  case 4: ;
    puVar3 = (uint *)F_00ab3d80((*(uint * PTR32 *)(gen_frame + 0x14)));
    (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar3;
    if (puVar3 != (uint *)0x0) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(undefined4 *)(gen_frame + 0x1c)) = 0x12;
      uVar4 = F_00434d60(param_3);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
      (*(uint * PTR32 *)(gen_frame + 0x2c)) = (uint *)uVar4;
      iVar7 = (*(*(uint * PTR32 *)(gen_frame + 0x10)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x10));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
      (*(uint * PTR32 *)(gen_frame + 0x34)) = (uint *)iVar7;
      uVar4 = F_00460bd0(this_00,0x14,(*(uint * PTR32 *)(gen_frame + 0x10))[1]);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),6);
      (*(uint *)(gen_frame + 0x44)) = uVar4;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x60)),4);
      (*(uint * PTR32 *)(gen_frame + 0x64)) = (uint *)param_3;
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      ((undefined4 *)(gen_frame + 0x8))[0] = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),4);
      (*(undefined4 *)(gen_frame + 0x4)) = 10;
      F_00594ec0(((undefined4 *)(gen_frame + 0x8)),10);
      iVar7 = 0;
      puVar6 = &(*(undefined4 *)(gen_frame + 0x18));
      do {
        F_0056c4f0(((undefined4 *)(gen_frame + 0x8)),iVar7,puVar6);
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 2;
      } while (iVar7 < 10);
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))
                        (this,REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
      ppuVar5 = &(*(uint * PTR32 *)(gen_frame + 0x10));
      iVar7 = 1;
      do {
        ppuVar5 = ppuVar5 + -2;
        F_005a2670(ppuVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      puVar3 = &(*(uint *)(gen_frame + 0x68));
      iVar7 = 9;
      do {
        puVar3 = puVar3 + -2;
        F_005a2670(puVar3);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return (byte)uVar4;
    }
    break;
  case 5: ;
    if (param_3 == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = param_3 * 10;
    }
    puVar3 = (uint *)F_00ab2260(iVar7);
    (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar3;
    if (puVar3 != (uint *)0x0) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(undefined4 *)(gen_frame + 0x1c)) = 0x13;
      uVar4 = F_00434d60((*(uint * PTR32 *)(gen_frame + 0x14)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
      (*(uint * PTR32 *)(gen_frame + 0x2c)) = (uint *)uVar4;
      uVar4 = F_00460c80(this_00,0x764,(*(uint * PTR32 *)(gen_frame + 0x14)),param_3 + 1);
      F_0042e430((undefined *)((int)this + 0x22d40),uVar4);
      uVar4 = F_0042a990((int)this + 0x22d40);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
      (*(uint * PTR32 *)(gen_frame + 0x34)) = (uint *)uVar4;
      uVar4 = F_00460bd0(this_00,0x14,(*(uint * PTR32 *)(gen_frame + 0x10))[5]);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),6);
      (*(uint *)(gen_frame + 0x44)) = uVar4;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x60)),4);
      (*(uint * PTR32 *)(gen_frame + 0x64)) = (*(uint * PTR32 *)(gen_frame + 0x14));
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      ((undefined4 *)(gen_frame + 0x8))[0] = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),4);
      (*(undefined4 *)(gen_frame + 0x4)) = 10;
      F_00594ec0(((undefined4 *)(gen_frame + 0x8)),10);
      iVar7 = 0;
      puVar6 = &(*(undefined4 *)(gen_frame + 0x18));
      do {
        F_0056c4f0(((undefined4 *)(gen_frame + 0x8)),iVar7,puVar6);
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 2;
      } while (iVar7 < 10);
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))
                        (this,REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
      ppuVar5 = &(*(uint * PTR32 *)(gen_frame + 0x10));
      iVar7 = 1;
      do {
        ppuVar5 = ppuVar5 + -2;
        F_005a2670(ppuVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      puVar3 = &(*(uint *)(gen_frame + 0x68));
      iVar7 = 9;
      do {
        puVar3 = puVar3 + -2;
        F_005a2670(puVar3);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return (byte)uVar4;
    }
  }
  puVar3 = &(*(uint *)(gen_frame + 0x68));
  iVar7 = 9;
  do {
    puVar3 = puVar3 + -2;
    F_005a2670(puVar3);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return 0;
}

/* ref: FUN_00760130 */
uint F_00760130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x760130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,9);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,8);
  uVar3 = uVar2;
  if ((uVar1 != 0) && (uVar2 != 0)) {
    if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x150))) != param_1) {
      *((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x150))) = param_1;
      *(undefined1 *)(uVar1 + 0x1d) = 1;
    }
    if (*((undefined * PTR32 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x138))) != &REFG(undefined, 0x10bda7d)) {
      *((undefined * PTR32 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x138))) = &REFG(undefined, 0x10bda7d);
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0x474;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x18))))
                                (*(int * PTR32 *)((int)this + 0x23184))));
    uVar3 = F_0043bd00(this_00,uVar4,uVar5,uVar6);
    if (uVar3 != *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x134)))) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x134))) = uVar3;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  return uVar3;
}

/* ref: FUN_007601d0 */
uint F_007601d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7601d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),4);
  (*(uint *)(gen_frame + 0x4)) = param_1 | 0x20;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(undefined4 *)(gen_frame + 0xc)) = 0x80;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,REFG(undefined * PTR32, 0x1327ffc),3,&(*(undefined4 *)(gen_frame + 0x0)),0,0,0);
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_00760260 */
uint F_00760260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x760260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),4);
  (*(uint *)(gen_frame + 0x4)) = param_1 | 0x20;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(undefined4 *)(gen_frame + 0xc)) = 0x100;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,REFG(undefined * PTR32, 0x1327ffc),3,&(*(undefined4 *)(gen_frame + 0x0)),0,0,0);
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_007602f0 */
uint F_007602f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7602f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),4);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  if ((char)param_2 != '\0') {
    param_1 = param_1 | 1;
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(uint *)(gen_frame + 0x14)) = param_1;
  ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,REFG(undefined * PTR32, 0x1327ffc),3,&(*(undefined4 *)(gen_frame + 0x0)),0,0,0);
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_007603b0 */
uint F_007603b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7603b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x23330) + 0x40))))
                    ((int *)((int)this + 0x23330),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_007603d0 */
uint F_007603d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7603d0u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  undefined * PTR32 * ppuVar6;
  bool bVar7;
  
  iVar2 = 0;
  ppuVar6 = &REFG(undefined * PTR32, 0x1327318);
  do {
    pbVar3 = *ppuVar6;
    pbVar5 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00760404: ;
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00760409;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00760404;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00760409: ;
    if (iVar4 == 0) {
      return (uint)(&REFG(undefined * PTR32, 0x1327318) + iVar2 * 4);
    }
    ppuVar6 = ppuVar6 + 4;
    iVar2 = iVar2 + 1;
    if (0x1327fe7 < (int)ppuVar6) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00760440 */
uint F_00760440(unsigned int gen_a0)
{
  GEN_ENTER(0x760440u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x22: ;
  case 0x25: ;
    return 0x7d5;
  case 0x23: ;
    return REFG(undefined4, 0x14a4258);
  case 0x24: ;
    return 0x7d4;
  case 0x26: ;
    return 0x7d1;
  case 0x2e: ;
    return 0x2ee1;
  case 0x2f: ;
    return 0x7d9;
  case 0x30: ;
    return 0x2ee2;
  case 0x43: ;
    return 0x55f1;
  }
  if (7 < param_1 - 0x27) {
    if (param_1 - 4 < 2) {
      return param_1 + 0x3e4;
    }
    if (param_1 < 0x31) {
      if (param_1 < 0x3e) {
        return param_1;
      }
    }
    else if (param_1 < 0x3e) {
      uVar1 = F_00434e60(param_1 - 0x31);
      return uVar1;
    }
    uVar1 = param_1;
    if (param_1 < 0x43) {
      uVar1 = param_1 + 0x4de2;
    }
    return uVar1;
  }
  return param_1 + 0x26e9;
}

/* ref: FUN_00760530 */
uint F_00760530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x760530u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x18a);
  if ((bVar1 == 0) || (uVar3 = F_00ab3bd0((uint)bVar1), uVar3 == 0)) {
    return 0xffffffff;
  }
  if (((bVar1 != 1) && (((bVar1 != 2 && (bVar1 != 3)) && (bVar1 != 4)))) &&
     ((bVar1 != 5 && (bVar1 != 0xc)))) {
    if (param_2 != 0) {
      uVar2 = *(uint *)(param_1 + 0xe4);
      if (uVar2 == param_2) {
        return 0xf042;
      }
      if ((uVar2 != 0) && (uVar2 >> 0x10 == param_2 >> 0x10)) {
        return 0xf043;
      }
    }
    if (((bVar1 == 0x1d) || (bVar1 == 0x1e)) && ((*(byte *)(param_1 + 0x2dd2) & 0x10) == 0)) {
      return 0xffffffff;
    }
    if (bVar1 == 0x23) {
      return 0xffffffff;
    }
  }
  return *(uint *)(uVar3 + 4);
}

/* ref: FUN_007605d0 */
uint F_007605d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7605d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ab25a0(param_1);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if ('\0' < *(char *)(uVar1 + 4 + uVar2)) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0xe);
  }
  return 0xffffffff;
}

/* ref: FUN_00760600 */
uint F_00760600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x760600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_2;
  if ((param_2 == 0) && (uVar1 = F_00ab24a0(param_1), uVar1 == 0)) {
    return 0xffffffff;
  }
  uVar1 = F_00ab25d0((uint)*(byte *)(uVar1 + 0xa1));
  if (uVar1 == 0) {
    return 0xffffffff;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00760640 */
uint F_00760640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x760640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined * this;
  
  if ((param_2 == (undefined *)0x0) ||
     ((*(char *)((int)param_2 + 6) == '\0' && (*(int *)((int)param_2 + 8) == 0)))) {
    return 0;
  }
  if ((char)param_1 == '\0') {
    uVar2 = F_00a3a8a0(param_2);
    return (uVar2 < param_3) + 4;
  }
  if ((*(char *)((int)param_2 + 6) == '\0') || (uVar2 = F_00a3a860(param_2), uVar2 == 0)) {
    uVar1 = *(ushort *)((int)param_2 + 0x12);
  }
  else {
    this = (undefined *)F_00a3a860(param_2);
    uVar1 = F_00906d60(this);
  }
  if (uVar1 != 0) {
    uVar1 = F_0071d210(param_2);
    return 2 - (uVar1 < 10000);
  }
  return 3;
}

/* ref: FUN_007606c0 */
uint F_007606c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7606c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if (((char)param_1 != '\0') && (uVar1 = F_00a35d00(param_2), uVar1 != 1)) {
    if (uVar1 == 2) {
      return 9;
    }
    return 8;
  }
  return 7;
}

/* ref: FUN_00760700 */
uint F_00760700(unsigned int gen_a0)
{
  GEN_ENTER(0x760700u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab3c60(param_1 & 0xff);
  if (puVar1 != (uint *)0x0) {
    return *puVar1;
  }
  return 0;
}

/* ref: FUN_00760720 */
uint F_00760720(unsigned int gen_a0)
{
  GEN_ENTER(0x760720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  int iVar2;
  
  if ((param_1 != 0) && (uVar1 = F_00a62220(param_1), (char)uVar1 != '\0')) {
    iVar2 = *(byte *)(param_1 + 0x2ecd) - 1;
    if ((*(byte *)(param_1 + 0x2dd2) & 1) != 0) {
      switch((unsigned int)(uintptr_t)(iVar2)) {
      case 0: ;
        return 0xf10e;
      case 1: ;
        return 0xf110;
      case 2: ;
        return 0xf10c;
      case 3: ;
      case 4: ;
        return 0xf10d;
      case 5: ;
        return 0xf10f;
      default: ;
        return 0xf10b;
      }
    }
    switch((unsigned int)(uintptr_t)(iVar2)) {
    case 0: ;
      return 0xf108;
    case 1: ;
      return 0xf10a;
    case 2: ;
      return 0xf106;
    case 3: ;
    case 4: ;
      return 0xf107;
    case 5: ;
      return 0xf109;
    default: ;
      return 0xf105;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00760800 */
uint F_00760800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x760800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if ((char)param_4 == '\0') {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x7f3;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x18))))
                                (*(int * PTR32 *)((int)this + 0x23184))));
    uVar1 = F_0043bd00(this_00,uVar3,uVar4,uVar5);
  }
  else {
    if ((char)param_3 != '\0') {
      uVar1 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10bf77c));
      F_0042ccf0(param_1,uVar1);
      uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return (uint)uVar2;
    }
    uVar1 = F_00435340(param_2);
  }
  uVar1 = F_0042e430(param_1,uVar1);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_007608a0 */
byte F_007608a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7608a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (param_1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    if (uVar2 == 1) {
      bVar1 = F_00a9f620(param_1);
      if (bVar1 == 0) {
        bVar1 = F_00a620a0();
        if (bVar1 != 0) {
          uVar2 = F_00a62220(param_1);
          if ((char)uVar2 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_007608f0 */
byte F_007608f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7608f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  cVar3 = REFG(char, 0x14ab2dc);
  if (param_2 != 0) {
    uVar2 = F_00a62220(param_2);
    if (((char)uVar2 != '\0') && (bVar1 = F_00a9f620(param_2), bVar1 == 0)) {
      if (cVar3 == '\0') {
        cVar3 = '\x01';
      }
      else {
        bVar4 = cVar3 == '\x01';
        cVar3 = -1;
        if (bVar4) {
          cVar3 = '\0';
        }
      }
    }
    if (cVar3 == '\0') {
      uVar5 = 0xda2;
    }
    else {
      if (cVar3 != '\x01') goto LAB_0076097c;
      uVar5 = 0xda3;
    }
    uVar6 = 0;
    uVar7 = uVar6;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x18))))
                                (*(int * PTR32 *)((int)this + 0x23184))));
    uVar2 = F_0043bd00(this_00,uVar5,uVar6,uVar7);
    F_0042e430(param_1,uVar2);
    return 1;
  }
LAB_0076097c: ;
  F_0042e430(param_1,&REFG(undefined, 0x10bda96));
  return 0;
}

/* ref: FUN_007609a0 */
byte F_007609a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7609a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc);
  if (param_2 != 0) {
    F_00c49908(((undefined1 *)(gen_frame + 0x0)),6,param_2 + 0x166c);
    (*(undefined1 *)(gen_frame + 0x6)) = 0;
    F_0042e430(param_1,((undefined1 *)(gen_frame + 0x0)));
    F_00c47745((*(uint *)(gen_frame + 0x8)) ^ (uint)(uint)(gen_frame + 0xc));
    return 1;
  }
  F_0042e430(param_1,&REFG(undefined, 0x10bda97));
  F_00c47745((*(uint *)(gen_frame + 0x8)) ^ (uint)(uint)(gen_frame + 0xc));
  return 0;
}

/* ref: FUN_00760a10 */
uint F_00760a10(unsigned int gen_a0)
{
  GEN_ENTER(0x760a10u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined * this;
  int * piVar4;
  
  piVar1 = REFG(int * PTR32, 0x1379694);
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 1: ;
    if (piVar1 == param_1) {
      return 1;
    }
    uVar3 = F_00a5f290(param_1);
    if ((*(byte *)(uVar3 + 0x2dd2) & 0x10) != 0) {
      return 2;
    }
    bVar2 = F_007608a0(uVar3);
    return (bVar2 != 0) + 3;
  case 2: ;
    break;
  case 3: ;
    return 0xb;
  default: ;
    return 0;
  case 9: ;
    return 0xc;
  }
  this = (undefined *)F_00a5f290(param_1);
  if (*(char *)((int)this + 0x188) == '\x02') {
    return 6;
  }
  bVar2 = F_00a62270(this);
  if (bVar2 == 0) {
    uVar3 = F_00a64450(&REFG(undefined, 0x14a9a18),*(undefined4 *)((int)this + 0x2ed8));
    if ((uVar3 == 0) || (bVar2 = F_007608a0(uVar3), bVar2 == 0)) {
      if ((*(byte *)((int)this + 0x2dd2) & 2) == 0) {
        return 5;
      }
      bVar2 = F_00a9fd60(this);
      if (bVar2 == 0) {
        bVar2 = F_00a9fdb0(this);
        return 9 - (bVar2 != 0);
      }
    }
    return 7;
  }
  piVar4 = (int *)F_00a35490(&REFG(undefined4, 0x14a31f0),*(undefined4 *)((int)this + 0x2ed8));
  bVar2 = F_0054c430(this);
  if (bVar2 != 0) {
    return (uint)(piVar4 != piVar1) * 2 + 0xd;
  }
  bVar2 = F_0054c460(this);
  if (bVar2 != 0) {
    return (uint)(piVar4 != piVar1) * 2 + 0xe;
  }
  return 10;
}

/* ref: FUN_00760b90 */
uint F_00760b90(unsigned int gen_a0)
{
  GEN_ENTER(0x760b90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x148a070) + param_1 * 8);
}

/* ref: FUN_00760bb0 */
ulonglong F_00760bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x760bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0x16: ;
  case 0x17: ;
  case 0x18: ;
  case 0x21: ;
  case 0x22: ;
  case 0x23: ;
    return 0xffe2ffe9ff005d2a;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1d: ;
    return 0xffd4d4d4ff454545;
  }
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return 0xffffffffff000000;
  case 1: ;
  case 2: ;
    return 0xfffff6e5ffa8383c;
  case 3: ;
    return 0xffbfbdffff0000a4;
  default: ;
    return 0;
  }
}

/* ref: FUN_00760c50 */
uint F_00760c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x760c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
  case 1: ;
  case 2: ;
  case 8: ;
  case 10: ;
  case 0xb: ;
  case 0x12: ;
  case 0x1c: ;
    break;
  case 3: ;
  case 4: ;
  case 5: ;
  case 6: ;
  case 9: ;
  case 0x10: ;
  case 0x19: ;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1d: ;
  case 0x1f: ;
  case 0x20: ;
  case 0x24: ;
    return 0xff454545;
  case 7: ;
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0x13: ;
  case 0x16: ;
  case 0x17: ;
  case 0x18: ;
  case 0x21: ;
  case 0x22: ;
  case 0x23: ;
    return 0xff005d2a;
  default: ;
    return 0;
  case 0x11: ;
    return 0xffb57c09;
  case 0x14: ;
    return 0xffb98700;
  case 0x15: ;
    return 0xff0681b5;
  case 0x1e: ;
    return 0xff0061e3;
  }
  if (((param_3 != 0) && (param_3 != 1)) && (param_3 != 2)) {
    return (param_3 != 3) - 1 & 0xff0061e3;
  }
  return 0xff00008a;
}

/* ref: FUN_00760d10 */
uint F_00760d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x760d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined * this_00;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)((int)this + 0x292d0);
  iVar3 = 0x12;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x1c;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = *(int *)((int)param_1 + 0xc);
  pvVar2 = param_1;
  if (0 < iVar3) {
    iVar4 = 0;
    do {
      this_00 = (undefined *)F_00a37da0(param_1,iVar4);
      pvVar2 = (undefined *)0x0;
      if (this_00 != (undefined *)0x0) {
        if (*(char *)((int)this_00 + 6) == '\0') {
          pvVar2 = *(undefined * PTR32 *)((int)this_00 + 8);
          if ((*(byte *)((int)this_00 + 0x14) & 1) != 0) {
            pvVar2 = (undefined *)((int)pvVar2 + 1000000);
          }
        }
        else {
          pvVar2 = (undefined *)F_00a3a860(this_00);
          pvVar2 = (undefined *)F_0046e5e0(pvVar2);
        }
        if ((int)pvVar2 - 2U < 0x12) {
          pvVar2 = ((undefined *)GEN_TOP((((int)pvVar2 - 2U) * 0x70)));
          *(undefined * PTR32 *)((int)pvVar2 + 0x292d0U + (int)this) = this_00;
          *(int *)((int)pvVar2 + 0x292d4U + (int)this) = iVar4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return (uint)pvVar2;
}

/* ref: Client::UI2::RaptureAtkModule::ItemCache::vf1 */
uint F_00760da0(unsigned int gen_a0)
{
  GEN_ENTER(0x760da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 0x58) != 0) {
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined2 *)(this + 100) = 0;
    *(undefined4 *)(this + 0x5c) = 0xffffffff;
    *(undefined4 *)(this + 0x60) = 0;
    uVar1 = F_0042ccf0(this + 4,&REFG(undefined * PTR32, 0x12fd328));
  }
  return uVar1;
}

/* ref: Client::UI2::RaptureAtkModule::ItemCache::vf2 */
uint F_00760dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x760dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ab6240(param_1,0,param_2);
  F_0042e430(this + 4,uVar1);
  uVar1 = F_00ab65a0(param_1,param_2);
  *(uint *)(this + 0x5c) = uVar1;
  this[100] = *(undefined *)(param_2 + 0xa6);
  this[0x66] = *(undefined *)(param_2 + 0x9f);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_2 + 0x28);
  if (*(char *)(param_2 + 0xa0) == '\x0f') {
    this[0x65] = *(undefined *)(param_2 + 0x2c);
  }
  else if (*(char *)(param_2 + 0xba) != '\0') {
    this[0x65] = (undefined1)0xff;
  }
  if (**(char * PTR32 *)(this + 4) != '\0') {
    *(undefined4 *)(this + 0x58) = param_1;
  }
  return (uint)*(char * PTR32 *)(this + 4);
}

/* ref: FUN_00760e50 */
byte F_00760e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x760e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  
  bVar1 = *(byte *)((int)this + 0x65);
  if (bVar1 == 0xff) {
    if (*(char *)((int)param_1 + 6) != '\0') {
      uVar2 = F_00a3a860(param_1);
      if (uVar2 != 0) {
        this_00 = (undefined *)F_00a3a860(param_1);
        bVar1 = F_0046e590(this_00);
        return bVar1;
      }
    }
    bVar1 = *(byte *)((int)param_1 + 0x2f);
  }
  return bVar1;
}

/* ref: Client::UI2::RaptureAtkModule::InventoryCache::vf2 */
byte F_00760e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x760e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 IVar1;
  byte bVar2;
  
  F_00760dd0((undefined *)this,param_1,param_2);
  bVar2 = F_00a6b6c0(param_2);
  this[0x6d] = (undefined1)((byte)this[0x6d] ^ ((byte)this[0x6d] ^ bVar2) & 1);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_2 + 0x3c);
  IVar1 = *(undefined *)(param_2 + 0x9e);
  this[0x6c] = IVar1;
  return (byte)IVar1;
}

/* ref: Client::UI2::RaptureAtkModule::InventoryCache::vf1 */
unsigned int F_00760ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x760ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x58) != 0) {
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined2 *)(this + 100) = 0;
    *(undefined4 *)(this + 0x5c) = 0xffffffff;
    *(undefined4 *)(this + 0x60) = 0;
    F_0042ccf0(this + 4,&REFG(undefined * PTR32, 0x12fd328));
    this[0x6d] = (undefined1)((byte)this[0x6d] & 0xfe);
    *(undefined4 *)(this + 0x68) = 0;
    this[0x6c] = (undefined1)0x0;
  }
  return 0;
}

/* ref: FUN_00760f10 */
uint F_00760f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x760f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    *(undefined4 *)this = 9999;
    *(undefined2 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    return 0;
  }
  *(undefined4 *)this = *param_1;
  *(undefined2 *)((int)this + 4) = *(undefined2 *)(param_1 + 1);
  if (*(char *)((int)param_1 + 6) != '\0') {
    this_00 = (undefined *)F_00a3a860(param_1);
    uVar1 = F_0046e5e0(this_00);
    *(uint *)((int)this + 8) = uVar1;
    *(uint *)((int)this + 0xc) = param_2;
    return param_2;
  }
  iVar2 = param_1[2];
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    iVar2 = iVar2 + 1000000;
  }
  *(int *)((int)this + 8) = iVar2;
  *(uint *)((int)this + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_00760f80 */
uint F_00760f80(unsigned int gen_a0)
{
  GEN_ENTER(0x760f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a3a150(&REFG(undefined, 0x14a4230),*(undefined4 *)this,(int)*(short *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00760fa0 */
uint F_00760fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x760fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  undefined4 in_esi = (undefined4)gen_a2;
  undefined4 in_edi = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined * this;
  undefined * pvVar5;
  undefined * pvVar6;
  undefined * this_00;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int * piVar11;
  uint * puVar12;
  int * piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_10;
  
  uVar4 = ((code *)*(gen_code32 *)(*in_ecx + 0x24))(in_ecx,7);
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*in_ecx + 0x28))(in_ecx,6)));
  local_30 = 0;
  local_34 = 0;
  local_1c = 0;
  local_2c = 0;
  local_38 = 0xfbc;
  do {
    local_28 = 0;
    pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),local_2c);
    piVar13 = *(int * PTR32 *)((int)in_ecx + local_38 + 0x2829c);
    if ((pvVar5 != (undefined *)0x0) && (piVar13 != (int *)0x0)) {
      iVar2 = *(int *)((int)pvVar5 + 0xc);
      local_24 = 0;
      if (0 < iVar2) {
        local_10 = local_34 * 4 + 0xc;
        local_34 = local_34 + iVar2 * 5;
        do {
          pvVar6 = (undefined *)F_00a37da0(pvVar5,local_24);
          if (pvVar6 == (undefined *)0x0) {
LAB_00761257: ;
            ((code *)*(gen_code32 *)(*piVar13 + 4))(piVar13);
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -0xc + local_10))) != 0) {
              *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + -0xc + local_10))) = 0;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -4 + local_10))) != 0) {
              *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + -4 + local_10))) = 0;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_10))) != 0) {
              *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_10))) = 0;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + local_10))) != 0) {
              *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + local_10))) = 0;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            uVar7 = F_0042a990(piVar13 + 1);
            if (uVar7 != *((uint *)GEN_TOP((*(int *)((int)this + 0x20) + local_1c * 4)))) {
              *((uint *)GEN_TOP((*(int *)((int)this + 0x20) + local_1c * 4))) = uVar7;
              *(undefined1 *)((int)this + 0x1d) = 1;
            }
          }
          else {
            if (*(char *)((int)pvVar6 + 6) == '\0') {
              if (*(int *)((int)pvVar6 + 8) == 0) goto LAB_00761257;
              uVar7 = *(uint *)((int)pvVar6 + 8);
              if ((*(byte *)((int)pvVar6 + 0x14) & 1) != 0) {
                uVar7 = uVar7 + 1000000;
              }
            }
            else {
              this_00 = (undefined *)F_00a3a860(pvVar6);
              uVar7 = F_0046e5e0(this_00);
            }
            uVar8 = F_00a3a8a0(pvVar6);
            uVar9 = F_00a37c50(pvVar6);
            local_20 = 0;
            if (piVar13[0x16] != uVar7) {
              ((code *)*(gen_code32 *)(*piVar13 + 4))(piVar13);
              if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + local_10))) != 0) {
                *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + local_10))) = 0;
                *(undefined1 *)(uVar4 + 0x1d) = 1;
              }
              uVar10 = F_00ab24a0(uVar7);
              if (uVar10 != 0) {
                ((code *)*(gen_code32 *)(*piVar13 + 8))(piVar13,uVar7,uVar10);
              }
            }
            uVar10 = F_00760640((uint)*(byte *)(piVar13 + 0x19),pvVar6,piVar13[0x18]);
            local_18 = 7;
            if ((char)piVar13[0x19] != '\0') {
              uVar7 = F_00a35d00(uVar7);
              if (uVar7 == 1) {
                local_18 = 7;
              }
              else if (uVar7 == 2) {
                local_18 = 9;
              }
              else {
                local_18 = 8;
              }
            }
            bVar1 = *(byte *)((int)piVar13 + 0x65);
            uVar7 = (uint)bVar1;
            if (bVar1 != 0) {
              if (bVar1 == 0xff) {
                if ((*(char *)((int)pvVar6 + 6) == '\0') ||
                   (uVar7 = F_00a3a860(pvVar6), uVar7 == 0)) {
                  uVar7 = (uint)*(byte *)((int)pvVar6 + 0x2f);
                }
                else {
                  pvVar6 = (undefined *)F_00a3a860(pvVar6);
                  bVar3 = F_0046e590(pvVar6);
                  uVar7 = (uint)bVar3;
                }
              }
              piVar11 = (int *)F_00ab3c60(uVar7);
              if (piVar11 == (int *)0x0) {
                local_20 = 0;
              }
              else {
                local_20 = *piVar11;
              }
            }
            uVar7 = (uint)(bVar1 != 0) | local_20 * 2;
            if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + local_10))) != uVar7) {
              *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + local_10))) = uVar7;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -0xc + local_10))) != piVar13[0x17]) {
              *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -0xc + local_10))) = piVar13[0x17];
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            uVar7 = uVar8 << 0x10 | (uint)*(byte *)(piVar13 + 0x19);
            if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + -4 + local_10))) != uVar7) {
              *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + -4 + local_10))) = uVar7;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            puVar12 = ((uint *)GEN_TOP((local_10 + *(int *)(uVar4 + 0x20))));
            uVar7 = *puVar12;
            uVar8 = ((((int)uVar7 >> 0x18 & 0xffU) << 8 | local_18) << 8 | (uint)(uVar9 != 0)) << 8
                    | uVar10 & 0xff;
            if (uVar7 != uVar8) {
              *puVar12 = uVar8;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            uVar7 = F_0042a990(piVar13 + 1);
            if (uVar7 != *((uint *)GEN_TOP((*(int *)((int)this + 0x20) + local_1c * 4)))) {
              *((uint *)GEN_TOP((*(int *)((int)this + 0x20) + local_1c * 4))) = uVar7;
              *(undefined1 *)((int)this + 0x1d) = 1;
            }
            local_30 = local_30 + 1;
            local_28 = local_28 + 1;
          }
          local_10 = local_10 + 0x14;
          local_1c = local_1c + 1;
          local_24 = local_24 + 1;
          piVar13 = piVar13 + 0x1c;
        } while (local_24 < iVar2);
      }
    }
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_38))) != local_28) {
      *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_38))) = local_28;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    uVar16 = 0;
    uVar15 = 1;
    uVar14 = 0;
    uVar7 = F_004352e0(local_28);
    F_00431250(this,local_2c + 0x119,uVar7,uVar14,uVar15,uVar16);
    local_38 = local_38 + 4;
    local_2c = local_2c + 1;
    if (0xfc8 < local_38) {
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xfb8))) != local_30) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xfb8))) = local_30;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      uVar16 = 0;
      uVar15 = 1;
      uVar14 = 0;
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)in_ecx[0x8c61] + 0x18))
                                 ((int *)in_ecx[0x8c61],0x7fc,local_30,in_ecx[0xb6d4])));
      uVar4 = F_00461c60(pvVar5,uVar14,uVar15,uVar16);
      uVar4 = F_00431250(this,0x10c,uVar4,in_edi,in_esi,in_ebx);
      return uVar4;
    }
  } while( true );
}

/* ref: FUN_00761640 */
uint F_00761640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x761640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  int local_14;
  int local_10;
  int local_c;
  
  uVar2 = F_00a36f30(&REFG(undefined, 0x14a4230),0x7d1);
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,7);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,6);
    F_00760d10(this,uVar2);
    local_10 = 2;
    local_14 = 1000;
    local_c = 0xee4;
    puVar7 = (undefined4 *)((int)this + 0x292d0);
    do {
      if (puVar7[-4] != local_10) {
        ((code *)*(gen_code32 *)(puVar7[-0x1a] + 4))(puVar7 + -0x1a);
        uVar5 = F_00ab24a0(local_10);
        if (uVar5 != 0) {
          ((code *)*(gen_code32 *)(puVar7[-0x1a] + 8))(puVar7 + -0x1a,local_10,uVar5);
        }
      }
      uVar2 = 0;
      uVar6 = 0;
      uVar5 = 0xffff;
      if ((undefined *)*puVar7 != (undefined *)0x0) {
        uVar2 = F_00a3a8a0((undefined *)*puVar7);
        uVar2 = uVar2 << 0x10;
        uVar6 = F_00a37c50((undefined *)*puVar7);
        uVar5 = puVar7[1];
        uVar6 = (uint)(uVar6 != 0) * 0x10000;
      }
      piVar1 = ((int *)GEN_TOP((local_c + -4 + *(int *)(uVar3 + 0x20))));
      if (*piVar1 != puVar7[-3]) {
        *piVar1 = puVar7[-3];
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((local_c + 4 + *(int *)(uVar3 + 0x20)))) != (uVar5 | uVar6)) {
        *((uint *)GEN_TOP((local_c + 4 + *(int *)(uVar3 + 0x20)))) = uVar5 | uVar6;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_c))) != (*(byte *)(puVar7 + -1) | uVar2)) {
        *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_c))) = *(byte *)(puVar7 + -1) | uVar2;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      uVar5 = F_0042a990(puVar7 + -0x19);
      if (uVar5 != *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_14)))) {
        *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_14))) = uVar5;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      local_c = local_c + 0xc;
      local_14 = local_14 + 4;
      local_10 = local_10 + 1;
      puVar7 = puVar7 + 0x1c;
    } while (local_14 < 0x42d);
  }
  return uVar5;
}

/* ref: FUN_007617a0 */
uint F_007617a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7617a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int local_8;
  
  F_00c48350(*(undefined * PTR32 *)((int)this + 0x29200),0,*(int *)((int)this + 0x291fc) * 4);
  *(undefined4 *)((int)this + 0x291f8) = 0;
  puVar3 = (undefined4 *)((int)this + 0x235c0);
  puVar2 = (undefined4 *)((int)this + 0x2375c);
  local_8 = 0x32;
  do {
    *puVar3 = 0xe0000000;
    puVar3[1] = 0;
    puVar2[-3] = 0xe0000000;
    puVar2[-2] = 0;
    puVar2[-1] = 0xffffffff;
    *puVar2 = 0xffffffff;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined2 *)((int)puVar2 + 0x1bb) = 0;
    *(undefined1 *)((int)puVar2 + 0x1bd) = 0xff;
    *(undefined1 *)(puVar2 + 0x6d) = 0;
    F_0042e430(puVar2 + 0x19,&REFG(undefined1, 0x107fc63));
    puVar2[3] = 0;
    F_0042e430(puVar2 + 0x58,&REFG(undefined1, 0x107fc63));
    F_0042e430(puVar2 + 0x2e,&REFG(undefined1, 0x107fc63));
    uVar1 = F_0042e430(puVar2 + 0x43,&REFG(undefined1, 0x107fc63));
    puVar3 = puVar3 + 2;
    puVar2 = puVar2 + 0x74;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return uVar1;
}

/* ref: FUN_00761970 */
uint F_00761970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_10 = 0xffffffff;
  piVar3 = (int *)((int)this + 0x23750);
  uVar4 = 0;
  do {
    if ((*piVar3 == param_1) && (piVar3[1] == param_2)) {
      return (uint)piVar3;
    }
    uVar2 = local_10;
    if ((((*((uint *)GEN_TOP((*(int *)((int)this + 0x29200) + (uVar4 >> 5) * 4))) & 1 << ((byte)uVar4 & 0x1f))
          == 0) && (uVar2 = uVar4, *piVar3 == -0x20000000)) && (piVar3[1] == 0)) {
      uVar2 = local_10;
      local_c = uVar4;
    }
    local_10 = uVar2;
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 0x74;
  } while ((int)uVar4 < 0x32);
  uVar4 = local_c;
  if ((int)local_c < 0) {
    uVar4 = local_10;
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x29200) + (uVar4 >> 5) * 4)));
  *puVar1 = *puVar1 | 1 << ((byte)uVar4 & 0x1f);
  *(int *)((int)this + 0x291f8) = *(int *)((int)this + 0x291f8) + 1;
  return (uint)((undefined *)GEN_TOP(((uVar4 + 0x139) * 0x1d0 + (int)this)));
}

/* ref: FUN_00761a20 */
uint F_00761a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x761a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  
  if (((byte)param_2[4] & 0xf) == 4) {
    iVar1 = param_2[5];
    if (iVar1 == 0x14) {
      if ((((byte)*param_2 & 0xf) == 4) && (((byte)param_2[2] & 0xf) == 4)) {
        F_0046cc80(*(undefined * PTR32 *)((int)this + 0x2332c),param_2[1],param_2[3]);
      }
    }
    else if (iVar1 == 0x15) {
      if ((*(byte *)(param_2 + 2) & 0xf) == 0) {
        F_0046cca0(*(undefined * PTR32 *)((int)this + 0x2332c),0);
      }
      else {
        F_0046cca0(*(undefined * PTR32 *)((int)this + 0x2332c),param_2[3]);
      }
    }
    else if (iVar1 == 0x16) {
      if ((*(byte *)(param_2 + 2) & 0xf) == 0) {
        F_0046ccc0(*(undefined * PTR32 *)((int)this + 0x2332c),0);
      }
      else {
        F_0046ccc0(*(undefined * PTR32 *)((int)this + 0x2332c),param_2[3]);
      }
    }
  }
  *(byte *)((int)this + 0x230bf) = *(byte *)((int)this + 0x230bf) | 2;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761ad0 */
uint F_00761ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x761ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 == 4) {
    if ((((((byte)*param_2 & 0xf) == 4) && (((byte)param_2[2] & 0xf) == 4)) &&
        (((byte)param_2[4] & 0xf) == 4)) && (((byte)param_2[6] & 0xf) == 4)) {
      F_00458f70(*(undefined * PTR32 *)((int)this + 0x2332c),param_2[1],param_2[3],param_2[5],param_2[7]);
      *(byte *)((int)this + 0x230bf) = *(byte *)((int)this + 0x230bf) | 3;
    }
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761b40 */
uint F_00761b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 uVar1;
  
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  F_00a41750(&REFG(undefined, 0x14a4230),uVar1);
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761b70 */
uint F_00761b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) {
    uVar1 = F_005369a0(&REFG(undefined4, 0x1375b90));
    if (uVar1 != 0) {
      uVar1 = F_005339e0(&REFG(undefined4, 0x1375bc0));
      F_00a41df0(&REFG(undefined, 0x14a4230),*(undefined4 *)(uVar1 + 0x74));
    }
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761bc0 */
uint F_00761bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 uVar1;
  
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  F_00a3c780(&REFG(undefined, 0x14a4230),uVar1);
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761bf0 */
uint F_00761bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((*param_2 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 4);
    if (3 < uVar2) goto LAB_00761c67;
  }
  switch((unsigned int)(uintptr_t)(uVar2)) {
  default: ;
    F_00ae2920(&REFG(undefined * PTR32, 0x1338d48));
    *param_1 = 0;
    return (uint)param_1;
  case 1: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
      uVar3 = 1;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
      uVar3 = 1;
    }
    break;
  case 2: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
      uVar3 = 2;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
      uVar3 = 2;
    }
    break;
  case 3: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    uVar3 = 4;
  }
  F_00ae2d40(&REFG(undefined * PTR32, 0x1338d48),uVar3,uVar1);
LAB_00761c67: ;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761c90 */
uint F_00761c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  uVar2 = F_00760440(uVar1);
  if ((param_2[8] & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
  }
  if ((param_2[0x10] & 0xf) == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = (byte)*(undefined4 *)(param_2 + 0x14);
  }
  F_006d9570(uVar1,uVar2,(uint)(bVar3 & 1));
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761cf0 */
uint F_00761cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761d00 */
uint F_00761d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761d10 */
byte F_00761d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 == 0) {
    switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
    case 0: ;
    case 2: ;
switchD_00761d23_caseD_0: ;
      return 1;
    }
  }
  else if (*(int *)(param_2 + 0x1690) != 0) {
    switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
    case 0: ;
      goto switchD_00761d23_caseD_0;
    case 1: ;
      return *(byte *)(param_2 + 0x2dd2) >> 1 & 1;
    case 2: ;
      return *(int *)(param_2 + 0x1690) != *(int *)(param_2 + 0x1694);
    }
  }
  return 0;
}

/* ref: FUN_00761d90 */
byte F_00761d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 0: ;
    return 1;
  case 1: ;
    return *(byte *)(param_2 + 0x2dd2) >> 1 & 1;
  case 2: ;
    uVar1 = F_00533c90(&REFG(undefined4, 0x1375bc0));
    return uVar1 == param_2;
  default: ;
    return 0;
  }
}

/* ref: FUN_00761df0 */
uint F_00761df0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x761df0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 0: ;
    return 1;
  case 1: ;
    break;
  case 2: ;
    uVar1 = F_00533c90(&REFG(undefined4, 0x1375bc0));
    return CONCAT31((int3)(uVar1 >> 8),uVar1 == param_2);
  default: ;
    return 0;
  }
  if ((double)param_3 <= *(double *)&REFG(undefined, 0x1090710)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00761e60 */
uint F_00761e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x761e60u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  bool bVar1;
  byte bVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  undefined * pvVar6;
  sbyte sVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  
  this = (undefined *)F_00a5f290(param_2);
  uVar3 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar4 = ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
  (*(uint *)(gen_frame + 0xc)) = *(uint *)(param_1 + 0x235b0);
  (*(uint *)(gen_frame + 0x14)) = *(uint *)(param_1 + 0x235a8);
  uVar8 = 0xc00;
  cVar9 = '\x05';
  (*(uint *)(gen_frame + 0x8)) = 0;
  bVar1 = false;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 1: ;
    (*(uint *)(gen_frame + 0x14)) = *(uint *)(param_1 + 0x235a4);
    (*(uint *)(gen_frame + 0xc)) = *(uint *)(param_1 + 0x235ac);
    if (param_2 == param_3) goto LAB_00761ef0;
    if ((this == (undefined *)0x0) || ((*(byte *)((int)this + 0x2dd2) & 0x10) == 0)) {
      bVar2 = F_007608a0(this);
      if (bVar2 != 0) {
LAB_00761f28: ;
        (*(uint *)(gen_frame + 0x14)) = *(uint *)(param_1 + 0x235a8);
        (*(uint *)(gen_frame + 0xc)) = *(uint *)(param_1 + 0x235b0);
        goto LAB_00761f3a;
      }
LAB_00761f47: ;
      bVar1 = true;
      uVar8 = 0xc000;
      cVar9 = '\a';
    }
    else {
LAB_00761f0c: ;
      bVar1 = true;
      uVar8 = 0xc0;
      cVar9 = '\x03';
    }
    break;
  case 2: ;
    bVar1 = true;
    if ((uVar4 & 0xff) == 2) {
      (*(uint *)(gen_frame + 0x14)) = *(uint *)(param_1 + 0x235a4);
      (*(uint *)(gen_frame + 0xc)) = *(uint *)(param_1 + 0x235ac);
      if (this == (undefined *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)F_00a35490(&REFG(undefined4, 0x14a31f0),*(undefined4 *)((int)this + 0x2ed8));
      }
      if (piVar5 == param_3) {
        uVar8 = 0x30;
        cVar9 = '\x02';
      }
      else if (piVar5 != (int *)0x0) {
        uVar3 = F_00a5f290(piVar5);
        if ((uVar3 != 0) && ((*(byte *)(uVar3 + 0x2dd2) & 0x10) != 0))
        goto switchD_00761ecb_caseD_3;
        bVar2 = F_007608a0(uVar3);
        if (bVar2 != 0) goto LAB_00761f28;
        uVar8 = 0x30000;
        cVar9 = '\b';
      }
    }
    else if ((uVar4 & 0xff) == 3) {
      (*(uint *)(gen_frame + 0xc)) = *(uint *)(param_1 + 0x235ac);
      (*(uint *)(gen_frame + 0x14)) = *(uint *)(param_1 + 0x235a4);
      if (this == (undefined *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)F_00a35490(&REFG(undefined4, 0x14a31f0),*(undefined4 *)((int)this + 0x2ed8));
      }
      if (piVar5 == param_3) {
LAB_00761f3a: ;
        bVar1 = true;
        uVar8 = 0xc;
        cVar9 = '\x01';
      }
      else if (piVar5 != (int *)0x0) {
        uVar3 = F_00a5f290(piVar5);
        if ((uVar3 == 0) || ((*(byte *)(uVar3 + 0x2dd2) & 0x10) == 0)) goto LAB_00761f47;
        uVar8 = 0xc0;
        cVar9 = '\x03';
      }
    }
    else if (this == (undefined *)0x0) {
LAB_00761ef0: ;
      bVar1 = true;
      uVar8 = 3;
      cVar9 = '\0';
    }
    else {
      bVar2 = F_00a62270(this);
      if (bVar2 == 0) {
        if ((*(byte *)((int)this + 0x2dd2) & 2) == 0) goto LAB_00761ef0;
        bVar2 = F_00a9fd60(this);
        if (bVar2 != 0) goto LAB_00761f3a;
        bVar2 = F_00a9fdb0(this);
        if (bVar2 == 0) goto LAB_00761f0c;
        uVar8 = 0x30;
        cVar9 = '\x02';
      }
      else {
        uVar8 = 0x300;
        cVar9 = '\x04';
      }
    }
    break;
  case 3: ;
switchD_00761ecb_caseD_3: ;
    uVar8 = 0x300;
    cVar9 = '\x04';
    break;
  case 4: ;
  case 6: ;
    bVar1 = true;
    break;
  case 9: ;
    uVar8 = 0x3000;
    cVar9 = '\x06';
  }
  sVar7 = cVar9 * '\x02';
  if (this == (undefined *)0x0) {
    switch((unsigned int)(uintptr_t)((uVar8 & (*(uint *)(gen_frame + 0x14))) >> sVar7 & 0xff)) {
    case 0: ;
      break;
    case 1: ;
      if (!((double)param_4 <= *(double *)&REFG(undefined, 0x1090710))) goto switchD_007620d1_caseD_3;
      break;
    case 2: ;
      piVar5 = (int *)F_00533c90(&REFG(undefined4, 0x1375bc0));
      bVar10 = piVar5 == param_2;
      goto LAB_0076212a;
    default: ;
      goto switchD_007620d1_caseD_3;
    }
  }
  else {
    switch((unsigned int)(uintptr_t)((uVar8 & (*(uint *)(gen_frame + 0x14))) >> sVar7 & 0xff)) {
    case 0: ;
      goto switchD_007620d1_caseD_0;
    case 1: ;
      bVar10 = (bool)(*(byte *)((int)this + 0x2dd2) >> 1 & 1);
      break;
    case 2: ;
      pvVar6 = (undefined *)F_00533c90(&REFG(undefined4, 0x1375bc0));
      bVar10 = pvVar6 == this;
      break;
    default: ;
      goto switchD_007620d1_caseD_3;
    }
LAB_0076212a: ;
    if (bVar10 == false) goto switchD_007620d1_caseD_3;
  }
switchD_007620d1_caseD_0: ;
  (*(uint *)(gen_frame + 0x8)) = 1;
switchD_007620d1_caseD_3: ;
  if ((bVar1) &&
     (bVar2 = F_00761d10((uVar8 & (*(uint *)(gen_frame + 0xc))) >> sVar7,this,(undefined4)gen_fl2bits(param_4)),
     bVar2 != 0)) {
    return (*(uint *)(gen_frame + 0x8)) | 2;
  }
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_007621c0 */
byte F_007621c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7621c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  default: ;
    return 0;
  case 1: ;
    return 1;
  case 2: ;
    return 2;
  case 3: ;
    return 3;
  }
}

/* ref: FUN_00762200 */
byte F_00762200(unsigned int gen_a0)
{
  GEN_ENTER(0x762200u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = F_005339e0(&REFG(undefined4, 0x1375bc0));
  if (uVar1 == param_1) {
    return 0;
  }
  uVar1 = F_00533a30(&REFG(undefined4, 0x1375bc0));
  return uVar1 != param_1;
}

/* ref: FUN_00762230 */
byte F_00762230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x762230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar4 = 0;
  piVar5 = (int *)((int)this + 0x29258);
  do {
    uVar1 = F_00a36f30(&REFG(undefined, 0x14a4230),iVar4);
    iVar3 = *piVar5;
    if ((uVar1 != 0) && (iVar3 != 0)) {
      iVar2 = 0;
      if (0 < *(int *)(uVar1 + 0xc)) {
        do {
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x58) == param_1)) {
            return 1;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x70;
        } while (iVar2 < *(int *)(uVar1 + 0xc));
      }
    }
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar4 < 4);
  uVar1 = F_00a36f30(&REFG(undefined, 0x14a4230),0x7d4);
  if ((uVar1 != 0) && (iVar4 = *(int *)((int)this + 0x29a48), iVar4 != 0)) {
    iVar3 = 0;
    if (0 < *(int *)(uVar1 + 0xc)) {
      do {
        if ((iVar4 != 0) && (*(int *)(iVar4 + 0x58) == param_1)) {
          return 1;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x68;
      } while (iVar3 < *(int *)(uVar1 + 0xc));
    }
  }
  return 0;
}

/* ref: FUN_007622d0 */
uint F_007622d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7622d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 4) {
    return *(uint *)(in_ecx + 0x29258 + param_2 * 4);
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf5 */
uint F_007622f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7622f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_005b1090(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00762310 */
byte F_00762310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x762310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_0057f860(this,REFG(undefined * PTR32, 0x1328128));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1,param_1,param_2);
    if ((char)uVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf13 */
byte F_00762350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x762350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  if (*(char *)(REFG(int, 0x1379860) + 0x21d) != '\0') {
    if (((*(char *)(REFG(int, 0x1379860) + 0x21e) != '\0') && (((byte)this[0x1b0] & 8) != 0)) &&
       ((char)param_3 == '\0')) {
      bVar2 = F_00762310(this,param_1,param_2);
      return bVar2;
    }
    return 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0xd4);
  if ((piVar1 != (int *)0x0) &&
     (uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1,param_1,param_2), (char)uVar3 != '\0')) {
    return 1;
  }
  if (((((byte)this[0x1b0] & 8) != 0) && ((char)param_3 == '\0')) &&
     (bVar2 = F_00762310(this,param_1,param_2), bVar2 != 0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf23 */
uint F_007623f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7623f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short sVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  *(byte *)(param_1 + 0xf9) = *(byte *)(param_1 + 0xf9) & 0xef;
  *(int *)(this + 0x1e4) = param_1;
  bVar2 = F_00594d10(this,param_1,1);
  if (bVar2 != 0) {
    F_005aa060((undefined *)(REFG(int, 0x1379860) + 0x20c),0xe,0);
  }
  sVar1 = *((short *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x18) + 0xc5e)));
  iVar3 = (int)*((short *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x18) + 0xc5c)));
  *(int *)(this + 0x1e8) = iVar3;
  *(int *)(this + 0x1f0) = iVar3;
  uVar4 = (uint)sVar1;
  *(uint *)(this + 0x1ec) = uVar4;
  *(uint *)(this + 500) = uVar4;
  return uVar4;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf24 */
byte F_00762460(unsigned int gen_a0)
{
  GEN_ENTER(0x762460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00594d10(this,*(undefined4 *)(this + 0x1e4),0);
  *(undefined4 *)(this + 0x1e4) = 0;
  return bVar1;
}

/* ref: FUN_00762480 */
byte F_00762480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x762480u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int3 iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = F_00a34e80((*(undefined * PTR32 *)&gen_args[1]),0);
  uVar5 = F_00a34e80((*(undefined * PTR32 *)&gen_args[1]),1);
  bVar3 = F_00a34970((*(undefined * PTR32 *)&gen_args[1]),0x21);
  gen_piece_set(&(*(int *)(gen_frame + 0x8)), 0, 3, (unsigned long long)((uint3)bVar3 << 0x10));
  iVar2 = (int3)(*(int *)(gen_frame + 0x8));
  (*(int *)(gen_frame + 0x8)) = (uint)bVar3 << 0x10;
  bVar3 = F_00a34de0((*(undefined * PTR32 *)&gen_args[1]),0x21);
  if ((bVar3 != 0) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e4))) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))))((*(undefined * PTR32 *)&gen_args[0]));
    (*(int *)(gen_frame + 0x8)) = CONCAT13(1,iVar2);
  }
  if ((*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 2)) == '\0') goto LAB_00762561;
  if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x74))))((*(int * PTR32 *)&gen_args[2]));
    if ((char)uVar6 != '\0') goto LAB_00762561;
    if ((*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x3e))) & 0x80) == 0) {
      if ((char)(*(uint *)&gen_args[4]) == '\0') {
        F_0059b860((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[2]),0);
      }
      (*(int *)(gen_frame + 0x8)) = 0x1000000;
    }
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x60))))((*(int * PTR32 *)&gen_args[2]),uVar4,uVar5);
    if ((char)uVar6 != '\0') {
      (*(int *)(gen_frame + 0x8)) = 0x1000000;
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))))((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[2]));
      goto LAB_00762561;
    }
    if ((*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 3)) != '\0') goto LAB_00762561;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x68))))((*(int * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
    if ((char)uVar6 != '\0') goto LAB_00762561;
  }
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) & 8) != 0) {
    F_0059b860((*(undefined * PTR32 *)&gen_args[0]),0,0);
  }
LAB_00762561: ;
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e4)));
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0xf8) & 8) != 0) {
      uVar6 = (uint)(short)((short)uVar4 - *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f0))));
      uVar7 = (int)uVar6 >> 0x1f;
      if ((2 < (int)((uVar6 ^ uVar7) - uVar7)) ||
         (uVar6 = (uint)(short)((short)uVar5 - *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 500)))),
         uVar7 = (int)uVar6 >> 0x1f, 2 < (int)((uVar6 ^ uVar7) - uVar7))) {
        *(byte *)(iVar1 + 0xf9) = *(byte *)(iVar1 + 0xf9) | 0x10;
      }
      (*(int * PTR32 *)&gen_args[2]) = (int *)(uint)(ushort)((short)uVar5 - *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ec))));
      (*(uint *)&gen_args[4]) = (uint)(ushort)((short)uVar4 - *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e8))));
      uVar4 = F_00572ff0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e4))),&(*(uint *)&gen_args[4]),&(*(int * PTR32 *)&gen_args[2]));
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e8))) + (int)(short)(*(uint *)&gen_args[4]);
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ec))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ec))) + (int)(short)(*(int * PTR32 *)&gen_args[2]);
      if (uVar4 != 0) {
        F_00a34100((*(undefined * PTR32 *)&gen_args[1]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e8))),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ec))));
      }
      return 1;
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e4))) = 0;
  }
  return (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 3));
}

/* ref: FUN_00762630 */
unsigned int F_00762630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x762630u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  code * pcVar2;
  uint uVar3;
  
  uVar1 = param_1[0x42];
  if ((uVar1 & 0xe00003f) == 0) {
    uVar3 = (uint)param_1[0x3d] >> 0x14 & 0xf;
    if ((char)param_2 == '\0') {
      if ((uVar3 == 3) || (uVar3 == 2)) {
        if ((uVar1 >> 0x18 & 1) != 0) {
          ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1,param_3,0);
          param_1[0x48] = param_1[0x48] | 2;
          return 0;
        }
        if ((*(byte *)((int)param_1 + 0xf9) & 4) == 0) {
          (*(undefined4 *)(gen_frame + 0x4)) = 3;
          (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
          F_005a9110(param_1,1,&(*(undefined4 *)(gen_frame + 0x4)));
          F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
          return 0;
        }
      }
    }
    else if ((((uVar3 == 5) || (uVar3 == 4)) && ((uVar1 >> 0x18 & 1) != 0)) &&
            (((uint)param_1[0x48] >> 1 & 1) != 0)) {
      pcVar2 = *(gen_code32 *)(*param_1 + 0x14);
      param_1[0x48] = param_1[0x48] | 0x2000;
      (*pcVar2)(param_1,param_3);
      param_1[0x48] = param_1[0x48] & 0xfffffffd;
    }
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf20 */
unsigned int F_00762710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x762710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((((byte)this[0x1b0] & 0x40) != 0) && (param_1 != (undefined *)0x0)) {
    F_0055e2a0(param_1,0x2000000,param_2);
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf21 */
unsigned int F_00762740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x762740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  
  if ((((((byte)this[0x1b0] & 0x40) != 0) && (*(uint *)(this + 0x1f8) != 0)) &&
      (param_1 != (int *)0x0)) && ((param_1[0x42] & *(uint *)(this + 0x1f8)) != 0)) {
    *(char *)((int)param_1 + 0x10e) = *(char *)((int)param_1 + 0x10e) + '\x01';
    bVar1 = F_005b8a10(param_1);
    if (bVar1 == 0) {
      ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1,1,0);
    }
  }
  return 0;
}

/* ref: FUN_00762790 */
uint F_00762790(unsigned int gen_a0)
{
  GEN_ENTER(0x762790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * this_00;
  char cVar1;
  int iVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  uint in_ecx;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int iVar6;
  uint uVar7;
  
  iVar6 = REFG(int, 0x1379860);
  iVar2 = *(int *)(REFG(int, 0x1379860) + 0x1c);
  this_00 = (uint *)(REFG(int, 0x1379860) + 0x20c);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x74))(this);
  if ((char)uVar5 != '\0') {
    return uVar5;
  }
  if (*(char *)(iVar6 + 0x21b) != '\0') {
    return uVar5;
  }
  if (*(char *)(iVar2 + 0x1e) != '\0') {
    return uVar5;
  }
  cVar1 = *(char *)(iVar6 + 0x21c);
  uVar5 = CONCAT31((int3)(uVar5 >> 8),cVar1);
  uVar7 = 0;
  if ((cVar1 != '\0') && ((*(byte *)((int)this + 0x1b0) & 4) == 0)) {
    uVar7 = 0xf;
  }
  piVar3 = *(int * PTR32 *)(iVar2 + 4);
  if ((piVar3 == (int *)0x0) && (cVar1 == '\0')) {
    uVar5 = *this_00;
    if ((uVar5 != 0xb) && (uVar5 != 6)) {
      return uVar5;
    }
    uVar5 = F_005aa060(this_00,0,0);
    return uVar5;
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) goto LAB_007628b9;
  iVar6 = iVar2;
  if (*(ushort *)(iVar2 + 0x18) < 1000) {
    uVar5 = F_0055a530(iVar2);
    if ((char)uVar5 != '\0') {
      uVar7 = 0xb;
      goto LAB_007628b9;
    }
    uVar5 = F_0055a580(iVar2);
    if ((char)uVar5 != '\0') {
      uVar7 = 0xc;
      goto LAB_007628b9;
    }
    for (iVar6 = *(int *)(iVar2 + 8); iVar6 != 0; iVar6 = *(int *)(iVar6 + 8)) {
      if (999 < *(ushort *)(iVar6 + 0x18)) goto LAB_0076282f;
    }
  }
  else {
LAB_0076282f: ;
    in_ecx = F_00559c20(iVar6);
    bVar4 = F_005613c0(in_ecx);
    uVar5 = CONCAT31(extraout_var,bVar4);
    if (bVar4 != 0) {
      uVar7 = 0xb;
      goto LAB_007628b9;
    }
    bVar4 = F_00561440(in_ecx);
    uVar5 = CONCAT31(extraout_var_00,bVar4);
    if (bVar4 != 0) {
      uVar7 = 0xc;
      goto LAB_007628b9;
    }
  }
  if ((((uVar7 == 0) || (uVar7 == 0xf)) && (iVar2 == piVar3[0x28])) &&
     (uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x74))(piVar3), (char)uVar5 == '\0')) {
    uVar7 = 6;
  }
LAB_007628b9: ;
  if ((*this_00 != uVar7) && (uVar5 = F_005aa060(this_00,0,0), uVar7 != 0)) {
    uVar5 = F_005aa060(this_00,uVar7,0);
  }
  return uVar5;
}

/* ref: FUN_00762910 */
uint F_00762910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x762910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * puVar1;
  int * piVar2;
  uint uVar3;
  undefined * puVar4;
  
  uVar3 = param_1;
  if (*(uint *)((int)this + 0x200) != param_1) {
    *(uint *)((int)this + 0x200) = param_1;
    puVar1 = REFG(undefined * PTR32, 0x1328130);
    puVar4 = REFG(undefined * PTR32, 0x132812c);
    if (param_1 == 1) {
      puVar1 = REFG(undefined * PTR32, 0x132812c);
      puVar4 = REFG(undefined * PTR32, 0x1328130);
    }
    piVar2 = (int *)F_0057f860(this,puVar1);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xfc))(piVar2);
    }
    piVar2 = (int *)F_0057f860(this,puVar4);
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xf8))(piVar2);
    }
  }
  return uVar3;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf7 */
uint F_00762980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x762980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(REFG(undefined4, 0x1379860) + 0x21d) == '\0') {
    uVar2 = *(uint *)(this + 0xec);
    uVar1 = REFG(undefined4, 0x1379860);
    if (uVar2 != 0) {
      uVar1 = F_0057f8d0(this,uVar2);
      *param_1 = uVar1;
      param_1[1] = uVar2;
    }
    return uVar1;
  }
  uVar2 = F_0057f990((undefined *)this,param_1,param_2,param_3);
  return uVar2;
}

/* ref: FUN_007629e0 */
uint F_007629e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7629e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  longlong lVar2;
  gen_size32 _Size;
  int * piVar3;
  undefined4 * puVar4;
  undefined * _Dst;
  undefined4 * puVar5;
  
  piVar3 = (int *)F_00404270();
  lVar2 = (ulonglong)*(uint *)(param_1 + 8) * 0xc;
  *(uint *)((int)this + 8) = *(uint *)(param_1 + 8);
  puVar4 = (undefined4 *)
           F_00406c00(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2,0,piVar3,0);
  puVar5 = (undefined4 *)(param_1 + 0x10);
  *(undefined4 * PTR32 *)((int)this + 4) = puVar4;
  param_1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    do {
      *puVar4 = *puVar5;
      uVar1 = *(ushort *)((int)puVar5 + 10);
      *(ushort *)(puVar4 + 1) = uVar1;
      *(undefined1 *)((int)puVar4 + 6) = *(undefined1 *)(puVar5 + 2);
      _Size = (uint)uVar1 * 4;
      _Dst = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,_Size,0x10)));
      puVar4[2] = _Dst;
      F_00c48350(_Dst,0,_Size);
      F_00c46aa0(puVar4[2],puVar5 + 4,_Size);
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 3;
      puVar5 = (undefined4 *)((int)puVar5 + puVar5[1] + 0x10);
    } while (param_1 < *(uint *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00762aa0 */
uint F_00762aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x762aa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (param_1 & 0xff0000 | param_1 >> 0x10) >> 8 | (param_1 & 0xff00 | param_1 << 0x10) << 8;
}

/* ref: FUN_00762b10 */
uint F_00762b10(unsigned int gen_a0)
{
  GEN_ENTER(0x762b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  if (*(char *)((int)this + 0xc) == '\0') {
    return 0xffffffff;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 4) + 8)));
    do {
      if (*piVar2 != 0) {
        F_00406810(*piVar2);
        *piVar2 = 0;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar1 < *(uint *)((int)this + 8));
  }
  if (*(int *)((int)this + 4) != 0) {
    F_00406b30(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  return 0;
}

/* ref: FUN_00762b80 */
uint F_00762b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x762b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if ((*(char *)((int)this + 0xc) != '\0') && (*(uint *)((int)this + 8) != 0)) {
    piVar2 = *(int * PTR32 *)((int)this + 4);
    do {
      if (*piVar2 == param_1) {
        return (uint)(*(int * PTR32 *)((int)this + 4) + uVar1 * 3);
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar1 < *(uint *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00762bc0 */
uint F_00762bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x762bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    uVar1 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      piVar2 = *(int * PTR32 *)((int)this + 4);
      while (*piVar2 != param_1) {
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 3;
        if (*(uint *)((int)this + 8) <= uVar1) {
          return 0;
        }
      }
      piVar2 = *(int * PTR32 *)((int)this + 4) + uVar1 * 3;
      if (piVar2 != (int *)0x0) {
        return CONCAT22((short)((uint)((int)(uintptr_t)piVar2) >> 0x10),(short)piVar2[1]);
      }
    }
  }
  return 0;
}

/* ref: FUN_00762c10 */
byte F_00762c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x762c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    uVar1 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      piVar2 = *(int * PTR32 *)((int)this + 4);
      while (*piVar2 != param_1) {
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 3;
        if (*(uint *)((int)this + 8) <= uVar1) {
          return 0;
        }
      }
      piVar2 = *(int * PTR32 *)((int)this + 4) + uVar1 * 3;
      if (piVar2 != (int *)0x0) {
        return *(byte *)((int)piVar2 + 6);
      }
    }
  }
  return 0;
}

/* ref: FUN_00762c60 */
uint F_00762c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x762c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int * piVar2;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    uVar1 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      piVar2 = *(int * PTR32 *)((int)this + 4);
      while (*piVar2 != param_1) {
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 3;
        if (*(uint *)((int)this + 8) <= uVar1) {
          return 0;
        }
      }
      piVar2 = *(int * PTR32 *)((int)this + 4) + uVar1 * 3;
      if ((piVar2 != (int *)0x0) && (param_2 < *(ushort *)(piVar2 + 1))) {
        uVar1 = *(uint *)(piVar2[2] + param_2 * 4);
        if ((char)param_3 != '\0') {
          uVar1 = (uVar1 << 0x10 | uVar1 & 0xff00) << 8 | (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8;
        }
        return uVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00762cf0 */
uint F_00762cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x762cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00762c60(this,param_1,param_2,param_4);
  *param_3 = uVar1;
  return uVar1;
}

/* ref: FUN_00762d10 */
uint F_00762d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x762d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    uVar2 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      piVar3 = *(int * PTR32 *)((int)this + 4);
      do {
        if (*piVar3 == param_1) {
          piVar3 = *(int * PTR32 *)((int)this + 4) + uVar2 * 3;
          if (piVar3 == (int *)0x0) {
            return 0xffffffff;
          }
          uVar2 = param_2;
          if ((char)param_3 != '\0') {
            uVar2 = (param_2 & 0xff0000 | param_2 >> 0x10) >> 8 |
                    (param_2 & 0xff00 | param_2 << 0x10) << 8;
          }
          uVar1 = 0;
          if (*(ushort *)(piVar3 + 1) == 0) {
            return 0xffffffff;
          }
          do {
            if (uVar2 == *(uint *)(piVar3[2] + (uint)uVar1 * 4)) {
              return (uint)uVar1;
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < *(ushort *)(piVar3 + 1));
          return 0xffffffff;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 3;
      } while (uVar2 < *(uint *)((int)this + 8));
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00762db0 */
uint F_00762db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x762db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    uVar2 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      piVar3 = *(int * PTR32 *)((int)this + 4);
      do {
        if (*piVar3 == param_1) {
          piVar3 = *(int * PTR32 *)((int)this + 4) + uVar2 * 3;
          if (piVar3 == (int *)0x0) {
            return 0xffffffff;
          }
          uVar2 = param_2;
          if ((char)param_3 != '\0') {
            uVar2 = (param_2 & 0xff0000 | param_2 >> 0x10) >> 8 | (param_2 & 0xff00) << 8;
          }
          uVar1 = 0;
          if (*(ushort *)(piVar3 + 1) == 0) {
            return 0xffffffff;
          }
          do {
            if ((uVar2 & 0xffffff) == (*(uint *)(piVar3[2] + (uint)uVar1 * 4) & 0xffffff)) {
              return (uint)uVar1;
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < *(ushort *)(piVar3 + 1));
          return 0xffffffff;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 3;
      } while (uVar2 < *(uint *)((int)this + 8));
    }
  }
  return 0xffffffff;
}

/* ref: Client::UI2::Agent::AgentInterface::vf3 */
uint F_00762e60(unsigned int gen_a0)
{
  GEN_ENTER(0x762e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return in_EAX;
}

/* ref: Client::UI2::Agent::AgentInterface::vf4 */
byte F_00762e90(unsigned int gen_a0)
{
  GEN_ENTER(0x762e90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 8) != 0;
}

/* ref: Client::UI2::Agent::AgentInterface::vf11 */
byte F_00762ea0(void)
{
  GEN_ENTER(0x762ea0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::UI2::Agent::AgentInterface::vf12 */
uint F_00762eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x762eb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Client::UI2::Agent::AgentInterface::vf6 */
unsigned int F_00762ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x762ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 100))(piVar1,*(undefined4 *)(this + 8),1);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentInterface::vf7 */
unsigned int F_00762ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x762ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 100))(piVar1,*(undefined4 *)(this + 8),0);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentInterface::vf10 */
uint F_00762f20(unsigned int gen_a0)
{
  GEN_ENTER(0x762f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1,*(undefined4 *)(this + 8));
    return uVar2;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentInterface::vf8 */
byte F_00762f50(unsigned int gen_a0)
{
  GEN_ENTER(0x762f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this);
  return uVar1 == 4;
}

/* ref: Client::UI2::Agent::AgentInterface::vf9 */
byte F_00762f60(unsigned int gen_a0)
{
  GEN_ENTER(0x762f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this);
  return uVar1 == 8;
}

/* ref: FUN_00762fc0 */
unsigned int F_00762fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x762fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  if (*(char *)((int)this + 4) != '\0') {
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    puVar2 = (undefined4 *)((int)this + 0xc);
    iVar1 = 0x65;
    do {
      ((code *)*(gen_code32 *)(*(int *)*puVar2 + 0x14))((int *)*puVar2,*(undefined4 *)((int)this + 8));
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    *(undefined1 *)((int)this + 5) = 0;
  }
  return 0;
}

/* ref: FUN_00763020 */
unsigned int F_00763020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x763020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  if (*(char *)((int)this + 4) != '\0') {
    puVar1 = (undefined4 *)((int)this + 0xc);
    iVar2 = 0x65;
    do {
      ((code *)*(gen_code32 *)(*(int *)*puVar1 + 0x34))((int *)*puVar1,param_1);
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00763050 */
uint F_00763050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x763050u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0xc + param_2 * 4);
}

/* ref: FUN_00763070 */
uint F_00763070(unsigned int gen_a0)
{
  GEN_ENTER(0x763070u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x28);
}

/* ref: FUN_00763080 */
uint F_00763080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x763080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)((int)this + 0xc);
  iVar3 = 0x65;
  do {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)*puVar2 + 0x38))((int *)*puVar2,param_1,param_2);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_007630b0 */
uint F_007630b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7630b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)((int)this + 0xc);
  iVar3 = 0x65;
  do {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)*puVar2 + 0x3c))((int *)*puVar2,param_1);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf2 */
unsigned int F_007630e0(void)
{
  GEN_ENTER(0x7630e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf3 */
unsigned int F_007630f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7630f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_00763120 */
unsigned int F_00763120(unsigned int gen_a0)
{
  GEN_ENTER(0x763120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x24);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,((undefined1 *)(gen_frame + 0x4)),0,0,0);
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return 0;
}

/* ref: FUN_00763160 */
unsigned int F_00763160(unsigned int gen_a0)
{
  GEN_ENTER(0x763160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x28) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x28),0);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf18 */
unsigned int F_00763190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x763190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  
  piVar1 = *(int * PTR32 *)(this + 4);
  if (this[0x2c] == (undefined1)0x0) {
    uVar3 = 0x3f;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1)));
    F_00447ac0(pvVar2,uVar3);
    return 0;
  }
  uVar3 = 0x1fffc0;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1)));
  F_00447ac0(pvVar2,uVar3);
  return 0;
}

/* ref: FUN_007631c0 */
uint F_007631c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7631c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * in_EAX = 0;
  uint uVar2;
  uint * puVar3;
  int * piVar4;
  uint uVar5;
  uint * puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  
  uVar1 = *(uint *)((int)this + 0x20);
  if ((uVar1 != 0) && (*(int *)((int)this + 8) != 0)) {
    uVar8 = 0;
    uVar2 = F_00404270();
    uVar5 = -(uint)((int)((ulonglong)uVar1 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar1 * 8);
    puVar3 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0,uVar2,uVar8);
    in_EAX = (uint *)0x0;
    if (puVar3 != (uint *)0x0) {
      puVar6 = puVar3 + 1;
      *puVar3 = uVar1;
      in_EAX = puVar6;
      while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
        *in_EAX = 0;
        in_EAX = in_EAX + 2;
      }
      if (puVar6 != (uint *)0x0) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,puVar6);
        piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
        ((code *)*(gen_code32 *)(*piVar4 + 0x5c))
                  (piVar4,*(undefined4 *)((int)this + 8),*(undefined4 *)((int)this + 0x20),puVar6);
        uVar1 = *puVar3;
        puVar6 = puVar6 + uVar1 * 2;
        while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
          puVar6 = puVar6 + -2;
          F_005a2670(puVar6);
        }
        uVar7 = F_00406b30(puVar3);
        in_EAX = (uint *)uVar7;
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf19 */
uint F_00763280(unsigned int gen_a0)
{
  GEN_ENTER(0x763280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 2;
  if (this[0x2c] == (undefined1)0x0) {
    uVar2 = 0x3f;
  }
  else {
    uVar2 = 0x1fffc0;
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4))));
  F_00447980(this_00,uVar2,uVar3);
  this[0x1d] = (undefined1)0x1;
  uVar1 = F_007631c0(this);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf20 */
uint F_007632c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7632c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  this[0x1d] = (undefined1)0x1;
  uVar1 = F_007631c0(this);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf22 */
uint F_007632d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7632d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined1 AVar1;
  byte bVar2;
  uint uVar3;
  
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4));
  bVar2 = F_0043cdc0();
  if (bVar2 == 0) {
    AVar1 = this[0x1d];
    F_005a2710(param_1,4);
    *(uint *)((int)param_1 + 4) = (uint)(AVar1 != (undefined1)0x0);
  }
  else {
    F_005a2710(param_1,4);
    *(undefined4 *)((int)param_1 + 4) = 0;
    this[0x30] = (undefined1)0x0;
  }
  AVar1 = this[0x1b];
  F_005a2710((undefined *)((int)param_1 + 8),4);
  *(uint *)((int)param_1 + 0xc) = (uint)(AVar1 != (undefined1)0x0);
  AVar1 = this[0x1c];
  F_005a2710((undefined *)((int)param_1 + 0x10),4);
  *(uint *)((int)param_1 + 0x14) = (uint)(AVar1 != (undefined1)0x0);
  AVar1 = this[0x18];
  F_005a2710((undefined *)((int)param_1 + 0x18),3);
  *(int *)((int)param_1 + 0x1c) = (int)(char)AVar1;
  AVar1 = this[0x19];
  F_005a2710((undefined *)((int)param_1 + 0x20),3);
  *(int *)((int)param_1 + 0x24) = (int)(char)AVar1;
  AVar1 = this[0x1a];
  uVar3 = F_005a2710((undefined *)((int)param_1 + 0x28),3);
  *(uint *)((int)param_1 + 0x2c) = (uint)(AVar1 != (undefined1)0x0);
  this[0x1a] = (undefined1)0x0;
  return uVar3;
}

/* ref: FUN_007633a0 */
byte F_007633a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7633a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  uVar3 = 1;
  uVar2 = 2;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  bVar1 = F_00447870(this_00,param_1,param_2,uVar2,uVar3,uVar4);
  if (*(char *)((int)this + 0x1c) == '\0') {
    *(bool *)((int)this + 0x1c) = bVar1 == 0;
  }
  return bVar1 == 0;
}

/* ref: FUN_007633e0 */
uint F_007633e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7633e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 2;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(this_00,param_1,uVar2);
  return uVar1;
}

/* ref: FUN_00763410 */
unsigned int F_00763410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x763410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00763420 */
unsigned int F_00763420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x763420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00763430 */
unsigned int F_00763430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x763430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00763440 */
unsigned int F_00763440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x763440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00763450 */
uint F_00763450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x763450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_007631c0((undefined *)((int)this + -0xc));
  return uVar1;
}

/* ref: FUN_00763480 */
uint F_00763480(unsigned int gen_a0)
{
  GEN_ENTER(0x763480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)this + 100) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 100),0);
    *(undefined4 *)((int)this + 100) = 0;
    if (*(char *)((int)this + 0x70) != '\0') {
      *(undefined1 *)((int)this + 0x70) = 0;
      uVar3 = 0x354;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
      F_0046a630(this_00,uVar3);
    }
  }
  uVar2 = F_007631c0(this);
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentConfigCharacter::vf3 */
unsigned int F_007634e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7634e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentConfigCharacter::vf20 */
uint F_00763510(unsigned int gen_a0)
{
  GEN_ENTER(0x763510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = 0;
  switch((unsigned int)(uintptr_t)(this[0x18])) {
  case (undefined1)0x0: ;
  case (undefined1)0x1: ;
  case (undefined1)0x2: ;
  case (undefined1)0x3: ;
  case (undefined1)0x4: ;
    uVar1 = 0x7c0;
    break;
  case (undefined1)0x5: ;
  case (undefined1)0x6: ;
    uVar1 = 0x1800;
    break;
  case (undefined1)0x8: ;
  case (undefined1)0x9: ;
  case (undefined1)0xa: ;
    uVar1 = 0xe000;
    break;
  case (undefined1)0xc: ;
  case (undefined1)0xd: ;
  case (undefined1)0xe: ;
    uVar1 = 0xe0000;
    break;
  case (undefined1)0xf: ;
    uVar1 = 0x100000;
  }
  uVar3 = 2;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4))));
  F_00447980(this_00,uVar1,uVar3);
  this[0x1d] = (undefined1)0x1;
  uVar2 = F_007631c0(this);
  return uVar2;
}

/* ref: FUN_007635a0 */
byte F_007635a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7635a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  byte bVar1;
  undefined * pvVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  ((uint *)(gen_frame + 0x8))[0x24] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x5d: ;
  case 0x66: ;
  case 0x6d: ;
  case 0x76: ;
  case 0x7e: ;
  case 0x86: ;
  case 0x8e: ;
    break;
  default: ;
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c) ^ (uint)(uint)(gen_frame + 0x9c));
    return 0;
  }
  if (param_2 < 6) {
    uVar7 = 1;
    uVar6 = 1;
    ((uint *)(gen_frame + 0x8))[0] = 1;
    ((uint *)(gen_frame + 0x8))[1] = 1;
    ((uint *)(gen_frame + 0x8))[2] = 1;
    ((uint *)(gen_frame + 0x8))[3] = 1;
    ((uint *)(gen_frame + 0x8))[4] = 1;
    ((uint *)(gen_frame + 0x8))[5] = 1;
    ((uint *)(gen_frame + 0x8))[6] = 1;
    ((uint *)(gen_frame + 0x8))[7] = 1;
    ((uint *)(gen_frame + 0x8))[10] = 1;
    ((uint *)(gen_frame + 0x8))[0xd] = 1;
    ((uint *)(gen_frame + 0x8))[0x14] = 1;
    ((uint *)(gen_frame + 0x8))[0x15] = 1;
    ((uint *)(gen_frame + 0x8))[0x1b] = 1;
    ((uint *)(gen_frame + 0x8))[0x20] = 1;
    ((uint *)(gen_frame + 0x8))[0x21] = 1;
    ((uint *)(gen_frame + 0x8))[0x22] = 1;
    uVar5 = 2;
    ((uint *)(gen_frame + 0x8))[8] = 0;
    ((uint *)(gen_frame + 0x8))[9] = 0;
    ((uint *)(gen_frame + 0x8))[0xb] = 0;
    ((uint *)(gen_frame + 0x8))[0xc] = 0;
    ((uint *)(gen_frame + 0x8))[0xe] = 0;
    ((uint *)(gen_frame + 0x8))[0xf] = 0;
    ((uint *)(gen_frame + 0x8))[0x10] = 0;
    ((uint *)(gen_frame + 0x8))[0x11] = 0;
    ((uint *)(gen_frame + 0x8))[0x12] = 0;
    ((uint *)(gen_frame + 0x8))[0x13] = 0;
    ((uint *)(gen_frame + 0x8))[0x16] = 0;
    ((uint *)(gen_frame + 0x8))[0x17] = 0;
    ((uint *)(gen_frame + 0x8))[0x18] = 0;
    ((uint *)(gen_frame + 0x8))[0x19] = 0;
    ((uint *)(gen_frame + 0x8))[0x1a] = 0;
    ((uint *)(gen_frame + 0x8))[0x1c] = 0;
    ((uint *)(gen_frame + 0x8))[0x1d] = 0;
    ((uint *)(gen_frame + 0x8))[0x1e] = 0;
    ((uint *)(gen_frame + 0x8))[0x1f] = 0;
    ((uint *)(gen_frame + 0x8))[0x23] = 0;
    uVar4 = ((uint *)(gen_frame + 0x8))[(int)(param_2 * 6)];
    iVar3 = param_1 + 1;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    bVar1 = F_00447870(pvVar2,iVar3,uVar4,uVar5,uVar6,uVar7);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar1 == 0;
    }
    uVar4 = ((uint *)(gen_frame + 0x8))[(int)(param_2 * 6 + 1)];
    uVar7 = 1;
    uVar6 = 1;
    uVar5 = 2;
    iVar3 = param_1 + 2;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    bVar1 = F_00447870(pvVar2,iVar3,uVar4,uVar5,uVar6,uVar7);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar1 == 0;
    }
    uVar4 = ((uint *)(gen_frame + 0x8))[(int)(param_2 * 6 + 2)];
    uVar7 = 1;
    uVar6 = 1;
    uVar5 = 2;
    iVar3 = param_1 + 3;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    bVar1 = F_00447870(pvVar2,iVar3,uVar4,uVar5,uVar6,uVar7);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar1 == 0;
    }
    uVar4 = ((uint *)(gen_frame + 0x8))[(int)(param_2 * 6 + 3)];
    uVar7 = 1;
    uVar6 = 1;
    uVar5 = 2;
    iVar3 = param_1 + 4;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    bVar1 = F_00447870(pvVar2,iVar3,uVar4,uVar5,uVar6,uVar7);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar1 == 0;
    }
    uVar4 = ((uint *)(gen_frame + 0x8))[(int)(param_2 * 6 + 4)];
    uVar7 = 1;
    uVar6 = 1;
    uVar5 = 2;
    iVar3 = param_1 + 5;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    bVar1 = F_00447870(pvVar2,iVar3,uVar4,uVar5,uVar6,uVar7);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar1 == 0;
    }
    uVar4 = ((uint *)(gen_frame + 0x8))[(int)(param_2 * 6 + 5)];
    uVar7 = 1;
    uVar6 = 1;
    uVar5 = 2;
    iVar3 = param_1 + 6;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    bVar1 = F_00447870(pvVar2,iVar3,uVar4,uVar5,uVar6,uVar7);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar1 == 0;
    }
    *(undefined1 *)((int)this + 0x1d) = 1;
  }
  F_00c47745(((uint *)(gen_frame + 0x8))[0x24] ^ (uint)(uint)(gen_frame + 0x9c));
  return 1;
}

/* ref: FUN_00763810 */
byte F_00763810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x763810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x2d0];
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  ((uint *)(gen_frame + 0xc))[0xaf] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2cc);
  if (((param_1 != 0xc3) && (param_1 != 0xce)) && (param_1 != 0xe1)) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2cc) ^ (uint)(uint)(gen_frame + 0x2cc));
    return 0;
  }
  if (param_2 < 4) {
    ((uint *)(gen_frame + 0xc))[0x8c] = 0xc5;
    ((uint *)(gen_frame + 0xc))[0x8d] = 0xc6;
    ((uint *)(gen_frame + 0xc))[0x8e] = 199;
    ((uint *)(gen_frame + 0xc))[0x8f] = 0xc9;
    ((uint *)(gen_frame + 0xc))[0x90] = 0xca;
    ((uint *)(gen_frame + 0xc))[0x91] = 0xcc;
    ((uint *)(gen_frame + 0xc))[0x92] = 0xcd;
    ((uint *)(gen_frame + 0xc))[0x93] = 0xd0;
    ((uint *)(gen_frame + 0xc))[0x94] = 0xd1;
    ((uint *)(gen_frame + 0xc))[0x95] = 0xd2;
    ((uint *)(gen_frame + 0xc))[0x96] = 0xd3;
    ((uint *)(gen_frame + 0xc))[0x97] = 0xd4;
    ((uint *)(gen_frame + 0xc))[0x98] = 0xd6;
    ((uint *)(gen_frame + 0xc))[0x99] = 0xd7;
    ((uint *)(gen_frame + 0xc))[0x9a] = 0xd8;
    ((uint *)(gen_frame + 0xc))[0x9b] = 0xd9;
    ((uint *)(gen_frame + 0xc))[0x9c] = 0xda;
    ((uint *)(gen_frame + 0xc))[0x9d] = 0xdc;
    ((uint *)(gen_frame + 0xc))[0x9e] = 0xdd;
    ((uint *)(gen_frame + 0xc))[0x9f] = 0xde;
    ((uint *)(gen_frame + 0xc))[0xa0] = 0xdf;
    ((uint *)(gen_frame + 0xc))[0xa1] = 0xe0;
    ((uint *)(gen_frame + 0xc))[0xa2] = 0xe3;
    ((uint *)(gen_frame + 0xc))[0xa3] = 0xe4;
    ((uint *)(gen_frame + 0xc))[0xa4] = 0xe6;
    ((uint *)(gen_frame + 0xc))[0xa5] = 0xe7;
    ((uint *)(gen_frame + 0xc))[0xa6] = 0xe9;
    ((uint *)(gen_frame + 0xc))[0xa7] = 0xea;
    ((uint *)(gen_frame + 0xc))[0xa8] = 0xec;
    ((uint *)(gen_frame + 0xc))[0xa9] = 0xed;
    ((uint *)(gen_frame + 0xc))[0xaa] = 0xef;
    ((uint *)(gen_frame + 0xc))[0xab] = 0xf0;
    ((uint *)(gen_frame + 0xc))[0xac] = 0xf2;
    ((uint *)(gen_frame + 0xc))[0xad] = 0xf3;
    ((uint *)(gen_frame + 0xc))[0xae] = 0xf5;
    ((uint *)(gen_frame + 0xc))[0] = 0;
    ((uint *)(gen_frame + 0xc))[1] = 0;
    ((uint *)(gen_frame + 0xc))[2] = 0;
    ((uint *)(gen_frame + 0xc))[3] = 0;
    ((uint *)(gen_frame + 0xc))[4] = 0;
    ((uint *)(gen_frame + 0xc))[5] = 0;
    ((uint *)(gen_frame + 0xc))[6] = 0;
    ((uint *)(gen_frame + 0xc))[7] = 0;
    ((uint *)(gen_frame + 0xc))[8] = 0;
    ((uint *)(gen_frame + 0xc))[9] = 0;
    ((uint *)(gen_frame + 0xc))[10] = 0;
    ((uint *)(gen_frame + 0xc))[0xb] = 0;
    ((uint *)(gen_frame + 0xc))[0xc] = 0;
    ((uint *)(gen_frame + 0xc))[0xd] = 0;
    ((uint *)(gen_frame + 0xc))[0xe] = 0;
    ((uint *)(gen_frame + 0xc))[0xf] = 0;
    ((uint *)(gen_frame + 0xc))[0x10] = 0;
    ((uint *)(gen_frame + 0xc))[0x11] = 0;
    ((uint *)(gen_frame + 0xc))[0x12] = 0;
    ((uint *)(gen_frame + 0xc))[0x13] = 0;
    ((uint *)(gen_frame + 0xc))[0x14] = 0;
    ((uint *)(gen_frame + 0xc))[0x15] = 0;
    ((uint *)(gen_frame + 0xc))[0x16] = 0;
    ((uint *)(gen_frame + 0xc))[0x17] = 0;
    ((uint *)(gen_frame + 0xc))[0x18] = 0;
    ((uint *)(gen_frame + 0xc))[0x19] = 0;
    ((uint *)(gen_frame + 0xc))[0x1a] = 0;
    ((uint *)(gen_frame + 0xc))[0x1b] = 0;
    ((uint *)(gen_frame + 0xc))[0x1c] = 0;
    ((uint *)(gen_frame + 0xc))[0x1d] = 0;
    ((uint *)(gen_frame + 0xc))[0x1e] = 0;
    ((uint *)(gen_frame + 0xc))[0x1f] = 0;
    ((uint *)(gen_frame + 0xc))[0x20] = 0;
    ((uint *)(gen_frame + 0xc))[0x21] = 0;
    ((uint *)(gen_frame + 0xc))[0x22] = 0;
    ((uint *)(gen_frame + 0xc))[0x23] = 3;
    ((uint *)(gen_frame + 0xc))[0x24] = 0;
    ((uint *)(gen_frame + 0xc))[0x25] = 2;
    ((uint *)(gen_frame + 0xc))[0x26] = 0;
    ((uint *)(gen_frame + 0xc))[0x27] = 2;
    ((uint *)(gen_frame + 0xc))[0x28] = 0;
    ((uint *)(gen_frame + 0xc))[0x29] = 2;
    ((uint *)(gen_frame + 0xc))[0x2a] = 0;
    ((uint *)(gen_frame + 0xc))[0x2b] = 0;
    ((uint *)(gen_frame + 0xc))[0x2c] = 2;
    ((uint *)(gen_frame + 0xc))[0x2d] = 0;
    ((uint *)(gen_frame + 0xc))[0x2e] = 2;
    ((uint *)(gen_frame + 0xc))[0x2f] = 1;
    ((uint *)(gen_frame + 0xc))[0x30] = 0;
    ((uint *)(gen_frame + 0xc))[0x31] = 2;
    ((uint *)(gen_frame + 0xc))[0x32] = 1;
    ((uint *)(gen_frame + 0xc))[0x33] = 2;
    ((uint *)(gen_frame + 0xc))[0x34] = 0;
    ((uint *)(gen_frame + 0xc))[0x35] = 0;
    ((uint *)(gen_frame + 0xc))[0x36] = 2;
    ((uint *)(gen_frame + 0xc))[0x37] = 2;
    ((uint *)(gen_frame + 0xc))[0x38] = 2;
    ((uint *)(gen_frame + 0xc))[0x39] = 0;
    ((uint *)(gen_frame + 0xc))[0x3a] = 1;
    ((uint *)(gen_frame + 0xc))[0x3b] = 0;
    ((uint *)(gen_frame + 0xc))[0x3c] = 1;
    ((uint *)(gen_frame + 0xc))[0x3d] = 0;
    ((uint *)(gen_frame + 0xc))[0x3e] = 1;
    ((uint *)(gen_frame + 0xc))[0x3f] = 0;
    ((uint *)(gen_frame + 0xc))[0x40] = 1;
    ((uint *)(gen_frame + 0xc))[0x41] = 0;
    ((uint *)(gen_frame + 0xc))[0x42] = 1;
    ((uint *)(gen_frame + 0xc))[0x43] = 0;
    ((uint *)(gen_frame + 0xc))[0x44] = 1;
    ((uint *)(gen_frame + 0xc))[0x45] = 0;
    ((uint *)(gen_frame + 0xc))[0x46] = 3;
    ((uint *)(gen_frame + 0xc))[0x47] = 0;
    ((uint *)(gen_frame + 0xc))[0x48] = 2;
    ((uint *)(gen_frame + 0xc))[0x49] = 1;
    ((uint *)(gen_frame + 0xc))[0x4a] = 2;
    ((uint *)(gen_frame + 0xc))[0x4b] = 1;
    ((uint *)(gen_frame + 0xc))[0x4c] = 2;
    ((uint *)(gen_frame + 0xc))[0x4d] = 1;
    ((uint *)(gen_frame + 0xc))[0x4e] = 0;
    ((uint *)(gen_frame + 0xc))[0x4f] = 2;
    ((uint *)(gen_frame + 0xc))[0x50] = 2;
    ((uint *)(gen_frame + 0xc))[0x51] = 2;
    ((uint *)(gen_frame + 0xc))[0x52] = 2;
    ((uint *)(gen_frame + 0xc))[0x53] = 0;
    ((uint *)(gen_frame + 0xc))[0x54] = 2;
    ((uint *)(gen_frame + 0xc))[0x55] = 2;
    ((uint *)(gen_frame + 0xc))[0x56] = 2;
    ((uint *)(gen_frame + 0xc))[0x57] = 2;
    ((uint *)(gen_frame + 0xc))[0x58] = 0;
    ((uint *)(gen_frame + 0xc))[0x59] = 2;
    ((uint *)(gen_frame + 0xc))[0x5a] = 2;
    ((uint *)(gen_frame + 0xc))[0x5b] = 2;
    ((uint *)(gen_frame + 0xc))[0x5c] = 1;
    ((uint *)(gen_frame + 0xc))[0x5d] = 1;
    ((uint *)(gen_frame + 0xc))[0x5e] = 0;
    ((uint *)(gen_frame + 0xc))[0x5f] = 1;
    ((uint *)(gen_frame + 0xc))[0x60] = 1;
    ((uint *)(gen_frame + 0xc))[0x61] = 1;
    ((uint *)(gen_frame + 0xc))[0x62] = 0;
    ((uint *)(gen_frame + 0xc))[99] = 1;
    ((uint *)(gen_frame + 0xc))[100] = 0;
    ((uint *)(gen_frame + 0xc))[0x65] = 1;
    ((uint *)(gen_frame + 0xc))[0x66] = 0;
    ((uint *)(gen_frame + 0xc))[0x67] = 1;
    ((uint *)(gen_frame + 0xc))[0x68] = 1;
    ((uint *)(gen_frame + 0xc))[0x69] = 3;
    ((uint *)(gen_frame + 0xc))[0x6a] = 0;
    ((uint *)(gen_frame + 0xc))[0x6b] = 3;
    ((uint *)(gen_frame + 0xc))[0x6c] = 3;
    ((uint *)(gen_frame + 0xc))[0x6d] = 3;
    ((uint *)(gen_frame + 0xc))[0x6e] = 3;
    ((uint *)(gen_frame + 0xc))[0x6f] = 3;
    ((uint *)(gen_frame + 0xc))[0x70] = 3;
    ((uint *)(gen_frame + 0xc))[0x71] = 0;
    ((uint *)(gen_frame + 0xc))[0x72] = 3;
    ((uint *)(gen_frame + 0xc))[0x73] = 3;
    ((uint *)(gen_frame + 0xc))[0x74] = 3;
    ((uint *)(gen_frame + 0xc))[0x75] = 3;
    ((uint *)(gen_frame + 0xc))[0x76] = 0;
    ((uint *)(gen_frame + 0xc))[0x77] = 3;
    ((uint *)(gen_frame + 0xc))[0x78] = 3;
    ((uint *)(gen_frame + 0xc))[0x79] = 3;
    ((uint *)(gen_frame + 0xc))[0x7a] = 3;
    ((uint *)(gen_frame + 0xc))[0x7c] = 3;
    ((uint *)(gen_frame + 0xc))[0x7d] = 3;
    ((uint *)(gen_frame + 0xc))[0x7e] = 3;
    (*(uint * PTR32 *)(gen_frame + 0x4)) = ((uint *)(gen_frame + 0xc)) + param_2 * 0x23;
    ((uint *)(gen_frame + 0xc))[0x7b] = 0;
    ((uint *)(gen_frame + 0xc))[0x7f] = 2;
    ((uint *)(gen_frame + 0xc))[0x80] = 2;
    ((uint *)(gen_frame + 0xc))[0x81] = 2;
    ((uint *)(gen_frame + 0xc))[0x82] = 2;
    ((uint *)(gen_frame + 0xc))[0x83] = 2;
    ((uint *)(gen_frame + 0xc))[0x84] = 2;
    ((uint *)(gen_frame + 0xc))[0x85] = 2;
    ((uint *)(gen_frame + 0xc))[0x86] = 2;
    ((uint *)(gen_frame + 0xc))[0x87] = 2;
    ((uint *)(gen_frame + 0xc))[0x88] = 2;
    ((uint *)(gen_frame + 0xc))[0x89] = 2;
    ((uint *)(gen_frame + 0xc))[0x8a] = 2;
    ((uint *)(gen_frame + 0xc))[0x8b] = 2;
    (*(int *)(gen_frame + 0x0)) = 0;
    do {
      uVar3 = *(*(uint * PTR32 *)(gen_frame + 0x4));
      uVar6 = 1;
      uVar5 = 1;
      uVar4 = 2;
      uVar2 = ((uint *)(gen_frame + 0xc))[(int)((*(int *)(gen_frame + 0x0)) + 0x8c)];
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
      bVar1 = F_00447870(this_00,uVar2,uVar3,uVar4,uVar5,uVar6);
      if (*(char *)((int)this + 0x1c) == '\0') {
        *(bool *)((int)this + 0x1c) = bVar1 == 0;
      }
      (*(uint * PTR32 *)(gen_frame + 0x4)) = (*(uint * PTR32 *)(gen_frame + 0x4)) + 1;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
    } while ((*(int *)(gen_frame + 0x0)) < 0x23);
    *(undefined1 *)((int)this + 0x1d) = 1;
  }
  F_00c47745(((uint *)(gen_frame + 0xc))[0xaf] ^ (uint)(uint)(gen_frame + 0x2cc));
  return 1;
}

/* ref: FUN_00763d50 */
uint F_00763d50(unsigned int gen_a0)
{
  GEN_ENTER(0x763d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x270];
  undefined * this_00;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  ((uint *)(gen_frame + 0x10))[0x96] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x26c);
  ((uint *)(gen_frame + 0x10))[0x78] = 0xc5;
  ((uint *)(gen_frame + 0x10))[0x79] = 0xc6;
  ((uint *)(gen_frame + 0x10))[0x7a] = 199;
  ((uint *)(gen_frame + 0x10))[0x7b] = 0xc9;
  ((uint *)(gen_frame + 0x10))[0x7c] = 0xca;
  ((uint *)(gen_frame + 0x10))[0x7d] = 0xcc;
  ((uint *)(gen_frame + 0x10))[0x7e] = 0xcd;
  ((uint *)(gen_frame + 0x10))[0x7f] = 0xd0;
  ((uint *)(gen_frame + 0x10))[0x80] = 0xd1;
  ((uint *)(gen_frame + 0x10))[0x81] = 0xd2;
  ((uint *)(gen_frame + 0x10))[0x82] = 0xd3;
  ((uint *)(gen_frame + 0x10))[0x83] = 0xd4;
  ((uint *)(gen_frame + 0x10))[0x84] = 0xdc;
  ((uint *)(gen_frame + 0x10))[0x85] = 0xdd;
  ((uint *)(gen_frame + 0x10))[0x86] = 0xde;
  ((uint *)(gen_frame + 0x10))[0x87] = 0xdf;
  ((uint *)(gen_frame + 0x10))[0x88] = 0xe0;
  ((uint *)(gen_frame + 0x10))[0x89] = 0xe3;
  ((uint *)(gen_frame + 0x10))[0x8a] = 0xe4;
  ((uint *)(gen_frame + 0x10))[0x8b] = 0xe6;
  ((uint *)(gen_frame + 0x10))[0x8c] = 0xe7;
  ((uint *)(gen_frame + 0x10))[0x8d] = 0xe9;
  ((uint *)(gen_frame + 0x10))[0x8e] = 0xea;
  ((uint *)(gen_frame + 0x10))[0x8f] = 0xec;
  ((uint *)(gen_frame + 0x10))[0x90] = 0xed;
  ((uint *)(gen_frame + 0x10))[0x91] = 0xef;
  ((uint *)(gen_frame + 0x10))[0x92] = 0xf0;
  ((uint *)(gen_frame + 0x10))[0x93] = 0xf2;
  ((uint *)(gen_frame + 0x10))[0x94] = 0xf3;
  ((uint *)(gen_frame + 0x10))[0x95] = 0xf5;
  ((uint *)(gen_frame + 0x10))[0] = 0;
  ((uint *)(gen_frame + 0x10))[1] = 0;
  ((uint *)(gen_frame + 0x10))[2] = 0;
  ((uint *)(gen_frame + 0x10))[3] = 0;
  ((uint *)(gen_frame + 0x10))[4] = 0;
  ((uint *)(gen_frame + 0x10))[5] = 0;
  ((uint *)(gen_frame + 0x10))[6] = 0;
  ((uint *)(gen_frame + 0x10))[7] = 0;
  ((uint *)(gen_frame + 0x10))[8] = 0;
  ((uint *)(gen_frame + 0x10))[9] = 0;
  ((uint *)(gen_frame + 0x10))[10] = 0;
  ((uint *)(gen_frame + 0x10))[0xb] = 0;
  ((uint *)(gen_frame + 0x10))[0xc] = 0;
  ((uint *)(gen_frame + 0x10))[0xd] = 0;
  ((uint *)(gen_frame + 0x10))[0xe] = 0;
  ((uint *)(gen_frame + 0x10))[0xf] = 0;
  ((uint *)(gen_frame + 0x10))[0x10] = 0;
  ((uint *)(gen_frame + 0x10))[0x11] = 0;
  ((uint *)(gen_frame + 0x10))[0x12] = 0;
  ((uint *)(gen_frame + 0x10))[0x13] = 0;
  ((uint *)(gen_frame + 0x10))[0x14] = 0;
  ((uint *)(gen_frame + 0x10))[0x15] = 0;
  ((uint *)(gen_frame + 0x10))[0x16] = 0;
  ((uint *)(gen_frame + 0x10))[0x17] = 0;
  ((uint *)(gen_frame + 0x10))[0x18] = 0;
  ((uint *)(gen_frame + 0x10))[0x19] = 0;
  ((uint *)(gen_frame + 0x10))[0x1a] = 0;
  ((uint *)(gen_frame + 0x10))[0x1b] = 0;
  ((uint *)(gen_frame + 0x10))[0x1c] = 0;
  ((uint *)(gen_frame + 0x10))[0x1d] = 0;
  ((uint *)(gen_frame + 0x10))[0x1e] = 3;
  ((uint *)(gen_frame + 0x10))[0x1f] = 0;
  ((uint *)(gen_frame + 0x10))[0x20] = 2;
  ((uint *)(gen_frame + 0x10))[0x21] = 0;
  ((uint *)(gen_frame + 0x10))[0x22] = 2;
  ((uint *)(gen_frame + 0x10))[0x23] = 0;
  ((uint *)(gen_frame + 0x10))[0x24] = 2;
  ((uint *)(gen_frame + 0x10))[0x25] = 0;
  ((uint *)(gen_frame + 0x10))[0x26] = 0;
  ((uint *)(gen_frame + 0x10))[0x27] = 2;
  ((uint *)(gen_frame + 0x10))[0x28] = 0;
  ((uint *)(gen_frame + 0x10))[0x29] = 2;
  ((uint *)(gen_frame + 0x10))[0x2a] = 0;
  ((uint *)(gen_frame + 0x10))[0x2b] = 0;
  ((uint *)(gen_frame + 0x10))[0x3c] = 3;
  ((uint *)(gen_frame + 0x10))[0x5a] = 3;
  ((uint *)(gen_frame + 0x10))[0x5c] = 3;
  ((uint *)(gen_frame + 0x10))[0x5d] = 3;
  ((uint *)(gen_frame + 0x10))[0x5e] = 3;
  ((uint *)(gen_frame + 0x10))[0x5f] = 3;
  ((uint *)(gen_frame + 0x10))[0x60] = 3;
  ((uint *)(gen_frame + 0x10))[0x61] = 3;
  ((uint *)(gen_frame + 0x10))[99] = 3;
  ((uint *)(gen_frame + 0x10))[100] = 3;
  ((uint *)(gen_frame + 0x10))[0x65] = 3;
  ((uint *)(gen_frame + 0x10))[0x66] = 3;
  ((uint *)(gen_frame + 0x10))[0x68] = 3;
  ((uint *)(gen_frame + 0x10))[0x69] = 3;
  ((uint *)(gen_frame + 0x10))[0x6a] = 3;
  (*(uint * PTR32 *)(gen_frame + 0x8)) = ((uint *)(gen_frame + 0x10));
  ((uint *)(gen_frame + 0x10))[0x2c] = 2;
  ((uint *)(gen_frame + 0x10))[0x2d] = 2;
  ((uint *)(gen_frame + 0x10))[0x2e] = 2;
  ((uint *)(gen_frame + 0x10))[0x2f] = 0;
  ((uint *)(gen_frame + 0x10))[0x30] = 1;
  ((uint *)(gen_frame + 0x10))[0x31] = 0;
  ((uint *)(gen_frame + 0x10))[0x32] = 1;
  ((uint *)(gen_frame + 0x10))[0x33] = 0;
  ((uint *)(gen_frame + 0x10))[0x34] = 1;
  ((uint *)(gen_frame + 0x10))[0x35] = 0;
  ((uint *)(gen_frame + 0x10))[0x36] = 1;
  ((uint *)(gen_frame + 0x10))[0x37] = 0;
  ((uint *)(gen_frame + 0x10))[0x38] = 1;
  ((uint *)(gen_frame + 0x10))[0x39] = 0;
  ((uint *)(gen_frame + 0x10))[0x3a] = 1;
  ((uint *)(gen_frame + 0x10))[0x3b] = 0;
  ((uint *)(gen_frame + 0x10))[0x3d] = 0;
  ((uint *)(gen_frame + 0x10))[0x3e] = 2;
  ((uint *)(gen_frame + 0x10))[0x3f] = 1;
  ((uint *)(gen_frame + 0x10))[0x40] = 2;
  ((uint *)(gen_frame + 0x10))[0x41] = 1;
  ((uint *)(gen_frame + 0x10))[0x42] = 2;
  ((uint *)(gen_frame + 0x10))[0x43] = 1;
  ((uint *)(gen_frame + 0x10))[0x44] = 0;
  ((uint *)(gen_frame + 0x10))[0x45] = 2;
  ((uint *)(gen_frame + 0x10))[0x46] = 2;
  ((uint *)(gen_frame + 0x10))[0x47] = 2;
  ((uint *)(gen_frame + 0x10))[0x48] = 2;
  ((uint *)(gen_frame + 0x10))[0x49] = 0;
  ((uint *)(gen_frame + 0x10))[0x4a] = 2;
  ((uint *)(gen_frame + 0x10))[0x4b] = 2;
  ((uint *)(gen_frame + 0x10))[0x4c] = 2;
  ((uint *)(gen_frame + 0x10))[0x4d] = 1;
  ((uint *)(gen_frame + 0x10))[0x4e] = 1;
  ((uint *)(gen_frame + 0x10))[0x4f] = 0;
  ((uint *)(gen_frame + 0x10))[0x50] = 1;
  ((uint *)(gen_frame + 0x10))[0x51] = 1;
  ((uint *)(gen_frame + 0x10))[0x52] = 1;
  ((uint *)(gen_frame + 0x10))[0x53] = 0;
  ((uint *)(gen_frame + 0x10))[0x54] = 1;
  ((uint *)(gen_frame + 0x10))[0x55] = 0;
  ((uint *)(gen_frame + 0x10))[0x56] = 1;
  ((uint *)(gen_frame + 0x10))[0x57] = 0;
  ((uint *)(gen_frame + 0x10))[0x58] = 1;
  ((uint *)(gen_frame + 0x10))[0x59] = 1;
  ((uint *)(gen_frame + 0x10))[0x5b] = 0;
  ((uint *)(gen_frame + 0x10))[0x62] = 0;
  ((uint *)(gen_frame + 0x10))[0x67] = 0;
  ((uint *)(gen_frame + 0x10))[0x6b] = 2;
  ((uint *)(gen_frame + 0x10))[0x6c] = 2;
  ((uint *)(gen_frame + 0x10))[0x6d] = 2;
  ((uint *)(gen_frame + 0x10))[0x6e] = 2;
  ((uint *)(gen_frame + 0x10))[0x6f] = 2;
  ((uint *)(gen_frame + 0x10))[0x70] = 2;
  ((uint *)(gen_frame + 0x10))[0x71] = 2;
  ((uint *)(gen_frame + 0x10))[0x72] = 2;
  ((uint *)(gen_frame + 0x10))[0x73] = 2;
  ((uint *)(gen_frame + 0x10))[0x74] = 2;
  ((uint *)(gen_frame + 0x10))[0x75] = 2;
  ((uint *)(gen_frame + 0x10))[0x76] = 2;
  ((uint *)(gen_frame + 0x10))[0x77] = 2;
  (*(uint *)(gen_frame + 0xc)) = 0;
  do {
    iVar2 = 0;
    (*(uint * PTR32 *)(gen_frame + 0x4)) = (*(uint * PTR32 *)(gen_frame + 0x8));
    do {
      uVar1 = ((uint *)(gen_frame + 0x10))[(int)(iVar2 + 0x78)];
      uVar3 = 2;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
      uVar1 = F_0043c920(this_00,uVar1,uVar3);
      if (uVar1 != *(*(uint * PTR32 *)(gen_frame + 0x4))) break;
      (*(uint * PTR32 *)(gen_frame + 0x4)) = (*(uint * PTR32 *)(gen_frame + 0x4)) + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1e);
    uVar1 = (*(uint *)(gen_frame + 0xc));
    if (iVar2 == 0x1e) goto LAB_00764197;
    (*(uint * PTR32 *)(gen_frame + 0x8)) = (*(uint * PTR32 *)(gen_frame + 0x8)) + 0x1e;
    (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
  } while ((int)(*(uint *)(gen_frame + 0xc)) < 4);
  uVar1 = 4;
LAB_00764197: ;
  F_00c47745(((uint *)(gen_frame + 0x10))[0x96] ^ (uint)(uint)(gen_frame + 0x26c));
  return uVar1;
}

/* ref: FUN_007641b0 */
uint F_007641b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7641b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  if (param_1 == 0) {
    if (param_2 == 0) {
      if (param_3 == 0) {
        if (((param_4 != 0) && (param_5 == 0)) && (param_6 == 0)) {
          return 4;
        }
      }
      else if (param_4 != 0) {
        if (param_5 == 0) {
          if (param_6 == 0) {
            return 3;
          }
        }
        else if (param_6 == 0) {
          return 5;
        }
      }
    }
    else if (((param_3 == 0) && (param_4 == 0)) && ((param_5 == 0 && (param_6 == 0)))) {
      return 2;
    }
  }
  else if (param_2 != 0) {
    if (param_3 != 0) {
      if (((param_4 != 0) && (param_5 != 0)) && (param_6 != 0)) {
        return 0;
      }
      if (param_3 != 0) {
        return 6;
      }
    }
    if (((param_4 == 0) && (param_5 != 0)) && (param_6 == 0)) {
      return 1;
    }
  }
  return 6;
}

/* ref: FUN_00764270 */
uint F_00764270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x764270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_007641b0(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_007642a0 */
unsigned int F_007642a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7642a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x58) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x58),0);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  return 0;
}

/* ref: FUN_007642d0 */
uint F_007642d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7642d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 >> 0x10 & 0xff | (param_1 & 0xff) << 0x10 | param_1 & 0xff00ff00;
}

/* ref: FUN_00764300 */
uint F_00764300(unsigned int gen_a0)
{
  GEN_ENTER(0x764300u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 >> 0x10 & 0xff | (param_1 & 0xff) << 0x10 | param_1 & 0xff00ff00;
}

/* ref: FUN_00764330 */
uint F_00764330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x764330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0x44;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x45;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70),3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar5 = 2;
  uVar4 = 0x46;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x78),3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x47;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80),3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar5 = 2;
  uVar4 = 0x48;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88),3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x49;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90),3);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar5 = 2;
  uVar4 = 0x4a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98),3);
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x4b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0),3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x4c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8),3);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar5 = 2;
  uVar4 = 0x4d;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0),3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x4e;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb8),3);
  uVar5 = 2;
  *(uint *)(param_1 + 0xbc) = uVar2;
  uVar4 = 0x4f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xc0),3);
  *(uint *)(param_1 + 0xc4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x50;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 200),3);
  *(uint *)(param_1 + 0xcc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x51;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd0),3);
  *(uint *)(param_1 + 0xd4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x52;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd8),3);
  *(uint *)(param_1 + 0xdc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x53;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe0),3);
  *(uint *)(param_1 + 0xe4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x54;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe8),3);
  *(uint *)(param_1 + 0xec) = uVar2;
  uVar5 = 2;
  uVar4 = 0x55;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf0),3);
  *(uint *)(param_1 + 0xf4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x56;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf8),3);
  *(uint *)(param_1 + 0xfc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x57;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0x100),3);
  *(uint *)(param_1 + 0x104) = uVar2;
  return uVar3;
}

/* ref: FUN_007646d0 */
uint F_007646d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7646d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar9 = 2;
  uVar8 = 0x58;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x59;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x70),3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar9 = 2;
  uVar8 = 0x5a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x78),3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x5b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x80),3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar9 = 2;
  uVar8 = 0x5c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x88),3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar9 = 2;
  uVar8 = 99;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x62;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x61;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x60;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x5f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x5e;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x90),3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar9 = 2;
  uVar8 = 0x5e;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x98),3);
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x5f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xa0),3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x60;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xa8),3);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar9 = 2;
  uVar8 = 0x61;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xb0),3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x62;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xb8),3);
  *(uint *)(param_1 + 0xbc) = uVar2;
  uVar9 = 2;
  uVar8 = 99;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xc0),3);
  *(uint *)(param_1 + 0xc4) = uVar2;
  uVar9 = 2;
  uVar8 = 100;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar3 = F_005a2710((undefined *)(param_1 + 200),3);
  *(uint *)(param_1 + 0xcc) = uVar2;
  return uVar3;
}

/* ref: FUN_007649c0 */
uint F_007649c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7649c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar9 = 2;
  uVar8 = 0x65;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x74;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xe0),3);
  *(uint *)(param_1 + 0xe4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x75;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xe8),3);
  *(uint *)(param_1 + 0xec) = uVar2;
  uVar9 = 2;
  uVar8 = 0x7d;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x128),3);
  *(uint *)(param_1 + 300) = uVar2;
  uVar9 = 2;
  uVar8 = 0x85;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x168),3);
  *(uint *)(param_1 + 0x16c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x8d;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1a8),3);
  *(uint *)(param_1 + 0x1ac) = uVar2;
  uVar9 = 2;
  uVar8 = 0x67;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x78),3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x68;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x80),3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar9 = 2;
  uVar8 = 0x69;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x88),3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x6a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x90),3);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar9 = 2;
  uVar8 = 0x6b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x98),3);
  uVar9 = 2;
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar8 = 0x6c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xa0),3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x6e;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xb0),3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x6f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xb8),3);
  *(uint *)(param_1 + 0xbc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x70;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xc0),3);
  *(uint *)(param_1 + 0xc4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x71;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 200),3);
  *(uint *)(param_1 + 0xcc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x72;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xd0),3);
  *(uint *)(param_1 + 0xd4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x73;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xd8),3);
  *(uint *)(param_1 + 0xdc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x77;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xf8),3);
  *(uint *)(param_1 + 0xfc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x78;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x100),3);
  *(uint *)(param_1 + 0x104) = uVar2;
  uVar9 = 2;
  uVar8 = 0x79;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x108),3);
  *(uint *)(param_1 + 0x10c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x7a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x110),3);
  *(uint *)(param_1 + 0x114) = uVar2;
  uVar9 = 2;
  uVar8 = 0x7b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x118),3);
  *(uint *)(param_1 + 0x11c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x7c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x120),3);
  *(uint *)(param_1 + 0x124) = uVar2;
  uVar9 = 2;
  uVar8 = 0x7f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x138),3);
  *(uint *)(param_1 + 0x13c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x80;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x140),3);
  *(uint *)(param_1 + 0x144) = uVar2;
  uVar9 = 2;
  uVar8 = 0x81;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x148),3);
  *(uint *)(param_1 + 0x14c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x82;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x150),3);
  *(uint *)(param_1 + 0x154) = uVar2;
  uVar9 = 2;
  uVar8 = 0x83;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x158),3);
  *(uint *)(param_1 + 0x15c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x84;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x160),3);
  *(uint *)(param_1 + 0x164) = uVar2;
  uVar9 = 2;
  uVar8 = 0x87;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x178),3);
  *(uint *)(param_1 + 0x17c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x88;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x180),3);
  *(uint *)(param_1 + 0x184) = uVar2;
  uVar9 = 2;
  uVar8 = 0x89;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x188),3);
  *(uint *)(param_1 + 0x18c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x8a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 400),3);
  *(uint *)(param_1 + 0x194) = uVar2;
  uVar9 = 2;
  uVar8 = 0x8b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x198),3);
  *(uint *)(param_1 + 0x19c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x8c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1a0),3);
  *(uint *)(param_1 + 0x1a4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x8f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1b8),3);
  *(uint *)(param_1 + 0x1bc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x90;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1c0),3);
  *(uint *)(param_1 + 0x1c4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x91;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1c8),3);
  *(uint *)(param_1 + 0x1cc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x92;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1d0),3);
  *(uint *)(param_1 + 0x1d4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x93;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1d8),3);
  *(uint *)(param_1 + 0x1dc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x94;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1e0),3);
  *(uint *)(param_1 + 0x1e4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x6c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x6b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x6a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x69;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x68;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x67;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x70),3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar9 = 2;
  uVar8 = 0x73;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x72;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x71;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x70;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x6f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x6e;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xa8),3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar9 = 2;
  uVar8 = 0x7c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x7b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x7a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x79;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x78;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x77;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xf0),3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0xf4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x84;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x83;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x82;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x81;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x80;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x7f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x130),3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0x134) = uVar2;
  uVar9 = 2;
  uVar8 = 0x8c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x8b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x8a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x89;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x88;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x87;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x170),3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0x174) = uVar2;
  uVar9 = 2;
  uVar8 = 0x94;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x93;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x92;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x91;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x90;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x8f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1b0),3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0x1b4) = uVar2;
  return uVar2;
}

/* ref: FUN_00765650 */
uint F_00765650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x765650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0x95;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x96;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70),3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar5 = 2;
  uVar4 = 0x97;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80),3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar5 = 2;
  uVar4 = 0x98;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88),3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x99;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90),3);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar5 = 2;
  uVar4 = 0x9a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98),3);
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x9b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0),3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x9c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8),3);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar5 = 2;
  uVar4 = 0x9d;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0),3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x9f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb8),3);
  *(uint *)(param_1 + 0xbc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x9e;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xc0),3);
  uVar5 = 2;
  *(uint *)(param_1 + 0xc4) = uVar2;
  uVar4 = 0xa0;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 200),3);
  *(uint *)(param_1 + 0xcc) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa1;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd0),3);
  *(uint *)(param_1 + 0xd4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa2;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd8),3);
  *(uint *)(param_1 + 0xdc) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa3;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xe0),3);
  *(uint *)(param_1 + 0xe4) = uVar2;
  return uVar3;
}

/* ref: FUN_00765940 */
uint F_00765940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x765940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0xa4;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa5;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0x70),3);
  *(uint *)(param_1 + 0x74) = uVar2;
  return uVar3;
}

/* ref: FUN_007659b0 */
uint F_007659b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7659b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0xa6;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa7;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70),3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa8;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x78),3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa9;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80),3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar5 = 2;
  uVar4 = 0xaa;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88),3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xab;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90),3);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar5 = 2;
  uVar4 = 0xac;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98),3);
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xad;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0),3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xae;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8),3);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar5 = 2;
  uVar4 = 0xaf;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0),3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb0;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb8),3);
  uVar5 = 2;
  *(uint *)(param_1 + 0xbc) = uVar2;
  uVar4 = 0xb1;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xc0),3);
  *(uint *)(param_1 + 0xc4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb2;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 200),3);
  *(uint *)(param_1 + 0xcc) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb3;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd0),3);
  *(uint *)(param_1 + 0xd4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb4;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd8),3);
  *(uint *)(param_1 + 0xdc) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb5;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe0),3);
  *(uint *)(param_1 + 0xe4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb6;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe8),3);
  *(uint *)(param_1 + 0xec) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb7;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf0),3);
  *(uint *)(param_1 + 0xf4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb8;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf8),3);
  *(uint *)(param_1 + 0xfc) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb9;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x100),3);
  *(uint *)(param_1 + 0x104) = uVar2;
  uVar5 = 2;
  uVar4 = 0xba;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x108),3);
  *(uint *)(param_1 + 0x10c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xbb;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x110),3);
  *(uint *)(param_1 + 0x114) = uVar2;
  uVar5 = 2;
  uVar4 = 0xbc;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x118),3);
  *(uint *)(param_1 + 0x11c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xbd;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x120),3);
  *(uint *)(param_1 + 0x124) = uVar2;
  uVar5 = 2;
  uVar4 = 0xbe;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x128),3);
  *(uint *)(param_1 + 300) = uVar2;
  uVar5 = 2;
  uVar4 = 0xbf;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0x130),3);
  *(uint *)(param_1 + 0x134) = uVar2;
  return uVar3;
}

/* ref: FUN_00765eb0 */
uint F_00765eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x765eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0xc0;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xc1;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70),3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar5 = 2;
  uVar4 = 0xc2;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0x78),3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  return uVar3;
}

/* ref: FUN_00765f50 */
uint F_00765f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x765f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = F_00763d50(this);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xc4;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70),4);
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar5 = 2;
  uVar4 = 0xc5;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x78),3);
  *(uint *)(param_1 + 0x7c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xc6;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80),3);
  *(uint *)(param_1 + 0x84) = uVar1;
  uVar5 = 2;
  uVar4 = 199;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88),3);
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar5 = 2;
  uVar4 = 200;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90),4);
  *(uint *)(param_1 + 0x94) = uVar1;
  uVar5 = 2;
  uVar4 = 0xc9;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98),3);
  *(uint *)(param_1 + 0x9c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xca;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0),3);
  *(uint *)(param_1 + 0xa4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xcb;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8),4);
  *(uint *)(param_1 + 0xac) = uVar1;
  uVar5 = 2;
  uVar4 = 0xcc;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0),3);
  *(uint *)(param_1 + 0xb4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xcd;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xb8),3);
  *(uint *)(param_1 + 0xbc) = uVar1;
  return uVar3;
}

/* ref: FUN_00766160 */
uint F_00766160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x766160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = F_00763d50(this);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xcf;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70),4);
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd0;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x78),3);
  *(uint *)(param_1 + 0x7c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd1;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80),3);
  *(uint *)(param_1 + 0x84) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd2;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88),3);
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd3;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90),3);
  *(uint *)(param_1 + 0x94) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd4;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98),3);
  *(uint *)(param_1 + 0x9c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd5;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0),4);
  *(uint *)(param_1 + 0xa4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd6;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8),3);
  *(uint *)(param_1 + 0xac) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd7;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0),3);
  *(uint *)(param_1 + 0xb4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd8;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb8),3);
  *(uint *)(param_1 + 0xbc) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd9;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xc0),3);
  *(uint *)(param_1 + 0xc4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xda;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 200),3);
  *(uint *)(param_1 + 0xcc) = uVar1;
  uVar5 = 2;
  uVar4 = 0xdb;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd0),4);
  *(uint *)(param_1 + 0xd4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xdc;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd8),3);
  *(uint *)(param_1 + 0xdc) = uVar1;
  uVar5 = 2;
  uVar4 = 0xdd;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe0),3);
  *(uint *)(param_1 + 0xe4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xde;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe8),3);
  *(uint *)(param_1 + 0xec) = uVar1;
  uVar5 = 2;
  uVar4 = 0xdf;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf0),3);
  *(uint *)(param_1 + 0xf4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xe0;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xf8),3);
  *(uint *)(param_1 + 0xfc) = uVar1;
  return uVar3;
}

